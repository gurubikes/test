/****************************************************************************
** Meta object code from reading C++ file 'FileTabManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../openscam/qt/FileTabManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileTabManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OpenSCAM__FileTabManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   26,   25,   25, 0x09,
      63,   25,   25,   25, 0x09,
      89,   25,   25,   25, 0x09,
     115,   25,   25,   25, 0x09,
     140,   25,   25,   25, 0x09,
     166,   25,   25,   25, 0x09,
     193,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_OpenSCAM__FileTabManager[] = {
    "OpenSCAM::FileTabManager\0\0changed\0"
    "on_modificationChanged(bool)\0"
    "on_actionUndo_triggered()\0"
    "on_actionRedo_triggered()\0"
    "on_actionCut_triggered()\0"
    "on_actionCopy_triggered()\0"
    "on_actionPaste_triggered()\0"
    "on_actionSelectAll_triggered()\0"
};

void OpenSCAM::FileTabManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileTabManager *_t = static_cast<FileTabManager *>(_o);
        switch (_id) {
        case 0: _t->on_modificationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_actionUndo_triggered(); break;
        case 2: _t->on_actionRedo_triggered(); break;
        case 3: _t->on_actionCut_triggered(); break;
        case 4: _t->on_actionCopy_triggered(); break;
        case 5: _t->on_actionPaste_triggered(); break;
        case 6: _t->on_actionSelectAll_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OpenSCAM::FileTabManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OpenSCAM::FileTabManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OpenSCAM__FileTabManager,
      qt_meta_data_OpenSCAM__FileTabManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenSCAM::FileTabManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenSCAM::FileTabManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenSCAM::FileTabManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenSCAM__FileTabManager))
        return static_cast<void*>(const_cast< FileTabManager*>(this));
    return QObject::qt_metacast(_clname);
}

int OpenSCAM::FileTabManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
