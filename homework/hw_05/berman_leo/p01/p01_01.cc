// file: lecture_08/example_00.cc
//

// local include files
//
#include "p01.h"

int arraytoint(int w[], int length) {

  // converts an array into an integer
  // 
  int i, k = 0;
 for (i = 0; i < length; i++) {
     k = 10 * k + w[i];
   }
  return k;
}
