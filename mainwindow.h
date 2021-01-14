#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <aboutdialog.h>

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

    void on_comboBox_currentIndexChanged(int index);

    void on_quitButton_clicked();

    void on_aboutButton_clicked();

    void on_manjaroFastestMirror_clicked();

    void on_manjaroSystemUpdate_clicked();

    void on_manjaroDevel_clicked();

    void on_manjaroCute_clicked();

    void on_manjaroGaming_clicked();

    void on_ubuntuSystemUpdate_clicked();

    void on_ubuntuDevel_clicked();

    void on_ubuntuCute_clicked();

    void on_ubuntuGaming_clicked();

    void on_fedoraRPMFusion_clicked();

    void on_fedoraSystemUpdate_clicked();

    void on_fedoraDevel_clicked();

    void on_fedoraCute_clicked();

    void on_fedoraGaming_clicked();

private:
    Ui::MainWindow *ui;
    AboutDialog *mNewDialog;
};
#endif // MAINWINDOW_H
