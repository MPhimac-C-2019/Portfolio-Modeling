#include "eurocall.h"
#include <iostream>
namespace prm{
  eurocall::eurocall(double K, double T, prm::Stock *st): Instrument(){
    Stock_ = st;
    K_ = K;
    T_ = T;
  }

  eurocall::~eurocall(){}

  double eurocall::eurocallMCPrice(double S0, double r, double t, int m){
    std::vector<double> discpay;
    double price = 0;

    for(int i = 0; i <= m; i++){
      discpay.push_back(std::max(exp(-r*(T_-t))*(Stock_->genNormScen(S0, T_-t) - K_), 0.0));
      price += discpay[i] ;
    }

    return price/m;
  }



}
