#include "TableView.h"
#include <QFont>
#include <QBrush>
#include "stuff.h"

TableView::TableView(WatchList& wl, QObject * parent) : wl(wl), QAbstractTableModel(parent)
{
}

TableView::~TableView()
{
}

int TableView::rowCount(const QModelIndex & parent) const
{
	int nr = this->wl.getWatchList().size();
	return nr + 1;
}

int TableView::columnCount(const QModelIndex & parent) const
{
	return 6;
}

QVariant TableView::data(const QModelIndex & index, int role) const
{
	int row = index.row();
	int column = index.column();

	vector<Tutorial> tutorials = this->wl.getWatchList();

	if (row == tutorials.size())
	{
		return QVariant();
	}

	Tutorial t = tutorials[row];

	if (role == Qt::DisplayRole || role == Qt::EditRole)
	{
		switch (column)
		{
		case 0:
			return QString::fromStdString(t.getTitle());
		case 1:
			return QString::fromStdString(t.getPresenter());
		case 2:
			return QString::fromStdString(to_string(t.getLikes()));
		case 3:
			return QString::fromStdString(to_string(t.getDuration().getMin()) + " : " + to_string(t.getDuration().getSec()));
		case 4:
			return QString::fromStdString(to_string(t.getVis()));
		case 5:
			return QString::fromStdString(t.getLink());
		default:
			break;
		}
	}
	if (role == Qt::FontRole)
	{
		QFont font("Times", 15, 10, true);
		font.setItalic(false);
		return font;
	}
	if (role == Qt::BackgroundRole)
	{
		if (row % 2 == 1)
		{
			return QBrush{ QColor{ 0, 250, 154 } };
		}
	}

	return QVariant();
}


QVariant TableView::headerData(int section, Qt::Orientation orientation, int role) const
{
	if (role == Qt::DisplayRole)
	{
		if (orientation == Qt::Horizontal)
		{
			switch (section)
			{
			case 0:
				return QString{ "Title" };
			case 1:
				return QString{ "Presenter" };
			case 2:
				return QString{ "Likes" };
			case 3:
				return QString{ "Duration" };
			case 4:
				return QString{ "Link" };
			case 5:
				return QString{ "Views" };
			default:
				break;
			}
		}
	}
	if (role == Qt::FontRole)
	{
		QFont font("Times", 15, 10, true);
		font.setBold(true);
		font.setItalic(false);
		return font;
	}

	return QVariant{};
}

Qt::ItemFlags TableView::flags(const QModelIndex & index) const
{
	return Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsEnabled;
}
