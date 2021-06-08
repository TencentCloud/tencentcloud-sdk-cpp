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

set(wav_public_header
  include/tencentcloud/wav/v20210129/WavClient.h
  )

set(wav_public_header_model
  include/tencentcloud/wav/v20210129/model/QueryActivityLiveCodeListRequest.h
  include/tencentcloud/wav/v20210129/model/QueryActivityLiveCodeListResponse.h
  include/tencentcloud/wav/v20210129/model/LiveCodeDetail.h
  )

set(wav_src
  src/v20210129/WavClient.cpp
  src/v20210129/model/QueryActivityLiveCodeListRequest.cpp
  src/v20210129/model/QueryActivityLiveCodeListResponse.cpp
  src/v20210129/model/LiveCodeDetail.cpp
  )

set(wav_include
    include/tencentcloud/wav
  )

add_library(wav ${LIB_TYPE}
  ${wav_public_header}
  ${wav_public_header_model}
  ${wav_src})

set_target_properties(wav
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}wav
  )

target_include_directories(wav
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(wav
  core)

#install(FILES ${wav_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wav/v20210129)
#install(FILES ${wav_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wav/v20210129/model)
install(DIRECTORY ${wav_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS wav
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
