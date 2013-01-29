/****************************************************************************
** Meta object code from reading C++ file 'tab_edit.h'
**
** Created: Sun Jan 20 20:23:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/xtalopt/ui/tab_edit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab_edit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XtalOpt__TabEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      39,   30,   17,   17, 0x0a,
      61,   17,   17,   17, 0x2a,
      76,   30,   17,   17, 0x0a,
      99,   17,   17,   17, 0x2a,
     115,   17,   17,   17, 0x0a,
     134,   17,   17,   17, 0x0a,
     150,   17,   17,   17, 0x0a,
     175,  173,   17,   17, 0x0a,
     200,   17,   17,   17, 0x0a,
     239,   17,  234,   17, 0x09,
     271,  266,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_XtalOpt__TabEdit[] = {
    "XtalOpt::TabEdit\0\0updateGUI()\0filename\0"
    "readSettings(QString)\0readSettings()\0"
    "writeSettings(QString)\0writeSettings()\0"
    "updateEditWidget()\0appendOptStep()\0"
    "removeCurrentOptStep()\0b\0"
    "setPreoptimization(bool)\0"
    "showPreoptimizationConfigDialog()\0"
    "bool\0generateVASP_POTCAR_info()\0item\0"
    "changePOTCAR(QListWidgetItem*)\0"
};

void XtalOpt::TabEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabEdit *_t = static_cast<TabEdit *>(_o);
        switch (_id) {
        case 0: _t->updateGUI(); break;
        case 1: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->readSettings(); break;
        case 3: _t->writeSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->writeSettings(); break;
        case 5: _t->updateEditWidget(); break;
        case 6: _t->appendOptStep(); break;
        case 7: _t->removeCurrentOptStep(); break;
        case 8: _t->setPreoptimization((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->showPreoptimizationConfigDialog(); break;
        case 10: { bool _r = _t->generateVASP_POTCAR_info();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->changePOTCAR((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XtalOpt::TabEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XtalOpt::TabEdit::staticMetaObject = {
    { &GlobalSearch::DefaultEditTab::staticMetaObject, qt_meta_stringdata_XtalOpt__TabEdit,
      qt_meta_data_XtalOpt__TabEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XtalOpt::TabEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XtalOpt::TabEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XtalOpt::TabEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__TabEdit))
        return static_cast<void*>(const_cast< TabEdit*>(this));
    typedef GlobalSearch::DefaultEditTab QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int XtalOpt::TabEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef GlobalSearch::DefaultEditTab QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
