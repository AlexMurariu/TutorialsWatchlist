/********************************************************************************
** Form generated from reading UI file 'Tabel.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABEL_H
#define UI_TABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tabel
{
public:
    QTableView *tableView;

    void setupUi(QWidget *Tabel)
    {
        if (Tabel->objectName().isEmpty())
            Tabel->setObjectName(QStringLiteral("Tabel"));
        Tabel->resize(516, 410);
        tableView = new QTableView(Tabel);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 491, 192));

        retranslateUi(Tabel);

        QMetaObject::connectSlotsByName(Tabel);
    } // setupUi

    void retranslateUi(QWidget *Tabel)
    {
        Tabel->setWindowTitle(QApplication::translate("Tabel", "Tabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tabel: public Ui_Tabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABEL_H
