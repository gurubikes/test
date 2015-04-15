/****************************************************************************
** Meta object code from reading C++ file 'NCEdit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../openscam/qt/NCEdit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NCEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OpenSCAM__NCEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       4,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      43,   34,   17,   17, 0x0a,
      81,   77,   17,   17, 0x2a,
     102,   95,   17,   17, 0x0a,
     135,   95,   17,   17, 0x0a,
     171,  163,   17,   17, 0x0a,
     199,   95,   17,   17, 0x0a,
     229,  224,   17,   17, 0x0a,
     239,  224,   17,   17, 0x0a,
     251,  224,   17,   17, 0x0a,
     267,   17,   17,   17, 0x08,
     289,  282,   17,   17, 0x08,

 // properties: name, type, flags
     319,  314, 0x01095103,
     343,  314, 0x01095103,
     362,  314, 0x01095103,
     381,  314, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_OpenSCAM__NCEdit[] = {
    "OpenSCAM::NCEdit\0\0updateSidebar()\0"
    "str,sens\0mark(QString,Qt::CaseSensitivity)\0"
    "str\0mark(QString)\0enable\0"
    "setBracketsMatchingEnabled(bool)\0"
    "setCodeFoldingEnabled(bool)\0visible\0"
    "setLineNumbersVisible(bool)\0"
    "setTextWrapEnabled(bool)\0line\0fold(int)\0"
    "unfold(int)\0toggleFold(int)\0updateCursor()\0"
    "rect,d\0updateSidebar(QRect,int)\0bool\0"
    "bracketsMatchingEnabled\0codeFoldingEnabled\0"
    "lineNumbersVisible\0textWrapEnabled\0"
};

void OpenSCAM::NCEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NCEdit *_t = static_cast<NCEdit *>(_o);
        switch (_id) {
        case 0: _t->updateSidebar(); break;
        case 1: _t->mark((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 2: _t->mark((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setBracketsMatchingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setCodeFoldingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setLineNumbersVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setTextWrapEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->fold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->unfold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->toggleFold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->updateCursor(); break;
        case 11: _t->updateSidebar((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OpenSCAM::NCEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OpenSCAM::NCEdit::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_OpenSCAM__NCEdit,
      qt_meta_data_OpenSCAM__NCEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenSCAM::NCEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenSCAM::NCEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenSCAM::NCEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenSCAM__NCEdit))
        return static_cast<void*>(const_cast< NCEdit*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int OpenSCAM::NCEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isBracketsMatchingEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isCodeFoldingEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isLineNumbersVisible(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isTextWrapEnabled(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBracketsMatchingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: setCodeFoldingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: setLineNumbersVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: setTextWrapEnabled(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
