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

set(teo_public_header
  include/tencentcloud/teo/v20220106/TeoClient.h
  )

set(teo_public_header_model
  include/tencentcloud/teo/v20220106/model/CreatePurgeTaskResponse.h
  include/tencentcloud/teo/v20220106/model/CreatePurgeTaskRequest.h
  include/tencentcloud/teo/v20220106/model/DescribePurgeTasksRequest.h
  include/tencentcloud/teo/v20220106/model/Zone.h
  include/tencentcloud/teo/v20220106/model/DescribeZonesRequest.h
  include/tencentcloud/teo/v20220106/model/DescribeZonesResponse.h
  include/tencentcloud/teo/v20220106/model/FailReason.h
  include/tencentcloud/teo/v20220106/model/Task.h
  include/tencentcloud/teo/v20220106/model/DescribePurgeTasksResponse.h
  include/tencentcloud/teo/v20220106/model/ZoneFilter.h
  )

set(teo_src
  src/v20220106/TeoClient.cpp
  src/v20220106/model/CreatePurgeTaskResponse.cpp
  src/v20220106/model/CreatePurgeTaskRequest.cpp
  src/v20220106/model/DescribePurgeTasksRequest.cpp
  src/v20220106/model/Zone.cpp
  src/v20220106/model/DescribeZonesRequest.cpp
  src/v20220106/model/DescribeZonesResponse.cpp
  src/v20220106/model/FailReason.cpp
  src/v20220106/model/Task.cpp
  src/v20220106/model/DescribePurgeTasksResponse.cpp
  src/v20220106/model/ZoneFilter.cpp
  )

set(teo_include
    include/tencentcloud/teo
  )

add_library(teo ${LIB_TYPE}
  ${teo_public_header}
  ${teo_public_header_model}
  ${teo_src})

set_target_properties(teo
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}teo
  )

target_include_directories(teo
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(teo
  core)

#install(FILES ${teo_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/teo/v20220106)
#install(FILES ${teo_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/teo/v20220106/model)
install(DIRECTORY ${teo_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS teo
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
