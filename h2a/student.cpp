#include "student.h"
void Student::setName(std::string n){name=n;} void Student::setStudentNumber(int n){studentNumber=n;} void Student::setAverage(double a){average=a;} std::string Student::getName() const{return name;} int Student::getStudentNumber() const{return studentNumber;} double Student::getAverage() const{return average;}
