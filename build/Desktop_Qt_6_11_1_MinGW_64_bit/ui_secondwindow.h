/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Exit;
    QPushButton *Add_emp;
    QPushButton *Add_usluga;
    QPushButton *Add_klient;
    QPushButton *Add_zap;

    void setupUi(QMainWindow *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName("SecondWindow");
        SecondWindow->resize(800, 396);
        centralwidget = new QWidget(SecondWindow);
        centralwidget->setObjectName("centralwidget");
        Exit = new QPushButton(centralwidget);
        Exit->setObjectName("Exit");
        Exit->setGeometry(QRect(680, 360, 80, 18));
        Add_emp = new QPushButton(centralwidget);
        Add_emp->setObjectName("Add_emp");
        Add_emp->setGeometry(QRect(20, 20, 131, 18));
        Add_usluga = new QPushButton(centralwidget);
        Add_usluga->setObjectName("Add_usluga");
        Add_usluga->setGeometry(QRect(20, 50, 131, 18));
        Add_klient = new QPushButton(centralwidget);
        Add_klient->setObjectName("Add_klient");
        Add_klient->setGeometry(QRect(20, 80, 131, 18));
        Add_zap = new QPushButton(centralwidget);
        Add_zap->setObjectName("Add_zap");
        Add_zap->setGeometry(QRect(20, 110, 131, 18));
        SecondWindow->setCentralWidget(centralwidget);

        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "MainWindow", nullptr));
        Exit->setText(QCoreApplication::translate("SecondWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        Add_emp->setText(QCoreApplication::translate("SecondWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
        Add_usluga->setText(QCoreApplication::translate("SecondWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\203\321\201\320\273\321\203\320\263\321\203", nullptr));
        Add_klient->setText(QCoreApplication::translate("SecondWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        Add_zap->setText(QCoreApplication::translate("SecondWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
