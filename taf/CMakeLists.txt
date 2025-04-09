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

set(taf_public_header
  include/tencentcloud/taf/v20200210/TafClient.h
  )

set(taf_public_header_model
  include/tencentcloud/taf/v20200210/model/ManagePortraitRiskResponse.h
  include/tencentcloud/taf/v20200210/model/ManagePortraitRiskOutput.h
  include/tencentcloud/taf/v20200210/model/ManagePortraitRiskInput.h
  include/tencentcloud/taf/v20200210/model/ManagePortraitRiskRequest.h
  include/tencentcloud/taf/v20200210/model/ManagePortraitRiskValueOutput.h
  )

set(taf_src
  src/v20200210/TafClient.cpp
  src/v20200210/model/ManagePortraitRiskResponse.cpp
  src/v20200210/model/ManagePortraitRiskOutput.cpp
  src/v20200210/model/ManagePortraitRiskInput.cpp
  src/v20200210/model/ManagePortraitRiskRequest.cpp
  src/v20200210/model/ManagePortraitRiskValueOutput.cpp
  )

set(taf_include
    include/tencentcloud/taf
  )

add_library(taf ${LIB_TYPE}
  ${taf_public_header}
  ${taf_public_header_model}
  ${taf_src})

set_target_properties(taf
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}taf
  )

target_include_directories(taf
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(taf
  core)

#install(FILES ${taf_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/taf/v20200210)
#install(FILES ${taf_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/taf/v20200210/model)
install(DIRECTORY ${taf_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS taf
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
