#pragma once

#include <QWidget>
#include "ui_GUIAdmin.h"
#include "Controller.h"
#include "Tutorial.h"
#include "Exception.h"
#include <QtWidgets/qmainwindow.h>
#include <QtWidgets/qlistwidget.h>
#include <QtWidgets/qboxlayout.h>
#include <QtWidgets/qlineedit.h>
#include <QtWidgets/qformlayout.h>
#include <QtWidgets/qlabel.h>
#include <QtWidgets/qpushbutton.h>
#include <QtWidgets/qradiobutton.h>
#include <QtWidgets/qmessagebox.h>
#include <QtWidgets/qbuttongroup.h>
class GUIAdmin : public QWidget
{
	Q_OBJECT

public:
	GUIAdmin(Controller& c, QWidget* parent = 0);
	~GUIAdmin();

private:
	Ui::GUIAdmin ui;
	Controller& ctrl;
	vector<Tutorial> elemsRepo;
	void populateRepo();
	void populateRepoShort();
private slots:
	void on_addButton_clicked();
	void on_removeButton_clicked();
	void on_updateButton_clicked();
	void on_filterButton_clicked();
	void on_displayButton_clicked();
	void on_undoButton_clicked();
	void on_redoButton_clicked();
	void on_detailComboBox_currentTextChanged();
};
