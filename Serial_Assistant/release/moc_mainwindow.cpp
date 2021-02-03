/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../code/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "ReceiveDataAlready"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "curve1statechanged"
QT_MOC_LITERAL(4, 50, 1), // "n"
QT_MOC_LITERAL(5, 52, 18), // "curve2statechanged"
QT_MOC_LITERAL(6, 71, 18), // "curve3statechanged"
QT_MOC_LITERAL(7, 90, 18), // "curve4statechanged"
QT_MOC_LITERAL(8, 109, 18), // "curve5statechanged"
QT_MOC_LITERAL(9, 128, 18), // "curve6statechanged"
QT_MOC_LITERAL(10, 147, 16), // "realtimeDataSlot"
QT_MOC_LITERAL(11, 164, 9), // "curvePlot"
QT_MOC_LITERAL(12, 174, 6), // "ncurve"
QT_MOC_LITERAL(13, 181, 19), // "SpinBoxValueChanged"
QT_MOC_LITERAL(14, 201, 25), // "VerticalSliderValueChaged"
QT_MOC_LITERAL(15, 227, 12), // "SendDataTime"
QT_MOC_LITERAL(16, 240, 19) // "TimeIntervalChanged"

    },
    "MainWindow\0ReceiveDataAlready\0\0"
    "curve1statechanged\0n\0curve2statechanged\0"
    "curve3statechanged\0curve4statechanged\0"
    "curve5statechanged\0curve6statechanged\0"
    "realtimeDataSlot\0curvePlot\0ncurve\0"
    "SpinBoxValueChanged\0VerticalSliderValueChaged\0"
    "SendDataTime\0TimeIntervalChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    1,  110,    2, 0x06 /* Public */,
       3,    0,  113,    2, 0x26 /* Public | MethodCloned */,
       5,    1,  114,    2, 0x06 /* Public */,
       5,    0,  117,    2, 0x26 /* Public | MethodCloned */,
       6,    1,  118,    2, 0x06 /* Public */,
       6,    0,  121,    2, 0x26 /* Public | MethodCloned */,
       7,    1,  122,    2, 0x06 /* Public */,
       7,    0,  125,    2, 0x26 /* Public | MethodCloned */,
       8,    1,  126,    2, 0x06 /* Public */,
       8,    0,  129,    2, 0x26 /* Public | MethodCloned */,
       9,    1,  130,    2, 0x06 /* Public */,
       9,    0,  133,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  134,    2, 0x08 /* Private */,
      11,    1,  135,    2, 0x08 /* Private */,
      13,    1,  138,    2, 0x08 /* Private */,
      14,    0,  141,    2, 0x08 /* Private */,
      15,    0,  142,    2, 0x08 /* Private */,
      16,    1,  143,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReceiveDataAlready(); break;
        case 1: _t->curve1statechanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->curve1statechanged(); break;
        case 3: _t->curve2statechanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->curve2statechanged(); break;
        case 5: _t->curve3statechanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->curve3statechanged(); break;
        case 7: _t->curve4statechanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->curve4statechanged(); break;
        case 9: _t->curve5statechanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->curve5statechanged(); break;
        case 11: _t->curve6statechanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->curve6statechanged(); break;
        case 13: _t->realtimeDataSlot(); break;
        case 14: _t->curvePlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->SpinBoxValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->VerticalSliderValueChaged(); break;
        case 17: _t->SendDataTime(); break;
        case 18: _t->TimeIntervalChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::ReceiveDataAlready)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::curve1statechanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::curve2statechanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::curve3statechanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::curve4statechanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::curve5statechanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::curve6statechanged)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::ReceiveDataAlready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::curve1statechanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void MainWindow::curve2statechanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 5
void MainWindow::curve3statechanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 7
void MainWindow::curve4statechanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 9
void MainWindow::curve5statechanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 11
void MainWindow::curve6statechanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
