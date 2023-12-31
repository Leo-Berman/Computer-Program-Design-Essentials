// file: lecture_08/example.h
//

// system include files
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <libfuncts.h>
// local declare functions
//
#define PI 3.142857


class FileIO {

public:
  
  char* fname_d;
  static long int debug_level_d=-1;

  FileIO(char* filename) {
    fname_d = strdup(filename);
    debug_level_d = -1;
  }

  bool set_debug_level(long int deb);
  
  bool print();    

  bool printdebug() {
    printf("%d\n",debug_level_d);
    return true;
  }
};
