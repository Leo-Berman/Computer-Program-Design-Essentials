#include "mymatrix.h" 

// function that calls function from home library to
// read necessary information into class
//
bool MyMatrix::readmatrix(char* filename){

    rows = rownum(filename);
    
    m = (float**)malloc(sizeof(float**)*rows);

    cols=(long int*)malloc(sizeof(long int)*rows);

    getmcols(cols,filename);
    
    bool status = matrixread(m,cols,rows,filename);

    return(status);
  }

// function called to find which operation to use
//
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

// helpfunction for printed message
//
void helpfunc() {
  system("more help.txt");
  printf("\n");
  exit(1);
}
