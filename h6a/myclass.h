#pragma once
#include <QObject>
class MyClass : public QObject {
 Q_OBJECT
public:
 explicit MyClass(QObject *parent=nullptr);
 void raiseMySignal();
signals:
 void mySignal();
public slots:
 void mySlot();
};