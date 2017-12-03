import wfdb
import numpy as np
from sklearn import svm
from sklearn.svm import SVC
import os
import matplotlib.pyplot as plt
from IPython.display import display
import sys 
import csv
import pywt
import pandas as pd
import json 

#Specify where gets the signals
fullpath=sys.argv[1][:-4]
#fullpath = "training2017/A00001"  #Used for testing

# Reads the signal as record
record = wfdb.rdsamp(fullpath)

# Detects R peaks for QRS segments 
d_signal = record.adc()[:,0]
peak_indices = wfdb.processing.gqrs_detect(x=d_signal, fs=record.fs, adcgain=record.adcgain[0], adczero=record.adczero[0], threshold=1.0)
min_bpm = 20
max_bpm = 230
min_gap = record.fs*60/min_bpm
max_gap = record.fs*60/max_bpm
peak_indices = wfdb.processing.correct_peaks(d_signal, peak_indices=peak_indices, min_gap=min_gap, max_gap=max_gap, smooth_window=150)

# Gets QRS segment  
j = 0 
filewriter = csv.writer(open('training_1beat_haar.csv', 'w'))
filereader = csv.reader(open('REFERENCE.csv', 'r'))

# Gets the Signal class fro Reference.csv
for row in filereader:
    if row[0] == record.recordname:
        sigsym = row[1]
        break
    
# Gets the signal for every QRS and writes it. 
for i in range(0, len(peak_indices)-1):
    a = peak_indices[i]
    b = peak_indices[i+1]
    c = (b-a)//2
    sf = a - c
    st = a + c
    if sf < 0: 
        sf = 0
    if st > record.siglen: 
        sf = record.siglen     
    rec = wfdb.rdsamp(fullpath, sampfrom = sf, sampto = st)
    sig = rec.p_signals
    sig = sig.flatten()
    
    # Transform the signal in Wavelet Haar
    # cA, (cH, cV, cD) = pywt.dwt2(rec.p_signals, 'haar')
    # cA = cA.flatten()
    
    sig = json.dumps(cA.tolist())
    filewriter.writerow([rec.recordname, 'S%d-QRS' %j, rec.siglen, sig, sigsym])
    #print rec.recordname, 'S%d-QRS' %j, rec.siglen, sigsym, rec.p_signals
    
    j = j + 1 
    
# Last QRS  
rec = wfdb.rdsamp(fullpath, sampfrom = sf)
sig = rec.p_signals
sig = sig.flatten()

# cA, (cH, cV, cD)  = pywt.dwt2(rec.p_signals, 'haar')
# cA = cA.flatten()

#Wavelet Haar other 
#ca,cd = pywt.dwt(rec.p_signals, 'Haar')

sig = json.dumps(cA.tolist())
filewriter.writerow([rec.recordname, 'S%d-QRS' %j, rec.siglen, sig, sigsym])
#print rec.recordname, 'S%d-QRS' %j, rec.siglen, sigsym, rec.p_signals