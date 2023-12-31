# file: lecture_04/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: myprog_01.exe

# define a target to link the application
#
myprog_01.exe: myprog_01.o 
	gcc -O -lm myprog_01.o -o myprog_01.exe

# define targets to compile the source code
#
myprog_01.o: myprog_01.cc myprog_01.h Makefile
	gcc -O -c myprog_01.cc -o myprog_01.o

# define a debug target
#
debug:
	gcc -g -o myprog_01.exe myprog_01.cc

# define a target to clean the directory
#
clean:
	rm -f myprog_01.o myprog_01.exe

#
# end of file

