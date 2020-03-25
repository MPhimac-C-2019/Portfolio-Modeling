#include <iostream>
#include "prm/instruments.h"
#include "prm/stock.h"
#include "prm/eurocall.h"


int main(){
  prm::Stock *appl;
  appl = new prm::Stock(.60, .02);

  unsigned tic = std::chrono::high_resolution_clock::now().time_since_epoch().count();


  prm::eurocall option1(5,1,appl);
  std::cout << option1.eurocallMCPrice(5,.02,0,100000) << "\n";



  unsigned toc = std::chrono::high_resolution_clock::now().time_since_epoch().count();
  std::cout << "Done" <<"\n" << (toc - tic)/1e+9 << " s Elapsed" << "\n";


  delete appl;
  appl = nullptr;
  return 0;
}
