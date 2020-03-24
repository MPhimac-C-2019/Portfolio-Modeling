#include "instruments.h"

#pragma once

namespace prm {
  class Stock: public Instrument{
  public:
    Stock(double, double);  //Constructor stock just requires mu, and volatility to construct
    ~Stock(); //Destructor
    std::vector<double> genNormPath(double, double, int);
    double genNormScen(double, double);
    std::vector<double> genStdPath(double, double, int);
    double genStdScen(double, double);
    double getvol();
    double getmu();
    void setvol(double);
    void setmu(double);
  private:
    double mu_, vol_;
  };

}
