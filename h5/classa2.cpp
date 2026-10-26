#include "classa2.h"
ClassA2::ClassA2(ClassB &value):refB(value){}
std::string ClassA2::getBinfo()const{return refB.getInfo();}
void ClassA2::setBinfo(std::string value){refB.setInfo(value);}