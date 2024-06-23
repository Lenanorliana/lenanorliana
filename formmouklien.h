#ifndef FORMMOUKLIEN_H
#define FORMMOUKLIEN_H

#include <QWidget>
#include <mouklien.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

namespace Ui {
class Formmouklien;
}

class Formmouklien : public QWidget
{
    Q_OBJECT

public:
    explicit Formmouklien(QWidget *parent = nullptr);
    ~Formmouklien();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Formmouklien *ui;
    mouklien uji;
    QSqlDatabase koneksi;
};

#endif // FORMMOUKLIEN_H
