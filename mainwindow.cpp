#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "demo/clockwidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BtnClockWidget_clicked()
{
    auto widget  = new ClockWidget();
    widget->show();
}
