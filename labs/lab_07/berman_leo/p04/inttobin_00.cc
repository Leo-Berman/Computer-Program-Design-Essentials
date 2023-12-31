// file: lecture_08/example_00.cc
//

// local include files
//
#include "p04.h"

int inttobin(int a) {
  int revbinnum[8];
  int i=0;
  while(a>0){
    revbinnum[i] = a%2;
    a/=2;
   i++;
  }
  int binnum[i];
  char str[i];
  int index = 0;
  for(int j = i-1;j>=0;j--) {
    binnum[i-1-j]=revbinnum[j];
    sprintf(&str[index], "%d", binnum[i-1-j]);
    index ++;
  }

  int ret = atoi(str);
  return ret;
}
