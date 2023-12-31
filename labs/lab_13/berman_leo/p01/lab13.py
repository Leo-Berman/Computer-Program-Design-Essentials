import sys
import lab13_00 as myfunct
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
    samp = float(sys.argv[3])
    amp = float(sys.argv[4])
    time = float(sys.argv[5])
    phase = float(sys.argv[6])

    # creates an array
    #
    arr = array('h')

    # Generates the correct number of samples
    #
    t=[]
    for x in range(int(samp*time)):
        t.append(x)

    # Calculates the value
    #
    for x in t:
        arr.append(int(amp*math.sin(2*3.1415*freq*(float(x)/samp))))
    
        # Opens the file for writing in binary
        #
        f=open(sys.argv[1],'wb')

    f.write(arr)

main()
