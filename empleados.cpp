#include "empleados.h"
#include "ui_empleados.h"

Empleados::Empleados(QWidget *parent) :
   QDialog(parent),
   ui(new Ui::Empleados)
{
   ui->setupUi(this);

   db = new QSqlDatabase(QSqlDatabase::addDatabase("QPSQL"));
   db->setHostName("localhost");
   db->setDatabaseName("ropa_estefania");
   db->setUserName("postgres");
   db->setPassword("postgres");
}

Empleados::~Empleados()
{
   delete ui;
   delete db;
}

void Empleados::on_buscar_2_clicked()
{
    QString resultado;
    db->open();

    QSqlQuery *query = new QSqlQuery;
    query->prepare("SELECT id_empleado, nombre, telefono, domicilio, puesto, "
                    "salario, id_tienda FROM empleado where :val1 = :val2;");
    switch(ui->comboBoxEmp->currentIndex()){
    case 0:
        query->bindValue(":val1", "id_empleado");
        query->bindValue(":val2", ui->lineEdit2->text());
        break;
    case 1:
        query->bindValue(":val1", "nombre");
        query->bindValue(":val2", ui->lineEdit2->text());
        break;
    }

    bool exito = query->exec();
    if(exito){
        while (query->next()) {
            resultado += "ID:\t";
            resultado += query->value(0).toString();
            resultado += "\n";

            resultado += "Nombre:\t";
            resultado += query->value(1).toString();
            resultado += "\n";

            resultado += "telefono:\t";
            resultado += query->value(2).toString();
            resultado += "\n";

            resultado += "puesto:\t";
            resultado += query->value(3).toString();
            resultado += "\n";

            resultado += "salario:\t";
            resultado += query->value(4).toString();
            resultado += "\n";

            resultado += "id_tienda:\t";
            resultado += query->value(5).toString();
            resultado += "\n\n";
        }
    }
    else{
        resultado += "Error";
    }
    ui->textBrowser->setText(query->executedQuery());
    delete query;
}
