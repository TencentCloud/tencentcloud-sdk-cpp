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

set(tmt_public_header
  include/tencentcloud/tmt/v20180321/TmtClient.h
  )

set(tmt_public_header_model
  include/tencentcloud/tmt/v20180321/model/ImageTranslateResponse.h
  include/tencentcloud/tmt/v20180321/model/SpeechTranslateResponse.h
  include/tencentcloud/tmt/v20180321/model/Task.h
  include/tencentcloud/tmt/v20180321/model/ItemValue.h
  include/tencentcloud/tmt/v20180321/model/GetFileTranslateRequest.h
  include/tencentcloud/tmt/v20180321/model/FileTranslateRequest.h
  include/tencentcloud/tmt/v20180321/model/ImageTranslateLLMRequest.h
  include/tencentcloud/tmt/v20180321/model/ImageRecord.h
  include/tencentcloud/tmt/v20180321/model/LanguageDetectRequest.h
  include/tencentcloud/tmt/v20180321/model/TextTranslateBatchResponse.h
  include/tencentcloud/tmt/v20180321/model/TransDetail.h
  include/tencentcloud/tmt/v20180321/model/LanguageDetectResponse.h
  include/tencentcloud/tmt/v20180321/model/SpeechTranslateRequest.h
  include/tencentcloud/tmt/v20180321/model/TextTranslateRequest.h
  include/tencentcloud/tmt/v20180321/model/TextTranslateBatchRequest.h
  include/tencentcloud/tmt/v20180321/model/GetFileTranslateResponse.h
  include/tencentcloud/tmt/v20180321/model/FileTranslateResponse.h
  include/tencentcloud/tmt/v20180321/model/GetFileTranslateData.h
  include/tencentcloud/tmt/v20180321/model/BoundingBox.h
  include/tencentcloud/tmt/v20180321/model/TextTranslateResponse.h
  include/tencentcloud/tmt/v20180321/model/ImageTranslateRequest.h
  include/tencentcloud/tmt/v20180321/model/ImageTranslateLLMResponse.h
  )

set(tmt_src
  src/v20180321/TmtClient.cpp
  src/v20180321/model/ImageTranslateResponse.cpp
  src/v20180321/model/SpeechTranslateResponse.cpp
  src/v20180321/model/Task.cpp
  src/v20180321/model/ItemValue.cpp
  src/v20180321/model/GetFileTranslateRequest.cpp
  src/v20180321/model/FileTranslateRequest.cpp
  src/v20180321/model/ImageTranslateLLMRequest.cpp
  src/v20180321/model/ImageRecord.cpp
  src/v20180321/model/LanguageDetectRequest.cpp
  src/v20180321/model/TextTranslateBatchResponse.cpp
  src/v20180321/model/TransDetail.cpp
  src/v20180321/model/LanguageDetectResponse.cpp
  src/v20180321/model/SpeechTranslateRequest.cpp
  src/v20180321/model/TextTranslateRequest.cpp
  src/v20180321/model/TextTranslateBatchRequest.cpp
  src/v20180321/model/GetFileTranslateResponse.cpp
  src/v20180321/model/FileTranslateResponse.cpp
  src/v20180321/model/GetFileTranslateData.cpp
  src/v20180321/model/BoundingBox.cpp
  src/v20180321/model/TextTranslateResponse.cpp
  src/v20180321/model/ImageTranslateRequest.cpp
  src/v20180321/model/ImageTranslateLLMResponse.cpp
  )

set(tmt_include
    include/tencentcloud/tmt
  )

add_library(tmt ${LIB_TYPE}
  ${tmt_public_header}
  ${tmt_public_header_model}
  ${tmt_src})

set_target_properties(tmt
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tmt
  )

target_include_directories(tmt
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tmt
  core)

#install(FILES ${tmt_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tmt/v20180321)
#install(FILES ${tmt_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tmt/v20180321/model)
install(DIRECTORY ${tmt_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tmt
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
