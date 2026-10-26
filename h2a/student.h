#pragma once
#include <string>
class Student {std::string name; int studentNumber=0; double average=0; public: void setName(std::string);void setStudentNumber(int);void setAverage(double);std::string getName() const;int getStudentNumber() const;double getAverage() const;};
