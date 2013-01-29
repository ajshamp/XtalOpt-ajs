/****************************************************************************
** Meta object code from reading C++ file 'local.h'
**
** Created: Sun Jan 20 20:22:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/globalsearch/queueinterfaces/local.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'local.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlobalSearch__LocalQueueInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      48,   40,   35,   34, 0x0a,
      96,   94,   35,   34, 0x0a,
     152,  134,   35,   34, 0x0a,
     216,  196,   35,   34, 0x0a,
     307,  255,   35,   34, 0x0a,
     405,  367,   35,   34, 0x2a,
     489,  460,   35,   34, 0x2a,
     560,  539,   35,   34, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_GlobalSearch__LocalQueueInterface[] = {
    "GlobalSearch::LocalQueueInterface\0\0"
    "bool\0s,files\0writeFiles(Structure*,QHash<QString,QString>)\0"
    "s\0prepareForStructureUpdate(Structure*)\0"
    "s,filename,exists\0"
    "checkIfFileExists(Structure*,QString,bool*)\0"
    "s,filename,contents\0"
    "fetchFile(Structure*,QString,QString*)\0"
    "s,matchText,filename,matches,exitcode,caseSensitive\0"
    "grepFile(Structure*,QString,QString,QStringList*,int*,bool)\0"
    "s,matchText,filename,matches,exitcode\0"
    "grepFile(Structure*,QString,QString,QStringList*,int*)\0"
    "s,matchText,filename,matches\0"
    "grepFile(Structure*,QString,QString,QStringList*)\0"
    "s,matchText,filename\0"
    "grepFile(Structure*,QString,QString)\0"
};

void GlobalSearch::LocalQueueInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LocalQueueInterface *_t = static_cast<LocalQueueInterface *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->writeFiles((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QHash<QString,QString>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->prepareForStructureUpdate((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->checkIfFileExists((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->fetchFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStringList*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])),(*reinterpret_cast< const bool(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStringList*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStringList*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->grepFile((*reinterpret_cast< Structure*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlobalSearch::LocalQueueInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalSearch::LocalQueueInterface::staticMetaObject = {
    { &QueueInterface::staticMetaObject, qt_meta_stringdata_GlobalSearch__LocalQueueInterface,
      qt_meta_data_GlobalSearch__LocalQueueInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalSearch::LocalQueueInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalSearch::LocalQueueInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalSearch::LocalQueueInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__LocalQueueInterface))
        return static_cast<void*>(const_cast< LocalQueueInterface*>(this));
    return QueueInterface::qt_metacast(_clname);
}

int GlobalSearch::LocalQueueInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QueueInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
