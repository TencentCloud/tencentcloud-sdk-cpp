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

set(wedata_public_header
  include/tencentcloud/wedata/v20210820/WedataClient.h
  )

set(wedata_public_header_model
  include/tencentcloud/wedata/v20210820/model/DescribeProjectResponse.h
  include/tencentcloud/wedata/v20210820/model/DescribeProjectRequest.h
  include/tencentcloud/wedata/v20210820/model/DescribeTaskInstancesRequest.h
  include/tencentcloud/wedata/v20210820/model/DescribeTaskInstancesResponse.h
  include/tencentcloud/wedata/v20210820/model/TaskInstanceInfo.h
  include/tencentcloud/wedata/v20210820/model/DescribeTaskInstancesData.h
  include/tencentcloud/wedata/v20210820/model/OrderField.h
  include/tencentcloud/wedata/v20210820/model/DescribeRelatedInstancesRequest.h
  include/tencentcloud/wedata/v20210820/model/DescribeRelatedInstancesResponse.h
  )

set(wedata_src
  src/v20210820/WedataClient.cpp
  src/v20210820/model/DescribeProjectResponse.cpp
  src/v20210820/model/DescribeProjectRequest.cpp
  src/v20210820/model/DescribeTaskInstancesRequest.cpp
  src/v20210820/model/DescribeTaskInstancesResponse.cpp
  src/v20210820/model/TaskInstanceInfo.cpp
  src/v20210820/model/DescribeTaskInstancesData.cpp
  src/v20210820/model/OrderField.cpp
  src/v20210820/model/DescribeRelatedInstancesRequest.cpp
  src/v20210820/model/DescribeRelatedInstancesResponse.cpp
  )

set(wedata_include
    include/tencentcloud/wedata
  )

add_library(wedata ${LIB_TYPE}
  ${wedata_public_header}
  ${wedata_public_header_model}
  ${wedata_src})

set_target_properties(wedata
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}wedata
  )

target_include_directories(wedata
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(wedata
  core)

#install(FILES ${wedata_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wedata/v20210820)
#install(FILES ${wedata_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wedata/v20210820/model)
install(DIRECTORY ${wedata_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS wedata
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
