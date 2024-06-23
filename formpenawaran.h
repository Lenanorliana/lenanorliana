#ifndef FORMPENAWARAN_H
#define FORMPENAWARAN_H

#include <QWidget>
#include <penawaran.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

namespace Ui {
class Formpenawaran;
}

class Formpenawaran : public QWidget
{
    Q_OBJECT

public:
    explicit Formpenawaran(QWidget *parent = nullptr);
    ~Formpenawaran();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Formpenawaran *ui;
    penawaran uji;
    QSqlDatabase koneksi;
};

#endif // FORMPENAWARAN_H
