/****************************************************************************
** Meta object code from reading C++ file 'appWin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appWin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appWin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppWin_t {
    QByteArrayData data[13];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppWin_t qt_meta_stringdata_AppWin = {
    {
QT_MOC_LITERAL(0, 0, 6), // "AppWin"
QT_MOC_LITERAL(1, 7, 7), // "getName"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 5), // "index"
QT_MOC_LITERAL(4, 22, 12), // "getFirstName"
QT_MOC_LITERAL(5, 35, 6), // "getAge"
QT_MOC_LITERAL(6, 42, 7), // "getJobs"
QT_MOC_LITERAL(7, 50, 7), // "getSexe"
QT_MOC_LITERAL(8, 58, 11), // "getListName"
QT_MOC_LITERAL(9, 70, 16), // "getListFirstName"
QT_MOC_LITERAL(10, 87, 10), // "getListAge"
QT_MOC_LITERAL(11, 98, 11), // "getListJobs"
QT_MOC_LITERAL(12, 110, 11) // "getListSexe"

    },
    "AppWin\0getName\0\0index\0getFirstName\0"
    "getAge\0getJobs\0getSexe\0getListName\0"
    "getListFirstName\0getListAge\0getListJobs\0"
    "getListSexe"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppWin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x02 /* Public */,
       4,    1,   67,    2, 0x02 /* Public */,
       5,    1,   70,    2, 0x02 /* Public */,
       6,    1,   73,    2, 0x02 /* Public */,
       7,    1,   76,    2, 0x02 /* Public */,
       8,    0,   79,    2, 0x02 /* Public */,
       9,    0,   80,    2, 0x02 /* Public */,
      10,    0,   81,    2, 0x02 /* Public */,
      11,    0,   82,    2, 0x02 /* Public */,
      12,    0,   83,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, QMetaType::Int,    3,
    QMetaType::QString, QMetaType::Int,    3,
    QMetaType::QString, QMetaType::Int,    3,
    QMetaType::QString, QMetaType::Int,    3,
    QMetaType::QString, QMetaType::Int,    3,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::QStringList,

       0        // eod
};

void AppWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AppWin *_t = static_cast<AppWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->getName((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->getFirstName((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { QString _r = _t->getAge((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->getJobs((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->getSexe((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QStringList _r = _t->getListName();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 6: { QStringList _r = _t->getListFirstName();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 7: { QStringList _r = _t->getListAge();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 8: { QStringList _r = _t->getListJobs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 9: { QStringList _r = _t->getListSexe();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject AppWin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AppWin.data,
      qt_meta_data_AppWin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AppWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppWin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AppWin.stringdata0))
        return static_cast<void*>(const_cast< AppWin*>(this));
    return QObject::qt_metacast(_clname);
}

int AppWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
