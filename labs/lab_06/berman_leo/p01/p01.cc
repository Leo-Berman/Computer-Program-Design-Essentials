// includes header file
//
#include"p01.h"

// main entry point for program
//
int main(int argc, char *argv[]) {

  // opens file
  //
  FILE *fp= fopen(argv[1], "r");

  if(fp==NULL) {
    printf("Error opening file\n");
    return 0;
  }

  // error handling
  //
  
  // sets size of character buff and
  // declares j outside of the scope of the loop
  //
  int MAX_LINE_LENGTH = 9999; 
  char buf [MAX_LINE_LENGTH];
    int j=0;

    // loops through the file line by line
    //
    while(fgets(buf, sizeof(buf), fp)) {

      // sets len = to the current size of the line
      // being read
      //
      int len=strlen(buf);    

      // counts number of lines
      //
      j+=1;

      // prints line number
      //
      printf("%d:",j);    

      // sets a pointer to a temporary string
      // and allocates memory for the string
      //
      char *tmp_string;
    tmp_string=(char*)malloc(sizeof(buf));

    // loops through number of lines
    //
    for(int i=0;i<len;i++) {

      // sets information of the string array = to
      // the information from the buffer
      //
      tmp_string[i]=buf[i];

      // prints out the character string
      //
      printf("%c",tmp_string[i]);
    }
    // frees up the information allocated to the character array
    //
    free(tmp_string);
}

    // prints a new line
    //
    printf("\n");  

    // closes the file
    //
    fclose(fp);

    // gracefully exits
    //
    return 0;
}
