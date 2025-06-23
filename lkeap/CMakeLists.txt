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

set(lkeap_public_header
  include/tencentcloud/lkeap/v20240522/LkeapClient.h
  )

set(lkeap_public_header_model
  include/tencentcloud/lkeap/v20240522/model/ChatCompletionsRequest.h
  include/tencentcloud/lkeap/v20240522/model/CreateSplitDocumentFlowRequest.h
  include/tencentcloud/lkeap/v20240522/model/RetrievalRecordMetadata.h
  include/tencentcloud/lkeap/v20240522/model/ListQAsRequest.h
  include/tencentcloud/lkeap/v20240522/model/ReconstructDocumentSSEResponse.h
  include/tencentcloud/lkeap/v20240522/model/DocItem.h
  include/tencentcloud/lkeap/v20240522/model/GetEmbeddingRequest.h
  include/tencentcloud/lkeap/v20240522/model/ImportQAsResponse.h
  include/tencentcloud/lkeap/v20240522/model/UploadDocResponse.h
  include/tencentcloud/lkeap/v20240522/model/DescribeDocResponse.h
  include/tencentcloud/lkeap/v20240522/model/AttributeLabelReferItem.h
  include/tencentcloud/lkeap/v20240522/model/DeleteQAsRequest.h
  include/tencentcloud/lkeap/v20240522/model/ModifyQARequest.h
  include/tencentcloud/lkeap/v20240522/model/Usage.h
  include/tencentcloud/lkeap/v20240522/model/GetReconstructDocumentResultRequest.h
  include/tencentcloud/lkeap/v20240522/model/ListQAsResponse.h
  include/tencentcloud/lkeap/v20240522/model/DeleteAttributeLabelsResponse.h
  include/tencentcloud/lkeap/v20240522/model/RetrievalSetting.h
  include/tencentcloud/lkeap/v20240522/model/ListDocsRequest.h
  include/tencentcloud/lkeap/v20240522/model/CreateAttributeLabelResponse.h
  include/tencentcloud/lkeap/v20240522/model/RetrieveKnowledgeResponse.h
  include/tencentcloud/lkeap/v20240522/model/CreateSplitDocumentFlowResponse.h
  include/tencentcloud/lkeap/v20240522/model/SegmentationConfig.h
  include/tencentcloud/lkeap/v20240522/model/CreateQAResponse.h
  include/tencentcloud/lkeap/v20240522/model/ModifyAttributeLabelRequest.h
  include/tencentcloud/lkeap/v20240522/model/GetReconstructDocumentResultResponse.h
  include/tencentcloud/lkeap/v20240522/model/ReconstructDocumentSSEConfig.h
  include/tencentcloud/lkeap/v20240522/model/ListDocsResponse.h
  include/tencentcloud/lkeap/v20240522/model/DocumentUsage.h
  include/tencentcloud/lkeap/v20240522/model/ListAttributeLabelsRequest.h
  include/tencentcloud/lkeap/v20240522/model/SearchResult.h
  include/tencentcloud/lkeap/v20240522/model/DeleteAttributeLabelsRequest.h
  include/tencentcloud/lkeap/v20240522/model/RetrieveKnowledgeRequest.h
  include/tencentcloud/lkeap/v20240522/model/Choice.h
  include/tencentcloud/lkeap/v20240522/model/CreateReconstructDocumentFlowConfig.h
  include/tencentcloud/lkeap/v20240522/model/RunRerankRequest.h
  include/tencentcloud/lkeap/v20240522/model/ChatUsage.h
  include/tencentcloud/lkeap/v20240522/model/GetSplitDocumentResultRequest.h
  include/tencentcloud/lkeap/v20240522/model/Delta.h
  include/tencentcloud/lkeap/v20240522/model/ReconstructDocumentSSERequest.h
  include/tencentcloud/lkeap/v20240522/model/ListAttributeLabelsResponse.h
  include/tencentcloud/lkeap/v20240522/model/RetrievalRecord.h
  include/tencentcloud/lkeap/v20240522/model/AttributeLabelItem.h
  include/tencentcloud/lkeap/v20240522/model/CreateAttributeLabelRequest.h
  include/tencentcloud/lkeap/v20240522/model/ImportQAsRequest.h
  include/tencentcloud/lkeap/v20240522/model/DescribeDocRequest.h
  include/tencentcloud/lkeap/v20240522/model/DeleteKnowledgeBaseResponse.h
  include/tencentcloud/lkeap/v20240522/model/DeleteDocsResponse.h
  include/tencentcloud/lkeap/v20240522/model/LabelItem.h
  include/tencentcloud/lkeap/v20240522/model/CreateReconstructDocumentFlowRequest.h
  include/tencentcloud/lkeap/v20240522/model/GetSplitDocumentResultResponse.h
  include/tencentcloud/lkeap/v20240522/model/ModifyQAResponse.h
  include/tencentcloud/lkeap/v20240522/model/ReconstructDocumentFailedPage.h
  include/tencentcloud/lkeap/v20240522/model/SplitDocumentFailedPage.h
  include/tencentcloud/lkeap/v20240522/model/ModifyAttributeLabelResponse.h
  include/tencentcloud/lkeap/v20240522/model/QueryRewriteResponse.h
  include/tencentcloud/lkeap/v20240522/model/UploadDocRequest.h
  include/tencentcloud/lkeap/v20240522/model/DeleteQAsResponse.h
  include/tencentcloud/lkeap/v20240522/model/CreateKnowledgeBaseResponse.h
  include/tencentcloud/lkeap/v20240522/model/GetEmbeddingResponse.h
  include/tencentcloud/lkeap/v20240522/model/QueryRewriteRequest.h
  include/tencentcloud/lkeap/v20240522/model/QaItem.h
  include/tencentcloud/lkeap/v20240522/model/CreateSplitDocumentFlowConfig.h
  include/tencentcloud/lkeap/v20240522/model/RunRerankResponse.h
  include/tencentcloud/lkeap/v20240522/model/CreateReconstructDocumentFlowResponse.h
  include/tencentcloud/lkeap/v20240522/model/DeleteKnowledgeBaseRequest.h
  include/tencentcloud/lkeap/v20240522/model/CreateQARequest.h
  include/tencentcloud/lkeap/v20240522/model/GetCharacterUsageRequest.h
  include/tencentcloud/lkeap/v20240522/model/GetCharacterUsageResponse.h
  include/tencentcloud/lkeap/v20240522/model/AttributeItem.h
  include/tencentcloud/lkeap/v20240522/model/EmbeddingObject.h
  include/tencentcloud/lkeap/v20240522/model/Message.h
  include/tencentcloud/lkeap/v20240522/model/CreateKnowledgeBaseRequest.h
  include/tencentcloud/lkeap/v20240522/model/ChatCompletionsResponse.h
  include/tencentcloud/lkeap/v20240522/model/DeleteDocsRequest.h
  )

