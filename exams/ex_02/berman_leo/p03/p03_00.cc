// file: lecture_08/example_00.cc
//

// local include files
//
#include "p03.h"
int weighting2(int W,short int*arr,short int* arr2) {

  // declares arrays one for the twos
  // and one for printing
  //
  short int harr[W];
  short int ansarr[W];

  // initializes the two buffer with twos
  //

  // declares a working variables
  //
  short int answr = 0;

  // loops through calculating the values
  //
  for(int i = 0; i<W; i++) {
    ansarr[i] = (arr[i]*arr2[i])*(arr[i]*arr2[i]);
    answr=answr+ansarr[i];
  }
int energy = answr/W;
 printf("Energy = %d",energy);
return energy;
}

 
