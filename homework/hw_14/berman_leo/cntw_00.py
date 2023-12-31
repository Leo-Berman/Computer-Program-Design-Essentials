import sys
import numpy
import math
import os
import random
import time

# defines the sorting function for the dictionary
#
def sortFreqDict(freqdict):

    # Takes the pairs and puts them into a list
    # that combines the values and the word
    #
    aux = [(freqdict[key], key) for key in freqdict]

    # Sorts the pairs by least frequency to highest frequency
    #
    aux.sort()

    # reverses the list
    #
    aux.reverse()

    #returns the list
    #
    return aux

# defines the function for counting word frequency
#
def wordListToFreqDict(wordlist):

    # finds the frequency of each word in the given word list
    #
    wordfreq = [wordlist.count(p) for p in wordlist]

    # returns a dictionary of the list (no dupes)
    #
    return dict(list(zip(wordlist,wordfreq)))
