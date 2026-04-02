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

set(ga2_public_header
  include/tencentcloud/ga2/v20250115/Ga2Client.h
  )

set(ga2_public_header_model
  include/tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorResponse.h
  include/tencentcloud/ga2/v20250115/model/Tag.h
  include/tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorRequest.h
  include/tencentcloud/ga2/v20250115/model/DescribeCrossBorderSettlementRequest.h
  include/tencentcloud/ga2/v20250115/model/DescribeCrossBorderSettlementResponse.h
  )

set(ga2_src
  src/v20250115/Ga2Client.cpp
  src/v20250115/model/CreateGlobalAcceleratorResponse.cpp
  src/v20250115/model/Tag.cpp
  src/v20250115/model/CreateGlobalAcceleratorRequest.cpp
  src/v20250115/model/DescribeCrossBorderSettlementRequest.cpp
  src/v20250115/model/DescribeCrossBorderSettlementResponse.cpp
  )

set(ga2_include
    include/tencentcloud/ga2
  )

add_library(ga2 ${LIB_TYPE}
  ${ga2_public_header}
  ${ga2_public_header_model}
  ${ga2_src})

set_target_properties(ga2
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ga2
  )

target_include_directories(ga2
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ga2
  core)

#install(FILES ${ga2_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ga2/v20250115)
#install(FILES ${ga2_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ga2/v20250115/model)
install(DIRECTORY ${ga2_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ga2
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
