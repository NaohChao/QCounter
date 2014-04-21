#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStack>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int getLevel(const QChar& oper);
    bool greater(const QChar& oper1,const QChar& oper2);

private slots:
    void on_btn0_clicked();

    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btn7_clicked();

    void on_btn8_clicked();

    void on_btn9_clicked();

    void on_btnDot_clicked();

    void on_btnAdd_clicked();

    void on_btnSub_clicked();

    void on_btnMuti_clicked();

    void on_btnDivi_clicked();

    void on_btnEqual_clicked();

    void on_btnLeft_clicked();

    void on_btnRight_clicked();

private:
    Ui::MainWindow *ui;
    QStack<QChar> expStack;//后缀表达式栈
    QStack<QChar> opStack;//运算符栈
};

#endif // MAINWINDOW_H
