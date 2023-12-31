# file: lecture_08/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: p01a.exe

# define a target to link the application
#
p01a.exe: p01a.o p01a_00.o
	g++ -g -lm p01a.o p01a_00.o -o p01a.exe

# define targets to compile the source code
#
p01a.o: p01a.cc p01a.h Makefile
	g++ -g -c p01a.cc -o p01a.o

p01a_00.o: p01a_00.cc p01a.h Makefile
	g++ -g -c p01a_00.cc -o p01a_00.o

# define a target to clean the directory
#
clean:
	rm -f p01a.o p01a_00.o p01a.exe

#
# end of file


