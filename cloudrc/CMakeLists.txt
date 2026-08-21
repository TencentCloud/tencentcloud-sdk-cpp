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

set(cloudrc_public_header
  include/tencentcloud/cloudrc/v20240606/CloudrcClient.h
  )

set(cloudrc_public_header_model
  include/tencentcloud/cloudrc/v20240606/model/SearchResourcesResponse.h
  include/tencentcloud/cloudrc/v20240606/model/ResourceSummary.h
  include/tencentcloud/cloudrc/v20240606/model/SearchResourcesRequest.h
  include/tencentcloud/cloudrc/v20240606/model/ExtendedFilter.h
  include/tencentcloud/cloudrc/v20240606/model/Tag.h
  include/tencentcloud/cloudrc/v20240606/model/DescribeResourceRequest.h
  include/tencentcloud/cloudrc/v20240606/model/DescribeResourceResponse.h
  )

set(cloudrc_src
  src/v20240606/CloudrcClient.cpp
  src/v20240606/model/SearchResourcesResponse.cpp
  src/v20240606/model/ResourceSummary.cpp
  src/v20240606/model/SearchResourcesRequest.cpp
  src/v20240606/model/ExtendedFilter.cpp
  src/v20240606/model/Tag.cpp
  src/v20240606/model/DescribeResourceRequest.cpp
  src/v20240606/model/DescribeResourceResponse.cpp
  )

set(cloudrc_include
    include/tencentcloud/cloudrc
  )

add_library(cloudrc ${LIB_TYPE}
  ${cloudrc_public_header}
  ${cloudrc_public_header_model}
  ${cloudrc_src})

set_target_properties(cloudrc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cloudrc
  )

target_include_directories(cloudrc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cloudrc
  core)

#install(FILES ${cloudrc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudrc/v20240606)
#install(FILES ${cloudrc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudrc/v20240606/model)
install(DIRECTORY ${cloudrc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cloudrc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
