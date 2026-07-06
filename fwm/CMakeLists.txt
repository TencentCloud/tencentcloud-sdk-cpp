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

set(fwm_public_header
  include/tencentcloud/fwm/v20250611/FwmClient.h
  )

set(fwm_public_header_model
  include/tencentcloud/fwm/v20250611/model/DescribeSecurityGroupRulesRequest.h
  include/tencentcloud/fwm/v20250611/model/CreateNatAclRuleGroupResponse.h
  include/tencentcloud/fwm/v20250611/model/ModifyStrategySequenceRequest.h
  include/tencentcloud/fwm/v20250611/model/DispatchStrategyRequest.h
  include/tencentcloud/fwm/v20250611/model/DescribeStrategiesRequest.h
  include/tencentcloud/fwm/v20250611/model/IgnorePolicyRiskResponse.h
  include/tencentcloud/fwm/v20250611/model/DescribeRiskListResponse.h
  include/tencentcloud/fwm/v20250611/model/DescribeNatAclRulesRequest.h
  include/tencentcloud/fwm/v20250611/model/ModifyStrategyRequest.h
  include/tencentcloud/fwm/v20250611/model/DeleteStrategyRequest.h
  include/tencentcloud/fwm/v20250611/model/ModifyRuleGroupRequest.h
  include/tencentcloud/fwm/v20250611/model/ModifyEdgeAclRuleSequenceResponse.h
  include/tencentcloud/fwm/v20250611/model/ModifySecurityGroupRuleRequest.h
  include/tencentcloud/fwm/v20250611/model/DescribeVpcAclRulesRequest.h
  include/tencentcloud/fwm/v20250611/model/DescribePolicyRiskAccountProductStatsResponse.h
  include/tencentcloud/fwm/v20250611/model/DescribeVpcAclRulesResponse.h
  include/tencentcloud/fwm/v20250611/model/OrganMemberItem.h
  include/tencentcloud/fwm/v20250611/model/DescribeStrategyResponse.h
  include/tencentcloud/fwm/v20250611/model/DescribeEdgeAclRulesRequest.h
  include/tencentcloud/fwm/v20250611/model/DescribeStrategiesResponse.h
  include/tencentcloud/fwm/v20250611/model/DescribeStrategyAccountsRequest.h
  include/tencentcloud/fwm/v20250611/model/DescribeStrategyDispatchStatusRequest.h
  include/tencentcloud/fwm/v20250611/model/ModifyEdgeAclRuleSequenceRequest.h
  include/tencentcloud/fwm/v20250611/model/SecurityGroupRule.h
  include/tencentcloud/fwm/v20250611/model/DeleteSecurityGroupRuleResponse.h
  include/tencentcloud/fwm/v20250611/model/OrganSummary.h
  include/tencentcloud/fwm/v20250611/model/DescribeNatAclRulesResponse.h
  include/tencentcloud/fwm/v20250611/model/DescribeSecurityGroupRuleRequest.h
  include/tencentcloud/fwm/v20250611/model/DescribeStrategyRequest.h
  include/tencentcloud/fwm/v20250611/model/DeleteNatAclRuleResponse.h
  include/tencentcloud/fwm/v20250611/model/SgDnsParseCount.h
  include/tencentcloud/fwm/v20250611/model/DescribeOrganSummaryResponse.h
  include/tencentcloud/fwm/v20250611/model/DeleteVpcAclRuleRequest.h
  include/tencentcloud/fwm/v20250611/model/DeleteStrategyResponse.h
  include/tencentcloud/fwm/v20250611/model/StrategyResp.h
  include/tencentcloud/fwm/v20250611/model/DescribeOrganMembersResponse.h
  include/tencentcloud/fwm/v20250611/model/ModifyEdgeAclRuleRequest.h
  include/tencentcloud/fwm/v20250611/model/ModifyNatAclRuleSequenceResponse.h
  include/tencentcloud/fwm/v20250611/model/DeleteEdgeAclRuleRequest.h
  include/tencentcloud/fwm/v20250611/model/DeleteEdgeAclRuleResponse.h
  include/tencentcloud/fwm/v20250611/model/ModifyVpcAclRuleResponse.h
  include/tencentcloud/fwm/v20250611/model/NatAclRuleResp.h
  include/tencentcloud/fwm/v20250611/model/CreateStrategyRequest.h
  include/tencentcloud/fwm/v20250611/model/VpcAclRule.h
  include/tencentcloud/fwm/v20250611/model/CommonFilter.h
  include/tencentcloud/fwm/v20250611/model/ModifyVpcAclRuleSequenceResponse.h
  include/tencentcloud/fwm/v20250611/model/DeleteRuleGroupResponse.h
  include/tencentcloud/fwm/v20250611/model/CancelIgnorePolicyRiskRequest.h
  include/tencentcloud/fwm/v20250611/model/DeleteVpcAclRuleResponse.h
  include/tencentcloud/fwm/v20250611/model/CreateSecurityGroupRuleGroupResponse.h
  include/tencentcloud/fwm/v20250611/model/ServiceTemplateSpecification.h
  include/tencentcloud/fwm/v20250611/model/ModifyVpcAclRuleSequenceRequest.h
  include/tencentcloud/fwm/v20250611/model/ModifyNatAclRuleRequest.h
  include/tencentcloud/fwm/v20250611/model/AddressTemplateSpecification.h
  include/tencentcloud/fwm/v20250611/model/CreateVpcAclRuleGroupResponse.h
  include/tencentcloud/fwm/v20250611/model/CreateSecurityGroupRuleResponse.h
  include/tencentcloud/fwm/v20250611/model/DispatchStrategyResponse.h
  include/tencentcloud/fwm/v20250611/model/ModifyNatAclRuleResponse.h
  include/tencentcloud/fwm/v20250611/model/DescribeSecurityGroupRuleResponse.h
  include/tencentcloud/fwm/v20250611/model/DescribeRiskCategoryStatsResponse.h
  include/tencentcloud/fwm/v20250611/model/MemberInfo.h
  include/tencentcloud/fwm/v20250611/model/DescribePolicyRiskAccountProductStatsRequest.h
  include/tencentcloud/fwm/v20250611/model/CreateEdgeAclRuleResponse.h
  include/tencentcloud/fwm/v20250611/model/CreateStrategyResponse.h
  include/tencentcloud/fwm/v20250611/model/AccountGroupInfo.h
  include/tencentcloud/fwm/v20250611/model/DescribeStrategyDispatchStatusResponse.h
  include/tencentcloud/fwm/v20250611/model/ModifyStrategyResponse.h
  include/tencentcloud/fwm/v20250611/model/CreateVpcAclRuleResponse.h
  include/tencentcloud/fwm/v20250611/model/DescribeRiskCategoryStatsRequest.h
  include/tencentcloud/fwm/v20250611/model/AnalysisSgRuleInfoResp.h
  include/tencentcloud/fwm/v20250611/model/NatAclRule.h
  include/tencentcloud/fwm/v20250611/model/ModifySecurityGroupRuleResponse.h
  include/tencentcloud/fwm/v20250611/model/DescribeOrganMembersRequest.h
  include/tencentcloud/fwm/v20250611/model/CreateVpcAclRuleGroupRequest.h
  include/tencentcloud/fwm/v20250611/model/ModifyVpcAclRuleRequest.h
  include/tencentcloud/fwm/v20250611/model/DescribeEdgeAclRulesResponse.h
  include/tencentcloud/fwm/v20250611/model/ModifyNatAclRuleSequenceRequest.h
  include/tencentcloud/fwm/v20250611/model/DescribeStrategyAccountsResponse.h
  include/tencentcloud/fwm/v20250611/model/DescribeSecurityGroupRulesResponse.h
  include/tencentcloud/fwm/v20250611/model/DescribeRiskAnalysisDetailsRequest.h
  include/tencentcloud/fwm/v20250611/model/AccountGroupQuotaDetail.h
  include/tencentcloud/fwm/v20250611/model/CreateNatAclRuleGroupRequest.h
  include/tencentcloud/fwm/v20250611/model/StrategyReq.h
  include/tencentcloud/fwm/v20250611/model/DescribeOrganSummaryRequest.h
  include/tencentcloud/fwm/v20250611/model/SgRuleResp.h
  include/tencentcloud/fwm/v20250611/model/DeleteNatAclRuleRequest.h
  include/tencentcloud/fwm/v20250611/model/ModifyStrategySequenceResponse.h
  include/tencentcloud/fwm/v20250611/model/ModifyEdgeAclRuleResponse.h
  include/tencentcloud/fwm/v20250611/model/IgnorePolicyRiskRequest.h
  include/tencentcloud/fwm/v20250611/model/VpcAclRuleResp.h
  include/tencentcloud/fwm/v20250611/model/SecurityGroupRiskPolicy.h
  include/tencentcloud/fwm/v20250611/model/SecGroupRuleResp.h
  include/tencentcloud/fwm/v20250611/model/DescribeRiskAnalysisDetailsResponse.h
  include/tencentcloud/fwm/v20250611/model/EdgeAclRuleResp.h
  include/tencentcloud/fwm/v20250611/model/ModifyRuleGroupResponse.h
  include/tencentcloud/fwm/v20250611/model/CreateEdgeAclRuleRequest.h
  include/tencentcloud/fwm/v20250611/model/CreateVpcAclRuleRequest.h
  include/tencentcloud/fwm/v20250611/model/SequenceIndex.h
  include/tencentcloud/fwm/v20250611/model/CreateSecurityGroupRuleGroupRequest.h
  include/tencentcloud/fwm/v20250611/model/CreateNatAclRuleResponse.h
  include/tencentcloud/fwm/v20250611/model/CreateAnalyzePolicyTaskResponse.h
  include/tencentcloud/fwm/v20250611/model/PolicyRisk.h
  include/tencentcloud/fwm/v20250611/model/DeleteSecurityGroupRuleRequest.h
  include/tencentcloud/fwm/v20250611/model/CreateEdgeAclRuleGroupResponse.h
  include/tencentcloud/fwm/v20250611/model/CreateAnalyzePolicyTaskRequest.h
  include/tencentcloud/fwm/v20250611/model/AccountProductDetailStats.h
  include/tencentcloud/fwm/v20250611/model/AccountStatsGroup.h
  include/tencentcloud/fwm/v20250611/model/CreateSecurityGroupRuleRequest.h
  include/tencentcloud/fwm/v20250611/model/DescribeRiskListRequest.h
  include/tencentcloud/fwm/v20250611/model/RiskCategoryItem.h
  include/tencentcloud/fwm/v20250611/model/Account.h
  include/tencentcloud/fwm/v20250611/model/CancelIgnorePolicyRiskResponse.h
  include/tencentcloud/fwm/v20250611/model/ReceiveAccount.h
  include/tencentcloud/fwm/v20250611/model/EdgeAclRuleInfo.h
  include/tencentcloud/fwm/v20250611/model/DeleteRuleGroupRequest.h
  include/tencentcloud/fwm/v20250611/model/CreateEdgeAclRuleGroupRequest.h
  include/tencentcloud/fwm/v20250611/model/CreateNatAclRuleRequest.h
  )

