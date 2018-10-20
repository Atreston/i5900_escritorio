#include "disenador.h"
#include "ui_disenador.h"

Disenador::Disenador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Disenador)
{
    ui->setupUi(this);

    db = new QSqlDatabase(QSqlDatabase::addDatabase("QPSQL"));

    db->setHostName("localhost");
    db->setDatabaseName("ropa_estefania");
    db->setUserName("postgres");
    db->setPassword("postgres");
}

Disenador::~Disenador()
{
    delete ui;
    delete db;
}

void Disenador::on_pushButtonDis_clicked()
{
   QString resultado = "No results";

   if(!db->open()) {
      resultado = "error al iniciar conexion";
   }

   QString value("SELECT id_diseñador, nombre, telefono, domicilio FROM diseñador");
   switch(ui->comboBoxDis->currentIndex()){
      case 0:
         value += " where id_diseñador = ";
         value += ui->lineEditDis->text();
         value += ";";
         break;
      case 1:
         value += " where nombre = '";
         value += ui->lineEditDis->text();
         value += "';";
         break;
   }

   QSqlQuery query;
   query.exec(value);
      QString id;
      while (query.next()) {
         resultado = "diseñador:\t";
         resultado += query.value(0).toString();
         resultado += "\n";
         id = query.value(0).toString();


         resultado += "Nombre:\t";
         resultado += query.value(1).toString();


         resultado += "\n";

         resultado += "costo:\t";
         resultado += query.value(2).toString();
         resultado += "\n\n";

      }
      QString value2 = "select nombre, costo from modelos_de_ropa where diseñador = ";
      value2 += id;
      query.exec(value2);
      while (query.next()) {
         resultado += "modelo:\t";
         resultado += query.value(0).toString();
         resultado += "\n";
         id = query.value(0).toString();


         resultado += "costo:\t";
         resultado += query.value(1).toString();
         resultado += "\n\n";
      }
      ui->textBrowserDis->setText(resultado);
}
