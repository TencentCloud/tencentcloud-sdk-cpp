/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_CSIPCLIENT_H_
#define TENCENTCLOUD_CSIP_V20221121_CSIPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/csip/v20221121/model/AddDspmAssetManagerRequest.h>
#include <tencentcloud/csip/v20221121/model/AddDspmAssetManagerResponse.h>
#include <tencentcloud/csip/v20221121/model/AddNewBindRoleUserRequest.h>
#include <tencentcloud/csip/v20221121/model/AddNewBindRoleUserResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAccessKeyCheckTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAccessKeyCheckTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAccessKeySyncTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAccessKeySyncTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateCosAssetSyncTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateCosAssetSyncTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateCosObjectScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateCosObjectScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateCosPolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateCosPolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateCosRiskScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateCosRiskScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDomainAndIpRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDomainAndIpResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAccessExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAccessExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmApplyOrderRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmApplyOrderResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmApproveHistoryExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmApproveHistoryExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAssetAccessTopologyExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAssetAccessTopologyExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAssetsExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAssetsExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmExportTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmExportTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyInfoListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyInfoListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmPersonalIdentifyRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmPersonalIdentifyResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmRiskExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmRiskExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmWhitelistStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmWhitelistStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCAccessTokenRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCAccessTokenResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCFileExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCFileExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCFileReScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCFileReScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateRiskCenterScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateRiskCenterScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateSkillScanRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateSkillScanResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteCosAkAssetRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteCosAkAssetResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteCosPolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteCosPolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDomainAndIpRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDomainAndIpResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmApplyOrderRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmApplyOrderResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmAssetAccountRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmAssetAccountResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmBackupLogListRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmBackupLogListResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmExportTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmExportTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmPersonalIdentifyRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmPersonalIdentifyResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmRestoreLogListRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmRestoreLogListResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmWhitelistStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmWhitelistStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteIaCAccessTokenRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteIaCAccessTokenResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteIaCFileRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteIaCFileResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteRiskScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteRiskScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentAssetListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentAssetListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAKAnalysisDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAKAnalysisDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAbnormalCallRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAbnormalCallRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyAlarmRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyAlarmResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyAlarmDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyAlarmDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyAssetRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyAssetResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyRiskRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyRiskResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyRiskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyRiskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyUserDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyUserDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyUserListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyUserListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAlertListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAlertListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetProcessListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetProcessListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetViewVulRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetViewVulRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssumeRoleRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssumeRoleResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBucketInvokeIpListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBucketInvokeIpListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFWAssetStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFWAssetStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCLSLogIndexV3Request.h>
#include <tencentcloud/csip/v20221121/model/DescribeCLSLogIndexV3Response.h>
#include <tencentcloud/csip/v20221121/model/DescribeCLSLogListV3Request.h>
#include <tencentcloud/csip/v20221121/model/DescribeCLSLogListV3Response.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPRiskStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPRiskStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachineDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachineDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachinesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachinesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCallRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCallRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCheckViewRisksRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCheckViewRisksResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeConfigCheckRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeConfigCheckRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAccessPermissionRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAccessPermissionResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAccessPermissionsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAccessPermissionsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosActionListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosActionListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAkAssetRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAkAssetResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAkInvokeIpListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAkInvokeIpListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAlarmListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAlarmListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAlarmTrendDataRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAlarmTrendDataResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAssetRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAssetResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAssetSyncTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAssetSyncTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAuditAppIdListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAuditAppIdListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAuditDictionaryListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAuditDictionaryListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAuditPayInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosAuditPayInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosBucketBillingInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosBucketBillingInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosBucketListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosBucketListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosBucketRiskRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosBucketRiskResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosIdentifyFileListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosIdentifyFileListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosInvokeUaRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosInvokeUaResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosIpInvokeLogRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosIpInvokeLogResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosIpInvokeRecordFileRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosIpInvokeRecordFileResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosPolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosPolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosRiskActionListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosRiskActionListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosRiskEvidenceRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosRiskEvidenceResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosRiskScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosRiskScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosRoleAccessPermissionRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosRoleAccessPermissionResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosRoleAccessPermissionsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosRoleAccessPermissionsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosSourceIpRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosSourceIpResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDomainAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDomainAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessTopologyAccountsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessTopologyAccountsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessTopologyAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessTopologyAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessTopologyIpsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessTopologyIpsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApplyHistoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApplyHistoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApplyOrderListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApplyOrderListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApproveHistoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApproveHistoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApproveOrderListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApproveOrderListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccessTopologyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccessTopologyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountIdentifyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountIdentifyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountPresetPrivilegesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountPresetPrivilegesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountRecycledPrivilegesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountRecycledPrivilegesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetDatabaseListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetDatabaseListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetDatabasesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetDatabasesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetFieldListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetFieldListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetIdsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetIdsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetLoginCredentialRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetLoginCredentialResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetSecurityAnalyseStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetSecurityAnalyseStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetSupportedPrivilegesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetSupportedPrivilegesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetTableListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetTableListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmBackupLogListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmBackupLogListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmBackupSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmBackupSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmDictionaryListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmDictionaryListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmExportTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmExportTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyIdListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyIdListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyInfoListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyInfoListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmLogListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmLogListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmPayInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmPayInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmPersonApplyHistoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmPersonApplyHistoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmPersonalIdentifyListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmPersonalIdentifyListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskStrategyGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskStrategyGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskTendencyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskTendencyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmSupportedAssetTypeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmSupportedAssetTypeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmSyncAssetsStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmSyncAssetsStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmSyncUsersStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmSyncUsersStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmWhitelistStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmWhitelistStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeAssetCategoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeAssetCategoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposePathRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposePathResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposuresRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposuresResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeGatewayAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeGatewayAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeHighBaseLineRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeHighBaseLineRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileReportRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileReportResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCTokenListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCTokenListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIpInvokeRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIpInvokeRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIpInvokeRecordDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIpInvokeRecordDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeKeySandboxCredentialRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeKeySandboxCredentialResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeKeySandboxCredentialListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeKeySandboxCredentialListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeListenerListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeListenerListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNICAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNICAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifyAssetConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifyAssetConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingAlertRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingAlertResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationUserInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationUserInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeOtherCloudAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeOtherCloudAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePolicyHitDataRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePolicyHitDataResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePublicIpAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePublicIpAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRepositoryImageAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRepositoryImageAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskBucketListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskBucketListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCallRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCallRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewCFGRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewCFGRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewPortRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewPortRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewVULRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewVULRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewWeakPasswordRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewWeakPasswordRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterCFGViewCFGRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterCFGViewCFGRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterPortViewPortRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterPortViewPortRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterServerRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterServerRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterVULViewVULRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterVULViewVULRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterWebsiteRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterWebsiteRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskDetailListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskDetailListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskItemListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskItemListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskRuleDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskRuleDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskTrendDataRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskTrendDataResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanReportListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanReportListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanStatisticRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanStatisticResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSearchBugInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSearchBugInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanPayInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanPayInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanResultRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanResultResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSourceIPAssetRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSourceIPAssetResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSubUserInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSubUserInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSubnetAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSubnetAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogURLRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogURLResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTopAttackInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTopAttackInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserCallRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserCallRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserDspmInfoListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserDspmInfoListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskAdvanceCFGListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskAdvanceCFGListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVpcAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVpcAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulViewVulRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulViewVulRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DownloadDspmExportLogRequest.h>
#include <tencentcloud/csip/v20221121/model/DownloadDspmExportLogResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAlarmRiskStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAlarmRiskStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosAuditMonitorAccountRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosAuditMonitorAccountResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosMarkInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosMarkInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAccessRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAccessRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmApproveStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmApproveStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetAccountRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetAccountResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetAccountPrivilegesRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetAccountPrivilegesResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetDataScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetDataScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetLogDeliverySwitchRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetLogDeliverySwitchResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetSecurityAnalysisSwitchRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetSecurityAnalysisSwitchResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmBackupSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmBackupSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIpInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIpInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmPersonalIdentifyRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmPersonalIdentifyResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmRestoreLogTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmRestoreLogTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmRiskInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmRiskInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmRiskStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmRiskStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmWhitelistStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmWhitelistStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyIaCTokenPeriodRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyIaCTokenPeriodResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyMachineRemarkRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyMachineRemarkResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifyAssetConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifyAssetConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingAlertRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingAlertResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyOrganizationAccountStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyOrganizationAccountStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyPolicyStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyPolicyStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterRiskStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterRiskStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyUebaRuleSwitchRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyUebaRuleSwitchResponse.h>
#include <tencentcloud/csip/v20221121/model/ResetDspmAssetAccountPasswordRequest.h>
#include <tencentcloud/csip/v20221121/model/ResetDspmAssetAccountPasswordResponse.h>
#include <tencentcloud/csip/v20221121/model/RetryDspmExportLogRequest.h>
#include <tencentcloud/csip/v20221121/model/RetryDspmExportLogResponse.h>
#include <tencentcloud/csip/v20221121/model/RevertDspmAssetAccountRequest.h>
#include <tencentcloud/csip/v20221121/model/RevertDspmAssetAccountResponse.h>
#include <tencentcloud/csip/v20221121/model/SendDspmAssetLoginSmsCodeRequest.h>
#include <tencentcloud/csip/v20221121/model/SendDspmAssetLoginSmsCodeResponse.h>
#include <tencentcloud/csip/v20221121/model/StopRiskCenterTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/StopRiskCenterTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/SyncDspmAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/SyncDspmAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/SyncDspmUsersRequest.h>
#include <tencentcloud/csip/v20221121/model/SyncDspmUsersResponse.h>
#include <tencentcloud/csip/v20221121/model/UpdateAccessKeyAlarmStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/UpdateAccessKeyAlarmStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/UpdateAccessKeyRemarkRequest.h>
#include <tencentcloud/csip/v20221121/model/UpdateAccessKeyRemarkResponse.h>
#include <tencentcloud/csip/v20221121/model/UpdateAlertStatusListRequest.h>
#include <tencentcloud/csip/v20221121/model/UpdateAlertStatusListResponse.h>
#include <tencentcloud/csip/v20221121/model/VerifyDspmAssetLoginCodeRequest.h>
#include <tencentcloud/csip/v20221121/model/VerifyDspmAssetLoginCodeResponse.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            class CsipClient : public AbstractClient
            {
            public:
                CsipClient(const Credential &credential, const std::string &region);
                CsipClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddDspmAssetManagerResponse> AddDspmAssetManagerOutcome;
                typedef std::future<AddDspmAssetManagerOutcome> AddDspmAssetManagerOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AddDspmAssetManagerRequest&, AddDspmAssetManagerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDspmAssetManagerAsyncHandler;
                typedef Outcome<Core::Error, Model::AddNewBindRoleUserResponse> AddNewBindRoleUserOutcome;
                typedef std::future<AddNewBindRoleUserOutcome> AddNewBindRoleUserOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AddNewBindRoleUserRequest&, AddNewBindRoleUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddNewBindRoleUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccessKeyCheckTaskResponse> CreateAccessKeyCheckTaskOutcome;
                typedef std::future<CreateAccessKeyCheckTaskOutcome> CreateAccessKeyCheckTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAccessKeyCheckTaskRequest&, CreateAccessKeyCheckTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessKeyCheckTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccessKeySyncTaskResponse> CreateAccessKeySyncTaskOutcome;
                typedef std::future<CreateAccessKeySyncTaskOutcome> CreateAccessKeySyncTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAccessKeySyncTaskRequest&, CreateAccessKeySyncTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessKeySyncTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCosAssetSyncTaskResponse> CreateCosAssetSyncTaskOutcome;
                typedef std::future<CreateCosAssetSyncTaskOutcome> CreateCosAssetSyncTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateCosAssetSyncTaskRequest&, CreateCosAssetSyncTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosAssetSyncTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCosObjectScanTaskResponse> CreateCosObjectScanTaskOutcome;
                typedef std::future<CreateCosObjectScanTaskOutcome> CreateCosObjectScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateCosObjectScanTaskRequest&, CreateCosObjectScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosObjectScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCosPolicyResponse> CreateCosPolicyOutcome;
                typedef std::future<CreateCosPolicyOutcome> CreateCosPolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateCosPolicyRequest&, CreateCosPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCosRiskScanTaskResponse> CreateCosRiskScanTaskOutcome;
                typedef std::future<CreateCosRiskScanTaskOutcome> CreateCosRiskScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateCosRiskScanTaskRequest&, CreateCosRiskScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosRiskScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainAndIpResponse> CreateDomainAndIpOutcome;
                typedef std::future<CreateDomainAndIpOutcome> CreateDomainAndIpOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDomainAndIpRequest&, CreateDomainAndIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainAndIpAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmAccessExportJobResponse> CreateDspmAccessExportJobOutcome;
                typedef std::future<CreateDspmAccessExportJobOutcome> CreateDspmAccessExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmAccessExportJobRequest&, CreateDspmAccessExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmAccessExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmApplyOrderResponse> CreateDspmApplyOrderOutcome;
                typedef std::future<CreateDspmApplyOrderOutcome> CreateDspmApplyOrderOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmApplyOrderRequest&, CreateDspmApplyOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmApplyOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmApproveHistoryExportJobResponse> CreateDspmApproveHistoryExportJobOutcome;
                typedef std::future<CreateDspmApproveHistoryExportJobOutcome> CreateDspmApproveHistoryExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmApproveHistoryExportJobRequest&, CreateDspmApproveHistoryExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmApproveHistoryExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmAssetAccessTopologyExportJobResponse> CreateDspmAssetAccessTopologyExportJobOutcome;
                typedef std::future<CreateDspmAssetAccessTopologyExportJobOutcome> CreateDspmAssetAccessTopologyExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmAssetAccessTopologyExportJobRequest&, CreateDspmAssetAccessTopologyExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmAssetAccessTopologyExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmAssetsExportJobResponse> CreateDspmAssetsExportJobOutcome;
                typedef std::future<CreateDspmAssetsExportJobOutcome> CreateDspmAssetsExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmAssetsExportJobRequest&, CreateDspmAssetsExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmAssetsExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmExportTaskResponse> CreateDspmExportTaskOutcome;
                typedef std::future<CreateDspmExportTaskOutcome> CreateDspmExportTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmExportTaskRequest&, CreateDspmExportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmExportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyInfoListExportJobResponse> CreateDspmIdentifyInfoListExportJobOutcome;
                typedef std::future<CreateDspmIdentifyInfoListExportJobOutcome> CreateDspmIdentifyInfoListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyInfoListExportJobRequest&, CreateDspmIdentifyInfoListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyInfoListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmPersonalIdentifyResponse> CreateDspmPersonalIdentifyOutcome;
                typedef std::future<CreateDspmPersonalIdentifyOutcome> CreateDspmPersonalIdentifyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmPersonalIdentifyRequest&, CreateDspmPersonalIdentifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmPersonalIdentifyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmRiskExportJobResponse> CreateDspmRiskExportJobOutcome;
                typedef std::future<CreateDspmRiskExportJobOutcome> CreateDspmRiskExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmRiskExportJobRequest&, CreateDspmRiskExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmRiskExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmWhitelistStrategyResponse> CreateDspmWhitelistStrategyOutcome;
                typedef std::future<CreateDspmWhitelistStrategyOutcome> CreateDspmWhitelistStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmWhitelistStrategyRequest&, CreateDspmWhitelistStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmWhitelistStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIaCAccessTokenResponse> CreateIaCAccessTokenOutcome;
                typedef std::future<CreateIaCAccessTokenOutcome> CreateIaCAccessTokenOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateIaCAccessTokenRequest&, CreateIaCAccessTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIaCAccessTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIaCFileExportJobResponse> CreateIaCFileExportJobOutcome;
                typedef std::future<CreateIaCFileExportJobOutcome> CreateIaCFileExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateIaCFileExportJobRequest&, CreateIaCFileExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIaCFileExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIaCFileReScanTaskResponse> CreateIaCFileReScanTaskOutcome;
                typedef std::future<CreateIaCFileReScanTaskOutcome> CreateIaCFileReScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateIaCFileReScanTaskRequest&, CreateIaCFileReScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIaCFileReScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRiskCenterScanTaskResponse> CreateRiskCenterScanTaskOutcome;
                typedef std::future<CreateRiskCenterScanTaskOutcome> CreateRiskCenterScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateRiskCenterScanTaskRequest&, CreateRiskCenterScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRiskCenterScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSkillScanResponse> CreateSkillScanOutcome;
                typedef std::future<CreateSkillScanOutcome> CreateSkillScanOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateSkillScanRequest&, CreateSkillScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSkillScanAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCosAkAssetResponse> DeleteCosAkAssetOutcome;
                typedef std::future<DeleteCosAkAssetOutcome> DeleteCosAkAssetOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteCosAkAssetRequest&, DeleteCosAkAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCosAkAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCosPolicyResponse> DeleteCosPolicyOutcome;
                typedef std::future<DeleteCosPolicyOutcome> DeleteCosPolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteCosPolicyRequest&, DeleteCosPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCosPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainAndIpResponse> DeleteDomainAndIpOutcome;
                typedef std::future<DeleteDomainAndIpOutcome> DeleteDomainAndIpOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDomainAndIpRequest&, DeleteDomainAndIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAndIpAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmApplyOrderResponse> DeleteDspmApplyOrderOutcome;
                typedef std::future<DeleteDspmApplyOrderOutcome> DeleteDspmApplyOrderOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmApplyOrderRequest&, DeleteDspmApplyOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmApplyOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmAssetAccountResponse> DeleteDspmAssetAccountOutcome;
                typedef std::future<DeleteDspmAssetAccountOutcome> DeleteDspmAssetAccountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmAssetAccountRequest&, DeleteDspmAssetAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmAssetAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmBackupLogListResponse> DeleteDspmBackupLogListOutcome;
                typedef std::future<DeleteDspmBackupLogListOutcome> DeleteDspmBackupLogListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmBackupLogListRequest&, DeleteDspmBackupLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmBackupLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmExportTaskResponse> DeleteDspmExportTaskOutcome;
                typedef std::future<DeleteDspmExportTaskOutcome> DeleteDspmExportTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmExportTaskRequest&, DeleteDspmExportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmExportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmPersonalIdentifyResponse> DeleteDspmPersonalIdentifyOutcome;
                typedef std::future<DeleteDspmPersonalIdentifyOutcome> DeleteDspmPersonalIdentifyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmPersonalIdentifyRequest&, DeleteDspmPersonalIdentifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmPersonalIdentifyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmRestoreLogListResponse> DeleteDspmRestoreLogListOutcome;
                typedef std::future<DeleteDspmRestoreLogListOutcome> DeleteDspmRestoreLogListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmRestoreLogListRequest&, DeleteDspmRestoreLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmRestoreLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmWhitelistStrategyResponse> DeleteDspmWhitelistStrategyOutcome;
                typedef std::future<DeleteDspmWhitelistStrategyOutcome> DeleteDspmWhitelistStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmWhitelistStrategyRequest&, DeleteDspmWhitelistStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmWhitelistStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIaCAccessTokenResponse> DeleteIaCAccessTokenOutcome;
                typedef std::future<DeleteIaCAccessTokenOutcome> DeleteIaCAccessTokenOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteIaCAccessTokenRequest&, DeleteIaCAccessTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIaCAccessTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIaCFileResponse> DeleteIaCFileOutcome;
                typedef std::future<DeleteIaCFileOutcome> DeleteIaCFileOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteIaCFileRequest&, DeleteIaCFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIaCFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRiskScanTaskResponse> DeleteRiskScanTaskOutcome;
                typedef std::future<DeleteRiskScanTaskOutcome> DeleteRiskScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteRiskScanTaskRequest&, DeleteRiskScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRiskScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAgentAssetListResponse> DescribeAIAgentAssetListOutcome;
                typedef std::future<DescribeAIAgentAssetListOutcome> DescribeAIAgentAssetListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAgentAssetListRequest&, DescribeAIAgentAssetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAgentAssetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAKAnalysisDetailResponse> DescribeAKAnalysisDetailOutcome;
                typedef std::future<DescribeAKAnalysisDetailOutcome> DescribeAKAnalysisDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAKAnalysisDetailRequest&, DescribeAKAnalysisDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAKAnalysisDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalCallRecordResponse> DescribeAbnormalCallRecordOutcome;
                typedef std::future<DescribeAbnormalCallRecordOutcome> DescribeAbnormalCallRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAbnormalCallRecordRequest&, DescribeAbnormalCallRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalCallRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessKeyAlarmResponse> DescribeAccessKeyAlarmOutcome;
                typedef std::future<DescribeAccessKeyAlarmOutcome> DescribeAccessKeyAlarmOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAccessKeyAlarmRequest&, DescribeAccessKeyAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyAlarmAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessKeyAlarmDetailResponse> DescribeAccessKeyAlarmDetailOutcome;
                typedef std::future<DescribeAccessKeyAlarmDetailOutcome> DescribeAccessKeyAlarmDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAccessKeyAlarmDetailRequest&, DescribeAccessKeyAlarmDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyAlarmDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessKeyAssetResponse> DescribeAccessKeyAssetOutcome;
                typedef std::future<DescribeAccessKeyAssetOutcome> DescribeAccessKeyAssetOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAccessKeyAssetRequest&, DescribeAccessKeyAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessKeyRiskResponse> DescribeAccessKeyRiskOutcome;
                typedef std::future<DescribeAccessKeyRiskOutcome> DescribeAccessKeyRiskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAccessKeyRiskRequest&, DescribeAccessKeyRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyRiskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessKeyRiskDetailResponse> DescribeAccessKeyRiskDetailOutcome;
                typedef std::future<DescribeAccessKeyRiskDetailOutcome> DescribeAccessKeyRiskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAccessKeyRiskDetailRequest&, DescribeAccessKeyRiskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyRiskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessKeyUserDetailResponse> DescribeAccessKeyUserDetailOutcome;
                typedef std::future<DescribeAccessKeyUserDetailOutcome> DescribeAccessKeyUserDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAccessKeyUserDetailRequest&, DescribeAccessKeyUserDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyUserDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessKeyUserListResponse> DescribeAccessKeyUserListOutcome;
                typedef std::future<DescribeAccessKeyUserListOutcome> DescribeAccessKeyUserListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAccessKeyUserListRequest&, DescribeAccessKeyUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlertListResponse> DescribeAlertListOutcome;
                typedef std::future<DescribeAlertListOutcome> DescribeAlertListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAlertListRequest&, DescribeAlertListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetProcessListResponse> DescribeAssetProcessListOutcome;
                typedef std::future<DescribeAssetProcessListOutcome> DescribeAssetProcessListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetProcessListRequest&, DescribeAssetProcessListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetProcessListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetRiskListResponse> DescribeAssetRiskListOutcome;
                typedef std::future<DescribeAssetRiskListOutcome> DescribeAssetRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetRiskListRequest&, DescribeAssetRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetViewVulRiskListResponse> DescribeAssetViewVulRiskListOutcome;
                typedef std::future<DescribeAssetViewVulRiskListOutcome> DescribeAssetViewVulRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetViewVulRiskListRequest&, DescribeAssetViewVulRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetViewVulRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssumeRoleResponse> DescribeAssumeRoleOutcome;
                typedef std::future<DescribeAssumeRoleOutcome> DescribeAssumeRoleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssumeRoleRequest&, DescribeAssumeRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssumeRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBucketInvokeIpListResponse> DescribeBucketInvokeIpListOutcome;
                typedef std::future<DescribeBucketInvokeIpListOutcome> DescribeBucketInvokeIpListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBucketInvokeIpListRequest&, DescribeBucketInvokeIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBucketInvokeIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCFWAssetStatisticsResponse> DescribeCFWAssetStatisticsOutcome;
                typedef std::future<DescribeCFWAssetStatisticsOutcome> DescribeCFWAssetStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCFWAssetStatisticsRequest&, DescribeCFWAssetStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCFWAssetStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCLSLogIndexV3Response> DescribeCLSLogIndexV3Outcome;
                typedef std::future<DescribeCLSLogIndexV3Outcome> DescribeCLSLogIndexV3OutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCLSLogIndexV3Request&, DescribeCLSLogIndexV3Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCLSLogIndexV3AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCLSLogListV3Response> DescribeCLSLogListV3Outcome;
                typedef std::future<DescribeCLSLogListV3Outcome> DescribeCLSLogListV3OutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCLSLogListV3Request&, DescribeCLSLogListV3Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCLSLogListV3AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCSIPRiskStatisticsResponse> DescribeCSIPRiskStatisticsOutcome;
                typedef std::future<DescribeCSIPRiskStatisticsOutcome> DescribeCSIPRiskStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCSIPRiskStatisticsRequest&, DescribeCSIPRiskStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSIPRiskStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCVMAssetInfoResponse> DescribeCVMAssetInfoOutcome;
                typedef std::future<DescribeCVMAssetInfoOutcome> DescribeCVMAssetInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCVMAssetInfoRequest&, DescribeCVMAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCVMAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCVMAssetsResponse> DescribeCVMAssetsOutcome;
                typedef std::future<DescribeCVMAssetsOutcome> DescribeCVMAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCVMAssetsRequest&, DescribeCVMAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCVMAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPMachineDetailResponse> DescribeCWPMachineDetailOutcome;
                typedef std::future<DescribeCWPMachineDetailOutcome> DescribeCWPMachineDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPMachineDetailRequest&, DescribeCWPMachineDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPMachineDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPMachinesResponse> DescribeCWPMachinesOutcome;
                typedef std::future<DescribeCWPMachinesOutcome> DescribeCWPMachinesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPMachinesRequest&, DescribeCWPMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCallRecordResponse> DescribeCallRecordOutcome;
                typedef std::future<DescribeCallRecordOutcome> DescribeCallRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCallRecordRequest&, DescribeCallRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCheckViewRisksResponse> DescribeCheckViewRisksOutcome;
                typedef std::future<DescribeCheckViewRisksOutcome> DescribeCheckViewRisksOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCheckViewRisksRequest&, DescribeCheckViewRisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckViewRisksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAssetsResponse> DescribeClusterAssetsOutcome;
                typedef std::future<DescribeClusterAssetsOutcome> DescribeClusterAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterAssetsRequest&, DescribeClusterAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterPodAssetsResponse> DescribeClusterPodAssetsOutcome;
                typedef std::future<DescribeClusterPodAssetsOutcome> DescribeClusterPodAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterPodAssetsRequest&, DescribeClusterPodAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterPodAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigCheckRulesResponse> DescribeConfigCheckRulesOutcome;
                typedef std::future<DescribeConfigCheckRulesOutcome> DescribeConfigCheckRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeConfigCheckRulesRequest&, DescribeConfigCheckRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigCheckRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosAccessPermissionResponse> DescribeCosAccessPermissionOutcome;
                typedef std::future<DescribeCosAccessPermissionOutcome> DescribeCosAccessPermissionOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosAccessPermissionRequest&, DescribeCosAccessPermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosAccessPermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosAccessPermissionsResponse> DescribeCosAccessPermissionsOutcome;
                typedef std::future<DescribeCosAccessPermissionsOutcome> DescribeCosAccessPermissionsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosAccessPermissionsRequest&, DescribeCosAccessPermissionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosAccessPermissionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosActionListResponse> DescribeCosActionListOutcome;
                typedef std::future<DescribeCosActionListOutcome> DescribeCosActionListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosActionListRequest&, DescribeCosActionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosActionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosAkAssetResponse> DescribeCosAkAssetOutcome;
                typedef std::future<DescribeCosAkAssetOutcome> DescribeCosAkAssetOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosAkAssetRequest&, DescribeCosAkAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosAkAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosAkInvokeIpListResponse> DescribeCosAkInvokeIpListOutcome;
                typedef std::future<DescribeCosAkInvokeIpListOutcome> DescribeCosAkInvokeIpListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosAkInvokeIpListRequest&, DescribeCosAkInvokeIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosAkInvokeIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosAlarmListResponse> DescribeCosAlarmListOutcome;
                typedef std::future<DescribeCosAlarmListOutcome> DescribeCosAlarmListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosAlarmListRequest&, DescribeCosAlarmListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosAlarmListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosAlarmTrendDataResponse> DescribeCosAlarmTrendDataOutcome;
                typedef std::future<DescribeCosAlarmTrendDataOutcome> DescribeCosAlarmTrendDataOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosAlarmTrendDataRequest&, DescribeCosAlarmTrendDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosAlarmTrendDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosAssetResponse> DescribeCosAssetOutcome;
                typedef std::future<DescribeCosAssetOutcome> DescribeCosAssetOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosAssetRequest&, DescribeCosAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosAssetSyncTaskResponse> DescribeCosAssetSyncTaskOutcome;
                typedef std::future<DescribeCosAssetSyncTaskOutcome> DescribeCosAssetSyncTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosAssetSyncTaskRequest&, DescribeCosAssetSyncTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosAssetSyncTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosAuditAppIdListResponse> DescribeCosAuditAppIdListOutcome;
                typedef std::future<DescribeCosAuditAppIdListOutcome> DescribeCosAuditAppIdListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosAuditAppIdListRequest&, DescribeCosAuditAppIdListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosAuditAppIdListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosAuditDictionaryListResponse> DescribeCosAuditDictionaryListOutcome;
                typedef std::future<DescribeCosAuditDictionaryListOutcome> DescribeCosAuditDictionaryListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosAuditDictionaryListRequest&, DescribeCosAuditDictionaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosAuditDictionaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosAuditPayInfoResponse> DescribeCosAuditPayInfoOutcome;
                typedef std::future<DescribeCosAuditPayInfoOutcome> DescribeCosAuditPayInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosAuditPayInfoRequest&, DescribeCosAuditPayInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosAuditPayInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosBucketBillingInfoResponse> DescribeCosBucketBillingInfoOutcome;
                typedef std::future<DescribeCosBucketBillingInfoOutcome> DescribeCosBucketBillingInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosBucketBillingInfoRequest&, DescribeCosBucketBillingInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosBucketBillingInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosBucketListResponse> DescribeCosBucketListOutcome;
                typedef std::future<DescribeCosBucketListOutcome> DescribeCosBucketListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosBucketListRequest&, DescribeCosBucketListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosBucketListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosBucketRiskResponse> DescribeCosBucketRiskOutcome;
                typedef std::future<DescribeCosBucketRiskOutcome> DescribeCosBucketRiskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosBucketRiskRequest&, DescribeCosBucketRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosBucketRiskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosIdentifyFileListResponse> DescribeCosIdentifyFileListOutcome;
                typedef std::future<DescribeCosIdentifyFileListOutcome> DescribeCosIdentifyFileListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosIdentifyFileListRequest&, DescribeCosIdentifyFileListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosIdentifyFileListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosInvokeUaResponse> DescribeCosInvokeUaOutcome;
                typedef std::future<DescribeCosInvokeUaOutcome> DescribeCosInvokeUaOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosInvokeUaRequest&, DescribeCosInvokeUaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosInvokeUaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosIpInvokeLogResponse> DescribeCosIpInvokeLogOutcome;
                typedef std::future<DescribeCosIpInvokeLogOutcome> DescribeCosIpInvokeLogOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosIpInvokeLogRequest&, DescribeCosIpInvokeLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosIpInvokeLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosIpInvokeRecordFileResponse> DescribeCosIpInvokeRecordFileOutcome;
                typedef std::future<DescribeCosIpInvokeRecordFileOutcome> DescribeCosIpInvokeRecordFileOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosIpInvokeRecordFileRequest&, DescribeCosIpInvokeRecordFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosIpInvokeRecordFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosOverviewResponse> DescribeCosOverviewOutcome;
                typedef std::future<DescribeCosOverviewOutcome> DescribeCosOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosOverviewRequest&, DescribeCosOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosPolicyResponse> DescribeCosPolicyOutcome;
                typedef std::future<DescribeCosPolicyOutcome> DescribeCosPolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosPolicyRequest&, DescribeCosPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosRiskActionListResponse> DescribeCosRiskActionListOutcome;
                typedef std::future<DescribeCosRiskActionListOutcome> DescribeCosRiskActionListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosRiskActionListRequest&, DescribeCosRiskActionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosRiskActionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosRiskEvidenceResponse> DescribeCosRiskEvidenceOutcome;
                typedef std::future<DescribeCosRiskEvidenceOutcome> DescribeCosRiskEvidenceOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosRiskEvidenceRequest&, DescribeCosRiskEvidenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosRiskEvidenceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosRiskScanTaskResponse> DescribeCosRiskScanTaskOutcome;
                typedef std::future<DescribeCosRiskScanTaskOutcome> DescribeCosRiskScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosRiskScanTaskRequest&, DescribeCosRiskScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosRiskScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosRoleAccessPermissionResponse> DescribeCosRoleAccessPermissionOutcome;
                typedef std::future<DescribeCosRoleAccessPermissionOutcome> DescribeCosRoleAccessPermissionOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosRoleAccessPermissionRequest&, DescribeCosRoleAccessPermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosRoleAccessPermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosRoleAccessPermissionsResponse> DescribeCosRoleAccessPermissionsOutcome;
                typedef std::future<DescribeCosRoleAccessPermissionsOutcome> DescribeCosRoleAccessPermissionsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosRoleAccessPermissionsRequest&, DescribeCosRoleAccessPermissionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosRoleAccessPermissionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosSourceIpResponse> DescribeCosSourceIpOutcome;
                typedef std::future<DescribeCosSourceIpOutcome> DescribeCosSourceIpOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosSourceIpRequest&, DescribeCosSourceIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosSourceIpAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDbAssetInfoResponse> DescribeDbAssetInfoOutcome;
                typedef std::future<DescribeDbAssetInfoOutcome> DescribeDbAssetInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDbAssetInfoRequest&, DescribeDbAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDbAssetsResponse> DescribeDbAssetsOutcome;
                typedef std::future<DescribeDbAssetsOutcome> DescribeDbAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDbAssetsRequest&, DescribeDbAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainAssetsResponse> DescribeDomainAssetsOutcome;
                typedef std::future<DescribeDomainAssetsOutcome> DescribeDomainAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDomainAssetsRequest&, DescribeDomainAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAccessRecordResponse> DescribeDspmAccessRecordOutcome;
                typedef std::future<DescribeDspmAccessRecordOutcome> DescribeDspmAccessRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAccessRecordRequest&, DescribeDspmAccessRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAccessRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAccessTopologyAccountsResponse> DescribeDspmAccessTopologyAccountsOutcome;
                typedef std::future<DescribeDspmAccessTopologyAccountsOutcome> DescribeDspmAccessTopologyAccountsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAccessTopologyAccountsRequest&, DescribeDspmAccessTopologyAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAccessTopologyAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAccessTopologyAssetsResponse> DescribeDspmAccessTopologyAssetsOutcome;
                typedef std::future<DescribeDspmAccessTopologyAssetsOutcome> DescribeDspmAccessTopologyAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAccessTopologyAssetsRequest&, DescribeDspmAccessTopologyAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAccessTopologyAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAccessTopologyIpsResponse> DescribeDspmAccessTopologyIpsOutcome;
                typedef std::future<DescribeDspmAccessTopologyIpsOutcome> DescribeDspmAccessTopologyIpsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAccessTopologyIpsRequest&, DescribeDspmAccessTopologyIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAccessTopologyIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmApplyHistoryResponse> DescribeDspmApplyHistoryOutcome;
                typedef std::future<DescribeDspmApplyHistoryOutcome> DescribeDspmApplyHistoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmApplyHistoryRequest&, DescribeDspmApplyHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmApplyHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmApplyOrderListResponse> DescribeDspmApplyOrderListOutcome;
                typedef std::future<DescribeDspmApplyOrderListOutcome> DescribeDspmApplyOrderListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmApplyOrderListRequest&, DescribeDspmApplyOrderListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmApplyOrderListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmApproveHistoryResponse> DescribeDspmApproveHistoryOutcome;
                typedef std::future<DescribeDspmApproveHistoryOutcome> DescribeDspmApproveHistoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmApproveHistoryRequest&, DescribeDspmApproveHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmApproveHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmApproveOrderListResponse> DescribeDspmApproveOrderListOutcome;
                typedef std::future<DescribeDspmApproveOrderListOutcome> DescribeDspmApproveOrderListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmApproveOrderListRequest&, DescribeDspmApproveOrderListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmApproveOrderListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetAccessTopologyResponse> DescribeDspmAssetAccessTopologyOutcome;
                typedef std::future<DescribeDspmAssetAccessTopologyOutcome> DescribeDspmAssetAccessTopologyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetAccessTopologyRequest&, DescribeDspmAssetAccessTopologyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetAccessTopologyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetAccountIdentifyResponse> DescribeDspmAssetAccountIdentifyOutcome;
                typedef std::future<DescribeDspmAssetAccountIdentifyOutcome> DescribeDspmAssetAccountIdentifyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetAccountIdentifyRequest&, DescribeDspmAssetAccountIdentifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetAccountIdentifyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetAccountPresetPrivilegesResponse> DescribeDspmAssetAccountPresetPrivilegesOutcome;
                typedef std::future<DescribeDspmAssetAccountPresetPrivilegesOutcome> DescribeDspmAssetAccountPresetPrivilegesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetAccountPresetPrivilegesRequest&, DescribeDspmAssetAccountPresetPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetAccountPresetPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetAccountRecycledPrivilegesResponse> DescribeDspmAssetAccountRecycledPrivilegesOutcome;
                typedef std::future<DescribeDspmAssetAccountRecycledPrivilegesOutcome> DescribeDspmAssetAccountRecycledPrivilegesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetAccountRecycledPrivilegesRequest&, DescribeDspmAssetAccountRecycledPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetAccountRecycledPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetAccountsResponse> DescribeDspmAssetAccountsOutcome;
                typedef std::future<DescribeDspmAssetAccountsOutcome> DescribeDspmAssetAccountsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetAccountsRequest&, DescribeDspmAssetAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetDatabaseListResponse> DescribeDspmAssetDatabaseListOutcome;
                typedef std::future<DescribeDspmAssetDatabaseListOutcome> DescribeDspmAssetDatabaseListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetDatabaseListRequest&, DescribeDspmAssetDatabaseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetDatabaseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetDatabasesResponse> DescribeDspmAssetDatabasesOutcome;
                typedef std::future<DescribeDspmAssetDatabasesOutcome> DescribeDspmAssetDatabasesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetDatabasesRequest&, DescribeDspmAssetDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetFieldListResponse> DescribeDspmAssetFieldListOutcome;
                typedef std::future<DescribeDspmAssetFieldListOutcome> DescribeDspmAssetFieldListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetFieldListRequest&, DescribeDspmAssetFieldListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetFieldListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetIdsResponse> DescribeDspmAssetIdsOutcome;
                typedef std::future<DescribeDspmAssetIdsOutcome> DescribeDspmAssetIdsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetIdsRequest&, DescribeDspmAssetIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetLoginCredentialResponse> DescribeDspmAssetLoginCredentialOutcome;
                typedef std::future<DescribeDspmAssetLoginCredentialOutcome> DescribeDspmAssetLoginCredentialOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetLoginCredentialRequest&, DescribeDspmAssetLoginCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetLoginCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetSecurityAnalyseStatusResponse> DescribeDspmAssetSecurityAnalyseStatusOutcome;
                typedef std::future<DescribeDspmAssetSecurityAnalyseStatusOutcome> DescribeDspmAssetSecurityAnalyseStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetSecurityAnalyseStatusRequest&, DescribeDspmAssetSecurityAnalyseStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetSecurityAnalyseStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetSupportedPrivilegesResponse> DescribeDspmAssetSupportedPrivilegesOutcome;
                typedef std::future<DescribeDspmAssetSupportedPrivilegesOutcome> DescribeDspmAssetSupportedPrivilegesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetSupportedPrivilegesRequest&, DescribeDspmAssetSupportedPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetSupportedPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetTableListResponse> DescribeDspmAssetTableListOutcome;
                typedef std::future<DescribeDspmAssetTableListOutcome> DescribeDspmAssetTableListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetTableListRequest&, DescribeDspmAssetTableListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetTableListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetsResponse> DescribeDspmAssetsOutcome;
                typedef std::future<DescribeDspmAssetsOutcome> DescribeDspmAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetsRequest&, DescribeDspmAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmBackupLogListResponse> DescribeDspmBackupLogListOutcome;
                typedef std::future<DescribeDspmBackupLogListOutcome> DescribeDspmBackupLogListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmBackupLogListRequest&, DescribeDspmBackupLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmBackupLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmBackupSettingResponse> DescribeDspmBackupSettingOutcome;
                typedef std::future<DescribeDspmBackupSettingOutcome> DescribeDspmBackupSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmBackupSettingRequest&, DescribeDspmBackupSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmBackupSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmDictionaryListResponse> DescribeDspmDictionaryListOutcome;
                typedef std::future<DescribeDspmDictionaryListOutcome> DescribeDspmDictionaryListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmDictionaryListRequest&, DescribeDspmDictionaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmDictionaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmExportTaskResponse> DescribeDspmExportTaskOutcome;
                typedef std::future<DescribeDspmExportTaskOutcome> DescribeDspmExportTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmExportTaskRequest&, DescribeDspmExportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmExportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyIdListResponse> DescribeDspmIdentifyIdListOutcome;
                typedef std::future<DescribeDspmIdentifyIdListOutcome> DescribeDspmIdentifyIdListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyIdListRequest&, DescribeDspmIdentifyIdListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyIdListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyInfoResponse> DescribeDspmIdentifyInfoOutcome;
                typedef std::future<DescribeDspmIdentifyInfoOutcome> DescribeDspmIdentifyInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyInfoRequest&, DescribeDspmIdentifyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyInfoListResponse> DescribeDspmIdentifyInfoListOutcome;
                typedef std::future<DescribeDspmIdentifyInfoListOutcome> DescribeDspmIdentifyInfoListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyInfoListRequest&, DescribeDspmIdentifyInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmLogListResponse> DescribeDspmLogListOutcome;
                typedef std::future<DescribeDspmLogListOutcome> DescribeDspmLogListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmLogListRequest&, DescribeDspmLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmPayInfoResponse> DescribeDspmPayInfoOutcome;
                typedef std::future<DescribeDspmPayInfoOutcome> DescribeDspmPayInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmPayInfoRequest&, DescribeDspmPayInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmPayInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmPersonApplyHistoryResponse> DescribeDspmPersonApplyHistoryOutcome;
                typedef std::future<DescribeDspmPersonApplyHistoryOutcome> DescribeDspmPersonApplyHistoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmPersonApplyHistoryRequest&, DescribeDspmPersonApplyHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmPersonApplyHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmPersonalIdentifyListResponse> DescribeDspmPersonalIdentifyListOutcome;
                typedef std::future<DescribeDspmPersonalIdentifyListOutcome> DescribeDspmPersonalIdentifyListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmPersonalIdentifyListRequest&, DescribeDspmPersonalIdentifyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmPersonalIdentifyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmRiskResponse> DescribeDspmRiskOutcome;
                typedef std::future<DescribeDspmRiskOutcome> DescribeDspmRiskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmRiskRequest&, DescribeDspmRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmRiskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmRiskDetailResponse> DescribeDspmRiskDetailOutcome;
                typedef std::future<DescribeDspmRiskDetailOutcome> DescribeDspmRiskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmRiskDetailRequest&, DescribeDspmRiskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmRiskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmRiskStrategyResponse> DescribeDspmRiskStrategyOutcome;
                typedef std::future<DescribeDspmRiskStrategyOutcome> DescribeDspmRiskStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmRiskStrategyRequest&, DescribeDspmRiskStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmRiskStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmRiskStrategyGroupResponse> DescribeDspmRiskStrategyGroupOutcome;
                typedef std::future<DescribeDspmRiskStrategyGroupOutcome> DescribeDspmRiskStrategyGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmRiskStrategyGroupRequest&, DescribeDspmRiskStrategyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmRiskStrategyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmRiskTendencyResponse> DescribeDspmRiskTendencyOutcome;
                typedef std::future<DescribeDspmRiskTendencyOutcome> DescribeDspmRiskTendencyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmRiskTendencyRequest&, DescribeDspmRiskTendencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmRiskTendencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmStatisticsResponse> DescribeDspmStatisticsOutcome;
                typedef std::future<DescribeDspmStatisticsOutcome> DescribeDspmStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmStatisticsRequest&, DescribeDspmStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmSupportedAssetTypeResponse> DescribeDspmSupportedAssetTypeOutcome;
                typedef std::future<DescribeDspmSupportedAssetTypeOutcome> DescribeDspmSupportedAssetTypeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmSupportedAssetTypeRequest&, DescribeDspmSupportedAssetTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmSupportedAssetTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmSyncAssetsStatusResponse> DescribeDspmSyncAssetsStatusOutcome;
                typedef std::future<DescribeDspmSyncAssetsStatusOutcome> DescribeDspmSyncAssetsStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmSyncAssetsStatusRequest&, DescribeDspmSyncAssetsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmSyncAssetsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmSyncUsersStatusResponse> DescribeDspmSyncUsersStatusOutcome;
                typedef std::future<DescribeDspmSyncUsersStatusOutcome> DescribeDspmSyncUsersStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmSyncUsersStatusRequest&, DescribeDspmSyncUsersStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmSyncUsersStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmWhitelistStrategyResponse> DescribeDspmWhitelistStrategyOutcome;
                typedef std::future<DescribeDspmWhitelistStrategyOutcome> DescribeDspmWhitelistStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmWhitelistStrategyRequest&, DescribeDspmWhitelistStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmWhitelistStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposeAssetCategoryResponse> DescribeExposeAssetCategoryOutcome;
                typedef std::future<DescribeExposeAssetCategoryOutcome> DescribeExposeAssetCategoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposeAssetCategoryRequest&, DescribeExposeAssetCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposeAssetCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposePathResponse> DescribeExposePathOutcome;
                typedef std::future<DescribeExposePathOutcome> DescribeExposePathOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposePathRequest&, DescribeExposePathOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposePathAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposuresResponse> DescribeExposuresOutcome;
                typedef std::future<DescribeExposuresOutcome> DescribeExposuresOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposuresRequest&, DescribeExposuresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposuresAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayAssetsResponse> DescribeGatewayAssetsOutcome;
                typedef std::future<DescribeGatewayAssetsOutcome> DescribeGatewayAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeGatewayAssetsRequest&, DescribeGatewayAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHighBaseLineRiskListResponse> DescribeHighBaseLineRiskListOutcome;
                typedef std::future<DescribeHighBaseLineRiskListOutcome> DescribeHighBaseLineRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeHighBaseLineRiskListRequest&, DescribeHighBaseLineRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHighBaseLineRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIaCFileListResponse> DescribeIaCFileListOutcome;
                typedef std::future<DescribeIaCFileListOutcome> DescribeIaCFileListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeIaCFileListRequest&, DescribeIaCFileListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIaCFileListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIaCFileOverviewResponse> DescribeIaCFileOverviewOutcome;
                typedef std::future<DescribeIaCFileOverviewOutcome> DescribeIaCFileOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeIaCFileOverviewRequest&, DescribeIaCFileOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIaCFileOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIaCFileReportResponse> DescribeIaCFileReportOutcome;
                typedef std::future<DescribeIaCFileReportOutcome> DescribeIaCFileReportOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeIaCFileReportRequest&, DescribeIaCFileReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIaCFileReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIaCTokenListResponse> DescribeIaCTokenListOutcome;
                typedef std::future<DescribeIaCTokenListOutcome> DescribeIaCTokenListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeIaCTokenListRequest&, DescribeIaCTokenListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIaCTokenListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpInvokeRecordResponse> DescribeIpInvokeRecordOutcome;
                typedef std::future<DescribeIpInvokeRecordOutcome> DescribeIpInvokeRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeIpInvokeRecordRequest&, DescribeIpInvokeRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpInvokeRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpInvokeRecordDetailResponse> DescribeIpInvokeRecordDetailOutcome;
                typedef std::future<DescribeIpInvokeRecordDetailOutcome> DescribeIpInvokeRecordDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeIpInvokeRecordDetailRequest&, DescribeIpInvokeRecordDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpInvokeRecordDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKeySandboxCredentialResponse> DescribeKeySandboxCredentialOutcome;
                typedef std::future<DescribeKeySandboxCredentialOutcome> DescribeKeySandboxCredentialOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeKeySandboxCredentialRequest&, DescribeKeySandboxCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeySandboxCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKeySandboxCredentialListResponse> DescribeKeySandboxCredentialListOutcome;
                typedef std::future<DescribeKeySandboxCredentialListOutcome> DescribeKeySandboxCredentialListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeKeySandboxCredentialListRequest&, DescribeKeySandboxCredentialListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeySandboxCredentialListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenerListResponse> DescribeListenerListOutcome;
                typedef std::future<DescribeListenerListOutcome> DescribeListenerListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeListenerListRequest&, DescribeListenerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNICAssetsResponse> DescribeNICAssetsOutcome;
                typedef std::future<DescribeNICAssetsOutcome> DescribeNICAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNICAssetsRequest&, DescribeNICAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNICAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotifyAssetConfigResponse> DescribeNotifyAssetConfigOutcome;
                typedef std::future<DescribeNotifyAssetConfigOutcome> DescribeNotifyAssetConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNotifyAssetConfigRequest&, DescribeNotifyAssetConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotifyAssetConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotifySettingResponse> DescribeNotifySettingOutcome;
                typedef std::future<DescribeNotifySettingOutcome> DescribeNotifySettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNotifySettingRequest&, DescribeNotifySettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotifySettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotifySettingAlertResponse> DescribeNotifySettingAlertOutcome;
                typedef std::future<DescribeNotifySettingAlertOutcome> DescribeNotifySettingAlertOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNotifySettingAlertRequest&, DescribeNotifySettingAlertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotifySettingAlertAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationInfoResponse> DescribeOrganizationInfoOutcome;
                typedef std::future<DescribeOrganizationInfoOutcome> DescribeOrganizationInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeOrganizationInfoRequest&, DescribeOrganizationInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationUserInfoResponse> DescribeOrganizationUserInfoOutcome;
                typedef std::future<DescribeOrganizationUserInfoOutcome> DescribeOrganizationUserInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeOrganizationUserInfoRequest&, DescribeOrganizationUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOtherCloudAssetsResponse> DescribeOtherCloudAssetsOutcome;
                typedef std::future<DescribeOtherCloudAssetsOutcome> DescribeOtherCloudAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeOtherCloudAssetsRequest&, DescribeOtherCloudAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOtherCloudAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyHitDataResponse> DescribePolicyHitDataOutcome;
                typedef std::future<DescribePolicyHitDataOutcome> DescribePolicyHitDataOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePolicyHitDataRequest&, DescribePolicyHitDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyHitDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicIpAssetsResponse> DescribePublicIpAssetsOutcome;
                typedef std::future<DescribePublicIpAssetsOutcome> DescribePublicIpAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePublicIpAssetsRequest&, DescribePublicIpAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicIpAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRepositoryImageAssetsResponse> DescribeRepositoryImageAssetsOutcome;
                typedef std::future<DescribeRepositoryImageAssetsOutcome> DescribeRepositoryImageAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRepositoryImageAssetsRequest&, DescribeRepositoryImageAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoryImageAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskBucketListResponse> DescribeRiskBucketListOutcome;
                typedef std::future<DescribeRiskBucketListOutcome> DescribeRiskBucketListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskBucketListRequest&, DescribeRiskBucketListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskBucketListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCallRecordResponse> DescribeRiskCallRecordOutcome;
                typedef std::future<DescribeRiskCallRecordOutcome> DescribeRiskCallRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCallRecordRequest&, DescribeRiskCallRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCallRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterAssetViewCFGRiskListResponse> DescribeRiskCenterAssetViewCFGRiskListOutcome;
                typedef std::future<DescribeRiskCenterAssetViewCFGRiskListOutcome> DescribeRiskCenterAssetViewCFGRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterAssetViewCFGRiskListRequest&, DescribeRiskCenterAssetViewCFGRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterAssetViewCFGRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterAssetViewPortRiskListResponse> DescribeRiskCenterAssetViewPortRiskListOutcome;
                typedef std::future<DescribeRiskCenterAssetViewPortRiskListOutcome> DescribeRiskCenterAssetViewPortRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterAssetViewPortRiskListRequest&, DescribeRiskCenterAssetViewPortRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterAssetViewPortRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterAssetViewVULRiskListResponse> DescribeRiskCenterAssetViewVULRiskListOutcome;
                typedef std::future<DescribeRiskCenterAssetViewVULRiskListOutcome> DescribeRiskCenterAssetViewVULRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterAssetViewVULRiskListRequest&, DescribeRiskCenterAssetViewVULRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterAssetViewVULRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterAssetViewWeakPasswordRiskListResponse> DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome;
                typedef std::future<DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome> DescribeRiskCenterAssetViewWeakPasswordRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterAssetViewWeakPasswordRiskListRequest&, DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterAssetViewWeakPasswordRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterCFGViewCFGRiskListResponse> DescribeRiskCenterCFGViewCFGRiskListOutcome;
                typedef std::future<DescribeRiskCenterCFGViewCFGRiskListOutcome> DescribeRiskCenterCFGViewCFGRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterCFGViewCFGRiskListRequest&, DescribeRiskCenterCFGViewCFGRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterCFGViewCFGRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterPortViewPortRiskListResponse> DescribeRiskCenterPortViewPortRiskListOutcome;
                typedef std::future<DescribeRiskCenterPortViewPortRiskListOutcome> DescribeRiskCenterPortViewPortRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterPortViewPortRiskListRequest&, DescribeRiskCenterPortViewPortRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterPortViewPortRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterServerRiskListResponse> DescribeRiskCenterServerRiskListOutcome;
                typedef std::future<DescribeRiskCenterServerRiskListOutcome> DescribeRiskCenterServerRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterServerRiskListRequest&, DescribeRiskCenterServerRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterServerRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterVULViewVULRiskListResponse> DescribeRiskCenterVULViewVULRiskListOutcome;
                typedef std::future<DescribeRiskCenterVULViewVULRiskListOutcome> DescribeRiskCenterVULViewVULRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterVULViewVULRiskListRequest&, DescribeRiskCenterVULViewVULRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterVULViewVULRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterWebsiteRiskListResponse> DescribeRiskCenterWebsiteRiskListOutcome;
                typedef std::future<DescribeRiskCenterWebsiteRiskListOutcome> DescribeRiskCenterWebsiteRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterWebsiteRiskListRequest&, DescribeRiskCenterWebsiteRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterWebsiteRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskDetailListResponse> DescribeRiskDetailListOutcome;
                typedef std::future<DescribeRiskDetailListOutcome> DescribeRiskDetailListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskDetailListRequest&, DescribeRiskDetailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDetailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskItemListResponse> DescribeRiskItemListOutcome;
                typedef std::future<DescribeRiskItemListOutcome> DescribeRiskItemListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskItemListRequest&, DescribeRiskItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskRuleDetailResponse> DescribeRiskRuleDetailOutcome;
                typedef std::future<DescribeRiskRuleDetailOutcome> DescribeRiskRuleDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskRuleDetailRequest&, DescribeRiskRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskRulesResponse> DescribeRiskRulesOutcome;
                typedef std::future<DescribeRiskRulesOutcome> DescribeRiskRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskRulesRequest&, DescribeRiskRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskTrendDataResponse> DescribeRiskTrendDataOutcome;
                typedef std::future<DescribeRiskTrendDataOutcome> DescribeRiskTrendDataOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskTrendDataRequest&, DescribeRiskTrendDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskTrendDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanReportListResponse> DescribeScanReportListOutcome;
                typedef std::future<DescribeScanReportListOutcome> DescribeScanReportListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScanReportListRequest&, DescribeScanReportListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanReportListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanStatisticResponse> DescribeScanStatisticOutcome;
                typedef std::future<DescribeScanStatisticOutcome> DescribeScanStatisticOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScanStatisticRequest&, DescribeScanStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskListResponse> DescribeScanTaskListOutcome;
                typedef std::future<DescribeScanTaskListOutcome> DescribeScanTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScanTaskListRequest&, DescribeScanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchBugInfoResponse> DescribeSearchBugInfoOutcome;
                typedef std::future<DescribeSearchBugInfoOutcome> DescribeSearchBugInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSearchBugInfoRequest&, DescribeSearchBugInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchBugInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillScanPayInfoResponse> DescribeSkillScanPayInfoOutcome;
                typedef std::future<DescribeSkillScanPayInfoOutcome> DescribeSkillScanPayInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSkillScanPayInfoRequest&, DescribeSkillScanPayInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillScanPayInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillScanResultResponse> DescribeSkillScanResultOutcome;
                typedef std::future<DescribeSkillScanResultOutcome> DescribeSkillScanResultOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSkillScanResultRequest&, DescribeSkillScanResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillScanResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSourceIPAssetResponse> DescribeSourceIPAssetOutcome;
                typedef std::future<DescribeSourceIPAssetOutcome> DescribeSourceIPAssetOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSourceIPAssetRequest&, DescribeSourceIPAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSourceIPAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubUserInfoResponse> DescribeSubUserInfoOutcome;
                typedef std::future<DescribeSubUserInfoOutcome> DescribeSubUserInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSubUserInfoRequest&, DescribeSubUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubnetAssetsResponse> DescribeSubnetAssetsOutcome;
                typedef std::future<DescribeSubnetAssetsOutcome> DescribeSubnetAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSubnetAssetsRequest&, DescribeSubnetAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLogListResponse> DescribeTaskLogListOutcome;
                typedef std::future<DescribeTaskLogListOutcome> DescribeTaskLogListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTaskLogListRequest&, DescribeTaskLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLogURLResponse> DescribeTaskLogURLOutcome;
                typedef std::future<DescribeTaskLogURLOutcome> DescribeTaskLogURLOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTaskLogURLRequest&, DescribeTaskLogURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLogURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopAttackInfoResponse> DescribeTopAttackInfoOutcome;
                typedef std::future<DescribeTopAttackInfoOutcome> DescribeTopAttackInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTopAttackInfoRequest&, DescribeTopAttackInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopAttackInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUebaRuleResponse> DescribeUebaRuleOutcome;
                typedef std::future<DescribeUebaRuleOutcome> DescribeUebaRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUebaRuleRequest&, DescribeUebaRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUebaRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserCallRecordResponse> DescribeUserCallRecordOutcome;
                typedef std::future<DescribeUserCallRecordOutcome> DescribeUserCallRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUserCallRecordRequest&, DescribeUserCallRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserCallRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserDspmInfoListResponse> DescribeUserDspmInfoListOutcome;
                typedef std::future<DescribeUserDspmInfoListOutcome> DescribeUserDspmInfoListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUserDspmInfoListRequest&, DescribeUserDspmInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDspmInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVULListResponse> DescribeVULListOutcome;
                typedef std::future<DescribeVULListOutcome> DescribeVULListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVULListRequest&, DescribeVULListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVULListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVULRiskAdvanceCFGListResponse> DescribeVULRiskAdvanceCFGListOutcome;
                typedef std::future<DescribeVULRiskAdvanceCFGListOutcome> DescribeVULRiskAdvanceCFGListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVULRiskAdvanceCFGListRequest&, DescribeVULRiskAdvanceCFGListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVULRiskAdvanceCFGListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVULRiskDetailResponse> DescribeVULRiskDetailOutcome;
                typedef std::future<DescribeVULRiskDetailOutcome> DescribeVULRiskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVULRiskDetailRequest&, DescribeVULRiskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVULRiskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcAssetsResponse> DescribeVpcAssetsOutcome;
                typedef std::future<DescribeVpcAssetsOutcome> DescribeVpcAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVpcAssetsRequest&, DescribeVpcAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulRiskListResponse> DescribeVulRiskListOutcome;
                typedef std::future<DescribeVulRiskListOutcome> DescribeVulRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulRiskListRequest&, DescribeVulRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulViewVulRiskListResponse> DescribeVulViewVulRiskListOutcome;
                typedef std::future<DescribeVulViewVulRiskListOutcome> DescribeVulViewVulRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulViewVulRiskListRequest&, DescribeVulViewVulRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulViewVulRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadDspmExportLogResponse> DownloadDspmExportLogOutcome;
                typedef std::future<DownloadDspmExportLogOutcome> DownloadDspmExportLogOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DownloadDspmExportLogRequest&, DownloadDspmExportLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadDspmExportLogAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmRiskStatusResponse> ModifyAlarmRiskStatusOutcome;
                typedef std::future<ModifyAlarmRiskStatusOutcome> ModifyAlarmRiskStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAlarmRiskStatusRequest&, ModifyAlarmRiskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmRiskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCosAuditMonitorAccountResponse> ModifyCosAuditMonitorAccountOutcome;
                typedef std::future<ModifyCosAuditMonitorAccountOutcome> ModifyCosAuditMonitorAccountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCosAuditMonitorAccountRequest&, ModifyCosAuditMonitorAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCosAuditMonitorAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCosMarkInfoResponse> ModifyCosMarkInfoOutcome;
                typedef std::future<ModifyCosMarkInfoOutcome> ModifyCosMarkInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCosMarkInfoRequest&, ModifyCosMarkInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCosMarkInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAccessRecordResponse> ModifyDspmAccessRecordOutcome;
                typedef std::future<ModifyDspmAccessRecordOutcome> ModifyDspmAccessRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAccessRecordRequest&, ModifyDspmAccessRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAccessRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmApproveStatusResponse> ModifyDspmApproveStatusOutcome;
                typedef std::future<ModifyDspmApproveStatusOutcome> ModifyDspmApproveStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmApproveStatusRequest&, ModifyDspmApproveStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmApproveStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAssetAccountResponse> ModifyDspmAssetAccountOutcome;
                typedef std::future<ModifyDspmAssetAccountOutcome> ModifyDspmAssetAccountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAssetAccountRequest&, ModifyDspmAssetAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAssetAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAssetAccountPrivilegesResponse> ModifyDspmAssetAccountPrivilegesOutcome;
                typedef std::future<ModifyDspmAssetAccountPrivilegesOutcome> ModifyDspmAssetAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAssetAccountPrivilegesRequest&, ModifyDspmAssetAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAssetAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAssetDataScanTaskResponse> ModifyDspmAssetDataScanTaskOutcome;
                typedef std::future<ModifyDspmAssetDataScanTaskOutcome> ModifyDspmAssetDataScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAssetDataScanTaskRequest&, ModifyDspmAssetDataScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAssetDataScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAssetLogDeliverySwitchResponse> ModifyDspmAssetLogDeliverySwitchOutcome;
                typedef std::future<ModifyDspmAssetLogDeliverySwitchOutcome> ModifyDspmAssetLogDeliverySwitchOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAssetLogDeliverySwitchRequest&, ModifyDspmAssetLogDeliverySwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAssetLogDeliverySwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAssetSecurityAnalysisSwitchResponse> ModifyDspmAssetSecurityAnalysisSwitchOutcome;
                typedef std::future<ModifyDspmAssetSecurityAnalysisSwitchOutcome> ModifyDspmAssetSecurityAnalysisSwitchOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAssetSecurityAnalysisSwitchRequest&, ModifyDspmAssetSecurityAnalysisSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAssetSecurityAnalysisSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmBackupSettingResponse> ModifyDspmBackupSettingOutcome;
                typedef std::future<ModifyDspmBackupSettingOutcome> ModifyDspmBackupSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmBackupSettingRequest&, ModifyDspmBackupSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmBackupSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyInfoResponse> ModifyDspmIdentifyInfoOutcome;
                typedef std::future<ModifyDspmIdentifyInfoOutcome> ModifyDspmIdentifyInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyInfoRequest&, ModifyDspmIdentifyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIpInfoResponse> ModifyDspmIpInfoOutcome;
                typedef std::future<ModifyDspmIpInfoOutcome> ModifyDspmIpInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIpInfoRequest&, ModifyDspmIpInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIpInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmPersonalIdentifyResponse> ModifyDspmPersonalIdentifyOutcome;
                typedef std::future<ModifyDspmPersonalIdentifyOutcome> ModifyDspmPersonalIdentifyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmPersonalIdentifyRequest&, ModifyDspmPersonalIdentifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmPersonalIdentifyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmRestoreLogTaskResponse> ModifyDspmRestoreLogTaskOutcome;
                typedef std::future<ModifyDspmRestoreLogTaskOutcome> ModifyDspmRestoreLogTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmRestoreLogTaskRequest&, ModifyDspmRestoreLogTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmRestoreLogTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmRiskInfoResponse> ModifyDspmRiskInfoOutcome;
                typedef std::future<ModifyDspmRiskInfoOutcome> ModifyDspmRiskInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmRiskInfoRequest&, ModifyDspmRiskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmRiskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmRiskStrategyResponse> ModifyDspmRiskStrategyOutcome;
                typedef std::future<ModifyDspmRiskStrategyOutcome> ModifyDspmRiskStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmRiskStrategyRequest&, ModifyDspmRiskStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmRiskStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmWhitelistStrategyResponse> ModifyDspmWhitelistStrategyOutcome;
                typedef std::future<ModifyDspmWhitelistStrategyOutcome> ModifyDspmWhitelistStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmWhitelistStrategyRequest&, ModifyDspmWhitelistStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmWhitelistStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIaCTokenPeriodResponse> ModifyIaCTokenPeriodOutcome;
                typedef std::future<ModifyIaCTokenPeriodOutcome> ModifyIaCTokenPeriodOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyIaCTokenPeriodRequest&, ModifyIaCTokenPeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIaCTokenPeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMachineRemarkResponse> ModifyMachineRemarkOutcome;
                typedef std::future<ModifyMachineRemarkOutcome> ModifyMachineRemarkOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyMachineRemarkRequest&, ModifyMachineRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachineRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotifyAssetConfigResponse> ModifyNotifyAssetConfigOutcome;
                typedef std::future<ModifyNotifyAssetConfigOutcome> ModifyNotifyAssetConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNotifyAssetConfigRequest&, ModifyNotifyAssetConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotifyAssetConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotifySettingResponse> ModifyNotifySettingOutcome;
                typedef std::future<ModifyNotifySettingOutcome> ModifyNotifySettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNotifySettingRequest&, ModifyNotifySettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotifySettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotifySettingAlertResponse> ModifyNotifySettingAlertOutcome;
                typedef std::future<ModifyNotifySettingAlertOutcome> ModifyNotifySettingAlertOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNotifySettingAlertRequest&, ModifyNotifySettingAlertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotifySettingAlertAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOrganizationAccountStatusResponse> ModifyOrganizationAccountStatusOutcome;
                typedef std::future<ModifyOrganizationAccountStatusOutcome> ModifyOrganizationAccountStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyOrganizationAccountStatusRequest&, ModifyOrganizationAccountStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOrganizationAccountStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPolicyStatusResponse> ModifyPolicyStatusOutcome;
                typedef std::future<ModifyPolicyStatusOutcome> ModifyPolicyStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyPolicyStatusRequest&, ModifyPolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskCenterRiskStatusResponse> ModifyRiskCenterRiskStatusOutcome;
                typedef std::future<ModifyRiskCenterRiskStatusOutcome> ModifyRiskCenterRiskStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyRiskCenterRiskStatusRequest&, ModifyRiskCenterRiskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskCenterRiskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskCenterScanTaskResponse> ModifyRiskCenterScanTaskOutcome;
                typedef std::future<ModifyRiskCenterScanTaskOutcome> ModifyRiskCenterScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyRiskCenterScanTaskRequest&, ModifyRiskCenterScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskCenterScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUebaRuleSwitchResponse> ModifyUebaRuleSwitchOutcome;
                typedef std::future<ModifyUebaRuleSwitchOutcome> ModifyUebaRuleSwitchOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyUebaRuleSwitchRequest&, ModifyUebaRuleSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUebaRuleSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetDspmAssetAccountPasswordResponse> ResetDspmAssetAccountPasswordOutcome;
                typedef std::future<ResetDspmAssetAccountPasswordOutcome> ResetDspmAssetAccountPasswordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ResetDspmAssetAccountPasswordRequest&, ResetDspmAssetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetDspmAssetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryDspmExportLogResponse> RetryDspmExportLogOutcome;
                typedef std::future<RetryDspmExportLogOutcome> RetryDspmExportLogOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::RetryDspmExportLogRequest&, RetryDspmExportLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryDspmExportLogAsyncHandler;
                typedef Outcome<Core::Error, Model::RevertDspmAssetAccountResponse> RevertDspmAssetAccountOutcome;
                typedef std::future<RevertDspmAssetAccountOutcome> RevertDspmAssetAccountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::RevertDspmAssetAccountRequest&, RevertDspmAssetAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevertDspmAssetAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::SendDspmAssetLoginSmsCodeResponse> SendDspmAssetLoginSmsCodeOutcome;
                typedef std::future<SendDspmAssetLoginSmsCodeOutcome> SendDspmAssetLoginSmsCodeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::SendDspmAssetLoginSmsCodeRequest&, SendDspmAssetLoginSmsCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendDspmAssetLoginSmsCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::StopRiskCenterTaskResponse> StopRiskCenterTaskOutcome;
                typedef std::future<StopRiskCenterTaskOutcome> StopRiskCenterTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopRiskCenterTaskRequest&, StopRiskCenterTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopRiskCenterTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncDspmAssetsResponse> SyncDspmAssetsOutcome;
                typedef std::future<SyncDspmAssetsOutcome> SyncDspmAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::SyncDspmAssetsRequest&, SyncDspmAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncDspmAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncDspmUsersResponse> SyncDspmUsersOutcome;
                typedef std::future<SyncDspmUsersOutcome> SyncDspmUsersOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::SyncDspmUsersRequest&, SyncDspmUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncDspmUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAccessKeyAlarmStatusResponse> UpdateAccessKeyAlarmStatusOutcome;
                typedef std::future<UpdateAccessKeyAlarmStatusOutcome> UpdateAccessKeyAlarmStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::UpdateAccessKeyAlarmStatusRequest&, UpdateAccessKeyAlarmStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccessKeyAlarmStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAccessKeyRemarkResponse> UpdateAccessKeyRemarkOutcome;
                typedef std::future<UpdateAccessKeyRemarkOutcome> UpdateAccessKeyRemarkOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::UpdateAccessKeyRemarkRequest&, UpdateAccessKeyRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccessKeyRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAlertStatusListResponse> UpdateAlertStatusListOutcome;
                typedef std::future<UpdateAlertStatusListOutcome> UpdateAlertStatusListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::UpdateAlertStatusListRequest&, UpdateAlertStatusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlertStatusListAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyDspmAssetLoginCodeResponse> VerifyDspmAssetLoginCodeOutcome;
                typedef std::future<VerifyDspmAssetLoginCodeOutcome> VerifyDspmAssetLoginCodeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::VerifyDspmAssetLoginCodeRequest&, VerifyDspmAssetLoginCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyDspmAssetLoginCodeAsyncHandler;



                /**
                 *添加资产管理员
                 * @param req AddDspmAssetManagerRequest
                 * @return AddDspmAssetManagerOutcome
                 */
                AddDspmAssetManagerOutcome AddDspmAssetManager(const Model::AddDspmAssetManagerRequest &request);
                void AddDspmAssetManagerAsync(const Model::AddDspmAssetManagerRequest& request, const AddDspmAssetManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDspmAssetManagerOutcomeCallable AddDspmAssetManagerCallable(const Model::AddDspmAssetManagerRequest& request);

                /**
                 *csip角色授权绑定接口
                 * @param req AddNewBindRoleUserRequest
                 * @return AddNewBindRoleUserOutcome
                 */
                AddNewBindRoleUserOutcome AddNewBindRoleUser(const Model::AddNewBindRoleUserRequest &request);
                void AddNewBindRoleUserAsync(const Model::AddNewBindRoleUserRequest& request, const AddNewBindRoleUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddNewBindRoleUserOutcomeCallable AddNewBindRoleUserCallable(const Model::AddNewBindRoleUserRequest& request);

                /**
                 *检测AK 异步任务
                 * @param req CreateAccessKeyCheckTaskRequest
                 * @return CreateAccessKeyCheckTaskOutcome
                 */
                CreateAccessKeyCheckTaskOutcome CreateAccessKeyCheckTask(const Model::CreateAccessKeyCheckTaskRequest &request);
                void CreateAccessKeyCheckTaskAsync(const Model::CreateAccessKeyCheckTaskRequest& request, const CreateAccessKeyCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccessKeyCheckTaskOutcomeCallable CreateAccessKeyCheckTaskCallable(const Model::CreateAccessKeyCheckTaskRequest& request);

                /**
                 *发起AK资产同步任务
                 * @param req CreateAccessKeySyncTaskRequest
                 * @return CreateAccessKeySyncTaskOutcome
                 */
                CreateAccessKeySyncTaskOutcome CreateAccessKeySyncTask(const Model::CreateAccessKeySyncTaskRequest &request);
                void CreateAccessKeySyncTaskAsync(const Model::CreateAccessKeySyncTaskRequest& request, const CreateAccessKeySyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccessKeySyncTaskOutcomeCallable CreateAccessKeySyncTaskCallable(const Model::CreateAccessKeySyncTaskRequest& request);

                /**
                 *创建资产同步任务
                 * @param req CreateCosAssetSyncTaskRequest
                 * @return CreateCosAssetSyncTaskOutcome
                 */
                CreateCosAssetSyncTaskOutcome CreateCosAssetSyncTask(const Model::CreateCosAssetSyncTaskRequest &request);
                void CreateCosAssetSyncTaskAsync(const Model::CreateCosAssetSyncTaskRequest& request, const CreateCosAssetSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCosAssetSyncTaskOutcomeCallable CreateCosAssetSyncTaskCallable(const Model::CreateCosAssetSyncTaskRequest& request);

                /**
                 *创建cos病毒扫描、敏感数据识别任务
                 * @param req CreateCosObjectScanTaskRequest
                 * @return CreateCosObjectScanTaskOutcome
                 */
                CreateCosObjectScanTaskOutcome CreateCosObjectScanTask(const Model::CreateCosObjectScanTaskRequest &request);
                void CreateCosObjectScanTaskAsync(const Model::CreateCosObjectScanTaskRequest& request, const CreateCosObjectScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCosObjectScanTaskOutcomeCallable CreateCosObjectScanTaskCallable(const Model::CreateCosObjectScanTaskRequest& request);

                /**
                 *添加cos告警策略
                 * @param req CreateCosPolicyRequest
                 * @return CreateCosPolicyOutcome
                 */
                CreateCosPolicyOutcome CreateCosPolicy(const Model::CreateCosPolicyRequest &request);
                void CreateCosPolicyAsync(const Model::CreateCosPolicyRequest& request, const CreateCosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCosPolicyOutcomeCallable CreateCosPolicyCallable(const Model::CreateCosPolicyRequest& request);

                /**
                 *创建风险监测任务
                 * @param req CreateCosRiskScanTaskRequest
                 * @return CreateCosRiskScanTaskOutcome
                 */
                CreateCosRiskScanTaskOutcome CreateCosRiskScanTask(const Model::CreateCosRiskScanTaskRequest &request);
                void CreateCosRiskScanTaskAsync(const Model::CreateCosRiskScanTaskRequest& request, const CreateCosRiskScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCosRiskScanTaskOutcomeCallable CreateCosRiskScanTaskCallable(const Model::CreateCosRiskScanTaskRequest& request);

                /**
                 *创建域名、ip相关信息
                 * @param req CreateDomainAndIpRequest
                 * @return CreateDomainAndIpOutcome
                 */
                CreateDomainAndIpOutcome CreateDomainAndIp(const Model::CreateDomainAndIpRequest &request);
                void CreateDomainAndIpAsync(const Model::CreateDomainAndIpRequest& request, const CreateDomainAndIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainAndIpOutcomeCallable CreateDomainAndIpCallable(const Model::CreateDomainAndIpRequest& request);

                /**
                 *创建Dspm访问记录导出任务
                 * @param req CreateDspmAccessExportJobRequest
                 * @return CreateDspmAccessExportJobOutcome
                 */
                CreateDspmAccessExportJobOutcome CreateDspmAccessExportJob(const Model::CreateDspmAccessExportJobRequest &request);
                void CreateDspmAccessExportJobAsync(const Model::CreateDspmAccessExportJobRequest& request, const CreateDspmAccessExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmAccessExportJobOutcomeCallable CreateDspmAccessExportJobCallable(const Model::CreateDspmAccessExportJobRequest& request);

                /**
                 *创建Dspm申请单
                 * @param req CreateDspmApplyOrderRequest
                 * @return CreateDspmApplyOrderOutcome
                 */
                CreateDspmApplyOrderOutcome CreateDspmApplyOrder(const Model::CreateDspmApplyOrderRequest &request);
                void CreateDspmApplyOrderAsync(const Model::CreateDspmApplyOrderRequest& request, const CreateDspmApplyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmApplyOrderOutcomeCallable CreateDspmApplyOrderCallable(const Model::CreateDspmApplyOrderRequest& request);

                /**
                 *创建Dspm审批历史导出任务
                 * @param req CreateDspmApproveHistoryExportJobRequest
                 * @return CreateDspmApproveHistoryExportJobOutcome
                 */
                CreateDspmApproveHistoryExportJobOutcome CreateDspmApproveHistoryExportJob(const Model::CreateDspmApproveHistoryExportJobRequest &request);
                void CreateDspmApproveHistoryExportJobAsync(const Model::CreateDspmApproveHistoryExportJobRequest& request, const CreateDspmApproveHistoryExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmApproveHistoryExportJobOutcomeCallable CreateDspmApproveHistoryExportJobCallable(const Model::CreateDspmApproveHistoryExportJobRequest& request);

                /**
                 *创建Dspm资产访问拓扑导出任务
                 * @param req CreateDspmAssetAccessTopologyExportJobRequest
                 * @return CreateDspmAssetAccessTopologyExportJobOutcome
                 */
                CreateDspmAssetAccessTopologyExportJobOutcome CreateDspmAssetAccessTopologyExportJob(const Model::CreateDspmAssetAccessTopologyExportJobRequest &request);
                void CreateDspmAssetAccessTopologyExportJobAsync(const Model::CreateDspmAssetAccessTopologyExportJobRequest& request, const CreateDspmAssetAccessTopologyExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmAssetAccessTopologyExportJobOutcomeCallable CreateDspmAssetAccessTopologyExportJobCallable(const Model::CreateDspmAssetAccessTopologyExportJobRequest& request);

                /**
                 *创建Dspm资产列表导出任务
                 * @param req CreateDspmAssetsExportJobRequest
                 * @return CreateDspmAssetsExportJobOutcome
                 */
                CreateDspmAssetsExportJobOutcome CreateDspmAssetsExportJob(const Model::CreateDspmAssetsExportJobRequest &request);
                void CreateDspmAssetsExportJobAsync(const Model::CreateDspmAssetsExportJobRequest& request, const CreateDspmAssetsExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmAssetsExportJobOutcomeCallable CreateDspmAssetsExportJobCallable(const Model::CreateDspmAssetsExportJobRequest& request);

                /**
                 *创建日志导出任务
                 * @param req CreateDspmExportTaskRequest
                 * @return CreateDspmExportTaskOutcome
                 */
                CreateDspmExportTaskOutcome CreateDspmExportTask(const Model::CreateDspmExportTaskRequest &request);
                void CreateDspmExportTaskAsync(const Model::CreateDspmExportTaskRequest& request, const CreateDspmExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmExportTaskOutcomeCallable CreateDspmExportTaskCallable(const Model::CreateDspmExportTaskRequest& request);

                /**
                 *创建Dspm身份列表导出任务
                 * @param req CreateDspmIdentifyInfoListExportJobRequest
                 * @return CreateDspmIdentifyInfoListExportJobOutcome
                 */
                CreateDspmIdentifyInfoListExportJobOutcome CreateDspmIdentifyInfoListExportJob(const Model::CreateDspmIdentifyInfoListExportJobRequest &request);
                void CreateDspmIdentifyInfoListExportJobAsync(const Model::CreateDspmIdentifyInfoListExportJobRequest& request, const CreateDspmIdentifyInfoListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyInfoListExportJobOutcomeCallable CreateDspmIdentifyInfoListExportJobCallable(const Model::CreateDspmIdentifyInfoListExportJobRequest& request);

                /**
                 *创建Dspm个人身份id
                 * @param req CreateDspmPersonalIdentifyRequest
                 * @return CreateDspmPersonalIdentifyOutcome
                 */
                CreateDspmPersonalIdentifyOutcome CreateDspmPersonalIdentify(const Model::CreateDspmPersonalIdentifyRequest &request);
                void CreateDspmPersonalIdentifyAsync(const Model::CreateDspmPersonalIdentifyRequest& request, const CreateDspmPersonalIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmPersonalIdentifyOutcomeCallable CreateDspmPersonalIdentifyCallable(const Model::CreateDspmPersonalIdentifyRequest& request);

                /**
                 *创建Dspm风险导出任务
                 * @param req CreateDspmRiskExportJobRequest
                 * @return CreateDspmRiskExportJobOutcome
                 */
                CreateDspmRiskExportJobOutcome CreateDspmRiskExportJob(const Model::CreateDspmRiskExportJobRequest &request);
                void CreateDspmRiskExportJobAsync(const Model::CreateDspmRiskExportJobRequest& request, const CreateDspmRiskExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmRiskExportJobOutcomeCallable CreateDspmRiskExportJobCallable(const Model::CreateDspmRiskExportJobRequest& request);

                /**
                 *创建Dspm白名单策略
                 * @param req CreateDspmWhitelistStrategyRequest
                 * @return CreateDspmWhitelistStrategyOutcome
                 */
                CreateDspmWhitelistStrategyOutcome CreateDspmWhitelistStrategy(const Model::CreateDspmWhitelistStrategyRequest &request);
                void CreateDspmWhitelistStrategyAsync(const Model::CreateDspmWhitelistStrategyRequest& request, const CreateDspmWhitelistStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmWhitelistStrategyOutcomeCallable CreateDspmWhitelistStrategyCallable(const Model::CreateDspmWhitelistStrategyRequest& request);

                /**
                 *创建IaC检测接入Token
                 * @param req CreateIaCAccessTokenRequest
                 * @return CreateIaCAccessTokenOutcome
                 */
                CreateIaCAccessTokenOutcome CreateIaCAccessToken(const Model::CreateIaCAccessTokenRequest &request);
                void CreateIaCAccessTokenAsync(const Model::CreateIaCAccessTokenRequest& request, const CreateIaCAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIaCAccessTokenOutcomeCallable CreateIaCAccessTokenCallable(const Model::CreateIaCAccessTokenRequest& request);

                /**
                 *创建IaC检测文件导出任务
                 * @param req CreateIaCFileExportJobRequest
                 * @return CreateIaCFileExportJobOutcome
                 */
                CreateIaCFileExportJobOutcome CreateIaCFileExportJob(const Model::CreateIaCFileExportJobRequest &request);
                void CreateIaCFileExportJobAsync(const Model::CreateIaCFileExportJobRequest& request, const CreateIaCFileExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIaCFileExportJobOutcomeCallable CreateIaCFileExportJobCallable(const Model::CreateIaCFileExportJobRequest& request);

                /**
                 *创建IaC检测文件重新扫描任务
                 * @param req CreateIaCFileReScanTaskRequest
                 * @return CreateIaCFileReScanTaskOutcome
                 */
                CreateIaCFileReScanTaskOutcome CreateIaCFileReScanTask(const Model::CreateIaCFileReScanTaskRequest &request);
                void CreateIaCFileReScanTaskAsync(const Model::CreateIaCFileReScanTaskRequest& request, const CreateIaCFileReScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIaCFileReScanTaskOutcomeCallable CreateIaCFileReScanTaskCallable(const Model::CreateIaCFileReScanTaskRequest& request);

                /**
                 *创建风险中心扫描任务
                 * @param req CreateRiskCenterScanTaskRequest
                 * @return CreateRiskCenterScanTaskOutcome
                 */
                CreateRiskCenterScanTaskOutcome CreateRiskCenterScanTask(const Model::CreateRiskCenterScanTaskRequest &request);
                void CreateRiskCenterScanTaskAsync(const Model::CreateRiskCenterScanTaskRequest& request, const CreateRiskCenterScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRiskCenterScanTaskOutcomeCallable CreateRiskCenterScanTaskCallable(const Model::CreateRiskCenterScanTaskRequest& request);

                /**
                 *上传 Skill ZIP 文件，触发异步安全检测。上传成功后应使用返回的 ContentHash + EngineVersion 轮询 DescribeSkillScanResult 接口获取结果。上传接口具备幂等性，同一 Hash 的文件重复上传不会创建重复任务。检测结果保留90天，超期后需重新上传检测。
                 * @param req CreateSkillScanRequest
                 * @return CreateSkillScanOutcome
                 */
                CreateSkillScanOutcome CreateSkillScan(const Model::CreateSkillScanRequest &request);
                void CreateSkillScanAsync(const Model::CreateSkillScanRequest& request, const CreateSkillScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSkillScanOutcomeCallable CreateSkillScanCallable(const Model::CreateSkillScanRequest& request);

                /**
                 *删除已删除的cos ak资产
                 * @param req DeleteCosAkAssetRequest
                 * @return DeleteCosAkAssetOutcome
                 */
                DeleteCosAkAssetOutcome DeleteCosAkAsset(const Model::DeleteCosAkAssetRequest &request);
                void DeleteCosAkAssetAsync(const Model::DeleteCosAkAssetRequest& request, const DeleteCosAkAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCosAkAssetOutcomeCallable DeleteCosAkAssetCallable(const Model::DeleteCosAkAssetRequest& request);

                /**
                 *删除策略
                 * @param req DeleteCosPolicyRequest
                 * @return DeleteCosPolicyOutcome
                 */
                DeleteCosPolicyOutcome DeleteCosPolicy(const Model::DeleteCosPolicyRequest &request);
                void DeleteCosPolicyAsync(const Model::DeleteCosPolicyRequest& request, const DeleteCosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCosPolicyOutcomeCallable DeleteCosPolicyCallable(const Model::DeleteCosPolicyRequest& request);

                /**
                 *删除域名和ip请求
                 * @param req DeleteDomainAndIpRequest
                 * @return DeleteDomainAndIpOutcome
                 */
                DeleteDomainAndIpOutcome DeleteDomainAndIp(const Model::DeleteDomainAndIpRequest &request);
                void DeleteDomainAndIpAsync(const Model::DeleteDomainAndIpRequest& request, const DeleteDomainAndIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainAndIpOutcomeCallable DeleteDomainAndIpCallable(const Model::DeleteDomainAndIpRequest& request);

                /**
                 *删除Dspm申请单
                 * @param req DeleteDspmApplyOrderRequest
                 * @return DeleteDspmApplyOrderOutcome
                 */
                DeleteDspmApplyOrderOutcome DeleteDspmApplyOrder(const Model::DeleteDspmApplyOrderRequest &request);
                void DeleteDspmApplyOrderAsync(const Model::DeleteDspmApplyOrderRequest& request, const DeleteDspmApplyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmApplyOrderOutcomeCallable DeleteDspmApplyOrderCallable(const Model::DeleteDspmApplyOrderRequest& request);

                /**
                 *删除Dspm资产账号
                 * @param req DeleteDspmAssetAccountRequest
                 * @return DeleteDspmAssetAccountOutcome
                 */
                DeleteDspmAssetAccountOutcome DeleteDspmAssetAccount(const Model::DeleteDspmAssetAccountRequest &request);
                void DeleteDspmAssetAccountAsync(const Model::DeleteDspmAssetAccountRequest& request, const DeleteDspmAssetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmAssetAccountOutcomeCallable DeleteDspmAssetAccountCallable(const Model::DeleteDspmAssetAccountRequest& request);

                /**
                 *删除备份日志
                 * @param req DeleteDspmBackupLogListRequest
                 * @return DeleteDspmBackupLogListOutcome
                 */
                DeleteDspmBackupLogListOutcome DeleteDspmBackupLogList(const Model::DeleteDspmBackupLogListRequest &request);
                void DeleteDspmBackupLogListAsync(const Model::DeleteDspmBackupLogListRequest& request, const DeleteDspmBackupLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmBackupLogListOutcomeCallable DeleteDspmBackupLogListCallable(const Model::DeleteDspmBackupLogListRequest& request);

                /**
                 *删除导出任务
                 * @param req DeleteDspmExportTaskRequest
                 * @return DeleteDspmExportTaskOutcome
                 */
                DeleteDspmExportTaskOutcome DeleteDspmExportTask(const Model::DeleteDspmExportTaskRequest &request);
                void DeleteDspmExportTaskAsync(const Model::DeleteDspmExportTaskRequest& request, const DeleteDspmExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmExportTaskOutcomeCallable DeleteDspmExportTaskCallable(const Model::DeleteDspmExportTaskRequest& request);

                /**
                 *删除Dspm个人身份id
                 * @param req DeleteDspmPersonalIdentifyRequest
                 * @return DeleteDspmPersonalIdentifyOutcome
                 */
                DeleteDspmPersonalIdentifyOutcome DeleteDspmPersonalIdentify(const Model::DeleteDspmPersonalIdentifyRequest &request);
                void DeleteDspmPersonalIdentifyAsync(const Model::DeleteDspmPersonalIdentifyRequest& request, const DeleteDspmPersonalIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmPersonalIdentifyOutcomeCallable DeleteDspmPersonalIdentifyCallable(const Model::DeleteDspmPersonalIdentifyRequest& request);

                /**
                 *删除恢复日志
                 * @param req DeleteDspmRestoreLogListRequest
                 * @return DeleteDspmRestoreLogListOutcome
                 */
                DeleteDspmRestoreLogListOutcome DeleteDspmRestoreLogList(const Model::DeleteDspmRestoreLogListRequest &request);
                void DeleteDspmRestoreLogListAsync(const Model::DeleteDspmRestoreLogListRequest& request, const DeleteDspmRestoreLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmRestoreLogListOutcomeCallable DeleteDspmRestoreLogListCallable(const Model::DeleteDspmRestoreLogListRequest& request);

                /**
                 *删除Dspm白名单策略
                 * @param req DeleteDspmWhitelistStrategyRequest
                 * @return DeleteDspmWhitelistStrategyOutcome
                 */
                DeleteDspmWhitelistStrategyOutcome DeleteDspmWhitelistStrategy(const Model::DeleteDspmWhitelistStrategyRequest &request);
                void DeleteDspmWhitelistStrategyAsync(const Model::DeleteDspmWhitelistStrategyRequest& request, const DeleteDspmWhitelistStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmWhitelistStrategyOutcomeCallable DeleteDspmWhitelistStrategyCallable(const Model::DeleteDspmWhitelistStrategyRequest& request);

                /**
                 *删除IaC检测接入Token
                 * @param req DeleteIaCAccessTokenRequest
                 * @return DeleteIaCAccessTokenOutcome
                 */
                DeleteIaCAccessTokenOutcome DeleteIaCAccessToken(const Model::DeleteIaCAccessTokenRequest &request);
                void DeleteIaCAccessTokenAsync(const Model::DeleteIaCAccessTokenRequest& request, const DeleteIaCAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIaCAccessTokenOutcomeCallable DeleteIaCAccessTokenCallable(const Model::DeleteIaCAccessTokenRequest& request);

                /**
                 *删除IaC检测文件
                 * @param req DeleteIaCFileRequest
                 * @return DeleteIaCFileOutcome
                 */
                DeleteIaCFileOutcome DeleteIaCFile(const Model::DeleteIaCFileRequest &request);
                void DeleteIaCFileAsync(const Model::DeleteIaCFileRequest& request, const DeleteIaCFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIaCFileOutcomeCallable DeleteIaCFileCallable(const Model::DeleteIaCFileRequest& request);

                /**
                 *删除风险中心扫描任务
                 * @param req DeleteRiskScanTaskRequest
                 * @return DeleteRiskScanTaskOutcome
                 */
                DeleteRiskScanTaskOutcome DeleteRiskScanTask(const Model::DeleteRiskScanTaskRequest &request);
                void DeleteRiskScanTaskAsync(const Model::DeleteRiskScanTaskRequest& request, const DeleteRiskScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRiskScanTaskOutcomeCallable DeleteRiskScanTaskCallable(const Model::DeleteRiskScanTaskRequest& request);

                /**
                 *获取 AI agent 资产列表
                 * @param req DescribeAIAgentAssetListRequest
                 * @return DescribeAIAgentAssetListOutcome
                 */
                DescribeAIAgentAssetListOutcome DescribeAIAgentAssetList(const Model::DescribeAIAgentAssetListRequest &request);
                void DescribeAIAgentAssetListAsync(const Model::DescribeAIAgentAssetListRequest& request, const DescribeAIAgentAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAgentAssetListOutcomeCallable DescribeAIAgentAssetListCallable(const Model::DescribeAIAgentAssetListRequest& request);

                /**
                 *访问密钥告警记录AI分析结果详情
                 * @param req DescribeAKAnalysisDetailRequest
                 * @return DescribeAKAnalysisDetailOutcome
                 */
                DescribeAKAnalysisDetailOutcome DescribeAKAnalysisDetail(const Model::DescribeAKAnalysisDetailRequest &request);
                void DescribeAKAnalysisDetailAsync(const Model::DescribeAKAnalysisDetailRequest& request, const DescribeAKAnalysisDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAKAnalysisDetailOutcomeCallable DescribeAKAnalysisDetailCallable(const Model::DescribeAKAnalysisDetailRequest& request);

                /**
                 *获取调用记录列表
                 * @param req DescribeAbnormalCallRecordRequest
                 * @return DescribeAbnormalCallRecordOutcome
                 */
                DescribeAbnormalCallRecordOutcome DescribeAbnormalCallRecord(const Model::DescribeAbnormalCallRecordRequest &request);
                void DescribeAbnormalCallRecordAsync(const Model::DescribeAbnormalCallRecordRequest& request, const DescribeAbnormalCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalCallRecordOutcomeCallable DescribeAbnormalCallRecordCallable(const Model::DescribeAbnormalCallRecordRequest& request);

                /**
                 *访问密钥告警记录列表
                 * @param req DescribeAccessKeyAlarmRequest
                 * @return DescribeAccessKeyAlarmOutcome
                 */
                DescribeAccessKeyAlarmOutcome DescribeAccessKeyAlarm(const Model::DescribeAccessKeyAlarmRequest &request);
                void DescribeAccessKeyAlarmAsync(const Model::DescribeAccessKeyAlarmRequest& request, const DescribeAccessKeyAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessKeyAlarmOutcomeCallable DescribeAccessKeyAlarmCallable(const Model::DescribeAccessKeyAlarmRequest& request);

                /**
                 *访问密钥告警记录详情
                 * @param req DescribeAccessKeyAlarmDetailRequest
                 * @return DescribeAccessKeyAlarmDetailOutcome
                 */
                DescribeAccessKeyAlarmDetailOutcome DescribeAccessKeyAlarmDetail(const Model::DescribeAccessKeyAlarmDetailRequest &request);
                void DescribeAccessKeyAlarmDetailAsync(const Model::DescribeAccessKeyAlarmDetailRequest& request, const DescribeAccessKeyAlarmDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessKeyAlarmDetailOutcomeCallable DescribeAccessKeyAlarmDetailCallable(const Model::DescribeAccessKeyAlarmDetailRequest& request);

                /**
                 *获取用户访问密钥资产列表
                 * @param req DescribeAccessKeyAssetRequest
                 * @return DescribeAccessKeyAssetOutcome
                 */
                DescribeAccessKeyAssetOutcome DescribeAccessKeyAsset(const Model::DescribeAccessKeyAssetRequest &request);
                void DescribeAccessKeyAssetAsync(const Model::DescribeAccessKeyAssetRequest& request, const DescribeAccessKeyAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessKeyAssetOutcomeCallable DescribeAccessKeyAssetCallable(const Model::DescribeAccessKeyAssetRequest& request);

                /**
                 *访问密钥风险记录列表
                 * @param req DescribeAccessKeyRiskRequest
                 * @return DescribeAccessKeyRiskOutcome
                 */
                DescribeAccessKeyRiskOutcome DescribeAccessKeyRisk(const Model::DescribeAccessKeyRiskRequest &request);
                void DescribeAccessKeyRiskAsync(const Model::DescribeAccessKeyRiskRequest& request, const DescribeAccessKeyRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessKeyRiskOutcomeCallable DescribeAccessKeyRiskCallable(const Model::DescribeAccessKeyRiskRequest& request);

                /**
                 *访问密钥风险记录详情
                 * @param req DescribeAccessKeyRiskDetailRequest
                 * @return DescribeAccessKeyRiskDetailOutcome
                 */
                DescribeAccessKeyRiskDetailOutcome DescribeAccessKeyRiskDetail(const Model::DescribeAccessKeyRiskDetailRequest &request);
                void DescribeAccessKeyRiskDetailAsync(const Model::DescribeAccessKeyRiskDetailRequest& request, const DescribeAccessKeyRiskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessKeyRiskDetailOutcomeCallable DescribeAccessKeyRiskDetailCallable(const Model::DescribeAccessKeyRiskDetailRequest& request);

                /**
                 *查询用户的账号详情
                 * @param req DescribeAccessKeyUserDetailRequest
                 * @return DescribeAccessKeyUserDetailOutcome
                 */
                DescribeAccessKeyUserDetailOutcome DescribeAccessKeyUserDetail(const Model::DescribeAccessKeyUserDetailRequest &request);
                void DescribeAccessKeyUserDetailAsync(const Model::DescribeAccessKeyUserDetailRequest& request, const DescribeAccessKeyUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessKeyUserDetailOutcomeCallable DescribeAccessKeyUserDetailCallable(const Model::DescribeAccessKeyUserDetailRequest& request);

                /**
                 *查询用户的账号列表
                 * @param req DescribeAccessKeyUserListRequest
                 * @return DescribeAccessKeyUserListOutcome
                 */
                DescribeAccessKeyUserListOutcome DescribeAccessKeyUserList(const Model::DescribeAccessKeyUserListRequest &request);
                void DescribeAccessKeyUserListAsync(const Model::DescribeAccessKeyUserListRequest& request, const DescribeAccessKeyUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessKeyUserListOutcomeCallable DescribeAccessKeyUserListCallable(const Model::DescribeAccessKeyUserListRequest& request);

                /**
                 *告警中心全量告警列表接口
                 * @param req DescribeAlertListRequest
                 * @return DescribeAlertListOutcome
                 */
                DescribeAlertListOutcome DescribeAlertList(const Model::DescribeAlertListRequest &request);
                void DescribeAlertListAsync(const Model::DescribeAlertListRequest& request, const DescribeAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlertListOutcomeCallable DescribeAlertListCallable(const Model::DescribeAlertListRequest& request);

                /**
                 *查询云边界分析-暴露路径下主机节点的进程列表
                 * @param req DescribeAssetProcessListRequest
                 * @return DescribeAssetProcessListOutcome
                 */
                DescribeAssetProcessListOutcome DescribeAssetProcessList(const Model::DescribeAssetProcessListRequest &request);
                void DescribeAssetProcessListAsync(const Model::DescribeAssetProcessListRequest& request, const DescribeAssetProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetProcessListOutcomeCallable DescribeAssetProcessListCallable(const Model::DescribeAssetProcessListRequest& request);

                /**
                 *资产视角下云资源配置风险列表
                 * @param req DescribeAssetRiskListRequest
                 * @return DescribeAssetRiskListOutcome
                 */
                DescribeAssetRiskListOutcome DescribeAssetRiskList(const Model::DescribeAssetRiskListRequest &request);
                void DescribeAssetRiskListAsync(const Model::DescribeAssetRiskListRequest& request, const DescribeAssetRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetRiskListOutcomeCallable DescribeAssetRiskListCallable(const Model::DescribeAssetRiskListRequest& request);

                /**
                 *获取资产视角的漏洞风险列表
                 * @param req DescribeAssetViewVulRiskListRequest
                 * @return DescribeAssetViewVulRiskListOutcome
                 */
                DescribeAssetViewVulRiskListOutcome DescribeAssetViewVulRiskList(const Model::DescribeAssetViewVulRiskListRequest &request);
                void DescribeAssetViewVulRiskListAsync(const Model::DescribeAssetViewVulRiskListRequest& request, const DescribeAssetViewVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetViewVulRiskListOutcomeCallable DescribeAssetViewVulRiskListCallable(const Model::DescribeAssetViewVulRiskListRequest& request);

                /**
                 *查询是否绑定角色
                 * @param req DescribeAssumeRoleRequest
                 * @return DescribeAssumeRoleOutcome
                 */
                DescribeAssumeRoleOutcome DescribeAssumeRole(const Model::DescribeAssumeRoleRequest &request);
                void DescribeAssumeRoleAsync(const Model::DescribeAssumeRoleRequest& request, const DescribeAssumeRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssumeRoleOutcomeCallable DescribeAssumeRoleCallable(const Model::DescribeAssumeRoleRequest& request);

                /**
                 *查看存储桶调用源ip列表
                 * @param req DescribeBucketInvokeIpListRequest
                 * @return DescribeBucketInvokeIpListOutcome
                 */
                DescribeBucketInvokeIpListOutcome DescribeBucketInvokeIpList(const Model::DescribeBucketInvokeIpListRequest &request);
                void DescribeBucketInvokeIpListAsync(const Model::DescribeBucketInvokeIpListRequest& request, const DescribeBucketInvokeIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBucketInvokeIpListOutcomeCallable DescribeBucketInvokeIpListCallable(const Model::DescribeBucketInvokeIpListRequest& request);

                /**
                 *云防资产中心统计数据
                 * @param req DescribeCFWAssetStatisticsRequest
                 * @return DescribeCFWAssetStatisticsOutcome
                 */
                DescribeCFWAssetStatisticsOutcome DescribeCFWAssetStatistics(const Model::DescribeCFWAssetStatisticsRequest &request);
                void DescribeCFWAssetStatisticsAsync(const Model::DescribeCFWAssetStatisticsRequest& request, const DescribeCFWAssetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCFWAssetStatisticsOutcomeCallable DescribeCFWAssetStatisticsCallable(const Model::DescribeCFWAssetStatisticsRequest& request);

                /**
                 *获取日志索引信息
                 * @param req DescribeCLSLogIndexV3Request
                 * @return DescribeCLSLogIndexV3Outcome
                 */
                DescribeCLSLogIndexV3Outcome DescribeCLSLogIndexV3(const Model::DescribeCLSLogIndexV3Request &request);
                void DescribeCLSLogIndexV3Async(const Model::DescribeCLSLogIndexV3Request& request, const DescribeCLSLogIndexV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCLSLogIndexV3OutcomeCallable DescribeCLSLogIndexV3Callable(const Model::DescribeCLSLogIndexV3Request& request);

                /**
                 *日志分析检索接口v3
                 * @param req DescribeCLSLogListV3Request
                 * @return DescribeCLSLogListV3Outcome
                 */
                DescribeCLSLogListV3Outcome DescribeCLSLogListV3(const Model::DescribeCLSLogListV3Request &request);
                void DescribeCLSLogListV3Async(const Model::DescribeCLSLogListV3Request& request, const DescribeCLSLogListV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCLSLogListV3OutcomeCallable DescribeCLSLogListV3Callable(const Model::DescribeCLSLogListV3Request& request);

                /**
                 *获取风险中心风险概况示例
                 * @param req DescribeCSIPRiskStatisticsRequest
                 * @return DescribeCSIPRiskStatisticsOutcome
                 */
                DescribeCSIPRiskStatisticsOutcome DescribeCSIPRiskStatistics(const Model::DescribeCSIPRiskStatisticsRequest &request);
                void DescribeCSIPRiskStatisticsAsync(const Model::DescribeCSIPRiskStatisticsRequest& request, const DescribeCSIPRiskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCSIPRiskStatisticsOutcomeCallable DescribeCSIPRiskStatisticsCallable(const Model::DescribeCSIPRiskStatisticsRequest& request);

                /**
                 *cvm详情
                 * @param req DescribeCVMAssetInfoRequest
                 * @return DescribeCVMAssetInfoOutcome
                 */
                DescribeCVMAssetInfoOutcome DescribeCVMAssetInfo(const Model::DescribeCVMAssetInfoRequest &request);
                void DescribeCVMAssetInfoAsync(const Model::DescribeCVMAssetInfoRequest& request, const DescribeCVMAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCVMAssetInfoOutcomeCallable DescribeCVMAssetInfoCallable(const Model::DescribeCVMAssetInfoRequest& request);

                /**
                 *获取cvm列表
                 * @param req DescribeCVMAssetsRequest
                 * @return DescribeCVMAssetsOutcome
                 */
                DescribeCVMAssetsOutcome DescribeCVMAssets(const Model::DescribeCVMAssetsRequest &request);
                void DescribeCVMAssetsAsync(const Model::DescribeCVMAssetsRequest& request, const DescribeCVMAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCVMAssetsOutcomeCallable DescribeCVMAssetsCallable(const Model::DescribeCVMAssetsRequest& request);

                /**
                 *主机详情
                 * @param req DescribeCWPMachineDetailRequest
                 * @return DescribeCWPMachineDetailOutcome
                 */
                DescribeCWPMachineDetailOutcome DescribeCWPMachineDetail(const Model::DescribeCWPMachineDetailRequest &request);
                void DescribeCWPMachineDetailAsync(const Model::DescribeCWPMachineDetailRequest& request, const DescribeCWPMachineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPMachineDetailOutcomeCallable DescribeCWPMachineDetailCallable(const Model::DescribeCWPMachineDetailRequest& request);

                /**
                 *主机列表
                 * @param req DescribeCWPMachinesRequest
                 * @return DescribeCWPMachinesOutcome
                 */
                DescribeCWPMachinesOutcome DescribeCWPMachines(const Model::DescribeCWPMachinesRequest &request);
                void DescribeCWPMachinesAsync(const Model::DescribeCWPMachinesRequest& request, const DescribeCWPMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPMachinesOutcomeCallable DescribeCWPMachinesCallable(const Model::DescribeCWPMachinesRequest& request);

                /**
                 *获取调用记录列表
                 * @param req DescribeCallRecordRequest
                 * @return DescribeCallRecordOutcome
                 */
                DescribeCallRecordOutcome DescribeCallRecord(const Model::DescribeCallRecordRequest &request);
                void DescribeCallRecordAsync(const Model::DescribeCallRecordRequest& request, const DescribeCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallRecordOutcomeCallable DescribeCallRecordCallable(const Model::DescribeCallRecordRequest& request);

                /**
                 *检查视角下云资源配置风险列表
                 * @param req DescribeCheckViewRisksRequest
                 * @return DescribeCheckViewRisksOutcome
                 */
                DescribeCheckViewRisksOutcome DescribeCheckViewRisks(const Model::DescribeCheckViewRisksRequest &request);
                void DescribeCheckViewRisksAsync(const Model::DescribeCheckViewRisksRequest& request, const DescribeCheckViewRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCheckViewRisksOutcomeCallable DescribeCheckViewRisksCallable(const Model::DescribeCheckViewRisksRequest& request);

                /**
                 *集群列表
                 * @param req DescribeClusterAssetsRequest
                 * @return DescribeClusterAssetsOutcome
                 */
                DescribeClusterAssetsOutcome DescribeClusterAssets(const Model::DescribeClusterAssetsRequest &request);
                void DescribeClusterAssetsAsync(const Model::DescribeClusterAssetsRequest& request, const DescribeClusterAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAssetsOutcomeCallable DescribeClusterAssetsCallable(const Model::DescribeClusterAssetsRequest& request);

                /**
                 *集群pod列表
                 * @param req DescribeClusterPodAssetsRequest
                 * @return DescribeClusterPodAssetsOutcome
                 */
                DescribeClusterPodAssetsOutcome DescribeClusterPodAssets(const Model::DescribeClusterPodAssetsRequest &request);
                void DescribeClusterPodAssetsAsync(const Model::DescribeClusterPodAssetsRequest& request, const DescribeClusterPodAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterPodAssetsOutcomeCallable DescribeClusterPodAssetsCallable(const Model::DescribeClusterPodAssetsRequest& request);

                /**
                 *云资源配置风险规则列表示例
                 * @param req DescribeConfigCheckRulesRequest
                 * @return DescribeConfigCheckRulesOutcome
                 */
                DescribeConfigCheckRulesOutcome DescribeConfigCheckRules(const Model::DescribeConfigCheckRulesRequest &request);
                void DescribeConfigCheckRulesAsync(const Model::DescribeConfigCheckRulesRequest& request, const DescribeConfigCheckRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigCheckRulesOutcomeCallable DescribeConfigCheckRulesCallable(const Model::DescribeConfigCheckRulesRequest& request);

                /**
                 *查看cos桶访问权限信息
                 * @param req DescribeCosAccessPermissionRequest
                 * @return DescribeCosAccessPermissionOutcome
                 */
                DescribeCosAccessPermissionOutcome DescribeCosAccessPermission(const Model::DescribeCosAccessPermissionRequest &request);
                void DescribeCosAccessPermissionAsync(const Model::DescribeCosAccessPermissionRequest& request, const DescribeCosAccessPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosAccessPermissionOutcomeCallable DescribeCosAccessPermissionCallable(const Model::DescribeCosAccessPermissionRequest& request);

                /**
                 *查看对象存储访问权限列表
                 * @param req DescribeCosAccessPermissionsRequest
                 * @return DescribeCosAccessPermissionsOutcome
                 */
                DescribeCosAccessPermissionsOutcome DescribeCosAccessPermissions(const Model::DescribeCosAccessPermissionsRequest &request);
                void DescribeCosAccessPermissionsAsync(const Model::DescribeCosAccessPermissionsRequest& request, const DescribeCosAccessPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosAccessPermissionsOutcomeCallable DescribeCosAccessPermissionsCallable(const Model::DescribeCosAccessPermissionsRequest& request);

                /**
                 *查看COS接口列表
                 * @param req DescribeCosActionListRequest
                 * @return DescribeCosActionListOutcome
                 */
                DescribeCosActionListOutcome DescribeCosActionList(const Model::DescribeCosActionListRequest &request);
                void DescribeCosActionListAsync(const Model::DescribeCosActionListRequest& request, const DescribeCosActionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosActionListOutcomeCallable DescribeCosActionListCallable(const Model::DescribeCosActionListRequest& request);

                /**
                 *查看ak资产列表信息
                 * @param req DescribeCosAkAssetRequest
                 * @return DescribeCosAkAssetOutcome
                 */
                DescribeCosAkAssetOutcome DescribeCosAkAsset(const Model::DescribeCosAkAssetRequest &request);
                void DescribeCosAkAssetAsync(const Model::DescribeCosAkAssetRequest& request, const DescribeCosAkAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosAkAssetOutcomeCallable DescribeCosAkAssetCallable(const Model::DescribeCosAkAssetRequest& request);

                /**
                 *查看存储桶调用源ip列表
                 * @param req DescribeCosAkInvokeIpListRequest
                 * @return DescribeCosAkInvokeIpListOutcome
                 */
                DescribeCosAkInvokeIpListOutcome DescribeCosAkInvokeIpList(const Model::DescribeCosAkInvokeIpListRequest &request);
                void DescribeCosAkInvokeIpListAsync(const Model::DescribeCosAkInvokeIpListRequest& request, const DescribeCosAkInvokeIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosAkInvokeIpListOutcomeCallable DescribeCosAkInvokeIpListCallable(const Model::DescribeCosAkInvokeIpListRequest& request);

                /**
                 *查看告警列表
                 * @param req DescribeCosAlarmListRequest
                 * @return DescribeCosAlarmListOutcome
                 */
                DescribeCosAlarmListOutcome DescribeCosAlarmList(const Model::DescribeCosAlarmListRequest &request);
                void DescribeCosAlarmListAsync(const Model::DescribeCosAlarmListRequest& request, const DescribeCosAlarmListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosAlarmListOutcomeCallable DescribeCosAlarmListCallable(const Model::DescribeCosAlarmListRequest& request);

                /**
                 *每日告警新增数据
                 * @param req DescribeCosAlarmTrendDataRequest
                 * @return DescribeCosAlarmTrendDataOutcome
                 */
                DescribeCosAlarmTrendDataOutcome DescribeCosAlarmTrendData(const Model::DescribeCosAlarmTrendDataRequest &request);
                void DescribeCosAlarmTrendDataAsync(const Model::DescribeCosAlarmTrendDataRequest& request, const DescribeCosAlarmTrendDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosAlarmTrendDataOutcomeCallable DescribeCosAlarmTrendDataCallable(const Model::DescribeCosAlarmTrendDataRequest& request);

                /**
                 *查看cos资产列表
                 * @param req DescribeCosAssetRequest
                 * @return DescribeCosAssetOutcome
                 */
                DescribeCosAssetOutcome DescribeCosAsset(const Model::DescribeCosAssetRequest &request);
                void DescribeCosAssetAsync(const Model::DescribeCosAssetRequest& request, const DescribeCosAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosAssetOutcomeCallable DescribeCosAssetCallable(const Model::DescribeCosAssetRequest& request);

                /**
                 *获取对应appid对应的当前正在扫描的taskid
                 * @param req DescribeCosAssetSyncTaskRequest
                 * @return DescribeCosAssetSyncTaskOutcome
                 */
                DescribeCosAssetSyncTaskOutcome DescribeCosAssetSyncTask(const Model::DescribeCosAssetSyncTaskRequest &request);
                void DescribeCosAssetSyncTaskAsync(const Model::DescribeCosAssetSyncTaskRequest& request, const DescribeCosAssetSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosAssetSyncTaskOutcomeCallable DescribeCosAssetSyncTaskCallable(const Model::DescribeCosAssetSyncTaskRequest& request);

                /**
                 *查看该appid下已购买的appid集合
                 * @param req DescribeCosAuditAppIdListRequest
                 * @return DescribeCosAuditAppIdListOutcome
                 */
                DescribeCosAuditAppIdListOutcome DescribeCosAuditAppIdList(const Model::DescribeCosAuditAppIdListRequest &request);
                void DescribeCosAuditAppIdListAsync(const Model::DescribeCosAuditAppIdListRequest& request, const DescribeCosAuditAppIdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosAuditAppIdListOutcomeCallable DescribeCosAuditAppIdListCallable(const Model::DescribeCosAuditAppIdListRequest& request);

                /**
                 *查询cos审计字典信息列表
                 * @param req DescribeCosAuditDictionaryListRequest
                 * @return DescribeCosAuditDictionaryListOutcome
                 */
                DescribeCosAuditDictionaryListOutcome DescribeCosAuditDictionaryList(const Model::DescribeCosAuditDictionaryListRequest &request);
                void DescribeCosAuditDictionaryListAsync(const Model::DescribeCosAuditDictionaryListRequest& request, const DescribeCosAuditDictionaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosAuditDictionaryListOutcomeCallable DescribeCosAuditDictionaryListCallable(const Model::DescribeCosAuditDictionaryListRequest& request);

                /**
                 *获取审计支付信息
                 * @param req DescribeCosAuditPayInfoRequest
                 * @return DescribeCosAuditPayInfoOutcome
                 */
                DescribeCosAuditPayInfoOutcome DescribeCosAuditPayInfo(const Model::DescribeCosAuditPayInfoRequest &request);
                void DescribeCosAuditPayInfoAsync(const Model::DescribeCosAuditPayInfoRequest& request, const DescribeCosAuditPayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosAuditPayInfoOutcomeCallable DescribeCosAuditPayInfoCallable(const Model::DescribeCosAuditPayInfoRequest& request);

                /**
                 *获取存储桶计费信息
                 * @param req DescribeCosBucketBillingInfoRequest
                 * @return DescribeCosBucketBillingInfoOutcome
                 */
                DescribeCosBucketBillingInfoOutcome DescribeCosBucketBillingInfo(const Model::DescribeCosBucketBillingInfoRequest &request);
                void DescribeCosBucketBillingInfoAsync(const Model::DescribeCosBucketBillingInfoRequest& request, const DescribeCosBucketBillingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosBucketBillingInfoOutcomeCallable DescribeCosBucketBillingInfoCallable(const Model::DescribeCosBucketBillingInfoRequest& request);

                /**
                 *获取存储桶信息
                 * @param req DescribeCosBucketListRequest
                 * @return DescribeCosBucketListOutcome
                 */
                DescribeCosBucketListOutcome DescribeCosBucketList(const Model::DescribeCosBucketListRequest &request);
                void DescribeCosBucketListAsync(const Model::DescribeCosBucketListRequest& request, const DescribeCosBucketListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosBucketListOutcomeCallable DescribeCosBucketListCallable(const Model::DescribeCosBucketListRequest& request);

                /**
                 *查看风险资产视角
                 * @param req DescribeCosBucketRiskRequest
                 * @return DescribeCosBucketRiskOutcome
                 */
                DescribeCosBucketRiskOutcome DescribeCosBucketRisk(const Model::DescribeCosBucketRiskRequest &request);
                void DescribeCosBucketRiskAsync(const Model::DescribeCosBucketRiskRequest& request, const DescribeCosBucketRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosBucketRiskOutcomeCallable DescribeCosBucketRiskCallable(const Model::DescribeCosBucketRiskRequest& request);

                /**
                 *查询cos文件数据识别结果列表
                 * @param req DescribeCosIdentifyFileListRequest
                 * @return DescribeCosIdentifyFileListOutcome
                 */
                DescribeCosIdentifyFileListOutcome DescribeCosIdentifyFileList(const Model::DescribeCosIdentifyFileListRequest &request);
                void DescribeCosIdentifyFileListAsync(const Model::DescribeCosIdentifyFileListRequest& request, const DescribeCosIdentifyFileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosIdentifyFileListOutcomeCallable DescribeCosIdentifyFileListCallable(const Model::DescribeCosIdentifyFileListRequest& request);

                /**
                 *查看调用记录关联的文件信息
                 * @param req DescribeCosInvokeUaRequest
                 * @return DescribeCosInvokeUaOutcome
                 */
                DescribeCosInvokeUaOutcome DescribeCosInvokeUa(const Model::DescribeCosInvokeUaRequest &request);
                void DescribeCosInvokeUaAsync(const Model::DescribeCosInvokeUaRequest& request, const DescribeCosInvokeUaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosInvokeUaOutcomeCallable DescribeCosInvokeUaCallable(const Model::DescribeCosInvokeUaRequest& request);

                /**
                 *查看cos调用日志
                 * @param req DescribeCosIpInvokeLogRequest
                 * @return DescribeCosIpInvokeLogOutcome
                 */
                DescribeCosIpInvokeLogOutcome DescribeCosIpInvokeLog(const Model::DescribeCosIpInvokeLogRequest &request);
                void DescribeCosIpInvokeLogAsync(const Model::DescribeCosIpInvokeLogRequest& request, const DescribeCosIpInvokeLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosIpInvokeLogOutcomeCallable DescribeCosIpInvokeLogCallable(const Model::DescribeCosIpInvokeLogRequest& request);

                /**
                 *查看调用记录关联的文件信息
                 * @param req DescribeCosIpInvokeRecordFileRequest
                 * @return DescribeCosIpInvokeRecordFileOutcome
                 */
                DescribeCosIpInvokeRecordFileOutcome DescribeCosIpInvokeRecordFile(const Model::DescribeCosIpInvokeRecordFileRequest &request);
                void DescribeCosIpInvokeRecordFileAsync(const Model::DescribeCosIpInvokeRecordFileRequest& request, const DescribeCosIpInvokeRecordFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosIpInvokeRecordFileOutcomeCallable DescribeCosIpInvokeRecordFileCallable(const Model::DescribeCosIpInvokeRecordFileRequest& request);

                /**
                 *cos概览信息
                 * @param req DescribeCosOverviewRequest
                 * @return DescribeCosOverviewOutcome
                 */
                DescribeCosOverviewOutcome DescribeCosOverview(const Model::DescribeCosOverviewRequest &request);
                void DescribeCosOverviewAsync(const Model::DescribeCosOverviewRequest& request, const DescribeCosOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosOverviewOutcomeCallable DescribeCosOverviewCallable(const Model::DescribeCosOverviewRequest& request);

                /**
                 *获取策略列表信息
                 * @param req DescribeCosPolicyRequest
                 * @return DescribeCosPolicyOutcome
                 */
                DescribeCosPolicyOutcome DescribeCosPolicy(const Model::DescribeCosPolicyRequest &request);
                void DescribeCosPolicyAsync(const Model::DescribeCosPolicyRequest& request, const DescribeCosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosPolicyOutcomeCallable DescribeCosPolicyCallable(const Model::DescribeCosPolicyRequest& request);

                /**
                 *风险接口列表信息
                 * @param req DescribeCosRiskActionListRequest
                 * @return DescribeCosRiskActionListOutcome
                 */
                DescribeCosRiskActionListOutcome DescribeCosRiskActionList(const Model::DescribeCosRiskActionListRequest &request);
                void DescribeCosRiskActionListAsync(const Model::DescribeCosRiskActionListRequest& request, const DescribeCosRiskActionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosRiskActionListOutcomeCallable DescribeCosRiskActionListCallable(const Model::DescribeCosRiskActionListRequest& request);

                /**
                 *查看风险证据以及描述
                 * @param req DescribeCosRiskEvidenceRequest
                 * @return DescribeCosRiskEvidenceOutcome
                 */
                DescribeCosRiskEvidenceOutcome DescribeCosRiskEvidence(const Model::DescribeCosRiskEvidenceRequest &request);
                void DescribeCosRiskEvidenceAsync(const Model::DescribeCosRiskEvidenceRequest& request, const DescribeCosRiskEvidenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosRiskEvidenceOutcomeCallable DescribeCosRiskEvidenceCallable(const Model::DescribeCosRiskEvidenceRequest& request);

                /**
                 *查看存储桶扫描任务详情
                 * @param req DescribeCosRiskScanTaskRequest
                 * @return DescribeCosRiskScanTaskOutcome
                 */
                DescribeCosRiskScanTaskOutcome DescribeCosRiskScanTask(const Model::DescribeCosRiskScanTaskRequest &request);
                void DescribeCosRiskScanTaskAsync(const Model::DescribeCosRiskScanTaskRequest& request, const DescribeCosRiskScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosRiskScanTaskOutcomeCallable DescribeCosRiskScanTaskCallable(const Model::DescribeCosRiskScanTaskRequest& request);

                /**
                 *查看cos桶访问权限信息
                 * @param req DescribeCosRoleAccessPermissionRequest
                 * @return DescribeCosRoleAccessPermissionOutcome
                 */
                DescribeCosRoleAccessPermissionOutcome DescribeCosRoleAccessPermission(const Model::DescribeCosRoleAccessPermissionRequest &request);
                void DescribeCosRoleAccessPermissionAsync(const Model::DescribeCosRoleAccessPermissionRequest& request, const DescribeCosRoleAccessPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosRoleAccessPermissionOutcomeCallable DescribeCosRoleAccessPermissionCallable(const Model::DescribeCosRoleAccessPermissionRequest& request);

                /**
                 *获取存储桶角色权限列表
                 * @param req DescribeCosRoleAccessPermissionsRequest
                 * @return DescribeCosRoleAccessPermissionsOutcome
                 */
                DescribeCosRoleAccessPermissionsOutcome DescribeCosRoleAccessPermissions(const Model::DescribeCosRoleAccessPermissionsRequest &request);
                void DescribeCosRoleAccessPermissionsAsync(const Model::DescribeCosRoleAccessPermissionsRequest& request, const DescribeCosRoleAccessPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosRoleAccessPermissionsOutcomeCallable DescribeCosRoleAccessPermissionsCallable(const Model::DescribeCosRoleAccessPermissionsRequest& request);

                /**
                 *调用源ip列表
                 * @param req DescribeCosSourceIpRequest
                 * @return DescribeCosSourceIpOutcome
                 */
                DescribeCosSourceIpOutcome DescribeCosSourceIp(const Model::DescribeCosSourceIpRequest &request);
                void DescribeCosSourceIpAsync(const Model::DescribeCosSourceIpRequest& request, const DescribeCosSourceIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosSourceIpOutcomeCallable DescribeCosSourceIpCallable(const Model::DescribeCosSourceIpRequest& request);

                /**
                 *db资产详情
                 * @param req DescribeDbAssetInfoRequest
                 * @return DescribeDbAssetInfoOutcome
                 */
                DescribeDbAssetInfoOutcome DescribeDbAssetInfo(const Model::DescribeDbAssetInfoRequest &request);
                void DescribeDbAssetInfoAsync(const Model::DescribeDbAssetInfoRequest& request, const DescribeDbAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDbAssetInfoOutcomeCallable DescribeDbAssetInfoCallable(const Model::DescribeDbAssetInfoRequest& request);

                /**
                 *数据库资产列表
                 * @param req DescribeDbAssetsRequest
                 * @return DescribeDbAssetsOutcome
                 */
                DescribeDbAssetsOutcome DescribeDbAssets(const Model::DescribeDbAssetsRequest &request);
                void DescribeDbAssetsAsync(const Model::DescribeDbAssetsRequest& request, const DescribeDbAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDbAssetsOutcomeCallable DescribeDbAssetsCallable(const Model::DescribeDbAssetsRequest& request);

                /**
                 *域名列表
                 * @param req DescribeDomainAssetsRequest
                 * @return DescribeDomainAssetsOutcome
                 */
                DescribeDomainAssetsOutcome DescribeDomainAssets(const Model::DescribeDomainAssetsRequest &request);
                void DescribeDomainAssetsAsync(const Model::DescribeDomainAssetsRequest& request, const DescribeDomainAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainAssetsOutcomeCallable DescribeDomainAssetsCallable(const Model::DescribeDomainAssetsRequest& request);

                /**
                 *查询Dspm访问记录
                 * @param req DescribeDspmAccessRecordRequest
                 * @return DescribeDspmAccessRecordOutcome
                 */
                DescribeDspmAccessRecordOutcome DescribeDspmAccessRecord(const Model::DescribeDspmAccessRecordRequest &request);
                void DescribeDspmAccessRecordAsync(const Model::DescribeDspmAccessRecordRequest& request, const DescribeDspmAccessRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAccessRecordOutcomeCallable DescribeDspmAccessRecordCallable(const Model::DescribeDspmAccessRecordRequest& request);

                /**
                 *查询Dspm访问拓扑账号列表
                 * @param req DescribeDspmAccessTopologyAccountsRequest
                 * @return DescribeDspmAccessTopologyAccountsOutcome
                 */
                DescribeDspmAccessTopologyAccountsOutcome DescribeDspmAccessTopologyAccounts(const Model::DescribeDspmAccessTopologyAccountsRequest &request);
                void DescribeDspmAccessTopologyAccountsAsync(const Model::DescribeDspmAccessTopologyAccountsRequest& request, const DescribeDspmAccessTopologyAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAccessTopologyAccountsOutcomeCallable DescribeDspmAccessTopologyAccountsCallable(const Model::DescribeDspmAccessTopologyAccountsRequest& request);

                /**
                 *查询Dspm访问拓扑资产列表
                 * @param req DescribeDspmAccessTopologyAssetsRequest
                 * @return DescribeDspmAccessTopologyAssetsOutcome
                 */
                DescribeDspmAccessTopologyAssetsOutcome DescribeDspmAccessTopologyAssets(const Model::DescribeDspmAccessTopologyAssetsRequest &request);
                void DescribeDspmAccessTopologyAssetsAsync(const Model::DescribeDspmAccessTopologyAssetsRequest& request, const DescribeDspmAccessTopologyAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAccessTopologyAssetsOutcomeCallable DescribeDspmAccessTopologyAssetsCallable(const Model::DescribeDspmAccessTopologyAssetsRequest& request);

                /**
                 *查询Dspm访问拓扑ip列表
                 * @param req DescribeDspmAccessTopologyIpsRequest
                 * @return DescribeDspmAccessTopologyIpsOutcome
                 */
                DescribeDspmAccessTopologyIpsOutcome DescribeDspmAccessTopologyIps(const Model::DescribeDspmAccessTopologyIpsRequest &request);
                void DescribeDspmAccessTopologyIpsAsync(const Model::DescribeDspmAccessTopologyIpsRequest& request, const DescribeDspmAccessTopologyIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAccessTopologyIpsOutcomeCallable DescribeDspmAccessTopologyIpsCallable(const Model::DescribeDspmAccessTopologyIpsRequest& request);

                /**
                 *查询Dspm申请历史
                 * @param req DescribeDspmApplyHistoryRequest
                 * @return DescribeDspmApplyHistoryOutcome
                 */
                DescribeDspmApplyHistoryOutcome DescribeDspmApplyHistory(const Model::DescribeDspmApplyHistoryRequest &request);
                void DescribeDspmApplyHistoryAsync(const Model::DescribeDspmApplyHistoryRequest& request, const DescribeDspmApplyHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmApplyHistoryOutcomeCallable DescribeDspmApplyHistoryCallable(const Model::DescribeDspmApplyHistoryRequest& request);

                /**
                 *查询Dspm申请单列表
                 * @param req DescribeDspmApplyOrderListRequest
                 * @return DescribeDspmApplyOrderListOutcome
                 */
                DescribeDspmApplyOrderListOutcome DescribeDspmApplyOrderList(const Model::DescribeDspmApplyOrderListRequest &request);
                void DescribeDspmApplyOrderListAsync(const Model::DescribeDspmApplyOrderListRequest& request, const DescribeDspmApplyOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmApplyOrderListOutcomeCallable DescribeDspmApplyOrderListCallable(const Model::DescribeDspmApplyOrderListRequest& request);

                /**
                 *查询Dspm审批历史
                 * @param req DescribeDspmApproveHistoryRequest
                 * @return DescribeDspmApproveHistoryOutcome
                 */
                DescribeDspmApproveHistoryOutcome DescribeDspmApproveHistory(const Model::DescribeDspmApproveHistoryRequest &request);
                void DescribeDspmApproveHistoryAsync(const Model::DescribeDspmApproveHistoryRequest& request, const DescribeDspmApproveHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmApproveHistoryOutcomeCallable DescribeDspmApproveHistoryCallable(const Model::DescribeDspmApproveHistoryRequest& request);

                /**
                 *查询Dspm审批单列表
                 * @param req DescribeDspmApproveOrderListRequest
                 * @return DescribeDspmApproveOrderListOutcome
                 */
                DescribeDspmApproveOrderListOutcome DescribeDspmApproveOrderList(const Model::DescribeDspmApproveOrderListRequest &request);
                void DescribeDspmApproveOrderListAsync(const Model::DescribeDspmApproveOrderListRequest& request, const DescribeDspmApproveOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmApproveOrderListOutcomeCallable DescribeDspmApproveOrderListCallable(const Model::DescribeDspmApproveOrderListRequest& request);

                /**
                 *查询Dspm资产访问拓扑
                 * @param req DescribeDspmAssetAccessTopologyRequest
                 * @return DescribeDspmAssetAccessTopologyOutcome
                 */
                DescribeDspmAssetAccessTopologyOutcome DescribeDspmAssetAccessTopology(const Model::DescribeDspmAssetAccessTopologyRequest &request);
                void DescribeDspmAssetAccessTopologyAsync(const Model::DescribeDspmAssetAccessTopologyRequest& request, const DescribeDspmAssetAccessTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetAccessTopologyOutcomeCallable DescribeDspmAssetAccessTopologyCallable(const Model::DescribeDspmAssetAccessTopologyRequest& request);

                /**
                 *查询Dspm资产账号身份信息
                 * @param req DescribeDspmAssetAccountIdentifyRequest
                 * @return DescribeDspmAssetAccountIdentifyOutcome
                 */
                DescribeDspmAssetAccountIdentifyOutcome DescribeDspmAssetAccountIdentify(const Model::DescribeDspmAssetAccountIdentifyRequest &request);
                void DescribeDspmAssetAccountIdentifyAsync(const Model::DescribeDspmAssetAccountIdentifyRequest& request, const DescribeDspmAssetAccountIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetAccountIdentifyOutcomeCallable DescribeDspmAssetAccountIdentifyCallable(const Model::DescribeDspmAssetAccountIdentifyRequest& request);

                /**
                 *查询Dspm资产账号预设特权信息
                 * @param req DescribeDspmAssetAccountPresetPrivilegesRequest
                 * @return DescribeDspmAssetAccountPresetPrivilegesOutcome
                 */
                DescribeDspmAssetAccountPresetPrivilegesOutcome DescribeDspmAssetAccountPresetPrivileges(const Model::DescribeDspmAssetAccountPresetPrivilegesRequest &request);
                void DescribeDspmAssetAccountPresetPrivilegesAsync(const Model::DescribeDspmAssetAccountPresetPrivilegesRequest& request, const DescribeDspmAssetAccountPresetPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetAccountPresetPrivilegesOutcomeCallable DescribeDspmAssetAccountPresetPrivilegesCallable(const Model::DescribeDspmAssetAccountPresetPrivilegesRequest& request);

                /**
                 *查询Dspm资产账号回收后特权信息
                 * @param req DescribeDspmAssetAccountRecycledPrivilegesRequest
                 * @return DescribeDspmAssetAccountRecycledPrivilegesOutcome
                 */
                DescribeDspmAssetAccountRecycledPrivilegesOutcome DescribeDspmAssetAccountRecycledPrivileges(const Model::DescribeDspmAssetAccountRecycledPrivilegesRequest &request);
                void DescribeDspmAssetAccountRecycledPrivilegesAsync(const Model::DescribeDspmAssetAccountRecycledPrivilegesRequest& request, const DescribeDspmAssetAccountRecycledPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetAccountRecycledPrivilegesOutcomeCallable DescribeDspmAssetAccountRecycledPrivilegesCallable(const Model::DescribeDspmAssetAccountRecycledPrivilegesRequest& request);

                /**
                 *查询Dspm资产账号列表
                 * @param req DescribeDspmAssetAccountsRequest
                 * @return DescribeDspmAssetAccountsOutcome
                 */
                DescribeDspmAssetAccountsOutcome DescribeDspmAssetAccounts(const Model::DescribeDspmAssetAccountsRequest &request);
                void DescribeDspmAssetAccountsAsync(const Model::DescribeDspmAssetAccountsRequest& request, const DescribeDspmAssetAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetAccountsOutcomeCallable DescribeDspmAssetAccountsCallable(const Model::DescribeDspmAssetAccountsRequest& request);

                /**
                 *查询资产数据库信息
                 * @param req DescribeDspmAssetDatabaseListRequest
                 * @return DescribeDspmAssetDatabaseListOutcome
                 */
                DescribeDspmAssetDatabaseListOutcome DescribeDspmAssetDatabaseList(const Model::DescribeDspmAssetDatabaseListRequest &request);
                void DescribeDspmAssetDatabaseListAsync(const Model::DescribeDspmAssetDatabaseListRequest& request, const DescribeDspmAssetDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetDatabaseListOutcomeCallable DescribeDspmAssetDatabaseListCallable(const Model::DescribeDspmAssetDatabaseListRequest& request);

                /**
                 *查询Dspm资产数据库列表
                 * @param req DescribeDspmAssetDatabasesRequest
                 * @return DescribeDspmAssetDatabasesOutcome
                 */
                DescribeDspmAssetDatabasesOutcome DescribeDspmAssetDatabases(const Model::DescribeDspmAssetDatabasesRequest &request);
                void DescribeDspmAssetDatabasesAsync(const Model::DescribeDspmAssetDatabasesRequest& request, const DescribeDspmAssetDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetDatabasesOutcomeCallable DescribeDspmAssetDatabasesCallable(const Model::DescribeDspmAssetDatabasesRequest& request);

                /**
                 *查询dspm资产字段信息
                 * @param req DescribeDspmAssetFieldListRequest
                 * @return DescribeDspmAssetFieldListOutcome
                 */
                DescribeDspmAssetFieldListOutcome DescribeDspmAssetFieldList(const Model::DescribeDspmAssetFieldListRequest &request);
                void DescribeDspmAssetFieldListAsync(const Model::DescribeDspmAssetFieldListRequest& request, const DescribeDspmAssetFieldListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetFieldListOutcomeCallable DescribeDspmAssetFieldListCallable(const Model::DescribeDspmAssetFieldListRequest& request);

                /**
                 *查询Dspm资产id列表
                 * @param req DescribeDspmAssetIdsRequest
                 * @return DescribeDspmAssetIdsOutcome
                 */
                DescribeDspmAssetIdsOutcome DescribeDspmAssetIds(const Model::DescribeDspmAssetIdsRequest &request);
                void DescribeDspmAssetIdsAsync(const Model::DescribeDspmAssetIdsRequest& request, const DescribeDspmAssetIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetIdsOutcomeCallable DescribeDspmAssetIdsCallable(const Model::DescribeDspmAssetIdsRequest& request);

                /**
                 *查询Dspm资产登录凭据
                 * @param req DescribeDspmAssetLoginCredentialRequest
                 * @return DescribeDspmAssetLoginCredentialOutcome
                 */
                DescribeDspmAssetLoginCredentialOutcome DescribeDspmAssetLoginCredential(const Model::DescribeDspmAssetLoginCredentialRequest &request);
                void DescribeDspmAssetLoginCredentialAsync(const Model::DescribeDspmAssetLoginCredentialRequest& request, const DescribeDspmAssetLoginCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetLoginCredentialOutcomeCallable DescribeDspmAssetLoginCredentialCallable(const Model::DescribeDspmAssetLoginCredentialRequest& request);

                /**
                 *查询Dspm资产安全分析状态
                 * @param req DescribeDspmAssetSecurityAnalyseStatusRequest
                 * @return DescribeDspmAssetSecurityAnalyseStatusOutcome
                 */
                DescribeDspmAssetSecurityAnalyseStatusOutcome DescribeDspmAssetSecurityAnalyseStatus(const Model::DescribeDspmAssetSecurityAnalyseStatusRequest &request);
                void DescribeDspmAssetSecurityAnalyseStatusAsync(const Model::DescribeDspmAssetSecurityAnalyseStatusRequest& request, const DescribeDspmAssetSecurityAnalyseStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetSecurityAnalyseStatusOutcomeCallable DescribeDspmAssetSecurityAnalyseStatusCallable(const Model::DescribeDspmAssetSecurityAnalyseStatusRequest& request);

                /**
                 *查询Dspm资产支持的权限
                 * @param req DescribeDspmAssetSupportedPrivilegesRequest
                 * @return DescribeDspmAssetSupportedPrivilegesOutcome
                 */
                DescribeDspmAssetSupportedPrivilegesOutcome DescribeDspmAssetSupportedPrivileges(const Model::DescribeDspmAssetSupportedPrivilegesRequest &request);
                void DescribeDspmAssetSupportedPrivilegesAsync(const Model::DescribeDspmAssetSupportedPrivilegesRequest& request, const DescribeDspmAssetSupportedPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetSupportedPrivilegesOutcomeCallable DescribeDspmAssetSupportedPrivilegesCallable(const Model::DescribeDspmAssetSupportedPrivilegesRequest& request);

                /**
                 *查询资产表信息
                 * @param req DescribeDspmAssetTableListRequest
                 * @return DescribeDspmAssetTableListOutcome
                 */
                DescribeDspmAssetTableListOutcome DescribeDspmAssetTableList(const Model::DescribeDspmAssetTableListRequest &request);
                void DescribeDspmAssetTableListAsync(const Model::DescribeDspmAssetTableListRequest& request, const DescribeDspmAssetTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetTableListOutcomeCallable DescribeDspmAssetTableListCallable(const Model::DescribeDspmAssetTableListRequest& request);

                /**
                 *查询Dspm资产列表
                 * @param req DescribeDspmAssetsRequest
                 * @return DescribeDspmAssetsOutcome
                 */
                DescribeDspmAssetsOutcome DescribeDspmAssets(const Model::DescribeDspmAssetsRequest &request);
                void DescribeDspmAssetsAsync(const Model::DescribeDspmAssetsRequest& request, const DescribeDspmAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetsOutcomeCallable DescribeDspmAssetsCallable(const Model::DescribeDspmAssetsRequest& request);

                /**
                 *查询备份日志列表
                 * @param req DescribeDspmBackupLogListRequest
                 * @return DescribeDspmBackupLogListOutcome
                 */
                DescribeDspmBackupLogListOutcome DescribeDspmBackupLogList(const Model::DescribeDspmBackupLogListRequest &request);
                void DescribeDspmBackupLogListAsync(const Model::DescribeDspmBackupLogListRequest& request, const DescribeDspmBackupLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmBackupLogListOutcomeCallable DescribeDspmBackupLogListCallable(const Model::DescribeDspmBackupLogListRequest& request);

                /**
                 *查询日志备份配置
                 * @param req DescribeDspmBackupSettingRequest
                 * @return DescribeDspmBackupSettingOutcome
                 */
                DescribeDspmBackupSettingOutcome DescribeDspmBackupSetting(const Model::DescribeDspmBackupSettingRequest &request);
                void DescribeDspmBackupSettingAsync(const Model::DescribeDspmBackupSettingRequest& request, const DescribeDspmBackupSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmBackupSettingOutcomeCallable DescribeDspmBackupSettingCallable(const Model::DescribeDspmBackupSettingRequest& request);

                /**
                 *查询dspm字典信息列表
                 * @param req DescribeDspmDictionaryListRequest
                 * @return DescribeDspmDictionaryListOutcome
                 */
                DescribeDspmDictionaryListOutcome DescribeDspmDictionaryList(const Model::DescribeDspmDictionaryListRequest &request);
                void DescribeDspmDictionaryListAsync(const Model::DescribeDspmDictionaryListRequest& request, const DescribeDspmDictionaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmDictionaryListOutcomeCallable DescribeDspmDictionaryListCallable(const Model::DescribeDspmDictionaryListRequest& request);

                /**
                 *查询导出任务
                 * @param req DescribeDspmExportTaskRequest
                 * @return DescribeDspmExportTaskOutcome
                 */
                DescribeDspmExportTaskOutcome DescribeDspmExportTask(const Model::DescribeDspmExportTaskRequest &request);
                void DescribeDspmExportTaskAsync(const Model::DescribeDspmExportTaskRequest& request, const DescribeDspmExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmExportTaskOutcomeCallable DescribeDspmExportTaskCallable(const Model::DescribeDspmExportTaskRequest& request);

                /**
                 *查询Dspm身份id列表
                 * @param req DescribeDspmIdentifyIdListRequest
                 * @return DescribeDspmIdentifyIdListOutcome
                 */
                DescribeDspmIdentifyIdListOutcome DescribeDspmIdentifyIdList(const Model::DescribeDspmIdentifyIdListRequest &request);
                void DescribeDspmIdentifyIdListAsync(const Model::DescribeDspmIdentifyIdListRequest& request, const DescribeDspmIdentifyIdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyIdListOutcomeCallable DescribeDspmIdentifyIdListCallable(const Model::DescribeDspmIdentifyIdListRequest& request);

                /**
                 *查询Dspm身份信息
                 * @param req DescribeDspmIdentifyInfoRequest
                 * @return DescribeDspmIdentifyInfoOutcome
                 */
                DescribeDspmIdentifyInfoOutcome DescribeDspmIdentifyInfo(const Model::DescribeDspmIdentifyInfoRequest &request);
                void DescribeDspmIdentifyInfoAsync(const Model::DescribeDspmIdentifyInfoRequest& request, const DescribeDspmIdentifyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyInfoOutcomeCallable DescribeDspmIdentifyInfoCallable(const Model::DescribeDspmIdentifyInfoRequest& request);

                /**
                 *查询Dspm身份信息列表
                 * @param req DescribeDspmIdentifyInfoListRequest
                 * @return DescribeDspmIdentifyInfoListOutcome
                 */
                DescribeDspmIdentifyInfoListOutcome DescribeDspmIdentifyInfoList(const Model::DescribeDspmIdentifyInfoListRequest &request);
                void DescribeDspmIdentifyInfoListAsync(const Model::DescribeDspmIdentifyInfoListRequest& request, const DescribeDspmIdentifyInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyInfoListOutcomeCallable DescribeDspmIdentifyInfoListCallable(const Model::DescribeDspmIdentifyInfoListRequest& request);

                /**
                 *查询日志列表信息
                 * @param req DescribeDspmLogListRequest
                 * @return DescribeDspmLogListOutcome
                 */
                DescribeDspmLogListOutcome DescribeDspmLogList(const Model::DescribeDspmLogListRequest &request);
                void DescribeDspmLogListAsync(const Model::DescribeDspmLogListRequest& request, const DescribeDspmLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmLogListOutcomeCallable DescribeDspmLogListCallable(const Model::DescribeDspmLogListRequest& request);

                /**
                 *获取已购Dspm订单信息
                 * @param req DescribeDspmPayInfoRequest
                 * @return DescribeDspmPayInfoOutcome
                 */
                DescribeDspmPayInfoOutcome DescribeDspmPayInfo(const Model::DescribeDspmPayInfoRequest &request);
                void DescribeDspmPayInfoAsync(const Model::DescribeDspmPayInfoRequest& request, const DescribeDspmPayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmPayInfoOutcomeCallable DescribeDspmPayInfoCallable(const Model::DescribeDspmPayInfoRequest& request);

                /**
                 *查询Dspm访客申请记录
                 * @param req DescribeDspmPersonApplyHistoryRequest
                 * @return DescribeDspmPersonApplyHistoryOutcome
                 */
                DescribeDspmPersonApplyHistoryOutcome DescribeDspmPersonApplyHistory(const Model::DescribeDspmPersonApplyHistoryRequest &request);
                void DescribeDspmPersonApplyHistoryAsync(const Model::DescribeDspmPersonApplyHistoryRequest& request, const DescribeDspmPersonApplyHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmPersonApplyHistoryOutcomeCallable DescribeDspmPersonApplyHistoryCallable(const Model::DescribeDspmPersonApplyHistoryRequest& request);

                /**
                 *查询Dspm个人身份信息列表
                 * @param req DescribeDspmPersonalIdentifyListRequest
                 * @return DescribeDspmPersonalIdentifyListOutcome
                 */
                DescribeDspmPersonalIdentifyListOutcome DescribeDspmPersonalIdentifyList(const Model::DescribeDspmPersonalIdentifyListRequest &request);
                void DescribeDspmPersonalIdentifyListAsync(const Model::DescribeDspmPersonalIdentifyListRequest& request, const DescribeDspmPersonalIdentifyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmPersonalIdentifyListOutcomeCallable DescribeDspmPersonalIdentifyListCallable(const Model::DescribeDspmPersonalIdentifyListRequest& request);

                /**
                 *查询Dspm风险记录
                 * @param req DescribeDspmRiskRequest
                 * @return DescribeDspmRiskOutcome
                 */
                DescribeDspmRiskOutcome DescribeDspmRisk(const Model::DescribeDspmRiskRequest &request);
                void DescribeDspmRiskAsync(const Model::DescribeDspmRiskRequest& request, const DescribeDspmRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmRiskOutcomeCallable DescribeDspmRiskCallable(const Model::DescribeDspmRiskRequest& request);

                /**
                 *查询Dspm风险详情
                 * @param req DescribeDspmRiskDetailRequest
                 * @return DescribeDspmRiskDetailOutcome
                 */
                DescribeDspmRiskDetailOutcome DescribeDspmRiskDetail(const Model::DescribeDspmRiskDetailRequest &request);
                void DescribeDspmRiskDetailAsync(const Model::DescribeDspmRiskDetailRequest& request, const DescribeDspmRiskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmRiskDetailOutcomeCallable DescribeDspmRiskDetailCallable(const Model::DescribeDspmRiskDetailRequest& request);

                /**
                 *查询Dspm风险策略
                 * @param req DescribeDspmRiskStrategyRequest
                 * @return DescribeDspmRiskStrategyOutcome
                 */
                DescribeDspmRiskStrategyOutcome DescribeDspmRiskStrategy(const Model::DescribeDspmRiskStrategyRequest &request);
                void DescribeDspmRiskStrategyAsync(const Model::DescribeDspmRiskStrategyRequest& request, const DescribeDspmRiskStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmRiskStrategyOutcomeCallable DescribeDspmRiskStrategyCallable(const Model::DescribeDspmRiskStrategyRequest& request);

                /**
                 *查询Dspm风险分组策略
                 * @param req DescribeDspmRiskStrategyGroupRequest
                 * @return DescribeDspmRiskStrategyGroupOutcome
                 */
                DescribeDspmRiskStrategyGroupOutcome DescribeDspmRiskStrategyGroup(const Model::DescribeDspmRiskStrategyGroupRequest &request);
                void DescribeDspmRiskStrategyGroupAsync(const Model::DescribeDspmRiskStrategyGroupRequest& request, const DescribeDspmRiskStrategyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmRiskStrategyGroupOutcomeCallable DescribeDspmRiskStrategyGroupCallable(const Model::DescribeDspmRiskStrategyGroupRequest& request);

                /**
                 *查询Dspm风险趋势
                 * @param req DescribeDspmRiskTendencyRequest
                 * @return DescribeDspmRiskTendencyOutcome
                 */
                DescribeDspmRiskTendencyOutcome DescribeDspmRiskTendency(const Model::DescribeDspmRiskTendencyRequest &request);
                void DescribeDspmRiskTendencyAsync(const Model::DescribeDspmRiskTendencyRequest& request, const DescribeDspmRiskTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmRiskTendencyOutcomeCallable DescribeDspmRiskTendencyCallable(const Model::DescribeDspmRiskTendencyRequest& request);

                /**
                 *查询Dspm统计信息
                 * @param req DescribeDspmStatisticsRequest
                 * @return DescribeDspmStatisticsOutcome
                 */
                DescribeDspmStatisticsOutcome DescribeDspmStatistics(const Model::DescribeDspmStatisticsRequest &request);
                void DescribeDspmStatisticsAsync(const Model::DescribeDspmStatisticsRequest& request, const DescribeDspmStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmStatisticsOutcomeCallable DescribeDspmStatisticsCallable(const Model::DescribeDspmStatisticsRequest& request);

                /**
                 *查询Dspm支持的资产类型信息
                 * @param req DescribeDspmSupportedAssetTypeRequest
                 * @return DescribeDspmSupportedAssetTypeOutcome
                 */
                DescribeDspmSupportedAssetTypeOutcome DescribeDspmSupportedAssetType(const Model::DescribeDspmSupportedAssetTypeRequest &request);
                void DescribeDspmSupportedAssetTypeAsync(const Model::DescribeDspmSupportedAssetTypeRequest& request, const DescribeDspmSupportedAssetTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmSupportedAssetTypeOutcomeCallable DescribeDspmSupportedAssetTypeCallable(const Model::DescribeDspmSupportedAssetTypeRequest& request);

                /**
                 *查询Dspm同步资产状态
                 * @param req DescribeDspmSyncAssetsStatusRequest
                 * @return DescribeDspmSyncAssetsStatusOutcome
                 */
                DescribeDspmSyncAssetsStatusOutcome DescribeDspmSyncAssetsStatus(const Model::DescribeDspmSyncAssetsStatusRequest &request);
                void DescribeDspmSyncAssetsStatusAsync(const Model::DescribeDspmSyncAssetsStatusRequest& request, const DescribeDspmSyncAssetsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmSyncAssetsStatusOutcomeCallable DescribeDspmSyncAssetsStatusCallable(const Model::DescribeDspmSyncAssetsStatusRequest& request);

                /**
                 *查询Dspm同步用户状态
                 * @param req DescribeDspmSyncUsersStatusRequest
                 * @return DescribeDspmSyncUsersStatusOutcome
                 */
                DescribeDspmSyncUsersStatusOutcome DescribeDspmSyncUsersStatus(const Model::DescribeDspmSyncUsersStatusRequest &request);
                void DescribeDspmSyncUsersStatusAsync(const Model::DescribeDspmSyncUsersStatusRequest& request, const DescribeDspmSyncUsersStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmSyncUsersStatusOutcomeCallable DescribeDspmSyncUsersStatusCallable(const Model::DescribeDspmSyncUsersStatusRequest& request);

                /**
                 *查询Dspm白名单策略
                 * @param req DescribeDspmWhitelistStrategyRequest
                 * @return DescribeDspmWhitelistStrategyOutcome
                 */
                DescribeDspmWhitelistStrategyOutcome DescribeDspmWhitelistStrategy(const Model::DescribeDspmWhitelistStrategyRequest &request);
                void DescribeDspmWhitelistStrategyAsync(const Model::DescribeDspmWhitelistStrategyRequest& request, const DescribeDspmWhitelistStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmWhitelistStrategyOutcomeCallable DescribeDspmWhitelistStrategyCallable(const Model::DescribeDspmWhitelistStrategyRequest& request);

                /**
                 *云边界分析资产分类
                 * @param req DescribeExposeAssetCategoryRequest
                 * @return DescribeExposeAssetCategoryOutcome
                 */
                DescribeExposeAssetCategoryOutcome DescribeExposeAssetCategory(const Model::DescribeExposeAssetCategoryRequest &request);
                void DescribeExposeAssetCategoryAsync(const Model::DescribeExposeAssetCategoryRequest& request, const DescribeExposeAssetCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposeAssetCategoryOutcomeCallable DescribeExposeAssetCategoryCallable(const Model::DescribeExposeAssetCategoryRequest& request);

                /**
                 *查询云边界分析路径节点
                 * @param req DescribeExposePathRequest
                 * @return DescribeExposePathOutcome
                 */
                DescribeExposePathOutcome DescribeExposePath(const Model::DescribeExposePathRequest &request);
                void DescribeExposePathAsync(const Model::DescribeExposePathRequest& request, const DescribeExposePathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposePathOutcomeCallable DescribeExposePathCallable(const Model::DescribeExposePathRequest& request);

                /**
                 *云边界分析资产列表
                 * @param req DescribeExposuresRequest
                 * @return DescribeExposuresOutcome
                 */
                DescribeExposuresOutcome DescribeExposures(const Model::DescribeExposuresRequest &request);
                void DescribeExposuresAsync(const Model::DescribeExposuresRequest& request, const DescribeExposuresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposuresOutcomeCallable DescribeExposuresCallable(const Model::DescribeExposuresRequest& request);

                /**
                 *获取网关列表
                 * @param req DescribeGatewayAssetsRequest
                 * @return DescribeGatewayAssetsOutcome
                 */
                DescribeGatewayAssetsOutcome DescribeGatewayAssets(const Model::DescribeGatewayAssetsRequest &request);
                void DescribeGatewayAssetsAsync(const Model::DescribeGatewayAssetsRequest& request, const DescribeGatewayAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayAssetsOutcomeCallable DescribeGatewayAssetsCallable(const Model::DescribeGatewayAssetsRequest& request);

                /**
                 *查询云边界分析-暴露路径下主机节点的高危基线风险列表
                 * @param req DescribeHighBaseLineRiskListRequest
                 * @return DescribeHighBaseLineRiskListOutcome
                 */
                DescribeHighBaseLineRiskListOutcome DescribeHighBaseLineRiskList(const Model::DescribeHighBaseLineRiskListRequest &request);
                void DescribeHighBaseLineRiskListAsync(const Model::DescribeHighBaseLineRiskListRequest& request, const DescribeHighBaseLineRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHighBaseLineRiskListOutcomeCallable DescribeHighBaseLineRiskListCallable(const Model::DescribeHighBaseLineRiskListRequest& request);

                /**
                 *获取IaC检测文件列表
                 * @param req DescribeIaCFileListRequest
                 * @return DescribeIaCFileListOutcome
                 */
                DescribeIaCFileListOutcome DescribeIaCFileList(const Model::DescribeIaCFileListRequest &request);
                void DescribeIaCFileListAsync(const Model::DescribeIaCFileListRequest& request, const DescribeIaCFileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIaCFileListOutcomeCallable DescribeIaCFileListCallable(const Model::DescribeIaCFileListRequest& request);

                /**
                 *获取IaC检测文件概览
                 * @param req DescribeIaCFileOverviewRequest
                 * @return DescribeIaCFileOverviewOutcome
                 */
                DescribeIaCFileOverviewOutcome DescribeIaCFileOverview(const Model::DescribeIaCFileOverviewRequest &request);
                void DescribeIaCFileOverviewAsync(const Model::DescribeIaCFileOverviewRequest& request, const DescribeIaCFileOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIaCFileOverviewOutcomeCallable DescribeIaCFileOverviewCallable(const Model::DescribeIaCFileOverviewRequest& request);

                /**
                 *获取IaC检测文件报告
                 * @param req DescribeIaCFileReportRequest
                 * @return DescribeIaCFileReportOutcome
                 */
                DescribeIaCFileReportOutcome DescribeIaCFileReport(const Model::DescribeIaCFileReportRequest &request);
                void DescribeIaCFileReportAsync(const Model::DescribeIaCFileReportRequest& request, const DescribeIaCFileReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIaCFileReportOutcomeCallable DescribeIaCFileReportCallable(const Model::DescribeIaCFileReportRequest& request);

                /**
                 *获取IaC检测接入Token列表
                 * @param req DescribeIaCTokenListRequest
                 * @return DescribeIaCTokenListOutcome
                 */
                DescribeIaCTokenListOutcome DescribeIaCTokenList(const Model::DescribeIaCTokenListRequest &request);
                void DescribeIaCTokenListAsync(const Model::DescribeIaCTokenListRequest& request, const DescribeIaCTokenListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIaCTokenListOutcomeCallable DescribeIaCTokenListCallable(const Model::DescribeIaCTokenListRequest& request);

                /**
                 *对象存储异常检测调用记录信息
                 * @param req DescribeIpInvokeRecordRequest
                 * @return DescribeIpInvokeRecordOutcome
                 */
                DescribeIpInvokeRecordOutcome DescribeIpInvokeRecord(const Model::DescribeIpInvokeRecordRequest &request);
                void DescribeIpInvokeRecordAsync(const Model::DescribeIpInvokeRecordRequest& request, const DescribeIpInvokeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpInvokeRecordOutcomeCallable DescribeIpInvokeRecordCallable(const Model::DescribeIpInvokeRecordRequest& request);

                /**
                 *ip访问列表详情信息
                 * @param req DescribeIpInvokeRecordDetailRequest
                 * @return DescribeIpInvokeRecordDetailOutcome
                 */
                DescribeIpInvokeRecordDetailOutcome DescribeIpInvokeRecordDetail(const Model::DescribeIpInvokeRecordDetailRequest &request);
                void DescribeIpInvokeRecordDetailAsync(const Model::DescribeIpInvokeRecordDetailRequest& request, const DescribeIpInvokeRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpInvokeRecordDetailOutcomeCallable DescribeIpInvokeRecordDetailCallable(const Model::DescribeIpInvokeRecordDetailRequest& request);

                /**
                 *查询凭证详情，返回凭证元数据和打码后的凭据数据。access类型返回Access数组（Key原文、Value打码），sts类型返回STS对象（System原文、SecretID和SecretKey打码）
                 * @param req DescribeKeySandboxCredentialRequest
                 * @return DescribeKeySandboxCredentialOutcome
                 */
                DescribeKeySandboxCredentialOutcome DescribeKeySandboxCredential(const Model::DescribeKeySandboxCredentialRequest &request);
                void DescribeKeySandboxCredentialAsync(const Model::DescribeKeySandboxCredentialRequest& request, const DescribeKeySandboxCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeySandboxCredentialOutcomeCallable DescribeKeySandboxCredentialCallable(const Model::DescribeKeySandboxCredentialRequest& request);

                /**
                 *查询凭证列表
                 * @param req DescribeKeySandboxCredentialListRequest
                 * @return DescribeKeySandboxCredentialListOutcome
                 */
                DescribeKeySandboxCredentialListOutcome DescribeKeySandboxCredentialList(const Model::DescribeKeySandboxCredentialListRequest &request);
                void DescribeKeySandboxCredentialListAsync(const Model::DescribeKeySandboxCredentialListRequest& request, const DescribeKeySandboxCredentialListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeySandboxCredentialListOutcomeCallable DescribeKeySandboxCredentialListCallable(const Model::DescribeKeySandboxCredentialListRequest& request);

                /**
                 *查询clb监听器列表
                 * @param req DescribeListenerListRequest
                 * @return DescribeListenerListOutcome
                 */
                DescribeListenerListOutcome DescribeListenerList(const Model::DescribeListenerListRequest &request);
                void DescribeListenerListAsync(const Model::DescribeListenerListRequest& request, const DescribeListenerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenerListOutcomeCallable DescribeListenerListCallable(const Model::DescribeListenerListRequest& request);

                /**
                 *获取网卡列表
                 * @param req DescribeNICAssetsRequest
                 * @return DescribeNICAssetsOutcome
                 */
                DescribeNICAssetsOutcome DescribeNICAssets(const Model::DescribeNICAssetsRequest &request);
                void DescribeNICAssetsAsync(const Model::DescribeNICAssetsRequest& request, const DescribeNICAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNICAssetsOutcomeCallable DescribeNICAssetsCallable(const Model::DescribeNICAssetsRequest& request);

                /**
                 *获取通知资产范围配置
                 * @param req DescribeNotifyAssetConfigRequest
                 * @return DescribeNotifyAssetConfigOutcome
                 */
                DescribeNotifyAssetConfigOutcome DescribeNotifyAssetConfig(const Model::DescribeNotifyAssetConfigRequest &request);
                void DescribeNotifyAssetConfigAsync(const Model::DescribeNotifyAssetConfigRequest& request, const DescribeNotifyAssetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotifyAssetConfigOutcomeCallable DescribeNotifyAssetConfigCallable(const Model::DescribeNotifyAssetConfigRequest& request);

                /**
                 *获取通知设置
                 * @param req DescribeNotifySettingRequest
                 * @return DescribeNotifySettingOutcome
                 */
                DescribeNotifySettingOutcome DescribeNotifySetting(const Model::DescribeNotifySettingRequest &request);
                void DescribeNotifySettingAsync(const Model::DescribeNotifySettingRequest& request, const DescribeNotifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotifySettingOutcomeCallable DescribeNotifySettingCallable(const Model::DescribeNotifySettingRequest& request);

                /**
                 *获取告警中心通知高级配置
                 * @param req DescribeNotifySettingAlertRequest
                 * @return DescribeNotifySettingAlertOutcome
                 */
                DescribeNotifySettingAlertOutcome DescribeNotifySettingAlert(const Model::DescribeNotifySettingAlertRequest &request);
                void DescribeNotifySettingAlertAsync(const Model::DescribeNotifySettingAlertRequest& request, const DescribeNotifySettingAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotifySettingAlertOutcomeCallable DescribeNotifySettingAlertCallable(const Model::DescribeNotifySettingAlertRequest& request);

                /**
                 *查询集团账号详情
                 * @param req DescribeOrganizationInfoRequest
                 * @return DescribeOrganizationInfoOutcome
                 */
                DescribeOrganizationInfoOutcome DescribeOrganizationInfo(const Model::DescribeOrganizationInfoRequest &request);
                void DescribeOrganizationInfoAsync(const Model::DescribeOrganizationInfoRequest& request, const DescribeOrganizationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationInfoOutcomeCallable DescribeOrganizationInfoCallable(const Model::DescribeOrganizationInfoRequest& request);

                /**
                 *查询集团账号用户列表
                 * @param req DescribeOrganizationUserInfoRequest
                 * @return DescribeOrganizationUserInfoOutcome
                 */
                DescribeOrganizationUserInfoOutcome DescribeOrganizationUserInfo(const Model::DescribeOrganizationUserInfoRequest &request);
                void DescribeOrganizationUserInfoAsync(const Model::DescribeOrganizationUserInfoRequest& request, const DescribeOrganizationUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationUserInfoOutcomeCallable DescribeOrganizationUserInfoCallable(const Model::DescribeOrganizationUserInfoRequest& request);

                /**
                 *资产列表
                 * @param req DescribeOtherCloudAssetsRequest
                 * @return DescribeOtherCloudAssetsOutcome
                 */
                DescribeOtherCloudAssetsOutcome DescribeOtherCloudAssets(const Model::DescribeOtherCloudAssetsRequest &request);
                void DescribeOtherCloudAssetsAsync(const Model::DescribeOtherCloudAssetsRequest& request, const DescribeOtherCloudAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOtherCloudAssetsOutcomeCallable DescribeOtherCloudAssetsCallable(const Model::DescribeOtherCloudAssetsRequest& request);

                /**
                 *按日期查看策略命中详情
                 * @param req DescribePolicyHitDataRequest
                 * @return DescribePolicyHitDataOutcome
                 */
                DescribePolicyHitDataOutcome DescribePolicyHitData(const Model::DescribePolicyHitDataRequest &request);
                void DescribePolicyHitDataAsync(const Model::DescribePolicyHitDataRequest& request, const DescribePolicyHitDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyHitDataOutcomeCallable DescribePolicyHitDataCallable(const Model::DescribePolicyHitDataRequest& request);

                /**
                 *ip公网列表
                 * @param req DescribePublicIpAssetsRequest
                 * @return DescribePublicIpAssetsOutcome
                 */
                DescribePublicIpAssetsOutcome DescribePublicIpAssets(const Model::DescribePublicIpAssetsRequest &request);
                void DescribePublicIpAssetsAsync(const Model::DescribePublicIpAssetsRequest& request, const DescribePublicIpAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicIpAssetsOutcomeCallable DescribePublicIpAssetsCallable(const Model::DescribePublicIpAssetsRequest& request);

                /**
                 *仓库镜像列表
                 * @param req DescribeRepositoryImageAssetsRequest
                 * @return DescribeRepositoryImageAssetsOutcome
                 */
                DescribeRepositoryImageAssetsOutcome DescribeRepositoryImageAssets(const Model::DescribeRepositoryImageAssetsRequest &request);
                void DescribeRepositoryImageAssetsAsync(const Model::DescribeRepositoryImageAssetsRequest& request, const DescribeRepositoryImageAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRepositoryImageAssetsOutcomeCallable DescribeRepositoryImageAssetsCallable(const Model::DescribeRepositoryImageAssetsRequest& request);

                /**
                 *查看风险关联的存储桶信息
                 * @param req DescribeRiskBucketListRequest
                 * @return DescribeRiskBucketListOutcome
                 */
                DescribeRiskBucketListOutcome DescribeRiskBucketList(const Model::DescribeRiskBucketListRequest &request);
                void DescribeRiskBucketListAsync(const Model::DescribeRiskBucketListRequest& request, const DescribeRiskBucketListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskBucketListOutcomeCallable DescribeRiskBucketListCallable(const Model::DescribeRiskBucketListRequest& request);

                /**
                 *获取风险调用记录列表
                 * @param req DescribeRiskCallRecordRequest
                 * @return DescribeRiskCallRecordOutcome
                 */
                DescribeRiskCallRecordOutcome DescribeRiskCallRecord(const Model::DescribeRiskCallRecordRequest &request);
                void DescribeRiskCallRecordAsync(const Model::DescribeRiskCallRecordRequest& request, const DescribeRiskCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCallRecordOutcomeCallable DescribeRiskCallRecordCallable(const Model::DescribeRiskCallRecordRequest& request);

                /**
                 *获取资产视角的配置风险列表
                 * @param req DescribeRiskCenterAssetViewCFGRiskListRequest
                 * @return DescribeRiskCenterAssetViewCFGRiskListOutcome
                 */
                DescribeRiskCenterAssetViewCFGRiskListOutcome DescribeRiskCenterAssetViewCFGRiskList(const Model::DescribeRiskCenterAssetViewCFGRiskListRequest &request);
                void DescribeRiskCenterAssetViewCFGRiskListAsync(const Model::DescribeRiskCenterAssetViewCFGRiskListRequest& request, const DescribeRiskCenterAssetViewCFGRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterAssetViewCFGRiskListOutcomeCallable DescribeRiskCenterAssetViewCFGRiskListCallable(const Model::DescribeRiskCenterAssetViewCFGRiskListRequest& request);

                /**
                 *获取资产视角的端口风险列表
                 * @param req DescribeRiskCenterAssetViewPortRiskListRequest
                 * @return DescribeRiskCenterAssetViewPortRiskListOutcome
                 */
                DescribeRiskCenterAssetViewPortRiskListOutcome DescribeRiskCenterAssetViewPortRiskList(const Model::DescribeRiskCenterAssetViewPortRiskListRequest &request);
                void DescribeRiskCenterAssetViewPortRiskListAsync(const Model::DescribeRiskCenterAssetViewPortRiskListRequest& request, const DescribeRiskCenterAssetViewPortRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterAssetViewPortRiskListOutcomeCallable DescribeRiskCenterAssetViewPortRiskListCallable(const Model::DescribeRiskCenterAssetViewPortRiskListRequest& request);

                /**
                 *获取资产视角的漏洞风险列表
                 * @param req DescribeRiskCenterAssetViewVULRiskListRequest
                 * @return DescribeRiskCenterAssetViewVULRiskListOutcome
                 */
                DescribeRiskCenterAssetViewVULRiskListOutcome DescribeRiskCenterAssetViewVULRiskList(const Model::DescribeRiskCenterAssetViewVULRiskListRequest &request);
                void DescribeRiskCenterAssetViewVULRiskListAsync(const Model::DescribeRiskCenterAssetViewVULRiskListRequest& request, const DescribeRiskCenterAssetViewVULRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterAssetViewVULRiskListOutcomeCallable DescribeRiskCenterAssetViewVULRiskListCallable(const Model::DescribeRiskCenterAssetViewVULRiskListRequest& request);

                /**
                 *获取资产视角的弱口令风险列表
                 * @param req DescribeRiskCenterAssetViewWeakPasswordRiskListRequest
                 * @return DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome
                 */
                DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome DescribeRiskCenterAssetViewWeakPasswordRiskList(const Model::DescribeRiskCenterAssetViewWeakPasswordRiskListRequest &request);
                void DescribeRiskCenterAssetViewWeakPasswordRiskListAsync(const Model::DescribeRiskCenterAssetViewWeakPasswordRiskListRequest& request, const DescribeRiskCenterAssetViewWeakPasswordRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterAssetViewWeakPasswordRiskListOutcomeCallable DescribeRiskCenterAssetViewWeakPasswordRiskListCallable(const Model::DescribeRiskCenterAssetViewWeakPasswordRiskListRequest& request);

                /**
                 *获取配置视角的配置风险列表
                 * @param req DescribeRiskCenterCFGViewCFGRiskListRequest
                 * @return DescribeRiskCenterCFGViewCFGRiskListOutcome
                 */
                DescribeRiskCenterCFGViewCFGRiskListOutcome DescribeRiskCenterCFGViewCFGRiskList(const Model::DescribeRiskCenterCFGViewCFGRiskListRequest &request);
                void DescribeRiskCenterCFGViewCFGRiskListAsync(const Model::DescribeRiskCenterCFGViewCFGRiskListRequest& request, const DescribeRiskCenterCFGViewCFGRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterCFGViewCFGRiskListOutcomeCallable DescribeRiskCenterCFGViewCFGRiskListCallable(const Model::DescribeRiskCenterCFGViewCFGRiskListRequest& request);

                /**
                 *获取端口视角的端口风险列表
                 * @param req DescribeRiskCenterPortViewPortRiskListRequest
                 * @return DescribeRiskCenterPortViewPortRiskListOutcome
                 */
                DescribeRiskCenterPortViewPortRiskListOutcome DescribeRiskCenterPortViewPortRiskList(const Model::DescribeRiskCenterPortViewPortRiskListRequest &request);
                void DescribeRiskCenterPortViewPortRiskListAsync(const Model::DescribeRiskCenterPortViewPortRiskListRequest& request, const DescribeRiskCenterPortViewPortRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterPortViewPortRiskListOutcomeCallable DescribeRiskCenterPortViewPortRiskListCallable(const Model::DescribeRiskCenterPortViewPortRiskListRequest& request);

                /**
                 *获取风险服务列表
                 * @param req DescribeRiskCenterServerRiskListRequest
                 * @return DescribeRiskCenterServerRiskListOutcome
                 */
                DescribeRiskCenterServerRiskListOutcome DescribeRiskCenterServerRiskList(const Model::DescribeRiskCenterServerRiskListRequest &request);
                void DescribeRiskCenterServerRiskListAsync(const Model::DescribeRiskCenterServerRiskListRequest& request, const DescribeRiskCenterServerRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterServerRiskListOutcomeCallable DescribeRiskCenterServerRiskListCallable(const Model::DescribeRiskCenterServerRiskListRequest& request);

                /**
                 *获取漏洞视角的漏洞风险列表
                 * @param req DescribeRiskCenterVULViewVULRiskListRequest
                 * @return DescribeRiskCenterVULViewVULRiskListOutcome
                 */
                DescribeRiskCenterVULViewVULRiskListOutcome DescribeRiskCenterVULViewVULRiskList(const Model::DescribeRiskCenterVULViewVULRiskListRequest &request);
                void DescribeRiskCenterVULViewVULRiskListAsync(const Model::DescribeRiskCenterVULViewVULRiskListRequest& request, const DescribeRiskCenterVULViewVULRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterVULViewVULRiskListOutcomeCallable DescribeRiskCenterVULViewVULRiskListCallable(const Model::DescribeRiskCenterVULViewVULRiskListRequest& request);

                /**
                 *获取内容风险列表
                 * @param req DescribeRiskCenterWebsiteRiskListRequest
                 * @return DescribeRiskCenterWebsiteRiskListOutcome
                 */
                DescribeRiskCenterWebsiteRiskListOutcome DescribeRiskCenterWebsiteRiskList(const Model::DescribeRiskCenterWebsiteRiskListRequest &request);
                void DescribeRiskCenterWebsiteRiskListAsync(const Model::DescribeRiskCenterWebsiteRiskListRequest& request, const DescribeRiskCenterWebsiteRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterWebsiteRiskListOutcomeCallable DescribeRiskCenterWebsiteRiskListCallable(const Model::DescribeRiskCenterWebsiteRiskListRequest& request);

                /**
                 *风险详情列表示例
                 * @param req DescribeRiskDetailListRequest
                 * @return DescribeRiskDetailListOutcome
                 */
                DescribeRiskDetailListOutcome DescribeRiskDetailList(const Model::DescribeRiskDetailListRequest &request);
                void DescribeRiskDetailListAsync(const Model::DescribeRiskDetailListRequest& request, const DescribeRiskDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDetailListOutcomeCallable DescribeRiskDetailListCallable(const Model::DescribeRiskDetailListRequest& request);

                /**
                 *获取风险项视角列表
                 * @param req DescribeRiskItemListRequest
                 * @return DescribeRiskItemListOutcome
                 */
                DescribeRiskItemListOutcome DescribeRiskItemList(const Model::DescribeRiskItemListRequest &request);
                void DescribeRiskItemListAsync(const Model::DescribeRiskItemListRequest& request, const DescribeRiskItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskItemListOutcomeCallable DescribeRiskItemListCallable(const Model::DescribeRiskItemListRequest& request);

                /**
                 *查询风险规则详情示例
                 * @param req DescribeRiskRuleDetailRequest
                 * @return DescribeRiskRuleDetailOutcome
                 */
                DescribeRiskRuleDetailOutcome DescribeRiskRuleDetail(const Model::DescribeRiskRuleDetailRequest &request);
                void DescribeRiskRuleDetailAsync(const Model::DescribeRiskRuleDetailRequest& request, const DescribeRiskRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskRuleDetailOutcomeCallable DescribeRiskRuleDetailCallable(const Model::DescribeRiskRuleDetailRequest& request);

                /**
                 *高级配置风险规则列表示例
                 * @param req DescribeRiskRulesRequest
                 * @return DescribeRiskRulesOutcome
                 */
                DescribeRiskRulesOutcome DescribeRiskRules(const Model::DescribeRiskRulesRequest &request);
                void DescribeRiskRulesAsync(const Model::DescribeRiskRulesRequest& request, const DescribeRiskRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskRulesOutcomeCallable DescribeRiskRulesCallable(const Model::DescribeRiskRulesRequest& request);

                /**
                 *查看风险趋势图
                 * @param req DescribeRiskTrendDataRequest
                 * @return DescribeRiskTrendDataOutcome
                 */
                DescribeRiskTrendDataOutcome DescribeRiskTrendData(const Model::DescribeRiskTrendDataRequest &request);
                void DescribeRiskTrendDataAsync(const Model::DescribeRiskTrendDataRequest& request, const DescribeRiskTrendDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskTrendDataOutcomeCallable DescribeRiskTrendDataCallable(const Model::DescribeRiskTrendDataRequest& request);

                /**
                 *获取扫描报告列表
                 * @param req DescribeScanReportListRequest
                 * @return DescribeScanReportListOutcome
                 */
                DescribeScanReportListOutcome DescribeScanReportList(const Model::DescribeScanReportListRequest &request);
                void DescribeScanReportListAsync(const Model::DescribeScanReportListRequest& request, const DescribeScanReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanReportListOutcomeCallable DescribeScanReportListCallable(const Model::DescribeScanReportListRequest& request);

                /**
                 *查询云边界分析扫描结果统计信息
                 * @param req DescribeScanStatisticRequest
                 * @return DescribeScanStatisticOutcome
                 */
                DescribeScanStatisticOutcome DescribeScanStatistic(const Model::DescribeScanStatisticRequest &request);
                void DescribeScanStatisticAsync(const Model::DescribeScanStatisticRequest& request, const DescribeScanStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanStatisticOutcomeCallable DescribeScanStatisticCallable(const Model::DescribeScanStatisticRequest& request);

                /**
                 *获取扫描任务列表
                 * @param req DescribeScanTaskListRequest
                 * @return DescribeScanTaskListOutcome
                 */
                DescribeScanTaskListOutcome DescribeScanTaskList(const Model::DescribeScanTaskListRequest &request);
                void DescribeScanTaskListAsync(const Model::DescribeScanTaskListRequest& request, const DescribeScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanTaskListOutcomeCallable DescribeScanTaskListCallable(const Model::DescribeScanTaskListRequest& request);

                /**
                 *立体防护中心查询漏洞信息
                 * @param req DescribeSearchBugInfoRequest
                 * @return DescribeSearchBugInfoOutcome
                 */
                DescribeSearchBugInfoOutcome DescribeSearchBugInfo(const Model::DescribeSearchBugInfoRequest &request);
                void DescribeSearchBugInfoAsync(const Model::DescribeSearchBugInfoRequest& request, const DescribeSearchBugInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSearchBugInfoOutcomeCallable DescribeSearchBugInfoCallable(const Model::DescribeSearchBugInfoRequest& request);

                /**
                 *查询 Skill 安全检测计费信息，包括订单状态、总配额、已消耗配额、到期时间、支付模式等。无订单时返回零值（仅含 TimeNow 和 BetaEndTime）。试用订单通过 ModifyTrialStatus(Module=9) 领取，正式订单通过计费系统创建。
                 * @param req DescribeSkillScanPayInfoRequest
                 * @return DescribeSkillScanPayInfoOutcome
                 */
                DescribeSkillScanPayInfoOutcome DescribeSkillScanPayInfo(const Model::DescribeSkillScanPayInfoRequest &request);
                void DescribeSkillScanPayInfoAsync(const Model::DescribeSkillScanPayInfoRequest& request, const DescribeSkillScanPayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillScanPayInfoOutcomeCallable DescribeSkillScanPayInfoCallable(const Model::DescribeSkillScanPayInfoRequest& request);

                /**
                 *查询 Skill 安全检测结果。调用 CreateSkillScan 成功后使用返回的 ContentHash + EngineVersion 轮询本接口获取结果。上传成功后建议5分钟后首次轮询，如未检测完成之后每隔1分钟轮询一次。响应通过 Status 字段区分四种状态：检测完成（SUCCESS）、检测中（SCANNING）、无记录（NOT_FOUND）、检测失败（FAILED）。注意：检测结果保留90天，超期后将返回 NOT_FOUND。
                 * @param req DescribeSkillScanResultRequest
                 * @return DescribeSkillScanResultOutcome
                 */
                DescribeSkillScanResultOutcome DescribeSkillScanResult(const Model::DescribeSkillScanResultRequest &request);
                void DescribeSkillScanResultAsync(const Model::DescribeSkillScanResultRequest& request, const DescribeSkillScanResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillScanResultOutcomeCallable DescribeSkillScanResultCallable(const Model::DescribeSkillScanResultRequest& request);

                /**
                 *获取用户访问密钥资产列表（源IP视角）
                 * @param req DescribeSourceIPAssetRequest
                 * @return DescribeSourceIPAssetOutcome
                 */
                DescribeSourceIPAssetOutcome DescribeSourceIPAsset(const Model::DescribeSourceIPAssetRequest &request);
                void DescribeSourceIPAssetAsync(const Model::DescribeSourceIPAssetRequest& request, const DescribeSourceIPAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSourceIPAssetOutcomeCallable DescribeSourceIPAssetCallable(const Model::DescribeSourceIPAssetRequest& request);

                /**
                 *查询集团的子账号列表
                 * @param req DescribeSubUserInfoRequest
                 * @return DescribeSubUserInfoOutcome
                 */
                DescribeSubUserInfoOutcome DescribeSubUserInfo(const Model::DescribeSubUserInfoRequest &request);
                void DescribeSubUserInfoAsync(const Model::DescribeSubUserInfoRequest& request, const DescribeSubUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubUserInfoOutcomeCallable DescribeSubUserInfoCallable(const Model::DescribeSubUserInfoRequest& request);

                /**
                 *获取子网列表
                 * @param req DescribeSubnetAssetsRequest
                 * @return DescribeSubnetAssetsOutcome
                 */
                DescribeSubnetAssetsOutcome DescribeSubnetAssets(const Model::DescribeSubnetAssetsRequest &request);
                void DescribeSubnetAssetsAsync(const Model::DescribeSubnetAssetsRequest& request, const DescribeSubnetAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetAssetsOutcomeCallable DescribeSubnetAssetsCallable(const Model::DescribeSubnetAssetsRequest& request);

                /**
                 *获取任务扫描报告列表
                 * @param req DescribeTaskLogListRequest
                 * @return DescribeTaskLogListOutcome
                 */
                DescribeTaskLogListOutcome DescribeTaskLogList(const Model::DescribeTaskLogListRequest &request);
                void DescribeTaskLogListAsync(const Model::DescribeTaskLogListRequest& request, const DescribeTaskLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLogListOutcomeCallable DescribeTaskLogListCallable(const Model::DescribeTaskLogListRequest& request);

                /**
                 *获取报告下载的临时链接
                 * @param req DescribeTaskLogURLRequest
                 * @return DescribeTaskLogURLOutcome
                 */
                DescribeTaskLogURLOutcome DescribeTaskLogURL(const Model::DescribeTaskLogURLRequest &request);
                void DescribeTaskLogURLAsync(const Model::DescribeTaskLogURLRequest& request, const DescribeTaskLogURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLogURLOutcomeCallable DescribeTaskLogURLCallable(const Model::DescribeTaskLogURLRequest& request);

                /**
                 *查询TOP攻击信息
                 * @param req DescribeTopAttackInfoRequest
                 * @return DescribeTopAttackInfoOutcome
                 */
                DescribeTopAttackInfoOutcome DescribeTopAttackInfo(const Model::DescribeTopAttackInfoRequest &request);
                void DescribeTopAttackInfoAsync(const Model::DescribeTopAttackInfoRequest& request, const DescribeTopAttackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopAttackInfoOutcomeCallable DescribeTopAttackInfoCallable(const Model::DescribeTopAttackInfoRequest& request);

                /**
                 *查询用户行为分析策略列表
                 * @param req DescribeUebaRuleRequest
                 * @return DescribeUebaRuleOutcome
                 */
                DescribeUebaRuleOutcome DescribeUebaRule(const Model::DescribeUebaRuleRequest &request);
                void DescribeUebaRuleAsync(const Model::DescribeUebaRuleRequest& request, const DescribeUebaRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUebaRuleOutcomeCallable DescribeUebaRuleCallable(const Model::DescribeUebaRuleRequest& request);

                /**
                 *获取账号调用记录列表
                 * @param req DescribeUserCallRecordRequest
                 * @return DescribeUserCallRecordOutcome
                 */
                DescribeUserCallRecordOutcome DescribeUserCallRecord(const Model::DescribeUserCallRecordRequest &request);
                void DescribeUserCallRecordAsync(const Model::DescribeUserCallRecordRequest& request, const DescribeUserCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserCallRecordOutcomeCallable DescribeUserCallRecordCallable(const Model::DescribeUserCallRecordRequest& request);

                /**
                 *获取账号dspm信息列表
                 * @param req DescribeUserDspmInfoListRequest
                 * @return DescribeUserDspmInfoListOutcome
                 */
                DescribeUserDspmInfoListOutcome DescribeUserDspmInfoList(const Model::DescribeUserDspmInfoListRequest &request);
                void DescribeUserDspmInfoListAsync(const Model::DescribeUserDspmInfoListRequest& request, const DescribeUserDspmInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserDspmInfoListOutcomeCallable DescribeUserDspmInfoListCallable(const Model::DescribeUserDspmInfoListRequest& request);

                /**
                 *新安全中心风险中心-漏洞列表
                 * @param req DescribeVULListRequest
                 * @return DescribeVULListOutcome
                 */
                DescribeVULListOutcome DescribeVULList(const Model::DescribeVULListRequest &request);
                void DescribeVULListAsync(const Model::DescribeVULListRequest& request, const DescribeVULListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVULListOutcomeCallable DescribeVULListCallable(const Model::DescribeVULListRequest& request);

                /**
                 *查询漏洞风险高级配置
                 * @param req DescribeVULRiskAdvanceCFGListRequest
                 * @return DescribeVULRiskAdvanceCFGListOutcome
                 */
                DescribeVULRiskAdvanceCFGListOutcome DescribeVULRiskAdvanceCFGList(const Model::DescribeVULRiskAdvanceCFGListRequest &request);
                void DescribeVULRiskAdvanceCFGListAsync(const Model::DescribeVULRiskAdvanceCFGListRequest& request, const DescribeVULRiskAdvanceCFGListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVULRiskAdvanceCFGListOutcomeCallable DescribeVULRiskAdvanceCFGListCallable(const Model::DescribeVULRiskAdvanceCFGListRequest& request);

                /**
                 *获取漏洞展开详情
                 * @param req DescribeVULRiskDetailRequest
                 * @return DescribeVULRiskDetailOutcome
                 */
                DescribeVULRiskDetailOutcome DescribeVULRiskDetail(const Model::DescribeVULRiskDetailRequest &request);
                void DescribeVULRiskDetailAsync(const Model::DescribeVULRiskDetailRequest& request, const DescribeVULRiskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVULRiskDetailOutcomeCallable DescribeVULRiskDetailCallable(const Model::DescribeVULRiskDetailRequest& request);

                /**
                 *获取vpc列表
                 * @param req DescribeVpcAssetsRequest
                 * @return DescribeVpcAssetsOutcome
                 */
                DescribeVpcAssetsOutcome DescribeVpcAssets(const Model::DescribeVpcAssetsRequest &request);
                void DescribeVpcAssetsAsync(const Model::DescribeVpcAssetsRequest& request, const DescribeVpcAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcAssetsOutcomeCallable DescribeVpcAssetsCallable(const Model::DescribeVpcAssetsRequest& request);

                /**
                 *查询云边界分析-暴露路径下主机节点的漏洞列表
                 * @param req DescribeVulRiskListRequest
                 * @return DescribeVulRiskListOutcome
                 */
                DescribeVulRiskListOutcome DescribeVulRiskList(const Model::DescribeVulRiskListRequest &request);
                void DescribeVulRiskListAsync(const Model::DescribeVulRiskListRequest& request, const DescribeVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulRiskListOutcomeCallable DescribeVulRiskListCallable(const Model::DescribeVulRiskListRequest& request);

                /**
                 *获取漏洞视角的漏洞风险列表
                 * @param req DescribeVulViewVulRiskListRequest
                 * @return DescribeVulViewVulRiskListOutcome
                 */
                DescribeVulViewVulRiskListOutcome DescribeVulViewVulRiskList(const Model::DescribeVulViewVulRiskListRequest &request);
                void DescribeVulViewVulRiskListAsync(const Model::DescribeVulViewVulRiskListRequest& request, const DescribeVulViewVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulViewVulRiskListOutcomeCallable DescribeVulViewVulRiskListCallable(const Model::DescribeVulViewVulRiskListRequest& request);

                /**
                 *下载导出日志
                 * @param req DownloadDspmExportLogRequest
                 * @return DownloadDspmExportLogOutcome
                 */
                DownloadDspmExportLogOutcome DownloadDspmExportLog(const Model::DownloadDspmExportLogRequest &request);
                void DownloadDspmExportLogAsync(const Model::DownloadDspmExportLogRequest& request, const DownloadDspmExportLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadDspmExportLogOutcomeCallable DownloadDspmExportLogCallable(const Model::DownloadDspmExportLogRequest& request);

                /**
                 *修改或者更改处置状态
                 * @param req ModifyAlarmRiskStatusRequest
                 * @return ModifyAlarmRiskStatusOutcome
                 */
                ModifyAlarmRiskStatusOutcome ModifyAlarmRiskStatus(const Model::ModifyAlarmRiskStatusRequest &request);
                void ModifyAlarmRiskStatusAsync(const Model::ModifyAlarmRiskStatusRequest& request, const ModifyAlarmRiskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmRiskStatusOutcomeCallable ModifyAlarmRiskStatusCallable(const Model::ModifyAlarmRiskStatusRequest& request);

                /**
                 *修改cos审计监测账号
                 * @param req ModifyCosAuditMonitorAccountRequest
                 * @return ModifyCosAuditMonitorAccountOutcome
                 */
                ModifyCosAuditMonitorAccountOutcome ModifyCosAuditMonitorAccount(const Model::ModifyCosAuditMonitorAccountRequest &request);
                void ModifyCosAuditMonitorAccountAsync(const Model::ModifyCosAuditMonitorAccountRequest& request, const ModifyCosAuditMonitorAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCosAuditMonitorAccountOutcomeCallable ModifyCosAuditMonitorAccountCallable(const Model::ModifyCosAuditMonitorAccountRequest& request);

                /**
                 *修改对象存储备注
                 * @param req ModifyCosMarkInfoRequest
                 * @return ModifyCosMarkInfoOutcome
                 */
                ModifyCosMarkInfoOutcome ModifyCosMarkInfo(const Model::ModifyCosMarkInfoRequest &request);
                void ModifyCosMarkInfoAsync(const Model::ModifyCosMarkInfoRequest& request, const ModifyCosMarkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCosMarkInfoOutcomeCallable ModifyCosMarkInfoCallable(const Model::ModifyCosMarkInfoRequest& request);

                /**
                 *修改Dspm访问管理信息
                 * @param req ModifyDspmAccessRecordRequest
                 * @return ModifyDspmAccessRecordOutcome
                 */
                ModifyDspmAccessRecordOutcome ModifyDspmAccessRecord(const Model::ModifyDspmAccessRecordRequest &request);
                void ModifyDspmAccessRecordAsync(const Model::ModifyDspmAccessRecordRequest& request, const ModifyDspmAccessRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAccessRecordOutcomeCallable ModifyDspmAccessRecordCallable(const Model::ModifyDspmAccessRecordRequest& request);

                /**
                 *修改Dspm审批单状态
                 * @param req ModifyDspmApproveStatusRequest
                 * @return ModifyDspmApproveStatusOutcome
                 */
                ModifyDspmApproveStatusOutcome ModifyDspmApproveStatus(const Model::ModifyDspmApproveStatusRequest &request);
                void ModifyDspmApproveStatusAsync(const Model::ModifyDspmApproveStatusRequest& request, const ModifyDspmApproveStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmApproveStatusOutcomeCallable ModifyDspmApproveStatusCallable(const Model::ModifyDspmApproveStatusRequest& request);

                /**
                 *修改Dspm资产账号信息
                 * @param req ModifyDspmAssetAccountRequest
                 * @return ModifyDspmAssetAccountOutcome
                 */
                ModifyDspmAssetAccountOutcome ModifyDspmAssetAccount(const Model::ModifyDspmAssetAccountRequest &request);
                void ModifyDspmAssetAccountAsync(const Model::ModifyDspmAssetAccountRequest& request, const ModifyDspmAssetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAssetAccountOutcomeCallable ModifyDspmAssetAccountCallable(const Model::ModifyDspmAssetAccountRequest& request);

                /**
                 *修改Dspm资产账号权限
                 * @param req ModifyDspmAssetAccountPrivilegesRequest
                 * @return ModifyDspmAssetAccountPrivilegesOutcome
                 */
                ModifyDspmAssetAccountPrivilegesOutcome ModifyDspmAssetAccountPrivileges(const Model::ModifyDspmAssetAccountPrivilegesRequest &request);
                void ModifyDspmAssetAccountPrivilegesAsync(const Model::ModifyDspmAssetAccountPrivilegesRequest& request, const ModifyDspmAssetAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAssetAccountPrivilegesOutcomeCallable ModifyDspmAssetAccountPrivilegesCallable(const Model::ModifyDspmAssetAccountPrivilegesRequest& request);

                /**
                 *修改Dspm资产数据扫描任务
                 * @param req ModifyDspmAssetDataScanTaskRequest
                 * @return ModifyDspmAssetDataScanTaskOutcome
                 */
                ModifyDspmAssetDataScanTaskOutcome ModifyDspmAssetDataScanTask(const Model::ModifyDspmAssetDataScanTaskRequest &request);
                void ModifyDspmAssetDataScanTaskAsync(const Model::ModifyDspmAssetDataScanTaskRequest& request, const ModifyDspmAssetDataScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAssetDataScanTaskOutcomeCallable ModifyDspmAssetDataScanTaskCallable(const Model::ModifyDspmAssetDataScanTaskRequest& request);

                /**
                 *修改Dspm资产日志投递开关
                 * @param req ModifyDspmAssetLogDeliverySwitchRequest
                 * @return ModifyDspmAssetLogDeliverySwitchOutcome
                 */
                ModifyDspmAssetLogDeliverySwitchOutcome ModifyDspmAssetLogDeliverySwitch(const Model::ModifyDspmAssetLogDeliverySwitchRequest &request);
                void ModifyDspmAssetLogDeliverySwitchAsync(const Model::ModifyDspmAssetLogDeliverySwitchRequest& request, const ModifyDspmAssetLogDeliverySwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAssetLogDeliverySwitchOutcomeCallable ModifyDspmAssetLogDeliverySwitchCallable(const Model::ModifyDspmAssetLogDeliverySwitchRequest& request);

                /**
                 *修改Dspm资产日志投递开关
                 * @param req ModifyDspmAssetSecurityAnalysisSwitchRequest
                 * @return ModifyDspmAssetSecurityAnalysisSwitchOutcome
                 */
                ModifyDspmAssetSecurityAnalysisSwitchOutcome ModifyDspmAssetSecurityAnalysisSwitch(const Model::ModifyDspmAssetSecurityAnalysisSwitchRequest &request);
                void ModifyDspmAssetSecurityAnalysisSwitchAsync(const Model::ModifyDspmAssetSecurityAnalysisSwitchRequest& request, const ModifyDspmAssetSecurityAnalysisSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAssetSecurityAnalysisSwitchOutcomeCallable ModifyDspmAssetSecurityAnalysisSwitchCallable(const Model::ModifyDspmAssetSecurityAnalysisSwitchRequest& request);

                /**
                 *修改日志备份设置
                 * @param req ModifyDspmBackupSettingRequest
                 * @return ModifyDspmBackupSettingOutcome
                 */
                ModifyDspmBackupSettingOutcome ModifyDspmBackupSetting(const Model::ModifyDspmBackupSettingRequest &request);
                void ModifyDspmBackupSettingAsync(const Model::ModifyDspmBackupSettingRequest& request, const ModifyDspmBackupSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmBackupSettingOutcomeCallable ModifyDspmBackupSettingCallable(const Model::ModifyDspmBackupSettingRequest& request);

                /**
                 *修改Dspm身份信息
                 * @param req ModifyDspmIdentifyInfoRequest
                 * @return ModifyDspmIdentifyInfoOutcome
                 */
                ModifyDspmIdentifyInfoOutcome ModifyDspmIdentifyInfo(const Model::ModifyDspmIdentifyInfoRequest &request);
                void ModifyDspmIdentifyInfoAsync(const Model::ModifyDspmIdentifyInfoRequest& request, const ModifyDspmIdentifyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyInfoOutcomeCallable ModifyDspmIdentifyInfoCallable(const Model::ModifyDspmIdentifyInfoRequest& request);

                /**
                 *修改DspmIp信息
                 * @param req ModifyDspmIpInfoRequest
                 * @return ModifyDspmIpInfoOutcome
                 */
                ModifyDspmIpInfoOutcome ModifyDspmIpInfo(const Model::ModifyDspmIpInfoRequest &request);
                void ModifyDspmIpInfoAsync(const Model::ModifyDspmIpInfoRequest& request, const ModifyDspmIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIpInfoOutcomeCallable ModifyDspmIpInfoCallable(const Model::ModifyDspmIpInfoRequest& request);

                /**
                 *修改Dspm个人身份id
                 * @param req ModifyDspmPersonalIdentifyRequest
                 * @return ModifyDspmPersonalIdentifyOutcome
                 */
                ModifyDspmPersonalIdentifyOutcome ModifyDspmPersonalIdentify(const Model::ModifyDspmPersonalIdentifyRequest &request);
                void ModifyDspmPersonalIdentifyAsync(const Model::ModifyDspmPersonalIdentifyRequest& request, const ModifyDspmPersonalIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmPersonalIdentifyOutcomeCallable ModifyDspmPersonalIdentifyCallable(const Model::ModifyDspmPersonalIdentifyRequest& request);

                /**
                 *恢复备份日志
                 * @param req ModifyDspmRestoreLogTaskRequest
                 * @return ModifyDspmRestoreLogTaskOutcome
                 */
                ModifyDspmRestoreLogTaskOutcome ModifyDspmRestoreLogTask(const Model::ModifyDspmRestoreLogTaskRequest &request);
                void ModifyDspmRestoreLogTaskAsync(const Model::ModifyDspmRestoreLogTaskRequest& request, const ModifyDspmRestoreLogTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmRestoreLogTaskOutcomeCallable ModifyDspmRestoreLogTaskCallable(const Model::ModifyDspmRestoreLogTaskRequest& request);

                /**
                 *修改Dspm风险信息
                 * @param req ModifyDspmRiskInfoRequest
                 * @return ModifyDspmRiskInfoOutcome
                 */
                ModifyDspmRiskInfoOutcome ModifyDspmRiskInfo(const Model::ModifyDspmRiskInfoRequest &request);
                void ModifyDspmRiskInfoAsync(const Model::ModifyDspmRiskInfoRequest& request, const ModifyDspmRiskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmRiskInfoOutcomeCallable ModifyDspmRiskInfoCallable(const Model::ModifyDspmRiskInfoRequest& request);

                /**
                 *修改Dspm风险策略
                 * @param req ModifyDspmRiskStrategyRequest
                 * @return ModifyDspmRiskStrategyOutcome
                 */
                ModifyDspmRiskStrategyOutcome ModifyDspmRiskStrategy(const Model::ModifyDspmRiskStrategyRequest &request);
                void ModifyDspmRiskStrategyAsync(const Model::ModifyDspmRiskStrategyRequest& request, const ModifyDspmRiskStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmRiskStrategyOutcomeCallable ModifyDspmRiskStrategyCallable(const Model::ModifyDspmRiskStrategyRequest& request);

                /**
                 *修改Dspm白名单策略
                 * @param req ModifyDspmWhitelistStrategyRequest
                 * @return ModifyDspmWhitelistStrategyOutcome
                 */
                ModifyDspmWhitelistStrategyOutcome ModifyDspmWhitelistStrategy(const Model::ModifyDspmWhitelistStrategyRequest &request);
                void ModifyDspmWhitelistStrategyAsync(const Model::ModifyDspmWhitelistStrategyRequest& request, const ModifyDspmWhitelistStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmWhitelistStrategyOutcomeCallable ModifyDspmWhitelistStrategyCallable(const Model::ModifyDspmWhitelistStrategyRequest& request);

                /**
                 *修改IaC检测接入Token存储周期
                 * @param req ModifyIaCTokenPeriodRequest
                 * @return ModifyIaCTokenPeriodOutcome
                 */
                ModifyIaCTokenPeriodOutcome ModifyIaCTokenPeriod(const Model::ModifyIaCTokenPeriodRequest &request);
                void ModifyIaCTokenPeriodAsync(const Model::ModifyIaCTokenPeriodRequest& request, const ModifyIaCTokenPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIaCTokenPeriodOutcomeCallable ModifyIaCTokenPeriodCallable(const Model::ModifyIaCTokenPeriodRequest& request);

                /**
                 *修改主机资产备注信息
                 * @param req ModifyMachineRemarkRequest
                 * @return ModifyMachineRemarkOutcome
                 */
                ModifyMachineRemarkOutcome ModifyMachineRemark(const Model::ModifyMachineRemarkRequest &request);
                void ModifyMachineRemarkAsync(const Model::ModifyMachineRemarkRequest& request, const ModifyMachineRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMachineRemarkOutcomeCallable ModifyMachineRemarkCallable(const Model::ModifyMachineRemarkRequest& request);

                /**
                 *修改通知资产范围配置
                 * @param req ModifyNotifyAssetConfigRequest
                 * @return ModifyNotifyAssetConfigOutcome
                 */
                ModifyNotifyAssetConfigOutcome ModifyNotifyAssetConfig(const Model::ModifyNotifyAssetConfigRequest &request);
                void ModifyNotifyAssetConfigAsync(const Model::ModifyNotifyAssetConfigRequest& request, const ModifyNotifyAssetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotifyAssetConfigOutcomeCallable ModifyNotifyAssetConfigCallable(const Model::ModifyNotifyAssetConfigRequest& request);

                /**
                 *修改通知设置
                 * @param req ModifyNotifySettingRequest
                 * @return ModifyNotifySettingOutcome
                 */
                ModifyNotifySettingOutcome ModifyNotifySetting(const Model::ModifyNotifySettingRequest &request);
                void ModifyNotifySettingAsync(const Model::ModifyNotifySettingRequest& request, const ModifyNotifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotifySettingOutcomeCallable ModifyNotifySettingCallable(const Model::ModifyNotifySettingRequest& request);

                /**
                 *修改告警中心通知高级配置
                 * @param req ModifyNotifySettingAlertRequest
                 * @return ModifyNotifySettingAlertOutcome
                 */
                ModifyNotifySettingAlertOutcome ModifyNotifySettingAlert(const Model::ModifyNotifySettingAlertRequest &request);
                void ModifyNotifySettingAlertAsync(const Model::ModifyNotifySettingAlertRequest& request, const ModifyNotifySettingAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotifySettingAlertOutcomeCallable ModifyNotifySettingAlertCallable(const Model::ModifyNotifySettingAlertRequest& request);

                /**
                 *修改集团账号状态
                 * @param req ModifyOrganizationAccountStatusRequest
                 * @return ModifyOrganizationAccountStatusOutcome
                 */
                ModifyOrganizationAccountStatusOutcome ModifyOrganizationAccountStatus(const Model::ModifyOrganizationAccountStatusRequest &request);
                void ModifyOrganizationAccountStatusAsync(const Model::ModifyOrganizationAccountStatusRequest& request, const ModifyOrganizationAccountStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOrganizationAccountStatusOutcomeCallable ModifyOrganizationAccountStatusCallable(const Model::ModifyOrganizationAccountStatusRequest& request);

                /**
                 *修改策略状态
                 * @param req ModifyPolicyStatusRequest
                 * @return ModifyPolicyStatusOutcome
                 */
                ModifyPolicyStatusOutcome ModifyPolicyStatus(const Model::ModifyPolicyStatusRequest &request);
                void ModifyPolicyStatusAsync(const Model::ModifyPolicyStatusRequest& request, const ModifyPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPolicyStatusOutcomeCallable ModifyPolicyStatusCallable(const Model::ModifyPolicyStatusRequest& request);

                /**
                 *修改风险中心风险状态
                 * @param req ModifyRiskCenterRiskStatusRequest
                 * @return ModifyRiskCenterRiskStatusOutcome
                 */
                ModifyRiskCenterRiskStatusOutcome ModifyRiskCenterRiskStatus(const Model::ModifyRiskCenterRiskStatusRequest &request);
                void ModifyRiskCenterRiskStatusAsync(const Model::ModifyRiskCenterRiskStatusRequest& request, const ModifyRiskCenterRiskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskCenterRiskStatusOutcomeCallable ModifyRiskCenterRiskStatusCallable(const Model::ModifyRiskCenterRiskStatusRequest& request);

                /**
                 *修改风险中心扫描任务
                 * @param req ModifyRiskCenterScanTaskRequest
                 * @return ModifyRiskCenterScanTaskOutcome
                 */
                ModifyRiskCenterScanTaskOutcome ModifyRiskCenterScanTask(const Model::ModifyRiskCenterScanTaskRequest &request);
                void ModifyRiskCenterScanTaskAsync(const Model::ModifyRiskCenterScanTaskRequest& request, const ModifyRiskCenterScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskCenterScanTaskOutcomeCallable ModifyRiskCenterScanTaskCallable(const Model::ModifyRiskCenterScanTaskRequest& request);

                /**
                 *更新自定义策略的开关
                 * @param req ModifyUebaRuleSwitchRequest
                 * @return ModifyUebaRuleSwitchOutcome
                 */
                ModifyUebaRuleSwitchOutcome ModifyUebaRuleSwitch(const Model::ModifyUebaRuleSwitchRequest &request);
                void ModifyUebaRuleSwitchAsync(const Model::ModifyUebaRuleSwitchRequest& request, const ModifyUebaRuleSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUebaRuleSwitchOutcomeCallable ModifyUebaRuleSwitchCallable(const Model::ModifyUebaRuleSwitchRequest& request);

                /**
                 *重置Dspm资产账号密码
                 * @param req ResetDspmAssetAccountPasswordRequest
                 * @return ResetDspmAssetAccountPasswordOutcome
                 */
                ResetDspmAssetAccountPasswordOutcome ResetDspmAssetAccountPassword(const Model::ResetDspmAssetAccountPasswordRequest &request);
                void ResetDspmAssetAccountPasswordAsync(const Model::ResetDspmAssetAccountPasswordRequest& request, const ResetDspmAssetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetDspmAssetAccountPasswordOutcomeCallable ResetDspmAssetAccountPasswordCallable(const Model::ResetDspmAssetAccountPasswordRequest& request);

                /**
                 *RetryExportLog
                 * @param req RetryDspmExportLogRequest
                 * @return RetryDspmExportLogOutcome
                 */
                RetryDspmExportLogOutcome RetryDspmExportLog(const Model::RetryDspmExportLogRequest &request);
                void RetryDspmExportLogAsync(const Model::RetryDspmExportLogRequest& request, const RetryDspmExportLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryDspmExportLogOutcomeCallable RetryDspmExportLogCallable(const Model::RetryDspmExportLogRequest& request);

                /**
                 *恢复Dspm资产账号
                 * @param req RevertDspmAssetAccountRequest
                 * @return RevertDspmAssetAccountOutcome
                 */
                RevertDspmAssetAccountOutcome RevertDspmAssetAccount(const Model::RevertDspmAssetAccountRequest &request);
                void RevertDspmAssetAccountAsync(const Model::RevertDspmAssetAccountRequest& request, const RevertDspmAssetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevertDspmAssetAccountOutcomeCallable RevertDspmAssetAccountCallable(const Model::RevertDspmAssetAccountRequest& request);

                /**
                 *发送Dspm资产访问验证码
                 * @param req SendDspmAssetLoginSmsCodeRequest
                 * @return SendDspmAssetLoginSmsCodeOutcome
                 */
                SendDspmAssetLoginSmsCodeOutcome SendDspmAssetLoginSmsCode(const Model::SendDspmAssetLoginSmsCodeRequest &request);
                void SendDspmAssetLoginSmsCodeAsync(const Model::SendDspmAssetLoginSmsCodeRequest& request, const SendDspmAssetLoginSmsCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendDspmAssetLoginSmsCodeOutcomeCallable SendDspmAssetLoginSmsCodeCallable(const Model::SendDspmAssetLoginSmsCodeRequest& request);

                /**
                 *停止扫风险中心扫描任务
                 * @param req StopRiskCenterTaskRequest
                 * @return StopRiskCenterTaskOutcome
                 */
                StopRiskCenterTaskOutcome StopRiskCenterTask(const Model::StopRiskCenterTaskRequest &request);
                void StopRiskCenterTaskAsync(const Model::StopRiskCenterTaskRequest& request, const StopRiskCenterTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopRiskCenterTaskOutcomeCallable StopRiskCenterTaskCallable(const Model::StopRiskCenterTaskRequest& request);

                /**
                 *同步dspm支持的资产
                 * @param req SyncDspmAssetsRequest
                 * @return SyncDspmAssetsOutcome
                 */
                SyncDspmAssetsOutcome SyncDspmAssets(const Model::SyncDspmAssetsRequest &request);
                void SyncDspmAssetsAsync(const Model::SyncDspmAssetsRequest& request, const SyncDspmAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncDspmAssetsOutcomeCallable SyncDspmAssetsCallable(const Model::SyncDspmAssetsRequest& request);

                /**
                 *同步dspm用户列表
                 * @param req SyncDspmUsersRequest
                 * @return SyncDspmUsersOutcome
                 */
                SyncDspmUsersOutcome SyncDspmUsers(const Model::SyncDspmUsersRequest &request);
                void SyncDspmUsersAsync(const Model::SyncDspmUsersRequest& request, const SyncDspmUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncDspmUsersOutcomeCallable SyncDspmUsersCallable(const Model::SyncDspmUsersRequest& request);

                /**
                 *标记风险或者告警为 已处置/已忽略
                 * @param req UpdateAccessKeyAlarmStatusRequest
                 * @return UpdateAccessKeyAlarmStatusOutcome
                 */
                UpdateAccessKeyAlarmStatusOutcome UpdateAccessKeyAlarmStatus(const Model::UpdateAccessKeyAlarmStatusRequest &request);
                void UpdateAccessKeyAlarmStatusAsync(const Model::UpdateAccessKeyAlarmStatusRequest& request, const UpdateAccessKeyAlarmStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAccessKeyAlarmStatusOutcomeCallable UpdateAccessKeyAlarmStatusCallable(const Model::UpdateAccessKeyAlarmStatusRequest& request);

                /**
                 *编辑访问密钥/源IP备注
                 * @param req UpdateAccessKeyRemarkRequest
                 * @return UpdateAccessKeyRemarkOutcome
                 */
                UpdateAccessKeyRemarkOutcome UpdateAccessKeyRemark(const Model::UpdateAccessKeyRemarkRequest &request);
                void UpdateAccessKeyRemarkAsync(const Model::UpdateAccessKeyRemarkRequest& request, const UpdateAccessKeyRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAccessKeyRemarkOutcomeCallable UpdateAccessKeyRemarkCallable(const Model::UpdateAccessKeyRemarkRequest& request);

                /**
                 *批量告警状态处理接口
                 * @param req UpdateAlertStatusListRequest
                 * @return UpdateAlertStatusListOutcome
                 */
                UpdateAlertStatusListOutcome UpdateAlertStatusList(const Model::UpdateAlertStatusListRequest &request);
                void UpdateAlertStatusListAsync(const Model::UpdateAlertStatusListRequest& request, const UpdateAlertStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAlertStatusListOutcomeCallable UpdateAlertStatusListCallable(const Model::UpdateAlertStatusListRequest& request);

                /**
                 *验证Dspm资产登录验证码
                 * @param req VerifyDspmAssetLoginCodeRequest
                 * @return VerifyDspmAssetLoginCodeOutcome
                 */
                VerifyDspmAssetLoginCodeOutcome VerifyDspmAssetLoginCode(const Model::VerifyDspmAssetLoginCodeRequest &request);
                void VerifyDspmAssetLoginCodeAsync(const Model::VerifyDspmAssetLoginCodeRequest& request, const VerifyDspmAssetLoginCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyDspmAssetLoginCodeOutcomeCallable VerifyDspmAssetLoginCodeCallable(const Model::VerifyDspmAssetLoginCodeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_CSIPCLIENT_H_
