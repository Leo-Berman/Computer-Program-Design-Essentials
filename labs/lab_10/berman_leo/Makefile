# file: lecture_08/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: mycalculator.exe

# define a target to link the application
#
mycalculator.exe: mycalculator.o mycalculator_00.o
	g++ -g -lm mycalculator.o mycalculator_00.o -L/home/tuo54571/libraries -lfuncts -o mycalculator.exe


# define targets to compile the source code
#
mycalculator.o: mycalculator.cc mycalculator.h Makefile
	g++ -g -c mycalculator.cc -I/home/tuo54571/include/ -o mycalculator.o


mycalculator_00.o: mycalculator_00.cc mycalculator.h Makefile
	g++ -g -c mycalculator_00.cc -I/home/tuo54571/include/ -o mycalculator_00.o

# define a target to clean the directory
#
clean:
	rm -f mycalculator.o mycalculator_00.o mycalculator.exe

#
# end of file


