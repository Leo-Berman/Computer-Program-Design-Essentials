// includes header file
//
#include "p01b.h"

// main entry point for program
//
int main(int argc, char* argv[]) {
  
  // check for correct number of arguments
  //
  if(argc != 3) {
    printf("Incorrect Number of Arguments Program Exiting\n");
    exit(1);
  }
  
  // sets N and M
  // N is total number of things to do
  // M is blocksize
  //  
  int N = atoi(argv[1]);
  int M = atoi(argv[2]);
  
  // allocates memory for an array of N floats
  //
  float* arr =(float*)malloc(sizeof(float)*N);
  
  // sets an integer to take care of edge cases
  //
  int a;
  
  // loops through N/M number of times which is number of passes
  // of M it takes to create N but rounded down
  //
  for(int m = 1;m<(N/M)+1;m++) {
    
    // keeps track of how many floats have been
    // created
    //
    a = (m)*M;
    
    // generates the floats
    //
    for(int i = 0;i<M;i++) {
      int ar = m*M+i;
      float rand =(float)drand48();
      arr[ar]=rand;
      
      // prints the number
      //
      printf("%.3f\n",arr[ar]);
    }
  }
  
  // checks to see if there is any information left
  // from the main program to be created
  //
  if((N-a)<M) {
    
    // loops through creating floats that weren't made due to rounding in the first // loop
    //
    for(int j =0;j<(N%M);j++) {
      int ar = a+j;
      float rand = (float)drand48();
      arr[ar]=rand;
      
      // prints the float that was just made
      //
      printf("%.3f\n",arr[ar]);
    }
  }
  
  // frees up data allocated to the array
  //
  free(arr);

  // exits gracefully
  //
  return 1; 
}
