// includes header file
//
#include "p03.h"

// main entry point for program
// primes the program to use a command line argument
//
int main(int argc, char* argv[]) {

  // creates an array of floats with the given
  // command line parameter
  //
  short int array[atoi(argv[1])];

  // opens/creates a file for writing
  //
  FILE *fp = fopen("array.txt","w");

  // loops through the amount given by the command
  // line argument
  //
  for(int i=0;i<atoi(argv[1]);i++) {

    // sets the values of the array of floats
    //
    array[i] = i+1;
 }

  // writes the values read into the file
  //
  fwrite(array,sizeof(short int),atoi(argv[1]),fp);

  // closes the file
  //
  fclose(fp);  

  // exits gracefully
  //
  return 1;
}
