/********************************************************************************
** Form generated from reading UI file 'clientes.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTES_H
#define UI_CLIENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
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

class Ui_Clientes
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *Buscar;
    QWidget *buscar;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_6;
    QTextBrowser *textBrowser;
    QWidget *agregar;
    QLineEdit *query;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *add_id;
    QLabel *label_3;
    QLineEdit *add_nombre;
    QLabel *label_4;
    QLineEdit *add_telefono;
    QLabel *label_5;
    QLineEdit *add_dom;
    QLabel *label_6;
    QLineEdit *add_adeudo;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QTextBrowser *mensaje;
    QWidget *eliminar;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *ingresar_id;
    QPushButton *pushButton_3;
    QTextBrowser *mostrar;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *encontrado;
    QPushButton *pushButton_4;
    QWidget *editar;

    void setupUi(QDialog *Clientes)
    {
        if (Clientes->objectName().isEmpty())
            Clientes->setObjectName(QStringLiteral("Clientes"));
        Clientes->resize(482, 371);
        verticalLayout = new QVBoxLayout(Clientes);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Buscar = new QTabWidget(Clientes);
        Buscar->setObjectName(QStringLiteral("Buscar"));
        buscar = new QWidget();
        buscar->setObjectName(QStringLiteral("buscar"));
        verticalLayout_2 = new QVBoxLayout(buscar);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(buscar);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(buscar);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setInsertPolicy(QComboBox::InsertAtBottom);

        horizontalLayout->addWidget(comboBox);

        lineEdit = new QLineEdit(buscar);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(buscar);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        textBrowser = new QTextBrowser(buscar);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        horizontalLayout_6->addWidget(textBrowser);


        verticalLayout_2->addLayout(horizontalLayout_6);

        Buscar->addTab(buscar, QString());
        agregar = new QWidget();
        agregar->setObjectName(QStringLiteral("agregar"));
        query = new QLineEdit(agregar);
        query->setObjectName(QStringLiteral("query"));
        query->setGeometry(QRect(40, 200, 281, 22));
        layoutWidget = new QWidget(agregar);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 411, 142));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        add_id = new QLineEdit(layoutWidget);
        add_id->setObjectName(QStringLiteral("add_id"));

        formLayout->setWidget(0, QFormLayout::FieldRole, add_id);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        add_nombre = new QLineEdit(layoutWidget);
        add_nombre->setObjectName(QStringLiteral("add_nombre"));

        formLayout->setWidget(1, QFormLayout::FieldRole, add_nombre);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        add_telefono = new QLineEdit(layoutWidget);
        add_telefono->setObjectName(QStringLiteral("add_telefono"));

        formLayout->setWidget(2, QFormLayout::FieldRole, add_telefono);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        add_dom = new QLineEdit(layoutWidget);
        add_dom->setObjectName(QStringLiteral("add_dom"));

        formLayout->setWidget(3, QFormLayout::FieldRole, add_dom);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        add_adeudo = new QLineEdit(layoutWidget);
        add_adeudo->setObjectName(QStringLiteral("add_adeudo"));

        formLayout->setWidget(4, QFormLayout::FieldRole, add_adeudo);


        horizontalLayout_3->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        layoutWidget1 = new QWidget(agregar);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 250, 189, 89));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        mensaje = new QTextBrowser(layoutWidget1);
        mensaje->setObjectName(QStringLiteral("mensaje"));

        horizontalLayout_2->addWidget(mensaje);

        Buscar->addTab(agregar, QString());
        layoutWidget->raise();
        layoutWidget->raise();
        query->raise();
        eliminar = new QWidget();
        eliminar->setObjectName(QStringLiteral("eliminar"));
        verticalLayout_3 = new QVBoxLayout(eliminar);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(eliminar);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        ingresar_id = new QLineEdit(eliminar);
        ingresar_id->setObjectName(QStringLiteral("ingresar_id"));

        horizontalLayout_4->addWidget(ingresar_id);

        pushButton_3 = new QPushButton(eliminar);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        mostrar = new QTextBrowser(eliminar);
        mostrar->setObjectName(QStringLiteral("mostrar"));

        verticalLayout_3->addWidget(mostrar);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        encontrado = new QLineEdit(eliminar);
        encontrado->setObjectName(QStringLiteral("encontrado"));

        horizontalLayout_5->addWidget(encontrado);

        pushButton_4 = new QPushButton(eliminar);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_5->addWidget(pushButton_4);


        verticalLayout_3->addLayout(horizontalLayout_5);

        Buscar->addTab(eliminar, QString());
        editar = new QWidget();
        editar->setObjectName(QStringLiteral("editar"));
        Buscar->addTab(editar, QString());

        verticalLayout->addWidget(Buscar);


        retranslateUi(Clientes);

        Buscar->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Clientes);
    } // setupUi

    void retranslateUi(QDialog *Clientes)
    {
        Clientes->setWindowTitle(QApplication::translate("Clientes", "Dialog", 0));
        label->setText(QApplication::translate("Clientes", "Buscar por:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Clientes", "id_cliente", 0)
         << QApplication::translate("Clientes", "nombre", 0)
         << QApplication::translate("Clientes", "telefono", 0)
         << QApplication::translate("Clientes", "domicilio", 0)
        );
        pushButton->setText(QApplication::translate("Clientes", "Buscar", 0));
        Buscar->setTabText(Buscar->indexOf(buscar), QApplication::translate("Clientes", "Buscar", 0));
        label_2->setText(QApplication::translate("Clientes", "id:", 0));
        label_3->setText(QApplication::translate("Clientes", "nombre:", 0));
        label_4->setText(QApplication::translate("Clientes", "telefono:", 0));
        label_5->setText(QApplication::translate("Clientes", "domicilio:", 0));
        label_6->setText(QApplication::translate("Clientes", "adeudo:", 0));
        pushButton_2->setText(QApplication::translate("Clientes", "Agregar", 0));
        Buscar->setTabText(Buscar->indexOf(agregar), QApplication::translate("Clientes", "Agregar", 0));
        label_7->setText(QApplication::translate("Clientes", "Ingresar id: ", 0));
        pushButton_3->setText(QApplication::translate("Clientes", "Buscar", 0));
        pushButton_4->setText(QApplication::translate("Clientes", "Eliminar", 0));
        Buscar->setTabText(Buscar->indexOf(eliminar), QApplication::translate("Clientes", "Eliminar", 0));
        Buscar->setTabText(Buscar->indexOf(editar), QApplication::translate("Clientes", "Editar", 0));
    } // retranslateUi

};

namespace Ui {
    class Clientes: public Ui_Clientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTES_H
