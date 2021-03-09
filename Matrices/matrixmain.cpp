#include "matrixmain.h"
#include "ui_matrixmain.h"
#include <QString>

MatrixMain::MatrixMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MatrixMain){
    ui->setupUi(this);
}

MatrixMain::~MatrixMain(){
    delete ui;
}

void MatrixMain::on_btnOperar_clicked(){
    ui->txtM1_11->setText( QString("Hola Mundo Alse!!") );
}

void MatrixMain::on_txtM1_11_textChanged(const QString &arg1){
    if( arg1.contains(",") ){
        ui->txtM1_11->setText("Enteros");
    }
}
