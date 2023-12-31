import sys
import numpy
import lab14_00 as funct
import math
import array
import struct
from array import array

def main():

    # Loops through all csv files
    #
    for x in sys.argv[1:]:

        # Prints File Name
        #
        print("\n"+x+"\n")

        # Defines a list
        #
        wordlist=[]
        
        # Loop through all the lines
        #
        for line in open(x):
            
            # Splits up all the terms by commas
            #
            csv_row = line.split(',')
            
            # Loops through all the terms
            #
            for y in csv_row:
                
                # Replaces all of the new lines with nothing
                # Deals with encoding
                # Gets rid of leading zeros
                #
                wordlist.append(float(y.replace('\n','').replace('\ufeff','')))

        # calls a function that counts words frequencys
        # and returns a dictionary that has pairs of the
        # words with their frequencyies
        #
        dictionary = funct.wordListToFreqDict(wordlist)

        # calls a function that sorts the dictionary
        # in descending order
        #
        sorteddict = funct.sortFreqDict(dictionary)
        for s in sorteddict: print(str(s))

    

 
        
main()
