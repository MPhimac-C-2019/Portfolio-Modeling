#include "instruments.h"
#include <vector>
#include <math.h>
#include <random>
#include <chrono>

#pragma once

namespace phmac {
  class Stock: Public Instrument() {
  public:
    Stock(double, double);  //Constructor stock just requires mu, and volatility to construct
    ~Stock(); //Destructor
    std::vector<double> genNormPath(double, double, int);
    double getvol();
    double getmu();
  private:
    double mu_, vol_;
  };

}
