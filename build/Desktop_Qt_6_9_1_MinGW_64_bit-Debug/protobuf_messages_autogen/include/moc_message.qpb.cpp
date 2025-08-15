/****************************************************************************
** Meta object code from reading C++ file 'message.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../message.qpb.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'message.qpb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN4chat5LoginE_t {};
} // unnamed namespace

template <> constexpr inline auto chat::Login::qt_create_metaobjectdata<qt_meta_tag_ZN4chat5LoginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "chat::Login",
        "name",
        "time",
        "QtProtobuf::int64",
        "typeID"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'name'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'time'
        QtMocHelpers::PropertyData<QtProtobuf::int64>(2, 0x80000000 | 3, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'typeID'
        QtMocHelpers::PropertyData<QtProtobuf::int64>(4, 0x80000000 | 3, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Login, qt_meta_tag_ZN4chat5LoginE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN4chat5LoginE[] = {
    QMetaObject::SuperData::link<QtProtobuf::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject chat::Login::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4chat5LoginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4chat5LoginE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN4chat5LoginE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4chat5LoginE_t>.metaTypes,
    nullptr
} };

void chat::Login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<Login *>(_o);
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtProtobuf::int64 >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast<QtProtobuf::int64*>(_v) = _t->time(); break;
        case 2: *reinterpret_cast<QtProtobuf::int64*>(_v) = _t->typeID(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setTime(*reinterpret_cast<QtProtobuf::int64*>(_v)); break;
        case 2: _t->setTypeID(*reinterpret_cast<QtProtobuf::int64*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN4chat6SensorE_t {};
} // unnamed namespace

template <> constexpr inline auto chat::Sensor::qt_create_metaobjectdata<qt_meta_tag_ZN4chat6SensorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "chat::Sensor",
        "iD",
        "value",
        "QtProtobuf::int64",
        "typeID"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'iD'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'value'
        QtMocHelpers::PropertyData<QtProtobuf::int64>(2, 0x80000000 | 3, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'typeID'
        QtMocHelpers::PropertyData<QtProtobuf::int64>(4, 0x80000000 | 3, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Sensor, qt_meta_tag_ZN4chat6SensorE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN4chat6SensorE[] = {
    QMetaObject::SuperData::link<QtProtobuf::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject chat::Sensor::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4chat6SensorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4chat6SensorE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN4chat6SensorE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4chat6SensorE_t>.metaTypes,
    nullptr
} };

void chat::Sensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<Sensor *>(_o);
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtProtobuf::int64 >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->iD(); break;
        case 1: *reinterpret_cast<QtProtobuf::int64*>(_v) = _t->value(); break;
        case 2: *reinterpret_cast<QtProtobuf::int64*>(_v) = _t->typeID(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setID(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setValue(*reinterpret_cast<QtProtobuf::int64*>(_v)); break;
        case 2: _t->setTypeID(*reinterpret_cast<QtProtobuf::int64*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN4chat4ChatE_t {};
} // unnamed namespace

template <> constexpr inline auto chat::Chat::qt_create_metaobjectdata<qt_meta_tag_ZN4chat4ChatE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "chat::Chat",
        "sender",
        "sensors_p",
        "chat::Sensor*",
        "hasSensors"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'sender'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'sensors_p'
        QtMocHelpers::PropertyData<chat::Sensor*>(2, 0x80000000 | 3, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasSensors'
        QtMocHelpers::PropertyData<bool>(4, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Chat, qt_meta_tag_ZN4chat4ChatE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject chat::Chat::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4chat4ChatE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4chat4ChatE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4chat4ChatE_t>.metaTypes,
    nullptr
} };

void chat::Chat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<Chat *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->sender(); break;
        case 1: *reinterpret_cast<chat::Sensor**>(_v) = _t->sensors_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasSensors(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSender(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSensors_p(*reinterpret_cast<chat::Sensor**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN4chat7WrapperE_t {};
} // unnamed namespace

template <> constexpr inline auto chat::Wrapper::qt_create_metaobjectdata<qt_meta_tag_ZN4chat7WrapperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "chat::Wrapper",
        "login_p",
        "chat::Login*",
        "hasLogin",
        "chat_p",
        "chat::Chat*",
        "hasChat"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'login_p'
        QtMocHelpers::PropertyData<chat::Login*>(1, 0x80000000 | 2, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasLogin'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'chat_p'
        QtMocHelpers::PropertyData<chat::Chat*>(4, 0x80000000 | 5, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasChat'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Wrapper, qt_meta_tag_ZN4chat7WrapperE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject chat::Wrapper::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4chat7WrapperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4chat7WrapperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4chat7WrapperE_t>.metaTypes,
    nullptr
} };

void chat::Wrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<Wrapper *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<chat::Login**>(_v) = _t->login_p(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->hasLogin(); break;
        case 2: *reinterpret_cast<chat::Chat**>(_v) = _t->chat_p(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->hasChat(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLogin_p(*reinterpret_cast<chat::Login**>(_v)); break;
        case 2: _t->setChat_p(*reinterpret_cast<chat::Chat**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN4chat22Login_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto chat::Login_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN4chat22Login_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "chat::Login_QtProtobufNested",
        "QtProtobufFieldEnum",
        "NameProtoFieldNumber",
        "TimeProtoFieldNumber",
        "TypeIDProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::NameProtoFieldNumber },
            {    3, QtProtobufFieldEnum::TimeProtoFieldNumber },
            {    4, QtProtobufFieldEnum::TypeIDProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN4chat22Login_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN4chat22Login_QtProtobufNestedE =
    chat::Login_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN4chat22Login_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN4chat22Login_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN4chat22Login_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN4chat22Login_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN4chat22Login_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject chat::Login_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN4chat22Login_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN4chat22Login_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN4chat22Login_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN4chat23Sensor_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto chat::Sensor_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN4chat23Sensor_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "chat::Sensor_QtProtobufNested",
        "QtProtobufFieldEnum",
        "IDProtoFieldNumber",
        "ValueProtoFieldNumber",
        "TypeIDProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::IDProtoFieldNumber },
            {    3, QtProtobufFieldEnum::ValueProtoFieldNumber },
            {    4, QtProtobufFieldEnum::TypeIDProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN4chat23Sensor_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN4chat23Sensor_QtProtobufNestedE =
    chat::Sensor_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN4chat23Sensor_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN4chat23Sensor_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN4chat23Sensor_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN4chat23Sensor_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN4chat23Sensor_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject chat::Sensor_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN4chat23Sensor_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN4chat23Sensor_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN4chat23Sensor_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN4chat21Chat_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto chat::Chat_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN4chat21Chat_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "chat::Chat_QtProtobufNested",
        "QtProtobufFieldEnum",
        "SenderProtoFieldNumber",
        "SensorsProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::SenderProtoFieldNumber },
            {    3, QtProtobufFieldEnum::SensorsProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN4chat21Chat_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN4chat21Chat_QtProtobufNestedE =
    chat::Chat_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN4chat21Chat_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN4chat21Chat_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN4chat21Chat_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN4chat21Chat_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN4chat21Chat_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject chat::Chat_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN4chat21Chat_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN4chat21Chat_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN4chat21Chat_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN4chat24Wrapper_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto chat::Wrapper_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN4chat24Wrapper_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "chat::Wrapper_QtProtobufNested",
        "QtProtobufFieldEnum",
        "LoginProtoFieldNumber",
        "ChatProtoFieldNumber",
        "PayloadFields",
        "UninitializedField",
        "Login",
        "Chat"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::LoginProtoFieldNumber },
            {    3, QtProtobufFieldEnum::ChatProtoFieldNumber },
        }),
        // enum 'PayloadFields'
        QtMocHelpers::EnumData<PayloadFields>(4, 4, QMC::EnumIsScoped).add({
            {    5, PayloadFields::UninitializedField },
            {    6, PayloadFields::Login },
            {    7, PayloadFields::Chat },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN4chat24Wrapper_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN4chat24Wrapper_QtProtobufNestedE =
    chat::Wrapper_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN4chat24Wrapper_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN4chat24Wrapper_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN4chat24Wrapper_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN4chat24Wrapper_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN4chat24Wrapper_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject chat::Wrapper_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN4chat24Wrapper_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN4chat24Wrapper_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN4chat24Wrapper_QtProtobufNestedE.metaTypes,
    nullptr
} };

QT_WARNING_POP
