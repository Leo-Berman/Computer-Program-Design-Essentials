#include"myprogtest.h"
int main(int argc, char *argv[]) {
  
  // Sets the constant c
  //
  float c = atof(argv[2]);
  
  // points the read file into the_text as a reference
  //
  FILE *the_text=fopen(argv[1], "r");
  
  // read the dimension of the vector from the first line
  //
  char buff[999];
  
  // reads the first line
  //
  fgets(buff, 999, the_text);

  // null terminates and removes the new line value from the string
  // 
  buff[strlen(buff)-1]='\0';

  // sets long N to be the integer converted from the characters
  // in the buff statement.  This sets N to be the number of lines
  // which is given at the first line of the file
  //
  long N = atoi(buff);

  // prints the result
  //
  fprintf(stdout,"the dimension of the vector %d\n",N);  

  // Declare vector of N length
  //
  float v[N];
  
  // Loop over rest of file
  //
  for(long i=0;i<N;i++) {
    fgets(buff, 999, the_text);
    buff[strlen(buff)-1]='\0';
    v[i] = atof(buff);
  }
  
  // closes the text
  //
  fclose(the_text);

  // Prints out the vector inputs
  //
  fprintf(stdout,"the constant c = %f\n",c);

  // Prints out the component parts of the vector for the length of N
  //
  for(long i=0;i<N;i++) {
    fprintf(stdout,"v[%d] = %f\n", i, v[i]);
  }
  
  // sets the float variable to c
  // 
  float result=c;
  
  
  // for all values of N multiply by component the float array
  //
  for (long i = 0; i < N; i++) {
    result += v[i]*v[i];
  }
  
  // prints the value of the dot product calculated
  //
  fprintf(stdout,"the value of the Dot Product = %.4f\n", result);
  
  // exits gracefully
  //
  return 0;
}  
