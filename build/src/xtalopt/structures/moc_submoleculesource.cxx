/****************************************************************************
** Meta object code from reading C++ file 'submoleculesource.h'
**
** Created: Sun Jan 20 20:23:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/xtalopt/structures/submoleculesource.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'submoleculesource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XtalOpt__SubMoleculeSource[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   28,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   70,   27,   27, 0x0a,
      99,   70,   27,   27, 0x0a,
     124,  122,   27,   27, 0x0a,
     147,  122,   27,   27, 0x0a,
     168,  122,   27,   27, 0x0a,
     189,  187,   27,   27, 0x0a,
     211,   27,  206,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XtalOpt__SubMoleculeSource[] = {
    "XtalOpt::SubMoleculeSource\0\0current,total\0"
    "conformerGenerated(int,int)\0mol\0"
    "set(Avogadro::Molecule*)\0"
    "set(OpenBabel::OBMol*)\0i\0"
    "setMaxConformers(uint)\0setNumGeoSteps(uint)\0"
    "setSourceId(ulong)\0s\0setName(QString)\0"
    "uint\0findAndSetConformers()\0"
};

void XtalOpt::SubMoleculeSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SubMoleculeSource *_t = static_cast<SubMoleculeSource *>(_o);
        switch (_id) {
        case 0: _t->conformerGenerated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->set((*reinterpret_cast< Avogadro::Molecule*(*)>(_a[1]))); break;
        case 2: _t->set((*reinterpret_cast< OpenBabel::OBMol*(*)>(_a[1]))); break;
        case 3: _t->setMaxConformers((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->setNumGeoSteps((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->setSourceId((*reinterpret_cast< ulong(*)>(_a[1]))); break;
        case 6: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: { uint _r = _t->findAndSetConformers();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XtalOpt::SubMoleculeSource::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XtalOpt::SubMoleculeSource::staticMetaObject = {
    { &GlobalSearch::Structure::staticMetaObject, qt_meta_stringdata_XtalOpt__SubMoleculeSource,
      qt_meta_data_XtalOpt__SubMoleculeSource, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XtalOpt::SubMoleculeSource::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XtalOpt::SubMoleculeSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XtalOpt::SubMoleculeSource::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__SubMoleculeSource))
        return static_cast<void*>(const_cast< SubMoleculeSource*>(this));
    typedef GlobalSearch::Structure QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int XtalOpt::SubMoleculeSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef GlobalSearch::Structure QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void XtalOpt::SubMoleculeSource::conformerGenerated(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
