#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_Button_podtv_clicked()
{
    QString login = ui->login->text();
    QString pass = ui->parol->text();
    for (int i = 0; i < users.size(); i++)
    {
        if (login == users[i].login && pass == users[i].password)
        {
            QMessageBox::information(this, "Ураааа", "Вход выполнен");
            SecondWindow* pril = new SecondWindow();
            pril->show();
            this->close();

            return;
        }
    }
    QMessageBox::critical(this, "Ошибка", "Неверный логин или пароль");
}
void MainWindow::on_Button_reg_clicked()
{
    QString login = ui->login->text();
    QString pass = ui->parol->text();
    if (login.isEmpty() || pass.isEmpty())
    {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля");
        return;
    }
    for (int i = 0; i < users.size(); i++)
    {
        if (login == users[i].login)
        {
            QMessageBox::warning(this, "Ошибка", "Пользователь существует");
            return;
        }
    }
    users.push_back({login, pass});
    QMessageBox::information(this, "Ураааа", "Регистрация успешна");
}