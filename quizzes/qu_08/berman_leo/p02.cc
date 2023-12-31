#include"p02.h"
int main(int argc,char* argv[]) {

  // error handling in opening the file and number of arguments
  //
  FILE* fp = fopen(argv[1],"r");
  if(filecheck(fp)==false) {
    printf("Error opening file, program terminating");
    exit (1);
  }

  if(checkargs(argc,2)==false) {
    printf("Incorrect number of arguments, program terminating");
    exit (1);
  }
  

  // assigns variables
  //
  float numf[2];
  unsigned char numc;
  double numd;
  short int numi;

  // reads in hardcoded variables
  //
  fread(numf,sizeof(float),2,fp);
  fread(&numc,sizeof(unsigned char),1,fp);
  fread(&numd,sizeof(double),1,fp);


  // reads N number of short ints
  //
  short int a = 0;
  int i = 0;
  while(fread(&numi,sizeof(short int),1,fp)) {
    
    // calculates the working number to be used in the final calculation
    //
    a=a+numi;
    //    printf("a = %d,numi=%d\n",a,numi);
    i++;
  }
  
  // calculates the answer
  //
  double ans =(double)(numf[0]+numf[1]+numd+a+numc);
  
  /*
  // prints the values for checking errors
  //
  printf("%f\n",numd);
  printf("%f\n",double(numc));
  printf("%f\n",numf[0]);
  printf("%f\n",numf[1]);
  */
  // prints the anwer
  //
  printf("Answer = %f\n",ans);
  
  // closes the file
  //
  fclose(fp);
  
  // exits gracefully
  //
  return 1;
}
