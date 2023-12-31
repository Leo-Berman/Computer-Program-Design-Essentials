// includes header file
//
#include "p02.h"

// main entry point for program
//
int main(int argc, char* argv[]) {
  
  // check for correct number of arguments
  //
  if(argc != 2) {
    printf("Incorrect Number of Arguments Program Exiting\n");
    exit(1);
  }
  
  // sets N and M
  // N is total number of things to do
  // M is blocksize
  //  
  int N = atoi(argv[1]);
  
  // allocates memory for an array of N floats
  //
  float* arr =(float*)malloc(sizeof(float)*N);
  
  
  // sets in intgeter to work with the while loop
  //
  int i;
  i = N;
  
  
  while(i<=N&&i>0) {
    
    // generates a random integer for the random amount to loop through
    //
    int j =rand();
    
    
    // checks to see if there are more arguments being read
    //
    if(j>i) {
      j=i;
    }
    
    // sets an integer so it knows how many integers have been
    // created
    int M=j;
    
    // generates M elements
    //
    while(j>0) {
      float rand = 10*(float)drand48();
      arr[i-j]=rand;
      printf("arr[%d] = %.3f\n",i-j,arr[i-j]);
      j--;
    }
    
    // tells the loop how many terms are left
    //
    i=i-M;
  }
  // exits gracefully
  //
  return 1; 
}
