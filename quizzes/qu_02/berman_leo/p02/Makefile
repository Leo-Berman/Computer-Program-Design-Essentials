# file: lecture_04/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: myprog.exe

# define a target to link the application
#
myprog.exe: myprog.o 
	gcc -O -lm myprog.o -o myprog.exe

# define targets to compile the source code
#
myprog.o: myprog.cc myprog.h Makefile
	gcc -O -c myprog.cc -o myprog.o

# define a debug target
#
debug:
	gcc -g -o myprog.exe myprog.cc

# define a target to clean the directory
#
clean:
	rm -f myprog.o myprog.exe

#
# end of file

