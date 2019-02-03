#include "Undo.h"

UndoAdd::UndoAdd(Tutorial const & t, Repo &repo, std::string ty)
	: UndoAction(ty), addedTutorial(t), repo(repo) {}

UndoAdd::~UndoAdd()
{
}

void UndoAdd::executeUndo()
{
	this->repo.removeTutorial(this->addedTutorial.getTitle(), this->addedTutorial.getPresenter());
}

UndoRemove::UndoRemove(Tutorial const & t, Repo &repo, string ty)
	: UndoAction(ty), removedTutorial(t), repo(repo) {}

UndoRemove::~UndoRemove()
{
}

void UndoRemove::executeUndo()
{
	this->repo.addTutorial(this->removedTutorial);
}

string UndoAction::getType()
{
	return this->type;
}

UndoUpdate::UndoUpdate(Tutorial const & t, Repo &repo, string ty)
	: UndoAction(ty), updatedTutorial(t), repo(repo) {}

UndoUpdate::~UndoUpdate()
{
}

void UndoUpdate::executeUndo()
{
	this->repo.updateTutorial(this->updatedTutorial, this->updatedTutorial.getTitle(), this->updatedTutorial.getPresenter());
}