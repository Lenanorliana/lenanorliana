#ifndef FORMPURCHASEORDER_H
#define FORMPURCHASEORDER_H

#include <QWidget>
#include <purchaseorder.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>


#include <QWidget>

namespace Ui {
class Formpurchaseorder;
}

class Formpurchaseorder : public QWidget
{
    Q_OBJECT

public:
    explicit Formpurchaseorder(QWidget *parent = nullptr);
    ~Formpurchaseorder();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Formpurchaseorder *ui;
    purchaseorder uji;
    QSqlDatabase koneksi;
};

#endif // FORMPURCHASEORDER_H
