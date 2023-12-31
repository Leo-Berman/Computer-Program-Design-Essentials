// includes header file
//
#include "p01.h"

// main entry point of program
//
int main() {

  // sets a string
  //
  char whl[]="width = 27.0\nheight = 99.0\nlength = 33.0\n";

  // opens/creates a file for writing
  //
  FILE *fp = fopen("/data/courses/ece_1111/current/labs/lab_07/berman_leo/p02/whl.txt","w");

  // puts the string in the file
  //
  fputs(whl,fp);

  // closes the file
  //
  fclose (fp);

  // exits gracefully
  //
  return 1;
}
