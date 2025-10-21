#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

set(securitylake_public_header
  include/tencentcloud/securitylake/v20240117/SecuritylakeClient.h
  )

set(securitylake_public_header_model
  include/tencentcloud/securitylake/v20240117/model/SecurityGroupAlertInfo.h
  include/tencentcloud/securitylake/v20240117/model/DescribeSecurityAlarmTableListResponse.h
  include/tencentcloud/securitylake/v20240117/model/SecurityAlarmTable.h
  include/tencentcloud/securitylake/v20240117/model/DescribeSecurityAlarmTableListRequest.h
  include/tencentcloud/securitylake/v20240117/model/WebSearchFilter.h
  )

set(securitylake_src
  src/v20240117/SecuritylakeClient.cpp
  src/v20240117/model/SecurityGroupAlertInfo.cpp
  src/v20240117/model/DescribeSecurityAlarmTableListResponse.cpp
  src/v20240117/model/SecurityAlarmTable.cpp
  src/v20240117/model/DescribeSecurityAlarmTableListRequest.cpp
  src/v20240117/model/WebSearchFilter.cpp
  )

set(securitylake_include
    include/tencentcloud/securitylake
  )

add_library(securitylake ${LIB_TYPE}
  ${securitylake_public_header}
  ${securitylake_public_header_model}
  ${securitylake_src})

set_target_properties(securitylake
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}securitylake
  )

target_include_directories(securitylake
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(securitylake
  core)

#install(FILES ${securitylake_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/securitylake/v20240117)
#install(FILES ${securitylake_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/securitylake/v20240117/model)
install(DIRECTORY ${securitylake_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS securitylake
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
