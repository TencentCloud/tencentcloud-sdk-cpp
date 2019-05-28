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

set(hcm_public_header
  include/tencentcloud/hcm/v20181106/HcmClient.h
  )

set(hcm_public_header_model
  include/tencentcloud/hcm/v20181106/model/Item.h
  include/tencentcloud/hcm/v20181106/model/EvaluationRequest.h
  include/tencentcloud/hcm/v20181106/model/EvaluationResponse.h
  include/tencentcloud/hcm/v20181106/model/ItemCoord.h
  )

set(hcm_src
  src/v20181106/HcmClient.cpp
  src/v20181106/model/Item.cpp
  src/v20181106/model/EvaluationRequest.cpp
  src/v20181106/model/EvaluationResponse.cpp
  src/v20181106/model/ItemCoord.cpp
  )

set(hcm_include
    include/tencentcloud/hcm
  )

add_library(hcm ${LIB_TYPE}
  ${hcm_public_header}
  ${hcm_public_header_model}
  ${hcm_src})

set_target_properties(hcm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}hcm
  )

target_include_directories(hcm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(hcm
  core)

#install(FILES ${hcm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/hcm/v20181106)
#install(FILES ${hcm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/hcm/v20181106/model)
install(DIRECTORY ${hcm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS hcm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
