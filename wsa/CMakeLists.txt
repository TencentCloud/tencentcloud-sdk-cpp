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

set(wsa_public_header
  include/tencentcloud/wsa/v20250508/WsaClient.h
  )

set(wsa_public_header_model
  include/tencentcloud/wsa/v20250508/model/SearchProRequest.h
  include/tencentcloud/wsa/v20250508/model/SearchProResponse.h
  )

set(wsa_src
  src/v20250508/WsaClient.cpp
  src/v20250508/model/SearchProRequest.cpp
  src/v20250508/model/SearchProResponse.cpp
  )

set(wsa_include
    include/tencentcloud/wsa
  )

add_library(wsa ${LIB_TYPE}
  ${wsa_public_header}
  ${wsa_public_header_model}
  ${wsa_src})

set_target_properties(wsa
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}wsa
  )

target_include_directories(wsa
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(wsa
  core)

#install(FILES ${wsa_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wsa/v20250508)
#install(FILES ${wsa_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wsa/v20250508/model)
install(DIRECTORY ${wsa_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS wsa
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
