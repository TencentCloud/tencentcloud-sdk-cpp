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
  include/tencentcloud/nlp/v20190408/model/RetrieveSimilarWordsResponse.h
  include/tencentcloud/nlp/v20190408/model/SentenceEmbeddingRequest.h
  include/tencentcloud/nlp/v20190408/model/EvaluateWordSimilarityResponse.h
  include/tencentcloud/nlp/v20190408/model/ParseWordsResponse.h
  include/tencentcloud/nlp/v20190408/model/BasicParticiple.h
  include/tencentcloud/nlp/v20190408/model/DictInfo.h
  include/tencentcloud/nlp/v20190408/model/WordItem.h
  include/tencentcloud/nlp/v20190408/model/TextCorrectionProResponse.h
  include/tencentcloud/nlp/v20190408/model/Embellish.h
  include/tencentcloud/nlp/v20190408/model/EvaluateWordSimilarityRequest.h
  include/tencentcloud/nlp/v20190408/model/DeleteDictResponse.h
  include/tencentcloud/nlp/v20190408/model/TextWritingResponse.h
  include/tencentcloud/nlp/v20190408/model/CreateDictResponse.h
  include/tencentcloud/nlp/v20190408/model/TextClassificationResponse.h
  include/tencentcloud/nlp/v20190408/model/LexicalAnalysisResponse.h
  include/tencentcloud/nlp/v20190408/model/DescribeDictResponse.h
  include/tencentcloud/nlp/v20190408/model/DescribeDictsResponse.h
  include/tencentcloud/nlp/v20190408/model/DeleteDictRequest.h
  include/tencentcloud/nlp/v20190408/model/Entity.h
  include/tencentcloud/nlp/v20190408/model/GeneratePoetryRequest.h
  include/tencentcloud/nlp/v20190408/model/SearchWordItemsRequest.h
  include/tencentcloud/nlp/v20190408/model/GenerateKeywordSentenceRequest.h
  include/tencentcloud/nlp/v20190408/model/SentimentAnalysisResponse.h
  include/tencentcloud/nlp/v20190408/model/ChatBotResponse.h
  include/tencentcloud/nlp/v20190408/model/KeywordsExtractionRequest.h
  include/tencentcloud/nlp/v20190408/model/SearchResult.h
  include/tencentcloud/nlp/v20190408/model/SentenceEmbeddingResponse.h
  include/tencentcloud/nlp/v20190408/model/UpdateDictRequest.h
  include/tencentcloud/nlp/v20190408/model/SentimentAnalysisRequest.h
  include/tencentcloud/nlp/v20190408/model/TextWritingRequest.h
  include/tencentcloud/nlp/v20190408/model/AutoSummarizationResponse.h
  include/tencentcloud/nlp/v20190408/model/TextCorrectionResponse.h
  include/tencentcloud/nlp/v20190408/model/DeleteWordItemsRequest.h
  include/tencentcloud/nlp/v20190408/model/NerToken.h
  include/tencentcloud/nlp/v20190408/model/SimilarWordsResponse.h
  include/tencentcloud/nlp/v20190408/model/DependencyParsingResponse.h
  include/tencentcloud/nlp/v20190408/model/GenerateCoupletRequest.h
  include/tencentcloud/nlp/v20190408/model/LexicalAnalysisRequest.h
  include/tencentcloud/nlp/v20190408/model/CreateWordItemsResponse.h
  include/tencentcloud/nlp/v20190408/model/TextSimilarityProRequest.h
  include/tencentcloud/nlp/v20190408/model/RetrieveSimilarWordsRequest.h
  include/tencentcloud/nlp/v20190408/model/Writing.h
  include/tencentcloud/nlp/v20190408/model/AutoSummarizationRequest.h
  include/tencentcloud/nlp/v20190408/model/ClassificationResult.h
  include/tencentcloud/nlp/v20190408/model/DescribeDictsRequest.h
  include/tencentcloud/nlp/v20190408/model/WordSimilarityResponse.h
  include/tencentcloud/nlp/v20190408/model/TextEmbellishRequest.h
  include/tencentcloud/nlp/v20190408/model/EvaluateSentenceSimilarityResponse.h
  include/tencentcloud/nlp/v20190408/model/CreateWordItemsRequest.h
  include/tencentcloud/nlp/v20190408/model/SimilarWordsRequest.h
  include/tencentcloud/nlp/v20190408/model/DescribeWordItemsRequest.h
  include/tencentcloud/nlp/v20190408/model/GenerateCoupletResponse.h
  include/tencentcloud/nlp/v20190408/model/WordEmbeddingResponse.h
  include/tencentcloud/nlp/v20190408/model/PosToken.h
  include/tencentcloud/nlp/v20190408/model/KeywordsExtractionResponse.h
  include/tencentcloud/nlp/v20190408/model/SentenceCorrectionResponse.h
  include/tencentcloud/nlp/v20190408/model/EvaluateSentenceSimilarityRequest.h
  include/tencentcloud/nlp/v20190408/model/Similarity.h
  include/tencentcloud/nlp/v20190408/model/GenerateKeywordSentenceResponse.h
  include/tencentcloud/nlp/v20190408/model/CCIToken.h
  include/tencentcloud/nlp/v20190408/model/TextEmbellishResponse.h
  include/tencentcloud/nlp/v20190408/model/CorrectionItem.h
  include/tencentcloud/nlp/v20190408/model/TextClassificationRequest.h
  include/tencentcloud/nlp/v20190408/model/SearchWordItemsResponse.h
  include/tencentcloud/nlp/v20190408/model/DpToken.h
  include/tencentcloud/nlp/v20190408/model/ChatBotRequest.h
  include/tencentcloud/nlp/v20190408/model/TextCorrectionRequest.h
  include/tencentcloud/nlp/v20190408/model/Keyword.h
  include/tencentcloud/nlp/v20190408/model/UpdateDictResponse.h
  include/tencentcloud/nlp/v20190408/model/WordSimilarityRequest.h
  include/tencentcloud/nlp/v20190408/model/DeleteWordItemsResponse.h
  include/tencentcloud/nlp/v20190408/model/TextSimilarityRequest.h
  include/tencentcloud/nlp/v20190408/model/WordEmbeddingRequest.h
  include/tencentcloud/nlp/v20190408/model/CompoundParticiple.h
  include/tencentcloud/nlp/v20190408/model/DescribeWordItemsResponse.h
  include/tencentcloud/nlp/v20190408/model/ParseWordsRequest.h
  include/tencentcloud/nlp/v20190408/model/TextSimilarityResponse.h
  include/tencentcloud/nlp/v20190408/model/DescribeDictRequest.h
  include/tencentcloud/nlp/v20190408/model/GeneratePoetryResponse.h
  include/tencentcloud/nlp/v20190408/model/TextSimilarityProResponse.h
  include/tencentcloud/nlp/v20190408/model/DependencyParsingRequest.h
  include/tencentcloud/nlp/v20190408/model/SentencePair.h
  include/tencentcloud/nlp/v20190408/model/KeywordSentence.h
  include/tencentcloud/nlp/v20190408/model/SentenceCorrectionRequest.h
  include/tencentcloud/nlp/v20190408/model/TextCorrectionProRequest.h
  include/tencentcloud/nlp/v20190408/model/CreateDictRequest.h
  )

