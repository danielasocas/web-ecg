import subprocess
import wfdb
import numpy as np
import scipy.stats as sps
from scipy.interpolate import interp1d as nox
import pywt
import argparse
import re
from entropy import shannon_entropy
import sampen as smp
#from pyentrp import entropy as entr
from os.path import exists, isdir
from os import listdir
from sys import stdout, stderr
from functools import reduce, lru_cache
import json
import sys
import time

parser = argparse.ArgumentParser()
parser.add_argument('-f','--file_path', help = "path to the file or directory to be oppened the saved labels MUST be in this directory", default = './')
parser.add_argument('-o','--output_file', help = "Output file", default = None)

class SignalProcessor:

    START_WAVE = '('
    END_WAVE = ')'
    CM_PER_SAMPLE =  2.5/300
    INITIALIZER = np.array([[0]])
        

    @staticmethod
    def entropy(segments):
        try:
            ''' hist, bin_edges = np.histogram(segments,'auto')
            bin_map_pr_interval = np.digitize(segments,bin_edges[:-1])
            bin_map_pr_interval = np.array(list(map(lambda x: hist[x-1]/len(segments), bin_map_pr_interval)))
            return sps.entropy(bin_map_pr_interval, base = 2) '''
            return shannon_entropy(segments)
        except Exception as e:
            print(str(e), file = sys.stderr)
            return 0.0

    @staticmethod
    def estimate(segments, n_points = 32):
        len_seg = segments.shape[0]
        points = np.linspace(0,len_seg,len_seg)
        fun = nox(points,segments)
        return fun(np.linspace(0,len_seg,n_points))
    
    @staticmethod
    def detail_coefs_of_dwt(segment):
        try:
            _, detil_coefs = pywt.dwt(segment,'haar')
            return detil_coefs
        except ValueError:
            return np.array([])
    
    @staticmethod
    def detail_coefs_of_dwt_levels(segment, levels = 5):
        if levels == 0:
            return [np.array([])]
        try:
            coefs = pywt.wavedec(segment,'haar', level = levels)
        except ValueError:
            if segment.shape[0] > 0:
                coefs = pywt.wavedec(SignalProcessor.estimate(segment),'haar', level = levels)
            else:
                #coefs = SignalProcessor.detail_coefs_of_dwt_levels(segment,levels-1)
                #coefs.insert(1,np.array([]))
                #coefs[0] = np.array([])
                coefs = [np.array([])] * 6
        return coefs

    @staticmethod
    def sampen_wavelet_coefs(y):
        try:
            return smp.sampen2(list(y)[:300],1, normalize=True)[1][1]
        except (ValueError, ZeroDivisionError):
            return np.nan

    @staticmethod
    def analyze_wave_seg(wave_seg):
        opening =0
        closing = 0
        symbol = 0
        for item in wave_seg:
            if item[1] == SignalProcessor.START_WAVE: opening += 1
            elif item[1] == SignalProcessor.END_WAVE: closing += 1
            elif item[1] in ['p','N','t']: symbol+=1
        return opening, symbol, closing

    @staticmethod
    def process_wave(wave_seg):
        """
        Separates mixed annotations like '((pN))'. 
        This fucntion asumes that the first anotation found is the
        first to appear and so on. so '((pN))' is actually (p) (N).
        """
        symbols = ['p', "N", 't']
        wave_list = []
        aux_list = []
        opening, symbolx, closing = SignalProcessor.analyze_wave_seg(wave_seg)
        if opening == closing and closing == 2 and symbolx == 1:
            return [wave_seg[1:-1]]
        while wave_seg:
            elem = wave_seg.pop(0)
            if elem[1] == SignalProcessor.START_WAVE:
                aux_list.append(elem)
                symbol_found = False
                i = 0
                for x in wave_seg:
                    if x[1] != SignalProcessor.START_WAVE and x[1] in symbols and not symbol_found:
                        if len(wave_seg) < 3:
                            aux_list.append(x)
                        else:
                            aux_list.append(wave_seg.pop(i))
                        symbol_found = True
                    elif x[1] == SignalProcessor.END_WAVE and symbol_found:
                        if len(wave_seg) < 3:
                            aux_list.append(x)
                        else:
                            aux_list.append(wave_seg.pop(i))
                        break
                    i += 1
                wave_list.append(aux_list)
                aux_list = []
        return wave_list
    
    @staticmethod
    def calc_tp_segment(t_seg, p_seg):
        return (t_seg[-1][0],p_seg[0][0])

    @staticmethod
    def calc_pr_segment(p_seg, qrs_complex):
        return (p_seg[-1][0],qrs_complex[0][0])

    @staticmethod
    def calc_pr_interval(p_seg, qrs_complex): #Letf beat (?)
        return (p_seg[0][0], qrs_complex[0][0])

    @staticmethod
    def calc_left_mid(p_seg, qrs_complex):
        return (p_seg[0][0],qrs_complex[-1][0])

    @staticmethod
    def calc_st_segment(qrs_complex, t_seg):
        return (qrs_complex[-1][0], t_seg[0][0])

    @staticmethod
    def calc_qt_interval(qrs_complex, t_seg): # mid + right
        return (qrs_complex[0][0], t_seg[-1][0])         

    def __init__(self,*args,**kwargs):
        
        if not args:
            raise ValueError("No signal file was specified")
        #The first args value must be the signal filepath
        sigfile = args[0]
        if exists(sigfile + '.annot'):
            self.annotations = wfdb.rdann(recordname = sigfile, extension = 'annot')
        else:
            process_summary = subprocess.run(['ecgpuwave', '-r', sigfile, '-a', 'annot'])
            if process_summary.returncode:
                raise ValueError("Expected process to resturn code 0")
            self.annotations = wfdb.rdann(recordname = sigfile, extension = 'annot')
        self.record = wfdb.rdsamp(sigfile)
        self.segments = {
            'p_wave': [],
            't_wave': [],
            'qrs_complex': [],
            'pr_segment': [],
            'pr_interval': [],
            'left_mid': [],
            'tp_segment': [],
            'qt_interval': [],
            'st_segment': []

        }
        self.sigfile = sigfile

    def __processSegments(self,prevs,aux_list, prev_n):
        prev_symbol = prevs[1][1]
        actual_symbol = aux_list[1][1]
        if  actual_symbol == 'p':
            #Calculate TP segment
            if prev_symbol == 't':
                self.segments['tp_segment'].append(SignalProcessor.calc_tp_segment(prevs, aux_list))
            self.segments['p_wave'].append((aux_list[0][0], aux_list[1][0] , aux_list[-1][0]))

        elif actual_symbol == 'N':
            #Calculate PR segment, PR interval, left beat segment, left + mid 
            if prev_symbol == 'p':
                self.segments['pr_segment'].append(SignalProcessor.calc_pr_segment(prevs, aux_list))
                self.segments['pr_interval'].append(SignalProcessor.calc_pr_interval(prevs, aux_list))
                self.segments['left_mid'].append(SignalProcessor.calc_left_mid(prevs, aux_list))
            self.segments['qrs_complex'].append((aux_list[0][0], aux_list[1][0], aux_list[-1][0]))
            
        elif actual_symbol == 't':
            #Calculate ST segment QT interval (mid + right)
            self.segments['t_wave'].append((aux_list[0][0], aux_list[1][0], aux_list[-1][0]))
            if prev_symbol == 'N':
                self.segments['qt_interval'].append(SignalProcessor.calc_qt_interval(prevs, aux_list))
                self.segments['st_segment'].append(SignalProcessor.calc_st_segment(prevs, aux_list))
    
    def detect_segments(self):
        """
        This method gets the a whole segment P-QRS-T form the annotantions 
        provided to be processed later
        """
        #Calculate RR segment (use ann2rr better and read the ouptu)
        symbols = ['p', "N", 't']
        annots = zip(self.annotations.sample,self.annotations.symbol,self.annotations.num)
        prev_n = []
        prevs = []
        aux_list = []
        open_count = 0
        prev_simb = None
        for element in annots:
            if element[1] == SignalProcessor.START_WAVE:
                aux_list.append(element)
                open_count += 1
                prev_simb = element[1]
                continue
            elif  element[1] in symbols:
                if not open_count:
                    continue
                aux_list.append(element)
                prev_simb = element[1]
                continue
            elif element[1] == SignalProcessor.END_WAVE:
                if (open_count -1 < 0 and not open_count) or prev_simb == SignalProcessor.START_WAVE :
                    continue 
                aux_list.append(element)
                open_count -=1
                if open_count and open_count > 0:
                    continue
                #sep = ''
                #print("Aux list: ",sep.join(list(map(lambda x: x[1],aux_list))))
                segs = SignalProcessor.process_wave(aux_list[:])
                if len(segs) >1:
                    #Calculate if a method is needed
                    for seg  in filter(lambda x: len(x) == 3,segs):
                        if prevs:
                            self.__processSegments(prevs,seg,prev_n)
                            if seg[1][1] == "N":
                                prev_n = seg
                        prevs = seg
                elif segs[0] == aux_list: #ActiveBNK pass 0815 
                    if prevs:
                        self.__processSegments(prevs,aux_list, prev_n)
                if aux_list[1][1] == 'N':
                    prev_n = aux_list
                prevs = aux_list
                aux_list = []
            else:
                raise ValueError('Symbol not recognized: ' + element[1])

    
    def aux_detect_segments_new(self, queue_ext):
        symbols = ['p', "N", 't']
        aux_list = []
        queue = []
        expecting = None
        end_wave_reached = False
        for element in queue_ext:
            if element[1] == SignalProcessor.START_WAVE and not expecting:
                aux_list.append(element)
                expecting = element[2]
            elif element[1] in symbols and expecting == element[2]: 
                aux_list.append(element)
            elif element[1] == SignalProcessor.END_WAVE and expecting == element[2]:
                aux_list.append(element)
                end_wave_reached = True
            else:
                queue.append(element)
            if end_wave_reached:
                if len(aux_list) > 2:
                    return aux_list, queue
        return [],queue


    
    def detect_segments_new(self):
        symbols = ['p', "N", 't']
        annots = zip(self.annotations.sample,self.annotations.symbol,self.annotations.num)
        prev_n = []
        prevs = []
        aux_list = []
        queue = []
        expecting = None
        symbols_expecting = None
        end_wave_reached = False
        t_wave_inversion = [0,0]
        for element in annots:
            if element[1] == SignalProcessor.START_WAVE and not expecting:
                aux_list.append(element)
                expecting = element[2]
                symbols_expecting = symbols[expecting]
            elif element[1] in symbols and symbols_expecting == element[1]: 
                aux_list.append(element)
            elif element[1] == SignalProcessor.END_WAVE and expecting == element[2]:
                aux_list.append(element)
                end_wave_reached = True
            else:
                queue.append(element)
            
            if end_wave_reached:
                end_wave_reached = False
                if len(aux_list) < 3:
                    aux_list =[]
                    expecting = None
                    prevs = []
                    continue
                if prevs:
                    self.__processSegments(prevs,aux_list,prev_n)
                prevs = aux_list
                aux_list = []
                expecting = None
                symbols_expecting = None
                while queue:
                    aux_list, queue = self.aux_detect_segments_new(queue)
                    if  not aux_list:
                        break
                    elif len(aux_list) >2:
                        self.__processSegments(prevs,aux_list,prev_n)
                        prevs = aux_list
                        aux_list = []
                    else: 
                        continue



    def calculate_heart_rate(self):
        """ Calls the WFDB program hrstats to get the information about the 
            ECG heart rate. 
            returns: mean heart rate and deviation
        """
        completedProcess = subprocess.run(['hrstats', '-r', self.sigfile, '-a', 'annot'], stdout = subprocess.PIPE)
        result = completedProcess.stdout
        result = list(map(lambda x: x.decode('utf-8'),result.split()))
        nan = 0
        if not result:
            return 0,0
        print
        bpm = result[1].split('|')
        bpm_ = bpm[1].split('/')
        bpm = bpm_[1]
        bpm = int(bpm)
        if bpm < 0:
            bpm = int(bpm_[0])
        return bpm, abs(eval(result[2])) #beats per minute and desviation

    def get_mean_rr_value(self, save_rr_metric = True):
        """
            Calls the WFDB program ann2rr to get a list of the RR intervals in samples and then gets the mean
            returns the mean of the RR intervals in seconds
        """
        completedProcess = subprocess.run(['ann2rr','-r',self.sigfile,'-a','annot'], stdout = subprocess.PIPE)
        rr_segments_length = completedProcess.stdout
        rr_segments_length = rr_segments_length.split()
        aux_val = list(map(eval,rr_segments_length))
        if save_rr_metric:
            self.segments['rr_interval'] = aux_val
        mean_rr_ = np.mean(aux_val) / self.record.fs
        return mean_rr_

    def get_interval_wave_durations(self, name):
        """
            General function to get the interval or wave durations 
        """
        segment = self.segments.get(name)[:]
        return np.array(list(map(lambda x: x[-1]-x[0], segment))) / self.record.fs
    
    def get_pr_intervals(self):
        """
            Calculates PR interval values from the pr_interval markers.
            Returns a list with the intervals in seconds
        """
        pr_intervals = self.segments.get('pr_interval')[:]
        pr_intervals = np.array(list(map(lambda x: x[-1] - x[0], pr_intervals))) / self.record.fs
        return pr_intervals

    def get_p_wave_durations(self):
        """
            Transforms the  p_wave segment marks and returns the p_wave duration in seconds. 
        """
        p_waves = self.segments.get('p_wave')[:]
        return np.array(list(map(lambda x: x[-1]-x[0], p_waves))) / self.record.fs

    def get_qt_interval_durations(self):
        """
            Transforms the qt interval segment marks and returns the qt_itnerval duration in seconds
        """
        qt_intervals = self.segments.get('qt_interval')[:]
        return np.array(list(map(lambda x: x[-1]- x[0], qt_intervals))) / self.record.fs

    def get_t_wave_durations(self):
        t_wave_segments = self.segments.get('t_wave')[:]
        return np.array(list(map(lambda x: x[-1] - x[0],t_wave_segments))) / self.record.fs
    
    #Mean entropy for PR interval durations
    def get_pr_interval_durations_entropy(self):
        pr_intervals = self.get_pr_intervals().ravel()
        ''' hist, bin_edges = np.histogram(pr_intervals,'auto')
        bin_map_pr_interval = np.digitize(pr_intervals,bin_edges[:-1])
        bin_map_pr_interval = np.array(list(map(lambda x: hist[x-1]/len(pr_intervals), bin_map_pr_interval))) '''
        #return sps.entropy(bin_map_pr_interval, base = 2)
        return shannon_entropy(pr_intervals)
    
    #Mean entropy por P wave durations
    def get_p_wave_durations_entropy(self):
        p_wave_durations = self.get_p_wave_durations().ravel()
        ''' hist, bin_edges = np.histogram(p_wave_durations, 'auto')
        bin_map_p_waves = np.digitize(p_wave_durations, bin_edges[:-1])
        bin_map_p_waves = np.array(list(map(lambda x: hist[x-1]/len(p_wave_durations), bin_map_p_waves))) '''
        #return sps.entropy(bin_map_p_waves, base = 2)
        return shannon_entropy(p_wave_durations)

    #Mean entropy for QT intervals
    def get_qt_interval_entropy(self):
        p_wave_durations = self.get_qt_interval_durations().ravel()
        ''' hist, bin_edges = np.histogram(p_wave_durations, 'auto')
        bin_map_p_waves = np.digitize(p_wave_durations, bin_edges[:-1])
        bin_map_p_waves = np.array(list(map(lambda x: hist[x-1]/len(p_wave_durations), bin_map_p_waves))) '''
        #return sps.entropy(bin_map_p_waves, base = 2)
        return shannon_entropy(p_wave_durations)
    
    #Mean entropy of rr interval durations
    def get_rr_interval_durations_entropy(self):
        p_wave_durations = self.segments.get('rr_interval')
        ''' hist, bin_edges = np.histogram(p_wave_durations, 'auto')
        bin_map_p_waves = np.digitize(p_wave_durations, bin_edges[:-1])
        bin_map_p_waves = np.array(list(map(lambda x: hist[x-1]/len(p_wave_durations), bin_map_p_waves))) '''
        #return sps.entropy(bin_map_p_waves, base = 2)
        return shannon_entropy(p_wave_durations)

    #Mean Entropy of T wave durations
    def get_t_wave_durations_entropy(self):
        t_wave_durations = self.get_t_wave_durations().ravel()
        ''' hist, bin_edges = np.histogram(t_wave_durations, 'auto')
        bin_map_t_waves = np.digitize(t_wave_durations, bin_edges[:-1])
        bin_map_t_waves = np.array(list(map(lambda x: hist[x-1]/len(t_wave_durations), bin_map_t_waves))) '''
        #return sps.entropy(bin_map_t_waves, base = 2)
        return shannon_entropy(t_wave_durations)

    # Area under highest frequency of RR durations (?)
    # Area under lowest frequency of RR durations (?)
    # Beats per minute (See calculate_heart_rate)
    
    # Is the P wave inverted?
    # Is the QRS complex inverted?
    # Is the T wave inverted?
    def wave_inverted(self, name = 'p_wave'):
        p_waves = self.segments.get(name)[:]
        p_waves = list(map(lambda x: self.record.p_signals[x[1]] <= self.record.p_signals[x[0]] and self.record.p_signals[x[1]] <= self.record.p_signals[x[-1]],
        p_waves))
        return np.sum(p_waves) / len(p_waves) > .75
    
    # Mean duration of PR, QT, RR intervals, P and T waves and QRS complexes
    def mean_duration_of_interval(self, interval_name):
        """
            Returns the mean duration of a given inerval 
        """
        interval = self.segments.get(interval_name)[:]
        interval = list(map(lambda x: x[-1]-x[0], interval))
        mean_val = np.mean(interval) / self.record.fs
        if np.isnan(mean_val):
            mean_val = 0
        return mean_val

    def mean_amplitude_of_wave(self, wave):
        """
        Returns the mean amplitude of a given wave in cm.
        """
        assert wave in ['p_wave', 't_wave', 'qrs_complex'], "Only QRS complex or P or T waves"
        aux_rec = self.record.p_signals
        wave_s = self.segments.get(wave)
        apmplitudes = list(map(lambda x: aux_rec[x[1]], wave_s))
        mean_val = np.nanmean(apmplitudes)
        return mean_val

    def zero_crossing_rate(self):
        rec = self.record.p_signals
        return np.sum(rec[:-1]*rec[1:] < 0)/(len(rec)-1)

    def rr_difs(self):
        """
        Returns the consecutive differences between the RR intervals in seconds
        """
        rrs = np.array(self.segments.get('rr_interval'))
        delta_rrs = (rrs[1:]-rrs[:-1])/self.record.fs
        return delta_rrs

    # Proportion of consecutive differences of RR greater than 20ms or than 50ms
    def rr_difs_prop_greather_than(self, threshold = 0.02):
        """
        Calculates the proportion of consecutive differences of RR intervals greater than a
        given threshold. 
        """
        delta = self.rr_difs()
        result_delta = np.sum(delta > threshold)/len(delta)
        return result_delta

    # Root mean square of consecutive differences of RR interval durations
    def root_mean_square_of_rr_differences(self):
        delta = self.rr_difs()
        res = np.sqrt(np.nanmean(delta**2))
        return res
    
    #Standard deviation or P, T wave duration, QRS complex, PR interval, QT interval, consecutive differences of RR interval durations
    # RR interval durations, P, R, T peak amplitudes
    def sd_of_durations(self, name):
        if name == 'rr_interval':
            segments = self.segments.get(name)
        else:
            segments = self.get_interval_wave_durations(name)
        std_val = np.nanstd(segments)
        return std_val

    def sd_of_amplitudes(self,wave):
        """
        Returns the standard deviation of the amplitudes of the P, T or QRS waves. 
        """
        assert wave in ['p_wave', 't_wave', 'qrs_complex'], "Only QRS complex or P or T waves"
        aux_rec = self.record.p_signals
        wave = self.segments.get(wave)
        apmplitudes = list(map(lambda x: aux_rec[x[1]], wave))
        std_val = np.nanstd(apmplitudes)
        return std_val

    def sd_of_rr_difs(self): # Maybe delete this one 
        res =  np.nanstd(self.rr_difs())
        return res

    #Mean amplitude on left, right and mid segments are (I think the mean of al samples.)
    #Use pywavelets for the wavelet

    def get_segment(self,segment):
        segments = self.segments.get(segment)[:]
        return map(lambda x: self.record.p_signals[x[0]: x[-1] +1], segments)
    
    @lru_cache(maxsize = 10)
    def mean_amplitude_on_segments(self,segment):
        segments = reduce(lambda x,y: np.concatenate((x,y)), self.get_segment(segment),SignalProcessor.INITIALIZER)
        return np.mean(segments)
    
    @lru_cache(maxsize = 10)
    def variance_amplitude_segments(self,segment):
        segments = reduce(lambda x,y: np.concatenate((x,y)), self.get_segment(segment),SignalProcessor.INITIALIZER)
        return np.var(segments)

    def skewnes_segment(self, segment):
        segments = reduce(lambda x,y: np.concatenate((x,y)), self.get_segment(segment),SignalProcessor.INITIALIZER)
        return sps.skew(segments)[0]

    def kurtosis_of_segment(self, segment):
        segments = reduce(lambda x,y: np.concatenate((x,y)), self.get_segment(segment),SignalProcessor.INITIALIZER)
        return sps.kurtosis(segments)[0]

    def wavelet_detail_coefs(self, segment, levels = 5):
        segments = map(lambda x: SignalProcessor.detail_coefs_of_dwt_levels(x.ravel()) ,self.get_segment(segment))
        return segments

    def mean_wavelet_detail_coefs(self,segment):
        #segments = reduce(lambda x,y: np.concatenate((x,y)), self.wavelet_detail_coefs(segment),SignalProcessor.INITIALIZER)
        #segments = np.array(list(segments))
        #try:
        #    segments = np.concatenate(list(self.wavelet_detail_coefs(segment)))
        #except:
        #    return 0
        map_func = lambda x: list(map(lambda y: np.nanmean(y, axis = None), x))
        segments = map(map_func, self.wavelet_detail_coefs(segment))
        segments = list(segments)
        mean_segs = np.nanmean(segments, axis = 0)
        try:
            mean_segs = np.concatenate((mean_segs, np.array([np.nanmean(mean_segs)])),axis = 0)
        except ValueError:
            mean_segs = np.array([np.nan for _ in range(7)])
        return list(mean_segs)

    def mean_kurtosis_wavelet_detail_coefs(self,segment):
        map_func = lambda x: list(map(lambda y: sps.kurtosis(y, axis = None), x))
        segments = map(map_func, self.wavelet_detail_coefs(segment))
        segments = list(segments)
        mean_segs = np.nanmean(segments, axis = 0)
        try:
            mean_segs = np.concatenate((mean_segs, np.array([np.nanmean(mean_segs)])),axis = 0)
        except ValueError:
            mean_segs = np.array([np.nan for _ in range(7)])
        return list(mean_segs)

    def mean_skew_wavelet_detail_coefs(self,segment):
        map_func = lambda x: list(map(lambda y: sps.skew(y, axis = None), x))
        segments = map(map_func, self.wavelet_detail_coefs(segment))
        #segments = filter(lambda x:  not np.isnan(x).any(), segments)
        segments = list(segments)
        mean_segs = np.nanmean(segments, axis = 0)
        try:
            mean_segs = np.concatenate((mean_segs, np.array([np.nanmean(mean_segs)])),axis = 0)
        except ValueError:
            mean_segs = np.array([np.nan for _ in range(7)])
        #if np.isnan(mean_segs):
        #    mean_segs = 0
        return list(mean_segs)

    def mean_std_wavelet_detal_coefs(self,segment):
        map_func = lambda x: list(map(lambda y: np.nanstd(y, axis = None), x))
        segments = map(map_func, self.wavelet_detail_coefs(segment))
        #segments = filter(lambda x:  not np.isnan(x).any(), segments)
        segments = list(segments)
        mean_segs = np.nanmean(segments, axis = 0)
        try:
            mean_segs = np.concatenate((mean_segs, np.array([np.nanmean(mean_segs)])),axis = 0)
        except ValueError:
            mean_segs = np.array([np.nan for _ in range(7)])
        #if np.isnan(mean_segs):
        #    mean_segs = 0
        return list(mean_segs)

    def mean_entropy_for_segment(self, segment):
        segments = self.get_segment(segment)
        segments = map(lambda x: SignalProcessor.entropy(x.ravel()), segments)
        segments = list(segments)
        return np.nanmean(segments)

    def mean_wavelet_detail_coefs_entropy(self,segment):
        map_func = lambda x: list(map(lambda y: SignalProcessor.entropy(y),x))
        segments = list(self.wavelet_detail_coefs(segment))
        segments = map(map_func, segments)
        segments = list(segments)
        mean_segs = np.nanmean(segments, axis = 0)

        ''' aux = []
        aux_mat = None
        mean_segs = None
        nan_sums = None
        for list_elem in segments:
            aux.append(list(list_elem))
            if len(aux) == 2:
                aux_mat = np.array(aux)
                if mean_segs is None:
                    nan_sums = np.sum(~np.isnan(aux_mat),axis= 0)
                    mean_segs = np.nansum(aux_mat, axis = 0)
                else:
                    mean_segs = np.nansum(np.concatenate([mean_segs,aux_mat], axis = 0),axis = 0)
                    nan_sums += np.sum(~np.isnan(aux_mat), axis= 0)
                mean_segs = np.reshape(mean_segs,(1,mean_segs.shape[0]))
                aux = []
        if aux:
            aux_mat = np.array(aux)
            mean_segs = np.nansum(np.concatenate([mean_segs,aux_mat], axis = 0))
            nan_sums += np.sum(~np.isnan(aux_mat), axis= 0)
        mean_segs = mean_segs / nan_sums '''
        try:
            mean_segs = np.concatenate((mean_segs, np.array([np.nanmean(mean_segs)])),axis = 0)
        except ValueError:
            mean_segs = np.array([np.nan for _ in range(7)])
        return list(mean_segs)


    def mean_sample_entropy_for_segment(self,segment):
        segments = self.get_segment(segment)
        segments = filter(lambda x: x.shape[0] != 0, segments)
        try:
            segments = np.concatenate(list(segments))
        except ValueError:
            return np.nan
        ''' segments = map(lambda x: entr.sample_entropy(x.ravel(),1,.2*np.nanstd(x))[0],segments)
        segments = list(segments) '''
        try:
            return smp.sampen2(list(segments.ravel())[:300],1,normalize=True)[1][1]
        except (ValueError, ZeroDivisionError):
            return np.nan

    def mean_sample_entropy_wavelet_detail_coefs(self, segment):
        segments = reduce(lambda x,y: map(lambda z: np.concatenate(z),zip(x,y)),
            self.wavelet_detail_coefs(segment), 
            [np.array([])]*6)
        segments = map(lambda y: SignalProcessor.sampen_wavelet_coefs(y),segments)
        segments = list(segments)
        try:
            return segments + [np.nanmean(segments)]
        except (ValueError, TypeError):
            return [np.nan]*7
        ''' mean_segs = np.nanmean(segments, axis = 0)
        try:
            mean_segs = np.concatenate((mean_segs, np.array([np.nanmean(mean_segs)])),axis = 0)
        except ValueError:
            mean_segs = np.array([np.nan for _ in range(7)])
        return list(mean_segs) '''

    def get_qrs_waves(self,points):
        assert len(points) == 3, "3 points are required"
        inverted = self.wave_inverted('qrs_complex')
        comp_fun = None
        delta= points[-1]-points[0]
        if inverted:
            comp_fun = np.argmax
        else:
            comp_fun = np.argmin
        mini_max_index = comp_fun(self.record.p_signals[points[0]: points[1]])
        q_wave = mini_max_index + points[0]
        mini_max_index = comp_fun(self.record.p_signals[points[1]:points[-1]])
        s_wave = mini_max_index + points[0]
        return q_wave, points[1], s_wave

        def pqrst_waves(self):
            transform_fun = lambda x: p[1]
            waves = [list(map(transform_fun,self.segments['p_wave'])),
                list(map(transform_fun,self.segments['t_wave']))]
            qrs_waves = map(get_qrs_waves,self.segments['qrs_complex'])
            q_waves = []
            r_waves = []
            s_waves = []
            for q,r,s  in qrs_waves:
                q_waves.append(q)
                r_waves.append(r)
                s_waves.append(s)
            waves.insert(1,s_waves)
            waves.insert(1,r_waves)
            waves.insert(1,q_waves)
            return waves
        


