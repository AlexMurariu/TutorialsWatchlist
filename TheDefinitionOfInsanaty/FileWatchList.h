#pragma once
#include "WatchList.h"

class FileWatchList : public WatchList
{
protected:
	string filename;

public:
	FileWatchList(const string& filename);
	virtual ~FileWatchList() {}

	virtual void writeToFile() = 0;
	virtual void displayWatchlist() const = 0;
};