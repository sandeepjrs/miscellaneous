/****************************************************************************
** Meta object code from reading C++ file 'store.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../saveAndSearch/store.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'store.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Store_t {
    QByteArrayData data[8];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Store_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Store_t qt_meta_stringdata_Store = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Store"
QT_MOC_LITERAL(1, 6, 11), // "storeFeilds"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 2), // "id"
QT_MOC_LITERAL(4, 22, 4), // "name"
QT_MOC_LITERAL(5, 27, 7), // "address"
QT_MOC_LITERAL(6, 35, 5), // "phone"
QT_MOC_LITERAL(7, 41, 5) // "email"

    },
    "Store\0storeFeilds\0\0id\0name\0address\0"
    "phone\0email"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Store[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    5,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString,    3,    4,    5,    6,    7,

       0        // eod
};

void Store::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Store *_t = static_cast<Store *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->storeFeilds((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObject Store::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Store.data,
      qt_meta_data_Store,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Store::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Store::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Store.stringdata0))
        return static_cast<void*>(const_cast< Store*>(this));
    return QObject::qt_metacast(_clname);
}

int Store::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
