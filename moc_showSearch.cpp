/****************************************************************************
** Meta object code from reading C++ file 'showSearch.h'
**
** Created: Tue May 13 11:23:13 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "showSearch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'showSearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_showSearch[] = {

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
      12,   11,   11,   11, 0x0a,
      22,   11,   11,   11, 0x0a,
      29,   11,   11,   11, 0x0a,
      40,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_showSearch[] = {
    "showSearch\0\0refresh()\0next()\0previous()\0"
    "chiudi()\0"
};

void showSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        showSearch *_t = static_cast<showSearch *>(_o);
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->next(); break;
        case 2: _t->previous(); break;
        case 3: _t->chiudi(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData showSearch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject showSearch::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_showSearch,
      qt_meta_data_showSearch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &showSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *showSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *showSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_showSearch))
        return static_cast<void*>(const_cast< showSearch*>(this));
    return QDialog::qt_metacast(_clname);
}

int showSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
