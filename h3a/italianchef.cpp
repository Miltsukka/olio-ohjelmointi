#include "italianchef.h"
#include <iostream>
#include <utility>

ItalianChef::ItalianChef(std::string name) : Chef(std::move(name))
{
    std::cout << "ItalianChef " << this->name << " konstruktori" << std::endl;
}

ItalianChef::~ItalianChef()
{
    std::cout << "ItalianChef " << name << " destruktori" << std::endl;
}

std::string ItalianChef::getName() const
{
    std::cout << "ItalianChef getName" << std::endl;
    return name;
}

void ItalianChef::makePasta()
{
    std::cout << "ItalianChef " << name << " makes pasta" << std::endl;
}
