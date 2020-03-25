#include "eurocall.h"

namespace prm{
  eurocall::eurocall(double K, double vol, Stock st): Instrument(){
    Stock_ = &st;
    K_ = T;
    T_ = T;
  }
  eurocall::~eurocall(){}


  double eurocall::eurocallMCPrice(double S0, double r, double t, int m){
    std::vector<double> discpay;
    double price = 0;
    for(int i = 0; i <= m; i++){
      discpay[i] = exp(-r*(T-t))*(Stock_->genNormScen(S0, T_-t));
      price += discpay;
    }

    return price/m;
  }



}
