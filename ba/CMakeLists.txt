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

set(ba_public_header
  include/tencentcloud/ba/v20200720/BaClient.h
  )

set(ba_public_header_model
  include/tencentcloud/ba/v20200720/model/DescribeGetAuthInfoResponse.h
  include/tencentcloud/ba/v20200720/model/SyncIcpOrderWebInfoResponse.h
  include/tencentcloud/ba/v20200720/model/SyncIcpOrderWebInfoRequest.h
  include/tencentcloud/ba/v20200720/model/CreateWeappQRUrlRequest.h
  include/tencentcloud/ba/v20200720/model/CreateWeappQRUrlResponse.h
  include/tencentcloud/ba/v20200720/model/DescribeGetAuthInfoRequest.h
  )

set(ba_src
  src/v20200720/BaClient.cpp
  src/v20200720/model/DescribeGetAuthInfoResponse.cpp
  src/v20200720/model/SyncIcpOrderWebInfoResponse.cpp
  src/v20200720/model/SyncIcpOrderWebInfoRequest.cpp
  src/v20200720/model/CreateWeappQRUrlRequest.cpp
  src/v20200720/model/CreateWeappQRUrlResponse.cpp
  src/v20200720/model/DescribeGetAuthInfoRequest.cpp
  )

set(ba_include
    include/tencentcloud/ba
  )

add_library(ba ${LIB_TYPE}
  ${ba_public_header}
  ${ba_public_header_model}
  ${ba_src})

set_target_properties(ba
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ba
  )

target_include_directories(ba
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ba
  core)

#install(FILES ${ba_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ba/v20200720)
#install(FILES ${ba_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ba/v20200720/model)
install(DIRECTORY ${ba_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ba
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
