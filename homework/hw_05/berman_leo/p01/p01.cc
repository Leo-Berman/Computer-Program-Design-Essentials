// includes header file
//
#include"p01.h"

// main entry point for program
//
int main(int argc, char *argv[]) {
  
  // set pointer to open file from command line
  //
  FILE *fp=fopen(argv[1],"r");
  
  // Error handling
  //
  if(fp==NULL) {
    printf("Error opening file");
    return 0;
  }  
  
  // Sets line char array
  //
  char line [100];
  
  // reads the file line by line
  // and counts the size of the line
  //
  while(fgets(line,sizeof(line),fp)){
    
    // gets rid of the new line character or null character
    //
    line[strcspn(line, "\n")] = 0;    
    
    // sets b to be the character the line is pointing too
    //
    char b=line[0];
    // sets int d to call the function that converts the decimal
    // value into binary
    //
    int d = inttobin(b);
    
    // prints a nicely formatted string
    //
    printf("%c => %08d(%d)\n",b,d,b);
  }
  
  
  // Closes the file to prevent memory leaks
  //
  fclose(fp);
  
  // Exits gracefully
  //
  return 0;
}

