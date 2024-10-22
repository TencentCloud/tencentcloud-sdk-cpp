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

set(tsi_public_header
  include/tencentcloud/tsi/v20210325/TsiClient.h
  )

set(tsi_public_header_model
  include/tencentcloud/tsi/v20210325/model/TongChuanSyncResponse.h
  include/tencentcloud/tsi/v20210325/model/DisplayInfo.h
  include/tencentcloud/tsi/v20210325/model/TongChuanRecognizeResponse.h
  include/tencentcloud/tsi/v20210325/model/TongChuanDisplayRequest.h
  include/tencentcloud/tsi/v20210325/model/TTS.h
  include/tencentcloud/tsi/v20210325/model/TongChuanRecognizeRequest.h
  include/tencentcloud/tsi/v20210325/model/TongChuanDisplayResponse.h
  include/tencentcloud/tsi/v20210325/model/TongChuanSyncRequest.h
  )

set(tsi_src
  src/v20210325/TsiClient.cpp
  src/v20210325/model/TongChuanSyncResponse.cpp
  src/v20210325/model/DisplayInfo.cpp
  src/v20210325/model/TongChuanRecognizeResponse.cpp
  src/v20210325/model/TongChuanDisplayRequest.cpp
  src/v20210325/model/TTS.cpp
  src/v20210325/model/TongChuanRecognizeRequest.cpp
  src/v20210325/model/TongChuanDisplayResponse.cpp
  src/v20210325/model/TongChuanSyncRequest.cpp
  )

set(tsi_include
    include/tencentcloud/tsi
  )

add_library(tsi ${LIB_TYPE}
  ${tsi_public_header}
  ${tsi_public_header_model}
  ${tsi_src})

set_target_properties(tsi
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tsi
  )

target_include_directories(tsi
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tsi
  core)

#install(FILES ${tsi_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tsi/v20210325)
#install(FILES ${tsi_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tsi/v20210325/model)
install(DIRECTORY ${tsi_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tsi
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
