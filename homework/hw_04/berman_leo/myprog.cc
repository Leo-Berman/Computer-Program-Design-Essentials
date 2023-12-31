#include"myprog.h"
// main entry point for the program
// sets a pointer to read from the command line
//
int main(int argc, char *argv[]) {
  // points the read file into the_text as a reference
  //
  FILE *the_text= fopen(argv[1], "r");
  
  // error handling
  //
  if (the_text == NULL) {
    printf("error reading file\n");
    return 0;
  }
  else {
    // char line [100] sets the variable line to have the capability to store an array of characters
    //
    char line [999];
    
    // sets int a to -1 will be used to count lines
    // set int b to zero to be used later
    //
    int a = 0;
    int b;
    
    // while loops through every character in each line and sets the array "line"
    // to mirror the current line being read from the referenced text file
    //
    while(fgets(line, sizeof(line), the_text)) {
      
      // counts the line number
      //
      a+=1;
      
      // sets the int w to the first character of the line
      //
      int w=line[0];  
      
      // trims the new line character
      //
      line[strlen(line)-1]='\0';
      
      // calls my is number function to check if string is a number
      //
      b = isNumber(line);
      
      // checks results of isNumber function
      //
      if(b == 1) {
	
	// sets line to float to be used in comparison statement below
	//
	float c=atof(line);
	
	// prints the first part of the statement
	//
	printf("%d:number:the value is %s",a,line);
	
	// checks if the number is larger than 25 and less than 75
	//
	if(c<=75&&c>=25) {
	  
	  // prints the next part of the statement
	  //
	  printf(" & this is your lucky day\n");
	}
	
	// prints a new line if number is not in rnage
	//
	else {
	  printf("\n");
	}
      }
      
      // checks if first values is a #
      //
      else if(w==35) { 
	
	// prints statement
	//
	printf ("%d:comment:%s\n",a,line);
      }  
      else{
	
	// prints statement
	//
	printf("%d:text:%s\n",a,line);
      }
    }
    
    // exits gracefully
    //
    return 0;
  }
}
