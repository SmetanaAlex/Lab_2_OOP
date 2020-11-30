/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Qt/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "on_save_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 26), // "on_Table_cellDoubleClicked"
QT_MOC_LITERAL(4, 55, 3), // "row"
QT_MOC_LITERAL(5, 59, 6), // "column"
QT_MOC_LITERAL(6, 66, 12), // "StartReading"
QT_MOC_LITERAL(7, 79, 19), // "StartReadingArchive"
QT_MOC_LITERAL(8, 99, 20), // "on_DeleteAll_clicked"
QT_MOC_LITERAL(9, 120, 12), // "AddToArchive"
QT_MOC_LITERAL(10, 133, 12), // "QVector<int>"
QT_MOC_LITERAL(11, 146, 7), // "indexes"
QT_MOC_LITERAL(12, 154, 17), // "RemoveFromArchive"
QT_MOC_LITERAL(13, 172, 14), // "DeleteSelected"
QT_MOC_LITERAL(14, 187, 21), // "on_Archivator_clicked"
QT_MOC_LITERAL(15, 209, 17), // "on_Delete_clicked"
QT_MOC_LITERAL(16, 227, 22), // "on_Dearchivate_clicked"
QT_MOC_LITERAL(17, 250, 28), // "on_Archive_cellDoubleClicked"
QT_MOC_LITERAL(18, 279, 35), // "on_Table_customContextMenuReq..."
QT_MOC_LITERAL(19, 315, 3), // "pos"
QT_MOC_LITERAL(20, 319, 30) // "on_Input_cursorPositionChanged"

    },
    "MainWindow\0on_save_clicked\0\0"
    "on_Table_cellDoubleClicked\0row\0column\0"
    "StartReading\0StartReadingArchive\0"
    "on_DeleteAll_clicked\0AddToArchive\0"
    "QVector<int>\0indexes\0RemoveFromArchive\0"
    "DeleteSelected\0on_Archivator_clicked\0"
    "on_Delete_clicked\0on_Dearchivate_clicked\0"
    "on_Archive_cellDoubleClicked\0"
    "on_Table_customContextMenuRequested\0"
    "pos\0on_Input_cursorPositionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    2,   85,    2, 0x08 /* Private */,
       6,    0,   90,    2, 0x08 /* Private */,
       7,    0,   91,    2, 0x08 /* Private */,
       8,    0,   92,    2, 0x08 /* Private */,
       9,    1,   93,    2, 0x08 /* Private */,
      12,    1,   96,    2, 0x08 /* Private */,
      13,    1,   99,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    2,  105,    2, 0x08 /* Private */,
      18,    1,  110,    2, 0x08 /* Private */,
      20,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::QPoint,   19,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_save_clicked(); break;
        case 1: _t->on_Table_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->StartReading(); break;
        case 3: _t->StartReadingArchive(); break;
        case 4: _t->on_DeleteAll_clicked(); break;
        case 5: _t->AddToArchive((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 6: _t->RemoveFromArchive((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 7: _t->DeleteSelected((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 8: _t->on_Archivator_clicked(); break;
        case 9: _t->on_Delete_clicked(); break;
        case 10: _t->on_Dearchivate_clicked(); break;
        case 11: _t->on_Archive_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->on_Table_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->on_Input_cursorPositionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
