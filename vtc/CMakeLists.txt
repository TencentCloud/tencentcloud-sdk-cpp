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

set(vtc_public_header
  include/tencentcloud/vtc/v20240223/VtcClient.h
  )

set(vtc_public_header_model
  include/tencentcloud/vtc/v20240223/model/AsrTimestamps.h
  include/tencentcloud/vtc/v20240223/model/ConfirmVideoTranslateJobRequest.h
  include/tencentcloud/vtc/v20240223/model/SubmitVideoTranslateJobRequest.h
  include/tencentcloud/vtc/v20240223/model/ConfirmVideoTranslateJobResponse.h
  include/tencentcloud/vtc/v20240223/model/DescribeVideoTranslateJobRequest.h
  include/tencentcloud/vtc/v20240223/model/SubmitVideoTranslateJobResponse.h
  include/tencentcloud/vtc/v20240223/model/TranslateResult.h
  include/tencentcloud/vtc/v20240223/model/AudioTranslateResult.h
  include/tencentcloud/vtc/v20240223/model/DescribeVideoTranslateJobResponse.h
  )

set(vtc_src
  src/v20240223/VtcClient.cpp
  src/v20240223/model/AsrTimestamps.cpp
  src/v20240223/model/ConfirmVideoTranslateJobRequest.cpp
  src/v20240223/model/SubmitVideoTranslateJobRequest.cpp
  src/v20240223/model/ConfirmVideoTranslateJobResponse.cpp
  src/v20240223/model/DescribeVideoTranslateJobRequest.cpp
  src/v20240223/model/SubmitVideoTranslateJobResponse.cpp
  src/v20240223/model/TranslateResult.cpp
  src/v20240223/model/AudioTranslateResult.cpp
  src/v20240223/model/DescribeVideoTranslateJobResponse.cpp
  )

set(vtc_include
    include/tencentcloud/vtc
  )

add_library(vtc ${LIB_TYPE}
  ${vtc_public_header}
  ${vtc_public_header_model}
  ${vtc_src})

set_target_properties(vtc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}vtc
  )

target_include_directories(vtc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(vtc
  core)

#install(FILES ${vtc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vtc/v20240223)
#install(FILES ${vtc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vtc/v20240223/model)
install(DIRECTORY ${vtc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS vtc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
