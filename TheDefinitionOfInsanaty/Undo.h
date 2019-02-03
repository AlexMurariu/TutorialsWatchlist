#pragma once
#include "Repo.h"

class UndoAction
{
protected:
	string type;

public:
	UndoAction(string ty) : type(ty) {}
	virtual ~UndoAction() {}
	virtual void executeUndo() = 0;
	virtual Tutorial &getTutorial() = 0;
	string getType();
};

class UndoAdd : public UndoAction
{
private:
	Tutorial addedTutorial;
	Repo &repo;

public:
	UndoAdd(Tutorial const &addedTutorial, Repo &repo, string ty);
	~UndoAdd();
	void executeUndo() override;
	Tutorial &getTutorial() override { return this->addedTutorial; }
};

class UndoRemove : public UndoAction
{
private:
	Tutorial removedTutorial;
	Repo &repo;

public:
	UndoRemove(Tutorial const &removedTutorial, Repo &repo, string ty);
	~UndoRemove();
	void executeUndo() override;
	Tutorial &getTutorial() override { return this->removedTutorial; }
};

class UndoUpdate : public UndoAction
{
private:
	Tutorial updatedTutorial;
	Repo &repo;

public:
	UndoUpdate(Tutorial const &updatedTutorial, Repo &repo, string ty);
	~UndoUpdate();
	void executeUndo() override;
	Tutorial &getTutorial() override { return this->updatedTutorial; }
};
