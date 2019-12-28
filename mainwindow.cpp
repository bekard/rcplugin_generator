#include <QFileDialog>
#include <QString>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rcplugin_generator.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnChoose_clicked()
{
    QFileDialog* dialog = new QFileDialog(this);
    QString name = dialog->getExistingDirectory();
    ui->edPath->setText(name);
}

void MainWindow::on_btnCreate_clicked()
{
    RcPluginGenerator generator;
    QString name = ui->edPath->text() + '/' + ui->edName->text();
    generator.generate(name);
}
