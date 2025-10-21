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

set(ctsdb_public_header
  include/tencentcloud/ctsdb/v20230202/CtsdbClient.h
  )

set(ctsdb_public_header_model
  include/tencentcloud/ctsdb/v20230202/model/Tag.h
  include/tencentcloud/ctsdb/v20230202/model/Network.h
  include/tencentcloud/ctsdb/v20230202/model/DescribeClustersRequest.h
  include/tencentcloud/ctsdb/v20230202/model/Database.h
  include/tencentcloud/ctsdb/v20230202/model/DescribeDatabasesResponse.h
  include/tencentcloud/ctsdb/v20230202/model/Period.h
  include/tencentcloud/ctsdb/v20230202/model/DescribeDatabasesRequest.h
  include/tencentcloud/ctsdb/v20230202/model/Spec.h
  include/tencentcloud/ctsdb/v20230202/model/Filter.h
  include/tencentcloud/ctsdb/v20230202/model/Cluster.h
  include/tencentcloud/ctsdb/v20230202/model/DescribeClustersResponse.h
  include/tencentcloud/ctsdb/v20230202/model/Order.h
  include/tencentcloud/ctsdb/v20230202/model/Tenant.h
  )

set(ctsdb_src
  src/v20230202/CtsdbClient.cpp
  src/v20230202/model/Tag.cpp
  src/v20230202/model/Network.cpp
  src/v20230202/model/DescribeClustersRequest.cpp
  src/v20230202/model/Database.cpp
  src/v20230202/model/DescribeDatabasesResponse.cpp
  src/v20230202/model/Period.cpp
  src/v20230202/model/DescribeDatabasesRequest.cpp
  src/v20230202/model/Spec.cpp
  src/v20230202/model/Filter.cpp
  src/v20230202/model/Cluster.cpp
  src/v20230202/model/DescribeClustersResponse.cpp
  src/v20230202/model/Order.cpp
  src/v20230202/model/Tenant.cpp
  )

set(ctsdb_include
    include/tencentcloud/ctsdb
  )

add_library(ctsdb ${LIB_TYPE}
  ${ctsdb_public_header}
  ${ctsdb_public_header_model}
  ${ctsdb_src})

set_target_properties(ctsdb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ctsdb
  )

target_include_directories(ctsdb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ctsdb
  core)

#install(FILES ${ctsdb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ctsdb/v20230202)
#install(FILES ${ctsdb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ctsdb/v20230202/model)
install(DIRECTORY ${ctsdb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ctsdb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
