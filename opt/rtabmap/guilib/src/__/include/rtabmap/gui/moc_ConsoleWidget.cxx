/****************************************************************************
** Meta object code from reading C++ file 'ConsoleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/rtabmap/gui/ConsoleWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConsoleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rtabmap__ConsoleWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      61,   51,   23,   23, 0x0a,
      88,   84,   23,   23, 0x2a,
     107,   23,   23,   23, 0x08,
     122,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__ConsoleWidget[] = {
    "rtabmap::ConsoleWidget\0\0,\0"
    "msgReceived(QString,int)\0msg,level\0"
    "appendMsg(QString,int)\0msg\0"
    "appendMsg(QString)\0flushConsole()\0"
    "updateTextEditBufferSize()\0"
};

void rtabmap::ConsoleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConsoleWidget *_t = static_cast<ConsoleWidget *>(_o);
        switch (_id) {
        case 0: _t->msgReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->appendMsg((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->appendMsg((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->flushConsole(); break;
        case 4: _t->updateTextEditBufferSize(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData rtabmap::ConsoleWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::ConsoleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_rtabmap__ConsoleWidget,
      qt_meta_data_rtabmap__ConsoleWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::ConsoleWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::ConsoleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::ConsoleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__ConsoleWidget))
        return static_cast<void*>(const_cast< ConsoleWidget*>(this));
    if (!strcmp(_clname, "UEventsHandler"))
        return static_cast< UEventsHandler*>(const_cast< ConsoleWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int rtabmap::ConsoleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::ConsoleWidget::msgReceived(const QString & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
