#pragma once
#include <QAbstractTableModel>
#include "WatchList.h"

class TableView : public QAbstractTableModel
{
private:
	WatchList& wl;

public:
	TableView(WatchList& wl, QObject* parent = NULL);
	~TableView();

	int rowCount(const QModelIndex &parent = QModelIndex{}) const override;
	int columnCount(const QModelIndex &parent = QModelIndex{}) const override;
	QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
	QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;
	Qt::ItemFlags flags(const QModelIndex & index) const override;
};