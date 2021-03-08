#include "matrixmain.h"
#include "ui_matrixmain.h"

MatrixMain::MatrixMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MatrixMain)
{
    ui->setupUi(this);
}

MatrixMain::~MatrixMain()
{
    delete ui;
}
