# file: lecture_08/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: p02.exe


# define a target to link the application
#
p02.exe: p02.o
	g++ -g -lm p02.o -L/home/tuo54571/libraries -lfuncts -o p02.exe



p02.o: p02.cc Makefile
	g++ -g -c p02.cc -I/home/tuo54571/include -o p02.o


# define a target to clean the directory
#
clean:
	rm -f p02.o p02.exe




#
# end of file


