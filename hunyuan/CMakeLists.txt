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
  include/tencentcloud/hunyuan/v20230901/model/Character.h
  include/tencentcloud/hunyuan/v20230901/model/Approximate.h
  include/tencentcloud/hunyuan/v20230901/model/TranslationChoice.h
  include/tencentcloud/hunyuan/v20230901/model/Usage.h
  include/tencentcloud/hunyuan/v20230901/model/LogoParam.h
  include/tencentcloud/hunyuan/v20230901/model/RunThreadRequest.h
  include/tencentcloud/hunyuan/v20230901/model/SubmitHunyuanImageChatJobRequest.h
  include/tencentcloud/hunyuan/v20230901/model/QueryHunyuanImageJobRequest.h
  include/tencentcloud/hunyuan/v20230901/model/File3D.h
  include/tencentcloud/hunyuan/v20230901/model/QueryHunyuanImageChatJobRequest.h
  include/tencentcloud/hunyuan/v20230901/model/EmbeddingData.h
  include/tencentcloud/hunyuan/v20230901/model/SetPayModeResponse.h
  include/tencentcloud/hunyuan/v20230901/model/TranslationDelta.h
  include/tencentcloud/hunyuan/v20230901/model/SongExt.h
  include/tencentcloud/hunyuan/v20230901/model/LogoRect.h
  include/tencentcloud/hunyuan/v20230901/model/SubmitHunyuanImageJobResponse.h
  include/tencentcloud/hunyuan/v20230901/model/GetThreadResponse.h
  include/tencentcloud/hunyuan/v20230901/model/Reference.h
  include/tencentcloud/hunyuan/v20230901/model/SearchInfo.h
  include/tencentcloud/hunyuan/v20230901/model/FilesDeletionsRequest.h
  include/tencentcloud/hunyuan/v20230901/model/Mindmap.h
  include/tencentcloud/hunyuan/v20230901/model/RunThreadResponse.h
  include/tencentcloud/hunyuan/v20230901/model/ChatCompletionsResponse.h
  include/tencentcloud/hunyuan/v20230901/model/GetThreadMessageListRequest.h
  include/tencentcloud/hunyuan/v20230901/model/QueryHunyuanTo3DJobRequest.h
  include/tencentcloud/hunyuan/v20230901/model/GetThreadMessageRequest.h
  include/tencentcloud/hunyuan/v20230901/model/SubmitHunyuanImageChatJobResponse.h
  include/tencentcloud/hunyuan/v20230901/model/ChatTranslationsRequest.h
  include/tencentcloud/hunyuan/v20230901/model/GetThreadMessageResponse.h
  include/tencentcloud/hunyuan/v20230901/model/Tool.h
  include/tencentcloud/hunyuan/v20230901/model/SearchResult.h
  include/tencentcloud/hunyuan/v20230901/model/Choice.h
  include/tencentcloud/hunyuan/v20230901/model/ThreadMessage.h
  include/tencentcloud/hunyuan/v20230901/model/GroupChatCompletionsRequest.h
  include/tencentcloud/hunyuan/v20230901/model/ToolFunction.h
  include/tencentcloud/hunyuan/v20230901/model/ImageQuestionResponse.h
  include/tencentcloud/hunyuan/v20230901/model/ImageMessage.h
  include/tencentcloud/hunyuan/v20230901/model/SetPayModeRequest.h
  include/tencentcloud/hunyuan/v20230901/model/GroupMessage.h
  include/tencentcloud/hunyuan/v20230901/model/RelevantEvent.h
  include/tencentcloud/hunyuan/v20230901/model/FilesDeletionsResponse.h
  include/tencentcloud/hunyuan/v20230901/model/FileObject.h
  include/tencentcloud/hunyuan/v20230901/model/ToolCall.h
  include/tencentcloud/hunyuan/v20230901/model/GetThreadMessageListResponse.h
  include/tencentcloud/hunyuan/v20230901/model/Image.h
  include/tencentcloud/hunyuan/v20230901/model/ThreadToolResources.h
  include/tencentcloud/hunyuan/v20230901/model/Replace.h
  include/tencentcloud/hunyuan/v20230901/model/CreateThreadRequest.h
  include/tencentcloud/hunyuan/v20230901/model/Message.h
  include/tencentcloud/hunyuan/v20230901/model/TranslationMessage.h
  include/tencentcloud/hunyuan/v20230901/model/ChatCompletionsRequest.h
  include/tencentcloud/hunyuan/v20230901/model/Knowledge.h
  include/tencentcloud/hunyuan/v20230901/model/FilesUploadsRequest.h
  include/tencentcloud/hunyuan/v20230901/model/GetEmbeddingRequest.h
  include/tencentcloud/hunyuan/v20230901/model/ImageUrl.h
  include/tencentcloud/hunyuan/v20230901/model/Multimedia.h
  include/tencentcloud/hunyuan/v20230901/model/GroupChatCompletionsResponse.h
  include/tencentcloud/hunyuan/v20230901/model/SubmitHunyuanImageJobRequest.h
  include/tencentcloud/hunyuan/v20230901/model/GetTokenCountResponse.h
  include/tencentcloud/hunyuan/v20230901/model/Timeline.h
  include/tencentcloud/hunyuan/v20230901/model/File3Ds.h
  include/tencentcloud/hunyuan/v20230901/model/Delta.h
  include/tencentcloud/hunyuan/v20230901/model/Processes.h
  include/tencentcloud/hunyuan/v20230901/model/TextToImageLiteResponse.h
  include/tencentcloud/hunyuan/v20230901/model/TextToImageLiteRequest.h
  include/tencentcloud/hunyuan/v20230901/model/QueryHunyuanImageJobResponse.h
  include/tencentcloud/hunyuan/v20230901/model/History.h
  include/tencentcloud/hunyuan/v20230901/model/UserLocation.h
  include/tencentcloud/hunyuan/v20230901/model/FilesListRequest.h
  include/tencentcloud/hunyuan/v20230901/model/GetTokenCountRequest.h
  include/tencentcloud/hunyuan/v20230901/model/GroupChatConfig.h
  include/tencentcloud/hunyuan/v20230901/model/QueryHunyuanTo3DJobResponse.h
  include/tencentcloud/hunyuan/v20230901/model/WebSearchOptions.h
  include/tencentcloud/hunyuan/v20230901/model/ActivateServiceRequest.h
  include/tencentcloud/hunyuan/v20230901/model/GetThreadRequest.h
  include/tencentcloud/hunyuan/v20230901/model/Content.h
  include/tencentcloud/hunyuan/v20230901/model/ChatTranslationsResponse.h
  include/tencentcloud/hunyuan/v20230901/model/ThreadMessageInCompleteDetailsObject.h
  include/tencentcloud/hunyuan/v20230901/model/SubmitHunyuanTo3DJobRequest.h
  include/tencentcloud/hunyuan/v20230901/model/ImageQuestionRequest.h
  include/tencentcloud/hunyuan/v20230901/model/SubmitHunyuanTo3DJobResponse.h
  include/tencentcloud/hunyuan/v20230901/model/QueryHunyuanImageChatJobResponse.h
  include/tencentcloud/hunyuan/v20230901/model/GetEmbeddingResponse.h
  include/tencentcloud/hunyuan/v20230901/model/ThreadAdditionalMessage.h
  include/tencentcloud/hunyuan/v20230901/model/ToolCallFunction.h
  include/tencentcloud/hunyuan/v20230901/model/RelevantEntity.h
  include/tencentcloud/hunyuan/v20230901/model/CreateThreadResponse.h
  include/tencentcloud/hunyuan/v20230901/model/ActivateServiceResponse.h
  include/tencentcloud/hunyuan/v20230901/model/FilesUploadsResponse.h
  include/tencentcloud/hunyuan/v20230901/model/ErrorMsg.h
  include/tencentcloud/hunyuan/v20230901/model/FilesListResponse.h
  include/tencentcloud/hunyuan/v20230901/model/EmbeddingUsage.h
  include/tencentcloud/hunyuan/v20230901/model/ThreadMessageAttachmentObject.h
  )

