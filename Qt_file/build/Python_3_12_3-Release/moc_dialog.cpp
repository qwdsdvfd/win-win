/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[16];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 36), // "on_verticalSliderThrust_value..."
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "value"
QT_MOC_LITERAL(4, 51, 16), // "handleSerialData"
QT_MOC_LITERAL(5, 68, 19), // "on_push_arm_clicked"
QT_MOC_LITERAL(6, 88, 22), // "on_push_disarm_clicked"
QT_MOC_LITERAL(7, 111, 24), // "on_checkBoxPitch_toggled"
QT_MOC_LITERAL(8, 136, 7), // "checked"
QT_MOC_LITERAL(9, 144, 24), // "on_btnDisableAll_clicked"
QT_MOC_LITERAL(10, 169, 20), // "on_save_para_clicked"
QT_MOC_LITERAL(11, 190, 23), // "on_btnGetParams_clicked"
QT_MOC_LITERAL(12, 214, 19), // "on_btnLogOn_clicked"
QT_MOC_LITERAL(13, 234, 20), // "on_btnLogOff_clicked"
QT_MOC_LITERAL(14, 255, 21), // "on_btnSaveLog_clicked"
QT_MOC_LITERAL(15, 277, 24) // "onPitchTelChannelToggled"

    },
    "Dialog\0on_verticalSliderThrust_valueChanged\0"
    "\0value\0handleSerialData\0on_push_arm_clicked\0"
    "on_push_disarm_clicked\0on_checkBoxPitch_toggled\0"
    "checked\0on_btnDisableAll_clicked\0"
    "on_save_para_clicked\0on_btnGetParams_clicked\0"
    "on_btnLogOn_clicked\0on_btnLogOff_clicked\0"
    "on_btnSaveLog_clicked\0onPitchTelChannelToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    1,   80,    2, 0x08 /* Private */,
       9,    0,   83,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_verticalSliderThrust_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->handleSerialData(); break;
        case 2: _t->on_push_arm_clicked(); break;
        case 3: _t->on_push_disarm_clicked(); break;
        case 4: _t->on_checkBoxPitch_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_btnDisableAll_clicked(); break;
        case 6: _t->on_save_para_clicked(); break;
        case 7: _t->on_btnGetParams_clicked(); break;
        case 8: _t->on_btnLogOn_clicked(); break;
        case 9: _t->on_btnLogOff_clicked(); break;
        case 10: _t->on_btnSaveLog_clicked(); break;
        case 11: _t->onPitchTelChannelToggled(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Dialog.data,
    qt_meta_data_Dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
