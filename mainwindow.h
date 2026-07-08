#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QString>
#include <QVector>
struct User
{
    QString login;
    QString password;
};
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_Button_podtv_clicked();
    void on_Button_reg_clicked();
private:
    Ui::MainWindow *ui;
    QVector<User> users;
};
#endif