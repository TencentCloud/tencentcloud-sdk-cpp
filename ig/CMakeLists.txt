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

set(ig_public_header
  include/tencentcloud/ig/v20210518/IgClient.h
  )

set(ig_public_header_model
  include/tencentcloud/ig/v20210518/model/GetLLMDiagnosisHealthResponse.h
  include/tencentcloud/ig/v20210518/model/HighlightWordInfo.h
  include/tencentcloud/ig/v20210518/model/GetLLMDiagnosisDrugChatRequest.h
  include/tencentcloud/ig/v20210518/model/LLMDiagnosisHealthData.h
  include/tencentcloud/ig/v20210518/model/StandardDrugCardInfo.h
  include/tencentcloud/ig/v20210518/model/GetLLMDiagnosisDrugChatResponse.h
  include/tencentcloud/ig/v20210518/model/GuessQuestion.h
  include/tencentcloud/ig/v20210518/model/GetLLMReportInterpretationRequest.h
  include/tencentcloud/ig/v20210518/model/ReferResourceInfo.h
  include/tencentcloud/ig/v20210518/model/ReportFileInfoReq.h
  include/tencentcloud/ig/v20210518/model/DescribeIgOrderListResponse.h
  include/tencentcloud/ig/v20210518/model/GetLLMDiagnosisDrugResponse.h
  include/tencentcloud/ig/v20210518/model/ReportFileInfoRsp.h
  include/tencentcloud/ig/v20210518/model/QueryDrugInstructionsRequest.h
  include/tencentcloud/ig/v20210518/model/GetLLMReportInterpretationResponse.h
  include/tencentcloud/ig/v20210518/model/DrugInstructionInfo.h
  include/tencentcloud/ig/v20210518/model/LLMReportInterpretationData.h
  include/tencentcloud/ig/v20210518/model/GetLLMDiagnosisHealthRequest.h
  include/tencentcloud/ig/v20210518/model/LLMDiagnosisDrugData.h
  include/tencentcloud/ig/v20210518/model/StandardDrugInstructionInfo.h
  include/tencentcloud/ig/v20210518/model/GetLLMDiagnosisDrugRequest.h
  include/tencentcloud/ig/v20210518/model/HealthFollowUpQuestion.h
  include/tencentcloud/ig/v20210518/model/DrugCardInfo.h
  include/tencentcloud/ig/v20210518/model/DescribeIgOrderListRequest.h
  include/tencentcloud/ig/v20210518/model/QueryDrugInstructionsResponse.h
  )

set(ig_src
  src/v20210518/IgClient.cpp
  src/v20210518/model/GetLLMDiagnosisHealthResponse.cpp
  src/v20210518/model/HighlightWordInfo.cpp
  src/v20210518/model/GetLLMDiagnosisDrugChatRequest.cpp
  src/v20210518/model/LLMDiagnosisHealthData.cpp
  src/v20210518/model/StandardDrugCardInfo.cpp
  src/v20210518/model/GetLLMDiagnosisDrugChatResponse.cpp
  src/v20210518/model/GuessQuestion.cpp
  src/v20210518/model/GetLLMReportInterpretationRequest.cpp
  src/v20210518/model/ReferResourceInfo.cpp
  src/v20210518/model/ReportFileInfoReq.cpp
  src/v20210518/model/DescribeIgOrderListResponse.cpp
  src/v20210518/model/GetLLMDiagnosisDrugResponse.cpp
  src/v20210518/model/ReportFileInfoRsp.cpp
  src/v20210518/model/QueryDrugInstructionsRequest.cpp
  src/v20210518/model/GetLLMReportInterpretationResponse.cpp
  src/v20210518/model/DrugInstructionInfo.cpp
  src/v20210518/model/LLMReportInterpretationData.cpp
  src/v20210518/model/GetLLMDiagnosisHealthRequest.cpp
  src/v20210518/model/LLMDiagnosisDrugData.cpp
  src/v20210518/model/StandardDrugInstructionInfo.cpp
  src/v20210518/model/GetLLMDiagnosisDrugRequest.cpp
  src/v20210518/model/HealthFollowUpQuestion.cpp
  src/v20210518/model/DrugCardInfo.cpp
  src/v20210518/model/DescribeIgOrderListRequest.cpp
  src/v20210518/model/QueryDrugInstructionsResponse.cpp
  )

set(ig_include
    include/tencentcloud/ig
  )

add_library(ig ${LIB_TYPE}
  ${ig_public_header}
  ${ig_public_header_model}
  ${ig_src})

set_target_properties(ig
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ig
  )

target_include_directories(ig
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ig
  core)

#install(FILES ${ig_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ig/v20210518)
#install(FILES ${ig_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ig/v20210518/model)
install(DIRECTORY ${ig_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ig
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
