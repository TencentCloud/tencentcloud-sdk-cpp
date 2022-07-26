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

set(dataintegration_public_header
  include/tencentcloud/dataintegration/v20220613/DataintegrationClient.h
  )

set(dataintegration_public_header_model
  include/tencentcloud/dataintegration/v20220613/model/SendMessageResponse.h
  include/tencentcloud/dataintegration/v20220613/model/BatchContent.h
  include/tencentcloud/dataintegration/v20220613/model/SendMessageRequest.h
  )

set(dataintegration_src
  src/v20220613/DataintegrationClient.cpp
  src/v20220613/model/SendMessageResponse.cpp
  src/v20220613/model/BatchContent.cpp
  src/v20220613/model/SendMessageRequest.cpp
  )

set(dataintegration_include
    include/tencentcloud/dataintegration
  )

add_library(dataintegration ${LIB_TYPE}
  ${dataintegration_public_header}
  ${dataintegration_public_header_model}
  ${dataintegration_src})

set_target_properties(dataintegration
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dataintegration
  )

target_include_directories(dataintegration
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dataintegration
  core)

#install(FILES ${dataintegration_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dataintegration/v20220613)
#install(FILES ${dataintegration_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dataintegration/v20220613/model)
install(DIRECTORY ${dataintegration_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dataintegration
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
