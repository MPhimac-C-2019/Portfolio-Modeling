#include <iostream>
#include "prm/instruments.h"
#include "prm/stock.h"
#include "prm/eurocall.h"


int main(){
  prm::Stock *appl;
  appl = new prm::Stock(.60, .02);

  prm::eurocall option1(5,1,appl);
  std::cout << option1.eurocallMCPrice(5,.02,0,100000) << "\n";

  std::cout << "Done" <<"\n";
  delete appl;
  appl = nullptr;
  return 0;
}
