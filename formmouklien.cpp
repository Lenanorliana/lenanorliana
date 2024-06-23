#include "formmouklien.h"
#include "ui_formmouklien.h"

Formmouklien::Formmouklien(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formmouklien)
{
    ui->setupUi(this);
    mouklien uji;
    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_mouklien");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi!";
    }
}

Formmouklien::~Formmouklien()
{
    delete ui;
}

void Formmouklien::on_pushButton_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("INSERT INTO mou_klien1 (nomou,idklien,tglmou,jangkawaktu)"
                "VALUES(:nomou,:idklien,:tglmou,:jangkawaktu)");
    sql.bindValue(":nomou",ui->nomouLineEdit->text());
    sql.bindValue(":idklien",ui->idklienLineEdit->text());
    sql.bindValue(":tglmou",ui->tglmouDateEdit->text());
    sql.bindValue(":jangkawaktu",ui->jangkawaktuLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formmouklien::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE mou_klien1 SET idklien=:idklien,tglmou=:tglmou,jangkawaktu=:jangkawaktu where nomou=:nomou");
    sql.bindValue(":nomou",ui->nomouLineEdit->text());
    sql.bindValue(":idklien",ui->idklienLineEdit->text());
    sql.bindValue(":tglmou",ui->tglmouDateEdit->text());
    sql.bindValue(":jangkawaktu",ui->jangkawaktuLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Diubah";
    }else{
        qDebug()<<sql.lastError().text();
    }

}


void Formmouklien::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM mou_klien1 WHERE nomou=:nomou");
    sql.bindValue(":nomou",ui->nomouLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil dihapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

