// includes the header file
//
#include "p02.h"

// main entry point for program
//
int main() {

  // opens file
  //
  FILE *fp = fopen("whl.txt","r");

  // creates a float array with 3 floats
  // one for each dimension
  //
  float dims[3];

  // loops three times
  //
  for(int i =0 ;i<=2;i++) {

    // scans the line for the dimension
    //
    fscanf(fp,"%*s %*c %f",&dims[i]);    
  }	   

  // closes the file
  //
  fclose (fp);

  // prints the dimensions
  //
  printf("width = %f\nheight = %f\nlength = %f\n",dims[0],dims[1],dims[2]);

  // exits gracefully
  //
  return 1;
}
