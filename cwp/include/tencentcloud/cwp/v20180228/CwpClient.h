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
#include <tencentcloud/cwp/v20180228/model/CancelIgnoreVulRequest.h>
#include <tencentcloud/cwp/v20180228/model/CancelIgnoreVulResponse.h>
#include <tencentcloud/cwp/v20180228/model/ChangeRuleEventsIgnoreStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ChangeRuleEventsIgnoreStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/CheckBashRuleParamsRequest.h>
#include <tencentcloud/cwp/v20180228/model/CheckBashRuleParamsResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateBaselineStrategyRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateBaselineStrategyResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateEmergencyVulScanRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateEmergencyVulScanResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateLicenseOrderRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateLicenseOrderResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateProtectServerRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateProtectServerResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateScanMalwareSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateScanMalwareSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateSearchLogRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateSearchLogResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateSearchTemplateRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateSearchTemplateResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteAttackLogsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteAttackLogsResponse.h>
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
#include <tencentcloud/cwp/v20180228/model/DeleteBashRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBashRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBruteAttacksRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBruteAttacksResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLicenseRecordRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLicenseRecordResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLoginWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLoginWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineTagRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineTagResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMaliciousRequestsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMaliciousRequestsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwareScanTaskRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwareScanTaskResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwaresRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwaresResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteNonlocalLoginPlacesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteNonlocalLoginPlacesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeletePrivilegeEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeletePrivilegeEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeletePrivilegeRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeletePrivilegeRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteProtectDirRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteProtectDirResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteReverseShellEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteReverseShellEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteReverseShellRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteReverseShellRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteScanTaskRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteScanTaskResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteSearchTemplateRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteSearchTemplateResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteTagsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteTagsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebPageEventLogRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebPageEventLogResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAccountStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAccountStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppProcessListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppProcessListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetCoreModuleInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetCoreModuleInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetCoreModuleListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetCoreModuleListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseListResponse.h>
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
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPlanTaskListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPlanTaskListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPortInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPortInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetProcessInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetProcessInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetRecentMachineInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetRecentMachineInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetSystemPackageListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetSystemPackageListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppPluginListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppPluginListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebFrameListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebFrameListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceProcessListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceProcessListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackLogInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackLogInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackLogsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackLogsResponse.h>
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
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsNewRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsNewResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBruteAttackListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBruteAttackListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBruteAttackRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBruteAttackRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeClientExceptionRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeClientExceptionResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeComponentStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeComponentStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeESAggregationsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeESAggregationsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEmergencyResponseListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEmergencyResponseListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEmergencyVulListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEmergencyVulListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExpertServiceListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExpertServiceListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExpertServiceOrderListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExpertServiceOrderListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExportMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExportMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeGeneralStatRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeGeneralStatResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHistoryAccountsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHistoryAccountsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHistoryServiceRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHistoryServiceResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHostLoginListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHostLoginListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreBaselineRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreBaselineRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreHostAndItemConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreHostAndItemConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreRuleEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreRuleEffectHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeImportMachineInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeImportMachineInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIndexListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIndexListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseBindListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseBindListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseBindScheduleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseBindScheduleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseGeneralRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseGeneralResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogStorageStatisticRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogStorageStatisticResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteCombinedListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteCombinedListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineOsListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineOsListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineRegionsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineRegionsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalWareListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalWareListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMaliciousRequestWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMaliciousRequestWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareFileRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareFileResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareRiskWarningRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareRiskWarningResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareTimingScanSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareTimingScanSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMonthInspectionReportRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMonthInspectionReportResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeOpenPortStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeOpenPortStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeOverviewStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeOverviewStatisticsResponse.h>
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
#include <tencentcloud/cwp/v20180228/model/DescribeProtectDirListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProtectDirListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProtectDirRelatedServerRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProtectDirRelatedServerResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProtectNetListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProtectNetListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSaveOrUpdateWarningsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSaveOrUpdateWarningsResponse.h>
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
#include <tencentcloud/cwp/v20180228/model/DescribeSearchExportListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSearchExportListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSearchLogsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSearchLogsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSearchTemplatesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSearchTemplatesResponse.h>
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
#include <tencentcloud/cwp/v20180228/model/DescribeUndoVulCountsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeUndoVulCountsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeUsualLoginPlacesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeUsualLoginPlacesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVersionStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVersionStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulCountByDatesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulCountByDatesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulEffectHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulHostCountScanTimeRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulHostCountScanTimeResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulHostTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulHostTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulInfoCvssRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulInfoCvssResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulLevelCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulLevelCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWarningListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWarningListResponse.h>
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
#include <tencentcloud/cwp/v20180228/model/EditTagsRequest.h>
#include <tencentcloud/cwp/v20180228/model/EditTagsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetCoreModuleListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetCoreModuleListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebServiceInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebServiceInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAttackLogsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAttackLogsResponse.h>
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
#include <tencentcloud/cwp/v20180228/model/ExportBruteAttacksRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBruteAttacksResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportIgnoreBaselineRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportIgnoreBaselineRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportIgnoreRuleEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportIgnoreRuleEffectHostListResponse.h>
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
#include <tencentcloud/cwp/v20180228/model/ExportReverseShellEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportReverseShellEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportScanTaskDetailsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportScanTaskDetailsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportSecurityTrendsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportSecurityTrendsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportTasksRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportTasksResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDetectionExcelRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDetectionExcelResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDetectionReportRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDetectionReportResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulEffectHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportWebPageEventListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportWebPageEventListResponse.h>
#include <tencentcloud/cwp/v20180228/model/FixBaselineDetectRequest.h>
#include <tencentcloud/cwp/v20180228/model/FixBaselineDetectResponse.h>
#include <tencentcloud/cwp/v20180228/model/IgnoreImpactedHostsRequest.h>
#include <tencentcloud/cwp/v20180228/model/IgnoreImpactedHostsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyAutoOpenProVersionConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyAutoOpenProVersionConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanModeRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanModeResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanStatusResponse.h>
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
#include <tencentcloud/cwp/v20180228/model/ModifyBruteAttackRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBruteAttackRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLicenseBindsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLicenseBindsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLicenseUnBindsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLicenseUnBindsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMachineRemarkRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMachineRemarkResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMalwareTimingScanSettingsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMalwareTimingScanSettingsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyOrderAttributeRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyOrderAttributeResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWarningSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWarningSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectDirRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectDirResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectSwitchRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectSwitchResponse.h>
#include <tencentcloud/cwp/v20180228/model/RecoverMalwaresRequest.h>
#include <tencentcloud/cwp/v20180228/model/RecoverMalwaresResponse.h>
#include <tencentcloud/cwp/v20180228/model/ScanAssetRequest.h>
#include <tencentcloud/cwp/v20180228/model/ScanAssetResponse.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulRequest.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulResponse.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulAgainRequest.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulAgainResponse.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/SeparateMalwaresRequest.h>
#include <tencentcloud/cwp/v20180228/model/SeparateMalwaresResponse.h>
#include <tencentcloud/cwp/v20180228/model/SetBashEventsStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/SetBashEventsStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/StartBaselineDetectRequest.h>
#include <tencentcloud/cwp/v20180228/model/StartBaselineDetectResponse.h>
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

                typedef Outcome<Core::Error, Model::CancelIgnoreVulResponse> CancelIgnoreVulOutcome;
                typedef std::future<CancelIgnoreVulOutcome> CancelIgnoreVulOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CancelIgnoreVulRequest&, CancelIgnoreVulOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelIgnoreVulAsyncHandler;
                typedef Outcome<Core::Error, Model::ChangeRuleEventsIgnoreStatusResponse> ChangeRuleEventsIgnoreStatusOutcome;
                typedef std::future<ChangeRuleEventsIgnoreStatusOutcome> ChangeRuleEventsIgnoreStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ChangeRuleEventsIgnoreStatusRequest&, ChangeRuleEventsIgnoreStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeRuleEventsIgnoreStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckBashRuleParamsResponse> CheckBashRuleParamsOutcome;
                typedef std::future<CheckBashRuleParamsOutcome> CheckBashRuleParamsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CheckBashRuleParamsRequest&, CheckBashRuleParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckBashRuleParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBaselineStrategyResponse> CreateBaselineStrategyOutcome;
                typedef std::future<CreateBaselineStrategyOutcome> CreateBaselineStrategyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateBaselineStrategyRequest&, CreateBaselineStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBaselineStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmergencyVulScanResponse> CreateEmergencyVulScanOutcome;
                typedef std::future<CreateEmergencyVulScanOutcome> CreateEmergencyVulScanOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateEmergencyVulScanRequest&, CreateEmergencyVulScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmergencyVulScanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLicenseOrderResponse> CreateLicenseOrderOutcome;
                typedef std::future<CreateLicenseOrderOutcome> CreateLicenseOrderOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateLicenseOrderRequest&, CreateLicenseOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLicenseOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProtectServerResponse> CreateProtectServerOutcome;
                typedef std::future<CreateProtectServerOutcome> CreateProtectServerOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateProtectServerRequest&, CreateProtectServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProtectServerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScanMalwareSettingResponse> CreateScanMalwareSettingOutcome;
                typedef std::future<CreateScanMalwareSettingOutcome> CreateScanMalwareSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateScanMalwareSettingRequest&, CreateScanMalwareSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScanMalwareSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSearchLogResponse> CreateSearchLogOutcome;
                typedef std::future<CreateSearchLogOutcome> CreateSearchLogOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateSearchLogRequest&, CreateSearchLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSearchLogAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSearchTemplateResponse> CreateSearchTemplateOutcome;
                typedef std::future<CreateSearchTemplateOutcome> CreateSearchTemplateOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateSearchTemplateRequest&, CreateSearchTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSearchTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAttackLogsResponse> DeleteAttackLogsOutcome;
                typedef std::future<DeleteAttackLogsOutcome> DeleteAttackLogsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteAttackLogsRequest&, DeleteAttackLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAttackLogsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteBashRulesResponse> DeleteBashRulesOutcome;
                typedef std::future<DeleteBashRulesOutcome> DeleteBashRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBashRulesRequest&, DeleteBashRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBashRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBruteAttacksResponse> DeleteBruteAttacksOutcome;
                typedef std::future<DeleteBruteAttacksOutcome> DeleteBruteAttacksOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBruteAttacksRequest&, DeleteBruteAttacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBruteAttacksAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLicenseRecordResponse> DeleteLicenseRecordOutcome;
                typedef std::future<DeleteLicenseRecordOutcome> DeleteLicenseRecordOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteLicenseRecordRequest&, DeleteLicenseRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLicenseRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoginWhiteListResponse> DeleteLoginWhiteListOutcome;
                typedef std::future<DeleteLoginWhiteListOutcome> DeleteLoginWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteLoginWhiteListRequest&, DeleteLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoginWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineResponse> DeleteMachineOutcome;
                typedef std::future<DeleteMachineOutcome> DeleteMachineOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMachineRequest&, DeleteMachineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineTagResponse> DeleteMachineTagOutcome;
                typedef std::future<DeleteMachineTagOutcome> DeleteMachineTagOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMachineTagRequest&, DeleteMachineTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMaliciousRequestsResponse> DeleteMaliciousRequestsOutcome;
                typedef std::future<DeleteMaliciousRequestsOutcome> DeleteMaliciousRequestsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMaliciousRequestsRequest&, DeleteMaliciousRequestsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMaliciousRequestsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMalwareScanTaskResponse> DeleteMalwareScanTaskOutcome;
                typedef std::future<DeleteMalwareScanTaskOutcome> DeleteMalwareScanTaskOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMalwareScanTaskRequest&, DeleteMalwareScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMalwareScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMalwaresResponse> DeleteMalwaresOutcome;
                typedef std::future<DeleteMalwaresOutcome> DeleteMalwaresOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMalwaresRequest&, DeleteMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMalwaresAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteReverseShellEventsResponse> DeleteReverseShellEventsOutcome;
                typedef std::future<DeleteReverseShellEventsOutcome> DeleteReverseShellEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteReverseShellEventsRequest&, DeleteReverseShellEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReverseShellEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReverseShellRulesResponse> DeleteReverseShellRulesOutcome;
                typedef std::future<DeleteReverseShellRulesOutcome> DeleteReverseShellRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteReverseShellRulesRequest&, DeleteReverseShellRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReverseShellRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScanTaskResponse> DeleteScanTaskOutcome;
                typedef std::future<DeleteScanTaskOutcome> DeleteScanTaskOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteScanTaskRequest&, DeleteScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSearchTemplateResponse> DeleteSearchTemplateOutcome;
                typedef std::future<DeleteSearchTemplateOutcome> DeleteSearchTemplateOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteSearchTemplateRequest&, DeleteSearchTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSearchTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTagsResponse> DeleteTagsOutcome;
                typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteTagsRequest&, DeleteTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebPageEventLogResponse> DeleteWebPageEventLogOutcome;
                typedef std::future<DeleteWebPageEventLogOutcome> DeleteWebPageEventLogOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteWebPageEventLogRequest&, DeleteWebPageEventLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebPageEventLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountStatisticsResponse> DescribeAccountStatisticsOutcome;
                typedef std::future<DescribeAccountStatisticsOutcome> DescribeAccountStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAccountStatisticsRequest&, DescribeAccountStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountStatisticsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeAssetDatabaseInfoResponse> DescribeAssetDatabaseInfoOutcome;
                typedef std::future<DescribeAssetDatabaseInfoOutcome> DescribeAssetDatabaseInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetDatabaseInfoRequest&, DescribeAssetDatabaseInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDatabaseInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetDatabaseListResponse> DescribeAssetDatabaseListOutcome;
                typedef std::future<DescribeAssetDatabaseListOutcome> DescribeAssetDatabaseListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetDatabaseListRequest&, DescribeAssetDatabaseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDatabaseListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeAssetMachineDetailResponse> DescribeAssetMachineDetailOutcome;
                typedef std::future<DescribeAssetMachineDetailOutcome> DescribeAssetMachineDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetMachineDetailRequest&, DescribeAssetMachineDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetMachineDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetMachineListResponse> DescribeAssetMachineListOutcome;
                typedef std::future<DescribeAssetMachineListOutcome> DescribeAssetMachineListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetMachineListRequest&, DescribeAssetMachineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetMachineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetPlanTaskListResponse> DescribeAssetPlanTaskListOutcome;
                typedef std::future<DescribeAssetPlanTaskListOutcome> DescribeAssetPlanTaskListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetPlanTaskListRequest&, DescribeAssetPlanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetPlanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetPortInfoListResponse> DescribeAssetPortInfoListOutcome;
                typedef std::future<DescribeAssetPortInfoListOutcome> DescribeAssetPortInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetPortInfoListRequest&, DescribeAssetPortInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetPortInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetProcessInfoListResponse> DescribeAssetProcessInfoListOutcome;
                typedef std::future<DescribeAssetProcessInfoListOutcome> DescribeAssetProcessInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetProcessInfoListRequest&, DescribeAssetProcessInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetProcessInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetRecentMachineInfoResponse> DescribeAssetRecentMachineInfoOutcome;
                typedef std::future<DescribeAssetRecentMachineInfoOutcome> DescribeAssetRecentMachineInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetRecentMachineInfoRequest&, DescribeAssetRecentMachineInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetRecentMachineInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetSystemPackageListResponse> DescribeAssetSystemPackageListOutcome;
                typedef std::future<DescribeAssetSystemPackageListOutcome> DescribeAssetSystemPackageListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetSystemPackageListRequest&, DescribeAssetSystemPackageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetSystemPackageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetUserInfoResponse> DescribeAssetUserInfoOutcome;
                typedef std::future<DescribeAssetUserInfoOutcome> DescribeAssetUserInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetUserInfoRequest&, DescribeAssetUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetUserListResponse> DescribeAssetUserListOutcome;
                typedef std::future<DescribeAssetUserListOutcome> DescribeAssetUserListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetUserListRequest&, DescribeAssetUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebAppListResponse> DescribeAssetWebAppListOutcome;
                typedef std::future<DescribeAssetWebAppListOutcome> DescribeAssetWebAppListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebAppListRequest&, DescribeAssetWebAppListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebAppListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebAppPluginListResponse> DescribeAssetWebAppPluginListOutcome;
                typedef std::future<DescribeAssetWebAppPluginListOutcome> DescribeAssetWebAppPluginListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebAppPluginListRequest&, DescribeAssetWebAppPluginListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebAppPluginListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebFrameListResponse> DescribeAssetWebFrameListOutcome;
                typedef std::future<DescribeAssetWebFrameListOutcome> DescribeAssetWebFrameListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebFrameListRequest&, DescribeAssetWebFrameListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebFrameListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebLocationInfoResponse> DescribeAssetWebLocationInfoOutcome;
                typedef std::future<DescribeAssetWebLocationInfoOutcome> DescribeAssetWebLocationInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebLocationInfoRequest&, DescribeAssetWebLocationInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebLocationInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebLocationListResponse> DescribeAssetWebLocationListOutcome;
                typedef std::future<DescribeAssetWebLocationListOutcome> DescribeAssetWebLocationListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebLocationListRequest&, DescribeAssetWebLocationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebLocationListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebServiceInfoListResponse> DescribeAssetWebServiceInfoListOutcome;
                typedef std::future<DescribeAssetWebServiceInfoListOutcome> DescribeAssetWebServiceInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebServiceInfoListRequest&, DescribeAssetWebServiceInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebServiceInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebServiceProcessListResponse> DescribeAssetWebServiceProcessListOutcome;
                typedef std::future<DescribeAssetWebServiceProcessListOutcome> DescribeAssetWebServiceProcessListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebServiceProcessListRequest&, DescribeAssetWebServiceProcessListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebServiceProcessListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackLogInfoResponse> DescribeAttackLogInfoOutcome;
                typedef std::future<DescribeAttackLogInfoOutcome> DescribeAttackLogInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackLogInfoRequest&, DescribeAttackLogInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackLogInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackLogsResponse> DescribeAttackLogsOutcome;
                typedef std::future<DescribeAttackLogsOutcome> DescribeAttackLogsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackLogsRequest&, DescribeAttackLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackLogsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeBashEventsNewResponse> DescribeBashEventsNewOutcome;
                typedef std::future<DescribeBashEventsNewOutcome> DescribeBashEventsNewOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBashEventsNewRequest&, DescribeBashEventsNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashEventsNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBashRulesResponse> DescribeBashRulesOutcome;
                typedef std::future<DescribeBashRulesOutcome> DescribeBashRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBashRulesRequest&, DescribeBashRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBruteAttackListResponse> DescribeBruteAttackListOutcome;
                typedef std::future<DescribeBruteAttackListOutcome> DescribeBruteAttackListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBruteAttackListRequest&, DescribeBruteAttackListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBruteAttackListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBruteAttackRulesResponse> DescribeBruteAttackRulesOutcome;
                typedef std::future<DescribeBruteAttackRulesOutcome> DescribeBruteAttackRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBruteAttackRulesRequest&, DescribeBruteAttackRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBruteAttackRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClientExceptionResponse> DescribeClientExceptionOutcome;
                typedef std::future<DescribeClientExceptionOutcome> DescribeClientExceptionOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeClientExceptionRequest&, DescribeClientExceptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientExceptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComponentStatisticsResponse> DescribeComponentStatisticsOutcome;
                typedef std::future<DescribeComponentStatisticsOutcome> DescribeComponentStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeComponentStatisticsRequest&, DescribeComponentStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeESAggregationsResponse> DescribeESAggregationsOutcome;
                typedef std::future<DescribeESAggregationsOutcome> DescribeESAggregationsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeESAggregationsRequest&, DescribeESAggregationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeESAggregationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEmergencyResponseListResponse> DescribeEmergencyResponseListOutcome;
                typedef std::future<DescribeEmergencyResponseListOutcome> DescribeEmergencyResponseListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeEmergencyResponseListRequest&, DescribeEmergencyResponseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmergencyResponseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEmergencyVulListResponse> DescribeEmergencyVulListOutcome;
                typedef std::future<DescribeEmergencyVulListOutcome> DescribeEmergencyVulListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeEmergencyVulListRequest&, DescribeEmergencyVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmergencyVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExpertServiceListResponse> DescribeExpertServiceListOutcome;
                typedef std::future<DescribeExpertServiceListOutcome> DescribeExpertServiceListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeExpertServiceListRequest&, DescribeExpertServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpertServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExpertServiceOrderListResponse> DescribeExpertServiceOrderListOutcome;
                typedef std::future<DescribeExpertServiceOrderListOutcome> DescribeExpertServiceOrderListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeExpertServiceOrderListRequest&, DescribeExpertServiceOrderListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpertServiceOrderListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportMachinesResponse> DescribeExportMachinesOutcome;
                typedef std::future<DescribeExportMachinesOutcome> DescribeExportMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeExportMachinesRequest&, DescribeExportMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGeneralStatResponse> DescribeGeneralStatOutcome;
                typedef std::future<DescribeGeneralStatOutcome> DescribeGeneralStatOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeGeneralStatRequest&, DescribeGeneralStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeneralStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHistoryAccountsResponse> DescribeHistoryAccountsOutcome;
                typedef std::future<DescribeHistoryAccountsOutcome> DescribeHistoryAccountsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeHistoryAccountsRequest&, DescribeHistoryAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHistoryServiceResponse> DescribeHistoryServiceOutcome;
                typedef std::future<DescribeHistoryServiceOutcome> DescribeHistoryServiceOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeHistoryServiceRequest&, DescribeHistoryServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostLoginListResponse> DescribeHostLoginListOutcome;
                typedef std::future<DescribeHostLoginListOutcome> DescribeHostLoginListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeHostLoginListRequest&, DescribeHostLoginListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostLoginListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeIndexListResponse> DescribeIndexListOutcome;
                typedef std::future<DescribeIndexListOutcome> DescribeIndexListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeIndexListRequest&, DescribeIndexListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIndexListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJavaMemShellListResponse> DescribeJavaMemShellListOutcome;
                typedef std::future<DescribeJavaMemShellListOutcome> DescribeJavaMemShellListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeJavaMemShellListRequest&, DescribeJavaMemShellListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJavaMemShellListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeLogStorageStatisticResponse> DescribeLogStorageStatisticOutcome;
                typedef std::future<DescribeLogStorageStatisticOutcome> DescribeLogStorageStatisticOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogStorageStatisticRequest&, DescribeLogStorageStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogStorageStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginWhiteCombinedListResponse> DescribeLoginWhiteCombinedListOutcome;
                typedef std::future<DescribeLoginWhiteCombinedListOutcome> DescribeLoginWhiteCombinedListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLoginWhiteCombinedListRequest&, DescribeLoginWhiteCombinedListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginWhiteCombinedListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginWhiteListResponse> DescribeLoginWhiteListOutcome;
                typedef std::future<DescribeLoginWhiteListOutcome> DescribeLoginWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLoginWhiteListRequest&, DescribeLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineInfoResponse> DescribeMachineInfoOutcome;
                typedef std::future<DescribeMachineInfoOutcome> DescribeMachineInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineInfoRequest&, DescribeMachineInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineListResponse> DescribeMachineListOutcome;
                typedef std::future<DescribeMachineListOutcome> DescribeMachineListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineListRequest&, DescribeMachineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineOsListResponse> DescribeMachineOsListOutcome;
                typedef std::future<DescribeMachineOsListOutcome> DescribeMachineOsListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineOsListRequest&, DescribeMachineOsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineOsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineRegionsResponse> DescribeMachineRegionsOutcome;
                typedef std::future<DescribeMachineRegionsOutcome> DescribeMachineRegionsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineRegionsRequest&, DescribeMachineRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachinesResponse> DescribeMachinesOutcome;
                typedef std::future<DescribeMachinesOutcome> DescribeMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachinesRequest&, DescribeMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachinesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeMalwareRiskWarningResponse> DescribeMalwareRiskWarningOutcome;
                typedef std::future<DescribeMalwareRiskWarningOutcome> DescribeMalwareRiskWarningOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareRiskWarningRequest&, DescribeMalwareRiskWarningOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareRiskWarningAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareTimingScanSettingResponse> DescribeMalwareTimingScanSettingOutcome;
                typedef std::future<DescribeMalwareTimingScanSettingOutcome> DescribeMalwareTimingScanSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareTimingScanSettingRequest&, DescribeMalwareTimingScanSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareTimingScanSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMonthInspectionReportResponse> DescribeMonthInspectionReportOutcome;
                typedef std::future<DescribeMonthInspectionReportOutcome> DescribeMonthInspectionReportOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMonthInspectionReportRequest&, DescribeMonthInspectionReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonthInspectionReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOpenPortStatisticsResponse> DescribeOpenPortStatisticsOutcome;
                typedef std::future<DescribeOpenPortStatisticsOutcome> DescribeOpenPortStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeOpenPortStatisticsRequest&, DescribeOpenPortStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpenPortStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewStatisticsResponse> DescribeOverviewStatisticsOutcome;
                typedef std::future<DescribeOverviewStatisticsOutcome> DescribeOverviewStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeOverviewStatisticsRequest&, DescribeOverviewStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewStatisticsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeProtectDirListResponse> DescribeProtectDirListOutcome;
                typedef std::future<DescribeProtectDirListOutcome> DescribeProtectDirListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeProtectDirListRequest&, DescribeProtectDirListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectDirListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProtectDirRelatedServerResponse> DescribeProtectDirRelatedServerOutcome;
                typedef std::future<DescribeProtectDirRelatedServerOutcome> DescribeProtectDirRelatedServerOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeProtectDirRelatedServerRequest&, DescribeProtectDirRelatedServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectDirRelatedServerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProtectNetListResponse> DescribeProtectNetListOutcome;
                typedef std::future<DescribeProtectNetListOutcome> DescribeProtectNetListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeProtectNetListRequest&, DescribeProtectNetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectNetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellEventsResponse> DescribeReverseShellEventsOutcome;
                typedef std::future<DescribeReverseShellEventsOutcome> DescribeReverseShellEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeReverseShellEventsRequest&, DescribeReverseShellEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellRulesResponse> DescribeReverseShellRulesOutcome;
                typedef std::future<DescribeReverseShellRulesOutcome> DescribeReverseShellRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeReverseShellRulesRequest&, DescribeReverseShellRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskDnsListResponse> DescribeRiskDnsListOutcome;
                typedef std::future<DescribeRiskDnsListOutcome> DescribeRiskDnsListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRiskDnsListRequest&, DescribeRiskDnsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDnsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSaveOrUpdateWarningsResponse> DescribeSaveOrUpdateWarningsOutcome;
                typedef std::future<DescribeSaveOrUpdateWarningsOutcome> DescribeSaveOrUpdateWarningsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSaveOrUpdateWarningsRequest&, DescribeSaveOrUpdateWarningsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSaveOrUpdateWarningsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeSearchExportListResponse> DescribeSearchExportListOutcome;
                typedef std::future<DescribeSearchExportListOutcome> DescribeSearchExportListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSearchExportListRequest&, DescribeSearchExportListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchExportListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchLogsResponse> DescribeSearchLogsOutcome;
                typedef std::future<DescribeSearchLogsOutcome> DescribeSearchLogsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSearchLogsRequest&, DescribeSearchLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchTemplatesResponse> DescribeSearchTemplatesOutcome;
                typedef std::future<DescribeSearchTemplatesOutcome> DescribeSearchTemplatesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSearchTemplatesRequest&, DescribeSearchTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchTemplatesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeUndoVulCountsResponse> DescribeUndoVulCountsOutcome;
                typedef std::future<DescribeUndoVulCountsOutcome> DescribeUndoVulCountsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeUndoVulCountsRequest&, DescribeUndoVulCountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUndoVulCountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsualLoginPlacesResponse> DescribeUsualLoginPlacesOutcome;
                typedef std::future<DescribeUsualLoginPlacesOutcome> DescribeUsualLoginPlacesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeUsualLoginPlacesRequest&, DescribeUsualLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsualLoginPlacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVersionStatisticsResponse> DescribeVersionStatisticsOutcome;
                typedef std::future<DescribeVersionStatisticsOutcome> DescribeVersionStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVersionStatisticsRequest&, DescribeVersionStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVersionStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulCountByDatesResponse> DescribeVulCountByDatesOutcome;
                typedef std::future<DescribeVulCountByDatesOutcome> DescribeVulCountByDatesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulCountByDatesRequest&, DescribeVulCountByDatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulCountByDatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulEffectHostListResponse> DescribeVulEffectHostListOutcome;
                typedef std::future<DescribeVulEffectHostListOutcome> DescribeVulEffectHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulEffectHostListRequest&, DescribeVulEffectHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulEffectHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulHostCountScanTimeResponse> DescribeVulHostCountScanTimeOutcome;
                typedef std::future<DescribeVulHostCountScanTimeOutcome> DescribeVulHostCountScanTimeOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulHostCountScanTimeRequest&, DescribeVulHostCountScanTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulHostCountScanTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulHostTopResponse> DescribeVulHostTopOutcome;
                typedef std::future<DescribeVulHostTopOutcome> DescribeVulHostTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulHostTopRequest&, DescribeVulHostTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulHostTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulInfoCvssResponse> DescribeVulInfoCvssOutcome;
                typedef std::future<DescribeVulInfoCvssOutcome> DescribeVulInfoCvssOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulInfoCvssRequest&, DescribeVulInfoCvssOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulInfoCvssAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulLevelCountResponse> DescribeVulLevelCountOutcome;
                typedef std::future<DescribeVulLevelCountOutcome> DescribeVulLevelCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulLevelCountRequest&, DescribeVulLevelCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulLevelCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulListResponse> DescribeVulListOutcome;
                typedef std::future<DescribeVulListOutcome> DescribeVulListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulListRequest&, DescribeVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulTopResponse> DescribeVulTopOutcome;
                typedef std::future<DescribeVulTopOutcome> DescribeVulTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulTopRequest&, DescribeVulTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWarningListResponse> DescribeWarningListOutcome;
                typedef std::future<DescribeWarningListOutcome> DescribeWarningListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWarningListRequest&, DescribeWarningListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::EditTagsResponse> EditTagsOutcome;
                typedef std::future<EditTagsOutcome> EditTagsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::EditTagsRequest&, EditTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetCoreModuleListResponse> ExportAssetCoreModuleListOutcome;
                typedef std::future<ExportAssetCoreModuleListOutcome> ExportAssetCoreModuleListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetCoreModuleListRequest&, ExportAssetCoreModuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetCoreModuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetWebServiceInfoListResponse> ExportAssetWebServiceInfoListOutcome;
                typedef std::future<ExportAssetWebServiceInfoListOutcome> ExportAssetWebServiceInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetWebServiceInfoListRequest&, ExportAssetWebServiceInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetWebServiceInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAttackLogsResponse> ExportAttackLogsOutcome;
                typedef std::future<ExportAttackLogsOutcome> ExportAttackLogsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAttackLogsRequest&, ExportAttackLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAttackLogsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ExportBruteAttacksResponse> ExportBruteAttacksOutcome;
                typedef std::future<ExportBruteAttacksOutcome> ExportBruteAttacksOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBruteAttacksRequest&, ExportBruteAttacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBruteAttacksAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportIgnoreBaselineRuleResponse> ExportIgnoreBaselineRuleOutcome;
                typedef std::future<ExportIgnoreBaselineRuleOutcome> ExportIgnoreBaselineRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportIgnoreBaselineRuleRequest&, ExportIgnoreBaselineRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportIgnoreBaselineRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportIgnoreRuleEffectHostListResponse> ExportIgnoreRuleEffectHostListOutcome;
                typedef std::future<ExportIgnoreRuleEffectHostListOutcome> ExportIgnoreRuleEffectHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportIgnoreRuleEffectHostListRequest&, ExportIgnoreRuleEffectHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportIgnoreRuleEffectHostListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ExportReverseShellEventsResponse> ExportReverseShellEventsOutcome;
                typedef std::future<ExportReverseShellEventsOutcome> ExportReverseShellEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportReverseShellEventsRequest&, ExportReverseShellEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportReverseShellEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportScanTaskDetailsResponse> ExportScanTaskDetailsOutcome;
                typedef std::future<ExportScanTaskDetailsOutcome> ExportScanTaskDetailsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportScanTaskDetailsRequest&, ExportScanTaskDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportScanTaskDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportSecurityTrendsResponse> ExportSecurityTrendsOutcome;
                typedef std::future<ExportSecurityTrendsOutcome> ExportSecurityTrendsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportSecurityTrendsRequest&, ExportSecurityTrendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportSecurityTrendsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportTasksResponse> ExportTasksOutcome;
                typedef std::future<ExportTasksOutcome> ExportTasksOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportTasksRequest&, ExportTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulDetectionExcelResponse> ExportVulDetectionExcelOutcome;
                typedef std::future<ExportVulDetectionExcelOutcome> ExportVulDetectionExcelOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulDetectionExcelRequest&, ExportVulDetectionExcelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulDetectionExcelAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulDetectionReportResponse> ExportVulDetectionReportOutcome;
                typedef std::future<ExportVulDetectionReportOutcome> ExportVulDetectionReportOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulDetectionReportRequest&, ExportVulDetectionReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulDetectionReportAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulEffectHostListResponse> ExportVulEffectHostListOutcome;
                typedef std::future<ExportVulEffectHostListOutcome> ExportVulEffectHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulEffectHostListRequest&, ExportVulEffectHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulEffectHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulListResponse> ExportVulListOutcome;
                typedef std::future<ExportVulListOutcome> ExportVulListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulListRequest&, ExportVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportWebPageEventListResponse> ExportWebPageEventListOutcome;
                typedef std::future<ExportWebPageEventListOutcome> ExportWebPageEventListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportWebPageEventListRequest&, ExportWebPageEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportWebPageEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::FixBaselineDetectResponse> FixBaselineDetectOutcome;
                typedef std::future<FixBaselineDetectOutcome> FixBaselineDetectOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::FixBaselineDetectRequest&, FixBaselineDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FixBaselineDetectAsyncHandler;
                typedef Outcome<Core::Error, Model::IgnoreImpactedHostsResponse> IgnoreImpactedHostsOutcome;
                typedef std::future<IgnoreImpactedHostsOutcome> IgnoreImpactedHostsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::IgnoreImpactedHostsRequest&, IgnoreImpactedHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IgnoreImpactedHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoOpenProVersionConfigResponse> ModifyAutoOpenProVersionConfigOutcome;
                typedef std::future<ModifyAutoOpenProVersionConfigOutcome> ModifyAutoOpenProVersionConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyAutoOpenProVersionConfigRequest&, ModifyAutoOpenProVersionConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoOpenProVersionConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBanModeResponse> ModifyBanModeOutcome;
                typedef std::future<ModifyBanModeOutcome> ModifyBanModeOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBanModeRequest&, ModifyBanModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBanModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBanStatusResponse> ModifyBanStatusOutcome;
                typedef std::future<ModifyBanStatusOutcome> ModifyBanStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBanStatusRequest&, ModifyBanStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBanStatusAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyBruteAttackRulesResponse> ModifyBruteAttackRulesOutcome;
                typedef std::future<ModifyBruteAttackRulesOutcome> ModifyBruteAttackRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBruteAttackRulesRequest&, ModifyBruteAttackRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBruteAttackRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLicenseBindsResponse> ModifyLicenseBindsOutcome;
                typedef std::future<ModifyLicenseBindsOutcome> ModifyLicenseBindsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLicenseBindsRequest&, ModifyLicenseBindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLicenseBindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLicenseUnBindsResponse> ModifyLicenseUnBindsOutcome;
                typedef std::future<ModifyLicenseUnBindsOutcome> ModifyLicenseUnBindsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLicenseUnBindsRequest&, ModifyLicenseUnBindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLicenseUnBindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMachineRemarkResponse> ModifyMachineRemarkOutcome;
                typedef std::future<ModifyMachineRemarkOutcome> ModifyMachineRemarkOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyMachineRemarkRequest&, ModifyMachineRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachineRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMalwareTimingScanSettingsResponse> ModifyMalwareTimingScanSettingsOutcome;
                typedef std::future<ModifyMalwareTimingScanSettingsOutcome> ModifyMalwareTimingScanSettingsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyMalwareTimingScanSettingsRequest&, ModifyMalwareTimingScanSettingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMalwareTimingScanSettingsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOrderAttributeResponse> ModifyOrderAttributeOutcome;
                typedef std::future<ModifyOrderAttributeOutcome> ModifyOrderAttributeOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyOrderAttributeRequest&, ModifyOrderAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOrderAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWarningSettingResponse> ModifyWarningSettingOutcome;
                typedef std::future<ModifyWarningSettingOutcome> ModifyWarningSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWarningSettingRequest&, ModifyWarningSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWarningSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebPageProtectDirResponse> ModifyWebPageProtectDirOutcome;
                typedef std::future<ModifyWebPageProtectDirOutcome> ModifyWebPageProtectDirOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebPageProtectDirRequest&, ModifyWebPageProtectDirOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebPageProtectDirAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebPageProtectSettingResponse> ModifyWebPageProtectSettingOutcome;
                typedef std::future<ModifyWebPageProtectSettingOutcome> ModifyWebPageProtectSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebPageProtectSettingRequest&, ModifyWebPageProtectSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebPageProtectSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebPageProtectSwitchResponse> ModifyWebPageProtectSwitchOutcome;
                typedef std::future<ModifyWebPageProtectSwitchOutcome> ModifyWebPageProtectSwitchOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebPageProtectSwitchRequest&, ModifyWebPageProtectSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebPageProtectSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverMalwaresResponse> RecoverMalwaresOutcome;
                typedef std::future<RecoverMalwaresOutcome> RecoverMalwaresOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::RecoverMalwaresRequest&, RecoverMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanAssetResponse> ScanAssetOutcome;
                typedef std::future<ScanAssetOutcome> ScanAssetOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ScanAssetRequest&, ScanAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanVulResponse> ScanVulOutcome;
                typedef std::future<ScanVulOutcome> ScanVulOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ScanVulRequest&, ScanVulOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanVulAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanVulAgainResponse> ScanVulAgainOutcome;
                typedef std::future<ScanVulAgainOutcome> ScanVulAgainOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ScanVulAgainRequest&, ScanVulAgainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanVulAgainAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanVulSettingResponse> ScanVulSettingOutcome;
                typedef std::future<ScanVulSettingOutcome> ScanVulSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ScanVulSettingRequest&, ScanVulSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanVulSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::SeparateMalwaresResponse> SeparateMalwaresOutcome;
                typedef std::future<SeparateMalwaresOutcome> SeparateMalwaresOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SeparateMalwaresRequest&, SeparateMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SeparateMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::SetBashEventsStatusResponse> SetBashEventsStatusOutcome;
                typedef std::future<SetBashEventsStatusOutcome> SetBashEventsStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SetBashEventsStatusRequest&, SetBashEventsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetBashEventsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::StartBaselineDetectResponse> StartBaselineDetectOutcome;
                typedef std::future<StartBaselineDetectOutcome> StartBaselineDetectOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::StartBaselineDetectRequest&, StartBaselineDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartBaselineDetectAsyncHandler;
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
                 *取消漏洞忽略
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
                 *校验高危命令用户规则新增和编辑时的参数。
                 * @param req CheckBashRuleParamsRequest
                 * @return CheckBashRuleParamsOutcome
                 */
                CheckBashRuleParamsOutcome CheckBashRuleParams(const Model::CheckBashRuleParamsRequest &request);
                void CheckBashRuleParamsAsync(const Model::CheckBashRuleParamsRequest& request, const CheckBashRuleParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckBashRuleParamsOutcomeCallable CheckBashRuleParamsCallable(const Model::CheckBashRuleParamsRequest& request);

                /**
                 *根据策略信息创建基线策略
                 * @param req CreateBaselineStrategyRequest
                 * @return CreateBaselineStrategyOutcome
                 */
                CreateBaselineStrategyOutcome CreateBaselineStrategy(const Model::CreateBaselineStrategyRequest &request);
                void CreateBaselineStrategyAsync(const Model::CreateBaselineStrategyRequest& request, const CreateBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBaselineStrategyOutcomeCallable CreateBaselineStrategyCallable(const Model::CreateBaselineStrategyRequest& request);

                /**
                 *创建应急漏洞扫描任务
                 * @param req CreateEmergencyVulScanRequest
                 * @return CreateEmergencyVulScanOutcome
                 */
                CreateEmergencyVulScanOutcome CreateEmergencyVulScan(const Model::CreateEmergencyVulScanRequest &request);
                void CreateEmergencyVulScanAsync(const Model::CreateEmergencyVulScanRequest& request, const CreateEmergencyVulScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmergencyVulScanOutcomeCallable CreateEmergencyVulScanCallable(const Model::CreateEmergencyVulScanRequest& request);

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
                 *添加网站防护服务器
                 * @param req CreateProtectServerRequest
                 * @return CreateProtectServerOutcome
                 */
                CreateProtectServerOutcome CreateProtectServer(const Model::CreateProtectServerRequest &request);
                void CreateProtectServerAsync(const Model::CreateProtectServerRequest& request, const CreateProtectServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProtectServerOutcomeCallable CreateProtectServerCallable(const Model::CreateProtectServerRequest& request);

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
                 *删除网络攻击日志
                 * @param req DeleteAttackLogsRequest
                 * @return DeleteAttackLogsOutcome
                 */
                DeleteAttackLogsOutcome DeleteAttackLogs(const Model::DeleteAttackLogsRequest &request);
                void DeleteAttackLogsAsync(const Model::DeleteAttackLogsRequest& request, const DeleteAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAttackLogsOutcomeCallable DeleteAttackLogsCallable(const Model::DeleteAttackLogsRequest& request);

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
                 *本接口用于删除异地登录白名单规则。
                 * @param req DeleteLoginWhiteListRequest
                 * @return DeleteLoginWhiteListOutcome
                 */
                DeleteLoginWhiteListOutcome DeleteLoginWhiteList(const Model::DeleteLoginWhiteListRequest &request);
                void DeleteLoginWhiteListAsync(const Model::DeleteLoginWhiteListRequest& request, const DeleteLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoginWhiteListOutcomeCallable DeleteLoginWhiteListCallable(const Model::DeleteLoginWhiteListRequest& request);

                /**
                 *本接口（DeleteMachine）用于卸载云镜客户端。
                 * @param req DeleteMachineRequest
                 * @return DeleteMachineOutcome
                 */
                DeleteMachineOutcome DeleteMachine(const Model::DeleteMachineRequest &request);
                void DeleteMachineAsync(const Model::DeleteMachineRequest& request, const DeleteMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineOutcomeCallable DeleteMachineCallable(const Model::DeleteMachineRequest& request);

                /**
                 *删除服务器关联的标签
                 * @param req DeleteMachineTagRequest
                 * @return DeleteMachineTagOutcome
                 */
                DeleteMachineTagOutcome DeleteMachineTag(const Model::DeleteMachineTagRequest &request);
                void DeleteMachineTagAsync(const Model::DeleteMachineTagRequest& request, const DeleteMachineTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineTagOutcomeCallable DeleteMachineTagCallable(const Model::DeleteMachineTagRequest& request);

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
                 *本接口 (DeleteMalwares) 用于删除木马记录。
                 * @param req DeleteMalwaresRequest
                 * @return DeleteMalwaresOutcome
                 */
                DeleteMalwaresOutcome DeleteMalwares(const Model::DeleteMalwaresRequest &request);
                void DeleteMalwaresAsync(const Model::DeleteMalwaresRequest& request, const DeleteMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMalwaresOutcomeCallable DeleteMalwaresCallable(const Model::DeleteMalwaresRequest& request);

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
                 *网站防篡改-删除事件记录
                 * @param req DeleteWebPageEventLogRequest
                 * @return DeleteWebPageEventLogOutcome
                 */
                DeleteWebPageEventLogOutcome DeleteWebPageEventLog(const Model::DeleteWebPageEventLogRequest &request);
                void DeleteWebPageEventLogAsync(const Model::DeleteWebPageEventLogRequest& request, const DeleteWebPageEventLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebPageEventLogOutcomeCallable DeleteWebPageEventLogCallable(const Model::DeleteWebPageEventLogRequest& request);

                /**
                 *本接口 (DescribeAccountStatistics) 用于获取帐号统计列表数据。
                 * @param req DescribeAccountStatisticsRequest
                 * @return DescribeAccountStatisticsOutcome
                 */
                DescribeAccountStatisticsOutcome DescribeAccountStatistics(const Model::DescribeAccountStatisticsRequest &request);
                void DescribeAccountStatisticsAsync(const Model::DescribeAccountStatisticsRequest& request, const DescribeAccountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountStatisticsOutcomeCallable DescribeAccountStatisticsCallable(const Model::DescribeAccountStatisticsRequest& request);

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
                 *查询资产管理计划任务列表
                 * @param req DescribeAssetPlanTaskListRequest
                 * @return DescribeAssetPlanTaskListOutcome
                 */
                DescribeAssetPlanTaskListOutcome DescribeAssetPlanTaskList(const Model::DescribeAssetPlanTaskListRequest &request);
                void DescribeAssetPlanTaskListAsync(const Model::DescribeAssetPlanTaskListRequest& request, const DescribeAssetPlanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetPlanTaskListOutcomeCallable DescribeAssetPlanTaskListCallable(const Model::DescribeAssetPlanTaskListRequest& request);

                /**
                 *获取资产管理端口列表
                 * @param req DescribeAssetPortInfoListRequest
                 * @return DescribeAssetPortInfoListOutcome
                 */
                DescribeAssetPortInfoListOutcome DescribeAssetPortInfoList(const Model::DescribeAssetPortInfoListRequest &request);
                void DescribeAssetPortInfoListAsync(const Model::DescribeAssetPortInfoListRequest& request, const DescribeAssetPortInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetPortInfoListOutcomeCallable DescribeAssetPortInfoListCallable(const Model::DescribeAssetPortInfoListRequest& request);

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
                 *获取主机账号详情
                 * @param req DescribeAssetUserInfoRequest
                 * @return DescribeAssetUserInfoOutcome
                 */
                DescribeAssetUserInfoOutcome DescribeAssetUserInfo(const Model::DescribeAssetUserInfoRequest &request);
                void DescribeAssetUserInfoAsync(const Model::DescribeAssetUserInfoRequest& request, const DescribeAssetUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetUserInfoOutcomeCallable DescribeAssetUserInfoCallable(const Model::DescribeAssetUserInfoRequest& request);

                /**
                 *获取账号列表
                 * @param req DescribeAssetUserListRequest
                 * @return DescribeAssetUserListOutcome
                 */
                DescribeAssetUserListOutcome DescribeAssetUserList(const Model::DescribeAssetUserListRequest &request);
                void DescribeAssetUserListAsync(const Model::DescribeAssetUserListRequest& request, const DescribeAssetUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetUserListOutcomeCallable DescribeAssetUserListCallable(const Model::DescribeAssetUserListRequest& request);

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
                 *获取资产管理Web框架列表
                 * @param req DescribeAssetWebFrameListRequest
                 * @return DescribeAssetWebFrameListOutcome
                 */
                DescribeAssetWebFrameListOutcome DescribeAssetWebFrameList(const Model::DescribeAssetWebFrameListRequest &request);
                void DescribeAssetWebFrameListAsync(const Model::DescribeAssetWebFrameListRequest& request, const DescribeAssetWebFrameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebFrameListOutcomeCallable DescribeAssetWebFrameListCallable(const Model::DescribeAssetWebFrameListRequest& request);

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
                 *网络攻击日志详情
                 * @param req DescribeAttackLogInfoRequest
                 * @return DescribeAttackLogInfoOutcome
                 */
                DescribeAttackLogInfoOutcome DescribeAttackLogInfo(const Model::DescribeAttackLogInfoRequest &request);
                void DescribeAttackLogInfoAsync(const Model::DescribeAttackLogInfoRequest& request, const DescribeAttackLogInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackLogInfoOutcomeCallable DescribeAttackLogInfoCallable(const Model::DescribeAttackLogInfoRequest& request);

                /**
                 *按分页形式展示网络攻击日志列表
                 * @param req DescribeAttackLogsRequest
                 * @return DescribeAttackLogsOutcome
                 */
                DescribeAttackLogsOutcome DescribeAttackLogs(const Model::DescribeAttackLogsRequest &request);
                void DescribeAttackLogsAsync(const Model::DescribeAttackLogsRequest& request, const DescribeAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackLogsOutcomeCallable DescribeAttackLogsCallable(const Model::DescribeAttackLogsRequest& request);

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
                 *获取高危命令列表(新)
                 * @param req DescribeBashEventsNewRequest
                 * @return DescribeBashEventsNewOutcome
                 */
                DescribeBashEventsNewOutcome DescribeBashEventsNew(const Model::DescribeBashEventsNewRequest &request);
                void DescribeBashEventsNewAsync(const Model::DescribeBashEventsNewRequest& request, const DescribeBashEventsNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBashEventsNewOutcomeCallable DescribeBashEventsNewCallable(const Model::DescribeBashEventsNewRequest& request);

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
                 *获取客户端异常事件
                 * @param req DescribeClientExceptionRequest
                 * @return DescribeClientExceptionOutcome
                 */
                DescribeClientExceptionOutcome DescribeClientException(const Model::DescribeClientExceptionRequest &request);
                void DescribeClientExceptionAsync(const Model::DescribeClientExceptionRequest& request, const DescribeClientExceptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientExceptionOutcomeCallable DescribeClientExceptionCallable(const Model::DescribeClientExceptionRequest& request);

                /**
                 *本接口 (DescribeComponentStatistics) 用于获取组件统计列表数据。
                 * @param req DescribeComponentStatisticsRequest
                 * @return DescribeComponentStatisticsOutcome
                 */
                DescribeComponentStatisticsOutcome DescribeComponentStatistics(const Model::DescribeComponentStatisticsRequest &request);
                void DescribeComponentStatisticsAsync(const Model::DescribeComponentStatisticsRequest& request, const DescribeComponentStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComponentStatisticsOutcomeCallable DescribeComponentStatisticsCallable(const Model::DescribeComponentStatisticsRequest& request);

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
                 *获取登录审计列表
                 * @param req DescribeHostLoginListRequest
                 * @return DescribeHostLoginListOutcome
                 */
                DescribeHostLoginListOutcome DescribeHostLoginList(const Model::DescribeHostLoginListRequest &request);
                void DescribeHostLoginListAsync(const Model::DescribeHostLoginListRequest& request, const DescribeHostLoginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostLoginListOutcomeCallable DescribeHostLoginListCallable(const Model::DescribeHostLoginListRequest& request);

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
                 *获取索引列表
                 * @param req DescribeIndexListRequest
                 * @return DescribeIndexListOutcome
                 */
                DescribeIndexListOutcome DescribeIndexList(const Model::DescribeIndexListRequest &request);
                void DescribeIndexListAsync(const Model::DescribeIndexListRequest& request, const DescribeIndexListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIndexListOutcomeCallable DescribeIndexListCallable(const Model::DescribeIndexListRequest& request);

                /**
                 *查询java内存马事件列表
                 * @param req DescribeJavaMemShellListRequest
                 * @return DescribeJavaMemShellListOutcome
                 */
                DescribeJavaMemShellListOutcome DescribeJavaMemShellList(const Model::DescribeJavaMemShellListRequest &request);
                void DescribeJavaMemShellListAsync(const Model::DescribeJavaMemShellListRequest& request, const DescribeJavaMemShellListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJavaMemShellListOutcomeCallable DescribeJavaMemShellListCallable(const Model::DescribeJavaMemShellListRequest& request);

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
                 *获取日志检索容量使用统计
                 * @param req DescribeLogStorageStatisticRequest
                 * @return DescribeLogStorageStatisticOutcome
                 */
                DescribeLogStorageStatisticOutcome DescribeLogStorageStatistic(const Model::DescribeLogStorageStatisticRequest &request);
                void DescribeLogStorageStatisticAsync(const Model::DescribeLogStorageStatisticRequest& request, const DescribeLogStorageStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogStorageStatisticOutcomeCallable DescribeLogStorageStatisticCallable(const Model::DescribeLogStorageStatisticRequest& request);

                /**
                 *获取异地登录白名单合并后列表
                 * @param req DescribeLoginWhiteCombinedListRequest
                 * @return DescribeLoginWhiteCombinedListOutcome
                 */
                DescribeLoginWhiteCombinedListOutcome DescribeLoginWhiteCombinedList(const Model::DescribeLoginWhiteCombinedListRequest &request);
                void DescribeLoginWhiteCombinedListAsync(const Model::DescribeLoginWhiteCombinedListRequest& request, const DescribeLoginWhiteCombinedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginWhiteCombinedListOutcomeCallable DescribeLoginWhiteCombinedListCallable(const Model::DescribeLoginWhiteCombinedListRequest& request);

                /**
                 *获取异地登录白名单列表
                 * @param req DescribeLoginWhiteListRequest
                 * @return DescribeLoginWhiteListOutcome
                 */
                DescribeLoginWhiteListOutcome DescribeLoginWhiteList(const Model::DescribeLoginWhiteListRequest &request);
                void DescribeLoginWhiteListAsync(const Model::DescribeLoginWhiteListRequest& request, const DescribeLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginWhiteListOutcomeCallable DescribeLoginWhiteListCallable(const Model::DescribeLoginWhiteListRequest& request);

                /**
                 *本接口（DescribeMachineInfo）用于获取机器详细信息。
                 * @param req DescribeMachineInfoRequest
                 * @return DescribeMachineInfoOutcome
                 */
                DescribeMachineInfoOutcome DescribeMachineInfo(const Model::DescribeMachineInfoRequest &request);
                void DescribeMachineInfoAsync(const Model::DescribeMachineInfoRequest& request, const DescribeMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineInfoOutcomeCallable DescribeMachineInfoCallable(const Model::DescribeMachineInfoRequest& request);

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
                 *获取机器地域列表
                 * @param req DescribeMachineRegionsRequest
                 * @return DescribeMachineRegionsOutcome
                 */
                DescribeMachineRegionsOutcome DescribeMachineRegions(const Model::DescribeMachineRegionsRequest &request);
                void DescribeMachineRegionsAsync(const Model::DescribeMachineRegionsRequest& request, const DescribeMachineRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineRegionsOutcomeCallable DescribeMachineRegionsCallable(const Model::DescribeMachineRegionsRequest& request);

                /**
                 *本接口 (DescribeMachines) 用于获取区域主机列表。
                 * @param req DescribeMachinesRequest
                 * @return DescribeMachinesOutcome
                 */
                DescribeMachinesOutcome DescribeMachines(const Model::DescribeMachinesRequest &request);
                void DescribeMachinesAsync(const Model::DescribeMachinesRequest& request, const DescribeMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachinesOutcomeCallable DescribeMachinesCallable(const Model::DescribeMachinesRequest& request);

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
                 *专家服务-安全管家月巡检报告下载
                 * @param req DescribeMonthInspectionReportRequest
                 * @return DescribeMonthInspectionReportOutcome
                 */
                DescribeMonthInspectionReportOutcome DescribeMonthInspectionReport(const Model::DescribeMonthInspectionReportRequest &request);
                void DescribeMonthInspectionReportAsync(const Model::DescribeMonthInspectionReportRequest& request, const DescribeMonthInspectionReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonthInspectionReportOutcomeCallable DescribeMonthInspectionReportCallable(const Model::DescribeMonthInspectionReportRequest& request);

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
                 *入侵检测，获取恶意请求列表
                 * @param req DescribeRiskDnsListRequest
                 * @return DescribeRiskDnsListOutcome
                 */
                DescribeRiskDnsListOutcome DescribeRiskDnsList(const Model::DescribeRiskDnsListRequest &request);
                void DescribeRiskDnsListAsync(const Model::DescribeRiskDnsListRequest& request, const DescribeRiskDnsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDnsListOutcomeCallable DescribeRiskDnsListCallable(const Model::DescribeRiskDnsListRequest& request);

                /**
                 *更新或者插入用户告警设置(该接口废弃,请调用 ModifyWarningSetting )
                 * @param req DescribeSaveOrUpdateWarningsRequest
                 * @return DescribeSaveOrUpdateWarningsOutcome
                 */
                DescribeSaveOrUpdateWarningsOutcome DescribeSaveOrUpdateWarnings(const Model::DescribeSaveOrUpdateWarningsRequest &request);
                void DescribeSaveOrUpdateWarningsAsync(const Model::DescribeSaveOrUpdateWarningsRequest& request, const DescribeSaveOrUpdateWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSaveOrUpdateWarningsOutcomeCallable DescribeSaveOrUpdateWarningsCallable(const Model::DescribeSaveOrUpdateWarningsRequest& request);

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
                 *导出ES查询文档列表
                 * @param req DescribeSearchExportListRequest
                 * @return DescribeSearchExportListOutcome
                 */
                DescribeSearchExportListOutcome DescribeSearchExportList(const Model::DescribeSearchExportListRequest &request);
                void DescribeSearchExportListAsync(const Model::DescribeSearchExportListRequest& request, const DescribeSearchExportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSearchExportListOutcomeCallable DescribeSearchExportListCallable(const Model::DescribeSearchExportListRequest& request);

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
                 *获取漏洞管理模块指定类型的待处理漏洞数、主机数和非专业版主机数量
                 * @param req DescribeUndoVulCountsRequest
                 * @return DescribeUndoVulCountsOutcome
                 */
                DescribeUndoVulCountsOutcome DescribeUndoVulCounts(const Model::DescribeUndoVulCountsRequest &request);
                void DescribeUndoVulCountsAsync(const Model::DescribeUndoVulCountsRequest& request, const DescribeUndoVulCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUndoVulCountsOutcomeCallable DescribeUndoVulCountsCallable(const Model::DescribeUndoVulCountsRequest& request);

                /**
                 *此接口（DescribeUsualLoginPlaces）用于查询常用登录地。
                 * @param req DescribeUsualLoginPlacesRequest
                 * @return DescribeUsualLoginPlacesOutcome
                 */
                DescribeUsualLoginPlacesOutcome DescribeUsualLoginPlaces(const Model::DescribeUsualLoginPlacesRequest &request);
                void DescribeUsualLoginPlacesAsync(const Model::DescribeUsualLoginPlacesRequest& request, const DescribeUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsualLoginPlacesOutcomeCallable DescribeUsualLoginPlacesCallable(const Model::DescribeUsualLoginPlacesRequest& request);

                /**
                 *用于统计专业版和基础版机器数。
                 * @param req DescribeVersionStatisticsRequest
                 * @return DescribeVersionStatisticsOutcome
                 */
                DescribeVersionStatisticsOutcome DescribeVersionStatistics(const Model::DescribeVersionStatisticsRequest &request);
                void DescribeVersionStatisticsAsync(const Model::DescribeVersionStatisticsRequest& request, const DescribeVersionStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVersionStatisticsOutcomeCallable DescribeVersionStatisticsCallable(const Model::DescribeVersionStatisticsRequest& request);

                /**
                 *漏洞管理模块，获取近日指定类型的漏洞数量和主机数量
                 * @param req DescribeVulCountByDatesRequest
                 * @return DescribeVulCountByDatesOutcome
                 */
                DescribeVulCountByDatesOutcome DescribeVulCountByDates(const Model::DescribeVulCountByDatesRequest &request);
                void DescribeVulCountByDatesAsync(const Model::DescribeVulCountByDatesRequest& request, const DescribeVulCountByDatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulCountByDatesOutcomeCallable DescribeVulCountByDatesCallable(const Model::DescribeVulCountByDatesRequest& request);

                /**
                 *漏洞影响主机列表
                 * @param req DescribeVulEffectHostListRequest
                 * @return DescribeVulEffectHostListOutcome
                 */
                DescribeVulEffectHostListOutcome DescribeVulEffectHostList(const Model::DescribeVulEffectHostListRequest &request);
                void DescribeVulEffectHostListAsync(const Model::DescribeVulEffectHostListRequest& request, const DescribeVulEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulEffectHostListOutcomeCallable DescribeVulEffectHostListCallable(const Model::DescribeVulEffectHostListRequest& request);

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
                 *漏洞top统计
                 * @param req DescribeVulTopRequest
                 * @return DescribeVulTopOutcome
                 */
                DescribeVulTopOutcome DescribeVulTop(const Model::DescribeVulTopRequest &request);
                void DescribeVulTopAsync(const Model::DescribeVulTopRequest& request, const DescribeVulTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulTopOutcomeCallable DescribeVulTopCallable(const Model::DescribeVulTopRequest& request);

                /**
                 *获取当前用户告警列表
                 * @param req DescribeWarningListRequest
                 * @return DescribeWarningListOutcome
                 */
                DescribeWarningListOutcome DescribeWarningList(const Model::DescribeWarningListRequest &request);
                void DescribeWarningListAsync(const Model::DescribeWarningListRequest& request, const DescribeWarningListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWarningListOutcomeCallable DescribeWarningListCallable(const Model::DescribeWarningListRequest& request);

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
                 *新增或编辑标签
                 * @param req EditTagsRequest
                 * @return EditTagsOutcome
                 */
                EditTagsOutcome EditTags(const Model::EditTagsRequest &request);
                void EditTagsAsync(const Model::EditTagsRequest& request, const EditTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditTagsOutcomeCallable EditTagsCallable(const Model::EditTagsRequest& request);

                /**
                 *导出资产管理内核模块列表
                 * @param req ExportAssetCoreModuleListRequest
                 * @return ExportAssetCoreModuleListOutcome
                 */
                ExportAssetCoreModuleListOutcome ExportAssetCoreModuleList(const Model::ExportAssetCoreModuleListRequest &request);
                void ExportAssetCoreModuleListAsync(const Model::ExportAssetCoreModuleListRequest& request, const ExportAssetCoreModuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetCoreModuleListOutcomeCallable ExportAssetCoreModuleListCallable(const Model::ExportAssetCoreModuleListRequest& request);

                /**
                 *导出资产管理Web服务列表
                 * @param req ExportAssetWebServiceInfoListRequest
                 * @return ExportAssetWebServiceInfoListOutcome
                 */
                ExportAssetWebServiceInfoListOutcome ExportAssetWebServiceInfoList(const Model::ExportAssetWebServiceInfoListRequest &request);
                void ExportAssetWebServiceInfoListAsync(const Model::ExportAssetWebServiceInfoListRequest& request, const ExportAssetWebServiceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetWebServiceInfoListOutcomeCallable ExportAssetWebServiceInfoListCallable(const Model::ExportAssetWebServiceInfoListRequest& request);

                /**
                 *导出网络攻击日志
                 * @param req ExportAttackLogsRequest
                 * @return ExportAttackLogsOutcome
                 */
                ExportAttackLogsOutcome ExportAttackLogs(const Model::ExportAttackLogsRequest &request);
                void ExportAttackLogsAsync(const Model::ExportAttackLogsRequest& request, const ExportAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAttackLogsOutcomeCallable ExportAttackLogsCallable(const Model::ExportAttackLogsRequest& request);

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
                 *本接口 (ExportBruteAttacks) 用于导出密码破解记录成CSV文件。
                 * @param req ExportBruteAttacksRequest
                 * @return ExportBruteAttacksOutcome
                 */
                ExportBruteAttacksOutcome ExportBruteAttacks(const Model::ExportBruteAttacksRequest &request);
                void ExportBruteAttacksAsync(const Model::ExportBruteAttacksRequest& request, const ExportBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBruteAttacksOutcomeCallable ExportBruteAttacksCallable(const Model::ExportBruteAttacksRequest& request);

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
                 *导出反弹Shell事件
                 * @param req ExportReverseShellEventsRequest
                 * @return ExportReverseShellEventsOutcome
                 */
                ExportReverseShellEventsOutcome ExportReverseShellEvents(const Model::ExportReverseShellEventsRequest &request);
                void ExportReverseShellEventsAsync(const Model::ExportReverseShellEventsRequest& request, const ExportReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportReverseShellEventsOutcomeCallable ExportReverseShellEventsCallable(const Model::ExportReverseShellEventsRequest& request);

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
                 *本接口 (IgnoreImpactedHosts) 用于忽略漏洞。
                 * @param req IgnoreImpactedHostsRequest
                 * @return IgnoreImpactedHostsOutcome
                 */
                IgnoreImpactedHostsOutcome IgnoreImpactedHosts(const Model::IgnoreImpactedHostsRequest &request);
                void IgnoreImpactedHostsAsync(const Model::IgnoreImpactedHostsRequest& request, const IgnoreImpactedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IgnoreImpactedHostsOutcomeCallable IgnoreImpactedHostsCallable(const Model::IgnoreImpactedHostsRequest& request);

                /**
                 * 用于设置新增主机自动开通专业防护配置。
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
                 *修改暴力破解规则
                 * @param req ModifyBruteAttackRulesRequest
                 * @return ModifyBruteAttackRulesOutcome
                 */
                ModifyBruteAttackRulesOutcome ModifyBruteAttackRules(const Model::ModifyBruteAttackRulesRequest &request);
                void ModifyBruteAttackRulesAsync(const Model::ModifyBruteAttackRulesRequest& request, const ModifyBruteAttackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBruteAttackRulesOutcomeCallable ModifyBruteAttackRulesCallable(const Model::ModifyBruteAttackRulesRequest& request);

                /**
                 *设置中心-授权管理 对某个授权批量绑定机器
                 * @param req ModifyLicenseBindsRequest
                 * @return ModifyLicenseBindsOutcome
                 */
                ModifyLicenseBindsOutcome ModifyLicenseBinds(const Model::ModifyLicenseBindsRequest &request);
                void ModifyLicenseBindsAsync(const Model::ModifyLicenseBindsRequest& request, const ModifyLicenseBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLicenseBindsOutcomeCallable ModifyLicenseBindsCallable(const Model::ModifyLicenseBindsRequest& request);

                /**
                 *设置中心-授权管理 对某个授权批量解绑机器
                 * @param req ModifyLicenseUnBindsRequest
                 * @return ModifyLicenseUnBindsOutcome
                 */
                ModifyLicenseUnBindsOutcome ModifyLicenseUnBinds(const Model::ModifyLicenseUnBindsRequest &request);
                void ModifyLicenseUnBindsAsync(const Model::ModifyLicenseUnBindsRequest& request, const ModifyLicenseUnBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLicenseUnBindsOutcomeCallable ModifyLicenseUnBindsCallable(const Model::ModifyLicenseUnBindsRequest& request);

                /**
                 *修改主机备注信息
                 * @param req ModifyMachineRemarkRequest
                 * @return ModifyMachineRemarkOutcome
                 */
                ModifyMachineRemarkOutcome ModifyMachineRemark(const Model::ModifyMachineRemarkRequest &request);
                void ModifyMachineRemarkAsync(const Model::ModifyMachineRemarkRequest& request, const ModifyMachineRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMachineRemarkOutcomeCallable ModifyMachineRemarkCallable(const Model::ModifyMachineRemarkRequest& request);

                /**
                 *定时扫描设置
                 * @param req ModifyMalwareTimingScanSettingsRequest
                 * @return ModifyMalwareTimingScanSettingsOutcome
                 */
                ModifyMalwareTimingScanSettingsOutcome ModifyMalwareTimingScanSettings(const Model::ModifyMalwareTimingScanSettingsRequest &request);
                void ModifyMalwareTimingScanSettingsAsync(const Model::ModifyMalwareTimingScanSettingsRequest& request, const ModifyMalwareTimingScanSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMalwareTimingScanSettingsOutcomeCallable ModifyMalwareTimingScanSettingsCallable(const Model::ModifyMalwareTimingScanSettingsRequest& request);

                /**
                 *对订单属性编辑
                 * @param req ModifyOrderAttributeRequest
                 * @return ModifyOrderAttributeOutcome
                 */
                ModifyOrderAttributeOutcome ModifyOrderAttribute(const Model::ModifyOrderAttributeRequest &request);
                void ModifyOrderAttributeAsync(const Model::ModifyOrderAttributeRequest& request, const ModifyOrderAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOrderAttributeOutcomeCallable ModifyOrderAttributeCallable(const Model::ModifyOrderAttributeRequest& request);

                /**
                 *修改告警设置
                 * @param req ModifyWarningSettingRequest
                 * @return ModifyWarningSettingOutcome
                 */
                ModifyWarningSettingOutcome ModifyWarningSetting(const Model::ModifyWarningSettingRequest &request);
                void ModifyWarningSettingAsync(const Model::ModifyWarningSettingRequest& request, const ModifyWarningSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWarningSettingOutcomeCallable ModifyWarningSettingCallable(const Model::ModifyWarningSettingRequest& request);

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
                 *本接口（RecoverMalwares）用于批量恢复已经被隔离的木马文件。
                 * @param req RecoverMalwaresRequest
                 * @return RecoverMalwaresOutcome
                 */
                RecoverMalwaresOutcome RecoverMalwares(const Model::RecoverMalwaresRequest &request);
                void RecoverMalwaresAsync(const Model::RecoverMalwaresRequest& request, const RecoverMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverMalwaresOutcomeCallable RecoverMalwaresCallable(const Model::RecoverMalwaresRequest& request);

                /**
                 *资产指纹启动扫描
                 * @param req ScanAssetRequest
                 * @return ScanAssetOutcome
                 */
                ScanAssetOutcome ScanAsset(const Model::ScanAssetRequest &request);
                void ScanAssetAsync(const Model::ScanAssetRequest& request, const ScanAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanAssetOutcomeCallable ScanAssetCallable(const Model::ScanAssetRequest& request);

                /**
                 * 一键检测
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
                 *检测基线
                 * @param req StartBaselineDetectRequest
                 * @return StartBaselineDetectOutcome
                 */
                StartBaselineDetectOutcome StartBaselineDetect(const Model::StartBaselineDetectRequest &request);
                void StartBaselineDetectAsync(const Model::StartBaselineDetectRequest& request, const StartBaselineDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartBaselineDetectOutcomeCallable StartBaselineDetectCallable(const Model::StartBaselineDetectRequest& request);

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
