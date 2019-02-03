#include "Controller.h"

using namespace std;

void Controller::addTutorialToRepository(const std::string & title, const std::string & presenter, const int likes, int minutes, int seconds, const std::string & link, int vis)
{
	Tutorial t{ title, presenter, likes, Duration{minutes, seconds}, link, vis };
	this->validator.validate(t);
	this->undoVector.push_back(make_unique<UndoAdd>(t, this->repo, "add"));
	this->repo.addTutorial(t);
}

void Controller::removeFromRepoitory(const std::string& title, const std::string& presenter)
{
	Tutorial t = this->repo.find(title, presenter);
	this->undoVector.push_back(make_unique<UndoRemove>(t, this->repo, "remove"));
	this->repo.removeTutorial(title, presenter);
}

int Controller::addTutorialToWatchlist(const Tutorial& t)
{
	if (this->repo.findPos(t.getTitle(), t.getPresenter()) == -1)
		return 0;
	return this->watchList->add(t);
}

int Controller::removeFromWatchList(const std::string& title, const std::string& presenter)
{
	return this->watchList->removeTutorial(title, presenter);
}

void Controller::updateRepo(const Tutorial& newT, const std::string& title, const std::string& presenter)
{		
	this->validator.validate(newT);
	Tutorial t = this->repo.find(title, presenter);
	this->undoVector.push_back(make_unique<UndoUpdate>(t, this->repo, "update"));
	return this->repo.updateTutorial(newT, title, presenter);
}

void Controller::addTutorialsByPresenter(const std::string & presenter)
{
	vector<Tutorial> v = this->repo.getTutorials();

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].getPresenter() == presenter)
			this->watchList->add(v[i]);
	}
}

vector<Tutorial> Controller::filter(const int value)
{
	vector<Tutorial> v;
	for (int i = 0; i < this->getRepo().getTutorials().size(); i++)
		if (this->getRepo().getTutorials()[i] < value)
			v.push_back(this->getRepo().getTutorials()[i]);
	return v;
}

void Controller::startWatchlist()
{
	this->watchList->play();
}

void Controller::nextTutorialWatchlist()
{
	this->watchList->next();
}

void Controller::saveWatchlist()
{
	if (this->watchList == nullptr)
		return;

	this->watchList->writeToFile();
}

void Controller::openWatchlist() const
{
	if (this->watchList == nullptr)
		return;

	this->watchList->displayWatchlist();
}

void Controller::undo()
{
	if (!undoVector.empty())
	{
		Tutorial t = this->repo.find(this->undoVector.back()->getTutorial().getTitle(), this->undoVector.back()->getTutorial().getPresenter());
		if (this->undoVector.empty())
			throw exception{ "No more operations to undo!\n" };
		this->undoVector.back()->executeUndo();
		if (this->undoVector.back()->getType() == "add")
			this->redoVector.push_back(make_unique<RedoAdd>(this->undoVector.back()->getTutorial(), this->repo));
		else if (this->undoVector.back()->getType() == "remove")
			this->redoVector.push_back(make_unique<RedoRemove>(this->undoVector.back()->getTutorial(), this->repo));
		else
			this->redoVector.push_back(make_unique<RedoUpdate>(t, this->repo));
		this->undoVector.pop_back();
	}
	else
		throw exception{ "No more operations to undo!\n" };
}

void Controller::redo()
{
	if (this->redoVector.empty())
		throw exception{ "No more actions to redo!\n" };
	this->redoVector.back()->executeRedo();
	this->redoVector.pop_back();
}

void Controller::testCtrl()
{
	//DymArr<Tutorial> da;
	//this->getRepo();
	//this->addTutorialToRepository("abc", "def", 1, 1, 1, "cba", 100);
	//da = this->filter(100);
	//this->addTutorialToRepository("dsa", "def", 1, 1, 1, "cba", 101);
	//this->removeFromRepoitory("abc", "def");
	//this->addTutorialToRepository("abc", "def", 1, 1, 1, "cba", 100);
	//Tutorial t1{ "abc", "def", 1, Duration{1, 1}, "cba", 100 };
	//Tutorial t2{ "def", "abc", 1, Duration{ 1, 1 }, "cba", 101 };
	//Tutorial t3{ "sed", "sv", 1, Duration{ 1, 1 }, "cba", 102 };
	//this->addTutorialToWatchlist(t1);
	//this->removeFromWatchList("abc", "def");
	//this->addTutorialToWatchlist(t1);
	//this->startWatchlist();
	//this->nextTutorialWatchlist();
	//this->updateRepo(t2, "abc", "def");
	//this->addTutorialsByPresenter("def");
	//this->addTutorialToWatchlist(t3);
	//this->getPlaylist();
}