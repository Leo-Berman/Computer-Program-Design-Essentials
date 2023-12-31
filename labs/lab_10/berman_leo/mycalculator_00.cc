#include "mycalculator.h"
void helpfunc() {
  system("more /home/tuo54571/nonlibh/testlab/lab_10/help.txt");
  printf("\n");
  exit(1);
}

int whichoperation(char* op) {

  int a = 0;
  // compares the string to see if it matches any of the operators
  //
  char *add =(char*)"addition";
  if(strcasecmp(op,add)==0) {
    a = 1;
  }
  
  char *sub =(char*)"subtraction";
  if(strcasecmp(op,sub)==0) {
    a = 2;
  }
  
  char *mult = (char*)"multiplication";
  if(strcasecmp(op,mult)==0) {
    a = 3;
  }
  
  char *div=(char*)"division";
  if(strcasecmp(op,div)==0) {
    a = 4;
  }
    return a;
}

// series of functions that perform operations
// division checks to makea sure denominator is not 0
//
float addfunc(float a,float b){
  float ans = a+b;
  return ans;
}
float subfunc(float a,float b){
  float ans = a-b;
  return ans;
}
float divfunc(float a, float b) {
  if(b!=0) {
  float ans = a/b;
  return ans;
  }
  else printf("\nDenominator of 0\n\n");
  helpfunc();
  }
float multfunc(float a,float b) {
  float ans = a*b;
  return ans;
}
