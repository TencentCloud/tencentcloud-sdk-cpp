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

set(tav_public_header
  include/tencentcloud/tav/v20190118/TavClient.h
  )

set(tav_public_header_model
  include/tencentcloud/tav/v20190118/model/GetLocalEngineResponse.h
  include/tencentcloud/tav/v20190118/model/ScanFileHashResponse.h
  include/tencentcloud/tav/v20190118/model/ScanFileHashRequest.h
  include/tencentcloud/tav/v20190118/model/ScanFileResponse.h
  include/tencentcloud/tav/v20190118/model/GetScanResultResponse.h
  include/tencentcloud/tav/v20190118/model/GetLocalEngineRequest.h
  include/tencentcloud/tav/v20190118/model/GetScanResultRequest.h
  include/tencentcloud/tav/v20190118/model/ScanFileRequest.h
  )

set(tav_src
  src/v20190118/TavClient.cpp
  src/v20190118/model/GetLocalEngineResponse.cpp
  src/v20190118/model/ScanFileHashResponse.cpp
  src/v20190118/model/ScanFileHashRequest.cpp
  src/v20190118/model/ScanFileResponse.cpp
  src/v20190118/model/GetScanResultResponse.cpp
  src/v20190118/model/GetLocalEngineRequest.cpp
  src/v20190118/model/GetScanResultRequest.cpp
  src/v20190118/model/ScanFileRequest.cpp
  )

set(tav_include
    include/tencentcloud/tav
  )

add_library(tav ${LIB_TYPE}
  ${tav_public_header}
  ${tav_public_header_model}
  ${tav_src})

set_target_properties(tav
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tav
  )

target_include_directories(tav
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tav
  core)

#install(FILES ${tav_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tav/v20190118)
#install(FILES ${tav_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tav/v20190118/model)
install(DIRECTORY ${tav_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tav
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
