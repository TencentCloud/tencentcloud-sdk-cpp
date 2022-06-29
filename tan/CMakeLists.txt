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

set(tan_public_header
  include/tencentcloud/tan/v20220420/TanClient.h
  )

set(tan_public_header_model
  include/tencentcloud/tan/v20220420/model/CreateBlockNodeRecordsRequest.h
  include/tencentcloud/tan/v20220420/model/CreateBlockNodeRecordsResponse.h
  )

set(tan_src
  src/v20220420/TanClient.cpp
  src/v20220420/model/CreateBlockNodeRecordsRequest.cpp
  src/v20220420/model/CreateBlockNodeRecordsResponse.cpp
  )

set(tan_include
    include/tencentcloud/tan
  )

add_library(tan ${LIB_TYPE}
  ${tan_public_header}
  ${tan_public_header_model}
  ${tan_src})

set_target_properties(tan
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tan
  )

target_include_directories(tan
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tan
  core)

#install(FILES ${tan_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tan/v20220420)
#install(FILES ${tan_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tan/v20220420/model)
install(DIRECTORY ${tan_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tan
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
