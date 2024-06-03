#ifndef GAJI_H
#define GAJI_H
#include <QString>

class gaji
{
public:
    gaji();

    void setGolongan(QString golongan);
    int getTunjGolongan();

    void setStatusNikah(QString status);
    int getTunjNikah();

    void setJumlahAnak(int jumlah);
    int getTunjAnak();

    void setMasaKerja(int masaKerja);
    int getTunjMasaKerja();

    int getGajiTotal();

private:
     QString golongan,status;
    int tunjgolongan,tunjNikah,tunjAnak,tunjMasaKerja,GajiTotal;
     int JumlahAnak,MasaKerja;

};

#endif // GAJI_H
