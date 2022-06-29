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

set(bi_public_header
  include/tencentcloud/bi/v20220105/BiClient.h
  )

set(bi_public_header_model
  include/tencentcloud/bi/v20220105/model/CreateEmbedTokenResponse.h
  include/tencentcloud/bi/v20220105/model/ApplyEmbedIntervalRequest.h
  include/tencentcloud/bi/v20220105/model/ApplyEmbedTokenInfo.h
  include/tencentcloud/bi/v20220105/model/ApplyEmbedIntervalResponse.h
  include/tencentcloud/bi/v20220105/model/CreateEmbedTokenRequest.h
  include/tencentcloud/bi/v20220105/model/EmbedTokenInfo.h
  )

set(bi_src
  src/v20220105/BiClient.cpp
  src/v20220105/model/CreateEmbedTokenResponse.cpp
  src/v20220105/model/ApplyEmbedIntervalRequest.cpp
  src/v20220105/model/ApplyEmbedTokenInfo.cpp
  src/v20220105/model/ApplyEmbedIntervalResponse.cpp
  src/v20220105/model/CreateEmbedTokenRequest.cpp
  src/v20220105/model/EmbedTokenInfo.cpp
  )

set(bi_include
    include/tencentcloud/bi
  )

add_library(bi ${LIB_TYPE}
  ${bi_public_header}
  ${bi_public_header_model}
  ${bi_src})

set_target_properties(bi
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}bi
  )

target_include_directories(bi
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(bi
  core)

#install(FILES ${bi_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bi/v20220105)
#install(FILES ${bi_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bi/v20220105/model)
install(DIRECTORY ${bi_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS bi
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
