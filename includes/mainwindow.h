#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QtCore>
#include <QColorDialog>
#include <QTextCursor>
#include <QTextCharFormat>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionCopy_triggered();

    void on_actionCut_triggered();

    void on_actionPaste_triggered();

    void on_action_Exit_triggered();

    void on_actionBold_triggered();

    void subscript_Checked();

    void superscript_Checked();

    void on_actionResume_triggered();



private:
    Ui::MainWindow *ui;
    QString currentFileName = "";
    QPointer<QAction> subScript = nullptr;
    QPointer<QAction> superScript = nullptr;

};
#endif
