/****************************************************************************
** Meta object code from reading C++ file 'DatabaseViewer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/rtabmap/gui/DatabaseViewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rtabmap__DatabaseViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      41,   24,   24,   24, 0x08,
      66,   24,   24,   24, 0x08,
      83,   24,   24,   24, 0x08,
     103,   24,   98,   24, 0x08,
     119,   24,   24,   24, 0x08,
     137,   24,   24,   24, 0x08,
     156,   24,   24,   24, 0x08,
     178,   24,   24,   24, 0x08,
     198,   24,   24,   24, 0x08,
     217,   24,   24,   24, 0x08,
     234,   24,   24,   24, 0x08,
     250,   24,   24,   24, 0x08,
     269,   24,   24,   24, 0x08,
     283,   24,   24,   24, 0x08,
     303,   24,   24,   24, 0x08,
     325,   24,   24,   24, 0x08,
     347,   24,   24,   24, 0x08,
     364,   24,   24,   24, 0x08,
     380,   24,   24,   24, 0x08,
     397,   24,   24,   24, 0x08,
     419,   24,   24,   24, 0x08,
     438,   24,   24,   24, 0x08,
     456,   24,   24,   24, 0x08,
     473,   24,   24,   24, 0x08,
     490,   24,   24,   24, 0x08,
     506,   24,   24,   24, 0x08,
     522,   24,   24,   24, 0x08,
     543,   24,   24,   24, 0x08,
     565,   24,   24,   24, 0x08,
     594,   24,   24,   24, 0x08,
     606,   24,   24,   24, 0x08,
     622,   24,   24,   24, 0x08,
     647,   24,   24,   24, 0x08,
     678,   24,   24,   24, 0x08,
     712,   24,   24,   24, 0x08,
     737,   24,   24,   24, 0x08,
     765,   24,   24,   24, 0x08,
     783,   24,   24,   24, 0x08,
     808,   24,   24,   24, 0x08,
     833,   24,   24,   24, 0x08,
     851,   24,   24,   24, 0x08,
     869,   24,   24,   24, 0x08,
     884,   24,   24,   24, 0x08,
     916,   24,   24,   24, 0x08,
     944,   24,   24,   24, 0x08,
     978,   24,   24,   24, 0x08,
     991,   24,   24,   24, 0x08,
    1011,   24,   24,   24, 0x08,
    1029,   24,   24,   24, 0x08,
    1048,   24,   24,   24, 0x08,
    1064,   24,   24,   24, 0x08,
    1082,   24,   24,   24, 0x08,
    1101,   24,   24,   24, 0x08,
    1124,   24,   24,   24, 0x08,
    1144,   24,   24,   24, 0x08,
    1159,   24,   24,   24, 0x08,
    1205, 1196,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__DatabaseViewer[] = {
    "rtabmap::DatabaseViewer\0\0writeSettings()\0"
    "restoreDefaultSettings()\0configModified()\0"
    "openDatabase()\0bool\0closeDatabase()\0"
    "recoverDatabase()\0updateStatistics()\0"
    "selectObstacleColor()\0selectGroundColor()\0"
    "selectEmptyColor()\0editDepthImage()\0"
    "generateGraph()\0exportSaved2DMap()\0"
    "import2DMap()\0viewOptimizedMesh()\0"
    "exportOptimizedMesh()\0updateOptimizedMesh()\0"
    "exportDatabase()\0extractImages()\0"
    "exportPosesRaw()\0exportPosesRGBDSLAM()\0"
    "exportPosesKITTI()\0exportPosesTORO()\0"
    "exportPosesG2O()\0exportPosesKML()\0"
    "exportGPS_TXT()\0exportGPS_KML()\0"
    "generateLocalGraph()\0regenerateLocalMaps()\0"
    "regenerateCurrentLocalMaps()\0view3DMap()\0"
    "generate3DMap()\0detectMoreLoopClosures()\0"
    "updateAllNeighborCovariances()\0"
    "updateAllLoopClosureCovariances()\0"
    "refineAllNeighborLinks()\0"
    "refineAllLoopClosureLinks()\0"
    "resetAllChanges()\0sliderAValueChanged(int)\0"
    "sliderBValueChanged(int)\0sliderAMoved(int)\0"
    "sliderBMoved(int)\0update3dView()\0"
    "sliderNeighborValueChanged(int)\0"
    "sliderLoopValueChanged(int)\0"
    "sliderIterationsValueChanged(int)\0"
    "updateGrid()\0updateOctomapView()\0"
    "updateGraphView()\0refineConstraint()\0"
    "addConstraint()\0resetConstraint()\0"
    "rejectConstraint()\0updateConstraintView()\0"
    "updateLoggerLevel()\0updateStereo()\0"
    "notifyParametersChanged(QStringList)\0"
    "vertical\0setupMainLayout(bool)\0"
};

void rtabmap::DatabaseViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DatabaseViewer *_t = static_cast<DatabaseViewer *>(_o);
        switch (_id) {
        case 0: _t->writeSettings(); break;
        case 1: _t->restoreDefaultSettings(); break;
        case 2: _t->configModified(); break;
        case 3: _t->openDatabase(); break;
        case 4: { bool _r = _t->closeDatabase();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->recoverDatabase(); break;
        case 6: _t->updateStatistics(); break;
        case 7: _t->selectObstacleColor(); break;
        case 8: _t->selectGroundColor(); break;
        case 9: _t->selectEmptyColor(); break;
        case 10: _t->editDepthImage(); break;
        case 11: _t->generateGraph(); break;
        case 12: _t->exportSaved2DMap(); break;
        case 13: _t->import2DMap(); break;
        case 14: _t->viewOptimizedMesh(); break;
        case 15: _t->exportOptimizedMesh(); break;
        case 16: _t->updateOptimizedMesh(); break;
        case 17: _t->exportDatabase(); break;
        case 18: _t->extractImages(); break;
        case 19: _t->exportPosesRaw(); break;
        case 20: _t->exportPosesRGBDSLAM(); break;
        case 21: _t->exportPosesKITTI(); break;
        case 22: _t->exportPosesTORO(); break;
        case 23: _t->exportPosesG2O(); break;
        case 24: _t->exportPosesKML(); break;
        case 25: _t->exportGPS_TXT(); break;
        case 26: _t->exportGPS_KML(); break;
        case 27: _t->generateLocalGraph(); break;
        case 28: _t->regenerateLocalMaps(); break;
        case 29: _t->regenerateCurrentLocalMaps(); break;
        case 30: _t->view3DMap(); break;
        case 31: _t->generate3DMap(); break;
        case 32: _t->detectMoreLoopClosures(); break;
        case 33: _t->updateAllNeighborCovariances(); break;
        case 34: _t->updateAllLoopClosureCovariances(); break;
        case 35: _t->refineAllNeighborLinks(); break;
        case 36: _t->refineAllLoopClosureLinks(); break;
        case 37: _t->resetAllChanges(); break;
        case 38: _t->sliderAValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->sliderBValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->sliderAMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->sliderBMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->update3dView(); break;
        case 43: _t->sliderNeighborValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->sliderLoopValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->sliderIterationsValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->updateGrid(); break;
        case 47: _t->updateOctomapView(); break;
        case 48: _t->updateGraphView(); break;
        case 49: _t->refineConstraint(); break;
        case 50: _t->addConstraint(); break;
        case 51: _t->resetConstraint(); break;
        case 52: _t->rejectConstraint(); break;
        case 53: _t->updateConstraintView(); break;
        case 54: _t->updateLoggerLevel(); break;
        case 55: _t->updateStereo(); break;
        case 56: _t->notifyParametersChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 57: _t->setupMainLayout((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData rtabmap::DatabaseViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::DatabaseViewer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_rtabmap__DatabaseViewer,
      qt_meta_data_rtabmap__DatabaseViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::DatabaseViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::DatabaseViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::DatabaseViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__DatabaseViewer))
        return static_cast<void*>(const_cast< DatabaseViewer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int rtabmap::DatabaseViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
