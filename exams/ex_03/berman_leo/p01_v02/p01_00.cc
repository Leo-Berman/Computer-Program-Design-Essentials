#include "p01.h"
void Turkey::turkeyprint(){
  printf("Vendor is %s\nWeight of turkey is %.2f\n",vendor,tweight);
}
void PumpkinPie::pieprint(){
  printf("Pie diameter is %.2f\nPie weight is %.2f\n",diameter,pweight);
}
void Dinner::dinnerprint(){
  Turk.turkeyprint();
  Pie.pieprint();
}

/*

void Turkey::set_debug(long debugval){
  dbg=debugval;
}


void PumpkinPie::set_debug(long debugval){
  dbg=debugval;
}
*/
void Dinner::ddebugprint(){
  printf("Dinner debug is %d\n",dbg);
}
void PumpkinPie::pdebugprint(){
  printf("PumpkinPie debug is%d\n",dbg);
}
void Turkey::tdebugprint(){
  printf("Turkey debug is %d\n",dbg);
}
