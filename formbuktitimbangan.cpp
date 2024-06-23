#include "formbuktitimbangan.h"
#include "ui_formbuktitimbangan.h"

Formbuktitimbangan::Formbuktitimbangan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formbuktitimbangan)
{
    ui->setupUi(this);
    buktitimbangan uji;

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_buktitim");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi!";
    }
}

Formbuktitimbangan::~Formbuktitimbangan()
{
    delete ui;
}

void Formbuktitimbangan::on_pushButton_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("INSERT INTO bukti_timbangan (nobukti,tglmasuk,tglkirim,nopolisi,nobt,tglkeluar,beratmasuk,beratkeluar,nogr)"
                "VALUES(:nobukti,:tglmasuk,:tglkirim,:nopolisi,:nobt,:tglkeluar,:beratmasuk,:beratkeluar,:nogr)");
    sql.bindValue(":nobukti",ui->nobuktiLineEdit->text());
    sql.bindValue(":tglmasuk",ui->tglmasukDateEdit->text());
    sql.bindValue(":tglkirim",ui->tglkirimDateEdit->text());
    sql.bindValue(":nopolisi",ui->nopolisiLineEdit->text());
    sql.bindValue(":nobt",ui->nopolisiLineEdit->text());
    sql.bindValue(":tglkeluar",ui->tglkeluarDateEdit->text());
    sql.bindValue(":beratmasuk",ui->beratmasukLineEdit->text());
    sql.bindValue(":beratkeluar",ui->beratkeluarLineEdit->text());
    sql.bindValue(":nogr",ui->nogrLineEdit->text());


    if (sql.exec()){
        qDebug()<<"Data berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }

}


void Formbuktitimbangan::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE bukti_timbangan SET :tglmasuk,:tglkirim,:nopolisi,:nobt,:tglkeluar,:beratmasuk,:beratkeluar,:nogr where nobukti=:nobukti");
    sql.bindValue(":nobukti",ui->nobuktiLineEdit->text());
    sql.bindValue(":tglmasuk",ui->tglmasukDateEdit->text());
    sql.bindValue(":tglkirim",ui->tglkirimDateEdit->text());
    sql.bindValue(":nopolisi",ui->nopolisiLineEdit->text());
    sql.bindValue(":nobt",ui->nopolisiLineEdit->text());
    sql.bindValue(":tglkeluar",ui->tglkeluarDateEdit->text());
    sql.bindValue(":beratmasuk",ui->beratmasukLineEdit->text());
    sql.bindValue(":beratkeluar",ui->beratkeluarLineEdit->text());
    sql.bindValue(":nogr",ui->nogrLineEdit->text());
    if (sql.exec()){
        qDebug()<<"Data berhasil Diubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formbuktitimbangan::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM bukti_timbangan WHERE nobukti=:nokbukti");
    sql.bindValue(":nobukti",ui->nobuktiLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil dihapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

