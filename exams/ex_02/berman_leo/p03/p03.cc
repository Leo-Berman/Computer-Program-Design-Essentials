// includes header file
//
#include "p03.h"
// main entry point for program
//
int main(int argc, char* argv[]) {
  
  // checks for the correct amount of arguments
  //

  /*
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
  */
  // opens file to read and error handling
  //
  FILE *fp = fopen(argv[1],"r");


FILE *fq = fopen(argv[2],"r");


  short int arr[100];
  short int arr2[100];
  int W = 100;
  
  fread(arr,sizeof(short int),W,fp);
fread(arr2,sizeof(short int),W,fq);
 weighting2(W,arr,arr2);
  /* 
  // sets an array of short ints the size of the samples
  // in a window
  // W
  //
  short int buffer[M];
  
  // sets a working buffer for the reading
  // M
  short int buff[N];
  
  // initializes by setting the buffer to all be equal to 0
  //
  for(int i = 0;i<M;i++) {
    buffer[i]=0;
  }
  
  // preinitializes with the correct amoutn of prereads
  //
  fread(buffer,sizeof(short int),M,fp);

  // sets a variables to keep track of the frames
  //
  int frame = 1;
  
  // calls a functions to perform the weighting
  //
  weighting(M,buffer,frame);    
  printf("\n");

  // shifts the windows
  //
  for(int i = 0;i<M-N;i++) {
    buffer[i]=buffer[i+N];
  }
  
  // sets a loop to read through all the integers
  // N amount at a time into the buffer
  //
  while(fread(&buffer[M-N],sizeof(short int),N,fp)){
    frame++;

    // prints the window
    //
    for(int i = 0;i<M;i++){
    printf("[%d]",buffer[i]);
    }

    
    // calls a function to perform the weighting
    //
 // weighting(M,buffer,frame);    
    
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
  */
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


