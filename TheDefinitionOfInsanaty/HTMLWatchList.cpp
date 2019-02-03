#include "HTMLWatchList.h"
#include <Windows.h>
#include <fstream>
#include "Exception.h"

void HTMLWatchList::writeToFile()
{

	ofstream f(this->filename);
	if (!f.is_open())
		throw FileException("Can't open file");

	f << "<!DOCTYPE html> \n";
	f << "<html>";
	f << "<head>\n";
	f << "<title>Tutorials</title>\n";
	f << "</head>\n";
	f << "<body>\n";
	f << "<table border=\"1\">\n ";
	f << "<tr>\n";
	f << "<td>Title</td>\n";
	f << "<td>Presenter</td>\n";
	f << "<td>Likes</td>\n";
	f << "<td>Minutes</td>\n";
	f << "<td>Seconds</td>\n";
	f << "<td>Link</td>\n";
	f << "<td>Views</td>\n";
	f << "</tr>\n";
	for (auto t : this->getWatchList())
	{
		f << "<tr>\n";
		f << "<td>\n" << t.getTitle() << "</td>\n";
		f << "<td>\n" << t.getPresenter() << "</td>\n";
		f << "<td>\n" << t.getLikes() << "</td>\n";
		f << "<td>\n" << t.getDuration().getMin() << "</td>\n";
		f << "<td>\n" << t.getDuration().getSec() << "</td>\n";
		f << "<td>\n" << t.getLink() << "</td>\n";
		f << "<td>\n" << t.getVis() << "</td>\n";
		f << "</tr>\n";
	}
	f << "</table>\n";
	f << "</body>\n";
	f << "</html>\n";
	f.close();
}

void HTMLWatchList::displayWatchlist() const
{
	string aux = "\"" + this->filename + "\"";
	ShellExecuteA(NULL, NULL, "C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome", aux.c_str(), NULL, SW_SHOWMAXIMIZED);
}
