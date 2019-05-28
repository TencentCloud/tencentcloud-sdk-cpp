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

set(yunjing_public_header
  include/tencentcloud/yunjing/v20180228/YunjingClient.h
  )

set(yunjing_public_header_model
  include/tencentcloud/yunjing/v20180228/model/ModifyAutoOpenProVersionConfigRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeProcessTaskStatusResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeAlarmAttributeResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportBruteAttacksResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeAgentVulsRequest.h
  include/tencentcloud/yunjing/v20180228/model/UsualPlace.h
  include/tencentcloud/yunjing/v20180228/model/DescribeAccountsRequest.h
  include/tencentcloud/yunjing/v20180228/model/WeeklyReportVul.h
  include/tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportBruteAttacksRequest.h
  include/tencentcloud/yunjing/v20180228/model/CreateUsualLoginPlacesRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeProcessTaskStatusRequest.h
  include/tencentcloud/yunjing/v20180228/model/ModifyAlarmAttributeRequest.h
  include/tencentcloud/yunjing/v20180228/model/ComponentStatistics.h
  include/tencentcloud/yunjing/v20180228/model/InquiryPriceOpenProVersionPrepaidRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeBruteAttacksRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeSecurityTrendsRequest.h
  include/tencentcloud/yunjing/v20180228/model/Account.h
  include/tencentcloud/yunjing/v20180228/model/RescanImpactedHostRequest.h
  include/tencentcloud/yunjing/v20180228/model/BruteAttack.h
  include/tencentcloud/yunjing/v20180228/model/DescribeOpenPortsRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeImpactedHostsRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeMaliciousRequestsResponse.h
  include/tencentcloud/yunjing/v20180228/model/NonLocalLoginPlace.h
  include/tencentcloud/yunjing/v20180228/model/CreateProcessTaskResponse.h
  include/tencentcloud/yunjing/v20180228/model/RenewProVersionRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeComponentsRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeNonlocalLoginPlacesRequest.h
  include/tencentcloud/yunjing/v20180228/model/OpenPortStatistics.h
  include/tencentcloud/yunjing/v20180228/model/DescribeHistoryAccountsResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeVulScanResultResponse.h
  include/tencentcloud/yunjing/v20180228/model/UntrustMalwaresRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportVulsRequest.h
  include/tencentcloud/yunjing/v20180228/model/TrustMalwaresRequest.h
  include/tencentcloud/yunjing/v20180228/model/UntrustMalwaresResponse.h
  include/tencentcloud/yunjing/v20180228/model/UntrustMaliciousRequestRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeComponentInfoResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeAccountStatisticsResponse.h
  include/tencentcloud/yunjing/v20180228/model/OpenProVersionPrepaidRequest.h
  include/tencentcloud/yunjing/v20180228/model/OpenPort.h
  include/tencentcloud/yunjing/v20180228/model/DescribeProVersionInfoRequest.h
  include/tencentcloud/yunjing/v20180228/model/CreateProcessTaskRequest.h
  include/tencentcloud/yunjing/v20180228/model/DeleteMaliciousRequestsResponse.h
  include/tencentcloud/yunjing/v20180228/model/DeleteMachineResponse.h
  include/tencentcloud/yunjing/v20180228/model/MisAlarmNonlocalLoginPlacesResponse.h
  include/tencentcloud/yunjing/v20180228/model/WeeklyReportNonlocalLoginPlace.h
  include/tencentcloud/yunjing/v20180228/model/DescribeOverviewStatisticsResponse.h
  include/tencentcloud/yunjing/v20180228/model/RecoverMalwaresRequest.h
  include/tencentcloud/yunjing/v20180228/model/MaliciousRequest.h
  include/tencentcloud/yunjing/v20180228/model/TrustMalwaresResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportInfoRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeProcessesResponse.h
  include/tencentcloud/yunjing/v20180228/model/WeeklyReportMalware.h
  include/tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportsRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeVulsResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeImpactedHostsResponse.h
  include/tencentcloud/yunjing/v20180228/model/AgentVul.h
  include/tencentcloud/yunjing/v20180228/model/DescribeOpenPortStatisticsRequest.h
  include/tencentcloud/yunjing/v20180228/model/DeleteMachineRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeVulInfoRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeComponentStatisticsResponse.h
  include/tencentcloud/yunjing/v20180228/model/Place.h
  include/tencentcloud/yunjing/v20180228/model/DeleteUsualLoginPlacesResponse.h
  include/tencentcloud/yunjing/v20180228/model/DeleteNonlocalLoginPlacesResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeNonlocalLoginPlacesResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportNonlocalLoginPlacesRequest.h
  include/tencentcloud/yunjing/v20180228/model/InquiryPriceOpenProVersionPrepaidResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeMachineInfoResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeUsualLoginPlacesResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeComponentInfoRequest.h
  include/tencentcloud/yunjing/v20180228/model/MisAlarmNonlocalLoginPlacesRequest.h
  include/tencentcloud/yunjing/v20180228/model/TrustMaliciousRequestRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportMalwaresRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeBruteAttacksResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeComponentStatisticsRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeOverviewStatisticsRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeOpenPortStatisticsResponse.h
  include/tencentcloud/yunjing/v20180228/model/UntrustMaliciousRequestResponse.h
  include/tencentcloud/yunjing/v20180228/model/SecurityDynamic.h
  include/tencentcloud/yunjing/v20180228/model/DescribeVulInfoResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeProVersionInfoResponse.h
  include/tencentcloud/yunjing/v20180228/model/DeleteBruteAttacksRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportNonlocalLoginPlacesResponse.h
  include/tencentcloud/yunjing/v20180228/model/SeparateMalwaresRequest.h
  include/tencentcloud/yunjing/v20180228/model/RenewProVersionResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeSecurityTrendsResponse.h
  include/tencentcloud/yunjing/v20180228/model/ProVersionMachine.h
  include/tencentcloud/yunjing/v20180228/model/ExportMaliciousRequestsResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportInfoResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeSecurityDynamicsResponse.h
  include/tencentcloud/yunjing/v20180228/model/TrustMaliciousRequestResponse.h
  include/tencentcloud/yunjing/v20180228/model/CloseProVersionResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeOpenPortsResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeMachineInfoRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeMaliciousRequestsRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeProcessesRequest.h
  include/tencentcloud/yunjing/v20180228/model/DeleteUsualLoginPlacesRequest.h
  include/tencentcloud/yunjing/v20180228/model/WeeklyReport.h
  include/tencentcloud/yunjing/v20180228/model/Filter.h
  include/tencentcloud/yunjing/v20180228/model/DescribeAccountStatisticsRequest.h
  include/tencentcloud/yunjing/v20180228/model/OpenProVersionPrepaidResponse.h
  include/tencentcloud/yunjing/v20180228/model/DeleteMalwaresResponse.h
  include/tencentcloud/yunjing/v20180228/model/ChargePrepaid.h
  include/tencentcloud/yunjing/v20180228/model/SeparateMalwaresResponse.h
  include/tencentcloud/yunjing/v20180228/model/ProcessStatistics.h
  include/tencentcloud/yunjing/v20180228/model/Process.h
  include/tencentcloud/yunjing/v20180228/model/DescribeVulScanResultRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportMalwaresResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeSecurityDynamicsRequest.h
  include/tencentcloud/yunjing/v20180228/model/ImpactedHost.h
  include/tencentcloud/yunjing/v20180228/model/DescribeProcessStatisticsResponse.h
  include/tencentcloud/yunjing/v20180228/model/DeleteNonlocalLoginPlacesRequest.h
  include/tencentcloud/yunjing/v20180228/model/Malware.h
  include/tencentcloud/yunjing/v20180228/model/ExportMaliciousRequestsRequest.h
  include/tencentcloud/yunjing/v20180228/model/AccountStatistics.h
  include/tencentcloud/yunjing/v20180228/model/DescribeMachinesResponse.h
  include/tencentcloud/yunjing/v20180228/model/CreateUsualLoginPlacesResponse.h
  include/tencentcloud/yunjing/v20180228/model/ModifyProVersionRenewFlagResponse.h
  include/tencentcloud/yunjing/v20180228/model/Machine.h
  include/tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportVulsResponse.h
  include/tencentcloud/yunjing/v20180228/model/WeeklyReportBruteAttack.h
  include/tencentcloud/yunjing/v20180228/model/HistoryAccount.h
  include/tencentcloud/yunjing/v20180228/model/ModifyProVersionRenewFlagRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeUsualLoginPlacesRequest.h
  include/tencentcloud/yunjing/v20180228/model/Component.h
  include/tencentcloud/yunjing/v20180228/model/DescribeVulsRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeAgentVulsResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeProcessStatisticsRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeHistoryAccountsRequest.h
  include/tencentcloud/yunjing/v20180228/model/CloseProVersionRequest.h
  include/tencentcloud/yunjing/v20180228/model/ModifyAlarmAttributeResponse.h
  include/tencentcloud/yunjing/v20180228/model/IgnoreImpactedHostsResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeComponentsResponse.h
  include/tencentcloud/yunjing/v20180228/model/RescanImpactedHostResponse.h
  include/tencentcloud/yunjing/v20180228/model/SecurityTrend.h
  include/tencentcloud/yunjing/v20180228/model/Vul.h
  include/tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportsResponse.h
  include/tencentcloud/yunjing/v20180228/model/DescribeAccountsResponse.h
  include/tencentcloud/yunjing/v20180228/model/ModifyAutoOpenProVersionConfigResponse.h
  include/tencentcloud/yunjing/v20180228/model/RecoverMalwaresResponse.h
  include/tencentcloud/yunjing/v20180228/model/IgnoreImpactedHostsRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeAlarmAttributeRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeMalwaresRequest.h
  include/tencentcloud/yunjing/v20180228/model/DeleteMaliciousRequestsRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeMachinesRequest.h
  include/tencentcloud/yunjing/v20180228/model/DeleteMalwaresRequest.h
  include/tencentcloud/yunjing/v20180228/model/DescribeMalwaresResponse.h
  include/tencentcloud/yunjing/v20180228/model/DeleteBruteAttacksResponse.h
  )

