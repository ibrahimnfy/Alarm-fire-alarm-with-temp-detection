
#include "message.qpb.h"

#include <QtProtobuf/qprotobufregistration.h>

namespace chat {
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarLogin(qRegisterProtobufType<Login>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarSensor(qRegisterProtobufType<Sensor>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarChat(qRegisterProtobufType<Chat>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarWrapper(qRegisterProtobufType<Wrapper>);
static bool RegisterMessageProtobufTypes = [](){ qRegisterProtobufTypes(); return true; }();
} // namespace chat

