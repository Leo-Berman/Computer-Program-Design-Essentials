# file: lecture_08/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: p05.exe

# define a target to link the application
#
p05.exe: p05.o inttobin_00.o
	g++ -g -lm p05.o inttobin_00.o -o p05.exe

# define targets to compile the source code
#
p05.o: p05.cc p05.h Makefile
	g++ -g -c p05.cc -o p05.o

inttobin_00.o: inttobin_00.cc p05.h Makefile
	g++ -g -c inttobin_00.cc -o inttobin_00.o

# define a target to clean the directory
#
clean:
	rm -f p05.o inttobin_00.o p05.exe

#
# end of file


