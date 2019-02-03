#include "ThisIsTheFifthTimeImDoingThis.h"
#include <QSortFilterProxyModel>

ThisIsTheFifthTimeImDoingThis::ThisIsTheFifthTimeImDoingThis(WatchList& wl, QWidget *parent) : wl(wl), QMainWindow(parent)
{
	ui.setupUi(this);
	this->tableModel = new TableView{ this->wl };
	this->setUpTableView();
	ui.tableView->setModel(this->tableModel);
}

ThisIsTheFifthTimeImDoingThis::~ThisIsTheFifthTimeImDoingThis()
{
}

void ThisIsTheFifthTimeImDoingThis::setUpTableView()
{
	QSortFilterProxyModel* proxyModel = new QSortFilterProxyModel{};
	proxyModel->setSourceModel(this->tableModel);
	ui.tableView->setSortingEnabled(true);
	ui.tableView->setModel(proxyModel);
	ui.tableView->resizeColumnsToContents();
}
