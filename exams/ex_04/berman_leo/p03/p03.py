import sys
import numpy
import p03_00 as myfunct
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
    gain = float(sys.argv[3])


    obj1 = myfunct.GenCombo(gain)
    obj1.create(sys.argv[1],sys.argv[2],sys.argv[4])

main()
