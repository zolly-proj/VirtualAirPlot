/****************************************************************************
** Meta object code from reading C++ file 'clSocketToBeacons.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "clSocketToBeacons.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clSocketToBeacons.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_clSocketToBeacons_t {
    QByteArrayData data[7];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_clSocketToBeacons_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_clSocketToBeacons_t qt_meta_stringdata_clSocketToBeacons = {
    {
QT_MOC_LITERAL(0, 0, 17), // "clSocketToBeacons"
QT_MOC_LITERAL(1, 18, 12), // "transferData"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21), // "beacon_lenght_primary"
QT_MOC_LITERAL(4, 54, 19), // "beacon_name_primary"
QT_MOC_LITERAL(5, 74, 23), // "beacon_lenght_secondary"
QT_MOC_LITERAL(6, 98, 21) // "beacon_name_secondary"

    },
    "clSocketToBeacons\0transferData\0\0"
    "beacon_lenght_primary\0beacon_name_primary\0"
    "beacon_lenght_secondary\0beacon_name_secondary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_clSocketToBeacons[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::QString, QMetaType::Float, QMetaType::QString,    3,    4,    5,    6,

       0        // eod
};

void clSocketToBeacons::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<clSocketToBeacons *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->transferData((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject clSocketToBeacons::staticMetaObject = { {
    QMetaObject::SuperData::link<QTcpServer::staticMetaObject>(),
    qt_meta_stringdata_clSocketToBeacons.data,
    qt_meta_data_clSocketToBeacons,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *clSocketToBeacons::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *clSocketToBeacons::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_clSocketToBeacons.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int clSocketToBeacons::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
