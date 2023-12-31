# file: lecture_08/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: p01b.exe

# define a target to link the application
#
p01b.exe: p01b.o p01b_00.o
	g++ -g -lm p01b.o p01b_00.o -o p01b.exe

# define targets to compile the source code
#
p01b.o: p01b.cc p01b.h Makefile
	g++ -g -c p01b.cc -o p01b.o

p01b_00.o: p01b_00.cc p01b.h Makefile
	g++ -g -c p01b_00.cc -o p01b_00.o

# define a target to clean the directory
#
clean:
	rm -f p01b.o p01b_00.o p01b.exe

#
# end of file


