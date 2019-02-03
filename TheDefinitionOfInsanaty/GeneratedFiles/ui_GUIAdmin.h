/********************************************************************************
** Form generated from reading UI file 'GUIAdmin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIADMIN_H
#define UI_GUIADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUIAdmin
{
public:
    QListWidget *repoList;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *updateButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *titleLabel;
    QLabel *presenterLabel;
    QLineEdit *presenterEdit;
    QLabel *likesLabel;
    QLineEdit *likesEdit;
    QLabel *durationLabel;
    QLineEdit *durationEdit;
    QLabel *linkLabel;
    QLineEdit *linkEdit;
    QLabel *viewsLabel;
    QLineEdit *viewsEdit;
    QLabel *filterByViewsLabel;
    QLineEdit *filterByViewsEdit;
    QLineEdit *titleEdit;
    QPushButton *filterButton;
    QPushButton *displayButton;
    QComboBox *detailComboBox;
    QPushButton *undoButton;
    QPushButton *redoButton;

    void setupUi(QWidget *GUIAdmin)
    {
        if (GUIAdmin->objectName().isEmpty())
            GUIAdmin->setObjectName(QStringLiteral("GUIAdmin"));
        GUIAdmin->resize(538, 499);
        repoList = new QListWidget(GUIAdmin);
        repoList->setObjectName(QStringLiteral("repoList"));
        repoList->setGeometry(QRect(10, 40, 521, 192));
        addButton = new QPushButton(GUIAdmin);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(450, 240, 75, 23));
        removeButton = new QPushButton(GUIAdmin);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setGeometry(QRect(450, 280, 75, 23));
        updateButton = new QPushButton(GUIAdmin);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setGeometry(QRect(450, 320, 75, 23));
        formLayoutWidget = new QWidget(GUIAdmin);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 240, 421, 197));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        titleLabel = new QLabel(formLayoutWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, titleLabel);

        presenterLabel = new QLabel(formLayoutWidget);
        presenterLabel->setObjectName(QStringLiteral("presenterLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, presenterLabel);

        presenterEdit = new QLineEdit(formLayoutWidget);
        presenterEdit->setObjectName(QStringLiteral("presenterEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, presenterEdit);

        likesLabel = new QLabel(formLayoutWidget);
        likesLabel->setObjectName(QStringLiteral("likesLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, likesLabel);

        likesEdit = new QLineEdit(formLayoutWidget);
        likesEdit->setObjectName(QStringLiteral("likesEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, likesEdit);

        durationLabel = new QLabel(formLayoutWidget);
        durationLabel->setObjectName(QStringLiteral("durationLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, durationLabel);

        durationEdit = new QLineEdit(formLayoutWidget);
        durationEdit->setObjectName(QStringLiteral("durationEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, durationEdit);

        linkLabel = new QLabel(formLayoutWidget);
        linkLabel->setObjectName(QStringLiteral("linkLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, linkLabel);

        linkEdit = new QLineEdit(formLayoutWidget);
        linkEdit->setObjectName(QStringLiteral("linkEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, linkEdit);

        viewsLabel = new QLabel(formLayoutWidget);
        viewsLabel->setObjectName(QStringLiteral("viewsLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, viewsLabel);

        viewsEdit = new QLineEdit(formLayoutWidget);
        viewsEdit->setObjectName(QStringLiteral("viewsEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, viewsEdit);

        filterByViewsLabel = new QLabel(formLayoutWidget);
        filterByViewsLabel->setObjectName(QStringLiteral("filterByViewsLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, filterByViewsLabel);

        filterByViewsEdit = new QLineEdit(formLayoutWidget);
        filterByViewsEdit->setObjectName(QStringLiteral("filterByViewsEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, filterByViewsEdit);

        titleEdit = new QLineEdit(formLayoutWidget);
        titleEdit->setObjectName(QStringLiteral("titleEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, titleEdit);

        filterButton = new QPushButton(GUIAdmin);
        filterButton->setObjectName(QStringLiteral("filterButton"));
        filterButton->setGeometry(QRect(450, 360, 75, 23));
        displayButton = new QPushButton(GUIAdmin);
        displayButton->setObjectName(QStringLiteral("displayButton"));
        displayButton->setGeometry(QRect(450, 400, 75, 23));
        detailComboBox = new QComboBox(GUIAdmin);
        detailComboBox->addItem(QString());
        detailComboBox->addItem(QString());
        detailComboBox->setObjectName(QStringLiteral("detailComboBox"));
        detailComboBox->setGeometry(QRect(10, 10, 521, 21));
        undoButton = new QPushButton(GUIAdmin);
        undoButton->setObjectName(QStringLiteral("undoButton"));
        undoButton->setGeometry(QRect(10, 440, 251, 51));
        redoButton = new QPushButton(GUIAdmin);
        redoButton->setObjectName(QStringLiteral("redoButton"));
        redoButton->setGeometry(QRect(290, 440, 241, 51));

        retranslateUi(GUIAdmin);

        QMetaObject::connectSlotsByName(GUIAdmin);
    } // setupUi

    void retranslateUi(QWidget *GUIAdmin)
    {
        GUIAdmin->setWindowTitle(QApplication::translate("GUIAdmin", "GUIAdmin", nullptr));
        addButton->setText(QApplication::translate("GUIAdmin", "Add", nullptr));
        removeButton->setText(QApplication::translate("GUIAdmin", "Remove", nullptr));
        updateButton->setText(QApplication::translate("GUIAdmin", "Update", nullptr));
        titleLabel->setText(QApplication::translate("GUIAdmin", "Title", nullptr));
        presenterLabel->setText(QApplication::translate("GUIAdmin", "Presenter", nullptr));
        likesLabel->setText(QApplication::translate("GUIAdmin", "Likes", nullptr));
        durationLabel->setText(QApplication::translate("GUIAdmin", "Duration", nullptr));
        linkLabel->setText(QApplication::translate("GUIAdmin", "Link", nullptr));
        viewsLabel->setText(QApplication::translate("GUIAdmin", "Views", nullptr));
        filterByViewsLabel->setText(QApplication::translate("GUIAdmin", "Filter by views", nullptr));
        filterButton->setText(QApplication::translate("GUIAdmin", "Filter", nullptr));
        displayButton->setText(QApplication::translate("GUIAdmin", "Display", nullptr));
        detailComboBox->setItemText(0, QApplication::translate("GUIAdmin", "Detailed", nullptr));
        detailComboBox->setItemText(1, QApplication::translate("GUIAdmin", "Short version", nullptr));

        undoButton->setText(QApplication::translate("GUIAdmin", "Undo", nullptr));
        redoButton->setText(QApplication::translate("GUIAdmin", "Redo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GUIAdmin: public Ui_GUIAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIADMIN_H
