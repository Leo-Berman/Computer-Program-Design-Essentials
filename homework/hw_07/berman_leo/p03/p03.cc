// includes header file
//
#include "p03.h"

// main entry point for program
//
int main(int argc, char* argv[]) {

  // checks for the correct amount of arguments
  //
  if(argc>4) {
    printf("Error,too many input arguments\n");
    exit(1);
  }
  if(argc<4) {
    printf("Error, not enough input arguments\n");
    exit(1);
  }

  // sets the value for the number of samples in a window
  //
  int M = atoi(argv[3]);
  
  // sets the value for the number of samples in a frame
  //
  int N = atoi(argv[2]);
  
  // checks to see if any of the input args are 0 or neg
  //
  if((M <1) | (N < 1)) {
    printf("Error, 1 or more input arguments are negative or 0\n");
    exit(1);
  }
  
  // opens file to read and error handling
  //
  FILE *fp = fopen(argv[1],"r");
  if(fp == NULL) {
    printf("Error opening file.\n");
    exit (1);
  }
  
  // sets an array of short ints the size of the samples
  // in a window
  //
  short int buffer[M];
  
  // sets a working buffer for the reading
  //
  short int buff[N];
  
  // initializes by setting the buffer to all be equal to 0
  //
  for(int i = 0;i<M;i++) {
    buffer[i]=0;
  }
  
  // preinitializes with the correct amoutn of prereads
  //
  fread(&buffer[((M-N)/2)],sizeof(short int),(M-N)/2+((M-N)%2),fp);
  
  // sets a loop to read through all the integers
  // N amount at a time into the buffer
  //
  while(fread(&buffer[M-N],sizeof(short int),N,fp)){
    
    // prints the window
    //
    for(int i = 0;i<M;i++){
      printf("[%d]",buffer[i]);
    }
    
    // shifts the windows
    //
    for(int i = 0;i<M-N;i++) {
      buffer[i]=buffer[i+N];
    } 
    
    // sets the last N frames to zero for when the file
    // runs out of data to read
    //
    for(int i = 0; i<N;i++) {
      buffer[M-i] = 0;
    }
    
    // prints a new line
    //
    printf("\n");
  }
  
  // closes the file
  //
  if(fclose(fp)!=0) {
    printf("Error closing file\n");
    exit(1);
  }
  //exits gracefully
  //
  return 1;
}


