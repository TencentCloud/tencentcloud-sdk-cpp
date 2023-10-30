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

set(csip_public_header
  include/tencentcloud/csip/v20221121/CsipClient.h
  )

set(csip_public_header_model
  include/tencentcloud/csip/v20221121/model/DescribeDbAssetInfoResponse.h
  include/tencentcloud/csip/v20221121/model/DeleteRiskScanTaskRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewWeakPasswordRiskListResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeVULRiskAdvanceCFGListResponse.h
  include/tencentcloud/csip/v20221121/model/TaskCenterWeakPwdRiskInputParam.h
  include/tencentcloud/csip/v20221121/model/ModifyRiskCenterRiskStatusRequest.h
  include/tencentcloud/csip/v20221121/model/ReportItemKey.h
  include/tencentcloud/csip/v20221121/model/CVMAssetVO.h
  include/tencentcloud/csip/v20221121/model/AssetViewCFGRisk.h
  include/tencentcloud/csip/v20221121/model/AssetViewVULRisk.h
  include/tencentcloud/csip/v20221121/model/DescribeScanReportListRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeVpcAssetsResponse.h
  include/tencentcloud/csip/v20221121/model/Vpc.h
  include/tencentcloud/csip/v20221121/model/VULRiskAdvanceCFGList.h
  include/tencentcloud/csip/v20221121/model/StopRiskCenterTaskRequest.h
  include/tencentcloud/csip/v20221121/model/DataSearchBug.h
  include/tencentcloud/csip/v20221121/model/AssetTag.h
  include/tencentcloud/csip/v20221121/model/RiskCenterStatusKey.h
  include/tencentcloud/csip/v20221121/model/DescribeVULRiskAdvanceCFGListRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewCFGRiskListRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeDomainAssetsRequest.h
  include/tencentcloud/csip/v20221121/model/Tag.h
  include/tencentcloud/csip/v20221121/model/DeleteDomainAndIpRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeScanTaskListRequest.h
  include/tencentcloud/csip/v20221121/model/TaskIdListKey.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterWebsiteRiskListResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeScanReportListResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeSearchBugInfoRequest.h
  include/tencentcloud/csip/v20221121/model/TaskLogURL.h
  include/tencentcloud/csip/v20221121/model/AddNewBindRoleUserRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeListenerListResponse.h
  include/tencentcloud/csip/v20221121/model/DBAssetVO.h
  include/tencentcloud/csip/v20221121/model/AssetInfoDetail.h
  include/tencentcloud/csip/v20221121/model/SubnetAsset.h
  include/tencentcloud/csip/v20221121/model/CreateRiskCenterScanTaskResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeSubnetAssetsResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewPortRiskListRequest.h
  include/tencentcloud/csip/v20221121/model/StopRiskCenterTaskResponse.h
  include/tencentcloud/csip/v20221121/model/ServerRisk.h
  include/tencentcloud/csip/v20221121/model/TaskAssetObject.h
  include/tencentcloud/csip/v20221121/model/IpAssetListVO.h
  include/tencentcloud/csip/v20221121/model/FilterDataObject.h
  include/tencentcloud/csip/v20221121/model/DescribeVpcAssetsRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewWeakPasswordRiskListRequest.h
  include/tencentcloud/csip/v20221121/model/PublicIpDomainListKey.h
  include/tencentcloud/csip/v20221121/model/DescribeCVMAssetsResponse.h
  include/tencentcloud/csip/v20221121/model/DbAssetInfo.h
  include/tencentcloud/csip/v20221121/model/DescribePublicIpAssetsRequest.h
  include/tencentcloud/csip/v20221121/model/AssetClusterPod.h
  include/tencentcloud/csip/v20221121/model/DescribeCVMAssetInfoRequest.h
  include/tencentcloud/csip/v20221121/model/AssetViewWeakPassRisk.h
  include/tencentcloud/csip/v20221121/model/WebsiteRisk.h
  include/tencentcloud/csip/v20221121/model/CreateRiskCenterScanTaskRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewCFGRiskListResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterVULViewVULRiskListResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterVULViewVULRiskListRequest.h
  include/tencentcloud/csip/v20221121/model/TaskCenterVulRiskInputParam.h
  include/tencentcloud/csip/v20221121/model/TaskAdvanceCFG.h
  include/tencentcloud/csip/v20221121/model/DescribeScanTaskListResponse.h
  include/tencentcloud/csip/v20221121/model/ScanTaskInfo.h
  include/tencentcloud/csip/v20221121/model/Tags.h
  include/tencentcloud/csip/v20221121/model/VULViewVULRisk.h
  include/tencentcloud/csip/v20221121/model/PortViewPortRisk.h
  include/tencentcloud/csip/v20221121/model/DescribeClusterPodAssetsRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeCVMAssetInfoResponse.h
  include/tencentcloud/csip/v20221121/model/DescribePublicIpAssetsResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeTaskLogURLResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeDbAssetInfoRequest.h
  include/tencentcloud/csip/v20221121/model/Filter.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterWebsiteRiskListRequest.h
  include/tencentcloud/csip/v20221121/model/ServerRiskSuggestion.h
  include/tencentcloud/csip/v20221121/model/DescribeSubnetAssetsRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeClusterPodAssetsResponse.h
  include/tencentcloud/csip/v20221121/model/AssetBaseInfoResponse.h
  include/tencentcloud/csip/v20221121/model/AssetViewPortRisk.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterPortViewPortRiskListRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterPortViewPortRiskListResponse.h
  include/tencentcloud/csip/v20221121/model/DeleteDomainAndIpResponse.h
  include/tencentcloud/csip/v20221121/model/ReportTaskIdList.h
  include/tencentcloud/csip/v20221121/model/AddNewBindRoleUserResponse.h
  include/tencentcloud/csip/v20221121/model/WhereFilter.h
  include/tencentcloud/csip/v20221121/model/ScanTaskInfoList.h
  include/tencentcloud/csip/v20221121/model/DescribeDbAssetsRequest.h
  include/tencentcloud/csip/v20221121/model/TaskLogInfo.h
  include/tencentcloud/csip/v20221121/model/CreateDomainAndIpResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewVULRiskListRequest.h
  include/tencentcloud/csip/v20221121/model/TaskCenterCFGRiskInputParam.h
  include/tencentcloud/csip/v20221121/model/CreateDomainAndIpRequest.h
  include/tencentcloud/csip/v20221121/model/DomainAssetVO.h
  include/tencentcloud/csip/v20221121/model/DescribeSearchBugInfoResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeTaskLogListResponse.h
  include/tencentcloud/csip/v20221121/model/BugInfoDetail.h
  include/tencentcloud/csip/v20221121/model/DescribeDomainAssetsResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeDbAssetsResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewVULRiskListResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeCVMAssetsRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterServerRiskListRequest.h
  include/tencentcloud/csip/v20221121/model/ClbListenerListInfo.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterServerRiskListResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeListenerListRequest.h
  include/tencentcloud/csip/v20221121/model/DeleteRiskScanTaskResponse.h
  include/tencentcloud/csip/v20221121/model/ModifyRiskCenterRiskStatusResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeTaskLogListRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewPortRiskListResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeTaskLogURLRequest.h
  )

