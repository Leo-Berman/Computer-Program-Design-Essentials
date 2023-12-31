import sys
import numpy
import p01_00 as myfunct
import math
import array
import struct
from array import array

def main():
    # Calls the checkhelp function
    #
    myfunct.checkhelp()
    
    # Defines variables and grabs them from command line
    #
    freq = float(sys.argv[2])
    samp = float(sys.argv[4])
    amp = float(sys.argv[1])
    time = float(sys.argv[5])
    phase = float(sys.argv[3])


    obj1 = myfunct.GenSinewave(amp,freq,phase,samp,time)
    obj1.create(sys.argv[6])

main()
