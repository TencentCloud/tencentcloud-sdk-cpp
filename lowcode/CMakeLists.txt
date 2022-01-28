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

set(lowcode_public_header
  include/tencentcloud/lowcode/v20210108/LowcodeClient.h
  )

set(lowcode_public_header_model
  include/tencentcloud/lowcode/v20210108/model/TicketAuthInfo.h
  include/tencentcloud/lowcode/v20210108/model/DescribeDataSourceListRequest.h
  include/tencentcloud/lowcode/v20210108/model/DataSourceQueryOption.h
  include/tencentcloud/lowcode/v20210108/model/DataSourceLinkApp.h
  include/tencentcloud/lowcode/v20210108/model/DataSourceDetail.h
  include/tencentcloud/lowcode/v20210108/model/DataSourceDetailItems.h
  include/tencentcloud/lowcode/v20210108/model/DescribeDataSourceListResponse.h
  )

set(lowcode_src
  src/v20210108/LowcodeClient.cpp
  src/v20210108/model/TicketAuthInfo.cpp
  src/v20210108/model/DescribeDataSourceListRequest.cpp
  src/v20210108/model/DataSourceQueryOption.cpp
  src/v20210108/model/DataSourceLinkApp.cpp
  src/v20210108/model/DataSourceDetail.cpp
  src/v20210108/model/DataSourceDetailItems.cpp
  src/v20210108/model/DescribeDataSourceListResponse.cpp
  )

set(lowcode_include
    include/tencentcloud/lowcode
  )

add_library(lowcode ${LIB_TYPE}
  ${lowcode_public_header}
  ${lowcode_public_header_model}
  ${lowcode_src})

set_target_properties(lowcode
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}lowcode
  )

target_include_directories(lowcode
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(lowcode
  core)

#install(FILES ${lowcode_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/lowcode/v20210108)
#install(FILES ${lowcode_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/lowcode/v20210108/model)
install(DIRECTORY ${lowcode_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS lowcode
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
