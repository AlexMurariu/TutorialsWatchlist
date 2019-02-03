#include "Tutorial.h"
#include <Windows.h>
#include <shellapi.h>

Tutorial::Tutorial() : title(""), presenter(""), likes(0), duration(Duration()), link(""), visualization(0) {}

Tutorial::Tutorial(const std::string & title, const std::string & presenter, const int & likes, const Duration & duration, const std::string & link, const int & visualization)
{
	this->title = title;
	this->presenter = presenter;
	this->likes = likes;
	this->duration = duration;
	this->link = link;
	this->visualization = visualization;
}

bool Tutorial::operator<(const int value)
{
	return this->getVis() < value;
}

void Tutorial::play()
{
	ShellExecuteA(NULL, NULL, "chrome.exe", this->getLink().c_str(), NULL, SW_SHOWMAXIMIZED);
}

istream & operator>>(istream & is, Tutorial & t)
{
	string line;
	getline(is, line);

	vector<string> v = tokenize(line, ',');
	
	if (v.size() != 7)
		return is;
	t.title = v[0];
	t.presenter = v[1];
	t.likes = stoi(v[2]);
	t.duration = Duration{ stoi(v[3]), stoi(v[4]) };
	t.visualization = stoi(v[5]);
	t.link = v[6];
	return is;
}

ostream & operator<<(ostream & os, Tutorial & t)
{
	os << t.title << "," << t.presenter << "," << t.likes << "," << t.duration.getMin() << "," << t.duration.getSec() << "," << t.visualization << "," << t.link << "\n";
	return os;
}
