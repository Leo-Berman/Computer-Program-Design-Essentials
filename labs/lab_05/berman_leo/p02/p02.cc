// includes header file
//
#include"p02.h"

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
  
  // sets char string for reading dimensions of vectors
  //
  char str1 [10];
  char str2 [10];
  
  //reads the dimensions from the file into strings
  //
  fscanf(fp,"%s %s",str1,str2);
  
  // prints a nicely formatted version of the strings
  //
  printf("Input 1: rows = %s cols = %s\n",str1,str2);
  
  // defines and sets some variables
  //
  int rows=atoi(str1);
  int cols=atoi(str2);
  float m1[rows][cols];
  char work[100];
  
  // reads and prints matrix 1
  // 
  
  // loops through number of rows
  //
  for(int i=0;i<rows;i++) {
    
    // scans the new line so as it
    // doesn't get read when doing math
    //
    fscanf(fp,"\n");
    
    // prints row numbers
    //
    printf("%d: ",i);
    
    // loops through number of columns
    //
    for(int j=0;j<cols;j++) {
      
      // scans the working number
      //
      fscanf(fp,"%s",work);
      
      // sets that number to a matrix
      // and converts to a float
      //
      m1[i][j]=atof(work);

      // prints the value of the matrix that was just assigned
      //
      printf("%f ",m1[i][j]); 
    }

    // moves to the next line of the matrix
    //
    printf("\n");
  }

  // Reads and prints the second matrix
  //
  
  fscanf(fp, "\n");
  fscanf(fp,"%s %s",str1,str2);
  int rows2=atoi(str1);
  int cols2=atoi(str2);
  float m2[rows2][cols2];
  printf("Input 1: rows = %s cols = %s\n",str1,str2);
  
  for(int i=0;i<rows2;i++) {
    fscanf(fp,"\n");
    printf("%d: ",i);
    for(int j=0;j<cols2;j++) {
      fscanf(fp,"%s",work);
      m2[i][j]=atof(work);
      printf("%f ",m2[i][j]); 
    }
    printf("\n");
  }
  
  // error handling
  //
  
  if(rows!=cols2) {
    printf("matrices not able to be multiplied");
    return 0;
  }
  
  // Math for multiplying matrixes
  //
  
  // sets size of answer matrix
  //
  float m3[rows2][cols2];
  
  // prints the dimensions of the answer matrix
  //
  printf("Matrix Multiplication Result: rows = %d cols = %d\n",rows2,cols2);
  
  // loops through rows of answer matrix
  //
  for(int i=0;i<rows;i++) {
    
    // prints row number
    //
    printf("%d: ",i);
    
    // loops through columns of answer matrix
    //
    for(int k=0;k<cols2;k++) {
      
      // Defines a working variable
      //
      float sum=0;
      
      // loops through the cols of the first input matrix
      //
      for(int j=0;j<cols;j++) {
	// finds the cumulative summation of the columns of the first
	// matrix by the corresponding rows of the second matrix
	sum+=m1[i][j]*m2[j][k];
	
      }
      // assigns the working variable to the correct
      // area in the answer matrix and then prints it
      //
      m3[i][k]+=sum;
      printf("%f ",sum);
    }
    printf("\n");
  }
  
  // Exits gracefully
  //
  return 0;
}

