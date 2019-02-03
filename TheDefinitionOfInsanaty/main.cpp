#include "TheDefinitionOfInsanaty.h"
#include "GUIAdmin.h"
#include "GUIUser.h"
#include "HTMLWatchList.h"
#include "CSVWatchList.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Repo repo{ "TextFile1.txt" };
	TutorialValidator val;
	QMessageBox msg;
	msg.setWindowTitle("Message");
	msg.setText("Choose");
	QPushButton *admin = msg.addButton("Admin", QMessageBox::ActionRole);
	QPushButton *user = msg.addButton("User", QMessageBox::ActionRole);
	msg.exec();
	if (msg.clickedButton() == admin)
	{
		HTMLWatchList* hw = new HTMLWatchList{ "WatchList.html" };
		Controller ctrl{ repo, hw, val };
		GUIAdmin ga(ctrl);
		ga.setWindowTitle("Admin");
		ga.show();
		return a.exec();
	}
	else if(msg.clickedButton() == user)
	{
		QMessageBox msgStore;
		msgStore.setWindowTitle("Message");
		msgStore.setText("How do you want to store the data when in user mode?");
		QPushButton *csv = msgStore.addButton("CSV", QMessageBox::ActionRole);
		QPushButton *html = msgStore.addButton("HTML", QMessageBox::ActionRole);
		msgStore.exec();
		if(msgStore.clickedButton() == csv)
		{
			CSVWatchList* cs = new CSVWatchList{ "WatchList.csv" };
			Controller ctrl{ repo, cs, val };
			GUIUser gu(ctrl);
			gu.setWindowTitle("User");
			gu.show();
			return a.exec();
		}
		else if (msgStore.clickedButton() == html)
		{
			HTMLWatchList* hw = new HTMLWatchList{ "WatchList.html" };
			Controller ctrl{ repo, hw, val };
			GUIUser gu(ctrl);
			gu.setWindowTitle("User");
			gu.show();
			return a.exec();
		}
	}
	return a.exec();
}
