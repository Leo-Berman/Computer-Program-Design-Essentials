// local includes files
//
#include "mymatrix.h"

// main entry point of program
//
int main(int argc, char*argv[]){

  // creates 2 objects of class MyMatrix
  // and executes class functions with given
  // files
  //
  MyMatrix m1((char*)"First Matrix");
  m1.filename=argv[3];
  m1.readmatrix();
  m1.printmatrix();
  
  
  MyMatrix m2((char*)"Second Matrix");
  m2.filename=argv[4];
  m2.readmatrix();
  m2.printmatrix();



  // checks which operation it is
  // performs the operation and prints
  // the answer matrix
  //
  int a =  whichoperation(argv[2]);
  if(a == 0 | a== 4) {
    helpfunc();
    exit(1);
  }
  if(a == 1) {
    MyMatrix mans = m1+m2;
    mans.printmatrix();  
  }
  if(a == 2) {
    MyMatrix mans = m1-m2;
      mans.printmatrix();  
  }
  
  if(a == 3) {
    MyMatrix mans = m1*m2;
    mans.printmatrix();  
  }
  
  // exits gracefully
  //
  return 1;
  
}
