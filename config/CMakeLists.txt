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

set(config_public_header
  include/tencentcloud/config/v20220802/ConfigClient.h
  )

set(config_public_header_model
  include/tencentcloud/config/v20220802/model/ResourceListInfo.h
  include/tencentcloud/config/v20220802/model/ListAggregateDiscoveredResourcesRequest.h
  include/tencentcloud/config/v20220802/model/AddAggregateCompliancePackResponse.h
  include/tencentcloud/config/v20220802/model/CloseAggregateConfigRuleResponse.h
  include/tencentcloud/config/v20220802/model/AddCompliancePackRequest.h
  include/tencentcloud/config/v20220802/model/ListRemediationsRequest.h
  include/tencentcloud/config/v20220802/model/DescribeAggregatorRequest.h
  include/tencentcloud/config/v20220802/model/PutEvaluationsResponse.h
  include/tencentcloud/config/v20220802/model/OpenAggregateConfigRuleResponse.h
  include/tencentcloud/config/v20220802/model/AddAggregateCompliancePackRequest.h
  include/tencentcloud/config/v20220802/model/DescribeAggregateCompliancePackResponse.h
  include/tencentcloud/config/v20220802/model/StartAggregateConfigRuleEvaluationResponse.h
  include/tencentcloud/config/v20220802/model/CloseConfigRecorderRequest.h
  include/tencentcloud/config/v20220802/model/DescribeSystemRuleRequest.h
  include/tencentcloud/config/v20220802/model/ListConfigRulesResponse.h
  include/tencentcloud/config/v20220802/model/SystemCompliancePack.h
  include/tencentcloud/config/v20220802/model/DeleteConfigRuleResponse.h
  include/tencentcloud/config/v20220802/model/Annotation.h
  include/tencentcloud/config/v20220802/model/UpdateRemediationResponse.h
  include/tencentcloud/config/v20220802/model/ListSystemRulesResponse.h
  include/tencentcloud/config/v20220802/model/CreateAggregatorResponse.h
  include/tencentcloud/config/v20220802/model/UpdateConfigRecorderRequest.h
  include/tencentcloud/config/v20220802/model/ListAggregateCompliancePacksResponse.h
  include/tencentcloud/config/v20220802/model/ListSystemCompliancePacksResponse.h
  include/tencentcloud/config/v20220802/model/ListAggregateConfigRuleEvaluationResultsResponse.h
  include/tencentcloud/config/v20220802/model/CloseAggregateConfigRuleRequest.h
  include/tencentcloud/config/v20220802/model/DescribeAggregateDiscoveredResourceResponse.h
  include/tencentcloud/config/v20220802/model/AggregatorAccount.h
  include/tencentcloud/config/v20220802/model/InputParameterForManage.h
  include/tencentcloud/config/v20220802/model/ListConfigRulesRequest.h
  include/tencentcloud/config/v20220802/model/DescribeAggregateConfigRuleRequest.h
  include/tencentcloud/config/v20220802/model/Control.h
  include/tencentcloud/config/v20220802/model/ListAggregateConfigRulesRequest.h
  include/tencentcloud/config/v20220802/model/ListConfigRuleEvaluationResultsResponse.h
  include/tencentcloud/config/v20220802/model/DescribeCompliancePackRequest.h
  include/tencentcloud/config/v20220802/model/ListDiscoveredResourcesResponse.h
  include/tencentcloud/config/v20220802/model/UpdateAggregateCompliancePackStatusResponse.h
  include/tencentcloud/config/v20220802/model/Aggregator.h
  include/tencentcloud/config/v20220802/model/DescribeAggregateConfigDeliverResponse.h
  include/tencentcloud/config/v20220802/model/OpenConfigRecorderResponse.h
  include/tencentcloud/config/v20220802/model/UpdateConfigDeliverResponse.h
  include/tencentcloud/config/v20220802/model/DescribeConfigRuleResponse.h
  include/tencentcloud/config/v20220802/model/UpdateCompliancePackRequest.h
  include/tencentcloud/config/v20220802/model/ListCompliancePacksRequest.h
  include/tencentcloud/config/v20220802/model/UpdateCompliancePackStatusResponse.h
  include/tencentcloud/config/v20220802/model/UpdateAggregateCompliancePackStatusRequest.h
  include/tencentcloud/config/v20220802/model/UpdateConfigRecorderResponse.h
  include/tencentcloud/config/v20220802/model/DescribeSystemCompliancePackResponse.h
  include/tencentcloud/config/v20220802/model/CompliancePackRules.h
  include/tencentcloud/config/v20220802/model/ComplianceConfigRule.h
  include/tencentcloud/config/v20220802/model/OpenAggregateConfigRuleRequest.h
  include/tencentcloud/config/v20220802/model/ListSystemCompliancePacksRequest.h
  include/tencentcloud/config/v20220802/model/Tag.h
  include/tencentcloud/config/v20220802/model/ListAggregatorsResponse.h
  include/tencentcloud/config/v20220802/model/ListConfigRuleEvaluationResultsRequest.h
  include/tencentcloud/config/v20220802/model/DeleteAggregateConfigRuleResponse.h
  include/tencentcloud/config/v20220802/model/CreateAggregatorRequest.h
  include/tencentcloud/config/v20220802/model/DescribeConfigRecorderResponse.h
  include/tencentcloud/config/v20220802/model/UpdateAggregateCompliancePackRequest.h
  include/tencentcloud/config/v20220802/model/CreateRemediationRequest.h
  include/tencentcloud/config/v20220802/model/AddCompliancePackResponse.h
  include/tencentcloud/config/v20220802/model/ConfigResource.h
  include/tencentcloud/config/v20220802/model/DescribeAggregateConfigDeliverRequest.h
  include/tencentcloud/config/v20220802/model/ListAggregatorsRequest.h
  include/tencentcloud/config/v20220802/model/UpdateAggregateConfigDeliverRequest.h
  include/tencentcloud/config/v20220802/model/PutEvaluationsRequest.h
  include/tencentcloud/config/v20220802/model/UpdateConfigRuleRequest.h
  include/tencentcloud/config/v20220802/model/UserConfigResource.h
  include/tencentcloud/config/v20220802/model/DetachConfigRuleToCompliancePackRequest.h
  include/tencentcloud/config/v20220802/model/UpdateRemediationRequest.h
  include/tencentcloud/config/v20220802/model/AggregateEvaluationResult.h
  include/tencentcloud/config/v20220802/model/SystemConfigRule.h
  include/tencentcloud/config/v20220802/model/DetachAggregateConfigRuleToCompliancePackResponse.h
  include/tencentcloud/config/v20220802/model/DescribeAggregateDiscoveredResourceRequest.h
  include/tencentcloud/config/v20220802/model/AddConfigRuleResponse.h
  include/tencentcloud/config/v20220802/model/SourceConditionForManage.h
  include/tencentcloud/config/v20220802/model/AddConfigRuleRequest.h
  include/tencentcloud/config/v20220802/model/ListCompliancePacksResponse.h
  include/tencentcloud/config/v20220802/model/DescribeConfigDeliverResponse.h
  include/tencentcloud/config/v20220802/model/DetachConfigRuleToCompliancePackResponse.h
  include/tencentcloud/config/v20220802/model/CloseConfigRuleRequest.h
  include/tencentcloud/config/v20220802/model/DescribeSystemCompliancePackRequest.h
  include/tencentcloud/config/v20220802/model/Evaluation.h
  include/tencentcloud/config/v20220802/model/AddAggregateConfigRuleResponse.h
  include/tencentcloud/config/v20220802/model/OpenConfigRuleResponse.h
  include/tencentcloud/config/v20220802/model/DescribeDiscoveredResourceResponse.h
  include/tencentcloud/config/v20220802/model/RemediationExecutions.h
  include/tencentcloud/config/v20220802/model/UpdateConfigRuleResponse.h
  include/tencentcloud/config/v20220802/model/DetachAggregateConfigRuleToCompliancePackRequest.h
  include/tencentcloud/config/v20220802/model/ListAggregateCompliancePacksRequest.h
  include/tencentcloud/config/v20220802/model/ListResourceTypesResponse.h
  include/tencentcloud/config/v20220802/model/DeleteRemediationsResponse.h
  include/tencentcloud/config/v20220802/model/DeleteConfigRuleRequest.h
  include/tencentcloud/config/v20220802/model/Filter.h
  include/tencentcloud/config/v20220802/model/ListAggregateConfigRuleEvaluationResultsRequest.h
  include/tencentcloud/config/v20220802/model/UpdateCompliancePackStatusRequest.h
  include/tencentcloud/config/v20220802/model/DeleteAggregateConfigRuleRequest.h
  include/tencentcloud/config/v20220802/model/DeleteCompliancePackResponse.h
  include/tencentcloud/config/v20220802/model/CreateRemediationResponse.h
  include/tencentcloud/config/v20220802/model/UpdateAggregateConfigDeliverResponse.h
  include/tencentcloud/config/v20220802/model/UpdateAggregateCompliancePackResponse.h
  include/tencentcloud/config/v20220802/model/CompliancePackRuleForManage.h
  include/tencentcloud/config/v20220802/model/DeleteAggregateCompliancePackRequest.h
  include/tencentcloud/config/v20220802/model/ListSystemRulesRequest.h
  include/tencentcloud/config/v20220802/model/AggregateResourceInfo.h
  include/tencentcloud/config/v20220802/model/DescribeAggregatorResponse.h
  include/tencentcloud/config/v20220802/model/TriggerType.h
  include/tencentcloud/config/v20220802/model/EvaluationResult.h
  include/tencentcloud/config/v20220802/model/ConfigCompliancePack.h
  include/tencentcloud/config/v20220802/model/DescribeAggregateConfigRuleResponse.h
  include/tencentcloud/config/v20220802/model/StartAggregateConfigRuleEvaluationRequest.h
  include/tencentcloud/config/v20220802/model/ListRemediationExecutionsRequest.h
  include/tencentcloud/config/v20220802/model/CompliancePackRule.h
  include/tencentcloud/config/v20220802/model/DescribeDiscoveredResourceRequest.h
  include/tencentcloud/config/v20220802/model/ListRemediationExecutionsResponse.h
  include/tencentcloud/config/v20220802/model/CloseConfigRecorderResponse.h
  include/tencentcloud/config/v20220802/model/DescribeConfigRecorderRequest.h
  include/tencentcloud/config/v20220802/model/StartConfigRuleEvaluationRequest.h
  include/tencentcloud/config/v20220802/model/DescribeConfigRuleRequest.h
  include/tencentcloud/config/v20220802/model/UpdateConfigDeliverRequest.h
  include/tencentcloud/config/v20220802/model/ListDiscoveredResourcesRequest.h
  include/tencentcloud/config/v20220802/model/Remediation.h
  include/tencentcloud/config/v20220802/model/ConfigRule.h
  include/tencentcloud/config/v20220802/model/ListResourceTypesRequest.h
  include/tencentcloud/config/v20220802/model/UpdateCompliancePackResponse.h
  include/tencentcloud/config/v20220802/model/ListAggregateConfigRulesResponse.h
  include/tencentcloud/config/v20220802/model/StartRemediationResponse.h
  include/tencentcloud/config/v20220802/model/DeleteAggregateCompliancePackResponse.h
  include/tencentcloud/config/v20220802/model/DescribeCompliancePackResponse.h
  include/tencentcloud/config/v20220802/model/DescribeAggregateCompliancePackRequest.h
  include/tencentcloud/config/v20220802/model/OpenConfigRuleRequest.h
  include/tencentcloud/config/v20220802/model/StartRemediationRequest.h
  include/tencentcloud/config/v20220802/model/CloseConfigRuleResponse.h
  include/tencentcloud/config/v20220802/model/DescribeSystemRuleResponse.h
  include/tencentcloud/config/v20220802/model/DescribeConfigDeliverRequest.h
  include/tencentcloud/config/v20220802/model/UpdateAggregateConfigRuleRequest.h
  include/tencentcloud/config/v20220802/model/OpenConfigRecorderRequest.h
  include/tencentcloud/config/v20220802/model/AddAggregateConfigRuleRequest.h
  include/tencentcloud/config/v20220802/model/DeleteCompliancePackRequest.h
  include/tencentcloud/config/v20220802/model/StartConfigRuleEvaluationResponse.h
  include/tencentcloud/config/v20220802/model/ListAggregateDiscoveredResourcesResponse.h
  include/tencentcloud/config/v20220802/model/UpdateAggregateConfigRuleResponse.h
  include/tencentcloud/config/v20220802/model/InputParameter.h
  include/tencentcloud/config/v20220802/model/ListRemediationsResponse.h
  include/tencentcloud/config/v20220802/model/DeleteRemediationsRequest.h
  )

