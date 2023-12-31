// includes libraries
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <libfuncts.h>


// declares functions
//
int whichoperation(char* op);
void helpfunc();

// defines a class
//
class MyMatrix {
  
  // makes everything public
  //
public:
  
  // information declaration
  //
  char* filename;
  char* matrixname;
  float** m;
  long int rows;
  long int* cols;
    
  // main constructor when given a name
  //
  MyMatrix(char* mname){
    matrixname=new char[strlen(mname)+1];
    strcpy(matrixname,mname);
    filename = (char*)NULL;
    rows = -1;
    cols = (long int*)NULL;
  }
  
  // main constructor when not given a name
  //
  MyMatrix() {
    filename = (char*)NULL;
    matrixname = (char*)NULL;
    rows = -1;
    cols = (long int*)NULL;
  }

  // calls a function to print a classes matrix
  //
  bool printmatrix(){
    printf("\n%s\n",matrixname);
    matrixprint(m,rows,cols);
    printf("\n");
    return true;    
  }

  // calls a function to read a filename and read
  // the matrix from the given file
  //
  bool readmatrix(char* filename);

  // calls a class function that calls a readmatrix function
  // with a filename
  //
  bool readmatrix() {
    readmatrix(filename);
    return true;
  }

  // deconstructor
  //
  ~MyMatrix() {
    
    for(int i = 0; i < rows; i++) {
      free(m[i]);
    }
    
    free(m);
    free(cols);
  }

  // operator overload for addition
  //
  MyMatrix operator + (MyMatrix const &obj) {
    if(rows!=obj.rows){
      printf("Error adding matrices, program exiting\n");
      helpfunc();
      exit(1);
    }
    
    for(int i = 0; i < rows ; i++) {
      if(cols[i]!=obj.cols[i]) {
	printf("Error adding matrices, program exiting\n");
	helpfunc();
	exit(1);
      }
    }
    MyMatrix ansmatrix; 
    ansmatrix.matrixname=(char*)"Answer Matrix";
    ansmatrix.rows=rows;
    
    
    ansmatrix.m = (float**)malloc(sizeof(float*)*rows);
    
    ansmatrix.cols=(long int*)malloc(sizeof(long)*rows);  
    int j;
    int i;
    for(i = 0; i < rows; i++) {
      
      
      ansmatrix.m[i]=(float*)malloc(sizeof(float)*cols[i]);
      
      for(j=0 ; j < cols[i]; j++) {
	
	ansmatrix.m[i][j]=m[i][j] + obj.m[i][j];
	
      }
      
      ansmatrix.cols[i]=cols[i];
    }
    for(int z = 0; z<i; z++) {
      for(int y =0; y<j; y++) {
      }
    }
    
    return ansmatrix;
  }
  
  // operator overload for subtraction
  //
  MyMatrix operator - (MyMatrix const &obj) {
    if(rows!=obj.rows){
      printf("Error subtracting matrices, program exiting\n");
      helpfunc();
      exit(1);
    }

    for(int i = 0; i < rows ; i++) {
      if(cols[i]!=obj.cols[i]) {
	printf("Error subtracting matrices, program exiting\n");
	helpfunc();
	exit(1);
      }
    }  
    MyMatrix ansmatrix; 
    ansmatrix.matrixname=(char*)"Answer Matrix";
    ansmatrix.rows=rows;
    
    
    ansmatrix.m = (float**)malloc(sizeof(float*)*rows);
    
    ansmatrix.cols=(long int*)malloc(sizeof(long)*rows);  
    int j;
    int i;
    for(i = 0; i < rows; i++) {
      
      
      ansmatrix.m[i]=(float*)malloc(sizeof(float)*cols[i]);
      
      for(j=0 ; j < cols[i]; j++) {
	
	ansmatrix.m[i][j]=m[i][j] - obj.m[i][j];
	
      }
      ansmatrix.cols[i]=cols[i];
    }
    return ansmatrix;
  }

  // operator overload for multiplication
  //
  MyMatrix operator * (MyMatrix const &obj) {
    
    MyMatrix ansmatrix; 
    ansmatrix.matrixname=(char*)"Answer Matrix";
    ansmatrix.rows=rows;
    ansmatrix.cols=obj.cols;
    ansmatrix.m = (float**)malloc(sizeof(float*)*rows);
    
    for(int i = 0; i < rows ; i++) {
      if(obj.rows!=cols[i]) {
	printf("Error multiplying matrices, program exiting\n");
	helpfunc();
	exit(1);
      }
    }
    for(int w = 0; w<rows; w++) {
      ansmatrix.m[w]=(float*)malloc(sizeof(float)*obj.cols[w]);
      for(int i = 0; i<obj.cols[w]; i++) {
	float sum = 0;
	for(int j = 0; j<obj.rows; j++) {
	  sum += m[w][j]*obj.m[j][i];
	  //	  printf("Sum = %f\n",sum);
	}
	ansmatrix.m[w][i]=sum;
      }
    }
  return ansmatrix;
  }
  
};

