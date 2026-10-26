#pragma once
#include <QMainWindow>
class QLabel;
class QLineEdit;
class QPushButton;
class MainWindow:public QMainWindow {
 Q_OBJECT
 int counter=0;
 QLabel *labelInfo;
 QLineEdit *txtResult;
 QPushButton *btnCount;
 QPushButton *btnReset;
 void updateDisplay();
public:
 explicit MainWindow(QWidget *parent=nullptr);
};