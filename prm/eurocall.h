#include "instruments.h"

#pragma once

namespace prm {
  class eurocall: public Instrument{
  public:
    //eurocall(double, double);  //Constructor stock just requires mu, and volatility to construct

  private:
    double K_, T_, S_;
  };

}
