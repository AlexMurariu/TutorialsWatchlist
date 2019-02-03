#include "WatchList.h"
#include <assert.h>

WatchList::WatchList()
{
	this->current = 0;
}

int WatchList::findPosWatchList(const std::string& title, const std::string& presenter)
{
	int pos = -1;
	for (auto t : this->tutorials)
	{
		pos++;
		std::string ok1 = t.getTitle();
		std::string ok2 = t.getPresenter();
		if (title == ok1 && presenter == ok2)
			return pos;
	}
	return -1;
}

int WatchList::add(const Tutorial& t)
{
	if (this->findPosWatchList(t.getTitle(), t.getPresenter()) != -1)
		return 0;
	this->tutorials.push_back(t);
	return 1;
}

int WatchList::removeTutorial(const std::string& title, const std::string& presenter)
{
	int pos = this->findPosWatchList(title, presenter);
	if (pos == -1)
		return 0;
	this->tutorials.erase(this->tutorials.begin() + pos);
	this->setCurrent(pos);
	return 1;
}

Tutorial WatchList::getCurrentTutorial()
{
	if (this->current == this->tutorials.size())
		this->current = 0;
	
	vector<Tutorial>* elems = &this->tutorials;
	if (elems != NULL)
		return this->tutorials[this->current];
	
	return Tutorial{};
}

void WatchList::play()
{
	if (this->tutorials.size() == 0)
		return;
	this->current = 0;
	Tutorial currentTutorial = this->getCurrentTutorial();
	currentTutorial.play();
}

void WatchList::next()
{
	if (this->tutorials.size() == 0)
		return;
	Tutorial currentTutorial = this->getCurrentTutorial();
	currentTutorial.play();
	this->current++;
}

bool WatchList::isEmpty()
{
	return this->tutorials.size() == 0;
}

void WatchList::testWatchList()
{
	//this->next();
	//this->play();
	//this->getCurrentTutorial();
	//Tutorial t1{ "abc", "def", 1, Duration{ 1, 1 } , "cba", 100 };
	//Tutorial t2{ "ghi", "jkl", 1, Duration{ 1, 1 } , "cba", 100 };
	//this->isEmpty();
	//this->add(t1);
	//this->play();
	//assert(this->add(t1) == 0);
	//int l = this->tutorials.getSize();
	//assert(l == 1);
	//this->add(t2);
	//this->next();
	//this->getCurrentTutorial();
	//this->removeTutorial("def", "abc");
	//this->removeTutorial("abc", "def");
	//this->getWatchList();
	//this->findPosWatchList("abc", "def");
	//this->setCurrent(1);
}
