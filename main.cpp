#include <iostream>
#include "phmac/instruments.h"
#include "phmac/stock.h"



int main(){
  phmac::Stock *appl;
  appl = new phmac::Stock(.60, .02);
  std::cout << appl->getvol();


  delete appl;
  appl = nullptr;
  return 0;
}
