/****************************************************************************
** Meta object code from reading C++ file 'molecularxtaloptimizer.h'
**
** Created: Sun Jan 20 20:23:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/xtalopt/molecularxtaloptimizer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'molecularxtaloptimizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XtalOpt__MolecularXtalOptimizer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x05,
      56,   32,   32,   32, 0x05,
      84,   79,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,  110,   32,   32, 0x0a,
     133,  127,   32,   32, 0x0a,
     167,  158,   32,   32, 0x0a,
     205,  199,   32,   32, 0x0a,
     240,  235,   32,   32, 0x0a,
     276,  269,   32,   32, 0x0a,
     297,  269,   32,   32, 0x0a,
     328,  158,   32,   32, 0x0a,
     357,   32,   32,   32, 0x0a,
     377,   32,   32,   32, 0x0a,
     397,   32,   32,   32, 0x0a,
     412,   32,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XtalOpt__MolecularXtalOptimizer[] = {
    "XtalOpt::MolecularXtalOptimizer\0\0"
    "startingOptimization()\0finishedOptimization()\0"
    "step\0finishedGeometryStep(int)\0b\0"
    "setDebug(bool)\0mxtal\0setMXtal(MolecularXtal*)\0"
    "interval\0setSuperCellUpdateInterval(int)\0"
    "steps\0setNumberOfGeometrySteps(int)\0"
    "conv\0setEnergyConvergence(double)\0"
    "cutoff\0setVDWCutoff(double)\0"
    "setElectrostaticCutoff(double)\0"
    "setCutoffUpdateInterval(int)\0"
    "updateMXtalCoords()\0updateMXtalEnergy()\0"
    "releaseMXtal()\0printSelf()\0"
};

void XtalOpt::MolecularXtalOptimizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MolecularXtalOptimizer *_t = static_cast<MolecularXtalOptimizer *>(_o);
        switch (_id) {
        case 0: _t->startingOptimization(); break;
        case 1: _t->finishedOptimization(); break;
        case 2: _t->finishedGeometryStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setDebug((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setMXtal((*reinterpret_cast< MolecularXtal*(*)>(_a[1]))); break;
        case 5: _t->setSuperCellUpdateInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setNumberOfGeometrySteps((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setEnergyConvergence((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setVDWCutoff((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->setElectrostaticCutoff((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->setCutoffUpdateInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->updateMXtalCoords(); break;
        case 12: _t->updateMXtalEnergy(); break;
        case 13: _t->releaseMXtal(); break;
        case 14: _t->printSelf(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XtalOpt::MolecularXtalOptimizer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XtalOpt::MolecularXtalOptimizer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XtalOpt__MolecularXtalOptimizer,
      qt_meta_data_XtalOpt__MolecularXtalOptimizer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XtalOpt::MolecularXtalOptimizer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XtalOpt::MolecularXtalOptimizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XtalOpt::MolecularXtalOptimizer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__MolecularXtalOptimizer))
        return static_cast<void*>(const_cast< MolecularXtalOptimizer*>(this));
    return QObject::qt_metacast(_clname);
}

int XtalOpt::MolecularXtalOptimizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void XtalOpt::MolecularXtalOptimizer::startingOptimization()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void XtalOpt::MolecularXtalOptimizer::finishedOptimization()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void XtalOpt::MolecularXtalOptimizer::finishedGeometryStep(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
