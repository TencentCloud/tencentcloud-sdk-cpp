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

set(memcached_public_header
  include/tencentcloud/memcached/v20190318/MemcachedClient.h
  )

set(memcached_public_header_model
  include/tencentcloud/memcached/v20190318/model/DescribeInstancesRequest.h
  include/tencentcloud/memcached/v20190318/model/TagInfo.h
  include/tencentcloud/memcached/v20190318/model/DescribeInstancesResponse.h
  include/tencentcloud/memcached/v20190318/model/InstanceListInfo.h
  )

set(memcached_src
  src/v20190318/MemcachedClient.cpp
  src/v20190318/model/DescribeInstancesRequest.cpp
  src/v20190318/model/TagInfo.cpp
  src/v20190318/model/DescribeInstancesResponse.cpp
  src/v20190318/model/InstanceListInfo.cpp
  )

set(memcached_include
    include/tencentcloud/memcached
  )

add_library(memcached ${LIB_TYPE}
  ${memcached_public_header}
  ${memcached_public_header_model}
  ${memcached_src})

set_target_properties(memcached
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}memcached
  )

target_include_directories(memcached
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(memcached
  core)

#install(FILES ${memcached_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/memcached/v20190318)
#install(FILES ${memcached_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/memcached/v20190318/model)
install(DIRECTORY ${memcached_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS memcached
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
