#ifndef CHEF_H
#define CHEF_H

#include <string>

class Chef
{
protected:
    std::string name;

public:
    explicit Chef(std::string name);
    virtual ~Chef();

    void makeSalad();
    void makeSoup();
};

#endif // CHEF_H
