#ifndef FORMINVOICE1_H
#define FORMINVOICE1_H


#include <QWidget>
#include <invoice.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

namespace Ui {
class Forminvoice1;
}

class Forminvoice1 : public QWidget
{
    Q_OBJECT

public:
    explicit Forminvoice1(QWidget *parent = nullptr);
    ~Forminvoice1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Forminvoice1 *ui;
    invoice uji;
    QSqlDatabase koneksi;
};

#endif // FORMINVOICE1_H
