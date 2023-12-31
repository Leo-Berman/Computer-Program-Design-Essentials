# file: lecture_08/GNUMakefile
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: matrix_multiply.exe

# define a target to link the application
#
matrix_multiply.exe: matrix_multiply.o mm_00.o mm_01.o
	g++ -g -lm matrix_multiply.o mm_00.o mm_01.o -o matrix_multiply.exe

# define targets to compile the source code
#
matrix_multiply.o: matrix_multiply.cc MyMatrix.h Makefile
	g++ -g -c matrix_multiply.cc -o matrix_multiply.o

mm_00.o: mm_00.cc MyMatrix.h Makefile
	g++ -g -c mm_00.cc -o mm_00.o

mm_01.o: mm_01.cc MyMatrix.h Makefile
	g++ -g -c mm_01.cc -o mm_01.o
# define a target to clean the directory
#
clean:
	rm -f matrix_multiply.o mm_00.o mm_01.o matrix_multiply.exe

#
# end of file


