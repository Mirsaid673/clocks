#include <QApplication>
#include <QWidget>
#include "application.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    App app;

    app.show();
    return a.exec();
}
