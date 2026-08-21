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

set(portal_public_header
  include/tencentcloud/portal/v20230413/PortalClient.h
  )

set(portal_public_header_model
  include/tencentcloud/portal/v20230413/model/SearchDocumentItem.h
  include/tencentcloud/portal/v20230413/model/SearchDocumentsResponse.h
  include/tencentcloud/portal/v20230413/model/SearchDocumentsRequest.h
  )

set(portal_src
  src/v20230413/PortalClient.cpp
  src/v20230413/model/SearchDocumentItem.cpp
  src/v20230413/model/SearchDocumentsResponse.cpp
  src/v20230413/model/SearchDocumentsRequest.cpp
  )

set(portal_include
    include/tencentcloud/portal
  )

add_library(portal ${LIB_TYPE}
  ${portal_public_header}
  ${portal_public_header_model}
  ${portal_src})

set_target_properties(portal
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}portal
  )

target_include_directories(portal
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(portal
  core)

#install(FILES ${portal_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/portal/v20230413)
#install(FILES ${portal_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/portal/v20230413/model)
install(DIRECTORY ${portal_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS portal
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
