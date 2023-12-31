// includes header file
//
#include "p04.h"

// main entry point of program
//
int main(int argc, char* argv[]) {

  // opens file for reading
  //
  FILE *fp = fopen("array.txt","r");

  // sets an array of floats
  //
  float raed[atoi(argv[1])];

  // reads argv values from the file
  //
  fread(raed,4,atoi(argv[1]),fp);

  // loops through 100 times
  //
  for(int i = 0;i<atoi(argv[1]);i++) {

    // prints the values that were read to 3 decimal
    // places
    //
    printf("Value %d = %.3f\n",i+1,raed[i]);
  }

  // closes the file
  //
  fclose(fp);  

  // exits gracefully
  //
  return 1;
}

