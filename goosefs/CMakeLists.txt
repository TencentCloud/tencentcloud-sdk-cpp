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

set(goosefs_public_header
  include/tencentcloud/goosefs/v20220519/GoosefsClient.h
  )

set(goosefs_public_header_model
  include/tencentcloud/goosefs/v20220519/model/CreateDataRepositoryTaskRequest.h
  include/tencentcloud/goosefs/v20220519/model/CreateDataRepositoryTaskResponse.h
  include/tencentcloud/goosefs/v20220519/model/DescribeDataRepositoryTaskStatusRequest.h
  include/tencentcloud/goosefs/v20220519/model/DescribeDataRepositoryTaskStatusResponse.h
  )

set(goosefs_src
  src/v20220519/GoosefsClient.cpp
  src/v20220519/model/CreateDataRepositoryTaskRequest.cpp
  src/v20220519/model/CreateDataRepositoryTaskResponse.cpp
  src/v20220519/model/DescribeDataRepositoryTaskStatusRequest.cpp
  src/v20220519/model/DescribeDataRepositoryTaskStatusResponse.cpp
  )

set(goosefs_include
    include/tencentcloud/goosefs
  )

add_library(goosefs ${LIB_TYPE}
  ${goosefs_public_header}
  ${goosefs_public_header_model}
  ${goosefs_src})

set_target_properties(goosefs
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}goosefs
  )

target_include_directories(goosefs
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(goosefs
  core)

#install(FILES ${goosefs_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/goosefs/v20220519)
#install(FILES ${goosefs_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/goosefs/v20220519/model)
install(DIRECTORY ${goosefs_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS goosefs
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
