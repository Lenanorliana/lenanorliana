#include "formbuktipembayaran.h"
#include "ui_formbuktipembayaran.h"

Formbuktipembayaran::Formbuktipembayaran(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formbuktipembayaran)
{
    ui->setupUi(this);
    buktipembayaran uji;

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_buktipem");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi!";
    }

}

Formbuktipembayaran::~Formbuktipembayaran()
{
    delete ui;
}

void Formbuktipembayaran::on_pushButton_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("INSERT INTO bukti_pembayaran (nobukti,noinvoice,tglbukti,keterangan,norek)"
                "VALUES(:nobukti,:noinvoice,:tglbukti,:keterangan,:norek)");
    sql.bindValue(":nobukti",ui->nobuktiLineEdit->text());
    sql.bindValue(":noinvoice",ui->noinvoiceLineEdit->text());
    sql.bindValue(":tglbukti",ui->tglbuktiDateTimeEdit->text());
    sql.bindValue(":keterangan",ui->keteranganLineEdit->text());
    sql.bindValue(":norek",ui->norekLineEdit->text());


    if (sql.exec()){
        qDebug()<<"Data berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }

}


void Formbuktipembayaran::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE bukti_pembayaran SET noinvoice=:noinvoice, tglbukti=:tglbukti, keterangan=:keterangan, norek:=norek where nobukti=:nobukti");
    sql.bindValue(":nobukti",ui->nobuktiLineEdit->text());
    sql.bindValue(":noinvoice",ui->noinvoiceLineEdit->text());
    sql.bindValue(":tglbukti",ui->tglbuktiDateTimeEdit->text());
    sql.bindValue(":keterangan",ui->keteranganLineEdit->text());
    sql.bindValue(":norek",ui->norekLineEdit->text());
    if (sql.exec()){
        qDebug()<<"Data berhasil Diubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formbuktipembayaran::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM bukti_pembayaran WHERE nobukti=:nokbukti");
    sql.bindValue(":nobukti",ui->nobuktiLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil dihapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

