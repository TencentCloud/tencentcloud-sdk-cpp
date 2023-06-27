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

set(waf_public_header
  include/tencentcloud/waf/v20180125/WafClient.h
  )

set(waf_public_header_model
  include/tencentcloud/waf/v20180125/model/CreateAccessExportRequest.h
  include/tencentcloud/waf/v20180125/model/CdcCluster.h
  include/tencentcloud/waf/v20180125/model/DescribeIpHitItemsResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeCustomRulesRspRuleListItem.h
  include/tencentcloud/waf/v20180125/model/WafRuleLimit.h
  include/tencentcloud/waf/v20180125/model/DescribeUserCdcClbWafRegionsRequest.h
  include/tencentcloud/waf/v20180125/model/IpHitItemsData.h
  include/tencentcloud/waf/v20180125/model/DeleteAttackDownloadRecordResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeFlowTrendRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeWafAutoDenyStatusRequest.h
  include/tencentcloud/waf/v20180125/model/AddCustomWhiteRuleResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeCustomWhiteRuleResponse.h
  include/tencentcloud/waf/v20180125/model/AccessLogItems.h
  include/tencentcloud/waf/v20180125/model/DescribePeakValueResponse.h
  include/tencentcloud/waf/v20180125/model/AddDomainWhiteRuleResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeIpAccessControlResponse.h
  include/tencentcloud/waf/v20180125/model/LoadBalancerPackageNew.h
  include/tencentcloud/waf/v20180125/model/DescribeInstancesResponse.h
  include/tencentcloud/waf/v20180125/model/ModifyDomainWhiteRuleRequest.h
  include/tencentcloud/waf/v20180125/model/VipInfo.h
  include/tencentcloud/waf/v20180125/model/AccessRuleTagInfo.h
  include/tencentcloud/waf/v20180125/model/DescribePeakPointsRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeAccessIndexRequest.h
  include/tencentcloud/waf/v20180125/model/DomainInfo.h
  include/tencentcloud/waf/v20180125/model/AccessLogItem.h
  include/tencentcloud/waf/v20180125/model/DeleteSessionRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeWafAutoDenyRulesRequest.h
  include/tencentcloud/waf/v20180125/model/SearchAttackLogRequest.h
  include/tencentcloud/waf/v20180125/model/DeleteCustomWhiteRuleResponse.h
  include/tencentcloud/waf/v20180125/model/AddCustomRuleResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeFlowTrendResponse.h
  include/tencentcloud/waf/v20180125/model/GetAttackDownloadRecordsRequest.h
  include/tencentcloud/waf/v20180125/model/UpsertIpAccessControlRequest.h
  include/tencentcloud/waf/v20180125/model/ModifySpartaProtectionResponse.h
  include/tencentcloud/waf/v20180125/model/DeleteDownloadRecordRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeUserCdcClbWafRegionsResponse.h
  include/tencentcloud/waf/v20180125/model/DeleteAccessExportResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeAccessExportsRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeCustomWhiteRuleRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeUserClbWafRegionsResponse.h
  include/tencentcloud/waf/v20180125/model/ModifyCustomWhiteRuleRequest.h
  include/tencentcloud/waf/v20180125/model/DeleteCustomWhiteRuleRequest.h
  include/tencentcloud/waf/v20180125/model/ModifyWafAutoDenyStatusRequest.h
  include/tencentcloud/waf/v20180125/model/ModifyAccessPeriodResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeVipInfoRequest.h
  include/tencentcloud/waf/v20180125/model/FiltersItemNew.h
  include/tencentcloud/waf/v20180125/model/DescribeAutoDenyIPResponse.h
  include/tencentcloud/waf/v20180125/model/SwitchDomainRulesResponse.h
  include/tencentcloud/waf/v20180125/model/SearchAccessLogResponse.h
  include/tencentcloud/waf/v20180125/model/CreateHostResponse.h
  include/tencentcloud/waf/v20180125/model/IpAccessControlItem.h
  include/tencentcloud/waf/v20180125/model/SwitchDomainRulesRequest.h
  include/tencentcloud/waf/v20180125/model/DomainsPartInfo.h
  include/tencentcloud/waf/v20180125/model/DescribeAutoDenyIPRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeIpAccessControlRequest.h
  include/tencentcloud/waf/v20180125/model/HostRecord.h
  include/tencentcloud/waf/v20180125/model/CreateHostRequest.h
  include/tencentcloud/waf/v20180125/model/ModifyAreaBanStatusRequest.h
  include/tencentcloud/waf/v20180125/model/SpartaProtectionPort.h
  include/tencentcloud/waf/v20180125/model/AddSpartaProtectionRequest.h
  include/tencentcloud/waf/v20180125/model/PeakPointsItem.h
  include/tencentcloud/waf/v20180125/model/PostAttackDownloadTaskRequest.h
  include/tencentcloud/waf/v20180125/model/ModifyCustomWhiteRuleResponse.h
  include/tencentcloud/waf/v20180125/model/DescribePolicyStatusRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeAccessFastAnalysisRequest.h
  include/tencentcloud/waf/v20180125/model/DeleteIpAccessControlRequest.h
  include/tencentcloud/waf/v20180125/model/AttackLogInfo.h
  include/tencentcloud/waf/v20180125/model/DeleteDomainWhiteRulesResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeAttackOverviewResponse.h
  include/tencentcloud/waf/v20180125/model/ModifyWafAutoDenyStatusResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeWafAutoDenyStatusResponse.h
  include/tencentcloud/waf/v20180125/model/DeleteDomainWhiteRulesRequest.h
  include/tencentcloud/waf/v20180125/model/DomainPackageNew.h
  include/tencentcloud/waf/v20180125/model/RuleList.h
  include/tencentcloud/waf/v20180125/model/PostAttackDownloadTaskResponse.h
  include/tencentcloud/waf/v20180125/model/QPSPackageNew.h
  include/tencentcloud/waf/v20180125/model/DescribeDomainDetailsSaasRequest.h
  include/tencentcloud/waf/v20180125/model/ModifyCustomRuleStatusResponse.h
  include/tencentcloud/waf/v20180125/model/AddSpartaProtectionResponse.h
  include/tencentcloud/waf/v20180125/model/IpAccessControlData.h
  include/tencentcloud/waf/v20180125/model/PortItem.h
  include/tencentcloud/waf/v20180125/model/WafThreatenIntelligenceDetails.h
  include/tencentcloud/waf/v20180125/model/DescribeDomainWhiteRulesRequest.h
  include/tencentcloud/waf/v20180125/model/ModifyCustomRuleStatusRequest.h
  include/tencentcloud/waf/v20180125/model/DescribePeakPointsResponse.h
  include/tencentcloud/waf/v20180125/model/DeleteDownloadRecordResponse.h
  include/tencentcloud/waf/v20180125/model/ModifyAccessPeriodRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeAttackOverviewRequest.h
  include/tencentcloud/waf/v20180125/model/DescribePeakValueRequest.h
  include/tencentcloud/waf/v20180125/model/BotQPS.h
  include/tencentcloud/waf/v20180125/model/ModifyWafAutoDenyRulesResponse.h
  include/tencentcloud/waf/v20180125/model/SearchAttackLogResponse.h
  include/tencentcloud/waf/v20180125/model/DescribePolicyStatusResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeInstancesRequest.h
  include/tencentcloud/waf/v20180125/model/CdcRegion.h
  include/tencentcloud/waf/v20180125/model/AccessValueInfo.h
  include/tencentcloud/waf/v20180125/model/DeleteIpAccessControlResponse.h
  include/tencentcloud/waf/v20180125/model/AccessLogInfo.h
  include/tencentcloud/waf/v20180125/model/InstanceInfo.h
  include/tencentcloud/waf/v20180125/model/PortInfo.h
  include/tencentcloud/waf/v20180125/model/DescribeDomainDetailsSaasResponse.h
  include/tencentcloud/waf/v20180125/model/AccessKeyValueInfo.h
  include/tencentcloud/waf/v20180125/model/AddCustomRuleRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeWafAutoDenyRulesResponse.h
  include/tencentcloud/waf/v20180125/model/FraudPkg.h
  include/tencentcloud/waf/v20180125/model/ModifyAreaBanStatusResponse.h
  include/tencentcloud/waf/v20180125/model/ModifyDomainWhiteRuleResponse.h
  include/tencentcloud/waf/v20180125/model/ExportAccessInfo.h
  include/tencentcloud/waf/v20180125/model/ModifyWafAutoDenyRulesRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeAccessFastAnalysisResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeDomainsResponse.h
  include/tencentcloud/waf/v20180125/model/AutoDenyDetail.h
  include/tencentcloud/waf/v20180125/model/ResponseCode.h
  include/tencentcloud/waf/v20180125/model/ModifyWafThreatenIntelligenceRequest.h
  include/tencentcloud/waf/v20180125/model/Strategy.h
  include/tencentcloud/waf/v20180125/model/AccessFullTextInfo.h
  include/tencentcloud/waf/v20180125/model/DescribeIpHitItemsRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeVipInfoResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeRuleLimitRequest.h
  include/tencentcloud/waf/v20180125/model/AccessRuleInfo.h
  include/tencentcloud/waf/v20180125/model/GetAttackDownloadRecordsResponse.h
  include/tencentcloud/waf/v20180125/model/DeleteAccessExportRequest.h
  include/tencentcloud/waf/v20180125/model/ModifySpartaProtectionRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeUserClbWafRegionsRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeDomainWhiteRulesResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeWafThreatenIntelligenceResponse.h
  include/tencentcloud/waf/v20180125/model/DeleteAttackDownloadRecordRequest.h
  include/tencentcloud/waf/v20180125/model/AddCustomWhiteRuleRequest.h
  include/tencentcloud/waf/v20180125/model/AddDomainWhiteRuleRequest.h
  include/tencentcloud/waf/v20180125/model/UpsertIpAccessControlResponse.h
  include/tencentcloud/waf/v20180125/model/IpHitItem.h
  include/tencentcloud/waf/v20180125/model/DeleteSessionResponse.h
  include/tencentcloud/waf/v20180125/model/DownloadAttackRecordInfo.h
  include/tencentcloud/waf/v20180125/model/DescribeRuleLimitResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeWafThreatenIntelligenceRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeAccessIndexResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeAccessExportsResponse.h
  include/tencentcloud/waf/v20180125/model/CreateAccessExportResponse.h
  include/tencentcloud/waf/v20180125/model/BotStatPointItem.h
  include/tencentcloud/waf/v20180125/model/SearchAccessLogRequest.h
  include/tencentcloud/waf/v20180125/model/AccessRuleKeyValueInfo.h
  include/tencentcloud/waf/v20180125/model/DescribeDomainsRequest.h
  include/tencentcloud/waf/v20180125/model/BotPkg.h
  include/tencentcloud/waf/v20180125/model/ModifyWafThreatenIntelligenceResponse.h
  include/tencentcloud/waf/v20180125/model/LoadBalancer.h
  )

