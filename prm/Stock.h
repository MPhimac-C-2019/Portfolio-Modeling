#pragma once

#include "Instrument.h"
#include <vector>
#include <iostream>

//Include
namespace prm
{
class Stock
{
private:
    std::vector<double> normalPath_;
    double S0_;      // Initial price
    double mu_;      // average return
    double sigma_;   // stock volatility
    double T_;       // final time
    double delta_t_; // time step

public:
    Stock();
    Stock(double S0, double mu, double sigma, double T, double delta_t);
    std::vector<double> generateNormalPath();
    std::vector<double> getPath();
};

} // namespace prm
