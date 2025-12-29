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

set(cloudmate_public_header
  include/tencentcloud/cloudmate/v20251030/CloudmateClient.h
  )

set(cloudmate_public_header_model
  include/tencentcloud/cloudmate/v20251030/model/CloudMateAgentRequest.h
  include/tencentcloud/cloudmate/v20251030/model/CloudMateAgentResponse.h
  include/tencentcloud/cloudmate/v20251030/model/ChatEventContentPart.h
  include/tencentcloud/cloudmate/v20251030/model/ChatContent.h
  )

set(cloudmate_src
  src/v20251030/CloudmateClient.cpp
  src/v20251030/model/CloudMateAgentRequest.cpp
  src/v20251030/model/CloudMateAgentResponse.cpp
  src/v20251030/model/ChatEventContentPart.cpp
  src/v20251030/model/ChatContent.cpp
  )

set(cloudmate_include
    include/tencentcloud/cloudmate
  )

add_library(cloudmate ${LIB_TYPE}
  ${cloudmate_public_header}
  ${cloudmate_public_header_model}
  ${cloudmate_src})

set_target_properties(cloudmate
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cloudmate
  )

target_include_directories(cloudmate
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cloudmate
  core)

#install(FILES ${cloudmate_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudmate/v20251030)
#install(FILES ${cloudmate_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudmate/v20251030/model)
install(DIRECTORY ${cloudmate_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cloudmate
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
