// file: lecture_08/example.h
//

// system include files
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
// local declare functions
//
bool filecheck(FILE* fp);
bool checkargs(int a, int b);
void allocate(float**& array,int num_channels,int N);
void compute_sin(float* array, int N, float freq, float fsamp, float amp, float phase);
void deallocate(float** array, int num_channels, int N);

