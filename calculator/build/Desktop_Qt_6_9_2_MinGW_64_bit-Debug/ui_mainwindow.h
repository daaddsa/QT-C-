/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QPushButton *square;
    QPushButton *plus;
    QPushButton *equal;
    QPushButton *root;
    QPushButton *delete_2;
    QPushButton *btn_4;
    QPushButton *C;
    QPushButton *fraction;
    QPushButton *btn_8;
    QPushButton *btn_2;
    QPushButton *plusandminus;
    QPushButton *minus;
    QPushButton *btn_1;
    QPushButton *btn_9;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *dot;
    QPushButton *btn_7;
    QPushButton *CE;
    QPushButton *btn_3;
    QPushButton *percentage;
    QLineEdit *display;
    QPushButton *multiple;
    QPushButton *btn_0;
    QPushButton *divide;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(344, 292);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton::pressed{\n"
"	background-color:rgba(1,1,1,1)\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        square = new QPushButton(centralwidget);
        square->setObjectName("square");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(square->sizePolicy().hasHeightForWidth());
        square->setSizePolicy(sizePolicy);
        square->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(square, 2, 1, 1, 1);

        plus = new QPushButton(centralwidget);
        plus->setObjectName("plus");
        sizePolicy.setHeightForWidth(plus->sizePolicy().hasHeightForWidth());
        plus->setSizePolicy(sizePolicy);
        plus->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(plus, 5, 3, 1, 1);

        equal = new QPushButton(centralwidget);
        equal->setObjectName("equal");
        sizePolicy.setHeightForWidth(equal->sizePolicy().hasHeightForWidth());
        equal->setSizePolicy(sizePolicy);
        equal->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(equal, 6, 3, 1, 1);

        root = new QPushButton(centralwidget);
        root->setObjectName("root");
        sizePolicy.setHeightForWidth(root->sizePolicy().hasHeightForWidth());
        root->setSizePolicy(sizePolicy);
        root->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(root, 2, 2, 1, 1);

        delete_2 = new QPushButton(centralwidget);
        delete_2->setObjectName("delete_2");
        sizePolicy.setHeightForWidth(delete_2->sizePolicy().hasHeightForWidth());
        delete_2->setSizePolicy(sizePolicy);
        delete_2->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(delete_2, 1, 3, 1, 1);

        btn_4 = new QPushButton(centralwidget);
        btn_4->setObjectName("btn_4");
        sizePolicy.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy);
        btn_4->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(btn_4, 4, 0, 1, 1);

        C = new QPushButton(centralwidget);
        C->setObjectName("C");
        sizePolicy.setHeightForWidth(C->sizePolicy().hasHeightForWidth());
        C->setSizePolicy(sizePolicy);
        C->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(C, 1, 2, 1, 1);

        fraction = new QPushButton(centralwidget);
        fraction->setObjectName("fraction");
        sizePolicy.setHeightForWidth(fraction->sizePolicy().hasHeightForWidth());
        fraction->setSizePolicy(sizePolicy);
        fraction->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(fraction, 2, 0, 1, 1);

        btn_8 = new QPushButton(centralwidget);
        btn_8->setObjectName("btn_8");
        sizePolicy.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy);
        btn_8->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(btn_8, 3, 1, 1, 1);

        btn_2 = new QPushButton(centralwidget);
        btn_2->setObjectName("btn_2");
        sizePolicy.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy);
        btn_2->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(btn_2, 5, 1, 1, 1);

        plusandminus = new QPushButton(centralwidget);
        plusandminus->setObjectName("plusandminus");
        sizePolicy.setHeightForWidth(plusandminus->sizePolicy().hasHeightForWidth());
        plusandminus->setSizePolicy(sizePolicy);
        plusandminus->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(plusandminus, 6, 0, 1, 1);

        minus = new QPushButton(centralwidget);
        minus->setObjectName("minus");
        sizePolicy.setHeightForWidth(minus->sizePolicy().hasHeightForWidth());
        minus->setSizePolicy(sizePolicy);
        minus->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(minus, 4, 3, 1, 1);

        btn_1 = new QPushButton(centralwidget);
        btn_1->setObjectName("btn_1");
        sizePolicy.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy);
        btn_1->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(btn_1, 5, 0, 1, 1);

        btn_9 = new QPushButton(centralwidget);
        btn_9->setObjectName("btn_9");
        sizePolicy.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy);
        btn_9->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(btn_9, 3, 2, 1, 1);

        btn_5 = new QPushButton(centralwidget);
        btn_5->setObjectName("btn_5");
        sizePolicy.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy);
        btn_5->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(btn_5, 4, 1, 1, 1);

        btn_6 = new QPushButton(centralwidget);
        btn_6->setObjectName("btn_6");
        sizePolicy.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy);
        btn_6->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(btn_6, 4, 2, 1, 1);

        dot = new QPushButton(centralwidget);
        dot->setObjectName("dot");
        sizePolicy.setHeightForWidth(dot->sizePolicy().hasHeightForWidth());
        dot->setSizePolicy(sizePolicy);
        dot->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(dot, 6, 2, 1, 1);

        btn_7 = new QPushButton(centralwidget);
        btn_7->setObjectName("btn_7");
        sizePolicy.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy);
        btn_7->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(btn_7, 3, 0, 1, 1);

        CE = new QPushButton(centralwidget);
        CE->setObjectName("CE");
        sizePolicy.setHeightForWidth(CE->sizePolicy().hasHeightForWidth());
        CE->setSizePolicy(sizePolicy);
        CE->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(CE, 1, 1, 1, 1);

        btn_3 = new QPushButton(centralwidget);
        btn_3->setObjectName("btn_3");
        sizePolicy.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy);
        btn_3->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(btn_3, 5, 2, 1, 1);

        percentage = new QPushButton(centralwidget);
        percentage->setObjectName("percentage");
        sizePolicy.setHeightForWidth(percentage->sizePolicy().hasHeightForWidth());
        percentage->setSizePolicy(sizePolicy);
        percentage->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(percentage, 1, 0, 1, 1);

        display = new QLineEdit(centralwidget);
        display->setObjectName("display");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy1);
        display->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));
        display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_3->addWidget(display, 0, 0, 1, 4);

        multiple = new QPushButton(centralwidget);
        multiple->setObjectName("multiple");
        sizePolicy.setHeightForWidth(multiple->sizePolicy().hasHeightForWidth());
        multiple->setSizePolicy(sizePolicy);
        multiple->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(multiple, 3, 3, 1, 1);

        btn_0 = new QPushButton(centralwidget);
        btn_0->setObjectName("btn_0");
        sizePolicy.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy);
        btn_0->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(btn_0, 6, 1, 1, 1);

        divide = new QPushButton(centralwidget);
        divide->setObjectName("divide");
        sizePolicy.setHeightForWidth(divide->sizePolicy().hasHeightForWidth());
        divide->setSizePolicy(sizePolicy);
        divide->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(divide, 2, 3, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 344, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        square->setText(QCoreApplication::translate("MainWindow", "x^2", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        root->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        delete_2->setText(QCoreApplication::translate("MainWindow", "DEL", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        C->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        fraction->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        plusandminus->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        CE->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        percentage->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        display->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        multiple->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
