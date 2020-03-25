#include <vector>
#include <math.h>
#include <random>
#include <chrono>
#include <algorithm>


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
