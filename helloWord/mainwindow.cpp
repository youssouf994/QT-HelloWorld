#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_actionGrassetto_triggered()
{
    QTextCharFormat Formato {};

    if (ui->actionGrassetto->isChecked())
        Formato.setFontWeight(QFont::Bold);
    else
        Formato.setFontWeight(QFont::Normal);

    ui->textEdit->setCurrentCharFormat(Formato);
}



void MainWindow::on_button1_clicked()
{
    ui->messaggioButton1->setText("benvenuto!");
}

