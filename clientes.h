#ifndef CLIENTES_H
#define CLIENTES_H

#include <QDialog>
#include <QSql>
#include <QSqlQuery>

namespace Ui {
class Clientes;
}

class Clientes : public QDialog
{
      Q_OBJECT

   public:
      explicit Clientes(QWidget *parent = 0);
      ~Clientes();

   private slots:
      void on_pushButton_clicked();

      void on_pushButton_2_clicked();

      void on_pushButton_3_clicked();

      void on_pushButton_4_clicked();

      void on_clientes_table_view_activated(const QModelIndex &index);

      void on_lineEdit_returnPressed();

private:
      Ui::Clientes *ui;
      QSqlDatabase *db;
};

#endif // CLIENTES_H
