#include "myprog.h"
int main(int argc,char* argv[]){

  // opens the file and handles error handling
  //
  FILE * fp = fopen(argv[1],"w");
  if(filecheck(fp)!=true) {
    printf("Error opening file, program exiting\n");
    exit(1);
  }

  // checks the number of arguments and handles error handling
  //
  if(checkargs(argc,8)!=true) {
      printf("Incorrect number of arguments, program exiting\n");
      exit(1);
  }

  // assigns user inputs to variables
  //
  int channel = atoi(argv[2]);
  printf("Channels = %d\n",channel);
  float time = atof(argv[3]);
  printf("Time = %f\n",time);
  float frequency = atof(argv[4]);
  printf("Frequency = %f\n",frequency);
  float sampfreq = atof(argv[5]);
  printf("Sample Frequency = %f\n",sampfreq);
  float amps = atof(argv[6]);
  printf("amps = %f\n",amps);
  float phase = atof(argv[7]);
  printf("phase = %f\n",phase);
  int nelem =(int)(time*sampfreq);
  printf("number of elements = %d\n",nelem);

  // creates an array and calls a function to allocate memory
  //
  float**array;
  allocate(array,channel,nelem);

  // loops through computing samples and then writing them into a file
  //
  for(int i = 0; i < channel ; i++) {
    compute_sin(array[i],nelem,frequency,sampfreq,amps,phase);
    fwrite(array[i],sizeof(float),nelem,fp);
  }


  //calls a function to dealocate memory
  // and closes the file
  //
  deallocate(array,channel,nelem);

  // closes the file
  //
  fclose(fp);  

  // exits gracefully
  //
  return 1;
}
