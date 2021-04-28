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

set(gpm_public_header
  include/tencentcloud/gpm/v20200820/GpmClient.h
  )

set(gpm_public_header_model
  include/tencentcloud/gpm/v20200820/model/DescribeDataResponse.h
  include/tencentcloud/gpm/v20200820/model/DescribeMatchCodesRequest.h
  include/tencentcloud/gpm/v20200820/model/DeleteRuleResponse.h
  include/tencentcloud/gpm/v20200820/model/ModifyMatchRequest.h
  include/tencentcloud/gpm/v20200820/model/StartMatchingResponse.h
  include/tencentcloud/gpm/v20200820/model/CreateMatchRequest.h
  include/tencentcloud/gpm/v20200820/model/DescribeMatchingProgressRequest.h
  include/tencentcloud/gpm/v20200820/model/ModifyMatchResponse.h
  include/tencentcloud/gpm/v20200820/model/ReportTrendData.h
  include/tencentcloud/gpm/v20200820/model/CreateMatchResponse.h
  include/tencentcloud/gpm/v20200820/model/RuleBriefInfo.h
  include/tencentcloud/gpm/v20200820/model/DescribeMatchesRequest.h
  include/tencentcloud/gpm/v20200820/model/DeleteRuleRequest.h
  include/tencentcloud/gpm/v20200820/model/MatchInfo.h
  include/tencentcloud/gpm/v20200820/model/DescribeRulesRequest.h
  include/tencentcloud/gpm/v20200820/model/DescribeTokenResponse.h
  include/tencentcloud/gpm/v20200820/model/DescribeRuleResponse.h
  include/tencentcloud/gpm/v20200820/model/DescribeMatchRequest.h
  include/tencentcloud/gpm/v20200820/model/ModifyRuleRequest.h
  include/tencentcloud/gpm/v20200820/model/DescribeTokenRequest.h
  include/tencentcloud/gpm/v20200820/model/DescribeDataRequest.h
  include/tencentcloud/gpm/v20200820/model/RegionLatency.h
  include/tencentcloud/gpm/v20200820/model/CreateRuleRequest.h
  include/tencentcloud/gpm/v20200820/model/ReportOverviewData.h
  include/tencentcloud/gpm/v20200820/model/DescribeRuleRequest.h
  include/tencentcloud/gpm/v20200820/model/DescribeMatchResponse.h
  include/tencentcloud/gpm/v20200820/model/ModifyTokenResponse.h
  include/tencentcloud/gpm/v20200820/model/MatchCodeAttr.h
  include/tencentcloud/gpm/v20200820/model/MatchAttribute.h
  include/tencentcloud/gpm/v20200820/model/DeleteMatchResponse.h
  include/tencentcloud/gpm/v20200820/model/CancelMatchingRequest.h
  include/tencentcloud/gpm/v20200820/model/AttributeMap.h
  include/tencentcloud/gpm/v20200820/model/StringKV.h
  include/tencentcloud/gpm/v20200820/model/StartMatchingBackfillRequest.h
  include/tencentcloud/gpm/v20200820/model/CancelMatchingResponse.h
  include/tencentcloud/gpm/v20200820/model/DescribeMatchCodesResponse.h
  include/tencentcloud/gpm/v20200820/model/CreateRuleResponse.h
  include/tencentcloud/gpm/v20200820/model/DescribeRulesResponse.h
  include/tencentcloud/gpm/v20200820/model/MTicket.h
  include/tencentcloud/gpm/v20200820/model/RuleInfo.h
  include/tencentcloud/gpm/v20200820/model/ModifyTokenRequest.h
  include/tencentcloud/gpm/v20200820/model/StartMatchingBackfillResponse.h
  include/tencentcloud/gpm/v20200820/model/DescribeMatchesResponse.h
  include/tencentcloud/gpm/v20200820/model/Player.h
  include/tencentcloud/gpm/v20200820/model/StartMatchingRequest.h
  include/tencentcloud/gpm/v20200820/model/Tag.h
  include/tencentcloud/gpm/v20200820/model/DeleteMatchRequest.h
  include/tencentcloud/gpm/v20200820/model/MatchTicket.h
  include/tencentcloud/gpm/v20200820/model/DescribeMatchingProgressResponse.h
  include/tencentcloud/gpm/v20200820/model/ModifyRuleResponse.h
  )

