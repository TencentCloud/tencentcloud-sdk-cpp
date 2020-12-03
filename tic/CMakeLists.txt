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

set(tic_public_header
  include/tencentcloud/tic/v20201117/TicClient.h
  )

set(tic_public_header_model
  include/tencentcloud/tic/v20201117/model/DescribeStackVersionsResponse.h
  include/tencentcloud/tic/v20201117/model/DescribeStackEventsResponse.h
  include/tencentcloud/tic/v20201117/model/UpdateStackResponse.h
  include/tencentcloud/tic/v20201117/model/DescribeStacksRequest.h
  include/tencentcloud/tic/v20201117/model/CreateStackVersionResponse.h
  include/tencentcloud/tic/v20201117/model/UpdateStackRequest.h
  include/tencentcloud/tic/v20201117/model/DescribeStackEventRequest.h
  include/tencentcloud/tic/v20201117/model/PlanStackResponse.h
  include/tencentcloud/tic/v20201117/model/StackInfo.h
  include/tencentcloud/tic/v20201117/model/PlanStackRequest.h
  include/tencentcloud/tic/v20201117/model/ApplyStackResponse.h
  include/tencentcloud/tic/v20201117/model/DestroyStackRequest.h
  include/tencentcloud/tic/v20201117/model/CreateStackVersionRequest.h
  include/tencentcloud/tic/v20201117/model/DeleteStackVersionResponse.h
  include/tencentcloud/tic/v20201117/model/Filter.h
  include/tencentcloud/tic/v20201117/model/DescribeStackVersionsRequest.h
  include/tencentcloud/tic/v20201117/model/DescribeStackEventsRequest.h
  include/tencentcloud/tic/v20201117/model/DescribeStackEventResponse.h
  include/tencentcloud/tic/v20201117/model/ApplyStackRequest.h
  include/tencentcloud/tic/v20201117/model/DeleteStackVersionRequest.h
  include/tencentcloud/tic/v20201117/model/DestroyStackResponse.h
  include/tencentcloud/tic/v20201117/model/DeleteStackRequest.h
  include/tencentcloud/tic/v20201117/model/EventInfo.h
  include/tencentcloud/tic/v20201117/model/UpdateStackVersionResponse.h
  include/tencentcloud/tic/v20201117/model/DeleteStackResponse.h
  include/tencentcloud/tic/v20201117/model/CreateStackRequest.h
  include/tencentcloud/tic/v20201117/model/DescribeStacksResponse.h
  include/tencentcloud/tic/v20201117/model/CreateStackResponse.h
  include/tencentcloud/tic/v20201117/model/VersionInfo.h
  include/tencentcloud/tic/v20201117/model/UpdateStackVersionRequest.h
  )

set(tic_src
  src/v20201117/TicClient.cpp
  src/v20201117/model/DescribeStackVersionsResponse.cpp
  src/v20201117/model/DescribeStackEventsResponse.cpp
  src/v20201117/model/UpdateStackResponse.cpp
  src/v20201117/model/DescribeStacksRequest.cpp
  src/v20201117/model/CreateStackVersionResponse.cpp
  src/v20201117/model/UpdateStackRequest.cpp
  src/v20201117/model/DescribeStackEventRequest.cpp
  src/v20201117/model/PlanStackResponse.cpp
  src/v20201117/model/StackInfo.cpp
  src/v20201117/model/PlanStackRequest.cpp
  src/v20201117/model/ApplyStackResponse.cpp
  src/v20201117/model/DestroyStackRequest.cpp
  src/v20201117/model/CreateStackVersionRequest.cpp
  src/v20201117/model/DeleteStackVersionResponse.cpp
  src/v20201117/model/Filter.cpp
  src/v20201117/model/DescribeStackVersionsRequest.cpp
  src/v20201117/model/DescribeStackEventsRequest.cpp
  src/v20201117/model/DescribeStackEventResponse.cpp
  src/v20201117/model/ApplyStackRequest.cpp
  src/v20201117/model/DeleteStackVersionRequest.cpp
  src/v20201117/model/DestroyStackResponse.cpp
  src/v20201117/model/DeleteStackRequest.cpp
  src/v20201117/model/EventInfo.cpp
  src/v20201117/model/UpdateStackVersionResponse.cpp
  src/v20201117/model/DeleteStackResponse.cpp
  src/v20201117/model/CreateStackRequest.cpp
  src/v20201117/model/DescribeStacksResponse.cpp
  src/v20201117/model/CreateStackResponse.cpp
  src/v20201117/model/VersionInfo.cpp
  src/v20201117/model/UpdateStackVersionRequest.cpp
  )

set(tic_include
    include/tencentcloud/tic
  )

add_library(tic ${LIB_TYPE}
  ${tic_public_header}
  ${tic_public_header_model}
  ${tic_src})

set_target_properties(tic
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tic
  )

target_include_directories(tic
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tic
  core)

#install(FILES ${tic_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tic/v20201117)
#install(FILES ${tic_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tic/v20201117/model)
install(DIRECTORY ${tic_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tic
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
