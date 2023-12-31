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
            
class GenNoise:

    samp=-1
    dura=-1
    numsamps=-1
    gain=-1
    wav=array('h')

    def __init__(self,g,S,dur):
        self.samp=S
        self.numsamps=(S*dur)
        self.dura=dur
        self.gain=g

    def generate(self,ti,d):
        for a in range (int(ti),int(d)):
            self.wav.append(int(self.compute()))

    def compute(self):
        w=self.gain*random.uniform(-1,1)
        print(w)
        return w

    def create(self,fname):
        self.generate(0,self.numsamps)
        f=open(fname,'wb')
        f.write(self.wav)
