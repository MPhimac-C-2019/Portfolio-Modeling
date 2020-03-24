#pragma once

#include <vector>
#include "Instrument.h"

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