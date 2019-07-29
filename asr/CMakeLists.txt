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

set(asr_public_header
  include/tencentcloud/asr/v20190614/AsrClient.h
  )

set(asr_public_header_model
  include/tencentcloud/asr/v20190614/model/SentenceRecognitionRequest.h
  include/tencentcloud/asr/v20190614/model/SentenceRecognitionResponse.h
  )

set(asr_src
  src/v20190614/AsrClient.cpp
  src/v20190614/model/SentenceRecognitionRequest.cpp
  src/v20190614/model/SentenceRecognitionResponse.cpp
  )

set(asr_include
    include/tencentcloud/asr
  )

add_library(asr ${LIB_TYPE}
  ${asr_public_header}
  ${asr_public_header_model}
  ${asr_src})

set_target_properties(asr
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}asr
  )

target_include_directories(asr
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(asr
  core)

#install(FILES ${asr_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/asr/v20190614)
#install(FILES ${asr_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/asr/v20190614/model)
install(DIRECTORY ${asr_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS asr
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
