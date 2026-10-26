#pragma once
#include "classb.h"
class ClassA2 {ClassB &refB;public:explicit ClassA2(ClassB &value);std::string getBinfo()const;void setBinfo(std::string value);};