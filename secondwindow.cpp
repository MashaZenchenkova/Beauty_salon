#include "secondwindow.h"
#include "mainwindow.h"
#include "ui_secondwindow.h"
SecondWindow::SecondWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::SecondWindow), mainWindow(nullptr)
{
    ui->setupUi(this);
}
SecondWindow::~SecondWindow()
{
    delete ui;
}
void SecondWindow::setMainWindow(MainWindow* mainWin)
{
    mainWindow = mainWin;
}
void SecondWindow::on_Exit_clicked()
{
    if (mainWindow)
    {
        mainWindow->show();
    }
    this->close();
}