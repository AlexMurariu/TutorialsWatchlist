#pragma once
#include "Tutorial.h"
#include <vector>
#include <algorithm>

using namespace std;

class WatchList
{
private:
	vector<Tutorial> tutorials;
	int current;

public:
	//Default constructor
	WatchList();

	int findPosWatchList(const std::string& title, const std::string& presenter);

	int add(const Tutorial& t);

	int removeTutorial(const std::string & title, const std::string & presenter);

	Tutorial getCurrentTutorial();

	void play();
	void next();
	bool isEmpty();

	vector<Tutorial> getWatchList() const { return tutorials; };
	WatchList& getWL() { return *this; }
	void setCurrent(int c) { current = c; };

	void testWatchList();

};