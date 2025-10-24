#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    btnNums = {{Qt::Key_0,ui->btn_0},
               {Qt::Key_1,ui->btn_1},
               {Qt::Key_2,ui->btn_2},
               {Qt::Key_3,ui->btn_3},
               {Qt::Key_4,ui->btn_4},
               {Qt::Key_5,ui->btn_5},
               {Qt::Key_6,ui->btn_6},
               {Qt::Key_7,ui->btn_7},
               {Qt::Key_8,ui->btn_8},
               {Qt::Key_9,ui->btn_9}
               };

    foreach(auto btn,btnNums)
        connect(btn,SIGNAL(clicked()),this,SLOT(btnNumClicked()));

    // connect(ui->btn_1,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btn_2,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btn_3,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btn_4,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btn_5,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btn_6,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btn_7,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btn_8,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btn_9,SIGNAL(clicked()),this,SLOT(btnNumClicked()));

    connect(ui->plus,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->minus,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->divide,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->multiple,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));

    connect(ui->fraction,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->square,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->root,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->percentage,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::calculation(bool *ok)
{
    double result = 0;
    if(operands.size()==2 && opcodes.size() > 0 ){
        double operand1 = operands.front().toDouble();
        operands.pop_front();
        double operand2 = operands.front().toDouble();
        operands.pop_front();

    QString op = opcodes.front();
    opcodes.pop_front();

    if(op == "+"){
        result = operand1+operand2;
    }else if(op =="-"){
        result= operand1-operand2;
    }else if(op =="*"){
        result= operand1*operand2;
    }else if(op =="/"){
        result= operand1/operand2;
    }

    operands.push_back(QString::number(result));

    ui->statusbar->showMessage(QString("calculation is in progress:operands is %1,opcode is %2").arg(opcodes.size()).arg(opcodes.size()));

    }
    else
        ui->statusbar->showMessage(QString("operands is %1,opcode is %2").arg(operands.size()).arg(opcodes.size()));

    return QString::number(result);
}

void MainWindow::btnNumClicked()
{
    QString digit = qobject_cast<QPushButton *>(sender())->text();

    if(digit == "0" && operand == "0")
        digit = "";

    if(operand == "0" && digit != "0")
        operand = "";

    operand += digit;

    ui->display->setText(operand);

}

void MainWindow::on_dot_clicked()
{
    if(!operand.contains("."))
        operand+=qobject_cast<QPushButton *>(sender())->text();
    ui->display->setText(operand);
}


void MainWindow::on_delete_2_clicked()
{
    operand = operand.left(operand.length() -1 );
    ui->display->setText(operand);
}


void MainWindow::on_C_clicked()
{
    operand.clear();
    ui->display->setText(operand);
}

void MainWindow::btnBinaryOperatorClicked()
{
    ui->statusbar->showMessage("last operand" + operand);
    QString opcode = qobject_cast<QPushButton *>(sender())->text();
    qDebug()<<opcode;

    if (operand != ""){
        operands.push_back(operand);
        operand = "";

        opcodes.push_back(opcode);

    QString result=calculation();

    ui->display->setText(result);
    }
}

void MainWindow::btnUnaryOperatorClicked()
{
    if (operand != ""){
        double result = operand.toDouble();
        operand = "";

        QString op = qobject_cast<QPushButton*>(sender())->text();

        if(op == "%")
            result /=100.0;
        else if(op == "1/x")
            result = 1/result;
        else if(op == "x^2")
            result *=result;
        else if(op == "")
            result=sqrt(result);

        ui->display->setText(QString::number(result));
    }
}


void MainWindow::on_equal_clicked()
{
    if (operand != ""){
        operands.push_back(operand);
        operand = "";
    }

    QString result=calculation();
    ui->display->setText(result);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    foreach(auto btnKey,btnNums.keys()){
        if(event->key() == btnKey)
            btnNums[btnKey]->animateClick();
    }

    // if(event->key() == Qt::Key_0)
    //     ui->btn_0->animateClick(100);
    // else if(event->key() == Qt::Key_1)
    //     ui->btn_1->animateClick(100);
}

