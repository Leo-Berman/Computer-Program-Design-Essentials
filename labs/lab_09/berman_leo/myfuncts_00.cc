#include "myprog.h"

void allocate(float**& array, int num_channels, int N) {

  // allocates memory for the array of pointers to pointers in the array
  //
  array = new float*[num_channels];
  
  // allocates memory for the array of pointers in the array
  // for each of the channels
  //
  for (int i = 0 ; i < num_channels ; i++) {
    array[i] = new float[N] ;
  }
}

void compute_sin(float* array,int N,float freq, float fsamp, float amp, float phase) {

  // converts phase(degrees) into radians
  //
  float rads=phase*M_PI/180;

  // sets a base period
  //
  float prd = 2*M_PI;

  // loops through calculating values for each element
  //
  for(int i = 0 ; i < N ; i++) { 
    array[i]=(float)(amp*sin(prd*freq*(i/fsamp)+rads));
  }
}

void deallocate(float** array, int num_channels, int N) {

  // frees up each of the values for each element
  //
  for(int i = 0; i < num_channels; i++) {
    delete [] array[i];
  }

  // deletes the rows
  //
  delete [] array;  
}

bool filecheck(FILE*fp) {
  if(fp == NULL) {
    return false;
  }
  else {
    return true;
  }
}

bool checkargs(int a, int b) {
  if(a!=b) {
    return false;
  }
  else {
    return true;
  }
}

