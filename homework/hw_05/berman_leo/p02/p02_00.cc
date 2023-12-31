// local include files
//
#include "p02.h"


int inttobin(int a) {

  // sets a working variable equivalent to a
  //
  int b=a;

  //sets array size
  //
  int binaryNum[1000];

  // loops through setting the remained until b = 0
  // (converting to binary backwards)
  int i;
  for(i=0;b>0;i++)    
    {    
      binaryNum[i]=b%2;    
      b=b/2;    
    }

  // reloops through setting the binary to the righ positions
  //
  int binaryNum2[i];
  for(int k=0;k<i;k++) {
    int d = i-(k+1);
    binaryNum2[d]=binaryNum[k];
  }

  // converts the array into an integer
  //
  int c=arraytoint(binaryNum2, i);
  return c;
}
