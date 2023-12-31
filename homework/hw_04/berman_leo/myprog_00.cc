// local include files
//
#include "myprog.h"

// inputs character array
//
int isNumber(char s[])
{
  
  // loops through character array until it reaches a null value
  //
  for (int i = 0; s[i]!= '\0'; i++) {
    
    // checks each character to see if it is a digit
    // or a decimal point
    //
    if (isdigit(s[i])==0 or s[i]==46) {
      return 0;
    }
    // returns this is it reaches a character that is not a digit
    //
    
    else {
      return 1;
    }
  }
}
