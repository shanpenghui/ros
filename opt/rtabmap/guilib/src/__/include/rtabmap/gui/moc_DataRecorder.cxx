/****************************************************************************
** Meta object code from reading C++ file 'DataRecorder.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/rtabmap/gui/DataRecorder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataRecorder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rtabmap__DataRecorder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   23,   22,   22, 0x0a,
     100,   90,   22,   22, 0x2a,
     144,  139,   22,   22, 0x2a,
     185,  173,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__DataRecorder[] = {
    "rtabmap::DataRecorder\0\0data,pose,infMatrix\0"
    "addData(rtabmap::SensorData,Transform,cv::Mat)\0"
    "data,pose\0addData(rtabmap::SensorData,Transform)\0"
    "data\0addData(rtabmap::SensorData)\0"
    "image,depth\0showImage(cv::Mat,cv::Mat)\0"
};

void rtabmap::DataRecorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DataRecorder *_t = static_cast<DataRecorder *>(_o);
        switch (_id) {
        case 0: _t->addData((*reinterpret_cast< const rtabmap::SensorData(*)>(_a[1])),(*reinterpret_cast< const Transform(*)>(_a[2])),(*reinterpret_cast< const cv::Mat(*)>(_a[3]))); break;
        case 1: _t->addData((*reinterpret_cast< const rtabmap::SensorData(*)>(_a[1])),(*reinterpret_cast< const Transform(*)>(_a[2]))); break;
        case 2: _t->addData((*reinterpret_cast< const rtabmap::SensorData(*)>(_a[1]))); break;
        case 3: _t->showImage((*reinterpret_cast< const cv::Mat(*)>(_a[1])),(*reinterpret_cast< const cv::Mat(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData rtabmap::DataRecorder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::DataRecorder::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_rtabmap__DataRecorder,
      qt_meta_data_rtabmap__DataRecorder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::DataRecorder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::DataRecorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::DataRecorder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__DataRecorder))
        return static_cast<void*>(const_cast< DataRecorder*>(this));
    if (!strcmp(_clname, "UEventsHandler"))
        return static_cast< UEventsHandler*>(const_cast< DataRecorder*>(this));
    return QWidget::qt_metacast(_clname);
}

int rtabmap::DataRecorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
