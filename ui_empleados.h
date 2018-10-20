/********************************************************************************
** Form generated from reading UI file 'empleados.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLEADOS_H
#define UI_EMPLEADOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Empleados
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *empleado;
    QWidget *buscar;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxEmp;
    QLineEdit *lineEdit2;
    QPushButton *buscar_2;
    QTextBrowser *textBrowser;
    QWidget *agregar;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *id_empleado;
    QLineEdit *edit_id;
    QLabel *nombre;
    QLineEdit *edit_nombre;
    QLabel *domicilio;
    QLineEdit *edit_domicilio;
    QLabel *telefono;
    QLineEdit *edit_telefono;
    QLabel *puesto;
    QLineEdit *edit_puesto;
    QLabel *salario;
    QLineEdit *edit_salario;
    QLabel *id_tienda;
    QLineEdit *edit_tienda;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *agregar_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *Empleados)
    {
        if (Empleados->objectName().isEmpty())
            Empleados->setObjectName(QStringLiteral("Empleados"));
        Empleados->resize(457, 373);
        verticalLayout = new QVBoxLayout(Empleados);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        empleado = new QTabWidget(Empleados);
        empleado->setObjectName(QStringLiteral("empleado"));
        buscar = new QWidget();
        buscar->setObjectName(QStringLiteral("buscar"));
        verticalLayout_2 = new QVBoxLayout(buscar);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(buscar);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBoxEmp = new QComboBox(buscar);
        comboBoxEmp->setObjectName(QStringLiteral("comboBoxEmp"));

        horizontalLayout->addWidget(comboBoxEmp);

        lineEdit2 = new QLineEdit(buscar);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));

        horizontalLayout->addWidget(lineEdit2);

        buscar_2 = new QPushButton(buscar);
        buscar_2->setObjectName(QStringLiteral("buscar_2"));

        horizontalLayout->addWidget(buscar_2);


        verticalLayout_2->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(buscar);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);

        empleado->addTab(buscar, QString());
        agregar = new QWidget();
        agregar->setObjectName(QStringLiteral("agregar"));
        verticalLayout_3 = new QVBoxLayout(agregar);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        id_empleado = new QLabel(agregar);
        id_empleado->setObjectName(QStringLiteral("id_empleado"));

        gridLayout->addWidget(id_empleado, 0, 0, 1, 1);

        edit_id = new QLineEdit(agregar);
        edit_id->setObjectName(QStringLiteral("edit_id"));

        gridLayout->addWidget(edit_id, 0, 1, 1, 3);

        nombre = new QLabel(agregar);
        nombre->setObjectName(QStringLiteral("nombre"));

        gridLayout->addWidget(nombre, 1, 0, 1, 1);

        edit_nombre = new QLineEdit(agregar);
        edit_nombre->setObjectName(QStringLiteral("edit_nombre"));

        gridLayout->addWidget(edit_nombre, 1, 2, 1, 2);

        domicilio = new QLabel(agregar);
        domicilio->setObjectName(QStringLiteral("domicilio"));

        gridLayout->addWidget(domicilio, 2, 0, 1, 2);

        edit_domicilio = new QLineEdit(agregar);
        edit_domicilio->setObjectName(QStringLiteral("edit_domicilio"));

        gridLayout->addWidget(edit_domicilio, 2, 2, 1, 2);

        telefono = new QLabel(agregar);
        telefono->setObjectName(QStringLiteral("telefono"));

        gridLayout->addWidget(telefono, 3, 0, 1, 3);

        edit_telefono = new QLineEdit(agregar);
        edit_telefono->setObjectName(QStringLiteral("edit_telefono"));

        gridLayout->addWidget(edit_telefono, 3, 3, 1, 1);

        puesto = new QLabel(agregar);
        puesto->setObjectName(QStringLiteral("puesto"));

        gridLayout->addWidget(puesto, 4, 0, 1, 3);

        edit_puesto = new QLineEdit(agregar);
        edit_puesto->setObjectName(QStringLiteral("edit_puesto"));

        gridLayout->addWidget(edit_puesto, 4, 3, 1, 1);

        salario = new QLabel(agregar);
        salario->setObjectName(QStringLiteral("salario"));

        gridLayout->addWidget(salario, 5, 0, 1, 3);

        edit_salario = new QLineEdit(agregar);
        edit_salario->setObjectName(QStringLiteral("edit_salario"));

        gridLayout->addWidget(edit_salario, 5, 3, 1, 1);

        id_tienda = new QLabel(agregar);
        id_tienda->setObjectName(QStringLiteral("id_tienda"));

        gridLayout->addWidget(id_tienda, 6, 0, 1, 3);

        edit_tienda = new QLineEdit(agregar);
        edit_tienda->setObjectName(QStringLiteral("edit_tienda"));

        gridLayout->addWidget(edit_tienda, 6, 3, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        agregar_2 = new QPushButton(agregar);
        agregar_2->setObjectName(QStringLiteral("agregar_2"));

        horizontalLayout_3->addWidget(agregar_2);

        lineEdit_2 = new QLineEdit(agregar);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);

        empleado->addTab(agregar, QString());

        verticalLayout->addWidget(empleado);


        retranslateUi(Empleados);

        empleado->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Empleados);
    } // setupUi

    void retranslateUi(QDialog *Empleados)
    {
        Empleados->setWindowTitle(QApplication::translate("Empleados", "Dialog", 0));
        label->setText(QApplication::translate("Empleados", "Buscar por:", 0));
        comboBoxEmp->clear();
        comboBoxEmp->insertItems(0, QStringList()
         << QApplication::translate("Empleados", "id_empleado", 0)
         << QApplication::translate("Empleados", "nombre", 0)
         << QApplication::translate("Empleados", "telefono", 0)
         << QApplication::translate("Empleados", "tienda", 0)
        );
        buscar_2->setText(QApplication::translate("Empleados", "Buscar", 0));
        empleado->setTabText(empleado->indexOf(buscar), QApplication::translate("Empleados", "Buscar", 0));
        id_empleado->setText(QApplication::translate("Empleados", "ID:", 0));
        nombre->setText(QApplication::translate("Empleados", "Nombre:", 0));
        domicilio->setText(QApplication::translate("Empleados", "Domicilio:  ", 0));
        telefono->setText(QApplication::translate("Empleados", "Telefono: ", 0));
        puesto->setText(QApplication::translate("Empleados", "Puesto:", 0));
        salario->setText(QApplication::translate("Empleados", "Salario:", 0));
        id_tienda->setText(QApplication::translate("Empleados", "Tienda:", 0));
        agregar_2->setText(QApplication::translate("Empleados", "Agregar", 0));
        empleado->setTabText(empleado->indexOf(agregar), QApplication::translate("Empleados", "Agregar", 0));
    } // retranslateUi

};

namespace Ui {
    class Empleados: public Ui_Empleados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLEADOS_H
