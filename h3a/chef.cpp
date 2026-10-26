#include "chef.h"
#include <iostream>
#include <utility>

Chef::Chef(std::string name) : name(std::move(name))
{
    std::cout << "Chef " << this->name << " konstruktori" << std::endl;
}

Chef::~Chef()
{
    std::cout << "Chef " << name << " destruktori" << std::endl;
}

void Chef::makeSalad()
{
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

void Chef::makeSoup()
{
    std::cout << "Chef " << name << " makes soup" << std::endl;
}
