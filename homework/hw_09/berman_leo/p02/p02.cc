#include <libfuncts.h>
int main(int argc,char*argv[]) {

  // makes sure there are the correct number of arguments
  //
  if(checkargs(argc,2)==false) {
    printf("Incorrect number of arguments, program exiting\n");
    exit(1);
  }

  // calls the function to convert a string of binary
  // into a decimal character
  //
  long int a = binary_to_decimal(argv[1]);
  
  // prints the outputted format of the code
  //
  printf("input binary number: %s\noutput decimal number: %ld\n",argv[1],a);
  
  // exits gracefully
  //
  return 0;
}
