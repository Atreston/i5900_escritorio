#ifndef EMPLEADOS_H
#define EMPLEADOS_H

#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class Empleados;
}

class Empleados : public QDialog
{
      Q_OBJECT

   public:
      explicit Empleados(QWidget *parent = 0);
      ~Empleados();

   private slots:
      void on_buscar_2_clicked();

   private:
      Ui::Empleados *ui;
      QSqlDatabase *db;
};

#endif // EMPLEADOS_H
