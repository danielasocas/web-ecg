#Manuel Gomes 11-10375 10/11/17
#Integracion con aplicacion web
import sys
import wfdb
from . import wfdbi


def plotting(fullpath='',grid=1,out=''):
    pass
    #fullpath=sys.argv[1]
    sig=fullpath.split("/")[-1]

    #print(sig)


    f=open(fullpath+".hea", "r")
    samp=int(f.readline().split(" ")[3])
    record = wfdb.rdsamp(fullpath, sampto=samp)
    #print(rname)
    if grid==1:
        wfdbi.plotrec(record, title=sig, timeunits='seconds',figsize = (200,5),
            ecggrids='all',returnfig = False, picpath=out)
    else:
        wfdbi.plotrec(record, title=sig, timeunits='seconds',figsize = (200,5),
            returnfig = False, picpath=out)