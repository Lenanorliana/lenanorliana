#ifndef GUIPRAKTIKUM_H
#define GUIPRAKTIKUM_H

#include <QWidget>
#include <formkaryawan.h>
#include <formbarang.h>
#include<formbuktipembayaran.h>
#include<formbuktitimbangan.h>
#include<formgudang.h>
#include<formkenderaan.h>
#include<formklien.h>
#include<formmouklien.h>
#include<formpenawaran.h>
#include<formtransaksipenawaran.h>
#include<formpurchaseorder.h>
#include<formgoodreceipt.h>
#include<forminvoice1.h>

namespace Ui {
class guipraktikum;
}

class guipraktikum : public QWidget
{
    Q_OBJECT

public:
    explicit guipraktikum(QWidget *parent = nullptr);
    ~guipraktikum();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_barang_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::guipraktikum *ui;
    FormKaryawan * myForm;
    Formbarang * formbarang;
    Formbuktipembayaran * formbuktipembayaran;
    Formbuktitimbangan * formbuktitimbangan;
    Formgudang * formgudang;
    Formkenderaan * formkenderaan;
    Formklien * formklien;
    Formmouklien * formmouklien;
    Formpenawaran * formpenawaran;
    Formtransaksipenawaran * formtransaskipenawaran;
    Formpurchaseorder * formpurchaseorder;
    Formgoodreceipt * formgoodreceipt;
    Forminvoice1 * forminvoice1;

}
;
#endif // GUIPRAKTIKUM_H