set(csip_src
  src/v20221121/CsipClient.cpp
  src/v20221121/model/DescribeDbAssetInfoResponse.cpp
  src/v20221121/model/DeleteRiskScanTaskRequest.cpp
  src/v20221121/model/DescribeRiskCenterAssetViewWeakPasswordRiskListResponse.cpp
  src/v20221121/model/DescribeVULRiskAdvanceCFGListResponse.cpp
  src/v20221121/model/TaskCenterWeakPwdRiskInputParam.cpp
  src/v20221121/model/ModifyRiskCenterRiskStatusRequest.cpp
  src/v20221121/model/ReportItemKey.cpp
  src/v20221121/model/CVMAssetVO.cpp
  src/v20221121/model/AssetViewCFGRisk.cpp
  src/v20221121/model/AssetViewVULRisk.cpp
  src/v20221121/model/DescribeScanReportListRequest.cpp
  src/v20221121/model/DescribeVpcAssetsResponse.cpp
  src/v20221121/model/Vpc.cpp
  src/v20221121/model/VULRiskAdvanceCFGList.cpp
  src/v20221121/model/StopRiskCenterTaskRequest.cpp
  src/v20221121/model/DataSearchBug.cpp
  src/v20221121/model/AssetTag.cpp
  src/v20221121/model/RiskCenterStatusKey.cpp
  src/v20221121/model/DescribeVULRiskAdvanceCFGListRequest.cpp
  src/v20221121/model/DescribeRiskCenterAssetViewCFGRiskListRequest.cpp
  src/v20221121/model/DescribeDomainAssetsRequest.cpp
  src/v20221121/model/Tag.cpp
  src/v20221121/model/DeleteDomainAndIpRequest.cpp
  src/v20221121/model/DescribeScanTaskListRequest.cpp
  src/v20221121/model/TaskIdListKey.cpp
  src/v20221121/model/DescribeRiskCenterWebsiteRiskListResponse.cpp
  src/v20221121/model/DescribeScanReportListResponse.cpp
  src/v20221121/model/DescribeSearchBugInfoRequest.cpp
  src/v20221121/model/TaskLogURL.cpp
  src/v20221121/model/AddNewBindRoleUserRequest.cpp
  src/v20221121/model/DescribeListenerListResponse.cpp
  src/v20221121/model/DBAssetVO.cpp
  src/v20221121/model/AssetInfoDetail.cpp
  src/v20221121/model/SubnetAsset.cpp
  src/v20221121/model/CreateRiskCenterScanTaskResponse.cpp
  src/v20221121/model/DescribeSubnetAssetsResponse.cpp
  src/v20221121/model/DescribeRiskCenterAssetViewPortRiskListRequest.cpp
  src/v20221121/model/StopRiskCenterTaskResponse.cpp
  src/v20221121/model/ServerRisk.cpp
  src/v20221121/model/TaskAssetObject.cpp
  src/v20221121/model/IpAssetListVO.cpp
  src/v20221121/model/FilterDataObject.cpp
  src/v20221121/model/DescribeVpcAssetsRequest.cpp
  src/v20221121/model/DescribeRiskCenterAssetViewWeakPasswordRiskListRequest.cpp
  src/v20221121/model/PublicIpDomainListKey.cpp
  src/v20221121/model/DescribeCVMAssetsResponse.cpp
  src/v20221121/model/DbAssetInfo.cpp
  src/v20221121/model/DescribePublicIpAssetsRequest.cpp
  src/v20221121/model/AssetClusterPod.cpp
  src/v20221121/model/DescribeCVMAssetInfoRequest.cpp
  src/v20221121/model/AssetViewWeakPassRisk.cpp
  src/v20221121/model/WebsiteRisk.cpp
  src/v20221121/model/CreateRiskCenterScanTaskRequest.cpp
  src/v20221121/model/DescribeRiskCenterAssetViewCFGRiskListResponse.cpp
  src/v20221121/model/DescribeRiskCenterVULViewVULRiskListResponse.cpp
  src/v20221121/model/DescribeRiskCenterVULViewVULRiskListRequest.cpp
  src/v20221121/model/TaskCenterVulRiskInputParam.cpp
  src/v20221121/model/TaskAdvanceCFG.cpp
  src/v20221121/model/DescribeScanTaskListResponse.cpp
  src/v20221121/model/ScanTaskInfo.cpp
  src/v20221121/model/Tags.cpp
  src/v20221121/model/VULViewVULRisk.cpp
  src/v20221121/model/PortViewPortRisk.cpp
  src/v20221121/model/DescribeClusterPodAssetsRequest.cpp
  src/v20221121/model/DescribeCVMAssetInfoResponse.cpp
  src/v20221121/model/DescribePublicIpAssetsResponse.cpp
  src/v20221121/model/DescribeTaskLogURLResponse.cpp
  src/v20221121/model/DescribeDbAssetInfoRequest.cpp
  src/v20221121/model/Filter.cpp
  src/v20221121/model/DescribeRiskCenterWebsiteRiskListRequest.cpp
  src/v20221121/model/ServerRiskSuggestion.cpp
  src/v20221121/model/DescribeSubnetAssetsRequest.cpp
  src/v20221121/model/DescribeClusterPodAssetsResponse.cpp
  src/v20221121/model/AssetBaseInfoResponse.cpp
  src/v20221121/model/AssetViewPortRisk.cpp
  src/v20221121/model/DescribeRiskCenterPortViewPortRiskListRequest.cpp
  src/v20221121/model/DescribeRiskCenterPortViewPortRiskListResponse.cpp
  src/v20221121/model/DeleteDomainAndIpResponse.cpp
  src/v20221121/model/ReportTaskIdList.cpp
  src/v20221121/model/AddNewBindRoleUserResponse.cpp
  src/v20221121/model/WhereFilter.cpp
  src/v20221121/model/ScanTaskInfoList.cpp
  src/v20221121/model/DescribeDbAssetsRequest.cpp
  src/v20221121/model/TaskLogInfo.cpp
  src/v20221121/model/CreateDomainAndIpResponse.cpp
  src/v20221121/model/DescribeRiskCenterAssetViewVULRiskListRequest.cpp
  src/v20221121/model/TaskCenterCFGRiskInputParam.cpp
  src/v20221121/model/CreateDomainAndIpRequest.cpp
  src/v20221121/model/DomainAssetVO.cpp
  src/v20221121/model/DescribeSearchBugInfoResponse.cpp
  src/v20221121/model/DescribeTaskLogListResponse.cpp
  src/v20221121/model/BugInfoDetail.cpp
  src/v20221121/model/DescribeDomainAssetsResponse.cpp
  src/v20221121/model/DescribeDbAssetsResponse.cpp
  src/v20221121/model/DescribeRiskCenterAssetViewVULRiskListResponse.cpp
  src/v20221121/model/DescribeCVMAssetsRequest.cpp
  src/v20221121/model/DescribeRiskCenterServerRiskListRequest.cpp
  src/v20221121/model/ClbListenerListInfo.cpp
  src/v20221121/model/DescribeRiskCenterServerRiskListResponse.cpp
  src/v20221121/model/DescribeListenerListRequest.cpp
  src/v20221121/model/DeleteRiskScanTaskResponse.cpp
  src/v20221121/model/ModifyRiskCenterRiskStatusResponse.cpp
  src/v20221121/model/DescribeTaskLogListRequest.cpp
  src/v20221121/model/DescribeRiskCenterAssetViewPortRiskListResponse.cpp
  src/v20221121/model/DescribeTaskLogURLRequest.cpp
  )

set(csip_include
    include/tencentcloud/csip
  )

add_library(csip ${LIB_TYPE}
  ${csip_public_header}
  ${csip_public_header_model}
  ${csip_src})

set_target_properties(csip
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}csip
  )

target_include_directories(csip
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(csip
  core)

#install(FILES ${csip_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/csip/v20221121)
#install(FILES ${csip_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/csip/v20221121/model)
install(DIRECTORY ${csip_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS csip
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
