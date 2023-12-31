// file: lecture_08/example_00.cc
//

// local include files
//
#include "p01.h"

// function: mysum
//
// arguments:
//  float x: one operand
//  float y: another operand
//
// return:
//  a float value containing the sum of two numbers
//
// description: ....
//
//
float mysum(float x_a, float y_a) {

  // do some math
  //
  fprintf(stdout, "inside of the float version of mysum...\n");
  float sum = x_a + y_a;

  // return a value
  //
  return(sum);
}

// function: mysum
//
// arguments:
//  long x: one operand
//  long y: another operand
//
// return:
//  a float value containing the sum of two numbers
//
// description: ....
//
//
float mysum(long x_a, long y_a) {

  // do some math
  //
  fprintf(stdout, "inside of the long version of mysum...\n");
  float sum = x_a + y_a;

  // return a value
  //
  return(sum);
}

// function: isequal
//
// arguments:
//  float x: one operand
//  float y: another operand
//
// return:
//  a bool value which is true if they are equal
//
// description: ....
//
//
bool isequal(float x_a, float y_a) {

  // do some logic
  //
  if (x_a == y_a) {
    return true;
  }

  // return a value
  //
  return(false);
}

/*
// function: my_truncate
//
// arguments:
//  float x: operand
//
// return:
//  a long value containing the truncated version
//
// description: ....
//
//
long my_truncate(float x_a) {
  return (long)x_a;
}

// function: sum
//
// arguments:
//  float x: one operand
//  long y: another operand
//
// return:
//  a float value containing the sum of two numbers
//
float mysum(float x_a, long y_a) {
  return mysum(x_a, (float)y_a);
}

*/
