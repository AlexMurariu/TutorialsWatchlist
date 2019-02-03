#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TheDefinitionOfInsanaty.h"

class TheDefinitionOfInsanaty : public QMainWindow
{
	Q_OBJECT

public:
	TheDefinitionOfInsanaty(QWidget *parent = Q_NULLPTR);

private:
	Ui::TheDefinitionOfInsanatyClass ui;
};
