/****************************************************************************
** Meta object code from reading C++ file 'xtalopt.h'
**
** Created: Sun Jan 20 20:23:19 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/xtalopt/xtalopt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xtalopt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XtalOpt__XtalOpt[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   17,   17,   17, 0x0a,
      79,   72,   67,   17, 0x0a,
     129,  114,   17,   17, 0x0a,
     166,   17,   17,   17, 0x0a,
     191,  189,   17,   17, 0x0a,
     244,  238,   17,   17, 0x0a,
     283,   17,  277,   17, 0x0a,
     316,   17,  301,   17, 0x0a,
     359,  335,   17,   17, 0x0a,
     400,   17,   17,   17, 0x0a,
     419,   17,   17,   17, 0x0a,
     437,   17,   17,   17, 0x0a,
     460,  458,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XtalOpt__XtalOpt[] = {
    "XtalOpt::XtalOpt\0\0isMolecularXtalSearchChanged(bool)\0"
    "startSearch()\0bool\0notify\0"
    "initializeSubMoleculeSources(bool)\0"
    "finished,total\0initializeSMSProgressUpdate(int,int)\0"
    "generateNewStructure()\0s\0"
    "preoptimizeStructure(GlobalSearch::Structure*)\0"
    "mxtal\0preoptimizeMXtal(MolecularXtal*)\0"
    "Xtal*\0generateNewXtal()\0MolecularXtal*\0"
    "generateNewMXtal()\0xtal,generation,parents\0"
    "initializeAndAddXtal(Xtal*,uint,QString)\0"
    "resetSpacegroups()\0resetDuplicates()\0"
    "checkForDuplicates()\0b\0"
    "setMolecularXtalSearch(bool)\0"
};

void XtalOpt::XtalOpt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XtalOpt *_t = static_cast<XtalOpt *>(_o);
        switch (_id) {
        case 0: _t->isMolecularXtalSearchChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->startSearch(); break;
        case 2: { bool _r = _t->initializeSubMoleculeSources((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->initializeSMSProgressUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->generateNewStructure(); break;
        case 5: _t->preoptimizeStructure((*reinterpret_cast< GlobalSearch::Structure*(*)>(_a[1]))); break;
        case 6: _t->preoptimizeMXtal((*reinterpret_cast< MolecularXtal*(*)>(_a[1]))); break;
        case 7: { Xtal* _r = _t->generateNewXtal();
            if (_a[0]) *reinterpret_cast< Xtal**>(_a[0]) = _r; }  break;
        case 8: { MolecularXtal* _r = _t->generateNewMXtal();
            if (_a[0]) *reinterpret_cast< MolecularXtal**>(_a[0]) = _r; }  break;
        case 9: _t->initializeAndAddXtal((*reinterpret_cast< Xtal*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: _t->resetSpacegroups(); break;
        case 11: _t->resetDuplicates(); break;
        case 12: _t->checkForDuplicates(); break;
        case 13: _t->setMolecularXtalSearch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XtalOpt::XtalOpt::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XtalOpt::XtalOpt::staticMetaObject = {
    { &GlobalSearch::OptBase::staticMetaObject, qt_meta_stringdata_XtalOpt__XtalOpt,
      qt_meta_data_XtalOpt__XtalOpt, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XtalOpt::XtalOpt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XtalOpt::XtalOpt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XtalOpt::XtalOpt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__XtalOpt))
        return static_cast<void*>(const_cast< XtalOpt*>(this));
    typedef GlobalSearch::OptBase QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int XtalOpt::XtalOpt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef GlobalSearch::OptBase QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void XtalOpt::XtalOpt::isMolecularXtalSearchChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
