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

set(nlp_public_header
  include/tencentcloud/nlp/v20190408/NlpClient.h
  )

set(nlp_public_header_model
  include/tencentcloud/nlp/v20190408/model/LexicalAnalysisResponse.h
  include/tencentcloud/nlp/v20190408/model/SentenceEmbeddingRequest.h
  include/tencentcloud/nlp/v20190408/model/DescribeTripleRequest.h
  include/tencentcloud/nlp/v20190408/model/DpToken.h
  include/tencentcloud/nlp/v20190408/model/ChatBotResponse.h
  include/tencentcloud/nlp/v20190408/model/AutoSummarizationRequest.h
  include/tencentcloud/nlp/v20190408/model/ChatBotRequest.h
  include/tencentcloud/nlp/v20190408/model/DescribeRelationRequest.h
  include/tencentcloud/nlp/v20190408/model/KeywordsExtractionRequest.h
  include/tencentcloud/nlp/v20190408/model/DescribeEntityResponse.h
  include/tencentcloud/nlp/v20190408/model/ClassificationResult.h
  include/tencentcloud/nlp/v20190408/model/DescribeEntityRequest.h
  include/tencentcloud/nlp/v20190408/model/AutoSummarizationResponse.h
  include/tencentcloud/nlp/v20190408/model/DependencyParsingRequest.h
  include/tencentcloud/nlp/v20190408/model/DescribeRelationResponse.h
  include/tencentcloud/nlp/v20190408/model/WordSimilarityRequest.h
  include/tencentcloud/nlp/v20190408/model/TextCorrectionRequest.h
  include/tencentcloud/nlp/v20190408/model/SentenceEmbeddingResponse.h
  include/tencentcloud/nlp/v20190408/model/SentenceSimilarityRequest.h
  include/tencentcloud/nlp/v20190408/model/SimilarWordsRequest.h
  include/tencentcloud/nlp/v20190408/model/TextClassificationResponse.h
  include/tencentcloud/nlp/v20190408/model/TextClassificationRequest.h
  include/tencentcloud/nlp/v20190408/model/Keyword.h
  include/tencentcloud/nlp/v20190408/model/WordEmbeddingResponse.h
  include/tencentcloud/nlp/v20190408/model/DescribeTripleResponse.h
  include/tencentcloud/nlp/v20190408/model/PosToken.h
  include/tencentcloud/nlp/v20190408/model/SentimentAnalysisResponse.h
  include/tencentcloud/nlp/v20190408/model/KeywordsExtractionResponse.h
  include/tencentcloud/nlp/v20190408/model/TextCorrectionResponse.h
  include/tencentcloud/nlp/v20190408/model/EntityRelationObject.h
  include/tencentcloud/nlp/v20190408/model/WordEmbeddingRequest.h
  include/tencentcloud/nlp/v20190408/model/SentenceSimilarityResponse.h
  include/tencentcloud/nlp/v20190408/model/NerToken.h
  include/tencentcloud/nlp/v20190408/model/SimilarWordsResponse.h
  include/tencentcloud/nlp/v20190408/model/DependencyParsingResponse.h
  include/tencentcloud/nlp/v20190408/model/CCIToken.h
  include/tencentcloud/nlp/v20190408/model/LexicalAnalysisRequest.h
  include/tencentcloud/nlp/v20190408/model/SentimentAnalysisRequest.h
  include/tencentcloud/nlp/v20190408/model/EntityRelationContent.h
  include/tencentcloud/nlp/v20190408/model/WordSimilarityResponse.h
  include/tencentcloud/nlp/v20190408/model/TripleContent.h
  include/tencentcloud/nlp/v20190408/model/EntityRelationSubject.h
  )

set(nlp_src
  src/v20190408/NlpClient.cpp
  src/v20190408/model/LexicalAnalysisResponse.cpp
  src/v20190408/model/SentenceEmbeddingRequest.cpp
  src/v20190408/model/DescribeTripleRequest.cpp
  src/v20190408/model/DpToken.cpp
  src/v20190408/model/ChatBotResponse.cpp
  src/v20190408/model/AutoSummarizationRequest.cpp
  src/v20190408/model/ChatBotRequest.cpp
  src/v20190408/model/DescribeRelationRequest.cpp
  src/v20190408/model/KeywordsExtractionRequest.cpp
  src/v20190408/model/DescribeEntityResponse.cpp
  src/v20190408/model/ClassificationResult.cpp
  src/v20190408/model/DescribeEntityRequest.cpp
  src/v20190408/model/AutoSummarizationResponse.cpp
  src/v20190408/model/DependencyParsingRequest.cpp
  src/v20190408/model/DescribeRelationResponse.cpp
  src/v20190408/model/WordSimilarityRequest.cpp
  src/v20190408/model/TextCorrectionRequest.cpp
  src/v20190408/model/SentenceEmbeddingResponse.cpp
  src/v20190408/model/SentenceSimilarityRequest.cpp
  src/v20190408/model/SimilarWordsRequest.cpp
  src/v20190408/model/TextClassificationResponse.cpp
  src/v20190408/model/TextClassificationRequest.cpp
  src/v20190408/model/Keyword.cpp
  src/v20190408/model/WordEmbeddingResponse.cpp
  src/v20190408/model/DescribeTripleResponse.cpp
  src/v20190408/model/PosToken.cpp
  src/v20190408/model/SentimentAnalysisResponse.cpp
  src/v20190408/model/KeywordsExtractionResponse.cpp
  src/v20190408/model/TextCorrectionResponse.cpp
  src/v20190408/model/EntityRelationObject.cpp
  src/v20190408/model/WordEmbeddingRequest.cpp
  src/v20190408/model/SentenceSimilarityResponse.cpp
  src/v20190408/model/NerToken.cpp
  src/v20190408/model/SimilarWordsResponse.cpp
  src/v20190408/model/DependencyParsingResponse.cpp
  src/v20190408/model/CCIToken.cpp
  src/v20190408/model/LexicalAnalysisRequest.cpp
  src/v20190408/model/SentimentAnalysisRequest.cpp
  src/v20190408/model/EntityRelationContent.cpp
  src/v20190408/model/WordSimilarityResponse.cpp
  src/v20190408/model/TripleContent.cpp
  src/v20190408/model/EntityRelationSubject.cpp
  )

set(nlp_include
    include/tencentcloud/nlp
  )

add_library(nlp ${LIB_TYPE}
  ${nlp_public_header}
  ${nlp_public_header_model}
  ${nlp_src})

set_target_properties(nlp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}nlp
  )

target_include_directories(nlp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(nlp
  core)

#install(FILES ${nlp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/nlp/v20190408)
#install(FILES ${nlp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/nlp/v20190408/model)
install(DIRECTORY ${nlp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS nlp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
