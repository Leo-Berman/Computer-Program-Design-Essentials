#include "p02.h"

bool filecheck(FILE* fp){
  if(fp==NULL) {
    return false;
  }
  else{
    return(true);
      }
}

bool checkargs(int args,int a){
  if(a!=args) {
    return false;
  }
  else return true;
}

int mypow_for(int a, int b) {
  // checks for when exponent = 0
  //
  if(b==0) {
    return 1;
  }
  else {
    // sets a working variable to be the base so we can
    // multiply by the base
    //
    int work=a;

    // calculates the exponent
    //
    for(int i = 1; i < b;i++) {
      a = a*work;
    }

    return a;
  }
}

int mypow_rec(int a, int b) {
  // checks to make sure that the exponent
  // isn't equal to 0
  //
  if (b != 0){
    
    // recurses the power which eventually results in a being
    //multipled by 1 and then returned
    //
    return(a * mypow_rec(a, b - 1));
  }
  
  // returns 1 when the exponent reaches 0
  //
  else{
    return 1;
  }
}