set(nlp_src
  src/v20190408/NlpClient.cpp
  src/v20190408/model/RetrieveSimilarWordsResponse.cpp
  src/v20190408/model/SentenceEmbeddingRequest.cpp
  src/v20190408/model/EvaluateWordSimilarityResponse.cpp
  src/v20190408/model/ParseWordsResponse.cpp
  src/v20190408/model/BasicParticiple.cpp
  src/v20190408/model/DictInfo.cpp
  src/v20190408/model/WordItem.cpp
  src/v20190408/model/TextCorrectionProResponse.cpp
  src/v20190408/model/Embellish.cpp
  src/v20190408/model/EvaluateWordSimilarityRequest.cpp
  src/v20190408/model/DeleteDictResponse.cpp
  src/v20190408/model/TextWritingResponse.cpp
  src/v20190408/model/CreateDictResponse.cpp
  src/v20190408/model/TextClassificationResponse.cpp
  src/v20190408/model/LexicalAnalysisResponse.cpp
  src/v20190408/model/DescribeDictResponse.cpp
  src/v20190408/model/DescribeDictsResponse.cpp
  src/v20190408/model/DeleteDictRequest.cpp
  src/v20190408/model/Entity.cpp
  src/v20190408/model/GeneratePoetryRequest.cpp
  src/v20190408/model/SearchWordItemsRequest.cpp
  src/v20190408/model/GenerateKeywordSentenceRequest.cpp
  src/v20190408/model/SentimentAnalysisResponse.cpp
  src/v20190408/model/ChatBotResponse.cpp
  src/v20190408/model/KeywordsExtractionRequest.cpp
  src/v20190408/model/SearchResult.cpp
  src/v20190408/model/SentenceEmbeddingResponse.cpp
  src/v20190408/model/UpdateDictRequest.cpp
  src/v20190408/model/SentimentAnalysisRequest.cpp
  src/v20190408/model/TextWritingRequest.cpp
  src/v20190408/model/AutoSummarizationResponse.cpp
  src/v20190408/model/TextCorrectionResponse.cpp
  src/v20190408/model/DeleteWordItemsRequest.cpp
  src/v20190408/model/NerToken.cpp
  src/v20190408/model/SimilarWordsResponse.cpp
  src/v20190408/model/DependencyParsingResponse.cpp
  src/v20190408/model/GenerateCoupletRequest.cpp
  src/v20190408/model/LexicalAnalysisRequest.cpp
  src/v20190408/model/CreateWordItemsResponse.cpp
  src/v20190408/model/TextSimilarityProRequest.cpp
  src/v20190408/model/RetrieveSimilarWordsRequest.cpp
  src/v20190408/model/Writing.cpp
  src/v20190408/model/AutoSummarizationRequest.cpp
  src/v20190408/model/ClassificationResult.cpp
  src/v20190408/model/DescribeDictsRequest.cpp
  src/v20190408/model/WordSimilarityResponse.cpp
  src/v20190408/model/TextEmbellishRequest.cpp
  src/v20190408/model/EvaluateSentenceSimilarityResponse.cpp
  src/v20190408/model/CreateWordItemsRequest.cpp
  src/v20190408/model/SimilarWordsRequest.cpp
  src/v20190408/model/DescribeWordItemsRequest.cpp
  src/v20190408/model/GenerateCoupletResponse.cpp
  src/v20190408/model/WordEmbeddingResponse.cpp
  src/v20190408/model/PosToken.cpp
  src/v20190408/model/KeywordsExtractionResponse.cpp
  src/v20190408/model/SentenceCorrectionResponse.cpp
  src/v20190408/model/EvaluateSentenceSimilarityRequest.cpp
  src/v20190408/model/Similarity.cpp
  src/v20190408/model/GenerateKeywordSentenceResponse.cpp
  src/v20190408/model/CCIToken.cpp
  src/v20190408/model/TextEmbellishResponse.cpp
  src/v20190408/model/CorrectionItem.cpp
  src/v20190408/model/TextClassificationRequest.cpp
  src/v20190408/model/SearchWordItemsResponse.cpp
  src/v20190408/model/DpToken.cpp
  src/v20190408/model/ChatBotRequest.cpp
  src/v20190408/model/TextCorrectionRequest.cpp
  src/v20190408/model/Keyword.cpp
  src/v20190408/model/UpdateDictResponse.cpp
  src/v20190408/model/WordSimilarityRequest.cpp
  src/v20190408/model/DeleteWordItemsResponse.cpp
  src/v20190408/model/TextSimilarityRequest.cpp
  src/v20190408/model/WordEmbeddingRequest.cpp
  src/v20190408/model/CompoundParticiple.cpp
  src/v20190408/model/DescribeWordItemsResponse.cpp
  src/v20190408/model/ParseWordsRequest.cpp
  src/v20190408/model/TextSimilarityResponse.cpp
  src/v20190408/model/DescribeDictRequest.cpp
  src/v20190408/model/GeneratePoetryResponse.cpp
  src/v20190408/model/TextSimilarityProResponse.cpp
  src/v20190408/model/DependencyParsingRequest.cpp
  src/v20190408/model/SentencePair.cpp
  src/v20190408/model/KeywordSentence.cpp
  src/v20190408/model/SentenceCorrectionRequest.cpp
  src/v20190408/model/TextCorrectionProRequest.cpp
  src/v20190408/model/CreateDictRequest.cpp
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
