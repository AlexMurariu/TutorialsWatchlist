#pragma once
#include "Repo.h"
#include "FileWatchList.h"
#include "TutorialValidator.h"
#include "Undo.h"
#include "Redo.h"
#include <memory>

class Controller
{
private:
	Repo repo;
	FileWatchList* watchList;
	TutorialValidator validator;
	vector<unique_ptr<UndoAction>> undoVector;
	vector<unique_ptr<RedoAction>> redoVector;

public:
	//Constructor
	Controller(const Repo& r, FileWatchList* w, TutorialValidator v) : repo{ r }, watchList{ w }, validator{ v }, undoVector{}, redoVector{} {}

	Repo& getRepo() { return repo; }
	WatchList* getPlaylist() const { return watchList; }

	/*
	Descr: Adds a given tutorial to the repository
	Input: tutorial
	Output: 1 if the tutorial is added to the repo, 0 if not
	*/
	void addTutorialToRepository(const std::string& title, const std::string& presenter, const int likes, int minutes, int seconds, const std::string& link, int vis);

	/*
	Descr: Removes a given tutorial from the repository
	Input: title, and presenter
	Output: 1 if the tutorial was removed from the repo, 0 if not
	*/
	void removeFromRepoitory(const std::string & title, const std::string & presenter);

	/*
	Descr: Adds a given tutorial to the current watchlist
	Input: tutorial - Tutorial, the tutorial must belong to the repository
	Output: 1 if the tutorial is added to the watchlist, 0 if not
	*/
	int addTutorialToWatchlist(const Tutorial& t);
	int removeFromWatchList(const std::string & title, const std::string & presenter);
	/*
	Descr: Updates a given tutorial from the repository
	Input: The new tutorial, current title, current presenter
	Output: 1 if the tutorial was updated, 0 if not
	*/
	void updateRepo(const Tutorial& newT, const std::string& title, const std::string& presenter);
	/*
	Descr: Adds tutorials from a given presenter
	Input: presenter
	Output: Adds the tutorials to the watchlist
	*/
	void addTutorialsByPresenter(const std::string& presenter);
	vector<Tutorial> filter(const int value);
	//Plays the first tutorial
	void startWatchlist();
	//Plays the next tutorial
	void nextTutorialWatchlist();
	void saveWatchlist();
	void openWatchlist() const;
	void undo();
	void redo();
	void testCtrl();
};