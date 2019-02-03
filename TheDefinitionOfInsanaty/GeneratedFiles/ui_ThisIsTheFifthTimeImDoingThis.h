/********************************************************************************
** Form generated from reading UI file 'ThisIsTheFifthTimeImDoingThis.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THISISTHEFIFTHTIMEIMDOINGTHIS_H
#define UI_THISISTHEFIFTHTIMEIMDOINGTHIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThisIsTheFifthTimeImDoingThis
{
public:
    QTableView *tableView;

    void setupUi(QWidget *ThisIsTheFifthTimeImDoingThis)
    {
        if (ThisIsTheFifthTimeImDoingThis->objectName().isEmpty())
            ThisIsTheFifthTimeImDoingThis->setObjectName(QStringLiteral("ThisIsTheFifthTimeImDoingThis"));
        ThisIsTheFifthTimeImDoingThis->resize(521, 245);
        tableView = new QTableView(ThisIsTheFifthTimeImDoingThis);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 501, 192));

        retranslateUi(ThisIsTheFifthTimeImDoingThis);

        QMetaObject::connectSlotsByName(ThisIsTheFifthTimeImDoingThis);
    } // setupUi

    void retranslateUi(QWidget *ThisIsTheFifthTimeImDoingThis)
    {
        ThisIsTheFifthTimeImDoingThis->setWindowTitle(QApplication::translate("ThisIsTheFifthTimeImDoingThis", "ThisIsTheFifthTimeImDoingThis", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThisIsTheFifthTimeImDoingThis: public Ui_ThisIsTheFifthTimeImDoingThis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THISISTHEFIFTHTIMEIMDOINGTHIS_H
