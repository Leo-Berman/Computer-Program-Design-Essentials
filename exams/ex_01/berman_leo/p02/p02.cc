#include"p02.h"
int main(int argc, char* argv[]) {
  float start = atof(argv[1]);
  float stop = atof(argv[2]);
  float step = atof(argv[3]);
  float a1 = atof(argv[4]);
  float a2 = atof(argv[5]);
  float a3 = atof(argv[6]);
  float a4 = atof(argv[7]);
  float b = 0;

  printf("a1=%f\na2=%f\na3=%f\na4=%f\n",a1,a2,a3,a4);

  float times=(stop-start)/step;
  
  for(int i=0;i<=times;i++) {
    float j=start+i*step;
    float a=(a1*j*j*j)+(a2*j*j)+(a3*j)+(a4);
    // causes rounding error
    //
    b=b+a;
    
    printf("time=%f value=%f\n",j,b);
  }
  return 0;
}
  
