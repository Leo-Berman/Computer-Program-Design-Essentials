import sys
import numpy
import os
import subprocess

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
            
