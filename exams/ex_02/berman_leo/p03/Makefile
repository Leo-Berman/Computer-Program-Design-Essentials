# file: lecture_08/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: p03.exe

# define a target to link the application
#
p03.exe: p03.o p03_00.o
	g++ -g -lm p03.o p03_00.o -L/home/tuo54571/libraries -lfuncts -o p03.exe


# define targets to compile the source code
#
p03.o: p03.cc p03.h Makefile
	g++ -g -c p03.cc -I/home/tuo54571/include -o p03.o


p03_00.o: p03_00.cc p03.h Makefile
	g++ -g -c p03_00.cc -o p03_00.o

# define a target to clean the directory
#
clean:
	rm -f p03.o p03_00.o p03.exe

#
# end of file


