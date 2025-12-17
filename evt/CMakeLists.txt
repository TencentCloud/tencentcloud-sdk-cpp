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

set(evt_public_header
  include/tencentcloud/evt/v20250217/EvtClient.h
  )

set(evt_public_header_model
  include/tencentcloud/evt/v20250217/model/CompleteApprovalRequest.h
  include/tencentcloud/evt/v20250217/model/CompleteApprovalResponse.h
  include/tencentcloud/evt/v20250217/model/CreateRoleUserResponse.h
  include/tencentcloud/evt/v20250217/model/CreateRoleUserRequest.h
  include/tencentcloud/evt/v20250217/model/UserAttribute.h
  )

set(evt_src
  src/v20250217/EvtClient.cpp
  src/v20250217/model/CompleteApprovalRequest.cpp
  src/v20250217/model/CompleteApprovalResponse.cpp
  src/v20250217/model/CreateRoleUserResponse.cpp
  src/v20250217/model/CreateRoleUserRequest.cpp
  src/v20250217/model/UserAttribute.cpp
  )

set(evt_include
    include/tencentcloud/evt
  )

add_library(evt ${LIB_TYPE}
  ${evt_public_header}
  ${evt_public_header_model}
  ${evt_src})

set_target_properties(evt
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}evt
  )

target_include_directories(evt
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(evt
  core)

#install(FILES ${evt_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/evt/v20250217)
#install(FILES ${evt_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/evt/v20250217/model)
install(DIRECTORY ${evt_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS evt
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
