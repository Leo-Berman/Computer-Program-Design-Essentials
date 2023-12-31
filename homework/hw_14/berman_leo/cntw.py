import sys
import numpy
import cntw_00 as funct
import math
import os
import random
import time

# defines main function
#
def main():

    
    #Defines the list fist for list of files
    #
    flist=[]

    # checks a directory given in the command line
    # and then if it's a text file adds it to the list
    #
    for file in os.listdir(sys.argv[1]):
        if file.endswith(".txt"):
            flist.append(sys.argv[1]+file)
        
    # loops through the text files in list
    #
    for x in flist:

        print("\n"+x+":\n")
        # opens the file
        #
        fp=open(x)

        # reads the file's words
        #
        wordstring=fp.read()

        # closes the file
        #
        fp.close()

        # splits up the files word into a list
        #
        wordlist=wordstring.split()

        # calls a function that counts words frequencys
        # and returns a dictionary that has pairs of the
        # words with their frequencies
        #
        dictionary = funct.wordListToFreqDict(wordlist)

        # calls a function that sorts the dictionary
        #
        sorteddict = funct.sortFreqDict(dictionary)

        # prints the sorted dictionary
        #
        for s in sorteddict: print(str(s))

    print("\n")

# calls main function
#
main()
