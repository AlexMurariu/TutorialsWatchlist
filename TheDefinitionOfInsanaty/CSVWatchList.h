#pragma once
#include "FileWatchlist.h"
#include <string>

class CSVWatchList : public FileWatchList
{
public:
	CSVWatchList(const string& filename) : FileWatchList{ filename } {}
	void writeToFile() override;
	void displayWatchlist() const override;
};