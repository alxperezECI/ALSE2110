#include "matrixmain.h"
#include "ui_matrixmain.h"
#include <QString>
#include <eigen3/Eigen/Dense>

MatrixMain::MatrixMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MatrixMain){
    ui->setupUi(this);
}

MatrixMain::~MatrixMain(){
    delete ui;
}

void MatrixMain::on_btnOperar_clicked(){
    Eigen::Matrix2d m1(2,2), m2(2,2), mr(2,2);

    m1(0,0) = ui->txtM1_11->text().toDouble();
    m1(0,1) = ui->txtM1_12->text().toDouble();
    m1(1,0) = ui->txtM1_21->text().toDouble();
    m1(1,1) = ui->txtM1_22->text().toDouble();

    m2(0,0) = ui->txtM2_11->text().toDouble();
    m2(0,1) = ui->txtM2_12->text().toDouble();
    m2(1,0) = ui->txtM2_21->text().toDouble();
    m2(1,1) = ui->txtM2_22->text().toDouble();

    int op = ui->cbxOperar->currentIndex();

    switch( op ){
        case 0: // Suma
            mr = m1 + m2;
            break;
        case 1: // Resta
            mr = m1 - m2;
            break;
        case 2: // Multiplicación
            mr = m1 * m2;
            break;
        case 3: // Multiplicar por inversa de m2
            mr = m1 * m2.inverse();
            break;
        default:
        break;
    }

    ui->txtMR_11->setText( QString::number( mr(0,0) ) );
    ui->txtMR_12->setText( QString::number( mr(0,1) ) );
    ui->txtMR_21->setText( QString::number( mr(1,0) ) );
    ui->txtMR_22->setText( QString::number( mr(1,1) ) );

}

void MatrixMain::on_txtM1_11_textChanged(const QString &arg1){
    if( arg1.contains(",") ){
        ui->txtM1_11->setText("Enteros");
    }
}
