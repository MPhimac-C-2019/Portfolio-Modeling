#include "Stock.h"

#include <iostream>
#include <random>
#include <math.h>

namespace prm
{
Stock::Stock()
{
    S0_ = 100;
    mu_ = 0.02;
    sigma_ = 0.2;
    T_ = 1;
    delta_t_ = 0.1;
}
Stock::Stock(double S0, double mu, double sigma, double T, double delta_t)
{
    S0_ = S0;
    mu_ = mu;
    sigma_ = sigma;
    T_ = T;
    delta_t_ = delta_t;
}

std::vector<double> Stock::generateNormalPath()
{
    // from: https://en.cppreference.com/w/cpp/numeric/random/normal_distribution
    std::random_device rd{};
    std::mt19937 gen{rd()};
    std::normal_distribution<> d{0.0, 1.0};

    int nSamples = int(T_ / delta_t_);
    normalPath_.push_back(S0_);
    for (int i = 1; i < nSamples; ++i)
    {
        double stdNormal = d(gen);
        double S = normalPath_[i - 1] * exp((mu_ - pow(sigma_, 2) / 2) * delta_t_ + sigma_ * sqrt(delta_t_) * stdNormal);
        normalPath_.push_back(S);
    }
    return normalPath_;
}

} // namespace prm
