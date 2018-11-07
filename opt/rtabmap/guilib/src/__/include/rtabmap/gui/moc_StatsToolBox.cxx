/****************************************************************************
** Meta object code from reading C++ file 'StatsToolBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/rtabmap/gui/StatsToolBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StatsToolBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rtabmap__StatItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      39,   37,   18,   18, 0x05,
      63,   37,   18,   18, 0x05,
     116,   37,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     160,  155,   18,   18, 0x0a,
     185,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__StatItem[] = {
    "rtabmap::StatItem\0\0valueAdded(float)\0"
    ",\0valueAdded(float,float)\0"
    "valuesChanged(std::vector<float>,std::vector<float>)\0"
    "plotRequested(const StatItem*,QString)\0"
    "menu\0updateMenu(const QMenu*)\0"
    "preparePlotRequest()\0"
};

void rtabmap::StatItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StatItem *_t = static_cast<StatItem *>(_o);
        switch (_id) {
        case 0: _t->valueAdded((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->valueAdded((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->valuesChanged((*reinterpret_cast< const std::vector<float>(*)>(_a[1])),(*reinterpret_cast< const std::vector<float>(*)>(_a[2]))); break;
        case 3: _t->plotRequested((*reinterpret_cast< const StatItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->updateMenu((*reinterpret_cast< const QMenu*(*)>(_a[1]))); break;
        case 5: _t->preparePlotRequest(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData rtabmap::StatItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::StatItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_rtabmap__StatItem,
      qt_meta_data_rtabmap__StatItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::StatItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::StatItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::StatItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__StatItem))
        return static_cast<void*>(const_cast< StatItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int rtabmap::StatItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::StatItem::valueAdded(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rtabmap::StatItem::valueAdded(float _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void rtabmap::StatItem::valuesChanged(const std::vector<float> & _t1, const std::vector<float> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void rtabmap::StatItem::plotRequested(const StatItem * _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_rtabmap__StatsToolBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      49,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      92,   71,   22,   22, 0x0a,
     140,  117,   22,   22, 0x0a,
     196,  171,   22,   22, 0x0a,
     233,  171,   22,   22, 0x0a,
     296,   22,   22,   22, 0x0a,
     318,  304,   22,   22, 0x08,
     353,  348,   22,   22, 0x28,
     379,  375,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__StatsToolBox[] = {
    "rtabmap::StatsToolBox\0\0menuChanged(const QMenu*)\0"
    "figuresSetupChanged()\0statFullName,cacheOn\0"
    "updateStat(QString,bool)\0"
    "statFullName,y,cacheOn\0"
    "updateStat(QString,float,bool)\0"
    "statFullName,x,y,cacheOn\0"
    "updateStat(QString,float,float,bool)\0"
    "updateStat(QString,std::vector<float>,std::vector<float>,bool)\0"
    "clear()\0stat,plotName\0"
    "plot(const StatItem*,QString)\0stat\0"
    "plot(const StatItem*)\0obj\0"
    "figureDeleted(QObject*)\0"
};

void rtabmap::StatsToolBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StatsToolBox *_t = static_cast<StatsToolBox *>(_o);
        switch (_id) {
        case 0: _t->menuChanged((*reinterpret_cast< const QMenu*(*)>(_a[1]))); break;
        case 1: _t->figuresSetupChanged(); break;
        case 2: _t->updateStat((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->updateStat((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->updateStat((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 5: _t->updateStat((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const std::vector<float>(*)>(_a[2])),(*reinterpret_cast< const std::vector<float>(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 6: _t->clear(); break;
        case 7: _t->plot((*reinterpret_cast< const StatItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->plot((*reinterpret_cast< const StatItem*(*)>(_a[1]))); break;
        case 9: _t->figureDeleted((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData rtabmap::StatsToolBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::StatsToolBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_rtabmap__StatsToolBox,
      qt_meta_data_rtabmap__StatsToolBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::StatsToolBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::StatsToolBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::StatsToolBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__StatsToolBox))
        return static_cast<void*>(const_cast< StatsToolBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int rtabmap::StatsToolBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::StatsToolBox::menuChanged(const QMenu * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rtabmap::StatsToolBox::figuresSetupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
