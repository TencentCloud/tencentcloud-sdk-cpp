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

set(weilingwith_public_header
  include/tencentcloud/weilingwith/v20230427/WeilingwithClient.h
  )

set(weilingwith_public_header_model
  include/tencentcloud/weilingwith/v20230427/model/SsoTeamUser.h
  include/tencentcloud/weilingwith/v20230427/model/SsoTeamUserResult.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceUserListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceUserListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeInterfaceListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeApplicationListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeApplicationListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeInterfaceListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeEdgeApplicationTokenResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeEdgeApplicationTokenRequest.h
  )

set(weilingwith_src
  src/v20230427/WeilingwithClient.cpp
  src/v20230427/model/SsoTeamUser.cpp
  src/v20230427/model/SsoTeamUserResult.cpp
  src/v20230427/model/DescribeWorkspaceUserListResponse.cpp
  src/v20230427/model/DescribeWorkspaceUserListRequest.cpp
  src/v20230427/model/DescribeInterfaceListRequest.cpp
  src/v20230427/model/DescribeApplicationListResponse.cpp
  src/v20230427/model/DescribeWorkspaceListResponse.cpp
  src/v20230427/model/DescribeApplicationListRequest.cpp
  src/v20230427/model/DescribeInterfaceListResponse.cpp
  src/v20230427/model/DescribeWorkspaceListRequest.cpp
  src/v20230427/model/DescribeEdgeApplicationTokenResponse.cpp
  src/v20230427/model/DescribeEdgeApplicationTokenRequest.cpp
  )

set(weilingwith_include
    include/tencentcloud/weilingwith
  )

add_library(weilingwith ${LIB_TYPE}
  ${weilingwith_public_header}
  ${weilingwith_public_header_model}
  ${weilingwith_src})

set_target_properties(weilingwith
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}weilingwith
  )

target_include_directories(weilingwith
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(weilingwith
  core)

#install(FILES ${weilingwith_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/weilingwith/v20230427)
#install(FILES ${weilingwith_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/weilingwith/v20230427/model)
install(DIRECTORY ${weilingwith_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS weilingwith
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
