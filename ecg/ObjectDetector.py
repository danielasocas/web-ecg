
import matplotlib
matplotlib.use('qt5agg')
import scipy.interpolate as spi
import matplotlib.pyplot as plt
import numpy as np
import re
from os.path import isdir, exists
from os import listdir
from sklearn.cluster import AgglomerativeClustering, KMeans, dbscan
from sklearn.neighbors import kneighbors_graph
from skimage import restoration
from skimage.draw import polygon, polygon_perimeter, circle
from skimage.color import rgb2gray, label2rgb
from skimage.io import imread, imsave, imread_collection, imshow
from skimage.filters import threshold_otsu
from skimage.morphology import square, binary_closing, closing, dilation
from skimage.transform import resize
from skimage import measure
from skimage.util import img_as_uint, img_as_ubyte, img_as_float
from operator import mul
from functools import reduce
import argparse

parser = argparse.ArgumentParser()
parser.add_argument('file_path', help = "path to the file or directory to be oppened the saved labels MUST be in this directory")
parser.add_argument('-i', '--imagepath', help= "Save the object detected image to a path")
parser.add_argument('-imd', '--imagedir', help = "Directory where to put the labeled images" )
parser.add_argument('-p', '--patch', help = "Patch regions considered to be noise")
parser.add_argument('-pd', '--patchdir', help = "Location of patched images")
parser.add_argument('-e', '--expand', help = "Expand image when patching", default = False, action = 'store_true')
parser.add_argument('-c','--cluster', help = "Once patched perform clustering")
parser.add_argument('-cd', '--clusterdir', help = "Cluster dir for batch clurstering images")
parser.add_argument('--use_patched', help = "When clustering, use this option to load just the patched versions of the images")


