# file: lecture_04/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: sum27.exe

# define a target to link the application
#
sum27.exe: sum27.o 
	gcc -O -lm sum27.o -o sum27.exe

# define targets to compile the source code
#
sum27.o: sum27.cc sum27.h Makefile
	gcc -O -c sum27.cc -o sum27.o

# define a debug target
#
debug:
	gcc -g -o sum27.exe sum27.cc

# define a target to clean the directory
#
clean:
	rm -f sum27.o sum27.exe

#
# end of file

