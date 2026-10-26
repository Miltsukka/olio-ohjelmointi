#include "car.h"
#include <iostream>
void Car::setBrand(std::string s){brand=s;} void Car::setModel(std::string s){model=s;} void Car::setYearModel(int y){yearModel=y;} void Car::printData() const {std::cout<<brand<<" "<<model<<" "<<yearModel<<"\n";}
