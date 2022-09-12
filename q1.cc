// includes standard input/output
// includes math library
//
#include<stdio.h>
#include<math.h>

// main entry point and declaration of use of argv
//
int main(int argc, char *argv[])
{

  // calculates the binary values character by character
  // for the given format
  //
  int first=(atoi(argv[1]))*pow(2,3);
  int second=(atoi(argv[2]))*pow(2,2);
  int third=(atoi(argv[3]))*pow(2,1);
  int fourth=(atoi(argv[4]))*pow(2,0);

  // adds integers up for final result
  //
  unsigned int value=first+second+third+fourth;

  // prints the BCD value with the following statement
  //
  (fprintf (stdout, "BCD Value = %d\n",value));
   return 0;
   }
