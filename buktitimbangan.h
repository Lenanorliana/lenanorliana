#ifndef BUKTITIMBANGAN_H
#define BUKTITIMBANGAN_H

#include<QtSql>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>


class buktitimbangan
{
public:
    buktitimbangan();
    buktitimbangan(QString nobukti ,QString tglmasuk , QString tglkirim,QString nopolisi, QString nobt,QString tglkeluar,QString beratmasuk, QString beratkeluar, QString nogr);

    void setnobukti(QString nobukti);
    QString getnobukti();

    void settglmasuk(QString tglmasuk);
    QString gettglmasuk();

    void settglkirim(QString tglkirim);
    QString gettglkirim();

    void setnopolisi(QString nopolisi);
    QString getnopolisi();

    void setnobt(QString nobt);
    QString getnobt();

    void settglkeluar(QString tglkeluar);
    QString gettglkeluar();

    void setberatmasuk(QString beratmasuk);
    QString getberatmasuk();

    void setberatkeluar(QString beratkeluar);
    QString getberatkeluar();

    void setnogr(QString nogr);
    QString getnogr();



private:
    QString nobukti,tglmasuk,tglkirim,nopolisi,nobt,tglkeluar,beratmasuk,beratkeluar,nogr;
    QSqlDatabase koneksiDB;
};

#endif // BUKTITIMBANGAN_H
