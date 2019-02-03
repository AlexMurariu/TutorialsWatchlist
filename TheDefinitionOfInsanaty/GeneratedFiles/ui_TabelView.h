/********************************************************************************
** Form generated from reading UI file 'TabelView.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABELVIEW_H
#define UI_TABELVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabelView
{
public:
    QTableView *tableView;

    void setupUi(QWidget *TabelView)
    {
        if (TabelView->objectName().isEmpty())
            TabelView->setObjectName(QStringLiteral("TabelView"));
        TabelView->resize(400, 300);
        tableView = new QTableView(TabelView);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 381, 192));

        retranslateUi(TabelView);

        QMetaObject::connectSlotsByName(TabelView);
    } // setupUi

    void retranslateUi(QWidget *TabelView)
    {
        TabelView->setWindowTitle(QApplication::translate("TabelView", "TabelView", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TabelView: public Ui_TabelView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABELVIEW_H
