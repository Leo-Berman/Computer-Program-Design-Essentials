#include "p01.h"

int main(int argc, char* argv[]) {

  // checks if the files opened successfully
  // and also checks that there are the correct number of arguments
  //
  if(argc!=4) {
    printf("Wrong number of arguments, program exiting");
  }

  FILE* fp = fopen(argv[1],"r");
  if(filecheck(fp,argv[1]) == false) {
      exit(1);
    }

  FILE* fq = fopen(argv[2],"w");
  if(filecheck(fq,argv[2]) == false) {
    exit(1);
  }

  // sets the blocksize
  //
  int blocksize = atoi(argv[3]);

  // sets number of characters to be read at a time
  //
  int numchar = blocksize/(sizeof(char));

  // sets a working array
  //
  char* buf = (char*)malloc(blocksize);

  // reads and writes the new file
  //

  // loops through file while keeping track of amount of elements read
  //
  while(int a = fread(buf,sizeof(char),numchar,fp)) {

    // uses the amount of elements read to print the right amount
    // of data to the file
    fwrite(buf,(a*sizeof(char)),1,fq);
    }

  // closes files and frees up data
  //
  fclose(fp);
  fclose(fq);
  free(buf);
}