def get_features(sig_processor_object,name):
    feature_list = [name]
    mean_rr_val = sig_processor_object.get_mean_rr_value()
    aux, _ = sig_processor_object.calculate_heart_rate()
    feature_list.append(sig_processor_object.get_pr_interval_durations_entropy())
    feature_list.append(sig_processor_object.get_p_wave_durations_entropy())
    feature_list.append(sig_processor_object.get_qt_interval_entropy())
    feature_list.append(sig_processor_object.get_t_wave_durations_entropy())
    feature_list.append(sig_processor_object.wave_inverted('p_wave'))
    feature_list.append(sig_processor_object.wave_inverted('qrs_complex'))
    feature_list.append(sig_processor_object.wave_inverted('t_wave'))
    feature_list.append(aux)
    feature_list.append(sig_processor_object.mean_duration_of_interval('pr_interval'))
    feature_list.append(sig_processor_object.mean_duration_of_interval('p_wave'))
    feature_list.append(sig_processor_object.mean_duration_of_interval('qt_interval'))
    feature_list.append(mean_rr_val)
    feature_list.append(sig_processor_object.mean_duration_of_interval('t_wave'))
    feature_list.append(sig_processor_object.mean_duration_of_interval('qrs_complex'))
    feature_list.append(sig_processor_object.mean_amplitude_of_wave('p_wave'))
    feature_list.append(sig_processor_object.mean_amplitude_of_wave('qrs_complex'))
    feature_list.append(sig_processor_object.mean_amplitude_of_wave('t_wave'))
    feature_list.append(sig_processor_object.rr_difs_prop_greather_than())
    feature_list.append(sig_processor_object.rr_difs_prop_greather_than(0.05))
    feature_list.append(sig_processor_object.root_mean_square_of_rr_differences())
    feature_list.append(sig_processor_object.sd_of_durations('pr_interval'))
    feature_list.append(sig_processor_object.sd_of_durations('p_wave'))
    feature_list.append(sig_processor_object.sd_of_durations('qt_interval'))
    feature_list.append(sig_processor_object.sd_of_rr_difs())
    feature_list.append(sig_processor_object.sd_of_durations('rr_interval'))
    feature_list.append(sig_processor_object.sd_of_durations('t_wave'))
    feature_list.append(sig_processor_object.sd_of_amplitudes('p_wave'))
    feature_list.append(sig_processor_object.sd_of_amplitudes('qrs_complex'))
    feature_list.append(sig_processor_object.sd_of_amplitudes('t_wave'))
    feature_list.append(sig_processor_object.sd_of_durations('qrs_complex'))
    feature_list.append(sig_processor_object.mean_amplitude_on_segments('pr_segment'))
    feature_list.append(sig_processor_object.mean_amplitude_on_segments('st_segment'))
    feature_list.append(sig_processor_object.mean_amplitude_on_segments('tp_segment'))
    feature_list.append(sig_processor_object.variance_amplitude_segments('pr_segment'))
    feature_list.append(sig_processor_object.variance_amplitude_segments('st_segment'))
    feature_list.append(sig_processor_object.variance_amplitude_segments('tp_segment'))
    feature_list.append(sig_processor_object.skewnes_segment('pr_segment'))
    feature_list.append(sig_processor_object.skewnes_segment('st_segment'))
    feature_list.append(sig_processor_object.skewnes_segment('tp_segment'))
    feature_list.append(sig_processor_object.kurtosis_of_segment('pr_segment'))
    feature_list.append(sig_processor_object.kurtosis_of_segment('st_segment'))
    feature_list.append(sig_processor_object.kurtosis_of_segment('tp_segment'))
    feature_list.append(sig_processor_object.mean_entropy_for_segment('pr_segment'))
    feature_list.append(sig_processor_object.mean_entropy_for_segment('st_segment'))
    feature_list.append(sig_processor_object.mean_entropy_for_segment('tp_segment'))
    feature_list.append(sig_processor_object.mean_sample_entropy_for_segment('pr_segment'))
    feature_list.append(sig_processor_object.mean_sample_entropy_for_segment('st_segment'))
    feature_list.append(sig_processor_object.mean_sample_entropy_for_segment('tp_segment'))
    feature_list += sig_processor_object.mean_wavelet_detail_coefs('pr_segment')
    feature_list += sig_processor_object.mean_wavelet_detail_coefs('st_segment')
    feature_list += sig_processor_object.mean_wavelet_detail_coefs('tp_segment')
    feature_list += sig_processor_object.mean_kurtosis_wavelet_detail_coefs('pr_segment')
    feature_list += sig_processor_object.mean_kurtosis_wavelet_detail_coefs('st_segment')
    feature_list += sig_processor_object.mean_kurtosis_wavelet_detail_coefs('tp_segment')
    feature_list += sig_processor_object.mean_skew_wavelet_detail_coefs('pr_segment')
    feature_list += sig_processor_object.mean_skew_wavelet_detail_coefs('st_segment')
    feature_list += sig_processor_object.mean_skew_wavelet_detail_coefs('tp_segment')
    feature_list += sig_processor_object.mean_std_wavelet_detal_coefs('pr_segment')
    feature_list += sig_processor_object.mean_std_wavelet_detal_coefs('st_segment')
    feature_list += sig_processor_object.mean_std_wavelet_detal_coefs('tp_segment')
    feature_list += sig_processor_object.mean_wavelet_detail_coefs_entropy('pr_segment')
    feature_list += sig_processor_object.mean_wavelet_detail_coefs_entropy('st_segment')
    feature_list += sig_processor_object.mean_wavelet_detail_coefs_entropy('tp_segment')
    feature_list += sig_processor_object.mean_sample_entropy_wavelet_detail_coefs('pr_segment')
    feature_list += sig_processor_object.mean_sample_entropy_wavelet_detail_coefs('st_segment')
    feature_list += sig_processor_object.mean_sample_entropy_wavelet_detail_coefs('tp_segment')
    feature_list.append(sig_processor_object.zero_crossing_rate())
    return feature_list

