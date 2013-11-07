#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->usrLineEdit->setFocus();
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    if (ui->usrLineEdit->text().trimmed() == tr("zane") && ui->pwdLineEdit->text() == tr("123456")) {
        accept();
    } else {
        QMessageBox::warning(this, tr("Waring"), tr("user name or password error!"), QMessageBox::Yes);
        ui->usrLineEdit->clear();
        ui->pwdLineEdit->clear();
        ui->usrLineEdit->setFocus();
    }
}
