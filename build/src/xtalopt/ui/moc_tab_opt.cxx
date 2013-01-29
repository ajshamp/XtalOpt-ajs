/****************************************************************************
** Meta object code from reading C++ file 'tab_opt.h'
**
** Created: Sun Jan 20 20:23:23 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/xtalopt/ui/tab_opt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab_opt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XtalOpt__TabOpt[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      36,   27,   16,   16, 0x0a,
      58,   16,   16,   16, 0x2a,
      73,   27,   16,   16, 0x0a,
      96,   16,   16,   16, 0x2a,
     112,   16,   16,   16, 0x0a,
     124,   16,   16,   16, 0x0a,
     145,   16,   16,   16, 0x0a,
     171,   16,   16,   16, 0x0a,
     206,  201,   16,   16, 0x0a,
     232,   16,   16,   16, 0x2a,
     242,   16,   16,   16, 0x0a,
     255,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XtalOpt__TabOpt[] = {
    "XtalOpt::TabOpt\0\0lockGUI()\0filename\0"
    "readSettings(QString)\0readSettings()\0"
    "writeSettings(QString)\0writeSettings()\0"
    "updateGUI()\0updateSearchParams()\0"
    "updateIonicSearchParams()\0"
    "updateMolecularSearchParams()\0item\0"
    "addSeed(QListWidgetItem*)\0addSeed()\0"
    "removeSeed()\0updateSeeds()\0"
};

void XtalOpt::TabOpt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabOpt *_t = static_cast<TabOpt *>(_o);
        switch (_id) {
        case 0: _t->lockGUI(); break;
        case 1: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->readSettings(); break;
        case 3: _t->writeSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->writeSettings(); break;
        case 5: _t->updateGUI(); break;
        case 6: _t->updateSearchParams(); break;
        case 7: _t->updateIonicSearchParams(); break;
        case 8: _t->updateMolecularSearchParams(); break;
        case 9: _t->addSeed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->addSeed(); break;
        case 11: _t->removeSeed(); break;
        case 12: _t->updateSeeds(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XtalOpt::TabOpt::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XtalOpt::TabOpt::staticMetaObject = {
    { &GlobalSearch::AbstractTab::staticMetaObject, qt_meta_stringdata_XtalOpt__TabOpt,
      qt_meta_data_XtalOpt__TabOpt, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XtalOpt::TabOpt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XtalOpt::TabOpt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XtalOpt::TabOpt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__TabOpt))
        return static_cast<void*>(const_cast< TabOpt*>(this));
    typedef GlobalSearch::AbstractTab QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int XtalOpt::TabOpt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef GlobalSearch::AbstractTab QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
