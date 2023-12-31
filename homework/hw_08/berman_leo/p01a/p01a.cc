// includes header file
//
#include "p01a.h"

// main entry point for program
//
int main(int argc, char* argv[]) {
  
  // check for correct number of arguments
  //
  if (checkargs(argc,3)==false) {
    printf("Incorrect number of arguments, program exiting\n");
    exit (1);
  }
  
  // checks to see if any of the arguments are negative or 0
  //
  if (atoi(argv[1]) <=0 | atoi(argv[2]) <= 0) {
    printf("1 or more arguments are negative, program exiting\n");
    exit (1);
  }

  
  // sets N and M
  //
  int N = atoi(argv[1]);
  int M = atoi(argv[2]);

  // allocates memory for the character array
  //
  float* arr =(float*)malloc(sizeof(float)*N);

  // loops through N-1
  //
  for(int i = 0;i<N-1;i++) {

    // generates random floats
    //
    float rand =(float)drand48();

    // sets the floats into the array
    //
    arr[i]=rand;

    // prints the float
    //
    printf("%.1f\n",arr[i]);
  }

  // frees up the allocated data
  //
  free(arr);

  // exits gracefully
  //
  return 1; 
}
