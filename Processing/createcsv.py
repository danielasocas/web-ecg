import sys 
import csv
import os

#os.remove('training.csv')
#os.remove('training-wavelet.csv')

with open('training.csv', 'w') as csvfile:
    filewriter = csv.writer(csvfile, delimiter=',',
                            quotechar='|', quoting=csv.QUOTE_MINIMAL)
    filewriter.writerow(['Record', 'Segment',  'Length', 'Symbol', 'Signal'])   
    
# with open('training-wavelet.csv', 'wb') as csvfile_wave:
#     filewriter_wave = csv.writer(csvfile_wave, delimiter=',',
#                             quotechar='|', quoting=csv.QUOTE_MINIMAL)
#     filewriter_wave.writerow(['Record', 'Segment', 'Length', 'Symbol', 'Signal_wavelet' ])