def stringify_features(element):
    elem = str(element)
    if elem =='nan': 
        elem = ''
    elif elem =='inf':
        elem = '1000000'
    elif elem =='-inf':
        elem = '-1000000'
    return elem


if __name__ == "__main__":
    args = parser.parse_args()
    dir_file = args.file_path
    list_files = []
    place_holder_names = [ 'Aproximation'] + [ "Level: " + str(i) for i in range(5,0,-1)] + ["Mean Levels"]
    field_names = [
        "file name",
        "PR interval duration entropy",
        "P wave duration entropy",
        "QT interval duration entropy",
        "T wave duration entropy",
        'P wave inverted',
        "QRS inverted",
        "T wave inverted",
        "Heart rate",
        "Mean duration or PR interval",
        "Mean duration of P wave",
        "Mean duration of QT interval",
        "Mean duration of RR interval",
        "Mean duration of T wave",
        "Mean duration of QRS complex",
        "Mean amplitude of P wave",
        "Mean apmlitude of QRS complex",
        "Mean amplitude of T wave",
        "RR differences greater than 20 ms",
        "RR differences greater than 50 ms",
        "Root mean square of RR differences",
        "Standard deviation for PR interval duration",
        "Standard deviation for P wave duration",
        "Standard deviation for QT interval duration",
        "Standard deviation for RR differences",
        "Standard deviation for RR interval duration",
        "Standard deviation for T wave",
        "Standard deviation for P wave amplitude",
        "Standard deviation for QRS complex apmplitude",
        "Standard Deviation for T wave amplitude",
        "Standard Deviation for QRS complex duration",
        "Mean aplitude of left segment",
        "Mean amplitude of mid segment",
        "Mean amplitude of right segment",
        "Variance of amplitude of left segment",
        "Variance of amplitude of mid segment",
        "Variance of amplitude of right segment",
        "Skew of amplitude of left segment",
        "Skew of aplitude mid segment",
        "Skew of amplitude right segment",
        "Kurtosis of amplitude on left segment ",
        "Kurtosis of amplitude on mid segment",
        "Kurtosis of amplitude on right segment",
        "Mean Entropy on left segment",
        "Mean Entropy on mid segment",
        "Mean Entropy on right segment",
        "Mean sample entropy on left segment",
        "Mean sample entropy on mid segment",
        "Mean sample entropy on right segment"
    ] \
    + [ "Mean wavelet detail coeficient on left segment" + i for i in place_holder_names ] \
    + [ "Mean wavelet detail coeficient on mid segment" + i for i in place_holder_names ] \
    + [ "Mean wavelet detail coeficient on right segment" + i for i in place_holder_names ] \
    + [ "Mean kurtosis on wavelet detail coeficient on left seg. " + i for i in place_holder_names ] \
    + [ "Mean kurtosis on wavelet detail coeficient on mid seg." + i for i in place_holder_names ] \
    + [ "Mean kurtosis on wavelet detail coeficient on right seg." + i for i in place_holder_names ] \
    + [ "Mean skew on wavelet detail coeficient on left segment" + i for i in place_holder_names ] \
    + [ "Mean skew on wavelet detail coeficient on mid segment" + i for i in place_holder_names ] \
    + [ "Mean skew on wavelet detail coeficient on right segment" + i for i in place_holder_names ] \
    + [ "Mean std of wavelet detail coefficients from left seg" + i for i in place_holder_names ] \
    + [ "Mean std of wavelet detail coefficients from mid seg" + i for i in place_holder_names ] \
    + [ "Mean std of wavelet detail coefficients from right seg" + i for i in place_holder_names ] \
    + [ "Mean entropy on wavelet detail coefficients from left seg" + i for i in place_holder_names ] \
    + [ "Mean entropy on wavelet detail coefficients from mid seg" + i for i in place_holder_names ] \
    + [ "Mean entropy on wavelet detail coefficients from right seg" + i for i in place_holder_names ] \
    + [ "Mean sample entropy on wavelet detail coefficients from left seg" + i for i in place_holder_names ] \
    + [ "Mean sample entropy on wavelet detail coefficients from mid seg" + i for i in place_holder_names ] \
    + [ "Mean sample entropy on wavelet detail coefficients from right seg" + i for i in place_holder_names ]
    field_names.append("Zero crossing rate")
    field_names.append("Class")

    SEPARATOR = ','
    print_file = stdout
    if args.output_file:
        print_file = open(args.output_file,'w')
    print(SEPARATOR.join(field_names),file = print_file)
    if dir_file == './':
        list_files = listdir()
        list_files = map(lambda x: x[:-4],filter(lambda x: re.match('.*\.hea',x), list_files))
        list_files = list(np.unique(list(list_files)))
        pathology_file = open('../REFERENCE-v3.csv','r')
        for item in list_files:
            print('Processing file: ' + item)
            line = pathology_file.readline()
            label = line.split(',')
            label = label[-1].strip('\n')
            try:
                spobj = SignalProcessor(item)
                #spobj.detect_segments()
                spobj.detect_segments_new()
                features = get_features(spobj,item)
                features = list(map(stringify_features,features))
                features.append(label)
                print(SEPARATOR.join(features), file = print_file)
            except Exception as e:
                print("Error with file: "+item+"\n"+str(e), file = sys.stderr)
                

    else:
        ti = time.time()
        item = dir_file
        print('Processing file: ' + item)
        spobj = SignalProcessor(item)
        #spobj.detect_segments()
        spobj.detect_segments_new()
        features = get_features(spobj,item)
        features = list(map(str,features))
        print(SEPARATOR.join(features), file = print_file)
        tf = time.time()
        print("Elapsed time: " + str(tf-ti)+"s")

    
    if args.output_file:
        print_file.close()