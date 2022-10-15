#ifndef RESUME_H
#define RESUME_H

#include <QDialog>
#include <QMainWindow>
#include <QDesktopServices>

namespace Ui {
class Resume;
}

class Resume : public QDialog
{
    Q_OBJECT

public:
    explicit Resume(QWidget *parent = nullptr);
    ~Resume();


//private slots:

   /* void on_viewCertificationsBtn_clicked();

    void on_hireMeBtn_clicked();

    void on_viewProjectsBtn_clicked();

    void on_viewBlogBtn_clicked();*/

private:
    Ui::Resume *ui;
};
#endif
