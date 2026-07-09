#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui { class SecondWindow; }
QT_END_NAMESPACE
class MainWindow;
class SecondWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();
    void setMainWindow(MainWindow* mainWin);
private slots:
    void on_Exit_clicked();
private:
    Ui::SecondWindow *ui;
    MainWindow* mainWindow;
};
#endif