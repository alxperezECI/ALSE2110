#ifndef DIVI_DIALOG_H
#define DIVI_DIALOG_H

#include <QDialog>

namespace Ui {
class Divi_dialog;
}

class Divi_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Divi_dialog(QWidget *parent = 0);
    ~Divi_dialog();

signals:
    void pasaparametros(int tipo, double esc );

private slots:
    void on_buttonBox_accepted();
    void on_rbt_M2M1_clicked();
    void on_rbt_M1M2_clicked();
    void on_rbt_M2_Escalar_clicked();
    void on_rbt_M1_Escalar_clicked();

private:
    Ui::Divi_dialog *ui;
};

#endif // DIVI_DIALOG_H
