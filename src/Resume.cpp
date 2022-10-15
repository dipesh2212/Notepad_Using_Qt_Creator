#include "includes/Resume.h"
#include "ui_Resume.h"

Resume::Resume(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Resume)
{
    ui->setupUi(this);
    QPalette p = ui -> textBrowser -> palette();
    p.setColor(QPalette::Base, "#1e1e1e");
    p.setColor(QPalette::Text, Qt::white);
    ui -> textBrowser -> setPalette(p);

}

Resume::~Resume()
{
    delete ui;
}

