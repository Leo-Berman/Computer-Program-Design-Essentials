# file: lecture_08/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: p01.exe


# define a target to link the application
#
p01.exe: p01.o
	g++ -g -lm p01.o -L/home/tuo54571/libraries -lfuncts -o p01.exe



p01.o: p01.cc Makefile
	g++ -g -c p01.cc -I/home/tuo54571/include -o p01.o


# define a target to clean the directory
#
clean:
	rm -f p01.o p01.exe




#
# end of file


