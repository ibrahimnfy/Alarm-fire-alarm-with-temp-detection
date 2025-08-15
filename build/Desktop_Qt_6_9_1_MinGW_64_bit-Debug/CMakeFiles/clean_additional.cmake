# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\alarm_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\alarm_autogen.dir\\ParseCache.txt"
  "CMakeFiles\\protobuf_messages_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\protobuf_messages_autogen.dir\\ParseCache.txt"
  "CMakeFiles\\protobuf_messages_qtprotoreg_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\protobuf_messages_qtprotoreg_autogen.dir\\ParseCache.txt"
  "alarm_autogen"
  "protobuf_messages_autogen"
  "protobuf_messages_qtprotoreg_autogen"
  )
endif()
