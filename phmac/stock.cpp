#include "stock.h"
namespace phmac{
  Stock::Stock(double mu, double vol): Instrument(){
    vol_ = vol;
    mu_ = mu;
  }

  Stock::~Stock(){}
  double Stock::getvol(){
    return vol_;
  }
  double Stock::getmu(){
    return mu_;
  }

  std::vector<double> Stock::genNormPath(double S0, double Tau, int N){
    std::vector<double> stockprice;
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);
    std::normal_distribution <double> W(0,1);
    stockprice.push_back(S0);
    for(int i=1; i<N; i++){
      stockprice.push_back(S0 * exp((mu_-.5*pow(vol_,2))*(Tau/N)+vol_+sqrt(Tau/N)*W(generator)));
    }
    return stockprice;
  }
}