set(waf_src
  src/v20180125/WafClient.cpp
  src/v20180125/model/CreateAccessExportRequest.cpp
  src/v20180125/model/CdcCluster.cpp
  src/v20180125/model/DescribeIpHitItemsResponse.cpp
  src/v20180125/model/DescribeCustomRulesRspRuleListItem.cpp
  src/v20180125/model/WafRuleLimit.cpp
  src/v20180125/model/DescribeUserCdcClbWafRegionsRequest.cpp
  src/v20180125/model/IpHitItemsData.cpp
  src/v20180125/model/DeleteAttackDownloadRecordResponse.cpp
  src/v20180125/model/DescribeFlowTrendRequest.cpp
  src/v20180125/model/DescribeWafAutoDenyStatusRequest.cpp
  src/v20180125/model/AddCustomWhiteRuleResponse.cpp
  src/v20180125/model/DescribeCustomWhiteRuleResponse.cpp
  src/v20180125/model/AccessLogItems.cpp
  src/v20180125/model/DescribePeakValueResponse.cpp
  src/v20180125/model/AddDomainWhiteRuleResponse.cpp
  src/v20180125/model/DescribeIpAccessControlResponse.cpp
  src/v20180125/model/LoadBalancerPackageNew.cpp
  src/v20180125/model/DescribeInstancesResponse.cpp
  src/v20180125/model/ModifyDomainWhiteRuleRequest.cpp
  src/v20180125/model/VipInfo.cpp
  src/v20180125/model/AccessRuleTagInfo.cpp
  src/v20180125/model/DescribePeakPointsRequest.cpp
  src/v20180125/model/DescribeAccessIndexRequest.cpp
  src/v20180125/model/DomainInfo.cpp
  src/v20180125/model/AccessLogItem.cpp
  src/v20180125/model/DeleteSessionRequest.cpp
  src/v20180125/model/DescribeWafAutoDenyRulesRequest.cpp
  src/v20180125/model/SearchAttackLogRequest.cpp
  src/v20180125/model/DeleteCustomWhiteRuleResponse.cpp
  src/v20180125/model/AddCustomRuleResponse.cpp
  src/v20180125/model/DescribeFlowTrendResponse.cpp
  src/v20180125/model/GetAttackDownloadRecordsRequest.cpp
  src/v20180125/model/UpsertIpAccessControlRequest.cpp
  src/v20180125/model/ModifySpartaProtectionResponse.cpp
  src/v20180125/model/DeleteDownloadRecordRequest.cpp
  src/v20180125/model/DescribeUserCdcClbWafRegionsResponse.cpp
  src/v20180125/model/DeleteAccessExportResponse.cpp
  src/v20180125/model/DescribeAccessExportsRequest.cpp
  src/v20180125/model/DescribeCustomWhiteRuleRequest.cpp
  src/v20180125/model/DescribeUserClbWafRegionsResponse.cpp
  src/v20180125/model/ModifyCustomWhiteRuleRequest.cpp
  src/v20180125/model/DeleteCustomWhiteRuleRequest.cpp
  src/v20180125/model/ModifyWafAutoDenyStatusRequest.cpp
  src/v20180125/model/ModifyAccessPeriodResponse.cpp
  src/v20180125/model/DescribeVipInfoRequest.cpp
  src/v20180125/model/FiltersItemNew.cpp
  src/v20180125/model/DescribeAutoDenyIPResponse.cpp
  src/v20180125/model/SwitchDomainRulesResponse.cpp
  src/v20180125/model/SearchAccessLogResponse.cpp
  src/v20180125/model/CreateHostResponse.cpp
  src/v20180125/model/IpAccessControlItem.cpp
  src/v20180125/model/SwitchDomainRulesRequest.cpp
  src/v20180125/model/DomainsPartInfo.cpp
  src/v20180125/model/DescribeAutoDenyIPRequest.cpp
  src/v20180125/model/DescribeIpAccessControlRequest.cpp
  src/v20180125/model/HostRecord.cpp
  src/v20180125/model/CreateHostRequest.cpp
  src/v20180125/model/ModifyAreaBanStatusRequest.cpp
  src/v20180125/model/SpartaProtectionPort.cpp
  src/v20180125/model/AddSpartaProtectionRequest.cpp
  src/v20180125/model/PeakPointsItem.cpp
  src/v20180125/model/PostAttackDownloadTaskRequest.cpp
  src/v20180125/model/ModifyCustomWhiteRuleResponse.cpp
  src/v20180125/model/DescribePolicyStatusRequest.cpp
  src/v20180125/model/DescribeAccessFastAnalysisRequest.cpp
  src/v20180125/model/DeleteIpAccessControlRequest.cpp
  src/v20180125/model/AttackLogInfo.cpp
  src/v20180125/model/DeleteDomainWhiteRulesResponse.cpp
  src/v20180125/model/DescribeAttackOverviewResponse.cpp
  src/v20180125/model/ModifyWafAutoDenyStatusResponse.cpp
  src/v20180125/model/DescribeWafAutoDenyStatusResponse.cpp
  src/v20180125/model/DeleteDomainWhiteRulesRequest.cpp
  src/v20180125/model/DomainPackageNew.cpp
  src/v20180125/model/RuleList.cpp
  src/v20180125/model/PostAttackDownloadTaskResponse.cpp
  src/v20180125/model/QPSPackageNew.cpp
  src/v20180125/model/DescribeDomainDetailsSaasRequest.cpp
  src/v20180125/model/ModifyCustomRuleStatusResponse.cpp
  src/v20180125/model/AddSpartaProtectionResponse.cpp
  src/v20180125/model/IpAccessControlData.cpp
  src/v20180125/model/PortItem.cpp
  src/v20180125/model/WafThreatenIntelligenceDetails.cpp
  src/v20180125/model/DescribeDomainWhiteRulesRequest.cpp
  src/v20180125/model/ModifyCustomRuleStatusRequest.cpp
  src/v20180125/model/DescribePeakPointsResponse.cpp
  src/v20180125/model/DeleteDownloadRecordResponse.cpp
  src/v20180125/model/ModifyAccessPeriodRequest.cpp
  src/v20180125/model/DescribeAttackOverviewRequest.cpp
  src/v20180125/model/DescribePeakValueRequest.cpp
  src/v20180125/model/BotQPS.cpp
  src/v20180125/model/ModifyWafAutoDenyRulesResponse.cpp
  src/v20180125/model/SearchAttackLogResponse.cpp
  src/v20180125/model/DescribePolicyStatusResponse.cpp
  src/v20180125/model/DescribeInstancesRequest.cpp
  src/v20180125/model/CdcRegion.cpp
  src/v20180125/model/AccessValueInfo.cpp
  src/v20180125/model/DeleteIpAccessControlResponse.cpp
  src/v20180125/model/AccessLogInfo.cpp
  src/v20180125/model/InstanceInfo.cpp
  src/v20180125/model/PortInfo.cpp
  src/v20180125/model/DescribeDomainDetailsSaasResponse.cpp
  src/v20180125/model/AccessKeyValueInfo.cpp
  src/v20180125/model/AddCustomRuleRequest.cpp
  src/v20180125/model/DescribeWafAutoDenyRulesResponse.cpp
  src/v20180125/model/FraudPkg.cpp
  src/v20180125/model/ModifyAreaBanStatusResponse.cpp
  src/v20180125/model/ModifyDomainWhiteRuleResponse.cpp
  src/v20180125/model/ExportAccessInfo.cpp
  src/v20180125/model/ModifyWafAutoDenyRulesRequest.cpp
  src/v20180125/model/DescribeAccessFastAnalysisResponse.cpp
  src/v20180125/model/DescribeDomainsResponse.cpp
  src/v20180125/model/AutoDenyDetail.cpp
  src/v20180125/model/ResponseCode.cpp
  src/v20180125/model/ModifyWafThreatenIntelligenceRequest.cpp
  src/v20180125/model/Strategy.cpp
  src/v20180125/model/AccessFullTextInfo.cpp
  src/v20180125/model/DescribeIpHitItemsRequest.cpp
  src/v20180125/model/DescribeVipInfoResponse.cpp
  src/v20180125/model/DescribeRuleLimitRequest.cpp
  src/v20180125/model/AccessRuleInfo.cpp
  src/v20180125/model/GetAttackDownloadRecordsResponse.cpp
  src/v20180125/model/DeleteAccessExportRequest.cpp
  src/v20180125/model/ModifySpartaProtectionRequest.cpp
  src/v20180125/model/DescribeUserClbWafRegionsRequest.cpp
  src/v20180125/model/DescribeDomainWhiteRulesResponse.cpp
  src/v20180125/model/DescribeWafThreatenIntelligenceResponse.cpp
  src/v20180125/model/DeleteAttackDownloadRecordRequest.cpp
  src/v20180125/model/AddCustomWhiteRuleRequest.cpp
  src/v20180125/model/AddDomainWhiteRuleRequest.cpp
  src/v20180125/model/UpsertIpAccessControlResponse.cpp
  src/v20180125/model/IpHitItem.cpp
  src/v20180125/model/DeleteSessionResponse.cpp
  src/v20180125/model/DownloadAttackRecordInfo.cpp
  src/v20180125/model/DescribeRuleLimitResponse.cpp
  src/v20180125/model/DescribeWafThreatenIntelligenceRequest.cpp
  src/v20180125/model/DescribeAccessIndexResponse.cpp
  src/v20180125/model/DescribeAccessExportsResponse.cpp
  src/v20180125/model/CreateAccessExportResponse.cpp
  src/v20180125/model/BotStatPointItem.cpp
  src/v20180125/model/SearchAccessLogRequest.cpp
  src/v20180125/model/AccessRuleKeyValueInfo.cpp
  src/v20180125/model/DescribeDomainsRequest.cpp
  src/v20180125/model/BotPkg.cpp
  src/v20180125/model/ModifyWafThreatenIntelligenceResponse.cpp
  src/v20180125/model/LoadBalancer.cpp
  )

set(waf_include
    include/tencentcloud/waf
  )

add_library(waf ${LIB_TYPE}
  ${waf_public_header}
  ${waf_public_header_model}
  ${waf_src})

set_target_properties(waf
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}waf
  )

target_include_directories(waf
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(waf
  core)

#install(FILES ${waf_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/waf/v20180125)
#install(FILES ${waf_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/waf/v20180125/model)
install(DIRECTORY ${waf_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS waf
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
