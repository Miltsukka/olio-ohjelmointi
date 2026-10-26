#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>
int main(){Car car;car.setBrand("Toyota");car.setModel("Corolla");car.setYearModel(2020);car.printData();
 Rectangle* rectangle=new Rectangle;rectangle->setWidth(5);rectangle->setHeight(3);std::cout<<"Pinta-ala: "<<rectangle->getArea()<<" Ymparys: "<<rectangle->getCircum()<<"\n";delete rectangle;
 auto student=std::make_unique<Student>();student->setName("Opiskelija");student->setStudentNumber(12345);student->setAverage(4.2);std::cout<<student->getName()<<" "<<student->getStudentNumber()<<" "<<student->getAverage()<<"\n";}
