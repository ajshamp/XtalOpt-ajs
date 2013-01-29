/****************************************************************************
** Meta object code from reading C++ file 'submoleculeranker.h'
**
** Created: Sun Jan 20 20:23:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/xtalopt/submoleculeranker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'submoleculeranker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XtalOpt__SubMoleculeRanker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   28,   27,   27, 0x0a,
      56,   50,   45,   27, 0x0a,
      81,   27,   27,   27, 0x0a,
     105,   98,   27,   27, 0x0a,
     147,  140,   27,   27, 0x0a,
     168,  140,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XtalOpt__SubMoleculeRanker[] = {
    "XtalOpt::SubMoleculeRanker\0\0b\0"
    "setDebug(bool)\0bool\0mxtal\0"
    "setMXtal(MolecularXtal*)\0updateGeometry()\0"
    "subMol\0updateGeometry(const SubMolecule*)\0"
    "cutoff\0setVDWCutoff(double)\0"
    "setElectrostaticCutoff(double)\0"
};

void XtalOpt::SubMoleculeRanker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SubMoleculeRanker *_t = static_cast<SubMoleculeRanker *>(_o);
        switch (_id) {
        case 0: _t->setDebug((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->setMXtal((*reinterpret_cast< MolecularXtal*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->updateGeometry(); break;
        case 3: _t->updateGeometry((*reinterpret_cast< const SubMolecule*(*)>(_a[1]))); break;
        case 4: _t->setVDWCutoff((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setElectrostaticCutoff((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XtalOpt::SubMoleculeRanker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XtalOpt::SubMoleculeRanker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XtalOpt__SubMoleculeRanker,
      qt_meta_data_XtalOpt__SubMoleculeRanker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XtalOpt::SubMoleculeRanker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XtalOpt::SubMoleculeRanker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XtalOpt::SubMoleculeRanker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__SubMoleculeRanker))
        return static_cast<void*>(const_cast< SubMoleculeRanker*>(this));
    return QObject::qt_metacast(_clname);
}

int XtalOpt::SubMoleculeRanker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
