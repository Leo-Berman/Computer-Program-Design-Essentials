// include standard input/output
//
#include<stdio.h>

// the main entry point of the program
//
int main() {
  
  // FILE assigns the_text to be a reference to the memory location containing
  // information for mytext.txt which is then read using the string "r" in fopen
  //
  FILE *the_text= fopen("mytext.txt", "r");
  
  // char line [100] sets the variable line to have the capability to store an array of characters
  //
  char line [100];
  
  // while loops through every character in each line and sets the array "line"
  // to mirror the current line being read from the referenced text file
  //  
  while(fgets(line, sizeof(line), the_text)) {
    
    // Prints the array "line" which mirrors the line in the text
    //
    printf ("%s", line);
  }
  return 0;
}