set(lkeap_src
  src/v20240522/LkeapClient.cpp
  src/v20240522/model/ChatCompletionsRequest.cpp
  src/v20240522/model/CreateSplitDocumentFlowRequest.cpp
  src/v20240522/model/RetrievalRecordMetadata.cpp
  src/v20240522/model/ListQAsRequest.cpp
  src/v20240522/model/ReconstructDocumentSSEResponse.cpp
  src/v20240522/model/DocItem.cpp
  src/v20240522/model/GetEmbeddingRequest.cpp
  src/v20240522/model/ImportQAsResponse.cpp
  src/v20240522/model/UploadDocResponse.cpp
  src/v20240522/model/DescribeDocResponse.cpp
  src/v20240522/model/AttributeLabelReferItem.cpp
  src/v20240522/model/DeleteQAsRequest.cpp
  src/v20240522/model/ModifyQARequest.cpp
  src/v20240522/model/Usage.cpp
  src/v20240522/model/GetReconstructDocumentResultRequest.cpp
  src/v20240522/model/ListQAsResponse.cpp
  src/v20240522/model/DeleteAttributeLabelsResponse.cpp
  src/v20240522/model/RetrievalSetting.cpp
  src/v20240522/model/ListDocsRequest.cpp
  src/v20240522/model/CreateAttributeLabelResponse.cpp
  src/v20240522/model/RetrieveKnowledgeResponse.cpp
  src/v20240522/model/CreateSplitDocumentFlowResponse.cpp
  src/v20240522/model/SegmentationConfig.cpp
  src/v20240522/model/CreateQAResponse.cpp
  src/v20240522/model/ModifyAttributeLabelRequest.cpp
  src/v20240522/model/GetReconstructDocumentResultResponse.cpp
  src/v20240522/model/ReconstructDocumentSSEConfig.cpp
  src/v20240522/model/ListDocsResponse.cpp
  src/v20240522/model/DocumentUsage.cpp
  src/v20240522/model/ListAttributeLabelsRequest.cpp
  src/v20240522/model/SearchResult.cpp
  src/v20240522/model/DeleteAttributeLabelsRequest.cpp
  src/v20240522/model/RetrieveKnowledgeRequest.cpp
  src/v20240522/model/Choice.cpp
  src/v20240522/model/CreateReconstructDocumentFlowConfig.cpp
  src/v20240522/model/RunRerankRequest.cpp
  src/v20240522/model/ChatUsage.cpp
  src/v20240522/model/GetSplitDocumentResultRequest.cpp
  src/v20240522/model/Delta.cpp
  src/v20240522/model/ReconstructDocumentSSERequest.cpp
  src/v20240522/model/ListAttributeLabelsResponse.cpp
  src/v20240522/model/RetrievalRecord.cpp
  src/v20240522/model/AttributeLabelItem.cpp
  src/v20240522/model/CreateAttributeLabelRequest.cpp
  src/v20240522/model/ImportQAsRequest.cpp
  src/v20240522/model/DescribeDocRequest.cpp
  src/v20240522/model/DeleteKnowledgeBaseResponse.cpp
  src/v20240522/model/DeleteDocsResponse.cpp
  src/v20240522/model/LabelItem.cpp
  src/v20240522/model/CreateReconstructDocumentFlowRequest.cpp
  src/v20240522/model/GetSplitDocumentResultResponse.cpp
  src/v20240522/model/ModifyQAResponse.cpp
  src/v20240522/model/ReconstructDocumentFailedPage.cpp
  src/v20240522/model/SplitDocumentFailedPage.cpp
  src/v20240522/model/ModifyAttributeLabelResponse.cpp
  src/v20240522/model/QueryRewriteResponse.cpp
  src/v20240522/model/UploadDocRequest.cpp
  src/v20240522/model/DeleteQAsResponse.cpp
  src/v20240522/model/CreateKnowledgeBaseResponse.cpp
  src/v20240522/model/GetEmbeddingResponse.cpp
  src/v20240522/model/QueryRewriteRequest.cpp
  src/v20240522/model/QaItem.cpp
  src/v20240522/model/CreateSplitDocumentFlowConfig.cpp
  src/v20240522/model/RunRerankResponse.cpp
  src/v20240522/model/CreateReconstructDocumentFlowResponse.cpp
  src/v20240522/model/DeleteKnowledgeBaseRequest.cpp
  src/v20240522/model/CreateQARequest.cpp
  src/v20240522/model/GetCharacterUsageRequest.cpp
  src/v20240522/model/GetCharacterUsageResponse.cpp
  src/v20240522/model/AttributeItem.cpp
  src/v20240522/model/EmbeddingObject.cpp
  src/v20240522/model/Message.cpp
  src/v20240522/model/CreateKnowledgeBaseRequest.cpp
  src/v20240522/model/ChatCompletionsResponse.cpp
  src/v20240522/model/DeleteDocsRequest.cpp
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
