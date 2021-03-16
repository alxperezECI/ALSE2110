#include "divi_dialog.h"
#include "ui_divi_dialog.h"

Divi_dialog::Divi_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Divi_dialog)
{
    ui->setupUi(this);
}

Divi_dialog::~Divi_dialog()
{
    delete ui;
}

void Divi_dialog::on_rbt_M1_Escalar_clicked()
{
    ui->txt_Escalar->setEnabled( true );
}

void Divi_dialog::on_rbt_M2_Escalar_clicked()
{
    ui->txt_Escalar->setEnabled( true );
}

void Divi_dialog::on_rbt_M1M2_clicked()
{
    ui->txt_Escalar->setEnabled( false );
}

void Divi_dialog::on_rbt_M2M1_clicked()
{
    ui->txt_Escalar->setEnabled( false );
}

void Divi_dialog::on_buttonBox_accepted()
{
    double esc = 0;
    if (ui->rbt_M1_Escalar || ui->rbt_M2_Escalar ){
           esc = ui->txt_Escalar->text().toDouble();
    }
    // emitir una señal que será capturada por al ventana principal
    //emit pasaparametros( 0, esc );

}
