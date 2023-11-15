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

set(ssa_public_header
  include/tencentcloud/ssa/v20180608/SsaClient.h
  )

set(ssa_public_header_model
  include/tencentcloud/ssa/v20180608/model/DescribeAssetDetailRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeSocCheckItemListResponse.h
  include/tencentcloud/ssa/v20180608/model/ListDataSaEventPub.h
  include/tencentcloud/ssa/v20180608/model/DescribeAlarmStatResponse.h
  include/tencentcloud/ssa/v20180608/model/Asset.h
  include/tencentcloud/ssa/v20180608/model/AttackEvent.h
  include/tencentcloud/ssa/v20180608/model/SaEventPubRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeConfigListResponse.h
  include/tencentcloud/ssa/v20180608/model/AggregationObj.h
  include/tencentcloud/ssa/v20180608/model/DescribeCheckConfigDetailResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeAssetListResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeCheckConfigAssetListResponse.h
  include/tencentcloud/ssa/v20180608/model/QueryFilter.h
  include/tencentcloud/ssa/v20180608/model/QueryFilterV3.h
  include/tencentcloud/ssa/v20180608/model/SocComplianceItem.h
  include/tencentcloud/ssa/v20180608/model/SaEventPubResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeVulListRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeLeakDetectionListRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeSocAlertListRequest.h
  include/tencentcloud/ssa/v20180608/model/DomainInfo.h
  include/tencentcloud/ssa/v20180608/model/DescribeConfigListRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeComplianceDetailResponse.h
  include/tencentcloud/ssa/v20180608/model/SocCheckItem.h
  include/tencentcloud/ssa/v20180608/model/SaDivulgeScanRuleMutateRequest.h
  include/tencentcloud/ssa/v20180608/model/Tag.h
  include/tencentcloud/ssa/v20180608/model/DescribeAssetDetailListRequest.h
  include/tencentcloud/ssa/v20180608/model/AlertDetail.h
  include/tencentcloud/ssa/v20180608/model/DescribeMappingResultsResponse.h
  include/tencentcloud/ssa/v20180608/model/VulItem.h
  include/tencentcloud/ssa/v20180608/model/DescribeCheckConfigAssetListRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeSocCheckResultListResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeCheckConfigDetailRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeAssetListRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeComplianceAssetListRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeEventDetailResponse.h
  include/tencentcloud/ssa/v20180608/model/AssetQueryFilter.h
  include/tencentcloud/ssa/v20180608/model/ComplianceCheckDetail.h
  include/tencentcloud/ssa/v20180608/model/DescribeMappingResultsRequest.h
  include/tencentcloud/ssa/v20180608/model/AssetList.h
  include/tencentcloud/ssa/v20180608/model/VulList.h
  include/tencentcloud/ssa/v20180608/model/DescribeSocCheckItemListRspRsp.h
  include/tencentcloud/ssa/v20180608/model/DescribeDomainListResponse.h
  include/tencentcloud/ssa/v20180608/model/DataCompliance.h
  include/tencentcloud/ssa/v20180608/model/DescribeSocCspmComplianceRequest.h
  include/tencentcloud/ssa/v20180608/model/QuerySort.h
  include/tencentcloud/ssa/v20180608/model/MappingResult.h
  include/tencentcloud/ssa/v20180608/model/DescribeComplianceListResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeSocAlertDetailsResponse.h
  include/tencentcloud/ssa/v20180608/model/SocCheckResult.h
  include/tencentcloud/ssa/v20180608/model/AlertListData.h
  include/tencentcloud/ssa/v20180608/model/SecurityStatus.h
  include/tencentcloud/ssa/v20180608/model/DescribeSocCheckResultListRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeSocAlertDetailsRequest.h
  include/tencentcloud/ssa/v20180608/model/SaDivulgeScanRuleMutateResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeSocCspmComplianceResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeSocCheckItemListRequest.h
  include/tencentcloud/ssa/v20180608/model/Filter.h
  include/tencentcloud/ssa/v20180608/model/AlarmInfoRsp.h
  include/tencentcloud/ssa/v20180608/model/SaDivulgeScanRuleSetList.h
  include/tencentcloud/ssa/v20180608/model/SocCheckItemV1.h
  include/tencentcloud/ssa/v20180608/model/CheckAssetItem.h
  include/tencentcloud/ssa/v20180608/model/DescribeComplianceDetailRequest.h
  include/tencentcloud/ssa/v20180608/model/AssetDetail.h
  include/tencentcloud/ssa/v20180608/model/SocProductionItem.h
  include/tencentcloud/ssa/v20180608/model/SocComplianceInfoResp.h
  include/tencentcloud/ssa/v20180608/model/DescribeVulListResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeComplianceAssetListResponse.h
  include/tencentcloud/ssa/v20180608/model/DataCheck.h
  include/tencentcloud/ssa/v20180608/model/DescribeAlarmStatRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeDomainListRequest.h
  include/tencentcloud/ssa/v20180608/model/CheckConfigDetail.h
  include/tencentcloud/ssa/v20180608/model/DescribeComplianceListRequest.h
  include/tencentcloud/ssa/v20180608/model/AlertListAggregations.h
  include/tencentcloud/ssa/v20180608/model/AlertType.h
  include/tencentcloud/ssa/v20180608/model/Bucket.h
  include/tencentcloud/ssa/v20180608/model/DescribeLeakDetectionListResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeAssetDetailListResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeEventDetailRequest.h
  include/tencentcloud/ssa/v20180608/model/AssetTypeStatistic.h
  include/tencentcloud/ssa/v20180608/model/DescribeSocCheckResultListRspRsp.h
  include/tencentcloud/ssa/v20180608/model/DescribeVulDetailRequest.h
  include/tencentcloud/ssa/v20180608/model/ConcernInfo.h
  include/tencentcloud/ssa/v20180608/model/Results.h
  include/tencentcloud/ssa/v20180608/model/DescribeSocAlertListResponse.h
  include/tencentcloud/ssa/v20180608/model/ObjDataSaEventPub.h
  include/tencentcloud/ssa/v20180608/model/DescribeAssetDetailResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeVulDetailResponse.h
  )

