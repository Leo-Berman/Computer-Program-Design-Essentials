import sys
import numpy
import myplay_00
import math
import os
import random
import time

# Define the list for list of songs
#
songlist=[]

# Adds all files from the directory specified
# into the songlist
#
for file in os.listdir(sys.argv[1]):
    
    if file.endswith(".mp3"):
        songlist.append(file)

# Defines the list that keeps track of songs arlready
# played
#
playedlist=[]

# reads the history file
#
plf=open("history.txt","r")

# reads the history file into the list
#
for line in plf:
    x = line[:-1]
    playedlist.append(x)

print(playedlist)


# closes the file
#
plf.close()

# Shuffles the song list
#
random.shuffle(songlist)

# Sets the infinite loops
#
while True:

    # loops through song list
    #
    for file in songlist:

        # compares song in list to history
        #
        if(file in playedlist):
            a=False
        else:
            a=True

        # if song passes the history comparison
        # it prints the name of the song and "plays"
        # the song as well as adding it onto the history list
        #
        if a == True:

            print(file)
            print("playing song,(sleeping for 3 seconds)")
            playedlist.append(file)


            plf2=open("history.txt","w")
            
            # writes the history to the file
            #
            for x in playedlist:

                plf2.write(x)
                plf2.write('\n')
            plf2.close()

            time.sleep(3)
    playedlist.clear()

    random.shuffle(songlist)


