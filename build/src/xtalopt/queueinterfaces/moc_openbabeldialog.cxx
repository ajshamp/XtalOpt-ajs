/****************************************************************************
** Meta object code from reading C++ file 'openbabeldialog.h'
**
** Created: Sun Jan 20 20:23:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/xtalopt/queueinterfaces/openbabeldialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openbabeldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XtalOpt__OpenBabelQueueInterfaceConfigDialog[] = {

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
      46,   45,   45,   45, 0x0a,
      55,   45,   45,   45, 0x0a,
      64,   45,   45,   45, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XtalOpt__OpenBabelQueueInterfaceConfigDialog[] = {
    "XtalOpt::OpenBabelQueueInterfaceConfigDialog\0"
    "\0accept()\0reject()\0updateGUI()\0"
};

void XtalOpt::OpenBabelQueueInterfaceConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OpenBabelQueueInterfaceConfigDialog *_t = static_cast<OpenBabelQueueInterfaceConfigDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: _t->updateGUI(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XtalOpt::OpenBabelQueueInterfaceConfigDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XtalOpt::OpenBabelQueueInterfaceConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_XtalOpt__OpenBabelQueueInterfaceConfigDialog,
      qt_meta_data_XtalOpt__OpenBabelQueueInterfaceConfigDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XtalOpt::OpenBabelQueueInterfaceConfigDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XtalOpt::OpenBabelQueueInterfaceConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XtalOpt::OpenBabelQueueInterfaceConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XtalOpt__OpenBabelQueueInterfaceConfigDialog))
        return static_cast<void*>(const_cast< OpenBabelQueueInterfaceConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int XtalOpt::OpenBabelQueueInterfaceConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
