/****************************************************************************
** Meta object code from reading C++ file 'ProgressDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/rtabmap/gui/ProgressDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProgressDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rtabmap__ProgressDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   36,   24,   24, 0x0a,
      79,   74,   24,   24, 0x2a,
     105,   99,   24,   24, 0x0a,
     124,   24,   24,   24, 0x2a,
     140,   24,   24,   24, 0x0a,
     148,   24,   24,   24, 0x0a,
     164,   24,   24,   24, 0x08,
     178,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__ProgressDialog[] = {
    "rtabmap::ProgressDialog\0\0canceled()\0"
    "text,color\0appendText(QString,QColor)\0"
    "text\0appendText(QString)\0steps\0"
    "incrementStep(int)\0incrementStep()\0"
    "clear()\0resetProgress()\0closeDialog()\0"
    "cancel()\0"
};

void rtabmap::ProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProgressDialog *_t = static_cast<ProgressDialog *>(_o);
        switch (_id) {
        case 0: _t->canceled(); break;
        case 1: _t->appendText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 2: _t->appendText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->incrementStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->incrementStep(); break;
        case 5: _t->clear(); break;
        case 6: _t->resetProgress(); break;
        case 7: _t->closeDialog(); break;
        case 8: _t->cancel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData rtabmap::ProgressDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::ProgressDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_rtabmap__ProgressDialog,
      qt_meta_data_rtabmap__ProgressDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::ProgressDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::ProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::ProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__ProgressDialog))
        return static_cast<void*>(const_cast< ProgressDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int rtabmap::ProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::ProgressDialog::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
