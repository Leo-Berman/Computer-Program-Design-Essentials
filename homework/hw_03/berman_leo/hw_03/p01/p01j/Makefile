# file: lecture_04/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: p01a.exe

# define a target to link the application
#
p01a.exe: p01a.o 
	gcc -O -lm p01a.o -o p01a.exe

# define targets to compile the source code
#
p01a.o: p01a.cc p01a.h Makefile
	gcc -O -c p01a.cc -o p01a.o

# define a debug target
#
debug:
	gcc -g -o p01a.exe p01a.cc

# define a target to clean the directory
#
clean:
	rm -f p01a.o p01a.exe

#
# end of file

