#include "application.h"

#include <QMenu>

App::App(QWidget *parent) : clock(new QLCDNumber(8))
{
    setCentralWidget(clock);

    clock->setSegmentStyle(QLCDNumber::Flat);
    QTimer *timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start(1000);

    showTime();

    setWindowTitle(tr("Digital Clock"));
}

#include <iostream>

void App::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("HH:mm:ss");
    if ((time.second() % 2) == 0)
        text[2] = text[5] = ' ';
    clock->display(text);
}
