/****************************************************************************
** Meta object code from reading C++ file 'GUIAdmin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GUIAdmin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GUIAdmin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GUIAdmin_t {
    QByteArrayData data[10];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GUIAdmin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GUIAdmin_t qt_meta_stringdata_GUIAdmin = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GUIAdmin"
QT_MOC_LITERAL(1, 9, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "on_removeButton_clicked"
QT_MOC_LITERAL(4, 55, 23), // "on_updateButton_clicked"
QT_MOC_LITERAL(5, 79, 23), // "on_filterButton_clicked"
QT_MOC_LITERAL(6, 103, 24), // "on_displayButton_clicked"
QT_MOC_LITERAL(7, 128, 21), // "on_undoButton_clicked"
QT_MOC_LITERAL(8, 150, 21), // "on_redoButton_clicked"
QT_MOC_LITERAL(9, 172, 36) // "on_detailComboBox_currentText..."

    },
    "GUIAdmin\0on_addButton_clicked\0\0"
    "on_removeButton_clicked\0on_updateButton_clicked\0"
    "on_filterButton_clicked\0"
    "on_displayButton_clicked\0on_undoButton_clicked\0"
    "on_redoButton_clicked\0"
    "on_detailComboBox_currentTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUIAdmin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GUIAdmin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GUIAdmin *_t = static_cast<GUIAdmin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addButton_clicked(); break;
        case 1: _t->on_removeButton_clicked(); break;
        case 2: _t->on_updateButton_clicked(); break;
        case 3: _t->on_filterButton_clicked(); break;
        case 4: _t->on_displayButton_clicked(); break;
        case 5: _t->on_undoButton_clicked(); break;
        case 6: _t->on_redoButton_clicked(); break;
        case 7: _t->on_detailComboBox_currentTextChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GUIAdmin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GUIAdmin.data,
      qt_meta_data_GUIAdmin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GUIAdmin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUIAdmin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GUIAdmin.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GUIAdmin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
