// includes standard input/output
//
#include<stdio.h>

// main entry point of the program argc points to the argc which inputs from the command line
//
int main(int argc, char *argv[]) {

  // prints various strings with the requested text assign %s to argvs to take from the command line
  //
 fprintf(stdout, "The name of this class is: %s\n", argv[1]);
  fprintf(stdout, "Today's date is: %s %s, %s\n", argv[3], argv[4],argv[5]);
  fprintf(stdout, "The day of the week is: %s\n", argv[3]);

  // exits gratefully
  //
    return 0;
	  }


