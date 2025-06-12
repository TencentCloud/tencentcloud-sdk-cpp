/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CWP_V20180228_CWPCLIENT_H_
#define TENCENTCLOUD_CWP_V20180228_CWPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cwp/v20180228/model/AddLoginWhiteListsRequest.h>
#include <tencentcloud/cwp/v20180228/model/AddLoginWhiteListsResponse.h>
#include <tencentcloud/cwp/v20180228/model/CancelIgnoreVulRequest.h>
#include <tencentcloud/cwp/v20180228/model/CancelIgnoreVulResponse.h>
#include <tencentcloud/cwp/v20180228/model/ChangeRuleEventsIgnoreStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ChangeRuleEventsIgnoreStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ChangeStrategyEnableStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ChangeStrategyEnableStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/CheckBashPolicyParamsRequest.h>
#include <tencentcloud/cwp/v20180228/model/CheckBashPolicyParamsResponse.h>
#include <tencentcloud/cwp/v20180228/model/CheckBashRuleParamsRequest.h>
#include <tencentcloud/cwp/v20180228/model/CheckBashRuleParamsResponse.h>
#include <tencentcloud/cwp/v20180228/model/CheckFileTamperRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/CheckFileTamperRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/CheckFirstScanBaselineRequest.h>
#include <tencentcloud/cwp/v20180228/model/CheckFirstScanBaselineResponse.h>
#include <tencentcloud/cwp/v20180228/model/CheckLogKafkaConnectionStateRequest.h>
#include <tencentcloud/cwp/v20180228/model/CheckLogKafkaConnectionStateResponse.h>
#include <tencentcloud/cwp/v20180228/model/ClearLocalStorageRequest.h>
#include <tencentcloud/cwp/v20180228/model/ClearLocalStorageResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateBanWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateBanWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateBaselineStrategyRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateBaselineStrategyResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateBuyBindTaskRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateBuyBindTaskResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateEmergencyVulScanRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateEmergencyVulScanResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateIncidentBacktrackingRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateIncidentBacktrackingResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateLicenseOrderRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateLicenseOrderResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateLogExportRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateLogExportResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateMaliciousRequestWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateMaliciousRequestWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateMalwareWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateMalwareWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateNetAttackWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateNetAttackWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateProtectServerRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateProtectServerResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateRansomDefenseStrategyRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateRansomDefenseStrategyResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateScanMalwareSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateScanMalwareSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateSearchLogRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateSearchLogResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateSearchTemplateRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateSearchTemplateResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateVulFixRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateVulFixResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateWhiteListOrderRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateWhiteListOrderResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteAllJavaMemShellsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteAllJavaMemShellsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBanWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBanWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBaselinePolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBaselinePolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBaselineRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBaselineRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBaselineRuleIgnoreRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBaselineRuleIgnoreResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBaselineStrategyRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBaselineStrategyResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBaselineWeakPasswordRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBaselineWeakPasswordResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBashEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBashEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBashPoliciesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBashPoliciesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBashRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBashRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBruteAttacksRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBruteAttacksResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLicenseRecordRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLicenseRecordResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLicenseRecordAllRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLicenseRecordAllResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLogExportRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLogExportResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLoginWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLoginWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineClearHistoryRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineClearHistoryResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineTagRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineTagResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMaliciousRequestWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMaliciousRequestWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMaliciousRequestsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMaliciousRequestsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwareScanTaskRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwareScanTaskResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwareWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwareWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwaresRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwaresResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteNetAttackWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteNetAttackWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteNonlocalLoginPlacesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteNonlocalLoginPlacesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeletePrivilegeEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeletePrivilegeEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeletePrivilegeRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeletePrivilegeRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteProtectDirRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteProtectDirResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteRaspRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteRaspRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteReverseShellEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteReverseShellEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteReverseShellRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteReverseShellRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteRiskDnsEventRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteRiskDnsEventResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteRiskDnsPolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteRiskDnsPolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteScanTaskRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteScanTaskResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteSearchTemplateRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteSearchTemplateResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteTagsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteTagsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebHookPolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebHookPolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebHookReceiverRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebHookReceiverResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebHookRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebHookRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebPageEventLogRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebPageEventLogResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeABTestConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeABTestConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAESKeyRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAESKeyResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAccountStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAccountStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAgentInstallCommandRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAgentInstallCommandResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAgentInstallationTokenRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAgentInstallationTokenResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAlarmIncidentNodesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAlarmIncidentNodesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAlarmVertexIdRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAlarmVertexIdResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppProcessListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppProcessListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetCoreModuleInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetCoreModuleInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetCoreModuleListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetCoreModuleListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDiskListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDiskListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetEnvListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetEnvListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetHostTotalCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetHostTotalCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetInitServiceListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetInitServiceListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetJarInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetJarInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetJarListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetJarListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetLoadInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetLoadInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineTagTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineTagTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPlanTaskListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPlanTaskListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPortCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPortCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPortInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPortInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetProcessCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetProcessCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetProcessInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetProcessInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetRecentMachineInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetRecentMachineInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetSystemPackageListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetSystemPackageListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetTotalCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetTotalCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetTypeTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetTypeTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetTypesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetTypesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserKeyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserKeyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppPluginListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppPluginListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebFrameCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebFrameCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebFrameListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebFrameListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationPathListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationPathListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceProcessListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceProcessListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackEventInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackEventInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackTrendsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackTrendsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackVulTypeListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackVulTypeListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAvailableExpertServiceDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAvailableExpertServiceDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanModeRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanModeResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanRegionsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanRegionsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineAnalysisDataRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineAnalysisDataResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineBasicInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineBasicInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineDefaultStrategyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineDefaultStrategyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineDetectListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineDetectListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineDetectOverviewRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineDetectOverviewResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineDownloadListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineDownloadListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineEffectHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineFixListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineFixListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineHostDetectListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineHostDetectListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineHostIgnoreListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineHostIgnoreListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineHostRiskTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineHostRiskTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineHostTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineHostTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineItemDetectListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineItemDetectListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineItemIgnoreListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineItemIgnoreListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineItemInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineItemInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineItemListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineItemListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineItemRiskTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineItemRiskTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselinePolicyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselinePolicyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineRuleCategoryListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineRuleCategoryListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineRuleDetectListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineRuleDetectListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineRuleIgnoreListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineRuleIgnoreListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineRuleListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineRuleListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineScanScheduleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineScanScheduleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineStrategyDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineStrategyDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineStrategyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineStrategyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineWeakPasswordListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineWeakPasswordListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsInfoNewRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsInfoNewResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsNewRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsNewResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashPoliciesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashPoliciesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBruteAttackListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBruteAttackListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBruteAttackRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBruteAttackRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeCanFixVulMachineRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeCanFixVulMachineResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeCanNotSeparateMachineRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeCanNotSeparateMachineResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeClientExceptionRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeClientExceptionResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeDefenceEventDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeDefenceEventDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeDirectConnectInstallCommandRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeDirectConnectInstallCommandResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeESAggregationsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeESAggregationsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEmergencyResponseListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEmergencyResponseListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEmergencyVulListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEmergencyVulListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEventByTableRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEventByTableResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExpertServiceListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExpertServiceListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExpertServiceOrderListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExpertServiceOrderListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExportMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExportMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFastAnalysisRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFastAnalysisResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperEventRuleInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperEventRuleInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperRuleCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperRuleCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperRuleInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperRuleInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeGeneralStatRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeGeneralStatResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHistoryAccountsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHistoryAccountsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHistoryServiceRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHistoryServiceResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHostInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHostInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHostLoginListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHostLoginListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHotVulTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHotVulTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreBaselineRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreBaselineRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreHostAndItemConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreHostAndItemConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreRuleEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreRuleEffectHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeImportMachineInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeImportMachineInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellPluginInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellPluginInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellPluginListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellPluginListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseBindListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseBindListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseBindScheduleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseBindScheduleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseGeneralRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseGeneralResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseWhiteConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseWhiteConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogDeliveryKafkaOptionsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogDeliveryKafkaOptionsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogExportsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogExportsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogHistogramRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogHistogramResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogIndexRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogIndexResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogKafkaDeliverInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogKafkaDeliverInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogStorageConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogStorageConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogStorageRecordRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogStorageRecordResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogStorageStatisticRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogStorageStatisticResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogTypeRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogTypeResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteCombinedListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteCombinedListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineClearHistoryRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineClearHistoryResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineDefenseCntRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineDefenseCntResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineFileTamperRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineFileTamperRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineGeneralRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineGeneralResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineLicenseDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineLicenseDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineOsListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineOsListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineRegionListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineRegionListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineRegionsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineRegionsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineRiskCntRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineRiskCntResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineSnapshotRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineSnapshotResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachinesSimpleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachinesSimpleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalWareListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalWareListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMaliciousRequestWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMaliciousRequestWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareFileRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareFileResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareRiskOverviewRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareRiskOverviewResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareRiskWarningRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareRiskWarningResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareTimingScanSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareTimingScanSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareWhiteListAffectListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareWhiteListAffectListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMonthInspectionReportRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMonthInspectionReportResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeNetAttackSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeNetAttackSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeNetAttackWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeNetAttackWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeOpenPortStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeOpenPortStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeOverviewStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeOverviewStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribePrivilegeEventInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribePrivilegeEventInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribePrivilegeEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribePrivilegeEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribePrivilegeRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribePrivilegeRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProVersionInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProVersionInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProVersionStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProVersionStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProcessStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProcessStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProductStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProductStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProtectDirListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProtectDirListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProtectDirRelatedServerRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProtectDirRelatedServerResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProtectNetListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProtectNetListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribePublicProxyInstallCommandRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribePublicProxyInstallCommandResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseBackupListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseBackupListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseEventsListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseEventsListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseMachineListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseMachineListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseMachineStrategyInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseMachineStrategyInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseRollBackTaskListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseRollBackTaskListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStateRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStateResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStrategyDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStrategyDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStrategyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStrategyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStrategyMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStrategyMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseTrendRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseTrendResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRaspMaxCpuRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRaspMaxCpuResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRaspRuleVulsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRaspRuleVulsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRaspRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRaspRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRecommendedProtectCpuRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRecommendedProtectCpuResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellEventInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellEventInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskBatchStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskBatchStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsEventInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsEventInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsEventListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsEventListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsPolicyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsPolicyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskProcessEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskProcessEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSafeInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSafeInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanMalwareScheduleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanMalwareScheduleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanScheduleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanScheduleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanStateRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanStateResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanTaskDetailsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanTaskDetailsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanTaskStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanTaskStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanVulSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanVulSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenAttackHotspotRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenAttackHotspotResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenBroadcastsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenBroadcastsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenDefenseTrendsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenDefenseTrendsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenEmergentMsgRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenEmergentMsgResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenEventsCntRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenEventsCntResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenGeneralStatRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenGeneralStatResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenHostInvasionRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenHostInvasionResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenMachineRegionsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenMachineRegionsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenProtectionCntRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenProtectionCntResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenProtectionStatRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenProtectionStatResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenRiskAssetsTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenRiskAssetsTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSearchLogsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSearchLogsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSearchTemplatesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSearchTemplatesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityBroadcastInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityBroadcastInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityBroadcastsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityBroadcastsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityDynamicsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityDynamicsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityEventStatRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityEventStatResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityEventsCntRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityEventsCntResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityTrendsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityTrendsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeServerRelatedDirInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeServerRelatedDirInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeServersAndRiskAndFirstInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeServersAndRiskAndFirstInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeStrategyExistRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeStrategyExistResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeTagMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeTagMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeTagsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeTagsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeTrialReportRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeTrialReportResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeUndoVulCountsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeUndoVulCountsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeUsersConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeUsersConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeUsualLoginPlacesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeUsualLoginPlacesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVdbAndPocInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVdbAndPocInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVersionCompareChartRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVersionCompareChartResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVersionStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVersionStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVertexDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVertexDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulCountByDatesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulCountByDatesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulCveIdInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulCveIdInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceEventRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceEventResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceOverviewRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceOverviewResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefencePluginDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefencePluginDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefencePluginExceptionCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefencePluginExceptionCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefencePluginStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefencePluginStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulEffectHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulEffectModulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulEffectModulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulEmergentMsgRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulEmergentMsgResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulFixStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulFixStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulHostCountScanTimeRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulHostCountScanTimeResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulHostTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulHostTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulInfoCvssRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulInfoCvssResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulLabelsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulLabelsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulLevelCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulLevelCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulOverviewRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulOverviewResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulStoreListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulStoreListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulTrendRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulTrendResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWarningHostConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWarningHostConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWarningListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWarningListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookPolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookPolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookReceiverRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookReceiverResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookReceiverUsageRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookReceiverUsageResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebPageEventListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebPageEventListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebPageGeneralizeRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebPageGeneralizeResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebPageProtectStatRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebPageProtectStatResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebPageServiceInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebPageServiceInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DestroyOrderRequest.h>
#include <tencentcloud/cwp/v20180228/model/DestroyOrderResponse.h>
#include <tencentcloud/cwp/v20180228/model/EditBashRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/EditBashRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/EditPrivilegeRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/EditPrivilegeRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/EditReverseShellRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/EditReverseShellRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/EditTagsRequest.h>
#include <tencentcloud/cwp/v20180228/model/EditTagsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetAppListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetAppListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetCoreModuleListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetCoreModuleListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetDatabaseListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetDatabaseListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetEnvListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetEnvListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetInitServiceListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetInitServiceListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetJarListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetJarListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetMachineDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetMachineDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetMachineListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetMachineListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetPlanTaskListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetPlanTaskListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetPortInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetPortInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetProcessInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetProcessInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetRecentMachineInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetRecentMachineInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetSystemPackageListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetSystemPackageListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetUserListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetUserListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebAppListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebAppListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebFrameListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebFrameListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebLocationListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebLocationListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebServiceInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebServiceInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAttackEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAttackEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineEffectHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineFixListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineFixListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineHostDetectListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineHostDetectListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineItemDetectListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineItemDetectListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineItemListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineItemListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineRuleDetectListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineRuleDetectListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineWeakPasswordListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineWeakPasswordListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBashEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBashEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBashEventsNewRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBashEventsNewResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBashPoliciesRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBashPoliciesResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBruteAttacksRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBruteAttacksResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportFileTamperEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportFileTamperEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportFileTamperRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportFileTamperRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportIgnoreBaselineRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportIgnoreBaselineRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportIgnoreRuleEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportIgnoreRuleEffectHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportJavaMemShellPluginsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportJavaMemShellPluginsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportJavaMemShellsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportJavaMemShellsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportLicenseDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportLicenseDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportMaliciousRequestsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportMaliciousRequestsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportMalwaresRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportMalwaresResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportNonlocalLoginPlacesRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportNonlocalLoginPlacesResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportPrivilegeEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportPrivilegeEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportProtectDirListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportProtectDirListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseBackupListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseBackupListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseEventsListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseEventsListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseMachineListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseMachineListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseStrategyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseStrategyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseStrategyMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseStrategyMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportReverseShellEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportReverseShellEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRiskDnsEventListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRiskDnsEventListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRiskDnsPolicyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRiskDnsPolicyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRiskProcessEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRiskProcessEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportScanTaskDetailsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportScanTaskDetailsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportSecurityTrendsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportSecurityTrendsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportTasksRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportTasksResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDefenceEventRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDefenceEventResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDefenceListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDefenceListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDefencePluginEventRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDefencePluginEventResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDetectionExcelRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDetectionExcelResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDetectionReportRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDetectionReportResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulEffectHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportWebPageEventListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportWebPageEventListResponse.h>
#include <tencentcloud/cwp/v20180228/model/FixBaselineDetectRequest.h>
#include <tencentcloud/cwp/v20180228/model/FixBaselineDetectResponse.h>
#include <tencentcloud/cwp/v20180228/model/GetLocalStorageItemRequest.h>
#include <tencentcloud/cwp/v20180228/model/GetLocalStorageItemResponse.h>
#include <tencentcloud/cwp/v20180228/model/IgnoreImpactedHostsRequest.h>
#include <tencentcloud/cwp/v20180228/model/IgnoreImpactedHostsResponse.h>
#include <tencentcloud/cwp/v20180228/model/KeysLocalStorageRequest.h>
#include <tencentcloud/cwp/v20180228/model/KeysLocalStorageResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyAutoOpenProVersionConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyAutoOpenProVersionConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanModeRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanModeResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBaselinePolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBaselinePolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBaselinePolicyStateRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBaselinePolicyStateResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBaselineRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBaselineRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBaselineRuleIgnoreRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBaselineRuleIgnoreResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBaselineWeakPasswordRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBaselineWeakPasswordResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBashPolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBashPolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBashPolicyStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBashPolicyStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBruteAttackRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBruteAttackRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyEventAttackStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyEventAttackStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyFileTamperEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyFileTamperEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyFileTamperRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyFileTamperRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyFileTamperRuleStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyFileTamperRuleStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyJavaMemShellPluginSwitchRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyJavaMemShellPluginSwitchResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyJavaMemShellsStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyJavaMemShellsStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLicenseBindsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLicenseBindsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLicenseOrderRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLicenseOrderResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLicenseUnBindsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLicenseUnBindsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogKafkaAccessRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogKafkaAccessResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogKafkaDeliverTypeRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogKafkaDeliverTypeResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogKafkaStateRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogKafkaStateResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogStorageConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogStorageConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLoginWhiteInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLoginWhiteInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLoginWhiteRecordRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLoginWhiteRecordResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMachineAutoClearConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMachineAutoClearConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMachineRemarkRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMachineRemarkResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMaliciousRequestWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMaliciousRequestWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMalwareTimingScanSettingsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMalwareTimingScanSettingsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMalwareWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMalwareWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyNetAttackSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyNetAttackSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyNetAttackWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyNetAttackWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyOrderAttributeRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyOrderAttributeResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRansomDefenseEventsStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRansomDefenseEventsStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRansomDefenseStrategyStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRansomDefenseStrategyStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRaspMaxCpuRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRaspMaxCpuResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRaspRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRaspRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyReverseShellRulesAggregationRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyReverseShellRulesAggregationResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRiskDnsPolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRiskDnsPolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRiskDnsPolicyStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRiskDnsPolicyStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRiskEventsStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRiskEventsStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyUsersConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyUsersConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyVulDefenceEventStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyVulDefenceEventStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyVulDefenceSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyVulDefenceSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWarningHostConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWarningHostConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWarningSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWarningSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookPolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookPolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookPolicyStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookPolicyStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookReceiverRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookReceiverResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookRuleStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookRuleStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectDirRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectDirResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectSwitchRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectSwitchResponse.h>
#include <tencentcloud/cwp/v20180228/model/RansomDefenseRollbackRequest.h>
#include <tencentcloud/cwp/v20180228/model/RansomDefenseRollbackResponse.h>
#include <tencentcloud/cwp/v20180228/model/RecoverMalwaresRequest.h>
#include <tencentcloud/cwp/v20180228/model/RecoverMalwaresResponse.h>
#include <tencentcloud/cwp/v20180228/model/RemoveLocalStorageItemRequest.h>
#include <tencentcloud/cwp/v20180228/model/RemoveLocalStorageItemResponse.h>
#include <tencentcloud/cwp/v20180228/model/RemoveMachineRequest.h>
#include <tencentcloud/cwp/v20180228/model/RemoveMachineResponse.h>
#include <tencentcloud/cwp/v20180228/model/RetryCreateSnapshotRequest.h>
#include <tencentcloud/cwp/v20180228/model/RetryCreateSnapshotResponse.h>
#include <tencentcloud/cwp/v20180228/model/RetryVulFixRequest.h>
#include <tencentcloud/cwp/v20180228/model/RetryVulFixResponse.h>
#include <tencentcloud/cwp/v20180228/model/ScanAssetRequest.h>
#include <tencentcloud/cwp/v20180228/model/ScanAssetResponse.h>
#include <tencentcloud/cwp/v20180228/model/ScanBaselineRequest.h>
#include <tencentcloud/cwp/v20180228/model/ScanBaselineResponse.h>
#include <tencentcloud/cwp/v20180228/model/ScanTaskAgainRequest.h>
#include <tencentcloud/cwp/v20180228/model/ScanTaskAgainResponse.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulRequest.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulResponse.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulAgainRequest.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulAgainResponse.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/SearchLogRequest.h>
#include <tencentcloud/cwp/v20180228/model/SearchLogResponse.h>
#include <tencentcloud/cwp/v20180228/model/SeparateMalwaresRequest.h>
#include <tencentcloud/cwp/v20180228/model/SeparateMalwaresResponse.h>
#include <tencentcloud/cwp/v20180228/model/SetBashEventsStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/SetBashEventsStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/SetLocalStorageExpireRequest.h>
#include <tencentcloud/cwp/v20180228/model/SetLocalStorageExpireResponse.h>
#include <tencentcloud/cwp/v20180228/model/SetLocalStorageItemRequest.h>
#include <tencentcloud/cwp/v20180228/model/SetLocalStorageItemResponse.h>
#include <tencentcloud/cwp/v20180228/model/StartBaselineDetectRequest.h>
#include <tencentcloud/cwp/v20180228/model/StartBaselineDetectResponse.h>
#include <tencentcloud/cwp/v20180228/model/StopAssetScanRequest.h>
#include <tencentcloud/cwp/v20180228/model/StopAssetScanResponse.h>
#include <tencentcloud/cwp/v20180228/model/StopBaselineDetectRequest.h>
#include <tencentcloud/cwp/v20180228/model/StopBaselineDetectResponse.h>
#include <tencentcloud/cwp/v20180228/model/StopNoticeBanTipsRequest.h>
#include <tencentcloud/cwp/v20180228/model/StopNoticeBanTipsResponse.h>
#include <tencentcloud/cwp/v20180228/model/SwitchBashRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/SwitchBashRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/SyncAssetScanRequest.h>
#include <tencentcloud/cwp/v20180228/model/SyncAssetScanResponse.h>
#include <tencentcloud/cwp/v20180228/model/SyncBaselineDetectSummaryRequest.h>
#include <tencentcloud/cwp/v20180228/model/SyncBaselineDetectSummaryResponse.h>
#include <tencentcloud/cwp/v20180228/model/SyncMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/SyncMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/TestWebHookRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/TestWebHookRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/TrustMalwaresRequest.h>
#include <tencentcloud/cwp/v20180228/model/TrustMalwaresResponse.h>
#include <tencentcloud/cwp/v20180228/model/UntrustMalwaresRequest.h>
#include <tencentcloud/cwp/v20180228/model/UntrustMalwaresResponse.h>
#include <tencentcloud/cwp/v20180228/model/UpdateBaselineStrategyRequest.h>
#include <tencentcloud/cwp/v20180228/model/UpdateBaselineStrategyResponse.h>
#include <tencentcloud/cwp/v20180228/model/UpdateMachineTagsRequest.h>
#include <tencentcloud/cwp/v20180228/model/UpdateMachineTagsResponse.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            class CwpClient : public AbstractClient
            {
            public:
                CwpClient(const Credential &credential, const std::string &region);
                CwpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddLoginWhiteListsResponse> AddLoginWhiteListsOutcome;
                typedef std::future<AddLoginWhiteListsOutcome> AddLoginWhiteListsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::AddLoginWhiteListsRequest&, AddLoginWhiteListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddLoginWhiteListsAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelIgnoreVulResponse> CancelIgnoreVulOutcome;
                typedef std::future<CancelIgnoreVulOutcome> CancelIgnoreVulOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CancelIgnoreVulRequest&, CancelIgnoreVulOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelIgnoreVulAsyncHandler;
                typedef Outcome<Core::Error, Model::ChangeRuleEventsIgnoreStatusResponse> ChangeRuleEventsIgnoreStatusOutcome;
                typedef std::future<ChangeRuleEventsIgnoreStatusOutcome> ChangeRuleEventsIgnoreStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ChangeRuleEventsIgnoreStatusRequest&, ChangeRuleEventsIgnoreStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeRuleEventsIgnoreStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ChangeStrategyEnableStatusResponse> ChangeStrategyEnableStatusOutcome;
                typedef std::future<ChangeStrategyEnableStatusOutcome> ChangeStrategyEnableStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ChangeStrategyEnableStatusRequest&, ChangeStrategyEnableStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeStrategyEnableStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckBashPolicyParamsResponse> CheckBashPolicyParamsOutcome;
                typedef std::future<CheckBashPolicyParamsOutcome> CheckBashPolicyParamsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CheckBashPolicyParamsRequest&, CheckBashPolicyParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckBashPolicyParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckBashRuleParamsResponse> CheckBashRuleParamsOutcome;
                typedef std::future<CheckBashRuleParamsOutcome> CheckBashRuleParamsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CheckBashRuleParamsRequest&, CheckBashRuleParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckBashRuleParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckFileTamperRuleResponse> CheckFileTamperRuleOutcome;
                typedef std::future<CheckFileTamperRuleOutcome> CheckFileTamperRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CheckFileTamperRuleRequest&, CheckFileTamperRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckFileTamperRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckFirstScanBaselineResponse> CheckFirstScanBaselineOutcome;
                typedef std::future<CheckFirstScanBaselineOutcome> CheckFirstScanBaselineOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CheckFirstScanBaselineRequest&, CheckFirstScanBaselineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckFirstScanBaselineAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckLogKafkaConnectionStateResponse> CheckLogKafkaConnectionStateOutcome;
                typedef std::future<CheckLogKafkaConnectionStateOutcome> CheckLogKafkaConnectionStateOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CheckLogKafkaConnectionStateRequest&, CheckLogKafkaConnectionStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckLogKafkaConnectionStateAsyncHandler;
                typedef Outcome<Core::Error, Model::ClearLocalStorageResponse> ClearLocalStorageOutcome;
                typedef std::future<ClearLocalStorageOutcome> ClearLocalStorageOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ClearLocalStorageRequest&, ClearLocalStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearLocalStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBanWhiteListResponse> CreateBanWhiteListOutcome;
                typedef std::future<CreateBanWhiteListOutcome> CreateBanWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateBanWhiteListRequest&, CreateBanWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBanWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBaselineStrategyResponse> CreateBaselineStrategyOutcome;
                typedef std::future<CreateBaselineStrategyOutcome> CreateBaselineStrategyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateBaselineStrategyRequest&, CreateBaselineStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBaselineStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBuyBindTaskResponse> CreateBuyBindTaskOutcome;
                typedef std::future<CreateBuyBindTaskOutcome> CreateBuyBindTaskOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateBuyBindTaskRequest&, CreateBuyBindTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBuyBindTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmergencyVulScanResponse> CreateEmergencyVulScanOutcome;
                typedef std::future<CreateEmergencyVulScanOutcome> CreateEmergencyVulScanOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateEmergencyVulScanRequest&, CreateEmergencyVulScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmergencyVulScanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIncidentBacktrackingResponse> CreateIncidentBacktrackingOutcome;
                typedef std::future<CreateIncidentBacktrackingOutcome> CreateIncidentBacktrackingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateIncidentBacktrackingRequest&, CreateIncidentBacktrackingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIncidentBacktrackingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLicenseOrderResponse> CreateLicenseOrderOutcome;
                typedef std::future<CreateLicenseOrderOutcome> CreateLicenseOrderOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateLicenseOrderRequest&, CreateLicenseOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLicenseOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLogExportResponse> CreateLogExportOutcome;
                typedef std::future<CreateLogExportOutcome> CreateLogExportOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateLogExportRequest&, CreateLogExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogExportAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMaliciousRequestWhiteListResponse> CreateMaliciousRequestWhiteListOutcome;
                typedef std::future<CreateMaliciousRequestWhiteListOutcome> CreateMaliciousRequestWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateMaliciousRequestWhiteListRequest&, CreateMaliciousRequestWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMaliciousRequestWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMalwareWhiteListResponse> CreateMalwareWhiteListOutcome;
                typedef std::future<CreateMalwareWhiteListOutcome> CreateMalwareWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateMalwareWhiteListRequest&, CreateMalwareWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMalwareWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetAttackWhiteListResponse> CreateNetAttackWhiteListOutcome;
                typedef std::future<CreateNetAttackWhiteListOutcome> CreateNetAttackWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateNetAttackWhiteListRequest&, CreateNetAttackWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetAttackWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProtectServerResponse> CreateProtectServerOutcome;
                typedef std::future<CreateProtectServerOutcome> CreateProtectServerOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateProtectServerRequest&, CreateProtectServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProtectServerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRansomDefenseStrategyResponse> CreateRansomDefenseStrategyOutcome;
                typedef std::future<CreateRansomDefenseStrategyOutcome> CreateRansomDefenseStrategyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateRansomDefenseStrategyRequest&, CreateRansomDefenseStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRansomDefenseStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScanMalwareSettingResponse> CreateScanMalwareSettingOutcome;
                typedef std::future<CreateScanMalwareSettingOutcome> CreateScanMalwareSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateScanMalwareSettingRequest&, CreateScanMalwareSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScanMalwareSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSearchLogResponse> CreateSearchLogOutcome;
                typedef std::future<CreateSearchLogOutcome> CreateSearchLogOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateSearchLogRequest&, CreateSearchLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSearchLogAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSearchTemplateResponse> CreateSearchTemplateOutcome;
                typedef std::future<CreateSearchTemplateOutcome> CreateSearchTemplateOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateSearchTemplateRequest&, CreateSearchTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSearchTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulFixResponse> CreateVulFixOutcome;
                typedef std::future<CreateVulFixOutcome> CreateVulFixOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateVulFixRequest&, CreateVulFixOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulFixAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWhiteListOrderResponse> CreateWhiteListOrderOutcome;
                typedef std::future<CreateWhiteListOrderOutcome> CreateWhiteListOrderOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateWhiteListOrderRequest&, CreateWhiteListOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWhiteListOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAllJavaMemShellsResponse> DeleteAllJavaMemShellsOutcome;
                typedef std::future<DeleteAllJavaMemShellsOutcome> DeleteAllJavaMemShellsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteAllJavaMemShellsRequest&, DeleteAllJavaMemShellsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAllJavaMemShellsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBanWhiteListResponse> DeleteBanWhiteListOutcome;
                typedef std::future<DeleteBanWhiteListOutcome> DeleteBanWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBanWhiteListRequest&, DeleteBanWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBanWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBaselinePolicyResponse> DeleteBaselinePolicyOutcome;
                typedef std::future<DeleteBaselinePolicyOutcome> DeleteBaselinePolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBaselinePolicyRequest&, DeleteBaselinePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBaselinePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBaselineRuleResponse> DeleteBaselineRuleOutcome;
                typedef std::future<DeleteBaselineRuleOutcome> DeleteBaselineRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBaselineRuleRequest&, DeleteBaselineRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBaselineRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBaselineRuleIgnoreResponse> DeleteBaselineRuleIgnoreOutcome;
                typedef std::future<DeleteBaselineRuleIgnoreOutcome> DeleteBaselineRuleIgnoreOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBaselineRuleIgnoreRequest&, DeleteBaselineRuleIgnoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBaselineRuleIgnoreAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBaselineStrategyResponse> DeleteBaselineStrategyOutcome;
                typedef std::future<DeleteBaselineStrategyOutcome> DeleteBaselineStrategyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBaselineStrategyRequest&, DeleteBaselineStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBaselineStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBaselineWeakPasswordResponse> DeleteBaselineWeakPasswordOutcome;
                typedef std::future<DeleteBaselineWeakPasswordOutcome> DeleteBaselineWeakPasswordOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBaselineWeakPasswordRequest&, DeleteBaselineWeakPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBaselineWeakPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBashEventsResponse> DeleteBashEventsOutcome;
                typedef std::future<DeleteBashEventsOutcome> DeleteBashEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBashEventsRequest&, DeleteBashEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBashEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBashPoliciesResponse> DeleteBashPoliciesOutcome;
                typedef std::future<DeleteBashPoliciesOutcome> DeleteBashPoliciesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBashPoliciesRequest&, DeleteBashPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBashPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBashRulesResponse> DeleteBashRulesOutcome;
                typedef std::future<DeleteBashRulesOutcome> DeleteBashRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBashRulesRequest&, DeleteBashRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBashRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBruteAttacksResponse> DeleteBruteAttacksOutcome;
                typedef std::future<DeleteBruteAttacksOutcome> DeleteBruteAttacksOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBruteAttacksRequest&, DeleteBruteAttacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBruteAttacksAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLicenseRecordResponse> DeleteLicenseRecordOutcome;
                typedef std::future<DeleteLicenseRecordOutcome> DeleteLicenseRecordOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteLicenseRecordRequest&, DeleteLicenseRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLicenseRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLicenseRecordAllResponse> DeleteLicenseRecordAllOutcome;
                typedef std::future<DeleteLicenseRecordAllOutcome> DeleteLicenseRecordAllOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteLicenseRecordAllRequest&, DeleteLicenseRecordAllOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLicenseRecordAllAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLogExportResponse> DeleteLogExportOutcome;
                typedef std::future<DeleteLogExportOutcome> DeleteLogExportOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteLogExportRequest&, DeleteLogExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoginWhiteListResponse> DeleteLoginWhiteListOutcome;
                typedef std::future<DeleteLoginWhiteListOutcome> DeleteLoginWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteLoginWhiteListRequest&, DeleteLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoginWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineResponse> DeleteMachineOutcome;
                typedef std::future<DeleteMachineOutcome> DeleteMachineOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMachineRequest&, DeleteMachineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineClearHistoryResponse> DeleteMachineClearHistoryOutcome;
                typedef std::future<DeleteMachineClearHistoryOutcome> DeleteMachineClearHistoryOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMachineClearHistoryRequest&, DeleteMachineClearHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineClearHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineTagResponse> DeleteMachineTagOutcome;
                typedef std::future<DeleteMachineTagOutcome> DeleteMachineTagOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMachineTagRequest&, DeleteMachineTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMaliciousRequestWhiteListResponse> DeleteMaliciousRequestWhiteListOutcome;
                typedef std::future<DeleteMaliciousRequestWhiteListOutcome> DeleteMaliciousRequestWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMaliciousRequestWhiteListRequest&, DeleteMaliciousRequestWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMaliciousRequestWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMaliciousRequestsResponse> DeleteMaliciousRequestsOutcome;
                typedef std::future<DeleteMaliciousRequestsOutcome> DeleteMaliciousRequestsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMaliciousRequestsRequest&, DeleteMaliciousRequestsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMaliciousRequestsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMalwareScanTaskResponse> DeleteMalwareScanTaskOutcome;
                typedef std::future<DeleteMalwareScanTaskOutcome> DeleteMalwareScanTaskOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMalwareScanTaskRequest&, DeleteMalwareScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMalwareScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMalwareWhiteListResponse> DeleteMalwareWhiteListOutcome;
                typedef std::future<DeleteMalwareWhiteListOutcome> DeleteMalwareWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMalwareWhiteListRequest&, DeleteMalwareWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMalwareWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMalwaresResponse> DeleteMalwaresOutcome;
                typedef std::future<DeleteMalwaresOutcome> DeleteMalwaresOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMalwaresRequest&, DeleteMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNetAttackWhiteListResponse> DeleteNetAttackWhiteListOutcome;
                typedef std::future<DeleteNetAttackWhiteListOutcome> DeleteNetAttackWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteNetAttackWhiteListRequest&, DeleteNetAttackWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetAttackWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNonlocalLoginPlacesResponse> DeleteNonlocalLoginPlacesOutcome;
                typedef std::future<DeleteNonlocalLoginPlacesOutcome> DeleteNonlocalLoginPlacesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteNonlocalLoginPlacesRequest&, DeleteNonlocalLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNonlocalLoginPlacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivilegeEventsResponse> DeletePrivilegeEventsOutcome;
                typedef std::future<DeletePrivilegeEventsOutcome> DeletePrivilegeEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeletePrivilegeEventsRequest&, DeletePrivilegeEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivilegeEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivilegeRulesResponse> DeletePrivilegeRulesOutcome;
                typedef std::future<DeletePrivilegeRulesOutcome> DeletePrivilegeRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeletePrivilegeRulesRequest&, DeletePrivilegeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivilegeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProtectDirResponse> DeleteProtectDirOutcome;
                typedef std::future<DeleteProtectDirOutcome> DeleteProtectDirOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteProtectDirRequest&, DeleteProtectDirOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProtectDirAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRaspRulesResponse> DeleteRaspRulesOutcome;
                typedef std::future<DeleteRaspRulesOutcome> DeleteRaspRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteRaspRulesRequest&, DeleteRaspRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRaspRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReverseShellEventsResponse> DeleteReverseShellEventsOutcome;
                typedef std::future<DeleteReverseShellEventsOutcome> DeleteReverseShellEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteReverseShellEventsRequest&, DeleteReverseShellEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReverseShellEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReverseShellRulesResponse> DeleteReverseShellRulesOutcome;
                typedef std::future<DeleteReverseShellRulesOutcome> DeleteReverseShellRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteReverseShellRulesRequest&, DeleteReverseShellRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReverseShellRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRiskDnsEventResponse> DeleteRiskDnsEventOutcome;
                typedef std::future<DeleteRiskDnsEventOutcome> DeleteRiskDnsEventOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteRiskDnsEventRequest&, DeleteRiskDnsEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRiskDnsEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRiskDnsPolicyResponse> DeleteRiskDnsPolicyOutcome;
                typedef std::future<DeleteRiskDnsPolicyOutcome> DeleteRiskDnsPolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteRiskDnsPolicyRequest&, DeleteRiskDnsPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRiskDnsPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScanTaskResponse> DeleteScanTaskOutcome;
                typedef std::future<DeleteScanTaskOutcome> DeleteScanTaskOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteScanTaskRequest&, DeleteScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSearchTemplateResponse> DeleteSearchTemplateOutcome;
                typedef std::future<DeleteSearchTemplateOutcome> DeleteSearchTemplateOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteSearchTemplateRequest&, DeleteSearchTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSearchTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTagsResponse> DeleteTagsOutcome;
                typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteTagsRequest&, DeleteTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebHookPolicyResponse> DeleteWebHookPolicyOutcome;
                typedef std::future<DeleteWebHookPolicyOutcome> DeleteWebHookPolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteWebHookPolicyRequest&, DeleteWebHookPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebHookPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebHookReceiverResponse> DeleteWebHookReceiverOutcome;
                typedef std::future<DeleteWebHookReceiverOutcome> DeleteWebHookReceiverOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteWebHookReceiverRequest&, DeleteWebHookReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebHookReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebHookRuleResponse> DeleteWebHookRuleOutcome;
                typedef std::future<DeleteWebHookRuleOutcome> DeleteWebHookRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteWebHookRuleRequest&, DeleteWebHookRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebHookRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebPageEventLogResponse> DeleteWebPageEventLogOutcome;
                typedef std::future<DeleteWebPageEventLogOutcome> DeleteWebPageEventLogOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteWebPageEventLogRequest&, DeleteWebPageEventLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebPageEventLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeABTestConfigResponse> DescribeABTestConfigOutcome;
                typedef std::future<DescribeABTestConfigOutcome> DescribeABTestConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeABTestConfigRequest&, DescribeABTestConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeABTestConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAESKeyResponse> DescribeAESKeyOutcome;
                typedef std::future<DescribeAESKeyOutcome> DescribeAESKeyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAESKeyRequest&, DescribeAESKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAESKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountStatisticsResponse> DescribeAccountStatisticsOutcome;
                typedef std::future<DescribeAccountStatisticsOutcome> DescribeAccountStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAccountStatisticsRequest&, DescribeAccountStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentInstallCommandResponse> DescribeAgentInstallCommandOutcome;
                typedef std::future<DescribeAgentInstallCommandOutcome> DescribeAgentInstallCommandOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAgentInstallCommandRequest&, DescribeAgentInstallCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentInstallCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentInstallationTokenResponse> DescribeAgentInstallationTokenOutcome;
                typedef std::future<DescribeAgentInstallationTokenOutcome> DescribeAgentInstallationTokenOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAgentInstallationTokenRequest&, DescribeAgentInstallationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentInstallationTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmIncidentNodesResponse> DescribeAlarmIncidentNodesOutcome;
                typedef std::future<DescribeAlarmIncidentNodesOutcome> DescribeAlarmIncidentNodesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAlarmIncidentNodesRequest&, DescribeAlarmIncidentNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmIncidentNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmVertexIdResponse> DescribeAlarmVertexIdOutcome;
                typedef std::future<DescribeAlarmVertexIdOutcome> DescribeAlarmVertexIdOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAlarmVertexIdRequest&, DescribeAlarmVertexIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmVertexIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetAppCountResponse> DescribeAssetAppCountOutcome;
                typedef std::future<DescribeAssetAppCountOutcome> DescribeAssetAppCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetAppCountRequest&, DescribeAssetAppCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetAppCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetAppListResponse> DescribeAssetAppListOutcome;
                typedef std::future<DescribeAssetAppListOutcome> DescribeAssetAppListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetAppListRequest&, DescribeAssetAppListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetAppListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetAppProcessListResponse> DescribeAssetAppProcessListOutcome;
                typedef std::future<DescribeAssetAppProcessListOutcome> DescribeAssetAppProcessListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetAppProcessListRequest&, DescribeAssetAppProcessListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetAppProcessListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetCoreModuleInfoResponse> DescribeAssetCoreModuleInfoOutcome;
                typedef std::future<DescribeAssetCoreModuleInfoOutcome> DescribeAssetCoreModuleInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetCoreModuleInfoRequest&, DescribeAssetCoreModuleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetCoreModuleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetCoreModuleListResponse> DescribeAssetCoreModuleListOutcome;
                typedef std::future<DescribeAssetCoreModuleListOutcome> DescribeAssetCoreModuleListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetCoreModuleListRequest&, DescribeAssetCoreModuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetCoreModuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetDatabaseCountResponse> DescribeAssetDatabaseCountOutcome;
                typedef std::future<DescribeAssetDatabaseCountOutcome> DescribeAssetDatabaseCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetDatabaseCountRequest&, DescribeAssetDatabaseCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDatabaseCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetDatabaseInfoResponse> DescribeAssetDatabaseInfoOutcome;
                typedef std::future<DescribeAssetDatabaseInfoOutcome> DescribeAssetDatabaseInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetDatabaseInfoRequest&, DescribeAssetDatabaseInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDatabaseInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetDatabaseListResponse> DescribeAssetDatabaseListOutcome;
                typedef std::future<DescribeAssetDatabaseListOutcome> DescribeAssetDatabaseListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetDatabaseListRequest&, DescribeAssetDatabaseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDatabaseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetDiskListResponse> DescribeAssetDiskListOutcome;
                typedef std::future<DescribeAssetDiskListOutcome> DescribeAssetDiskListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetDiskListRequest&, DescribeAssetDiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetEnvListResponse> DescribeAssetEnvListOutcome;
                typedef std::future<DescribeAssetEnvListOutcome> DescribeAssetEnvListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetEnvListRequest&, DescribeAssetEnvListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetEnvListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetHostTotalCountResponse> DescribeAssetHostTotalCountOutcome;
                typedef std::future<DescribeAssetHostTotalCountOutcome> DescribeAssetHostTotalCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetHostTotalCountRequest&, DescribeAssetHostTotalCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetHostTotalCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetInfoResponse> DescribeAssetInfoOutcome;
                typedef std::future<DescribeAssetInfoOutcome> DescribeAssetInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetInfoRequest&, DescribeAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetInitServiceListResponse> DescribeAssetInitServiceListOutcome;
                typedef std::future<DescribeAssetInitServiceListOutcome> DescribeAssetInitServiceListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetInitServiceListRequest&, DescribeAssetInitServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetInitServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetJarInfoResponse> DescribeAssetJarInfoOutcome;
                typedef std::future<DescribeAssetJarInfoOutcome> DescribeAssetJarInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetJarInfoRequest&, DescribeAssetJarInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetJarInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetJarListResponse> DescribeAssetJarListOutcome;
                typedef std::future<DescribeAssetJarListOutcome> DescribeAssetJarListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetJarListRequest&, DescribeAssetJarListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetJarListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetLoadInfoResponse> DescribeAssetLoadInfoOutcome;
                typedef std::future<DescribeAssetLoadInfoOutcome> DescribeAssetLoadInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetLoadInfoRequest&, DescribeAssetLoadInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetLoadInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetMachineDetailResponse> DescribeAssetMachineDetailOutcome;
                typedef std::future<DescribeAssetMachineDetailOutcome> DescribeAssetMachineDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetMachineDetailRequest&, DescribeAssetMachineDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetMachineDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetMachineListResponse> DescribeAssetMachineListOutcome;
                typedef std::future<DescribeAssetMachineListOutcome> DescribeAssetMachineListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetMachineListRequest&, DescribeAssetMachineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetMachineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetMachineTagTopResponse> DescribeAssetMachineTagTopOutcome;
                typedef std::future<DescribeAssetMachineTagTopOutcome> DescribeAssetMachineTagTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetMachineTagTopRequest&, DescribeAssetMachineTagTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetMachineTagTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetPlanTaskListResponse> DescribeAssetPlanTaskListOutcome;
                typedef std::future<DescribeAssetPlanTaskListOutcome> DescribeAssetPlanTaskListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetPlanTaskListRequest&, DescribeAssetPlanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetPlanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetPortCountResponse> DescribeAssetPortCountOutcome;
                typedef std::future<DescribeAssetPortCountOutcome> DescribeAssetPortCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetPortCountRequest&, DescribeAssetPortCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetPortCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetPortInfoListResponse> DescribeAssetPortInfoListOutcome;
                typedef std::future<DescribeAssetPortInfoListOutcome> DescribeAssetPortInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetPortInfoListRequest&, DescribeAssetPortInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetPortInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetProcessCountResponse> DescribeAssetProcessCountOutcome;
                typedef std::future<DescribeAssetProcessCountOutcome> DescribeAssetProcessCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetProcessCountRequest&, DescribeAssetProcessCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetProcessCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetProcessInfoListResponse> DescribeAssetProcessInfoListOutcome;
                typedef std::future<DescribeAssetProcessInfoListOutcome> DescribeAssetProcessInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetProcessInfoListRequest&, DescribeAssetProcessInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetProcessInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetRecentMachineInfoResponse> DescribeAssetRecentMachineInfoOutcome;
                typedef std::future<DescribeAssetRecentMachineInfoOutcome> DescribeAssetRecentMachineInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetRecentMachineInfoRequest&, DescribeAssetRecentMachineInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetRecentMachineInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetSystemPackageListResponse> DescribeAssetSystemPackageListOutcome;
                typedef std::future<DescribeAssetSystemPackageListOutcome> DescribeAssetSystemPackageListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetSystemPackageListRequest&, DescribeAssetSystemPackageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetSystemPackageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetTotalCountResponse> DescribeAssetTotalCountOutcome;
                typedef std::future<DescribeAssetTotalCountOutcome> DescribeAssetTotalCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetTotalCountRequest&, DescribeAssetTotalCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetTotalCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetTypeTopResponse> DescribeAssetTypeTopOutcome;
                typedef std::future<DescribeAssetTypeTopOutcome> DescribeAssetTypeTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetTypeTopRequest&, DescribeAssetTypeTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetTypeTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetTypesResponse> DescribeAssetTypesOutcome;
                typedef std::future<DescribeAssetTypesOutcome> DescribeAssetTypesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetTypesRequest&, DescribeAssetTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetUserCountResponse> DescribeAssetUserCountOutcome;
                typedef std::future<DescribeAssetUserCountOutcome> DescribeAssetUserCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetUserCountRequest&, DescribeAssetUserCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetUserCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetUserInfoResponse> DescribeAssetUserInfoOutcome;
                typedef std::future<DescribeAssetUserInfoOutcome> DescribeAssetUserInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetUserInfoRequest&, DescribeAssetUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetUserKeyListResponse> DescribeAssetUserKeyListOutcome;
                typedef std::future<DescribeAssetUserKeyListOutcome> DescribeAssetUserKeyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetUserKeyListRequest&, DescribeAssetUserKeyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetUserKeyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetUserListResponse> DescribeAssetUserListOutcome;
                typedef std::future<DescribeAssetUserListOutcome> DescribeAssetUserListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetUserListRequest&, DescribeAssetUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebAppCountResponse> DescribeAssetWebAppCountOutcome;
                typedef std::future<DescribeAssetWebAppCountOutcome> DescribeAssetWebAppCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebAppCountRequest&, DescribeAssetWebAppCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebAppCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebAppListResponse> DescribeAssetWebAppListOutcome;
                typedef std::future<DescribeAssetWebAppListOutcome> DescribeAssetWebAppListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebAppListRequest&, DescribeAssetWebAppListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebAppListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebAppPluginListResponse> DescribeAssetWebAppPluginListOutcome;
                typedef std::future<DescribeAssetWebAppPluginListOutcome> DescribeAssetWebAppPluginListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebAppPluginListRequest&, DescribeAssetWebAppPluginListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebAppPluginListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebFrameCountResponse> DescribeAssetWebFrameCountOutcome;
                typedef std::future<DescribeAssetWebFrameCountOutcome> DescribeAssetWebFrameCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebFrameCountRequest&, DescribeAssetWebFrameCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebFrameCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebFrameListResponse> DescribeAssetWebFrameListOutcome;
                typedef std::future<DescribeAssetWebFrameListOutcome> DescribeAssetWebFrameListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebFrameListRequest&, DescribeAssetWebFrameListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebFrameListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebLocationCountResponse> DescribeAssetWebLocationCountOutcome;
                typedef std::future<DescribeAssetWebLocationCountOutcome> DescribeAssetWebLocationCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebLocationCountRequest&, DescribeAssetWebLocationCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebLocationCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebLocationInfoResponse> DescribeAssetWebLocationInfoOutcome;
                typedef std::future<DescribeAssetWebLocationInfoOutcome> DescribeAssetWebLocationInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebLocationInfoRequest&, DescribeAssetWebLocationInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebLocationInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebLocationListResponse> DescribeAssetWebLocationListOutcome;
                typedef std::future<DescribeAssetWebLocationListOutcome> DescribeAssetWebLocationListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebLocationListRequest&, DescribeAssetWebLocationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebLocationListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebLocationPathListResponse> DescribeAssetWebLocationPathListOutcome;
                typedef std::future<DescribeAssetWebLocationPathListOutcome> DescribeAssetWebLocationPathListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebLocationPathListRequest&, DescribeAssetWebLocationPathListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebLocationPathListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebServiceCountResponse> DescribeAssetWebServiceCountOutcome;
                typedef std::future<DescribeAssetWebServiceCountOutcome> DescribeAssetWebServiceCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebServiceCountRequest&, DescribeAssetWebServiceCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebServiceCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebServiceInfoListResponse> DescribeAssetWebServiceInfoListOutcome;
                typedef std::future<DescribeAssetWebServiceInfoListOutcome> DescribeAssetWebServiceInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebServiceInfoListRequest&, DescribeAssetWebServiceInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebServiceInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebServiceProcessListResponse> DescribeAssetWebServiceProcessListOutcome;
                typedef std::future<DescribeAssetWebServiceProcessListOutcome> DescribeAssetWebServiceProcessListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebServiceProcessListRequest&, DescribeAssetWebServiceProcessListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebServiceProcessListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackEventInfoResponse> DescribeAttackEventInfoOutcome;
                typedef std::future<DescribeAttackEventInfoOutcome> DescribeAttackEventInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackEventInfoRequest&, DescribeAttackEventInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackEventInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackEventsResponse> DescribeAttackEventsOutcome;
                typedef std::future<DescribeAttackEventsOutcome> DescribeAttackEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackEventsRequest&, DescribeAttackEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackStatisticsResponse> DescribeAttackStatisticsOutcome;
                typedef std::future<DescribeAttackStatisticsOutcome> DescribeAttackStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackStatisticsRequest&, DescribeAttackStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackTopResponse> DescribeAttackTopOutcome;
                typedef std::future<DescribeAttackTopOutcome> DescribeAttackTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackTopRequest&, DescribeAttackTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackTrendsResponse> DescribeAttackTrendsOutcome;
                typedef std::future<DescribeAttackTrendsOutcome> DescribeAttackTrendsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackTrendsRequest&, DescribeAttackTrendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackTrendsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackVulTypeListResponse> DescribeAttackVulTypeListOutcome;
                typedef std::future<DescribeAttackVulTypeListOutcome> DescribeAttackVulTypeListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackVulTypeListRequest&, DescribeAttackVulTypeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackVulTypeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailableExpertServiceDetailResponse> DescribeAvailableExpertServiceDetailOutcome;
                typedef std::future<DescribeAvailableExpertServiceDetailOutcome> DescribeAvailableExpertServiceDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAvailableExpertServiceDetailRequest&, DescribeAvailableExpertServiceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableExpertServiceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBanModeResponse> DescribeBanModeOutcome;
                typedef std::future<DescribeBanModeOutcome> DescribeBanModeOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBanModeRequest&, DescribeBanModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBanModeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBanRegionsResponse> DescribeBanRegionsOutcome;
                typedef std::future<DescribeBanRegionsOutcome> DescribeBanRegionsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBanRegionsRequest&, DescribeBanRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBanRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBanStatusResponse> DescribeBanStatusOutcome;
                typedef std::future<DescribeBanStatusOutcome> DescribeBanStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBanStatusRequest&, DescribeBanStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBanStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBanWhiteListResponse> DescribeBanWhiteListOutcome;
                typedef std::future<DescribeBanWhiteListOutcome> DescribeBanWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBanWhiteListRequest&, DescribeBanWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBanWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineAnalysisDataResponse> DescribeBaselineAnalysisDataOutcome;
                typedef std::future<DescribeBaselineAnalysisDataOutcome> DescribeBaselineAnalysisDataOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineAnalysisDataRequest&, DescribeBaselineAnalysisDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineAnalysisDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineBasicInfoResponse> DescribeBaselineBasicInfoOutcome;
                typedef std::future<DescribeBaselineBasicInfoOutcome> DescribeBaselineBasicInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineBasicInfoRequest&, DescribeBaselineBasicInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineBasicInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineDefaultStrategyListResponse> DescribeBaselineDefaultStrategyListOutcome;
                typedef std::future<DescribeBaselineDefaultStrategyListOutcome> DescribeBaselineDefaultStrategyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineDefaultStrategyListRequest&, DescribeBaselineDefaultStrategyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineDefaultStrategyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineDetailResponse> DescribeBaselineDetailOutcome;
                typedef std::future<DescribeBaselineDetailOutcome> DescribeBaselineDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineDetailRequest&, DescribeBaselineDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineDetectListResponse> DescribeBaselineDetectListOutcome;
                typedef std::future<DescribeBaselineDetectListOutcome> DescribeBaselineDetectListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineDetectListRequest&, DescribeBaselineDetectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineDetectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineDetectOverviewResponse> DescribeBaselineDetectOverviewOutcome;
                typedef std::future<DescribeBaselineDetectOverviewOutcome> DescribeBaselineDetectOverviewOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineDetectOverviewRequest&, DescribeBaselineDetectOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineDetectOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineDownloadListResponse> DescribeBaselineDownloadListOutcome;
                typedef std::future<DescribeBaselineDownloadListOutcome> DescribeBaselineDownloadListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineDownloadListRequest&, DescribeBaselineDownloadListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineDownloadListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineEffectHostListResponse> DescribeBaselineEffectHostListOutcome;
                typedef std::future<DescribeBaselineEffectHostListOutcome> DescribeBaselineEffectHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineEffectHostListRequest&, DescribeBaselineEffectHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineEffectHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineFixListResponse> DescribeBaselineFixListOutcome;
                typedef std::future<DescribeBaselineFixListOutcome> DescribeBaselineFixListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineFixListRequest&, DescribeBaselineFixListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineFixListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineHostDetectListResponse> DescribeBaselineHostDetectListOutcome;
                typedef std::future<DescribeBaselineHostDetectListOutcome> DescribeBaselineHostDetectListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineHostDetectListRequest&, DescribeBaselineHostDetectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineHostDetectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineHostIgnoreListResponse> DescribeBaselineHostIgnoreListOutcome;
                typedef std::future<DescribeBaselineHostIgnoreListOutcome> DescribeBaselineHostIgnoreListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineHostIgnoreListRequest&, DescribeBaselineHostIgnoreListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineHostIgnoreListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineHostRiskTopResponse> DescribeBaselineHostRiskTopOutcome;
                typedef std::future<DescribeBaselineHostRiskTopOutcome> DescribeBaselineHostRiskTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineHostRiskTopRequest&, DescribeBaselineHostRiskTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineHostRiskTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineHostTopResponse> DescribeBaselineHostTopOutcome;
                typedef std::future<DescribeBaselineHostTopOutcome> DescribeBaselineHostTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineHostTopRequest&, DescribeBaselineHostTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineHostTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineItemDetectListResponse> DescribeBaselineItemDetectListOutcome;
                typedef std::future<DescribeBaselineItemDetectListOutcome> DescribeBaselineItemDetectListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineItemDetectListRequest&, DescribeBaselineItemDetectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineItemDetectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineItemIgnoreListResponse> DescribeBaselineItemIgnoreListOutcome;
                typedef std::future<DescribeBaselineItemIgnoreListOutcome> DescribeBaselineItemIgnoreListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineItemIgnoreListRequest&, DescribeBaselineItemIgnoreListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineItemIgnoreListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineItemInfoResponse> DescribeBaselineItemInfoOutcome;
                typedef std::future<DescribeBaselineItemInfoOutcome> DescribeBaselineItemInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineItemInfoRequest&, DescribeBaselineItemInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineItemInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineItemListResponse> DescribeBaselineItemListOutcome;
                typedef std::future<DescribeBaselineItemListOutcome> DescribeBaselineItemListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineItemListRequest&, DescribeBaselineItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineItemRiskTopResponse> DescribeBaselineItemRiskTopOutcome;
                typedef std::future<DescribeBaselineItemRiskTopOutcome> DescribeBaselineItemRiskTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineItemRiskTopRequest&, DescribeBaselineItemRiskTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineItemRiskTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineListResponse> DescribeBaselineListOutcome;
                typedef std::future<DescribeBaselineListOutcome> DescribeBaselineListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineListRequest&, DescribeBaselineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselinePolicyListResponse> DescribeBaselinePolicyListOutcome;
                typedef std::future<DescribeBaselinePolicyListOutcome> DescribeBaselinePolicyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselinePolicyListRequest&, DescribeBaselinePolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselinePolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineRuleResponse> DescribeBaselineRuleOutcome;
                typedef std::future<DescribeBaselineRuleOutcome> DescribeBaselineRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineRuleRequest&, DescribeBaselineRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineRuleCategoryListResponse> DescribeBaselineRuleCategoryListOutcome;
                typedef std::future<DescribeBaselineRuleCategoryListOutcome> DescribeBaselineRuleCategoryListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineRuleCategoryListRequest&, DescribeBaselineRuleCategoryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineRuleCategoryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineRuleDetectListResponse> DescribeBaselineRuleDetectListOutcome;
                typedef std::future<DescribeBaselineRuleDetectListOutcome> DescribeBaselineRuleDetectListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineRuleDetectListRequest&, DescribeBaselineRuleDetectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineRuleDetectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineRuleIgnoreListResponse> DescribeBaselineRuleIgnoreListOutcome;
                typedef std::future<DescribeBaselineRuleIgnoreListOutcome> DescribeBaselineRuleIgnoreListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineRuleIgnoreListRequest&, DescribeBaselineRuleIgnoreListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineRuleIgnoreListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineRuleListResponse> DescribeBaselineRuleListOutcome;
                typedef std::future<DescribeBaselineRuleListOutcome> DescribeBaselineRuleListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineRuleListRequest&, DescribeBaselineRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineScanScheduleResponse> DescribeBaselineScanScheduleOutcome;
                typedef std::future<DescribeBaselineScanScheduleOutcome> DescribeBaselineScanScheduleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineScanScheduleRequest&, DescribeBaselineScanScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineScanScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineStrategyDetailResponse> DescribeBaselineStrategyDetailOutcome;
                typedef std::future<DescribeBaselineStrategyDetailOutcome> DescribeBaselineStrategyDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineStrategyDetailRequest&, DescribeBaselineStrategyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineStrategyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineStrategyListResponse> DescribeBaselineStrategyListOutcome;
                typedef std::future<DescribeBaselineStrategyListOutcome> DescribeBaselineStrategyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineStrategyListRequest&, DescribeBaselineStrategyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineStrategyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineTopResponse> DescribeBaselineTopOutcome;
                typedef std::future<DescribeBaselineTopOutcome> DescribeBaselineTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineTopRequest&, DescribeBaselineTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineWeakPasswordListResponse> DescribeBaselineWeakPasswordListOutcome;
                typedef std::future<DescribeBaselineWeakPasswordListOutcome> DescribeBaselineWeakPasswordListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineWeakPasswordListRequest&, DescribeBaselineWeakPasswordListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineWeakPasswordListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBashEventsResponse> DescribeBashEventsOutcome;
                typedef std::future<DescribeBashEventsOutcome> DescribeBashEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBashEventsRequest&, DescribeBashEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBashEventsInfoResponse> DescribeBashEventsInfoOutcome;
                typedef std::future<DescribeBashEventsInfoOutcome> DescribeBashEventsInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBashEventsInfoRequest&, DescribeBashEventsInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashEventsInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBashEventsInfoNewResponse> DescribeBashEventsInfoNewOutcome;
                typedef std::future<DescribeBashEventsInfoNewOutcome> DescribeBashEventsInfoNewOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBashEventsInfoNewRequest&, DescribeBashEventsInfoNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashEventsInfoNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBashEventsNewResponse> DescribeBashEventsNewOutcome;
                typedef std::future<DescribeBashEventsNewOutcome> DescribeBashEventsNewOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBashEventsNewRequest&, DescribeBashEventsNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashEventsNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBashPoliciesResponse> DescribeBashPoliciesOutcome;
                typedef std::future<DescribeBashPoliciesOutcome> DescribeBashPoliciesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBashPoliciesRequest&, DescribeBashPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBashRulesResponse> DescribeBashRulesOutcome;
                typedef std::future<DescribeBashRulesOutcome> DescribeBashRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBashRulesRequest&, DescribeBashRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBruteAttackListResponse> DescribeBruteAttackListOutcome;
                typedef std::future<DescribeBruteAttackListOutcome> DescribeBruteAttackListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBruteAttackListRequest&, DescribeBruteAttackListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBruteAttackListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBruteAttackRulesResponse> DescribeBruteAttackRulesOutcome;
                typedef std::future<DescribeBruteAttackRulesOutcome> DescribeBruteAttackRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBruteAttackRulesRequest&, DescribeBruteAttackRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBruteAttackRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCanFixVulMachineResponse> DescribeCanFixVulMachineOutcome;
                typedef std::future<DescribeCanFixVulMachineOutcome> DescribeCanFixVulMachineOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeCanFixVulMachineRequest&, DescribeCanFixVulMachineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCanFixVulMachineAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCanNotSeparateMachineResponse> DescribeCanNotSeparateMachineOutcome;
                typedef std::future<DescribeCanNotSeparateMachineOutcome> DescribeCanNotSeparateMachineOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeCanNotSeparateMachineRequest&, DescribeCanNotSeparateMachineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCanNotSeparateMachineAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClientExceptionResponse> DescribeClientExceptionOutcome;
                typedef std::future<DescribeClientExceptionOutcome> DescribeClientExceptionOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeClientExceptionRequest&, DescribeClientExceptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientExceptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefenceEventDetailResponse> DescribeDefenceEventDetailOutcome;
                typedef std::future<DescribeDefenceEventDetailOutcome> DescribeDefenceEventDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeDefenceEventDetailRequest&, DescribeDefenceEventDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefenceEventDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDirectConnectInstallCommandResponse> DescribeDirectConnectInstallCommandOutcome;
                typedef std::future<DescribeDirectConnectInstallCommandOutcome> DescribeDirectConnectInstallCommandOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeDirectConnectInstallCommandRequest&, DescribeDirectConnectInstallCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectConnectInstallCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeESAggregationsResponse> DescribeESAggregationsOutcome;
                typedef std::future<DescribeESAggregationsOutcome> DescribeESAggregationsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeESAggregationsRequest&, DescribeESAggregationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeESAggregationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEmergencyResponseListResponse> DescribeEmergencyResponseListOutcome;
                typedef std::future<DescribeEmergencyResponseListOutcome> DescribeEmergencyResponseListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeEmergencyResponseListRequest&, DescribeEmergencyResponseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmergencyResponseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEmergencyVulListResponse> DescribeEmergencyVulListOutcome;
                typedef std::future<DescribeEmergencyVulListOutcome> DescribeEmergencyVulListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeEmergencyVulListRequest&, DescribeEmergencyVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmergencyVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventByTableResponse> DescribeEventByTableOutcome;
                typedef std::future<DescribeEventByTableOutcome> DescribeEventByTableOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeEventByTableRequest&, DescribeEventByTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventByTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExpertServiceListResponse> DescribeExpertServiceListOutcome;
                typedef std::future<DescribeExpertServiceListOutcome> DescribeExpertServiceListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeExpertServiceListRequest&, DescribeExpertServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpertServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExpertServiceOrderListResponse> DescribeExpertServiceOrderListOutcome;
                typedef std::future<DescribeExpertServiceOrderListOutcome> DescribeExpertServiceOrderListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeExpertServiceOrderListRequest&, DescribeExpertServiceOrderListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpertServiceOrderListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportMachinesResponse> DescribeExportMachinesOutcome;
                typedef std::future<DescribeExportMachinesOutcome> DescribeExportMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeExportMachinesRequest&, DescribeExportMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFastAnalysisResponse> DescribeFastAnalysisOutcome;
                typedef std::future<DescribeFastAnalysisOutcome> DescribeFastAnalysisOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeFastAnalysisRequest&, DescribeFastAnalysisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFastAnalysisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileTamperEventRuleInfoResponse> DescribeFileTamperEventRuleInfoOutcome;
                typedef std::future<DescribeFileTamperEventRuleInfoOutcome> DescribeFileTamperEventRuleInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeFileTamperEventRuleInfoRequest&, DescribeFileTamperEventRuleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileTamperEventRuleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileTamperEventsResponse> DescribeFileTamperEventsOutcome;
                typedef std::future<DescribeFileTamperEventsOutcome> DescribeFileTamperEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeFileTamperEventsRequest&, DescribeFileTamperEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileTamperEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileTamperRuleCountResponse> DescribeFileTamperRuleCountOutcome;
                typedef std::future<DescribeFileTamperRuleCountOutcome> DescribeFileTamperRuleCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeFileTamperRuleCountRequest&, DescribeFileTamperRuleCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileTamperRuleCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileTamperRuleInfoResponse> DescribeFileTamperRuleInfoOutcome;
                typedef std::future<DescribeFileTamperRuleInfoOutcome> DescribeFileTamperRuleInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeFileTamperRuleInfoRequest&, DescribeFileTamperRuleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileTamperRuleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileTamperRulesResponse> DescribeFileTamperRulesOutcome;
                typedef std::future<DescribeFileTamperRulesOutcome> DescribeFileTamperRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeFileTamperRulesRequest&, DescribeFileTamperRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileTamperRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGeneralStatResponse> DescribeGeneralStatOutcome;
                typedef std::future<DescribeGeneralStatOutcome> DescribeGeneralStatOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeGeneralStatRequest&, DescribeGeneralStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeneralStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHistoryAccountsResponse> DescribeHistoryAccountsOutcome;
                typedef std::future<DescribeHistoryAccountsOutcome> DescribeHistoryAccountsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeHistoryAccountsRequest&, DescribeHistoryAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHistoryServiceResponse> DescribeHistoryServiceOutcome;
                typedef std::future<DescribeHistoryServiceOutcome> DescribeHistoryServiceOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeHistoryServiceRequest&, DescribeHistoryServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostInfoResponse> DescribeHostInfoOutcome;
                typedef std::future<DescribeHostInfoOutcome> DescribeHostInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeHostInfoRequest&, DescribeHostInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostLoginListResponse> DescribeHostLoginListOutcome;
                typedef std::future<DescribeHostLoginListOutcome> DescribeHostLoginListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeHostLoginListRequest&, DescribeHostLoginListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostLoginListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHotVulTopResponse> DescribeHotVulTopOutcome;
                typedef std::future<DescribeHotVulTopOutcome> DescribeHotVulTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeHotVulTopRequest&, DescribeHotVulTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHotVulTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIgnoreBaselineRuleResponse> DescribeIgnoreBaselineRuleOutcome;
                typedef std::future<DescribeIgnoreBaselineRuleOutcome> DescribeIgnoreBaselineRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeIgnoreBaselineRuleRequest&, DescribeIgnoreBaselineRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIgnoreBaselineRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIgnoreHostAndItemConfigResponse> DescribeIgnoreHostAndItemConfigOutcome;
                typedef std::future<DescribeIgnoreHostAndItemConfigOutcome> DescribeIgnoreHostAndItemConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeIgnoreHostAndItemConfigRequest&, DescribeIgnoreHostAndItemConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIgnoreHostAndItemConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIgnoreRuleEffectHostListResponse> DescribeIgnoreRuleEffectHostListOutcome;
                typedef std::future<DescribeIgnoreRuleEffectHostListOutcome> DescribeIgnoreRuleEffectHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeIgnoreRuleEffectHostListRequest&, DescribeIgnoreRuleEffectHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIgnoreRuleEffectHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImportMachineInfoResponse> DescribeImportMachineInfoOutcome;
                typedef std::future<DescribeImportMachineInfoOutcome> DescribeImportMachineInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeImportMachineInfoRequest&, DescribeImportMachineInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImportMachineInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJavaMemShellInfoResponse> DescribeJavaMemShellInfoOutcome;
                typedef std::future<DescribeJavaMemShellInfoOutcome> DescribeJavaMemShellInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeJavaMemShellInfoRequest&, DescribeJavaMemShellInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJavaMemShellInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJavaMemShellListResponse> DescribeJavaMemShellListOutcome;
                typedef std::future<DescribeJavaMemShellListOutcome> DescribeJavaMemShellListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeJavaMemShellListRequest&, DescribeJavaMemShellListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJavaMemShellListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJavaMemShellPluginInfoResponse> DescribeJavaMemShellPluginInfoOutcome;
                typedef std::future<DescribeJavaMemShellPluginInfoOutcome> DescribeJavaMemShellPluginInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeJavaMemShellPluginInfoRequest&, DescribeJavaMemShellPluginInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJavaMemShellPluginInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJavaMemShellPluginListResponse> DescribeJavaMemShellPluginListOutcome;
                typedef std::future<DescribeJavaMemShellPluginListOutcome> DescribeJavaMemShellPluginListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeJavaMemShellPluginListRequest&, DescribeJavaMemShellPluginListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJavaMemShellPluginListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseResponse> DescribeLicenseOutcome;
                typedef std::future<DescribeLicenseOutcome> DescribeLicenseOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLicenseRequest&, DescribeLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseBindListResponse> DescribeLicenseBindListOutcome;
                typedef std::future<DescribeLicenseBindListOutcome> DescribeLicenseBindListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLicenseBindListRequest&, DescribeLicenseBindListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseBindListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseBindScheduleResponse> DescribeLicenseBindScheduleOutcome;
                typedef std::future<DescribeLicenseBindScheduleOutcome> DescribeLicenseBindScheduleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLicenseBindScheduleRequest&, DescribeLicenseBindScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseBindScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseGeneralResponse> DescribeLicenseGeneralOutcome;
                typedef std::future<DescribeLicenseGeneralOutcome> DescribeLicenseGeneralOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLicenseGeneralRequest&, DescribeLicenseGeneralOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseGeneralAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseListResponse> DescribeLicenseListOutcome;
                typedef std::future<DescribeLicenseListOutcome> DescribeLicenseListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLicenseListRequest&, DescribeLicenseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseWhiteConfigResponse> DescribeLicenseWhiteConfigOutcome;
                typedef std::future<DescribeLicenseWhiteConfigOutcome> DescribeLicenseWhiteConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLicenseWhiteConfigRequest&, DescribeLicenseWhiteConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseWhiteConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogDeliveryKafkaOptionsResponse> DescribeLogDeliveryKafkaOptionsOutcome;
                typedef std::future<DescribeLogDeliveryKafkaOptionsOutcome> DescribeLogDeliveryKafkaOptionsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogDeliveryKafkaOptionsRequest&, DescribeLogDeliveryKafkaOptionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogDeliveryKafkaOptionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogExportsResponse> DescribeLogExportsOutcome;
                typedef std::future<DescribeLogExportsOutcome> DescribeLogExportsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogExportsRequest&, DescribeLogExportsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogExportsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogHistogramResponse> DescribeLogHistogramOutcome;
                typedef std::future<DescribeLogHistogramOutcome> DescribeLogHistogramOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogHistogramRequest&, DescribeLogHistogramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogHistogramAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogIndexResponse> DescribeLogIndexOutcome;
                typedef std::future<DescribeLogIndexOutcome> DescribeLogIndexOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogIndexRequest&, DescribeLogIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogKafkaDeliverInfoResponse> DescribeLogKafkaDeliverInfoOutcome;
                typedef std::future<DescribeLogKafkaDeliverInfoOutcome> DescribeLogKafkaDeliverInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogKafkaDeliverInfoRequest&, DescribeLogKafkaDeliverInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogKafkaDeliverInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogStorageConfigResponse> DescribeLogStorageConfigOutcome;
                typedef std::future<DescribeLogStorageConfigOutcome> DescribeLogStorageConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogStorageConfigRequest&, DescribeLogStorageConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogStorageConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogStorageRecordResponse> DescribeLogStorageRecordOutcome;
                typedef std::future<DescribeLogStorageRecordOutcome> DescribeLogStorageRecordOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogStorageRecordRequest&, DescribeLogStorageRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogStorageRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogStorageStatisticResponse> DescribeLogStorageStatisticOutcome;
                typedef std::future<DescribeLogStorageStatisticOutcome> DescribeLogStorageStatisticOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogStorageStatisticRequest&, DescribeLogStorageStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogStorageStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogTypeResponse> DescribeLogTypeOutcome;
                typedef std::future<DescribeLogTypeOutcome> DescribeLogTypeOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogTypeRequest&, DescribeLogTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginWhiteCombinedListResponse> DescribeLoginWhiteCombinedListOutcome;
                typedef std::future<DescribeLoginWhiteCombinedListOutcome> DescribeLoginWhiteCombinedListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLoginWhiteCombinedListRequest&, DescribeLoginWhiteCombinedListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginWhiteCombinedListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginWhiteHostListResponse> DescribeLoginWhiteHostListOutcome;
                typedef std::future<DescribeLoginWhiteHostListOutcome> DescribeLoginWhiteHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLoginWhiteHostListRequest&, DescribeLoginWhiteHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginWhiteHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginWhiteListResponse> DescribeLoginWhiteListOutcome;
                typedef std::future<DescribeLoginWhiteListOutcome> DescribeLoginWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLoginWhiteListRequest&, DescribeLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineClearHistoryResponse> DescribeMachineClearHistoryOutcome;
                typedef std::future<DescribeMachineClearHistoryOutcome> DescribeMachineClearHistoryOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineClearHistoryRequest&, DescribeMachineClearHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineClearHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineDefenseCntResponse> DescribeMachineDefenseCntOutcome;
                typedef std::future<DescribeMachineDefenseCntOutcome> DescribeMachineDefenseCntOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineDefenseCntRequest&, DescribeMachineDefenseCntOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineDefenseCntAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineFileTamperRulesResponse> DescribeMachineFileTamperRulesOutcome;
                typedef std::future<DescribeMachineFileTamperRulesOutcome> DescribeMachineFileTamperRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineFileTamperRulesRequest&, DescribeMachineFileTamperRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineFileTamperRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineGeneralResponse> DescribeMachineGeneralOutcome;
                typedef std::future<DescribeMachineGeneralOutcome> DescribeMachineGeneralOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineGeneralRequest&, DescribeMachineGeneralOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineGeneralAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineInfoResponse> DescribeMachineInfoOutcome;
                typedef std::future<DescribeMachineInfoOutcome> DescribeMachineInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineInfoRequest&, DescribeMachineInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineLicenseDetailResponse> DescribeMachineLicenseDetailOutcome;
                typedef std::future<DescribeMachineLicenseDetailOutcome> DescribeMachineLicenseDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineLicenseDetailRequest&, DescribeMachineLicenseDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineLicenseDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineListResponse> DescribeMachineListOutcome;
                typedef std::future<DescribeMachineListOutcome> DescribeMachineListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineListRequest&, DescribeMachineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineOsListResponse> DescribeMachineOsListOutcome;
                typedef std::future<DescribeMachineOsListOutcome> DescribeMachineOsListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineOsListRequest&, DescribeMachineOsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineOsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineRegionListResponse> DescribeMachineRegionListOutcome;
                typedef std::future<DescribeMachineRegionListOutcome> DescribeMachineRegionListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineRegionListRequest&, DescribeMachineRegionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineRegionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineRegionsResponse> DescribeMachineRegionsOutcome;
                typedef std::future<DescribeMachineRegionsOutcome> DescribeMachineRegionsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineRegionsRequest&, DescribeMachineRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineRiskCntResponse> DescribeMachineRiskCntOutcome;
                typedef std::future<DescribeMachineRiskCntOutcome> DescribeMachineRiskCntOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineRiskCntRequest&, DescribeMachineRiskCntOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineRiskCntAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineSnapshotResponse> DescribeMachineSnapshotOutcome;
                typedef std::future<DescribeMachineSnapshotOutcome> DescribeMachineSnapshotOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineSnapshotRequest&, DescribeMachineSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachinesResponse> DescribeMachinesOutcome;
                typedef std::future<DescribeMachinesOutcome> DescribeMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachinesRequest&, DescribeMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachinesSimpleResponse> DescribeMachinesSimpleOutcome;
                typedef std::future<DescribeMachinesSimpleOutcome> DescribeMachinesSimpleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachinesSimpleRequest&, DescribeMachinesSimpleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachinesSimpleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalWareListResponse> DescribeMalWareListOutcome;
                typedef std::future<DescribeMalWareListOutcome> DescribeMalWareListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalWareListRequest&, DescribeMalWareListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalWareListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMaliciousRequestWhiteListResponse> DescribeMaliciousRequestWhiteListOutcome;
                typedef std::future<DescribeMaliciousRequestWhiteListOutcome> DescribeMaliciousRequestWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMaliciousRequestWhiteListRequest&, DescribeMaliciousRequestWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaliciousRequestWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareFileResponse> DescribeMalwareFileOutcome;
                typedef std::future<DescribeMalwareFileOutcome> DescribeMalwareFileOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareFileRequest&, DescribeMalwareFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareInfoResponse> DescribeMalwareInfoOutcome;
                typedef std::future<DescribeMalwareInfoOutcome> DescribeMalwareInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareInfoRequest&, DescribeMalwareInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareRiskOverviewResponse> DescribeMalwareRiskOverviewOutcome;
                typedef std::future<DescribeMalwareRiskOverviewOutcome> DescribeMalwareRiskOverviewOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareRiskOverviewRequest&, DescribeMalwareRiskOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareRiskOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareRiskWarningResponse> DescribeMalwareRiskWarningOutcome;
                typedef std::future<DescribeMalwareRiskWarningOutcome> DescribeMalwareRiskWarningOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareRiskWarningRequest&, DescribeMalwareRiskWarningOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareRiskWarningAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareTimingScanSettingResponse> DescribeMalwareTimingScanSettingOutcome;
                typedef std::future<DescribeMalwareTimingScanSettingOutcome> DescribeMalwareTimingScanSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareTimingScanSettingRequest&, DescribeMalwareTimingScanSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareTimingScanSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareWhiteListResponse> DescribeMalwareWhiteListOutcome;
                typedef std::future<DescribeMalwareWhiteListOutcome> DescribeMalwareWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareWhiteListRequest&, DescribeMalwareWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareWhiteListAffectListResponse> DescribeMalwareWhiteListAffectListOutcome;
                typedef std::future<DescribeMalwareWhiteListAffectListOutcome> DescribeMalwareWhiteListAffectListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareWhiteListAffectListRequest&, DescribeMalwareWhiteListAffectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareWhiteListAffectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMonthInspectionReportResponse> DescribeMonthInspectionReportOutcome;
                typedef std::future<DescribeMonthInspectionReportOutcome> DescribeMonthInspectionReportOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMonthInspectionReportRequest&, DescribeMonthInspectionReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonthInspectionReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetAttackSettingResponse> DescribeNetAttackSettingOutcome;
                typedef std::future<DescribeNetAttackSettingOutcome> DescribeNetAttackSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeNetAttackSettingRequest&, DescribeNetAttackSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetAttackSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetAttackWhiteListResponse> DescribeNetAttackWhiteListOutcome;
                typedef std::future<DescribeNetAttackWhiteListOutcome> DescribeNetAttackWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeNetAttackWhiteListRequest&, DescribeNetAttackWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetAttackWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOpenPortStatisticsResponse> DescribeOpenPortStatisticsOutcome;
                typedef std::future<DescribeOpenPortStatisticsOutcome> DescribeOpenPortStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeOpenPortStatisticsRequest&, DescribeOpenPortStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpenPortStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewStatisticsResponse> DescribeOverviewStatisticsOutcome;
                typedef std::future<DescribeOverviewStatisticsOutcome> DescribeOverviewStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeOverviewStatisticsRequest&, DescribeOverviewStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivilegeEventInfoResponse> DescribePrivilegeEventInfoOutcome;
                typedef std::future<DescribePrivilegeEventInfoOutcome> DescribePrivilegeEventInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribePrivilegeEventInfoRequest&, DescribePrivilegeEventInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivilegeEventInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivilegeEventsResponse> DescribePrivilegeEventsOutcome;
                typedef std::future<DescribePrivilegeEventsOutcome> DescribePrivilegeEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribePrivilegeEventsRequest&, DescribePrivilegeEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivilegeEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivilegeRulesResponse> DescribePrivilegeRulesOutcome;
                typedef std::future<DescribePrivilegeRulesOutcome> DescribePrivilegeRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribePrivilegeRulesRequest&, DescribePrivilegeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivilegeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProVersionInfoResponse> DescribeProVersionInfoOutcome;
                typedef std::future<DescribeProVersionInfoOutcome> DescribeProVersionInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeProVersionInfoRequest&, DescribeProVersionInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProVersionInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProVersionStatusResponse> DescribeProVersionStatusOutcome;
                typedef std::future<DescribeProVersionStatusOutcome> DescribeProVersionStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeProVersionStatusRequest&, DescribeProVersionStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProVersionStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProcessStatisticsResponse> DescribeProcessStatisticsOutcome;
                typedef std::future<DescribeProcessStatisticsOutcome> DescribeProcessStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeProcessStatisticsRequest&, DescribeProcessStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductStatusResponse> DescribeProductStatusOutcome;
                typedef std::future<DescribeProductStatusOutcome> DescribeProductStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeProductStatusRequest&, DescribeProductStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProtectDirListResponse> DescribeProtectDirListOutcome;
                typedef std::future<DescribeProtectDirListOutcome> DescribeProtectDirListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeProtectDirListRequest&, DescribeProtectDirListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectDirListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProtectDirRelatedServerResponse> DescribeProtectDirRelatedServerOutcome;
                typedef std::future<DescribeProtectDirRelatedServerOutcome> DescribeProtectDirRelatedServerOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeProtectDirRelatedServerRequest&, DescribeProtectDirRelatedServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectDirRelatedServerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProtectNetListResponse> DescribeProtectNetListOutcome;
                typedef std::future<DescribeProtectNetListOutcome> DescribeProtectNetListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeProtectNetListRequest&, DescribeProtectNetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectNetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicProxyInstallCommandResponse> DescribePublicProxyInstallCommandOutcome;
                typedef std::future<DescribePublicProxyInstallCommandOutcome> DescribePublicProxyInstallCommandOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribePublicProxyInstallCommandRequest&, DescribePublicProxyInstallCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicProxyInstallCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseBackupListResponse> DescribeRansomDefenseBackupListOutcome;
                typedef std::future<DescribeRansomDefenseBackupListOutcome> DescribeRansomDefenseBackupListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseBackupListRequest&, DescribeRansomDefenseBackupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseBackupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseEventsListResponse> DescribeRansomDefenseEventsListOutcome;
                typedef std::future<DescribeRansomDefenseEventsListOutcome> DescribeRansomDefenseEventsListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseEventsListRequest&, DescribeRansomDefenseEventsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseEventsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseMachineListResponse> DescribeRansomDefenseMachineListOutcome;
                typedef std::future<DescribeRansomDefenseMachineListOutcome> DescribeRansomDefenseMachineListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseMachineListRequest&, DescribeRansomDefenseMachineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseMachineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseMachineStrategyInfoResponse> DescribeRansomDefenseMachineStrategyInfoOutcome;
                typedef std::future<DescribeRansomDefenseMachineStrategyInfoOutcome> DescribeRansomDefenseMachineStrategyInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseMachineStrategyInfoRequest&, DescribeRansomDefenseMachineStrategyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseMachineStrategyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseRollBackTaskListResponse> DescribeRansomDefenseRollBackTaskListOutcome;
                typedef std::future<DescribeRansomDefenseRollBackTaskListOutcome> DescribeRansomDefenseRollBackTaskListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseRollBackTaskListRequest&, DescribeRansomDefenseRollBackTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseRollBackTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseStateResponse> DescribeRansomDefenseStateOutcome;
                typedef std::future<DescribeRansomDefenseStateOutcome> DescribeRansomDefenseStateOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseStateRequest&, DescribeRansomDefenseStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseStrategyDetailResponse> DescribeRansomDefenseStrategyDetailOutcome;
                typedef std::future<DescribeRansomDefenseStrategyDetailOutcome> DescribeRansomDefenseStrategyDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseStrategyDetailRequest&, DescribeRansomDefenseStrategyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseStrategyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseStrategyListResponse> DescribeRansomDefenseStrategyListOutcome;
                typedef std::future<DescribeRansomDefenseStrategyListOutcome> DescribeRansomDefenseStrategyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseStrategyListRequest&, DescribeRansomDefenseStrategyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseStrategyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseStrategyMachinesResponse> DescribeRansomDefenseStrategyMachinesOutcome;
                typedef std::future<DescribeRansomDefenseStrategyMachinesOutcome> DescribeRansomDefenseStrategyMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseStrategyMachinesRequest&, DescribeRansomDefenseStrategyMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseStrategyMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseTrendResponse> DescribeRansomDefenseTrendOutcome;
                typedef std::future<DescribeRansomDefenseTrendOutcome> DescribeRansomDefenseTrendOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseTrendRequest&, DescribeRansomDefenseTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRaspMaxCpuResponse> DescribeRaspMaxCpuOutcome;
                typedef std::future<DescribeRaspMaxCpuOutcome> DescribeRaspMaxCpuOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRaspMaxCpuRequest&, DescribeRaspMaxCpuOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRaspMaxCpuAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRaspRuleVulsResponse> DescribeRaspRuleVulsOutcome;
                typedef std::future<DescribeRaspRuleVulsOutcome> DescribeRaspRuleVulsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRaspRuleVulsRequest&, DescribeRaspRuleVulsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRaspRuleVulsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRaspRulesResponse> DescribeRaspRulesOutcome;
                typedef std::future<DescribeRaspRulesOutcome> DescribeRaspRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRaspRulesRequest&, DescribeRaspRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRaspRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecommendedProtectCpuResponse> DescribeRecommendedProtectCpuOutcome;
                typedef std::future<DescribeRecommendedProtectCpuOutcome> DescribeRecommendedProtectCpuOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRecommendedProtectCpuRequest&, DescribeRecommendedProtectCpuOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecommendedProtectCpuAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellEventInfoResponse> DescribeReverseShellEventInfoOutcome;
                typedef std::future<DescribeReverseShellEventInfoOutcome> DescribeReverseShellEventInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeReverseShellEventInfoRequest&, DescribeReverseShellEventInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellEventInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellEventsResponse> DescribeReverseShellEventsOutcome;
                typedef std::future<DescribeReverseShellEventsOutcome> DescribeReverseShellEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeReverseShellEventsRequest&, DescribeReverseShellEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellRulesResponse> DescribeReverseShellRulesOutcome;
                typedef std::future<DescribeReverseShellRulesOutcome> DescribeReverseShellRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeReverseShellRulesRequest&, DescribeReverseShellRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskBatchStatusResponse> DescribeRiskBatchStatusOutcome;
                typedef std::future<DescribeRiskBatchStatusOutcome> DescribeRiskBatchStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRiskBatchStatusRequest&, DescribeRiskBatchStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskBatchStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskDnsEventInfoResponse> DescribeRiskDnsEventInfoOutcome;
                typedef std::future<DescribeRiskDnsEventInfoOutcome> DescribeRiskDnsEventInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRiskDnsEventInfoRequest&, DescribeRiskDnsEventInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDnsEventInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskDnsEventListResponse> DescribeRiskDnsEventListOutcome;
                typedef std::future<DescribeRiskDnsEventListOutcome> DescribeRiskDnsEventListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRiskDnsEventListRequest&, DescribeRiskDnsEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDnsEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskDnsInfoResponse> DescribeRiskDnsInfoOutcome;
                typedef std::future<DescribeRiskDnsInfoOutcome> DescribeRiskDnsInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRiskDnsInfoRequest&, DescribeRiskDnsInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDnsInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskDnsListResponse> DescribeRiskDnsListOutcome;
                typedef std::future<DescribeRiskDnsListOutcome> DescribeRiskDnsListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRiskDnsListRequest&, DescribeRiskDnsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDnsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskDnsPolicyListResponse> DescribeRiskDnsPolicyListOutcome;
                typedef std::future<DescribeRiskDnsPolicyListOutcome> DescribeRiskDnsPolicyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRiskDnsPolicyListRequest&, DescribeRiskDnsPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDnsPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskProcessEventsResponse> DescribeRiskProcessEventsOutcome;
                typedef std::future<DescribeRiskProcessEventsOutcome> DescribeRiskProcessEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRiskProcessEventsRequest&, DescribeRiskProcessEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskProcessEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSafeInfoResponse> DescribeSafeInfoOutcome;
                typedef std::future<DescribeSafeInfoOutcome> DescribeSafeInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSafeInfoRequest&, DescribeSafeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSafeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanMalwareScheduleResponse> DescribeScanMalwareScheduleOutcome;
                typedef std::future<DescribeScanMalwareScheduleOutcome> DescribeScanMalwareScheduleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScanMalwareScheduleRequest&, DescribeScanMalwareScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanMalwareScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanScheduleResponse> DescribeScanScheduleOutcome;
                typedef std::future<DescribeScanScheduleOutcome> DescribeScanScheduleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScanScheduleRequest&, DescribeScanScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanStateResponse> DescribeScanStateOutcome;
                typedef std::future<DescribeScanStateOutcome> DescribeScanStateOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScanStateRequest&, DescribeScanStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskDetailsResponse> DescribeScanTaskDetailsOutcome;
                typedef std::future<DescribeScanTaskDetailsOutcome> DescribeScanTaskDetailsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScanTaskDetailsRequest&, DescribeScanTaskDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskStatusResponse> DescribeScanTaskStatusOutcome;
                typedef std::future<DescribeScanTaskStatusOutcome> DescribeScanTaskStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScanTaskStatusRequest&, DescribeScanTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanVulSettingResponse> DescribeScanVulSettingOutcome;
                typedef std::future<DescribeScanVulSettingOutcome> DescribeScanVulSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScanVulSettingRequest&, DescribeScanVulSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanVulSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenAttackHotspotResponse> DescribeScreenAttackHotspotOutcome;
                typedef std::future<DescribeScreenAttackHotspotOutcome> DescribeScreenAttackHotspotOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenAttackHotspotRequest&, DescribeScreenAttackHotspotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenAttackHotspotAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenBroadcastsResponse> DescribeScreenBroadcastsOutcome;
                typedef std::future<DescribeScreenBroadcastsOutcome> DescribeScreenBroadcastsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenBroadcastsRequest&, DescribeScreenBroadcastsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenBroadcastsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenDefenseTrendsResponse> DescribeScreenDefenseTrendsOutcome;
                typedef std::future<DescribeScreenDefenseTrendsOutcome> DescribeScreenDefenseTrendsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenDefenseTrendsRequest&, DescribeScreenDefenseTrendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenDefenseTrendsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenEmergentMsgResponse> DescribeScreenEmergentMsgOutcome;
                typedef std::future<DescribeScreenEmergentMsgOutcome> DescribeScreenEmergentMsgOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenEmergentMsgRequest&, DescribeScreenEmergentMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenEmergentMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenEventsCntResponse> DescribeScreenEventsCntOutcome;
                typedef std::future<DescribeScreenEventsCntOutcome> DescribeScreenEventsCntOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenEventsCntRequest&, DescribeScreenEventsCntOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenEventsCntAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenGeneralStatResponse> DescribeScreenGeneralStatOutcome;
                typedef std::future<DescribeScreenGeneralStatOutcome> DescribeScreenGeneralStatOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenGeneralStatRequest&, DescribeScreenGeneralStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenGeneralStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenHostInvasionResponse> DescribeScreenHostInvasionOutcome;
                typedef std::future<DescribeScreenHostInvasionOutcome> DescribeScreenHostInvasionOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenHostInvasionRequest&, DescribeScreenHostInvasionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenHostInvasionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenMachineRegionsResponse> DescribeScreenMachineRegionsOutcome;
                typedef std::future<DescribeScreenMachineRegionsOutcome> DescribeScreenMachineRegionsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenMachineRegionsRequest&, DescribeScreenMachineRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenMachineRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenMachinesResponse> DescribeScreenMachinesOutcome;
                typedef std::future<DescribeScreenMachinesOutcome> DescribeScreenMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenMachinesRequest&, DescribeScreenMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenProtectionCntResponse> DescribeScreenProtectionCntOutcome;
                typedef std::future<DescribeScreenProtectionCntOutcome> DescribeScreenProtectionCntOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenProtectionCntRequest&, DescribeScreenProtectionCntOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenProtectionCntAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenProtectionStatResponse> DescribeScreenProtectionStatOutcome;
                typedef std::future<DescribeScreenProtectionStatOutcome> DescribeScreenProtectionStatOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenProtectionStatRequest&, DescribeScreenProtectionStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenProtectionStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenRiskAssetsTopResponse> DescribeScreenRiskAssetsTopOutcome;
                typedef std::future<DescribeScreenRiskAssetsTopOutcome> DescribeScreenRiskAssetsTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenRiskAssetsTopRequest&, DescribeScreenRiskAssetsTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenRiskAssetsTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchLogsResponse> DescribeSearchLogsOutcome;
                typedef std::future<DescribeSearchLogsOutcome> DescribeSearchLogsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSearchLogsRequest&, DescribeSearchLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchTemplatesResponse> DescribeSearchTemplatesOutcome;
                typedef std::future<DescribeSearchTemplatesOutcome> DescribeSearchTemplatesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSearchTemplatesRequest&, DescribeSearchTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityBroadcastInfoResponse> DescribeSecurityBroadcastInfoOutcome;
                typedef std::future<DescribeSecurityBroadcastInfoOutcome> DescribeSecurityBroadcastInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSecurityBroadcastInfoRequest&, DescribeSecurityBroadcastInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityBroadcastInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityBroadcastsResponse> DescribeSecurityBroadcastsOutcome;
                typedef std::future<DescribeSecurityBroadcastsOutcome> DescribeSecurityBroadcastsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSecurityBroadcastsRequest&, DescribeSecurityBroadcastsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityBroadcastsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityDynamicsResponse> DescribeSecurityDynamicsOutcome;
                typedef std::future<DescribeSecurityDynamicsOutcome> DescribeSecurityDynamicsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSecurityDynamicsRequest&, DescribeSecurityDynamicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityDynamicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityEventStatResponse> DescribeSecurityEventStatOutcome;
                typedef std::future<DescribeSecurityEventStatOutcome> DescribeSecurityEventStatOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSecurityEventStatRequest&, DescribeSecurityEventStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityEventStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityEventsCntResponse> DescribeSecurityEventsCntOutcome;
                typedef std::future<DescribeSecurityEventsCntOutcome> DescribeSecurityEventsCntOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSecurityEventsCntRequest&, DescribeSecurityEventsCntOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityEventsCntAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityTrendsResponse> DescribeSecurityTrendsOutcome;
                typedef std::future<DescribeSecurityTrendsOutcome> DescribeSecurityTrendsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSecurityTrendsRequest&, DescribeSecurityTrendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityTrendsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServerRelatedDirInfoResponse> DescribeServerRelatedDirInfoOutcome;
                typedef std::future<DescribeServerRelatedDirInfoOutcome> DescribeServerRelatedDirInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeServerRelatedDirInfoRequest&, DescribeServerRelatedDirInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerRelatedDirInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServersAndRiskAndFirstInfoResponse> DescribeServersAndRiskAndFirstInfoOutcome;
                typedef std::future<DescribeServersAndRiskAndFirstInfoOutcome> DescribeServersAndRiskAndFirstInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeServersAndRiskAndFirstInfoRequest&, DescribeServersAndRiskAndFirstInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServersAndRiskAndFirstInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStrategyExistResponse> DescribeStrategyExistOutcome;
                typedef std::future<DescribeStrategyExistOutcome> DescribeStrategyExistOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeStrategyExistRequest&, DescribeStrategyExistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyExistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagMachinesResponse> DescribeTagMachinesOutcome;
                typedef std::future<DescribeTagMachinesOutcome> DescribeTagMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeTagMachinesRequest&, DescribeTagMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagsResponse> DescribeTagsOutcome;
                typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeTagsRequest&, DescribeTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrialReportResponse> DescribeTrialReportOutcome;
                typedef std::future<DescribeTrialReportOutcome> DescribeTrialReportOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeTrialReportRequest&, DescribeTrialReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrialReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUndoVulCountsResponse> DescribeUndoVulCountsOutcome;
                typedef std::future<DescribeUndoVulCountsOutcome> DescribeUndoVulCountsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeUndoVulCountsRequest&, DescribeUndoVulCountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUndoVulCountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsersConfigResponse> DescribeUsersConfigOutcome;
                typedef std::future<DescribeUsersConfigOutcome> DescribeUsersConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeUsersConfigRequest&, DescribeUsersConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsualLoginPlacesResponse> DescribeUsualLoginPlacesOutcome;
                typedef std::future<DescribeUsualLoginPlacesOutcome> DescribeUsualLoginPlacesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeUsualLoginPlacesRequest&, DescribeUsualLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsualLoginPlacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVdbAndPocInfoResponse> DescribeVdbAndPocInfoOutcome;
                typedef std::future<DescribeVdbAndPocInfoOutcome> DescribeVdbAndPocInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVdbAndPocInfoRequest&, DescribeVdbAndPocInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVdbAndPocInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVersionCompareChartResponse> DescribeVersionCompareChartOutcome;
                typedef std::future<DescribeVersionCompareChartOutcome> DescribeVersionCompareChartOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVersionCompareChartRequest&, DescribeVersionCompareChartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVersionCompareChartAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVersionStatisticsResponse> DescribeVersionStatisticsOutcome;
                typedef std::future<DescribeVersionStatisticsOutcome> DescribeVersionStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVersionStatisticsRequest&, DescribeVersionStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVersionStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVertexDetailResponse> DescribeVertexDetailOutcome;
                typedef std::future<DescribeVertexDetailOutcome> DescribeVertexDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVertexDetailRequest&, DescribeVertexDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVertexDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulCountByDatesResponse> DescribeVulCountByDatesOutcome;
                typedef std::future<DescribeVulCountByDatesOutcome> DescribeVulCountByDatesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulCountByDatesRequest&, DescribeVulCountByDatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulCountByDatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulCveIdInfoResponse> DescribeVulCveIdInfoOutcome;
                typedef std::future<DescribeVulCveIdInfoOutcome> DescribeVulCveIdInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulCveIdInfoRequest&, DescribeVulCveIdInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulCveIdInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefenceEventResponse> DescribeVulDefenceEventOutcome;
                typedef std::future<DescribeVulDefenceEventOutcome> DescribeVulDefenceEventOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulDefenceEventRequest&, DescribeVulDefenceEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefenceEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefenceListResponse> DescribeVulDefenceListOutcome;
                typedef std::future<DescribeVulDefenceListOutcome> DescribeVulDefenceListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulDefenceListRequest&, DescribeVulDefenceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefenceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefenceOverviewResponse> DescribeVulDefenceOverviewOutcome;
                typedef std::future<DescribeVulDefenceOverviewOutcome> DescribeVulDefenceOverviewOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulDefenceOverviewRequest&, DescribeVulDefenceOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefenceOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefencePluginDetailResponse> DescribeVulDefencePluginDetailOutcome;
                typedef std::future<DescribeVulDefencePluginDetailOutcome> DescribeVulDefencePluginDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulDefencePluginDetailRequest&, DescribeVulDefencePluginDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefencePluginDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefencePluginExceptionCountResponse> DescribeVulDefencePluginExceptionCountOutcome;
                typedef std::future<DescribeVulDefencePluginExceptionCountOutcome> DescribeVulDefencePluginExceptionCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulDefencePluginExceptionCountRequest&, DescribeVulDefencePluginExceptionCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefencePluginExceptionCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefencePluginStatusResponse> DescribeVulDefencePluginStatusOutcome;
                typedef std::future<DescribeVulDefencePluginStatusOutcome> DescribeVulDefencePluginStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulDefencePluginStatusRequest&, DescribeVulDefencePluginStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefencePluginStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefenceSettingResponse> DescribeVulDefenceSettingOutcome;
                typedef std::future<DescribeVulDefenceSettingOutcome> DescribeVulDefenceSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulDefenceSettingRequest&, DescribeVulDefenceSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefenceSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulEffectHostListResponse> DescribeVulEffectHostListOutcome;
                typedef std::future<DescribeVulEffectHostListOutcome> DescribeVulEffectHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulEffectHostListRequest&, DescribeVulEffectHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulEffectHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulEffectModulesResponse> DescribeVulEffectModulesOutcome;
                typedef std::future<DescribeVulEffectModulesOutcome> DescribeVulEffectModulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulEffectModulesRequest&, DescribeVulEffectModulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulEffectModulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulEmergentMsgResponse> DescribeVulEmergentMsgOutcome;
                typedef std::future<DescribeVulEmergentMsgOutcome> DescribeVulEmergentMsgOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulEmergentMsgRequest&, DescribeVulEmergentMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulEmergentMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulFixStatusResponse> DescribeVulFixStatusOutcome;
                typedef std::future<DescribeVulFixStatusOutcome> DescribeVulFixStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulFixStatusRequest&, DescribeVulFixStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulFixStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulHostCountScanTimeResponse> DescribeVulHostCountScanTimeOutcome;
                typedef std::future<DescribeVulHostCountScanTimeOutcome> DescribeVulHostCountScanTimeOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulHostCountScanTimeRequest&, DescribeVulHostCountScanTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulHostCountScanTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulHostTopResponse> DescribeVulHostTopOutcome;
                typedef std::future<DescribeVulHostTopOutcome> DescribeVulHostTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulHostTopRequest&, DescribeVulHostTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulHostTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulInfoCvssResponse> DescribeVulInfoCvssOutcome;
                typedef std::future<DescribeVulInfoCvssOutcome> DescribeVulInfoCvssOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulInfoCvssRequest&, DescribeVulInfoCvssOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulInfoCvssAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulLabelsResponse> DescribeVulLabelsOutcome;
                typedef std::future<DescribeVulLabelsOutcome> DescribeVulLabelsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulLabelsRequest&, DescribeVulLabelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulLabelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulLevelCountResponse> DescribeVulLevelCountOutcome;
                typedef std::future<DescribeVulLevelCountOutcome> DescribeVulLevelCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulLevelCountRequest&, DescribeVulLevelCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulLevelCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulListResponse> DescribeVulListOutcome;
                typedef std::future<DescribeVulListOutcome> DescribeVulListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulListRequest&, DescribeVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulOverviewResponse> DescribeVulOverviewOutcome;
                typedef std::future<DescribeVulOverviewOutcome> DescribeVulOverviewOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulOverviewRequest&, DescribeVulOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulStoreListResponse> DescribeVulStoreListOutcome;
                typedef std::future<DescribeVulStoreListOutcome> DescribeVulStoreListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulStoreListRequest&, DescribeVulStoreListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulStoreListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulTopResponse> DescribeVulTopOutcome;
                typedef std::future<DescribeVulTopOutcome> DescribeVulTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulTopRequest&, DescribeVulTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulTrendResponse> DescribeVulTrendOutcome;
                typedef std::future<DescribeVulTrendOutcome> DescribeVulTrendOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulTrendRequest&, DescribeVulTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWarningHostConfigResponse> DescribeWarningHostConfigOutcome;
                typedef std::future<DescribeWarningHostConfigOutcome> DescribeWarningHostConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWarningHostConfigRequest&, DescribeWarningHostConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningHostConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWarningListResponse> DescribeWarningListOutcome;
                typedef std::future<DescribeWarningListOutcome> DescribeWarningListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWarningListRequest&, DescribeWarningListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebHookPolicyResponse> DescribeWebHookPolicyOutcome;
                typedef std::future<DescribeWebHookPolicyOutcome> DescribeWebHookPolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWebHookPolicyRequest&, DescribeWebHookPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebHookPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebHookReceiverResponse> DescribeWebHookReceiverOutcome;
                typedef std::future<DescribeWebHookReceiverOutcome> DescribeWebHookReceiverOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWebHookReceiverRequest&, DescribeWebHookReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebHookReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebHookReceiverUsageResponse> DescribeWebHookReceiverUsageOutcome;
                typedef std::future<DescribeWebHookReceiverUsageOutcome> DescribeWebHookReceiverUsageOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWebHookReceiverUsageRequest&, DescribeWebHookReceiverUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebHookReceiverUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebHookRuleResponse> DescribeWebHookRuleOutcome;
                typedef std::future<DescribeWebHookRuleOutcome> DescribeWebHookRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWebHookRuleRequest&, DescribeWebHookRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebHookRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebHookRulesResponse> DescribeWebHookRulesOutcome;
                typedef std::future<DescribeWebHookRulesOutcome> DescribeWebHookRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWebHookRulesRequest&, DescribeWebHookRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebHookRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebPageEventListResponse> DescribeWebPageEventListOutcome;
                typedef std::future<DescribeWebPageEventListOutcome> DescribeWebPageEventListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWebPageEventListRequest&, DescribeWebPageEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebPageEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebPageGeneralizeResponse> DescribeWebPageGeneralizeOutcome;
                typedef std::future<DescribeWebPageGeneralizeOutcome> DescribeWebPageGeneralizeOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWebPageGeneralizeRequest&, DescribeWebPageGeneralizeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebPageGeneralizeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebPageProtectStatResponse> DescribeWebPageProtectStatOutcome;
                typedef std::future<DescribeWebPageProtectStatOutcome> DescribeWebPageProtectStatOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWebPageProtectStatRequest&, DescribeWebPageProtectStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebPageProtectStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebPageServiceInfoResponse> DescribeWebPageServiceInfoOutcome;
                typedef std::future<DescribeWebPageServiceInfoOutcome> DescribeWebPageServiceInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWebPageServiceInfoRequest&, DescribeWebPageServiceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebPageServiceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyOrderResponse> DestroyOrderOutcome;
                typedef std::future<DestroyOrderOutcome> DestroyOrderOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DestroyOrderRequest&, DestroyOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::EditBashRulesResponse> EditBashRulesOutcome;
                typedef std::future<EditBashRulesOutcome> EditBashRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::EditBashRulesRequest&, EditBashRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditBashRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::EditPrivilegeRulesResponse> EditPrivilegeRulesOutcome;
                typedef std::future<EditPrivilegeRulesOutcome> EditPrivilegeRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::EditPrivilegeRulesRequest&, EditPrivilegeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditPrivilegeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::EditReverseShellRulesResponse> EditReverseShellRulesOutcome;
                typedef std::future<EditReverseShellRulesOutcome> EditReverseShellRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::EditReverseShellRulesRequest&, EditReverseShellRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditReverseShellRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::EditTagsResponse> EditTagsOutcome;
                typedef std::future<EditTagsOutcome> EditTagsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::EditTagsRequest&, EditTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetAppListResponse> ExportAssetAppListOutcome;
                typedef std::future<ExportAssetAppListOutcome> ExportAssetAppListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetAppListRequest&, ExportAssetAppListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetAppListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetCoreModuleListResponse> ExportAssetCoreModuleListOutcome;
                typedef std::future<ExportAssetCoreModuleListOutcome> ExportAssetCoreModuleListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetCoreModuleListRequest&, ExportAssetCoreModuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetCoreModuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetDatabaseListResponse> ExportAssetDatabaseListOutcome;
                typedef std::future<ExportAssetDatabaseListOutcome> ExportAssetDatabaseListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetDatabaseListRequest&, ExportAssetDatabaseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetDatabaseListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetEnvListResponse> ExportAssetEnvListOutcome;
                typedef std::future<ExportAssetEnvListOutcome> ExportAssetEnvListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetEnvListRequest&, ExportAssetEnvListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetEnvListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetInitServiceListResponse> ExportAssetInitServiceListOutcome;
                typedef std::future<ExportAssetInitServiceListOutcome> ExportAssetInitServiceListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetInitServiceListRequest&, ExportAssetInitServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetInitServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetJarListResponse> ExportAssetJarListOutcome;
                typedef std::future<ExportAssetJarListOutcome> ExportAssetJarListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetJarListRequest&, ExportAssetJarListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetJarListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetMachineDetailResponse> ExportAssetMachineDetailOutcome;
                typedef std::future<ExportAssetMachineDetailOutcome> ExportAssetMachineDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetMachineDetailRequest&, ExportAssetMachineDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetMachineDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetMachineListResponse> ExportAssetMachineListOutcome;
                typedef std::future<ExportAssetMachineListOutcome> ExportAssetMachineListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetMachineListRequest&, ExportAssetMachineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetMachineListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetPlanTaskListResponse> ExportAssetPlanTaskListOutcome;
                typedef std::future<ExportAssetPlanTaskListOutcome> ExportAssetPlanTaskListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetPlanTaskListRequest&, ExportAssetPlanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetPlanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetPortInfoListResponse> ExportAssetPortInfoListOutcome;
                typedef std::future<ExportAssetPortInfoListOutcome> ExportAssetPortInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetPortInfoListRequest&, ExportAssetPortInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetPortInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetProcessInfoListResponse> ExportAssetProcessInfoListOutcome;
                typedef std::future<ExportAssetProcessInfoListOutcome> ExportAssetProcessInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetProcessInfoListRequest&, ExportAssetProcessInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetProcessInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetRecentMachineInfoResponse> ExportAssetRecentMachineInfoOutcome;
                typedef std::future<ExportAssetRecentMachineInfoOutcome> ExportAssetRecentMachineInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetRecentMachineInfoRequest&, ExportAssetRecentMachineInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetRecentMachineInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetSystemPackageListResponse> ExportAssetSystemPackageListOutcome;
                typedef std::future<ExportAssetSystemPackageListOutcome> ExportAssetSystemPackageListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetSystemPackageListRequest&, ExportAssetSystemPackageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetSystemPackageListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetUserListResponse> ExportAssetUserListOutcome;
                typedef std::future<ExportAssetUserListOutcome> ExportAssetUserListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetUserListRequest&, ExportAssetUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetWebAppListResponse> ExportAssetWebAppListOutcome;
                typedef std::future<ExportAssetWebAppListOutcome> ExportAssetWebAppListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetWebAppListRequest&, ExportAssetWebAppListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetWebAppListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetWebFrameListResponse> ExportAssetWebFrameListOutcome;
                typedef std::future<ExportAssetWebFrameListOutcome> ExportAssetWebFrameListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetWebFrameListRequest&, ExportAssetWebFrameListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetWebFrameListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetWebLocationListResponse> ExportAssetWebLocationListOutcome;
                typedef std::future<ExportAssetWebLocationListOutcome> ExportAssetWebLocationListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetWebLocationListRequest&, ExportAssetWebLocationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetWebLocationListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetWebServiceInfoListResponse> ExportAssetWebServiceInfoListOutcome;
                typedef std::future<ExportAssetWebServiceInfoListOutcome> ExportAssetWebServiceInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetWebServiceInfoListRequest&, ExportAssetWebServiceInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetWebServiceInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAttackEventsResponse> ExportAttackEventsOutcome;
                typedef std::future<ExportAttackEventsOutcome> ExportAttackEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAttackEventsRequest&, ExportAttackEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAttackEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBaselineEffectHostListResponse> ExportBaselineEffectHostListOutcome;
                typedef std::future<ExportBaselineEffectHostListOutcome> ExportBaselineEffectHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBaselineEffectHostListRequest&, ExportBaselineEffectHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBaselineEffectHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBaselineFixListResponse> ExportBaselineFixListOutcome;
                typedef std::future<ExportBaselineFixListOutcome> ExportBaselineFixListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBaselineFixListRequest&, ExportBaselineFixListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBaselineFixListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBaselineHostDetectListResponse> ExportBaselineHostDetectListOutcome;
                typedef std::future<ExportBaselineHostDetectListOutcome> ExportBaselineHostDetectListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBaselineHostDetectListRequest&, ExportBaselineHostDetectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBaselineHostDetectListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBaselineItemDetectListResponse> ExportBaselineItemDetectListOutcome;
                typedef std::future<ExportBaselineItemDetectListOutcome> ExportBaselineItemDetectListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBaselineItemDetectListRequest&, ExportBaselineItemDetectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBaselineItemDetectListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBaselineItemListResponse> ExportBaselineItemListOutcome;
                typedef std::future<ExportBaselineItemListOutcome> ExportBaselineItemListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBaselineItemListRequest&, ExportBaselineItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBaselineItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBaselineListResponse> ExportBaselineListOutcome;
                typedef std::future<ExportBaselineListOutcome> ExportBaselineListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBaselineListRequest&, ExportBaselineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBaselineListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBaselineRuleDetectListResponse> ExportBaselineRuleDetectListOutcome;
                typedef std::future<ExportBaselineRuleDetectListOutcome> ExportBaselineRuleDetectListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBaselineRuleDetectListRequest&, ExportBaselineRuleDetectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBaselineRuleDetectListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBaselineWeakPasswordListResponse> ExportBaselineWeakPasswordListOutcome;
                typedef std::future<ExportBaselineWeakPasswordListOutcome> ExportBaselineWeakPasswordListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBaselineWeakPasswordListRequest&, ExportBaselineWeakPasswordListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBaselineWeakPasswordListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBashEventsResponse> ExportBashEventsOutcome;
                typedef std::future<ExportBashEventsOutcome> ExportBashEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBashEventsRequest&, ExportBashEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBashEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBashEventsNewResponse> ExportBashEventsNewOutcome;
                typedef std::future<ExportBashEventsNewOutcome> ExportBashEventsNewOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBashEventsNewRequest&, ExportBashEventsNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBashEventsNewAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBashPoliciesResponse> ExportBashPoliciesOutcome;
                typedef std::future<ExportBashPoliciesOutcome> ExportBashPoliciesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBashPoliciesRequest&, ExportBashPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBashPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBruteAttacksResponse> ExportBruteAttacksOutcome;
                typedef std::future<ExportBruteAttacksOutcome> ExportBruteAttacksOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBruteAttacksRequest&, ExportBruteAttacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBruteAttacksAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportFileTamperEventsResponse> ExportFileTamperEventsOutcome;
                typedef std::future<ExportFileTamperEventsOutcome> ExportFileTamperEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportFileTamperEventsRequest&, ExportFileTamperEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportFileTamperEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportFileTamperRulesResponse> ExportFileTamperRulesOutcome;
                typedef std::future<ExportFileTamperRulesOutcome> ExportFileTamperRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportFileTamperRulesRequest&, ExportFileTamperRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportFileTamperRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportIgnoreBaselineRuleResponse> ExportIgnoreBaselineRuleOutcome;
                typedef std::future<ExportIgnoreBaselineRuleOutcome> ExportIgnoreBaselineRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportIgnoreBaselineRuleRequest&, ExportIgnoreBaselineRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportIgnoreBaselineRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportIgnoreRuleEffectHostListResponse> ExportIgnoreRuleEffectHostListOutcome;
                typedef std::future<ExportIgnoreRuleEffectHostListOutcome> ExportIgnoreRuleEffectHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportIgnoreRuleEffectHostListRequest&, ExportIgnoreRuleEffectHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportIgnoreRuleEffectHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportJavaMemShellPluginsResponse> ExportJavaMemShellPluginsOutcome;
                typedef std::future<ExportJavaMemShellPluginsOutcome> ExportJavaMemShellPluginsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportJavaMemShellPluginsRequest&, ExportJavaMemShellPluginsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportJavaMemShellPluginsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportJavaMemShellsResponse> ExportJavaMemShellsOutcome;
                typedef std::future<ExportJavaMemShellsOutcome> ExportJavaMemShellsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportJavaMemShellsRequest&, ExportJavaMemShellsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportJavaMemShellsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportLicenseDetailResponse> ExportLicenseDetailOutcome;
                typedef std::future<ExportLicenseDetailOutcome> ExportLicenseDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportLicenseDetailRequest&, ExportLicenseDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportLicenseDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportMaliciousRequestsResponse> ExportMaliciousRequestsOutcome;
                typedef std::future<ExportMaliciousRequestsOutcome> ExportMaliciousRequestsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportMaliciousRequestsRequest&, ExportMaliciousRequestsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportMaliciousRequestsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportMalwaresResponse> ExportMalwaresOutcome;
                typedef std::future<ExportMalwaresOutcome> ExportMalwaresOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportMalwaresRequest&, ExportMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportNonlocalLoginPlacesResponse> ExportNonlocalLoginPlacesOutcome;
                typedef std::future<ExportNonlocalLoginPlacesOutcome> ExportNonlocalLoginPlacesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportNonlocalLoginPlacesRequest&, ExportNonlocalLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportNonlocalLoginPlacesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportPrivilegeEventsResponse> ExportPrivilegeEventsOutcome;
                typedef std::future<ExportPrivilegeEventsOutcome> ExportPrivilegeEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportPrivilegeEventsRequest&, ExportPrivilegeEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportPrivilegeEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportProtectDirListResponse> ExportProtectDirListOutcome;
                typedef std::future<ExportProtectDirListOutcome> ExportProtectDirListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportProtectDirListRequest&, ExportProtectDirListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportProtectDirListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRansomDefenseBackupListResponse> ExportRansomDefenseBackupListOutcome;
                typedef std::future<ExportRansomDefenseBackupListOutcome> ExportRansomDefenseBackupListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRansomDefenseBackupListRequest&, ExportRansomDefenseBackupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRansomDefenseBackupListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRansomDefenseEventsListResponse> ExportRansomDefenseEventsListOutcome;
                typedef std::future<ExportRansomDefenseEventsListOutcome> ExportRansomDefenseEventsListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRansomDefenseEventsListRequest&, ExportRansomDefenseEventsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRansomDefenseEventsListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRansomDefenseMachineListResponse> ExportRansomDefenseMachineListOutcome;
                typedef std::future<ExportRansomDefenseMachineListOutcome> ExportRansomDefenseMachineListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRansomDefenseMachineListRequest&, ExportRansomDefenseMachineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRansomDefenseMachineListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRansomDefenseStrategyListResponse> ExportRansomDefenseStrategyListOutcome;
                typedef std::future<ExportRansomDefenseStrategyListOutcome> ExportRansomDefenseStrategyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRansomDefenseStrategyListRequest&, ExportRansomDefenseStrategyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRansomDefenseStrategyListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRansomDefenseStrategyMachinesResponse> ExportRansomDefenseStrategyMachinesOutcome;
                typedef std::future<ExportRansomDefenseStrategyMachinesOutcome> ExportRansomDefenseStrategyMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRansomDefenseStrategyMachinesRequest&, ExportRansomDefenseStrategyMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRansomDefenseStrategyMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportReverseShellEventsResponse> ExportReverseShellEventsOutcome;
                typedef std::future<ExportReverseShellEventsOutcome> ExportReverseShellEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportReverseShellEventsRequest&, ExportReverseShellEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportReverseShellEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRiskDnsEventListResponse> ExportRiskDnsEventListOutcome;
                typedef std::future<ExportRiskDnsEventListOutcome> ExportRiskDnsEventListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRiskDnsEventListRequest&, ExportRiskDnsEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRiskDnsEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRiskDnsPolicyListResponse> ExportRiskDnsPolicyListOutcome;
                typedef std::future<ExportRiskDnsPolicyListOutcome> ExportRiskDnsPolicyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRiskDnsPolicyListRequest&, ExportRiskDnsPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRiskDnsPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRiskProcessEventsResponse> ExportRiskProcessEventsOutcome;
                typedef std::future<ExportRiskProcessEventsOutcome> ExportRiskProcessEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRiskProcessEventsRequest&, ExportRiskProcessEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRiskProcessEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportScanTaskDetailsResponse> ExportScanTaskDetailsOutcome;
                typedef std::future<ExportScanTaskDetailsOutcome> ExportScanTaskDetailsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportScanTaskDetailsRequest&, ExportScanTaskDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportScanTaskDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportSecurityTrendsResponse> ExportSecurityTrendsOutcome;
                typedef std::future<ExportSecurityTrendsOutcome> ExportSecurityTrendsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportSecurityTrendsRequest&, ExportSecurityTrendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportSecurityTrendsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportTasksResponse> ExportTasksOutcome;
                typedef std::future<ExportTasksOutcome> ExportTasksOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportTasksRequest&, ExportTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulDefenceEventResponse> ExportVulDefenceEventOutcome;
                typedef std::future<ExportVulDefenceEventOutcome> ExportVulDefenceEventOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulDefenceEventRequest&, ExportVulDefenceEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulDefenceEventAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulDefenceListResponse> ExportVulDefenceListOutcome;
                typedef std::future<ExportVulDefenceListOutcome> ExportVulDefenceListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulDefenceListRequest&, ExportVulDefenceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulDefenceListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulDefencePluginEventResponse> ExportVulDefencePluginEventOutcome;
                typedef std::future<ExportVulDefencePluginEventOutcome> ExportVulDefencePluginEventOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulDefencePluginEventRequest&, ExportVulDefencePluginEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulDefencePluginEventAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulDetectionExcelResponse> ExportVulDetectionExcelOutcome;
                typedef std::future<ExportVulDetectionExcelOutcome> ExportVulDetectionExcelOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulDetectionExcelRequest&, ExportVulDetectionExcelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulDetectionExcelAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulDetectionReportResponse> ExportVulDetectionReportOutcome;
                typedef std::future<ExportVulDetectionReportOutcome> ExportVulDetectionReportOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulDetectionReportRequest&, ExportVulDetectionReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulDetectionReportAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulEffectHostListResponse> ExportVulEffectHostListOutcome;
                typedef std::future<ExportVulEffectHostListOutcome> ExportVulEffectHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulEffectHostListRequest&, ExportVulEffectHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulEffectHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulInfoResponse> ExportVulInfoOutcome;
                typedef std::future<ExportVulInfoOutcome> ExportVulInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulInfoRequest&, ExportVulInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulListResponse> ExportVulListOutcome;
                typedef std::future<ExportVulListOutcome> ExportVulListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulListRequest&, ExportVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportWebPageEventListResponse> ExportWebPageEventListOutcome;
                typedef std::future<ExportWebPageEventListOutcome> ExportWebPageEventListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportWebPageEventListRequest&, ExportWebPageEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportWebPageEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::FixBaselineDetectResponse> FixBaselineDetectOutcome;
                typedef std::future<FixBaselineDetectOutcome> FixBaselineDetectOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::FixBaselineDetectRequest&, FixBaselineDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FixBaselineDetectAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLocalStorageItemResponse> GetLocalStorageItemOutcome;
                typedef std::future<GetLocalStorageItemOutcome> GetLocalStorageItemOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::GetLocalStorageItemRequest&, GetLocalStorageItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLocalStorageItemAsyncHandler;
                typedef Outcome<Core::Error, Model::IgnoreImpactedHostsResponse> IgnoreImpactedHostsOutcome;
                typedef std::future<IgnoreImpactedHostsOutcome> IgnoreImpactedHostsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::IgnoreImpactedHostsRequest&, IgnoreImpactedHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IgnoreImpactedHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::KeysLocalStorageResponse> KeysLocalStorageOutcome;
                typedef std::future<KeysLocalStorageOutcome> KeysLocalStorageOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::KeysLocalStorageRequest&, KeysLocalStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KeysLocalStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoOpenProVersionConfigResponse> ModifyAutoOpenProVersionConfigOutcome;
                typedef std::future<ModifyAutoOpenProVersionConfigOutcome> ModifyAutoOpenProVersionConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyAutoOpenProVersionConfigRequest&, ModifyAutoOpenProVersionConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoOpenProVersionConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBanModeResponse> ModifyBanModeOutcome;
                typedef std::future<ModifyBanModeOutcome> ModifyBanModeOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBanModeRequest&, ModifyBanModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBanModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBanStatusResponse> ModifyBanStatusOutcome;
                typedef std::future<ModifyBanStatusOutcome> ModifyBanStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBanStatusRequest&, ModifyBanStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBanStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBanWhiteListResponse> ModifyBanWhiteListOutcome;
                typedef std::future<ModifyBanWhiteListOutcome> ModifyBanWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBanWhiteListRequest&, ModifyBanWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBanWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselinePolicyResponse> ModifyBaselinePolicyOutcome;
                typedef std::future<ModifyBaselinePolicyOutcome> ModifyBaselinePolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBaselinePolicyRequest&, ModifyBaselinePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselinePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselinePolicyStateResponse> ModifyBaselinePolicyStateOutcome;
                typedef std::future<ModifyBaselinePolicyStateOutcome> ModifyBaselinePolicyStateOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBaselinePolicyStateRequest&, ModifyBaselinePolicyStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselinePolicyStateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselineRuleResponse> ModifyBaselineRuleOutcome;
                typedef std::future<ModifyBaselineRuleOutcome> ModifyBaselineRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBaselineRuleRequest&, ModifyBaselineRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselineRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselineRuleIgnoreResponse> ModifyBaselineRuleIgnoreOutcome;
                typedef std::future<ModifyBaselineRuleIgnoreOutcome> ModifyBaselineRuleIgnoreOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBaselineRuleIgnoreRequest&, ModifyBaselineRuleIgnoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselineRuleIgnoreAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselineWeakPasswordResponse> ModifyBaselineWeakPasswordOutcome;
                typedef std::future<ModifyBaselineWeakPasswordOutcome> ModifyBaselineWeakPasswordOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBaselineWeakPasswordRequest&, ModifyBaselineWeakPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselineWeakPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBashPolicyResponse> ModifyBashPolicyOutcome;
                typedef std::future<ModifyBashPolicyOutcome> ModifyBashPolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBashPolicyRequest&, ModifyBashPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBashPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBashPolicyStatusResponse> ModifyBashPolicyStatusOutcome;
                typedef std::future<ModifyBashPolicyStatusOutcome> ModifyBashPolicyStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBashPolicyStatusRequest&, ModifyBashPolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBashPolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBruteAttackRulesResponse> ModifyBruteAttackRulesOutcome;
                typedef std::future<ModifyBruteAttackRulesOutcome> ModifyBruteAttackRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBruteAttackRulesRequest&, ModifyBruteAttackRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBruteAttackRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEventAttackStatusResponse> ModifyEventAttackStatusOutcome;
                typedef std::future<ModifyEventAttackStatusOutcome> ModifyEventAttackStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyEventAttackStatusRequest&, ModifyEventAttackStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEventAttackStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFileTamperEventsResponse> ModifyFileTamperEventsOutcome;
                typedef std::future<ModifyFileTamperEventsOutcome> ModifyFileTamperEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyFileTamperEventsRequest&, ModifyFileTamperEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFileTamperEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFileTamperRuleResponse> ModifyFileTamperRuleOutcome;
                typedef std::future<ModifyFileTamperRuleOutcome> ModifyFileTamperRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyFileTamperRuleRequest&, ModifyFileTamperRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFileTamperRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFileTamperRuleStatusResponse> ModifyFileTamperRuleStatusOutcome;
                typedef std::future<ModifyFileTamperRuleStatusOutcome> ModifyFileTamperRuleStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyFileTamperRuleStatusRequest&, ModifyFileTamperRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFileTamperRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyJavaMemShellPluginSwitchResponse> ModifyJavaMemShellPluginSwitchOutcome;
                typedef std::future<ModifyJavaMemShellPluginSwitchOutcome> ModifyJavaMemShellPluginSwitchOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyJavaMemShellPluginSwitchRequest&, ModifyJavaMemShellPluginSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJavaMemShellPluginSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyJavaMemShellsStatusResponse> ModifyJavaMemShellsStatusOutcome;
                typedef std::future<ModifyJavaMemShellsStatusOutcome> ModifyJavaMemShellsStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyJavaMemShellsStatusRequest&, ModifyJavaMemShellsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJavaMemShellsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLicenseBindsResponse> ModifyLicenseBindsOutcome;
                typedef std::future<ModifyLicenseBindsOutcome> ModifyLicenseBindsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLicenseBindsRequest&, ModifyLicenseBindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLicenseBindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLicenseOrderResponse> ModifyLicenseOrderOutcome;
                typedef std::future<ModifyLicenseOrderOutcome> ModifyLicenseOrderOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLicenseOrderRequest&, ModifyLicenseOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLicenseOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLicenseUnBindsResponse> ModifyLicenseUnBindsOutcome;
                typedef std::future<ModifyLicenseUnBindsOutcome> ModifyLicenseUnBindsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLicenseUnBindsRequest&, ModifyLicenseUnBindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLicenseUnBindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogKafkaAccessResponse> ModifyLogKafkaAccessOutcome;
                typedef std::future<ModifyLogKafkaAccessOutcome> ModifyLogKafkaAccessOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLogKafkaAccessRequest&, ModifyLogKafkaAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogKafkaAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogKafkaDeliverTypeResponse> ModifyLogKafkaDeliverTypeOutcome;
                typedef std::future<ModifyLogKafkaDeliverTypeOutcome> ModifyLogKafkaDeliverTypeOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLogKafkaDeliverTypeRequest&, ModifyLogKafkaDeliverTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogKafkaDeliverTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogKafkaStateResponse> ModifyLogKafkaStateOutcome;
                typedef std::future<ModifyLogKafkaStateOutcome> ModifyLogKafkaStateOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLogKafkaStateRequest&, ModifyLogKafkaStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogKafkaStateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogStorageConfigResponse> ModifyLogStorageConfigOutcome;
                typedef std::future<ModifyLogStorageConfigOutcome> ModifyLogStorageConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLogStorageConfigRequest&, ModifyLogStorageConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogStorageConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoginWhiteInfoResponse> ModifyLoginWhiteInfoOutcome;
                typedef std::future<ModifyLoginWhiteInfoOutcome> ModifyLoginWhiteInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLoginWhiteInfoRequest&, ModifyLoginWhiteInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoginWhiteInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoginWhiteRecordResponse> ModifyLoginWhiteRecordOutcome;
                typedef std::future<ModifyLoginWhiteRecordOutcome> ModifyLoginWhiteRecordOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLoginWhiteRecordRequest&, ModifyLoginWhiteRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoginWhiteRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMachineAutoClearConfigResponse> ModifyMachineAutoClearConfigOutcome;
                typedef std::future<ModifyMachineAutoClearConfigOutcome> ModifyMachineAutoClearConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyMachineAutoClearConfigRequest&, ModifyMachineAutoClearConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachineAutoClearConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMachineRemarkResponse> ModifyMachineRemarkOutcome;
                typedef std::future<ModifyMachineRemarkOutcome> ModifyMachineRemarkOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyMachineRemarkRequest&, ModifyMachineRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachineRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMaliciousRequestWhiteListResponse> ModifyMaliciousRequestWhiteListOutcome;
                typedef std::future<ModifyMaliciousRequestWhiteListOutcome> ModifyMaliciousRequestWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyMaliciousRequestWhiteListRequest&, ModifyMaliciousRequestWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMaliciousRequestWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMalwareTimingScanSettingsResponse> ModifyMalwareTimingScanSettingsOutcome;
                typedef std::future<ModifyMalwareTimingScanSettingsOutcome> ModifyMalwareTimingScanSettingsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyMalwareTimingScanSettingsRequest&, ModifyMalwareTimingScanSettingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMalwareTimingScanSettingsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMalwareWhiteListResponse> ModifyMalwareWhiteListOutcome;
                typedef std::future<ModifyMalwareWhiteListOutcome> ModifyMalwareWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyMalwareWhiteListRequest&, ModifyMalwareWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMalwareWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetAttackSettingResponse> ModifyNetAttackSettingOutcome;
                typedef std::future<ModifyNetAttackSettingOutcome> ModifyNetAttackSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyNetAttackSettingRequest&, ModifyNetAttackSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetAttackSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetAttackWhiteListResponse> ModifyNetAttackWhiteListOutcome;
                typedef std::future<ModifyNetAttackWhiteListOutcome> ModifyNetAttackWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyNetAttackWhiteListRequest&, ModifyNetAttackWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetAttackWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOrderAttributeResponse> ModifyOrderAttributeOutcome;
                typedef std::future<ModifyOrderAttributeOutcome> ModifyOrderAttributeOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyOrderAttributeRequest&, ModifyOrderAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOrderAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRansomDefenseEventsStatusResponse> ModifyRansomDefenseEventsStatusOutcome;
                typedef std::future<ModifyRansomDefenseEventsStatusOutcome> ModifyRansomDefenseEventsStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyRansomDefenseEventsStatusRequest&, ModifyRansomDefenseEventsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRansomDefenseEventsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRansomDefenseStrategyStatusResponse> ModifyRansomDefenseStrategyStatusOutcome;
                typedef std::future<ModifyRansomDefenseStrategyStatusOutcome> ModifyRansomDefenseStrategyStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyRansomDefenseStrategyStatusRequest&, ModifyRansomDefenseStrategyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRansomDefenseStrategyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRaspMaxCpuResponse> ModifyRaspMaxCpuOutcome;
                typedef std::future<ModifyRaspMaxCpuOutcome> ModifyRaspMaxCpuOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyRaspMaxCpuRequest&, ModifyRaspMaxCpuOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRaspMaxCpuAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRaspRulesResponse> ModifyRaspRulesOutcome;
                typedef std::future<ModifyRaspRulesOutcome> ModifyRaspRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyRaspRulesRequest&, ModifyRaspRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRaspRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReverseShellRulesAggregationResponse> ModifyReverseShellRulesAggregationOutcome;
                typedef std::future<ModifyReverseShellRulesAggregationOutcome> ModifyReverseShellRulesAggregationOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyReverseShellRulesAggregationRequest&, ModifyReverseShellRulesAggregationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReverseShellRulesAggregationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskDnsPolicyResponse> ModifyRiskDnsPolicyOutcome;
                typedef std::future<ModifyRiskDnsPolicyOutcome> ModifyRiskDnsPolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyRiskDnsPolicyRequest&, ModifyRiskDnsPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskDnsPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskDnsPolicyStatusResponse> ModifyRiskDnsPolicyStatusOutcome;
                typedef std::future<ModifyRiskDnsPolicyStatusOutcome> ModifyRiskDnsPolicyStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyRiskDnsPolicyStatusRequest&, ModifyRiskDnsPolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskDnsPolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskEventsStatusResponse> ModifyRiskEventsStatusOutcome;
                typedef std::future<ModifyRiskEventsStatusOutcome> ModifyRiskEventsStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyRiskEventsStatusRequest&, ModifyRiskEventsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskEventsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUsersConfigResponse> ModifyUsersConfigOutcome;
                typedef std::future<ModifyUsersConfigOutcome> ModifyUsersConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyUsersConfigRequest&, ModifyUsersConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUsersConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVulDefenceEventStatusResponse> ModifyVulDefenceEventStatusOutcome;
                typedef std::future<ModifyVulDefenceEventStatusOutcome> ModifyVulDefenceEventStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyVulDefenceEventStatusRequest&, ModifyVulDefenceEventStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulDefenceEventStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVulDefenceSettingResponse> ModifyVulDefenceSettingOutcome;
                typedef std::future<ModifyVulDefenceSettingOutcome> ModifyVulDefenceSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyVulDefenceSettingRequest&, ModifyVulDefenceSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulDefenceSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWarningHostConfigResponse> ModifyWarningHostConfigOutcome;
                typedef std::future<ModifyWarningHostConfigOutcome> ModifyWarningHostConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWarningHostConfigRequest&, ModifyWarningHostConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWarningHostConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWarningSettingResponse> ModifyWarningSettingOutcome;
                typedef std::future<ModifyWarningSettingOutcome> ModifyWarningSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWarningSettingRequest&, ModifyWarningSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWarningSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebHookPolicyResponse> ModifyWebHookPolicyOutcome;
                typedef std::future<ModifyWebHookPolicyOutcome> ModifyWebHookPolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebHookPolicyRequest&, ModifyWebHookPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebHookPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebHookPolicyStatusResponse> ModifyWebHookPolicyStatusOutcome;
                typedef std::future<ModifyWebHookPolicyStatusOutcome> ModifyWebHookPolicyStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebHookPolicyStatusRequest&, ModifyWebHookPolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebHookPolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebHookReceiverResponse> ModifyWebHookReceiverOutcome;
                typedef std::future<ModifyWebHookReceiverOutcome> ModifyWebHookReceiverOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebHookReceiverRequest&, ModifyWebHookReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebHookReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebHookRuleResponse> ModifyWebHookRuleOutcome;
                typedef std::future<ModifyWebHookRuleOutcome> ModifyWebHookRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebHookRuleRequest&, ModifyWebHookRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebHookRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebHookRuleStatusResponse> ModifyWebHookRuleStatusOutcome;
                typedef std::future<ModifyWebHookRuleStatusOutcome> ModifyWebHookRuleStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebHookRuleStatusRequest&, ModifyWebHookRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebHookRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebPageProtectDirResponse> ModifyWebPageProtectDirOutcome;
                typedef std::future<ModifyWebPageProtectDirOutcome> ModifyWebPageProtectDirOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebPageProtectDirRequest&, ModifyWebPageProtectDirOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebPageProtectDirAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebPageProtectSettingResponse> ModifyWebPageProtectSettingOutcome;
                typedef std::future<ModifyWebPageProtectSettingOutcome> ModifyWebPageProtectSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebPageProtectSettingRequest&, ModifyWebPageProtectSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebPageProtectSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebPageProtectSwitchResponse> ModifyWebPageProtectSwitchOutcome;
                typedef std::future<ModifyWebPageProtectSwitchOutcome> ModifyWebPageProtectSwitchOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebPageProtectSwitchRequest&, ModifyWebPageProtectSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebPageProtectSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::RansomDefenseRollbackResponse> RansomDefenseRollbackOutcome;
                typedef std::future<RansomDefenseRollbackOutcome> RansomDefenseRollbackOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::RansomDefenseRollbackRequest&, RansomDefenseRollbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RansomDefenseRollbackAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverMalwaresResponse> RecoverMalwaresOutcome;
                typedef std::future<RecoverMalwaresOutcome> RecoverMalwaresOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::RecoverMalwaresRequest&, RecoverMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveLocalStorageItemResponse> RemoveLocalStorageItemOutcome;
                typedef std::future<RemoveLocalStorageItemOutcome> RemoveLocalStorageItemOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::RemoveLocalStorageItemRequest&, RemoveLocalStorageItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveLocalStorageItemAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveMachineResponse> RemoveMachineOutcome;
                typedef std::future<RemoveMachineOutcome> RemoveMachineOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::RemoveMachineRequest&, RemoveMachineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveMachineAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryCreateSnapshotResponse> RetryCreateSnapshotOutcome;
                typedef std::future<RetryCreateSnapshotOutcome> RetryCreateSnapshotOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::RetryCreateSnapshotRequest&, RetryCreateSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryCreateSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryVulFixResponse> RetryVulFixOutcome;
                typedef std::future<RetryVulFixOutcome> RetryVulFixOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::RetryVulFixRequest&, RetryVulFixOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryVulFixAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanAssetResponse> ScanAssetOutcome;
                typedef std::future<ScanAssetOutcome> ScanAssetOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ScanAssetRequest&, ScanAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanBaselineResponse> ScanBaselineOutcome;
                typedef std::future<ScanBaselineOutcome> ScanBaselineOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ScanBaselineRequest&, ScanBaselineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanBaselineAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanTaskAgainResponse> ScanTaskAgainOutcome;
                typedef std::future<ScanTaskAgainOutcome> ScanTaskAgainOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ScanTaskAgainRequest&, ScanTaskAgainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanTaskAgainAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanVulResponse> ScanVulOutcome;
                typedef std::future<ScanVulOutcome> ScanVulOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ScanVulRequest&, ScanVulOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanVulAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanVulAgainResponse> ScanVulAgainOutcome;
                typedef std::future<ScanVulAgainOutcome> ScanVulAgainOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ScanVulAgainRequest&, ScanVulAgainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanVulAgainAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanVulSettingResponse> ScanVulSettingOutcome;
                typedef std::future<ScanVulSettingOutcome> ScanVulSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ScanVulSettingRequest&, ScanVulSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanVulSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchLogResponse> SearchLogOutcome;
                typedef std::future<SearchLogOutcome> SearchLogOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SearchLogRequest&, SearchLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchLogAsyncHandler;
                typedef Outcome<Core::Error, Model::SeparateMalwaresResponse> SeparateMalwaresOutcome;
                typedef std::future<SeparateMalwaresOutcome> SeparateMalwaresOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SeparateMalwaresRequest&, SeparateMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SeparateMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::SetBashEventsStatusResponse> SetBashEventsStatusOutcome;
                typedef std::future<SetBashEventsStatusOutcome> SetBashEventsStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SetBashEventsStatusRequest&, SetBashEventsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetBashEventsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::SetLocalStorageExpireResponse> SetLocalStorageExpireOutcome;
                typedef std::future<SetLocalStorageExpireOutcome> SetLocalStorageExpireOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SetLocalStorageExpireRequest&, SetLocalStorageExpireOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLocalStorageExpireAsyncHandler;
                typedef Outcome<Core::Error, Model::SetLocalStorageItemResponse> SetLocalStorageItemOutcome;
                typedef std::future<SetLocalStorageItemOutcome> SetLocalStorageItemOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SetLocalStorageItemRequest&, SetLocalStorageItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLocalStorageItemAsyncHandler;
                typedef Outcome<Core::Error, Model::StartBaselineDetectResponse> StartBaselineDetectOutcome;
                typedef std::future<StartBaselineDetectOutcome> StartBaselineDetectOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::StartBaselineDetectRequest&, StartBaselineDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartBaselineDetectAsyncHandler;
                typedef Outcome<Core::Error, Model::StopAssetScanResponse> StopAssetScanOutcome;
                typedef std::future<StopAssetScanOutcome> StopAssetScanOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::StopAssetScanRequest&, StopAssetScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopAssetScanAsyncHandler;
                typedef Outcome<Core::Error, Model::StopBaselineDetectResponse> StopBaselineDetectOutcome;
                typedef std::future<StopBaselineDetectOutcome> StopBaselineDetectOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::StopBaselineDetectRequest&, StopBaselineDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopBaselineDetectAsyncHandler;
                typedef Outcome<Core::Error, Model::StopNoticeBanTipsResponse> StopNoticeBanTipsOutcome;
                typedef std::future<StopNoticeBanTipsOutcome> StopNoticeBanTipsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::StopNoticeBanTipsRequest&, StopNoticeBanTipsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopNoticeBanTipsAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchBashRulesResponse> SwitchBashRulesOutcome;
                typedef std::future<SwitchBashRulesOutcome> SwitchBashRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SwitchBashRulesRequest&, SwitchBashRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchBashRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncAssetScanResponse> SyncAssetScanOutcome;
                typedef std::future<SyncAssetScanOutcome> SyncAssetScanOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SyncAssetScanRequest&, SyncAssetScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncAssetScanAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncBaselineDetectSummaryResponse> SyncBaselineDetectSummaryOutcome;
                typedef std::future<SyncBaselineDetectSummaryOutcome> SyncBaselineDetectSummaryOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SyncBaselineDetectSummaryRequest&, SyncBaselineDetectSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncBaselineDetectSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncMachinesResponse> SyncMachinesOutcome;
                typedef std::future<SyncMachinesOutcome> SyncMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SyncMachinesRequest&, SyncMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::TestWebHookRuleResponse> TestWebHookRuleOutcome;
                typedef std::future<TestWebHookRuleOutcome> TestWebHookRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::TestWebHookRuleRequest&, TestWebHookRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TestWebHookRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::TrustMalwaresResponse> TrustMalwaresOutcome;
                typedef std::future<TrustMalwaresOutcome> TrustMalwaresOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::TrustMalwaresRequest&, TrustMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TrustMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::UntrustMalwaresResponse> UntrustMalwaresOutcome;
                typedef std::future<UntrustMalwaresOutcome> UntrustMalwaresOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::UntrustMalwaresRequest&, UntrustMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UntrustMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateBaselineStrategyResponse> UpdateBaselineStrategyOutcome;
                typedef std::future<UpdateBaselineStrategyOutcome> UpdateBaselineStrategyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::UpdateBaselineStrategyRequest&, UpdateBaselineStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBaselineStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateMachineTagsResponse> UpdateMachineTagsOutcome;
                typedef std::future<UpdateMachineTagsOutcome> UpdateMachineTagsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::UpdateMachineTagsRequest&, UpdateMachineTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMachineTagsAsyncHandler;



                /**
                 *批量添加异地登录白名单
                 * @param req AddLoginWhiteListsRequest
                 * @return AddLoginWhiteListsOutcome
                 */
                AddLoginWhiteListsOutcome AddLoginWhiteLists(const Model::AddLoginWhiteListsRequest &request);
                void AddLoginWhiteListsAsync(const Model::AddLoginWhiteListsRequest& request, const AddLoginWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddLoginWhiteListsOutcomeCallable AddLoginWhiteListsCallable(const Model::AddLoginWhiteListsRequest& request);

                /**
                 *产品变动切换到了\\n切换到 AddVulIgnoreRule / ModifyVulIgnoreRule  CancelVulIgnoreRule\\n相关接口

取消漏洞忽略
                 * @param req CancelIgnoreVulRequest
                 * @return CancelIgnoreVulOutcome
                 */
                CancelIgnoreVulOutcome CancelIgnoreVul(const Model::CancelIgnoreVulRequest &request);
                void CancelIgnoreVulAsync(const Model::CancelIgnoreVulRequest& request, const CancelIgnoreVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelIgnoreVulOutcomeCallable CancelIgnoreVulCallable(const Model::CancelIgnoreVulRequest& request);

                /**
                 *根据检测项id或事件id批量忽略事件或取消忽略
                 * @param req ChangeRuleEventsIgnoreStatusRequest
                 * @return ChangeRuleEventsIgnoreStatusOutcome
                 */
                ChangeRuleEventsIgnoreStatusOutcome ChangeRuleEventsIgnoreStatus(const Model::ChangeRuleEventsIgnoreStatusRequest &request);
                void ChangeRuleEventsIgnoreStatusAsync(const Model::ChangeRuleEventsIgnoreStatusRequest& request, const ChangeRuleEventsIgnoreStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeRuleEventsIgnoreStatusOutcomeCallable ChangeRuleEventsIgnoreStatusCallable(const Model::ChangeRuleEventsIgnoreStatusRequest& request);

                /**
                 *根据策略id修改策略可用状态
                 * @param req ChangeStrategyEnableStatusRequest
                 * @return ChangeStrategyEnableStatusOutcome
                 */
                ChangeStrategyEnableStatusOutcome ChangeStrategyEnableStatus(const Model::ChangeStrategyEnableStatusRequest &request);
                void ChangeStrategyEnableStatusAsync(const Model::ChangeStrategyEnableStatusRequest& request, const ChangeStrategyEnableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeStrategyEnableStatusOutcomeCallable ChangeStrategyEnableStatusCallable(const Model::ChangeStrategyEnableStatusRequest& request);

                /**
                 *校验高危命令用户规则新增和编辑时的参数。
                 * @param req CheckBashPolicyParamsRequest
                 * @return CheckBashPolicyParamsOutcome
                 */
                CheckBashPolicyParamsOutcome CheckBashPolicyParams(const Model::CheckBashPolicyParamsRequest &request);
                void CheckBashPolicyParamsAsync(const Model::CheckBashPolicyParamsRequest& request, const CheckBashPolicyParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckBashPolicyParamsOutcomeCallable CheckBashPolicyParamsCallable(const Model::CheckBashPolicyParamsRequest& request);

                /**
                 *校验高危命令用户规则新增和编辑时的参数。
                 * @param req CheckBashRuleParamsRequest
                 * @return CheckBashRuleParamsOutcome
                 */
                CheckBashRuleParamsOutcome CheckBashRuleParams(const Model::CheckBashRuleParamsRequest &request);
                void CheckBashRuleParamsAsync(const Model::CheckBashRuleParamsRequest& request, const CheckBashRuleParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckBashRuleParamsOutcomeCallable CheckBashRuleParamsCallable(const Model::CheckBashRuleParamsRequest& request);

                /**
                 *检验核心文件监控前端新增和编辑时的规则参数。
                 * @param req CheckFileTamperRuleRequest
                 * @return CheckFileTamperRuleOutcome
                 */
                CheckFileTamperRuleOutcome CheckFileTamperRule(const Model::CheckFileTamperRuleRequest &request);
                void CheckFileTamperRuleAsync(const Model::CheckFileTamperRuleRequest& request, const CheckFileTamperRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckFileTamperRuleOutcomeCallable CheckFileTamperRuleCallable(const Model::CheckFileTamperRuleRequest& request);

                /**
                 *查询基线是否第一次检测
                 * @param req CheckFirstScanBaselineRequest
                 * @return CheckFirstScanBaselineOutcome
                 */
                CheckFirstScanBaselineOutcome CheckFirstScanBaseline(const Model::CheckFirstScanBaselineRequest &request);
                void CheckFirstScanBaselineAsync(const Model::CheckFirstScanBaselineRequest& request, const CheckFirstScanBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckFirstScanBaselineOutcomeCallable CheckFirstScanBaselineCallable(const Model::CheckFirstScanBaselineRequest& request);

                /**
                 *检查日志投递kafka连通性
                 * @param req CheckLogKafkaConnectionStateRequest
                 * @return CheckLogKafkaConnectionStateOutcome
                 */
                CheckLogKafkaConnectionStateOutcome CheckLogKafkaConnectionState(const Model::CheckLogKafkaConnectionStateRequest &request);
                void CheckLogKafkaConnectionStateAsync(const Model::CheckLogKafkaConnectionStateRequest& request, const CheckLogKafkaConnectionStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckLogKafkaConnectionStateOutcomeCallable CheckLogKafkaConnectionStateCallable(const Model::CheckLogKafkaConnectionStateRequest& request);

                /**
                 *清理本地存储数据
                 * @param req ClearLocalStorageRequest
                 * @return ClearLocalStorageOutcome
                 */
                ClearLocalStorageOutcome ClearLocalStorage(const Model::ClearLocalStorageRequest &request);
                void ClearLocalStorageAsync(const Model::ClearLocalStorageRequest& request, const ClearLocalStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearLocalStorageOutcomeCallable ClearLocalStorageCallable(const Model::ClearLocalStorageRequest& request);

                /**
                 *添加阻断白名单列表
                 * @param req CreateBanWhiteListRequest
                 * @return CreateBanWhiteListOutcome
                 */
                CreateBanWhiteListOutcome CreateBanWhiteList(const Model::CreateBanWhiteListRequest &request);
                void CreateBanWhiteListAsync(const Model::CreateBanWhiteListRequest& request, const CreateBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBanWhiteListOutcomeCallable CreateBanWhiteListCallable(const Model::CreateBanWhiteListRequest& request);

                /**
                 *根据策略信息创建基线策略
                 * @param req CreateBaselineStrategyRequest
                 * @return CreateBaselineStrategyOutcome
                 */
                CreateBaselineStrategyOutcome CreateBaselineStrategy(const Model::CreateBaselineStrategyRequest &request);
                void CreateBaselineStrategyAsync(const Model::CreateBaselineStrategyRequest& request, const CreateBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBaselineStrategyOutcomeCallable CreateBaselineStrategyCallable(const Model::CreateBaselineStrategyRequest& request);

                /**
                 *新购授权自动绑定任务
                 * @param req CreateBuyBindTaskRequest
                 * @return CreateBuyBindTaskOutcome
                 */
                CreateBuyBindTaskOutcome CreateBuyBindTask(const Model::CreateBuyBindTaskRequest &request);
                void CreateBuyBindTaskAsync(const Model::CreateBuyBindTaskRequest& request, const CreateBuyBindTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBuyBindTaskOutcomeCallable CreateBuyBindTaskCallable(const Model::CreateBuyBindTaskRequest& request);

                /**
                 *创建应急漏洞扫描任务
                 * @param req CreateEmergencyVulScanRequest
                 * @return CreateEmergencyVulScanOutcome
                 */
                CreateEmergencyVulScanOutcome CreateEmergencyVulScan(const Model::CreateEmergencyVulScanRequest &request);
                void CreateEmergencyVulScanAsync(const Model::CreateEmergencyVulScanRequest& request, const CreateEmergencyVulScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmergencyVulScanOutcomeCallable CreateEmergencyVulScanCallable(const Model::CreateEmergencyVulScanRequest& request);

                /**
                 *对旗舰版机器单次触发事件调查及告警回溯
                 * @param req CreateIncidentBacktrackingRequest
                 * @return CreateIncidentBacktrackingOutcome
                 */
                CreateIncidentBacktrackingOutcome CreateIncidentBacktracking(const Model::CreateIncidentBacktrackingRequest &request);
                void CreateIncidentBacktrackingAsync(const Model::CreateIncidentBacktrackingRequest& request, const CreateIncidentBacktrackingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIncidentBacktrackingOutcomeCallable CreateIncidentBacktrackingCallable(const Model::CreateIncidentBacktrackingRequest& request);

                /**
                 *CreateLicenseOrder 该接口可以创建专业版/旗舰版订单
支持预付费后付费创建
后付费订单直接创建成功
预付费订单仅下单不支付,需要调用计费支付接口进行支付
                 * @param req CreateLicenseOrderRequest
                 * @return CreateLicenseOrderOutcome
                 */
                CreateLicenseOrderOutcome CreateLicenseOrder(const Model::CreateLicenseOrderRequest &request);
                void CreateLicenseOrderAsync(const Model::CreateLicenseOrderRequest& request, const CreateLicenseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLicenseOrderOutcomeCallable CreateLicenseOrderCallable(const Model::CreateLicenseOrderRequest& request);

                /**
                 *创建日志下载任务
                 * @param req CreateLogExportRequest
                 * @return CreateLogExportOutcome
                 */
                CreateLogExportOutcome CreateLogExport(const Model::CreateLogExportRequest &request);
                void CreateLogExportAsync(const Model::CreateLogExportRequest& request, const CreateLogExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLogExportOutcomeCallable CreateLogExportCallable(const Model::CreateLogExportRequest& request);

                /**
                 *添加恶意请求白名单
                 * @param req CreateMaliciousRequestWhiteListRequest
                 * @return CreateMaliciousRequestWhiteListOutcome
                 */
                CreateMaliciousRequestWhiteListOutcome CreateMaliciousRequestWhiteList(const Model::CreateMaliciousRequestWhiteListRequest &request);
                void CreateMaliciousRequestWhiteListAsync(const Model::CreateMaliciousRequestWhiteListRequest& request, const CreateMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMaliciousRequestWhiteListOutcomeCallable CreateMaliciousRequestWhiteListCallable(const Model::CreateMaliciousRequestWhiteListRequest& request);

                /**
                 *创建木马白名单
                 * @param req CreateMalwareWhiteListRequest
                 * @return CreateMalwareWhiteListOutcome
                 */
                CreateMalwareWhiteListOutcome CreateMalwareWhiteList(const Model::CreateMalwareWhiteListRequest &request);
                void CreateMalwareWhiteListAsync(const Model::CreateMalwareWhiteListRequest& request, const CreateMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMalwareWhiteListOutcomeCallable CreateMalwareWhiteListCallable(const Model::CreateMalwareWhiteListRequest& request);

                /**
                 *创建网络攻击白名单
                 * @param req CreateNetAttackWhiteListRequest
                 * @return CreateNetAttackWhiteListOutcome
                 */
                CreateNetAttackWhiteListOutcome CreateNetAttackWhiteList(const Model::CreateNetAttackWhiteListRequest &request);
                void CreateNetAttackWhiteListAsync(const Model::CreateNetAttackWhiteListRequest& request, const CreateNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetAttackWhiteListOutcomeCallable CreateNetAttackWhiteListCallable(const Model::CreateNetAttackWhiteListRequest& request);

                /**
                 *添加网站防护服务器
                 * @param req CreateProtectServerRequest
                 * @return CreateProtectServerOutcome
                 */
                CreateProtectServerOutcome CreateProtectServer(const Model::CreateProtectServerRequest &request);
                void CreateProtectServerAsync(const Model::CreateProtectServerRequest& request, const CreateProtectServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProtectServerOutcomeCallable CreateProtectServerCallable(const Model::CreateProtectServerRequest& request);

                /**
                 *创建或修改防勒索策略
                 * @param req CreateRansomDefenseStrategyRequest
                 * @return CreateRansomDefenseStrategyOutcome
                 */
                CreateRansomDefenseStrategyOutcome CreateRansomDefenseStrategy(const Model::CreateRansomDefenseStrategyRequest &request);
                void CreateRansomDefenseStrategyAsync(const Model::CreateRansomDefenseStrategyRequest& request, const CreateRansomDefenseStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRansomDefenseStrategyOutcomeCallable CreateRansomDefenseStrategyCallable(const Model::CreateRansomDefenseStrategyRequest& request);

                /**
                 *该接口可以对入侵检测-文件查杀扫描检测
                 * @param req CreateScanMalwareSettingRequest
                 * @return CreateScanMalwareSettingOutcome
                 */
                CreateScanMalwareSettingOutcome CreateScanMalwareSetting(const Model::CreateScanMalwareSettingRequest &request);
                void CreateScanMalwareSettingAsync(const Model::CreateScanMalwareSettingRequest& request, const CreateScanMalwareSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScanMalwareSettingOutcomeCallable CreateScanMalwareSettingCallable(const Model::CreateScanMalwareSettingRequest& request);

                /**
                 *添加历史搜索记录
                 * @param req CreateSearchLogRequest
                 * @return CreateSearchLogOutcome
                 */
                CreateSearchLogOutcome CreateSearchLog(const Model::CreateSearchLogRequest &request);
                void CreateSearchLogAsync(const Model::CreateSearchLogRequest& request, const CreateSearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSearchLogOutcomeCallable CreateSearchLogCallable(const Model::CreateSearchLogRequest& request);

                /**
                 *添加检索模板
                 * @param req CreateSearchTemplateRequest
                 * @return CreateSearchTemplateOutcome
                 */
                CreateSearchTemplateOutcome CreateSearchTemplate(const Model::CreateSearchTemplateRequest &request);
                void CreateSearchTemplateAsync(const Model::CreateSearchTemplateRequest& request, const CreateSearchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSearchTemplateOutcomeCallable CreateSearchTemplateCallable(const Model::CreateSearchTemplateRequest& request);

                /**
                 *提交漏洞修护
                 * @param req CreateVulFixRequest
                 * @return CreateVulFixOutcome
                 */
                CreateVulFixOutcome CreateVulFix(const Model::CreateVulFixRequest &request);
                void CreateVulFixAsync(const Model::CreateVulFixRequest& request, const CreateVulFixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulFixOutcomeCallable CreateVulFixCallable(const Model::CreateVulFixRequest& request);

                /**
                 *该接口可以创建白名单订单
                 * @param req CreateWhiteListOrderRequest
                 * @return CreateWhiteListOrderOutcome
                 */
                CreateWhiteListOrderOutcome CreateWhiteListOrder(const Model::CreateWhiteListOrderRequest &request);
                void CreateWhiteListOrderAsync(const Model::CreateWhiteListOrderRequest& request, const CreateWhiteListOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWhiteListOrderOutcomeCallable CreateWhiteListOrderCallable(const Model::CreateWhiteListOrderRequest& request);

                /**
                 *删除全部java内存马事件
                 * @param req DeleteAllJavaMemShellsRequest
                 * @return DeleteAllJavaMemShellsOutcome
                 */
                DeleteAllJavaMemShellsOutcome DeleteAllJavaMemShells(const Model::DeleteAllJavaMemShellsRequest &request);
                void DeleteAllJavaMemShellsAsync(const Model::DeleteAllJavaMemShellsRequest& request, const DeleteAllJavaMemShellsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAllJavaMemShellsOutcomeCallable DeleteAllJavaMemShellsCallable(const Model::DeleteAllJavaMemShellsRequest& request);

                /**
                 *删除阻断白名单列表
                 * @param req DeleteBanWhiteListRequest
                 * @return DeleteBanWhiteListOutcome
                 */
                DeleteBanWhiteListOutcome DeleteBanWhiteList(const Model::DeleteBanWhiteListRequest &request);
                void DeleteBanWhiteListAsync(const Model::DeleteBanWhiteListRequest& request, const DeleteBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBanWhiteListOutcomeCallable DeleteBanWhiteListCallable(const Model::DeleteBanWhiteListRequest& request);

                /**
                 *删除基线策略配置
                 * @param req DeleteBaselinePolicyRequest
                 * @return DeleteBaselinePolicyOutcome
                 */
                DeleteBaselinePolicyOutcome DeleteBaselinePolicy(const Model::DeleteBaselinePolicyRequest &request);
                void DeleteBaselinePolicyAsync(const Model::DeleteBaselinePolicyRequest& request, const DeleteBaselinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBaselinePolicyOutcomeCallable DeleteBaselinePolicyCallable(const Model::DeleteBaselinePolicyRequest& request);

                /**
                 *删除基线规则
                 * @param req DeleteBaselineRuleRequest
                 * @return DeleteBaselineRuleOutcome
                 */
                DeleteBaselineRuleOutcome DeleteBaselineRule(const Model::DeleteBaselineRuleRequest &request);
                void DeleteBaselineRuleAsync(const Model::DeleteBaselineRuleRequest& request, const DeleteBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBaselineRuleOutcomeCallable DeleteBaselineRuleCallable(const Model::DeleteBaselineRuleRequest& request);

                /**
                 *删除基线忽略规则
                 * @param req DeleteBaselineRuleIgnoreRequest
                 * @return DeleteBaselineRuleIgnoreOutcome
                 */
                DeleteBaselineRuleIgnoreOutcome DeleteBaselineRuleIgnore(const Model::DeleteBaselineRuleIgnoreRequest &request);
                void DeleteBaselineRuleIgnoreAsync(const Model::DeleteBaselineRuleIgnoreRequest& request, const DeleteBaselineRuleIgnoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBaselineRuleIgnoreOutcomeCallable DeleteBaselineRuleIgnoreCallable(const Model::DeleteBaselineRuleIgnoreRequest& request);

                /**
                 *根据基线策略id删除策略
                 * @param req DeleteBaselineStrategyRequest
                 * @return DeleteBaselineStrategyOutcome
                 */
                DeleteBaselineStrategyOutcome DeleteBaselineStrategy(const Model::DeleteBaselineStrategyRequest &request);
                void DeleteBaselineStrategyAsync(const Model::DeleteBaselineStrategyRequest& request, const DeleteBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBaselineStrategyOutcomeCallable DeleteBaselineStrategyCallable(const Model::DeleteBaselineStrategyRequest& request);

                /**
                 *删除基线弱口令
                 * @param req DeleteBaselineWeakPasswordRequest
                 * @return DeleteBaselineWeakPasswordOutcome
                 */
                DeleteBaselineWeakPasswordOutcome DeleteBaselineWeakPassword(const Model::DeleteBaselineWeakPasswordRequest &request);
                void DeleteBaselineWeakPasswordAsync(const Model::DeleteBaselineWeakPasswordRequest& request, const DeleteBaselineWeakPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBaselineWeakPasswordOutcomeCallable DeleteBaselineWeakPasswordCallable(const Model::DeleteBaselineWeakPasswordRequest& request);

                /**
                 *根据Ids删除高危命令事件
                 * @param req DeleteBashEventsRequest
                 * @return DeleteBashEventsOutcome
                 */
                DeleteBashEventsOutcome DeleteBashEvents(const Model::DeleteBashEventsRequest &request);
                void DeleteBashEventsAsync(const Model::DeleteBashEventsRequest& request, const DeleteBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBashEventsOutcomeCallable DeleteBashEventsCallable(const Model::DeleteBashEventsRequest& request);

                /**
                 *删除高危命令策略
                 * @param req DeleteBashPoliciesRequest
                 * @return DeleteBashPoliciesOutcome
                 */
                DeleteBashPoliciesOutcome DeleteBashPolicies(const Model::DeleteBashPoliciesRequest &request);
                void DeleteBashPoliciesAsync(const Model::DeleteBashPoliciesRequest& request, const DeleteBashPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBashPoliciesOutcomeCallable DeleteBashPoliciesCallable(const Model::DeleteBashPoliciesRequest& request);

                /**
                 *删除高危命令规则
                 * @param req DeleteBashRulesRequest
                 * @return DeleteBashRulesOutcome
                 */
                DeleteBashRulesOutcome DeleteBashRules(const Model::DeleteBashRulesRequest &request);
                void DeleteBashRulesAsync(const Model::DeleteBashRulesRequest& request, const DeleteBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBashRulesOutcomeCallable DeleteBashRulesCallable(const Model::DeleteBashRulesRequest& request);

                /**
                 *本接口 (DeleteBruteAttacks) 用于删除暴力破解记录。
                 * @param req DeleteBruteAttacksRequest
                 * @return DeleteBruteAttacksOutcome
                 */
                DeleteBruteAttacksOutcome DeleteBruteAttacks(const Model::DeleteBruteAttacksRequest &request);
                void DeleteBruteAttacksAsync(const Model::DeleteBruteAttacksRequest& request, const DeleteBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBruteAttacksOutcomeCallable DeleteBruteAttacksCallable(const Model::DeleteBruteAttacksRequest& request);

                /**
                 *对授权管理-订单列表内已过期的订单进行删除.(删除后的订单不在统计范畴内)
                 * @param req DeleteLicenseRecordRequest
                 * @return DeleteLicenseRecordOutcome
                 */
                DeleteLicenseRecordOutcome DeleteLicenseRecord(const Model::DeleteLicenseRecordRequest &request);
                void DeleteLicenseRecordAsync(const Model::DeleteLicenseRecordRequest& request, const DeleteLicenseRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLicenseRecordOutcomeCallable DeleteLicenseRecordCallable(const Model::DeleteLicenseRecordRequest& request);

                /**
                 *删除授权全部记录
                 * @param req DeleteLicenseRecordAllRequest
                 * @return DeleteLicenseRecordAllOutcome
                 */
                DeleteLicenseRecordAllOutcome DeleteLicenseRecordAll(const Model::DeleteLicenseRecordAllRequest &request);
                void DeleteLicenseRecordAllAsync(const Model::DeleteLicenseRecordAllRequest& request, const DeleteLicenseRecordAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLicenseRecordAllOutcomeCallable DeleteLicenseRecordAllCallable(const Model::DeleteLicenseRecordAllRequest& request);

                /**
                 *删除日志下载任务
                 * @param req DeleteLogExportRequest
                 * @return DeleteLogExportOutcome
                 */
                DeleteLogExportOutcome DeleteLogExport(const Model::DeleteLogExportRequest &request);
                void DeleteLogExportAsync(const Model::DeleteLogExportRequest& request, const DeleteLogExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLogExportOutcomeCallable DeleteLogExportCallable(const Model::DeleteLogExportRequest& request);

                /**
                 *本接口用于删除异地登录白名单规则。
                 * @param req DeleteLoginWhiteListRequest
                 * @return DeleteLoginWhiteListOutcome
                 */
                DeleteLoginWhiteListOutcome DeleteLoginWhiteList(const Model::DeleteLoginWhiteListRequest &request);
                void DeleteLoginWhiteListAsync(const Model::DeleteLoginWhiteListRequest& request, const DeleteLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoginWhiteListOutcomeCallable DeleteLoginWhiteListCallable(const Model::DeleteLoginWhiteListRequest& request);

                /**
                 *本接口（DeleteMachine）用于卸载主机安全客户端。
                 * @param req DeleteMachineRequest
                 * @return DeleteMachineOutcome
                 */
                DeleteMachineOutcome DeleteMachine(const Model::DeleteMachineRequest &request);
                void DeleteMachineAsync(const Model::DeleteMachineRequest& request, const DeleteMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineOutcomeCallable DeleteMachineCallable(const Model::DeleteMachineRequest& request);

                /**
                 *删除机器清理记录
                 * @param req DeleteMachineClearHistoryRequest
                 * @return DeleteMachineClearHistoryOutcome
                 */
                DeleteMachineClearHistoryOutcome DeleteMachineClearHistory(const Model::DeleteMachineClearHistoryRequest &request);
                void DeleteMachineClearHistoryAsync(const Model::DeleteMachineClearHistoryRequest& request, const DeleteMachineClearHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineClearHistoryOutcomeCallable DeleteMachineClearHistoryCallable(const Model::DeleteMachineClearHistoryRequest& request);

                /**
                 *删除服务器关联的标签
                 * @param req DeleteMachineTagRequest
                 * @return DeleteMachineTagOutcome
                 */
                DeleteMachineTagOutcome DeleteMachineTag(const Model::DeleteMachineTagRequest &request);
                void DeleteMachineTagAsync(const Model::DeleteMachineTagRequest& request, const DeleteMachineTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineTagOutcomeCallable DeleteMachineTagCallable(const Model::DeleteMachineTagRequest& request);

                /**
                 *删除恶意请求白名单
                 * @param req DeleteMaliciousRequestWhiteListRequest
                 * @return DeleteMaliciousRequestWhiteListOutcome
                 */
                DeleteMaliciousRequestWhiteListOutcome DeleteMaliciousRequestWhiteList(const Model::DeleteMaliciousRequestWhiteListRequest &request);
                void DeleteMaliciousRequestWhiteListAsync(const Model::DeleteMaliciousRequestWhiteListRequest& request, const DeleteMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMaliciousRequestWhiteListOutcomeCallable DeleteMaliciousRequestWhiteListCallable(const Model::DeleteMaliciousRequestWhiteListRequest& request);

                /**
                 *本接口 (DeleteMaliciousRequests) 用于删除恶意请求记录。
                 * @param req DeleteMaliciousRequestsRequest
                 * @return DeleteMaliciousRequestsOutcome
                 */
                DeleteMaliciousRequestsOutcome DeleteMaliciousRequests(const Model::DeleteMaliciousRequestsRequest &request);
                void DeleteMaliciousRequestsAsync(const Model::DeleteMaliciousRequestsRequest& request, const DeleteMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMaliciousRequestsOutcomeCallable DeleteMaliciousRequestsCallable(const Model::DeleteMaliciousRequestsRequest& request);

                /**
                 *入侵管理-终止扫描任务
                 * @param req DeleteMalwareScanTaskRequest
                 * @return DeleteMalwareScanTaskOutcome
                 */
                DeleteMalwareScanTaskOutcome DeleteMalwareScanTask(const Model::DeleteMalwareScanTaskRequest &request);
                void DeleteMalwareScanTaskAsync(const Model::DeleteMalwareScanTaskRequest& request, const DeleteMalwareScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMalwareScanTaskOutcomeCallable DeleteMalwareScanTaskCallable(const Model::DeleteMalwareScanTaskRequest& request);

                /**
                 *删除木马白名单
                 * @param req DeleteMalwareWhiteListRequest
                 * @return DeleteMalwareWhiteListOutcome
                 */
                DeleteMalwareWhiteListOutcome DeleteMalwareWhiteList(const Model::DeleteMalwareWhiteListRequest &request);
                void DeleteMalwareWhiteListAsync(const Model::DeleteMalwareWhiteListRequest& request, const DeleteMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMalwareWhiteListOutcomeCallable DeleteMalwareWhiteListCallable(const Model::DeleteMalwareWhiteListRequest& request);

                /**
                 *本接口 (DeleteMalwares) 用于删除木马记录。
                 * @param req DeleteMalwaresRequest
                 * @return DeleteMalwaresOutcome
                 */
                DeleteMalwaresOutcome DeleteMalwares(const Model::DeleteMalwaresRequest &request);
                void DeleteMalwaresAsync(const Model::DeleteMalwaresRequest& request, const DeleteMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMalwaresOutcomeCallable DeleteMalwaresCallable(const Model::DeleteMalwaresRequest& request);

                /**
                 *删除网络攻击白名单
                 * @param req DeleteNetAttackWhiteListRequest
                 * @return DeleteNetAttackWhiteListOutcome
                 */
                DeleteNetAttackWhiteListOutcome DeleteNetAttackWhiteList(const Model::DeleteNetAttackWhiteListRequest &request);
                void DeleteNetAttackWhiteListAsync(const Model::DeleteNetAttackWhiteListRequest& request, const DeleteNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNetAttackWhiteListOutcomeCallable DeleteNetAttackWhiteListCallable(const Model::DeleteNetAttackWhiteListRequest& request);

                /**
                 *本接口 (DeleteNonlocalLoginPlaces) 用于删除异地登录记录。
                 * @param req DeleteNonlocalLoginPlacesRequest
                 * @return DeleteNonlocalLoginPlacesOutcome
                 */
                DeleteNonlocalLoginPlacesOutcome DeleteNonlocalLoginPlaces(const Model::DeleteNonlocalLoginPlacesRequest &request);
                void DeleteNonlocalLoginPlacesAsync(const Model::DeleteNonlocalLoginPlacesRequest& request, const DeleteNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNonlocalLoginPlacesOutcomeCallable DeleteNonlocalLoginPlacesCallable(const Model::DeleteNonlocalLoginPlacesRequest& request);

                /**
                 *根据Ids删除本地提权
                 * @param req DeletePrivilegeEventsRequest
                 * @return DeletePrivilegeEventsOutcome
                 */
                DeletePrivilegeEventsOutcome DeletePrivilegeEvents(const Model::DeletePrivilegeEventsRequest &request);
                void DeletePrivilegeEventsAsync(const Model::DeletePrivilegeEventsRequest& request, const DeletePrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivilegeEventsOutcomeCallable DeletePrivilegeEventsCallable(const Model::DeletePrivilegeEventsRequest& request);

                /**
                 *删除本地提权规则
                 * @param req DeletePrivilegeRulesRequest
                 * @return DeletePrivilegeRulesOutcome
                 */
                DeletePrivilegeRulesOutcome DeletePrivilegeRules(const Model::DeletePrivilegeRulesRequest &request);
                void DeletePrivilegeRulesAsync(const Model::DeletePrivilegeRulesRequest& request, const DeletePrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivilegeRulesOutcomeCallable DeletePrivilegeRulesCallable(const Model::DeletePrivilegeRulesRequest& request);

                /**
                 *删除防护网站
                 * @param req DeleteProtectDirRequest
                 * @return DeleteProtectDirOutcome
                 */
                DeleteProtectDirOutcome DeleteProtectDir(const Model::DeleteProtectDirRequest &request);
                void DeleteProtectDirAsync(const Model::DeleteProtectDirRequest& request, const DeleteProtectDirAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProtectDirOutcomeCallable DeleteProtectDirCallable(const Model::DeleteProtectDirRequest& request);

                /**
                 *删除漏洞防御白名单
                 * @param req DeleteRaspRulesRequest
                 * @return DeleteRaspRulesOutcome
                 */
                DeleteRaspRulesOutcome DeleteRaspRules(const Model::DeleteRaspRulesRequest &request);
                void DeleteRaspRulesAsync(const Model::DeleteRaspRulesRequest& request, const DeleteRaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRaspRulesOutcomeCallable DeleteRaspRulesCallable(const Model::DeleteRaspRulesRequest& request);

                /**
                 *根据Ids删除反弹Shell事件
                 * @param req DeleteReverseShellEventsRequest
                 * @return DeleteReverseShellEventsOutcome
                 */
                DeleteReverseShellEventsOutcome DeleteReverseShellEvents(const Model::DeleteReverseShellEventsRequest &request);
                void DeleteReverseShellEventsAsync(const Model::DeleteReverseShellEventsRequest& request, const DeleteReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReverseShellEventsOutcomeCallable DeleteReverseShellEventsCallable(const Model::DeleteReverseShellEventsRequest& request);

                /**
                 *删除反弹Shell规则
                 * @param req DeleteReverseShellRulesRequest
                 * @return DeleteReverseShellRulesOutcome
                 */
                DeleteReverseShellRulesOutcome DeleteReverseShellRules(const Model::DeleteReverseShellRulesRequest &request);
                void DeleteReverseShellRulesAsync(const Model::DeleteReverseShellRulesRequest& request, const DeleteReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReverseShellRulesOutcomeCallable DeleteReverseShellRulesCallable(const Model::DeleteReverseShellRulesRequest& request);

                /**
                 *删除恶意请求事件
                 * @param req DeleteRiskDnsEventRequest
                 * @return DeleteRiskDnsEventOutcome
                 */
                DeleteRiskDnsEventOutcome DeleteRiskDnsEvent(const Model::DeleteRiskDnsEventRequest &request);
                void DeleteRiskDnsEventAsync(const Model::DeleteRiskDnsEventRequest& request, const DeleteRiskDnsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRiskDnsEventOutcomeCallable DeleteRiskDnsEventCallable(const Model::DeleteRiskDnsEventRequest& request);

                /**
                 *删除恶意请求策略
                 * @param req DeleteRiskDnsPolicyRequest
                 * @return DeleteRiskDnsPolicyOutcome
                 */
                DeleteRiskDnsPolicyOutcome DeleteRiskDnsPolicy(const Model::DeleteRiskDnsPolicyRequest &request);
                void DeleteRiskDnsPolicyAsync(const Model::DeleteRiskDnsPolicyRequest& request, const DeleteRiskDnsPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRiskDnsPolicyOutcomeCallable DeleteRiskDnsPolicyCallable(const Model::DeleteRiskDnsPolicyRequest& request);

                /**
                 *DeleteScanTask 该接口可以对指定类型的扫描任务进行停止扫描;
                 * @param req DeleteScanTaskRequest
                 * @return DeleteScanTaskOutcome
                 */
                DeleteScanTaskOutcome DeleteScanTask(const Model::DeleteScanTaskRequest &request);
                void DeleteScanTaskAsync(const Model::DeleteScanTaskRequest& request, const DeleteScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScanTaskOutcomeCallable DeleteScanTaskCallable(const Model::DeleteScanTaskRequest& request);

                /**
                 *删除检索模板
                 * @param req DeleteSearchTemplateRequest
                 * @return DeleteSearchTemplateOutcome
                 */
                DeleteSearchTemplateOutcome DeleteSearchTemplate(const Model::DeleteSearchTemplateRequest &request);
                void DeleteSearchTemplateAsync(const Model::DeleteSearchTemplateRequest& request, const DeleteSearchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSearchTemplateOutcomeCallable DeleteSearchTemplateCallable(const Model::DeleteSearchTemplateRequest& request);

                /**
                 *删除标签
                 * @param req DeleteTagsRequest
                 * @return DeleteTagsOutcome
                 */
                DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest &request);
                void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request);

                /**
                 *删除告警策略
                 * @param req DeleteWebHookPolicyRequest
                 * @return DeleteWebHookPolicyOutcome
                 */
                DeleteWebHookPolicyOutcome DeleteWebHookPolicy(const Model::DeleteWebHookPolicyRequest &request);
                void DeleteWebHookPolicyAsync(const Model::DeleteWebHookPolicyRequest& request, const DeleteWebHookPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebHookPolicyOutcomeCallable DeleteWebHookPolicyCallable(const Model::DeleteWebHookPolicyRequest& request);

                /**
                 *删除告警接收人
                 * @param req DeleteWebHookReceiverRequest
                 * @return DeleteWebHookReceiverOutcome
                 */
                DeleteWebHookReceiverOutcome DeleteWebHookReceiver(const Model::DeleteWebHookReceiverRequest &request);
                void DeleteWebHookReceiverAsync(const Model::DeleteWebHookReceiverRequest& request, const DeleteWebHookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebHookReceiverOutcomeCallable DeleteWebHookReceiverCallable(const Model::DeleteWebHookReceiverRequest& request);

                /**
                 *删除企微机器人规则
                 * @param req DeleteWebHookRuleRequest
                 * @return DeleteWebHookRuleOutcome
                 */
                DeleteWebHookRuleOutcome DeleteWebHookRule(const Model::DeleteWebHookRuleRequest &request);
                void DeleteWebHookRuleAsync(const Model::DeleteWebHookRuleRequest& request, const DeleteWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebHookRuleOutcomeCallable DeleteWebHookRuleCallable(const Model::DeleteWebHookRuleRequest& request);

                /**
                 *网站防篡改-删除事件记录
                 * @param req DeleteWebPageEventLogRequest
                 * @return DeleteWebPageEventLogOutcome
                 */
                DeleteWebPageEventLogOutcome DeleteWebPageEventLog(const Model::DeleteWebPageEventLogRequest &request);
                void DeleteWebPageEventLogAsync(const Model::DeleteWebPageEventLogRequest& request, const DeleteWebPageEventLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebPageEventLogOutcomeCallable DeleteWebPageEventLogCallable(const Model::DeleteWebPageEventLogRequest& request);

                /**
                 *获取用户当前灰度配置
                 * @param req DescribeABTestConfigRequest
                 * @return DescribeABTestConfigOutcome
                 */
                DescribeABTestConfigOutcome DescribeABTestConfig(const Model::DescribeABTestConfigRequest &request);
                void DescribeABTestConfigAsync(const Model::DescribeABTestConfigRequest& request, const DescribeABTestConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeABTestConfigOutcomeCallable DescribeABTestConfigCallable(const Model::DescribeABTestConfigRequest& request);

                /**
                 *获取配置的aeskey和aesiv
                 * @param req DescribeAESKeyRequest
                 * @return DescribeAESKeyOutcome
                 */
                DescribeAESKeyOutcome DescribeAESKey(const Model::DescribeAESKeyRequest &request);
                void DescribeAESKeyAsync(const Model::DescribeAESKeyRequest& request, const DescribeAESKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAESKeyOutcomeCallable DescribeAESKeyCallable(const Model::DescribeAESKeyRequest& request);

                /**
                 *本接口 (DescribeAccountStatistics) 用于获取帐号统计列表数据。
                 * @param req DescribeAccountStatisticsRequest
                 * @return DescribeAccountStatisticsOutcome
                 */
                DescribeAccountStatisticsOutcome DescribeAccountStatistics(const Model::DescribeAccountStatisticsRequest &request);
                void DescribeAccountStatisticsAsync(const Model::DescribeAccountStatisticsRequest& request, const DescribeAccountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountStatisticsOutcomeCallable DescribeAccountStatisticsCallable(const Model::DescribeAccountStatisticsRequest& request);

                /**
                 *获取agent安装命令
                 * @param req DescribeAgentInstallCommandRequest
                 * @return DescribeAgentInstallCommandOutcome
                 */
                DescribeAgentInstallCommandOutcome DescribeAgentInstallCommand(const Model::DescribeAgentInstallCommandRequest &request);
                void DescribeAgentInstallCommandAsync(const Model::DescribeAgentInstallCommandRequest& request, const DescribeAgentInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentInstallCommandOutcomeCallable DescribeAgentInstallCommandCallable(const Model::DescribeAgentInstallCommandRequest& request);

                /**
                 *混合云安装agent token获取
                 * @param req DescribeAgentInstallationTokenRequest
                 * @return DescribeAgentInstallationTokenOutcome
                 */
                DescribeAgentInstallationTokenOutcome DescribeAgentInstallationToken(const Model::DescribeAgentInstallationTokenRequest &request);
                void DescribeAgentInstallationTokenAsync(const Model::DescribeAgentInstallationTokenRequest& request, const DescribeAgentInstallationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentInstallationTokenOutcomeCallable DescribeAgentInstallationTokenCallable(const Model::DescribeAgentInstallationTokenRequest& request);

                /**
                 *获取告警点所在事件的所有节点信息
                 * @param req DescribeAlarmIncidentNodesRequest
                 * @return DescribeAlarmIncidentNodesOutcome
                 */
                DescribeAlarmIncidentNodesOutcome DescribeAlarmIncidentNodes(const Model::DescribeAlarmIncidentNodesRequest &request);
                void DescribeAlarmIncidentNodesAsync(const Model::DescribeAlarmIncidentNodesRequest& request, const DescribeAlarmIncidentNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmIncidentNodesOutcomeCallable DescribeAlarmIncidentNodesCallable(const Model::DescribeAlarmIncidentNodesRequest& request);

                /**
                 *查询告警点id列表
                 * @param req DescribeAlarmVertexIdRequest
                 * @return DescribeAlarmVertexIdOutcome
                 */
                DescribeAlarmVertexIdOutcome DescribeAlarmVertexId(const Model::DescribeAlarmVertexIdRequest &request);
                void DescribeAlarmVertexIdAsync(const Model::DescribeAlarmVertexIdRequest& request, const DescribeAlarmVertexIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmVertexIdOutcomeCallable DescribeAlarmVertexIdCallable(const Model::DescribeAlarmVertexIdRequest& request);

                /**
                 *获取所有软件应用数量
                 * @param req DescribeAssetAppCountRequest
                 * @return DescribeAssetAppCountOutcome
                 */
                DescribeAssetAppCountOutcome DescribeAssetAppCount(const Model::DescribeAssetAppCountRequest &request);
                void DescribeAssetAppCountAsync(const Model::DescribeAssetAppCountRequest& request, const DescribeAssetAppCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetAppCountOutcomeCallable DescribeAssetAppCountCallable(const Model::DescribeAssetAppCountRequest& request);

                /**
                 *查询应用列表
                 * @param req DescribeAssetAppListRequest
                 * @return DescribeAssetAppListOutcome
                 */
                DescribeAssetAppListOutcome DescribeAssetAppList(const Model::DescribeAssetAppListRequest &request);
                void DescribeAssetAppListAsync(const Model::DescribeAssetAppListRequest& request, const DescribeAssetAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetAppListOutcomeCallable DescribeAssetAppListCallable(const Model::DescribeAssetAppListRequest& request);

                /**
                 *获取软件关联进程列表
                 * @param req DescribeAssetAppProcessListRequest
                 * @return DescribeAssetAppProcessListOutcome
                 */
                DescribeAssetAppProcessListOutcome DescribeAssetAppProcessList(const Model::DescribeAssetAppProcessListRequest &request);
                void DescribeAssetAppProcessListAsync(const Model::DescribeAssetAppProcessListRequest& request, const DescribeAssetAppProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetAppProcessListOutcomeCallable DescribeAssetAppProcessListCallable(const Model::DescribeAssetAppProcessListRequest& request);

                /**
                 *获取内核模块详情
                 * @param req DescribeAssetCoreModuleInfoRequest
                 * @return DescribeAssetCoreModuleInfoOutcome
                 */
                DescribeAssetCoreModuleInfoOutcome DescribeAssetCoreModuleInfo(const Model::DescribeAssetCoreModuleInfoRequest &request);
                void DescribeAssetCoreModuleInfoAsync(const Model::DescribeAssetCoreModuleInfoRequest& request, const DescribeAssetCoreModuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetCoreModuleInfoOutcomeCallable DescribeAssetCoreModuleInfoCallable(const Model::DescribeAssetCoreModuleInfoRequest& request);

                /**
                 *查询资产管理内核模块列表
                 * @param req DescribeAssetCoreModuleListRequest
                 * @return DescribeAssetCoreModuleListOutcome
                 */
                DescribeAssetCoreModuleListOutcome DescribeAssetCoreModuleList(const Model::DescribeAssetCoreModuleListRequest &request);
                void DescribeAssetCoreModuleListAsync(const Model::DescribeAssetCoreModuleListRequest& request, const DescribeAssetCoreModuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetCoreModuleListOutcomeCallable DescribeAssetCoreModuleListCallable(const Model::DescribeAssetCoreModuleListRequest& request);

                /**
                 *获取所有数据库数量
                 * @param req DescribeAssetDatabaseCountRequest
                 * @return DescribeAssetDatabaseCountOutcome
                 */
                DescribeAssetDatabaseCountOutcome DescribeAssetDatabaseCount(const Model::DescribeAssetDatabaseCountRequest &request);
                void DescribeAssetDatabaseCountAsync(const Model::DescribeAssetDatabaseCountRequest& request, const DescribeAssetDatabaseCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetDatabaseCountOutcomeCallable DescribeAssetDatabaseCountCallable(const Model::DescribeAssetDatabaseCountRequest& request);

                /**
                 *获取资产管理数据库详情
                 * @param req DescribeAssetDatabaseInfoRequest
                 * @return DescribeAssetDatabaseInfoOutcome
                 */
                DescribeAssetDatabaseInfoOutcome DescribeAssetDatabaseInfo(const Model::DescribeAssetDatabaseInfoRequest &request);
                void DescribeAssetDatabaseInfoAsync(const Model::DescribeAssetDatabaseInfoRequest& request, const DescribeAssetDatabaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetDatabaseInfoOutcomeCallable DescribeAssetDatabaseInfoCallable(const Model::DescribeAssetDatabaseInfoRequest& request);

                /**
                 *查询资产管理数据库列表
                 * @param req DescribeAssetDatabaseListRequest
                 * @return DescribeAssetDatabaseListOutcome
                 */
                DescribeAssetDatabaseListOutcome DescribeAssetDatabaseList(const Model::DescribeAssetDatabaseListRequest &request);
                void DescribeAssetDatabaseListAsync(const Model::DescribeAssetDatabaseListRequest& request, const DescribeAssetDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetDatabaseListOutcomeCallable DescribeAssetDatabaseListCallable(const Model::DescribeAssetDatabaseListRequest& request);

                /**
                 *获取主机磁盘分区列表
                 * @param req DescribeAssetDiskListRequest
                 * @return DescribeAssetDiskListOutcome
                 */
                DescribeAssetDiskListOutcome DescribeAssetDiskList(const Model::DescribeAssetDiskListRequest &request);
                void DescribeAssetDiskListAsync(const Model::DescribeAssetDiskListRequest& request, const DescribeAssetDiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetDiskListOutcomeCallable DescribeAssetDiskListCallable(const Model::DescribeAssetDiskListRequest& request);

                /**
                 *查询资产管理环境变量列表
                 * @param req DescribeAssetEnvListRequest
                 * @return DescribeAssetEnvListOutcome
                 */
                DescribeAssetEnvListOutcome DescribeAssetEnvList(const Model::DescribeAssetEnvListRequest &request);
                void DescribeAssetEnvListAsync(const Model::DescribeAssetEnvListRequest& request, const DescribeAssetEnvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetEnvListOutcomeCallable DescribeAssetEnvListCallable(const Model::DescribeAssetEnvListRequest& request);

                /**
                 *获取主机所有资源数量
                 * @param req DescribeAssetHostTotalCountRequest
                 * @return DescribeAssetHostTotalCountOutcome
                 */
                DescribeAssetHostTotalCountOutcome DescribeAssetHostTotalCount(const Model::DescribeAssetHostTotalCountRequest &request);
                void DescribeAssetHostTotalCountAsync(const Model::DescribeAssetHostTotalCountRequest& request, const DescribeAssetHostTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetHostTotalCountOutcomeCallable DescribeAssetHostTotalCountCallable(const Model::DescribeAssetHostTotalCountRequest& request);

                /**
                 *获取资产数量： 主机数、账号数、端口数、进程数、软件数、数据库数、Web应用数、Web框架数、Web服务数、Web站点数
                 * @param req DescribeAssetInfoRequest
                 * @return DescribeAssetInfoOutcome
                 */
                DescribeAssetInfoOutcome DescribeAssetInfo(const Model::DescribeAssetInfoRequest &request);
                void DescribeAssetInfoAsync(const Model::DescribeAssetInfoRequest& request, const DescribeAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetInfoOutcomeCallable DescribeAssetInfoCallable(const Model::DescribeAssetInfoRequest& request);

                /**
                 *查询资产管理启动服务列表
                 * @param req DescribeAssetInitServiceListRequest
                 * @return DescribeAssetInitServiceListOutcome
                 */
                DescribeAssetInitServiceListOutcome DescribeAssetInitServiceList(const Model::DescribeAssetInitServiceListRequest &request);
                void DescribeAssetInitServiceListAsync(const Model::DescribeAssetInitServiceListRequest& request, const DescribeAssetInitServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetInitServiceListOutcomeCallable DescribeAssetInitServiceListCallable(const Model::DescribeAssetInitServiceListRequest& request);

                /**
                 *获取Jar包详情
                 * @param req DescribeAssetJarInfoRequest
                 * @return DescribeAssetJarInfoOutcome
                 */
                DescribeAssetJarInfoOutcome DescribeAssetJarInfo(const Model::DescribeAssetJarInfoRequest &request);
                void DescribeAssetJarInfoAsync(const Model::DescribeAssetJarInfoRequest& request, const DescribeAssetJarInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetJarInfoOutcomeCallable DescribeAssetJarInfoCallable(const Model::DescribeAssetJarInfoRequest& request);

                /**
                 *查询Jar包列表
                 * @param req DescribeAssetJarListRequest
                 * @return DescribeAssetJarListOutcome
                 */
                DescribeAssetJarListOutcome DescribeAssetJarList(const Model::DescribeAssetJarListRequest &request);
                void DescribeAssetJarListAsync(const Model::DescribeAssetJarListRequest& request, const DescribeAssetJarListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetJarListOutcomeCallable DescribeAssetJarListCallable(const Model::DescribeAssetJarListRequest& request);

                /**
                 *获取系统负载、内存使用率、硬盘使用率情况
                 * @param req DescribeAssetLoadInfoRequest
                 * @return DescribeAssetLoadInfoOutcome
                 */
                DescribeAssetLoadInfoOutcome DescribeAssetLoadInfo(const Model::DescribeAssetLoadInfoRequest &request);
                void DescribeAssetLoadInfoAsync(const Model::DescribeAssetLoadInfoRequest& request, const DescribeAssetLoadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetLoadInfoOutcomeCallable DescribeAssetLoadInfoCallable(const Model::DescribeAssetLoadInfoRequest& request);

                /**
                 *获取资产管理主机资源详细信息
                 * @param req DescribeAssetMachineDetailRequest
                 * @return DescribeAssetMachineDetailOutcome
                 */
                DescribeAssetMachineDetailOutcome DescribeAssetMachineDetail(const Model::DescribeAssetMachineDetailRequest &request);
                void DescribeAssetMachineDetailAsync(const Model::DescribeAssetMachineDetailRequest& request, const DescribeAssetMachineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetMachineDetailOutcomeCallable DescribeAssetMachineDetailCallable(const Model::DescribeAssetMachineDetailRequest& request);

                /**
                 *获取资产指纹页面的资源监控列表
                 * @param req DescribeAssetMachineListRequest
                 * @return DescribeAssetMachineListOutcome
                 */
                DescribeAssetMachineListOutcome DescribeAssetMachineList(const Model::DescribeAssetMachineListRequest &request);
                void DescribeAssetMachineListAsync(const Model::DescribeAssetMachineListRequest& request, const DescribeAssetMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetMachineListOutcomeCallable DescribeAssetMachineListCallable(const Model::DescribeAssetMachineListRequest& request);

                /**
                 *获取主机标签Top5
                 * @param req DescribeAssetMachineTagTopRequest
                 * @return DescribeAssetMachineTagTopOutcome
                 */
                DescribeAssetMachineTagTopOutcome DescribeAssetMachineTagTop(const Model::DescribeAssetMachineTagTopRequest &request);
                void DescribeAssetMachineTagTopAsync(const Model::DescribeAssetMachineTagTopRequest& request, const DescribeAssetMachineTagTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetMachineTagTopOutcomeCallable DescribeAssetMachineTagTopCallable(const Model::DescribeAssetMachineTagTopRequest& request);

                /**
                 *查询资产管理计划任务列表
                 * @param req DescribeAssetPlanTaskListRequest
                 * @return DescribeAssetPlanTaskListOutcome
                 */
                DescribeAssetPlanTaskListOutcome DescribeAssetPlanTaskList(const Model::DescribeAssetPlanTaskListRequest &request);
                void DescribeAssetPlanTaskListAsync(const Model::DescribeAssetPlanTaskListRequest& request, const DescribeAssetPlanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetPlanTaskListOutcomeCallable DescribeAssetPlanTaskListCallable(const Model::DescribeAssetPlanTaskListRequest& request);

                /**
                 *获取所有端口数量
                 * @param req DescribeAssetPortCountRequest
                 * @return DescribeAssetPortCountOutcome
                 */
                DescribeAssetPortCountOutcome DescribeAssetPortCount(const Model::DescribeAssetPortCountRequest &request);
                void DescribeAssetPortCountAsync(const Model::DescribeAssetPortCountRequest& request, const DescribeAssetPortCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetPortCountOutcomeCallable DescribeAssetPortCountCallable(const Model::DescribeAssetPortCountRequest& request);

                /**
                 *获取资产管理端口列表
                 * @param req DescribeAssetPortInfoListRequest
                 * @return DescribeAssetPortInfoListOutcome
                 */
                DescribeAssetPortInfoListOutcome DescribeAssetPortInfoList(const Model::DescribeAssetPortInfoListRequest &request);
                void DescribeAssetPortInfoListAsync(const Model::DescribeAssetPortInfoListRequest& request, const DescribeAssetPortInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetPortInfoListOutcomeCallable DescribeAssetPortInfoListCallable(const Model::DescribeAssetPortInfoListRequest& request);

                /**
                 *获取所有进程数量
                 * @param req DescribeAssetProcessCountRequest
                 * @return DescribeAssetProcessCountOutcome
                 */
                DescribeAssetProcessCountOutcome DescribeAssetProcessCount(const Model::DescribeAssetProcessCountRequest &request);
                void DescribeAssetProcessCountAsync(const Model::DescribeAssetProcessCountRequest& request, const DescribeAssetProcessCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetProcessCountOutcomeCallable DescribeAssetProcessCountCallable(const Model::DescribeAssetProcessCountRequest& request);

                /**
                 *获取资产管理进程列表
                 * @param req DescribeAssetProcessInfoListRequest
                 * @return DescribeAssetProcessInfoListOutcome
                 */
                DescribeAssetProcessInfoListOutcome DescribeAssetProcessInfoList(const Model::DescribeAssetProcessInfoListRequest &request);
                void DescribeAssetProcessInfoListAsync(const Model::DescribeAssetProcessInfoListRequest& request, const DescribeAssetProcessInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetProcessInfoListOutcomeCallable DescribeAssetProcessInfoListCallable(const Model::DescribeAssetProcessInfoListRequest& request);

                /**
                 *获取主机最近趋势情况
                 * @param req DescribeAssetRecentMachineInfoRequest
                 * @return DescribeAssetRecentMachineInfoOutcome
                 */
                DescribeAssetRecentMachineInfoOutcome DescribeAssetRecentMachineInfo(const Model::DescribeAssetRecentMachineInfoRequest &request);
                void DescribeAssetRecentMachineInfoAsync(const Model::DescribeAssetRecentMachineInfoRequest& request, const DescribeAssetRecentMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetRecentMachineInfoOutcomeCallable DescribeAssetRecentMachineInfoCallable(const Model::DescribeAssetRecentMachineInfoRequest& request);

                /**
                 *获取资产管理系统安装包列表
                 * @param req DescribeAssetSystemPackageListRequest
                 * @return DescribeAssetSystemPackageListOutcome
                 */
                DescribeAssetSystemPackageListOutcome DescribeAssetSystemPackageList(const Model::DescribeAssetSystemPackageListRequest &request);
                void DescribeAssetSystemPackageListAsync(const Model::DescribeAssetSystemPackageListRequest& request, const DescribeAssetSystemPackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetSystemPackageListOutcomeCallable DescribeAssetSystemPackageListCallable(const Model::DescribeAssetSystemPackageListRequest& request);

                /**
                 *获取所有资源数量：主机、账号、端口、进程、软件、数据库、Web应用、Web框架、Web服务、Web站点
                 * @param req DescribeAssetTotalCountRequest
                 * @return DescribeAssetTotalCountOutcome
                 */
                DescribeAssetTotalCountOutcome DescribeAssetTotalCount(const Model::DescribeAssetTotalCountRequest &request);
                void DescribeAssetTotalCountAsync(const Model::DescribeAssetTotalCountRequest& request, const DescribeAssetTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetTotalCountOutcomeCallable DescribeAssetTotalCountCallable(const Model::DescribeAssetTotalCountRequest& request);

                /**
                 *获取各种类型资源Top5
                 * @param req DescribeAssetTypeTopRequest
                 * @return DescribeAssetTypeTopOutcome
                 */
                DescribeAssetTypeTopOutcome DescribeAssetTypeTop(const Model::DescribeAssetTypeTopRequest &request);
                void DescribeAssetTypeTopAsync(const Model::DescribeAssetTypeTopRequest& request, const DescribeAssetTypeTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetTypeTopOutcomeCallable DescribeAssetTypeTopCallable(const Model::DescribeAssetTypeTopRequest& request);

                /**
                 *获取资产指纹类型列表
                 * @param req DescribeAssetTypesRequest
                 * @return DescribeAssetTypesOutcome
                 */
                DescribeAssetTypesOutcome DescribeAssetTypes(const Model::DescribeAssetTypesRequest &request);
                void DescribeAssetTypesAsync(const Model::DescribeAssetTypesRequest& request, const DescribeAssetTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetTypesOutcomeCallable DescribeAssetTypesCallable(const Model::DescribeAssetTypesRequest& request);

                /**
                 *获取所有账号数量
                 * @param req DescribeAssetUserCountRequest
                 * @return DescribeAssetUserCountOutcome
                 */
                DescribeAssetUserCountOutcome DescribeAssetUserCount(const Model::DescribeAssetUserCountRequest &request);
                void DescribeAssetUserCountAsync(const Model::DescribeAssetUserCountRequest& request, const DescribeAssetUserCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetUserCountOutcomeCallable DescribeAssetUserCountCallable(const Model::DescribeAssetUserCountRequest& request);

                /**
                 *获取主机账号详情
                 * @param req DescribeAssetUserInfoRequest
                 * @return DescribeAssetUserInfoOutcome
                 */
                DescribeAssetUserInfoOutcome DescribeAssetUserInfo(const Model::DescribeAssetUserInfoRequest &request);
                void DescribeAssetUserInfoAsync(const Model::DescribeAssetUserInfoRequest& request, const DescribeAssetUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetUserInfoOutcomeCallable DescribeAssetUserInfoCallable(const Model::DescribeAssetUserInfoRequest& request);

                /**
                 *获取主机账号Key列表
                 * @param req DescribeAssetUserKeyListRequest
                 * @return DescribeAssetUserKeyListOutcome
                 */
                DescribeAssetUserKeyListOutcome DescribeAssetUserKeyList(const Model::DescribeAssetUserKeyListRequest &request);
                void DescribeAssetUserKeyListAsync(const Model::DescribeAssetUserKeyListRequest& request, const DescribeAssetUserKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetUserKeyListOutcomeCallable DescribeAssetUserKeyListCallable(const Model::DescribeAssetUserKeyListRequest& request);

                /**
                 *获取账号列表
                 * @param req DescribeAssetUserListRequest
                 * @return DescribeAssetUserListOutcome
                 */
                DescribeAssetUserListOutcome DescribeAssetUserList(const Model::DescribeAssetUserListRequest &request);
                void DescribeAssetUserListAsync(const Model::DescribeAssetUserListRequest& request, const DescribeAssetUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetUserListOutcomeCallable DescribeAssetUserListCallable(const Model::DescribeAssetUserListRequest& request);

                /**
                 *获取所有Web应用数量
                 * @param req DescribeAssetWebAppCountRequest
                 * @return DescribeAssetWebAppCountOutcome
                 */
                DescribeAssetWebAppCountOutcome DescribeAssetWebAppCount(const Model::DescribeAssetWebAppCountRequest &request);
                void DescribeAssetWebAppCountAsync(const Model::DescribeAssetWebAppCountRequest& request, const DescribeAssetWebAppCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebAppCountOutcomeCallable DescribeAssetWebAppCountCallable(const Model::DescribeAssetWebAppCountRequest& request);

                /**
                 *获取资产管理Web应用列表
                 * @param req DescribeAssetWebAppListRequest
                 * @return DescribeAssetWebAppListOutcome
                 */
                DescribeAssetWebAppListOutcome DescribeAssetWebAppList(const Model::DescribeAssetWebAppListRequest &request);
                void DescribeAssetWebAppListAsync(const Model::DescribeAssetWebAppListRequest& request, const DescribeAssetWebAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebAppListOutcomeCallable DescribeAssetWebAppListCallable(const Model::DescribeAssetWebAppListRequest& request);

                /**
                 *获取资产管理Web应用插件列表
                 * @param req DescribeAssetWebAppPluginListRequest
                 * @return DescribeAssetWebAppPluginListOutcome
                 */
                DescribeAssetWebAppPluginListOutcome DescribeAssetWebAppPluginList(const Model::DescribeAssetWebAppPluginListRequest &request);
                void DescribeAssetWebAppPluginListAsync(const Model::DescribeAssetWebAppPluginListRequest& request, const DescribeAssetWebAppPluginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebAppPluginListOutcomeCallable DescribeAssetWebAppPluginListCallable(const Model::DescribeAssetWebAppPluginListRequest& request);

                /**
                 *获取所有Web框架数量
                 * @param req DescribeAssetWebFrameCountRequest
                 * @return DescribeAssetWebFrameCountOutcome
                 */
                DescribeAssetWebFrameCountOutcome DescribeAssetWebFrameCount(const Model::DescribeAssetWebFrameCountRequest &request);
                void DescribeAssetWebFrameCountAsync(const Model::DescribeAssetWebFrameCountRequest& request, const DescribeAssetWebFrameCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebFrameCountOutcomeCallable DescribeAssetWebFrameCountCallable(const Model::DescribeAssetWebFrameCountRequest& request);

                /**
                 *获取资产管理Web框架列表
                 * @param req DescribeAssetWebFrameListRequest
                 * @return DescribeAssetWebFrameListOutcome
                 */
                DescribeAssetWebFrameListOutcome DescribeAssetWebFrameList(const Model::DescribeAssetWebFrameListRequest &request);
                void DescribeAssetWebFrameListAsync(const Model::DescribeAssetWebFrameListRequest& request, const DescribeAssetWebFrameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebFrameListOutcomeCallable DescribeAssetWebFrameListCallable(const Model::DescribeAssetWebFrameListRequest& request);

                /**
                 *获取所有Web站点数量
                 * @param req DescribeAssetWebLocationCountRequest
                 * @return DescribeAssetWebLocationCountOutcome
                 */
                DescribeAssetWebLocationCountOutcome DescribeAssetWebLocationCount(const Model::DescribeAssetWebLocationCountRequest &request);
                void DescribeAssetWebLocationCountAsync(const Model::DescribeAssetWebLocationCountRequest& request, const DescribeAssetWebLocationCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebLocationCountOutcomeCallable DescribeAssetWebLocationCountCallable(const Model::DescribeAssetWebLocationCountRequest& request);

                /**
                 *获取Web站点详情
                 * @param req DescribeAssetWebLocationInfoRequest
                 * @return DescribeAssetWebLocationInfoOutcome
                 */
                DescribeAssetWebLocationInfoOutcome DescribeAssetWebLocationInfo(const Model::DescribeAssetWebLocationInfoRequest &request);
                void DescribeAssetWebLocationInfoAsync(const Model::DescribeAssetWebLocationInfoRequest& request, const DescribeAssetWebLocationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebLocationInfoOutcomeCallable DescribeAssetWebLocationInfoCallable(const Model::DescribeAssetWebLocationInfoRequest& request);

                /**
                 *获取Web站点列表
                 * @param req DescribeAssetWebLocationListRequest
                 * @return DescribeAssetWebLocationListOutcome
                 */
                DescribeAssetWebLocationListOutcome DescribeAssetWebLocationList(const Model::DescribeAssetWebLocationListRequest &request);
                void DescribeAssetWebLocationListAsync(const Model::DescribeAssetWebLocationListRequest& request, const DescribeAssetWebLocationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebLocationListOutcomeCallable DescribeAssetWebLocationListCallable(const Model::DescribeAssetWebLocationListRequest& request);

                /**
                 *获取Web站点虚拟目录列表
                 * @param req DescribeAssetWebLocationPathListRequest
                 * @return DescribeAssetWebLocationPathListOutcome
                 */
                DescribeAssetWebLocationPathListOutcome DescribeAssetWebLocationPathList(const Model::DescribeAssetWebLocationPathListRequest &request);
                void DescribeAssetWebLocationPathListAsync(const Model::DescribeAssetWebLocationPathListRequest& request, const DescribeAssetWebLocationPathListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebLocationPathListOutcomeCallable DescribeAssetWebLocationPathListCallable(const Model::DescribeAssetWebLocationPathListRequest& request);

                /**
                 *获取所有Web服务数量
                 * @param req DescribeAssetWebServiceCountRequest
                 * @return DescribeAssetWebServiceCountOutcome
                 */
                DescribeAssetWebServiceCountOutcome DescribeAssetWebServiceCount(const Model::DescribeAssetWebServiceCountRequest &request);
                void DescribeAssetWebServiceCountAsync(const Model::DescribeAssetWebServiceCountRequest& request, const DescribeAssetWebServiceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebServiceCountOutcomeCallable DescribeAssetWebServiceCountCallable(const Model::DescribeAssetWebServiceCountRequest& request);

                /**
                 *查询资产管理Web服务列表
                 * @param req DescribeAssetWebServiceInfoListRequest
                 * @return DescribeAssetWebServiceInfoListOutcome
                 */
                DescribeAssetWebServiceInfoListOutcome DescribeAssetWebServiceInfoList(const Model::DescribeAssetWebServiceInfoListRequest &request);
                void DescribeAssetWebServiceInfoListAsync(const Model::DescribeAssetWebServiceInfoListRequest& request, const DescribeAssetWebServiceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebServiceInfoListOutcomeCallable DescribeAssetWebServiceInfoListCallable(const Model::DescribeAssetWebServiceInfoListRequest& request);

                /**
                 *获取Web服务关联进程列表
                 * @param req DescribeAssetWebServiceProcessListRequest
                 * @return DescribeAssetWebServiceProcessListOutcome
                 */
                DescribeAssetWebServiceProcessListOutcome DescribeAssetWebServiceProcessList(const Model::DescribeAssetWebServiceProcessListRequest &request);
                void DescribeAssetWebServiceProcessListAsync(const Model::DescribeAssetWebServiceProcessListRequest& request, const DescribeAssetWebServiceProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebServiceProcessListOutcomeCallable DescribeAssetWebServiceProcessListCallable(const Model::DescribeAssetWebServiceProcessListRequest& request);

                /**
                 *网络攻击事件详情
                 * @param req DescribeAttackEventInfoRequest
                 * @return DescribeAttackEventInfoOutcome
                 */
                DescribeAttackEventInfoOutcome DescribeAttackEventInfo(const Model::DescribeAttackEventInfoRequest &request);
                void DescribeAttackEventInfoAsync(const Model::DescribeAttackEventInfoRequest& request, const DescribeAttackEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackEventInfoOutcomeCallable DescribeAttackEventInfoCallable(const Model::DescribeAttackEventInfoRequest& request);

                /**
                 *按分页形式展示网络攻击检测事件列表
                 * @param req DescribeAttackEventsRequest
                 * @return DescribeAttackEventsOutcome
                 */
                DescribeAttackEventsOutcome DescribeAttackEvents(const Model::DescribeAttackEventsRequest &request);
                void DescribeAttackEventsAsync(const Model::DescribeAttackEventsRequest& request, const DescribeAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackEventsOutcomeCallable DescribeAttackEventsCallable(const Model::DescribeAttackEventsRequest& request);

                /**
                 *网络攻击数据统计
                 * @param req DescribeAttackStatisticsRequest
                 * @return DescribeAttackStatisticsOutcome
                 */
                DescribeAttackStatisticsOutcome DescribeAttackStatistics(const Model::DescribeAttackStatisticsRequest &request);
                void DescribeAttackStatisticsAsync(const Model::DescribeAttackStatisticsRequest& request, const DescribeAttackStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackStatisticsOutcomeCallable DescribeAttackStatisticsCallable(const Model::DescribeAttackStatisticsRequest& request);

                /**
                 *网络攻击top5数据列表
                 * @param req DescribeAttackTopRequest
                 * @return DescribeAttackTopOutcome
                 */
                DescribeAttackTopOutcome DescribeAttackTop(const Model::DescribeAttackTopRequest &request);
                void DescribeAttackTopAsync(const Model::DescribeAttackTopRequest& request, const DescribeAttackTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackTopOutcomeCallable DescribeAttackTopCallable(const Model::DescribeAttackTopRequest& request);

                /**
                 *网络攻击趋势数据
                 * @param req DescribeAttackTrendsRequest
                 * @return DescribeAttackTrendsOutcome
                 */
                DescribeAttackTrendsOutcome DescribeAttackTrends(const Model::DescribeAttackTrendsRequest &request);
                void DescribeAttackTrendsAsync(const Model::DescribeAttackTrendsRequest& request, const DescribeAttackTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackTrendsOutcomeCallable DescribeAttackTrendsCallable(const Model::DescribeAttackTrendsRequest& request);

                /**
                 *获取网络攻击威胁类型列表
                 * @param req DescribeAttackVulTypeListRequest
                 * @return DescribeAttackVulTypeListOutcome
                 */
                DescribeAttackVulTypeListOutcome DescribeAttackVulTypeList(const Model::DescribeAttackVulTypeListRequest &request);
                void DescribeAttackVulTypeListAsync(const Model::DescribeAttackVulTypeListRequest& request, const DescribeAttackVulTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackVulTypeListOutcomeCallable DescribeAttackVulTypeListCallable(const Model::DescribeAttackVulTypeListRequest& request);

                /**
                 *专家服务-可用订单详情
                 * @param req DescribeAvailableExpertServiceDetailRequest
                 * @return DescribeAvailableExpertServiceDetailOutcome
                 */
                DescribeAvailableExpertServiceDetailOutcome DescribeAvailableExpertServiceDetail(const Model::DescribeAvailableExpertServiceDetailRequest &request);
                void DescribeAvailableExpertServiceDetailAsync(const Model::DescribeAvailableExpertServiceDetailRequest& request, const DescribeAvailableExpertServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableExpertServiceDetailOutcomeCallable DescribeAvailableExpertServiceDetailCallable(const Model::DescribeAvailableExpertServiceDetailRequest& request);

                /**
                 *获取爆破阻断模式
                 * @param req DescribeBanModeRequest
                 * @return DescribeBanModeOutcome
                 */
                DescribeBanModeOutcome DescribeBanMode(const Model::DescribeBanModeRequest &request);
                void DescribeBanModeAsync(const Model::DescribeBanModeRequest& request, const DescribeBanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBanModeOutcomeCallable DescribeBanModeCallable(const Model::DescribeBanModeRequest& request);

                /**
                 *获取阻断地域
                 * @param req DescribeBanRegionsRequest
                 * @return DescribeBanRegionsOutcome
                 */
                DescribeBanRegionsOutcome DescribeBanRegions(const Model::DescribeBanRegionsRequest &request);
                void DescribeBanRegionsAsync(const Model::DescribeBanRegionsRequest& request, const DescribeBanRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBanRegionsOutcomeCallable DescribeBanRegionsCallable(const Model::DescribeBanRegionsRequest& request);

                /**
                 *获取阻断按钮状态
                 * @param req DescribeBanStatusRequest
                 * @return DescribeBanStatusOutcome
                 */
                DescribeBanStatusOutcome DescribeBanStatus(const Model::DescribeBanStatusRequest &request);
                void DescribeBanStatusAsync(const Model::DescribeBanStatusRequest& request, const DescribeBanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBanStatusOutcomeCallable DescribeBanStatusCallable(const Model::DescribeBanStatusRequest& request);

                /**
                 *获取阻断白名单列表
                 * @param req DescribeBanWhiteListRequest
                 * @return DescribeBanWhiteListOutcome
                 */
                DescribeBanWhiteListOutcome DescribeBanWhiteList(const Model::DescribeBanWhiteListRequest &request);
                void DescribeBanWhiteListAsync(const Model::DescribeBanWhiteListRequest& request, const DescribeBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBanWhiteListOutcomeCallable DescribeBanWhiteListCallable(const Model::DescribeBanWhiteListRequest& request);

                /**
                 *根据基线策略id查询基线策略数据概览统计
                 * @param req DescribeBaselineAnalysisDataRequest
                 * @return DescribeBaselineAnalysisDataOutcome
                 */
                DescribeBaselineAnalysisDataOutcome DescribeBaselineAnalysisData(const Model::DescribeBaselineAnalysisDataRequest &request);
                void DescribeBaselineAnalysisDataAsync(const Model::DescribeBaselineAnalysisDataRequest& request, const DescribeBaselineAnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineAnalysisDataOutcomeCallable DescribeBaselineAnalysisDataCallable(const Model::DescribeBaselineAnalysisDataRequest& request);

                /**
                 *查询基线基础信息列表
                 * @param req DescribeBaselineBasicInfoRequest
                 * @return DescribeBaselineBasicInfoOutcome
                 */
                DescribeBaselineBasicInfoOutcome DescribeBaselineBasicInfo(const Model::DescribeBaselineBasicInfoRequest &request);
                void DescribeBaselineBasicInfoAsync(const Model::DescribeBaselineBasicInfoRequest& request, const DescribeBaselineBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineBasicInfoOutcomeCallable DescribeBaselineBasicInfoCallable(const Model::DescribeBaselineBasicInfoRequest& request);

                /**
                 *查询基线默认策略列表信息
                 * @param req DescribeBaselineDefaultStrategyListRequest
                 * @return DescribeBaselineDefaultStrategyListOutcome
                 */
                DescribeBaselineDefaultStrategyListOutcome DescribeBaselineDefaultStrategyList(const Model::DescribeBaselineDefaultStrategyListRequest &request);
                void DescribeBaselineDefaultStrategyListAsync(const Model::DescribeBaselineDefaultStrategyListRequest& request, const DescribeBaselineDefaultStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineDefaultStrategyListOutcomeCallable DescribeBaselineDefaultStrategyListCallable(const Model::DescribeBaselineDefaultStrategyListRequest& request);

                /**
                 *根据基线id查询基线详情接口
                 * @param req DescribeBaselineDetailRequest
                 * @return DescribeBaselineDetailOutcome
                 */
                DescribeBaselineDetailOutcome DescribeBaselineDetail(const Model::DescribeBaselineDetailRequest &request);
                void DescribeBaselineDetailAsync(const Model::DescribeBaselineDetailRequest& request, const DescribeBaselineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineDetailOutcomeCallable DescribeBaselineDetailCallable(const Model::DescribeBaselineDetailRequest& request);

                /**
                 *获取基线检测详情记录
                 * @param req DescribeBaselineDetectListRequest
                 * @return DescribeBaselineDetectListOutcome
                 */
                DescribeBaselineDetectListOutcome DescribeBaselineDetectList(const Model::DescribeBaselineDetectListRequest &request);
                void DescribeBaselineDetectListAsync(const Model::DescribeBaselineDetectListRequest& request, const DescribeBaselineDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineDetectListOutcomeCallable DescribeBaselineDetectListCallable(const Model::DescribeBaselineDetectListRequest& request);

                /**
                 *获取基线检测概览
                 * @param req DescribeBaselineDetectOverviewRequest
                 * @return DescribeBaselineDetectOverviewOutcome
                 */
                DescribeBaselineDetectOverviewOutcome DescribeBaselineDetectOverview(const Model::DescribeBaselineDetectOverviewRequest &request);
                void DescribeBaselineDetectOverviewAsync(const Model::DescribeBaselineDetectOverviewRequest& request, const DescribeBaselineDetectOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineDetectOverviewOutcomeCallable DescribeBaselineDetectOverviewCallable(const Model::DescribeBaselineDetectOverviewRequest& request);

                /**
                 *获取基线下载列表
                 * @param req DescribeBaselineDownloadListRequest
                 * @return DescribeBaselineDownloadListOutcome
                 */
                DescribeBaselineDownloadListOutcome DescribeBaselineDownloadList(const Model::DescribeBaselineDownloadListRequest &request);
                void DescribeBaselineDownloadListAsync(const Model::DescribeBaselineDownloadListRequest& request, const DescribeBaselineDownloadListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineDownloadListOutcomeCallable DescribeBaselineDownloadListCallable(const Model::DescribeBaselineDownloadListRequest& request);

                /**
                 *根据基线id查询基线影响主机列表
                 * @param req DescribeBaselineEffectHostListRequest
                 * @return DescribeBaselineEffectHostListOutcome
                 */
                DescribeBaselineEffectHostListOutcome DescribeBaselineEffectHostList(const Model::DescribeBaselineEffectHostListRequest &request);
                void DescribeBaselineEffectHostListAsync(const Model::DescribeBaselineEffectHostListRequest& request, const DescribeBaselineEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineEffectHostListOutcomeCallable DescribeBaselineEffectHostListCallable(const Model::DescribeBaselineEffectHostListRequest& request);

                /**
                 *获取基线修复列表
                 * @param req DescribeBaselineFixListRequest
                 * @return DescribeBaselineFixListOutcome
                 */
                DescribeBaselineFixListOutcome DescribeBaselineFixList(const Model::DescribeBaselineFixListRequest &request);
                void DescribeBaselineFixListAsync(const Model::DescribeBaselineFixListRequest& request, const DescribeBaselineFixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineFixListOutcomeCallable DescribeBaselineFixListCallable(const Model::DescribeBaselineFixListRequest& request);

                /**
                 *获取基线检测主机列表
                 * @param req DescribeBaselineHostDetectListRequest
                 * @return DescribeBaselineHostDetectListOutcome
                 */
                DescribeBaselineHostDetectListOutcome DescribeBaselineHostDetectList(const Model::DescribeBaselineHostDetectListRequest &request);
                void DescribeBaselineHostDetectListAsync(const Model::DescribeBaselineHostDetectListRequest& request, const DescribeBaselineHostDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineHostDetectListOutcomeCallable DescribeBaselineHostDetectListCallable(const Model::DescribeBaselineHostDetectListRequest& request);

                /**
                 *获取忽略规则主机列表
                 * @param req DescribeBaselineHostIgnoreListRequest
                 * @return DescribeBaselineHostIgnoreListOutcome
                 */
                DescribeBaselineHostIgnoreListOutcome DescribeBaselineHostIgnoreList(const Model::DescribeBaselineHostIgnoreListRequest &request);
                void DescribeBaselineHostIgnoreListAsync(const Model::DescribeBaselineHostIgnoreListRequest& request, const DescribeBaselineHostIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineHostIgnoreListOutcomeCallable DescribeBaselineHostIgnoreListCallable(const Model::DescribeBaselineHostIgnoreListRequest& request);

                /**
                 *获取基线服务器风险TOP5
                 * @param req DescribeBaselineHostRiskTopRequest
                 * @return DescribeBaselineHostRiskTopOutcome
                 */
                DescribeBaselineHostRiskTopOutcome DescribeBaselineHostRiskTop(const Model::DescribeBaselineHostRiskTopRequest &request);
                void DescribeBaselineHostRiskTopAsync(const Model::DescribeBaselineHostRiskTopRequest& request, const DescribeBaselineHostRiskTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineHostRiskTopOutcomeCallable DescribeBaselineHostRiskTopCallable(const Model::DescribeBaselineHostRiskTopRequest& request);

                /**
                 *接口返回TopN的风险服务器
                 * @param req DescribeBaselineHostTopRequest
                 * @return DescribeBaselineHostTopOutcome
                 */
                DescribeBaselineHostTopOutcome DescribeBaselineHostTop(const Model::DescribeBaselineHostTopRequest &request);
                void DescribeBaselineHostTopAsync(const Model::DescribeBaselineHostTopRequest& request, const DescribeBaselineHostTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineHostTopOutcomeCallable DescribeBaselineHostTopCallable(const Model::DescribeBaselineHostTopRequest& request);

                /**
                 *获取基线检测项的列表
                 * @param req DescribeBaselineItemDetectListRequest
                 * @return DescribeBaselineItemDetectListOutcome
                 */
                DescribeBaselineItemDetectListOutcome DescribeBaselineItemDetectList(const Model::DescribeBaselineItemDetectListRequest &request);
                void DescribeBaselineItemDetectListAsync(const Model::DescribeBaselineItemDetectListRequest& request, const DescribeBaselineItemDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineItemDetectListOutcomeCallable DescribeBaselineItemDetectListCallable(const Model::DescribeBaselineItemDetectListRequest& request);

                /**
                 *获取忽略规则项列表
                 * @param req DescribeBaselineItemIgnoreListRequest
                 * @return DescribeBaselineItemIgnoreListOutcome
                 */
                DescribeBaselineItemIgnoreListOutcome DescribeBaselineItemIgnoreList(const Model::DescribeBaselineItemIgnoreListRequest &request);
                void DescribeBaselineItemIgnoreListAsync(const Model::DescribeBaselineItemIgnoreListRequest& request, const DescribeBaselineItemIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineItemIgnoreListOutcomeCallable DescribeBaselineItemIgnoreListCallable(const Model::DescribeBaselineItemIgnoreListRequest& request);

                /**
                 *获取基线检测项信息
                 * @param req DescribeBaselineItemInfoRequest
                 * @return DescribeBaselineItemInfoOutcome
                 */
                DescribeBaselineItemInfoOutcome DescribeBaselineItemInfo(const Model::DescribeBaselineItemInfoRequest &request);
                void DescribeBaselineItemInfoAsync(const Model::DescribeBaselineItemInfoRequest& request, const DescribeBaselineItemInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineItemInfoOutcomeCallable DescribeBaselineItemInfoCallable(const Model::DescribeBaselineItemInfoRequest& request);

                /**
                 *获取基线项检测结果列表
                 * @param req DescribeBaselineItemListRequest
                 * @return DescribeBaselineItemListOutcome
                 */
                DescribeBaselineItemListOutcome DescribeBaselineItemList(const Model::DescribeBaselineItemListRequest &request);
                void DescribeBaselineItemListAsync(const Model::DescribeBaselineItemListRequest& request, const DescribeBaselineItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineItemListOutcomeCallable DescribeBaselineItemListCallable(const Model::DescribeBaselineItemListRequest& request);

                /**
                 *获取基线检测项TOP5
                 * @param req DescribeBaselineItemRiskTopRequest
                 * @return DescribeBaselineItemRiskTopOutcome
                 */
                DescribeBaselineItemRiskTopOutcome DescribeBaselineItemRiskTop(const Model::DescribeBaselineItemRiskTopRequest &request);
                void DescribeBaselineItemRiskTopAsync(const Model::DescribeBaselineItemRiskTopRequest& request, const DescribeBaselineItemRiskTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineItemRiskTopOutcomeCallable DescribeBaselineItemRiskTopCallable(const Model::DescribeBaselineItemRiskTopRequest& request);

                /**
                 *查询基线列表信息
                 * @param req DescribeBaselineListRequest
                 * @return DescribeBaselineListOutcome
                 */
                DescribeBaselineListOutcome DescribeBaselineList(const Model::DescribeBaselineListRequest &request);
                void DescribeBaselineListAsync(const Model::DescribeBaselineListRequest& request, const DescribeBaselineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineListOutcomeCallable DescribeBaselineListCallable(const Model::DescribeBaselineListRequest& request);

                /**
                 *获取基线策略列表
                 * @param req DescribeBaselinePolicyListRequest
                 * @return DescribeBaselinePolicyListOutcome
                 */
                DescribeBaselinePolicyListOutcome DescribeBaselinePolicyList(const Model::DescribeBaselinePolicyListRequest &request);
                void DescribeBaselinePolicyListAsync(const Model::DescribeBaselinePolicyListRequest& request, const DescribeBaselinePolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselinePolicyListOutcomeCallable DescribeBaselinePolicyListCallable(const Model::DescribeBaselinePolicyListRequest& request);

                /**
                 *根据基线id查询下属检测项信息
                 * @param req DescribeBaselineRuleRequest
                 * @return DescribeBaselineRuleOutcome
                 */
                DescribeBaselineRuleOutcome DescribeBaselineRule(const Model::DescribeBaselineRuleRequest &request);
                void DescribeBaselineRuleAsync(const Model::DescribeBaselineRuleRequest& request, const DescribeBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineRuleOutcomeCallable DescribeBaselineRuleCallable(const Model::DescribeBaselineRuleRequest& request);

                /**
                 *获取基线分类列表
                 * @param req DescribeBaselineRuleCategoryListRequest
                 * @return DescribeBaselineRuleCategoryListOutcome
                 */
                DescribeBaselineRuleCategoryListOutcome DescribeBaselineRuleCategoryList(const Model::DescribeBaselineRuleCategoryListRequest &request);
                void DescribeBaselineRuleCategoryListAsync(const Model::DescribeBaselineRuleCategoryListRequest& request, const DescribeBaselineRuleCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineRuleCategoryListOutcomeCallable DescribeBaselineRuleCategoryListCallable(const Model::DescribeBaselineRuleCategoryListRequest& request);

                /**
                 *获取基线规则检测列表
                 * @param req DescribeBaselineRuleDetectListRequest
                 * @return DescribeBaselineRuleDetectListOutcome
                 */
                DescribeBaselineRuleDetectListOutcome DescribeBaselineRuleDetectList(const Model::DescribeBaselineRuleDetectListRequest &request);
                void DescribeBaselineRuleDetectListAsync(const Model::DescribeBaselineRuleDetectListRequest& request, const DescribeBaselineRuleDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineRuleDetectListOutcomeCallable DescribeBaselineRuleDetectListCallable(const Model::DescribeBaselineRuleDetectListRequest& request);

                /**
                 *获取基线忽略规则列表
                 * @param req DescribeBaselineRuleIgnoreListRequest
                 * @return DescribeBaselineRuleIgnoreListOutcome
                 */
                DescribeBaselineRuleIgnoreListOutcome DescribeBaselineRuleIgnoreList(const Model::DescribeBaselineRuleIgnoreListRequest &request);
                void DescribeBaselineRuleIgnoreListAsync(const Model::DescribeBaselineRuleIgnoreListRequest& request, const DescribeBaselineRuleIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineRuleIgnoreListOutcomeCallable DescribeBaselineRuleIgnoreListCallable(const Model::DescribeBaselineRuleIgnoreListRequest& request);

                /**
                 *获取基线规则列表
                 * @param req DescribeBaselineRuleListRequest
                 * @return DescribeBaselineRuleListOutcome
                 */
                DescribeBaselineRuleListOutcome DescribeBaselineRuleList(const Model::DescribeBaselineRuleListRequest &request);
                void DescribeBaselineRuleListAsync(const Model::DescribeBaselineRuleListRequest& request, const DescribeBaselineRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineRuleListOutcomeCallable DescribeBaselineRuleListCallable(const Model::DescribeBaselineRuleListRequest& request);

                /**
                 *根据任务id查询基线检测进度
                 * @param req DescribeBaselineScanScheduleRequest
                 * @return DescribeBaselineScanScheduleOutcome
                 */
                DescribeBaselineScanScheduleOutcome DescribeBaselineScanSchedule(const Model::DescribeBaselineScanScheduleRequest &request);
                void DescribeBaselineScanScheduleAsync(const Model::DescribeBaselineScanScheduleRequest& request, const DescribeBaselineScanScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineScanScheduleOutcomeCallable DescribeBaselineScanScheduleCallable(const Model::DescribeBaselineScanScheduleRequest& request);

                /**
                 *根据基线策略id查询策略详情
                 * @param req DescribeBaselineStrategyDetailRequest
                 * @return DescribeBaselineStrategyDetailOutcome
                 */
                DescribeBaselineStrategyDetailOutcome DescribeBaselineStrategyDetail(const Model::DescribeBaselineStrategyDetailRequest &request);
                void DescribeBaselineStrategyDetailAsync(const Model::DescribeBaselineStrategyDetailRequest& request, const DescribeBaselineStrategyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineStrategyDetailOutcomeCallable DescribeBaselineStrategyDetailCallable(const Model::DescribeBaselineStrategyDetailRequest& request);

                /**
                 *查询一个用户下的基线策略信息
                 * @param req DescribeBaselineStrategyListRequest
                 * @return DescribeBaselineStrategyListOutcome
                 */
                DescribeBaselineStrategyListOutcome DescribeBaselineStrategyList(const Model::DescribeBaselineStrategyListRequest &request);
                void DescribeBaselineStrategyListAsync(const Model::DescribeBaselineStrategyListRequest& request, const DescribeBaselineStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineStrategyListOutcomeCallable DescribeBaselineStrategyListCallable(const Model::DescribeBaselineStrategyListRequest& request);

                /**
                 *根据策略id查询基线检测项TOP
                 * @param req DescribeBaselineTopRequest
                 * @return DescribeBaselineTopOutcome
                 */
                DescribeBaselineTopOutcome DescribeBaselineTop(const Model::DescribeBaselineTopRequest &request);
                void DescribeBaselineTopAsync(const Model::DescribeBaselineTopRequest& request, const DescribeBaselineTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineTopOutcomeCallable DescribeBaselineTopCallable(const Model::DescribeBaselineTopRequest& request);

                /**
                 *获取基线弱口令列表
                 * @param req DescribeBaselineWeakPasswordListRequest
                 * @return DescribeBaselineWeakPasswordListOutcome
                 */
                DescribeBaselineWeakPasswordListOutcome DescribeBaselineWeakPasswordList(const Model::DescribeBaselineWeakPasswordListRequest &request);
                void DescribeBaselineWeakPasswordListAsync(const Model::DescribeBaselineWeakPasswordListRequest& request, const DescribeBaselineWeakPasswordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineWeakPasswordListOutcomeCallable DescribeBaselineWeakPasswordListCallable(const Model::DescribeBaselineWeakPasswordListRequest& request);

                /**
                 *获取高危命令列表
                 * @param req DescribeBashEventsRequest
                 * @return DescribeBashEventsOutcome
                 */
                DescribeBashEventsOutcome DescribeBashEvents(const Model::DescribeBashEventsRequest &request);
                void DescribeBashEventsAsync(const Model::DescribeBashEventsRequest& request, const DescribeBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBashEventsOutcomeCallable DescribeBashEventsCallable(const Model::DescribeBashEventsRequest& request);

                /**
                 *查询高危命令事件详情
                 * @param req DescribeBashEventsInfoRequest
                 * @return DescribeBashEventsInfoOutcome
                 */
                DescribeBashEventsInfoOutcome DescribeBashEventsInfo(const Model::DescribeBashEventsInfoRequest &request);
                void DescribeBashEventsInfoAsync(const Model::DescribeBashEventsInfoRequest& request, const DescribeBashEventsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBashEventsInfoOutcomeCallable DescribeBashEventsInfoCallable(const Model::DescribeBashEventsInfoRequest& request);

                /**
                 *查询高危命令事件详情(新)
                 * @param req DescribeBashEventsInfoNewRequest
                 * @return DescribeBashEventsInfoNewOutcome
                 */
                DescribeBashEventsInfoNewOutcome DescribeBashEventsInfoNew(const Model::DescribeBashEventsInfoNewRequest &request);
                void DescribeBashEventsInfoNewAsync(const Model::DescribeBashEventsInfoNewRequest& request, const DescribeBashEventsInfoNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBashEventsInfoNewOutcomeCallable DescribeBashEventsInfoNewCallable(const Model::DescribeBashEventsInfoNewRequest& request);

                /**
                 *获取高危命令列表(新)
                 * @param req DescribeBashEventsNewRequest
                 * @return DescribeBashEventsNewOutcome
                 */
                DescribeBashEventsNewOutcome DescribeBashEventsNew(const Model::DescribeBashEventsNewRequest &request);
                void DescribeBashEventsNewAsync(const Model::DescribeBashEventsNewRequest& request, const DescribeBashEventsNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBashEventsNewOutcomeCallable DescribeBashEventsNewCallable(const Model::DescribeBashEventsNewRequest& request);

                /**
                 *获取高危命令策略列表
                 * @param req DescribeBashPoliciesRequest
                 * @return DescribeBashPoliciesOutcome
                 */
                DescribeBashPoliciesOutcome DescribeBashPolicies(const Model::DescribeBashPoliciesRequest &request);
                void DescribeBashPoliciesAsync(const Model::DescribeBashPoliciesRequest& request, const DescribeBashPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBashPoliciesOutcomeCallable DescribeBashPoliciesCallable(const Model::DescribeBashPoliciesRequest& request);

                /**
                 *获取高危命令规则列表
                 * @param req DescribeBashRulesRequest
                 * @return DescribeBashRulesOutcome
                 */
                DescribeBashRulesOutcome DescribeBashRules(const Model::DescribeBashRulesRequest &request);
                void DescribeBashRulesAsync(const Model::DescribeBashRulesRequest& request, const DescribeBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBashRulesOutcomeCallable DescribeBashRulesCallable(const Model::DescribeBashRulesRequest& request);

                /**
                 *获取密码破解列表
                 * @param req DescribeBruteAttackListRequest
                 * @return DescribeBruteAttackListOutcome
                 */
                DescribeBruteAttackListOutcome DescribeBruteAttackList(const Model::DescribeBruteAttackListRequest &request);
                void DescribeBruteAttackListAsync(const Model::DescribeBruteAttackListRequest& request, const DescribeBruteAttackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBruteAttackListOutcomeCallable DescribeBruteAttackListCallable(const Model::DescribeBruteAttackListRequest& request);

                /**
                 *获取爆破破解规则
                 * @param req DescribeBruteAttackRulesRequest
                 * @return DescribeBruteAttackRulesOutcome
                 */
                DescribeBruteAttackRulesOutcome DescribeBruteAttackRules(const Model::DescribeBruteAttackRulesRequest &request);
                void DescribeBruteAttackRulesAsync(const Model::DescribeBruteAttackRulesRequest& request, const DescribeBruteAttackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBruteAttackRulesOutcomeCallable DescribeBruteAttackRulesCallable(const Model::DescribeBruteAttackRulesRequest& request);

                /**
                 *漏洞修护-查询可修护主机信息
                 * @param req DescribeCanFixVulMachineRequest
                 * @return DescribeCanFixVulMachineOutcome
                 */
                DescribeCanFixVulMachineOutcome DescribeCanFixVulMachine(const Model::DescribeCanFixVulMachineRequest &request);
                void DescribeCanFixVulMachineAsync(const Model::DescribeCanFixVulMachineRequest& request, const DescribeCanFixVulMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCanFixVulMachineOutcomeCallable DescribeCanFixVulMachineCallable(const Model::DescribeCanFixVulMachineRequest& request);

                /**
                 *获取木马不可隔离的主机
                 * @param req DescribeCanNotSeparateMachineRequest
                 * @return DescribeCanNotSeparateMachineOutcome
                 */
                DescribeCanNotSeparateMachineOutcome DescribeCanNotSeparateMachine(const Model::DescribeCanNotSeparateMachineRequest &request);
                void DescribeCanNotSeparateMachineAsync(const Model::DescribeCanNotSeparateMachineRequest& request, const DescribeCanNotSeparateMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCanNotSeparateMachineOutcomeCallable DescribeCanNotSeparateMachineCallable(const Model::DescribeCanNotSeparateMachineRequest& request);

                /**
                 *获取客户端异常事件
                 * @param req DescribeClientExceptionRequest
                 * @return DescribeClientExceptionOutcome
                 */
                DescribeClientExceptionOutcome DescribeClientException(const Model::DescribeClientExceptionRequest &request);
                void DescribeClientExceptionAsync(const Model::DescribeClientExceptionRequest& request, const DescribeClientExceptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientExceptionOutcomeCallable DescribeClientExceptionCallable(const Model::DescribeClientExceptionRequest& request);

                /**
                 *获取漏洞防御事件详情
                 * @param req DescribeDefenceEventDetailRequest
                 * @return DescribeDefenceEventDetailOutcome
                 */
                DescribeDefenceEventDetailOutcome DescribeDefenceEventDetail(const Model::DescribeDefenceEventDetailRequest &request);
                void DescribeDefenceEventDetailAsync(const Model::DescribeDefenceEventDetailRequest& request, const DescribeDefenceEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefenceEventDetailOutcomeCallable DescribeDefenceEventDetailCallable(const Model::DescribeDefenceEventDetailRequest& request);

                /**
                 *获取专线agent安装命令，包含token
                 * @param req DescribeDirectConnectInstallCommandRequest
                 * @return DescribeDirectConnectInstallCommandOutcome
                 */
                DescribeDirectConnectInstallCommandOutcome DescribeDirectConnectInstallCommand(const Model::DescribeDirectConnectInstallCommandRequest &request);
                void DescribeDirectConnectInstallCommandAsync(const Model::DescribeDirectConnectInstallCommandRequest& request, const DescribeDirectConnectInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDirectConnectInstallCommandOutcomeCallable DescribeDirectConnectInstallCommandCallable(const Model::DescribeDirectConnectInstallCommandRequest& request);

                /**
                 *获取ES字段聚合结果
                 * @param req DescribeESAggregationsRequest
                 * @return DescribeESAggregationsOutcome
                 */
                DescribeESAggregationsOutcome DescribeESAggregations(const Model::DescribeESAggregationsRequest &request);
                void DescribeESAggregationsAsync(const Model::DescribeESAggregationsRequest& request, const DescribeESAggregationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeESAggregationsOutcomeCallable DescribeESAggregationsCallable(const Model::DescribeESAggregationsRequest& request);

                /**
                 *专家服务-应急响应列表
                 * @param req DescribeEmergencyResponseListRequest
                 * @return DescribeEmergencyResponseListOutcome
                 */
                DescribeEmergencyResponseListOutcome DescribeEmergencyResponseList(const Model::DescribeEmergencyResponseListRequest &request);
                void DescribeEmergencyResponseListAsync(const Model::DescribeEmergencyResponseListRequest& request, const DescribeEmergencyResponseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEmergencyResponseListOutcomeCallable DescribeEmergencyResponseListCallable(const Model::DescribeEmergencyResponseListRequest& request);

                /**
                 *获取应急漏洞列表
                 * @param req DescribeEmergencyVulListRequest
                 * @return DescribeEmergencyVulListOutcome
                 */
                DescribeEmergencyVulListOutcome DescribeEmergencyVulList(const Model::DescribeEmergencyVulListRequest &request);
                void DescribeEmergencyVulListAsync(const Model::DescribeEmergencyVulListRequest& request, const DescribeEmergencyVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEmergencyVulListOutcomeCallable DescribeEmergencyVulListCallable(const Model::DescribeEmergencyVulListRequest& request);

                /**
                 *根据事件表名和id查询告警事件详情
                 * @param req DescribeEventByTableRequest
                 * @return DescribeEventByTableOutcome
                 */
                DescribeEventByTableOutcome DescribeEventByTable(const Model::DescribeEventByTableRequest &request);
                void DescribeEventByTableAsync(const Model::DescribeEventByTableRequest& request, const DescribeEventByTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventByTableOutcomeCallable DescribeEventByTableCallable(const Model::DescribeEventByTableRequest& request);

                /**
                 *专家服务-安全管家列表
                 * @param req DescribeExpertServiceListRequest
                 * @return DescribeExpertServiceListOutcome
                 */
                DescribeExpertServiceListOutcome DescribeExpertServiceList(const Model::DescribeExpertServiceListRequest &request);
                void DescribeExpertServiceListAsync(const Model::DescribeExpertServiceListRequest& request, const DescribeExpertServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExpertServiceListOutcomeCallable DescribeExpertServiceListCallable(const Model::DescribeExpertServiceListRequest& request);

                /**
                 *专家服务-专家服务订单列表
                 * @param req DescribeExpertServiceOrderListRequest
                 * @return DescribeExpertServiceOrderListOutcome
                 */
                DescribeExpertServiceOrderListOutcome DescribeExpertServiceOrderList(const Model::DescribeExpertServiceOrderListRequest &request);
                void DescribeExpertServiceOrderListAsync(const Model::DescribeExpertServiceOrderListRequest& request, const DescribeExpertServiceOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExpertServiceOrderListOutcomeCallable DescribeExpertServiceOrderListCallable(const Model::DescribeExpertServiceOrderListRequest& request);

                /**
                 *本接口 (DescribeExportMachines) 用于导出区域主机列表。
                 * @param req DescribeExportMachinesRequest
                 * @return DescribeExportMachinesOutcome
                 */
                DescribeExportMachinesOutcome DescribeExportMachines(const Model::DescribeExportMachinesRequest &request);
                void DescribeExportMachinesAsync(const Model::DescribeExportMachinesRequest& request, const DescribeExportMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExportMachinesOutcomeCallable DescribeExportMachinesCallable(const Model::DescribeExportMachinesRequest& request);

                /**
                 *日志快速分析统计
                 * @param req DescribeFastAnalysisRequest
                 * @return DescribeFastAnalysisOutcome
                 */
                DescribeFastAnalysisOutcome DescribeFastAnalysis(const Model::DescribeFastAnalysisRequest &request);
                void DescribeFastAnalysisAsync(const Model::DescribeFastAnalysisRequest& request, const DescribeFastAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFastAnalysisOutcomeCallable DescribeFastAnalysisCallable(const Model::DescribeFastAnalysisRequest& request);

                /**
                 *查看产生事件时规则详情接口
                 * @param req DescribeFileTamperEventRuleInfoRequest
                 * @return DescribeFileTamperEventRuleInfoOutcome
                 */
                DescribeFileTamperEventRuleInfoOutcome DescribeFileTamperEventRuleInfo(const Model::DescribeFileTamperEventRuleInfoRequest &request);
                void DescribeFileTamperEventRuleInfoAsync(const Model::DescribeFileTamperEventRuleInfoRequest& request, const DescribeFileTamperEventRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileTamperEventRuleInfoOutcomeCallable DescribeFileTamperEventRuleInfoCallable(const Model::DescribeFileTamperEventRuleInfoRequest& request);

                /**
                 *核心文件监控事件列表
                 * @param req DescribeFileTamperEventsRequest
                 * @return DescribeFileTamperEventsOutcome
                 */
                DescribeFileTamperEventsOutcome DescribeFileTamperEvents(const Model::DescribeFileTamperEventsRequest &request);
                void DescribeFileTamperEventsAsync(const Model::DescribeFileTamperEventsRequest& request, const DescribeFileTamperEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileTamperEventsOutcomeCallable DescribeFileTamperEventsCallable(const Model::DescribeFileTamperEventsRequest& request);

                /**
                 *查询主机关联文件监控规则数量
                 * @param req DescribeFileTamperRuleCountRequest
                 * @return DescribeFileTamperRuleCountOutcome
                 */
                DescribeFileTamperRuleCountOutcome DescribeFileTamperRuleCount(const Model::DescribeFileTamperRuleCountRequest &request);
                void DescribeFileTamperRuleCountAsync(const Model::DescribeFileTamperRuleCountRequest& request, const DescribeFileTamperRuleCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileTamperRuleCountOutcomeCallable DescribeFileTamperRuleCountCallable(const Model::DescribeFileTamperRuleCountRequest& request);

                /**
                 *查询某个监控规则的详情
                 * @param req DescribeFileTamperRuleInfoRequest
                 * @return DescribeFileTamperRuleInfoOutcome
                 */
                DescribeFileTamperRuleInfoOutcome DescribeFileTamperRuleInfo(const Model::DescribeFileTamperRuleInfoRequest &request);
                void DescribeFileTamperRuleInfoAsync(const Model::DescribeFileTamperRuleInfoRequest& request, const DescribeFileTamperRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileTamperRuleInfoOutcomeCallable DescribeFileTamperRuleInfoCallable(const Model::DescribeFileTamperRuleInfoRequest& request);

                /**
                 *核心文件监控规则列表
                 * @param req DescribeFileTamperRulesRequest
                 * @return DescribeFileTamperRulesOutcome
                 */
                DescribeFileTamperRulesOutcome DescribeFileTamperRules(const Model::DescribeFileTamperRulesRequest &request);
                void DescribeFileTamperRulesAsync(const Model::DescribeFileTamperRulesRequest& request, const DescribeFileTamperRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileTamperRulesOutcomeCallable DescribeFileTamperRulesCallable(const Model::DescribeFileTamperRulesRequest& request);

                /**
                 *获取主机相关统计
                 * @param req DescribeGeneralStatRequest
                 * @return DescribeGeneralStatOutcome
                 */
                DescribeGeneralStatOutcome DescribeGeneralStat(const Model::DescribeGeneralStatRequest &request);
                void DescribeGeneralStatAsync(const Model::DescribeGeneralStatRequest& request, const DescribeGeneralStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGeneralStatOutcomeCallable DescribeGeneralStatCallable(const Model::DescribeGeneralStatRequest& request);

                /**
                 *本接口 (DescribeHistoryAccounts) 用于获取帐号变更历史列表数据。
                 * @param req DescribeHistoryAccountsRequest
                 * @return DescribeHistoryAccountsOutcome
                 */
                DescribeHistoryAccountsOutcome DescribeHistoryAccounts(const Model::DescribeHistoryAccountsRequest &request);
                void DescribeHistoryAccountsAsync(const Model::DescribeHistoryAccountsRequest& request, const DescribeHistoryAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHistoryAccountsOutcomeCallable DescribeHistoryAccountsCallable(const Model::DescribeHistoryAccountsRequest& request);

                /**
                 *查询日志检索服务信息
                 * @param req DescribeHistoryServiceRequest
                 * @return DescribeHistoryServiceOutcome
                 */
                DescribeHistoryServiceOutcome DescribeHistoryService(const Model::DescribeHistoryServiceRequest &request);
                void DescribeHistoryServiceAsync(const Model::DescribeHistoryServiceRequest& request, const DescribeHistoryServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHistoryServiceOutcomeCallable DescribeHistoryServiceCallable(const Model::DescribeHistoryServiceRequest& request);

                /**
                 *主机信息与标签信息查询
                 * @param req DescribeHostInfoRequest
                 * @return DescribeHostInfoOutcome
                 */
                DescribeHostInfoOutcome DescribeHostInfo(const Model::DescribeHostInfoRequest &request);
                void DescribeHostInfoAsync(const Model::DescribeHostInfoRequest& request, const DescribeHostInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostInfoOutcomeCallable DescribeHostInfoCallable(const Model::DescribeHostInfoRequest& request);

                /**
                 *获取异常登录列表
                 * @param req DescribeHostLoginListRequest
                 * @return DescribeHostLoginListOutcome
                 */
                DescribeHostLoginListOutcome DescribeHostLoginList(const Model::DescribeHostLoginListRequest &request);
                void DescribeHostLoginListAsync(const Model::DescribeHostLoginListRequest& request, const DescribeHostLoginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostLoginListOutcomeCallable DescribeHostLoginListCallable(const Model::DescribeHostLoginListRequest& request);

                /**
                 *获取全网热点漏洞
                 * @param req DescribeHotVulTopRequest
                 * @return DescribeHotVulTopOutcome
                 */
                DescribeHotVulTopOutcome DescribeHotVulTop(const Model::DescribeHotVulTopRequest &request);
                void DescribeHotVulTopAsync(const Model::DescribeHotVulTopRequest& request, const DescribeHotVulTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHotVulTopOutcomeCallable DescribeHotVulTopCallable(const Model::DescribeHotVulTopRequest& request);

                /**
                 *查询已经忽略的检测项信息
                 * @param req DescribeIgnoreBaselineRuleRequest
                 * @return DescribeIgnoreBaselineRuleOutcome
                 */
                DescribeIgnoreBaselineRuleOutcome DescribeIgnoreBaselineRule(const Model::DescribeIgnoreBaselineRuleRequest &request);
                void DescribeIgnoreBaselineRuleAsync(const Model::DescribeIgnoreBaselineRuleRequest& request, const DescribeIgnoreBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIgnoreBaselineRuleOutcomeCallable DescribeIgnoreBaselineRuleCallable(const Model::DescribeIgnoreBaselineRuleRequest& request);

                /**
                 *获取一键忽略受影响的检测项和主机信息
                 * @param req DescribeIgnoreHostAndItemConfigRequest
                 * @return DescribeIgnoreHostAndItemConfigOutcome
                 */
                DescribeIgnoreHostAndItemConfigOutcome DescribeIgnoreHostAndItemConfig(const Model::DescribeIgnoreHostAndItemConfigRequest &request);
                void DescribeIgnoreHostAndItemConfigAsync(const Model::DescribeIgnoreHostAndItemConfigRequest& request, const DescribeIgnoreHostAndItemConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIgnoreHostAndItemConfigOutcomeCallable DescribeIgnoreHostAndItemConfigCallable(const Model::DescribeIgnoreHostAndItemConfigRequest& request);

                /**
                 *根据检测项id与筛选条件查询忽略检测项影响主机列表信息
                 * @param req DescribeIgnoreRuleEffectHostListRequest
                 * @return DescribeIgnoreRuleEffectHostListOutcome
                 */
                DescribeIgnoreRuleEffectHostListOutcome DescribeIgnoreRuleEffectHostList(const Model::DescribeIgnoreRuleEffectHostListRequest &request);
                void DescribeIgnoreRuleEffectHostListAsync(const Model::DescribeIgnoreRuleEffectHostListRequest& request, const DescribeIgnoreRuleEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIgnoreRuleEffectHostListOutcomeCallable DescribeIgnoreRuleEffectHostListCallable(const Model::DescribeIgnoreRuleEffectHostListRequest& request);

                /**
                 *查询批量导入机器信息
                 * @param req DescribeImportMachineInfoRequest
                 * @return DescribeImportMachineInfoOutcome
                 */
                DescribeImportMachineInfoOutcome DescribeImportMachineInfo(const Model::DescribeImportMachineInfoRequest &request);
                void DescribeImportMachineInfoAsync(const Model::DescribeImportMachineInfoRequest& request, const DescribeImportMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImportMachineInfoOutcomeCallable DescribeImportMachineInfoCallable(const Model::DescribeImportMachineInfoRequest& request);

                /**
                 *查询java内存马事件详细信息
                 * @param req DescribeJavaMemShellInfoRequest
                 * @return DescribeJavaMemShellInfoOutcome
                 */
                DescribeJavaMemShellInfoOutcome DescribeJavaMemShellInfo(const Model::DescribeJavaMemShellInfoRequest &request);
                void DescribeJavaMemShellInfoAsync(const Model::DescribeJavaMemShellInfoRequest& request, const DescribeJavaMemShellInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJavaMemShellInfoOutcomeCallable DescribeJavaMemShellInfoCallable(const Model::DescribeJavaMemShellInfoRequest& request);

                /**
                 *查询java内存马事件列表
                 * @param req DescribeJavaMemShellListRequest
                 * @return DescribeJavaMemShellListOutcome
                 */
                DescribeJavaMemShellListOutcome DescribeJavaMemShellList(const Model::DescribeJavaMemShellListRequest &request);
                void DescribeJavaMemShellListAsync(const Model::DescribeJavaMemShellListRequest& request, const DescribeJavaMemShellListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJavaMemShellListOutcomeCallable DescribeJavaMemShellListCallable(const Model::DescribeJavaMemShellListRequest& request);

                /**
                 *查询给定主机java内存马插件信息
                 * @param req DescribeJavaMemShellPluginInfoRequest
                 * @return DescribeJavaMemShellPluginInfoOutcome
                 */
                DescribeJavaMemShellPluginInfoOutcome DescribeJavaMemShellPluginInfo(const Model::DescribeJavaMemShellPluginInfoRequest &request);
                void DescribeJavaMemShellPluginInfoAsync(const Model::DescribeJavaMemShellPluginInfoRequest& request, const DescribeJavaMemShellPluginInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJavaMemShellPluginInfoOutcomeCallable DescribeJavaMemShellPluginInfoCallable(const Model::DescribeJavaMemShellPluginInfoRequest& request);

                /**
                 *查询java内存马插件列表
                 * @param req DescribeJavaMemShellPluginListRequest
                 * @return DescribeJavaMemShellPluginListOutcome
                 */
                DescribeJavaMemShellPluginListOutcome DescribeJavaMemShellPluginList(const Model::DescribeJavaMemShellPluginListRequest &request);
                void DescribeJavaMemShellPluginListAsync(const Model::DescribeJavaMemShellPluginListRequest& request, const DescribeJavaMemShellPluginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJavaMemShellPluginListOutcomeCallable DescribeJavaMemShellPluginListCallable(const Model::DescribeJavaMemShellPluginListRequest& request);

                /**
                 *查询授权信息
                 * @param req DescribeLicenseRequest
                 * @return DescribeLicenseOutcome
                 */
                DescribeLicenseOutcome DescribeLicense(const Model::DescribeLicenseRequest &request);
                void DescribeLicenseAsync(const Model::DescribeLicenseRequest& request, const DescribeLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseOutcomeCallable DescribeLicenseCallable(const Model::DescribeLicenseRequest& request);

                /**
                 *该接口可以获取设置中心-授权管理,某个授权下已绑定的授权机器列表
                 * @param req DescribeLicenseBindListRequest
                 * @return DescribeLicenseBindListOutcome
                 */
                DescribeLicenseBindListOutcome DescribeLicenseBindList(const Model::DescribeLicenseBindListRequest &request);
                void DescribeLicenseBindListAsync(const Model::DescribeLicenseBindListRequest& request, const DescribeLicenseBindListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseBindListOutcomeCallable DescribeLicenseBindListCallable(const Model::DescribeLicenseBindListRequest& request);

                /**
                 *查询授权绑定任务的进度
                 * @param req DescribeLicenseBindScheduleRequest
                 * @return DescribeLicenseBindScheduleOutcome
                 */
                DescribeLicenseBindScheduleOutcome DescribeLicenseBindSchedule(const Model::DescribeLicenseBindScheduleRequest &request);
                void DescribeLicenseBindScheduleAsync(const Model::DescribeLicenseBindScheduleRequest& request, const DescribeLicenseBindScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseBindScheduleOutcomeCallable DescribeLicenseBindScheduleCallable(const Model::DescribeLicenseBindScheduleRequest& request);

                /**
                 *授权管理-授权概览信息
                 * @param req DescribeLicenseGeneralRequest
                 * @return DescribeLicenseGeneralOutcome
                 */
                DescribeLicenseGeneralOutcome DescribeLicenseGeneral(const Model::DescribeLicenseGeneralRequest &request);
                void DescribeLicenseGeneralAsync(const Model::DescribeLicenseGeneralRequest& request, const DescribeLicenseGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseGeneralOutcomeCallable DescribeLicenseGeneralCallable(const Model::DescribeLicenseGeneralRequest& request);

                /**
                 *获取用户所有授权订单信息
                 * @param req DescribeLicenseListRequest
                 * @return DescribeLicenseListOutcome
                 */
                DescribeLicenseListOutcome DescribeLicenseList(const Model::DescribeLicenseListRequest &request);
                void DescribeLicenseListAsync(const Model::DescribeLicenseListRequest& request, const DescribeLicenseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseListOutcomeCallable DescribeLicenseListCallable(const Model::DescribeLicenseListRequest& request);

                /**
                 *查询授权白名单的可用配置
                 * @param req DescribeLicenseWhiteConfigRequest
                 * @return DescribeLicenseWhiteConfigOutcome
                 */
                DescribeLicenseWhiteConfigOutcome DescribeLicenseWhiteConfig(const Model::DescribeLicenseWhiteConfigRequest &request);
                void DescribeLicenseWhiteConfigAsync(const Model::DescribeLicenseWhiteConfigRequest& request, const DescribeLicenseWhiteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseWhiteConfigOutcomeCallable DescribeLicenseWhiteConfigCallable(const Model::DescribeLicenseWhiteConfigRequest& request);

                /**
                 *查询日志投递kafka可选项列表
                 * @param req DescribeLogDeliveryKafkaOptionsRequest
                 * @return DescribeLogDeliveryKafkaOptionsOutcome
                 */
                DescribeLogDeliveryKafkaOptionsOutcome DescribeLogDeliveryKafkaOptions(const Model::DescribeLogDeliveryKafkaOptionsRequest &request);
                void DescribeLogDeliveryKafkaOptionsAsync(const Model::DescribeLogDeliveryKafkaOptionsRequest& request, const DescribeLogDeliveryKafkaOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogDeliveryKafkaOptionsOutcomeCallable DescribeLogDeliveryKafkaOptionsCallable(const Model::DescribeLogDeliveryKafkaOptionsRequest& request);

                /**
                 *获取日志下载任务列表
                 * @param req DescribeLogExportsRequest
                 * @return DescribeLogExportsOutcome
                 */
                DescribeLogExportsOutcome DescribeLogExports(const Model::DescribeLogExportsRequest &request);
                void DescribeLogExportsAsync(const Model::DescribeLogExportsRequest& request, const DescribeLogExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogExportsOutcomeCallable DescribeLogExportsCallable(const Model::DescribeLogExportsRequest& request);

                /**
                 *获取日志直方图信息
                 * @param req DescribeLogHistogramRequest
                 * @return DescribeLogHistogramOutcome
                 */
                DescribeLogHistogramOutcome DescribeLogHistogram(const Model::DescribeLogHistogramRequest &request);
                void DescribeLogHistogramAsync(const Model::DescribeLogHistogramRequest& request, const DescribeLogHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogHistogramOutcomeCallable DescribeLogHistogramCallable(const Model::DescribeLogHistogramRequest& request);

                /**
                 *查询索引
                 * @param req DescribeLogIndexRequest
                 * @return DescribeLogIndexOutcome
                 */
                DescribeLogIndexOutcome DescribeLogIndex(const Model::DescribeLogIndexRequest &request);
                void DescribeLogIndexAsync(const Model::DescribeLogIndexRequest& request, const DescribeLogIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogIndexOutcomeCallable DescribeLogIndexCallable(const Model::DescribeLogIndexRequest& request);

                /**
                 *获取kafka投递信息
                 * @param req DescribeLogKafkaDeliverInfoRequest
                 * @return DescribeLogKafkaDeliverInfoOutcome
                 */
                DescribeLogKafkaDeliverInfoOutcome DescribeLogKafkaDeliverInfo(const Model::DescribeLogKafkaDeliverInfoRequest &request);
                void DescribeLogKafkaDeliverInfoAsync(const Model::DescribeLogKafkaDeliverInfoRequest& request, const DescribeLogKafkaDeliverInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogKafkaDeliverInfoOutcomeCallable DescribeLogKafkaDeliverInfoCallable(const Model::DescribeLogKafkaDeliverInfoRequest& request);

                /**
                 *获取日志存储配置
                 * @param req DescribeLogStorageConfigRequest
                 * @return DescribeLogStorageConfigOutcome
                 */
                DescribeLogStorageConfigOutcome DescribeLogStorageConfig(const Model::DescribeLogStorageConfigRequest &request);
                void DescribeLogStorageConfigAsync(const Model::DescribeLogStorageConfigRequest& request, const DescribeLogStorageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogStorageConfigOutcomeCallable DescribeLogStorageConfigCallable(const Model::DescribeLogStorageConfigRequest& request);

                /**
                 *获取日志存储量记录
                 * @param req DescribeLogStorageRecordRequest
                 * @return DescribeLogStorageRecordOutcome
                 */
                DescribeLogStorageRecordOutcome DescribeLogStorageRecord(const Model::DescribeLogStorageRecordRequest &request);
                void DescribeLogStorageRecordAsync(const Model::DescribeLogStorageRecordRequest& request, const DescribeLogStorageRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogStorageRecordOutcomeCallable DescribeLogStorageRecordCallable(const Model::DescribeLogStorageRecordRequest& request);

                /**
                 *获取日志检索容量使用统计
                 * @param req DescribeLogStorageStatisticRequest
                 * @return DescribeLogStorageStatisticOutcome
                 */
                DescribeLogStorageStatisticOutcome DescribeLogStorageStatistic(const Model::DescribeLogStorageStatisticRequest &request);
                void DescribeLogStorageStatisticAsync(const Model::DescribeLogStorageStatisticRequest& request, const DescribeLogStorageStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogStorageStatisticOutcomeCallable DescribeLogStorageStatisticCallable(const Model::DescribeLogStorageStatisticRequest& request);

                /**
                 *日志分析功能-获取日志类型，使用该接口返回的结果暂时可过滤的日志类型
                 * @param req DescribeLogTypeRequest
                 * @return DescribeLogTypeOutcome
                 */
                DescribeLogTypeOutcome DescribeLogType(const Model::DescribeLogTypeRequest &request);
                void DescribeLogTypeAsync(const Model::DescribeLogTypeRequest& request, const DescribeLogTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogTypeOutcomeCallable DescribeLogTypeCallable(const Model::DescribeLogTypeRequest& request);

                /**
                 *获取异地登录白名单合并后列表
                 * @param req DescribeLoginWhiteCombinedListRequest
                 * @return DescribeLoginWhiteCombinedListOutcome
                 */
                DescribeLoginWhiteCombinedListOutcome DescribeLoginWhiteCombinedList(const Model::DescribeLoginWhiteCombinedListRequest &request);
                void DescribeLoginWhiteCombinedListAsync(const Model::DescribeLoginWhiteCombinedListRequest& request, const DescribeLoginWhiteCombinedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginWhiteCombinedListOutcomeCallable DescribeLoginWhiteCombinedListCallable(const Model::DescribeLoginWhiteCombinedListRequest& request);

                /**
                 *查询合并后白名单机器列表
                 * @param req DescribeLoginWhiteHostListRequest
                 * @return DescribeLoginWhiteHostListOutcome
                 */
                DescribeLoginWhiteHostListOutcome DescribeLoginWhiteHostList(const Model::DescribeLoginWhiteHostListRequest &request);
                void DescribeLoginWhiteHostListAsync(const Model::DescribeLoginWhiteHostListRequest& request, const DescribeLoginWhiteHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginWhiteHostListOutcomeCallable DescribeLoginWhiteHostListCallable(const Model::DescribeLoginWhiteHostListRequest& request);

                /**
                 *获取异地登录白名单列表
                 * @param req DescribeLoginWhiteListRequest
                 * @return DescribeLoginWhiteListOutcome
                 */
                DescribeLoginWhiteListOutcome DescribeLoginWhiteList(const Model::DescribeLoginWhiteListRequest &request);
                void DescribeLoginWhiteListAsync(const Model::DescribeLoginWhiteListRequest& request, const DescribeLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginWhiteListOutcomeCallable DescribeLoginWhiteListCallable(const Model::DescribeLoginWhiteListRequest& request);

                /**
                 *查询机器清理历史记录
                 * @param req DescribeMachineClearHistoryRequest
                 * @return DescribeMachineClearHistoryOutcome
                 */
                DescribeMachineClearHistoryOutcome DescribeMachineClearHistory(const Model::DescribeMachineClearHistoryRequest &request);
                void DescribeMachineClearHistoryAsync(const Model::DescribeMachineClearHistoryRequest& request, const DescribeMachineClearHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineClearHistoryOutcomeCallable DescribeMachineClearHistoryCallable(const Model::DescribeMachineClearHistoryRequest& request);

                /**
                 *查询主机高级防御事件数统计
                 * @param req DescribeMachineDefenseCntRequest
                 * @return DescribeMachineDefenseCntOutcome
                 */
                DescribeMachineDefenseCntOutcome DescribeMachineDefenseCnt(const Model::DescribeMachineDefenseCntRequest &request);
                void DescribeMachineDefenseCntAsync(const Model::DescribeMachineDefenseCntRequest& request, const DescribeMachineDefenseCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineDefenseCntOutcomeCallable DescribeMachineDefenseCntCallable(const Model::DescribeMachineDefenseCntRequest& request);

                /**
                 *查询主机相关核心文件监控规则列表
                 * @param req DescribeMachineFileTamperRulesRequest
                 * @return DescribeMachineFileTamperRulesOutcome
                 */
                DescribeMachineFileTamperRulesOutcome DescribeMachineFileTamperRules(const Model::DescribeMachineFileTamperRulesRequest &request);
                void DescribeMachineFileTamperRulesAsync(const Model::DescribeMachineFileTamperRulesRequest& request, const DescribeMachineFileTamperRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineFileTamperRulesOutcomeCallable DescribeMachineFileTamperRulesCallable(const Model::DescribeMachineFileTamperRulesRequest& request);

                /**
                 *查询主机概览信息
                 * @param req DescribeMachineGeneralRequest
                 * @return DescribeMachineGeneralOutcome
                 */
                DescribeMachineGeneralOutcome DescribeMachineGeneral(const Model::DescribeMachineGeneralRequest &request);
                void DescribeMachineGeneralAsync(const Model::DescribeMachineGeneralRequest& request, const DescribeMachineGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineGeneralOutcomeCallable DescribeMachineGeneralCallable(const Model::DescribeMachineGeneralRequest& request);

                /**
                 *本接口（DescribeMachineInfo）用于获取机器详细信息。
                 * @param req DescribeMachineInfoRequest
                 * @return DescribeMachineInfoOutcome
                 */
                DescribeMachineInfoOutcome DescribeMachineInfo(const Model::DescribeMachineInfoRequest &request);
                void DescribeMachineInfoAsync(const Model::DescribeMachineInfoRequest& request, const DescribeMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineInfoOutcomeCallable DescribeMachineInfoCallable(const Model::DescribeMachineInfoRequest& request);

                /**
                 *本接口 (DescribeMachineLicenseDetail)查询机器授权信息
                 * @param req DescribeMachineLicenseDetailRequest
                 * @return DescribeMachineLicenseDetailOutcome
                 */
                DescribeMachineLicenseDetailOutcome DescribeMachineLicenseDetail(const Model::DescribeMachineLicenseDetailRequest &request);
                void DescribeMachineLicenseDetailAsync(const Model::DescribeMachineLicenseDetailRequest& request, const DescribeMachineLicenseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineLicenseDetailOutcomeCallable DescribeMachineLicenseDetailCallable(const Model::DescribeMachineLicenseDetailRequest& request);

                /**
                 *用于网页防篡改获取区域主机列表。
                 * @param req DescribeMachineListRequest
                 * @return DescribeMachineListOutcome
                 */
                DescribeMachineListOutcome DescribeMachineList(const Model::DescribeMachineListRequest &request);
                void DescribeMachineListAsync(const Model::DescribeMachineListRequest& request, const DescribeMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineListOutcomeCallable DescribeMachineListCallable(const Model::DescribeMachineListRequest& request);

                /**
                 *查询可筛选操作系统列表.
                 * @param req DescribeMachineOsListRequest
                 * @return DescribeMachineOsListOutcome
                 */
                DescribeMachineOsListOutcome DescribeMachineOsList(const Model::DescribeMachineOsListRequest &request);
                void DescribeMachineOsListAsync(const Model::DescribeMachineOsListRequest& request, const DescribeMachineOsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineOsListOutcomeCallable DescribeMachineOsListCallable(const Model::DescribeMachineOsListRequest& request);

                /**
                 *查询主机地域列表
                 * @param req DescribeMachineRegionListRequest
                 * @return DescribeMachineRegionListOutcome
                 */
                DescribeMachineRegionListOutcome DescribeMachineRegionList(const Model::DescribeMachineRegionListRequest &request);
                void DescribeMachineRegionListAsync(const Model::DescribeMachineRegionListRequest& request, const DescribeMachineRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineRegionListOutcomeCallable DescribeMachineRegionListCallable(const Model::DescribeMachineRegionListRequest& request);

                /**
                 *获取机器地域列表
                 * @param req DescribeMachineRegionsRequest
                 * @return DescribeMachineRegionsOutcome
                 */
                DescribeMachineRegionsOutcome DescribeMachineRegions(const Model::DescribeMachineRegionsRequest &request);
                void DescribeMachineRegionsAsync(const Model::DescribeMachineRegionsRequest& request, const DescribeMachineRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineRegionsOutcomeCallable DescribeMachineRegionsCallable(const Model::DescribeMachineRegionsRequest& request);

                /**
                 *查询主机入侵检测事件统计
                 * @param req DescribeMachineRiskCntRequest
                 * @return DescribeMachineRiskCntOutcome
                 */
                DescribeMachineRiskCntOutcome DescribeMachineRiskCnt(const Model::DescribeMachineRiskCntRequest &request);
                void DescribeMachineRiskCntAsync(const Model::DescribeMachineRiskCntRequest& request, const DescribeMachineRiskCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineRiskCntOutcomeCallable DescribeMachineRiskCntCallable(const Model::DescribeMachineRiskCntRequest& request);

                /**
                 *漏洞修护-查询主机创建的快照
                 * @param req DescribeMachineSnapshotRequest
                 * @return DescribeMachineSnapshotOutcome
                 */
                DescribeMachineSnapshotOutcome DescribeMachineSnapshot(const Model::DescribeMachineSnapshotRequest &request);
                void DescribeMachineSnapshotAsync(const Model::DescribeMachineSnapshotRequest& request, const DescribeMachineSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineSnapshotOutcomeCallable DescribeMachineSnapshotCallable(const Model::DescribeMachineSnapshotRequest& request);

                /**
                 *本接口 (DescribeMachines) 用于获取区域主机列表。
                 * @param req DescribeMachinesRequest
                 * @return DescribeMachinesOutcome
                 */
                DescribeMachinesOutcome DescribeMachines(const Model::DescribeMachinesRequest &request);
                void DescribeMachinesAsync(const Model::DescribeMachinesRequest& request, const DescribeMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachinesOutcomeCallable DescribeMachinesCallable(const Model::DescribeMachinesRequest& request);

                /**
                 *本接口 (DescribeMachinesSimple) 用于获取主机列表。
                 * @param req DescribeMachinesSimpleRequest
                 * @return DescribeMachinesSimpleOutcome
                 */
                DescribeMachinesSimpleOutcome DescribeMachinesSimple(const Model::DescribeMachinesSimpleRequest &request);
                void DescribeMachinesSimpleAsync(const Model::DescribeMachinesSimpleRequest& request, const DescribeMachinesSimpleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachinesSimpleOutcomeCallable DescribeMachinesSimpleCallable(const Model::DescribeMachinesSimpleRequest& request);

                /**
                 *入侵检测获取木马列表
                 * @param req DescribeMalWareListRequest
                 * @return DescribeMalWareListOutcome
                 */
                DescribeMalWareListOutcome DescribeMalWareList(const Model::DescribeMalWareListRequest &request);
                void DescribeMalWareListAsync(const Model::DescribeMalWareListRequest& request, const DescribeMalWareListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalWareListOutcomeCallable DescribeMalWareListCallable(const Model::DescribeMalWareListRequest& request);

                /**
                 *查询恶意请求白名单列表
                 * @param req DescribeMaliciousRequestWhiteListRequest
                 * @return DescribeMaliciousRequestWhiteListOutcome
                 */
                DescribeMaliciousRequestWhiteListOutcome DescribeMaliciousRequestWhiteList(const Model::DescribeMaliciousRequestWhiteListRequest &request);
                void DescribeMaliciousRequestWhiteListAsync(const Model::DescribeMaliciousRequestWhiteListRequest& request, const DescribeMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMaliciousRequestWhiteListOutcomeCallable DescribeMaliciousRequestWhiteListCallable(const Model::DescribeMaliciousRequestWhiteListRequest& request);

                /**
                 *获取木马文件下载地址
                 * @param req DescribeMalwareFileRequest
                 * @return DescribeMalwareFileOutcome
                 */
                DescribeMalwareFileOutcome DescribeMalwareFile(const Model::DescribeMalwareFileRequest &request);
                void DescribeMalwareFileAsync(const Model::DescribeMalwareFileRequest& request, const DescribeMalwareFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareFileOutcomeCallable DescribeMalwareFileCallable(const Model::DescribeMalwareFileRequest& request);

                /**
                 *查看恶意文件详情
                 * @param req DescribeMalwareInfoRequest
                 * @return DescribeMalwareInfoOutcome
                 */
                DescribeMalwareInfoOutcome DescribeMalwareInfo(const Model::DescribeMalwareInfoRequest &request);
                void DescribeMalwareInfoAsync(const Model::DescribeMalwareInfoRequest& request, const DescribeMalwareInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareInfoOutcomeCallable DescribeMalwareInfoCallable(const Model::DescribeMalwareInfoRequest& request);

                /**
                 *获取文件查杀概览信息
                 * @param req DescribeMalwareRiskOverviewRequest
                 * @return DescribeMalwareRiskOverviewOutcome
                 */
                DescribeMalwareRiskOverviewOutcome DescribeMalwareRiskOverview(const Model::DescribeMalwareRiskOverviewRequest &request);
                void DescribeMalwareRiskOverviewAsync(const Model::DescribeMalwareRiskOverviewRequest& request, const DescribeMalwareRiskOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareRiskOverviewOutcomeCallable DescribeMalwareRiskOverviewCallable(const Model::DescribeMalwareRiskOverviewRequest& request);

                /**
                 *打开入侵检测-恶意文件检测,弹出风险预警内容
                 * @param req DescribeMalwareRiskWarningRequest
                 * @return DescribeMalwareRiskWarningOutcome
                 */
                DescribeMalwareRiskWarningOutcome DescribeMalwareRiskWarning(const Model::DescribeMalwareRiskWarningRequest &request);
                void DescribeMalwareRiskWarningAsync(const Model::DescribeMalwareRiskWarningRequest& request, const DescribeMalwareRiskWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareRiskWarningOutcomeCallable DescribeMalwareRiskWarningCallable(const Model::DescribeMalwareRiskWarningRequest& request);

                /**
                 *查询定时扫描配置
                 * @param req DescribeMalwareTimingScanSettingRequest
                 * @return DescribeMalwareTimingScanSettingOutcome
                 */
                DescribeMalwareTimingScanSettingOutcome DescribeMalwareTimingScanSetting(const Model::DescribeMalwareTimingScanSettingRequest &request);
                void DescribeMalwareTimingScanSettingAsync(const Model::DescribeMalwareTimingScanSettingRequest& request, const DescribeMalwareTimingScanSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareTimingScanSettingOutcomeCallable DescribeMalwareTimingScanSettingCallable(const Model::DescribeMalwareTimingScanSettingRequest& request);

                /**
                 *获取木马白名单列表
                 * @param req DescribeMalwareWhiteListRequest
                 * @return DescribeMalwareWhiteListOutcome
                 */
                DescribeMalwareWhiteListOutcome DescribeMalwareWhiteList(const Model::DescribeMalwareWhiteListRequest &request);
                void DescribeMalwareWhiteListAsync(const Model::DescribeMalwareWhiteListRequest& request, const DescribeMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareWhiteListOutcomeCallable DescribeMalwareWhiteListCallable(const Model::DescribeMalwareWhiteListRequest& request);

                /**
                 *获取木马白名单受影响列表
                 * @param req DescribeMalwareWhiteListAffectListRequest
                 * @return DescribeMalwareWhiteListAffectListOutcome
                 */
                DescribeMalwareWhiteListAffectListOutcome DescribeMalwareWhiteListAffectList(const Model::DescribeMalwareWhiteListAffectListRequest &request);
                void DescribeMalwareWhiteListAffectListAsync(const Model::DescribeMalwareWhiteListAffectListRequest& request, const DescribeMalwareWhiteListAffectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareWhiteListAffectListOutcomeCallable DescribeMalwareWhiteListAffectListCallable(const Model::DescribeMalwareWhiteListAffectListRequest& request);

                /**
                 *专家服务-安全管家月巡检报告下载
                 * @param req DescribeMonthInspectionReportRequest
                 * @return DescribeMonthInspectionReportOutcome
                 */
                DescribeMonthInspectionReportOutcome DescribeMonthInspectionReport(const Model::DescribeMonthInspectionReportRequest &request);
                void DescribeMonthInspectionReportAsync(const Model::DescribeMonthInspectionReportRequest& request, const DescribeMonthInspectionReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonthInspectionReportOutcomeCallable DescribeMonthInspectionReportCallable(const Model::DescribeMonthInspectionReportRequest& request);

                /**
                 *查询网络攻击设置
                 * @param req DescribeNetAttackSettingRequest
                 * @return DescribeNetAttackSettingOutcome
                 */
                DescribeNetAttackSettingOutcome DescribeNetAttackSetting(const Model::DescribeNetAttackSettingRequest &request);
                void DescribeNetAttackSettingAsync(const Model::DescribeNetAttackSettingRequest& request, const DescribeNetAttackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetAttackSettingOutcomeCallable DescribeNetAttackSettingCallable(const Model::DescribeNetAttackSettingRequest& request);

                /**
                 *获取网络攻击白名单列表
                 * @param req DescribeNetAttackWhiteListRequest
                 * @return DescribeNetAttackWhiteListOutcome
                 */
                DescribeNetAttackWhiteListOutcome DescribeNetAttackWhiteList(const Model::DescribeNetAttackWhiteListRequest &request);
                void DescribeNetAttackWhiteListAsync(const Model::DescribeNetAttackWhiteListRequest& request, const DescribeNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetAttackWhiteListOutcomeCallable DescribeNetAttackWhiteListCallable(const Model::DescribeNetAttackWhiteListRequest& request);

                /**
                 *本接口 (DescribeOpenPortStatistics) 用于获取端口统计列表。
                 * @param req DescribeOpenPortStatisticsRequest
                 * @return DescribeOpenPortStatisticsOutcome
                 */
                DescribeOpenPortStatisticsOutcome DescribeOpenPortStatistics(const Model::DescribeOpenPortStatisticsRequest &request);
                void DescribeOpenPortStatisticsAsync(const Model::DescribeOpenPortStatisticsRequest& request, const DescribeOpenPortStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOpenPortStatisticsOutcomeCallable DescribeOpenPortStatisticsCallable(const Model::DescribeOpenPortStatisticsRequest& request);

                /**
                 *获取概览统计数据。
                 * @param req DescribeOverviewStatisticsRequest
                 * @return DescribeOverviewStatisticsOutcome
                 */
                DescribeOverviewStatisticsOutcome DescribeOverviewStatistics(const Model::DescribeOverviewStatisticsRequest &request);
                void DescribeOverviewStatisticsAsync(const Model::DescribeOverviewStatisticsRequest& request, const DescribeOverviewStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOverviewStatisticsOutcomeCallable DescribeOverviewStatisticsCallable(const Model::DescribeOverviewStatisticsRequest& request);

                /**
                 *本地提权信息详情
                 * @param req DescribePrivilegeEventInfoRequest
                 * @return DescribePrivilegeEventInfoOutcome
                 */
                DescribePrivilegeEventInfoOutcome DescribePrivilegeEventInfo(const Model::DescribePrivilegeEventInfoRequest &request);
                void DescribePrivilegeEventInfoAsync(const Model::DescribePrivilegeEventInfoRequest& request, const DescribePrivilegeEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivilegeEventInfoOutcomeCallable DescribePrivilegeEventInfoCallable(const Model::DescribePrivilegeEventInfoRequest& request);

                /**
                 *获取本地提权事件列表
                 * @param req DescribePrivilegeEventsRequest
                 * @return DescribePrivilegeEventsOutcome
                 */
                DescribePrivilegeEventsOutcome DescribePrivilegeEvents(const Model::DescribePrivilegeEventsRequest &request);
                void DescribePrivilegeEventsAsync(const Model::DescribePrivilegeEventsRequest& request, const DescribePrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivilegeEventsOutcomeCallable DescribePrivilegeEventsCallable(const Model::DescribePrivilegeEventsRequest& request);

                /**
                 *获取本地提权规则列表
                 * @param req DescribePrivilegeRulesRequest
                 * @return DescribePrivilegeRulesOutcome
                 */
                DescribePrivilegeRulesOutcome DescribePrivilegeRules(const Model::DescribePrivilegeRulesRequest &request);
                void DescribePrivilegeRulesAsync(const Model::DescribePrivilegeRulesRequest& request, const DescribePrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivilegeRulesOutcomeCallable DescribePrivilegeRulesCallable(const Model::DescribePrivilegeRulesRequest& request);

                /**
                 *用于获取专业版概览信息。
                 * @param req DescribeProVersionInfoRequest
                 * @return DescribeProVersionInfoOutcome
                 */
                DescribeProVersionInfoOutcome DescribeProVersionInfo(const Model::DescribeProVersionInfoRequest &request);
                void DescribeProVersionInfoAsync(const Model::DescribeProVersionInfoRequest& request, const DescribeProVersionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProVersionInfoOutcomeCallable DescribeProVersionInfoCallable(const Model::DescribeProVersionInfoRequest& request);

                /**
                 *用于获取单台主机或所有主机是否开通专业版状态。
                 * @param req DescribeProVersionStatusRequest
                 * @return DescribeProVersionStatusOutcome
                 */
                DescribeProVersionStatusOutcome DescribeProVersionStatus(const Model::DescribeProVersionStatusRequest &request);
                void DescribeProVersionStatusAsync(const Model::DescribeProVersionStatusRequest& request, const DescribeProVersionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProVersionStatusOutcomeCallable DescribeProVersionStatusCallable(const Model::DescribeProVersionStatusRequest& request);

                /**
                 *本接口 (DescribeProcessStatistics) 用于获取进程统计列表数据。
                 * @param req DescribeProcessStatisticsRequest
                 * @return DescribeProcessStatisticsOutcome
                 */
                DescribeProcessStatisticsOutcome DescribeProcessStatistics(const Model::DescribeProcessStatisticsRequest &request);
                void DescribeProcessStatisticsAsync(const Model::DescribeProcessStatisticsRequest& request, const DescribeProcessStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcessStatisticsOutcomeCallable DescribeProcessStatisticsCallable(const Model::DescribeProcessStatisticsRequest& request);

                /**
                 *产品试用状态查询接口
                 * @param req DescribeProductStatusRequest
                 * @return DescribeProductStatusOutcome
                 */
                DescribeProductStatusOutcome DescribeProductStatus(const Model::DescribeProductStatusRequest &request);
                void DescribeProductStatusAsync(const Model::DescribeProductStatusRequest& request, const DescribeProductStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductStatusOutcomeCallable DescribeProductStatusCallable(const Model::DescribeProductStatusRequest& request);

                /**
                 *网页防篡改防护目录列表
                 * @param req DescribeProtectDirListRequest
                 * @return DescribeProtectDirListOutcome
                 */
                DescribeProtectDirListOutcome DescribeProtectDirList(const Model::DescribeProtectDirListRequest &request);
                void DescribeProtectDirListAsync(const Model::DescribeProtectDirListRequest& request, const DescribeProtectDirListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProtectDirListOutcomeCallable DescribeProtectDirListCallable(const Model::DescribeProtectDirListRequest& request);

                /**
                 *查询防护目录关联服务器列表信息
                 * @param req DescribeProtectDirRelatedServerRequest
                 * @return DescribeProtectDirRelatedServerOutcome
                 */
                DescribeProtectDirRelatedServerOutcome DescribeProtectDirRelatedServer(const Model::DescribeProtectDirRelatedServerRequest &request);
                void DescribeProtectDirRelatedServerAsync(const Model::DescribeProtectDirRelatedServerRequest& request, const DescribeProtectDirRelatedServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProtectDirRelatedServerOutcomeCallable DescribeProtectDirRelatedServerCallable(const Model::DescribeProtectDirRelatedServerRequest& request);

                /**
                 *专家服务-旗舰重保列表
                 * @param req DescribeProtectNetListRequest
                 * @return DescribeProtectNetListOutcome
                 */
                DescribeProtectNetListOutcome DescribeProtectNetList(const Model::DescribeProtectNetListRequest &request);
                void DescribeProtectNetListAsync(const Model::DescribeProtectNetListRequest& request, const DescribeProtectNetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProtectNetListOutcomeCallable DescribeProtectNetListCallable(const Model::DescribeProtectNetListRequest& request);

                /**
                 *获取公网接入代理安装命令
                 * @param req DescribePublicProxyInstallCommandRequest
                 * @return DescribePublicProxyInstallCommandOutcome
                 */
                DescribePublicProxyInstallCommandOutcome DescribePublicProxyInstallCommand(const Model::DescribePublicProxyInstallCommandRequest &request);
                void DescribePublicProxyInstallCommandAsync(const Model::DescribePublicProxyInstallCommandRequest& request, const DescribePublicProxyInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicProxyInstallCommandOutcomeCallable DescribePublicProxyInstallCommandCallable(const Model::DescribePublicProxyInstallCommandRequest& request);

                /**
                 *查询主机快照备份列表
                 * @param req DescribeRansomDefenseBackupListRequest
                 * @return DescribeRansomDefenseBackupListOutcome
                 */
                DescribeRansomDefenseBackupListOutcome DescribeRansomDefenseBackupList(const Model::DescribeRansomDefenseBackupListRequest &request);
                void DescribeRansomDefenseBackupListAsync(const Model::DescribeRansomDefenseBackupListRequest& request, const DescribeRansomDefenseBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseBackupListOutcomeCallable DescribeRansomDefenseBackupListCallable(const Model::DescribeRansomDefenseBackupListRequest& request);

                /**
                 *查询防勒索事件列表
                 * @param req DescribeRansomDefenseEventsListRequest
                 * @return DescribeRansomDefenseEventsListOutcome
                 */
                DescribeRansomDefenseEventsListOutcome DescribeRansomDefenseEventsList(const Model::DescribeRansomDefenseEventsListRequest &request);
                void DescribeRansomDefenseEventsListAsync(const Model::DescribeRansomDefenseEventsListRequest& request, const DescribeRansomDefenseEventsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseEventsListOutcomeCallable DescribeRansomDefenseEventsListCallable(const Model::DescribeRansomDefenseEventsListRequest& request);

                /**
                 *查询备份详情列表
                 * @param req DescribeRansomDefenseMachineListRequest
                 * @return DescribeRansomDefenseMachineListOutcome
                 */
                DescribeRansomDefenseMachineListOutcome DescribeRansomDefenseMachineList(const Model::DescribeRansomDefenseMachineListRequest &request);
                void DescribeRansomDefenseMachineListAsync(const Model::DescribeRansomDefenseMachineListRequest& request, const DescribeRansomDefenseMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseMachineListOutcomeCallable DescribeRansomDefenseMachineListCallable(const Model::DescribeRansomDefenseMachineListRequest& request);

                /**
                 *获取主机绑定策略列表
                 * @param req DescribeRansomDefenseMachineStrategyInfoRequest
                 * @return DescribeRansomDefenseMachineStrategyInfoOutcome
                 */
                DescribeRansomDefenseMachineStrategyInfoOutcome DescribeRansomDefenseMachineStrategyInfo(const Model::DescribeRansomDefenseMachineStrategyInfoRequest &request);
                void DescribeRansomDefenseMachineStrategyInfoAsync(const Model::DescribeRansomDefenseMachineStrategyInfoRequest& request, const DescribeRansomDefenseMachineStrategyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseMachineStrategyInfoOutcomeCallable DescribeRansomDefenseMachineStrategyInfoCallable(const Model::DescribeRansomDefenseMachineStrategyInfoRequest& request);

                /**
                 *查询回滚任务列表
                 * @param req DescribeRansomDefenseRollBackTaskListRequest
                 * @return DescribeRansomDefenseRollBackTaskListOutcome
                 */
                DescribeRansomDefenseRollBackTaskListOutcome DescribeRansomDefenseRollBackTaskList(const Model::DescribeRansomDefenseRollBackTaskListRequest &request);
                void DescribeRansomDefenseRollBackTaskListAsync(const Model::DescribeRansomDefenseRollBackTaskListRequest& request, const DescribeRansomDefenseRollBackTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseRollBackTaskListOutcomeCallable DescribeRansomDefenseRollBackTaskListCallable(const Model::DescribeRansomDefenseRollBackTaskListRequest& request);

                /**
                 *获取用户防勒索趋势
                 * @param req DescribeRansomDefenseStateRequest
                 * @return DescribeRansomDefenseStateOutcome
                 */
                DescribeRansomDefenseStateOutcome DescribeRansomDefenseState(const Model::DescribeRansomDefenseStateRequest &request);
                void DescribeRansomDefenseStateAsync(const Model::DescribeRansomDefenseStateRequest& request, const DescribeRansomDefenseStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseStateOutcomeCallable DescribeRansomDefenseStateCallable(const Model::DescribeRansomDefenseStateRequest& request);

                /**
                 *获取策略详情
                 * @param req DescribeRansomDefenseStrategyDetailRequest
                 * @return DescribeRansomDefenseStrategyDetailOutcome
                 */
                DescribeRansomDefenseStrategyDetailOutcome DescribeRansomDefenseStrategyDetail(const Model::DescribeRansomDefenseStrategyDetailRequest &request);
                void DescribeRansomDefenseStrategyDetailAsync(const Model::DescribeRansomDefenseStrategyDetailRequest& request, const DescribeRansomDefenseStrategyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseStrategyDetailOutcomeCallable DescribeRansomDefenseStrategyDetailCallable(const Model::DescribeRansomDefenseStrategyDetailRequest& request);

                /**
                 *查询防勒索策略列表
                 * @param req DescribeRansomDefenseStrategyListRequest
                 * @return DescribeRansomDefenseStrategyListOutcome
                 */
                DescribeRansomDefenseStrategyListOutcome DescribeRansomDefenseStrategyList(const Model::DescribeRansomDefenseStrategyListRequest &request);
                void DescribeRansomDefenseStrategyListAsync(const Model::DescribeRansomDefenseStrategyListRequest& request, const DescribeRansomDefenseStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseStrategyListOutcomeCallable DescribeRansomDefenseStrategyListCallable(const Model::DescribeRansomDefenseStrategyListRequest& request);

                /**
                 *查询防勒索策略绑定机器列表
                 * @param req DescribeRansomDefenseStrategyMachinesRequest
                 * @return DescribeRansomDefenseStrategyMachinesOutcome
                 */
                DescribeRansomDefenseStrategyMachinesOutcome DescribeRansomDefenseStrategyMachines(const Model::DescribeRansomDefenseStrategyMachinesRequest &request);
                void DescribeRansomDefenseStrategyMachinesAsync(const Model::DescribeRansomDefenseStrategyMachinesRequest& request, const DescribeRansomDefenseStrategyMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseStrategyMachinesOutcomeCallable DescribeRansomDefenseStrategyMachinesCallable(const Model::DescribeRansomDefenseStrategyMachinesRequest& request);

                /**
                 *获取全网勒索态势
                 * @param req DescribeRansomDefenseTrendRequest
                 * @return DescribeRansomDefenseTrendOutcome
                 */
                DescribeRansomDefenseTrendOutcome DescribeRansomDefenseTrend(const Model::DescribeRansomDefenseTrendRequest &request);
                void DescribeRansomDefenseTrendAsync(const Model::DescribeRansomDefenseTrendRequest& request, const DescribeRansomDefenseTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseTrendOutcomeCallable DescribeRansomDefenseTrendCallable(const Model::DescribeRansomDefenseTrendRequest& request);

                /**
                 *查看漏洞防御最大cpu限制
                 * @param req DescribeRaspMaxCpuRequest
                 * @return DescribeRaspMaxCpuOutcome
                 */
                DescribeRaspMaxCpuOutcome DescribeRaspMaxCpu(const Model::DescribeRaspMaxCpuRequest &request);
                void DescribeRaspMaxCpuAsync(const Model::DescribeRaspMaxCpuRequest& request, const DescribeRaspMaxCpuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRaspMaxCpuOutcomeCallable DescribeRaspMaxCpuCallable(const Model::DescribeRaspMaxCpuRequest& request);

                /**
                 *获取漏洞防御白名单漏洞列表
                 * @param req DescribeRaspRuleVulsRequest
                 * @return DescribeRaspRuleVulsOutcome
                 */
                DescribeRaspRuleVulsOutcome DescribeRaspRuleVuls(const Model::DescribeRaspRuleVulsRequest &request);
                void DescribeRaspRuleVulsAsync(const Model::DescribeRaspRuleVulsRequest& request, const DescribeRaspRuleVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRaspRuleVulsOutcomeCallable DescribeRaspRuleVulsCallable(const Model::DescribeRaspRuleVulsRequest& request);

                /**
                 *查询漏洞防御白名单
                 * @param req DescribeRaspRulesRequest
                 * @return DescribeRaspRulesOutcome
                 */
                DescribeRaspRulesOutcome DescribeRaspRules(const Model::DescribeRaspRulesRequest &request);
                void DescribeRaspRulesAsync(const Model::DescribeRaspRulesRequest& request, const DescribeRaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRaspRulesOutcomeCallable DescribeRaspRulesCallable(const Model::DescribeRaspRulesRequest& request);

                /**
                 *查询推荐购买防护核数
                 * @param req DescribeRecommendedProtectCpuRequest
                 * @return DescribeRecommendedProtectCpuOutcome
                 */
                DescribeRecommendedProtectCpuOutcome DescribeRecommendedProtectCpu(const Model::DescribeRecommendedProtectCpuRequest &request);
                void DescribeRecommendedProtectCpuAsync(const Model::DescribeRecommendedProtectCpuRequest& request, const DescribeRecommendedProtectCpuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecommendedProtectCpuOutcomeCallable DescribeRecommendedProtectCpuCallable(const Model::DescribeRecommendedProtectCpuRequest& request);

                /**
                 *反弹shell信息详情
                 * @param req DescribeReverseShellEventInfoRequest
                 * @return DescribeReverseShellEventInfoOutcome
                 */
                DescribeReverseShellEventInfoOutcome DescribeReverseShellEventInfo(const Model::DescribeReverseShellEventInfoRequest &request);
                void DescribeReverseShellEventInfoAsync(const Model::DescribeReverseShellEventInfoRequest& request, const DescribeReverseShellEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReverseShellEventInfoOutcomeCallable DescribeReverseShellEventInfoCallable(const Model::DescribeReverseShellEventInfoRequest& request);

                /**
                 *获取反弹Shell列表
                 * @param req DescribeReverseShellEventsRequest
                 * @return DescribeReverseShellEventsOutcome
                 */
                DescribeReverseShellEventsOutcome DescribeReverseShellEvents(const Model::DescribeReverseShellEventsRequest &request);
                void DescribeReverseShellEventsAsync(const Model::DescribeReverseShellEventsRequest& request, const DescribeReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReverseShellEventsOutcomeCallable DescribeReverseShellEventsCallable(const Model::DescribeReverseShellEventsRequest& request);

                /**
                 *获取反弹Shell规则列表
                 * @param req DescribeReverseShellRulesRequest
                 * @return DescribeReverseShellRulesOutcome
                 */
                DescribeReverseShellRulesOutcome DescribeReverseShellRules(const Model::DescribeReverseShellRulesRequest &request);
                void DescribeReverseShellRulesAsync(const Model::DescribeReverseShellRulesRequest& request, const DescribeReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReverseShellRulesOutcomeCallable DescribeReverseShellRulesCallable(const Model::DescribeReverseShellRulesRequest& request);

                /**
                 *查询入侵检测事件更新状态任务是否完成
                 * @param req DescribeRiskBatchStatusRequest
                 * @return DescribeRiskBatchStatusOutcome
                 */
                DescribeRiskBatchStatusOutcome DescribeRiskBatchStatus(const Model::DescribeRiskBatchStatusRequest &request);
                void DescribeRiskBatchStatusAsync(const Model::DescribeRiskBatchStatusRequest& request, const DescribeRiskBatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskBatchStatusOutcomeCallable DescribeRiskBatchStatusCallable(const Model::DescribeRiskBatchStatusRequest& request);

                /**
                 *查询恶意请求事件详情
                 * @param req DescribeRiskDnsEventInfoRequest
                 * @return DescribeRiskDnsEventInfoOutcome
                 */
                DescribeRiskDnsEventInfoOutcome DescribeRiskDnsEventInfo(const Model::DescribeRiskDnsEventInfoRequest &request);
                void DescribeRiskDnsEventInfoAsync(const Model::DescribeRiskDnsEventInfoRequest& request, const DescribeRiskDnsEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDnsEventInfoOutcomeCallable DescribeRiskDnsEventInfoCallable(const Model::DescribeRiskDnsEventInfoRequest& request);

                /**
                 *获取恶意请求事件列表
                 * @param req DescribeRiskDnsEventListRequest
                 * @return DescribeRiskDnsEventListOutcome
                 */
                DescribeRiskDnsEventListOutcome DescribeRiskDnsEventList(const Model::DescribeRiskDnsEventListRequest &request);
                void DescribeRiskDnsEventListAsync(const Model::DescribeRiskDnsEventListRequest& request, const DescribeRiskDnsEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDnsEventListOutcomeCallable DescribeRiskDnsEventListCallable(const Model::DescribeRiskDnsEventListRequest& request);

                /**
                 *查询恶意请求详情
                 * @param req DescribeRiskDnsInfoRequest
                 * @return DescribeRiskDnsInfoOutcome
                 */
                DescribeRiskDnsInfoOutcome DescribeRiskDnsInfo(const Model::DescribeRiskDnsInfoRequest &request);
                void DescribeRiskDnsInfoAsync(const Model::DescribeRiskDnsInfoRequest& request, const DescribeRiskDnsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDnsInfoOutcomeCallable DescribeRiskDnsInfoCallable(const Model::DescribeRiskDnsInfoRequest& request);

                /**
                 *入侵检测，获取恶意请求列表
                 * @param req DescribeRiskDnsListRequest
                 * @return DescribeRiskDnsListOutcome
                 */
                DescribeRiskDnsListOutcome DescribeRiskDnsList(const Model::DescribeRiskDnsListRequest &request);
                void DescribeRiskDnsListAsync(const Model::DescribeRiskDnsListRequest& request, const DescribeRiskDnsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDnsListOutcomeCallable DescribeRiskDnsListCallable(const Model::DescribeRiskDnsListRequest& request);

                /**
                 *获取恶意请求策略列表
                 * @param req DescribeRiskDnsPolicyListRequest
                 * @return DescribeRiskDnsPolicyListOutcome
                 */
                DescribeRiskDnsPolicyListOutcome DescribeRiskDnsPolicyList(const Model::DescribeRiskDnsPolicyListRequest &request);
                void DescribeRiskDnsPolicyListAsync(const Model::DescribeRiskDnsPolicyListRequest& request, const DescribeRiskDnsPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDnsPolicyListOutcomeCallable DescribeRiskDnsPolicyListCallable(const Model::DescribeRiskDnsPolicyListRequest& request);

                /**
                 *获取异常进程列表
                 * @param req DescribeRiskProcessEventsRequest
                 * @return DescribeRiskProcessEventsOutcome
                 */
                DescribeRiskProcessEventsOutcome DescribeRiskProcessEvents(const Model::DescribeRiskProcessEventsRequest &request);
                void DescribeRiskProcessEventsAsync(const Model::DescribeRiskProcessEventsRequest& request, const DescribeRiskProcessEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskProcessEventsOutcomeCallable DescribeRiskProcessEventsCallable(const Model::DescribeRiskProcessEventsRequest& request);

                /**
                 *查询安全通知信息
                 * @param req DescribeSafeInfoRequest
                 * @return DescribeSafeInfoOutcome
                 */
                DescribeSafeInfoOutcome DescribeSafeInfo(const Model::DescribeSafeInfoRequest &request);
                void DescribeSafeInfoAsync(const Model::DescribeSafeInfoRequest& request, const DescribeSafeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSafeInfoOutcomeCallable DescribeSafeInfoCallable(const Model::DescribeSafeInfoRequest& request);

                /**
                 *查询木马扫描进度
                 * @param req DescribeScanMalwareScheduleRequest
                 * @return DescribeScanMalwareScheduleOutcome
                 */
                DescribeScanMalwareScheduleOutcome DescribeScanMalwareSchedule(const Model::DescribeScanMalwareScheduleRequest &request);
                void DescribeScanMalwareScheduleAsync(const Model::DescribeScanMalwareScheduleRequest& request, const DescribeScanMalwareScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanMalwareScheduleOutcomeCallable DescribeScanMalwareScheduleCallable(const Model::DescribeScanMalwareScheduleRequest& request);

                /**
                 *根据taskid查询检测进度
                 * @param req DescribeScanScheduleRequest
                 * @return DescribeScanScheduleOutcome
                 */
                DescribeScanScheduleOutcome DescribeScanSchedule(const Model::DescribeScanScheduleRequest &request);
                void DescribeScanScheduleAsync(const Model::DescribeScanScheduleRequest& request, const DescribeScanScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanScheduleOutcomeCallable DescribeScanScheduleCallable(const Model::DescribeScanScheduleRequest& request);

                /**
                 *DescribeScanState 该接口能查询对应模块正在进行的扫描任务状态
                 * @param req DescribeScanStateRequest
                 * @return DescribeScanStateOutcome
                 */
                DescribeScanStateOutcome DescribeScanState(const Model::DescribeScanStateRequest &request);
                void DescribeScanStateAsync(const Model::DescribeScanStateRequest& request, const DescribeScanStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanStateOutcomeCallable DescribeScanStateCallable(const Model::DescribeScanStateRequest& request);

                /**
                 *DescribeScanTaskDetails 查询扫描任务详情 , 可以查询扫描进度信息/异常;
                 * @param req DescribeScanTaskDetailsRequest
                 * @return DescribeScanTaskDetailsOutcome
                 */
                DescribeScanTaskDetailsOutcome DescribeScanTaskDetails(const Model::DescribeScanTaskDetailsRequest &request);
                void DescribeScanTaskDetailsAsync(const Model::DescribeScanTaskDetailsRequest& request, const DescribeScanTaskDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanTaskDetailsOutcomeCallable DescribeScanTaskDetailsCallable(const Model::DescribeScanTaskDetailsRequest& request);

                /**
                 *DescribeScanTaskStatus 查询机器扫描状态列表用于过滤筛选
                 * @param req DescribeScanTaskStatusRequest
                 * @return DescribeScanTaskStatusOutcome
                 */
                DescribeScanTaskStatusOutcome DescribeScanTaskStatus(const Model::DescribeScanTaskStatusRequest &request);
                void DescribeScanTaskStatusAsync(const Model::DescribeScanTaskStatusRequest& request, const DescribeScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanTaskStatusOutcomeCallable DescribeScanTaskStatusCallable(const Model::DescribeScanTaskStatusRequest& request);

                /**
                 *查询定期检测的配置
                 * @param req DescribeScanVulSettingRequest
                 * @return DescribeScanVulSettingOutcome
                 */
                DescribeScanVulSettingOutcome DescribeScanVulSetting(const Model::DescribeScanVulSettingRequest &request);
                void DescribeScanVulSettingAsync(const Model::DescribeScanVulSettingRequest& request, const DescribeScanVulSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanVulSettingOutcomeCallable DescribeScanVulSettingCallable(const Model::DescribeScanVulSettingRequest& request);

                /**
                 *大屏可视化获取全网攻击热点
                 * @param req DescribeScreenAttackHotspotRequest
                 * @return DescribeScreenAttackHotspotOutcome
                 */
                DescribeScreenAttackHotspotOutcome DescribeScreenAttackHotspot(const Model::DescribeScreenAttackHotspotRequest &request);
                void DescribeScreenAttackHotspotAsync(const Model::DescribeScreenAttackHotspotRequest& request, const DescribeScreenAttackHotspotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenAttackHotspotOutcomeCallable DescribeScreenAttackHotspotCallable(const Model::DescribeScreenAttackHotspotRequest& request);

                /**
                 *大屏可视化安全播报
                 * @param req DescribeScreenBroadcastsRequest
                 * @return DescribeScreenBroadcastsOutcome
                 */
                DescribeScreenBroadcastsOutcome DescribeScreenBroadcasts(const Model::DescribeScreenBroadcastsRequest &request);
                void DescribeScreenBroadcastsAsync(const Model::DescribeScreenBroadcastsRequest& request, const DescribeScreenBroadcastsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenBroadcastsOutcomeCallable DescribeScreenBroadcastsCallable(const Model::DescribeScreenBroadcastsRequest& request);

                /**
                 *大屏可视化防趋势接口
                 * @param req DescribeScreenDefenseTrendsRequest
                 * @return DescribeScreenDefenseTrendsOutcome
                 */
                DescribeScreenDefenseTrendsOutcome DescribeScreenDefenseTrends(const Model::DescribeScreenDefenseTrendsRequest &request);
                void DescribeScreenDefenseTrendsAsync(const Model::DescribeScreenDefenseTrendsRequest& request, const DescribeScreenDefenseTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenDefenseTrendsOutcomeCallable DescribeScreenDefenseTrendsCallable(const Model::DescribeScreenDefenseTrendsRequest& request);

                /**
                 *大屏可视化紧急通知
                 * @param req DescribeScreenEmergentMsgRequest
                 * @return DescribeScreenEmergentMsgOutcome
                 */
                DescribeScreenEmergentMsgOutcome DescribeScreenEmergentMsg(const Model::DescribeScreenEmergentMsgRequest &request);
                void DescribeScreenEmergentMsgAsync(const Model::DescribeScreenEmergentMsgRequest& request, const DescribeScreenEmergentMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenEmergentMsgOutcomeCallable DescribeScreenEmergentMsgCallable(const Model::DescribeScreenEmergentMsgRequest& request);

                /**
                 *大屏可视化获取安全概览相关事件统计数据接口
                 * @param req DescribeScreenEventsCntRequest
                 * @return DescribeScreenEventsCntOutcome
                 */
                DescribeScreenEventsCntOutcome DescribeScreenEventsCnt(const Model::DescribeScreenEventsCntRequest &request);
                void DescribeScreenEventsCntAsync(const Model::DescribeScreenEventsCntRequest& request, const DescribeScreenEventsCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenEventsCntOutcomeCallable DescribeScreenEventsCntCallable(const Model::DescribeScreenEventsCntRequest& request);

                /**
                 *大屏可视化获取主机相关统计
                 * @param req DescribeScreenGeneralStatRequest
                 * @return DescribeScreenGeneralStatOutcome
                 */
                DescribeScreenGeneralStatOutcome DescribeScreenGeneralStat(const Model::DescribeScreenGeneralStatRequest &request);
                void DescribeScreenGeneralStatAsync(const Model::DescribeScreenGeneralStatRequest& request, const DescribeScreenGeneralStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenGeneralStatOutcomeCallable DescribeScreenGeneralStatCallable(const Model::DescribeScreenGeneralStatRequest& request);

                /**
                 *大屏可视化主机入侵详情
                 * @param req DescribeScreenHostInvasionRequest
                 * @return DescribeScreenHostInvasionOutcome
                 */
                DescribeScreenHostInvasionOutcome DescribeScreenHostInvasion(const Model::DescribeScreenHostInvasionRequest &request);
                void DescribeScreenHostInvasionAsync(const Model::DescribeScreenHostInvasionRequest& request, const DescribeScreenHostInvasionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenHostInvasionOutcomeCallable DescribeScreenHostInvasionCallable(const Model::DescribeScreenHostInvasionRequest& request);

                /**
                 *大屏可视化主机区域选项列表
                 * @param req DescribeScreenMachineRegionsRequest
                 * @return DescribeScreenMachineRegionsOutcome
                 */
                DescribeScreenMachineRegionsOutcome DescribeScreenMachineRegions(const Model::DescribeScreenMachineRegionsRequest &request);
                void DescribeScreenMachineRegionsAsync(const Model::DescribeScreenMachineRegionsRequest& request, const DescribeScreenMachineRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenMachineRegionsOutcomeCallable DescribeScreenMachineRegionsCallable(const Model::DescribeScreenMachineRegionsRequest& request);

                /**
                 *大屏可视化主机区域列表
                 * @param req DescribeScreenMachinesRequest
                 * @return DescribeScreenMachinesOutcome
                 */
                DescribeScreenMachinesOutcome DescribeScreenMachines(const Model::DescribeScreenMachinesRequest &request);
                void DescribeScreenMachinesAsync(const Model::DescribeScreenMachinesRequest& request, const DescribeScreenMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenMachinesOutcomeCallable DescribeScreenMachinesCallable(const Model::DescribeScreenMachinesRequest& request);

                /**
                 *大屏可视化主机安全防护引擎介绍
                 * @param req DescribeScreenProtectionCntRequest
                 * @return DescribeScreenProtectionCntOutcome
                 */
                DescribeScreenProtectionCntOutcome DescribeScreenProtectionCnt(const Model::DescribeScreenProtectionCntRequest &request);
                void DescribeScreenProtectionCntAsync(const Model::DescribeScreenProtectionCntRequest& request, const DescribeScreenProtectionCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenProtectionCntOutcomeCallable DescribeScreenProtectionCntCallable(const Model::DescribeScreenProtectionCntRequest& request);

                /**
                 *大屏获取安全防护状态
                 * @param req DescribeScreenProtectionStatRequest
                 * @return DescribeScreenProtectionStatOutcome
                 */
                DescribeScreenProtectionStatOutcome DescribeScreenProtectionStat(const Model::DescribeScreenProtectionStatRequest &request);
                void DescribeScreenProtectionStatAsync(const Model::DescribeScreenProtectionStatRequest& request, const DescribeScreenProtectionStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenProtectionStatOutcomeCallable DescribeScreenProtectionStatCallable(const Model::DescribeScreenProtectionStatRequest& request);

                /**
                 *大屏可视化风险资产top5（今日），统计今日风险资产
                 * @param req DescribeScreenRiskAssetsTopRequest
                 * @return DescribeScreenRiskAssetsTopOutcome
                 */
                DescribeScreenRiskAssetsTopOutcome DescribeScreenRiskAssetsTop(const Model::DescribeScreenRiskAssetsTopRequest &request);
                void DescribeScreenRiskAssetsTopAsync(const Model::DescribeScreenRiskAssetsTopRequest& request, const DescribeScreenRiskAssetsTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenRiskAssetsTopOutcomeCallable DescribeScreenRiskAssetsTopCallable(const Model::DescribeScreenRiskAssetsTopRequest& request);

                /**
                 *获取历史搜索记录
                 * @param req DescribeSearchLogsRequest
                 * @return DescribeSearchLogsOutcome
                 */
                DescribeSearchLogsOutcome DescribeSearchLogs(const Model::DescribeSearchLogsRequest &request);
                void DescribeSearchLogsAsync(const Model::DescribeSearchLogsRequest& request, const DescribeSearchLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSearchLogsOutcomeCallable DescribeSearchLogsCallable(const Model::DescribeSearchLogsRequest& request);

                /**
                 *获取快速检索列表
                 * @param req DescribeSearchTemplatesRequest
                 * @return DescribeSearchTemplatesOutcome
                 */
                DescribeSearchTemplatesOutcome DescribeSearchTemplates(const Model::DescribeSearchTemplatesRequest &request);
                void DescribeSearchTemplatesAsync(const Model::DescribeSearchTemplatesRequest& request, const DescribeSearchTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSearchTemplatesOutcomeCallable DescribeSearchTemplatesCallable(const Model::DescribeSearchTemplatesRequest& request);

                /**
                 *查询安全播报文章信息
                 * @param req DescribeSecurityBroadcastInfoRequest
                 * @return DescribeSecurityBroadcastInfoOutcome
                 */
                DescribeSecurityBroadcastInfoOutcome DescribeSecurityBroadcastInfo(const Model::DescribeSecurityBroadcastInfoRequest &request);
                void DescribeSecurityBroadcastInfoAsync(const Model::DescribeSecurityBroadcastInfoRequest& request, const DescribeSecurityBroadcastInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityBroadcastInfoOutcomeCallable DescribeSecurityBroadcastInfoCallable(const Model::DescribeSecurityBroadcastInfoRequest& request);

                /**
                 *安全播报列表页
                 * @param req DescribeSecurityBroadcastsRequest
                 * @return DescribeSecurityBroadcastsOutcome
                 */
                DescribeSecurityBroadcastsOutcome DescribeSecurityBroadcasts(const Model::DescribeSecurityBroadcastsRequest &request);
                void DescribeSecurityBroadcastsAsync(const Model::DescribeSecurityBroadcastsRequest& request, const DescribeSecurityBroadcastsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityBroadcastsOutcomeCallable DescribeSecurityBroadcastsCallable(const Model::DescribeSecurityBroadcastsRequest& request);

                /**
                 *本接口 (DescribeSecurityDynamics) 用于获取安全事件动态消息数据。
                 * @param req DescribeSecurityDynamicsRequest
                 * @return DescribeSecurityDynamicsOutcome
                 */
                DescribeSecurityDynamicsOutcome DescribeSecurityDynamics(const Model::DescribeSecurityDynamicsRequest &request);
                void DescribeSecurityDynamicsAsync(const Model::DescribeSecurityDynamicsRequest& request, const DescribeSecurityDynamicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityDynamicsOutcomeCallable DescribeSecurityDynamicsCallable(const Model::DescribeSecurityDynamicsRequest& request);

                /**
                 *获取安全事件统计
                 * @param req DescribeSecurityEventStatRequest
                 * @return DescribeSecurityEventStatOutcome
                 */
                DescribeSecurityEventStatOutcome DescribeSecurityEventStat(const Model::DescribeSecurityEventStatRequest &request);
                void DescribeSecurityEventStatAsync(const Model::DescribeSecurityEventStatRequest& request, const DescribeSecurityEventStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityEventStatOutcomeCallable DescribeSecurityEventStatCallable(const Model::DescribeSecurityEventStatRequest& request);

                /**
                 *获取安全概览相关事件统计数据接口
                 * @param req DescribeSecurityEventsCntRequest
                 * @return DescribeSecurityEventsCntOutcome
                 */
                DescribeSecurityEventsCntOutcome DescribeSecurityEventsCnt(const Model::DescribeSecurityEventsCntRequest &request);
                void DescribeSecurityEventsCntAsync(const Model::DescribeSecurityEventsCntRequest& request, const DescribeSecurityEventsCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityEventsCntOutcomeCallable DescribeSecurityEventsCntCallable(const Model::DescribeSecurityEventsCntRequest& request);

                /**
                 *本接口 (DescribeSecurityTrends) 用于获取安全事件统计数据。
                 * @param req DescribeSecurityTrendsRequest
                 * @return DescribeSecurityTrendsOutcome
                 */
                DescribeSecurityTrendsOutcome DescribeSecurityTrends(const Model::DescribeSecurityTrendsRequest &request);
                void DescribeSecurityTrendsAsync(const Model::DescribeSecurityTrendsRequest& request, const DescribeSecurityTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityTrendsOutcomeCallable DescribeSecurityTrendsCallable(const Model::DescribeSecurityTrendsRequest& request);

                /**
                 *查询服务区关联目录详情
                 * @param req DescribeServerRelatedDirInfoRequest
                 * @return DescribeServerRelatedDirInfoOutcome
                 */
                DescribeServerRelatedDirInfoOutcome DescribeServerRelatedDirInfo(const Model::DescribeServerRelatedDirInfoRequest &request);
                void DescribeServerRelatedDirInfoAsync(const Model::DescribeServerRelatedDirInfoRequest& request, const DescribeServerRelatedDirInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServerRelatedDirInfoOutcomeCallable DescribeServerRelatedDirInfoCallable(const Model::DescribeServerRelatedDirInfoRequest& request);

                /**
                 *获取待处理风险文件数+影响服务器数+是否试用检测+最近检测时间
                 * @param req DescribeServersAndRiskAndFirstInfoRequest
                 * @return DescribeServersAndRiskAndFirstInfoOutcome
                 */
                DescribeServersAndRiskAndFirstInfoOutcome DescribeServersAndRiskAndFirstInfo(const Model::DescribeServersAndRiskAndFirstInfoRequest &request);
                void DescribeServersAndRiskAndFirstInfoAsync(const Model::DescribeServersAndRiskAndFirstInfoRequest& request, const DescribeServersAndRiskAndFirstInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServersAndRiskAndFirstInfoOutcomeCallable DescribeServersAndRiskAndFirstInfoCallable(const Model::DescribeServersAndRiskAndFirstInfoRequest& request);

                /**
                 *根据策略名查询策略是否存在
                 * @param req DescribeStrategyExistRequest
                 * @return DescribeStrategyExistOutcome
                 */
                DescribeStrategyExistOutcome DescribeStrategyExist(const Model::DescribeStrategyExistRequest &request);
                void DescribeStrategyExistAsync(const Model::DescribeStrategyExistRequest& request, const DescribeStrategyExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStrategyExistOutcomeCallable DescribeStrategyExistCallable(const Model::DescribeStrategyExistRequest& request);

                /**
                 *获取指定标签关联的服务器信息
                 * @param req DescribeTagMachinesRequest
                 * @return DescribeTagMachinesOutcome
                 */
                DescribeTagMachinesOutcome DescribeTagMachines(const Model::DescribeTagMachinesRequest &request);
                void DescribeTagMachinesAsync(const Model::DescribeTagMachinesRequest& request, const DescribeTagMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagMachinesOutcomeCallable DescribeTagMachinesCallable(const Model::DescribeTagMachinesRequest& request);

                /**
                 *获取所有主机标签
                 * @param req DescribeTagsRequest
                 * @return DescribeTagsOutcome
                 */
                DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest &request);
                void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request);

                /**
                 *查询主机安全授权试用报告(仅限控制台申领的)
                 * @param req DescribeTrialReportRequest
                 * @return DescribeTrialReportOutcome
                 */
                DescribeTrialReportOutcome DescribeTrialReport(const Model::DescribeTrialReportRequest &request);
                void DescribeTrialReportAsync(const Model::DescribeTrialReportRequest& request, const DescribeTrialReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrialReportOutcomeCallable DescribeTrialReportCallable(const Model::DescribeTrialReportRequest& request);

                /**
                 *获取漏洞管理模块指定类型的待处理漏洞数、主机数和非专业版主机数量
                 * @param req DescribeUndoVulCountsRequest
                 * @return DescribeUndoVulCountsOutcome
                 */
                DescribeUndoVulCountsOutcome DescribeUndoVulCounts(const Model::DescribeUndoVulCountsRequest &request);
                void DescribeUndoVulCountsAsync(const Model::DescribeUndoVulCountsRequest& request, const DescribeUndoVulCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUndoVulCountsOutcomeCallable DescribeUndoVulCountsCallable(const Model::DescribeUndoVulCountsRequest& request);

                /**
                 *用于查询用户自定义配置
                 * @param req DescribeUsersConfigRequest
                 * @return DescribeUsersConfigOutcome
                 */
                DescribeUsersConfigOutcome DescribeUsersConfig(const Model::DescribeUsersConfigRequest &request);
                void DescribeUsersConfigAsync(const Model::DescribeUsersConfigRequest& request, const DescribeUsersConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsersConfigOutcomeCallable DescribeUsersConfigCallable(const Model::DescribeUsersConfigRequest& request);

                /**
                 *此接口（DescribeUsualLoginPlaces）用于查询常用登录地。
                 * @param req DescribeUsualLoginPlacesRequest
                 * @return DescribeUsualLoginPlacesOutcome
                 */
                DescribeUsualLoginPlacesOutcome DescribeUsualLoginPlaces(const Model::DescribeUsualLoginPlacesRequest &request);
                void DescribeUsualLoginPlacesAsync(const Model::DescribeUsualLoginPlacesRequest& request, const DescribeUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsualLoginPlacesOutcomeCallable DescribeUsualLoginPlacesCallable(const Model::DescribeUsualLoginPlacesRequest& request);

                /**
                 *获取病毒库及POC的更新信息
                 * @param req DescribeVdbAndPocInfoRequest
                 * @return DescribeVdbAndPocInfoOutcome
                 */
                DescribeVdbAndPocInfoOutcome DescribeVdbAndPocInfo(const Model::DescribeVdbAndPocInfoRequest &request);
                void DescribeVdbAndPocInfoAsync(const Model::DescribeVdbAndPocInfoRequest& request, const DescribeVdbAndPocInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVdbAndPocInfoOutcomeCallable DescribeVdbAndPocInfoCallable(const Model::DescribeVdbAndPocInfoRequest& request);

                /**
                 *获取版本对比信息
                 * @param req DescribeVersionCompareChartRequest
                 * @return DescribeVersionCompareChartOutcome
                 */
                DescribeVersionCompareChartOutcome DescribeVersionCompareChart(const Model::DescribeVersionCompareChartRequest &request);
                void DescribeVersionCompareChartAsync(const Model::DescribeVersionCompareChartRequest& request, const DescribeVersionCompareChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVersionCompareChartOutcomeCallable DescribeVersionCompareChartCallable(const Model::DescribeVersionCompareChartRequest& request);

                /**
                 *用于统计专业版和基础版机器数。
                 * @param req DescribeVersionStatisticsRequest
                 * @return DescribeVersionStatisticsOutcome
                 */
                DescribeVersionStatisticsOutcome DescribeVersionStatistics(const Model::DescribeVersionStatisticsRequest &request);
                void DescribeVersionStatisticsAsync(const Model::DescribeVersionStatisticsRequest& request, const DescribeVersionStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVersionStatisticsOutcomeCallable DescribeVersionStatisticsCallable(const Model::DescribeVersionStatisticsRequest& request);

                /**
                 *获取指定点属性信息
                 * @param req DescribeVertexDetailRequest
                 * @return DescribeVertexDetailOutcome
                 */
                DescribeVertexDetailOutcome DescribeVertexDetail(const Model::DescribeVertexDetailRequest &request);
                void DescribeVertexDetailAsync(const Model::DescribeVertexDetailRequest& request, const DescribeVertexDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVertexDetailOutcomeCallable DescribeVertexDetailCallable(const Model::DescribeVertexDetailRequest& request);

                /**
                 *漏洞管理模块，获取近日指定类型的漏洞数量和主机数量
                 * @param req DescribeVulCountByDatesRequest
                 * @return DescribeVulCountByDatesOutcome
                 */
                DescribeVulCountByDatesOutcome DescribeVulCountByDates(const Model::DescribeVulCountByDatesRequest &request);
                void DescribeVulCountByDatesAsync(const Model::DescribeVulCountByDatesRequest& request, const DescribeVulCountByDatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulCountByDatesOutcomeCallable DescribeVulCountByDatesCallable(const Model::DescribeVulCountByDatesRequest& request);

                /**
                 *CveId查询漏洞详情
                 * @param req DescribeVulCveIdInfoRequest
                 * @return DescribeVulCveIdInfoOutcome
                 */
                DescribeVulCveIdInfoOutcome DescribeVulCveIdInfo(const Model::DescribeVulCveIdInfoRequest &request);
                void DescribeVulCveIdInfoAsync(const Model::DescribeVulCveIdInfoRequest& request, const DescribeVulCveIdInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulCveIdInfoOutcomeCallable DescribeVulCveIdInfoCallable(const Model::DescribeVulCveIdInfoRequest& request);

                /**
                 *获取漏洞防御事件列表
                 * @param req DescribeVulDefenceEventRequest
                 * @return DescribeVulDefenceEventOutcome
                 */
                DescribeVulDefenceEventOutcome DescribeVulDefenceEvent(const Model::DescribeVulDefenceEventRequest &request);
                void DescribeVulDefenceEventAsync(const Model::DescribeVulDefenceEventRequest& request, const DescribeVulDefenceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefenceEventOutcomeCallable DescribeVulDefenceEventCallable(const Model::DescribeVulDefenceEventRequest& request);

                /**
                 *查询漏洞防御列表
                 * @param req DescribeVulDefenceListRequest
                 * @return DescribeVulDefenceListOutcome
                 */
                DescribeVulDefenceListOutcome DescribeVulDefenceList(const Model::DescribeVulDefenceListRequest &request);
                void DescribeVulDefenceListAsync(const Model::DescribeVulDefenceListRequest& request, const DescribeVulDefenceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefenceListOutcomeCallable DescribeVulDefenceListCallable(const Model::DescribeVulDefenceListRequest& request);

                /**
                 *获取漏洞防御概览信息，包括事件趋势及插件开启情况
                 * @param req DescribeVulDefenceOverviewRequest
                 * @return DescribeVulDefenceOverviewOutcome
                 */
                DescribeVulDefenceOverviewOutcome DescribeVulDefenceOverview(const Model::DescribeVulDefenceOverviewRequest &request);
                void DescribeVulDefenceOverviewAsync(const Model::DescribeVulDefenceOverviewRequest& request, const DescribeVulDefenceOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefenceOverviewOutcomeCallable DescribeVulDefenceOverviewCallable(const Model::DescribeVulDefenceOverviewRequest& request);

                /**
                 *获取单台主机漏洞防御插件信息
                 * @param req DescribeVulDefencePluginDetailRequest
                 * @return DescribeVulDefencePluginDetailOutcome
                 */
                DescribeVulDefencePluginDetailOutcome DescribeVulDefencePluginDetail(const Model::DescribeVulDefencePluginDetailRequest &request);
                void DescribeVulDefencePluginDetailAsync(const Model::DescribeVulDefencePluginDetailRequest& request, const DescribeVulDefencePluginDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefencePluginDetailOutcomeCallable DescribeVulDefencePluginDetailCallable(const Model::DescribeVulDefencePluginDetailRequest& request);

                /**
                 *获取当前异常插件数
                 * @param req DescribeVulDefencePluginExceptionCountRequest
                 * @return DescribeVulDefencePluginExceptionCountOutcome
                 */
                DescribeVulDefencePluginExceptionCountOutcome DescribeVulDefencePluginExceptionCount(const Model::DescribeVulDefencePluginExceptionCountRequest &request);
                void DescribeVulDefencePluginExceptionCountAsync(const Model::DescribeVulDefencePluginExceptionCountRequest& request, const DescribeVulDefencePluginExceptionCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefencePluginExceptionCountOutcomeCallable DescribeVulDefencePluginExceptionCountCallable(const Model::DescribeVulDefencePluginExceptionCountRequest& request);

                /**
                 *获取各主机漏洞防御插件状态
                 * @param req DescribeVulDefencePluginStatusRequest
                 * @return DescribeVulDefencePluginStatusOutcome
                 */
                DescribeVulDefencePluginStatusOutcome DescribeVulDefencePluginStatus(const Model::DescribeVulDefencePluginStatusRequest &request);
                void DescribeVulDefencePluginStatusAsync(const Model::DescribeVulDefencePluginStatusRequest& request, const DescribeVulDefencePluginStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefencePluginStatusOutcomeCallable DescribeVulDefencePluginStatusCallable(const Model::DescribeVulDefencePluginStatusRequest& request);

                /**
                 *获取当前漏洞防御插件设置
                 * @param req DescribeVulDefenceSettingRequest
                 * @return DescribeVulDefenceSettingOutcome
                 */
                DescribeVulDefenceSettingOutcome DescribeVulDefenceSetting(const Model::DescribeVulDefenceSettingRequest &request);
                void DescribeVulDefenceSettingAsync(const Model::DescribeVulDefenceSettingRequest& request, const DescribeVulDefenceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefenceSettingOutcomeCallable DescribeVulDefenceSettingCallable(const Model::DescribeVulDefenceSettingRequest& request);

                /**
                 *漏洞影响主机列表
                 * @param req DescribeVulEffectHostListRequest
                 * @return DescribeVulEffectHostListOutcome
                 */
                DescribeVulEffectHostListOutcome DescribeVulEffectHostList(const Model::DescribeVulEffectHostListRequest &request);
                void DescribeVulEffectHostListAsync(const Model::DescribeVulEffectHostListRequest& request, const DescribeVulEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulEffectHostListOutcomeCallable DescribeVulEffectHostListCallable(const Model::DescribeVulEffectHostListRequest& request);

                /**
                 *漏洞影响组件列表
                 * @param req DescribeVulEffectModulesRequest
                 * @return DescribeVulEffectModulesOutcome
                 */
                DescribeVulEffectModulesOutcome DescribeVulEffectModules(const Model::DescribeVulEffectModulesRequest &request);
                void DescribeVulEffectModulesAsync(const Model::DescribeVulEffectModulesRequest& request, const DescribeVulEffectModulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulEffectModulesOutcomeCallable DescribeVulEffectModulesCallable(const Model::DescribeVulEffectModulesRequest& request);

                /**
                 *获取漏洞紧急通知
                 * @param req DescribeVulEmergentMsgRequest
                 * @return DescribeVulEmergentMsgOutcome
                 */
                DescribeVulEmergentMsgOutcome DescribeVulEmergentMsg(const Model::DescribeVulEmergentMsgRequest &request);
                void DescribeVulEmergentMsgAsync(const Model::DescribeVulEmergentMsgRequest& request, const DescribeVulEmergentMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulEmergentMsgOutcomeCallable DescribeVulEmergentMsgCallable(const Model::DescribeVulEmergentMsgRequest& request);

                /**
                 *漏洞修护-查找主机漏洞修护进度
                 * @param req DescribeVulFixStatusRequest
                 * @return DescribeVulFixStatusOutcome
                 */
                DescribeVulFixStatusOutcome DescribeVulFixStatus(const Model::DescribeVulFixStatusRequest &request);
                void DescribeVulFixStatusAsync(const Model::DescribeVulFixStatusRequest& request, const DescribeVulFixStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulFixStatusOutcomeCallable DescribeVulFixStatusCallable(const Model::DescribeVulFixStatusRequest& request);

                /**
                 *获取待处理漏洞数+影响主机数
                 * @param req DescribeVulHostCountScanTimeRequest
                 * @return DescribeVulHostCountScanTimeOutcome
                 */
                DescribeVulHostCountScanTimeOutcome DescribeVulHostCountScanTime(const Model::DescribeVulHostCountScanTimeRequest &request);
                void DescribeVulHostCountScanTimeAsync(const Model::DescribeVulHostCountScanTimeRequest& request, const DescribeVulHostCountScanTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulHostCountScanTimeOutcomeCallable DescribeVulHostCountScanTimeCallable(const Model::DescribeVulHostCountScanTimeRequest& request);

                /**
                 *获取服务器风险top列表
                 * @param req DescribeVulHostTopRequest
                 * @return DescribeVulHostTopOutcome
                 */
                DescribeVulHostTopOutcome DescribeVulHostTop(const Model::DescribeVulHostTopRequest &request);
                void DescribeVulHostTopAsync(const Model::DescribeVulHostTopRequest& request, const DescribeVulHostTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulHostTopOutcomeCallable DescribeVulHostTopCallable(const Model::DescribeVulHostTopRequest& request);

                /**
                 *漏洞详情，带CVSS版本
                 * @param req DescribeVulInfoCvssRequest
                 * @return DescribeVulInfoCvssOutcome
                 */
                DescribeVulInfoCvssOutcome DescribeVulInfoCvss(const Model::DescribeVulInfoCvssRequest &request);
                void DescribeVulInfoCvssAsync(const Model::DescribeVulInfoCvssRequest& request, const DescribeVulInfoCvssAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulInfoCvssOutcomeCallable DescribeVulInfoCvssCallable(const Model::DescribeVulInfoCvssRequest& request);

                /**
                 *获取用户漏洞所有标签列表
                 * @param req DescribeVulLabelsRequest
                 * @return DescribeVulLabelsOutcome
                 */
                DescribeVulLabelsOutcome DescribeVulLabels(const Model::DescribeVulLabelsRequest &request);
                void DescribeVulLabelsAsync(const Model::DescribeVulLabelsRequest& request, const DescribeVulLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulLabelsOutcomeCallable DescribeVulLabelsCallable(const Model::DescribeVulLabelsRequest& request);

                /**
                 *漏洞数量等级分布统计
                 * @param req DescribeVulLevelCountRequest
                 * @return DescribeVulLevelCountOutcome
                 */
                DescribeVulLevelCountOutcome DescribeVulLevelCount(const Model::DescribeVulLevelCountRequest &request);
                void DescribeVulLevelCountAsync(const Model::DescribeVulLevelCountRequest& request, const DescribeVulLevelCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulLevelCountOutcomeCallable DescribeVulLevelCountCallable(const Model::DescribeVulLevelCountRequest& request);

                /**
                 *获取漏洞列表数据
                 * @param req DescribeVulListRequest
                 * @return DescribeVulListOutcome
                 */
                DescribeVulListOutcome DescribeVulList(const Model::DescribeVulListRequest &request);
                void DescribeVulListAsync(const Model::DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulListOutcomeCallable DescribeVulListCallable(const Model::DescribeVulListRequest& request);

                /**
                 *获取漏洞概览数据
                 * @param req DescribeVulOverviewRequest
                 * @return DescribeVulOverviewOutcome
                 */
                DescribeVulOverviewOutcome DescribeVulOverview(const Model::DescribeVulOverviewRequest &request);
                void DescribeVulOverviewAsync(const Model::DescribeVulOverviewRequest& request, const DescribeVulOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulOverviewOutcomeCallable DescribeVulOverviewCallable(const Model::DescribeVulOverviewRequest& request);

                /**
                 *获取漏洞库列表
                 * @param req DescribeVulStoreListRequest
                 * @return DescribeVulStoreListOutcome
                 */
                DescribeVulStoreListOutcome DescribeVulStoreList(const Model::DescribeVulStoreListRequest &request);
                void DescribeVulStoreListAsync(const Model::DescribeVulStoreListRequest& request, const DescribeVulStoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulStoreListOutcomeCallable DescribeVulStoreListCallable(const Model::DescribeVulStoreListRequest& request);

                /**
                 *漏洞top统计
                 * @param req DescribeVulTopRequest
                 * @return DescribeVulTopOutcome
                 */
                DescribeVulTopOutcome DescribeVulTop(const Model::DescribeVulTopRequest &request);
                void DescribeVulTopAsync(const Model::DescribeVulTopRequest& request, const DescribeVulTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulTopOutcomeCallable DescribeVulTopCallable(const Model::DescribeVulTopRequest& request);

                /**
                 *获取漏洞态势信息
                 * @param req DescribeVulTrendRequest
                 * @return DescribeVulTrendOutcome
                 */
                DescribeVulTrendOutcome DescribeVulTrend(const Model::DescribeVulTrendRequest &request);
                void DescribeVulTrendAsync(const Model::DescribeVulTrendRequest& request, const DescribeVulTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulTrendOutcomeCallable DescribeVulTrendCallable(const Model::DescribeVulTrendRequest& request);

                /**
                 *查询告警机器范围配置
                 * @param req DescribeWarningHostConfigRequest
                 * @return DescribeWarningHostConfigOutcome
                 */
                DescribeWarningHostConfigOutcome DescribeWarningHostConfig(const Model::DescribeWarningHostConfigRequest &request);
                void DescribeWarningHostConfigAsync(const Model::DescribeWarningHostConfigRequest& request, const DescribeWarningHostConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWarningHostConfigOutcomeCallable DescribeWarningHostConfigCallable(const Model::DescribeWarningHostConfigRequest& request);

                /**
                 *获取当前用户告警列表
                 * @param req DescribeWarningListRequest
                 * @return DescribeWarningListOutcome
                 */
                DescribeWarningListOutcome DescribeWarningList(const Model::DescribeWarningListRequest &request);
                void DescribeWarningListAsync(const Model::DescribeWarningListRequest& request, const DescribeWarningListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWarningListOutcomeCallable DescribeWarningListCallable(const Model::DescribeWarningListRequest& request);

                /**
                 *查询告警策略
                 * @param req DescribeWebHookPolicyRequest
                 * @return DescribeWebHookPolicyOutcome
                 */
                DescribeWebHookPolicyOutcome DescribeWebHookPolicy(const Model::DescribeWebHookPolicyRequest &request);
                void DescribeWebHookPolicyAsync(const Model::DescribeWebHookPolicyRequest& request, const DescribeWebHookPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebHookPolicyOutcomeCallable DescribeWebHookPolicyCallable(const Model::DescribeWebHookPolicyRequest& request);

                /**
                 *查询告警接收人列表
                 * @param req DescribeWebHookReceiverRequest
                 * @return DescribeWebHookReceiverOutcome
                 */
                DescribeWebHookReceiverOutcome DescribeWebHookReceiver(const Model::DescribeWebHookReceiverRequest &request);
                void DescribeWebHookReceiverAsync(const Model::DescribeWebHookReceiverRequest& request, const DescribeWebHookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebHookReceiverOutcomeCallable DescribeWebHookReceiverCallable(const Model::DescribeWebHookReceiverRequest& request);

                /**
                 *查询指定告警接收人的关联策略使用信息
                 * @param req DescribeWebHookReceiverUsageRequest
                 * @return DescribeWebHookReceiverUsageOutcome
                 */
                DescribeWebHookReceiverUsageOutcome DescribeWebHookReceiverUsage(const Model::DescribeWebHookReceiverUsageRequest &request);
                void DescribeWebHookReceiverUsageAsync(const Model::DescribeWebHookReceiverUsageRequest& request, const DescribeWebHookReceiverUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebHookReceiverUsageOutcomeCallable DescribeWebHookReceiverUsageCallable(const Model::DescribeWebHookReceiverUsageRequest& request);

                /**
                 *获取企微机器人规则详情
                 * @param req DescribeWebHookRuleRequest
                 * @return DescribeWebHookRuleOutcome
                 */
                DescribeWebHookRuleOutcome DescribeWebHookRule(const Model::DescribeWebHookRuleRequest &request);
                void DescribeWebHookRuleAsync(const Model::DescribeWebHookRuleRequest& request, const DescribeWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebHookRuleOutcomeCallable DescribeWebHookRuleCallable(const Model::DescribeWebHookRuleRequest& request);

                /**
                 *获取企微机器人规则列表
                 * @param req DescribeWebHookRulesRequest
                 * @return DescribeWebHookRulesOutcome
                 */
                DescribeWebHookRulesOutcome DescribeWebHookRules(const Model::DescribeWebHookRulesRequest &request);
                void DescribeWebHookRulesAsync(const Model::DescribeWebHookRulesRequest& request, const DescribeWebHookRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebHookRulesOutcomeCallable DescribeWebHookRulesCallable(const Model::DescribeWebHookRulesRequest& request);

                /**
                 *查询篡改事件列表
                 * @param req DescribeWebPageEventListRequest
                 * @return DescribeWebPageEventListOutcome
                 */
                DescribeWebPageEventListOutcome DescribeWebPageEventList(const Model::DescribeWebPageEventListRequest &request);
                void DescribeWebPageEventListAsync(const Model::DescribeWebPageEventListRequest& request, const DescribeWebPageEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebPageEventListOutcomeCallable DescribeWebPageEventListCallable(const Model::DescribeWebPageEventListRequest& request);

                /**
                 *查询网站防篡改概览信息
                 * @param req DescribeWebPageGeneralizeRequest
                 * @return DescribeWebPageGeneralizeOutcome
                 */
                DescribeWebPageGeneralizeOutcome DescribeWebPageGeneralize(const Model::DescribeWebPageGeneralizeRequest &request);
                void DescribeWebPageGeneralizeAsync(const Model::DescribeWebPageGeneralizeRequest& request, const DescribeWebPageGeneralizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebPageGeneralizeOutcomeCallable DescribeWebPageGeneralizeCallable(const Model::DescribeWebPageGeneralizeRequest& request);

                /**
                 *网站防篡改-查询动态防护信息
                 * @param req DescribeWebPageProtectStatRequest
                 * @return DescribeWebPageProtectStatOutcome
                 */
                DescribeWebPageProtectStatOutcome DescribeWebPageProtectStat(const Model::DescribeWebPageProtectStatRequest &request);
                void DescribeWebPageProtectStatAsync(const Model::DescribeWebPageProtectStatRequest& request, const DescribeWebPageProtectStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebPageProtectStatOutcomeCallable DescribeWebPageProtectStatCallable(const Model::DescribeWebPageProtectStatRequest& request);

                /**
                 *网站防篡改-查询网页防篡改服务器购买信息及服务器信息
                 * @param req DescribeWebPageServiceInfoRequest
                 * @return DescribeWebPageServiceInfoOutcome
                 */
                DescribeWebPageServiceInfoOutcome DescribeWebPageServiceInfo(const Model::DescribeWebPageServiceInfoRequest &request);
                void DescribeWebPageServiceInfoAsync(const Model::DescribeWebPageServiceInfoRequest& request, const DescribeWebPageServiceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebPageServiceInfoOutcomeCallable DescribeWebPageServiceInfoCallable(const Model::DescribeWebPageServiceInfoRequest& request);

                /**
                 *DestroyOrder  该接口可以对资源销毁.
                 * @param req DestroyOrderRequest
                 * @return DestroyOrderOutcome
                 */
                DestroyOrderOutcome DestroyOrder(const Model::DestroyOrderRequest &request);
                void DestroyOrderAsync(const Model::DestroyOrderRequest& request, const DestroyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyOrderOutcomeCallable DestroyOrderCallable(const Model::DestroyOrderRequest& request);

                /**
                 *新增或修改高危命令规则
                 * @param req EditBashRulesRequest
                 * @return EditBashRulesOutcome
                 */
                EditBashRulesOutcome EditBashRules(const Model::EditBashRulesRequest &request);
                void EditBashRulesAsync(const Model::EditBashRulesRequest& request, const EditBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditBashRulesOutcomeCallable EditBashRulesCallable(const Model::EditBashRulesRequest& request);

                /**
                 *新增或修改本地提权规则（支持多服务器选择）
                 * @param req EditPrivilegeRulesRequest
                 * @return EditPrivilegeRulesOutcome
                 */
                EditPrivilegeRulesOutcome EditPrivilegeRules(const Model::EditPrivilegeRulesRequest &request);
                void EditPrivilegeRulesAsync(const Model::EditPrivilegeRulesRequest& request, const EditPrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditPrivilegeRulesOutcomeCallable EditPrivilegeRulesCallable(const Model::EditPrivilegeRulesRequest& request);

                /**
                 *编辑反弹Shell规则（支持多服务器选择）
                 * @param req EditReverseShellRulesRequest
                 * @return EditReverseShellRulesOutcome
                 */
                EditReverseShellRulesOutcome EditReverseShellRules(const Model::EditReverseShellRulesRequest &request);
                void EditReverseShellRulesAsync(const Model::EditReverseShellRulesRequest& request, const EditReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditReverseShellRulesOutcomeCallable EditReverseShellRulesCallable(const Model::EditReverseShellRulesRequest& request);

                /**
                 *新增或编辑标签
                 * @param req EditTagsRequest
                 * @return EditTagsOutcome
                 */
                EditTagsOutcome EditTags(const Model::EditTagsRequest &request);
                void EditTagsAsync(const Model::EditTagsRequest& request, const EditTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditTagsOutcomeCallable EditTagsCallable(const Model::EditTagsRequest& request);

                /**
                 *导出资产管理应用列表
                 * @param req ExportAssetAppListRequest
                 * @return ExportAssetAppListOutcome
                 */
                ExportAssetAppListOutcome ExportAssetAppList(const Model::ExportAssetAppListRequest &request);
                void ExportAssetAppListAsync(const Model::ExportAssetAppListRequest& request, const ExportAssetAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetAppListOutcomeCallable ExportAssetAppListCallable(const Model::ExportAssetAppListRequest& request);

                /**
                 *导出资产管理内核模块列表
                 * @param req ExportAssetCoreModuleListRequest
                 * @return ExportAssetCoreModuleListOutcome
                 */
                ExportAssetCoreModuleListOutcome ExportAssetCoreModuleList(const Model::ExportAssetCoreModuleListRequest &request);
                void ExportAssetCoreModuleListAsync(const Model::ExportAssetCoreModuleListRequest& request, const ExportAssetCoreModuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetCoreModuleListOutcomeCallable ExportAssetCoreModuleListCallable(const Model::ExportAssetCoreModuleListRequest& request);

                /**
                 *导出资产管理数据库列表
                 * @param req ExportAssetDatabaseListRequest
                 * @return ExportAssetDatabaseListOutcome
                 */
                ExportAssetDatabaseListOutcome ExportAssetDatabaseList(const Model::ExportAssetDatabaseListRequest &request);
                void ExportAssetDatabaseListAsync(const Model::ExportAssetDatabaseListRequest& request, const ExportAssetDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetDatabaseListOutcomeCallable ExportAssetDatabaseListCallable(const Model::ExportAssetDatabaseListRequest& request);

                /**
                 *导出资产管理环境变量列表
                 * @param req ExportAssetEnvListRequest
                 * @return ExportAssetEnvListOutcome
                 */
                ExportAssetEnvListOutcome ExportAssetEnvList(const Model::ExportAssetEnvListRequest &request);
                void ExportAssetEnvListAsync(const Model::ExportAssetEnvListRequest& request, const ExportAssetEnvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetEnvListOutcomeCallable ExportAssetEnvListCallable(const Model::ExportAssetEnvListRequest& request);

                /**
                 *导出资产管理启动服务列表
                 * @param req ExportAssetInitServiceListRequest
                 * @return ExportAssetInitServiceListOutcome
                 */
                ExportAssetInitServiceListOutcome ExportAssetInitServiceList(const Model::ExportAssetInitServiceListRequest &request);
                void ExportAssetInitServiceListAsync(const Model::ExportAssetInitServiceListRequest& request, const ExportAssetInitServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetInitServiceListOutcomeCallable ExportAssetInitServiceListCallable(const Model::ExportAssetInitServiceListRequest& request);

                /**
                 *导出Jar包列表
                 * @param req ExportAssetJarListRequest
                 * @return ExportAssetJarListOutcome
                 */
                ExportAssetJarListOutcome ExportAssetJarList(const Model::ExportAssetJarListRequest &request);
                void ExportAssetJarListAsync(const Model::ExportAssetJarListRequest& request, const ExportAssetJarListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetJarListOutcomeCallable ExportAssetJarListCallable(const Model::ExportAssetJarListRequest& request);

                /**
                 *导出资产管理主机资源详细信息
                 * @param req ExportAssetMachineDetailRequest
                 * @return ExportAssetMachineDetailOutcome
                 */
                ExportAssetMachineDetailOutcome ExportAssetMachineDetail(const Model::ExportAssetMachineDetailRequest &request);
                void ExportAssetMachineDetailAsync(const Model::ExportAssetMachineDetailRequest& request, const ExportAssetMachineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetMachineDetailOutcomeCallable ExportAssetMachineDetailCallable(const Model::ExportAssetMachineDetailRequest& request);

                /**
                 *导出资源监控列表
                 * @param req ExportAssetMachineListRequest
                 * @return ExportAssetMachineListOutcome
                 */
                ExportAssetMachineListOutcome ExportAssetMachineList(const Model::ExportAssetMachineListRequest &request);
                void ExportAssetMachineListAsync(const Model::ExportAssetMachineListRequest& request, const ExportAssetMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetMachineListOutcomeCallable ExportAssetMachineListCallable(const Model::ExportAssetMachineListRequest& request);

                /**
                 *导出资产管理计划任务列表
                 * @param req ExportAssetPlanTaskListRequest
                 * @return ExportAssetPlanTaskListOutcome
                 */
                ExportAssetPlanTaskListOutcome ExportAssetPlanTaskList(const Model::ExportAssetPlanTaskListRequest &request);
                void ExportAssetPlanTaskListAsync(const Model::ExportAssetPlanTaskListRequest& request, const ExportAssetPlanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetPlanTaskListOutcomeCallable ExportAssetPlanTaskListCallable(const Model::ExportAssetPlanTaskListRequest& request);

                /**
                 *导出资产管理端口列表
                 * @param req ExportAssetPortInfoListRequest
                 * @return ExportAssetPortInfoListOutcome
                 */
                ExportAssetPortInfoListOutcome ExportAssetPortInfoList(const Model::ExportAssetPortInfoListRequest &request);
                void ExportAssetPortInfoListAsync(const Model::ExportAssetPortInfoListRequest& request, const ExportAssetPortInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetPortInfoListOutcomeCallable ExportAssetPortInfoListCallable(const Model::ExportAssetPortInfoListRequest& request);

                /**
                 *导出资产管理进程列表
                 * @param req ExportAssetProcessInfoListRequest
                 * @return ExportAssetProcessInfoListOutcome
                 */
                ExportAssetProcessInfoListOutcome ExportAssetProcessInfoList(const Model::ExportAssetProcessInfoListRequest &request);
                void ExportAssetProcessInfoListAsync(const Model::ExportAssetProcessInfoListRequest& request, const ExportAssetProcessInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetProcessInfoListOutcomeCallable ExportAssetProcessInfoListCallable(const Model::ExportAssetProcessInfoListRequest& request);

                /**
                 *导出主机最近趋势情况（最长最近90天）
                 * @param req ExportAssetRecentMachineInfoRequest
                 * @return ExportAssetRecentMachineInfoOutcome
                 */
                ExportAssetRecentMachineInfoOutcome ExportAssetRecentMachineInfo(const Model::ExportAssetRecentMachineInfoRequest &request);
                void ExportAssetRecentMachineInfoAsync(const Model::ExportAssetRecentMachineInfoRequest& request, const ExportAssetRecentMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetRecentMachineInfoOutcomeCallable ExportAssetRecentMachineInfoCallable(const Model::ExportAssetRecentMachineInfoRequest& request);

                /**
                 *导出资产管理系统安装包列表
                 * @param req ExportAssetSystemPackageListRequest
                 * @return ExportAssetSystemPackageListOutcome
                 */
                ExportAssetSystemPackageListOutcome ExportAssetSystemPackageList(const Model::ExportAssetSystemPackageListRequest &request);
                void ExportAssetSystemPackageListAsync(const Model::ExportAssetSystemPackageListRequest& request, const ExportAssetSystemPackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetSystemPackageListOutcomeCallable ExportAssetSystemPackageListCallable(const Model::ExportAssetSystemPackageListRequest& request);

                /**
                 *导出账号列表
                 * @param req ExportAssetUserListRequest
                 * @return ExportAssetUserListOutcome
                 */
                ExportAssetUserListOutcome ExportAssetUserList(const Model::ExportAssetUserListRequest &request);
                void ExportAssetUserListAsync(const Model::ExportAssetUserListRequest& request, const ExportAssetUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetUserListOutcomeCallable ExportAssetUserListCallable(const Model::ExportAssetUserListRequest& request);

                /**
                 *导出资产管理Web应用列表
                 * @param req ExportAssetWebAppListRequest
                 * @return ExportAssetWebAppListOutcome
                 */
                ExportAssetWebAppListOutcome ExportAssetWebAppList(const Model::ExportAssetWebAppListRequest &request);
                void ExportAssetWebAppListAsync(const Model::ExportAssetWebAppListRequest& request, const ExportAssetWebAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetWebAppListOutcomeCallable ExportAssetWebAppListCallable(const Model::ExportAssetWebAppListRequest& request);

                /**
                 *导出资产管理Web框架列表
                 * @param req ExportAssetWebFrameListRequest
                 * @return ExportAssetWebFrameListOutcome
                 */
                ExportAssetWebFrameListOutcome ExportAssetWebFrameList(const Model::ExportAssetWebFrameListRequest &request);
                void ExportAssetWebFrameListAsync(const Model::ExportAssetWebFrameListRequest& request, const ExportAssetWebFrameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetWebFrameListOutcomeCallable ExportAssetWebFrameListCallable(const Model::ExportAssetWebFrameListRequest& request);

                /**
                 *导出Web站点列表
                 * @param req ExportAssetWebLocationListRequest
                 * @return ExportAssetWebLocationListOutcome
                 */
                ExportAssetWebLocationListOutcome ExportAssetWebLocationList(const Model::ExportAssetWebLocationListRequest &request);
                void ExportAssetWebLocationListAsync(const Model::ExportAssetWebLocationListRequest& request, const ExportAssetWebLocationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetWebLocationListOutcomeCallable ExportAssetWebLocationListCallable(const Model::ExportAssetWebLocationListRequest& request);

                /**
                 *导出资产管理Web服务列表
                 * @param req ExportAssetWebServiceInfoListRequest
                 * @return ExportAssetWebServiceInfoListOutcome
                 */
                ExportAssetWebServiceInfoListOutcome ExportAssetWebServiceInfoList(const Model::ExportAssetWebServiceInfoListRequest &request);
                void ExportAssetWebServiceInfoListAsync(const Model::ExportAssetWebServiceInfoListRequest& request, const ExportAssetWebServiceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetWebServiceInfoListOutcomeCallable ExportAssetWebServiceInfoListCallable(const Model::ExportAssetWebServiceInfoListRequest& request);

                /**
                 *导出网络攻击事件
                 * @param req ExportAttackEventsRequest
                 * @return ExportAttackEventsOutcome
                 */
                ExportAttackEventsOutcome ExportAttackEvents(const Model::ExportAttackEventsRequest &request);
                void ExportAttackEventsAsync(const Model::ExportAttackEventsRequest& request, const ExportAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAttackEventsOutcomeCallable ExportAttackEventsCallable(const Model::ExportAttackEventsRequest& request);

                /**
                 *导出基线影响主机列表
                 * @param req ExportBaselineEffectHostListRequest
                 * @return ExportBaselineEffectHostListOutcome
                 */
                ExportBaselineEffectHostListOutcome ExportBaselineEffectHostList(const Model::ExportBaselineEffectHostListRequest &request);
                void ExportBaselineEffectHostListAsync(const Model::ExportBaselineEffectHostListRequest& request, const ExportBaselineEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBaselineEffectHostListOutcomeCallable ExportBaselineEffectHostListCallable(const Model::ExportBaselineEffectHostListRequest& request);

                /**
                 *导出修复列表
                 * @param req ExportBaselineFixListRequest
                 * @return ExportBaselineFixListOutcome
                 */
                ExportBaselineFixListOutcome ExportBaselineFixList(const Model::ExportBaselineFixListRequest &request);
                void ExportBaselineFixListAsync(const Model::ExportBaselineFixListRequest& request, const ExportBaselineFixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBaselineFixListOutcomeCallable ExportBaselineFixListCallable(const Model::ExportBaselineFixListRequest& request);

                /**
                 *导出基线主机检测
                 * @param req ExportBaselineHostDetectListRequest
                 * @return ExportBaselineHostDetectListOutcome
                 */
                ExportBaselineHostDetectListOutcome ExportBaselineHostDetectList(const Model::ExportBaselineHostDetectListRequest &request);
                void ExportBaselineHostDetectListAsync(const Model::ExportBaselineHostDetectListRequest& request, const ExportBaselineHostDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBaselineHostDetectListOutcomeCallable ExportBaselineHostDetectListCallable(const Model::ExportBaselineHostDetectListRequest& request);

                /**
                 *导出基线检测项
                 * @param req ExportBaselineItemDetectListRequest
                 * @return ExportBaselineItemDetectListOutcome
                 */
                ExportBaselineItemDetectListOutcome ExportBaselineItemDetectList(const Model::ExportBaselineItemDetectListRequest &request);
                void ExportBaselineItemDetectListAsync(const Model::ExportBaselineItemDetectListRequest& request, const ExportBaselineItemDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBaselineItemDetectListOutcomeCallable ExportBaselineItemDetectListCallable(const Model::ExportBaselineItemDetectListRequest& request);

                /**
                 *导出检测项结果列表
                 * @param req ExportBaselineItemListRequest
                 * @return ExportBaselineItemListOutcome
                 */
                ExportBaselineItemListOutcome ExportBaselineItemList(const Model::ExportBaselineItemListRequest &request);
                void ExportBaselineItemListAsync(const Model::ExportBaselineItemListRequest& request, const ExportBaselineItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBaselineItemListOutcomeCallable ExportBaselineItemListCallable(const Model::ExportBaselineItemListRequest& request);

                /**
                 *导出基线列表
                 * @param req ExportBaselineListRequest
                 * @return ExportBaselineListOutcome
                 */
                ExportBaselineListOutcome ExportBaselineList(const Model::ExportBaselineListRequest &request);
                void ExportBaselineListAsync(const Model::ExportBaselineListRequest& request, const ExportBaselineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBaselineListOutcomeCallable ExportBaselineListCallable(const Model::ExportBaselineListRequest& request);

                /**
                 *导出基线检测规则
                 * @param req ExportBaselineRuleDetectListRequest
                 * @return ExportBaselineRuleDetectListOutcome
                 */
                ExportBaselineRuleDetectListOutcome ExportBaselineRuleDetectList(const Model::ExportBaselineRuleDetectListRequest &request);
                void ExportBaselineRuleDetectListAsync(const Model::ExportBaselineRuleDetectListRequest& request, const ExportBaselineRuleDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBaselineRuleDetectListOutcomeCallable ExportBaselineRuleDetectListCallable(const Model::ExportBaselineRuleDetectListRequest& request);

                /**
                 *导出弱口令配置列表
                 * @param req ExportBaselineWeakPasswordListRequest
                 * @return ExportBaselineWeakPasswordListOutcome
                 */
                ExportBaselineWeakPasswordListOutcome ExportBaselineWeakPasswordList(const Model::ExportBaselineWeakPasswordListRequest &request);
                void ExportBaselineWeakPasswordListAsync(const Model::ExportBaselineWeakPasswordListRequest& request, const ExportBaselineWeakPasswordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBaselineWeakPasswordListOutcomeCallable ExportBaselineWeakPasswordListCallable(const Model::ExportBaselineWeakPasswordListRequest& request);

                /**
                 *导出高危命令事件
                 * @param req ExportBashEventsRequest
                 * @return ExportBashEventsOutcome
                 */
                ExportBashEventsOutcome ExportBashEvents(const Model::ExportBashEventsRequest &request);
                void ExportBashEventsAsync(const Model::ExportBashEventsRequest& request, const ExportBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBashEventsOutcomeCallable ExportBashEventsCallable(const Model::ExportBashEventsRequest& request);

                /**
                 *导出高危命令事件(新)
                 * @param req ExportBashEventsNewRequest
                 * @return ExportBashEventsNewOutcome
                 */
                ExportBashEventsNewOutcome ExportBashEventsNew(const Model::ExportBashEventsNewRequest &request);
                void ExportBashEventsNewAsync(const Model::ExportBashEventsNewRequest& request, const ExportBashEventsNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBashEventsNewOutcomeCallable ExportBashEventsNewCallable(const Model::ExportBashEventsNewRequest& request);

                /**
                 *导出高危命令策略
                 * @param req ExportBashPoliciesRequest
                 * @return ExportBashPoliciesOutcome
                 */
                ExportBashPoliciesOutcome ExportBashPolicies(const Model::ExportBashPoliciesRequest &request);
                void ExportBashPoliciesAsync(const Model::ExportBashPoliciesRequest& request, const ExportBashPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBashPoliciesOutcomeCallable ExportBashPoliciesCallable(const Model::ExportBashPoliciesRequest& request);

                /**
                 *本接口 (ExportBruteAttacks) 用于导出密码破解记录成CSV文件。
                 * @param req ExportBruteAttacksRequest
                 * @return ExportBruteAttacksOutcome
                 */
                ExportBruteAttacksOutcome ExportBruteAttacks(const Model::ExportBruteAttacksRequest &request);
                void ExportBruteAttacksAsync(const Model::ExportBruteAttacksRequest& request, const ExportBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBruteAttacksOutcomeCallable ExportBruteAttacksCallable(const Model::ExportBruteAttacksRequest& request);

                /**
                 *导出核心文件事件
                 * @param req ExportFileTamperEventsRequest
                 * @return ExportFileTamperEventsOutcome
                 */
                ExportFileTamperEventsOutcome ExportFileTamperEvents(const Model::ExportFileTamperEventsRequest &request);
                void ExportFileTamperEventsAsync(const Model::ExportFileTamperEventsRequest& request, const ExportFileTamperEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportFileTamperEventsOutcomeCallable ExportFileTamperEventsCallable(const Model::ExportFileTamperEventsRequest& request);

                /**
                 *导出核心文件监控规则
                 * @param req ExportFileTamperRulesRequest
                 * @return ExportFileTamperRulesOutcome
                 */
                ExportFileTamperRulesOutcome ExportFileTamperRules(const Model::ExportFileTamperRulesRequest &request);
                void ExportFileTamperRulesAsync(const Model::ExportFileTamperRulesRequest& request, const ExportFileTamperRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportFileTamperRulesOutcomeCallable ExportFileTamperRulesCallable(const Model::ExportFileTamperRulesRequest& request);

                /**
                 *导出已忽略基线检测项信息
                 * @param req ExportIgnoreBaselineRuleRequest
                 * @return ExportIgnoreBaselineRuleOutcome
                 */
                ExportIgnoreBaselineRuleOutcome ExportIgnoreBaselineRule(const Model::ExportIgnoreBaselineRuleRequest &request);
                void ExportIgnoreBaselineRuleAsync(const Model::ExportIgnoreBaselineRuleRequest& request, const ExportIgnoreBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportIgnoreBaselineRuleOutcomeCallable ExportIgnoreBaselineRuleCallable(const Model::ExportIgnoreBaselineRuleRequest& request);

                /**
                 *根据检测项id导出忽略检测项影响主机列表
                 * @param req ExportIgnoreRuleEffectHostListRequest
                 * @return ExportIgnoreRuleEffectHostListOutcome
                 */
                ExportIgnoreRuleEffectHostListOutcome ExportIgnoreRuleEffectHostList(const Model::ExportIgnoreRuleEffectHostListRequest &request);
                void ExportIgnoreRuleEffectHostListAsync(const Model::ExportIgnoreRuleEffectHostListRequest& request, const ExportIgnoreRuleEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportIgnoreRuleEffectHostListOutcomeCallable ExportIgnoreRuleEffectHostListCallable(const Model::ExportIgnoreRuleEffectHostListRequest& request);

                /**
                 *导出java内存马插件信息
                 * @param req ExportJavaMemShellPluginsRequest
                 * @return ExportJavaMemShellPluginsOutcome
                 */
                ExportJavaMemShellPluginsOutcome ExportJavaMemShellPlugins(const Model::ExportJavaMemShellPluginsRequest &request);
                void ExportJavaMemShellPluginsAsync(const Model::ExportJavaMemShellPluginsRequest& request, const ExportJavaMemShellPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportJavaMemShellPluginsOutcomeCallable ExportJavaMemShellPluginsCallable(const Model::ExportJavaMemShellPluginsRequest& request);

                /**
                 *导出java内存马事件列表
                 * @param req ExportJavaMemShellsRequest
                 * @return ExportJavaMemShellsOutcome
                 */
                ExportJavaMemShellsOutcome ExportJavaMemShells(const Model::ExportJavaMemShellsRequest &request);
                void ExportJavaMemShellsAsync(const Model::ExportJavaMemShellsRequest& request, const ExportJavaMemShellsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportJavaMemShellsOutcomeCallable ExportJavaMemShellsCallable(const Model::ExportJavaMemShellsRequest& request);

                /**
                 *导出授权列表对应的绑定信息
                 * @param req ExportLicenseDetailRequest
                 * @return ExportLicenseDetailOutcome
                 */
                ExportLicenseDetailOutcome ExportLicenseDetail(const Model::ExportLicenseDetailRequest &request);
                void ExportLicenseDetailAsync(const Model::ExportLicenseDetailRequest& request, const ExportLicenseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportLicenseDetailOutcomeCallable ExportLicenseDetailCallable(const Model::ExportLicenseDetailRequest& request);

                /**
                 *本接口 (ExportMaliciousRequests) 用于导出下载恶意请求文件。
                 * @param req ExportMaliciousRequestsRequest
                 * @return ExportMaliciousRequestsOutcome
                 */
                ExportMaliciousRequestsOutcome ExportMaliciousRequests(const Model::ExportMaliciousRequestsRequest &request);
                void ExportMaliciousRequestsAsync(const Model::ExportMaliciousRequestsRequest& request, const ExportMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportMaliciousRequestsOutcomeCallable ExportMaliciousRequestsCallable(const Model::ExportMaliciousRequestsRequest& request);

                /**
                 *本接口 (ExportMalwares) 用于导出木马记录CSV文件。
                 * @param req ExportMalwaresRequest
                 * @return ExportMalwaresOutcome
                 */
                ExportMalwaresOutcome ExportMalwares(const Model::ExportMalwaresRequest &request);
                void ExportMalwaresAsync(const Model::ExportMalwaresRequest& request, const ExportMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportMalwaresOutcomeCallable ExportMalwaresCallable(const Model::ExportMalwaresRequest& request);

                /**
                 *本接口 (ExportNonlocalLoginPlaces) 用于导出异地登录事件记录CSV文件。
                 * @param req ExportNonlocalLoginPlacesRequest
                 * @return ExportNonlocalLoginPlacesOutcome
                 */
                ExportNonlocalLoginPlacesOutcome ExportNonlocalLoginPlaces(const Model::ExportNonlocalLoginPlacesRequest &request);
                void ExportNonlocalLoginPlacesAsync(const Model::ExportNonlocalLoginPlacesRequest& request, const ExportNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportNonlocalLoginPlacesOutcomeCallable ExportNonlocalLoginPlacesCallable(const Model::ExportNonlocalLoginPlacesRequest& request);

                /**
                 *导出本地提权事件
                 * @param req ExportPrivilegeEventsRequest
                 * @return ExportPrivilegeEventsOutcome
                 */
                ExportPrivilegeEventsOutcome ExportPrivilegeEvents(const Model::ExportPrivilegeEventsRequest &request);
                void ExportPrivilegeEventsAsync(const Model::ExportPrivilegeEventsRequest& request, const ExportPrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportPrivilegeEventsOutcomeCallable ExportPrivilegeEventsCallable(const Model::ExportPrivilegeEventsRequest& request);

                /**
                 *导出网页防篡改防护目录列表
                 * @param req ExportProtectDirListRequest
                 * @return ExportProtectDirListOutcome
                 */
                ExportProtectDirListOutcome ExportProtectDirList(const Model::ExportProtectDirListRequest &request);
                void ExportProtectDirListAsync(const Model::ExportProtectDirListRequest& request, const ExportProtectDirListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportProtectDirListOutcomeCallable ExportProtectDirListCallable(const Model::ExportProtectDirListRequest& request);

                /**
                 *导出主机快照备份列表
                 * @param req ExportRansomDefenseBackupListRequest
                 * @return ExportRansomDefenseBackupListOutcome
                 */
                ExportRansomDefenseBackupListOutcome ExportRansomDefenseBackupList(const Model::ExportRansomDefenseBackupListRequest &request);
                void ExportRansomDefenseBackupListAsync(const Model::ExportRansomDefenseBackupListRequest& request, const ExportRansomDefenseBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRansomDefenseBackupListOutcomeCallable ExportRansomDefenseBackupListCallable(const Model::ExportRansomDefenseBackupListRequest& request);

                /**
                 *导出防勒索事件列表
                 * @param req ExportRansomDefenseEventsListRequest
                 * @return ExportRansomDefenseEventsListOutcome
                 */
                ExportRansomDefenseEventsListOutcome ExportRansomDefenseEventsList(const Model::ExportRansomDefenseEventsListRequest &request);
                void ExportRansomDefenseEventsListAsync(const Model::ExportRansomDefenseEventsListRequest& request, const ExportRansomDefenseEventsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRansomDefenseEventsListOutcomeCallable ExportRansomDefenseEventsListCallable(const Model::ExportRansomDefenseEventsListRequest& request);

                /**
                 *导出备份详情列表
                 * @param req ExportRansomDefenseMachineListRequest
                 * @return ExportRansomDefenseMachineListOutcome
                 */
                ExportRansomDefenseMachineListOutcome ExportRansomDefenseMachineList(const Model::ExportRansomDefenseMachineListRequest &request);
                void ExportRansomDefenseMachineListAsync(const Model::ExportRansomDefenseMachineListRequest& request, const ExportRansomDefenseMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRansomDefenseMachineListOutcomeCallable ExportRansomDefenseMachineListCallable(const Model::ExportRansomDefenseMachineListRequest& request);

                /**
                 *导出防勒索策略列表
                 * @param req ExportRansomDefenseStrategyListRequest
                 * @return ExportRansomDefenseStrategyListOutcome
                 */
                ExportRansomDefenseStrategyListOutcome ExportRansomDefenseStrategyList(const Model::ExportRansomDefenseStrategyListRequest &request);
                void ExportRansomDefenseStrategyListAsync(const Model::ExportRansomDefenseStrategyListRequest& request, const ExportRansomDefenseStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRansomDefenseStrategyListOutcomeCallable ExportRansomDefenseStrategyListCallable(const Model::ExportRansomDefenseStrategyListRequest& request);

                /**
                 *导出勒索防御策略绑定机器列表
                 * @param req ExportRansomDefenseStrategyMachinesRequest
                 * @return ExportRansomDefenseStrategyMachinesOutcome
                 */
                ExportRansomDefenseStrategyMachinesOutcome ExportRansomDefenseStrategyMachines(const Model::ExportRansomDefenseStrategyMachinesRequest &request);
                void ExportRansomDefenseStrategyMachinesAsync(const Model::ExportRansomDefenseStrategyMachinesRequest& request, const ExportRansomDefenseStrategyMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRansomDefenseStrategyMachinesOutcomeCallable ExportRansomDefenseStrategyMachinesCallable(const Model::ExportRansomDefenseStrategyMachinesRequest& request);

                /**
                 *导出反弹Shell事件
                 * @param req ExportReverseShellEventsRequest
                 * @return ExportReverseShellEventsOutcome
                 */
                ExportReverseShellEventsOutcome ExportReverseShellEvents(const Model::ExportReverseShellEventsRequest &request);
                void ExportReverseShellEventsAsync(const Model::ExportReverseShellEventsRequest& request, const ExportReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportReverseShellEventsOutcomeCallable ExportReverseShellEventsCallable(const Model::ExportReverseShellEventsRequest& request);

                /**
                 *导出恶意请求事件列表
                 * @param req ExportRiskDnsEventListRequest
                 * @return ExportRiskDnsEventListOutcome
                 */
                ExportRiskDnsEventListOutcome ExportRiskDnsEventList(const Model::ExportRiskDnsEventListRequest &request);
                void ExportRiskDnsEventListAsync(const Model::ExportRiskDnsEventListRequest& request, const ExportRiskDnsEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRiskDnsEventListOutcomeCallable ExportRiskDnsEventListCallable(const Model::ExportRiskDnsEventListRequest& request);

                /**
                 *导出恶意请求策略列表
                 * @param req ExportRiskDnsPolicyListRequest
                 * @return ExportRiskDnsPolicyListOutcome
                 */
                ExportRiskDnsPolicyListOutcome ExportRiskDnsPolicyList(const Model::ExportRiskDnsPolicyListRequest &request);
                void ExportRiskDnsPolicyListAsync(const Model::ExportRiskDnsPolicyListRequest& request, const ExportRiskDnsPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRiskDnsPolicyListOutcomeCallable ExportRiskDnsPolicyListCallable(const Model::ExportRiskDnsPolicyListRequest& request);

                /**
                 *导出异常进程事件
                 * @param req ExportRiskProcessEventsRequest
                 * @return ExportRiskProcessEventsOutcome
                 */
                ExportRiskProcessEventsOutcome ExportRiskProcessEvents(const Model::ExportRiskProcessEventsRequest &request);
                void ExportRiskProcessEventsAsync(const Model::ExportRiskProcessEventsRequest& request, const ExportRiskProcessEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRiskProcessEventsOutcomeCallable ExportRiskProcessEventsCallable(const Model::ExportRiskProcessEventsRequest& request);

                /**
                 *根据任务id导出指定扫描任务详情
                 * @param req ExportScanTaskDetailsRequest
                 * @return ExportScanTaskDetailsOutcome
                 */
                ExportScanTaskDetailsOutcome ExportScanTaskDetails(const Model::ExportScanTaskDetailsRequest &request);
                void ExportScanTaskDetailsAsync(const Model::ExportScanTaskDetailsRequest& request, const ExportScanTaskDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportScanTaskDetailsOutcomeCallable ExportScanTaskDetailsCallable(const Model::ExportScanTaskDetailsRequest& request);

                /**
                 *导出风险趋势
                 * @param req ExportSecurityTrendsRequest
                 * @return ExportSecurityTrendsOutcome
                 */
                ExportSecurityTrendsOutcome ExportSecurityTrends(const Model::ExportSecurityTrendsRequest &request);
                void ExportSecurityTrendsAsync(const Model::ExportSecurityTrendsRequest& request, const ExportSecurityTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportSecurityTrendsOutcomeCallable ExportSecurityTrendsCallable(const Model::ExportSecurityTrendsRequest& request);

                /**
                 *用于异步导出数据量大的日志文件
                 * @param req ExportTasksRequest
                 * @return ExportTasksOutcome
                 */
                ExportTasksOutcome ExportTasks(const Model::ExportTasksRequest &request);
                void ExportTasksAsync(const Model::ExportTasksRequest& request, const ExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportTasksOutcomeCallable ExportTasksCallable(const Model::ExportTasksRequest& request);

                /**
                 *导出漏洞防御事件
                 * @param req ExportVulDefenceEventRequest
                 * @return ExportVulDefenceEventOutcome
                 */
                ExportVulDefenceEventOutcome ExportVulDefenceEvent(const Model::ExportVulDefenceEventRequest &request);
                void ExportVulDefenceEventAsync(const Model::ExportVulDefenceEventRequest& request, const ExportVulDefenceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulDefenceEventOutcomeCallable ExportVulDefenceEventCallable(const Model::ExportVulDefenceEventRequest& request);

                /**
                 *导出漏洞防御列表
                 * @param req ExportVulDefenceListRequest
                 * @return ExportVulDefenceListOutcome
                 */
                ExportVulDefenceListOutcome ExportVulDefenceList(const Model::ExportVulDefenceListRequest &request);
                void ExportVulDefenceListAsync(const Model::ExportVulDefenceListRequest& request, const ExportVulDefenceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulDefenceListOutcomeCallable ExportVulDefenceListCallable(const Model::ExportVulDefenceListRequest& request);

                /**
                 *导出漏洞防御插件事件
                 * @param req ExportVulDefencePluginEventRequest
                 * @return ExportVulDefencePluginEventOutcome
                 */
                ExportVulDefencePluginEventOutcome ExportVulDefencePluginEvent(const Model::ExportVulDefencePluginEventRequest &request);
                void ExportVulDefencePluginEventAsync(const Model::ExportVulDefencePluginEventRequest& request, const ExportVulDefencePluginEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulDefencePluginEventOutcomeCallable ExportVulDefencePluginEventCallable(const Model::ExportVulDefencePluginEventRequest& request);

                /**
                 *导出本次漏洞检测Excel
                 * @param req ExportVulDetectionExcelRequest
                 * @return ExportVulDetectionExcelOutcome
                 */
                ExportVulDetectionExcelOutcome ExportVulDetectionExcel(const Model::ExportVulDetectionExcelRequest &request);
                void ExportVulDetectionExcelAsync(const Model::ExportVulDetectionExcelRequest& request, const ExportVulDetectionExcelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulDetectionExcelOutcomeCallable ExportVulDetectionExcelCallable(const Model::ExportVulDetectionExcelRequest& request);

                /**
                 *导出漏洞检测报告。
                 * @param req ExportVulDetectionReportRequest
                 * @return ExportVulDetectionReportOutcome
                 */
                ExportVulDetectionReportOutcome ExportVulDetectionReport(const Model::ExportVulDetectionReportRequest &request);
                void ExportVulDetectionReportAsync(const Model::ExportVulDetectionReportRequest& request, const ExportVulDetectionReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulDetectionReportOutcomeCallable ExportVulDetectionReportCallable(const Model::ExportVulDetectionReportRequest& request);

                /**
                 *导出漏洞影响主机列表
                 * @param req ExportVulEffectHostListRequest
                 * @return ExportVulEffectHostListOutcome
                 */
                ExportVulEffectHostListOutcome ExportVulEffectHostList(const Model::ExportVulEffectHostListRequest &request);
                void ExportVulEffectHostListAsync(const Model::ExportVulEffectHostListRequest& request, const ExportVulEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulEffectHostListOutcomeCallable ExportVulEffectHostListCallable(const Model::ExportVulEffectHostListRequest& request);

                /**
                 *导出漏洞信息，包括影响主机列表，组件信息
                 * @param req ExportVulInfoRequest
                 * @return ExportVulInfoOutcome
                 */
                ExportVulInfoOutcome ExportVulInfo(const Model::ExportVulInfoRequest &request);
                void ExportVulInfoAsync(const Model::ExportVulInfoRequest& request, const ExportVulInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulInfoOutcomeCallable ExportVulInfoCallable(const Model::ExportVulInfoRequest& request);

                /**
                 *漏洞管理-导出漏洞列表
                 * @param req ExportVulListRequest
                 * @return ExportVulListOutcome
                 */
                ExportVulListOutcome ExportVulList(const Model::ExportVulListRequest &request);
                void ExportVulListAsync(const Model::ExportVulListRequest& request, const ExportVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulListOutcomeCallable ExportVulListCallable(const Model::ExportVulListRequest& request);

                /**
                 *导出篡改事件列表
                 * @param req ExportWebPageEventListRequest
                 * @return ExportWebPageEventListOutcome
                 */
                ExportWebPageEventListOutcome ExportWebPageEventList(const Model::ExportWebPageEventListRequest &request);
                void ExportWebPageEventListAsync(const Model::ExportWebPageEventListRequest& request, const ExportWebPageEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportWebPageEventListOutcomeCallable ExportWebPageEventListCallable(const Model::ExportWebPageEventListRequest& request);

                /**
                 *修复基线检测
                 * @param req FixBaselineDetectRequest
                 * @return FixBaselineDetectOutcome
                 */
                FixBaselineDetectOutcome FixBaselineDetect(const Model::FixBaselineDetectRequest &request);
                void FixBaselineDetectAsync(const Model::FixBaselineDetectRequest& request, const FixBaselineDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FixBaselineDetectOutcomeCallable FixBaselineDetectCallable(const Model::FixBaselineDetectRequest& request);

                /**
                 *获取本地存储数据
                 * @param req GetLocalStorageItemRequest
                 * @return GetLocalStorageItemOutcome
                 */
                GetLocalStorageItemOutcome GetLocalStorageItem(const Model::GetLocalStorageItemRequest &request);
                void GetLocalStorageItemAsync(const Model::GetLocalStorageItemRequest& request, const GetLocalStorageItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLocalStorageItemOutcomeCallable GetLocalStorageItemCallable(const Model::GetLocalStorageItemRequest& request);

                /**
                 *产品变动切换到了\\n切换到 AddVulIgnoreRule / ModifyVulIgnoreRule  CancelVulIgnoreRule\\n相关接口

本接口 (IgnoreImpactedHosts) 用于忽略漏洞。
                 * @param req IgnoreImpactedHostsRequest
                 * @return IgnoreImpactedHostsOutcome
                 */
                IgnoreImpactedHostsOutcome IgnoreImpactedHosts(const Model::IgnoreImpactedHostsRequest &request);
                void IgnoreImpactedHostsAsync(const Model::IgnoreImpactedHostsRequest& request, const IgnoreImpactedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IgnoreImpactedHostsOutcomeCallable IgnoreImpactedHostsCallable(const Model::IgnoreImpactedHostsRequest& request);

                /**
                 *获取本地存储键值列表
                 * @param req KeysLocalStorageRequest
                 * @return KeysLocalStorageOutcome
                 */
                KeysLocalStorageOutcome KeysLocalStorage(const Model::KeysLocalStorageRequest &request);
                void KeysLocalStorageAsync(const Model::KeysLocalStorageRequest& request, const KeysLocalStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KeysLocalStorageOutcomeCallable KeysLocalStorageCallable(const Model::KeysLocalStorageRequest& request);

                /**
                 *用于设置新增主机自动开通专业防护配置。
                 * @param req ModifyAutoOpenProVersionConfigRequest
                 * @return ModifyAutoOpenProVersionConfigOutcome
                 */
                ModifyAutoOpenProVersionConfigOutcome ModifyAutoOpenProVersionConfig(const Model::ModifyAutoOpenProVersionConfigRequest &request);
                void ModifyAutoOpenProVersionConfigAsync(const Model::ModifyAutoOpenProVersionConfigRequest& request, const ModifyAutoOpenProVersionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoOpenProVersionConfigOutcomeCallable ModifyAutoOpenProVersionConfigCallable(const Model::ModifyAutoOpenProVersionConfigRequest& request);

                /**
                 *修改爆破阻断模式
                 * @param req ModifyBanModeRequest
                 * @return ModifyBanModeOutcome
                 */
                ModifyBanModeOutcome ModifyBanMode(const Model::ModifyBanModeRequest &request);
                void ModifyBanModeAsync(const Model::ModifyBanModeRequest& request, const ModifyBanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBanModeOutcomeCallable ModifyBanModeCallable(const Model::ModifyBanModeRequest& request);

                /**
                 *设置阻断开关状态
                 * @param req ModifyBanStatusRequest
                 * @return ModifyBanStatusOutcome
                 */
                ModifyBanStatusOutcome ModifyBanStatus(const Model::ModifyBanStatusRequest &request);
                void ModifyBanStatusAsync(const Model::ModifyBanStatusRequest& request, const ModifyBanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBanStatusOutcomeCallable ModifyBanStatusCallable(const Model::ModifyBanStatusRequest& request);

                /**
                 *修改阻断白名单列表
                 * @param req ModifyBanWhiteListRequest
                 * @return ModifyBanWhiteListOutcome
                 */
                ModifyBanWhiteListOutcome ModifyBanWhiteList(const Model::ModifyBanWhiteListRequest &request);
                void ModifyBanWhiteListAsync(const Model::ModifyBanWhiteListRequest& request, const ModifyBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBanWhiteListOutcomeCallable ModifyBanWhiteListCallable(const Model::ModifyBanWhiteListRequest& request);

                /**
                 *更改基线策略设置
                 * @param req ModifyBaselinePolicyRequest
                 * @return ModifyBaselinePolicyOutcome
                 */
                ModifyBaselinePolicyOutcome ModifyBaselinePolicy(const Model::ModifyBaselinePolicyRequest &request);
                void ModifyBaselinePolicyAsync(const Model::ModifyBaselinePolicyRequest& request, const ModifyBaselinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselinePolicyOutcomeCallable ModifyBaselinePolicyCallable(const Model::ModifyBaselinePolicyRequest& request);

                /**
                 *更改基线策略状态
                 * @param req ModifyBaselinePolicyStateRequest
                 * @return ModifyBaselinePolicyStateOutcome
                 */
                ModifyBaselinePolicyStateOutcome ModifyBaselinePolicyState(const Model::ModifyBaselinePolicyStateRequest &request);
                void ModifyBaselinePolicyStateAsync(const Model::ModifyBaselinePolicyStateRequest& request, const ModifyBaselinePolicyStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselinePolicyStateOutcomeCallable ModifyBaselinePolicyStateCallable(const Model::ModifyBaselinePolicyStateRequest& request);

                /**
                 *更改基线检测规则
                 * @param req ModifyBaselineRuleRequest
                 * @return ModifyBaselineRuleOutcome
                 */
                ModifyBaselineRuleOutcome ModifyBaselineRule(const Model::ModifyBaselineRuleRequest &request);
                void ModifyBaselineRuleAsync(const Model::ModifyBaselineRuleRequest& request, const ModifyBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselineRuleOutcomeCallable ModifyBaselineRuleCallable(const Model::ModifyBaselineRuleRequest& request);

                /**
                 *更改基线忽略规则
                 * @param req ModifyBaselineRuleIgnoreRequest
                 * @return ModifyBaselineRuleIgnoreOutcome
                 */
                ModifyBaselineRuleIgnoreOutcome ModifyBaselineRuleIgnore(const Model::ModifyBaselineRuleIgnoreRequest &request);
                void ModifyBaselineRuleIgnoreAsync(const Model::ModifyBaselineRuleIgnoreRequest& request, const ModifyBaselineRuleIgnoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselineRuleIgnoreOutcomeCallable ModifyBaselineRuleIgnoreCallable(const Model::ModifyBaselineRuleIgnoreRequest& request);

                /**
                 *更改或新增弱口令
                 * @param req ModifyBaselineWeakPasswordRequest
                 * @return ModifyBaselineWeakPasswordOutcome
                 */
                ModifyBaselineWeakPasswordOutcome ModifyBaselineWeakPassword(const Model::ModifyBaselineWeakPasswordRequest &request);
                void ModifyBaselineWeakPasswordAsync(const Model::ModifyBaselineWeakPasswordRequest& request, const ModifyBaselineWeakPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselineWeakPasswordOutcomeCallable ModifyBaselineWeakPasswordCallable(const Model::ModifyBaselineWeakPasswordRequest& request);

                /**
                 *新增或修改高危命令策略
                 * @param req ModifyBashPolicyRequest
                 * @return ModifyBashPolicyOutcome
                 */
                ModifyBashPolicyOutcome ModifyBashPolicy(const Model::ModifyBashPolicyRequest &request);
                void ModifyBashPolicyAsync(const Model::ModifyBashPolicyRequest& request, const ModifyBashPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBashPolicyOutcomeCallable ModifyBashPolicyCallable(const Model::ModifyBashPolicyRequest& request);

                /**
                 *切换高危命令策略状态
                 * @param req ModifyBashPolicyStatusRequest
                 * @return ModifyBashPolicyStatusOutcome
                 */
                ModifyBashPolicyStatusOutcome ModifyBashPolicyStatus(const Model::ModifyBashPolicyStatusRequest &request);
                void ModifyBashPolicyStatusAsync(const Model::ModifyBashPolicyStatusRequest& request, const ModifyBashPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBashPolicyStatusOutcomeCallable ModifyBashPolicyStatusCallable(const Model::ModifyBashPolicyStatusRequest& request);

                /**
                 *修改暴力破解规则
                 * @param req ModifyBruteAttackRulesRequest
                 * @return ModifyBruteAttackRulesOutcome
                 */
                ModifyBruteAttackRulesOutcome ModifyBruteAttackRules(const Model::ModifyBruteAttackRulesRequest &request);
                void ModifyBruteAttackRulesAsync(const Model::ModifyBruteAttackRulesRequest& request, const ModifyBruteAttackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBruteAttackRulesOutcomeCallable ModifyBruteAttackRulesCallable(const Model::ModifyBruteAttackRulesRequest& request);

                /**
                 *修改网络攻击事件状态
                 * @param req ModifyEventAttackStatusRequest
                 * @return ModifyEventAttackStatusOutcome
                 */
                ModifyEventAttackStatusOutcome ModifyEventAttackStatus(const Model::ModifyEventAttackStatusRequest &request);
                void ModifyEventAttackStatusAsync(const Model::ModifyEventAttackStatusRequest& request, const ModifyEventAttackStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEventAttackStatusOutcomeCallable ModifyEventAttackStatusCallable(const Model::ModifyEventAttackStatusRequest& request);

                /**
                 *核心文件事件更新
                 * @param req ModifyFileTamperEventsRequest
                 * @return ModifyFileTamperEventsOutcome
                 */
                ModifyFileTamperEventsOutcome ModifyFileTamperEvents(const Model::ModifyFileTamperEventsRequest &request);
                void ModifyFileTamperEventsAsync(const Model::ModifyFileTamperEventsRequest& request, const ModifyFileTamperEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFileTamperEventsOutcomeCallable ModifyFileTamperEventsCallable(const Model::ModifyFileTamperEventsRequest& request);

                /**
                 *编辑、新增核心文件监控规则
                 * @param req ModifyFileTamperRuleRequest
                 * @return ModifyFileTamperRuleOutcome
                 */
                ModifyFileTamperRuleOutcome ModifyFileTamperRule(const Model::ModifyFileTamperRuleRequest &request);
                void ModifyFileTamperRuleAsync(const Model::ModifyFileTamperRuleRequest& request, const ModifyFileTamperRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFileTamperRuleOutcomeCallable ModifyFileTamperRuleCallable(const Model::ModifyFileTamperRuleRequest& request);

                /**
                 *核心文件规则状态更新，支持批量删除 关闭
                 * @param req ModifyFileTamperRuleStatusRequest
                 * @return ModifyFileTamperRuleStatusOutcome
                 */
                ModifyFileTamperRuleStatusOutcome ModifyFileTamperRuleStatus(const Model::ModifyFileTamperRuleStatusRequest &request);
                void ModifyFileTamperRuleStatusAsync(const Model::ModifyFileTamperRuleStatusRequest& request, const ModifyFileTamperRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFileTamperRuleStatusOutcomeCallable ModifyFileTamperRuleStatusCallable(const Model::ModifyFileTamperRuleStatusRequest& request);

                /**
                 *开关java内存马插件
                 * @param req ModifyJavaMemShellPluginSwitchRequest
                 * @return ModifyJavaMemShellPluginSwitchOutcome
                 */
                ModifyJavaMemShellPluginSwitchOutcome ModifyJavaMemShellPluginSwitch(const Model::ModifyJavaMemShellPluginSwitchRequest &request);
                void ModifyJavaMemShellPluginSwitchAsync(const Model::ModifyJavaMemShellPluginSwitchRequest& request, const ModifyJavaMemShellPluginSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyJavaMemShellPluginSwitchOutcomeCallable ModifyJavaMemShellPluginSwitchCallable(const Model::ModifyJavaMemShellPluginSwitchRequest& request);

                /**
                 *修改java内存马事件状态
                 * @param req ModifyJavaMemShellsStatusRequest
                 * @return ModifyJavaMemShellsStatusOutcome
                 */
                ModifyJavaMemShellsStatusOutcome ModifyJavaMemShellsStatus(const Model::ModifyJavaMemShellsStatusRequest &request);
                void ModifyJavaMemShellsStatusAsync(const Model::ModifyJavaMemShellsStatusRequest& request, const ModifyJavaMemShellsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyJavaMemShellsStatusOutcomeCallable ModifyJavaMemShellsStatusCallable(const Model::ModifyJavaMemShellsStatusRequest& request);

                /**
                 *设置中心-授权管理 对某个授权批量绑定机器
                 * @param req ModifyLicenseBindsRequest
                 * @return ModifyLicenseBindsOutcome
                 */
                ModifyLicenseBindsOutcome ModifyLicenseBinds(const Model::ModifyLicenseBindsRequest &request);
                void ModifyLicenseBindsAsync(const Model::ModifyLicenseBindsRequest& request, const ModifyLicenseBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLicenseBindsOutcomeCallable ModifyLicenseBindsCallable(const Model::ModifyLicenseBindsRequest& request);

                /**
                 *编辑《主机安全-按量计费》授权订单
                 * @param req ModifyLicenseOrderRequest
                 * @return ModifyLicenseOrderOutcome
                 */
                ModifyLicenseOrderOutcome ModifyLicenseOrder(const Model::ModifyLicenseOrderRequest &request);
                void ModifyLicenseOrderAsync(const Model::ModifyLicenseOrderRequest& request, const ModifyLicenseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLicenseOrderOutcomeCallable ModifyLicenseOrderCallable(const Model::ModifyLicenseOrderRequest& request);

                /**
                 *设置中心-授权管理 对某个授权批量解绑机器
                 * @param req ModifyLicenseUnBindsRequest
                 * @return ModifyLicenseUnBindsOutcome
                 */
                ModifyLicenseUnBindsOutcome ModifyLicenseUnBinds(const Model::ModifyLicenseUnBindsRequest &request);
                void ModifyLicenseUnBindsAsync(const Model::ModifyLicenseUnBindsRequest& request, const ModifyLicenseUnBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLicenseUnBindsOutcomeCallable ModifyLicenseUnBindsCallable(const Model::ModifyLicenseUnBindsRequest& request);

                /**
                 *新增或修改日志投递kafka接入配置
                 * @param req ModifyLogKafkaAccessRequest
                 * @return ModifyLogKafkaAccessOutcome
                 */
                ModifyLogKafkaAccessOutcome ModifyLogKafkaAccess(const Model::ModifyLogKafkaAccessRequest &request);
                void ModifyLogKafkaAccessAsync(const Model::ModifyLogKafkaAccessRequest& request, const ModifyLogKafkaAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogKafkaAccessOutcomeCallable ModifyLogKafkaAccessCallable(const Model::ModifyLogKafkaAccessRequest& request);

                /**
                 *修改指定日志类别投递配置、开关
                 * @param req ModifyLogKafkaDeliverTypeRequest
                 * @return ModifyLogKafkaDeliverTypeOutcome
                 */
                ModifyLogKafkaDeliverTypeOutcome ModifyLogKafkaDeliverType(const Model::ModifyLogKafkaDeliverTypeRequest &request);
                void ModifyLogKafkaDeliverTypeAsync(const Model::ModifyLogKafkaDeliverTypeRequest& request, const ModifyLogKafkaDeliverTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogKafkaDeliverTypeOutcomeCallable ModifyLogKafkaDeliverTypeCallable(const Model::ModifyLogKafkaDeliverTypeRequest& request);

                /**
                 *修改日志投递状态信息
                 * @param req ModifyLogKafkaStateRequest
                 * @return ModifyLogKafkaStateOutcome
                 */
                ModifyLogKafkaStateOutcome ModifyLogKafkaState(const Model::ModifyLogKafkaStateRequest &request);
                void ModifyLogKafkaStateAsync(const Model::ModifyLogKafkaStateRequest& request, const ModifyLogKafkaStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogKafkaStateOutcomeCallable ModifyLogKafkaStateCallable(const Model::ModifyLogKafkaStateRequest& request);

                /**
                 *修改日志存储配置
                 * @param req ModifyLogStorageConfigRequest
                 * @return ModifyLogStorageConfigOutcome
                 */
                ModifyLogStorageConfigOutcome ModifyLogStorageConfig(const Model::ModifyLogStorageConfigRequest &request);
                void ModifyLogStorageConfigAsync(const Model::ModifyLogStorageConfigRequest& request, const ModifyLogStorageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogStorageConfigOutcomeCallable ModifyLogStorageConfigCallable(const Model::ModifyLogStorageConfigRequest& request);

                /**
                 *更新登录审计白名单信息
                 * @param req ModifyLoginWhiteInfoRequest
                 * @return ModifyLoginWhiteInfoOutcome
                 */
                ModifyLoginWhiteInfoOutcome ModifyLoginWhiteInfo(const Model::ModifyLoginWhiteInfoRequest &request);
                void ModifyLoginWhiteInfoAsync(const Model::ModifyLoginWhiteInfoRequest& request, const ModifyLoginWhiteInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoginWhiteInfoOutcomeCallable ModifyLoginWhiteInfoCallable(const Model::ModifyLoginWhiteInfoRequest& request);

                /**
                 *更新合并后登录审计白名单信息（服务器列表数目应小于1000）
                 * @param req ModifyLoginWhiteRecordRequest
                 * @return ModifyLoginWhiteRecordOutcome
                 */
                ModifyLoginWhiteRecordOutcome ModifyLoginWhiteRecord(const Model::ModifyLoginWhiteRecordRequest &request);
                void ModifyLoginWhiteRecordAsync(const Model::ModifyLoginWhiteRecordRequest& request, const ModifyLoginWhiteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoginWhiteRecordOutcomeCallable ModifyLoginWhiteRecordCallable(const Model::ModifyLoginWhiteRecordRequest& request);

                /**
                 *修改机器清理配置
                 * @param req ModifyMachineAutoClearConfigRequest
                 * @return ModifyMachineAutoClearConfigOutcome
                 */
                ModifyMachineAutoClearConfigOutcome ModifyMachineAutoClearConfig(const Model::ModifyMachineAutoClearConfigRequest &request);
                void ModifyMachineAutoClearConfigAsync(const Model::ModifyMachineAutoClearConfigRequest& request, const ModifyMachineAutoClearConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMachineAutoClearConfigOutcomeCallable ModifyMachineAutoClearConfigCallable(const Model::ModifyMachineAutoClearConfigRequest& request);

                /**
                 *修改主机备注信息
                 * @param req ModifyMachineRemarkRequest
                 * @return ModifyMachineRemarkOutcome
                 */
                ModifyMachineRemarkOutcome ModifyMachineRemark(const Model::ModifyMachineRemarkRequest &request);
                void ModifyMachineRemarkAsync(const Model::ModifyMachineRemarkRequest& request, const ModifyMachineRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMachineRemarkOutcomeCallable ModifyMachineRemarkCallable(const Model::ModifyMachineRemarkRequest& request);

                /**
                 *更新恶意请求白名单
                 * @param req ModifyMaliciousRequestWhiteListRequest
                 * @return ModifyMaliciousRequestWhiteListOutcome
                 */
                ModifyMaliciousRequestWhiteListOutcome ModifyMaliciousRequestWhiteList(const Model::ModifyMaliciousRequestWhiteListRequest &request);
                void ModifyMaliciousRequestWhiteListAsync(const Model::ModifyMaliciousRequestWhiteListRequest& request, const ModifyMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMaliciousRequestWhiteListOutcomeCallable ModifyMaliciousRequestWhiteListCallable(const Model::ModifyMaliciousRequestWhiteListRequest& request);

                /**
                 *定时扫描设置
                 * @param req ModifyMalwareTimingScanSettingsRequest
                 * @return ModifyMalwareTimingScanSettingsOutcome
                 */
                ModifyMalwareTimingScanSettingsOutcome ModifyMalwareTimingScanSettings(const Model::ModifyMalwareTimingScanSettingsRequest &request);
                void ModifyMalwareTimingScanSettingsAsync(const Model::ModifyMalwareTimingScanSettingsRequest& request, const ModifyMalwareTimingScanSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMalwareTimingScanSettingsOutcomeCallable ModifyMalwareTimingScanSettingsCallable(const Model::ModifyMalwareTimingScanSettingsRequest& request);

                /**
                 *编辑木马白名单
                 * @param req ModifyMalwareWhiteListRequest
                 * @return ModifyMalwareWhiteListOutcome
                 */
                ModifyMalwareWhiteListOutcome ModifyMalwareWhiteList(const Model::ModifyMalwareWhiteListRequest &request);
                void ModifyMalwareWhiteListAsync(const Model::ModifyMalwareWhiteListRequest& request, const ModifyMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMalwareWhiteListOutcomeCallable ModifyMalwareWhiteListCallable(const Model::ModifyMalwareWhiteListRequest& request);

                /**
                 *修改网络攻击设置
                 * @param req ModifyNetAttackSettingRequest
                 * @return ModifyNetAttackSettingOutcome
                 */
                ModifyNetAttackSettingOutcome ModifyNetAttackSetting(const Model::ModifyNetAttackSettingRequest &request);
                void ModifyNetAttackSettingAsync(const Model::ModifyNetAttackSettingRequest& request, const ModifyNetAttackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetAttackSettingOutcomeCallable ModifyNetAttackSettingCallable(const Model::ModifyNetAttackSettingRequest& request);

                /**
                 *编辑网络攻击白名单
                 * @param req ModifyNetAttackWhiteListRequest
                 * @return ModifyNetAttackWhiteListOutcome
                 */
                ModifyNetAttackWhiteListOutcome ModifyNetAttackWhiteList(const Model::ModifyNetAttackWhiteListRequest &request);
                void ModifyNetAttackWhiteListAsync(const Model::ModifyNetAttackWhiteListRequest& request, const ModifyNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetAttackWhiteListOutcomeCallable ModifyNetAttackWhiteListCallable(const Model::ModifyNetAttackWhiteListRequest& request);

                /**
                 *对订单属性编辑
                 * @param req ModifyOrderAttributeRequest
                 * @return ModifyOrderAttributeOutcome
                 */
                ModifyOrderAttributeOutcome ModifyOrderAttribute(const Model::ModifyOrderAttributeRequest &request);
                void ModifyOrderAttributeAsync(const Model::ModifyOrderAttributeRequest& request, const ModifyOrderAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOrderAttributeOutcomeCallable ModifyOrderAttributeCallable(const Model::ModifyOrderAttributeRequest& request);

                /**
                 *修改防勒索事件状态
                 * @param req ModifyRansomDefenseEventsStatusRequest
                 * @return ModifyRansomDefenseEventsStatusOutcome
                 */
                ModifyRansomDefenseEventsStatusOutcome ModifyRansomDefenseEventsStatus(const Model::ModifyRansomDefenseEventsStatusRequest &request);
                void ModifyRansomDefenseEventsStatusAsync(const Model::ModifyRansomDefenseEventsStatusRequest& request, const ModifyRansomDefenseEventsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRansomDefenseEventsStatusOutcomeCallable ModifyRansomDefenseEventsStatusCallable(const Model::ModifyRansomDefenseEventsStatusRequest& request);

                /**
                 *批量修改防勒索策略状态
                 * @param req ModifyRansomDefenseStrategyStatusRequest
                 * @return ModifyRansomDefenseStrategyStatusOutcome
                 */
                ModifyRansomDefenseStrategyStatusOutcome ModifyRansomDefenseStrategyStatus(const Model::ModifyRansomDefenseStrategyStatusRequest &request);
                void ModifyRansomDefenseStrategyStatusAsync(const Model::ModifyRansomDefenseStrategyStatusRequest& request, const ModifyRansomDefenseStrategyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRansomDefenseStrategyStatusOutcomeCallable ModifyRansomDefenseStrategyStatusCallable(const Model::ModifyRansomDefenseStrategyStatusRequest& request);

                /**
                 *编辑漏洞防御最大cpu配置
                 * @param req ModifyRaspMaxCpuRequest
                 * @return ModifyRaspMaxCpuOutcome
                 */
                ModifyRaspMaxCpuOutcome ModifyRaspMaxCpu(const Model::ModifyRaspMaxCpuRequest &request);
                void ModifyRaspMaxCpuAsync(const Model::ModifyRaspMaxCpuRequest& request, const ModifyRaspMaxCpuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRaspMaxCpuOutcomeCallable ModifyRaspMaxCpuCallable(const Model::ModifyRaspMaxCpuRequest& request);

                /**
                 *添加漏洞防御白名单
                 * @param req ModifyRaspRulesRequest
                 * @return ModifyRaspRulesOutcome
                 */
                ModifyRaspRulesOutcome ModifyRaspRules(const Model::ModifyRaspRulesRequest &request);
                void ModifyRaspRulesAsync(const Model::ModifyRaspRulesRequest& request, const ModifyRaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRaspRulesOutcomeCallable ModifyRaspRulesCallable(const Model::ModifyRaspRulesRequest& request);

                /**
                 *编辑反弹Shell规则（支持多服务器选择）
                 * @param req ModifyReverseShellRulesAggregationRequest
                 * @return ModifyReverseShellRulesAggregationOutcome
                 */
                ModifyReverseShellRulesAggregationOutcome ModifyReverseShellRulesAggregation(const Model::ModifyReverseShellRulesAggregationRequest &request);
                void ModifyReverseShellRulesAggregationAsync(const Model::ModifyReverseShellRulesAggregationRequest& request, const ModifyReverseShellRulesAggregationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReverseShellRulesAggregationOutcomeCallable ModifyReverseShellRulesAggregationCallable(const Model::ModifyReverseShellRulesAggregationRequest& request);

                /**
                 *更改恶意请求策略
                 * @param req ModifyRiskDnsPolicyRequest
                 * @return ModifyRiskDnsPolicyOutcome
                 */
                ModifyRiskDnsPolicyOutcome ModifyRiskDnsPolicy(const Model::ModifyRiskDnsPolicyRequest &request);
                void ModifyRiskDnsPolicyAsync(const Model::ModifyRiskDnsPolicyRequest& request, const ModifyRiskDnsPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskDnsPolicyOutcomeCallable ModifyRiskDnsPolicyCallable(const Model::ModifyRiskDnsPolicyRequest& request);

                /**
                 *更改恶意请求策略状态
                 * @param req ModifyRiskDnsPolicyStatusRequest
                 * @return ModifyRiskDnsPolicyStatusOutcome
                 */
                ModifyRiskDnsPolicyStatusOutcome ModifyRiskDnsPolicyStatus(const Model::ModifyRiskDnsPolicyStatusRequest &request);
                void ModifyRiskDnsPolicyStatusAsync(const Model::ModifyRiskDnsPolicyStatusRequest& request, const ModifyRiskDnsPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskDnsPolicyStatusOutcomeCallable ModifyRiskDnsPolicyStatusCallable(const Model::ModifyRiskDnsPolicyStatusRequest& request);

                /**
                 *入侵检测所有事件的状态，包括：文件查杀，异常登录，密码破解，高危命令，反弹shell，本地提取
                 * @param req ModifyRiskEventsStatusRequest
                 * @return ModifyRiskEventsStatusOutcome
                 */
                ModifyRiskEventsStatusOutcome ModifyRiskEventsStatus(const Model::ModifyRiskEventsStatusRequest &request);
                void ModifyRiskEventsStatusAsync(const Model::ModifyRiskEventsStatusRequest& request, const ModifyRiskEventsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskEventsStatusOutcomeCallable ModifyRiskEventsStatusCallable(const Model::ModifyRiskEventsStatusRequest& request);

                /**
                 *用于创建/修改用户自定义配置
                 * @param req ModifyUsersConfigRequest
                 * @return ModifyUsersConfigOutcome
                 */
                ModifyUsersConfigOutcome ModifyUsersConfig(const Model::ModifyUsersConfigRequest &request);
                void ModifyUsersConfigAsync(const Model::ModifyUsersConfigRequest& request, const ModifyUsersConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUsersConfigOutcomeCallable ModifyUsersConfigCallable(const Model::ModifyUsersConfigRequest& request);

                /**
                 *修改漏洞防御事件状态（修复漏洞通过其他接口实现）
                 * @param req ModifyVulDefenceEventStatusRequest
                 * @return ModifyVulDefenceEventStatusOutcome
                 */
                ModifyVulDefenceEventStatusOutcome ModifyVulDefenceEventStatus(const Model::ModifyVulDefenceEventStatusRequest &request);
                void ModifyVulDefenceEventStatusAsync(const Model::ModifyVulDefenceEventStatusRequest& request, const ModifyVulDefenceEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVulDefenceEventStatusOutcomeCallable ModifyVulDefenceEventStatusCallable(const Model::ModifyVulDefenceEventStatusRequest& request);

                /**
                 *修改漏洞防御插件设置
1）新增主机自动加入，scope为1，quuids为空
2）全量旗舰版不自动加入，scope为0，quuids为当前quuid列表，
3）给定quuid列表，scope为0，quuids为用户选择quuid
                 * @param req ModifyVulDefenceSettingRequest
                 * @return ModifyVulDefenceSettingOutcome
                 */
                ModifyVulDefenceSettingOutcome ModifyVulDefenceSetting(const Model::ModifyVulDefenceSettingRequest &request);
                void ModifyVulDefenceSettingAsync(const Model::ModifyVulDefenceSettingRequest& request, const ModifyVulDefenceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVulDefenceSettingOutcomeCallable ModifyVulDefenceSettingCallable(const Model::ModifyVulDefenceSettingRequest& request);

                /**
                 *修改告警机器范围配置
                 * @param req ModifyWarningHostConfigRequest
                 * @return ModifyWarningHostConfigOutcome
                 */
                ModifyWarningHostConfigOutcome ModifyWarningHostConfig(const Model::ModifyWarningHostConfigRequest &request);
                void ModifyWarningHostConfigAsync(const Model::ModifyWarningHostConfigRequest& request, const ModifyWarningHostConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWarningHostConfigOutcomeCallable ModifyWarningHostConfigCallable(const Model::ModifyWarningHostConfigRequest& request);

                /**
                 *修改告警设置
                 * @param req ModifyWarningSettingRequest
                 * @return ModifyWarningSettingOutcome
                 */
                ModifyWarningSettingOutcome ModifyWarningSetting(const Model::ModifyWarningSettingRequest &request);
                void ModifyWarningSettingAsync(const Model::ModifyWarningSettingRequest& request, const ModifyWarningSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWarningSettingOutcomeCallable ModifyWarningSettingCallable(const Model::ModifyWarningSettingRequest& request);

                /**
                 *新增或修改告警策略
                 * @param req ModifyWebHookPolicyRequest
                 * @return ModifyWebHookPolicyOutcome
                 */
                ModifyWebHookPolicyOutcome ModifyWebHookPolicy(const Model::ModifyWebHookPolicyRequest &request);
                void ModifyWebHookPolicyAsync(const Model::ModifyWebHookPolicyRequest& request, const ModifyWebHookPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebHookPolicyOutcomeCallable ModifyWebHookPolicyCallable(const Model::ModifyWebHookPolicyRequest& request);

                /**
                 *修改告警策略开关
                 * @param req ModifyWebHookPolicyStatusRequest
                 * @return ModifyWebHookPolicyStatusOutcome
                 */
                ModifyWebHookPolicyStatusOutcome ModifyWebHookPolicyStatus(const Model::ModifyWebHookPolicyStatusRequest &request);
                void ModifyWebHookPolicyStatusAsync(const Model::ModifyWebHookPolicyStatusRequest& request, const ModifyWebHookPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebHookPolicyStatusOutcomeCallable ModifyWebHookPolicyStatusCallable(const Model::ModifyWebHookPolicyStatusRequest& request);

                /**
                 *新增或更新告警接收人
                 * @param req ModifyWebHookReceiverRequest
                 * @return ModifyWebHookReceiverOutcome
                 */
                ModifyWebHookReceiverOutcome ModifyWebHookReceiver(const Model::ModifyWebHookReceiverRequest &request);
                void ModifyWebHookReceiverAsync(const Model::ModifyWebHookReceiverRequest& request, const ModifyWebHookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebHookReceiverOutcomeCallable ModifyWebHookReceiverCallable(const Model::ModifyWebHookReceiverRequest& request);

                /**
                 *新增或修改企微机器人规则
                 * @param req ModifyWebHookRuleRequest
                 * @return ModifyWebHookRuleOutcome
                 */
                ModifyWebHookRuleOutcome ModifyWebHookRule(const Model::ModifyWebHookRuleRequest &request);
                void ModifyWebHookRuleAsync(const Model::ModifyWebHookRuleRequest& request, const ModifyWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebHookRuleOutcomeCallable ModifyWebHookRuleCallable(const Model::ModifyWebHookRuleRequest& request);

                /**
                 *修改企微机器人规则状态
                 * @param req ModifyWebHookRuleStatusRequest
                 * @return ModifyWebHookRuleStatusOutcome
                 */
                ModifyWebHookRuleStatusOutcome ModifyWebHookRuleStatus(const Model::ModifyWebHookRuleStatusRequest &request);
                void ModifyWebHookRuleStatusAsync(const Model::ModifyWebHookRuleStatusRequest& request, const ModifyWebHookRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebHookRuleStatusOutcomeCallable ModifyWebHookRuleStatusCallable(const Model::ModifyWebHookRuleStatusRequest& request);

                /**
                 *创建/修改网站防护目录
                 * @param req ModifyWebPageProtectDirRequest
                 * @return ModifyWebPageProtectDirOutcome
                 */
                ModifyWebPageProtectDirOutcome ModifyWebPageProtectDir(const Model::ModifyWebPageProtectDirRequest &request);
                void ModifyWebPageProtectDirAsync(const Model::ModifyWebPageProtectDirRequest& request, const ModifyWebPageProtectDirAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebPageProtectDirOutcomeCallable ModifyWebPageProtectDirCallable(const Model::ModifyWebPageProtectDirRequest& request);

                /**
                 *修改网站防护设置
                 * @param req ModifyWebPageProtectSettingRequest
                 * @return ModifyWebPageProtectSettingOutcome
                 */
                ModifyWebPageProtectSettingOutcome ModifyWebPageProtectSetting(const Model::ModifyWebPageProtectSettingRequest &request);
                void ModifyWebPageProtectSettingAsync(const Model::ModifyWebPageProtectSettingRequest& request, const ModifyWebPageProtectSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebPageProtectSettingOutcomeCallable ModifyWebPageProtectSettingCallable(const Model::ModifyWebPageProtectSettingRequest& request);

                /**
                 *网站防篡改防护设置开关
                 * @param req ModifyWebPageProtectSwitchRequest
                 * @return ModifyWebPageProtectSwitchOutcome
                 */
                ModifyWebPageProtectSwitchOutcome ModifyWebPageProtectSwitch(const Model::ModifyWebPageProtectSwitchRequest &request);
                void ModifyWebPageProtectSwitchAsync(const Model::ModifyWebPageProtectSwitchRequest& request, const ModifyWebPageProtectSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebPageProtectSwitchOutcomeCallable ModifyWebPageProtectSwitchCallable(const Model::ModifyWebPageProtectSwitchRequest& request);

                /**
                 *防勒索快照回滚
                 * @param req RansomDefenseRollbackRequest
                 * @return RansomDefenseRollbackOutcome
                 */
                RansomDefenseRollbackOutcome RansomDefenseRollback(const Model::RansomDefenseRollbackRequest &request);
                void RansomDefenseRollbackAsync(const Model::RansomDefenseRollbackRequest& request, const RansomDefenseRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RansomDefenseRollbackOutcomeCallable RansomDefenseRollbackCallable(const Model::RansomDefenseRollbackRequest& request);

                /**
                 *本接口（RecoverMalwares）用于批量恢复已经被隔离的木马文件。
                 * @param req RecoverMalwaresRequest
                 * @return RecoverMalwaresOutcome
                 */
                RecoverMalwaresOutcome RecoverMalwares(const Model::RecoverMalwaresRequest &request);
                void RecoverMalwaresAsync(const Model::RecoverMalwaresRequest& request, const RecoverMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverMalwaresOutcomeCallable RecoverMalwaresCallable(const Model::RecoverMalwaresRequest& request);

                /**
                 *删除本地存储数据
                 * @param req RemoveLocalStorageItemRequest
                 * @return RemoveLocalStorageItemOutcome
                 */
                RemoveLocalStorageItemOutcome RemoveLocalStorageItem(const Model::RemoveLocalStorageItemRequest &request);
                void RemoveLocalStorageItemAsync(const Model::RemoveLocalStorageItemRequest& request, const RemoveLocalStorageItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveLocalStorageItemOutcomeCallable RemoveLocalStorageItemCallable(const Model::RemoveLocalStorageItemRequest& request);

                /**
                 *删除主机所有记录，目前只支持非腾讯云主机，且需要主机在离线状态
                 * @param req RemoveMachineRequest
                 * @return RemoveMachineOutcome
                 */
                RemoveMachineOutcome RemoveMachine(const Model::RemoveMachineRequest &request);
                void RemoveMachineAsync(const Model::RemoveMachineRequest& request, const RemoveMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveMachineOutcomeCallable RemoveMachineCallable(const Model::RemoveMachineRequest& request);

                /**
                 *快照创建失败时可以重试创建快照并且自动进行漏洞修复
                 * @param req RetryCreateSnapshotRequest
                 * @return RetryCreateSnapshotOutcome
                 */
                RetryCreateSnapshotOutcome RetryCreateSnapshot(const Model::RetryCreateSnapshotRequest &request);
                void RetryCreateSnapshotAsync(const Model::RetryCreateSnapshotRequest& request, const RetryCreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryCreateSnapshotOutcomeCallable RetryCreateSnapshotCallable(const Model::RetryCreateSnapshotRequest& request);

                /**
                 *修复失败时单独对某一个主机修复漏洞
                 * @param req RetryVulFixRequest
                 * @return RetryVulFixOutcome
                 */
                RetryVulFixOutcome RetryVulFix(const Model::RetryVulFixRequest &request);
                void RetryVulFixAsync(const Model::RetryVulFixRequest& request, const RetryVulFixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryVulFixOutcomeCallable RetryVulFixCallable(const Model::RetryVulFixRequest& request);

                /**
                 *资产指纹启动扫描
                 * @param req ScanAssetRequest
                 * @return ScanAssetOutcome
                 */
                ScanAssetOutcome ScanAsset(const Model::ScanAssetRequest &request);
                void ScanAssetAsync(const Model::ScanAssetRequest& request, const ScanAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanAssetOutcomeCallable ScanAssetCallable(const Model::ScanAssetRequest& request);

                /**
                 *基线检测与基线重新检测接口
                 * @param req ScanBaselineRequest
                 * @return ScanBaselineOutcome
                 */
                ScanBaselineOutcome ScanBaseline(const Model::ScanBaselineRequest &request);
                void ScanBaselineAsync(const Model::ScanBaselineRequest& request, const ScanBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanBaselineOutcomeCallable ScanBaselineCallable(const Model::ScanBaselineRequest& request);

                /**
                 *ScanTaskAgain  重新开始扫描任务，可以指定机器
                 * @param req ScanTaskAgainRequest
                 * @return ScanTaskAgainOutcome
                 */
                ScanTaskAgainOutcome ScanTaskAgain(const Model::ScanTaskAgainRequest &request);
                void ScanTaskAgainAsync(const Model::ScanTaskAgainRequest& request, const ScanTaskAgainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanTaskAgainOutcomeCallable ScanTaskAgainCallable(const Model::ScanTaskAgainRequest& request);

                /**
                 *漏洞一键检测
                 * @param req ScanVulRequest
                 * @return ScanVulOutcome
                 */
                ScanVulOutcome ScanVul(const Model::ScanVulRequest &request);
                void ScanVulAsync(const Model::ScanVulRequest& request, const ScanVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanVulOutcomeCallable ScanVulCallable(const Model::ScanVulRequest& request);

                /**
                 *漏洞管理-重新检测接口
                 * @param req ScanVulAgainRequest
                 * @return ScanVulAgainOutcome
                 */
                ScanVulAgainOutcome ScanVulAgain(const Model::ScanVulAgainRequest &request);
                void ScanVulAgainAsync(const Model::ScanVulAgainRequest& request, const ScanVulAgainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanVulAgainOutcomeCallable ScanVulAgainCallable(const Model::ScanVulAgainRequest& request);

                /**
                 *定期扫描漏洞设置
                 * @param req ScanVulSettingRequest
                 * @return ScanVulSettingOutcome
                 */
                ScanVulSettingOutcome ScanVulSetting(const Model::ScanVulSettingRequest &request);
                void ScanVulSettingAsync(const Model::ScanVulSettingRequest& request, const ScanVulSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanVulSettingOutcomeCallable ScanVulSettingCallable(const Model::ScanVulSettingRequest& request);

                /**
                 *查询日志
                 * @param req SearchLogRequest
                 * @return SearchLogOutcome
                 */
                SearchLogOutcome SearchLog(const Model::SearchLogRequest &request);
                void SearchLogAsync(const Model::SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchLogOutcomeCallable SearchLogCallable(const Model::SearchLogRequest& request);

                /**
                 *本接口（SeparateMalwares）用于隔离木马。
                 * @param req SeparateMalwaresRequest
                 * @return SeparateMalwaresOutcome
                 */
                SeparateMalwaresOutcome SeparateMalwares(const Model::SeparateMalwaresRequest &request);
                void SeparateMalwaresAsync(const Model::SeparateMalwaresRequest& request, const SeparateMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SeparateMalwaresOutcomeCallable SeparateMalwaresCallable(const Model::SeparateMalwaresRequest& request);

                /**
                 *设置高危命令事件状态
                 * @param req SetBashEventsStatusRequest
                 * @return SetBashEventsStatusOutcome
                 */
                SetBashEventsStatusOutcome SetBashEventsStatus(const Model::SetBashEventsStatusRequest &request);
                void SetBashEventsStatusAsync(const Model::SetBashEventsStatusRequest& request, const SetBashEventsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetBashEventsStatusOutcomeCallable SetBashEventsStatusCallable(const Model::SetBashEventsStatusRequest& request);

                /**
                 *设置本地存储过期时间
                 * @param req SetLocalStorageExpireRequest
                 * @return SetLocalStorageExpireOutcome
                 */
                SetLocalStorageExpireOutcome SetLocalStorageExpire(const Model::SetLocalStorageExpireRequest &request);
                void SetLocalStorageExpireAsync(const Model::SetLocalStorageExpireRequest& request, const SetLocalStorageExpireAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLocalStorageExpireOutcomeCallable SetLocalStorageExpireCallable(const Model::SetLocalStorageExpireRequest& request);

                /**
                 *设置本地存储数据
                 * @param req SetLocalStorageItemRequest
                 * @return SetLocalStorageItemOutcome
                 */
                SetLocalStorageItemOutcome SetLocalStorageItem(const Model::SetLocalStorageItemRequest &request);
                void SetLocalStorageItemAsync(const Model::SetLocalStorageItemRequest& request, const SetLocalStorageItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLocalStorageItemOutcomeCallable SetLocalStorageItemCallable(const Model::SetLocalStorageItemRequest& request);

                /**
                 *检测基线
                 * @param req StartBaselineDetectRequest
                 * @return StartBaselineDetectOutcome
                 */
                StartBaselineDetectOutcome StartBaselineDetect(const Model::StartBaselineDetectRequest &request);
                void StartBaselineDetectAsync(const Model::StartBaselineDetectRequest& request, const StartBaselineDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartBaselineDetectOutcomeCallable StartBaselineDetectCallable(const Model::StartBaselineDetectRequest& request);

                /**
                 *停止资产扫描任务
                 * @param req StopAssetScanRequest
                 * @return StopAssetScanOutcome
                 */
                StopAssetScanOutcome StopAssetScan(const Model::StopAssetScanRequest &request);
                void StopAssetScanAsync(const Model::StopAssetScanRequest& request, const StopAssetScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopAssetScanOutcomeCallable StopAssetScanCallable(const Model::StopAssetScanRequest& request);

                /**
                 *停止基线检测
                 * @param req StopBaselineDetectRequest
                 * @return StopBaselineDetectOutcome
                 */
                StopBaselineDetectOutcome StopBaselineDetect(const Model::StopBaselineDetectRequest &request);
                void StopBaselineDetectAsync(const Model::StopBaselineDetectRequest& request, const StopBaselineDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopBaselineDetectOutcomeCallable StopBaselineDetectCallable(const Model::StopBaselineDetectRequest& request);

                /**
                 *不再提醒爆破阻断提示弹窗
                 * @param req StopNoticeBanTipsRequest
                 * @return StopNoticeBanTipsOutcome
                 */
                StopNoticeBanTipsOutcome StopNoticeBanTips(const Model::StopNoticeBanTipsRequest &request);
                void StopNoticeBanTipsAsync(const Model::StopNoticeBanTipsRequest& request, const StopNoticeBanTipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopNoticeBanTipsOutcomeCallable StopNoticeBanTipsCallable(const Model::StopNoticeBanTipsRequest& request);

                /**
                 *切换高危命令规则状态
                 * @param req SwitchBashRulesRequest
                 * @return SwitchBashRulesOutcome
                 */
                SwitchBashRulesOutcome SwitchBashRules(const Model::SwitchBashRulesRequest &request);
                void SwitchBashRulesAsync(const Model::SwitchBashRulesRequest& request, const SwitchBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchBashRulesOutcomeCallable SwitchBashRulesCallable(const Model::SwitchBashRulesRequest& request);

                /**
                 *同步资产扫描信息
                 * @param req SyncAssetScanRequest
                 * @return SyncAssetScanOutcome
                 */
                SyncAssetScanOutcome SyncAssetScan(const Model::SyncAssetScanRequest &request);
                void SyncAssetScanAsync(const Model::SyncAssetScanRequest& request, const SyncAssetScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncAssetScanOutcomeCallable SyncAssetScanCallable(const Model::SyncAssetScanRequest& request);

                /**
                 *同步基线检测进度概要
                 * @param req SyncBaselineDetectSummaryRequest
                 * @return SyncBaselineDetectSummaryOutcome
                 */
                SyncBaselineDetectSummaryOutcome SyncBaselineDetectSummary(const Model::SyncBaselineDetectSummaryRequest &request);
                void SyncBaselineDetectSummaryAsync(const Model::SyncBaselineDetectSummaryRequest& request, const SyncBaselineDetectSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncBaselineDetectSummaryOutcomeCallable SyncBaselineDetectSummaryCallable(const Model::SyncBaselineDetectSummaryRequest& request);

                /**
                 *同步机器信息
                 * @param req SyncMachinesRequest
                 * @return SyncMachinesOutcome
                 */
                SyncMachinesOutcome SyncMachines(const Model::SyncMachinesRequest &request);
                void SyncMachinesAsync(const Model::SyncMachinesRequest& request, const SyncMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncMachinesOutcomeCallable SyncMachinesCallable(const Model::SyncMachinesRequest& request);

                /**
                 *测试企微机器人规则
                 * @param req TestWebHookRuleRequest
                 * @return TestWebHookRuleOutcome
                 */
                TestWebHookRuleOutcome TestWebHookRule(const Model::TestWebHookRuleRequest &request);
                void TestWebHookRuleAsync(const Model::TestWebHookRuleRequest& request, const TestWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TestWebHookRuleOutcomeCallable TestWebHookRuleCallable(const Model::TestWebHookRuleRequest& request);

                /**
                 *本接口(TrustMalwares)将被识别木马文件设为信任。
                 * @param req TrustMalwaresRequest
                 * @return TrustMalwaresOutcome
                 */
                TrustMalwaresOutcome TrustMalwares(const Model::TrustMalwaresRequest &request);
                void TrustMalwaresAsync(const Model::TrustMalwaresRequest& request, const TrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TrustMalwaresOutcomeCallable TrustMalwaresCallable(const Model::TrustMalwaresRequest& request);

                /**
                 *本接口（UntrustMalwares）用于取消信任木马文件。
                 * @param req UntrustMalwaresRequest
                 * @return UntrustMalwaresOutcome
                 */
                UntrustMalwaresOutcome UntrustMalwares(const Model::UntrustMalwaresRequest &request);
                void UntrustMalwaresAsync(const Model::UntrustMalwaresRequest& request, const UntrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UntrustMalwaresOutcomeCallable UntrustMalwaresCallable(const Model::UntrustMalwaresRequest& request);

                /**
                 *根据基线策略id更新策略信息
                 * @param req UpdateBaselineStrategyRequest
                 * @return UpdateBaselineStrategyOutcome
                 */
                UpdateBaselineStrategyOutcome UpdateBaselineStrategy(const Model::UpdateBaselineStrategyRequest &request);
                void UpdateBaselineStrategyAsync(const Model::UpdateBaselineStrategyRequest& request, const UpdateBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateBaselineStrategyOutcomeCallable UpdateBaselineStrategyCallable(const Model::UpdateBaselineStrategyRequest& request);

                /**
                 *关联机器标签列表
                 * @param req UpdateMachineTagsRequest
                 * @return UpdateMachineTagsOutcome
                 */
                UpdateMachineTagsOutcome UpdateMachineTags(const Model::UpdateMachineTagsRequest &request);
                void UpdateMachineTagsAsync(const Model::UpdateMachineTagsRequest& request, const UpdateMachineTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateMachineTagsOutcomeCallable UpdateMachineTagsCallable(const Model::UpdateMachineTagsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_CWPCLIENT_H_
