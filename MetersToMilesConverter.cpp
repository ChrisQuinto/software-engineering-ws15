#include "MetersToMilesConverter.hpp"

#include <string>

double MetersToMilesConverter::convert(double inputMeters){
  return inputMeters*0.000621371;
}

std::string MetersToMilesConverter::toString() const{
  return "Meters to Miles Converter";
}

void MetersToMilesConverter::print() const{
  std::cout << toString();
}
