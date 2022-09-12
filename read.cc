#include "read.h"
// main entry point for the program
// sets a pointer to read from the command line
//
int main(int argc, char *argv[])
{
// points the read file into the_text as a reference
  //
  FILE *the_text= fopen(argv[1], "r");

// char line [100] sets the variable line to have the capability to store an array of characters
  //
  char line [100];

  // while loops through every character in each line and sets the array "line"
  // to mirror the current line being read from the referenced text file
  //
  while(fgets(line, sizeof(line), the_text)) {
    // Prints the array "line" which mirrors the line in the text
    //
    sum line
  } 
  // Prints a new line
  //
  printf ("\n");
  return 0;
}

  
