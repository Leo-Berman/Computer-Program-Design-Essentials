// includes libraries in header file
//
#include"p02.h"

// main entry point of program
//
int main (){

  // sets variable my_pi to float variable M_PI which is the preloaded vale of pi
  //
  float my_pi=M_PI;
  
  // sets the value of my_pi squared * 99999
  //
  my_pi=pow(my_pi,2)*99999;    
  
  // set the value of my_pi and divides by 99999
  //
  my_pi=my_pi/99999;

  //
  //
  float diff= my_pi-pow(M_PI,2);

  //prints the value difference
  //
fprintf(stdout, "%10.15f\n",diff);

//exits gracefully
//
 return 0;
  }
