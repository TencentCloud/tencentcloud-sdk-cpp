#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(mqtt_public_header
  include/tencentcloud/mqtt/v20240516/MqttClient.h
  )

set(mqtt_public_header_model
  include/tencentcloud/mqtt/v20240516/model/DescribeInstanceListResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInstanceRequest.h
  include/tencentcloud/mqtt/v20240516/model/TagFilter.h
  include/tencentcloud/mqtt/v20240516/model/Filter.h
  include/tencentcloud/mqtt/v20240516/model/MQTTInstanceItem.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInstanceResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInstanceListRequest.h
  )

set(mqtt_src
  src/v20240516/MqttClient.cpp
  src/v20240516/model/DescribeInstanceListResponse.cpp
  src/v20240516/model/DescribeInstanceRequest.cpp
  src/v20240516/model/TagFilter.cpp
  src/v20240516/model/Filter.cpp
  src/v20240516/model/MQTTInstanceItem.cpp
  src/v20240516/model/DescribeInstanceResponse.cpp
  src/v20240516/model/DescribeInstanceListRequest.cpp
  )

set(mqtt_include
    include/tencentcloud/mqtt
  )

add_library(mqtt ${LIB_TYPE}
  ${mqtt_public_header}
  ${mqtt_public_header_model}
  ${mqtt_src})

set_target_properties(mqtt
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mqtt
  )

target_include_directories(mqtt
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mqtt
  core)

#install(FILES ${mqtt_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mqtt/v20240516)
#install(FILES ${mqtt_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mqtt/v20240516/model)
install(DIRECTORY ${mqtt_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mqtt
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
