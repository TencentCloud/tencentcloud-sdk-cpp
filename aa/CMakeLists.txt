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

set(aa_public_header
  include/tencentcloud/aa/v20200224/AaClient.h
  )

set(aa_public_header_model
  include/tencentcloud/aa/v20200224/model/QueryActivityAntiRushResponse.h
  include/tencentcloud/aa/v20200224/model/QueryActivityAntiRushRequest.h
  )

set(aa_src
  src/v20200224/AaClient.cpp
  src/v20200224/model/QueryActivityAntiRushResponse.cpp
  src/v20200224/model/QueryActivityAntiRushRequest.cpp
  )

set(aa_include
    include/tencentcloud/aa
  )

add_library(aa ${LIB_TYPE}
  ${aa_public_header}
  ${aa_public_header_model}
  ${aa_src})

set_target_properties(aa
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}aa
  )

target_include_directories(aa
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(aa
  core)

#install(FILES ${aa_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/aa/v20200224)
#install(FILES ${aa_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/aa/v20200224/model)
install(DIRECTORY ${aa_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS aa
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
