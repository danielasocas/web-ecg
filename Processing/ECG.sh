##!/bin/bash

python createcsv.py 

for i in $(ls $1)
do
if echo $i | grep ".mat" >> /dev/null; then
  arg="$1$i" 
  #python csvseg.py $arg 
  python csvseg_by2.py $arg 
fi
done


