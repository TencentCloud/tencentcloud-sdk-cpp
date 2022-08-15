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

set(tts_public_header
  include/tencentcloud/tts/v20190823/TtsClient.h
  )

set(tts_public_header_model
  include/tencentcloud/tts/v20190823/model/TextToVoiceResponse.h
  include/tencentcloud/tts/v20190823/model/CreateTtsTaskResponse.h
  include/tencentcloud/tts/v20190823/model/DescribeTtsTaskStatusResponse.h
  include/tencentcloud/tts/v20190823/model/CreateTtsTaskRespData.h
  include/tencentcloud/tts/v20190823/model/DescribeTtsTaskStatusRespData.h
  include/tencentcloud/tts/v20190823/model/Subtitle.h
  include/tencentcloud/tts/v20190823/model/DescribeTtsTaskStatusRequest.h
  include/tencentcloud/tts/v20190823/model/CreateTtsTaskRequest.h
  include/tencentcloud/tts/v20190823/model/TextToVoiceRequest.h
  )

set(tts_src
  src/v20190823/TtsClient.cpp
  src/v20190823/model/TextToVoiceResponse.cpp
  src/v20190823/model/CreateTtsTaskResponse.cpp
  src/v20190823/model/DescribeTtsTaskStatusResponse.cpp
  src/v20190823/model/CreateTtsTaskRespData.cpp
  src/v20190823/model/DescribeTtsTaskStatusRespData.cpp
  src/v20190823/model/Subtitle.cpp
  src/v20190823/model/DescribeTtsTaskStatusRequest.cpp
  src/v20190823/model/CreateTtsTaskRequest.cpp
  src/v20190823/model/TextToVoiceRequest.cpp
  )

set(tts_include
    include/tencentcloud/tts
  )

add_library(tts ${LIB_TYPE}
  ${tts_public_header}
  ${tts_public_header_model}
  ${tts_src})

set_target_properties(tts
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tts
  )

target_include_directories(tts
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tts
  core)

#install(FILES ${tts_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tts/v20190823)
#install(FILES ${tts_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tts/v20190823/model)
install(DIRECTORY ${tts_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tts
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
