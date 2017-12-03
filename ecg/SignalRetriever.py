import numpy as np
import matplotlib.pyplot as plt
import wfdb
import wfdb.processing as wp
import functools
import re
import argparse
import sys
from os.path import isdir, isfile
from os import listdir
from scipy.interpolate import interp1d, CubicSpline
from scipy.stats import mode

plt.switch_backend('qt5agg')

parser = argparse.ArgumentParser()
parser.add_argument('file_path', help = 'The filepath where the file(s) are.')
parser.add_argument('-od', '--output-dir', help = 'The filepath where the signals are going to be stored.', default = './')

class SignalRetriever():

    fun = lambda x, y, z :np.logical_or(x, np.logical_or(y, z))
    view_func = lambda x: ImageViewer(x).show()
    LEAD_SIZE = 256 #Pixels
    LEADS = ["I", 'AVR','V1',"V4", 'II', 'AVL', 'V2', 'V5', 'III', 'AVF', 'V3', 'V6','II_LONG']

    @staticmethod
    def retrieve_signal(points, spline = False):
        # Esta funcion toma los pixeles marcados y realiza una interpolacion con los pixeles 
        # obtenido del procesamiento de la imagen
        if spline:
            interpolator = CubicSpline
        else:
            interpolator = interp1d
        skew = np.min(points[:,1])
        x_standarized = points[:,1] - skew
        mode_res = mode(points[:,0])
        y_standarized = mode_res.mode[0]-points[:,0]
        inter_func = interpolator(x_standarized,y_standarized)
        return inter_func, x_standarized, y_standarized, skew

    @staticmethod
    def plot_digital_ecg(inter_func,points):
        #Funcion de prueba para ver como se ve la señal luego de una interpolación.
        x = np.linspace(np.min(points),np.max(points),9000)
        plt.plot(x,inter_func(x))
        plt.axes().set_aspect('equal','box')
        plt.show()

    @staticmethod
    def sample_signal(inter_func,xpoints,samples = 9000):
        # Guardando archivo de la señal. 
        minp = np.min(xpoints)
        maxp = np.max(xpoints)
        x = np.linspace(minp,maxp,samples)
        xs = inter_func(x)
        #xs -= np.mean(xs)
        xs /= np.max(np.abs(xs))
        xs = np.reshape(xs,(xs.shape[0],1))
        # record = wfdb.Record(recordname='Test1',fs=300,nsig=1,siglen=750,p_signals=x,
        # filename=['test.dat'],baseline=[-1],units=['mV'],signame=['ECG'])
        # wfdb.plotrec(record,title='Test')
        return xs

    @staticmethod
    def split_into_leads(inputs, skew,original_length):
        segments = []
        segment_size = int(round(SignalRetriever.LEAD_SIZE*len(inputs)/original_length))
        segments.append(inputs[0:segment_size-skew])
        i = segment_size-skew
        for lead in SignalRetriever.LEADS[1:-1]:
            segments.append(inputs[i:i+segment_size])
            i+= segment_size
        segments.append(inputs[i:])
        return segments


    def __init__(self,*args,**kwargs):
        if args or kwargs.get('file'):
            if args:
                coordinates_file = args[0]
            else:
                coordinates_file = kwargs.get('file')
            if isfile(coordinates_file):
                self.coordinates_file = np.load(coordinates_file)
                self.file_name = coordinates_file
            else:
                raise TypeError('The following path: ' + coordinates_file + ' is not a regular file')
        elif kwargs.get('array'):
            self.coordinates_file = kwargs.get('array')
            self.file_name = kwargs.get('arr_name','temp')
    
    def get_record_signal(self, path = ''):
        # record = wfdb.Record(recordname='Test'+str(i),fs=300,nsig=1,siglen=750,p_signals=x,
        # filename=['test.dat'],baseline=[50],units=['mV'],signame=['ECG'],adcgain=[200],fmt=['16'],checksum=[0],
        # adcres=[16],adczero=[0],initvalue=[0],blocksize=[0], d_signals=None)
        #array_signal = np.concatenate((array_signal,SignalRetriever.sample_signal(inter_func,points)))   
        inter_fun, x, y , skew = SignalRetriever.retrieve_signal(self.coordinates_file)
        sampled_signal = SignalRetriever.sample_signal(inter_fun, x)
        #sampled_signal = wp.normalize(sampled_signal,-1,1)
        name = self.file_name.split('/')
        wfdb.wrsamp(
            name[-1][:-4],
            300,
            ['mV'],
            ['ALL_LEADS'],
            sampled_signal,
            None,
            ['32'],
            [1000],
            [0]
        )
        ''' record = wfdb.Record(
            recordname = name,
            fs = 300,
            nsig = 1,
            siglen = len(sampled_signal),
            filename = [path+name],
            units = 'mV',
            signame = ['ECG ALL LEADS'],
            adcgain=[1000],
            baseline = [0],
            fmt=['16'],
            checksum=[0],
            d_signals= sampled_signal
        ) '''
        return 


if __name__ == '__main__':
    args = parser.parse_args()
    # m_record = wfdb.MultiRecord(recordname='Test', segments=array_signal,nsig=len(array_signal),
    # siglen=9000,
    # fs=300,
    # segname=[str(i) for i in range(len(array_signal))],
    # seglen=[750]*len(array_signal))
    files = None
    
    out_dir = args.output_dir
    if not (out_dir == './' or isdir(out_dir)):
        print( out_dir + ' MUST be a directory', file = sys.stderr)
        exit(1)

    if args.file_path:
        if isdir(args.file_path):
            files = map(lambda x: args.file_path+x ,filter(lambda x: re.match('.*\.npy',x),listdir(args.file_path)))
        else:
            s_retriever = SignalRetriever(file = args.file_path)
            record = s_retriever.get_record_signal(args.output_dir)
            #record.wrsamp()

    if files:
        for image_sample in files:
            print("Processing coordinates: " + image_sample)
            s_retriever = SignalRetriever(image_sample)
            record = s_retriever.get_record_signal(args.output_dir)
            #record.wrsamp()