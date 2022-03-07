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

set(casb_public_header
  include/tencentcloud/casb/v20200507/CasbClient.h
  )

set(casb_public_header_model
  include/tencentcloud/casb/v20200507/model/CopyCryptoColumnPolicyRequest.h
  include/tencentcloud/casb/v20200507/model/CryptoCopyColumnPolicyTableFilter.h
  include/tencentcloud/casb/v20200507/model/CopyCryptoColumnPolicyResponse.h
  )

set(casb_src
  src/v20200507/CasbClient.cpp
  src/v20200507/model/CopyCryptoColumnPolicyRequest.cpp
  src/v20200507/model/CryptoCopyColumnPolicyTableFilter.cpp
  src/v20200507/model/CopyCryptoColumnPolicyResponse.cpp
  )

set(casb_include
    include/tencentcloud/casb
  )

add_library(casb ${LIB_TYPE}
  ${casb_public_header}
  ${casb_public_header_model}
  ${casb_src})

set_target_properties(casb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}casb
  )

target_include_directories(casb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(casb
  core)

#install(FILES ${casb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/casb/v20200507)
#install(FILES ${casb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/casb/v20200507/model)
install(DIRECTORY ${casb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS casb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
