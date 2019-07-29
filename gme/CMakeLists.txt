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

set(gme_public_header
  include/tencentcloud/gme/v20180711/GmeClient.h
  )

set(gme_public_header_model
  include/tencentcloud/gme/v20180711/model/DescribeFilterResultListResponse.h
  include/tencentcloud/gme/v20180711/model/VoiceFilter.h
  include/tencentcloud/gme/v20180711/model/VoiceFilterRequest.h
  include/tencentcloud/gme/v20180711/model/VoiceFilterResponse.h
  include/tencentcloud/gme/v20180711/model/DescribeFilterResultListRequest.h
  include/tencentcloud/gme/v20180711/model/VoiceFilterInfo.h
  include/tencentcloud/gme/v20180711/model/DescribeFilterResultResponse.h
  include/tencentcloud/gme/v20180711/model/DescribeFilterResultRequest.h
  )

set(gme_src
  src/v20180711/GmeClient.cpp
  src/v20180711/model/DescribeFilterResultListResponse.cpp
  src/v20180711/model/VoiceFilter.cpp
  src/v20180711/model/VoiceFilterRequest.cpp
  src/v20180711/model/VoiceFilterResponse.cpp
  src/v20180711/model/DescribeFilterResultListRequest.cpp
  src/v20180711/model/VoiceFilterInfo.cpp
  src/v20180711/model/DescribeFilterResultResponse.cpp
  src/v20180711/model/DescribeFilterResultRequest.cpp
  )

set(gme_include
    include/tencentcloud/gme
  )

add_library(gme ${LIB_TYPE}
  ${gme_public_header}
  ${gme_public_header_model}
  ${gme_src})

set_target_properties(gme
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}gme
  )

target_include_directories(gme
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(gme
  core)

#install(FILES ${gme_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gme/v20180711)
#install(FILES ${gme_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gme/v20180711/model)
install(DIRECTORY ${gme_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS gme
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