set(config_src
  src/v20220802/ConfigClient.cpp
  src/v20220802/model/ResourceListInfo.cpp
  src/v20220802/model/ListAggregateDiscoveredResourcesRequest.cpp
  src/v20220802/model/AddAggregateCompliancePackResponse.cpp
  src/v20220802/model/CloseAggregateConfigRuleResponse.cpp
  src/v20220802/model/AddCompliancePackRequest.cpp
  src/v20220802/model/ListRemediationsRequest.cpp
  src/v20220802/model/DescribeAggregatorRequest.cpp
  src/v20220802/model/PutEvaluationsResponse.cpp
  src/v20220802/model/OpenAggregateConfigRuleResponse.cpp
  src/v20220802/model/AddAggregateCompliancePackRequest.cpp
  src/v20220802/model/DescribeAggregateCompliancePackResponse.cpp
  src/v20220802/model/StartAggregateConfigRuleEvaluationResponse.cpp
  src/v20220802/model/CloseConfigRecorderRequest.cpp
  src/v20220802/model/DescribeSystemRuleRequest.cpp
  src/v20220802/model/ListConfigRulesResponse.cpp
  src/v20220802/model/SystemCompliancePack.cpp
  src/v20220802/model/DeleteConfigRuleResponse.cpp
  src/v20220802/model/Annotation.cpp
  src/v20220802/model/UpdateRemediationResponse.cpp
  src/v20220802/model/ListSystemRulesResponse.cpp
  src/v20220802/model/CreateAggregatorResponse.cpp
  src/v20220802/model/UpdateConfigRecorderRequest.cpp
  src/v20220802/model/ListAggregateCompliancePacksResponse.cpp
  src/v20220802/model/ListSystemCompliancePacksResponse.cpp
  src/v20220802/model/ListAggregateConfigRuleEvaluationResultsResponse.cpp
  src/v20220802/model/CloseAggregateConfigRuleRequest.cpp
  src/v20220802/model/DescribeAggregateDiscoveredResourceResponse.cpp
  src/v20220802/model/AggregatorAccount.cpp
  src/v20220802/model/InputParameterForManage.cpp
  src/v20220802/model/ListConfigRulesRequest.cpp
  src/v20220802/model/DescribeAggregateConfigRuleRequest.cpp
  src/v20220802/model/Control.cpp
  src/v20220802/model/ListAggregateConfigRulesRequest.cpp
  src/v20220802/model/ListConfigRuleEvaluationResultsResponse.cpp
  src/v20220802/model/DescribeCompliancePackRequest.cpp
  src/v20220802/model/ListDiscoveredResourcesResponse.cpp
  src/v20220802/model/UpdateAggregateCompliancePackStatusResponse.cpp
  src/v20220802/model/Aggregator.cpp
  src/v20220802/model/DescribeAggregateConfigDeliverResponse.cpp
  src/v20220802/model/OpenConfigRecorderResponse.cpp
  src/v20220802/model/UpdateConfigDeliverResponse.cpp
  src/v20220802/model/DescribeConfigRuleResponse.cpp
  src/v20220802/model/UpdateCompliancePackRequest.cpp
  src/v20220802/model/ListCompliancePacksRequest.cpp
  src/v20220802/model/UpdateCompliancePackStatusResponse.cpp
  src/v20220802/model/UpdateAggregateCompliancePackStatusRequest.cpp
  src/v20220802/model/UpdateConfigRecorderResponse.cpp
  src/v20220802/model/DescribeSystemCompliancePackResponse.cpp
  src/v20220802/model/CompliancePackRules.cpp
  src/v20220802/model/ComplianceConfigRule.cpp
  src/v20220802/model/OpenAggregateConfigRuleRequest.cpp
  src/v20220802/model/ListSystemCompliancePacksRequest.cpp
  src/v20220802/model/Tag.cpp
  src/v20220802/model/ListAggregatorsResponse.cpp
  src/v20220802/model/ListConfigRuleEvaluationResultsRequest.cpp
  src/v20220802/model/DeleteAggregateConfigRuleResponse.cpp
  src/v20220802/model/CreateAggregatorRequest.cpp
  src/v20220802/model/DescribeConfigRecorderResponse.cpp
  src/v20220802/model/UpdateAggregateCompliancePackRequest.cpp
  src/v20220802/model/CreateRemediationRequest.cpp
  src/v20220802/model/AddCompliancePackResponse.cpp
  src/v20220802/model/ConfigResource.cpp
  src/v20220802/model/DescribeAggregateConfigDeliverRequest.cpp
  src/v20220802/model/ListAggregatorsRequest.cpp
  src/v20220802/model/UpdateAggregateConfigDeliverRequest.cpp
  src/v20220802/model/PutEvaluationsRequest.cpp
  src/v20220802/model/UpdateConfigRuleRequest.cpp
  src/v20220802/model/UserConfigResource.cpp
  src/v20220802/model/DetachConfigRuleToCompliancePackRequest.cpp
  src/v20220802/model/UpdateRemediationRequest.cpp
  src/v20220802/model/AggregateEvaluationResult.cpp
  src/v20220802/model/SystemConfigRule.cpp
  src/v20220802/model/DetachAggregateConfigRuleToCompliancePackResponse.cpp
  src/v20220802/model/DescribeAggregateDiscoveredResourceRequest.cpp
  src/v20220802/model/AddConfigRuleResponse.cpp
  src/v20220802/model/SourceConditionForManage.cpp
  src/v20220802/model/AddConfigRuleRequest.cpp
  src/v20220802/model/ListCompliancePacksResponse.cpp
  src/v20220802/model/DescribeConfigDeliverResponse.cpp
  src/v20220802/model/DetachConfigRuleToCompliancePackResponse.cpp
  src/v20220802/model/CloseConfigRuleRequest.cpp
  src/v20220802/model/DescribeSystemCompliancePackRequest.cpp
  src/v20220802/model/Evaluation.cpp
  src/v20220802/model/AddAggregateConfigRuleResponse.cpp
  src/v20220802/model/OpenConfigRuleResponse.cpp
  src/v20220802/model/DescribeDiscoveredResourceResponse.cpp
  src/v20220802/model/RemediationExecutions.cpp
  src/v20220802/model/UpdateConfigRuleResponse.cpp
  src/v20220802/model/DetachAggregateConfigRuleToCompliancePackRequest.cpp
  src/v20220802/model/ListAggregateCompliancePacksRequest.cpp
  src/v20220802/model/ListResourceTypesResponse.cpp
  src/v20220802/model/DeleteRemediationsResponse.cpp
  src/v20220802/model/DeleteConfigRuleRequest.cpp
  src/v20220802/model/Filter.cpp
  src/v20220802/model/ListAggregateConfigRuleEvaluationResultsRequest.cpp
  src/v20220802/model/UpdateCompliancePackStatusRequest.cpp
  src/v20220802/model/DeleteAggregateConfigRuleRequest.cpp
  src/v20220802/model/DeleteCompliancePackResponse.cpp
  src/v20220802/model/CreateRemediationResponse.cpp
  src/v20220802/model/UpdateAggregateConfigDeliverResponse.cpp
  src/v20220802/model/UpdateAggregateCompliancePackResponse.cpp
  src/v20220802/model/CompliancePackRuleForManage.cpp
  src/v20220802/model/DeleteAggregateCompliancePackRequest.cpp
  src/v20220802/model/ListSystemRulesRequest.cpp
  src/v20220802/model/AggregateResourceInfo.cpp
  src/v20220802/model/DescribeAggregatorResponse.cpp
  src/v20220802/model/TriggerType.cpp
  src/v20220802/model/EvaluationResult.cpp
  src/v20220802/model/ConfigCompliancePack.cpp
  src/v20220802/model/DescribeAggregateConfigRuleResponse.cpp
  src/v20220802/model/StartAggregateConfigRuleEvaluationRequest.cpp
  src/v20220802/model/ListRemediationExecutionsRequest.cpp
  src/v20220802/model/CompliancePackRule.cpp
  src/v20220802/model/DescribeDiscoveredResourceRequest.cpp
  src/v20220802/model/ListRemediationExecutionsResponse.cpp
  src/v20220802/model/CloseConfigRecorderResponse.cpp
  src/v20220802/model/DescribeConfigRecorderRequest.cpp
  src/v20220802/model/StartConfigRuleEvaluationRequest.cpp
  src/v20220802/model/DescribeConfigRuleRequest.cpp
  src/v20220802/model/UpdateConfigDeliverRequest.cpp
  src/v20220802/model/ListDiscoveredResourcesRequest.cpp
  src/v20220802/model/Remediation.cpp
  src/v20220802/model/ConfigRule.cpp
  src/v20220802/model/ListResourceTypesRequest.cpp
  src/v20220802/model/UpdateCompliancePackResponse.cpp
  src/v20220802/model/ListAggregateConfigRulesResponse.cpp
  src/v20220802/model/StartRemediationResponse.cpp
  src/v20220802/model/DeleteAggregateCompliancePackResponse.cpp
  src/v20220802/model/DescribeCompliancePackResponse.cpp
  src/v20220802/model/DescribeAggregateCompliancePackRequest.cpp
  src/v20220802/model/OpenConfigRuleRequest.cpp
  src/v20220802/model/StartRemediationRequest.cpp
  src/v20220802/model/CloseConfigRuleResponse.cpp
  src/v20220802/model/DescribeSystemRuleResponse.cpp
  src/v20220802/model/DescribeConfigDeliverRequest.cpp
  src/v20220802/model/UpdateAggregateConfigRuleRequest.cpp
  src/v20220802/model/OpenConfigRecorderRequest.cpp
  src/v20220802/model/AddAggregateConfigRuleRequest.cpp
  src/v20220802/model/DeleteCompliancePackRequest.cpp
  src/v20220802/model/StartConfigRuleEvaluationResponse.cpp
  src/v20220802/model/ListAggregateDiscoveredResourcesResponse.cpp
  src/v20220802/model/UpdateAggregateConfigRuleResponse.cpp
  src/v20220802/model/InputParameter.cpp
  src/v20220802/model/ListRemediationsResponse.cpp
  src/v20220802/model/DeleteRemediationsRequest.cpp
  )

set(config_include
    include/tencentcloud/config
  )

add_library(config ${LIB_TYPE}
  ${config_public_header}
  ${config_public_header_model}
  ${config_src})

set_target_properties(config
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}config
  )

target_include_directories(config
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(config
  core)

#install(FILES ${config_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/config/v20220802)
#install(FILES ${config_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/config/v20220802/model)
install(DIRECTORY ${config_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS config
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
