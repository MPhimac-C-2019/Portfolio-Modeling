#include <iostream>
#include "prm/Portfolio.h"
#include "prm/Stock.h"

int main()
{
  int nSamples = 5;
  prm::Portfolio p;
  prm::Stock S1; //using default constructor
  prm::Stock S2(100, 0.02, 0.2, 1, 0.02);

  std::vector<double> mypath = S2.generateNormalPath();

  std::cout << "Number of path elements: " << mypath.size() << std::endl;
  for (auto i : mypath)
  {
    std::cout << i << std::endl;
  }

  return 0;
}
