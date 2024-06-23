QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    barang.cpp \
    buktipembayaran.cpp \
    buktitimbangan.cpp \
    formbarang.cpp \
    formbuktipembayaran.cpp \
    formbuktitimbangan.cpp \
    formgoodreceipt.cpp \
    formgudang.cpp \
    forminvoice1.cpp \
    formkaryawan.cpp \
    formkenderaan.cpp \
    formklien.cpp \
    formmouklien.cpp \
    formpenawaran.cpp \
    formpurchaseorder.cpp \
    formtransaksipenawaran.cpp \
    gaji.cpp \
    goodreceipt.cpp \
    gudang.cpp \
    guipraktikum.cpp \
    invoice.cpp \
    karyawan.cpp \
    kenderaan.cpp \
    klien.cpp \
    main.cpp \
    mouklien.cpp \
    penawaran.cpp \
    purchaseorder.cpp \
    transaksipenawaran.cpp

HEADERS += \
    barang.h \
    buktipembayaran.h \
    buktitimbangan.h \
    formbarang.h \
    formbuktipembayaran.h \
    formbuktitimbangan.h \
    formgoodreceipt.h \
    formgudang.h \
    forminvoice1.h \
    formkaryawan.h \
    formkenderaan.h \
    formklien.h \
    formmouklien.h \
    formpenawaran.h \
    formpurchaseorder.h \
    formtransaksipenawaran.h \
    gaji.h \
    goodreceipt.h \
    gudang.h \
    guipraktikum.h \
    invoice.h \
    karyawan.h \
    kenderaan.h \
    klien.h \
    mouklien.h \
    penawaran.h \
    purchaseorder.h \
    transaksipenawaran.h

FORMS += \
    formbarang.ui \
    formbuktipembayaran.ui \
    formbuktitimbangan.ui \
    formgoodreceipt.ui \
    formgudang.ui \
    forminvoice1.ui \
    formkaryawan.ui \
    formkenderaan.ui \
    formklien.ui \
    formmouklien.ui \
    formpenawaran.ui \
    formpurchaseorder.ui \
    formtransaksipenawaran.ui \
    guipraktikum.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
