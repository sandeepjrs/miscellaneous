/****************************************************************************
** Meta object code from reading C++ file 'cal_model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mcv_calculater/cal_model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cal_model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Cal_model_t {
    QByteArrayData data[8];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cal_model_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cal_model_t qt_meta_stringdata_Cal_model = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Cal_model"
QT_MOC_LITERAL(1, 10, 8), // "selector"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 1), // "a"
QT_MOC_LITERAL(4, 22, 1), // "b"
QT_MOC_LITERAL(5, 24, 1), // "i"
QT_MOC_LITERAL(6, 26, 3), // "man"
QT_MOC_LITERAL(7, 30, 9) // "getResult"

    },
    "Cal_model\0selector\0\0a\0b\0i\0man\0getResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cal_model[] = {

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
       1,    3,   29,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    4,   36,    2, 0x02 /* Public */,
       7,    0,   45,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Int,

       0        // eod
};

void Cal_model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Cal_model *_t = static_cast<Cal_model *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selector((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->man((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: { int _r = _t->getResult();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject Cal_model::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Cal_model.data,
      qt_meta_data_Cal_model,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Cal_model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cal_model::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Cal_model.stringdata0))
        return static_cast<void*>(const_cast< Cal_model*>(this));
    return QObject::qt_metacast(_clname);
}

int Cal_model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
