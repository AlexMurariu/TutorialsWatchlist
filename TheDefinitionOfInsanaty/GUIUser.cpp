#include "GUIUser.h"

GUIUser::GUIUser(Controller& ctrl, QWidget *parent) : ctrl(ctrl), QWidget{ parent }
{
	ui.setupUi(this);
	ui.watchList;
	this->elemsWatch = this->ctrl.getPlaylist()->getWatchList();
	this->populateWatch();
}

GUIUser::~GUIUser()
{
}

void GUIUser::populateWatch()
{
	if (ui.watchList->count() > 0)
		ui.watchList->clear();

	ui.presenterEdit->clear();
	ui.fileNameEdit->clear();

	for (auto t : this->ctrl.getPlaylist()->getWatchList())
	{
		QString itemInList = QString::fromStdString(t.getTitle() + " - " + t.getPresenter() + " - " + to_string(t.getLikes()) + " - " + to_string(t.getDuration().getMin()) + ":" + to_string(t.getDuration().getSec()) + " - " + to_string(t.getVis()) + " - " + t.getLink());
		ui.watchList->addItem(itemInList);
	}
}

void GUIUser::on_watchButton_clicked()
{
	this->ctrl.nextTutorialWatchlist();
}

void GUIUser::on_saveButton_clicked()
{
	if (ui.fileNameEdit->text().toStdString() == "")
	{
		QMessageBox msg;
		msg.critical(0, "Error", "No input!");
	}
	else
		this->ctrl.saveWatchlist();
}

void GUIUser::on_displayButton_clicked()
{
	this->ctrl.openWatchlist();
}

void GUIUser::on_tableButton_clicked()
{
	ThisIsTheFifthTimeImDoingThis* tv = new ThisIsTheFifthTimeImDoingThis(this->ctrl.getPlaylist()->getWL());
	tv->show();
}

void GUIUser::on_addWButton_clicked()
{
	if (ui.presenterEdit->text().toStdString() == "")
	{
		QMessageBox msg;
		msg.critical(0, "Error", "No input!");
	}
	else
	{
		string presenter = ui.presenterEdit->text().toStdString();

		if (ui.watchList->count() > 0)
			ui.watchList->clear();

		for (auto t : this->ctrl.getRepo().getTutorials())
			if (t.getPresenter() == presenter)
			{
				t.play();
				QMessageBox start;
				start.setWindowTitle("Message");
				start.setText("Did you like it?");
				QPushButton *yes = start.addButton("Yes", QMessageBox::ActionRole);
				QPushButton *no = start.addButton("No", QMessageBox::AcceptRole);
				start.exec();
				if (start.clickedButton() == yes)
				{
					t.increaseLikes();
					this->ctrl.addTutorialToWatchlist(t);
				}
			}
		this->elemsWatch = this->ctrl.getPlaylist()->getWatchList();
		this->populateWatch();
	}
}

