#ifndef MOUKLIEN_H
#define MOUKLIEN_H
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>


class mouklien
{
public:
    mouklien();
    mouklien(QString nomou ,QString idklien,QString tglmou, QString jangkawaktu); //contructor 2 (Overload constructor)

    void setnomou(QString nomou);
    QString getnomou();

    void setidklien(QString idklien);
    QString getidklien();

    void settglmou(QString tglmou);
    QString gettglmou();

    void setjangkawaktu(QString jangkawaktu);
    QString getjangkawaktu();
private:
    QString nomou,idklien,tglmou,jangkawaktu;
    QSqlDatabase koneksiDB;
};

#endif // MOUKLIEN_H
