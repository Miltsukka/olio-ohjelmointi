#pragma once
#include "engine.h"
#include "wheel.h"
#include <array>
#include <string>
class Car {
 Engine engine;
 std::array<Wheel,4> wheels;
 std::string brand,model;
public:
 Car(std::string brand,std::string model);
 void setEngine();void setWheels();void printDetails()const;
 std::string getBrand()const;std::string getModel()const;
 void setBrand(std::string);void setModel(std::string);
};