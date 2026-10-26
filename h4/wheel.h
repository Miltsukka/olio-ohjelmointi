#pragma once
#include <string>
class Wheel {
 int size; std::string type;
public:
 Wheel(int size=0,std::string type="");
 int getSize()const;std::string getType()const;
 void setSize(int);void setType(std::string);
};