set(yunjing_src
  src/v20180228/YunjingClient.cpp
  src/v20180228/model/ModifyAutoOpenProVersionConfigRequest.cpp
  src/v20180228/model/DescribeProcessTaskStatusResponse.cpp
  src/v20180228/model/DescribeAlarmAttributeResponse.cpp
  src/v20180228/model/DescribeWeeklyReportBruteAttacksResponse.cpp
  src/v20180228/model/DescribeAgentVulsRequest.cpp
  src/v20180228/model/UsualPlace.cpp
  src/v20180228/model/DescribeAccountsRequest.cpp
  src/v20180228/model/WeeklyReportVul.cpp
  src/v20180228/model/DescribeWeeklyReportBruteAttacksRequest.cpp
  src/v20180228/model/CreateUsualLoginPlacesRequest.cpp
  src/v20180228/model/DescribeProcessTaskStatusRequest.cpp
  src/v20180228/model/ModifyAlarmAttributeRequest.cpp
  src/v20180228/model/ComponentStatistics.cpp
  src/v20180228/model/InquiryPriceOpenProVersionPrepaidRequest.cpp
  src/v20180228/model/DescribeBruteAttacksRequest.cpp
  src/v20180228/model/DescribeSecurityTrendsRequest.cpp
  src/v20180228/model/Account.cpp
  src/v20180228/model/RescanImpactedHostRequest.cpp
  src/v20180228/model/BruteAttack.cpp
  src/v20180228/model/DescribeOpenPortsRequest.cpp
  src/v20180228/model/DescribeImpactedHostsRequest.cpp
  src/v20180228/model/DescribeMaliciousRequestsResponse.cpp
  src/v20180228/model/NonLocalLoginPlace.cpp
  src/v20180228/model/CreateProcessTaskResponse.cpp
  src/v20180228/model/RenewProVersionRequest.cpp
  src/v20180228/model/DescribeComponentsRequest.cpp
  src/v20180228/model/DescribeNonlocalLoginPlacesRequest.cpp
  src/v20180228/model/OpenPortStatistics.cpp
  src/v20180228/model/DescribeHistoryAccountsResponse.cpp
  src/v20180228/model/DescribeVulScanResultResponse.cpp
  src/v20180228/model/UntrustMalwaresRequest.cpp
  src/v20180228/model/DescribeWeeklyReportVulsRequest.cpp
  src/v20180228/model/TrustMalwaresRequest.cpp
  src/v20180228/model/UntrustMalwaresResponse.cpp
  src/v20180228/model/UntrustMaliciousRequestRequest.cpp
  src/v20180228/model/DescribeComponentInfoResponse.cpp
  src/v20180228/model/DescribeAccountStatisticsResponse.cpp
  src/v20180228/model/OpenProVersionPrepaidRequest.cpp
  src/v20180228/model/OpenPort.cpp
  src/v20180228/model/DescribeProVersionInfoRequest.cpp
  src/v20180228/model/CreateProcessTaskRequest.cpp
  src/v20180228/model/DeleteMaliciousRequestsResponse.cpp
  src/v20180228/model/DeleteMachineResponse.cpp
  src/v20180228/model/MisAlarmNonlocalLoginPlacesResponse.cpp
  src/v20180228/model/WeeklyReportNonlocalLoginPlace.cpp
  src/v20180228/model/DescribeOverviewStatisticsResponse.cpp
  src/v20180228/model/RecoverMalwaresRequest.cpp
  src/v20180228/model/MaliciousRequest.cpp
  src/v20180228/model/TrustMalwaresResponse.cpp
  src/v20180228/model/DescribeWeeklyReportInfoRequest.cpp
  src/v20180228/model/DescribeProcessesResponse.cpp
  src/v20180228/model/WeeklyReportMalware.cpp
  src/v20180228/model/DescribeWeeklyReportsRequest.cpp
  src/v20180228/model/DescribeVulsResponse.cpp
  src/v20180228/model/DescribeImpactedHostsResponse.cpp
  src/v20180228/model/AgentVul.cpp
  src/v20180228/model/DescribeOpenPortStatisticsRequest.cpp
  src/v20180228/model/DeleteMachineRequest.cpp
  src/v20180228/model/DescribeVulInfoRequest.cpp
  src/v20180228/model/DescribeComponentStatisticsResponse.cpp
  src/v20180228/model/Place.cpp
  src/v20180228/model/DeleteUsualLoginPlacesResponse.cpp
  src/v20180228/model/DeleteNonlocalLoginPlacesResponse.cpp
  src/v20180228/model/DescribeNonlocalLoginPlacesResponse.cpp
  src/v20180228/model/DescribeWeeklyReportNonlocalLoginPlacesRequest.cpp
  src/v20180228/model/InquiryPriceOpenProVersionPrepaidResponse.cpp
  src/v20180228/model/DescribeMachineInfoResponse.cpp
  src/v20180228/model/DescribeUsualLoginPlacesResponse.cpp
  src/v20180228/model/DescribeComponentInfoRequest.cpp
  src/v20180228/model/MisAlarmNonlocalLoginPlacesRequest.cpp
  src/v20180228/model/TrustMaliciousRequestRequest.cpp
  src/v20180228/model/DescribeWeeklyReportMalwaresRequest.cpp
  src/v20180228/model/DescribeBruteAttacksResponse.cpp
  src/v20180228/model/DescribeComponentStatisticsRequest.cpp
  src/v20180228/model/DescribeOverviewStatisticsRequest.cpp
  src/v20180228/model/DescribeOpenPortStatisticsResponse.cpp
  src/v20180228/model/UntrustMaliciousRequestResponse.cpp
  src/v20180228/model/SecurityDynamic.cpp
  src/v20180228/model/DescribeVulInfoResponse.cpp
  src/v20180228/model/DescribeProVersionInfoResponse.cpp
  src/v20180228/model/DeleteBruteAttacksRequest.cpp
  src/v20180228/model/DescribeWeeklyReportNonlocalLoginPlacesResponse.cpp
  src/v20180228/model/SeparateMalwaresRequest.cpp
  src/v20180228/model/RenewProVersionResponse.cpp
  src/v20180228/model/DescribeSecurityTrendsResponse.cpp
  src/v20180228/model/ProVersionMachine.cpp
  src/v20180228/model/ExportMaliciousRequestsResponse.cpp
  src/v20180228/model/DescribeWeeklyReportInfoResponse.cpp
  src/v20180228/model/DescribeSecurityDynamicsResponse.cpp
  src/v20180228/model/TrustMaliciousRequestResponse.cpp
  src/v20180228/model/CloseProVersionResponse.cpp
  src/v20180228/model/DescribeOpenPortsResponse.cpp
  src/v20180228/model/DescribeMachineInfoRequest.cpp
  src/v20180228/model/DescribeMaliciousRequestsRequest.cpp
  src/v20180228/model/DescribeProcessesRequest.cpp
  src/v20180228/model/DeleteUsualLoginPlacesRequest.cpp
  src/v20180228/model/WeeklyReport.cpp
  src/v20180228/model/Filter.cpp
  src/v20180228/model/DescribeAccountStatisticsRequest.cpp
  src/v20180228/model/OpenProVersionPrepaidResponse.cpp
  src/v20180228/model/DeleteMalwaresResponse.cpp
  src/v20180228/model/ChargePrepaid.cpp
  src/v20180228/model/SeparateMalwaresResponse.cpp
  src/v20180228/model/ProcessStatistics.cpp
  src/v20180228/model/Process.cpp
  src/v20180228/model/DescribeVulScanResultRequest.cpp
  src/v20180228/model/DescribeWeeklyReportMalwaresResponse.cpp
  src/v20180228/model/DescribeSecurityDynamicsRequest.cpp
  src/v20180228/model/ImpactedHost.cpp
  src/v20180228/model/DescribeProcessStatisticsResponse.cpp
  src/v20180228/model/DeleteNonlocalLoginPlacesRequest.cpp
  src/v20180228/model/Malware.cpp
  src/v20180228/model/ExportMaliciousRequestsRequest.cpp
  src/v20180228/model/AccountStatistics.cpp
  src/v20180228/model/DescribeMachinesResponse.cpp
  src/v20180228/model/CreateUsualLoginPlacesResponse.cpp
  src/v20180228/model/ModifyProVersionRenewFlagResponse.cpp
  src/v20180228/model/Machine.cpp
  src/v20180228/model/DescribeWeeklyReportVulsResponse.cpp
  src/v20180228/model/WeeklyReportBruteAttack.cpp
  src/v20180228/model/HistoryAccount.cpp
  src/v20180228/model/ModifyProVersionRenewFlagRequest.cpp
  src/v20180228/model/DescribeUsualLoginPlacesRequest.cpp
  src/v20180228/model/Component.cpp
  src/v20180228/model/DescribeVulsRequest.cpp
  src/v20180228/model/DescribeAgentVulsResponse.cpp
  src/v20180228/model/DescribeProcessStatisticsRequest.cpp
  src/v20180228/model/DescribeHistoryAccountsRequest.cpp
  src/v20180228/model/CloseProVersionRequest.cpp
  src/v20180228/model/ModifyAlarmAttributeResponse.cpp
  src/v20180228/model/IgnoreImpactedHostsResponse.cpp
  src/v20180228/model/DescribeComponentsResponse.cpp
  src/v20180228/model/RescanImpactedHostResponse.cpp
  src/v20180228/model/SecurityTrend.cpp
  src/v20180228/model/Vul.cpp
  src/v20180228/model/DescribeWeeklyReportsResponse.cpp
  src/v20180228/model/DescribeAccountsResponse.cpp
  src/v20180228/model/ModifyAutoOpenProVersionConfigResponse.cpp
  src/v20180228/model/RecoverMalwaresResponse.cpp
  src/v20180228/model/IgnoreImpactedHostsRequest.cpp
  src/v20180228/model/DescribeAlarmAttributeRequest.cpp
  src/v20180228/model/DescribeMalwaresRequest.cpp
  src/v20180228/model/DeleteMaliciousRequestsRequest.cpp
  src/v20180228/model/DescribeMachinesRequest.cpp
  src/v20180228/model/DeleteMalwaresRequest.cpp
  src/v20180228/model/DescribeMalwaresResponse.cpp
  src/v20180228/model/DeleteBruteAttacksResponse.cpp
  )

set(yunjing_include
    include/tencentcloud/yunjing
  )

add_library(yunjing ${LIB_TYPE}
  ${yunjing_public_header}
  ${yunjing_public_header_model}
  ${yunjing_src})

set_target_properties(yunjing
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}yunjing
  )

target_include_directories(yunjing
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(yunjing
  core)

#install(FILES ${yunjing_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/yunjing/v20180228)
#install(FILES ${yunjing_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/yunjing/v20180228/model)
install(DIRECTORY ${yunjing_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS yunjing
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
