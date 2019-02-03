#include "Redo.h"

RedoAdd::RedoAdd(Tutorial const & t, Repo &repo)
	: addedTutorial(t), repo(repo) {}

RedoAdd::~RedoAdd()
{
}

void RedoAdd::executeRedo()
{
	this->repo.addTutorial(this->addedTutorial);
}

RedoRemove::RedoRemove(Tutorial const & t, Repo &repo)
	: removedTutorial(t), repo(repo) {}

RedoRemove::~RedoRemove()
{
}

void RedoRemove::executeRedo()
{
	this->repo.removeTutorial(this->removedTutorial.getTitle(), this->removedTutorial.getPresenter());
}

RedoUpdate::RedoUpdate(Tutorial const & t, Repo &repo)
	: updatedTutorial(t), repo(repo) {}

RedoUpdate::~RedoUpdate()
{
}

void RedoUpdate::executeRedo()
{
	this->repo.updateTutorial(this->updatedTutorial, this->updatedTutorial.getTitle(), this->updatedTutorial.getPresenter());
}
