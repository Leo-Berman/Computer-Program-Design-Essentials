// Regular grep time
// real    0m0.133s
// user    0m0.106s
// sys     0m0.003s

// My grep time
// real    0m0.198s
// user    0m0.163s
// sys     0m0.008s



#include"mygrep.h"
int main(int argc, char*argv[]) {

  //  char * word=(char*)malloc(sizeof(argv[2]));
  //  strcpy(word,argv[2]);

  //     checkfile(argv[2],argv[5],atoi(argv[4]));
 
    for(int i = 5; i <argc; i++) {
    checkfile(argv[2],argv[i],atoi(argv[4]));
  }
  
  // exits gracefully
  //
  return 1;
}
