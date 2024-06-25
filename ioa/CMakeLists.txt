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

set(ioa_public_header
  include/tencentcloud/ioa/v20220601/IoaClient.h
  )

set(ioa_public_header_model
  include/tencentcloud/ioa/v20220601/model/DescribeAccountGroupsResponse.h
  include/tencentcloud/ioa/v20220601/model/DescribeRootAccountGroupResponse.h
  include/tencentcloud/ioa/v20220601/model/DescribeDevicesPageRsp.h
  include/tencentcloud/ioa/v20220601/model/DeviceDetail.h
  include/tencentcloud/ioa/v20220601/model/DescribeLocalAccountsData.h
  include/tencentcloud/ioa/v20220601/model/DescribeLocalAccountsRequest.h
  include/tencentcloud/ioa/v20220601/model/FilterGroup.h
  include/tencentcloud/ioa/v20220601/model/DescribeDevicesResponse.h
  include/tencentcloud/ioa/v20220601/model/DescribeLocalAccountAccountGroupsData.h
  include/tencentcloud/ioa/v20220601/model/DescribeLocalAccountsPage.h
  include/tencentcloud/ioa/v20220601/model/DescribeDevicesRequest.h
  include/tencentcloud/ioa/v20220601/model/Paging.h
  include/tencentcloud/ioa/v20220601/model/Sort.h
  include/tencentcloud/ioa/v20220601/model/Condition.h
  include/tencentcloud/ioa/v20220601/model/Filter.h
  include/tencentcloud/ioa/v20220601/model/DescribeLocalAccountsResponse.h
  include/tencentcloud/ioa/v20220601/model/DescribeAccountGroupsData.h
  include/tencentcloud/ioa/v20220601/model/DescribeRootAccountGroupRequest.h
  include/tencentcloud/ioa/v20220601/model/GetAccountGroupData.h
  include/tencentcloud/ioa/v20220601/model/DescribeAccountGroupsPageResp.h
  include/tencentcloud/ioa/v20220601/model/DescribeAccountGroupsRequest.h
  )

set(ioa_src
  src/v20220601/IoaClient.cpp
  src/v20220601/model/DescribeAccountGroupsResponse.cpp
  src/v20220601/model/DescribeRootAccountGroupResponse.cpp
  src/v20220601/model/DescribeDevicesPageRsp.cpp
  src/v20220601/model/DeviceDetail.cpp
  src/v20220601/model/DescribeLocalAccountsData.cpp
  src/v20220601/model/DescribeLocalAccountsRequest.cpp
  src/v20220601/model/FilterGroup.cpp
  src/v20220601/model/DescribeDevicesResponse.cpp
  src/v20220601/model/DescribeLocalAccountAccountGroupsData.cpp
  src/v20220601/model/DescribeLocalAccountsPage.cpp
  src/v20220601/model/DescribeDevicesRequest.cpp
  src/v20220601/model/Paging.cpp
  src/v20220601/model/Sort.cpp
  src/v20220601/model/Condition.cpp
  src/v20220601/model/Filter.cpp
  src/v20220601/model/DescribeLocalAccountsResponse.cpp
  src/v20220601/model/DescribeAccountGroupsData.cpp
  src/v20220601/model/DescribeRootAccountGroupRequest.cpp
  src/v20220601/model/GetAccountGroupData.cpp
  src/v20220601/model/DescribeAccountGroupsPageResp.cpp
  src/v20220601/model/DescribeAccountGroupsRequest.cpp
  )

set(ioa_include
    include/tencentcloud/ioa
  )

add_library(ioa ${LIB_TYPE}
  ${ioa_public_header}
  ${ioa_public_header_model}
  ${ioa_src})

set_target_properties(ioa
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ioa
  )

target_include_directories(ioa
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ioa
  core)

#install(FILES ${ioa_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ioa/v20220601)
#install(FILES ${ioa_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ioa/v20220601/model)
install(DIRECTORY ${ioa_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ioa
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
