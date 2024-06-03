#ifndef FORMKARYAWAN_H
#define FORMKARYAWAN_H

#include <QWidget>
#include <karyawan.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

namespace Ui {
class FormKaryawan;
}

class FormKaryawan : public QWidget
{
    Q_OBJECT

public:
    explicit FormKaryawan(QWidget *parent = nullptr);
    ~FormKaryawan();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::FormKaryawan *ui;
    karyawan uji;
    QSqlDatabase koneksi;
};

#endif // FORMKARYAWAN_H
