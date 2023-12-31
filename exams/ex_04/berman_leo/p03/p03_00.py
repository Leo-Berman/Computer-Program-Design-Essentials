import sys
import numpy
import os
import subprocess
import math
import array
import struct
from array import array
import random

def checkhelp():
    
    # Lops through the arguments looking for help argument
    #
    for x in sys.argv:
        
        # Checks to see if the current argument is the same as
        # -help (Case insensitive)
        #        
        if x.casefold() == '-help'.casefold():
            
            # Prints that the argument of -help was found
            #    
            print("\nHelp argument found:")
            
            # Calls a command line argument for the help file
            #    
            subprocess.run(["more","help.txt"])
            
            # Exits the program if it finds the help arg
            #    
            exit()
            
class GenCombo:

    gain=-1
    wav=array('h')

    def __init__(self,g):
        self.gain=g
        
    def create(self,inp1,inp2,out):
        f1=open(inp1,'rb')
        f2=open(inp2,'rb')
        f3=open(out,'wb')
        a = numpy.fromfile(f1,'h',-1)
        b = numpy.fromfile(f2,'h',-1)
        if len(a)!=len(b):
            print("Length of first file does not equal length of second file")
            exit()
        for x in range(0,len(a)):            
            ll=(a[x]+(self.gain*b[x]))

            self.wav.append(int(ll))
        f3.write(self.wav)
