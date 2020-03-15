/****************************************************************************
** Meta object code from reading C++ file 'VPNConnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Controllers/VPNConnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VPNConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VPNConnection__Controller_t {
    QByteArrayData data[7];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VPNConnection__Controller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VPNConnection__Controller_t qt_meta_stringdata_VPNConnection__Controller = {
    {
QT_MOC_LITERAL(0, 0, 25), // "VPNConnection::Controller"
QT_MOC_LITERAL(1, 26, 11), // "onConnected"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 14), // "onDisconnected"
QT_MOC_LITERAL(4, 54, 17), // "onConnectionError"
QT_MOC_LITERAL(5, 72, 5), // "onLog"
QT_MOC_LITERAL(6, 78, 19) // "onStatisticsChanged"

    },
    "VPNConnection::Controller\0onConnected\0"
    "\0onDisconnected\0onConnectionError\0"
    "onLog\0onStatisticsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VPNConnection__Controller[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       5,    1,   44,    2, 0x08 /* Private */,
       6,    2,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    2,    2,

       0        // eod
};

void VPNConnection::Controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Controller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onConnected(); break;
        case 1: _t->onDisconnected(); break;
        case 2: _t->onConnectionError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onStatisticsChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VPNConnection::Controller::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_VPNConnection__Controller.data,
    qt_meta_data_VPNConnection__Controller,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VPNConnection::Controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VPNConnection::Controller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VPNConnection__Controller.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PubSub::Subscriber<ConnectRequest,DisconnectRequest,GettingConfigRequest>"))
        return static_cast< PubSub::Subscriber<ConnectRequest,DisconnectRequest,GettingConfigRequest>*>(this);
    if (!strcmp(_clname, "PubSub::Publisher<ConnectNotification,DisconnectNotification,ConnectErrorNotification,GettingConfigFailedNotification>"))
        return static_cast< PubSub::Publisher<ConnectNotification,DisconnectNotification,ConnectErrorNotification,GettingConfigFailedNotification>*>(this);
    return QObject::qt_metacast(_clname);
}

int VPNConnection::Controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
