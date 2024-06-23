#ifndef FORMKLIEN_H
#define FORMKLIEN_H

#include <QWidget>
#include <klien.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
namespace Ui {
class Formklien;
}

class Formklien : public QWidget
{
    Q_OBJECT

public:
    explicit Formklien(QWidget *parent = nullptr);
    ~Formklien();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Formklien *ui;
    klien uji;
    QSqlDatabase koneksi;
};

#endif // FORMKLIEN_H
