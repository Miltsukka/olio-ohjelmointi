#pragma once
#include <string>
class Car { std::string brand, model; int yearModel=0; public: void setBrand(std::string); void setModel(std::string); void setYearModel(int); void printData() const; };
