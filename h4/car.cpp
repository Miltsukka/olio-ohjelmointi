#include "car.h"
#include <iostream>
Car::Car(std::string b,std::string m):brand(b),model(m){}
void Car::setEngine(){engine.setHorsepower(150);engine.setDisplacement(2.0);}
void Car::setWheels(){for(auto &wheel:wheels){wheel.setSize(17);wheel.setType("kesarengas");}}
std::string Car::getBrand()const{return brand;}
std::string Car::getModel()const{return model;}
void Car::setBrand(std::string b){brand=b;}
void Car::setModel(std::string m){model=m;}
void Car::printDetails()const{
 std::cout<<"Auto: "<<brand<<" "<<model<<"\n";
 std::cout<<"Moottori: "<<engine.getHorsepower()<<" hv, "<<engine.getDisplacement()<<" litraa\n";
 for(size_t i=0;i<wheels.size();++i)
   std::cout<<"Rengas "<<i+1<<": "<<wheels[i].getSize()<<" tuumaa, "<<wheels[i].getType()<<"\n";
}