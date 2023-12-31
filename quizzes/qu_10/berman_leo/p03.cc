#include "p03.h"

int main(int argc, char*argv[]){

  FileIO one((char*)argv[1]);

  one.print();

  one.set_debug_level(atoi(argv[2]));

  one.printdebug(); 

  // printf("%d",one.debug_level_d);
  return 0;
}
