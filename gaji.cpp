#include "gaji.h"

gaji::gaji() {}

void gaji:: setGolongan (QString golongan)
{
    this->golongan=golongan;
}

int gaji:: getTunjGolongan()
{
    if (this->golongan=="I"){
        this->tunjgolongan=3000000;
    }else if (this->golongan=="II"){
        this->tunjgolongan=3500000;
    }else if (this->golongan=="III"){
        this->tunjgolongan=4000000;
    }else{
        this->tunjgolongan=4500000;
    }

    return this->tunjgolongan;
}

void gaji::setStatusNikah(QString status)
{
    this->status=status;
}

int gaji::getTunjNikah()
{
    if (this->status=="menikah"){
        this->tunjNikah=500000;
    }else{
        this->tunjNikah=150000;
    }

    return this->tunjNikah;
}

void gaji::setJumlahAnak(int jumlah)
{
    this->JumlahAnak=jumlah;
}

int gaji::getTunjAnak()
{
    if(this->JumlahAnak==0){
        this->tunjAnak=0;
    }else if(this->JumlahAnak>=1 && this->JumlahAnak<=2){
        this->tunjAnak=200000;
    }else if(this-> JumlahAnak>=3 && this->JumlahAnak<=4){
        this->tunjAnak=400000;
    }else{
        this->tunjAnak=550000;
    }

    return this->tunjAnak;
}

void gaji::setMasaKerja(int MasaKerja)
{
    this->MasaKerja=MasaKerja;
}

int gaji::getTunjMasaKerja()
{
    if(this->MasaKerja>=0 && this->MasaKerja<=2){
        this->tunjMasaKerja=350000;
    }else if (this->MasaKerja>=3 && this->MasaKerja<=4){
        this->tunjMasaKerja=550000;
    }else{
        this->tunjMasaKerja=750000;
    }

    return this->tunjMasaKerja;
}


int gaji::getGajiTotal()
{
    return getTunjGolongan()+getTunjNikah()+getTunjAnak()+getTunjMasaKerja();
}


