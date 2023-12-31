// file: lecture_08/example.h
//

// system include files
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <libfuncts.h>
#define MAX_LINE_LENGTH (long)9999
// local declare functions
//

void checkfile(char * a, char * b,int linenum);
void printstate(int linenum, char** buff, char* filename);
char* clearwork(char* work);
