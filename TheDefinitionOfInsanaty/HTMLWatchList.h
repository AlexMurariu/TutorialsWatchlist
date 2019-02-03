#pragma once
#include "FileWatchList.h"
#include <string>

class HTMLWatchList : public FileWatchList
{
public:
	HTMLWatchList(const string& filename) : FileWatchList{ filename } {}
	void writeToFile() override;
	void displayWatchlist() const override;
};