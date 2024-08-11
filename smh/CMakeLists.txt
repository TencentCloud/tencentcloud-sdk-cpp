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

set(smh_public_header
  include/tencentcloud/smh/v20210712/SmhClient.h
  )

set(smh_public_header_model
  include/tencentcloud/smh/v20210712/model/DescribeUserLifecycleResponse.h
  include/tencentcloud/smh/v20210712/model/ModifyLibraryResponse.h
  include/tencentcloud/smh/v20210712/model/DescribeLibrariesResponse.h
  include/tencentcloud/smh/v20210712/model/SendSmsCodeResponse.h
  include/tencentcloud/smh/v20210712/model/Instance.h
  include/tencentcloud/smh/v20210712/model/DeleteUserRequest.h
  include/tencentcloud/smh/v20210712/model/TrafficPackage.h
  include/tencentcloud/smh/v20210712/model/DeleteLibraryRequest.h
  include/tencentcloud/smh/v20210712/model/DescribeTrafficPackagesRequest.h
  include/tencentcloud/smh/v20210712/model/DescribeTrafficPackagesResponse.h
  include/tencentcloud/smh/v20210712/model/CreateUserResponse.h
  include/tencentcloud/smh/v20210712/model/DescribeLibrarySecretRequest.h
  include/tencentcloud/smh/v20210712/model/DescribeLibrarySecretResponse.h
  include/tencentcloud/smh/v20210712/model/SendSmsCodeRequest.h
  include/tencentcloud/smh/v20210712/model/DeleteUserResponse.h
  include/tencentcloud/smh/v20210712/model/DescribeLibrariesRequest.h
  include/tencentcloud/smh/v20210712/model/LibraryExtension.h
  include/tencentcloud/smh/v20210712/model/ModifyUserResponse.h
  include/tencentcloud/smh/v20210712/model/VerifySmsCodeResponse.h
  include/tencentcloud/smh/v20210712/model/ModifyLibraryRequest.h
  include/tencentcloud/smh/v20210712/model/DescribeOfficialOverviewRequest.h
  include/tencentcloud/smh/v20210712/model/DeleteLibraryResponse.h
  include/tencentcloud/smh/v20210712/model/DescribeOfficialInstancesResponse.h
  include/tencentcloud/smh/v20210712/model/DescribeUserLifecycleRequest.h
  include/tencentcloud/smh/v20210712/model/VerifySmsCodeRequest.h
  include/tencentcloud/smh/v20210712/model/DescribeOfficialInstancesRequest.h
  include/tencentcloud/smh/v20210712/model/CreateUserRequest.h
  include/tencentcloud/smh/v20210712/model/CreateUserLifecycleResponse.h
  include/tencentcloud/smh/v20210712/model/CreateLibraryResponse.h
  include/tencentcloud/smh/v20210712/model/UserFilter.h
  include/tencentcloud/smh/v20210712/model/Library.h
  include/tencentcloud/smh/v20210712/model/CreateUserLifecycleRequest.h
  include/tencentcloud/smh/v20210712/model/ModifyUserRequest.h
  include/tencentcloud/smh/v20210712/model/CreateLibraryRequest.h
  include/tencentcloud/smh/v20210712/model/DescribeOfficialOverviewResponse.h
  )

set(smh_src
  src/v20210712/SmhClient.cpp
  src/v20210712/model/DescribeUserLifecycleResponse.cpp
  src/v20210712/model/ModifyLibraryResponse.cpp
  src/v20210712/model/DescribeLibrariesResponse.cpp
  src/v20210712/model/SendSmsCodeResponse.cpp
  src/v20210712/model/Instance.cpp
  src/v20210712/model/DeleteUserRequest.cpp
  src/v20210712/model/TrafficPackage.cpp
  src/v20210712/model/DeleteLibraryRequest.cpp
  src/v20210712/model/DescribeTrafficPackagesRequest.cpp
  src/v20210712/model/DescribeTrafficPackagesResponse.cpp
  src/v20210712/model/CreateUserResponse.cpp
  src/v20210712/model/DescribeLibrarySecretRequest.cpp
  src/v20210712/model/DescribeLibrarySecretResponse.cpp
  src/v20210712/model/SendSmsCodeRequest.cpp
  src/v20210712/model/DeleteUserResponse.cpp
  src/v20210712/model/DescribeLibrariesRequest.cpp
  src/v20210712/model/LibraryExtension.cpp
  src/v20210712/model/ModifyUserResponse.cpp
  src/v20210712/model/VerifySmsCodeResponse.cpp
  src/v20210712/model/ModifyLibraryRequest.cpp
  src/v20210712/model/DescribeOfficialOverviewRequest.cpp
  src/v20210712/model/DeleteLibraryResponse.cpp
  src/v20210712/model/DescribeOfficialInstancesResponse.cpp
  src/v20210712/model/DescribeUserLifecycleRequest.cpp
  src/v20210712/model/VerifySmsCodeRequest.cpp
  src/v20210712/model/DescribeOfficialInstancesRequest.cpp
  src/v20210712/model/CreateUserRequest.cpp
  src/v20210712/model/CreateUserLifecycleResponse.cpp
  src/v20210712/model/CreateLibraryResponse.cpp
  src/v20210712/model/UserFilter.cpp
  src/v20210712/model/Library.cpp
  src/v20210712/model/CreateUserLifecycleRequest.cpp
  src/v20210712/model/ModifyUserRequest.cpp
  src/v20210712/model/CreateLibraryRequest.cpp
  src/v20210712/model/DescribeOfficialOverviewResponse.cpp
  )

set(smh_include
    include/tencentcloud/smh
  )

add_library(smh ${LIB_TYPE}
  ${smh_public_header}
  ${smh_public_header_model}
  ${smh_src})

set_target_properties(smh
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}smh
  )

target_include_directories(smh
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(smh
  core)

#install(FILES ${smh_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/smh/v20210712)
#install(FILES ${smh_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/smh/v20210712/model)
install(DIRECTORY ${smh_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS smh
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
