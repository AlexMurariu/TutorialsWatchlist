#include "GUIAdmin.h"

GUIAdmin::GUIAdmin(Controller& ctrl, QWidget *parent) :ctrl(ctrl), QWidget{ parent }
{
	ui.setupUi(this);
	ui.repoList;
	this->elemsRepo = this->ctrl.getRepo().getTutorials();
	this->populateRepo();
}

GUIAdmin::~GUIAdmin()
{
}

void GUIAdmin::populateRepo()
{	
	if (ui.repoList->count() > 0)
		ui.repoList->clear();

	for (auto t : this->elemsRepo)
	{
		QString itemInList = QString::fromStdString(t.getTitle() + " - " + t.getPresenter() + " - " + to_string(t.getLikes()) + " - " + to_string(t.getDuration().getMin()) + ":" + to_string(t.getDuration().getSec()) + " - " + to_string(t.getVis()) + " - " + t.getLink());
		QListWidgetItem *item3 = new QListWidgetItem(itemInList);
		ui.repoList->addItem(item3);
	}
	
	ui.titleEdit->clear();
	ui.presenterEdit->clear();
	ui.likesEdit->clear();
	ui.durationEdit->clear();
	ui.linkEdit->clear();
	ui.viewsEdit->clear();
	ui.filterByViewsEdit->clear();
	
	// set the selection on the first item in the list
	if (this->elemsRepo.size() > 0)
		ui.repoList->setCurrentRow(0);
}

void GUIAdmin::populateRepoShort()
{
	if (ui.repoList->count() > 0)
		ui.repoList->clear();

	for (auto t : this->elemsRepo)
	{
		QString itemInList = QString::fromStdString(t.getTitle() + " - " + t.getPresenter());
		QListWidgetItem *item3 = new QListWidgetItem(itemInList);
		ui.repoList->addItem(item3);
	}

	ui.titleEdit->clear();
	ui.presenterEdit->clear();
	ui.likesEdit->clear();
	ui.durationEdit->clear();
	ui.linkEdit->clear();
	ui.viewsEdit->clear();
	ui.filterByViewsEdit->clear();

	// set the selection on the first item in the list
	if (this->elemsRepo.size() > 0)
		ui.repoList->setCurrentRow(0);
}

void GUIAdmin::on_removeButton_clicked()
{
	if (ui.presenterEdit->text().toStdString() == "" || ui.titleEdit->text().toStdString() == "")
	{
		QMessageBox msg;
		msg.critical(0, "Error", "No input!");
	}
	else
	{
		string presenter = ui.presenterEdit->text().toStdString();
		string title = ui.titleEdit->text().toStdString();
		try
		{
			this->ctrl.removeFromRepoitory(title, presenter);
			// refresh the list
			this->elemsRepo = this->ctrl.getRepo().getTutorials();
			this->populateRepo();
		}
		catch (RepositoryException& e)
		{
			QMessageBox messageBox;
			messageBox.critical(0, "Error", "The tutorial does not exist!");
		}
	}
}

void GUIAdmin::on_updateButton_clicked()
{
	if (ui.presenterEdit->text().toStdString() == "" || ui.titleEdit->text().toStdString() == ""
		|| ui.likesEdit->text().toStdString() == "" || ui.durationEdit->text().toStdString() == ""
		|| ui.linkEdit->text().toStdString() == "" || ui.viewsEdit->text().toStdString() == "")
	{
		QMessageBox msg;
		msg.critical(0, "Error", "No input!");
	}
	else
	{
		string presenter = ui.presenterEdit->text().toStdString();
		string title = ui.titleEdit->text().toStdString();
		int likes = stoi(ui.likesEdit->text().toStdString());
		string duration = ui.durationEdit->text().toStdString();
		// get minutes and seconds
		vector<string> durationTokens = tokenize(duration, ':');
		if (durationTokens.size() != 2)
		{
			QMessageBox messageBox;
			messageBox.critical(0, "Error", "The duration must have minutes and seconds, separated by \":\"!");
			return;
		}
		string link = ui.linkEdit->text().toStdString();
		int views = stoi(ui.viewsEdit->text().toStdString());
		try
		{
			Tutorial newT{ title, presenter, likes, Duration{ stoi(durationTokens[0]), stoi(durationTokens[1]) }, link, views };
			this->ctrl.updateRepo(newT, title, presenter);
			this->elemsRepo = this->ctrl.getRepo().getTutorials();
			this->populateRepo();
		}
		catch (TutorialException& e)
		{
			QMessageBox messageBox;
			messageBox.critical(0, "Error", QString::fromStdString("Invalid data!"));
		}
	}
}

