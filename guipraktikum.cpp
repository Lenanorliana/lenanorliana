#include "guipraktikum.h"
#include "ui_guipraktikum.h"
#include "Qstring"

guipraktikum::guipraktikum(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::guipraktikum)
{
    ui->setupUi(this);
    myForm = new FormKaryawan;
    formbarang = new Formbarang;
    formbuktipembayaran = new Formbuktipembayaran;
    formbuktitimbangan = new Formbuktitimbangan;
    formgudang = new Formgudang;
    formkenderaan =new Formkenderaan;
    formklien = new Formklien;
    formmouklien = new Formmouklien;
    formpenawaran = new Formpenawaran;
    formtransaskipenawaran = new Formtransaksipenawaran;
    formpurchaseorder = new Formpurchaseorder;
    formgoodreceipt = new Formgoodreceipt;
    forminvoice1 = new Forminvoice1;



}

guipraktikum::~guipraktikum()
{
    delete ui;
    delete myForm;
    delete formbarang;
    delete formbuktipembayaran;
    delete formbuktitimbangan;
    delete formgudang;
    delete formkenderaan;
    delete formklien;
    delete formmouklien;
    delete formpenawaran;
    delete formtransaskipenawaran;
    delete formpurchaseorder;
    delete formgoodreceipt;
    delete forminvoice1;
}



void guipraktikum::on_pushButton_clicked()
{
    myForm->show();
}




void guipraktikum::on_pushButton_barang_clicked()
{
    formbarang->show();
}


void guipraktikum::on_pushButton_3_clicked()
{
    formbuktipembayaran->show();
}


void guipraktikum::on_pushButton_4_clicked()
{
    formbuktitimbangan->show();
}


void guipraktikum::on_pushButton_6_clicked()
{
    formgudang->show();
}


void guipraktikum::on_pushButton_8_clicked()
{
    formkenderaan->show();
}


void guipraktikum::on_pushButton_9_clicked()
{
    formklien->show();
}


void guipraktikum::on_pushButton_10_clicked()
{
    formmouklien->show();
}


void guipraktikum::on_pushButton_11_clicked()
{
    formpenawaran->show();
}


void guipraktikum::on_pushButton_13_clicked()
{
    formtransaskipenawaran->show();
}


void guipraktikum::on_pushButton_12_clicked()
{
    formpurchaseorder->show();
}


void guipraktikum::on_pushButton_5_clicked()
{
    formgoodreceipt->show();
}


void guipraktikum::on_pushButton_7_clicked()
{
    forminvoice1->show();
}

