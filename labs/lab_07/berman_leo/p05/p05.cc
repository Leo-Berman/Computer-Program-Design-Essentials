// includes header file
//
#include "p05.h"

// main entry point for program
//
int main() {

  // opens the file
  //
  FILE *fp = fopen("array.txt","r");

  // sets an array of 2 floats (these will be the
  // working variables)
  //
  float raed[2];

  // sets 2 working integers
  //
  int i = -1;
  int j = 0;

  // sets a loop that will continue until the file
  // is exhausted of values
  //
  while(int a = fread(raed,4,2,fp)) {

    // sets working integers to increment by 1 and 2
    // respectively for neat output labeling
    //
    i+=2;
    j+=2;

    // prints the 2 variables being read
    // and checks to see if fread only read 1
    //
    if(a==2) {
      printf("Value %d = %f Value %d =%f\n",i,j,raed[0],raed[1]);
    }
    if(a==1) {
      printf("Value %d = %f\n",i,raed[0]);
    }
  }
  
  // closes the file
  //
  fclose(fp);  

  // exits gracefully
  //
  return 1;
}
