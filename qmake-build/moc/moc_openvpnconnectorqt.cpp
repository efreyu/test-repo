/****************************************************************************
** Meta object code from reading C++ file 'openvpnconnectorqt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Linux/openvpnconnectorqt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openvpnconnectorqt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenVPNConnectorQt_t {
    QByteArrayData data[14];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenVPNConnectorQt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenVPNConnectorQt_t qt_meta_stringdata_OpenVPNConnectorQt = {
    {
QT_MOC_LITERAL(0, 0, 18), // "OpenVPNConnectorQt"
QT_MOC_LITERAL(1, 19, 9), // "connected"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "disconnected"
QT_MOC_LITERAL(4, 43, 12), // "stateChanged"
QT_MOC_LITERAL(5, 56, 5), // "state"
QT_MOC_LITERAL(6, 62, 5), // "error"
QT_MOC_LITERAL(7, 68, 13), // "OPENVPN_ERROR"
QT_MOC_LITERAL(8, 82, 3), // "err"
QT_MOC_LITERAL(9, 86, 3), // "log"
QT_MOC_LITERAL(10, 90, 6), // "logStr"
QT_MOC_LITERAL(11, 97, 17), // "statisticsUpdated"
QT_MOC_LITERAL(12, 115, 7), // "bytesIn"
QT_MOC_LITERAL(13, 123, 8) // "bytesOut"

    },
    "OpenVPNConnectorQt\0connected\0\0"
    "disconnected\0stateChanged\0state\0error\0"
    "OPENVPN_ERROR\0err\0log\0logStr\0"
    "statisticsUpdated\0bytesIn\0bytesOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenVPNConnectorQt[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,
       9,    1,   52,    2, 0x06 /* Public */,
      11,    2,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   12,   13,

       0        // eod
};

void OpenVPNConnectorQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpenVPNConnectorQt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->stateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< OPENVPN_ERROR(*)>(_a[1]))); break;
        case 4: _t->log((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->statisticsUpdated((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OPENVPN_ERROR >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OpenVPNConnectorQt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenVPNConnectorQt::connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OpenVPNConnectorQt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenVPNConnectorQt::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OpenVPNConnectorQt::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenVPNConnectorQt::stateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OpenVPNConnectorQt::*)(OPENVPN_ERROR );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenVPNConnectorQt::error)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OpenVPNConnectorQt::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenVPNConnectorQt::log)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OpenVPNConnectorQt::*)(quint64 , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenVPNConnectorQt::statisticsUpdated)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenVPNConnectorQt::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_OpenVPNConnectorQt.data,
    qt_meta_data_OpenVPNConnectorQt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenVPNConnectorQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenVPNConnectorQt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenVPNConnectorQt.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int OpenVPNConnectorQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OpenVPNConnectorQt::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OpenVPNConnectorQt::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OpenVPNConnectorQt::stateChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OpenVPNConnectorQt::error(OPENVPN_ERROR _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OpenVPNConnectorQt::log(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OpenVPNConnectorQt::statisticsUpdated(quint64 _t1, quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
