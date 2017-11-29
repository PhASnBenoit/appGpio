#include "cappgpio.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CAppGpio w;
    w.show();

    return a.exec();
}
