#include "instruments.h"
#include "stock.h"
#pragma once

namespace prm {
  class eurocall: public Instrument{
  public:
    eurocall(double, double, prm::Stock *);//K //T  //Constructor stock just requires mu, and volatility to construct
    ~eurocall();
    double eurocallMCPrice(double, double, double, int); //S0 //r //t
  private:
    double K_, T_;
    Stock *Stock_;
  };

}
