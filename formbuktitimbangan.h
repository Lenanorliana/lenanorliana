#ifndef FORMBUKTITIMBANGAN_H
#define FORMBUKTITIMBANGAN_H


#include <QWidget>
#include <buktitimbangan.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

namespace Ui {
class Formbuktitimbangan;
}

class Formbuktitimbangan : public QWidget
{
    Q_OBJECT

public:
    explicit Formbuktitimbangan(QWidget *parent = nullptr);
    ~Formbuktitimbangan();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Formbuktitimbangan *ui;
    buktitimbangan uji;
    QSqlDatabase koneksi;
};

#endif // FORMBUKTITIMBANGAN_H
