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

fullpath=sys.argv[1][:-4]

#fullpath = "sample/A00001"
record = wfdb.rdsamp(fullpath)


# Detecting R peaks for QRS segments 
d_signal = record.adc()[:,0]
peak_indices = wfdb.processing.gqrs_detect(x=d_signal, fs=record.fs, adcgain=record.adcgain[0], adczero=record.adczero[0], threshold=1.0)
min_bpm = 20
max_bpm = 230
min_gap = record.fs*60/min_bpm
max_gap = record.fs*60/max_bpm
peak_indices = wfdb.processing.correct_peaks(d_signal, peak_indices=peak_indices, min_gap=min_gap, max_gap=max_gap, smooth_window=150)

#QRS segment  
j = 0 
filewriter = csv.writer(open('training.csv', 'a'))
filereader = csv.reader(open('REFERENCE.csv', 'r'))

for row in filereader:
    if row[0] == record.recordname:
        sigsym = row[1]
        break

for i in range(0, len(peak_indices)-2, 2):
    a = peak_indices[i]
    b = peak_indices[i+1]
    c = (b-a)//2
    sf = a - c
    st = a + c
    
    if sf < 0: 
        sf = 0
    if st > record.siglen:
        st = record.siglen
        
    rec = wfdb.rdsamp(fullpath, sampfrom = sf, sampto = st)
    sig = rec.p_signals
    sig = sig.flatten()
    sig = json.dumps(sig.tolist())
    
    filewriter.writerow([rec.recordname, 'S%d-QRS' %j, rec.siglen, sigsym, sig])
    #print(rec.recordname, 'S%d-QRS' %j,rec.siglen, sigsym , sig )

    # Wavelet Haars
    # cA, (cH, cV, cD) = pywt.dwt2(rec.p_signals, 'haar')
    # cA = cA.flatten()


    j = j + 1 

# Last QRS  
rec = wfdb.rdsamp(fullpath, sampfrom = sf)
sig = rec.p_signals
sig = sig.flatten()
sig = json.dumps(sig.tolist())

# Wavelet Haar
#cA, (cH, cV, cD)  = pywt.dwt2(rec.p_signals, 'haar')
#cA = cA.flatten()

#print(rec.recordname, 'S%d-QRS' %j,rec.siglen,  sigsym,  sig )
filewriter.writerow([rec.recordname, 'S%d-QRS' %j, rec.siglen, sigsym, sig  ])
