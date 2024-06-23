#ifndef FORMBARANG_H
#define FORMBARANG_H

#include <QWidget>
#include <barang.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

namespace Ui {
class Formbarang;
}

class Formbarang : public QWidget
{
    Q_OBJECT

public:
    explicit Formbarang(QWidget *parent = nullptr);
    ~Formbarang();

private slots:
    void on_simpan_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Formbarang *ui;
    barang uji;
    QSqlDatabase koneksi;
};

#endif // FORMBARANG_H
