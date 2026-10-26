#include "mainwindow.h"
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QString>
MainWindow::MainWindow(QWidget *parent):QMainWindow(parent){
 setWindowTitle("Harjoitus 7 - Laskuri");
 auto *central=new QWidget(this);
 auto *vertical=new QVBoxLayout(central);
 labelInfo=new QLabel("Painiketta painettu 0 kertaa",central);
 labelInfo->setObjectName("labelInfo");
 txtResult=new QLineEdit("0",central);
 txtResult->setObjectName("txtResult");
 txtResult->setReadOnly(true);
 btnCount=new QPushButton("Count",central);
 btnCount->setObjectName("btnCount");
 btnReset=new QPushButton("Reset",central);
 btnReset->setObjectName("btnReset");
 auto *buttons=new QHBoxLayout;
 buttons->addWidget(btnCount);
 buttons->addWidget(btnReset);
 vertical->addWidget(labelInfo);
 vertical->addWidget(txtResult);
 vertical->addLayout(buttons);
 setCentralWidget(central);
 connect(btnCount,&QPushButton::clicked,this,[this](){++counter;updateDisplay();});
 connect(btnReset,&QPushButton::clicked,this,[this](){counter=0;updateDisplay();});
 resize(350,150);
}
void MainWindow::updateDisplay(){
 QString s=QString::number(counter);
 txtResult->setText(s);
 labelInfo->setText("Painiketta painettu "+s+" kertaa");
}