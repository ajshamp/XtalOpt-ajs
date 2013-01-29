/****************************************************************************
** Meta object code from reading C++ file 'molecularxtal.h'
**
** Created: Sun Jan 20 20:23:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/xtalopt/structures/molecularxtal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'molecularxtal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XtalOpt__MolecularXtal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   24,   23,   23, 0x0a,
      72,   49,   23,   23, 0x0a,
     132,  127,   23,   23, 0x0a,
     155,   23,   23,   23, 0x2a,
     176,  172,   23,   23, 0x0a,
     205,  172,   23,   23, 0x0a,
     246,  237,   23,   23, 0x0a,
     292,  283,   23,   23, 0x0a,
     314,  283,   23,   23, 0x0a,
     337,  283,   23,   23, 0x0a,
     372,  283,   23,   23, 0x0a,
     410,  408,   23,   23, 0x0a,
     434,  408,   23,   23, 0x0a,
     455,  453,   23,   23, 0x0a,
     485,   23,   23,   23, 0x0a,
     508,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XtalOpt__MolecularXtal[] = {
    "XtalOpt::MolecularXtal\0\0Volume\0"
    "setVolume(double)\0a,b,c,alpha,beta,gamma\0"
    "rescaleCell(double,double,double,double,double,double)\0"
    "prec\0findSpaceGroup(double)\0"
    "findSpaceGroup()\0sub\0addSubMolecule(SubMolecule*)\0"
    "removeSubMolecule(SubMolecule*)\0"
    "i,newSub\0replaceSubMolecule(int,SubMolecule*)\0"
    "filename\0readSettings(QString)\0"
    "writeSettings(QString)\0"
    "readMolecularXtalSettings(QString)\0"
    "writeMolecularXtalSettings(QString)\0"
    "i\0setPreOptStepCount(int)\0setPreOptStep(int)\0"
    "b\0setNeedsPreoptimization(bool)\0"
    "abortPreoptimization()\0makeCoherent()\0"
};

void XtalOpt::MolecularXtal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MolecularXtal *_t = static_cast<MolecularXtal *>(_o);
        switch (_id) {
        case 0: _t->setVolume((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->rescaleCell((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 2: _t->findSpaceGroup((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->findSpaceGroup(); break;
        case 4: _t->addSubMolecule((*reinterpret_cast< SubMolecule*(*)>(_a[1]))); break;
        case 5: _t->removeSubMolecule((*reinterpret_cast< SubMolecule*(*)>(_a[1]))); break;
        case 6: _t->replaceSubMolecule((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< SubMolecule*(*)>(_a[2]))); break;
        case 7: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->writeSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->readMolecularXtalSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->writeMolecularXtalSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->setPreOptStepCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setPreOptStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setNeedsPreoptimization((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->abortPreoptimization(); break;
        case 15: _t->makeCoherent(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XtalOpt::MolecularXtal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XtalOpt::MolecularXtal::staticMetaObject = {
    { &Xtal::staticMetaObject, qt_meta_stringdata_XtalOpt__MolecularXtal,
      qt_meta_data_XtalOpt__MolecularXtal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XtalOpt::MolecularXtal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XtalOpt::MolecularXtal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XtalOpt::MolecularXtal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__MolecularXtal))
        return static_cast<void*>(const_cast< MolecularXtal*>(this));
    return Xtal::qt_metacast(_clname);
}

int XtalOpt::MolecularXtal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Xtal::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
