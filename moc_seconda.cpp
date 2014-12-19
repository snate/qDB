/****************************************************************************
** Meta object code from reading C++ file 'seconda.h'
**
** Created: Tue May 13 11:23:13 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "seconda.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seconda.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UiS__SearchForm[] = {

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
      17,   16,   16,   16, 0x0a,
      27,   16,   16,   16, 0x0a,
      37,   16,   16,   16, 0x0a,
      47,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UiS__SearchForm[] = {
    "UiS::SearchForm\0\0searchP()\0searchS()\0"
    "searchH()\0chiudi()\0"
};

void UiS::SearchForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SearchForm *_t = static_cast<SearchForm *>(_o);
        switch (_id) {
        case 0: _t->searchP(); break;
        case 1: _t->searchS(); break;
        case 2: _t->searchH(); break;
        case 3: _t->chiudi(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UiS::SearchForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UiS::SearchForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UiS__SearchForm,
      qt_meta_data_UiS__SearchForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UiS::SearchForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UiS::SearchForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UiS::SearchForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiS__SearchForm))
        return static_cast<void*>(const_cast< SearchForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int UiS::SearchForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
