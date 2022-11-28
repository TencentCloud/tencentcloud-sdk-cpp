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

set(cdwch_public_header
  include/tencentcloud/cdwch/v20200915/CdwchClient.h
  )

set(cdwch_public_header_model
  include/tencentcloud/cdwch/v20200915/model/DescribeInstanceShardsRequest.h
  include/tencentcloud/cdwch/v20200915/model/ModifyUserNewPrivilegeRequest.h
  include/tencentcloud/cdwch/v20200915/model/CreateBackUpScheduleRequest.h
  include/tencentcloud/cdwch/v20200915/model/DescribeInstanceShardsResponse.h
  include/tencentcloud/cdwch/v20200915/model/OpenBackUpRequest.h
  include/tencentcloud/cdwch/v20200915/model/ModifyClusterConfigsResponse.h
  include/tencentcloud/cdwch/v20200915/model/BackupTableContent.h
  include/tencentcloud/cdwch/v20200915/model/OpenBackUpResponse.h
  include/tencentcloud/cdwch/v20200915/model/ConfigSubmitContext.h
  include/tencentcloud/cdwch/v20200915/model/ActionAlterCkUserResponse.h
  include/tencentcloud/cdwch/v20200915/model/DescribeCkSqlApisRequest.h
  include/tencentcloud/cdwch/v20200915/model/ActionAlterCkUserRequest.h
  include/tencentcloud/cdwch/v20200915/model/CkUserAlterInfo.h
  include/tencentcloud/cdwch/v20200915/model/CreateBackUpScheduleResponse.h
  include/tencentcloud/cdwch/v20200915/model/ModifyClusterConfigsRequest.h
  include/tencentcloud/cdwch/v20200915/model/DescribeCkSqlApisResponse.h
  include/tencentcloud/cdwch/v20200915/model/ModifyUserNewPrivilegeResponse.h
  )

set(cdwch_src
  src/v20200915/CdwchClient.cpp
  src/v20200915/model/DescribeInstanceShardsRequest.cpp
  src/v20200915/model/ModifyUserNewPrivilegeRequest.cpp
  src/v20200915/model/CreateBackUpScheduleRequest.cpp
  src/v20200915/model/DescribeInstanceShardsResponse.cpp
  src/v20200915/model/OpenBackUpRequest.cpp
  src/v20200915/model/ModifyClusterConfigsResponse.cpp
  src/v20200915/model/BackupTableContent.cpp
  src/v20200915/model/OpenBackUpResponse.cpp
  src/v20200915/model/ConfigSubmitContext.cpp
  src/v20200915/model/ActionAlterCkUserResponse.cpp
  src/v20200915/model/DescribeCkSqlApisRequest.cpp
  src/v20200915/model/ActionAlterCkUserRequest.cpp
  src/v20200915/model/CkUserAlterInfo.cpp
  src/v20200915/model/CreateBackUpScheduleResponse.cpp
  src/v20200915/model/ModifyClusterConfigsRequest.cpp
  src/v20200915/model/DescribeCkSqlApisResponse.cpp
  src/v20200915/model/ModifyUserNewPrivilegeResponse.cpp
  )

set(cdwch_include
    include/tencentcloud/cdwch
  )

add_library(cdwch ${LIB_TYPE}
  ${cdwch_public_header}
  ${cdwch_public_header_model}
  ${cdwch_src})

set_target_properties(cdwch
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cdwch
  )

target_include_directories(cdwch
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cdwch
  core)

#install(FILES ${cdwch_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdwch/v20200915)
#install(FILES ${cdwch_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdwch/v20200915/model)
install(DIRECTORY ${cdwch_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cdwch
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
