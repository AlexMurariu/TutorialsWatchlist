#include "Repo.h"
#include <string>
#include <assert.h>
#include <algorithm>
using namespace std;

Repo::Repo(const string& filename)
{
	this->filename = filename;
	this->readFromFile();
}

void Repo::addTutorial(const Tutorial& t)
{
	int pos = this->findPos(t.getTitle(), t.getPresenter());
	if (pos != -1)
		throw DuplicateTutorialException();
	this->tutorials.push_back(t);
	this->writeToFile();
}

int Repo::findPos(const std::string& title, const std::string& presenter)
{
	int pos = -1;
	for (auto t : this->tutorials)
	{
		pos++;
		if (t.getTitle() == title && t.getPresenter() == presenter)
			return pos;
	}
	return -1;
}

Tutorial Repo::find(const string& title, const string &presenter)
{
	auto tutorial = find_if(this->tutorials.begin(), this->tutorials.end(), [&title, &presenter](const Tutorial& obj) {return (title == obj.getTitle() && presenter == obj.getPresenter()); });
	if(tutorial == this->tutorials.end())
		return Tutorial{};
	return *tutorial;
}

void Repo::removeTutorial(const std::string& title, const std::string& presenter)
{
	int pos = this->findPos(title, presenter);
	if (pos == -1)
		throw RepositoryException("Tutorial does not appear in the database!\n");
	this->tutorials.erase(this->tutorials.begin() + pos);
	this->writeToFile();
}

void Repo::updateTutorial(const Tutorial& newT, const std::string& title, const std::string& presenter)
{
	int pos = this->findPos(title, presenter);
	if (pos == -1)
		throw RepositoryException("Tutorial does not appear in the database!\n");
	this->tutorials.erase(this->tutorials.begin() + pos);
	this->tutorials.insert(this->tutorials.begin() + pos, newT);
	this->writeToFile();
}

void Repo::readFromFile()
{
	ifstream file(this->filename);

	if (!file.is_open())
		throw FileException("File is not open!\n");

	Tutorial t;
	while (file >> t)
	{
		this->tutorials.push_back(t);
	}
	file.close();
}

void Repo::writeToFile()
{
	ofstream file(this->filename);
	if (!file.is_open())
		throw FileException("Can't open file!\n");
	for (auto t : this->tutorials)
	{
		file << t;
	}
	file.close();
}

void Repo::testRepo()
{
	//Tutorial t1{ "abc", "def", 1, Duration{ 1, 1 } , "cba", 100 };
	//this->getTutorials();
	//this->addTutorial(t1);
	//int l = this->tutorials.getSize();
	//assert(l == 1);
	//Tutorial t3 = this->find("abc", "def");
	//Tutorial t4 = this->find("fed", "wrs");
	//this->removeTutorial("abc", "def");
	//l = this->tutorials.getSize();
	//assert(l == 0);
	//
	//this->addTutorial(t1);
	//this->addTutorial(t1);
	//this->removeTutorial("dwafse", "dwsegdrhtf");
	//this->updateTutorial(t1, "gesfse", "sefse");
	//Tutorial t2{ "def", "abc", 2, Duration{ 2, 2 }, "xyz", 100 };
	//assert(t2.getDuration().getMin() == 2);
	//assert(t2.getDuration().getSec() == 2);
	//assert(t2.getLink() == "xyz");
	//assert(t2.getLikes() == 2);
	//t2.increaseLikes();
	//assert(t2.getLikes() == 3);
	//assert(t2.getVis() == 100);
	//int a;
	//if (t2 < 101)
	//	a = 2;
	//t2.play();
	//this->updateTutorial(t2, "abc", "def");
	//std::string name = t2.getTitle();
	//assert(name == "def");
}

