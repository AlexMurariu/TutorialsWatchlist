#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ThisIsTheFifthTimeImDoingThis.h"
#include "TableView.h"

class ThisIsTheFifthTimeImDoingThis : public QMainWindow
{
	Q_OBJECT

public:
	ThisIsTheFifthTimeImDoingThis(WatchList& wl, QWidget *parent = 0);
	~ThisIsTheFifthTimeImDoingThis();

private:
	Ui::ThisIsTheFifthTimeImDoingThis ui;
	WatchList& wl;
	TableView* tableModel;
	
	void setUpTableView();
};
