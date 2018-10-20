#include "clientes.h"
#include "ui_clientes.h"

class QString;

Clientes::Clientes(QWidget *parent) :
   QDialog(parent),
   ui(new Ui::Clientes)
{
   ui->setupUi(this);

   db = new QSqlDatabase(QSqlDatabase::addDatabase("QPSQL"));

   db->setHostName("localhost");
   db->setDatabaseName("ropa_estefania");
   db->setUserName("postgres");
   db->setPassword("postgres");
}

Clientes::~Clientes()
{
   delete ui;
   delete db;
}


void Clientes::on_pushButton_clicked()
{  
   QString resultado = "No result";

   if(!db->open()) {
      resultado = "error al iniciar conexion";
   }

   QString value("SELECT id_cliente, nombre, telefono, domicilio, adeudo FROM clientes");
   switch(ui->comboBox->currentIndex()){
      case 0:
         value += " where id_cliente = ";
         value += ui->lineEdit->text();
         value += ";";
         break;
      case 1:
         value += " where nombre = '";
         value += ui->lineEdit->text();
         value += "';";
         break;
   }

   QSqlQuery query;
   if (
   query.exec(value)){

   while (query.next()) {
      resultado = "ID:\t";
      resultado += query.value(0).toString();
      resultado += "\n";

      resultado += "Nombre:\t";
      resultado += query.value(1).toString();
      resultado += "\n";

      resultado += "telefono:\t";
      resultado += query.value(2).toString();
      resultado += "\n";

      resultado += "domicilio:\t";
      resultado += query.value(3).toString();
      resultado += "\n";

      resultado += "adeudo:\t";
      resultado += query.value(4).toString();
      resultado += "\n";

      resultado += "RFC:\t";
      resultado += query.value(5).toString();
      resultado += "\n\n";
   }

   ui->textBrowser->setText(resultado);
   }
   else
      ui->textBrowser->setText("error");
}

void Clientes::on_pushButton_2_clicked()
{
   db->open();
    QString value("Insert into cliente values(");
    value += ui->add_id->text();
    value += ", '";
    value += ui->add_nombre->text();
    value += "', '";
    value += ui->add_telefono->text();
    value += "', '";
    value += ui->add_dom->text();
    value += "', ";
    value += ui->add_adeudo->text();
    value += ");";

    ui->query->setText(value);

    bool exito;
    QSqlQuery query;
    exito = query.exec(value);
    if (exito) ui->mensaje->setText("exito");
    else ui->mensaje->setText("error");
}

void Clientes::on_pushButton_3_clicked()
{
    db->open();
    bool exito;
    QSqlQuery query;
    if( ui->ingresar_id->text() == "")
       query.prepare("select id_cliente, nombre, telefono, domicilio, "
                     "adeudo from cliente");
    else{
       query.prepare("select id_cliente, nombre, telefono, domicilio, "
                     "adeudo from cliente where id_cliente = :id;");
       query.bindValue(":id", ui->ingresar_id->text());
    }
    exito = query.exec();

    if(exito){
       QString resultado;
       while (query.next()) {
          resultado += "ID:\t";
          resultado += query.value(0).toString();
          resultado += "\n";

          resultado += "Nombre:\t";
          resultado += query.value(1).toString();
          resultado += "\n";

          resultado += "telefono:\t";
          resultado += query.value(2).toString();
          resultado += "\n";

          resultado += "domicilio:\t";
          resultado += query.value(3).toString();
          resultado += "\n";

          resultado += "adeudo:\t";
          resultado += query.value(4).toString();
          resultado += "\n\n";
       }
       ui->mostrar->setText(resultado);
    }
    else{
       ui->encontrado->setText("No se encontro");
    }

}

void Clientes::on_pushButton_4_clicked()
{
   db->open();
   QString value;
   value += "delete from cliente where id_cliente = ";
   value += ui->ingresar_id->text();
   value += ";";
   bool exito;
   QSqlQuery query;
   exito = query.exec(value);
   if(exito) ui->encontrado->setText("exito");
   else ui->encontrado->setText("No encontrado");
}


void Clientes::on_lineEdit_returnPressed()
{
    on_pushButton_clicked();
}
