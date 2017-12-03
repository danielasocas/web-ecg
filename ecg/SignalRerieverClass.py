import sys
import numpy as np
import matplotlib.pyplot as plt
import json
from operator import mul
from os import listdir
from os.path import isfile, isdir
from PIL.ImageOps import autocontrast, grayscale, invert, equalize
from PIL import Image
from PIL.ImageEnhance import Brightness, Contrast
from skimage.draw import polygon
from skimage import measure
from skimage import restoration
from skimage import measure
from skimage.measure import regionprops
from skimage.util import invert
from skimage import img_as_uint
from skimage.color import rgb2gray, label2rgb
from skimage.io import imread, imsave, imshow, imread_collection
from skimage.transform import rotate, hough_line, pyramid_expand, resize
from skimage.filters import threshold_otsu, threshold_isodata
from skimage.filters.rank import median, otsu, noise_filter
from skimage.feature import canny
from skimage.exposure import adjust_gamma, adjust_log, adjust_sigmoid
from skimage.morphology import (rectangle, disk, white_tophat, binary_opening, binary_erosion, binary_dilation,
                            remove_small_objects, label, binary_closing, closing, square)
from functools import reduce
import matplotlib.patches as mpatches
from skimage.draw import polygon, polygon_perimeter

# NOTA USAR PIL, TRANSFORMAR LAS IMAGENES A BN, ADJUST, LUEGO INVERTIR COLORES, AJUSTAR BRILLO Y CONTRASTE


class ImageSignalDigitalizer():

    CANNY_VAL = 2
    CONST_ANGLE = 90.0

    @staticmethod
    def skew_detect(img_src):
        image = canny(img_src, ImageSignalDigitalizer.CANNY_VAL)
        accumulator, angles, distances = hough_line(image)
        idx = np.argmax(accumulator)
        theta = angles[idx % accumulator.shape[1]]
        return theta

    @staticmethod
    def bw_transform(img_src):  # To finish
        tval = threshold_otsu(img_src)
        bn_src = (img_src > tval)
        # Reducing horizontal and vertical lines
        r_vertical = rectangle(bn_src.shape[1], 1)
        r_horizontal = rectangle(1, bn_src.shape[0])

        # Reducing horizontal lines
        bn_src = white_tophat(bn_src, r_horizontal)

        # Reducing vertical lines
        bn_src = white_tophat(bn_src, r_vertical)

        # Reducing salt
        bn_src = remove_small_objects(bn_src, connectivity=2, min_size=9)
        return bn_src

    @staticmethod
    def bw_transform_special(img):
        #Tratamiento especial para imágenes
        image = rgb2gray(img)
        image = invert(image)
        image = adjust_gamma(image,2)
        image = adjust_sigmoid(image, .95)
        threshold_image = threshold_otsu(image)
        image = image > threshold_image
        return image
        


    @staticmethod
    def detect_and_erase_text(img):
        image = img.copy()
        image = restoration.denoise_tv_chambolle(image, weight=0.1)
        thresh = threshold_otsu(image)
        bw = closing(image > thresh, square(2))
        cleared = bw.copy()
        
        label_image = measure.label(cleared, connectivity=2)
        borders = np.logical_xor(bw, cleared)
       
        label_image[borders] = -1
        image_label_overlay = label2rgb(label_image, image=image)
        for region in regionprops(label_image):
            if region.area > reduce(mul,image.shape)*0.05:
                continue
            minr, minc, maxr, maxc = region.bbox
            rr, cc = polygon_perimeter(r = [minr,minr,maxr,maxr], c = [minc,maxc,maxc,minc],shape =image.shape)
            image_label_overlay [rr,cc] = (1,0,0)
        return image_label_overlay


    @staticmethod
    def process_image(img, sig_param=.85):
        image = rgb2gray(img)
        image = pyramid_expand(image,order = 3)
        theta = ImageSignalDigitalizer.skew_detect(image)
        image = rotate(image, np.rad2deg(theta) +
                       ImageSignalDigitalizer.CONST_ANGLE, resize=True)
        image = invert(image)
        image = adjust_sigmoid(image, sig_param)
        image = ImageSignalDigitalizer.bw_transform(image)
        image = resize(image,(2048,2048*2))
        return  image


    def __init__(self, *args, **kwargs):
        self.config_file = kwargs.get('config_file')
        assert args or self.config_file, "No images found"
        if self.config_file and isfile(self.config_file) and not isdir(self.config_file):
            directory = self.config_file.split('/')
            if len(directory) == 1:
                self.directory = ''
            else:
                self.directory = '/'.join(directory[:-1]) + '/'
            info = open(self.config_file, 'r')
            info = json.load(info)
            args = info
        self.image_src_colection = args

    def process_images(self):
        if self.config_file:
            for simg in self.image_src_colection:
                img = imread(self.directory + simg.get('name'))
                image = ImageSignalDigitalizer.process_image(
                    img, simg.get('adjust_param', 0.85))
                yield(image, simg.get('name'))
        else:
            for simg in self.image_src_colection:
                img = imread(simg)
                image = ImageSignalDigitalizer.process_image(img)
                yield(image, simg)



if __name__ == '__main__':
    image_digitalizer = ImageSignalDigitalizer(
        config_file='./Imagenes/config1.json')
    temp_name = './bn_images/bn_{0}.png'
    objectFigs = './bn_images/bn_C{0}.png'
    for x in image_digitalizer.process_images():
        image = img_as_uint(x[0])
        imsave(temp_name.format(x[1][:-4]), image)
        imsave(objectFigs.format(x[1][:-4]),ImageSignalDigitalizer.detect_and_erase_text(image))