#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


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

void MainWindow::on_actionPrint_triggered()
{
    QMessageBox::information(this, "Not Implemented", "Function not implemented.");
    ui->statusBar->showMessage("Non-implemented function triggered.", 3000);
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::exit(0);
}

