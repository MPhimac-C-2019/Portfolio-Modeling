#pragma once

#include "Instrument.h"

#include <iostream>
#include <vector>

using std::ostream;

namespace prm
{
class Portfolio
{
private:
    std::vector<Instrument> instruments_;
    double simulationTime_;

public:
    double calcVaR();
    double calcCVaR();
};

} // namespace prm