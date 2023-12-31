// includes header file
//
#include "p03.h"

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


  // initializes the random string
  //
  char* array = randomstring(N);

  // allocates memory for the character array
  // holding the answer
  //
  char* ansarr = (char*)malloc(sizeof(char)*N);

  // declares variables to work with
  //
  int i;
  int a;

  // checks for the end of the array by looking for a null character
  // this does not work with character arrays containing multiple null characters
  //
  while(array[i]!='\0') {
    
    // copies the information M bits at a time
    //
    for(a=0;a<M;a++) {      

      //checks for the end of the string
      //
      if(array[i+a]!='\0') {

	// copies the array
	//
	ansarr[i+a]=array[i+a];

	// prints the array and what was copied
	//
	printf("ansarr[%d] = %c array[%d] = %c\n",a+i,ansarr[a+i],a+i,array[a+i]);
      }

      // if it reaches a null character prematurely it
      // will exit the loop and move on to the next step
      //
      else {
	break;
      }
    }

    // keeps the main loop up to date with where the loop
    // is in the file
    //
    i=i+a;
  }

  // frees up allocated memory
  //
  free(ansarr);
  free(array);

  return 1; 
}
