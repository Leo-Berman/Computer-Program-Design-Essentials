import sys
import numpy
import os
import subprocess
import math
import array
import struct
from array import array

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
            
class GenSinewave:

    amp=-1
    freq=-1
    phase=-1
    samp=-1
    numsamps=-1
    dura=-1    
    wav=array('h')
    def __init__(self,A,F,P,S,dur):
        self.amp=A
        self.freq=F
        self.phase=P
        self.samp=S
        self.numsamps=(S*dur)
        self.dura=dur

    def generate(self,ti,d):

        for a in range (int(ti),int(d)):
            self.wav.append(int(self.compute(a)))
#            print(self.wav)

    def compute(self,t):
        first=2*math.pi*self.freq
        second=t/self.samp
        third=(self.phase/360)*2*math.pi
        fourth=math.sin(first*second+third)
        w=self.amp*fourth
        print(w)
        return w

    def create(self,fname):
        self.generate(0,self.numsamps)
        f=open(fname,'wb')
        f.write(self.wav)