set(hunyuan_src
  src/v20230901/HunyuanClient.cpp
  src/v20230901/model/Character.cpp
  src/v20230901/model/Approximate.cpp
  src/v20230901/model/TranslationChoice.cpp
  src/v20230901/model/Usage.cpp
  src/v20230901/model/LogoParam.cpp
  src/v20230901/model/RunThreadRequest.cpp
  src/v20230901/model/SubmitHunyuanImageChatJobRequest.cpp
  src/v20230901/model/QueryHunyuanImageJobRequest.cpp
  src/v20230901/model/File3D.cpp
  src/v20230901/model/QueryHunyuanImageChatJobRequest.cpp
  src/v20230901/model/EmbeddingData.cpp
  src/v20230901/model/SetPayModeResponse.cpp
  src/v20230901/model/TranslationDelta.cpp
  src/v20230901/model/SongExt.cpp
  src/v20230901/model/LogoRect.cpp
  src/v20230901/model/SubmitHunyuanImageJobResponse.cpp
  src/v20230901/model/GetThreadResponse.cpp
  src/v20230901/model/Reference.cpp
  src/v20230901/model/SearchInfo.cpp
  src/v20230901/model/FilesDeletionsRequest.cpp
  src/v20230901/model/Mindmap.cpp
  src/v20230901/model/RunThreadResponse.cpp
  src/v20230901/model/ChatCompletionsResponse.cpp
  src/v20230901/model/GetThreadMessageListRequest.cpp
  src/v20230901/model/QueryHunyuanTo3DJobRequest.cpp
  src/v20230901/model/GetThreadMessageRequest.cpp
  src/v20230901/model/SubmitHunyuanImageChatJobResponse.cpp
  src/v20230901/model/ChatTranslationsRequest.cpp
  src/v20230901/model/GetThreadMessageResponse.cpp
  src/v20230901/model/Tool.cpp
  src/v20230901/model/SearchResult.cpp
  src/v20230901/model/Choice.cpp
  src/v20230901/model/ThreadMessage.cpp
  src/v20230901/model/GroupChatCompletionsRequest.cpp
  src/v20230901/model/ToolFunction.cpp
  src/v20230901/model/ImageQuestionResponse.cpp
  src/v20230901/model/ImageMessage.cpp
  src/v20230901/model/SetPayModeRequest.cpp
  src/v20230901/model/GroupMessage.cpp
  src/v20230901/model/RelevantEvent.cpp
  src/v20230901/model/FilesDeletionsResponse.cpp
  src/v20230901/model/FileObject.cpp
  src/v20230901/model/ToolCall.cpp
  src/v20230901/model/GetThreadMessageListResponse.cpp
  src/v20230901/model/Image.cpp
  src/v20230901/model/ThreadToolResources.cpp
  src/v20230901/model/Replace.cpp
  src/v20230901/model/CreateThreadRequest.cpp
  src/v20230901/model/Message.cpp
  src/v20230901/model/TranslationMessage.cpp
  src/v20230901/model/ChatCompletionsRequest.cpp
  src/v20230901/model/Knowledge.cpp
  src/v20230901/model/FilesUploadsRequest.cpp
  src/v20230901/model/GetEmbeddingRequest.cpp
  src/v20230901/model/ImageUrl.cpp
  src/v20230901/model/Multimedia.cpp
  src/v20230901/model/GroupChatCompletionsResponse.cpp
  src/v20230901/model/SubmitHunyuanImageJobRequest.cpp
  src/v20230901/model/GetTokenCountResponse.cpp
  src/v20230901/model/Timeline.cpp
  src/v20230901/model/File3Ds.cpp
  src/v20230901/model/Delta.cpp
  src/v20230901/model/Processes.cpp
  src/v20230901/model/TextToImageLiteResponse.cpp
  src/v20230901/model/TextToImageLiteRequest.cpp
  src/v20230901/model/QueryHunyuanImageJobResponse.cpp
  src/v20230901/model/History.cpp
  src/v20230901/model/UserLocation.cpp
  src/v20230901/model/FilesListRequest.cpp
  src/v20230901/model/GetTokenCountRequest.cpp
  src/v20230901/model/GroupChatConfig.cpp
  src/v20230901/model/QueryHunyuanTo3DJobResponse.cpp
  src/v20230901/model/WebSearchOptions.cpp
  src/v20230901/model/ActivateServiceRequest.cpp
  src/v20230901/model/GetThreadRequest.cpp
  src/v20230901/model/Content.cpp
  src/v20230901/model/ChatTranslationsResponse.cpp
  src/v20230901/model/ThreadMessageInCompleteDetailsObject.cpp
  src/v20230901/model/SubmitHunyuanTo3DJobRequest.cpp
  src/v20230901/model/ImageQuestionRequest.cpp
  src/v20230901/model/SubmitHunyuanTo3DJobResponse.cpp
  src/v20230901/model/QueryHunyuanImageChatJobResponse.cpp
  src/v20230901/model/GetEmbeddingResponse.cpp
  src/v20230901/model/ThreadAdditionalMessage.cpp
  src/v20230901/model/ToolCallFunction.cpp
  src/v20230901/model/RelevantEntity.cpp
  src/v20230901/model/CreateThreadResponse.cpp
  src/v20230901/model/ActivateServiceResponse.cpp
  src/v20230901/model/FilesUploadsResponse.cpp
  src/v20230901/model/ErrorMsg.cpp
  src/v20230901/model/FilesListResponse.cpp
  src/v20230901/model/EmbeddingUsage.cpp
  src/v20230901/model/ThreadMessageAttachmentObject.cpp
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
