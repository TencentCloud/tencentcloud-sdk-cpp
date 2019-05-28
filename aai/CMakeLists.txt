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

set(aai_public_header
  include/tencentcloud/aai/v20180522/AaiClient.h
  )

set(aai_public_header_model
  include/tencentcloud/aai/v20180522/model/ChatRequest.h
  include/tencentcloud/aai/v20180522/model/SentenceRecognitionResponse.h
  include/tencentcloud/aai/v20180522/model/SimultaneousInterpretingResponse.h
  include/tencentcloud/aai/v20180522/model/TextToVoiceResponse.h
  include/tencentcloud/aai/v20180522/model/SimultaneousInterpretingRequest.h
  include/tencentcloud/aai/v20180522/model/SentenceRecognitionRequest.h
  include/tencentcloud/aai/v20180522/model/TextToVoiceRequest.h
  include/tencentcloud/aai/v20180522/model/ChatResponse.h
  )

set(aai_src
  src/v20180522/AaiClient.cpp
  src/v20180522/model/ChatRequest.cpp
  src/v20180522/model/SentenceRecognitionResponse.cpp
  src/v20180522/model/SimultaneousInterpretingResponse.cpp
  src/v20180522/model/TextToVoiceResponse.cpp
  src/v20180522/model/SimultaneousInterpretingRequest.cpp
  src/v20180522/model/SentenceRecognitionRequest.cpp
  src/v20180522/model/TextToVoiceRequest.cpp
  src/v20180522/model/ChatResponse.cpp
  )

set(aai_include
    include/tencentcloud/aai
  )

add_library(aai ${LIB_TYPE}
  ${aai_public_header}
  ${aai_public_header_model}
  ${aai_src})

set_target_properties(aai
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}aai
  )

target_include_directories(aai
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(aai
  core)

#install(FILES ${aai_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/aai/v20180522)
#install(FILES ${aai_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/aai/v20180522/model)
install(DIRECTORY ${aai_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS aai
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
