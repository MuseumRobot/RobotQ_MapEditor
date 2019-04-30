/****************************************************************************
** Meta object code from reading C++ file 'robotqme.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../robotqme.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'robotqme.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobotQME[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      21,    9,    9,    9, 0x08,
      33,    9,    9,    9, 0x08,
      46,    9,    9,    9, 0x08,
      58,    9,    9,    9, 0x08,
      77,    9,    9,    9, 0x08,
      98,    9,    9,    9, 0x08,
     115,    9,    9,    9, 0x08,
     131,    9,    9,    9, 0x08,
     151,    9,    9,    9, 0x08,
     167,    9,    9,    9, 0x08,
     181,    9,    9,    9, 0x08,
     198,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobotQME[] = {
    "RobotQME\0\0OnBtnNew()\0OnBtnOpen()\0"
    "OnBtnClose()\0OnBtnSave()\0OnBtnSetObstacle()\0"
    "OnBtnClearObstacle()\0OnBtnSetDesert()\0"
    "OnBtnSetOcean()\0OnBtnClearTerrian()\0"
    "OnBtnSetStart()\0OnBtnSetEnd()\0"
    "OnBtnResetFlag()\0OnBtnRun()\0"
};

void RobotQME::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobotQME *_t = static_cast<RobotQME *>(_o);
        switch (_id) {
        case 0: _t->OnBtnNew(); break;
        case 1: _t->OnBtnOpen(); break;
        case 2: _t->OnBtnClose(); break;
        case 3: _t->OnBtnSave(); break;
        case 4: _t->OnBtnSetObstacle(); break;
        case 5: _t->OnBtnClearObstacle(); break;
        case 6: _t->OnBtnSetDesert(); break;
        case 7: _t->OnBtnSetOcean(); break;
        case 8: _t->OnBtnClearTerrian(); break;
        case 9: _t->OnBtnSetStart(); break;
        case 10: _t->OnBtnSetEnd(); break;
        case 11: _t->OnBtnResetFlag(); break;
        case 12: _t->OnBtnRun(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RobotQME::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobotQME::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RobotQME,
      qt_meta_data_RobotQME, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobotQME::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobotQME::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobotQME::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobotQME))
        return static_cast<void*>(const_cast< RobotQME*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int RobotQME::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
