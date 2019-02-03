#include "CSVWatchlist.h"
#include <fstream>
#include <Windows.h>
#include "Exception.h"

using namespace std;

void CSVWatchList::writeToFile()
{
	ofstream f(this->filename);

	if (!f.is_open())
		throw FileException("The file could not be opened!");

	for (auto s : this->getWatchList())
		f << s;

	f.close();
}

void CSVWatchList::displayWatchlist() const
{
	string aux = "\"" + this->filename + "\""; 
	ShellExecuteA(NULL, NULL, "C:\\Program Files (x86)\\Microsoft Office\\Office14\\EXCEL.EXE", aux.c_str(), NULL, SW_SHOWMAXIMIZED);
}
