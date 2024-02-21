#include "mainwindow.h"
#include <QApplication>
#include <Qlabel>
#include <QFont>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // MainWindow w;
    // w.show();

    QLabel *label = new QLabel("Hello World!");
    label->setAlignment(Qt::AlignCenter);
    label -> resize(400,400);

    QFont font = label->font();
    font.setPointSize(25);
    label->setFont(font);

    label->setStyleSheet("color: yellow");


    label->show();

    return a.exec();
}
