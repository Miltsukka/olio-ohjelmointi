#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    explicit ItalianChef(std::string name);
    ~ItalianChef() override;

    std::string getName() const;
    void makePasta();
};

#endif // ITALIANCHEF_H
