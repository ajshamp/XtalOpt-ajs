/****************************************************************************
** Meta object code from reading C++ file 'submolecule.h'
**
** Created: Sun Jan 20 20:23:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/xtalopt/structures/submolecule.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'submolecule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XtalOpt__SubMolecule[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   22,   21,   21, 0x0a,
      70,   56,   21,   21, 0x0a,
     113,  109,   21,   21, 0x0a,
     150,  139,   21,   21, 0x0a,
     181,  139,   21,   21, 0x0a,
     239,  212,   21,   21, 0x0a,
     281,  275,   21,   21, 0x0a,
     308,  275,   21,   21, 0x0a,
     341,  335,   21,   21, 0x0a,
     373,  275,   21,   21, 0x0a,
     404,  275,   21,   21, 0x0a,
     435,  335,   21,   21, 0x0a,
     490,  471,   21,   21, 0x0a,
     574,  559,   21,   21, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_XtalOpt__SubMolecule[] = {
    "XtalOpt::SubMolecule\0\0newPos\0"
    "setCenter(Eigen::Vector3d)\0normal,farvec\0"
    "align(Eigen::Vector3d,Eigen::Vector3d)\0"
    "rot\0rotate(Eigen::AngleAxisd)\0angle,axis\0"
    "rotate(double,Eigen::Vector3d)\0"
    "rotate(double,const double[3])\0"
    "angle,axis_x,axis_y,axis_z\0"
    "rotate(double,double,double,double)\0"
    "trans\0translate(Eigen::Vector3d)\0"
    "translate(const double[3])\0x,y,z\0"
    "translate(double,double,double)\0"
    "translateFrac(Eigen::Vector3d)\0"
    "translateFrac(const double[3])\0"
    "translateFrac(double,double,double)\0"
    "rowVectors,ref,tol\0"
    "assertCoherentBondLengths(Eigen::Matrix3d,const SubMolecule*,double)\0"
    "rowVectors,ref\0"
    "assertCoherentBondLengths(Eigen::Matrix3d,const SubMolecule*)\0"
};

void XtalOpt::SubMolecule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SubMolecule *_t = static_cast<SubMolecule *>(_o);
        switch (_id) {
        case 0: _t->setCenter((*reinterpret_cast< const Eigen::Vector3d(*)>(_a[1]))); break;
        case 1: _t->align((*reinterpret_cast< const Eigen::Vector3d(*)>(_a[1])),(*reinterpret_cast< const Eigen::Vector3d(*)>(_a[2]))); break;
        case 2: _t->rotate((*reinterpret_cast< const Eigen::AngleAxisd(*)>(_a[1]))); break;
        case 3: _t->rotate((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const Eigen::Vector3d(*)>(_a[2]))); break;
        case 4: _t->rotate((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const double(*)[3]>(_a[2]))); break;
        case 5: _t->rotate((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 6: _t->translate((*reinterpret_cast< const Eigen::Vector3d(*)>(_a[1]))); break;
        case 7: _t->translate((*reinterpret_cast< const double(*)[3]>(_a[1]))); break;
        case 8: _t->translate((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 9: _t->translateFrac((*reinterpret_cast< const Eigen::Vector3d(*)>(_a[1]))); break;
        case 10: _t->translateFrac((*reinterpret_cast< const double(*)[3]>(_a[1]))); break;
        case 11: _t->translateFrac((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 12: _t->assertCoherentBondLengths((*reinterpret_cast< const Eigen::Matrix3d(*)>(_a[1])),(*reinterpret_cast< const SubMolecule*(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 13: _t->assertCoherentBondLengths((*reinterpret_cast< const Eigen::Matrix3d(*)>(_a[1])),(*reinterpret_cast< const SubMolecule*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XtalOpt::SubMolecule::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XtalOpt::SubMolecule::staticMetaObject = {
    { &Avogadro::Primitive::staticMetaObject, qt_meta_stringdata_XtalOpt__SubMolecule,
      qt_meta_data_XtalOpt__SubMolecule, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XtalOpt::SubMolecule::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XtalOpt::SubMolecule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XtalOpt::SubMolecule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__SubMolecule))
        return static_cast<void*>(const_cast< SubMolecule*>(this));
    typedef Avogadro::Primitive QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int XtalOpt::SubMolecule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Avogadro::Primitive QMocSuperClass;
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
QT_END_MOC_NAMESPACE
