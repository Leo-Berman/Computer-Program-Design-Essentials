// local includes header files
//
#include "mycalculator.h"

// main entry point for program
//
int main(int argc, char*argv[]) {

  // checks for the correct number of arguments
  //
  if(checkargs(argc,7)!=true) {
    printf("\nIncorrect number of arguments, program terminating\n\n");
    helpfunc();
    exit(1);
  }

  // checks input arguments for help
  //
  for(int i = 0;i<argc;i++) {
    if(strcasecmp("-help",argv[i])==0) {
      helpfunc();
      exit(1);
    }
  }
  // sets the two working variables in
  //
  float x;
  int check1 = sscanf(argv[2],"%f",&x);
  float y;
  int check2 = sscanf(argv[4],"%f",&y);

  if(check1 != 1 or check2 != 1) {
    printf("\nIncorrect input of one or more numbers, program terminating\n\n");
    helpfunc();
    exit(1);
  }

  // calls a function to see which operation it is
  //
  int op = whichoperation(argv[6]);
  
  // declares an answer variable
  //
  float ans;

  char symb;
  
  // checks to see which operation has to be done
  //
  if(op == 0) {
    helpfunc;
  }
  if(op == 1) {
    ans = addfunc(x,y);
    symb='+';
  }
  if(op==2) {
    ans = subfunc(x,y);
    symb='-';
  }
  if(op==3) {
    ans = multfunc(x,y);
    symb='*';
  }
  if(op==4) {
    ans = divfunc(x,y);
    symb='/';
  }

  printf("%f %c %f = %f\n\n",x,symb,y,ans);
  
  return 1;
}
