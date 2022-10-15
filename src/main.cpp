#include "includes/mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    w.setWindowTitle("Notex");
    w.show();

    return a.exec();
}
