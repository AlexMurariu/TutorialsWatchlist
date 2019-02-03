#pragma once

#include <QWidget>
#include "ui_GUIUser.h"
#include "ThisIsTheFifthTimeImDoingThis.h"
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

class GUIUser : public QWidget
{
	Q_OBJECT

public:
	GUIUser(Controller& c, QWidget *parent = 0);
	~GUIUser();

private:
	Ui::GUIUser ui;
	Controller& ctrl;
	std::vector<Tutorial> elemsWatch;
	void populateWatch();
private slots:
	void on_addWButton_clicked();
	void on_watchButton_clicked();
	void on_saveButton_clicked();
	void on_displayButton_clicked();
	void on_tableButton_clicked();
};

