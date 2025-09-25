#include "qwmainwind.h"
#include "ui_qwmainwind.h"

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QFontDialog>
#include <QCoreApplication>
#include <QLabel>
#include <QTextCharFormat>
#include <QDialog>
#include <QVBoxLayout>
#include <QAction>
#include <QDebug> // 用于调试输出


void QWMainWind::updateCurFile(QString aFile)
{//更新当前文件名，并更新状态栏提示
    fCurFileName = aFile;
    fLabCurFile->setText("当前文件：" + fCurFileName);
}

void QWMainWind::iniUI()
{
    //状态栏初始化
    fLabCurFile = new QLabel(this);  //用于显示当前文件名的标签
    fLabCurFile->setMinimumWidth(150);
    fLabCurFile->setText("当前文件：");
    ui->statusBar->addWidget(fLabCurFile);

    progressBar1 = new QProgressBar(this);
    progressBar1->setMaximumWidth(200);
    progressBar1->setMinimum(5);
    progressBar1->setMaximum(50);
    progressBar1->setValue(ui->txtEdit->font().pointSize());
    ui->statusBar->addWidget(progressBar1);

    //工具栏初始化
    spinFontSize = new QSpinBox(this);
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->txtEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);

    ui->mainToolBar->addWidget(new QLabel("字体大小 ", this));
    ui->mainToolBar->addWidget(spinFontSize);

    ui->mainToolBar->addSeparator();
    ui->mainToolBar->addWidget(new QLabel(" 字体 ", this));

    comboFont = new QFontComboBox(this);
    comboFont->setMinimumWidth(150);
    ui->mainToolBar->addWidget(comboFont);

    // 添加"显示自定义窗口"菜单项
    actShowCustomWindow = new QAction("显示自定义窗口", this);
    actShowCustomWindow->setToolTip("点击弹出包含自定义内容的新窗口");
    actShowCustomWindow->setMenuRole(QAction::NoRole);

    // 将菜单项添加到菜单栏
    QMenu *toolMenu = menuBar()->addMenu("工具");
    toolMenu->addAction(actShowCustomWindow);

    // 添加"关于"菜单项
    actAbout = new QAction("关于", this);
    actAbout->setMenuRole(QAction::AboutRole); // 关于功能使用AboutRole
    toolMenu->addAction(actAbout);

    setCentralWidget(ui->txtEdit);
}

void QWMainWind::iniSignalSlots()
{
    // 字体大小信号槽关联
    connect(spinFontSize, SIGNAL(valueChanged(int)),
            this, SLOT(on_spinBoxFontSize_valueChanged(int)));

    // 字体选择信号槽关联
    connect(comboFont, SIGNAL(currentIndexChanged(const QString &)),
            this, SLOT(on_comboFont_currentIndexChanged(const QString &)));

    // 自定义窗口信号槽关联
    connect(actShowCustomWindow, &QAction::triggered,
            this, &QWMainWind::on_actShowCustomWindow_triggered);

    // 关于窗口信号槽关联
    connect(actAbout, &QAction::triggered,
            this, &QWMainWind::on_actAbout_triggered);
}

QWMainWind::QWMainWind(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QWMainWind)
{
    ui->setupUi(this);
    setWindowTitle("文本编辑器"); // 设置主窗口标题

    iniUI();
    iniSignalSlots();
}

QWMainWind::~QWMainWind()
{
    delete ui;
}

// 自定义弹窗的槽函数实现
void QWMainWind::on_actShowCustomWindow_triggered()
{
    qDebug() << "触发自定义窗口"; // 调试信息，确认函数被调用

    QDialog *customWindow = new QDialog(this);
    customWindow->setWindowTitle("自定义内容窗口");
    customWindow->resize(400, 300);

    QLabel *contentLabel = new QLabel("这是自定义的内容：\n\nHello World!\n123456\n测试文本", customWindow);
    contentLabel->setAlignment(Qt::AlignCenter);

    QFont font = contentLabel->font();
    font.setPointSize(14);
    contentLabel->setFont(font);

    QVBoxLayout *layout = new QVBoxLayout(customWindow);
    layout->addWidget(contentLabel);
    customWindow->setLayout(layout);

    customWindow->exec();
}

