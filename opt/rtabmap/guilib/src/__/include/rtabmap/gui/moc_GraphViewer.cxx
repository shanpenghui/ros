/****************************************************************************
** Meta object code from reading C++ file 'GraphViewer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/rtabmap/gui/GraphViewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rtabmap__GraphViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      38,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__GraphViewer[] = {
    "rtabmap::GraphViewer\0\0configChanged()\0"
    "mapShownRequested()\0restoreDefaults()\0"
};

void rtabmap::GraphViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GraphViewer *_t = static_cast<GraphViewer *>(_o);
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: _t->mapShownRequested(); break;
        case 2: _t->restoreDefaults(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData rtabmap::GraphViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::GraphViewer::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_rtabmap__GraphViewer,
      qt_meta_data_rtabmap__GraphViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::GraphViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::GraphViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::GraphViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__GraphViewer))
        return static_cast<void*>(const_cast< GraphViewer*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int rtabmap::GraphViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::GraphViewer::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void rtabmap::GraphViewer::mapShownRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
