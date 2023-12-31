import sys
import numpy
import os
import subprocess

# Defines a function to check files for a match
#
def checkformatch(cmpstr,fn,total):
    
    # opens the file and error checks
    #    
    try:

        workfile = open(fn,"r")
    
    except:

        # Calls a command line argument for the help file
        #
        subprocess.run(["more","help.txt"])
        
    # reads the lines from the file
    #
    lines=workfile.readlines()

    # Sets the linenum
    #
    linenum=0

    # Loops through the lines
    #
    for x in lines:

        # Keeps track of the line number
        #
        linenum=linenum+1

        # Splits the lines into words
        #
        curline=x.strip().split()

        # Loops through the individual words
        #
        for y in curline:

            # Compares the word to the given compare word
            #
            if y.casefold()==cmpstr.casefold():

                #Prints the statement of filename, linenumber, and
                # line itsself
                #
                print('File Name:',fn)
                print('LineNum ',linenum," : ",x)

                # Keeps track of the total
                #
                total=total+1
    # returns the new count
    #
    return(total)

# Lops through the arguments looking for help argument
#
for x in sys.argv:

    # Checks to see if the current argument is the same as
    # -help (Case insensitive)
    #
    if x.casefold() == '-help'.casefold():

        # Prints that the argument of -help was found
        #
        print("Help argument found:")

        # Calls a command line argument for the help file
        #
        subprocess.run(["more","help.txt"])

        # Exits the program if it finds the help arg
        #
        exit()

        
# Defines a number to keep count of how many matches there are
#
total = 0

# Loops through the command line arguments
#
for x in sys.argv[2:]:

    # Cals the function written above giving it
    # the compare word, the current line and
    # the total matched words so far
    #
    total = checkformatch(sys.argv[1],x,total)

# Prints the total number of lines matched
#
print('Lines matched = ',total)
