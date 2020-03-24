//Include
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
