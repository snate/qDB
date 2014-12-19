/****************************************************************************
** Meta object code from reading C++ file 'controller.h'
**
** Created: Tue May 13 11:23:11 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "controller.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Controller[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      21,   11,   11,   11, 0x0a,
      31,   11,   11,   11, 0x0a,
      42,   11,   11,   11, 0x0a,
      57,   52,   11,   11, 0x0a,
      69,   11,   11,   11, 0x0a,
      79,   11,   11,   11, 0x0a,
      86,   11,   11,   11, 0x0a,
      97,   11,   11,   11, 0x0a,
     104,   11,   11,   11, 0x0a,
     113,   11,   11,   11, 0x0a,
     120,   11,   11,   11, 0x0a,
     127,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Controller[] = {
    "Controller\0\0chiudi()\0insProp()\0"
    "insShare()\0insHard()\0page\0bleach(int)\0"
    "refresh()\0next()\0previous()\0edit()\0"
    "remove()\0sort()\0find()\0esci()\0"
};

void Controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Controller *_t = static_cast<Controller *>(_o);
        switch (_id) {
        case 0: _t->chiudi(); break;
        case 1: _t->insProp(); break;
        case 2: _t->insShare(); break;
        case 3: _t->insHard(); break;
        case 4: _t->bleach((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->refresh(); break;
        case 6: _t->next(); break;
        case 7: _t->previous(); break;
        case 8: _t->edit(); break;
        case 9: _t->remove(); break;
        case 10: _t->sort(); break;
        case 11: _t->find(); break;
        case 12: _t->esci(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Controller::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Controller::staticMetaObject = {
    { &Form::staticMetaObject, qt_meta_stringdata_Controller,
      qt_meta_data_Controller, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Controller::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Controller::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Controller))
        return static_cast<void*>(const_cast< Controller*>(this));
    return Form::qt_metacast(_clname);
}

int Controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Form::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Controller::chiudi()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
