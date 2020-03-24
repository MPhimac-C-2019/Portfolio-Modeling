#pragma once

#include "Instrument.h"
#include <vector>

//Include
namespace prm
{
class Stock : public Instrument
{
private:
    std::vector<double> path_;
    double averageReturn;
    double volatility;

public:
    std::vector<double> generatePath_NormalDist();
};

} // namespace prm
