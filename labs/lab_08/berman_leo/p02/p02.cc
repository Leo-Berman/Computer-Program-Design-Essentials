#include "p02.h"

int main(int argc, char* argv[]) {

  // checks if the files opened successfully
  // and also checks that there are the correct number of arguments
  //
  if(argc>4) {
    printf("Too many arguments(%d), program exiting\n",argc);
      exit(1);
  }

  if(argc<4) {
    printf("Too few arguments(%d), program exiting\n",argc);
    exit(1);
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

    // calls a function to create a writing
    // buffer
    //
    char* ritebuf = readtowrite(buf,a);
    
    // uses the amount of elements read to print the right amount
    // of data to the file
    //
    fwrite(ritebuf,(a*sizeof(char)),1,fq);
    
    // frees the memory allocated in the function
    //
    free(ritebuf);
    
  }

  // closes files and frees up data
  //
  fclose(fp);
  fclose(fq);
  free(buf);
}
