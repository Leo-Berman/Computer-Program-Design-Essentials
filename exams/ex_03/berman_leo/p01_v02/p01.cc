#include "p01.h"

int main(int argc, char*argv[]){

  if(argc!=6) {
    printf("Incorrect usage:\n");
    system("more help.txt");
    exit(1);
  }

 
  
  Dinner MyDin(atof(argv[1]),argv[2],atof(argv[3]),atof(argv[4]));
  MyDin.set_debug(atol(argv[5]));
  MyDin.dinnerprint();
  MyDin.ddebugprint();

  return 0;
}
