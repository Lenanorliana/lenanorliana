#ifndef FORMTRANSAKSIPENAWARAN_H
#define FORMTRANSAKSIPENAWARAN_H

#include <QWidget>
#include <transaksipenawaran.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>


namespace Ui {
class Formtransaksipenawaran;
}

class Formtransaksipenawaran : public QWidget
{
    Q_OBJECT

public:
    explicit Formtransaksipenawaran(QWidget *parent = nullptr);
    ~Formtransaksipenawaran();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Formtransaksipenawaran *ui;
    transaksipenawaran uji;
    QSqlDatabase koneksi;
};

#endif // FORMTRANSAKSIPENAWARAN_H
