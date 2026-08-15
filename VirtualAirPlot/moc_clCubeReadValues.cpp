/****************************************************************************
** Meta object code from reading C++ file 'clCubeReadValues.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "clCubeReadValues.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clCubeReadValues.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_clCubeReadValues_t {
    QByteArrayData data[10];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_clCubeReadValues_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_clCubeReadValues_t qt_meta_stringdata_clCubeReadValues = {
    {
QT_MOC_LITERAL(0, 0, 16), // "clCubeReadValues"
QT_MOC_LITERAL(1, 17, 24), // "slotButtonRefreshPressed"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "slotButtonGeneratePressed"
QT_MOC_LITERAL(4, 69, 13), // "handleResults"
QT_MOC_LITERAL(5, 83, 20), // "verifyCheck_beacon01"
QT_MOC_LITERAL(6, 104, 7), // "checked"
QT_MOC_LITERAL(7, 112, 20), // "verifyCheck_beacon02"
QT_MOC_LITERAL(8, 133, 20), // "verifyCheck_beacon03"
QT_MOC_LITERAL(9, 154, 8) // "slotDoIt"

    },
    "clCubeReadValues\0slotButtonRefreshPressed\0"
    "\0slotButtonGeneratePressed\0handleResults\0"
    "verifyCheck_beacon01\0checked\0"
    "verifyCheck_beacon02\0verifyCheck_beacon03\0"
    "slotDoIt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_clCubeReadValues[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x0a /* Public */,
       5,    1,   54,    2, 0x0a /* Public */,
       7,    1,   57,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

       0        // eod
};

void clCubeReadValues::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<clCubeReadValues *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotButtonRefreshPressed(); break;
        case 1: _t->slotButtonGeneratePressed(); break;
        case 2: _t->handleResults((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->verifyCheck_beacon01((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->verifyCheck_beacon02((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->verifyCheck_beacon03((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slotDoIt(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject clCubeReadValues::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_clCubeReadValues.data,
    qt_meta_data_clCubeReadValues,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *clCubeReadValues::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *clCubeReadValues::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_clCubeReadValues.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int clCubeReadValues::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
