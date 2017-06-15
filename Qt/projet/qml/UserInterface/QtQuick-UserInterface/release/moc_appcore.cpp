/****************************************************************************
** Meta object code from reading C++ file 'appcore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appcore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appcore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppCore_t {
    QByteArrayData data[28];
    char stringdata0[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppCore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppCore_t qt_meta_stringdata_AppCore = {
    {
QT_MOC_LITERAL(0, 0, 7), // "AppCore"
QT_MOC_LITERAL(1, 8, 11), // "addCandidat"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "newFirstName"
QT_MOC_LITERAL(4, 34, 11), // "newLastName"
QT_MOC_LITERAL(5, 46, 6), // "newAge"
QT_MOC_LITERAL(6, 53, 9), // "newProfil"
QT_MOC_LITERAL(7, 63, 7), // "newSexe"
QT_MOC_LITERAL(8, 71, 14), // "searchCandidat"
QT_MOC_LITERAL(9, 86, 5), // "v_nom"
QT_MOC_LITERAL(10, 92, 8), // "v_prenom"
QT_MOC_LITERAL(11, 101, 8), // "v_profil"
QT_MOC_LITERAL(12, 110, 7), // "loadBDD"
QT_MOC_LITERAL(13, 118, 4), // "data"
QT_MOC_LITERAL(14, 123, 14), // "deleteCandidat"
QT_MOC_LITERAL(15, 138, 5), // "index"
QT_MOC_LITERAL(16, 144, 17), // "deleteAllCandidat"
QT_MOC_LITERAL(17, 162, 7), // "saveBDD"
QT_MOC_LITERAL(18, 170, 21), // "getPropertyOfCandidat"
QT_MOC_LITERAL(19, 192, 11), // "id_property"
QT_MOC_LITERAL(20, 204, 21), // "setPropertyOfCandidat"
QT_MOC_LITERAL(21, 226, 5), // "Value"
QT_MOC_LITERAL(22, 232, 27), // "deleteAllListSearchCandidat"
QT_MOC_LITERAL(23, 260, 19), // "getIDsearchCandidat"
QT_MOC_LITERAL(24, 280, 13), // "candidatModel"
QT_MOC_LITERAL(25, 294, 14), // "CandidatModel*"
QT_MOC_LITERAL(26, 309, 19), // "candidatSearchModel"
QT_MOC_LITERAL(27, 329, 20) // "CandidatSearchModel*"

    },
    "AppCore\0addCandidat\0\0newFirstName\0"
    "newLastName\0newAge\0newProfil\0newSexe\0"
    "searchCandidat\0v_nom\0v_prenom\0v_profil\0"
    "loadBDD\0data\0deleteCandidat\0index\0"
    "deleteAllCandidat\0saveBDD\0"
    "getPropertyOfCandidat\0id_property\0"
    "setPropertyOfCandidat\0Value\0"
    "deleteAllListSearchCandidat\0"
    "getIDsearchCandidat\0candidatModel\0"
    "CandidatModel*\0candidatSearchModel\0"
    "CandidatSearchModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppCore[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    5,   64,    2, 0x0a /* Public */,
       8,    3,   75,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    1,   82,    2, 0x02 /* Public */,
      14,    1,   85,    2, 0x02 /* Public */,
      16,    0,   88,    2, 0x02 /* Public */,
      17,    0,   89,    2, 0x02 /* Public */,
      18,    2,   90,    2, 0x02 /* Public */,
      20,    3,   95,    2, 0x02 /* Public */,
      22,    0,  102,    2, 0x02 /* Public */,
      23,    1,  103,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,
    QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   10,   11,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int, QMetaType::Int,   15,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   15,   19,   21,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,   15,

 // properties: name, type, flags
      24, 0x80000000 | 25, 0x00095409,
      26, 0x80000000 | 27, 0x00095409,

       0        // eod
};

void AppCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AppCore *_t = static_cast<AppCore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addCandidat((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 1: { int _r = _t->searchCandidat((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->loadBDD((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->deleteCandidat((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->deleteAllCandidat(); break;
        case 5: _t->saveBDD(); break;
        case 6: { QString _r = _t->getPropertyOfCandidat((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: _t->setPropertyOfCandidat((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 8: _t->deleteAllListSearchCandidat(); break;
        case 9: { int _r = _t->getIDsearchCandidat((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CandidatModel* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CandidatSearchModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AppCore *_t = static_cast<AppCore *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< CandidatModel**>(_v) = _t->candidatModel(); break;
        case 1: *reinterpret_cast< CandidatSearchModel**>(_v) = _t->candidatSearchModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject AppCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AppCore.data,
      qt_meta_data_AppCore,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AppCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppCore::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AppCore.stringdata0))
        return static_cast<void*>(const_cast< AppCore*>(this));
    return QObject::qt_metacast(_clname);
}

int AppCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
