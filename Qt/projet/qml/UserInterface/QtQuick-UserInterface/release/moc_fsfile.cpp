/****************************************************************************
** Meta object code from reading C++ file 'fsfile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fsfile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fsfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FsFile_t {
    QByteArrayData data[6];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FsFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FsFile_t qt_meta_stringdata_FsFile = {
    {
QT_MOC_LITERAL(0, 0, 6), // "FsFile"
QT_MOC_LITERAL(1, 7, 8), // "openFile"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "name"
QT_MOC_LITERAL(4, 22, 4), // "mode"
QT_MOC_LITERAL(5, 27, 8) // "readFile"

    },
    "FsFile\0openFile\0\0name\0mode\0readFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FsFile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x02 /* Public */,
       5,    0,   29,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::UChar,    3,    4,
    QMetaType::QString,

       0        // eod
};

void FsFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FsFile *_t = static_cast<FsFile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->openFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->readFile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject FsFile::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FsFile.data,
      qt_meta_data_FsFile,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FsFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FsFile::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FsFile.stringdata0))
        return static_cast<void*>(const_cast< FsFile*>(this));
    return QObject::qt_metacast(_clname);
}

int FsFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
