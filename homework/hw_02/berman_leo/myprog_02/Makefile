# file: lecture_04/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: myprog_02.exe

# define a target to link the application
#
myprog_02.exe: myprog_02.o 
	gcc -O -lm myprog_02.o -o myprog_02.exe

# define targets to compile the source code
#
myprog_02.o: myprog_02.cc myprog_02.h Makefile
	gcc -O -c myprog_02.cc -o myprog_02.o

# define a debug target
#
debug:
	gcc -g -o myprog_02.exe myprog_02.cc

# define a target to clean the directory
#
clean:
	rm -f myprog_02.o myprog_02.exe

#
# end of file

