# file: lecture_04/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the applimyprogtestion
#
all: myprogtest.exe

# define a target to link the applimyprogtestion
#
myprogtest.exe: myprogtest.o 
	gcc -O -lm myprogtest.o -o myprogtest.exe

# define targets to compile the source code
#
myprogtest.o: myprogtest.cc myprogtest.h Makefile
	gcc -O -c myprogtest.cc -o myprogtest.o

# define a debug target
#
debug:
	gcc -g -o myprogtest.exe myprogtest.cc

# define a target to clean the directory
#
clean:
	rm -f myprogtest.o myprogtest.exe

#
# end of file

