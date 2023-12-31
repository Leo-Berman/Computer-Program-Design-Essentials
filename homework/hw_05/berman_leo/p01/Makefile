# file: lecture_08/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: p01.exe

# define a target to link the application
#
p01.exe: p01.o p01_00.o p01_01.o
	g++ -g -lm p01.o p01_00.o p01_01.o -o p01.exe

# define targets to compile the source code
#
p01.o: p01.cc p01.h Makefile
	g++ -g -c p01.cc -o p01.o

p01_00.o: p01_00.cc p01.h Makefile
	g++ -g -c p01_00.cc -o p01_00.o

p01_01.o: p01_01.cc p01.h Makefile
	g++ -g -c p01_01.cc -o p01_01.o

# define a target to clean the directory
#
clean:
	rm -f p01.o p01_00.o p01.exe

#
# end of file


