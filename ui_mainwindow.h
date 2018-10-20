/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *abrir_clientes;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QTextEdit *textEdit;
    QPushButton *boton_empleados;
    QTextEdit *textEdit_2;
    QPushButton *boton_;
    QTextEdit *textEdit_3;
    QPushButton *boton_tiendas;
    QTextEdit *textEdit_4;
    QPushButton *boton_clientes;
    QPushButton *disenador;
    QTextEdit *textEdit_5;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(397, 440);
        abrir_clientes = new QAction(MainWindow);
        abrir_clientes->setObjectName(QStringLiteral("abrir_clientes"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, textEdit);

        boton_empleados = new QPushButton(centralWidget);
        boton_empleados->setObjectName(QStringLiteral("boton_empleados"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(boton_empleados->sizePolicy().hasHeightForWidth());
        boton_empleados->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, boton_empleados);

        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, textEdit_2);

        boton_ = new QPushButton(centralWidget);
        boton_->setObjectName(QStringLiteral("boton_"));
        sizePolicy.setHeightForWidth(boton_->sizePolicy().hasHeightForWidth());
        boton_->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::LabelRole, boton_);

        textEdit_3 = new QTextEdit(centralWidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, textEdit_3);

        boton_tiendas = new QPushButton(centralWidget);
        boton_tiendas->setObjectName(QStringLiteral("boton_tiendas"));
        sizePolicy.setHeightForWidth(boton_tiendas->sizePolicy().hasHeightForWidth());
        boton_tiendas->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::LabelRole, boton_tiendas);

        textEdit_4 = new QTextEdit(centralWidget);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, textEdit_4);

        boton_clientes = new QPushButton(centralWidget);
        boton_clientes->setObjectName(QStringLiteral("boton_clientes"));
        sizePolicy.setHeightForWidth(boton_clientes->sizePolicy().hasHeightForWidth());
        boton_clientes->setSizePolicy(sizePolicy);
        boton_clientes->setFlat(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, boton_clientes);

        disenador = new QPushButton(centralWidget);
        disenador->setObjectName(QStringLiteral("disenador"));
        sizePolicy.setHeightForWidth(disenador->sizePolicy().hasHeightForWidth());
        disenador->setSizePolicy(sizePolicy);

        formLayout->setWidget(4, QFormLayout::LabelRole, disenador);

        textEdit_5 = new QTextEdit(centralWidget);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, textEdit_5);


        verticalLayout->addLayout(formLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 397, 21));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        menuBar->setFont(font);
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(boton_clientes, boton_empleados);
        QWidget::setTabOrder(boton_empleados, boton_);
        QWidget::setTabOrder(boton_, boton_tiendas);
        QWidget::setTabOrder(boton_tiendas, textEdit_2);
        QWidget::setTabOrder(textEdit_2, textEdit_4);
        QWidget::setTabOrder(textEdit_4, textEdit);
        QWidget::setTabOrder(textEdit, textEdit_3);

        retranslateUi(MainWindow);

        boton_clientes->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        abrir_clientes->setText(QApplication::translate("MainWindow", "clientes", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        abrir_clientes->setToolTip(QApplication::translate("MainWindow", "Abrir ventana clientes", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Men\303\272 para gestionar registros de clientes.</span></p></body></html>", Q_NULLPTR));
        boton_empleados->setText(QApplication::translate("MainWindow", "Empleados", Q_NULLPTR));
        textEdit_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Registros de empleados.</span></p></body></html>", Q_NULLPTR));
        boton_->setText(QApplication::translate("MainWindow", "Modelos", Q_NULLPTR));
        textEdit_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Modelos de ropa disponibles.</span></p></body></html>", Q_NULLPTR));
        boton_tiendas->setText(QApplication::translate("MainWindow", "Tiendas", Q_NULLPTR));
        textEdit_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Ver y editar los registros de las tiendas.</span></p></body></html>", Q_NULLPTR));
        boton_clientes->setText(QApplication::translate("MainWindow", "Clientes", Q_NULLPTR));
        disenador->setText(QApplication::translate("MainWindow", "Dise\303\261ador", Q_NULLPTR));
        textEdit_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Ver menu de dise\303\261ador.</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
