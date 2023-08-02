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
  include/tencentcloud/nlp/v20190408/model/Category.h
  include/tencentcloud/nlp/v20190408/model/TextEmbellishRequest.h
  include/tencentcloud/nlp/v20190408/model/EvaluateWordSimilarityResponse.h
  include/tencentcloud/nlp/v20190408/model/RetrieveSimilarWordsRequest.h
  include/tencentcloud/nlp/v20190408/model/ClassifyContentResponse.h
  include/tencentcloud/nlp/v20190408/model/ParseWordsResponse.h
  include/tencentcloud/nlp/v20190408/model/BasicParticiple.h
  include/tencentcloud/nlp/v20190408/model/ComposePoetryResponse.h
  include/tencentcloud/nlp/v20190408/model/ClassifyContentRequest.h
  include/tencentcloud/nlp/v20190408/model/RetrieveSimilarWordsResponse.h
  include/tencentcloud/nlp/v20190408/model/EvaluateSentenceSimilarityResponse.h
  include/tencentcloud/nlp/v20190408/model/Embellish.h
  include/tencentcloud/nlp/v20190408/model/EvaluateWordSimilarityRequest.h
  include/tencentcloud/nlp/v20190408/model/CompoundParticiple.h
  include/tencentcloud/nlp/v20190408/model/TextWritingResponse.h
  include/tencentcloud/nlp/v20190408/model/AnalyzeSentimentResponse.h
  include/tencentcloud/nlp/v20190408/model/ParseWordsRequest.h
  include/tencentcloud/nlp/v20190408/model/Writing.h
  include/tencentcloud/nlp/v20190408/model/SentenceCorrectionResponse.h
  include/tencentcloud/nlp/v20190408/model/SentencePair.h
  include/tencentcloud/nlp/v20190408/model/KeywordSentence.h
  include/tencentcloud/nlp/v20190408/model/ComposeCoupletRequest.h
  include/tencentcloud/nlp/v20190408/model/EvaluateSentenceSimilarityRequest.h
  include/tencentcloud/nlp/v20190408/model/TextWritingRequest.h
  include/tencentcloud/nlp/v20190408/model/GenerateKeywordSentenceResponse.h
  include/tencentcloud/nlp/v20190408/model/Entity.h
  include/tencentcloud/nlp/v20190408/model/ComposePoetryRequest.h
  include/tencentcloud/nlp/v20190408/model/SentenceCorrectionRequest.h
  include/tencentcloud/nlp/v20190408/model/TextEmbellishResponse.h
  include/tencentcloud/nlp/v20190408/model/AnalyzeSentimentRequest.h
  include/tencentcloud/nlp/v20190408/model/CorrectionItem.h
  include/tencentcloud/nlp/v20190408/model/GenerateKeywordSentenceRequest.h
  include/tencentcloud/nlp/v20190408/model/ComposeCoupletResponse.h
  )

set(nlp_src
  src/v20190408/NlpClient.cpp
  src/v20190408/model/Category.cpp
  src/v20190408/model/TextEmbellishRequest.cpp
  src/v20190408/model/EvaluateWordSimilarityResponse.cpp
  src/v20190408/model/RetrieveSimilarWordsRequest.cpp
  src/v20190408/model/ClassifyContentResponse.cpp
  src/v20190408/model/ParseWordsResponse.cpp
  src/v20190408/model/BasicParticiple.cpp
  src/v20190408/model/ComposePoetryResponse.cpp
  src/v20190408/model/ClassifyContentRequest.cpp
  src/v20190408/model/RetrieveSimilarWordsResponse.cpp
  src/v20190408/model/EvaluateSentenceSimilarityResponse.cpp
  src/v20190408/model/Embellish.cpp
  src/v20190408/model/EvaluateWordSimilarityRequest.cpp
  src/v20190408/model/CompoundParticiple.cpp
  src/v20190408/model/TextWritingResponse.cpp
  src/v20190408/model/AnalyzeSentimentResponse.cpp
  src/v20190408/model/ParseWordsRequest.cpp
  src/v20190408/model/Writing.cpp
  src/v20190408/model/SentenceCorrectionResponse.cpp
  src/v20190408/model/SentencePair.cpp
  src/v20190408/model/KeywordSentence.cpp
  src/v20190408/model/ComposeCoupletRequest.cpp
  src/v20190408/model/EvaluateSentenceSimilarityRequest.cpp
  src/v20190408/model/TextWritingRequest.cpp
  src/v20190408/model/GenerateKeywordSentenceResponse.cpp
  src/v20190408/model/Entity.cpp
  src/v20190408/model/ComposePoetryRequest.cpp
  src/v20190408/model/SentenceCorrectionRequest.cpp
  src/v20190408/model/TextEmbellishResponse.cpp
  src/v20190408/model/AnalyzeSentimentRequest.cpp
  src/v20190408/model/CorrectionItem.cpp
  src/v20190408/model/GenerateKeywordSentenceRequest.cpp
  src/v20190408/model/ComposeCoupletResponse.cpp
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
