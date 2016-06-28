/****************************************************************************
** Meta object code from reading C++ file 'tabelmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../saveAndSearch/tabelmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabelmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TabelModel_t {
    QByteArrayData data[10];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabelModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabelModel_t qt_meta_stringdata_TabelModel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TabelModel"
QT_MOC_LITERAL(1, 11, 11), // "setContacts"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 2), // "id"
QT_MOC_LITERAL(4, 27, 4), // "name"
QT_MOC_LITERAL(5, 32, 7), // "address"
QT_MOC_LITERAL(6, 40, 5), // "phone"
QT_MOC_LITERAL(7, 46, 4), // "data"
QT_MOC_LITERAL(8, 51, 5), // "index"
QT_MOC_LITERAL(9, 57, 4) // "role"

    },
    "TabelModel\0setContacts\0\0id\0name\0address\0"
    "phone\0data\0index\0role"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabelModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   29,    2, 0x0a /* Public */,
       7,    2,   38,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::QVariant, QMetaType::QModelIndex, QMetaType::Int,    8,    9,
    QMetaType::QVariant, QMetaType::QModelIndex,    8,

       0        // eod
};

void TabelModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TabelModel *_t = static_cast<TabelModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setContacts((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: { QVariant _r = _t->data((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 2: { QVariant _r = _t->data((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject TabelModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_TabelModel.data,
      qt_meta_data_TabelModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TabelModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabelModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TabelModel.stringdata0))
        return static_cast<void*>(const_cast< TabelModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int TabelModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