// 关于窗口的槽函数实现
void QWMainWind::on_actAbout_triggered()
{
    qDebug() << "触发关于窗口"; // 调试信息，确认函数被调用

    QDialog *aboutWindow = new QDialog(this);
    aboutWindow->setWindowTitle("关于");
    aboutWindow->resize(300, 200);

    QLabel *aboutLabel = new QLabel("2023414290422 刘颖良", aboutWindow);
    aboutLabel->setAlignment(Qt::AlignCenter);

    QFont font = aboutLabel->font();
    font.setPointSize(12);
    aboutLabel->setFont(font);

    QVBoxLayout *layout = new QVBoxLayout(aboutWindow);
    layout->addWidget(aboutLabel);
    aboutWindow->setLayout(layout);

    aboutWindow->exec();
}

void QWMainWind::on_txtEdit_copyAvailable(bool b)
{
    ui->actCut->setEnabled(b);
    ui->actCopy->setEnabled(b);
    ui->actPaste->setEnabled(ui->txtEdit->canPaste());
}

void QWMainWind::on_actOpen_triggered()
{
    QString curPath = QCoreApplication::applicationDirPath();
    QString aFileName = QFileDialog::getOpenFileName(this, tr("打开文件"), curPath,
                                                     "C++程序文件(*.cpp);;H头文件(*.h);;文本文件(*.txt);;所有文件(*.*)");

    if (!aFileName.isEmpty())
    {
        QFile aFile(aFileName);
        if (aFile.open(QIODevice::ReadWrite | QIODevice::Text))
        {
            QTextStream aStream(&aFile);
            ui->txtEdit->clear(); // 先清空再读取新内容
            while (!aStream.atEnd())
                ui->txtEdit->append(aStream.readLine());
            updateCurFile(aFileName);
        }
        aFile.close();
    }
}

void QWMainWind::on_actFont_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, ui->txtEdit->font(), this, "选择字体");
    if (ok)
        ui->txtEdit->setFont(font);
}

void QWMainWind::on_actNew_triggered()
{
    ui->txtEdit->clear();
    updateCurFile("");
}

void QWMainWind::on_spinBoxFontSize_valueChanged(int aFontSize)
{
    QTextCharFormat fmt;
    fmt.setFontPointSize(aFontSize);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
    progressBar1->setValue(aFontSize);
}

void QWMainWind::on_comboFont_currentIndexChanged(const QString &arg1)
{
    QTextCharFormat fmt;
    fmt.setFontFamily(arg1);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWind::on_actToolbarLab_triggered(bool checked)
{
    if (checked)
        ui->mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    else
        ui->mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
}

void QWMainWind::on_actFontBold_triggered(bool checked)
{
    QTextCharFormat fmt = ui->txtEdit->currentCharFormat();
    fmt.setFontWeight(checked ? QFont::Bold : QFont::Normal);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWind::on_actFontItalic_triggered(bool checked)
{
    QTextCharFormat fmt = ui->txtEdit->currentCharFormat();
    fmt.setFontItalic(checked);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWind::on_actFontUnder_triggered(bool checked)
{
    QTextCharFormat fmt = ui->txtEdit->currentCharFormat();
    fmt.setFontUnderline(checked);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWind::on_txtEdit_selectionChanged()
{
    QTextCharFormat fmt = ui->txtEdit->currentCharFormat();
    ui->actFontItalic->setChecked(fmt.fontItalic());
    ui->actFontBold->setChecked(fmt.font().bold());
    ui->actFontUnder->setChecked(fmt.fontUnderline());
}
