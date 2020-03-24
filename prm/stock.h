#include "instruments.h"
#include <vector>
#include <math.h>
#include <random>
#include <chrono>

#pragma once

namespace prm {
  class Stock: public Instrument{
  public:
    Stock(double, double);  //Constructor stock just requires mu, and volatility to construct
    ~Stock(); //Destructor
    std::vector<double> genNormPath(double, double, int);
    double genNormScen(double, double);
    //double genStdPath()
    //double genStdScen()
    double getvol();
    double getmu();
  private:
    double mu_, vol_;
  };

}
