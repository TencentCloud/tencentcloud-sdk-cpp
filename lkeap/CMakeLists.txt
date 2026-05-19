#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

set(lkeap_public_header
  include/tencentcloud/lkeap/v20240522/LkeapClient.h
  )

set(lkeap_public_header_model
  include/tencentcloud/lkeap/v20240522/model/ChatCompletionsRequest.h
  include/tencentcloud/lkeap/v20240522/model/CreateSplitDocumentFlowRequest.h
  include/tencentcloud/lkeap/v20240522/model/ReconstructDocumentSSEResponse.h
  include/tencentcloud/lkeap/v20240522/model/Thinking.h
  include/tencentcloud/lkeap/v20240522/model/GetEmbeddingRequest.h
  include/tencentcloud/lkeap/v20240522/model/GetReconstructDocumentResultRequest.h
  include/tencentcloud/lkeap/v20240522/model/Usage.h
  include/tencentcloud/lkeap/v20240522/model/CancelTaskRequest.h
  include/tencentcloud/lkeap/v20240522/model/Choice.h
  include/tencentcloud/lkeap/v20240522/model/GetCharacterUsageRequest.h
  include/tencentcloud/lkeap/v20240522/model/ReconstructDocumentSSEConfig.h
  include/tencentcloud/lkeap/v20240522/model/DocumentUsage.h
  include/tencentcloud/lkeap/v20240522/model/SearchResult.h
  include/tencentcloud/lkeap/v20240522/model/GetReconstructDocumentResultResponse.h
  include/tencentcloud/lkeap/v20240522/model/CreateReconstructDocumentFlowConfig.h
  include/tencentcloud/lkeap/v20240522/model/RunRerankRequest.h
  include/tencentcloud/lkeap/v20240522/model/ChatUsage.h
  include/tencentcloud/lkeap/v20240522/model/CreateSplitDocumentFlowResponse.h
  include/tencentcloud/lkeap/v20240522/model/Delta.h
  include/tencentcloud/lkeap/v20240522/model/ReconstructDocumentSSERequest.h
  include/tencentcloud/lkeap/v20240522/model/CreateReconstructDocumentFlowRequest.h
  include/tencentcloud/lkeap/v20240522/model/GetSplitDocumentResultResponse.h
  include/tencentcloud/lkeap/v20240522/model/ReconstructDocumentFailedPage.h
  include/tencentcloud/lkeap/v20240522/model/SplitDocumentFailedPage.h
  include/tencentcloud/lkeap/v20240522/model/CancelTaskResponse.h
  include/tencentcloud/lkeap/v20240522/model/GetEmbeddingResponse.h
  include/tencentcloud/lkeap/v20240522/model/QueryRewriteRequest.h
  include/tencentcloud/lkeap/v20240522/model/CreateSplitDocumentFlowConfig.h
  include/tencentcloud/lkeap/v20240522/model/RunRerankResponse.h
  include/tencentcloud/lkeap/v20240522/model/CreateReconstructDocumentFlowResponse.h
  include/tencentcloud/lkeap/v20240522/model/QueryRewriteResponse.h
  include/tencentcloud/lkeap/v20240522/model/GetSplitDocumentResultRequest.h
  include/tencentcloud/lkeap/v20240522/model/EmbeddingObject.h
  include/tencentcloud/lkeap/v20240522/model/Message.h
  include/tencentcloud/lkeap/v20240522/model/ErrorInfo.h
  include/tencentcloud/lkeap/v20240522/model/ChatCompletionsResponse.h
  include/tencentcloud/lkeap/v20240522/model/GetCharacterUsageResponse.h
  )

set(lkeap_src
  src/v20240522/LkeapClient.cpp
  src/v20240522/model/ChatCompletionsRequest.cpp
  src/v20240522/model/CreateSplitDocumentFlowRequest.cpp
  src/v20240522/model/ReconstructDocumentSSEResponse.cpp
  src/v20240522/model/Thinking.cpp
  src/v20240522/model/GetEmbeddingRequest.cpp
  src/v20240522/model/GetReconstructDocumentResultRequest.cpp
  src/v20240522/model/Usage.cpp
  src/v20240522/model/CancelTaskRequest.cpp
  src/v20240522/model/Choice.cpp
  src/v20240522/model/GetCharacterUsageRequest.cpp
  src/v20240522/model/ReconstructDocumentSSEConfig.cpp
  src/v20240522/model/DocumentUsage.cpp
  src/v20240522/model/SearchResult.cpp
  src/v20240522/model/GetReconstructDocumentResultResponse.cpp
  src/v20240522/model/CreateReconstructDocumentFlowConfig.cpp
  src/v20240522/model/RunRerankRequest.cpp
  src/v20240522/model/ChatUsage.cpp
  src/v20240522/model/CreateSplitDocumentFlowResponse.cpp
  src/v20240522/model/Delta.cpp
  src/v20240522/model/ReconstructDocumentSSERequest.cpp
  src/v20240522/model/CreateReconstructDocumentFlowRequest.cpp
  src/v20240522/model/GetSplitDocumentResultResponse.cpp
  src/v20240522/model/ReconstructDocumentFailedPage.cpp
  src/v20240522/model/SplitDocumentFailedPage.cpp
  src/v20240522/model/CancelTaskResponse.cpp
  src/v20240522/model/GetEmbeddingResponse.cpp
  src/v20240522/model/QueryRewriteRequest.cpp
  src/v20240522/model/CreateSplitDocumentFlowConfig.cpp
  src/v20240522/model/RunRerankResponse.cpp
  src/v20240522/model/CreateReconstructDocumentFlowResponse.cpp
  src/v20240522/model/QueryRewriteResponse.cpp
  src/v20240522/model/GetSplitDocumentResultRequest.cpp
  src/v20240522/model/EmbeddingObject.cpp
  src/v20240522/model/Message.cpp
  src/v20240522/model/ErrorInfo.cpp
  src/v20240522/model/ChatCompletionsResponse.cpp
  src/v20240522/model/GetCharacterUsageResponse.cpp
  )

set(lkeap_include
    include/tencentcloud/lkeap
  )

add_library(lkeap ${LIB_TYPE}
  ${lkeap_public_header}
  ${lkeap_public_header_model}
  ${lkeap_src})

set_target_properties(lkeap
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}lkeap
  )

target_include_directories(lkeap
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(lkeap
  core)

#install(FILES ${lkeap_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/lkeap/v20240522)
#install(FILES ${lkeap_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/lkeap/v20240522/model)
install(DIRECTORY ${lkeap_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS lkeap
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
