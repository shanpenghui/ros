/****************************************************************************
** Meta object code from reading C++ file 'ExportBundlerDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/rtabmap/gui/ExportBundlerDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExportBundlerDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rtabmap__ExportBundlerDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   29,   29,   29, 0x08,
      56,   29,   29,   29, 0x08,
      74,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__ExportBundlerDialog[] = {
    "rtabmap::ExportBundlerDialog\0\0"
    "configChanged()\0getPath()\0restoreDefaults()\0"
    "updateVisibility()\0"
};

void rtabmap::ExportBundlerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExportBundlerDialog *_t = static_cast<ExportBundlerDialog *>(_o);
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: _t->getPath(); break;
        case 2: _t->restoreDefaults(); break;
        case 3: _t->updateVisibility(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData rtabmap::ExportBundlerDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::ExportBundlerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_rtabmap__ExportBundlerDialog,
      qt_meta_data_rtabmap__ExportBundlerDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::ExportBundlerDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::ExportBundlerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::ExportBundlerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__ExportBundlerDialog))
        return static_cast<void*>(const_cast< ExportBundlerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int rtabmap::ExportBundlerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::ExportBundlerDialog::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
