#include <vector>
#include <math.h>
#include <random>
#include <chrono>


#pragma once
namespace prm {
class Instrument{
public:
  Instrument(); //Constructor
  ~Instrument();  //Destructor
  double getPrice(); //Get function
private:
  double price_;
};
}
