// standard input/output
//
#include<stdio.h>

// main entry point for the code
//
int main(){

  // sets the variable c to q
  //
  char c = 'q';

  // sets the variable i to 27
  //
  short int i = 27;

  // sets the variablej7 to 27272727
  //
  long j = 27272727;

  // sets the variable sum to 27.272727272727
  //
  float sum = 27.272727272727;

  // prints using standard output the below statement while assigning %d to i and %2f to sum with 2 decimal points of precision
  //
  fprintf (stdout,"The value of i is %d and the value of sum is %.2f\n",i,sum);
  return 0;
}

