# Daniela Socas 
# SVM training 11/17
import numpy as np
from sklearn import svm
from sklearn.svm import SVC
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.model_selection import cross_val_score

#-------------- Loading data ----------------#

header_row = ['Record', 'Segment','Length', 'Symbol','Signal']
sig = pd.read_csv('training.csv', names=header_row)

#b= pd.to_numeric(sig.loc[:,'Signal'], downcast='float')

#-------------- Organizing data ----------------#

sig_train, sig_test, train_label, test_label = train_test_split(sig.loc[:,'Signal'], sig.loc[:,'Symbol'], test_size=0.33, random_state=0)
# print train_label.dtype


#-------------- Model ----------------#

m_svm = svm.SVC()

#model = m_svm.fit(sig_train,train_label) 
#print model.score(sig_test,test_label)