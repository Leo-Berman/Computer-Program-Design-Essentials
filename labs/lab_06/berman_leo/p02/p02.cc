// includes the header file
//
#include"p02.h"

// main entry point of program
//
int main(int argc, char *argv[]) {
  
  // opens the file
  //
  FILE *fp= fopen(argv[1], "r");
  
  // error handling
  //
  if(fp==NULL) {
    printf("Error opening file\n");
    return 0;
  }
  
  // sets the maximum size of char buf
  //
  int MAX_LINE_LENGTH = 9999; 
  char buf [MAX_LINE_LENGTH+1];
  
  // declares j to be used outisde the scope of the next loop
  //
  int j=0;
  
  // loops through file line by line
  //
  while(fgets(buf, sizeof(buf), fp)) {
    j++;
  }
  
  // keeps the count of the number of lines
  //
  int N = j;
  
  // creates a pointer to an array of vectors
  //
  char* strs[N];
  
  // closes the file
  //
  fclose(fp);
  
  // opens the file
  //
  FILE *fq=fopen(argv[1],"r");
  
  // loops through the number of lines
  //
  for(int i=0;i<N;i++) {
    
    // sets the size of string buff
    //
    char buff[MAX_LINE_LENGTH+1];
    
    // reads a line up to the new line character in your file
    //
    fgets(buff,MAX_LINE_LENGTH,fq);

    // calculates length of string
    //
    int buffsize=strlen(buff);

    // allocates memory to the string to store buff
    //
    strs[i]=(char*)new char[buffsize+1];
    
    // copies what is in buff into
    // strs[i]
    //
    memcpy(strs[i],buff,buffsize);

    // Null terminates and gets rid of new line
    //
    strs[i][buffsize-1]=(char)NULL;
    
    // prints a nicely formatted line
    //
    printf("%d:%s\n",i+1,strs[i]);
    
    // frees up the memory after it's printed
    //
    
   
  }

  
  // closes the file
  //
  fclose(fq);

  // clean up memory
  //
  for(int k =0; k<N;k++) {
    delete [] strs[k];
  }

  // exits gracefully
  //
  return 0;
}
