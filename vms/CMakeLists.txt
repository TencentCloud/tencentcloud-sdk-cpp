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

set(vms_public_header
  include/tencentcloud/vms/v20200902/VmsClient.h
  )

set(vms_public_header_model
  include/tencentcloud/vms/v20200902/model/SendTtsVoiceResponse.h
  include/tencentcloud/vms/v20200902/model/SendCodeVoiceResponse.h
  include/tencentcloud/vms/v20200902/model/SendStatus.h
  include/tencentcloud/vms/v20200902/model/SendCodeVoiceRequest.h
  include/tencentcloud/vms/v20200902/model/SendTtsVoiceRequest.h
  )

set(vms_src
  src/v20200902/VmsClient.cpp
  src/v20200902/model/SendTtsVoiceResponse.cpp
  src/v20200902/model/SendCodeVoiceResponse.cpp
  src/v20200902/model/SendStatus.cpp
  src/v20200902/model/SendCodeVoiceRequest.cpp
  src/v20200902/model/SendTtsVoiceRequest.cpp
  )

set(vms_include
    include/tencentcloud/vms
  )

add_library(vms ${LIB_TYPE}
  ${vms_public_header}
  ${vms_public_header_model}
  ${vms_src})

set_target_properties(vms
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}vms
  )

target_include_directories(vms
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(vms
  core)

#install(FILES ${vms_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vms/v20200902)
#install(FILES ${vms_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vms/v20200902/model)
install(DIRECTORY ${vms_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS vms
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
