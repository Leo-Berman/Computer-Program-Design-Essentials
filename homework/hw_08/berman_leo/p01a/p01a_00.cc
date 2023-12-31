#include "p01a.h"

bool checkargs(int args, int checkargs) {
 if(args==checkargs) {
   return(true);
 }
 else return(false);
}


bool getmcols(long* matrixcolumns,char* filelocation){
  
  // set pointer to open file from command line
  //
  FILE *fp=fopen(filelocation,"r");
  
  // Error handling
  //
  if(fp==NULL) {
    printf("Error opening file");
    return (false);
  }
  
  // sets a working buffer
  //
  char buff[999];
  int i = 0;
  int j = 0;
  
  // loops through lines of text
  //
  while (fgets(buff,sizeof(buff),fp)) {
    
    // tracks number of elements
    //
    j = 0;
    
    // tokenizes the line using spaces
    //
    char *ptr = strtok(buff," ");
    
    // sets a while loop for when ptr is a value
    //
    while (ptr) {      
      
      // counts number of elements
      //
      j++;

      // sets the strtok to move onto the next element
      //
      ptr = strtok(NULL," ");
    }
    
    // sets anumber of elements in each row i to number of elements j
    // 
    matrixcolumns[i]=j;
    
    // counts which row
    //
    i++;
  }
  
  // closes the file
  //
  fclose(fp);

  // exits gracefully
  //
  return(true);
}

bool matrixread(float** matrix, long* matrixcolumns,long rownumber,char* filelocation){
  // loops through the number of rows
  //
  for(int i = 0; i < rownumber; i++) {
    
    // allocates memory for an array of float* for
    // each column
    //
    //   matrix[i]=(float*)malloc(sizeof(float)*matrixcolumns[i]);
    matrix[i] = new float[matrixcolumns[i]];
  }
  
  // opens the file
  //
  FILE *fp=fopen(filelocation,"r");
  
  // error handling
  //
  if(fp==NULL) {
    printf("Error opening file");
    return (false);
  }
  
  // sets a working buffer
  //
  char buff[999];

  // declares an integer
  //
  int i = 0;

  // loops through file line by line
  //
  while (fgets(buff,sizeof(buff),fp)) {

    // tracks number of lines
    //
    int j = 0;

    // sets the size of the pointer to the pointer of elements
    //
    char *ptr = strtok(buff," ");
    
    // sets a looop to go until the token values run out
    //
    while (ptr) {

      // scans the values into the matrix and checks
      // for any unreadable values
      //
      int check = sscanf(ptr,"%f",&matrix[i][j]);
      if(check == 0){
	fclose(fp);
	return (false);
      }
      
      // tracks element wise
      //
      j++;
      
      // sets ptr to continue by setting the first space
      // to null
      //
      ptr = strtok(NULL," ");   
    }
    // tracks row-wise
    //
    i++;
    delete ptr;
  }
  // closes the file
  //
  fclose(fp);  

  // deletes the pointer
  //
  // exits gracefully
  //
  return (true);
  
}

void matrixprint(float** matrix,long rows, long* cols) {
  // loops through the number of rows
  //
  for(int i = 0; i < rows; i++) {

    // loops through the number of columns
    //
    for(int j = 0; j < cols[i]; j++) {

      // prints the matrix elementwise
      //
      printf("%.1f ",i,j,matrix[i][j]);
    }

    // prints new line
    //
    printf("\n");
  }
}

bool checkms(float** matrix1,long* matrix1columns,long matrix1rows,float** matrix2,long* matrix2columns,long matrix2rows) {
  // checks to see if the amount of columns in the first
  // matrix is equal to the amount of rows in the second
  // matrix
  //
  if(matrix1columns[0]!=matrix2rows) {
    return false;
  }
  int i = 0;
  // checks the matrices to make sure that all rows have the same number of elements
  //
  for(int j = 0;j<i;j++) {
    if(matrix2columns[i]!=matrix2columns[j]) {
      return false;
    }
    
    if(matrix1columns[i]!=matrix1columns[j]) {
      return false;
    }
    i++;
  }
  // exits gracefully
  //
  return true;
}


void matrixmultiply(float** ansmatrix,long* ansmatrixcols,float** matrix1,long* cols1,long rows1,float** matrix2,long* cols2,long rows2) {
  // allocates memory for the ansmatrix
  //
  for(int i = 0;i<rows1;i++) {
    ansmatrixcols[i]=cols2[0];
    ansmatrix[i]=new float[ansmatrixcols[i]];
  }
  // loops through the number of rows in the first matrix
  //
  for(int i=0;i<rows1;i++) {
    // loops through the number of columns
    // in matrix 2
    //
    for(int k=0;k<cols2[0];k++) {
      // Defines a working variable
      //
      float sum=0;
      
      // loops through the cols of the first input matrix
      //
      for(int j=0;j<cols1[0];j++) {
	
	// finds the cumulative summation of the columns of the first
	// matrix by the corresponding rows of the second matrix
	//
	sum+=matrix1[i][j]*matrix2[j][k];
      }
      // assigns the working variable to the correct
      // area in the answer matrix
      //
      ansmatrix[i][k]=sum;
    }
  }
}

int rownum(char* filelocation){

// set pointer to open file from command line
  //
  FILE *fp=fopen(filelocation,"r");

  // Error handling
  //
  if(fp==NULL) {
    printf("Error opening file [%s]",filelocation);
    return -1;
  }
  int j = 0;
  char buff[999];
  while (fgets(buff,sizeof(buff),fp)) {
    j++;
  }
  // returns number of rows
  // 
  return(j);
}

bool filecheck(FILE* fp,char* filename) {
  if(fp==NULL) {
    printf("Error opening file [%s]\n",filename);
    return false;
  }
  else{
    return(true);
      }
}

char* readtowrite (char * readbuf,int nelem) {

  // sets a pointer to an array of characters
  //
  char* writebuf;

  // allocates memory that is the same as the size of the 
  // string being fed in
  //
  writebuf = (char*)malloc(sizeof(char)*nelem);

  // copies the memory from the given buffer
  // into the writing buffer
  //
  memcpy(writebuf,readbuf,strlen(readbuf));

  // returns the pointer to the writing buffer
  //
  return(writebuf);
}
