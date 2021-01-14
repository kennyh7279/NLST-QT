#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <sys/utsname.h>
//#include <errno.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    struct utsname info;

//    if (uname(&info) < 0)
//        {
//            // error if call fails
//            perror("uname");
//            fprintf(stderr, "Error in uname : %d\n", errno);
//            exit(EXIT_FAILURE);
//        } else {
//        ui->statusbar->showMessage(QString(info.release));
//    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_currentIndexChanged(int)
{
    ui->stackedWidget->setCurrentIndex(ui->comboBox->currentIndex());
}

void MainWindow::on_quitButton_clicked()
{
    QApplication::quit();
}

void MainWindow::on_aboutButton_clicked()
{
    mNewDialog = new AboutDialog;
    mNewDialog->show();
}

void MainWindow::on_manjaroFastestMirror_clicked()
{
    system("pkexec pacman-mirrors --fasttrack");
}

void MainWindow::on_manjaroSystemUpdate_clicked()
{
    system("pkexec pacman -Syu");
}

void MainWindow::on_manjaroDevel_clicked()
{
    system("pkexec pacman -S --noconfirm base-devel cmake gdb");
}

void MainWindow::on_manjaroCute_clicked()
{
    system("pkexec pacman -S  --noconfirm qtcreator qt5-base qt5-doc qt5-examples qt5-translations");
}

void MainWindow::on_manjaroGaming_clicked()
{
    system("pkexec pacman -S --noconfirm steam wine lutris amdvlk");
}

void MainWindow::on_ubuntuSystemUpdate_clicked()
{
    system("pkexec apt -y update && apt -y upgrade");
}

void MainWindow::on_ubuntuDevel_clicked()
{
    system("pkexec apt -y install build-essential");
}

void MainWindow::on_ubuntuCute_clicked()
{
    system("pkexec apt -y install qt5-default qt5-qmake");
}

void MainWindow::on_ubuntuGaming_clicked()
{
    system("pkexec apt -y install steam wine");
}

void MainWindow::on_fedoraRPMFusion_clicked()
{
    system("pkexec dnf -y install https://mirrors.rpmfusion.org/free/fedora/rpmfusion-free-release-$(rpm -E %fedora).noarch.rpm " \
           "https://mirrors.rpmfusion.org/nonfree/fedora/rpmfusion-nonfree-release-$(rpm -E %fedora).noarch.rpm");
}

void MainWindow::on_fedoraSystemUpdate_clicked()
{
    system("pkexec dnf -y update");
}

void MainWindow::on_fedoraDevel_clicked()
{
    system("pkexec dnf -y groupinstall \"Development Tools\"");
}

void MainWindow::on_fedoraCute_clicked()
{
    system("pkexec dnf -y install qt-creator qt5-designer qt5-doctools qt5-qtbase-examples " \
           "qt5-qtbase-common qt5-qtbase-gui qt5-qtbase qt5-assistant");
}

void MainWindow::on_fedoraGaming_clicked()
{
    system("pkexec dnf -y install steam wine-devel mesa-vulkan-drivers lutris");
}
