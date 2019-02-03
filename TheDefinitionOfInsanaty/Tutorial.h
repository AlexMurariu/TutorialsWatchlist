#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "stuff.h"
using namespace std;

class Duration
{
private:
	int minutes;
	int seconds;

public:
	//Default constructor
	Duration() : minutes(0), seconds(0){}
	//Constructor with parameters
	Duration(int min, int sec) :minutes(min), seconds(sec){}

	int getMin() const { return minutes; }
	int getSec() const { return seconds; }
	void setMin(int min) { minutes = min; }
	void setSec(int sec) { seconds = sec; }
};

class Tutorial
{
private:
	std::string title;
	std::string presenter;
	int likes;
	Duration duration;
	std::string link;
	int visualization;

public:
	//Default constructor
	Tutorial();
	//Constructor with parameters
	Tutorial(const std::string& title, const std::string& presenter, const int& likes, const Duration& duration, const std::string& link, const int& vis);
	bool operator<(const int value);
	void play();
	
	string getTitle() const { return title; }
	string getPresenter() const { return presenter; }
	int getLikes() const { return likes; }
	Duration getDuration() const { return duration; }
	string getLink() const { return link; }
	int getVis() const { return visualization; };
	void increaseLikes() { likes++; }

	void setTitle(string title) { this->title = title; }
	void setPresenter(string presenter) { this->presenter = presenter; }
	void setLikes(int likes) { this->likes = likes; }
	void setLink(string link) { this->link = link; }
	void setVis(int vis) { this->visualization = vis; }

private:
	friend istream& operator >> (istream& is, Tutorial& t);
	friend ostream& operator << (ostream& os, Tutorial& t);
};