set(gpm_src
  src/v20200820/GpmClient.cpp
  src/v20200820/model/DescribeDataResponse.cpp
  src/v20200820/model/DescribeMatchCodesRequest.cpp
  src/v20200820/model/DeleteRuleResponse.cpp
  src/v20200820/model/ModifyMatchRequest.cpp
  src/v20200820/model/StartMatchingResponse.cpp
  src/v20200820/model/CreateMatchRequest.cpp
  src/v20200820/model/DescribeMatchingProgressRequest.cpp
  src/v20200820/model/ModifyMatchResponse.cpp
  src/v20200820/model/ReportTrendData.cpp
  src/v20200820/model/CreateMatchResponse.cpp
  src/v20200820/model/RuleBriefInfo.cpp
  src/v20200820/model/DescribeMatchesRequest.cpp
  src/v20200820/model/DeleteRuleRequest.cpp
  src/v20200820/model/MatchInfo.cpp
  src/v20200820/model/DescribeRulesRequest.cpp
  src/v20200820/model/DescribeTokenResponse.cpp
  src/v20200820/model/DescribeRuleResponse.cpp
  src/v20200820/model/DescribeMatchRequest.cpp
  src/v20200820/model/ModifyRuleRequest.cpp
  src/v20200820/model/DescribeTokenRequest.cpp
  src/v20200820/model/DescribeDataRequest.cpp
  src/v20200820/model/RegionLatency.cpp
  src/v20200820/model/CreateRuleRequest.cpp
  src/v20200820/model/ReportOverviewData.cpp
  src/v20200820/model/DescribeRuleRequest.cpp
  src/v20200820/model/DescribeMatchResponse.cpp
  src/v20200820/model/ModifyTokenResponse.cpp
  src/v20200820/model/MatchCodeAttr.cpp
  src/v20200820/model/MatchAttribute.cpp
  src/v20200820/model/DeleteMatchResponse.cpp
  src/v20200820/model/CancelMatchingRequest.cpp
  src/v20200820/model/AttributeMap.cpp
  src/v20200820/model/StringKV.cpp
  src/v20200820/model/StartMatchingBackfillRequest.cpp
  src/v20200820/model/CancelMatchingResponse.cpp
  src/v20200820/model/DescribeMatchCodesResponse.cpp
  src/v20200820/model/CreateRuleResponse.cpp
  src/v20200820/model/DescribeRulesResponse.cpp
  src/v20200820/model/MTicket.cpp
  src/v20200820/model/RuleInfo.cpp
  src/v20200820/model/ModifyTokenRequest.cpp
  src/v20200820/model/StartMatchingBackfillResponse.cpp
  src/v20200820/model/DescribeMatchesResponse.cpp
  src/v20200820/model/Player.cpp
  src/v20200820/model/StartMatchingRequest.cpp
  src/v20200820/model/Tag.cpp
  src/v20200820/model/DeleteMatchRequest.cpp
  src/v20200820/model/MatchTicket.cpp
  src/v20200820/model/DescribeMatchingProgressResponse.cpp
  src/v20200820/model/ModifyRuleResponse.cpp
  )

set(gpm_include
    include/tencentcloud/gpm
  )

add_library(gpm ${LIB_TYPE}
  ${gpm_public_header}
  ${gpm_public_header_model}
  ${gpm_src})

set_target_properties(gpm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}gpm
  )

target_include_directories(gpm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(gpm
  core)

#install(FILES ${gpm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gpm/v20200820)
#install(FILES ${gpm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gpm/v20200820/model)
install(DIRECTORY ${gpm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS gpm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
