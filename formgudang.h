#ifndef FORMGUDANG_H
#define FORMGUDANG_H


#include <QWidget>
#include <gudang.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>


namespace Ui {
class Formgudang;
}

class Formgudang : public QWidget
{
    Q_OBJECT

public:
    explicit Formgudang(QWidget *parent = nullptr);
    ~Formgudang();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Formgudang *ui;
    gudang uji;
    QSqlDatabase koneksi;
};

#endif // FORMGUDANG_H
