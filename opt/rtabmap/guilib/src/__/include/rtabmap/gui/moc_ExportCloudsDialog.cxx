/****************************************************************************
** Meta object code from reading C++ file 'ExportCloudsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/rtabmap/gui/ExportCloudsDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExportCloudsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rtabmap__ExportCloudsDialog[] = {

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
      29,   28,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   28,   28,   28, 0x0a,
      63,   28,   28,   28, 0x08,
      78,   28,   28,   28, 0x08,
      93,   28,   28,   28, 0x08,
     122,   28,   28,   28, 0x08,
     146,   28,   28,   28, 0x08,
     171,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__ExportCloudsDialog[] = {
    "rtabmap::ExportCloudsDialog\0\0"
    "configChanged()\0restoreDefaults()\0"
    "loadSettings()\0saveSettings()\0"
    "updateReconstructionFlavor()\0"
    "selectDistortionModel()\0"
    "updateMLSGrpVisibility()\0cancel()\0"
};

void rtabmap::ExportCloudsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExportCloudsDialog *_t = static_cast<ExportCloudsDialog *>(_o);
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: _t->restoreDefaults(); break;
        case 2: _t->loadSettings(); break;
        case 3: _t->saveSettings(); break;
        case 4: _t->updateReconstructionFlavor(); break;
        case 5: _t->selectDistortionModel(); break;
        case 6: _t->updateMLSGrpVisibility(); break;
        case 7: _t->cancel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData rtabmap::ExportCloudsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::ExportCloudsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_rtabmap__ExportCloudsDialog,
      qt_meta_data_rtabmap__ExportCloudsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::ExportCloudsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::ExportCloudsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::ExportCloudsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__ExportCloudsDialog))
        return static_cast<void*>(const_cast< ExportCloudsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int rtabmap::ExportCloudsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void rtabmap::ExportCloudsDialog::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
