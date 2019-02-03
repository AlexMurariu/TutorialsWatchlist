#pragma once
#include "Repo.h"

class RedoAction
{
public:
	RedoAction() {}
	virtual ~RedoAction() {}
	virtual void executeRedo() = 0;
};

class RedoAdd : public RedoAction
{
private:
	Tutorial addedTutorial;
	Repo &repo;

public:
	RedoAdd(Tutorial const &addedTutorial, Repo &repo);
	~RedoAdd();
	void executeRedo() override;
};

class RedoRemove : public RedoAction
{
private:
	Tutorial removedTutorial;
	Repo &repo;

public:
	RedoRemove(Tutorial const &removedTutorial, Repo &repo);
	~RedoRemove();
	void executeRedo() override;
};

class RedoUpdate : public RedoAction
{
private:
	Tutorial updatedTutorial;
	Repo &repo;

public:
	RedoUpdate(Tutorial const &updatedTutorial, Repo &repo);
	~RedoUpdate();
	void executeRedo() override;
};