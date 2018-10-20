#include "consulta.h"

class QSqlDatabase;

Consulta::Consulta()
{
   QSqlDatabase *db = new QSqlDatabase;
   db->addDatabase("QPSQL");
   db->setHostName("localhost");
   db->setDatabaseName("ropa_estefania");
   db->setUserName("postgres");
   db->setPassword("postgres");
}

bool Consulta::isOk()
{
   return db->open();
}

QSqlQuery *Consulta::select(const QString& table)
{
   query = new QSqlQuery;
   query->exec(table);
   return query;
}
