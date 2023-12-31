// includes standard input/output and includes the standard library
// which is necessary for the atov argument
//
#include<stdio.h>
#include<stdlib.h>

// main entry point of the program argc points to the argc which inputs from the command line
//
int main(int argc, char *argv[]) {

  // converts argv[1] into a float
  // converts argv[2] into a long integer
  //
 float a = atof(argv[1]);
 long b = atol(argv[2]);
 
 // long b = argv[2];
  // prints various strings with the requested text assign %s to argvs to take from the command line
  //%.4f sets the float to four decimal places and %.10ld sets the long to 10 digits
  fprintf(stdout, "argv[1]=%.4f \n", a);
  fprintf(stdout, "argv[2]= %.10ld \n", b);
 
  // exits gratefully
  //
    return 0;
          }
