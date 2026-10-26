#include <QCoreApplication>
#include "myclass.h"
int main(int argc,char *argv[]){
 QCoreApplication app(argc,argv);
 MyClass object;
 object.raiseMySignal();
 return 0;
}