set(ssa_src
  src/v20180608/SsaClient.cpp
  src/v20180608/model/DescribeAssetDetailRequest.cpp
  src/v20180608/model/DescribeSocCheckItemListResponse.cpp
  src/v20180608/model/ListDataSaEventPub.cpp
  src/v20180608/model/DescribeAlarmStatResponse.cpp
  src/v20180608/model/Asset.cpp
  src/v20180608/model/AttackEvent.cpp
  src/v20180608/model/SaEventPubRequest.cpp
  src/v20180608/model/DescribeConfigListResponse.cpp
  src/v20180608/model/AggregationObj.cpp
  src/v20180608/model/DescribeCheckConfigDetailResponse.cpp
  src/v20180608/model/DescribeAssetListResponse.cpp
  src/v20180608/model/DescribeCheckConfigAssetListResponse.cpp
  src/v20180608/model/QueryFilter.cpp
  src/v20180608/model/QueryFilterV3.cpp
  src/v20180608/model/SocComplianceItem.cpp
  src/v20180608/model/SaEventPubResponse.cpp
  src/v20180608/model/DescribeVulListRequest.cpp
  src/v20180608/model/DescribeLeakDetectionListRequest.cpp
  src/v20180608/model/DescribeSocAlertListRequest.cpp
  src/v20180608/model/DomainInfo.cpp
  src/v20180608/model/DescribeConfigListRequest.cpp
  src/v20180608/model/DescribeComplianceDetailResponse.cpp
  src/v20180608/model/SocCheckItem.cpp
  src/v20180608/model/SaDivulgeScanRuleMutateRequest.cpp
  src/v20180608/model/Tag.cpp
  src/v20180608/model/DescribeAssetDetailListRequest.cpp
  src/v20180608/model/AlertDetail.cpp
  src/v20180608/model/DescribeMappingResultsResponse.cpp
  src/v20180608/model/VulItem.cpp
  src/v20180608/model/DescribeCheckConfigAssetListRequest.cpp
  src/v20180608/model/DescribeSocCheckResultListResponse.cpp
  src/v20180608/model/DescribeCheckConfigDetailRequest.cpp
  src/v20180608/model/DescribeAssetListRequest.cpp
  src/v20180608/model/DescribeComplianceAssetListRequest.cpp
  src/v20180608/model/DescribeEventDetailResponse.cpp
  src/v20180608/model/AssetQueryFilter.cpp
  src/v20180608/model/ComplianceCheckDetail.cpp
  src/v20180608/model/DescribeMappingResultsRequest.cpp
  src/v20180608/model/AssetList.cpp
  src/v20180608/model/VulList.cpp
  src/v20180608/model/DescribeSocCheckItemListRspRsp.cpp
  src/v20180608/model/DescribeDomainListResponse.cpp
  src/v20180608/model/DataCompliance.cpp
  src/v20180608/model/DescribeSocCspmComplianceRequest.cpp
  src/v20180608/model/QuerySort.cpp
  src/v20180608/model/MappingResult.cpp
  src/v20180608/model/DescribeComplianceListResponse.cpp
  src/v20180608/model/DescribeSocAlertDetailsResponse.cpp
  src/v20180608/model/SocCheckResult.cpp
  src/v20180608/model/AlertListData.cpp
  src/v20180608/model/SecurityStatus.cpp
  src/v20180608/model/DescribeSocCheckResultListRequest.cpp
  src/v20180608/model/DescribeSocAlertDetailsRequest.cpp
  src/v20180608/model/SaDivulgeScanRuleMutateResponse.cpp
  src/v20180608/model/DescribeSocCspmComplianceResponse.cpp
  src/v20180608/model/DescribeSocCheckItemListRequest.cpp
  src/v20180608/model/Filter.cpp
  src/v20180608/model/AlarmInfoRsp.cpp
  src/v20180608/model/SaDivulgeScanRuleSetList.cpp
  src/v20180608/model/SocCheckItemV1.cpp
  src/v20180608/model/CheckAssetItem.cpp
  src/v20180608/model/DescribeComplianceDetailRequest.cpp
  src/v20180608/model/AssetDetail.cpp
  src/v20180608/model/SocProductionItem.cpp
  src/v20180608/model/SocComplianceInfoResp.cpp
  src/v20180608/model/DescribeVulListResponse.cpp
  src/v20180608/model/DescribeComplianceAssetListResponse.cpp
  src/v20180608/model/DataCheck.cpp
  src/v20180608/model/DescribeAlarmStatRequest.cpp
  src/v20180608/model/DescribeDomainListRequest.cpp
  src/v20180608/model/CheckConfigDetail.cpp
  src/v20180608/model/DescribeComplianceListRequest.cpp
  src/v20180608/model/AlertListAggregations.cpp
  src/v20180608/model/AlertType.cpp
  src/v20180608/model/Bucket.cpp
  src/v20180608/model/DescribeLeakDetectionListResponse.cpp
  src/v20180608/model/DescribeAssetDetailListResponse.cpp
  src/v20180608/model/DescribeEventDetailRequest.cpp
  src/v20180608/model/AssetTypeStatistic.cpp
  src/v20180608/model/DescribeSocCheckResultListRspRsp.cpp
  src/v20180608/model/DescribeVulDetailRequest.cpp
  src/v20180608/model/ConcernInfo.cpp
  src/v20180608/model/Results.cpp
  src/v20180608/model/DescribeSocAlertListResponse.cpp
  src/v20180608/model/ObjDataSaEventPub.cpp
  src/v20180608/model/DescribeAssetDetailResponse.cpp
  src/v20180608/model/DescribeVulDetailResponse.cpp
  )

set(ssa_include
    include/tencentcloud/ssa
  )

add_library(ssa ${LIB_TYPE}
  ${ssa_public_header}
  ${ssa_public_header_model}
  ${ssa_src})

set_target_properties(ssa
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ssa
  )

target_include_directories(ssa
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ssa
  core)

#install(FILES ${ssa_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ssa/v20180608)
#install(FILES ${ssa_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ssa/v20180608/model)
install(DIRECTORY ${ssa_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ssa
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
