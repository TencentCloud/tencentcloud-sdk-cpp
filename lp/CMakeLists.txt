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

set(lp_public_header
  include/tencentcloud/lp/v20200224/LpClient.h
  )

set(lp_public_header_model
  include/tencentcloud/lp/v20200224/model/QueryLoginProtectionRequest.h
  include/tencentcloud/lp/v20200224/model/QueryLoginProtectionResponse.h
  )

set(lp_src
  src/v20200224/LpClient.cpp
  src/v20200224/model/QueryLoginProtectionRequest.cpp
  src/v20200224/model/QueryLoginProtectionResponse.cpp
  )

set(lp_include
    include/tencentcloud/lp
  )

add_library(lp ${LIB_TYPE}
  ${lp_public_header}
  ${lp_public_header_model}
  ${lp_src})

set_target_properties(lp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}lp
  )

target_include_directories(lp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(lp
  core)

#install(FILES ${lp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/lp/v20200224)
#install(FILES ${lp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/lp/v20200224/model)
install(DIRECTORY ${lp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS lp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