void GUIAdmin::on_filterButton_clicked()
{
	if (ui.filterByViewsEdit->text().toStdString() == "")
	{
		QMessageBox msg;
		msg.critical(0, "Error", "No input!");
	}
	else
	{
		int value = stoi(ui.filterByViewsEdit->text().toStdString());
		this->elemsRepo = this->ctrl.filter(value);
		this->populateRepo();
	}
}

void GUIAdmin::on_displayButton_clicked()
{
	this->elemsRepo = this->ctrl.getRepo().getTutorials();
	this->populateRepo();
}

void GUIAdmin::on_undoButton_clicked()
{
	try
	{
		this->ctrl.undo();
		this->elemsRepo = this->ctrl.getRepo().getTutorials();
		this->populateRepo();
	}
	catch(exception& e)
	{
		QMessageBox messageBox;
		messageBox.critical(0, "Error", QString::fromStdString(e.what()));
	}
}

void GUIAdmin::on_redoButton_clicked()
{
	try
	{
		this->ctrl.redo();
		this->elemsRepo = this->ctrl.getRepo().getTutorials();
		this->populateRepo();
	}
	catch (exception& e)
	{
		QMessageBox messageBox;
		messageBox.critical(0, "Error", QString::fromStdString(e.what()));
	}
}

void GUIAdmin::on_detailComboBox_currentTextChanged()
{
	if (ui.detailComboBox->currentText().toStdString() == "Detailed")
		this->populateRepo();
	else if (ui.detailComboBox->currentText().toStdString() == "Short version")
		this->populateRepoShort();

}

void GUIAdmin::on_addButton_clicked()
{
	if (ui.presenterEdit->text().toStdString() == "" || ui.titleEdit->text().toStdString() == ""
		|| ui.likesEdit->text().toStdString() == "" || ui.durationEdit->text().toStdString() == ""
        || ui.linkEdit->text().toStdString() == "" || ui.viewsEdit->text().toStdString() == "")
	{
		QMessageBox msg;
		msg.critical(0, "Error", "No input!");
	}
	else
	{
		string presenter = ui.presenterEdit->text().toStdString();
		string title = ui.titleEdit->text().toStdString();
		int likes = stoi(ui.likesEdit->text().toStdString());
		string duration = ui.durationEdit->text().toStdString();
		// get minutes and seconds
		vector<string> durationTokens = tokenize(duration, ':');
		if (durationTokens.size() != 2)
		{
			QMessageBox messageBox;
			messageBox.critical(0, "Error", "The duration must have minutes and seconds, separated by \":\"!");
			return;
		}
		string link = ui.linkEdit->text().toStdString();
		int views = stoi(ui.viewsEdit->text().toStdString());
		try
		{
			this->ctrl.addTutorialToRepository(title, presenter, likes, stoi(durationTokens[0]), stoi(durationTokens[1]), link, views);
			// refresh the list
			this->elemsRepo = this->ctrl.getRepo().getTutorials();
			this->populateRepo();
		}
		catch (TutorialException& e)
		{
			QMessageBox messageBox;
			messageBox.critical(0, "Error", QString::fromStdString("Invalid data!"));
		}
		catch (DuplicateTutorialException& e)
		{
			QMessageBox messageBox;
			messageBox.critical(0, "Error", "Duplicate elements!");
		}
	}
}
