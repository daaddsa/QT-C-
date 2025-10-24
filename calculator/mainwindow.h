#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QStack>
#include <QDebug>
#include <QKeyEvent>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString operand;
    QString opcode;
    QStack<QString> operands;
    QStack<QString> opcodes;
    QMap<int ,QPushButton*> btnNums;

    QString calculation(bool *ok=NULL);

private slots:
    void btnNumClicked();

    void on_dot_clicked();

    void on_delete_2_clicked();

    void on_C_clicked();

    void btnBinaryOperatorClicked();

    void btnUnaryOperatorClicked();

    void on_equal_clicked();

    virtual void keyPressEvent(QKeyEvent *event);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
