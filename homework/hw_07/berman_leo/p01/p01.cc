#include "p01.h"

int main() {

  // opens a file for writing
  //
  FILE *fp = fopen("sinewave.dat","w");

  // sets an array of 64000 short ints
  //
  short int samp[64000];

  // generates values of the sinewave
  //
  for(int i = 0;i<64000;i++) {
    samp[i] = (short int)(10000*sin(2*PI*500*float(i)/8000));
  }

      // writes binary values into the file
      //
      fwrite(samp,sizeof(short int),64000,fp);

      // closes the file
      //
      fclose(fp);
      
  // exits gracefully
  //
  return 1;
}
