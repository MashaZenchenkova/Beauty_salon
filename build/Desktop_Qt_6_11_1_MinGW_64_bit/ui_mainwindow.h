/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *text_login;
    QLabel *text_parol;
    QPushButton *Button_podtv;
    QLabel *text_otkr;
    QPushButton *Button_reg;
    QLineEdit *login;
    QLineEdit *parol;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        text_login = new QLabel(centralwidget);
        text_login->setObjectName("text_login");
        text_login->setGeometry(QRect(300, 140, 131, 31));
        text_parol = new QLabel(centralwidget);
        text_parol->setObjectName("text_parol");
        text_parol->setGeometry(QRect(300, 180, 131, 31));
        Button_podtv = new QPushButton(centralwidget);
        Button_podtv->setObjectName("Button_podtv");
        Button_podtv->setGeometry(QRect(320, 220, 101, 21));
        text_otkr = new QLabel(centralwidget);
        text_otkr->setObjectName("text_otkr");
        text_otkr->setGeometry(QRect(320, 120, 91, 21));
        Button_reg = new QPushButton(centralwidget);
        Button_reg->setObjectName("Button_reg");
        Button_reg->setGeometry(QRect(300, 250, 141, 41));
        login = new QLineEdit(centralwidget);
        login->setObjectName("login");
        login->setGeometry(QRect(330, 150, 113, 20));
        parol = new QLineEdit(centralwidget);
        parol->setObjectName("parol");
        parol->setGeometry(QRect(340, 190, 113, 20));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        text_login->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        text_parol->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        Button_podtv->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        text_otkr->setText(QCoreApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264 \320\262 \321\201\320\270\321\201\321\202\320\265\320\274\321\203", nullptr));
        Button_reg->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        login->setText(QString());
        parol->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
