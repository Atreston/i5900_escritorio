#ifndef DISENADOR_H
#define DISENADOR_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class Disenador;
}

class Disenador : public QDialog
{
    Q_OBJECT

public:
    explicit Disenador(QWidget *parent = 0);
    ~Disenador();

private slots:
    void on_pushButtonDis_clicked();

private:
    Ui::Disenador *ui;
    QSqlDatabase *db;
};

#endif // DISENADOR_H
