#include "mainwindow.h"
#include <QApplication>
#include "logindialog.h"
#include <QDebug>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setStyle("Motif");
    qDebug() << QStyleFactory::keys();
    MainWindow w;
    LoginDialog dlg;
    if (dlg.exec() == QDialog::Accepted) {
        w.move(dlg.pos());
        w.show();
        return a.exec();
    } else {
        return 0;
    }
}
