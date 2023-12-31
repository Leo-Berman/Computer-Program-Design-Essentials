// system include files
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
class Turkey {

protected:
  
  char* vendor;
  float tweight;

public:
  
  Turkey(){
    vendor = NULL;
    tweight = -1;
  }

  Turkey(float inputweight,char* inputvendor){
    vendor = strdup(inputvendor);
    tweight = inputweight;
  }
  ~Turkey(){
  }
  void turkeyprint();
};

class PumpkinPie {

protected:
  
  float diameter;
  float pweight;

public:
  
  PumpkinPie(){
    diameter = -1;
    pweight = -1;
  }

  PumpkinPie(float inputweight,float inputdiameter){
    diameter = inputdiameter;
    pweight = inputweight;
  }
  ~PumpkinPie(){
  }
  void pieprint();
};


class Dinner {

protected:
  
  Turkey Turk;
  PumpkinPie Pie;

public:
  
  Dinner(){
    Turk=Turkey();
    Pie = PumpkinPie();
  }

  Dinner(float turkeyweight,char* vendor,float inputdiameter,float pieweight){
    Turk=Turkey(turkeyweight,vendor);
    Pie=PumpkinPie(pieweight,inputdiameter);
  }
  ~Dinner(){
    Turk.~Turkey();
    Pie.~PumpkinPie();
  }
  void dinnerprint();
};

