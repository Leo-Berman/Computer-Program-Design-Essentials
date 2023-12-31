# file: lecture_08/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: mygrep.exe

# define a target to link the application
#
mygrep.exe: mygrep.o mygrep_00.o
	g++ -g -lm mygrep.o mygrep_00.o -L/home/tuo54571/libraries -lfuncts -o mygrep.exe


# define targets to compile the source code
#
mygrep.o: mygrep.cc mygrep.h Makefile
	g++ -g -c mygrep.cc -I/home/tuo54571/include/ -o mygrep.o


mygrep_00.o: mygrep_00.cc mygrep.h Makefile
	g++ -g -c mygrep_00.cc -I/home/tuo54571/include/ -o mygrep_00.o

# define a target to clean the directory
#
clean:
	rm -f mygrep.o mygrep_00.o mygrep.exe

#
# end of file


