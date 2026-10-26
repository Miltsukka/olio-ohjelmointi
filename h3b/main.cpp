#include "animal.h"
#include "dog.h"
#include <memory>
int main(){Animal animal;Dog dog;animal.callOut();dog.callOut();std::unique_ptr<Animal> polymorphicDog=std::make_unique<Dog>();polymorphicDog->callOut();}
