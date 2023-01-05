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

set(hasim_public_header
  include/tencentcloud/hasim/v20210716/HasimClient.h
  )

set(hasim_public_header_model
  include/tencentcloud/hasim/v20210716/model/DescribeTagsResponse.h
  include/tencentcloud/hasim/v20210716/model/DescribeLinkResponse.h
  include/tencentcloud/hasim/v20210716/model/DeleteRuleResponse.h
  include/tencentcloud/hasim/v20210716/model/CreateTacticRequest.h
  include/tencentcloud/hasim/v20210716/model/DeleteTagRequest.h
  include/tencentcloud/hasim/v20210716/model/DescribeOrdersResponse.h
  include/tencentcloud/hasim/v20210716/model/DeviceReport.h
  include/tencentcloud/hasim/v20210716/model/ModifyTacticRequest.h
  include/tencentcloud/hasim/v20210716/model/Tactic.h
  include/tencentcloud/hasim/v20210716/model/DeleteRuleRequest.h
  include/tencentcloud/hasim/v20210716/model/DescribeRulesRequest.h
  include/tencentcloud/hasim/v20210716/model/ModifyLinkAdvancedLogRequest.h
  include/tencentcloud/hasim/v20210716/model/DescribeRuleResponse.h
  include/tencentcloud/hasim/v20210716/model/ModifyRuleRequest.h
  include/tencentcloud/hasim/v20210716/model/LinkInfos.h
  include/tencentcloud/hasim/v20210716/model/TagInfos.h
  include/tencentcloud/hasim/v20210716/model/ModifyTagResponse.h
  include/tencentcloud/hasim/v20210716/model/CreateRuleRequest.h
  include/tencentcloud/hasim/v20210716/model/LinkDetailInfo.h
  include/tencentcloud/hasim/v20210716/model/DescribeRuleRequest.h
  include/tencentcloud/hasim/v20210716/model/RuleInfos.h
  include/tencentcloud/hasim/v20210716/model/ModifyRuleStatusResponse.h
  include/tencentcloud/hasim/v20210716/model/ModifyLinkTacticResponse.h
  include/tencentcloud/hasim/v20210716/model/DescribeTagsRequest.h
  include/tencentcloud/hasim/v20210716/model/DescribeLinksResponse.h
  include/tencentcloud/hasim/v20210716/model/ModifyTacticResponse.h
  include/tencentcloud/hasim/v20210716/model/ModifyRuleStatusRequest.h
  include/tencentcloud/hasim/v20210716/model/DescribeTacticsRequest.h
  include/tencentcloud/hasim/v20210716/model/TacticInfos.h
  include/tencentcloud/hasim/v20210716/model/RenewLinkInfoRequest.h
  include/tencentcloud/hasim/v20210716/model/CreateTagRequest.h
  include/tencentcloud/hasim/v20210716/model/DeleteTacticResponse.h
  include/tencentcloud/hasim/v20210716/model/DeleteTacticRequest.h
  include/tencentcloud/hasim/v20210716/model/DescribeTacticResponse.h
  include/tencentcloud/hasim/v20210716/model/ModifyLinkTacticRequest.h
  include/tencentcloud/hasim/v20210716/model/DescribeTacticRequest.h
  include/tencentcloud/hasim/v20210716/model/Rule.h
  include/tencentcloud/hasim/v20210716/model/CreateTagResponse.h
  include/tencentcloud/hasim/v20210716/model/DescribeLinksRequest.h
  include/tencentcloud/hasim/v20210716/model/CreateRuleResponse.h
  include/tencentcloud/hasim/v20210716/model/RuleDetail.h
  include/tencentcloud/hasim/v20210716/model/DescribeTacticsResponse.h
  include/tencentcloud/hasim/v20210716/model/RenewLinkInfoResponse.h
  include/tencentcloud/hasim/v20210716/model/DescribeRulesResponse.h
  include/tencentcloud/hasim/v20210716/model/DeleteTagResponse.h
  include/tencentcloud/hasim/v20210716/model/TeleOperatorCard.h
  include/tencentcloud/hasim/v20210716/model/ModifyLinkTeleResponse.h
  include/tencentcloud/hasim/v20210716/model/Orders.h
  include/tencentcloud/hasim/v20210716/model/ModifyTagRequest.h
  include/tencentcloud/hasim/v20210716/model/Tag.h
  include/tencentcloud/hasim/v20210716/model/OrderInfo.h
  include/tencentcloud/hasim/v20210716/model/CreateTacticResponse.h
  include/tencentcloud/hasim/v20210716/model/DescribeOrdersRequest.h
  include/tencentcloud/hasim/v20210716/model/ModifyLinkTeleRequest.h
  include/tencentcloud/hasim/v20210716/model/LinkInfo.h
  include/tencentcloud/hasim/v20210716/model/DescribeLinkRequest.h
  include/tencentcloud/hasim/v20210716/model/ModifyLinkAdvancedLogResponse.h
  include/tencentcloud/hasim/v20210716/model/ModifyRuleResponse.h
  )

