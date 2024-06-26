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

set(vdb_public_header
  include/tencentcloud/vdb/v20230616/VdbClient.h
  )

set(vdb_public_header_model
  include/tencentcloud/vdb/v20230616/model/DescribeInstancesRequest.h
  include/tencentcloud/vdb/v20230616/model/InstanceInfo.h
  include/tencentcloud/vdb/v20230616/model/Tag.h
  include/tencentcloud/vdb/v20230616/model/DescribeInstancesResponse.h
  include/tencentcloud/vdb/v20230616/model/Network.h
  )

set(vdb_src
  src/v20230616/VdbClient.cpp
  src/v20230616/model/DescribeInstancesRequest.cpp
  src/v20230616/model/InstanceInfo.cpp
  src/v20230616/model/Tag.cpp
  src/v20230616/model/DescribeInstancesResponse.cpp
  src/v20230616/model/Network.cpp
  )

set(vdb_include
    include/tencentcloud/vdb
  )

add_library(vdb ${LIB_TYPE}
  ${vdb_public_header}
  ${vdb_public_header_model}
  ${vdb_src})

set_target_properties(vdb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}vdb
  )

target_include_directories(vdb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(vdb
  core)

#install(FILES ${vdb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vdb/v20230616)
#install(FILES ${vdb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vdb/v20230616/model)
install(DIRECTORY ${vdb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS vdb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
