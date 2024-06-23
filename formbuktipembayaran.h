#ifndef FORMBUKTIPEMBAYARAN_H
#define FORMBUKTIPEMBAYARAN_H

#include <QWidget>
#include <buktipembayaran.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

namespace Ui {
class Formbuktipembayaran;
}

class Formbuktipembayaran : public QWidget
{
    Q_OBJECT

public:
    explicit Formbuktipembayaran(QWidget *parent = nullptr);
    ~Formbuktipembayaran();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Formbuktipembayaran *ui;
    buktipembayaran uji;
    QSqlDatabase koneksi;
};

#endif // FORMBUKTIPEMBAYARAN_H
