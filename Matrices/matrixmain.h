#ifndef MATRIXMAIN_H
#define MATRIXMAIN_H

#include <QMainWindow>

namespace Ui {
class MatrixMain;
}

class MatrixMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit MatrixMain(QWidget *parent = 0);
    ~MatrixMain();

private:
    Ui::MatrixMain *ui;
};

#endif // MATRIXMAIN_H
