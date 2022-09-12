#!/bin/sh
#
#Sets the file to the first input after you execute your shell
file=$1
#
#Sets the variable path to the path of the file you just imported
path=$(realpath "$1")
#
#Sets the variable filesize to be the byte size following the path you just gave it.
#The -c makes it just bytes and the file path and the awk filters
#our everything except for the first field
filesize=$(wc -c $path | awk '{print $1}')
#
#Prints the outcome
echo the size of $1 'in' bytes is $filesize
# end of script
