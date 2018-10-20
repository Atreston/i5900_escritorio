#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
   QMainWindow(parent),
   ui(new Ui::MainWindow)
{
   ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete menu;
    delete menu_emp;
}

void MainWindow::on_boton_clientes_clicked()
{
    menu = new Clientes(this);
    menu->show();
}

void MainWindow::on_boton_empleados_clicked()
{
    menu_emp = new Empleados(this);
    menu_emp->show();
}

void MainWindow::on_disenador_clicked()
{
    menu_dis = new Disenador(this);
    menu_dis->show();
}
