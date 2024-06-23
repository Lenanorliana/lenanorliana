#include "formpenawaran.h"
#include "ui_formpenawaran.h"

Formpenawaran::Formpenawaran(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formpenawaran)
{
    ui->setupUi(this);
    penawaran uji;
    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_penawaran");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi!";
    }
}

Formpenawaran::~Formpenawaran()
{
    delete ui;
}

void Formpenawaran::on_pushButton_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("INSERT INTO penawaran (nopenawaran,idbarang,status,harga)"
                "VALUES(:nopenawaran,:idbarang,:status,:harga)");
    sql.bindValue(":nopenawaran",ui->nopenawaranLineEdit->text());
    sql.bindValue(":idbarang",ui->idbarangLineEdit->text());
    sql.bindValue(":status",ui->statusLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formpenawaran::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE penawaran SET idbarang=:idbarang,status=:status,harga=:harga where nopenawaran=:nopenawaran");
    sql.bindValue(":nopenawaran",ui->nopenawaranLineEdit->text());
    sql.bindValue(":idbarang",ui->idbarangLineEdit->text());
    sql.bindValue(":status",ui->statusLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text());
    if (sql.exec()){
        qDebug()<<"Data berhasil Diubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formpenawaran::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM penawaran WHERE nopenawaran=:nopenawaran");
    sql.bindValue(":nopenawaran",ui->nopenawaranLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil dihapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

