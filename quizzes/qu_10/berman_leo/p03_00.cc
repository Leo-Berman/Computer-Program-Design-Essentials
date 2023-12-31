#include "p03.h"

long FileIO::debug_level_d = (lont)-1;

bool FileIO::print() {
  FILE* fp = fopen(fname_d,"r");
  char buff[999];
  while(fgets(buff,999,fp)){
      printf("%s",buff);
    }
  fclose(fp);

  return true;
}

bool FileIO::set_debug_level(long int deb) {
  debug_level_d = deb;
  return true;
}
