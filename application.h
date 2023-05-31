#pragma once

#include <QtWidgets>

class App : public QMainWindow
{
    Q_OBJECT

private:
    QLCDNumber* clock;

public:
    App(QWidget *parent = nullptr);

public slots:
    void showTime();
};