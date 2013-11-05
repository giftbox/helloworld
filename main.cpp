#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include "logindlg.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    MainWindow w;
    LoginDlg dlg;
    if (dlg.exec() == QDialog::Accepted) {
        w.move(dlg.geometry().topLeft());
        w.show();
        return a.exec();
    } else {
        return 0;
    }
}
