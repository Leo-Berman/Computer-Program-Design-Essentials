// file: lecture_08/example.h
//

// system include files
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
// local declare functions
//
float dot_product(float v[], float u[], int n);
bool getmcols(long* matrixcolumns,char* filelocation);
bool matrixread(float** matrix, long* matrixcolumns,long rownumber,char* filelocation);
int rownum(char* filelocation);
int colnum(char* filelocation);
void matrixprint(float** matrix, long rows, long* cols);
bool checkms(float** matrix1,long* matrix1columns,long matrix1rows,float** matrix2,long* matrix2columns,long matrix2rows);
void matrixmultiply(float** ansmatrixs,long* matrixcols,float** matrix1,long* cols1,long rows1,float** matrix2,long* cols2,long rows2);
//bool isequal(float arg1, float arg2);

/*
// create a new function
//
long my_truncate(float arg);
*/

//
// exit gracefully
