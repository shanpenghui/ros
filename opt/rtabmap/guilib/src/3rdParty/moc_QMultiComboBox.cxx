/****************************************************************************
** Meta object code from reading C++ file 'QMultiComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QMultiComboBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QMultiComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMultiComboBox[] = {

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
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   30,   15,   15, 0x0a,
      75,   68,   15,   15, 0x0a,
     114,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QMultiComboBox[] = {
    "QMultiComboBox\0\0itemChanged()\0item\0"
    "scanItemSelect(QListWidgetItem*)\0"
    "option\0initStyleOption(QStyleOptionComboBox*)\0"
    "clear()\0"
};

void QMultiComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QMultiComboBox *_t = static_cast<QMultiComboBox *>(_o);
        switch (_id) {
        case 0: _t->itemChanged(); break;
        case 1: _t->scanItemSelect((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->initStyleOption((*reinterpret_cast< QStyleOptionComboBox*(*)>(_a[1]))); break;
        case 3: _t->clear(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QMultiComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QMultiComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_QMultiComboBox,
      qt_meta_data_QMultiComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QMultiComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QMultiComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QMultiComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMultiComboBox))
        return static_cast<void*>(const_cast< QMultiComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int QMultiComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
void QMultiComboBox::itemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
