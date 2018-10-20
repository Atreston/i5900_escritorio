#ifndef CONSULTA_H
#define CONSULTA_H

#include <QSqlDatabase>
#include <QSqlQuery>

class QString;

class Consulta
{
   private:
      QSqlDatabase *db;
      QSqlQuery *query;
   public:
      Consulta();
      bool isOk();
      QSqlQuery *select(const QString &table);
};



#endif // CONSULTA_H
