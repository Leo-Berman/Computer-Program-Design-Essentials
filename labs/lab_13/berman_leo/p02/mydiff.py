import sys
import numpy
import mydiff_00 as myfunct
import math
import array
import struct
from array import array


def main():
    # Calls the checkhelp function
    #
    myfunct.checkhelp()
    
    # Opens the files for reading
    #
    f1 = open(sys.argv[1],'rb')
    f2 = open(sys.argv[2],'rb')
    

    a = numpy.fromfile(f1,'h',-1)
    b = numpy.fromfile(f2,'h',-1)
    if len(a)!=len(b):
        print("Length of first file does not equal length of second file")
        exit()

    
    line = 0
    
    for i in range(len(a)):
        line=line+1
        if a[i]-b[i] != 0:
            print("",line," : ",a[i]-b[i])
main()
