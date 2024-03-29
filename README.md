# Miniproyecto 2017

The following project is divided in two parts: 

    * The website: it is a Django website interface for ECG signals.

    * The Pre-processing: process of the ECG signals for forecasting.  

### Prerequisites

To run this project your system needs to have all the packages and versions listed in *requirements.txt*.

## Website for ECG 

This project presents a web interface to deal with ECG signals and images. 

### Objective

Forecast cardiac patologies from ECG signals and images. 

### What can you do?

In our main page you can:

    * Upload ECG signals.
    * Upload ECG images. 
    * Transform ECG signals to ECG images.
    
Future features:

    * Check the signals features.
    * Apply the wavelet transformation. 
    * Detect cardiac patologies.

## Pre-processing ECG signals 
Example tu run: 
```bash
$ sh ECG.sh training2017/ 
```

Path: its the folder with the ECG signals. All the signals have to have .mat and .hea
Also, the folder should be at the same level as the ECG.sh 

training.csv it is an example of an output with 1 signal.

## Authors 

*   **Daniela Socas** 

## Last modified

December 2017

## Acknowledgments
*   Prof. Masun Nabham
*   Manuel Gomes
*   David Klie