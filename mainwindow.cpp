#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QDialog>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText(tr("a窗口a"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QTextEdit *tmpTextEdit = new QTextEdit(NULL);
    tmpTextEdit->setObjectName("hehe");
    tmpTextEdit->resize(200, 200);
    tmpTextEdit->setText(tmpTextEdit->objectName());
    tmpTextEdit->show();
}
