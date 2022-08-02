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

set(tsw_public_header
  include/tencentcloud/tsw/v20210412/TswClient.h
  include/tencentcloud/tsw/v20200924/TswClient.h
  )

set(tsw_public_header_model
  include/tencentcloud/tsw/v20210412/model/DescribeTokenRequest.h
  include/tencentcloud/tsw/v20210412/model/DescribeServiceAlertObjectResponse.h
  include/tencentcloud/tsw/v20210412/model/DescribeComponentAlertObjectResponse.h
  include/tencentcloud/tsw/v20210412/model/DescribeServiceAlertObjectRequest.h
  include/tencentcloud/tsw/v20210412/model/DescribeComponentAlertObjectRequest.h
  include/tencentcloud/tsw/v20210412/model/DescribeTokenResponse.h
  include/tencentcloud/tsw/v20200924/model/DescribeAgentShellResponse.h
  include/tencentcloud/tsw/v20200924/model/AgentShell.h
  include/tencentcloud/tsw/v20200924/model/DescribeAgentShellRequest.h
  )

set(tsw_src
  src/v20210412/TswClient.cpp
  src/v20200924/TswClient.cpp
  src/v20210412/model/DescribeTokenRequest.cpp
  src/v20210412/model/DescribeServiceAlertObjectResponse.cpp
  src/v20210412/model/DescribeComponentAlertObjectResponse.cpp
  src/v20210412/model/DescribeServiceAlertObjectRequest.cpp
  src/v20210412/model/DescribeComponentAlertObjectRequest.cpp
  src/v20210412/model/DescribeTokenResponse.cpp
  src/v20200924/model/DescribeAgentShellResponse.cpp
  src/v20200924/model/AgentShell.cpp
  src/v20200924/model/DescribeAgentShellRequest.cpp
  )

set(tsw_include
    include/tencentcloud/tsw
  )

add_library(tsw ${LIB_TYPE}
  ${tsw_public_header}
  ${tsw_public_header_model}
  ${tsw_src})

set_target_properties(tsw
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tsw
  )

target_include_directories(tsw
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tsw
  core)

#install(FILES ${tsw_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tsw/v20200924)
#install(FILES ${tsw_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tsw/v20200924/model)
install(DIRECTORY ${tsw_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tsw
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
