/********************************************************************************
** Form generated from reading UI file 'TheDefinitionOfInsanaty.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEDEFINITIONOFINSANATY_H
#define UI_THEDEFINITIONOFINSANATY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheDefinitionOfInsanatyClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TheDefinitionOfInsanatyClass)
    {
        if (TheDefinitionOfInsanatyClass->objectName().isEmpty())
            TheDefinitionOfInsanatyClass->setObjectName(QStringLiteral("TheDefinitionOfInsanatyClass"));
        TheDefinitionOfInsanatyClass->resize(600, 400);
        menuBar = new QMenuBar(TheDefinitionOfInsanatyClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        TheDefinitionOfInsanatyClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TheDefinitionOfInsanatyClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TheDefinitionOfInsanatyClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TheDefinitionOfInsanatyClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TheDefinitionOfInsanatyClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TheDefinitionOfInsanatyClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TheDefinitionOfInsanatyClass->setStatusBar(statusBar);

        retranslateUi(TheDefinitionOfInsanatyClass);

        QMetaObject::connectSlotsByName(TheDefinitionOfInsanatyClass);
    } // setupUi

    void retranslateUi(QMainWindow *TheDefinitionOfInsanatyClass)
    {
        TheDefinitionOfInsanatyClass->setWindowTitle(QApplication::translate("TheDefinitionOfInsanatyClass", "TheDefinitionOfInsanaty", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheDefinitionOfInsanatyClass: public Ui_TheDefinitionOfInsanatyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEDEFINITIONOFINSANATY_H
