#include "MyMatrix.h"
int rownum(char* filelocation){

// set pointer to open file from command line
  //
  FILE *fp=fopen(filelocation,"r");

  // Error handling
  //
  if(fp==NULL) {
    printf("Error opening file [%s]",filelocation);
    return -1;
  }
  int j = 0;
  char buff[999];
  while (fgets(buff,sizeof(buff),fp)) {
    j++;
  }
  // returns number of rows
  // 
  return(j);
}
