/********************************************************************************
** Form generated from reading UI file 'formutama.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMUTAMA_H
#define UI_FORMUTAMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formutama
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *formutama)
    {
        if (formutama->objectName().isEmpty())
            formutama->setObjectName(QString::fromUtf8("formutama"));
        formutama->resize(800, 600);
        centralwidget = new QWidget(formutama);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formutama->setCentralWidget(centralwidget);
        menubar = new QMenuBar(formutama);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        formutama->setMenuBar(menubar);
        statusbar = new QStatusBar(formutama);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        formutama->setStatusBar(statusbar);

        retranslateUi(formutama);

        QMetaObject::connectSlotsByName(formutama);
    } // setupUi

    void retranslateUi(QMainWindow *formutama)
    {
        formutama->setWindowTitle(QCoreApplication::translate("formutama", "formutama", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formutama: public Ui_formutama {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMUTAMA_H
