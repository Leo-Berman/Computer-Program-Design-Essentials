# file: lecture_04/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the applimycat_02ion
#
all: mycat_02.exe

# define a target to link the applimycat_02ion
#
mycat_02.exe: mycat_02.o 
	gcc -O -lm mycat_02.o -o mycat_02.exe

# define targets to compile the source code
#
mycat_02.o: mycat_02.cc mycat_02.h Makefile
	gcc -O -c mycat_02.cc -o mycat_02.o

# define a debug target
#
debug:
	gcc -g -o mycat_02.exe mycat_02.cc

# define a target to clean the directory
#
clean:
	rm -f mycat_02.o mycat_02.exe

#
# end of file

