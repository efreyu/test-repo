/****************************************************************************
** Meta object code from reading C++ file 'formconnect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/formconnect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formconnect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormConnect_t {
    QByteArrayData data[20];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormConnect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormConnect_t qt_meta_stringdata_FormConnect = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FormConnect"
QT_MOC_LITERAL(1, 12, 15), // "gotoPreferences"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "connectionRequested"
QT_MOC_LITERAL(4, 49, 17), // "settingsRequested"
QT_MOC_LITERAL(5, 67, 15), // "logoutRequested"
QT_MOC_LITERAL(6, 83, 21), // "paranoicModeRequested"
QT_MOC_LITERAL(7, 105, 13), // "serverChanged"
QT_MOC_LITERAL(8, 119, 13), // "setDownloaded"
QT_MOC_LITERAL(9, 133, 11), // "setUploaded"
QT_MOC_LITERAL(10, 145, 13), // "currentServer"
QT_MOC_LITERAL(11, 159, 21), // "setCurrentServerIndex"
QT_MOC_LITERAL(12, 181, 14), // "onMovieChanged"
QT_MOC_LITERAL(13, 196, 11), // "onMyAccount"
QT_MOC_LITERAL(14, 208, 17), // "onSettingsClicked"
QT_MOC_LITERAL(15, 226, 8), // "repolish"
QT_MOC_LITERAL(16, 235, 14), // "makekillswitch"
QT_MOC_LITERAL(17, 250, 6), // "getUrl"
QT_MOC_LITERAL(18, 257, 13), // "replyFinished"
QT_MOC_LITERAL(19, 271, 14) // "QNetworkReply*"

    },
    "FormConnect\0gotoPreferences\0\0"
    "connectionRequested\0settingsRequested\0"
    "logoutRequested\0paranoicModeRequested\0"
    "serverChanged\0setDownloaded\0setUploaded\0"
    "currentServer\0setCurrentServerIndex\0"
    "onMovieChanged\0onMyAccount\0onSettingsClicked\0"
    "repolish\0makekillswitch\0getUrl\0"
    "replyFinished\0QNetworkReply*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormConnect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    1,  100,    2, 0x06 /* Public */,
       4,    1,  103,    2, 0x06 /* Public */,
       5,    0,  106,    2, 0x06 /* Public */,
       6,    1,  107,    2, 0x06 /* Public */,
       7,    1,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  113,    2, 0x0a /* Public */,
       9,    1,  116,    2, 0x0a /* Public */,
      10,    0,  119,    2, 0x0a /* Public */,
      11,    1,  120,    2, 0x0a /* Public */,
      12,    0,  123,    2, 0x08 /* Private */,
      13,    0,  124,    2, 0x08 /* Private */,
      14,    0,  125,    2, 0x08 /* Private */,
      15,    1,  126,    2, 0x08 /* Private */,
      16,    1,  129,    2, 0x08 /* Private */,
      17,    0,  132,    2, 0x08 /* Private */,
      18,    1,  133,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,    2,

       0        // eod
};

void FormConnect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormConnect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotoPreferences(); break;
        case 1: _t->connectionRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->settingsRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->logoutRequested(); break;
        case 4: _t->paranoicModeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->serverChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setDownloaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setUploaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: { int _r = _t->currentServer();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setCurrentServerIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->onMovieChanged(); break;
        case 11: _t->onMyAccount(); break;
        case 12: _t->onSettingsClicked(); break;
        case 13: _t->repolish((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->makekillswitch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->getUrl(); break;
        case 16: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FormConnect::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormConnect::gotoPreferences)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FormConnect::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormConnect::connectionRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FormConnect::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormConnect::settingsRequested)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FormConnect::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormConnect::logoutRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FormConnect::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormConnect::paranoicModeRequested)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FormConnect::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormConnect::serverChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FormConnect::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_FormConnect.data,
    qt_meta_data_FormConnect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FormConnect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormConnect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormConnect.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PubSub::Subscriber<ServerSide::IpNotification>"))
        return static_cast< PubSub::Subscriber<ServerSide::IpNotification>*>(this);
    return QWidget::qt_metacast(_clname);
}

int FormConnect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void FormConnect::gotoPreferences()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FormConnect::connectionRequested(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FormConnect::settingsRequested(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FormConnect::logoutRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FormConnect::paranoicModeRequested(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FormConnect::serverChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
