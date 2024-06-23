#ifndef FORMKENDERAAN_H
#define FORMKENDERAAN_H

#include <QWidget>
#include <kenderaan.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

namespace Ui {
class Formkenderaan;
}

class Formkenderaan : public QWidget
{
    Q_OBJECT

public:
    explicit Formkenderaan(QWidget *parent = nullptr);
    ~Formkenderaan();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Formkenderaan *ui;
    kenderaan uji;
    QSqlDatabase koneksi;
};

#endif // FORMKENDERAAN_H