set(hasim_src
  src/v20210716/HasimClient.cpp
  src/v20210716/model/DescribeTagsResponse.cpp
  src/v20210716/model/DescribeLinkResponse.cpp
  src/v20210716/model/DeleteRuleResponse.cpp
  src/v20210716/model/CreateTacticRequest.cpp
  src/v20210716/model/DeleteTagRequest.cpp
  src/v20210716/model/DescribeOrdersResponse.cpp
  src/v20210716/model/DeviceReport.cpp
  src/v20210716/model/ModifyTacticRequest.cpp
  src/v20210716/model/Tactic.cpp
  src/v20210716/model/DeleteRuleRequest.cpp
  src/v20210716/model/DescribeRulesRequest.cpp
  src/v20210716/model/ModifyLinkAdvancedLogRequest.cpp
  src/v20210716/model/DescribeRuleResponse.cpp
  src/v20210716/model/ModifyRuleRequest.cpp
  src/v20210716/model/LinkInfos.cpp
  src/v20210716/model/TagInfos.cpp
  src/v20210716/model/ModifyTagResponse.cpp
  src/v20210716/model/CreateRuleRequest.cpp
  src/v20210716/model/LinkDetailInfo.cpp
  src/v20210716/model/DescribeRuleRequest.cpp
  src/v20210716/model/RuleInfos.cpp
  src/v20210716/model/ModifyRuleStatusResponse.cpp
  src/v20210716/model/ModifyLinkTacticResponse.cpp
  src/v20210716/model/DescribeTagsRequest.cpp
  src/v20210716/model/DescribeLinksResponse.cpp
  src/v20210716/model/ModifyTacticResponse.cpp
  src/v20210716/model/ModifyRuleStatusRequest.cpp
  src/v20210716/model/DescribeTacticsRequest.cpp
  src/v20210716/model/TacticInfos.cpp
  src/v20210716/model/RenewLinkInfoRequest.cpp
  src/v20210716/model/CreateTagRequest.cpp
  src/v20210716/model/DeleteTacticResponse.cpp
  src/v20210716/model/DeleteTacticRequest.cpp
  src/v20210716/model/DescribeTacticResponse.cpp
  src/v20210716/model/ModifyLinkTacticRequest.cpp
  src/v20210716/model/DescribeTacticRequest.cpp
  src/v20210716/model/Rule.cpp
  src/v20210716/model/CreateTagResponse.cpp
  src/v20210716/model/DescribeLinksRequest.cpp
  src/v20210716/model/CreateRuleResponse.cpp
  src/v20210716/model/RuleDetail.cpp
  src/v20210716/model/DescribeTacticsResponse.cpp
  src/v20210716/model/RenewLinkInfoResponse.cpp
  src/v20210716/model/DescribeRulesResponse.cpp
  src/v20210716/model/DeleteTagResponse.cpp
  src/v20210716/model/TeleOperatorCard.cpp
  src/v20210716/model/ModifyLinkTeleResponse.cpp
  src/v20210716/model/Orders.cpp
  src/v20210716/model/ModifyTagRequest.cpp
  src/v20210716/model/Tag.cpp
  src/v20210716/model/OrderInfo.cpp
  src/v20210716/model/CreateTacticResponse.cpp
  src/v20210716/model/DescribeOrdersRequest.cpp
  src/v20210716/model/ModifyLinkTeleRequest.cpp
  src/v20210716/model/LinkInfo.cpp
  src/v20210716/model/DescribeLinkRequest.cpp
  src/v20210716/model/ModifyLinkAdvancedLogResponse.cpp
  src/v20210716/model/ModifyRuleResponse.cpp
  )

set(hasim_include
    include/tencentcloud/hasim
  )

add_library(hasim ${LIB_TYPE}
  ${hasim_public_header}
  ${hasim_public_header_model}
  ${hasim_src})

set_target_properties(hasim
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}hasim
  )

target_include_directories(hasim
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(hasim
  core)

#install(FILES ${hasim_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/hasim/v20210716)
#install(FILES ${hasim_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/hasim/v20210716/model)
install(DIRECTORY ${hasim_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS hasim
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
