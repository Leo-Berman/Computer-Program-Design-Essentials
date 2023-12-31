# file: lecture_08/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: p04.exe

# define a target to link the application
#
p04.exe: p04.o inttobin_00.o
	g++ -g -lm p04.o inttobin_00.o -o p04.exe

# define targets to compile the source code
#
p04.o: p04.cc p04.h Makefile
	g++ -g -c p04.cc -o p04.o

inttobin_00.o: inttobin_00.cc p04.h Makefile
	g++ -g -c inttobin_00.cc -o inttobin_00.o

# define a target to clean the directory
#
clean:
	rm -f p04.o inttobin_00.o p04.exe

#
# end of file


