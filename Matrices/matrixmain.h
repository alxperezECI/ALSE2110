#ifndef MATRIXMAIN_H
#define MATRIXMAIN_H

#include <QMainWindow>
#include <eigen3/Eigen/Dense>

using Eigen::Matrix2d;

namespace Ui {
class MatrixMain;
}

class MatrixMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit MatrixMain(QWidget *parent = 0);
    ~MatrixMain();


private slots:
    void on_btnOperar_clicked();

    void on_txtM1_11_textChanged(const QString &arg1);

private:
    Ui::MatrixMain *ui;


};

#endif // MATRIXMAIN_H