set(fwm_src
  src/v20250611/FwmClient.cpp
  src/v20250611/model/DescribeSecurityGroupRulesRequest.cpp
  src/v20250611/model/CreateNatAclRuleGroupResponse.cpp
  src/v20250611/model/ModifyStrategySequenceRequest.cpp
  src/v20250611/model/DispatchStrategyRequest.cpp
  src/v20250611/model/DescribeStrategiesRequest.cpp
  src/v20250611/model/IgnorePolicyRiskResponse.cpp
  src/v20250611/model/DescribeRiskListResponse.cpp
  src/v20250611/model/DescribeNatAclRulesRequest.cpp
  src/v20250611/model/ModifyStrategyRequest.cpp
  src/v20250611/model/DeleteStrategyRequest.cpp
  src/v20250611/model/ModifyRuleGroupRequest.cpp
  src/v20250611/model/ModifyEdgeAclRuleSequenceResponse.cpp
  src/v20250611/model/ModifySecurityGroupRuleRequest.cpp
  src/v20250611/model/DescribeVpcAclRulesRequest.cpp
  src/v20250611/model/DescribePolicyRiskAccountProductStatsResponse.cpp
  src/v20250611/model/DescribeVpcAclRulesResponse.cpp
  src/v20250611/model/OrganMemberItem.cpp
  src/v20250611/model/DescribeStrategyResponse.cpp
  src/v20250611/model/DescribeEdgeAclRulesRequest.cpp
  src/v20250611/model/DescribeStrategiesResponse.cpp
  src/v20250611/model/DescribeStrategyAccountsRequest.cpp
  src/v20250611/model/DescribeStrategyDispatchStatusRequest.cpp
  src/v20250611/model/ModifyEdgeAclRuleSequenceRequest.cpp
  src/v20250611/model/SecurityGroupRule.cpp
  src/v20250611/model/DeleteSecurityGroupRuleResponse.cpp
  src/v20250611/model/OrganSummary.cpp
  src/v20250611/model/DescribeNatAclRulesResponse.cpp
  src/v20250611/model/DescribeSecurityGroupRuleRequest.cpp
  src/v20250611/model/DescribeStrategyRequest.cpp
  src/v20250611/model/DeleteNatAclRuleResponse.cpp
  src/v20250611/model/SgDnsParseCount.cpp
  src/v20250611/model/DescribeOrganSummaryResponse.cpp
  src/v20250611/model/DeleteVpcAclRuleRequest.cpp
  src/v20250611/model/DeleteStrategyResponse.cpp
  src/v20250611/model/StrategyResp.cpp
  src/v20250611/model/DescribeOrganMembersResponse.cpp
  src/v20250611/model/ModifyEdgeAclRuleRequest.cpp
  src/v20250611/model/ModifyNatAclRuleSequenceResponse.cpp
  src/v20250611/model/DeleteEdgeAclRuleRequest.cpp
  src/v20250611/model/DeleteEdgeAclRuleResponse.cpp
  src/v20250611/model/ModifyVpcAclRuleResponse.cpp
  src/v20250611/model/NatAclRuleResp.cpp
  src/v20250611/model/CreateStrategyRequest.cpp
  src/v20250611/model/VpcAclRule.cpp
  src/v20250611/model/CommonFilter.cpp
  src/v20250611/model/ModifyVpcAclRuleSequenceResponse.cpp
  src/v20250611/model/DeleteRuleGroupResponse.cpp
  src/v20250611/model/CancelIgnorePolicyRiskRequest.cpp
  src/v20250611/model/DeleteVpcAclRuleResponse.cpp
  src/v20250611/model/CreateSecurityGroupRuleGroupResponse.cpp
  src/v20250611/model/ServiceTemplateSpecification.cpp
  src/v20250611/model/ModifyVpcAclRuleSequenceRequest.cpp
  src/v20250611/model/ModifyNatAclRuleRequest.cpp
  src/v20250611/model/AddressTemplateSpecification.cpp
  src/v20250611/model/CreateVpcAclRuleGroupResponse.cpp
  src/v20250611/model/CreateSecurityGroupRuleResponse.cpp
  src/v20250611/model/DispatchStrategyResponse.cpp
  src/v20250611/model/ModifyNatAclRuleResponse.cpp
  src/v20250611/model/DescribeSecurityGroupRuleResponse.cpp
  src/v20250611/model/DescribeRiskCategoryStatsResponse.cpp
  src/v20250611/model/MemberInfo.cpp
  src/v20250611/model/DescribePolicyRiskAccountProductStatsRequest.cpp
  src/v20250611/model/CreateEdgeAclRuleResponse.cpp
  src/v20250611/model/CreateStrategyResponse.cpp
  src/v20250611/model/AccountGroupInfo.cpp
  src/v20250611/model/DescribeStrategyDispatchStatusResponse.cpp
  src/v20250611/model/ModifyStrategyResponse.cpp
  src/v20250611/model/CreateVpcAclRuleResponse.cpp
  src/v20250611/model/DescribeRiskCategoryStatsRequest.cpp
  src/v20250611/model/AnalysisSgRuleInfoResp.cpp
  src/v20250611/model/NatAclRule.cpp
  src/v20250611/model/ModifySecurityGroupRuleResponse.cpp
  src/v20250611/model/DescribeOrganMembersRequest.cpp
  src/v20250611/model/CreateVpcAclRuleGroupRequest.cpp
  src/v20250611/model/ModifyVpcAclRuleRequest.cpp
  src/v20250611/model/DescribeEdgeAclRulesResponse.cpp
  src/v20250611/model/ModifyNatAclRuleSequenceRequest.cpp
  src/v20250611/model/DescribeStrategyAccountsResponse.cpp
  src/v20250611/model/DescribeSecurityGroupRulesResponse.cpp
  src/v20250611/model/DescribeRiskAnalysisDetailsRequest.cpp
  src/v20250611/model/AccountGroupQuotaDetail.cpp
  src/v20250611/model/CreateNatAclRuleGroupRequest.cpp
  src/v20250611/model/StrategyReq.cpp
  src/v20250611/model/DescribeOrganSummaryRequest.cpp
  src/v20250611/model/SgRuleResp.cpp
  src/v20250611/model/DeleteNatAclRuleRequest.cpp
  src/v20250611/model/ModifyStrategySequenceResponse.cpp
  src/v20250611/model/ModifyEdgeAclRuleResponse.cpp
  src/v20250611/model/IgnorePolicyRiskRequest.cpp
  src/v20250611/model/VpcAclRuleResp.cpp
  src/v20250611/model/SecurityGroupRiskPolicy.cpp
  src/v20250611/model/SecGroupRuleResp.cpp
  src/v20250611/model/DescribeRiskAnalysisDetailsResponse.cpp
  src/v20250611/model/EdgeAclRuleResp.cpp
  src/v20250611/model/ModifyRuleGroupResponse.cpp
  src/v20250611/model/CreateEdgeAclRuleRequest.cpp
  src/v20250611/model/CreateVpcAclRuleRequest.cpp
  src/v20250611/model/SequenceIndex.cpp
  src/v20250611/model/CreateSecurityGroupRuleGroupRequest.cpp
  src/v20250611/model/CreateNatAclRuleResponse.cpp
  src/v20250611/model/CreateAnalyzePolicyTaskResponse.cpp
  src/v20250611/model/PolicyRisk.cpp
  src/v20250611/model/DeleteSecurityGroupRuleRequest.cpp
  src/v20250611/model/CreateEdgeAclRuleGroupResponse.cpp
  src/v20250611/model/CreateAnalyzePolicyTaskRequest.cpp
  src/v20250611/model/AccountProductDetailStats.cpp
  src/v20250611/model/AccountStatsGroup.cpp
  src/v20250611/model/CreateSecurityGroupRuleRequest.cpp
  src/v20250611/model/DescribeRiskListRequest.cpp
  src/v20250611/model/RiskCategoryItem.cpp
  src/v20250611/model/Account.cpp
  src/v20250611/model/CancelIgnorePolicyRiskResponse.cpp
  src/v20250611/model/ReceiveAccount.cpp
  src/v20250611/model/EdgeAclRuleInfo.cpp
  src/v20250611/model/DeleteRuleGroupRequest.cpp
  src/v20250611/model/CreateEdgeAclRuleGroupRequest.cpp
  src/v20250611/model/CreateNatAclRuleRequest.cpp
  )

set(fwm_include
    include/tencentcloud/fwm
  )

add_library(fwm ${LIB_TYPE}
  ${fwm_public_header}
  ${fwm_public_header_model}
  ${fwm_src})

set_target_properties(fwm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}fwm
  )

target_include_directories(fwm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(fwm
  core)

#install(FILES ${fwm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/fwm/v20250611)
#install(FILES ${fwm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/fwm/v20250611/model)
install(DIRECTORY ${fwm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS fwm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
