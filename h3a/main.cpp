#include "chef.h"
#include "italianchef.h"
#include <iostream>

int main()
{
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();
    std::cout << "Kokin nimi: " << italianChef.getName() << std::endl;

    return 0;
}
