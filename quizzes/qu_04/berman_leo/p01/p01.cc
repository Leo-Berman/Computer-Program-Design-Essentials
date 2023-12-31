// local includes files
//
#include"p01.h"
// Main entry point of program
//
int main(int argc, char * argv[]) {
  // Converts the command line argument
  // into a long integer
  // 
  long a=atol(argv[1]);
  // sets the long variable i to 0
  //
  long i=0;
  
  // loops the variable i to count up to a
  // the command argument variabl
  //
  for(i=0;i<=a;i++) {
    
    // sets the variable b to be the result of
    // the called function my sum
    //
    long b=mysum(i);
    
    // prints the results of the called function
    // as well as the number put into the function
    //
    fprintf(stdout,"The sum of [0,%d]=%d\n",i,b);
  }
  
  // exits gracefully
  //
  return 0;
}
