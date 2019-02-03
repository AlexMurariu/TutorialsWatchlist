#pragma once
#include "Tutorial.h"
#include "Exception.h"
#include <fstream>
#include <vector>

using namespace std;

class Repo
{
private:
	vector<Tutorial> tutorials;
	string filename;
public:
	//Default constructor
	Repo(const string& filename);
	void addTutorial(const Tutorial & s);
	int findPos(const std::string& title, const std::string& presenter);
	void removeTutorial(const std::string& title, const std::string& presenter);
	void updateTutorial(const Tutorial& newT, const std::string& title, const std::string& presenter);
	Tutorial find(const string& title, const string &presenter);
	vector<Tutorial>& getTutorials() { return tutorials; };
	void testRepo();
private:
	void readFromFile();
	void writeToFile();
};