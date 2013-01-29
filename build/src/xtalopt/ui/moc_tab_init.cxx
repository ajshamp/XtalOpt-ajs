/****************************************************************************
** Meta object code from reading C++ file 'tab_init.h'
**
** Created: Sun Jan 20 20:23:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/xtalopt/ui/tab_init.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab_init.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XtalOpt__TabInit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      37,   28,   17,   17, 0x0a,
      59,   17,   17,   17, 0x2a,
      74,   28,   17,   17, 0x0a,
      97,   17,   17,   17, 0x2a,
     113,   17,   17,   17, 0x0a,
     129,  125,   17,   17, 0x0a,
     153,   17,   17,   17, 0x0a,
     173,   17,   17,   17, 0x0a,
     193,   17,   17,   17, 0x0a,
     218,   17,   17,   17, 0x0a,
     237,   17,   17,   17, 0x0a,
     254,   17,   17,   17, 0x0a,
     269,   17,   17,   17, 0x0a,
     286,   17,   17,   17, 0x0a,
     306,   17,   17,   17, 0x0a,
     336,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XtalOpt__TabInit[] = {
    "XtalOpt::TabInit\0\0lockGUI()\0filename\0"
    "readSettings(QString)\0readSettings()\0"
    "writeSettings(QString)\0writeSettings()\0"
    "updateGUI()\0str\0getComposition(QString)\0"
    "updateComposition()\0updateCrystalType()\0"
    "updateCompositionTable()\0updateDimensions()\0"
    "updateMinRadii()\0updateTables()\0"
    "addSubMolecule()\0removeSubMolecule()\0"
    "updateMXtalCompositionTable()\0"
    "updateCompFromMComp()\0"
};

void XtalOpt::TabInit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabInit *_t = static_cast<TabInit *>(_o);
        switch (_id) {
        case 0: _t->lockGUI(); break;
        case 1: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->readSettings(); break;
        case 3: _t->writeSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->writeSettings(); break;
        case 5: _t->updateGUI(); break;
        case 6: _t->getComposition((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->updateComposition(); break;
        case 8: _t->updateCrystalType(); break;
        case 9: _t->updateCompositionTable(); break;
        case 10: _t->updateDimensions(); break;
        case 11: _t->updateMinRadii(); break;
        case 12: _t->updateTables(); break;
        case 13: _t->addSubMolecule(); break;
        case 14: _t->removeSubMolecule(); break;
        case 15: _t->updateMXtalCompositionTable(); break;
        case 16: _t->updateCompFromMComp(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XtalOpt::TabInit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XtalOpt::TabInit::staticMetaObject = {
    { &GlobalSearch::AbstractTab::staticMetaObject, qt_meta_stringdata_XtalOpt__TabInit,
      qt_meta_data_XtalOpt__TabInit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XtalOpt::TabInit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XtalOpt::TabInit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XtalOpt::TabInit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__TabInit))
        return static_cast<void*>(const_cast< TabInit*>(this));
    typedef GlobalSearch::AbstractTab QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int XtalOpt::TabInit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef GlobalSearch::AbstractTab QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
