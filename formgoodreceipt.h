#ifndef FORMGOODRECEIPT_H
#define FORMGOODRECEIPT_H


#include <QWidget>
#include <goodreceipt.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

namespace Ui {
class Formgoodreceipt;
}

class Formgoodreceipt : public QWidget
{
    Q_OBJECT

public:
    explicit Formgoodreceipt(QWidget *parent = nullptr);
    ~Formgoodreceipt();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Formgoodreceipt *ui;
    goodreceipt uji;
    QSqlDatabase koneksi;
};

#endif // FORMGOODRECEIPT_H
