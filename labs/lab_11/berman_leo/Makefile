# file: lecture_08/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: mymath.exe

# define a target to link the application
#
mymath.exe: mymath.o mat_00.o
	g++ -g -lm mymath.o mat_00.o -L/home/tuo54571/libraries -lfuncts -o mymath.exe


# define targets to compile the source code
#
mymath.o: mymath.cc mymatrix.h Makefile
	g++ -g -c mymath.cc -I/home/tuo54571/include/ -o mymath.o


mat_00.o: mat_00.cc mymatrix.h Makefile
	g++ -g -c mat_00.cc -I/home/tuo54571/include/ -o mat_00.o

# define a target to clean the directory
#
clean:
	rm -f mymath.o mat_00.o mymath.exe

#
# end of file


