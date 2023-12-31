# file: lecture_04/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: myprog_03.exe

# define a target to link the application
#
myprog_03.exe: myprog_03.o 
	gcc -O -lm myprog_03.o -o myprog_03.exe

# define targets to compile the source code
#
myprog_03.o: myprog_03.cc myprog_03.h Makefile
	gcc -O -c myprog_03.cc -o myprog_03.o

# define a debug target
#
debug:
	gcc -g -o myprog_03.exe myprog_03.cc

# define a target to clean the directory
#
clean:
	rm -f myprog_03.o myprog_03.exe

#
# end of file

