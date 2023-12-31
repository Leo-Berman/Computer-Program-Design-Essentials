#!/bin/sh
#pwd $1
#wc -l $1 | cut -c1
for FN in $*
do
    path=$(realpath "$FN")
    linecount=$(awk 'END {print NR}' $FN)
    #a=pwd $FN
    #b=wc -l $FN
    echo $path $linecount
done
# end of script