class ObjectDetector(object):
    """
    Class to identify shapes in the B/W ECG IMAGE
    """

    RECTANGLE_TOLERANCE = 0.80




    
    def __init__(self, *args, **kwargs):
        if len(args) == 0:
            raise TypeError('No arguments provided')
        elif len(args) == 1:
            self.img_src = imread(args[0])
            self.regions = []

    
    def get_image_area(self):
        return reduce(mul,self.img_src.shape)
    
    def object_detect(self):
        """
        This method returns a labeled image with acording to the similarity of the pixels in a
        certain area. Similar pixels are considered to belong to the same object
        """
        image = self.img_src.copy()
        image = restoration.denoise_tv_chambolle(image, weight=0.1)
        thresh = threshold_otsu(image)
        bw = closing(image > thresh, square(2))
        cleared = bw.copy()
        label_image = measure.label(cleared, connectivity=2)
        borders = np.logical_xor(bw, cleared)
        label_image[borders] = -1
        return label_image

    def __get_objects_coordinates(self,labeled_image = None):
        """
        Gets the coordinates of the square surrounding the object and rest
        """
        if self.regions:
            return self.regions
        l_image = labeled_image            
        regions = []
        for region in measure.regionprops(l_image):
            if region.area > self.get_image_area() * 0.005:
                continue
            minr, minc, maxr, maxc = region.bbox
            regions.append((minr, maxr, minc, maxc))
        self.regions = regions
        return self.regions

    def crop_resize_ravel(self,region, shape = (20,20), ravel = True):
        """
        crops resizes and ravels the image 
        """
        minr, maxr, minc, maxc = region
        img_section = self.img_src[minr:maxr, minc:maxc]
        sample = resize(img_section,shape)

        if ravel:
            return sample.ravel()
        else:
            return sample

    def generate_matrix(self, l_image):
        """
            crops resizes and ravels the image 
        """
        labeled_image = l_image
        regions = self.__get_objects_coordinates(labeled_image)
        np_matrix = np.empty((len(regions),400),dtype=np.uint8)
        counter = 0
        for region in regions:
            ratio = (region[1] - region[0])/(region[3] - region[2]) 
            rectangle_area = (region[1] - region[0])*(region[3] - region[2]) 
            if ratio < 1 - ObjectDetector.RECTANGLE_TOLERANCE or ratio > 1 + ObjectDetector.RECTANGLE_TOLERANCE:
                continue
            if rectangle_area > 2000:
                continue
            img_sec = self.crop_resize_ravel(region)
            np_matrix[counter,:] = img_sec
            counter += 1
        return np_matrix[:counter, :].copy()

    def get_object_detected_image(self, l_image):
        """
            Colorizes the image and puts a rectangle around the different zones 
            considered to be noisy. 
        """
        label_image = l_image
        image_label_overlay = label2rgb(label_image, image=self.img_src)
        for region in measure.regionprops(label_image):
            if region.area > self.get_image_area() * 0.05:
                continue
            minr, minc, maxr, maxc = region.bbox
            ratio = (maxr-minr) / (maxc -minc)
            rectangle_area = (maxr-minr)*(maxc-minc)
            if ratio < 1 - ObjectDetector.RECTANGLE_TOLERANCE or ratio > 1 + ObjectDetector.RECTANGLE_TOLERANCE:
                continue
            if rectangle_area > 2000 :
                continue
            rr, cc = polygon_perimeter(r = [minr,minr,maxr,maxr], c = [minc,maxc,maxc,minc],shape =self.img_src.shape)
            image_label_overlay [rr,cc] = (1,0,0)
        return image_label_overlay

    def __find_base_lines(self, patched):
        partial_sum = np.sum(patched,axis=1)
        candidates = {}
        window_size = patched.shape[0]//4
        for i in range(patched.shape[0]-window_size):
            local_max = np.argmax(partial_sum[i:i+window_size])
            if not candidates.get(local_max+i):
                candidates[local_max+i] = 1
            else:
                candidates[local_max+i] += 1
        if len(candidates) > 4:
            items = list(map(lambda x: (x[1],x[0]) ,candidates.items()))
            items.sort(reverse=True)
            retval =  list(map(lambda x: x[1],items))
        elif len(candidates) == 4:
             retval = list(map(lambda x: x[1],items))
        else:
            raise Exception('Something went really bad here David :(')

        return retval[:4]


    def __expand_image(self,patched,base_lines):
        base_lines.sort()
        sections = []
        first_base_line = base_lines.pop(0)
        difference = first_base_line - patched.shape[0]//8 
        slice_size = patched.shape[0]//8
        if difference <= 0:
            first_piece = patched[:first_base_line + slice_size,:]

            if difference < 0:
                x = np.zeros((-difference,patched.shape[1]))
                first_piece = np.concatenate((x,first_piece), axis = 0)

        else:
            first_piece = patched[first_base_line - slice_size : first_base_line + slice_size,:]

        sections.append(first_piece)

        last_base_line = base_lines.pop()
        difference = last_base_line + slice_size

        if difference >= patched.shape[0]:
            last_piece = patched[last_base_line-slice_size:,:]
            if difference > patched.shape[0]:
                 x = np.zeros((difference - patched.shape[0], patched.shape[1]))
                 last_piece = np.concatenate((last_piece,x), axis = 0)
            
        else:
            last_piece = patched[last_base_line - slice_size: last_base_line + slice_size,:]


        for base_line in base_lines:
            sections.append(patched[base_line-slice_size:base_line+slice_size])

        sections.append(last_piece)
        retval =  np.concatenate(sections, axis = 1)
        
        return retval/np.max(retval)


    def patch(self, l_image, margin = 10,borders_delete = 40, expand = False):
        """
            Puts a black rectangle over the regions considered to be noisy to the further analisys.
        """
        label_image = l_image
        patched_image = self.img_src.copy()
        for region in measure.regionprops(label_image):
            if region.area > self.get_image_area() * 0.05:
                continue
            minr, minc, maxr, maxc = region.bbox
            ratio = (maxr-minr) / (maxc -minc)
            rectangle_area = (maxr-minr)*(maxc-minc)
            if ratio < 1 - ObjectDetector.RECTANGLE_TOLERANCE or ratio > 1 + ObjectDetector.RECTANGLE_TOLERANCE:
                continue
            if rectangle_area > 2000 :
                continue
            rr, cc = polygon(r = [minr-margin,minr-margin,maxr+margin,maxr+margin], c = [minc-margin,maxc+margin,maxc+margin,minc-margin],shape =self.img_src.shape)
            patched_image[rr,cc] = 0
            # Erase Margins
            patched_image[:borders_delete,:] = 0
            patched_image[:,:borders_delete] = 0
            patched_image[-borders_delete:,:] = 0
            patched_image[:,-borders_delete:] = 0
        try:
            if expand:
                base_lines = self.__find_base_lines(patched_image)
                return self.__expand_image(patched_image,base_lines)
        except Exception:
            pass
                
        return patched_image
    
    def get_super_cluster(self,patched_image = None, express = False):
        patched_image = resize(patched_image,(128,1024*4))
        if not express:
            return None, None, None, self.aux_get_points(patched_image)
        
        #patched_image = dilation(patched_image)
        withe_pixels = np.column_stack(np.where(patched_image > 0))
        print('Pixels detected: ' + str(withe_pixels.shape[0]))
        clusterer = KMeans(n_clusters=1024, precompute_distances=True, n_jobs=2)
        labels = clusterer.fit_predict(withe_pixels)
        return withe_pixels, labels, patched_image, clusterer.cluster_centers_

    def aux_get_points(self,patched_image):
        pixels_coords = []
        previous_coord =(patched_image.shape[0]//2,0)
        for i in range(patched_image.shape[1]):
            print('Col: '+ str(i), end = '\r')
            column = patched_image[:,i]
            white_spots = column > 0
            if np.any(white_spots):
                col_coods = np.column_stack(np.where(white_spots))
                if len(col_coods) == 1:
                    pixels_coords.append((col_coods[0,0],i))
                    previous_coord = (col_coods[0,0],i)
                elif len(col_coods) > 1:
                    try:
                        last_coordinate = pixels_coords[-1]
                    except IndexError:
                        last_coordinate = previous_coord
                    try:
                        next_col_coords = np.sum(patched_image[:,i+1] > 0)
                    except IndexError:
                        continue
                    if next_col_coords > 1 or next_col_coords == 0:
                        clusterer = KMeans(n_clusters=2, precompute_distances=True, n_init=2 , n_jobs=2, max_iter=30)
                        labels = clusterer.fit_predict(col_coods)
                        #Get the closest center to the previous 
                        centers = clusterer.cluster_centers_ 
                        amax = np.argmax(centers[:,0] - previous_coord[0])
                        pixels_coords.append((centers[amax,0],i))
                        previous_coord = (centers[amax,0],i)
                    else:
                        next_col_coords = np.column_stack(np.where(patched_image[:,i+1] > 0))
                        middle_point = (next_col_coords + previous_coord)/2
                        pixels_coords.append((middle_point[0,0],i+.5))
                        previous_coord = (middle_point[0,0],middle_point[0,1])

        return np.array(pixels_coords)


def process_bn_image(file_path,**kwargs):
    """
        Proccess to be applied to a single image includes loading the image, getting the labels 
        of  different regions, filtering the desired ones, create a region labeled image and deleting 
        the regions considered to be noisy.
    """
    matrix_path = kwargs.get('matrix_path')
    image_path = kwargs.get('image_path')
    patch_dir = kwargs.get('patch_dir')
    clusters_path = kwargs.get("clusters_path")
    expand = kwargs.get('expand',False)
    load_patched = kwargs.get('load_patched')
    object_detector = ObjectDetector(file_path)
    regions_path = file_path[:-3] + 'npy'
    if regions_path and (matrix_path or image_path or (clusters_path and not load_patched) or patch_dir ):
        try:
            labeled_image = np.load(regions_path)
        except IOError:
            labeled_image = object_detector.object_detect()
            np.save(regions_path,labeled_image)
        
    if matrix_path:
        object_detected_matrix = object_detector.generate_matrix(labeled_image)
        np.save(matrix_path,object_detected_matrix)
    
    if image_path:
        imsave(image_path,object_detector.get_object_detected_image(labeled_image, expand = expand))

    if clusters_path:
        if not load_patched:
            patched = object_detector.patch(labeled_image, expand = True)
        else:
            print('Loading patched image ' + load_patched)
            patched = imread(load_patched,as_grey=True)
        if patch_dir:
            imsave(patch_dir,patched)
        labels = None,
        coordinates = None
        small_patched = None
        centers = None
        if not exists(clusters_path[:-3]+'npy'): 
            coordinates, labels, small_patched, centers  = object_detector.get_super_cluster(patched)
        else: 
            return
        if labels and coordinates and small_patched:
            labels += 1
            l_im = small_patched.copy()
            for label in np.unique(labels):
                cord = coordinates[labels == label, :]
                l_im[cord[:,0],cord[:,1]] = label  
            l_im = label2rgb(l_im,small_patched)
            for center in centers:
                rr, cc = circle(r = center[0], c = center[1], radius = 2, shape =  small_patched.shape)
                l_im[rr,cc] = (0,0,1)
            imsave(clusters_path,l_im)
        np.save(clusters_path[:-4],centers)
    elif patch_dir:
        imsave(patch_dir,object_detector.patch(labeled_image,expand = expand))

    

    
def validate_flag(flag_dict, flag_name, flag_value):
    if not isdir(flag_value):
        print('Error: '+ o_dir + " is not a directory")
        exit(1)
    flag_dict[flag_name]=flag_value


''' Main process pipeline '''

if __name__ == "__main__":
    flags = {}
    args = parser.parse_args()
    s_dir = args.file_path
    im_dir = args.imagedir
    p_dir = args.patchdir
    c_dir = args.clusterdir
    c_up = args.use_patched
    if s_dir and isdir(s_dir):
        if s_dir[-1] != '/':
            s_dir += '/'
        elements = listdir(s_dir)
        elements = filter(lambda x: x[-3:] == 'png', elements)
        if p_dir:
            validate_flag(flags,'patch_dir',p_dir)
        if im_dir: 
            validate_flag(flags,'image_path',im_dir)
        if c_dir:
            validate_flag(flags,'clusters_path',c_dir)
        if c_up:
            validate_flag(flags,'load_patched',c_up)

        if args.expand :
            flags['expand'] = True
        else:
            flags['expand'] = False

        for elem in elements:
            print('Processing: ' + elem)
            instance_flags = dict(flags)
            if p_dir:
                instance_flags['patch_dir'] += elem
            if im_dir: 
                instance_flags['image_path'] += elem[:-4] + '_labeled.png'
            if c_dir:
                instance_flags['clusters_path'] += elem
            if c_up:
                instance_flags['load_patched'] += elem
            process_bn_image(s_dir + elem, **instance_flags)
    else:
        elem = s_dir[2:]
        if p_dir:
            validate_flag(flags,'patch_dir',p_dir)
        if im_dir: 
            validate_flag(flags,'image_path',im_dir)
        if c_dir:
            validate_flag(flags,'clusters_path',c_dir)
        if c_up:
            validate_flag(flags,'load_patched',c_up)

        if args.expand :
            flags['expand'] = True
        else:
            flags['expand'] = False
        
        print('Processing: ' + elem)
        instance_flags = dict(flags)
        if p_dir:
            instance_flags['patch_dir'] += elem
        if im_dir: 
            instance_flags['image_path'] += elem[:-4] + '_labeled.png'
        if c_dir:
            instance_flags['clusters_path'] += elem
        if c_up:
            instance_flags['load_patched'] += elem
        print(instance_flags)
        process_bn_image(s_dir, **instance_flags)
        
        ''' object_detector = ObjectDetector(args.file_path)
        try:
            labeled_image = np.load(args.file_path[:-3] + 'npy')
        except IOError:
            labeled_image = object_detector.object_detect()
            np.save(regions_path,labeled_image)
        object_detected_matrix = object_detector.generate_matrix(labeled_image)
        if args.matrix:
            np.save(args.matrix,object_detected_matrix)
        if args.imagepath:
            imsave(args.imagepath,object_detector.get_object_detected_image(labeled_image))
        if args.patch:
            if args.expand:
                expand = True
            else: 
                expand = False
            patch = object_detector.patch(labeled_image,expand = expand)
            patch = img_as_uint(patch)
            imsave(args.patch, patch )
        if args.cluster:
            image = object_detector.patch(labeled_image, expand = True)
            coordinates, labels, small_patched, centers  = object_detector.get_super_cluster(image)
            labels += 1
            l_im = small_patched.copy()
            for label in np.unique(labels):
                cord = coordinates[labels == label, :]
                l_im[cord[:,0],cord[:,1]] = label  
            l_im = label2rgb(l_im,small_patched)
            for center in centers:
                rr, cc = circle(r = center[0], c = center[1], radius = 2, shape =  small_patched.shape)
                l_im[rr,cc] = (0,0,1)
            imsave(args.cluster,l_im) '''