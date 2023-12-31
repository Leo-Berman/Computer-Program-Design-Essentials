import sys
import numpy
import p02_00 as myfunct
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
    gain = float(sys.argv[1])
    samp = float(sys.argv[2])
    duration = float(sys.argv[3])


    obj1 = myfunct.GenNoise(gain,samp,duration)
    obj1.create(sys.argv[4])

main()
