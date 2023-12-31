# file: lecture_04/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: example.exe

# define a target to link the application
#
example.exe: example.o 
	gcc -O -lm example.o -o example.exe

# define targets to compile the source code
#
example.o: example.cc example.h Makefile
	gcc -O -c example.cc -o example.o

# define a debug target
#
debug:
	gcc -g -o example.exe example.cc

# define a target to clean the directory
#
clean:
	rm -f example.o example.exe

#
# end of file

