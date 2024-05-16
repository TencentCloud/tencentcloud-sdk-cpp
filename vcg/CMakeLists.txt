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

set(vcg_public_header
  include/tencentcloud/vcg/v20240404/VcgClient.h
  )

set(vcg_public_header_model
  include/tencentcloud/vcg/v20240404/model/DescribeVideoStylizationJobResponse.h
  include/tencentcloud/vcg/v20240404/model/SubmitVideoStylizationJobResponse.h
  include/tencentcloud/vcg/v20240404/model/DescribeVideoStylizationJobRequest.h
  include/tencentcloud/vcg/v20240404/model/SubmitVideoStylizationJobRequest.h
  )

set(vcg_src
  src/v20240404/VcgClient.cpp
  src/v20240404/model/DescribeVideoStylizationJobResponse.cpp
  src/v20240404/model/SubmitVideoStylizationJobResponse.cpp
  src/v20240404/model/DescribeVideoStylizationJobRequest.cpp
  src/v20240404/model/SubmitVideoStylizationJobRequest.cpp
  )

set(vcg_include
    include/tencentcloud/vcg
  )

add_library(vcg ${LIB_TYPE}
  ${vcg_public_header}
  ${vcg_public_header_model}
  ${vcg_src})

set_target_properties(vcg
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}vcg
  )

target_include_directories(vcg
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(vcg
  core)

#install(FILES ${vcg_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vcg/v20240404)
#install(FILES ${vcg_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vcg/v20240404/model)
install(DIRECTORY ${vcg_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS vcg
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
