#include <iostream>
#include "prm/instruments.h"
#include "prm/stock.h"
#include "prm/eurocall.h"


int main(){
  prm::Stock *appl;
  appl = new prm::Stock(.60, .02);
  std::cout << appl->genStdScen(5,1) << "\n";


  delete appl;
  appl = nullptr;
  return 0;
}
