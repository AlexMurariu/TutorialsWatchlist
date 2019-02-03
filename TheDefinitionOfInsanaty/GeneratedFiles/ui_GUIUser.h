/********************************************************************************
** Form generated from reading UI file 'GUIUser.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIUSER_H
#define UI_GUIUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUIUser
{
public:
    QListWidget *watchList;
    QPushButton *addWButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *presenterLabel;
    QLineEdit *presenterEdit;
    QLabel *fileNameLabel;
    QLineEdit *fileNameEdit;
    QPushButton *saveButton;
    QPushButton *displayButton;
    QPushButton *watchButton;
    QPushButton *tableButton;

    void setupUi(QWidget *GUIUser)
    {
        if (GUIUser->objectName().isEmpty())
            GUIUser->setObjectName(QStringLiteral("GUIUser"));
        GUIUser->resize(542, 357);
        watchList = new QListWidget(GUIUser);
        watchList->setObjectName(QStringLiteral("watchList"));
        watchList->setGeometry(QRect(10, 10, 521, 192));
        addWButton = new QPushButton(GUIUser);
        addWButton->setObjectName(QStringLiteral("addWButton"));
        addWButton->setGeometry(QRect(10, 270, 75, 23));
        formLayoutWidget = new QWidget(GUIUser);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 210, 521, 51));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        presenterLabel = new QLabel(formLayoutWidget);
        presenterLabel->setObjectName(QStringLiteral("presenterLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, presenterLabel);

        presenterEdit = new QLineEdit(formLayoutWidget);
        presenterEdit->setObjectName(QStringLiteral("presenterEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, presenterEdit);

        fileNameLabel = new QLabel(formLayoutWidget);
        fileNameLabel->setObjectName(QStringLiteral("fileNameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, fileNameLabel);

        fileNameEdit = new QLineEdit(formLayoutWidget);
        fileNameEdit->setObjectName(QStringLiteral("fileNameEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, fileNameEdit);

        saveButton = new QPushButton(GUIUser);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(230, 270, 75, 23));
        displayButton = new QPushButton(GUIUser);
        displayButton->setObjectName(QStringLiteral("displayButton"));
        displayButton->setGeometry(QRect(340, 270, 75, 23));
        watchButton = new QPushButton(GUIUser);
        watchButton->setObjectName(QStringLiteral("watchButton"));
        watchButton->setGeometry(QRect(120, 270, 75, 23));
        tableButton = new QPushButton(GUIUser);
        tableButton->setObjectName(QStringLiteral("tableButton"));
        tableButton->setGeometry(QRect(440, 270, 75, 23));

        retranslateUi(GUIUser);

        QMetaObject::connectSlotsByName(GUIUser);
    } // setupUi

    void retranslateUi(QWidget *GUIUser)
    {
        GUIUser->setWindowTitle(QApplication::translate("GUIUser", "GUIUser", nullptr));
        addWButton->setText(QApplication::translate("GUIUser", "Add", nullptr));
        presenterLabel->setText(QApplication::translate("GUIUser", "Presenter", nullptr));
        fileNameLabel->setText(QApplication::translate("GUIUser", "File name", nullptr));
        saveButton->setText(QApplication::translate("GUIUser", "Save", nullptr));
        displayButton->setText(QApplication::translate("GUIUser", "Display", nullptr));
        watchButton->setText(QApplication::translate("GUIUser", "Watch", nullptr));
        tableButton->setText(QApplication::translate("GUIUser", "Tabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GUIUser: public Ui_GUIUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIUSER_H
