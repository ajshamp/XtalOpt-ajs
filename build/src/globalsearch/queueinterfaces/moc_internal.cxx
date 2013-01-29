/****************************************************************************
** Meta object code from reading C++ file 'internal.h'
**
** Created: Sun Jan 20 20:22:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/globalsearch/queueinterfaces/internal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'internal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlobalSearch__InternalQueueProcess[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   35,   35,   35, 0x0a,
      49,   35,   35,   35, 0x0a,
      70,   35,   63,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlobalSearch__InternalQueueProcess[] = {
    "GlobalSearch::InternalQueueProcess\0\0"
    "setRunning()\0setFinished()\0Status\0"
    "status()\0"
};

void GlobalSearch::InternalQueueProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InternalQueueProcess *_t = static_cast<InternalQueueProcess *>(_o);
        switch (_id) {
        case 0: _t->setRunning(); break;
        case 1: _t->setFinished(); break;
        case 2: { Status _r = _t->status();
            if (_a[0]) *reinterpret_cast< Status*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlobalSearch::InternalQueueProcess::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalSearch::InternalQueueProcess::staticMetaObject = {
    { &QProcess::staticMetaObject, qt_meta_stringdata_GlobalSearch__InternalQueueProcess,
      qt_meta_data_GlobalSearch__InternalQueueProcess, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalSearch::InternalQueueProcess::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalSearch::InternalQueueProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalSearch::InternalQueueProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__InternalQueueProcess))
        return static_cast<void*>(const_cast< InternalQueueProcess*>(this));
    return QProcess::qt_metacast(_clname);
}

int GlobalSearch::InternalQueueProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_GlobalSearch__InternalQueueInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   43,   38,   37, 0x0a,
      66,   43,   38,   37, 0x0a,
     114,   43,   86,   37, 0x0a,
     136,   43,   38,   37, 0x0a,
     183,   37,  174,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlobalSearch__InternalQueueInterface[] = {
    "GlobalSearch::InternalQueueInterface\0"
    "\0bool\0s\0startJob(Structure*)\0"
    "stopJob(Structure*)\0QueueInterface::QueueStatus\0"
    "getStatus(Structure*)\0"
    "prepareForStructureUpdate(Structure*)\0"
    "QDialog*\0dialog()\0"
};

void GlobalSearch::InternalQueueInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InternalQueueInterface *_t = static_cast<InternalQueueInterface *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->startJob((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->stopJob((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { QueueInterface::QueueStatus _r = _t->getStatus((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QueueInterface::QueueStatus*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->prepareForStructureUpdate((*reinterpret_cast< Structure*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QDialog* _r = _t->dialog();
            if (_a[0]) *reinterpret_cast< QDialog**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlobalSearch::InternalQueueInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalSearch::InternalQueueInterface::staticMetaObject = {
    { &LocalQueueInterface::staticMetaObject, qt_meta_stringdata_GlobalSearch__InternalQueueInterface,
      qt_meta_data_GlobalSearch__InternalQueueInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalSearch::InternalQueueInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalSearch::InternalQueueInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalSearch::InternalQueueInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch__InternalQueueInterface))
        return static_cast<void*>(const_cast< InternalQueueInterface*>(this));
    return LocalQueueInterface::qt_metacast(_clname);
}

int GlobalSearch::InternalQueueInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LocalQueueInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
