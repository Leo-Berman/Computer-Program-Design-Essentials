#include <libfuncts.h>
int main(int argc,char*argv[]) {

  // makes sure there are the correct number of arguments
  //
  if(checkargs(argc,3)==false) {
    printf("Incorrect number of arguments, program exiting\n");
    exit(1);
  }

  // sets the command line arguments into integers
  //
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  // calls the respective functions
  //
  int c = mypow_for(a,b);
  int d = mypow_rec(a,b);

  // prints the formatted statement
  //
  printf("For Loop: pow(%d**%d) = %d\nRecursion: pow(%d**%d) = %d\n",a,b,c,a,b,d);

  // exits gracefully
  //
  return 0;
}
