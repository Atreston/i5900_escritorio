/********************************************************************************
** Form generated from reading UI file 'disenador.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISENADOR_H
#define UI_DISENADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Disenador
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *eliminar;
    QWidget *buscar;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxDis;
    QLineEdit *lineEditDis;
    QPushButton *pushButtonDis;
    QTextBrowser *textBrowserDis;
    QWidget *eliminar1;
    QWidget *disenos;

    void setupUi(QDialog *Disenador)
    {
        if (Disenador->objectName().isEmpty())
            Disenador->setObjectName(QStringLiteral("Disenador"));
        Disenador->resize(457, 300);
        verticalLayout = new QVBoxLayout(Disenador);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        eliminar = new QTabWidget(Disenador);
        eliminar->setObjectName(QStringLiteral("eliminar"));
        buscar = new QWidget();
        buscar->setObjectName(QStringLiteral("buscar"));
        verticalLayout_2 = new QVBoxLayout(buscar);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(buscar);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBoxDis = new QComboBox(buscar);
        comboBoxDis->setObjectName(QStringLiteral("comboBoxDis"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxDis->sizePolicy().hasHeightForWidth());
        comboBoxDis->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboBoxDis);

        lineEditDis = new QLineEdit(buscar);
        lineEditDis->setObjectName(QStringLiteral("lineEditDis"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditDis->sizePolicy().hasHeightForWidth());
        lineEditDis->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(lineEditDis);

        pushButtonDis = new QPushButton(buscar);
        pushButtonDis->setObjectName(QStringLiteral("pushButtonDis"));

        horizontalLayout->addWidget(pushButtonDis);


        verticalLayout_2->addLayout(horizontalLayout);

        textBrowserDis = new QTextBrowser(buscar);
        textBrowserDis->setObjectName(QStringLiteral("textBrowserDis"));

        verticalLayout_2->addWidget(textBrowserDis);

        eliminar->addTab(buscar, QString());
        eliminar1 = new QWidget();
        eliminar1->setObjectName(QStringLiteral("eliminar1"));
        eliminar->addTab(eliminar1, QString());
        disenos = new QWidget();
        disenos->setObjectName(QStringLiteral("disenos"));
        eliminar->addTab(disenos, QString());

        verticalLayout->addWidget(eliminar);


        retranslateUi(Disenador);

        eliminar->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Disenador);
    } // setupUi

    void retranslateUi(QDialog *Disenador)
    {
        Disenador->setWindowTitle(QApplication::translate("Disenador", "Dialog", 0));
        label->setText(QApplication::translate("Disenador", "Buscar:", 0));
        comboBoxDis->clear();
        comboBoxDis->insertItems(0, QStringList()
         << QApplication::translate("Disenador", "id_dise\303\261ador", 0)
         << QApplication::translate("Disenador", "nombre", 0)
        );
        pushButtonDis->setText(QApplication::translate("Disenador", "Buscar", 0));
        eliminar->setTabText(eliminar->indexOf(buscar), QApplication::translate("Disenador", "Buscar", 0));
        eliminar->setTabText(eliminar->indexOf(eliminar1), QApplication::translate("Disenador", "Eliminar", 0));
        eliminar->setTabText(eliminar->indexOf(disenos), QApplication::translate("Disenador", "Dise\303\261os", 0));
    } // retranslateUi

};

namespace Ui {
    class Disenador: public Ui_Disenador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISENADOR_H
