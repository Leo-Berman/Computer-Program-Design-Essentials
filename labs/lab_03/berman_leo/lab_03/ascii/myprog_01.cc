

// includes all libraries
//
#include"myprog_01.h"
#include<ctype.h>
// main entry point for program
//
int main(){

  // sets the N/A variable for when a character is unprintable
  //
  const char *napp="N/A";

  //prints the header of the chart
  //
  fprintf(stdout,"|DEC|HEX|OCT|CHAR|\n");
  
  // Sets i to be 0->128 while looping through those integers
  //
  for (long i = 0; i < 256; i++) {
    // isprint checks for whether the char is printable
    // the if statement says to execute the print command below if printable
    //
    if (isprint(i))
      
      //prints a table while %d prints the decimal %x converts it
      // to hax #o converts it to oct and %c converts to char
      // the %3 and %4 set it to use a minimum of characters so
      // the formatting doesn't get messed u
      //
      (fprintf(stdout, "|%3d|%3x|%3o|%4c|\n", i,i,i,i));
    
    // if the previous if statement comes back as unprintable else
    // executes the below statement with N/A from above
    //
    else 
      // prints a table similar to above but it knows the character is unprintable so
      // it prints N/A for the characters
      //
      (fprintf(stdout, "|%3d|%3x|%3o|%4s|\n", i,i,i,napp));
    }
    // exits the program gracefully
    //
    return 0;
  }
