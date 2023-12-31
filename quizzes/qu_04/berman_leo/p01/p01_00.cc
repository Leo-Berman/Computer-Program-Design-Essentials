// local include files
//
#include "p01.h"

// defines the input of mysum
// to be long b
//
long mysum(long b) {

  // sets a and c to be long types =0
  //
  long a=0;
  long c=0;

  // sets a loop to count up from 0 to
  // the input value
  // 
  for(a=0;a<=b;a++) {

    // Adds the current count onto
    // a variable starting at 0
    //
    c+=a;
      }

  // sets the return variable to the final
  // output from the for loop
  //
  b=c;

  // returns the value back to the main
  // program
  //
  return(b);
}
