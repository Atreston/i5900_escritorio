#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "clientes.h"
#include "empleados.h"
#include "disenador.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
      Q_OBJECT

   public:
      explicit MainWindow(QWidget *parent = 0);
      ~MainWindow();

   private slots:
      void on_boton_clientes_clicked();

      void on_abrir_clientes_triggered();

      void on_boton_empleados_clicked();

      void on_disenador_clicked();

private:
      Ui::MainWindow *ui;
      Clientes *menu;
      Empleados *menu_emp;
      Disenador *menu_dis;
};

#endif // MAINWINDOW_H
