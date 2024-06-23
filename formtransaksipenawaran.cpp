#include "formtransaksipenawaran.h"
#include "ui_formtransaksipenawaran.h"

Formtransaksipenawaran::Formtransaksipenawaran(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formtransaksipenawaran)
{
    ui->setupUi(this);
    transaksipenawaran uji;
    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_transaksi");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi!";
    }
}

Formtransaksipenawaran::~Formtransaksipenawaran()
{
    delete ui;
}

void Formtransaksipenawaran::on_pushButton_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("INSERT INTO transaksi_penawaran (nopenawaran,idbarang,idklien,tglpenawaran)"
                "VALUES(:nopenawaran,:idbarang,:idklien,:tglpenawaran)");
    sql.bindValue(":nopenawaran",ui->nopenawaranLineEdit->text());
    sql.bindValue(":idbarang",ui->idbarangLineEdit->text());
    sql.bindValue(":idklien",ui->idklienLineEdit->text());
    sql.bindValue(":tglpenawaran",ui->tglpenawaranDateEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formtransaksipenawaran::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE transaksi_penawaran SET idbarang=:idbarang,idklien=:idklien,tglpenawaran=:tglpenawaran where nopenawaran=:nopenawaran");
    sql.bindValue(":nopenawaran",ui->nopenawaranLineEdit->text());
    sql.bindValue(":idbarang",ui->idbarangLineEdit->text());
    sql.bindValue(":idklien",ui->idklienLineEdit->text());
    sql.bindValue(":tglpenawaran",ui->tglpenawaranDateEdit->text());
    if (sql.exec()){
        qDebug()<<"Data berhasil Diubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formtransaksipenawaran::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM transaksi_penawaran WHERE nopenawaran=:nopenawaran");
    sql.bindValue(":nopenawaran",ui->nopenawaranLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil dihapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

