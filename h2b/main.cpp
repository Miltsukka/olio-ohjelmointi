#include "car.h"
#include <vector>
#include <iostream>
int main(){std::vector<Car> carList;carList.emplace_back("Toyota","Corolla",2020);carList.emplace_back("Volvo","V60",2021);carList.emplace_back("Skoda","Octavia",2019);std::cout<<"Toinen auto:\n";carList.at(1).printData();std::cout<<"Kaikki autot:\n";for(const Car& car:carList)car.printData();}
