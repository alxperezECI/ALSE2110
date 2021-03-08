#include "matrixmain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MatrixMain w;
    w.show();

    return a.exec();
}
