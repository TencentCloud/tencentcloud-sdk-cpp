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

set(hai_public_header
  include/tencentcloud/hai/v20230812/HaiClient.h
  )

set(hai_public_header_model
  include/tencentcloud/hai/v20230812/model/TerminateInstancesResponse.h
  include/tencentcloud/hai/v20230812/model/SystemDisk.h
  include/tencentcloud/hai/v20230812/model/TerminateInstancesRequest.h
  include/tencentcloud/hai/v20230812/model/RunInstancesResponse.h
  include/tencentcloud/hai/v20230812/model/RunInstancesRequest.h
  )

set(hai_src
  src/v20230812/HaiClient.cpp
  src/v20230812/model/TerminateInstancesResponse.cpp
  src/v20230812/model/SystemDisk.cpp
  src/v20230812/model/TerminateInstancesRequest.cpp
  src/v20230812/model/RunInstancesResponse.cpp
  src/v20230812/model/RunInstancesRequest.cpp
  )

set(hai_include
    include/tencentcloud/hai
  )

add_library(hai ${LIB_TYPE}
  ${hai_public_header}
  ${hai_public_header_model}
  ${hai_src})

set_target_properties(hai
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}hai
  )

target_include_directories(hai
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(hai
  core)

#install(FILES ${hai_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/hai/v20230812)
#install(FILES ${hai_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/hai/v20230812/model)
install(DIRECTORY ${hai_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS hai
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
