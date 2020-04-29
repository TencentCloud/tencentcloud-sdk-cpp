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

set(rp_public_header
  include/tencentcloud/rp/v20200224/RpClient.h
  )

set(rp_public_header_model
  include/tencentcloud/rp/v20200224/model/QueryRegisterProtectionResponse.h
  include/tencentcloud/rp/v20200224/model/QueryRegisterProtectionRequest.h
  )

set(rp_src
  src/v20200224/RpClient.cpp
  src/v20200224/model/QueryRegisterProtectionResponse.cpp
  src/v20200224/model/QueryRegisterProtectionRequest.cpp
  )

set(rp_include
    include/tencentcloud/rp
  )

add_library(rp ${LIB_TYPE}
  ${rp_public_header}
  ${rp_public_header_model}
  ${rp_src})

set_target_properties(rp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}rp
  )

target_include_directories(rp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(rp
  core)

#install(FILES ${rp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rp/v20200224)
#install(FILES ${rp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rp/v20200224/model)
install(DIRECTORY ${rp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS rp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
