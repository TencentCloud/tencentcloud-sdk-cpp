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

set(hunyuan_public_header
  include/tencentcloud/hunyuan/v20230901/HunyuanClient.h
  )

set(hunyuan_public_header_model
  include/tencentcloud/hunyuan/v20230901/model/ChatCompletionsRequest.h
  include/tencentcloud/hunyuan/v20230901/model/LogoParam.h
  include/tencentcloud/hunyuan/v20230901/model/GetEmbeddingRequest.h
  include/tencentcloud/hunyuan/v20230901/model/ImageUrl.h
  include/tencentcloud/hunyuan/v20230901/model/Content.h
  include/tencentcloud/hunyuan/v20230901/model/SubmitHunyuanImageJobRequest.h
  include/tencentcloud/hunyuan/v20230901/model/Usage.h
  include/tencentcloud/hunyuan/v20230901/model/QueryHunyuanImageJobRequest.h
  include/tencentcloud/hunyuan/v20230901/model/Tool.h
  include/tencentcloud/hunyuan/v20230901/model/SearchResult.h
  include/tencentcloud/hunyuan/v20230901/model/Choice.h
  include/tencentcloud/hunyuan/v20230901/model/GetTokenCountResponse.h
  include/tencentcloud/hunyuan/v20230901/model/EmbeddingData.h
  include/tencentcloud/hunyuan/v20230901/model/ToolFunction.h
  include/tencentcloud/hunyuan/v20230901/model/Delta.h
  include/tencentcloud/hunyuan/v20230901/model/ToolCall.h
  include/tencentcloud/hunyuan/v20230901/model/ToolCallFunction.h
  include/tencentcloud/hunyuan/v20230901/model/LogoRect.h
  include/tencentcloud/hunyuan/v20230901/model/TextToImageLiteRequest.h
  include/tencentcloud/hunyuan/v20230901/model/SubmitHunyuanImageJobResponse.h
  include/tencentcloud/hunyuan/v20230901/model/QueryHunyuanImageJobResponse.h
  include/tencentcloud/hunyuan/v20230901/model/GetEmbeddingResponse.h
  include/tencentcloud/hunyuan/v20230901/model/ErrorMsg.h
  include/tencentcloud/hunyuan/v20230901/model/SearchInfo.h
  include/tencentcloud/hunyuan/v20230901/model/GetTokenCountRequest.h
  include/tencentcloud/hunyuan/v20230901/model/TextToImageLiteResponse.h
  include/tencentcloud/hunyuan/v20230901/model/Message.h
  include/tencentcloud/hunyuan/v20230901/model/ChatCompletionsResponse.h
  include/tencentcloud/hunyuan/v20230901/model/EmbeddingUsage.h
  )

set(hunyuan_src
  src/v20230901/HunyuanClient.cpp
  src/v20230901/model/ChatCompletionsRequest.cpp
  src/v20230901/model/LogoParam.cpp
  src/v20230901/model/GetEmbeddingRequest.cpp
  src/v20230901/model/ImageUrl.cpp
  src/v20230901/model/Content.cpp
  src/v20230901/model/SubmitHunyuanImageJobRequest.cpp
  src/v20230901/model/Usage.cpp
  src/v20230901/model/QueryHunyuanImageJobRequest.cpp
  src/v20230901/model/Tool.cpp
  src/v20230901/model/SearchResult.cpp
  src/v20230901/model/Choice.cpp
  src/v20230901/model/GetTokenCountResponse.cpp
  src/v20230901/model/EmbeddingData.cpp
  src/v20230901/model/ToolFunction.cpp
  src/v20230901/model/Delta.cpp
  src/v20230901/model/ToolCall.cpp
  src/v20230901/model/ToolCallFunction.cpp
  src/v20230901/model/LogoRect.cpp
  src/v20230901/model/TextToImageLiteRequest.cpp
  src/v20230901/model/SubmitHunyuanImageJobResponse.cpp
  src/v20230901/model/QueryHunyuanImageJobResponse.cpp
  src/v20230901/model/GetEmbeddingResponse.cpp
  src/v20230901/model/ErrorMsg.cpp
  src/v20230901/model/SearchInfo.cpp
  src/v20230901/model/GetTokenCountRequest.cpp
  src/v20230901/model/TextToImageLiteResponse.cpp
  src/v20230901/model/Message.cpp
  src/v20230901/model/ChatCompletionsResponse.cpp
  src/v20230901/model/EmbeddingUsage.cpp
  )

set(hunyuan_include
    include/tencentcloud/hunyuan
  )

add_library(hunyuan ${LIB_TYPE}
  ${hunyuan_public_header}
  ${hunyuan_public_header_model}
  ${hunyuan_src})

set_target_properties(hunyuan
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}hunyuan
  )

target_include_directories(hunyuan
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(hunyuan
  core)

#install(FILES ${hunyuan_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/hunyuan/v20230901)
#install(FILES ${hunyuan_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/hunyuan/v20230901/model)
install(DIRECTORY ${hunyuan_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS hunyuan
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
