#include <iostream>
#include "classa1.h"
#include "classa2.h"
int main(){
 int a=5;
 std::cout<<"a:n arvo on: "<<a<<" ja osoite on: "<<&a<<"\n";
 int *pointerA=&a;
 std::cout<<"Pointterin osoittama osoite on: "<<pointerA<<"\n";
 std::cout<<"Pointterin osoittaman muistipaikan arvo on: "<<*pointerA<<"\n";
 int &refA=a;
 std::cout<<"refA osoittaa osoitteeseen: "<<&refA<<"\n";
 std::cout<<"refA:n osoittaman muistipaikan arvo on: "<<refA<<"\n";
 int b=6;
 // Referenssia ei voi sitoa uudelleen: refA=b muuttaisi a:n arvoksi 6.
 pointerA=&b;
 std::cout<<"pointerA osoittaa nyt b:hen: "<<pointerA<<" arvo "<<*pointerA<<"\n";
 ClassB objB;objB.setInfo("Olion B asettama info");
 ClassA1 objA1(objB);
 objA1.setBinfo("Olion objA1 asettama info");
 std::cout<<"objB: "<<objB.getInfo()<<"\n";
 std::cout<<"objA1: "<<objA1.getBinfo()<<"\n";
 ClassB &refB=objB;
 ClassA2 objA2(refB);
 objA2.setBinfo("Olion Agr asettama info");
 std::cout<<"objB: "<<objB.getInfo()<<"\n";
 std::cout<<"objA2: "<<objA2.getBinfo()<<"\n";
}