// includes header file
//
#include"MyMatrix.h"

// main entry point for program
//
int main(int argc, char *argv[]) {
  // check if there are three arguments
  //
  if(argc!=3) {
    printf("Error: Wrong number of command line arguments(Number of arguments(%d)",argc);
  }
  // call a function that gets the number of rows in the first file and second file
  //
  long numberofrows1 = rownum(argv[1]);
  long numberofrows2 = rownum(argv[2]);

  // declare a float** for the matrixes
  // casts malloc to be a float**
  //
  float** m1 = (float**)malloc(sizeof(float**)*numberofrows1);
  float** m2 = (float**)malloc(sizeof(float**)*numberofrows2);
  float** m3 = (float**)malloc(sizeof(float**)*numberofrows1);
  // sets a matrix up that contains an array for each row
  // in matrix 1,2, and 3;
  //
  long m1cols[numberofrows1];
  long m2cols[numberofrows2];
  long m3cols[numberofrows1];

  
  // call a function that counts the number of elements
  // into each row if this fails the program exits
  //
  if(getmcols(m2cols,argv[2])==false) {
    exit(1);
  }

  if(getmcols(m1cols,argv[1])==false) {
    exit(1);
  }

  // calls the function matrixread for matrix 1
  //
  bool status = matrixread(m1,m1cols,numberofrows1,argv[1]);

  // error handling
  //
  if (status == false) {
    printf("error reading %s",argv[1]);
    exit (1);
  }

  // calls the function matrixread for matrix 2
  //
  bool status1 = matrixread(m2,m2cols,numberofrows2,argv[2]);
  
  // error handling
  //
  if (status1 == false) {
    printf("error reading %s",argv[2]);
    exit (1);
  }
  
  
  if(checkms(m1,m1cols,numberofrows1,m2,m2cols,numberofrows2) == false) {
    // print error message and exit(1) print dimensions and why the matrixes cannot be multiplied together
    printf("Matrixes cannot be multiplied together with Matrix 1's rows = %d and Matrix 2's columns = %d",numberofrows1,m2cols[0]);
    exit(1);
  }
  // prints the first and second matrix
  //
  
  printf("Matrix 1\n");
  matrixprint(m1,numberofrows1,m1cols);
  printf("Matrix 2\n");
  matrixprint(m2,numberofrows2,m2cols);
  
  
  // calls the matrix multiply function
  //
  
  matrixmultiply(m3,m3cols,m1,m1cols,numberofrows1,m2,m2cols,numberofrows2);
  printf("Answer Matrix\n");
  matrixprint(m3,numberofrows1,m3cols);

  

  for(int i = 0;i<numberofrows1;i++) {
    delete [] m1[i];
    delete [] m3[i];
  }
  
  for(int i = 0;i<numberofrows2;i++) {
    delete [] m2[i];
  }
  // function to clean up memory for m1,m2,m3
  //
  //Exits gracefully
  //
  return 0;
}

