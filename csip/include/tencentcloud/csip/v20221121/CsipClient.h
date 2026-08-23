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
#include <tencentcloud/csip/v20221121/model/AccessAIAnalysisSMTPRequest.h>
#include <tencentcloud/csip/v20221121/model/AccessAIAnalysisSMTPResponse.h>
#include <tencentcloud/csip/v20221121/model/AddDspmAssetManagerRequest.h>
#include <tencentcloud/csip/v20221121/model/AddDspmAssetManagerResponse.h>
#include <tencentcloud/csip/v20221121/model/AddImageRegistryRequest.h>
#include <tencentcloud/csip/v20221121/model/AddImageRegistryResponse.h>
#include <tencentcloud/csip/v20221121/model/AddLoginWhiteListsRequest.h>
#include <tencentcloud/csip/v20221121/model/AddLoginWhiteListsResponse.h>
#include <tencentcloud/csip/v20221121/model/AddNewBindRoleUserRequest.h>
#include <tencentcloud/csip/v20221121/model/AddNewBindRoleUserResponse.h>
#include <tencentcloud/csip/v20221121/model/AddVulWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/AddVulWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyBaselinePolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyBaselinePolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageRegistryTimedScanTaskConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageRegistryTimedScanTaskConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageSensitiveWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageSensitiveWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageVirusWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageVirusWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageVulWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageVulWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/BindClusterOwnerRequest.h>
#include <tencentcloud/csip/v20221121/model/BindClusterOwnerResponse.h>
#include <tencentcloud/csip/v20221121/model/CancelEdrAlertIgnoreRequest.h>
#include <tencentcloud/csip/v20221121/model/CancelEdrAlertIgnoreResponse.h>
#include <tencentcloud/csip/v20221121/model/CheckCWPExposePathPermissionRequest.h>
#include <tencentcloud/csip/v20221121/model/CheckCWPExposePathPermissionResponse.h>
#include <tencentcloud/csip/v20221121/model/CheckImageRegistryInstanceNameDuplicateRequest.h>
#include <tencentcloud/csip/v20221121/model/CheckImageRegistryInstanceNameDuplicateResponse.h>
#include <tencentcloud/csip/v20221121/model/CheckIsUltimateVersionRequest.h>
#include <tencentcloud/csip/v20221121/model/CheckIsUltimateVersionResponse.h>
#include <tencentcloud/csip/v20221121/model/CheckRiskRequest.h>
#include <tencentcloud/csip/v20221121/model/CheckRiskResponse.h>
#include <tencentcloud/csip/v20221121/model/CopyBaselinePolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/CopyBaselinePolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAIScheduleRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAIScheduleResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAccessKeyCheckTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAccessKeyCheckTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAccessKeySyncTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAccessKeySyncTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAllAssetsExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAllAssetsExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetComponentListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetComponentListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetComponentRelatedImageListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetComponentRelatedImageListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetFilterViewRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetFilterViewResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetProcessExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetProcessExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetSyncTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetSyncTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetTagRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetTagResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetViewRisksExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetViewRisksExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateBaselineAggregatedItemExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateBaselineAggregatedItemExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateBaselineFixRecordExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateBaselineFixRecordExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateBaselineMainTaskExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateBaselineMainTaskExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateCFGRiskPDFReportExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateCFGRiskPDFReportExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateCFGRisksExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateCFGRisksExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateCSIPManualMalwareScanRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateCSIPManualMalwareScanResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateCheckViewRisksExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateCheckViewRisksExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateCloudFunctionExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateCloudFunctionExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterAssetSyncTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterAssetSyncTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterContainerListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterContainerListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterNamespaceListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterNamespaceListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterNodeListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterNodeListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateComplianceRiskExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateComplianceRiskExportJobResponse.h>
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
#include <tencentcloud/csip/v20221121/model/CreateDspmAssetIdentifyInfoExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAssetIdentifyInfoExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAssetsExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAssetsExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmExportTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmExportTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyCategoryRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyCategoryResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceCategoryRelationRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceCategoryRelationResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceGroupCopyRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceGroupCopyResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceRuleRelationRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceRuleRelationResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyInfoListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyInfoListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyLevelGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyLevelGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmPersonalIdentifyRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmPersonalIdentifyResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmRiskExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmRiskExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmWhitelistStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmWhitelistStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDynamicAssetsExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDynamicAssetsExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateEDRManualScanRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateEDRManualScanResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateEdrAlertExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateEdrAlertExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateEdrLessAlertExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateEdrLessAlertExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateExposureAutoTagRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateExposureAutoTagRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateExposuresExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateExposuresExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateHighBaseLineRisksExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateHighBaseLineRisksExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateHostVulExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateHostVulExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCAccessTokenRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCAccessTokenResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCFileExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCFileExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCFileReScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCFileReScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageAssetListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageAssetListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageAssociatedContainerListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageAssociatedContainerListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageAssociatedHostListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageAssociatedHostListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageComponentListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageComponentListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageLayerVulListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageLayerVulListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryConnectivityTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryConnectivityTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryTimedScanTaskConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryTimedScanTaskConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageSensitiveInfoListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageSensitiveInfoListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageSensitiveWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageSensitiveWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVirusListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVirusListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVirusWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVirusWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVulListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVulListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVulSummaryListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVulSummaryListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVulWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVulWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/CreatePodContainerListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreatePodContainerListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreatePodServiceListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreatePodServiceListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreatePublicAssetsExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreatePublicAssetsExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateRiskCenterScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateRiskCenterScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateRiskDetailExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateRiskDetailExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateScanStatisticExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateScanStatisticExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateSkillScanRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateSkillScanResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateVulFixRetryTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateVulFixRetryTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateVulFixTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateVulFixTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateVulFixedExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateVulFixedExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateVulReScanRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateVulReScanResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateVulRisksExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateVulRisksExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateVulScanManualRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateVulScanManualResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteAIAnalysisSMTPAccessRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteAIAnalysisSMTPAccessResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteAIScheduleRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteAIScheduleResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteAssetFilterViewRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteAssetFilterViewResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteAssetTagRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteAssetTagResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteBaselineSelfDefinedPolicyListRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteBaselineSelfDefinedPolicyListResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteCSIPMalwareScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteCSIPMalwareScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteClusterRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteClusterResponse.h>
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
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyCategoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyCategoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyComplianceCategoryRelationRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyComplianceCategoryRelationResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyComplianceGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyComplianceGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyComplianceRuleRelationRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyComplianceRuleRelationResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyLevelGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyLevelGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmPersonalIdentifyRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmPersonalIdentifyResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmRestoreLogListRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmRestoreLogListResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmWhitelistStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmWhitelistStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteEDRRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteEDRRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteEDRScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteEDRScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteEdrLogCollectPathsRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteEdrLogCollectPathsResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteExposureAutoTagRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteExposureAutoTagRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteIaCAccessTokenRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteIaCAccessTokenResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteIaCFileRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteIaCFileResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageRegistryRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageRegistryResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageRegistryScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageRegistryScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageRegistryTimedScanTaskConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageRegistryTimedScanTaskConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageSensitiveWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageSensitiveWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageVirusWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageVirusWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageVulWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageVulWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteLoginWhiteListRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteLoginWhiteListResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteMachineClearHistoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteMachineClearHistoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteRiskScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteRiskScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteSandboxLLMAuditRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteSandboxLLMAuditRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteVulWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteVulWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteWebhookPoliciesRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteWebhookPoliciesResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteWebhookReceiversRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteWebhookReceiversResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentAssetListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentAssetListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentCredentialListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentCredentialListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentCredentialLocationListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentCredentialLocationListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentSkillListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentSkillListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisFileDownloadURLRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisFileDownloadURLResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisHistoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisHistoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisRecommendQuestionsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisRecommendQuestionsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisRobotInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisRobotInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisSMTPRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisSMTPResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAILinkSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAILinkSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAISchedulePlanListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAISchedulePlanListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleStatsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleStatsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleTaskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleTaskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAKAnalysisDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAKAnalysisDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAbTestUserRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAbTestUserResponse.h>
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
#include <tencentcloud/csip/v20221121/model/DescribeAgentConfigSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAgentConfigSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAgentRunModeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAgentRunModeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAgentRunPolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAgentRunPolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAlertListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAlertListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetComponentListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetComponentListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetComponentRelatedImageListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetComponentRelatedImageListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetFilterViewsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetFilterViewsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetLastSyncTimeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetLastSyncTimeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetProcessListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetProcessListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetRiskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetRiskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetSyncTaskStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetSyncTaskStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTagAttributesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTagAttributesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTagTreeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTagTreeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTagsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTagsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTreeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTreeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetViewVulRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetViewVulRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssumeRoleRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssumeRoleResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBackendScanEngineRegionListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBackendScanEngineRegionListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBanModeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBanModeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBanStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBanStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineAggregatedItemListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineAggregatedItemListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineAggregatedPolicyListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineAggregatedPolicyListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineCalculatingStatisticsPolicyIDListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineCalculatingStatisticsPolicyIDListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineCategoryItemListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineCategoryItemListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineFixRecordListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineFixRecordListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineItemRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineItemRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineMainTaskItemListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineMainTaskItemListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineMainTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineMainTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyCategoryListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyCategoryListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyItemListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyItemListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyNameExistAppidListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyNameExistAppidListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineSubTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineSubTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineSyncConfRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineSyncConfResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineSystemCategoryListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineSystemCategoryListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineUserOtherConfRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineUserOtherConfResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineUserWeakPasswordConfRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineUserWeakPasswordConfResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBruteAttackRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBruteAttackRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBucketInvokeIpListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBucketInvokeIpListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFGRiskReportStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFGRiskReportStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFGRiskStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFGRiskStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFWAssetStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFWAssetStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCLSLogIndexV3Request.h>
#include <tencentcloud/csip/v20221121/model/DescribeCLSLogIndexV3Response.h>
#include <tencentcloud/csip/v20221121/model/DescribeCLSLogListV3Request.h>
#include <tencentcloud/csip/v20221121/model/DescribeCLSLogListV3Response.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPLicenseBindScheduleRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPLicenseBindScheduleResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPMalwareScanTaskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPMalwareScanTaskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPMalwareScanTaskProgressRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPMalwareScanTaskProgressResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPRiskStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPRiskStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPExposePathRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPExposePathResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPExposuresRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPExposuresResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPLicenseBindScheduleRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPLicenseBindScheduleResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachineDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachineDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachineOsListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachineOsListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachinesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachinesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPOrderListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPOrderListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPScanIpInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPScanIpInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPTaskDurationRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPTaskDurationResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCallRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCallRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCheckConnectivityHostListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCheckConnectivityHostListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCheckViewRisksRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCheckViewRisksResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClbListenerListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClbListenerListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClbListenerRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClbListenerRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClbTargetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClbTargetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCloudAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCloudAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCloudFunctionListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCloudFunctionListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetSyncTaskStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetSyncTaskStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerAppListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerAppListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerComponentListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerComponentListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerPortListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerPortListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerProcessListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerProcessListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerWebServiceListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerWebServiceListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterInstallCommandRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterInstallCommandResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterListV2Request.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterListV2Response.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterNamespaceListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterNamespaceListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterNodeListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterNodeListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterServiceListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterServiceListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterSummaryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterSummaryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterSuperNodeInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterSuperNodeInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceStandardTermTreeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceStandardTermTreeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceStatisticsResponse.h>
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
#include <tencentcloud/csip/v20221121/model/DescribeCosObjectScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCosObjectScanTaskResponse.h>
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
#include <tencentcloud/csip/v20221121/model/DescribeCspmShardConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCspmShardConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCustomAssetTagCountRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCustomAssetTagCountResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCustomRiskRuleDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCustomRiskRuleDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCustomRiskRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCustomRiskRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDefaultSecurityScoreRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDefaultSecurityScoreRuleResponse.h>
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
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetFieldSamplesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetFieldSamplesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetIdentifyInfoListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetIdentifyInfoListResponse.h>
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
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyCategoryListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyCategoryListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyComplianceCategoryRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyComplianceCategoryRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyComplianceGroupDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyComplianceGroupDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyComplianceGroupListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyComplianceGroupListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyDistributionStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyDistributionStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyIdListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyIdListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyInfoListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyInfoListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyLevelGroupListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyLevelGroupListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyRuleDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyRuleDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyRuleTestResultRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyRuleTestResultResponse.h>
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
#include <tencentcloud/csip/v20221121/model/DescribeDynamicAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDynamicAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEDRRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEDRRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEDRScanRecordListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEDRScanRecordListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEDRScanTaskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEDRScanTaskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertCountForAssetRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertCountForAssetResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertCountForContainerRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertCountForContainerResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertMultiAttackStagesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertMultiAttackStagesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertSummaryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertSummaryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertThreatTagsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertThreatTagsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrExcludeNetworkSegmentsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrExcludeNetworkSegmentsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrExportJobDownloadURLRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrExportJobDownloadURLResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrExportJobListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrExportJobListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrLogCollectPathsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrLogCollectPathsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExportJobDownloadURLRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExportJobDownloadURLResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExportJobManageListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExportJobManageListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeAssetCategoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeAssetCategoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposePathRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposePathResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeRiskStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeRiskStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeRisksRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeRisksResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposureAutoTagAttributeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposureAutoTagAttributeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposureAutoTagRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposureAutoTagRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposureTrendRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposureTrendResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposuresRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposuresResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeGatewayAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeGatewayAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeHighBaseLineRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeHighBaseLineRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostKBRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostKBRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostVulItemVPRInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostVulItemVPRInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostVulOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostVulOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostVulRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostVulRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileReportRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileReportResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCTokenListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCTokenListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssetDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssetDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssetListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssetListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssociatedAssetCountRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssociatedAssetCountResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssociatedContainerListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssociatedContainerListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssociatedHostListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssociatedHostListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageComponentListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageComponentListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageExportJobListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageExportJobListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageLayerListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageLayerListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageLayerVulListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageLayerVulListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryAssetOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryAssetOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryConnectivityTaskResultRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryConnectivityTaskResultResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryNamespaceListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryNamespaceListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryScanSubTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryScanSubTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryScanTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryScanTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryTimedScanTaskConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryTimedScanTaskConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryTimedScanTaskPreviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryTimedScanTaskPreviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageSensitiveInfoListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageSensitiveInfoListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageSensitiveWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageSensitiveWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVirusListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVirusListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVirusWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVirusWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVirusWhitelistDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVirusWhitelistDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVulListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVulListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVulSummaryListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVulSummaryListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVulWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVulWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIpInvokeRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIpInvokeRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIpInvokeRecordDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIpInvokeRecordDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeKBDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeKBDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeKBUpdatableMachineListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeKBUpdatableMachineListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeKeySandboxCredentialRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeKeySandboxCredentialResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeKeySandboxCredentialListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeKeySandboxCredentialListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeLastScanTaskInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeLastScanTaskInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeLicenseStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeLicenseStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeLighthouseFirewallRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeLighthouseFirewallRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeListenerListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeListenerListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginTypeGlobalConfRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginTypeGlobalConfResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginTypeHostRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginTypeHostResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginWhiteCombinedListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginWhiteCombinedListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginWhiteHostListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginWhiteHostListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeMachineClearHistoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeMachineClearHistoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeMachineGeneralRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeMachineGeneralResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeMachineLoginTypeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeMachineLoginTypeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeMalwareTimingScanSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeMalwareTimingScanSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeMandatoryVulSetRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeMandatoryVulSetResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeModifyMachinesLoginTypeTasksRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeModifyMachinesLoginTypeTasksResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeMultiCloudAssetCountRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeMultiCloudAssetCountResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNFSScanConfRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNFSScanConfResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNFSScanHostRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNFSScanHostResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNICAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNICAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNatRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNatRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNetAttackSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNetAttackSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifyAgentOfflineDurationRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifyAgentOfflineDurationResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifyAssetConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifyAssetConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingAkRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingAkResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingAlertRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingAlertResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationUserInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationUserInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeOtherCloudAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeOtherCloudAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePodContainerListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePodContainerListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePolicyHitDataRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePolicyHitDataResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePortDetectListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePortDetectListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePortScanTaskCountRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePortScanTaskCountResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePreventUninstallGlobalConfRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePreventUninstallGlobalConfResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePreventUninstallHostRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePreventUninstallHostResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeProcessDaemonGlobalConfRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeProcessDaemonGlobalConfResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeProcessDaemonHostRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeProcessDaemonHostResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePublicCloudAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePublicCloudAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePublicIpAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePublicIpAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRaspLicenseListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRaspLicenseListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRegistryOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRegistryOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRegistryRegionListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRegistryRegionListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRepositoryImageAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRepositoryImageAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeReverseShellSystemPolicyConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeReverseShellSystemPolicyConfigResponse.h>
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
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterRiskTrendAnalysisRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterRiskTrendAnalysisResponse.h>
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
#include <tencentcloud/csip/v20221121/model/DescribeRiskScanCronConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskScanCronConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskTrendDataRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskTrendDataResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFAliasListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFAliasListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFFunctionListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFFunctionListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFFunctionVersionListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFFunctionVersionListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFNamespaceListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFNamespaceListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxACLAlertListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxACLAlertListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxACLRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxACLRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxACLSystemRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxACLSystemRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxDLPSystemRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxDLPSystemRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxFileRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxFileRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanReportListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanReportListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanStatisticRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanStatisticResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanTaskRecordListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanTaskRecordListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScfCustomDomainEndpointsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScfCustomDomainEndpointsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSearchBugInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSearchBugInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityGroupPolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityGroupPolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityRiskTrendRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityRiskTrendResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityScoreOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityScoreOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityScoreRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityScoreRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanAlertDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanAlertDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanAlertListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanAlertListResponse.h>
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
#include <tencentcloud/csip/v20221121/model/DescribeTCRInstanceListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTCRInstanceListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTagRuleAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTagRuleAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogURLRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogURLResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskPredictCostQuotaRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskPredictCostQuotaResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTopAttackInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTopAttackInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaBehaviorSummaryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaBehaviorSummaryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaUserSummaryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaUserSummaryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserCSPMInfoListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserCSPMInfoListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserCallRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserCallRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserDspmInfoListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserDspmInfoListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskAdvanceCFGListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskAdvanceCFGListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVdbAndPocInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVdbAndPocInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVpcAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVpcAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulComponentRelateHostRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulComponentRelateHostResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixTaskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixTaskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixableMachineListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixableMachineListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixedHostDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixedHostDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixedListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixedListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulHostRelateComponentRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulHostRelateComponentResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulIgnoreRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulIgnoreRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulItemListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulItemListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulLabelListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulLabelListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulRiskRelateComponentRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulRiskRelateComponentResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulRiskRelateHostRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulRiskRelateHostResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulScanPeriodicRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulScanPeriodicResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulScanTaskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulScanTaskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulScanTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulScanTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulViewVulRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulViewVulRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeWebhookPolicyListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeWebhookPolicyListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeWebhookReceiverListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeWebhookReceiverListResponse.h>
#include <tencentcloud/csip/v20221121/model/DisableAIScheduleRequest.h>
#include <tencentcloud/csip/v20221121/model/DisableAIScheduleResponse.h>
#include <tencentcloud/csip/v20221121/model/DownloadDspmExportLogRequest.h>
#include <tencentcloud/csip/v20221121/model/DownloadDspmExportLogResponse.h>
#include <tencentcloud/csip/v20221121/model/EnableAIScheduleRequest.h>
#include <tencentcloud/csip/v20221121/model/EnableAIScheduleResponse.h>
#include <tencentcloud/csip/v20221121/model/ExportCSIPMalwareScanTaskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/ExportCSIPMalwareScanTaskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/ExportClientSettingHostListRequest.h>
#include <tencentcloud/csip/v20221121/model/ExportClientSettingHostListResponse.h>
#include <tencentcloud/csip/v20221121/model/ExportEDRRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/ExportEDRRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/ExportTasksRequest.h>
#include <tencentcloud/csip/v20221121/model/ExportTasksResponse.h>
#include <tencentcloud/csip/v20221121/model/InstallClusterAgentRequest.h>
#include <tencentcloud/csip/v20221121/model/InstallClusterAgentResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAILinkSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAILinkSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAIScheduleRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAIScheduleResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAgentConfigSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAgentConfigSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAgentRunModeRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAgentRunModeResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAgentRunPolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAgentRunPolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAlarmRiskStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAlarmRiskStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetCoreAttributeRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetCoreAttributeResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetFilterViewRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetFilterViewResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetTagRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetTagResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetTagsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetTagsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetTagsByAssetInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetTagsByAssetInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBanModeRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBanModeResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselinePolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselinePolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselinePolicyEnableRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselinePolicyEnableResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselineSyncConfRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselineSyncConfResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselineUserOtherConfRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselineUserOtherConfResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselineUserWeakPasswordConfRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselineUserWeakPasswordConfResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBruteAttackBanStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBruteAttackBanStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBruteAttackRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBruteAttackRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPLicenseBindsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPLicenseBindsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPLicenseUnBindsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPLicenseUnBindsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPRaspLicenseBindsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPRaspLicenseBindsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPRaspLicenseUnBindsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPRaspLicenseUnBindsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosAuditBucketMonitorStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosAuditBucketMonitorStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosAuditMonitorAccountRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosAuditMonitorAccountResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosAuditObjectIdentifyStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosAuditObjectIdentifyStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosAuditObjectSampleRateRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosAuditObjectSampleRateResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosMarkInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosMarkInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCspmShardConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCspmShardConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAccessRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAccessRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmApplyingIdentifyComplianceGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmApplyingIdentifyComplianceGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmApproveStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmApproveStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetAccountRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetAccountResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetAccountPrivilegesRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetAccountPrivilegesResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetDataScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetDataScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetDataScanTaskStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetDataScanTaskStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetLogDeliverySwitchRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetLogDeliverySwitchResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetSecurityAnalysisSwitchRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetSecurityAnalysisSwitchResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmBackupSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmBackupSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyCategoryRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyCategoryResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyComplianceGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyComplianceGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyComplianceGroupStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyComplianceGroupStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyComplianceRuleLevelInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyComplianceRuleLevelInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyLevelGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyLevelGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyLevelItemRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyLevelItemResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyRuleStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyRuleStatusResponse.h>
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
#include <tencentcloud/csip/v20221121/model/ModifyEDRRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEDRRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyEDRRuleStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEDRRuleStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyEDRRulesActionRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEDRRulesActionResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrAlertIsolationRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrAlertIsolationResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrAlertPermanentIgnoreRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrAlertPermanentIgnoreResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrAlertStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrAlertStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrExcludeNetworkSegmentsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrExcludeNetworkSegmentsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrLogCollectPathRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrLogCollectPathResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyExposureAutoTagRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyExposureAutoTagRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyExposureAutoTagRuleStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyExposureAutoTagRuleStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyExposureTagRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyExposureTagResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyIaCTokenPeriodRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyIaCTokenPeriodResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageRegistryRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageRegistryResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageRegistryTimedScanTaskConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageRegistryTimedScanTaskConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageSensitiveWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageSensitiveWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageVirusWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageVirusWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageVulWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageVulWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyLoginWhiteRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyLoginWhiteRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyMachineAutoClearConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyMachineAutoClearConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyMachineRemarkRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyMachineRemarkResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyMachinesLoginTypeRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyMachinesLoginTypeResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyMalwareTimingScanSettingsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyMalwareTimingScanSettingsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNFSScanConfRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNFSScanConfResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNFSScanHostRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNFSScanHostResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNetAttackSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNetAttackSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifyAgentOfflineDurationRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifyAgentOfflineDurationResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifyAssetConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifyAssetConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifyMemberRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifyMemberResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingAkRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingAkResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingAlertRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingAlertResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyOrganizationAccountStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyOrganizationAccountStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyPayConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyPayConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyPolicyStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyPolicyStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyProtectionSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyProtectionSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyRaspLicenseBindsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyRaspLicenseBindsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyReverseShellSystemPolicyConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyReverseShellSystemPolicyConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterRiskStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterRiskStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskScanCronConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskScanCronConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxLLMAuditRuleStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxLLMAuditRuleStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifySecurityScoreRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifySecurityScoreRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyShareUserCSPMRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyShareUserCSPMResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifySkillScanAlertStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifySkillScanAlertStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyUebaRuleSwitchRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyUebaRuleSwitchResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyVulScanPeriodicRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyVulScanPeriodicResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyVulWhitelistConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyVulWhitelistConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyVulWhitelistSwitchRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyVulWhitelistSwitchResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyWebhookPolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyWebhookPolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyWebhookPolicyStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyWebhookPolicyStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyWebhookReceiverRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyWebhookReceiverResponse.h>
#include <tencentcloud/csip/v20221121/model/OperateRiskRequest.h>
#include <tencentcloud/csip/v20221121/model/OperateRiskResponse.h>
#include <tencentcloud/csip/v20221121/model/OperateRiskRulePolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/OperateRiskRulePolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/ResetDspmAssetAccountPasswordRequest.h>
#include <tencentcloud/csip/v20221121/model/ResetDspmAssetAccountPasswordResponse.h>
#include <tencentcloud/csip/v20221121/model/RetryDspmExportLogRequest.h>
#include <tencentcloud/csip/v20221121/model/RetryDspmExportLogResponse.h>
#include <tencentcloud/csip/v20221121/model/RevertDspmAssetAccountRequest.h>
#include <tencentcloud/csip/v20221121/model/RevertDspmAssetAccountResponse.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselineAssetItemListRequest.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselineAssetItemListResponse.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselineItemListRequest.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselineItemListResponse.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselinePolicyListRequest.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselinePolicyListResponse.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselineRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselineRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/ScanCSIPTaskAgainRequest.h>
#include <tencentcloud/csip/v20221121/model/ScanCSIPTaskAgainResponse.h>
#include <tencentcloud/csip/v20221121/model/ScanEDRTaskAgainRequest.h>
#include <tencentcloud/csip/v20221121/model/ScanEDRTaskAgainResponse.h>
#include <tencentcloud/csip/v20221121/model/SendDspmAssetLoginSmsCodeRequest.h>
#include <tencentcloud/csip/v20221121/model/SendDspmAssetLoginSmsCodeResponse.h>
#include <tencentcloud/csip/v20221121/model/StartOrModifyPreventUninstallRequest.h>
#include <tencentcloud/csip/v20221121/model/StartOrModifyPreventUninstallResponse.h>
#include <tencentcloud/csip/v20221121/model/StartOrModifyProcessDaemonRequest.h>
#include <tencentcloud/csip/v20221121/model/StartOrModifyProcessDaemonResponse.h>
#include <tencentcloud/csip/v20221121/model/StopBaselineScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/StopBaselineScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/StopCSIPManualMalwareScanRequest.h>
#include <tencentcloud/csip/v20221121/model/StopCSIPManualMalwareScanResponse.h>
#include <tencentcloud/csip/v20221121/model/StopEDRScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/StopEDRScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/StopImageRegistryScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/StopImageRegistryScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/StopPreventUninstallRequest.h>
#include <tencentcloud/csip/v20221121/model/StopPreventUninstallResponse.h>
#include <tencentcloud/csip/v20221121/model/StopProcessDaemonRequest.h>
#include <tencentcloud/csip/v20221121/model/StopProcessDaemonResponse.h>
#include <tencentcloud/csip/v20221121/model/StopRiskCenterTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/StopRiskCenterTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/StopVulScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/StopVulScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/SyncDspmAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/SyncDspmAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/SyncDspmUsersRequest.h>
#include <tencentcloud/csip/v20221121/model/SyncDspmUsersResponse.h>
#include <tencentcloud/csip/v20221121/model/SyncImageRegistryRequest.h>
#include <tencentcloud/csip/v20221121/model/SyncImageRegistryResponse.h>
#include <tencentcloud/csip/v20221121/model/TestWebhookReceiverRequest.h>
#include <tencentcloud/csip/v20221121/model/TestWebhookReceiverResponse.h>
#include <tencentcloud/csip/v20221121/model/UninstallClusterAgentRequest.h>
#include <tencentcloud/csip/v20221121/model/UninstallClusterAgentResponse.h>
#include <tencentcloud/csip/v20221121/model/UpdateAccessKeyAlarmStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/UpdateAccessKeyAlarmStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/UpdateAccessKeyRemarkRequest.h>
#include <tencentcloud/csip/v20221121/model/UpdateAccessKeyRemarkResponse.h>
#include <tencentcloud/csip/v20221121/model/UpdateAlertStatusListRequest.h>
#include <tencentcloud/csip/v20221121/model/UpdateAlertStatusListResponse.h>
#include <tencentcloud/csip/v20221121/model/UpdateClusterOwnerRequest.h>
#include <tencentcloud/csip/v20221121/model/UpdateClusterOwnerResponse.h>
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

                typedef Outcome<Core::Error, Model::AccessAIAnalysisSMTPResponse> AccessAIAnalysisSMTPOutcome;
                typedef std::future<AccessAIAnalysisSMTPOutcome> AccessAIAnalysisSMTPOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AccessAIAnalysisSMTPRequest&, AccessAIAnalysisSMTPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AccessAIAnalysisSMTPAsyncHandler;
                typedef Outcome<Core::Error, Model::AddDspmAssetManagerResponse> AddDspmAssetManagerOutcome;
                typedef std::future<AddDspmAssetManagerOutcome> AddDspmAssetManagerOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AddDspmAssetManagerRequest&, AddDspmAssetManagerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDspmAssetManagerAsyncHandler;
                typedef Outcome<Core::Error, Model::AddImageRegistryResponse> AddImageRegistryOutcome;
                typedef std::future<AddImageRegistryOutcome> AddImageRegistryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AddImageRegistryRequest&, AddImageRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddImageRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::AddLoginWhiteListsResponse> AddLoginWhiteListsOutcome;
                typedef std::future<AddLoginWhiteListsOutcome> AddLoginWhiteListsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AddLoginWhiteListsRequest&, AddLoginWhiteListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddLoginWhiteListsAsyncHandler;
                typedef Outcome<Core::Error, Model::AddNewBindRoleUserResponse> AddNewBindRoleUserOutcome;
                typedef std::future<AddNewBindRoleUserOutcome> AddNewBindRoleUserOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AddNewBindRoleUserRequest&, AddNewBindRoleUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddNewBindRoleUserAsyncHandler;
                typedef Outcome<Core::Error, Model::AddVulWhitelistResponse> AddVulWhitelistOutcome;
                typedef std::future<AddVulWhitelistOutcome> AddVulWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AddVulWhitelistRequest&, AddVulWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddVulWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyBaselinePolicyResponse> BatchModifyBaselinePolicyOutcome;
                typedef std::future<BatchModifyBaselinePolicyOutcome> BatchModifyBaselinePolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::BatchModifyBaselinePolicyRequest&, BatchModifyBaselinePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyBaselinePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyImageRegistryTimedScanTaskConfigResponse> BatchModifyImageRegistryTimedScanTaskConfigOutcome;
                typedef std::future<BatchModifyImageRegistryTimedScanTaskConfigOutcome> BatchModifyImageRegistryTimedScanTaskConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::BatchModifyImageRegistryTimedScanTaskConfigRequest&, BatchModifyImageRegistryTimedScanTaskConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyImageRegistryTimedScanTaskConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyImageSensitiveWhitelistResponse> BatchModifyImageSensitiveWhitelistOutcome;
                typedef std::future<BatchModifyImageSensitiveWhitelistOutcome> BatchModifyImageSensitiveWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::BatchModifyImageSensitiveWhitelistRequest&, BatchModifyImageSensitiveWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyImageSensitiveWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyImageVirusWhitelistResponse> BatchModifyImageVirusWhitelistOutcome;
                typedef std::future<BatchModifyImageVirusWhitelistOutcome> BatchModifyImageVirusWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::BatchModifyImageVirusWhitelistRequest&, BatchModifyImageVirusWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyImageVirusWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyImageVulWhitelistResponse> BatchModifyImageVulWhitelistOutcome;
                typedef std::future<BatchModifyImageVulWhitelistOutcome> BatchModifyImageVulWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::BatchModifyImageVulWhitelistRequest&, BatchModifyImageVulWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyImageVulWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::BindClusterOwnerResponse> BindClusterOwnerOutcome;
                typedef std::future<BindClusterOwnerOutcome> BindClusterOwnerOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::BindClusterOwnerRequest&, BindClusterOwnerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindClusterOwnerAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelEdrAlertIgnoreResponse> CancelEdrAlertIgnoreOutcome;
                typedef std::future<CancelEdrAlertIgnoreOutcome> CancelEdrAlertIgnoreOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CancelEdrAlertIgnoreRequest&, CancelEdrAlertIgnoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelEdrAlertIgnoreAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckCWPExposePathPermissionResponse> CheckCWPExposePathPermissionOutcome;
                typedef std::future<CheckCWPExposePathPermissionOutcome> CheckCWPExposePathPermissionOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CheckCWPExposePathPermissionRequest&, CheckCWPExposePathPermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckCWPExposePathPermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckImageRegistryInstanceNameDuplicateResponse> CheckImageRegistryInstanceNameDuplicateOutcome;
                typedef std::future<CheckImageRegistryInstanceNameDuplicateOutcome> CheckImageRegistryInstanceNameDuplicateOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CheckImageRegistryInstanceNameDuplicateRequest&, CheckImageRegistryInstanceNameDuplicateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckImageRegistryInstanceNameDuplicateAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckIsUltimateVersionResponse> CheckIsUltimateVersionOutcome;
                typedef std::future<CheckIsUltimateVersionOutcome> CheckIsUltimateVersionOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CheckIsUltimateVersionRequest&, CheckIsUltimateVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckIsUltimateVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckRiskResponse> CheckRiskOutcome;
                typedef std::future<CheckRiskOutcome> CheckRiskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CheckRiskRequest&, CheckRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckRiskAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyBaselinePolicyResponse> CopyBaselinePolicyOutcome;
                typedef std::future<CopyBaselinePolicyOutcome> CopyBaselinePolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CopyBaselinePolicyRequest&, CopyBaselinePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyBaselinePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIScheduleResponse> CreateAIScheduleOutcome;
                typedef std::future<CreateAIScheduleOutcome> CreateAIScheduleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAIScheduleRequest&, CreateAIScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccessKeyCheckTaskResponse> CreateAccessKeyCheckTaskOutcome;
                typedef std::future<CreateAccessKeyCheckTaskOutcome> CreateAccessKeyCheckTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAccessKeyCheckTaskRequest&, CreateAccessKeyCheckTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessKeyCheckTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccessKeySyncTaskResponse> CreateAccessKeySyncTaskOutcome;
                typedef std::future<CreateAccessKeySyncTaskOutcome> CreateAccessKeySyncTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAccessKeySyncTaskRequest&, CreateAccessKeySyncTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessKeySyncTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAllAssetsExportJobResponse> CreateAllAssetsExportJobOutcome;
                typedef std::future<CreateAllAssetsExportJobOutcome> CreateAllAssetsExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAllAssetsExportJobRequest&, CreateAllAssetsExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAllAssetsExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetComponentListExportJobResponse> CreateAssetComponentListExportJobOutcome;
                typedef std::future<CreateAssetComponentListExportJobOutcome> CreateAssetComponentListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAssetComponentListExportJobRequest&, CreateAssetComponentListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetComponentListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetComponentRelatedImageListExportJobResponse> CreateAssetComponentRelatedImageListExportJobOutcome;
                typedef std::future<CreateAssetComponentRelatedImageListExportJobOutcome> CreateAssetComponentRelatedImageListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAssetComponentRelatedImageListExportJobRequest&, CreateAssetComponentRelatedImageListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetComponentRelatedImageListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetFilterViewResponse> CreateAssetFilterViewOutcome;
                typedef std::future<CreateAssetFilterViewOutcome> CreateAssetFilterViewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAssetFilterViewRequest&, CreateAssetFilterViewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetFilterViewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetProcessExportJobResponse> CreateAssetProcessExportJobOutcome;
                typedef std::future<CreateAssetProcessExportJobOutcome> CreateAssetProcessExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAssetProcessExportJobRequest&, CreateAssetProcessExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetProcessExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetSyncTaskResponse> CreateAssetSyncTaskOutcome;
                typedef std::future<CreateAssetSyncTaskOutcome> CreateAssetSyncTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAssetSyncTaskRequest&, CreateAssetSyncTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetSyncTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetTagResponse> CreateAssetTagOutcome;
                typedef std::future<CreateAssetTagOutcome> CreateAssetTagOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAssetTagRequest&, CreateAssetTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetTagAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetViewRisksExportJobResponse> CreateAssetViewRisksExportJobOutcome;
                typedef std::future<CreateAssetViewRisksExportJobOutcome> CreateAssetViewRisksExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAssetViewRisksExportJobRequest&, CreateAssetViewRisksExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetViewRisksExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBaselineAggregatedItemExportJobResponse> CreateBaselineAggregatedItemExportJobOutcome;
                typedef std::future<CreateBaselineAggregatedItemExportJobOutcome> CreateBaselineAggregatedItemExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateBaselineAggregatedItemExportJobRequest&, CreateBaselineAggregatedItemExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBaselineAggregatedItemExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBaselineFixRecordExportJobResponse> CreateBaselineFixRecordExportJobOutcome;
                typedef std::future<CreateBaselineFixRecordExportJobOutcome> CreateBaselineFixRecordExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateBaselineFixRecordExportJobRequest&, CreateBaselineFixRecordExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBaselineFixRecordExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBaselineMainTaskExportJobResponse> CreateBaselineMainTaskExportJobOutcome;
                typedef std::future<CreateBaselineMainTaskExportJobOutcome> CreateBaselineMainTaskExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateBaselineMainTaskExportJobRequest&, CreateBaselineMainTaskExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBaselineMainTaskExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCFGRiskPDFReportExportJobResponse> CreateCFGRiskPDFReportExportJobOutcome;
                typedef std::future<CreateCFGRiskPDFReportExportJobOutcome> CreateCFGRiskPDFReportExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateCFGRiskPDFReportExportJobRequest&, CreateCFGRiskPDFReportExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCFGRiskPDFReportExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCFGRisksExportJobResponse> CreateCFGRisksExportJobOutcome;
                typedef std::future<CreateCFGRisksExportJobOutcome> CreateCFGRisksExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateCFGRisksExportJobRequest&, CreateCFGRisksExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCFGRisksExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCSIPManualMalwareScanResponse> CreateCSIPManualMalwareScanOutcome;
                typedef std::future<CreateCSIPManualMalwareScanOutcome> CreateCSIPManualMalwareScanOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateCSIPManualMalwareScanRequest&, CreateCSIPManualMalwareScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCSIPManualMalwareScanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCheckViewRisksExportJobResponse> CreateCheckViewRisksExportJobOutcome;
                typedef std::future<CreateCheckViewRisksExportJobOutcome> CreateCheckViewRisksExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateCheckViewRisksExportJobRequest&, CreateCheckViewRisksExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCheckViewRisksExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudFunctionExportJobResponse> CreateCloudFunctionExportJobOutcome;
                typedef std::future<CreateCloudFunctionExportJobOutcome> CreateCloudFunctionExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateCloudFunctionExportJobRequest&, CreateCloudFunctionExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudFunctionExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterAssetSyncTaskResponse> CreateClusterAssetSyncTaskOutcome;
                typedef std::future<CreateClusterAssetSyncTaskOutcome> CreateClusterAssetSyncTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateClusterAssetSyncTaskRequest&, CreateClusterAssetSyncTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAssetSyncTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterContainerListExportJobResponse> CreateClusterContainerListExportJobOutcome;
                typedef std::future<CreateClusterContainerListExportJobOutcome> CreateClusterContainerListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateClusterContainerListExportJobRequest&, CreateClusterContainerListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterContainerListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterListExportJobResponse> CreateClusterListExportJobOutcome;
                typedef std::future<CreateClusterListExportJobOutcome> CreateClusterListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateClusterListExportJobRequest&, CreateClusterListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterNamespaceListExportJobResponse> CreateClusterNamespaceListExportJobOutcome;
                typedef std::future<CreateClusterNamespaceListExportJobOutcome> CreateClusterNamespaceListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateClusterNamespaceListExportJobRequest&, CreateClusterNamespaceListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterNamespaceListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterNodeListExportJobResponse> CreateClusterNodeListExportJobOutcome;
                typedef std::future<CreateClusterNodeListExportJobOutcome> CreateClusterNodeListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateClusterNodeListExportJobRequest&, CreateClusterNodeListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterNodeListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateComplianceRiskExportJobResponse> CreateComplianceRiskExportJobOutcome;
                typedef std::future<CreateComplianceRiskExportJobOutcome> CreateComplianceRiskExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateComplianceRiskExportJobRequest&, CreateComplianceRiskExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateComplianceRiskExportJobAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateDspmAssetIdentifyInfoExportJobResponse> CreateDspmAssetIdentifyInfoExportJobOutcome;
                typedef std::future<CreateDspmAssetIdentifyInfoExportJobOutcome> CreateDspmAssetIdentifyInfoExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmAssetIdentifyInfoExportJobRequest&, CreateDspmAssetIdentifyInfoExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmAssetIdentifyInfoExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmAssetsExportJobResponse> CreateDspmAssetsExportJobOutcome;
                typedef std::future<CreateDspmAssetsExportJobOutcome> CreateDspmAssetsExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmAssetsExportJobRequest&, CreateDspmAssetsExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmAssetsExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmExportTaskResponse> CreateDspmExportTaskOutcome;
                typedef std::future<CreateDspmExportTaskOutcome> CreateDspmExportTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmExportTaskRequest&, CreateDspmExportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmExportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyCategoryResponse> CreateDspmIdentifyCategoryOutcome;
                typedef std::future<CreateDspmIdentifyCategoryOutcome> CreateDspmIdentifyCategoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyCategoryRequest&, CreateDspmIdentifyCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyComplianceCategoryRelationResponse> CreateDspmIdentifyComplianceCategoryRelationOutcome;
                typedef std::future<CreateDspmIdentifyComplianceCategoryRelationOutcome> CreateDspmIdentifyComplianceCategoryRelationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyComplianceCategoryRelationRequest&, CreateDspmIdentifyComplianceCategoryRelationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyComplianceCategoryRelationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyComplianceGroupResponse> CreateDspmIdentifyComplianceGroupOutcome;
                typedef std::future<CreateDspmIdentifyComplianceGroupOutcome> CreateDspmIdentifyComplianceGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyComplianceGroupRequest&, CreateDspmIdentifyComplianceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyComplianceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyComplianceGroupCopyResponse> CreateDspmIdentifyComplianceGroupCopyOutcome;
                typedef std::future<CreateDspmIdentifyComplianceGroupCopyOutcome> CreateDspmIdentifyComplianceGroupCopyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyComplianceGroupCopyRequest&, CreateDspmIdentifyComplianceGroupCopyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyComplianceGroupCopyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyComplianceRuleRelationResponse> CreateDspmIdentifyComplianceRuleRelationOutcome;
                typedef std::future<CreateDspmIdentifyComplianceRuleRelationOutcome> CreateDspmIdentifyComplianceRuleRelationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyComplianceRuleRelationRequest&, CreateDspmIdentifyComplianceRuleRelationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyComplianceRuleRelationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyInfoListExportJobResponse> CreateDspmIdentifyInfoListExportJobOutcome;
                typedef std::future<CreateDspmIdentifyInfoListExportJobOutcome> CreateDspmIdentifyInfoListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyInfoListExportJobRequest&, CreateDspmIdentifyInfoListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyInfoListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyLevelGroupResponse> CreateDspmIdentifyLevelGroupOutcome;
                typedef std::future<CreateDspmIdentifyLevelGroupOutcome> CreateDspmIdentifyLevelGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyLevelGroupRequest&, CreateDspmIdentifyLevelGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyLevelGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyRuleResponse> CreateDspmIdentifyRuleOutcome;
                typedef std::future<CreateDspmIdentifyRuleOutcome> CreateDspmIdentifyRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyRuleRequest&, CreateDspmIdentifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmPersonalIdentifyResponse> CreateDspmPersonalIdentifyOutcome;
                typedef std::future<CreateDspmPersonalIdentifyOutcome> CreateDspmPersonalIdentifyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmPersonalIdentifyRequest&, CreateDspmPersonalIdentifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmPersonalIdentifyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmRiskExportJobResponse> CreateDspmRiskExportJobOutcome;
                typedef std::future<CreateDspmRiskExportJobOutcome> CreateDspmRiskExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmRiskExportJobRequest&, CreateDspmRiskExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmRiskExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmWhitelistStrategyResponse> CreateDspmWhitelistStrategyOutcome;
                typedef std::future<CreateDspmWhitelistStrategyOutcome> CreateDspmWhitelistStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmWhitelistStrategyRequest&, CreateDspmWhitelistStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmWhitelistStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDynamicAssetsExportJobResponse> CreateDynamicAssetsExportJobOutcome;
                typedef std::future<CreateDynamicAssetsExportJobOutcome> CreateDynamicAssetsExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDynamicAssetsExportJobRequest&, CreateDynamicAssetsExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDynamicAssetsExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEDRManualScanResponse> CreateEDRManualScanOutcome;
                typedef std::future<CreateEDRManualScanOutcome> CreateEDRManualScanOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateEDRManualScanRequest&, CreateEDRManualScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEDRManualScanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdrAlertExportJobResponse> CreateEdrAlertExportJobOutcome;
                typedef std::future<CreateEdrAlertExportJobOutcome> CreateEdrAlertExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateEdrAlertExportJobRequest&, CreateEdrAlertExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdrAlertExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdrLessAlertExportJobResponse> CreateEdrLessAlertExportJobOutcome;
                typedef std::future<CreateEdrLessAlertExportJobOutcome> CreateEdrLessAlertExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateEdrLessAlertExportJobRequest&, CreateEdrLessAlertExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdrLessAlertExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExposureAutoTagRuleResponse> CreateExposureAutoTagRuleOutcome;
                typedef std::future<CreateExposureAutoTagRuleOutcome> CreateExposureAutoTagRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateExposureAutoTagRuleRequest&, CreateExposureAutoTagRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExposureAutoTagRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExposuresExportJobResponse> CreateExposuresExportJobOutcome;
                typedef std::future<CreateExposuresExportJobOutcome> CreateExposuresExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateExposuresExportJobRequest&, CreateExposuresExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExposuresExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHighBaseLineRisksExportJobResponse> CreateHighBaseLineRisksExportJobOutcome;
                typedef std::future<CreateHighBaseLineRisksExportJobOutcome> CreateHighBaseLineRisksExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateHighBaseLineRisksExportJobRequest&, CreateHighBaseLineRisksExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHighBaseLineRisksExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHostVulExportJobResponse> CreateHostVulExportJobOutcome;
                typedef std::future<CreateHostVulExportJobOutcome> CreateHostVulExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateHostVulExportJobRequest&, CreateHostVulExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHostVulExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIaCAccessTokenResponse> CreateIaCAccessTokenOutcome;
                typedef std::future<CreateIaCAccessTokenOutcome> CreateIaCAccessTokenOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateIaCAccessTokenRequest&, CreateIaCAccessTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIaCAccessTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIaCFileExportJobResponse> CreateIaCFileExportJobOutcome;
                typedef std::future<CreateIaCFileExportJobOutcome> CreateIaCFileExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateIaCFileExportJobRequest&, CreateIaCFileExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIaCFileExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIaCFileReScanTaskResponse> CreateIaCFileReScanTaskOutcome;
                typedef std::future<CreateIaCFileReScanTaskOutcome> CreateIaCFileReScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateIaCFileReScanTaskRequest&, CreateIaCFileReScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIaCFileReScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageAssetListExportJobResponse> CreateImageAssetListExportJobOutcome;
                typedef std::future<CreateImageAssetListExportJobOutcome> CreateImageAssetListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageAssetListExportJobRequest&, CreateImageAssetListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAssetListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageAssociatedContainerListExportJobResponse> CreateImageAssociatedContainerListExportJobOutcome;
                typedef std::future<CreateImageAssociatedContainerListExportJobOutcome> CreateImageAssociatedContainerListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageAssociatedContainerListExportJobRequest&, CreateImageAssociatedContainerListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAssociatedContainerListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageAssociatedHostListExportJobResponse> CreateImageAssociatedHostListExportJobOutcome;
                typedef std::future<CreateImageAssociatedHostListExportJobOutcome> CreateImageAssociatedHostListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageAssociatedHostListExportJobRequest&, CreateImageAssociatedHostListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAssociatedHostListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageComponentListExportJobResponse> CreateImageComponentListExportJobOutcome;
                typedef std::future<CreateImageComponentListExportJobOutcome> CreateImageComponentListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageComponentListExportJobRequest&, CreateImageComponentListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageComponentListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageLayerVulListExportJobResponse> CreateImageLayerVulListExportJobOutcome;
                typedef std::future<CreateImageLayerVulListExportJobOutcome> CreateImageLayerVulListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageLayerVulListExportJobRequest&, CreateImageLayerVulListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageLayerVulListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageRegistryConnectivityTaskResponse> CreateImageRegistryConnectivityTaskOutcome;
                typedef std::future<CreateImageRegistryConnectivityTaskOutcome> CreateImageRegistryConnectivityTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageRegistryConnectivityTaskRequest&, CreateImageRegistryConnectivityTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageRegistryConnectivityTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageRegistryListExportJobResponse> CreateImageRegistryListExportJobOutcome;
                typedef std::future<CreateImageRegistryListExportJobOutcome> CreateImageRegistryListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageRegistryListExportJobRequest&, CreateImageRegistryListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageRegistryListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageRegistryScanTaskResponse> CreateImageRegistryScanTaskOutcome;
                typedef std::future<CreateImageRegistryScanTaskOutcome> CreateImageRegistryScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageRegistryScanTaskRequest&, CreateImageRegistryScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageRegistryScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageRegistryTimedScanTaskConfigResponse> CreateImageRegistryTimedScanTaskConfigOutcome;
                typedef std::future<CreateImageRegistryTimedScanTaskConfigOutcome> CreateImageRegistryTimedScanTaskConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageRegistryTimedScanTaskConfigRequest&, CreateImageRegistryTimedScanTaskConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageRegistryTimedScanTaskConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageSensitiveInfoListExportJobResponse> CreateImageSensitiveInfoListExportJobOutcome;
                typedef std::future<CreateImageSensitiveInfoListExportJobOutcome> CreateImageSensitiveInfoListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageSensitiveInfoListExportJobRequest&, CreateImageSensitiveInfoListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageSensitiveInfoListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageSensitiveWhitelistResponse> CreateImageSensitiveWhitelistOutcome;
                typedef std::future<CreateImageSensitiveWhitelistOutcome> CreateImageSensitiveWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageSensitiveWhitelistRequest&, CreateImageSensitiveWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageSensitiveWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageVirusListExportJobResponse> CreateImageVirusListExportJobOutcome;
                typedef std::future<CreateImageVirusListExportJobOutcome> CreateImageVirusListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageVirusListExportJobRequest&, CreateImageVirusListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageVirusListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageVirusWhitelistResponse> CreateImageVirusWhitelistOutcome;
                typedef std::future<CreateImageVirusWhitelistOutcome> CreateImageVirusWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageVirusWhitelistRequest&, CreateImageVirusWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageVirusWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageVulListExportJobResponse> CreateImageVulListExportJobOutcome;
                typedef std::future<CreateImageVulListExportJobOutcome> CreateImageVulListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageVulListExportJobRequest&, CreateImageVulListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageVulListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageVulSummaryListExportJobResponse> CreateImageVulSummaryListExportJobOutcome;
                typedef std::future<CreateImageVulSummaryListExportJobOutcome> CreateImageVulSummaryListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageVulSummaryListExportJobRequest&, CreateImageVulSummaryListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageVulSummaryListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageVulWhitelistResponse> CreateImageVulWhitelistOutcome;
                typedef std::future<CreateImageVulWhitelistOutcome> CreateImageVulWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageVulWhitelistRequest&, CreateImageVulWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageVulWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePodContainerListExportJobResponse> CreatePodContainerListExportJobOutcome;
                typedef std::future<CreatePodContainerListExportJobOutcome> CreatePodContainerListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreatePodContainerListExportJobRequest&, CreatePodContainerListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePodContainerListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePodServiceListExportJobResponse> CreatePodServiceListExportJobOutcome;
                typedef std::future<CreatePodServiceListExportJobOutcome> CreatePodServiceListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreatePodServiceListExportJobRequest&, CreatePodServiceListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePodServiceListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePublicAssetsExportJobResponse> CreatePublicAssetsExportJobOutcome;
                typedef std::future<CreatePublicAssetsExportJobOutcome> CreatePublicAssetsExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreatePublicAssetsExportJobRequest&, CreatePublicAssetsExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePublicAssetsExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRiskCenterScanTaskResponse> CreateRiskCenterScanTaskOutcome;
                typedef std::future<CreateRiskCenterScanTaskOutcome> CreateRiskCenterScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateRiskCenterScanTaskRequest&, CreateRiskCenterScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRiskCenterScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRiskDetailExportJobResponse> CreateRiskDetailExportJobOutcome;
                typedef std::future<CreateRiskDetailExportJobOutcome> CreateRiskDetailExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateRiskDetailExportJobRequest&, CreateRiskDetailExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRiskDetailExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScanStatisticExportJobResponse> CreateScanStatisticExportJobOutcome;
                typedef std::future<CreateScanStatisticExportJobOutcome> CreateScanStatisticExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateScanStatisticExportJobRequest&, CreateScanStatisticExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScanStatisticExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScanTaskResponse> CreateScanTaskOutcome;
                typedef std::future<CreateScanTaskOutcome> CreateScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateScanTaskRequest&, CreateScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSkillScanResponse> CreateSkillScanOutcome;
                typedef std::future<CreateSkillScanOutcome> CreateSkillScanOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateSkillScanRequest&, CreateSkillScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSkillScanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulFixRetryTaskResponse> CreateVulFixRetryTaskOutcome;
                typedef std::future<CreateVulFixRetryTaskOutcome> CreateVulFixRetryTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateVulFixRetryTaskRequest&, CreateVulFixRetryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulFixRetryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulFixTaskResponse> CreateVulFixTaskOutcome;
                typedef std::future<CreateVulFixTaskOutcome> CreateVulFixTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateVulFixTaskRequest&, CreateVulFixTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulFixTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulFixedExportJobResponse> CreateVulFixedExportJobOutcome;
                typedef std::future<CreateVulFixedExportJobOutcome> CreateVulFixedExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateVulFixedExportJobRequest&, CreateVulFixedExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulFixedExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulReScanResponse> CreateVulReScanOutcome;
                typedef std::future<CreateVulReScanOutcome> CreateVulReScanOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateVulReScanRequest&, CreateVulReScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulReScanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulRisksExportJobResponse> CreateVulRisksExportJobOutcome;
                typedef std::future<CreateVulRisksExportJobOutcome> CreateVulRisksExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateVulRisksExportJobRequest&, CreateVulRisksExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulRisksExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulScanManualResponse> CreateVulScanManualOutcome;
                typedef std::future<CreateVulScanManualOutcome> CreateVulScanManualOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateVulScanManualRequest&, CreateVulScanManualOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulScanManualAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIAnalysisSMTPAccessResponse> DeleteAIAnalysisSMTPAccessOutcome;
                typedef std::future<DeleteAIAnalysisSMTPAccessOutcome> DeleteAIAnalysisSMTPAccessOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteAIAnalysisSMTPAccessRequest&, DeleteAIAnalysisSMTPAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIAnalysisSMTPAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIScheduleResponse> DeleteAIScheduleOutcome;
                typedef std::future<DeleteAIScheduleOutcome> DeleteAIScheduleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteAIScheduleRequest&, DeleteAIScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAssetFilterViewResponse> DeleteAssetFilterViewOutcome;
                typedef std::future<DeleteAssetFilterViewOutcome> DeleteAssetFilterViewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteAssetFilterViewRequest&, DeleteAssetFilterViewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAssetFilterViewAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAssetTagResponse> DeleteAssetTagOutcome;
                typedef std::future<DeleteAssetTagOutcome> DeleteAssetTagOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteAssetTagRequest&, DeleteAssetTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAssetTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBaselineSelfDefinedPolicyListResponse> DeleteBaselineSelfDefinedPolicyListOutcome;
                typedef std::future<DeleteBaselineSelfDefinedPolicyListOutcome> DeleteBaselineSelfDefinedPolicyListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteBaselineSelfDefinedPolicyListRequest&, DeleteBaselineSelfDefinedPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBaselineSelfDefinedPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCSIPMalwareScanTaskResponse> DeleteCSIPMalwareScanTaskOutcome;
                typedef std::future<DeleteCSIPMalwareScanTaskOutcome> DeleteCSIPMalwareScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteCSIPMalwareScanTaskRequest&, DeleteCSIPMalwareScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCSIPMalwareScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterResponse> DeleteClusterOutcome;
                typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteClusterRequest&, DeleteClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteDspmIdentifyCategoryResponse> DeleteDspmIdentifyCategoryOutcome;
                typedef std::future<DeleteDspmIdentifyCategoryOutcome> DeleteDspmIdentifyCategoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmIdentifyCategoryRequest&, DeleteDspmIdentifyCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmIdentifyCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmIdentifyComplianceCategoryRelationResponse> DeleteDspmIdentifyComplianceCategoryRelationOutcome;
                typedef std::future<DeleteDspmIdentifyComplianceCategoryRelationOutcome> DeleteDspmIdentifyComplianceCategoryRelationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmIdentifyComplianceCategoryRelationRequest&, DeleteDspmIdentifyComplianceCategoryRelationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmIdentifyComplianceCategoryRelationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmIdentifyComplianceGroupResponse> DeleteDspmIdentifyComplianceGroupOutcome;
                typedef std::future<DeleteDspmIdentifyComplianceGroupOutcome> DeleteDspmIdentifyComplianceGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmIdentifyComplianceGroupRequest&, DeleteDspmIdentifyComplianceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmIdentifyComplianceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmIdentifyComplianceRuleRelationResponse> DeleteDspmIdentifyComplianceRuleRelationOutcome;
                typedef std::future<DeleteDspmIdentifyComplianceRuleRelationOutcome> DeleteDspmIdentifyComplianceRuleRelationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmIdentifyComplianceRuleRelationRequest&, DeleteDspmIdentifyComplianceRuleRelationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmIdentifyComplianceRuleRelationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmIdentifyLevelGroupResponse> DeleteDspmIdentifyLevelGroupOutcome;
                typedef std::future<DeleteDspmIdentifyLevelGroupOutcome> DeleteDspmIdentifyLevelGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmIdentifyLevelGroupRequest&, DeleteDspmIdentifyLevelGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmIdentifyLevelGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmIdentifyRuleResponse> DeleteDspmIdentifyRuleOutcome;
                typedef std::future<DeleteDspmIdentifyRuleOutcome> DeleteDspmIdentifyRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmIdentifyRuleRequest&, DeleteDspmIdentifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmIdentifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmPersonalIdentifyResponse> DeleteDspmPersonalIdentifyOutcome;
                typedef std::future<DeleteDspmPersonalIdentifyOutcome> DeleteDspmPersonalIdentifyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmPersonalIdentifyRequest&, DeleteDspmPersonalIdentifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmPersonalIdentifyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmRestoreLogListResponse> DeleteDspmRestoreLogListOutcome;
                typedef std::future<DeleteDspmRestoreLogListOutcome> DeleteDspmRestoreLogListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmRestoreLogListRequest&, DeleteDspmRestoreLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmRestoreLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmWhitelistStrategyResponse> DeleteDspmWhitelistStrategyOutcome;
                typedef std::future<DeleteDspmWhitelistStrategyOutcome> DeleteDspmWhitelistStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmWhitelistStrategyRequest&, DeleteDspmWhitelistStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmWhitelistStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEDRRulesResponse> DeleteEDRRulesOutcome;
                typedef std::future<DeleteEDRRulesOutcome> DeleteEDRRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteEDRRulesRequest&, DeleteEDRRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEDRRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEDRScanTaskResponse> DeleteEDRScanTaskOutcome;
                typedef std::future<DeleteEDRScanTaskOutcome> DeleteEDRScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteEDRScanTaskRequest&, DeleteEDRScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEDRScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEdrLogCollectPathsResponse> DeleteEdrLogCollectPathsOutcome;
                typedef std::future<DeleteEdrLogCollectPathsOutcome> DeleteEdrLogCollectPathsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteEdrLogCollectPathsRequest&, DeleteEdrLogCollectPathsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdrLogCollectPathsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteExposureAutoTagRuleResponse> DeleteExposureAutoTagRuleOutcome;
                typedef std::future<DeleteExposureAutoTagRuleOutcome> DeleteExposureAutoTagRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteExposureAutoTagRuleRequest&, DeleteExposureAutoTagRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExposureAutoTagRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIaCAccessTokenResponse> DeleteIaCAccessTokenOutcome;
                typedef std::future<DeleteIaCAccessTokenOutcome> DeleteIaCAccessTokenOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteIaCAccessTokenRequest&, DeleteIaCAccessTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIaCAccessTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIaCFileResponse> DeleteIaCFileOutcome;
                typedef std::future<DeleteIaCFileOutcome> DeleteIaCFileOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteIaCFileRequest&, DeleteIaCFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIaCFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageRegistryResponse> DeleteImageRegistryOutcome;
                typedef std::future<DeleteImageRegistryOutcome> DeleteImageRegistryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteImageRegistryRequest&, DeleteImageRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageRegistryScanTaskResponse> DeleteImageRegistryScanTaskOutcome;
                typedef std::future<DeleteImageRegistryScanTaskOutcome> DeleteImageRegistryScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteImageRegistryScanTaskRequest&, DeleteImageRegistryScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageRegistryScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageRegistryTimedScanTaskConfigResponse> DeleteImageRegistryTimedScanTaskConfigOutcome;
                typedef std::future<DeleteImageRegistryTimedScanTaskConfigOutcome> DeleteImageRegistryTimedScanTaskConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteImageRegistryTimedScanTaskConfigRequest&, DeleteImageRegistryTimedScanTaskConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageRegistryTimedScanTaskConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageSensitiveWhitelistResponse> DeleteImageSensitiveWhitelistOutcome;
                typedef std::future<DeleteImageSensitiveWhitelistOutcome> DeleteImageSensitiveWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteImageSensitiveWhitelistRequest&, DeleteImageSensitiveWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageSensitiveWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageVirusWhitelistResponse> DeleteImageVirusWhitelistOutcome;
                typedef std::future<DeleteImageVirusWhitelistOutcome> DeleteImageVirusWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteImageVirusWhitelistRequest&, DeleteImageVirusWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageVirusWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageVulWhitelistResponse> DeleteImageVulWhitelistOutcome;
                typedef std::future<DeleteImageVulWhitelistOutcome> DeleteImageVulWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteImageVulWhitelistRequest&, DeleteImageVulWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageVulWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoginWhiteListResponse> DeleteLoginWhiteListOutcome;
                typedef std::future<DeleteLoginWhiteListOutcome> DeleteLoginWhiteListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteLoginWhiteListRequest&, DeleteLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoginWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineClearHistoryResponse> DeleteMachineClearHistoryOutcome;
                typedef std::future<DeleteMachineClearHistoryOutcome> DeleteMachineClearHistoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteMachineClearHistoryRequest&, DeleteMachineClearHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineClearHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRiskScanTaskResponse> DeleteRiskScanTaskOutcome;
                typedef std::future<DeleteRiskScanTaskOutcome> DeleteRiskScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteRiskScanTaskRequest&, DeleteRiskScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRiskScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSandboxLLMAuditRuleResponse> DeleteSandboxLLMAuditRuleOutcome;
                typedef std::future<DeleteSandboxLLMAuditRuleOutcome> DeleteSandboxLLMAuditRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteSandboxLLMAuditRuleRequest&, DeleteSandboxLLMAuditRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSandboxLLMAuditRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVulWhitelistResponse> DeleteVulWhitelistOutcome;
                typedef std::future<DeleteVulWhitelistOutcome> DeleteVulWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteVulWhitelistRequest&, DeleteVulWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVulWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebhookPoliciesResponse> DeleteWebhookPoliciesOutcome;
                typedef std::future<DeleteWebhookPoliciesOutcome> DeleteWebhookPoliciesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteWebhookPoliciesRequest&, DeleteWebhookPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebhookPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebhookReceiversResponse> DeleteWebhookReceiversOutcome;
                typedef std::future<DeleteWebhookReceiversOutcome> DeleteWebhookReceiversOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteWebhookReceiversRequest&, DeleteWebhookReceiversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebhookReceiversAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAgentAssetListResponse> DescribeAIAgentAssetListOutcome;
                typedef std::future<DescribeAIAgentAssetListOutcome> DescribeAIAgentAssetListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAgentAssetListRequest&, DescribeAIAgentAssetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAgentAssetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAgentCredentialListResponse> DescribeAIAgentCredentialListOutcome;
                typedef std::future<DescribeAIAgentCredentialListOutcome> DescribeAIAgentCredentialListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAgentCredentialListRequest&, DescribeAIAgentCredentialListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAgentCredentialListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAgentCredentialLocationListResponse> DescribeAIAgentCredentialLocationListOutcome;
                typedef std::future<DescribeAIAgentCredentialLocationListOutcome> DescribeAIAgentCredentialLocationListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAgentCredentialLocationListRequest&, DescribeAIAgentCredentialLocationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAgentCredentialLocationListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAgentSkillListResponse> DescribeAIAgentSkillListOutcome;
                typedef std::future<DescribeAIAgentSkillListOutcome> DescribeAIAgentSkillListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAgentSkillListRequest&, DescribeAIAgentSkillListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAgentSkillListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAnalysisFileDownloadURLResponse> DescribeAIAnalysisFileDownloadURLOutcome;
                typedef std::future<DescribeAIAnalysisFileDownloadURLOutcome> DescribeAIAnalysisFileDownloadURLOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAnalysisFileDownloadURLRequest&, DescribeAIAnalysisFileDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisFileDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAnalysisHistoryResponse> DescribeAIAnalysisHistoryOutcome;
                typedef std::future<DescribeAIAnalysisHistoryOutcome> DescribeAIAnalysisHistoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAnalysisHistoryRequest&, DescribeAIAnalysisHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAnalysisRecommendQuestionsResponse> DescribeAIAnalysisRecommendQuestionsOutcome;
                typedef std::future<DescribeAIAnalysisRecommendQuestionsOutcome> DescribeAIAnalysisRecommendQuestionsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAnalysisRecommendQuestionsRequest&, DescribeAIAnalysisRecommendQuestionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisRecommendQuestionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAnalysisRobotInfoResponse> DescribeAIAnalysisRobotInfoOutcome;
                typedef std::future<DescribeAIAnalysisRobotInfoOutcome> DescribeAIAnalysisRobotInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAnalysisRobotInfoRequest&, DescribeAIAnalysisRobotInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisRobotInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAnalysisSMTPResponse> DescribeAIAnalysisSMTPOutcome;
                typedef std::future<DescribeAIAnalysisSMTPOutcome> DescribeAIAnalysisSMTPOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAnalysisSMTPRequest&, DescribeAIAnalysisSMTPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisSMTPAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAILinkSettingResponse> DescribeAILinkSettingOutcome;
                typedef std::future<DescribeAILinkSettingOutcome> DescribeAILinkSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAILinkSettingRequest&, DescribeAILinkSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAILinkSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIScheduleListResponse> DescribeAIScheduleListOutcome;
                typedef std::future<DescribeAIScheduleListOutcome> DescribeAIScheduleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIScheduleListRequest&, DescribeAIScheduleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIScheduleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAISchedulePlanListResponse> DescribeAISchedulePlanListOutcome;
                typedef std::future<DescribeAISchedulePlanListOutcome> DescribeAISchedulePlanListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAISchedulePlanListRequest&, DescribeAISchedulePlanListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAISchedulePlanListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIScheduleStatsResponse> DescribeAIScheduleStatsOutcome;
                typedef std::future<DescribeAIScheduleStatsOutcome> DescribeAIScheduleStatsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIScheduleStatsRequest&, DescribeAIScheduleStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIScheduleStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIScheduleTaskDetailResponse> DescribeAIScheduleTaskDetailOutcome;
                typedef std::future<DescribeAIScheduleTaskDetailOutcome> DescribeAIScheduleTaskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIScheduleTaskDetailRequest&, DescribeAIScheduleTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIScheduleTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIScheduleTaskListResponse> DescribeAIScheduleTaskListOutcome;
                typedef std::future<DescribeAIScheduleTaskListOutcome> DescribeAIScheduleTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIScheduleTaskListRequest&, DescribeAIScheduleTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIScheduleTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAKAnalysisDetailResponse> DescribeAKAnalysisDetailOutcome;
                typedef std::future<DescribeAKAnalysisDetailOutcome> DescribeAKAnalysisDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAKAnalysisDetailRequest&, DescribeAKAnalysisDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAKAnalysisDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbTestUserResponse> DescribeAbTestUserOutcome;
                typedef std::future<DescribeAbTestUserOutcome> DescribeAbTestUserOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAbTestUserRequest&, DescribeAbTestUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbTestUserAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeAgentConfigSettingResponse> DescribeAgentConfigSettingOutcome;
                typedef std::future<DescribeAgentConfigSettingOutcome> DescribeAgentConfigSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAgentConfigSettingRequest&, DescribeAgentConfigSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentConfigSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentRunModeResponse> DescribeAgentRunModeOutcome;
                typedef std::future<DescribeAgentRunModeOutcome> DescribeAgentRunModeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAgentRunModeRequest&, DescribeAgentRunModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentRunModeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentRunPolicyResponse> DescribeAgentRunPolicyOutcome;
                typedef std::future<DescribeAgentRunPolicyOutcome> DescribeAgentRunPolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAgentRunPolicyRequest&, DescribeAgentRunPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentRunPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlertListResponse> DescribeAlertListOutcome;
                typedef std::future<DescribeAlertListOutcome> DescribeAlertListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAlertListRequest&, DescribeAlertListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetComponentListResponse> DescribeAssetComponentListOutcome;
                typedef std::future<DescribeAssetComponentListOutcome> DescribeAssetComponentListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetComponentListRequest&, DescribeAssetComponentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetComponentListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetComponentRelatedImageListResponse> DescribeAssetComponentRelatedImageListOutcome;
                typedef std::future<DescribeAssetComponentRelatedImageListOutcome> DescribeAssetComponentRelatedImageListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetComponentRelatedImageListRequest&, DescribeAssetComponentRelatedImageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetComponentRelatedImageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetDetailResponse> DescribeAssetDetailOutcome;
                typedef std::future<DescribeAssetDetailOutcome> DescribeAssetDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetDetailRequest&, DescribeAssetDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetFilterViewsResponse> DescribeAssetFilterViewsOutcome;
                typedef std::future<DescribeAssetFilterViewsOutcome> DescribeAssetFilterViewsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetFilterViewsRequest&, DescribeAssetFilterViewsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetFilterViewsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetInfoResponse> DescribeAssetInfoOutcome;
                typedef std::future<DescribeAssetInfoOutcome> DescribeAssetInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetInfoRequest&, DescribeAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetLastSyncTimeResponse> DescribeAssetLastSyncTimeOutcome;
                typedef std::future<DescribeAssetLastSyncTimeOutcome> DescribeAssetLastSyncTimeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetLastSyncTimeRequest&, DescribeAssetLastSyncTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetLastSyncTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetOverviewResponse> DescribeAssetOverviewOutcome;
                typedef std::future<DescribeAssetOverviewOutcome> DescribeAssetOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetOverviewRequest&, DescribeAssetOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetProcessListResponse> DescribeAssetProcessListOutcome;
                typedef std::future<DescribeAssetProcessListOutcome> DescribeAssetProcessListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetProcessListRequest&, DescribeAssetProcessListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetProcessListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetRiskDetailResponse> DescribeAssetRiskDetailOutcome;
                typedef std::future<DescribeAssetRiskDetailOutcome> DescribeAssetRiskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetRiskDetailRequest&, DescribeAssetRiskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetRiskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetRiskListResponse> DescribeAssetRiskListOutcome;
                typedef std::future<DescribeAssetRiskListOutcome> DescribeAssetRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetRiskListRequest&, DescribeAssetRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetSyncTaskStatusResponse> DescribeAssetSyncTaskStatusOutcome;
                typedef std::future<DescribeAssetSyncTaskStatusOutcome> DescribeAssetSyncTaskStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetSyncTaskStatusRequest&, DescribeAssetSyncTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetSyncTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetTagAttributesResponse> DescribeAssetTagAttributesOutcome;
                typedef std::future<DescribeAssetTagAttributesOutcome> DescribeAssetTagAttributesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetTagAttributesRequest&, DescribeAssetTagAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetTagAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetTagTreeResponse> DescribeAssetTagTreeOutcome;
                typedef std::future<DescribeAssetTagTreeOutcome> DescribeAssetTagTreeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetTagTreeRequest&, DescribeAssetTagTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetTagTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetTagsResponse> DescribeAssetTagsOutcome;
                typedef std::future<DescribeAssetTagsOutcome> DescribeAssetTagsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetTagsRequest&, DescribeAssetTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetTreeResponse> DescribeAssetTreeOutcome;
                typedef std::future<DescribeAssetTreeOutcome> DescribeAssetTreeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetTreeRequest&, DescribeAssetTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetViewVulRiskListResponse> DescribeAssetViewVulRiskListOutcome;
                typedef std::future<DescribeAssetViewVulRiskListOutcome> DescribeAssetViewVulRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetViewVulRiskListRequest&, DescribeAssetViewVulRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetViewVulRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssumeRoleResponse> DescribeAssumeRoleOutcome;
                typedef std::future<DescribeAssumeRoleOutcome> DescribeAssumeRoleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssumeRoleRequest&, DescribeAssumeRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssumeRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackendScanEngineRegionListResponse> DescribeBackendScanEngineRegionListOutcome;
                typedef std::future<DescribeBackendScanEngineRegionListOutcome> DescribeBackendScanEngineRegionListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBackendScanEngineRegionListRequest&, DescribeBackendScanEngineRegionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackendScanEngineRegionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBanModeResponse> DescribeBanModeOutcome;
                typedef std::future<DescribeBanModeOutcome> DescribeBanModeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBanModeRequest&, DescribeBanModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBanModeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBanStatusResponse> DescribeBanStatusOutcome;
                typedef std::future<DescribeBanStatusOutcome> DescribeBanStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBanStatusRequest&, DescribeBanStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBanStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineAggregatedItemListResponse> DescribeBaselineAggregatedItemListOutcome;
                typedef std::future<DescribeBaselineAggregatedItemListOutcome> DescribeBaselineAggregatedItemListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineAggregatedItemListRequest&, DescribeBaselineAggregatedItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineAggregatedItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineAggregatedPolicyListResponse> DescribeBaselineAggregatedPolicyListOutcome;
                typedef std::future<DescribeBaselineAggregatedPolicyListOutcome> DescribeBaselineAggregatedPolicyListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineAggregatedPolicyListRequest&, DescribeBaselineAggregatedPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineAggregatedPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineCalculatingStatisticsPolicyIDListResponse> DescribeBaselineCalculatingStatisticsPolicyIDListOutcome;
                typedef std::future<DescribeBaselineCalculatingStatisticsPolicyIDListOutcome> DescribeBaselineCalculatingStatisticsPolicyIDListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineCalculatingStatisticsPolicyIDListRequest&, DescribeBaselineCalculatingStatisticsPolicyIDListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineCalculatingStatisticsPolicyIDListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineCategoryItemListResponse> DescribeBaselineCategoryItemListOutcome;
                typedef std::future<DescribeBaselineCategoryItemListOutcome> DescribeBaselineCategoryItemListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineCategoryItemListRequest&, DescribeBaselineCategoryItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineCategoryItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineFixRecordListResponse> DescribeBaselineFixRecordListOutcome;
                typedef std::future<DescribeBaselineFixRecordListOutcome> DescribeBaselineFixRecordListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineFixRecordListRequest&, DescribeBaselineFixRecordListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineFixRecordListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineItemRiskListResponse> DescribeBaselineItemRiskListOutcome;
                typedef std::future<DescribeBaselineItemRiskListOutcome> DescribeBaselineItemRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineItemRiskListRequest&, DescribeBaselineItemRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineItemRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineMainTaskItemListResponse> DescribeBaselineMainTaskItemListOutcome;
                typedef std::future<DescribeBaselineMainTaskItemListOutcome> DescribeBaselineMainTaskItemListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineMainTaskItemListRequest&, DescribeBaselineMainTaskItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineMainTaskItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineMainTaskListResponse> DescribeBaselineMainTaskListOutcome;
                typedef std::future<DescribeBaselineMainTaskListOutcome> DescribeBaselineMainTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineMainTaskListRequest&, DescribeBaselineMainTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineMainTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineOverviewResponse> DescribeBaselineOverviewOutcome;
                typedef std::future<DescribeBaselineOverviewOutcome> DescribeBaselineOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineOverviewRequest&, DescribeBaselineOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselinePolicyCategoryListResponse> DescribeBaselinePolicyCategoryListOutcome;
                typedef std::future<DescribeBaselinePolicyCategoryListOutcome> DescribeBaselinePolicyCategoryListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselinePolicyCategoryListRequest&, DescribeBaselinePolicyCategoryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselinePolicyCategoryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselinePolicyItemListResponse> DescribeBaselinePolicyItemListOutcome;
                typedef std::future<DescribeBaselinePolicyItemListOutcome> DescribeBaselinePolicyItemListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselinePolicyItemListRequest&, DescribeBaselinePolicyItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselinePolicyItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselinePolicyListResponse> DescribeBaselinePolicyListOutcome;
                typedef std::future<DescribeBaselinePolicyListOutcome> DescribeBaselinePolicyListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselinePolicyListRequest&, DescribeBaselinePolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselinePolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselinePolicyNameExistAppidListResponse> DescribeBaselinePolicyNameExistAppidListOutcome;
                typedef std::future<DescribeBaselinePolicyNameExistAppidListOutcome> DescribeBaselinePolicyNameExistAppidListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselinePolicyNameExistAppidListRequest&, DescribeBaselinePolicyNameExistAppidListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselinePolicyNameExistAppidListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineSubTaskListResponse> DescribeBaselineSubTaskListOutcome;
                typedef std::future<DescribeBaselineSubTaskListOutcome> DescribeBaselineSubTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineSubTaskListRequest&, DescribeBaselineSubTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineSubTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineSyncConfResponse> DescribeBaselineSyncConfOutcome;
                typedef std::future<DescribeBaselineSyncConfOutcome> DescribeBaselineSyncConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineSyncConfRequest&, DescribeBaselineSyncConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineSyncConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineSystemCategoryListResponse> DescribeBaselineSystemCategoryListOutcome;
                typedef std::future<DescribeBaselineSystemCategoryListOutcome> DescribeBaselineSystemCategoryListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineSystemCategoryListRequest&, DescribeBaselineSystemCategoryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineSystemCategoryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineUserOtherConfResponse> DescribeBaselineUserOtherConfOutcome;
                typedef std::future<DescribeBaselineUserOtherConfOutcome> DescribeBaselineUserOtherConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineUserOtherConfRequest&, DescribeBaselineUserOtherConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineUserOtherConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineUserWeakPasswordConfResponse> DescribeBaselineUserWeakPasswordConfOutcome;
                typedef std::future<DescribeBaselineUserWeakPasswordConfOutcome> DescribeBaselineUserWeakPasswordConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineUserWeakPasswordConfRequest&, DescribeBaselineUserWeakPasswordConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineUserWeakPasswordConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBruteAttackRulesResponse> DescribeBruteAttackRulesOutcome;
                typedef std::future<DescribeBruteAttackRulesOutcome> DescribeBruteAttackRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBruteAttackRulesRequest&, DescribeBruteAttackRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBruteAttackRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBucketInvokeIpListResponse> DescribeBucketInvokeIpListOutcome;
                typedef std::future<DescribeBucketInvokeIpListOutcome> DescribeBucketInvokeIpListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBucketInvokeIpListRequest&, DescribeBucketInvokeIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBucketInvokeIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCFGRiskReportStatisticsResponse> DescribeCFGRiskReportStatisticsOutcome;
                typedef std::future<DescribeCFGRiskReportStatisticsOutcome> DescribeCFGRiskReportStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCFGRiskReportStatisticsRequest&, DescribeCFGRiskReportStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCFGRiskReportStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCFGRiskStatisticsResponse> DescribeCFGRiskStatisticsOutcome;
                typedef std::future<DescribeCFGRiskStatisticsOutcome> DescribeCFGRiskStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCFGRiskStatisticsRequest&, DescribeCFGRiskStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCFGRiskStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCFWAssetStatisticsResponse> DescribeCFWAssetStatisticsOutcome;
                typedef std::future<DescribeCFWAssetStatisticsOutcome> DescribeCFWAssetStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCFWAssetStatisticsRequest&, DescribeCFWAssetStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCFWAssetStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCLSLogIndexV3Response> DescribeCLSLogIndexV3Outcome;
                typedef std::future<DescribeCLSLogIndexV3Outcome> DescribeCLSLogIndexV3OutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCLSLogIndexV3Request&, DescribeCLSLogIndexV3Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCLSLogIndexV3AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCLSLogListV3Response> DescribeCLSLogListV3Outcome;
                typedef std::future<DescribeCLSLogListV3Outcome> DescribeCLSLogListV3OutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCLSLogListV3Request&, DescribeCLSLogListV3Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCLSLogListV3AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCSIPLicenseBindScheduleResponse> DescribeCSIPLicenseBindScheduleOutcome;
                typedef std::future<DescribeCSIPLicenseBindScheduleOutcome> DescribeCSIPLicenseBindScheduleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCSIPLicenseBindScheduleRequest&, DescribeCSIPLicenseBindScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSIPLicenseBindScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCSIPMalwareScanTaskDetailResponse> DescribeCSIPMalwareScanTaskDetailOutcome;
                typedef std::future<DescribeCSIPMalwareScanTaskDetailOutcome> DescribeCSIPMalwareScanTaskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCSIPMalwareScanTaskDetailRequest&, DescribeCSIPMalwareScanTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSIPMalwareScanTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCSIPMalwareScanTaskProgressResponse> DescribeCSIPMalwareScanTaskProgressOutcome;
                typedef std::future<DescribeCSIPMalwareScanTaskProgressOutcome> DescribeCSIPMalwareScanTaskProgressOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCSIPMalwareScanTaskProgressRequest&, DescribeCSIPMalwareScanTaskProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSIPMalwareScanTaskProgressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCSIPRiskStatisticsResponse> DescribeCSIPRiskStatisticsOutcome;
                typedef std::future<DescribeCSIPRiskStatisticsOutcome> DescribeCSIPRiskStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCSIPRiskStatisticsRequest&, DescribeCSIPRiskStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSIPRiskStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCVMAssetInfoResponse> DescribeCVMAssetInfoOutcome;
                typedef std::future<DescribeCVMAssetInfoOutcome> DescribeCVMAssetInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCVMAssetInfoRequest&, DescribeCVMAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCVMAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCVMAssetsResponse> DescribeCVMAssetsOutcome;
                typedef std::future<DescribeCVMAssetsOutcome> DescribeCVMAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCVMAssetsRequest&, DescribeCVMAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCVMAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPExposePathResponse> DescribeCWPExposePathOutcome;
                typedef std::future<DescribeCWPExposePathOutcome> DescribeCWPExposePathOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPExposePathRequest&, DescribeCWPExposePathOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPExposePathAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPExposuresResponse> DescribeCWPExposuresOutcome;
                typedef std::future<DescribeCWPExposuresOutcome> DescribeCWPExposuresOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPExposuresRequest&, DescribeCWPExposuresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPExposuresAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPLicenseBindScheduleResponse> DescribeCWPLicenseBindScheduleOutcome;
                typedef std::future<DescribeCWPLicenseBindScheduleOutcome> DescribeCWPLicenseBindScheduleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPLicenseBindScheduleRequest&, DescribeCWPLicenseBindScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPLicenseBindScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPMachineDetailResponse> DescribeCWPMachineDetailOutcome;
                typedef std::future<DescribeCWPMachineDetailOutcome> DescribeCWPMachineDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPMachineDetailRequest&, DescribeCWPMachineDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPMachineDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPMachineOsListResponse> DescribeCWPMachineOsListOutcome;
                typedef std::future<DescribeCWPMachineOsListOutcome> DescribeCWPMachineOsListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPMachineOsListRequest&, DescribeCWPMachineOsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPMachineOsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPMachinesResponse> DescribeCWPMachinesOutcome;
                typedef std::future<DescribeCWPMachinesOutcome> DescribeCWPMachinesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPMachinesRequest&, DescribeCWPMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPOrderListResponse> DescribeCWPOrderListOutcome;
                typedef std::future<DescribeCWPOrderListOutcome> DescribeCWPOrderListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPOrderListRequest&, DescribeCWPOrderListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPOrderListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPScanIpInfoResponse> DescribeCWPScanIpInfoOutcome;
                typedef std::future<DescribeCWPScanIpInfoOutcome> DescribeCWPScanIpInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPScanIpInfoRequest&, DescribeCWPScanIpInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPScanIpInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPTaskDurationResponse> DescribeCWPTaskDurationOutcome;
                typedef std::future<DescribeCWPTaskDurationOutcome> DescribeCWPTaskDurationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPTaskDurationRequest&, DescribeCWPTaskDurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPTaskDurationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCallRecordResponse> DescribeCallRecordOutcome;
                typedef std::future<DescribeCallRecordOutcome> DescribeCallRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCallRecordRequest&, DescribeCallRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCheckConnectivityHostListResponse> DescribeCheckConnectivityHostListOutcome;
                typedef std::future<DescribeCheckConnectivityHostListOutcome> DescribeCheckConnectivityHostListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCheckConnectivityHostListRequest&, DescribeCheckConnectivityHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckConnectivityHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCheckViewRisksResponse> DescribeCheckViewRisksOutcome;
                typedef std::future<DescribeCheckViewRisksOutcome> DescribeCheckViewRisksOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCheckViewRisksRequest&, DescribeCheckViewRisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckViewRisksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClbListenerListResponse> DescribeClbListenerListOutcome;
                typedef std::future<DescribeClbListenerListOutcome> DescribeClbListenerListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClbListenerListRequest&, DescribeClbListenerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClbListenerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClbListenerRulesResponse> DescribeClbListenerRulesOutcome;
                typedef std::future<DescribeClbListenerRulesOutcome> DescribeClbListenerRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClbListenerRulesRequest&, DescribeClbListenerRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClbListenerRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClbTargetsResponse> DescribeClbTargetsOutcome;
                typedef std::future<DescribeClbTargetsOutcome> DescribeClbTargetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClbTargetsRequest&, DescribeClbTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClbTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudAssetsResponse> DescribeCloudAssetsOutcome;
                typedef std::future<DescribeCloudAssetsOutcome> DescribeCloudAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCloudAssetsRequest&, DescribeCloudAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudFunctionListResponse> DescribeCloudFunctionListOutcome;
                typedef std::future<DescribeCloudFunctionListOutcome> DescribeCloudFunctionListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCloudFunctionListRequest&, DescribeCloudFunctionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudFunctionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAssetListResponse> DescribeClusterAssetListOutcome;
                typedef std::future<DescribeClusterAssetListOutcome> DescribeClusterAssetListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterAssetListRequest&, DescribeClusterAssetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAssetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAssetSyncTaskStatusResponse> DescribeClusterAssetSyncTaskStatusOutcome;
                typedef std::future<DescribeClusterAssetSyncTaskStatusOutcome> DescribeClusterAssetSyncTaskStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterAssetSyncTaskStatusRequest&, DescribeClusterAssetSyncTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAssetSyncTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAssetsResponse> DescribeClusterAssetsOutcome;
                typedef std::future<DescribeClusterAssetsOutcome> DescribeClusterAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterAssetsRequest&, DescribeClusterAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterContainerAppListResponse> DescribeClusterContainerAppListOutcome;
                typedef std::future<DescribeClusterContainerAppListOutcome> DescribeClusterContainerAppListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterContainerAppListRequest&, DescribeClusterContainerAppListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterContainerAppListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterContainerComponentListResponse> DescribeClusterContainerComponentListOutcome;
                typedef std::future<DescribeClusterContainerComponentListOutcome> DescribeClusterContainerComponentListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterContainerComponentListRequest&, DescribeClusterContainerComponentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterContainerComponentListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterContainerDetailResponse> DescribeClusterContainerDetailOutcome;
                typedef std::future<DescribeClusterContainerDetailOutcome> DescribeClusterContainerDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterContainerDetailRequest&, DescribeClusterContainerDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterContainerDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterContainerListResponse> DescribeClusterContainerListOutcome;
                typedef std::future<DescribeClusterContainerListOutcome> DescribeClusterContainerListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterContainerListRequest&, DescribeClusterContainerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterContainerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterContainerPortListResponse> DescribeClusterContainerPortListOutcome;
                typedef std::future<DescribeClusterContainerPortListOutcome> DescribeClusterContainerPortListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterContainerPortListRequest&, DescribeClusterContainerPortListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterContainerPortListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterContainerProcessListResponse> DescribeClusterContainerProcessListOutcome;
                typedef std::future<DescribeClusterContainerProcessListOutcome> DescribeClusterContainerProcessListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterContainerProcessListRequest&, DescribeClusterContainerProcessListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterContainerProcessListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterContainerWebServiceListResponse> DescribeClusterContainerWebServiceListOutcome;
                typedef std::future<DescribeClusterContainerWebServiceListOutcome> DescribeClusterContainerWebServiceListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterContainerWebServiceListRequest&, DescribeClusterContainerWebServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterContainerWebServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterDetailResponse> DescribeClusterDetailOutcome;
                typedef std::future<DescribeClusterDetailOutcome> DescribeClusterDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterDetailRequest&, DescribeClusterDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterInstallCommandResponse> DescribeClusterInstallCommandOutcome;
                typedef std::future<DescribeClusterInstallCommandOutcome> DescribeClusterInstallCommandOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterInstallCommandRequest&, DescribeClusterInstallCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInstallCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterListV2Response> DescribeClusterListV2Outcome;
                typedef std::future<DescribeClusterListV2Outcome> DescribeClusterListV2OutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterListV2Request&, DescribeClusterListV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterListV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterNamespaceListResponse> DescribeClusterNamespaceListOutcome;
                typedef std::future<DescribeClusterNamespaceListOutcome> DescribeClusterNamespaceListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterNamespaceListRequest&, DescribeClusterNamespaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNamespaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterNodeListResponse> DescribeClusterNodeListOutcome;
                typedef std::future<DescribeClusterNodeListOutcome> DescribeClusterNodeListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterNodeListRequest&, DescribeClusterNodeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterPodAssetsResponse> DescribeClusterPodAssetsOutcome;
                typedef std::future<DescribeClusterPodAssetsOutcome> DescribeClusterPodAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterPodAssetsRequest&, DescribeClusterPodAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterPodAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterPodDetailResponse> DescribeClusterPodDetailOutcome;
                typedef std::future<DescribeClusterPodDetailOutcome> DescribeClusterPodDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterPodDetailRequest&, DescribeClusterPodDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterPodDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterPodListResponse> DescribeClusterPodListOutcome;
                typedef std::future<DescribeClusterPodListOutcome> DescribeClusterPodListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterPodListRequest&, DescribeClusterPodListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterPodListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterServiceListResponse> DescribeClusterServiceListOutcome;
                typedef std::future<DescribeClusterServiceListOutcome> DescribeClusterServiceListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterServiceListRequest&, DescribeClusterServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterSummaryResponse> DescribeClusterSummaryOutcome;
                typedef std::future<DescribeClusterSummaryOutcome> DescribeClusterSummaryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterSummaryRequest&, DescribeClusterSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterSuperNodeInfoResponse> DescribeClusterSuperNodeInfoOutcome;
                typedef std::future<DescribeClusterSuperNodeInfoOutcome> DescribeClusterSuperNodeInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterSuperNodeInfoRequest&, DescribeClusterSuperNodeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterSuperNodeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceOverviewResponse> DescribeComplianceOverviewOutcome;
                typedef std::future<DescribeComplianceOverviewOutcome> DescribeComplianceOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeComplianceOverviewRequest&, DescribeComplianceOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceRiskListResponse> DescribeComplianceRiskListOutcome;
                typedef std::future<DescribeComplianceRiskListOutcome> DescribeComplianceRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeComplianceRiskListRequest&, DescribeComplianceRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceStandardTermTreeResponse> DescribeComplianceStandardTermTreeOutcome;
                typedef std::future<DescribeComplianceStandardTermTreeOutcome> DescribeComplianceStandardTermTreeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeComplianceStandardTermTreeRequest&, DescribeComplianceStandardTermTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceStandardTermTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceStatisticsResponse> DescribeComplianceStatisticsOutcome;
                typedef std::future<DescribeComplianceStatisticsOutcome> DescribeComplianceStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeComplianceStatisticsRequest&, DescribeComplianceStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceStatisticsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeCosObjectScanTaskResponse> DescribeCosObjectScanTaskOutcome;
                typedef std::future<DescribeCosObjectScanTaskOutcome> DescribeCosObjectScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCosObjectScanTaskRequest&, DescribeCosObjectScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosObjectScanTaskAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeCspmShardConfigResponse> DescribeCspmShardConfigOutcome;
                typedef std::future<DescribeCspmShardConfigOutcome> DescribeCspmShardConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCspmShardConfigRequest&, DescribeCspmShardConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCspmShardConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomAssetTagCountResponse> DescribeCustomAssetTagCountOutcome;
                typedef std::future<DescribeCustomAssetTagCountOutcome> DescribeCustomAssetTagCountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCustomAssetTagCountRequest&, DescribeCustomAssetTagCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomAssetTagCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomRiskRuleDetailResponse> DescribeCustomRiskRuleDetailOutcome;
                typedef std::future<DescribeCustomRiskRuleDetailOutcome> DescribeCustomRiskRuleDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCustomRiskRuleDetailRequest&, DescribeCustomRiskRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomRiskRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomRiskRulesResponse> DescribeCustomRiskRulesOutcome;
                typedef std::future<DescribeCustomRiskRulesOutcome> DescribeCustomRiskRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCustomRiskRulesRequest&, DescribeCustomRiskRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomRiskRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDbAssetInfoResponse> DescribeDbAssetInfoOutcome;
                typedef std::future<DescribeDbAssetInfoOutcome> DescribeDbAssetInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDbAssetInfoRequest&, DescribeDbAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDbAssetsResponse> DescribeDbAssetsOutcome;
                typedef std::future<DescribeDbAssetsOutcome> DescribeDbAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDbAssetsRequest&, DescribeDbAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefaultSecurityScoreRuleResponse> DescribeDefaultSecurityScoreRuleOutcome;
                typedef std::future<DescribeDefaultSecurityScoreRuleOutcome> DescribeDefaultSecurityScoreRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDefaultSecurityScoreRuleRequest&, DescribeDefaultSecurityScoreRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultSecurityScoreRuleAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeDspmAssetFieldSamplesResponse> DescribeDspmAssetFieldSamplesOutcome;
                typedef std::future<DescribeDspmAssetFieldSamplesOutcome> DescribeDspmAssetFieldSamplesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetFieldSamplesRequest&, DescribeDspmAssetFieldSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetFieldSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetIdentifyInfoListResponse> DescribeDspmAssetIdentifyInfoListOutcome;
                typedef std::future<DescribeDspmAssetIdentifyInfoListOutcome> DescribeDspmAssetIdentifyInfoListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetIdentifyInfoListRequest&, DescribeDspmAssetIdentifyInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetIdentifyInfoListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyCategoryListResponse> DescribeDspmIdentifyCategoryListOutcome;
                typedef std::future<DescribeDspmIdentifyCategoryListOutcome> DescribeDspmIdentifyCategoryListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyCategoryListRequest&, DescribeDspmIdentifyCategoryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyCategoryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyComplianceCategoryRuleListResponse> DescribeDspmIdentifyComplianceCategoryRuleListOutcome;
                typedef std::future<DescribeDspmIdentifyComplianceCategoryRuleListOutcome> DescribeDspmIdentifyComplianceCategoryRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyComplianceCategoryRuleListRequest&, DescribeDspmIdentifyComplianceCategoryRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyComplianceCategoryRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyComplianceGroupDetailResponse> DescribeDspmIdentifyComplianceGroupDetailOutcome;
                typedef std::future<DescribeDspmIdentifyComplianceGroupDetailOutcome> DescribeDspmIdentifyComplianceGroupDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyComplianceGroupDetailRequest&, DescribeDspmIdentifyComplianceGroupDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyComplianceGroupDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyComplianceGroupListResponse> DescribeDspmIdentifyComplianceGroupListOutcome;
                typedef std::future<DescribeDspmIdentifyComplianceGroupListOutcome> DescribeDspmIdentifyComplianceGroupListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyComplianceGroupListRequest&, DescribeDspmIdentifyComplianceGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyComplianceGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyDistributionStatisticsResponse> DescribeDspmIdentifyDistributionStatisticsOutcome;
                typedef std::future<DescribeDspmIdentifyDistributionStatisticsOutcome> DescribeDspmIdentifyDistributionStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyDistributionStatisticsRequest&, DescribeDspmIdentifyDistributionStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyDistributionStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyIdListResponse> DescribeDspmIdentifyIdListOutcome;
                typedef std::future<DescribeDspmIdentifyIdListOutcome> DescribeDspmIdentifyIdListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyIdListRequest&, DescribeDspmIdentifyIdListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyIdListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyInfoResponse> DescribeDspmIdentifyInfoOutcome;
                typedef std::future<DescribeDspmIdentifyInfoOutcome> DescribeDspmIdentifyInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyInfoRequest&, DescribeDspmIdentifyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyInfoListResponse> DescribeDspmIdentifyInfoListOutcome;
                typedef std::future<DescribeDspmIdentifyInfoListOutcome> DescribeDspmIdentifyInfoListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyInfoListRequest&, DescribeDspmIdentifyInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyLevelGroupListResponse> DescribeDspmIdentifyLevelGroupListOutcome;
                typedef std::future<DescribeDspmIdentifyLevelGroupListOutcome> DescribeDspmIdentifyLevelGroupListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyLevelGroupListRequest&, DescribeDspmIdentifyLevelGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyLevelGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyRuleDetailResponse> DescribeDspmIdentifyRuleDetailOutcome;
                typedef std::future<DescribeDspmIdentifyRuleDetailOutcome> DescribeDspmIdentifyRuleDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyRuleDetailRequest&, DescribeDspmIdentifyRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyRuleListResponse> DescribeDspmIdentifyRuleListOutcome;
                typedef std::future<DescribeDspmIdentifyRuleListOutcome> DescribeDspmIdentifyRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyRuleListRequest&, DescribeDspmIdentifyRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyRuleTestResultResponse> DescribeDspmIdentifyRuleTestResultOutcome;
                typedef std::future<DescribeDspmIdentifyRuleTestResultOutcome> DescribeDspmIdentifyRuleTestResultOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyRuleTestResultRequest&, DescribeDspmIdentifyRuleTestResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyRuleTestResultAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeDynamicAssetsResponse> DescribeDynamicAssetsOutcome;
                typedef std::future<DescribeDynamicAssetsOutcome> DescribeDynamicAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDynamicAssetsRequest&, DescribeDynamicAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDynamicAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEDRRuleListResponse> DescribeEDRRuleListOutcome;
                typedef std::future<DescribeEDRRuleListOutcome> DescribeEDRRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEDRRuleListRequest&, DescribeEDRRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEDRRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEDRScanRecordListResponse> DescribeEDRScanRecordListOutcome;
                typedef std::future<DescribeEDRScanRecordListOutcome> DescribeEDRScanRecordListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEDRScanRecordListRequest&, DescribeEDRScanRecordListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEDRScanRecordListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEDRScanTaskDetailResponse> DescribeEDRScanTaskDetailOutcome;
                typedef std::future<DescribeEDRScanTaskDetailOutcome> DescribeEDRScanTaskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEDRScanTaskDetailRequest&, DescribeEDRScanTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEDRScanTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrAlertCountForAssetResponse> DescribeEdrAlertCountForAssetOutcome;
                typedef std::future<DescribeEdrAlertCountForAssetOutcome> DescribeEdrAlertCountForAssetOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrAlertCountForAssetRequest&, DescribeEdrAlertCountForAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrAlertCountForAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrAlertCountForContainerResponse> DescribeEdrAlertCountForContainerOutcome;
                typedef std::future<DescribeEdrAlertCountForContainerOutcome> DescribeEdrAlertCountForContainerOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrAlertCountForContainerRequest&, DescribeEdrAlertCountForContainerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrAlertCountForContainerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrAlertInfoResponse> DescribeEdrAlertInfoOutcome;
                typedef std::future<DescribeEdrAlertInfoOutcome> DescribeEdrAlertInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrAlertInfoRequest&, DescribeEdrAlertInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrAlertInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrAlertListResponse> DescribeEdrAlertListOutcome;
                typedef std::future<DescribeEdrAlertListOutcome> DescribeEdrAlertListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrAlertListRequest&, DescribeEdrAlertListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrAlertListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrAlertMultiAttackStagesResponse> DescribeEdrAlertMultiAttackStagesOutcome;
                typedef std::future<DescribeEdrAlertMultiAttackStagesOutcome> DescribeEdrAlertMultiAttackStagesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrAlertMultiAttackStagesRequest&, DescribeEdrAlertMultiAttackStagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrAlertMultiAttackStagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrAlertSummaryResponse> DescribeEdrAlertSummaryOutcome;
                typedef std::future<DescribeEdrAlertSummaryOutcome> DescribeEdrAlertSummaryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrAlertSummaryRequest&, DescribeEdrAlertSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrAlertSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrAlertThreatTagsResponse> DescribeEdrAlertThreatTagsOutcome;
                typedef std::future<DescribeEdrAlertThreatTagsOutcome> DescribeEdrAlertThreatTagsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrAlertThreatTagsRequest&, DescribeEdrAlertThreatTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrAlertThreatTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrExcludeNetworkSegmentsResponse> DescribeEdrExcludeNetworkSegmentsOutcome;
                typedef std::future<DescribeEdrExcludeNetworkSegmentsOutcome> DescribeEdrExcludeNetworkSegmentsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrExcludeNetworkSegmentsRequest&, DescribeEdrExcludeNetworkSegmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrExcludeNetworkSegmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrExportJobDownloadURLResponse> DescribeEdrExportJobDownloadURLOutcome;
                typedef std::future<DescribeEdrExportJobDownloadURLOutcome> DescribeEdrExportJobDownloadURLOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrExportJobDownloadURLRequest&, DescribeEdrExportJobDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrExportJobDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrExportJobListResponse> DescribeEdrExportJobListOutcome;
                typedef std::future<DescribeEdrExportJobListOutcome> DescribeEdrExportJobListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrExportJobListRequest&, DescribeEdrExportJobListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrExportJobListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrLogCollectPathsResponse> DescribeEdrLogCollectPathsOutcome;
                typedef std::future<DescribeEdrLogCollectPathsOutcome> DescribeEdrLogCollectPathsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrLogCollectPathsRequest&, DescribeEdrLogCollectPathsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrLogCollectPathsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportJobDownloadURLResponse> DescribeExportJobDownloadURLOutcome;
                typedef std::future<DescribeExportJobDownloadURLOutcome> DescribeExportJobDownloadURLOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExportJobDownloadURLRequest&, DescribeExportJobDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportJobDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportJobManageListResponse> DescribeExportJobManageListOutcome;
                typedef std::future<DescribeExportJobManageListOutcome> DescribeExportJobManageListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExportJobManageListRequest&, DescribeExportJobManageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportJobManageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposeAssetCategoryResponse> DescribeExposeAssetCategoryOutcome;
                typedef std::future<DescribeExposeAssetCategoryOutcome> DescribeExposeAssetCategoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposeAssetCategoryRequest&, DescribeExposeAssetCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposeAssetCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposePathResponse> DescribeExposePathOutcome;
                typedef std::future<DescribeExposePathOutcome> DescribeExposePathOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposePathRequest&, DescribeExposePathOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposePathAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposeRiskStatisticsResponse> DescribeExposeRiskStatisticsOutcome;
                typedef std::future<DescribeExposeRiskStatisticsOutcome> DescribeExposeRiskStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposeRiskStatisticsRequest&, DescribeExposeRiskStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposeRiskStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposeRisksResponse> DescribeExposeRisksOutcome;
                typedef std::future<DescribeExposeRisksOutcome> DescribeExposeRisksOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposeRisksRequest&, DescribeExposeRisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposeRisksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposeRulesResponse> DescribeExposeRulesOutcome;
                typedef std::future<DescribeExposeRulesOutcome> DescribeExposeRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposeRulesRequest&, DescribeExposeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposureAutoTagAttributeResponse> DescribeExposureAutoTagAttributeOutcome;
                typedef std::future<DescribeExposureAutoTagAttributeOutcome> DescribeExposureAutoTagAttributeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposureAutoTagAttributeRequest&, DescribeExposureAutoTagAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposureAutoTagAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposureAutoTagRulesResponse> DescribeExposureAutoTagRulesOutcome;
                typedef std::future<DescribeExposureAutoTagRulesOutcome> DescribeExposureAutoTagRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposureAutoTagRulesRequest&, DescribeExposureAutoTagRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposureAutoTagRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposureTrendResponse> DescribeExposureTrendOutcome;
                typedef std::future<DescribeExposureTrendOutcome> DescribeExposureTrendOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposureTrendRequest&, DescribeExposureTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposureTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposuresResponse> DescribeExposuresOutcome;
                typedef std::future<DescribeExposuresOutcome> DescribeExposuresOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposuresRequest&, DescribeExposuresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposuresAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayAssetsResponse> DescribeGatewayAssetsOutcome;
                typedef std::future<DescribeGatewayAssetsOutcome> DescribeGatewayAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeGatewayAssetsRequest&, DescribeGatewayAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHighBaseLineRiskListResponse> DescribeHighBaseLineRiskListOutcome;
                typedef std::future<DescribeHighBaseLineRiskListOutcome> DescribeHighBaseLineRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeHighBaseLineRiskListRequest&, DescribeHighBaseLineRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHighBaseLineRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostKBRiskListResponse> DescribeHostKBRiskListOutcome;
                typedef std::future<DescribeHostKBRiskListOutcome> DescribeHostKBRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeHostKBRiskListRequest&, DescribeHostKBRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostKBRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostVulItemVPRInfoResponse> DescribeHostVulItemVPRInfoOutcome;
                typedef std::future<DescribeHostVulItemVPRInfoOutcome> DescribeHostVulItemVPRInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeHostVulItemVPRInfoRequest&, DescribeHostVulItemVPRInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostVulItemVPRInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostVulOverviewResponse> DescribeHostVulOverviewOutcome;
                typedef std::future<DescribeHostVulOverviewOutcome> DescribeHostVulOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeHostVulOverviewRequest&, DescribeHostVulOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostVulOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostVulRiskListResponse> DescribeHostVulRiskListOutcome;
                typedef std::future<DescribeHostVulRiskListOutcome> DescribeHostVulRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeHostVulRiskListRequest&, DescribeHostVulRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostVulRiskListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeImageAssetDetailResponse> DescribeImageAssetDetailOutcome;
                typedef std::future<DescribeImageAssetDetailOutcome> DescribeImageAssetDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageAssetDetailRequest&, DescribeImageAssetDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAssetDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAssetListResponse> DescribeImageAssetListOutcome;
                typedef std::future<DescribeImageAssetListOutcome> DescribeImageAssetListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageAssetListRequest&, DescribeImageAssetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAssetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAssociatedAssetCountResponse> DescribeImageAssociatedAssetCountOutcome;
                typedef std::future<DescribeImageAssociatedAssetCountOutcome> DescribeImageAssociatedAssetCountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageAssociatedAssetCountRequest&, DescribeImageAssociatedAssetCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAssociatedAssetCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAssociatedContainerListResponse> DescribeImageAssociatedContainerListOutcome;
                typedef std::future<DescribeImageAssociatedContainerListOutcome> DescribeImageAssociatedContainerListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageAssociatedContainerListRequest&, DescribeImageAssociatedContainerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAssociatedContainerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAssociatedHostListResponse> DescribeImageAssociatedHostListOutcome;
                typedef std::future<DescribeImageAssociatedHostListOutcome> DescribeImageAssociatedHostListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageAssociatedHostListRequest&, DescribeImageAssociatedHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAssociatedHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageComponentListResponse> DescribeImageComponentListOutcome;
                typedef std::future<DescribeImageComponentListOutcome> DescribeImageComponentListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageComponentListRequest&, DescribeImageComponentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageComponentListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageExportJobListResponse> DescribeImageExportJobListOutcome;
                typedef std::future<DescribeImageExportJobListOutcome> DescribeImageExportJobListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageExportJobListRequest&, DescribeImageExportJobListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageExportJobListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageLayerListResponse> DescribeImageLayerListOutcome;
                typedef std::future<DescribeImageLayerListOutcome> DescribeImageLayerListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageLayerListRequest&, DescribeImageLayerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageLayerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageLayerVulListResponse> DescribeImageLayerVulListOutcome;
                typedef std::future<DescribeImageLayerVulListOutcome> DescribeImageLayerVulListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageLayerVulListRequest&, DescribeImageLayerVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageLayerVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryAssetOverviewResponse> DescribeImageRegistryAssetOverviewOutcome;
                typedef std::future<DescribeImageRegistryAssetOverviewOutcome> DescribeImageRegistryAssetOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryAssetOverviewRequest&, DescribeImageRegistryAssetOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryAssetOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryConnectivityTaskResultResponse> DescribeImageRegistryConnectivityTaskResultOutcome;
                typedef std::future<DescribeImageRegistryConnectivityTaskResultOutcome> DescribeImageRegistryConnectivityTaskResultOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryConnectivityTaskResultRequest&, DescribeImageRegistryConnectivityTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryConnectivityTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryListResponse> DescribeImageRegistryListOutcome;
                typedef std::future<DescribeImageRegistryListOutcome> DescribeImageRegistryListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryListRequest&, DescribeImageRegistryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryNamespaceListResponse> DescribeImageRegistryNamespaceListOutcome;
                typedef std::future<DescribeImageRegistryNamespaceListOutcome> DescribeImageRegistryNamespaceListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryNamespaceListRequest&, DescribeImageRegistryNamespaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryNamespaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryScanSubTaskListResponse> DescribeImageRegistryScanSubTaskListOutcome;
                typedef std::future<DescribeImageRegistryScanSubTaskListOutcome> DescribeImageRegistryScanSubTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryScanSubTaskListRequest&, DescribeImageRegistryScanSubTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryScanSubTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryScanTaskListResponse> DescribeImageRegistryScanTaskListOutcome;
                typedef std::future<DescribeImageRegistryScanTaskListOutcome> DescribeImageRegistryScanTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryScanTaskListRequest&, DescribeImageRegistryScanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryScanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryTimedScanTaskConfigResponse> DescribeImageRegistryTimedScanTaskConfigOutcome;
                typedef std::future<DescribeImageRegistryTimedScanTaskConfigOutcome> DescribeImageRegistryTimedScanTaskConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryTimedScanTaskConfigRequest&, DescribeImageRegistryTimedScanTaskConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryTimedScanTaskConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryTimedScanTaskPreviewResponse> DescribeImageRegistryTimedScanTaskPreviewOutcome;
                typedef std::future<DescribeImageRegistryTimedScanTaskPreviewOutcome> DescribeImageRegistryTimedScanTaskPreviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryTimedScanTaskPreviewRequest&, DescribeImageRegistryTimedScanTaskPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryTimedScanTaskPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageSensitiveInfoListResponse> DescribeImageSensitiveInfoListOutcome;
                typedef std::future<DescribeImageSensitiveInfoListOutcome> DescribeImageSensitiveInfoListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageSensitiveInfoListRequest&, DescribeImageSensitiveInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSensitiveInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageSensitiveWhitelistResponse> DescribeImageSensitiveWhitelistOutcome;
                typedef std::future<DescribeImageSensitiveWhitelistOutcome> DescribeImageSensitiveWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageSensitiveWhitelistRequest&, DescribeImageSensitiveWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSensitiveWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageVirusListResponse> DescribeImageVirusListOutcome;
                typedef std::future<DescribeImageVirusListOutcome> DescribeImageVirusListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageVirusListRequest&, DescribeImageVirusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageVirusListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageVirusWhitelistResponse> DescribeImageVirusWhitelistOutcome;
                typedef std::future<DescribeImageVirusWhitelistOutcome> DescribeImageVirusWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageVirusWhitelistRequest&, DescribeImageVirusWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageVirusWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageVirusWhitelistDetailResponse> DescribeImageVirusWhitelistDetailOutcome;
                typedef std::future<DescribeImageVirusWhitelistDetailOutcome> DescribeImageVirusWhitelistDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageVirusWhitelistDetailRequest&, DescribeImageVirusWhitelistDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageVirusWhitelistDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageVulListResponse> DescribeImageVulListOutcome;
                typedef std::future<DescribeImageVulListOutcome> DescribeImageVulListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageVulListRequest&, DescribeImageVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageVulSummaryListResponse> DescribeImageVulSummaryListOutcome;
                typedef std::future<DescribeImageVulSummaryListOutcome> DescribeImageVulSummaryListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageVulSummaryListRequest&, DescribeImageVulSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageVulSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageVulWhitelistResponse> DescribeImageVulWhitelistOutcome;
                typedef std::future<DescribeImageVulWhitelistOutcome> DescribeImageVulWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageVulWhitelistRequest&, DescribeImageVulWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageVulWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpInvokeRecordResponse> DescribeIpInvokeRecordOutcome;
                typedef std::future<DescribeIpInvokeRecordOutcome> DescribeIpInvokeRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeIpInvokeRecordRequest&, DescribeIpInvokeRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpInvokeRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpInvokeRecordDetailResponse> DescribeIpInvokeRecordDetailOutcome;
                typedef std::future<DescribeIpInvokeRecordDetailOutcome> DescribeIpInvokeRecordDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeIpInvokeRecordDetailRequest&, DescribeIpInvokeRecordDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpInvokeRecordDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKBDetailResponse> DescribeKBDetailOutcome;
                typedef std::future<DescribeKBDetailOutcome> DescribeKBDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeKBDetailRequest&, DescribeKBDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKBDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKBUpdatableMachineListResponse> DescribeKBUpdatableMachineListOutcome;
                typedef std::future<DescribeKBUpdatableMachineListOutcome> DescribeKBUpdatableMachineListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeKBUpdatableMachineListRequest&, DescribeKBUpdatableMachineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKBUpdatableMachineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKeySandboxCredentialResponse> DescribeKeySandboxCredentialOutcome;
                typedef std::future<DescribeKeySandboxCredentialOutcome> DescribeKeySandboxCredentialOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeKeySandboxCredentialRequest&, DescribeKeySandboxCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeySandboxCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKeySandboxCredentialListResponse> DescribeKeySandboxCredentialListOutcome;
                typedef std::future<DescribeKeySandboxCredentialListOutcome> DescribeKeySandboxCredentialListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeKeySandboxCredentialListRequest&, DescribeKeySandboxCredentialListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeySandboxCredentialListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLastScanTaskInfoResponse> DescribeLastScanTaskInfoOutcome;
                typedef std::future<DescribeLastScanTaskInfoOutcome> DescribeLastScanTaskInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeLastScanTaskInfoRequest&, DescribeLastScanTaskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLastScanTaskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseStatusResponse> DescribeLicenseStatusOutcome;
                typedef std::future<DescribeLicenseStatusOutcome> DescribeLicenseStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeLicenseStatusRequest&, DescribeLicenseStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLighthouseFirewallRulesResponse> DescribeLighthouseFirewallRulesOutcome;
                typedef std::future<DescribeLighthouseFirewallRulesOutcome> DescribeLighthouseFirewallRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeLighthouseFirewallRulesRequest&, DescribeLighthouseFirewallRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLighthouseFirewallRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenerListResponse> DescribeListenerListOutcome;
                typedef std::future<DescribeListenerListOutcome> DescribeListenerListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeListenerListRequest&, DescribeListenerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginTypeGlobalConfResponse> DescribeLoginTypeGlobalConfOutcome;
                typedef std::future<DescribeLoginTypeGlobalConfOutcome> DescribeLoginTypeGlobalConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeLoginTypeGlobalConfRequest&, DescribeLoginTypeGlobalConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginTypeGlobalConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginTypeHostResponse> DescribeLoginTypeHostOutcome;
                typedef std::future<DescribeLoginTypeHostOutcome> DescribeLoginTypeHostOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeLoginTypeHostRequest&, DescribeLoginTypeHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginTypeHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginWhiteCombinedListResponse> DescribeLoginWhiteCombinedListOutcome;
                typedef std::future<DescribeLoginWhiteCombinedListOutcome> DescribeLoginWhiteCombinedListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeLoginWhiteCombinedListRequest&, DescribeLoginWhiteCombinedListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginWhiteCombinedListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginWhiteHostListResponse> DescribeLoginWhiteHostListOutcome;
                typedef std::future<DescribeLoginWhiteHostListOutcome> DescribeLoginWhiteHostListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeLoginWhiteHostListRequest&, DescribeLoginWhiteHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginWhiteHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineClearHistoryResponse> DescribeMachineClearHistoryOutcome;
                typedef std::future<DescribeMachineClearHistoryOutcome> DescribeMachineClearHistoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeMachineClearHistoryRequest&, DescribeMachineClearHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineClearHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineGeneralResponse> DescribeMachineGeneralOutcome;
                typedef std::future<DescribeMachineGeneralOutcome> DescribeMachineGeneralOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeMachineGeneralRequest&, DescribeMachineGeneralOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineGeneralAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineLoginTypeResponse> DescribeMachineLoginTypeOutcome;
                typedef std::future<DescribeMachineLoginTypeOutcome> DescribeMachineLoginTypeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeMachineLoginTypeRequest&, DescribeMachineLoginTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineLoginTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareTimingScanSettingResponse> DescribeMalwareTimingScanSettingOutcome;
                typedef std::future<DescribeMalwareTimingScanSettingOutcome> DescribeMalwareTimingScanSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeMalwareTimingScanSettingRequest&, DescribeMalwareTimingScanSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareTimingScanSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMandatoryVulSetResponse> DescribeMandatoryVulSetOutcome;
                typedef std::future<DescribeMandatoryVulSetOutcome> DescribeMandatoryVulSetOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeMandatoryVulSetRequest&, DescribeMandatoryVulSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMandatoryVulSetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModifyMachinesLoginTypeTasksResponse> DescribeModifyMachinesLoginTypeTasksOutcome;
                typedef std::future<DescribeModifyMachinesLoginTypeTasksOutcome> DescribeModifyMachinesLoginTypeTasksOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeModifyMachinesLoginTypeTasksRequest&, DescribeModifyMachinesLoginTypeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModifyMachinesLoginTypeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMultiCloudAssetCountResponse> DescribeMultiCloudAssetCountOutcome;
                typedef std::future<DescribeMultiCloudAssetCountOutcome> DescribeMultiCloudAssetCountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeMultiCloudAssetCountRequest&, DescribeMultiCloudAssetCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMultiCloudAssetCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNFSScanConfResponse> DescribeNFSScanConfOutcome;
                typedef std::future<DescribeNFSScanConfOutcome> DescribeNFSScanConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNFSScanConfRequest&, DescribeNFSScanConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNFSScanConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNFSScanHostResponse> DescribeNFSScanHostOutcome;
                typedef std::future<DescribeNFSScanHostOutcome> DescribeNFSScanHostOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNFSScanHostRequest&, DescribeNFSScanHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNFSScanHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNICAssetsResponse> DescribeNICAssetsOutcome;
                typedef std::future<DescribeNICAssetsOutcome> DescribeNICAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNICAssetsRequest&, DescribeNICAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNICAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatRulesResponse> DescribeNatRulesOutcome;
                typedef std::future<DescribeNatRulesOutcome> DescribeNatRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNatRulesRequest&, DescribeNatRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetAttackSettingResponse> DescribeNetAttackSettingOutcome;
                typedef std::future<DescribeNetAttackSettingOutcome> DescribeNetAttackSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNetAttackSettingRequest&, DescribeNetAttackSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetAttackSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotifyAgentOfflineDurationResponse> DescribeNotifyAgentOfflineDurationOutcome;
                typedef std::future<DescribeNotifyAgentOfflineDurationOutcome> DescribeNotifyAgentOfflineDurationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNotifyAgentOfflineDurationRequest&, DescribeNotifyAgentOfflineDurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotifyAgentOfflineDurationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotifyAssetConfigResponse> DescribeNotifyAssetConfigOutcome;
                typedef std::future<DescribeNotifyAssetConfigOutcome> DescribeNotifyAssetConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNotifyAssetConfigRequest&, DescribeNotifyAssetConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotifyAssetConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotifySettingResponse> DescribeNotifySettingOutcome;
                typedef std::future<DescribeNotifySettingOutcome> DescribeNotifySettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNotifySettingRequest&, DescribeNotifySettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotifySettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotifySettingAkResponse> DescribeNotifySettingAkOutcome;
                typedef std::future<DescribeNotifySettingAkOutcome> DescribeNotifySettingAkOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNotifySettingAkRequest&, DescribeNotifySettingAkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotifySettingAkAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribePodContainerListResponse> DescribePodContainerListOutcome;
                typedef std::future<DescribePodContainerListOutcome> DescribePodContainerListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePodContainerListRequest&, DescribePodContainerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePodContainerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyHitDataResponse> DescribePolicyHitDataOutcome;
                typedef std::future<DescribePolicyHitDataOutcome> DescribePolicyHitDataOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePolicyHitDataRequest&, DescribePolicyHitDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyHitDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePortDetectListResponse> DescribePortDetectListOutcome;
                typedef std::future<DescribePortDetectListOutcome> DescribePortDetectListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePortDetectListRequest&, DescribePortDetectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortDetectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePortScanTaskCountResponse> DescribePortScanTaskCountOutcome;
                typedef std::future<DescribePortScanTaskCountOutcome> DescribePortScanTaskCountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePortScanTaskCountRequest&, DescribePortScanTaskCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortScanTaskCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePreventUninstallGlobalConfResponse> DescribePreventUninstallGlobalConfOutcome;
                typedef std::future<DescribePreventUninstallGlobalConfOutcome> DescribePreventUninstallGlobalConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePreventUninstallGlobalConfRequest&, DescribePreventUninstallGlobalConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePreventUninstallGlobalConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePreventUninstallHostResponse> DescribePreventUninstallHostOutcome;
                typedef std::future<DescribePreventUninstallHostOutcome> DescribePreventUninstallHostOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePreventUninstallHostRequest&, DescribePreventUninstallHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePreventUninstallHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProcessDaemonGlobalConfResponse> DescribeProcessDaemonGlobalConfOutcome;
                typedef std::future<DescribeProcessDaemonGlobalConfOutcome> DescribeProcessDaemonGlobalConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeProcessDaemonGlobalConfRequest&, DescribeProcessDaemonGlobalConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessDaemonGlobalConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProcessDaemonHostResponse> DescribeProcessDaemonHostOutcome;
                typedef std::future<DescribeProcessDaemonHostOutcome> DescribeProcessDaemonHostOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeProcessDaemonHostRequest&, DescribeProcessDaemonHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessDaemonHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicCloudAssetsResponse> DescribePublicCloudAssetsOutcome;
                typedef std::future<DescribePublicCloudAssetsOutcome> DescribePublicCloudAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePublicCloudAssetsRequest&, DescribePublicCloudAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicCloudAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicIpAssetsResponse> DescribePublicIpAssetsOutcome;
                typedef std::future<DescribePublicIpAssetsOutcome> DescribePublicIpAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePublicIpAssetsRequest&, DescribePublicIpAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicIpAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRaspLicenseListResponse> DescribeRaspLicenseListOutcome;
                typedef std::future<DescribeRaspLicenseListOutcome> DescribeRaspLicenseListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRaspLicenseListRequest&, DescribeRaspLicenseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRaspLicenseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegistryOverviewResponse> DescribeRegistryOverviewOutcome;
                typedef std::future<DescribeRegistryOverviewOutcome> DescribeRegistryOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRegistryOverviewRequest&, DescribeRegistryOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegistryOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegistryRegionListResponse> DescribeRegistryRegionListOutcome;
                typedef std::future<DescribeRegistryRegionListOutcome> DescribeRegistryRegionListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRegistryRegionListRequest&, DescribeRegistryRegionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegistryRegionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRepositoryImageAssetsResponse> DescribeRepositoryImageAssetsOutcome;
                typedef std::future<DescribeRepositoryImageAssetsOutcome> DescribeRepositoryImageAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRepositoryImageAssetsRequest&, DescribeRepositoryImageAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoryImageAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellSystemPolicyConfigResponse> DescribeReverseShellSystemPolicyConfigOutcome;
                typedef std::future<DescribeReverseShellSystemPolicyConfigOutcome> DescribeReverseShellSystemPolicyConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeReverseShellSystemPolicyConfigRequest&, DescribeReverseShellSystemPolicyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellSystemPolicyConfigAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeRiskCenterRiskTrendAnalysisResponse> DescribeRiskCenterRiskTrendAnalysisOutcome;
                typedef std::future<DescribeRiskCenterRiskTrendAnalysisOutcome> DescribeRiskCenterRiskTrendAnalysisOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterRiskTrendAnalysisRequest&, DescribeRiskCenterRiskTrendAnalysisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterRiskTrendAnalysisAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeRiskScanCronConfigResponse> DescribeRiskScanCronConfigOutcome;
                typedef std::future<DescribeRiskScanCronConfigOutcome> DescribeRiskScanCronConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskScanCronConfigRequest&, DescribeRiskScanCronConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskScanCronConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskTrendDataResponse> DescribeRiskTrendDataOutcome;
                typedef std::future<DescribeRiskTrendDataOutcome> DescribeRiskTrendDataOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskTrendDataRequest&, DescribeRiskTrendDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskTrendDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSCFAliasListResponse> DescribeSCFAliasListOutcome;
                typedef std::future<DescribeSCFAliasListOutcome> DescribeSCFAliasListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSCFAliasListRequest&, DescribeSCFAliasListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSCFAliasListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSCFFunctionListResponse> DescribeSCFFunctionListOutcome;
                typedef std::future<DescribeSCFFunctionListOutcome> DescribeSCFFunctionListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSCFFunctionListRequest&, DescribeSCFFunctionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSCFFunctionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSCFFunctionVersionListResponse> DescribeSCFFunctionVersionListOutcome;
                typedef std::future<DescribeSCFFunctionVersionListOutcome> DescribeSCFFunctionVersionListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSCFFunctionVersionListRequest&, DescribeSCFFunctionVersionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSCFFunctionVersionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSCFNamespaceListResponse> DescribeSCFNamespaceListOutcome;
                typedef std::future<DescribeSCFNamespaceListOutcome> DescribeSCFNamespaceListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSCFNamespaceListRequest&, DescribeSCFNamespaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSCFNamespaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxACLAlertListResponse> DescribeSandboxACLAlertListOutcome;
                typedef std::future<DescribeSandboxACLAlertListOutcome> DescribeSandboxACLAlertListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSandboxACLAlertListRequest&, DescribeSandboxACLAlertListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxACLAlertListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxACLRuleListResponse> DescribeSandboxACLRuleListOutcome;
                typedef std::future<DescribeSandboxACLRuleListOutcome> DescribeSandboxACLRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSandboxACLRuleListRequest&, DescribeSandboxACLRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxACLRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxACLSystemRuleListResponse> DescribeSandboxACLSystemRuleListOutcome;
                typedef std::future<DescribeSandboxACLSystemRuleListOutcome> DescribeSandboxACLSystemRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSandboxACLSystemRuleListRequest&, DescribeSandboxACLSystemRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxACLSystemRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxDLPSystemRuleListResponse> DescribeSandboxDLPSystemRuleListOutcome;
                typedef std::future<DescribeSandboxDLPSystemRuleListOutcome> DescribeSandboxDLPSystemRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSandboxDLPSystemRuleListRequest&, DescribeSandboxDLPSystemRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxDLPSystemRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxFileRuleListResponse> DescribeSandboxFileRuleListOutcome;
                typedef std::future<DescribeSandboxFileRuleListOutcome> DescribeSandboxFileRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSandboxFileRuleListRequest&, DescribeSandboxFileRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxFileRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanReportListResponse> DescribeScanReportListOutcome;
                typedef std::future<DescribeScanReportListOutcome> DescribeScanReportListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScanReportListRequest&, DescribeScanReportListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanReportListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanStatisticResponse> DescribeScanStatisticOutcome;
                typedef std::future<DescribeScanStatisticOutcome> DescribeScanStatisticOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScanStatisticRequest&, DescribeScanStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskListResponse> DescribeScanTaskListOutcome;
                typedef std::future<DescribeScanTaskListOutcome> DescribeScanTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScanTaskListRequest&, DescribeScanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskRecordListResponse> DescribeScanTaskRecordListOutcome;
                typedef std::future<DescribeScanTaskRecordListOutcome> DescribeScanTaskRecordListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScanTaskRecordListRequest&, DescribeScanTaskRecordListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskRecordListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScfCustomDomainEndpointsResponse> DescribeScfCustomDomainEndpointsOutcome;
                typedef std::future<DescribeScfCustomDomainEndpointsOutcome> DescribeScfCustomDomainEndpointsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScfCustomDomainEndpointsRequest&, DescribeScfCustomDomainEndpointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScfCustomDomainEndpointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchBugInfoResponse> DescribeSearchBugInfoOutcome;
                typedef std::future<DescribeSearchBugInfoOutcome> DescribeSearchBugInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSearchBugInfoRequest&, DescribeSearchBugInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchBugInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupPolicyResponse> DescribeSecurityGroupPolicyOutcome;
                typedef std::future<DescribeSecurityGroupPolicyOutcome> DescribeSecurityGroupPolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSecurityGroupPolicyRequest&, DescribeSecurityGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityRiskTrendResponse> DescribeSecurityRiskTrendOutcome;
                typedef std::future<DescribeSecurityRiskTrendOutcome> DescribeSecurityRiskTrendOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSecurityRiskTrendRequest&, DescribeSecurityRiskTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityRiskTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityScoreOverviewResponse> DescribeSecurityScoreOverviewOutcome;
                typedef std::future<DescribeSecurityScoreOverviewOutcome> DescribeSecurityScoreOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSecurityScoreOverviewRequest&, DescribeSecurityScoreOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityScoreOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityScoreRuleResponse> DescribeSecurityScoreRuleOutcome;
                typedef std::future<DescribeSecurityScoreRuleOutcome> DescribeSecurityScoreRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSecurityScoreRuleRequest&, DescribeSecurityScoreRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityScoreRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillScanAlertDetailResponse> DescribeSkillScanAlertDetailOutcome;
                typedef std::future<DescribeSkillScanAlertDetailOutcome> DescribeSkillScanAlertDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSkillScanAlertDetailRequest&, DescribeSkillScanAlertDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillScanAlertDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillScanAlertListResponse> DescribeSkillScanAlertListOutcome;
                typedef std::future<DescribeSkillScanAlertListOutcome> DescribeSkillScanAlertListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSkillScanAlertListRequest&, DescribeSkillScanAlertListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillScanAlertListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeTCRInstanceListResponse> DescribeTCRInstanceListOutcome;
                typedef std::future<DescribeTCRInstanceListOutcome> DescribeTCRInstanceListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTCRInstanceListRequest&, DescribeTCRInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTCRInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagRuleAssetsResponse> DescribeTagRuleAssetsOutcome;
                typedef std::future<DescribeTagRuleAssetsOutcome> DescribeTagRuleAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTagRuleAssetsRequest&, DescribeTagRuleAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagRuleAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLogListResponse> DescribeTaskLogListOutcome;
                typedef std::future<DescribeTaskLogListOutcome> DescribeTaskLogListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTaskLogListRequest&, DescribeTaskLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLogURLResponse> DescribeTaskLogURLOutcome;
                typedef std::future<DescribeTaskLogURLOutcome> DescribeTaskLogURLOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTaskLogURLRequest&, DescribeTaskLogURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLogURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskPredictCostQuotaResponse> DescribeTaskPredictCostQuotaOutcome;
                typedef std::future<DescribeTaskPredictCostQuotaOutcome> DescribeTaskPredictCostQuotaOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTaskPredictCostQuotaRequest&, DescribeTaskPredictCostQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskPredictCostQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopAttackInfoResponse> DescribeTopAttackInfoOutcome;
                typedef std::future<DescribeTopAttackInfoOutcome> DescribeTopAttackInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTopAttackInfoRequest&, DescribeTopAttackInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopAttackInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUebaBehaviorSummaryResponse> DescribeUebaBehaviorSummaryOutcome;
                typedef std::future<DescribeUebaBehaviorSummaryOutcome> DescribeUebaBehaviorSummaryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUebaBehaviorSummaryRequest&, DescribeUebaBehaviorSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUebaBehaviorSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUebaRuleResponse> DescribeUebaRuleOutcome;
                typedef std::future<DescribeUebaRuleOutcome> DescribeUebaRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUebaRuleRequest&, DescribeUebaRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUebaRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUebaUserSummaryResponse> DescribeUebaUserSummaryOutcome;
                typedef std::future<DescribeUebaUserSummaryOutcome> DescribeUebaUserSummaryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUebaUserSummaryRequest&, DescribeUebaUserSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUebaUserSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserCSPMInfoListResponse> DescribeUserCSPMInfoListOutcome;
                typedef std::future<DescribeUserCSPMInfoListOutcome> DescribeUserCSPMInfoListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUserCSPMInfoListRequest&, DescribeUserCSPMInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserCSPMInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserCallRecordResponse> DescribeUserCallRecordOutcome;
                typedef std::future<DescribeUserCallRecordOutcome> DescribeUserCallRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUserCallRecordRequest&, DescribeUserCallRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserCallRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserDspmInfoListResponse> DescribeUserDspmInfoListOutcome;
                typedef std::future<DescribeUserDspmInfoListOutcome> DescribeUserDspmInfoListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUserDspmInfoListRequest&, DescribeUserDspmInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDspmInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserInfoResponse> DescribeUserInfoOutcome;
                typedef std::future<DescribeUserInfoOutcome> DescribeUserInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUserInfoRequest&, DescribeUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVULListResponse> DescribeVULListOutcome;
                typedef std::future<DescribeVULListOutcome> DescribeVULListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVULListRequest&, DescribeVULListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVULListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVULRiskAdvanceCFGListResponse> DescribeVULRiskAdvanceCFGListOutcome;
                typedef std::future<DescribeVULRiskAdvanceCFGListOutcome> DescribeVULRiskAdvanceCFGListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVULRiskAdvanceCFGListRequest&, DescribeVULRiskAdvanceCFGListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVULRiskAdvanceCFGListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVULRiskDetailResponse> DescribeVULRiskDetailOutcome;
                typedef std::future<DescribeVULRiskDetailOutcome> DescribeVULRiskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVULRiskDetailRequest&, DescribeVULRiskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVULRiskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVdbAndPocInfoResponse> DescribeVdbAndPocInfoOutcome;
                typedef std::future<DescribeVdbAndPocInfoOutcome> DescribeVdbAndPocInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVdbAndPocInfoRequest&, DescribeVdbAndPocInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVdbAndPocInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcAssetsResponse> DescribeVpcAssetsOutcome;
                typedef std::future<DescribeVpcAssetsOutcome> DescribeVpcAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVpcAssetsRequest&, DescribeVpcAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulComponentRelateHostResponse> DescribeVulComponentRelateHostOutcome;
                typedef std::future<DescribeVulComponentRelateHostOutcome> DescribeVulComponentRelateHostOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulComponentRelateHostRequest&, DescribeVulComponentRelateHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulComponentRelateHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulFixTaskDetailResponse> DescribeVulFixTaskDetailOutcome;
                typedef std::future<DescribeVulFixTaskDetailOutcome> DescribeVulFixTaskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulFixTaskDetailRequest&, DescribeVulFixTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulFixTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulFixTaskListResponse> DescribeVulFixTaskListOutcome;
                typedef std::future<DescribeVulFixTaskListOutcome> DescribeVulFixTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulFixTaskListRequest&, DescribeVulFixTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulFixTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulFixableMachineListResponse> DescribeVulFixableMachineListOutcome;
                typedef std::future<DescribeVulFixableMachineListOutcome> DescribeVulFixableMachineListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulFixableMachineListRequest&, DescribeVulFixableMachineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulFixableMachineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulFixedHostDetailResponse> DescribeVulFixedHostDetailOutcome;
                typedef std::future<DescribeVulFixedHostDetailOutcome> DescribeVulFixedHostDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulFixedHostDetailRequest&, DescribeVulFixedHostDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulFixedHostDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulFixedListResponse> DescribeVulFixedListOutcome;
                typedef std::future<DescribeVulFixedListOutcome> DescribeVulFixedListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulFixedListRequest&, DescribeVulFixedListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulFixedListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulHostRelateComponentResponse> DescribeVulHostRelateComponentOutcome;
                typedef std::future<DescribeVulHostRelateComponentOutcome> DescribeVulHostRelateComponentOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulHostRelateComponentRequest&, DescribeVulHostRelateComponentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulHostRelateComponentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulIgnoreRuleListResponse> DescribeVulIgnoreRuleListOutcome;
                typedef std::future<DescribeVulIgnoreRuleListOutcome> DescribeVulIgnoreRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulIgnoreRuleListRequest&, DescribeVulIgnoreRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulIgnoreRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulItemListResponse> DescribeVulItemListOutcome;
                typedef std::future<DescribeVulItemListOutcome> DescribeVulItemListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulItemListRequest&, DescribeVulItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulLabelListResponse> DescribeVulLabelListOutcome;
                typedef std::future<DescribeVulLabelListOutcome> DescribeVulLabelListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulLabelListRequest&, DescribeVulLabelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulLabelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulRiskListResponse> DescribeVulRiskListOutcome;
                typedef std::future<DescribeVulRiskListOutcome> DescribeVulRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulRiskListRequest&, DescribeVulRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulRiskRelateComponentResponse> DescribeVulRiskRelateComponentOutcome;
                typedef std::future<DescribeVulRiskRelateComponentOutcome> DescribeVulRiskRelateComponentOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulRiskRelateComponentRequest&, DescribeVulRiskRelateComponentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulRiskRelateComponentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulRiskRelateHostResponse> DescribeVulRiskRelateHostOutcome;
                typedef std::future<DescribeVulRiskRelateHostOutcome> DescribeVulRiskRelateHostOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulRiskRelateHostRequest&, DescribeVulRiskRelateHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulRiskRelateHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulScanPeriodicResponse> DescribeVulScanPeriodicOutcome;
                typedef std::future<DescribeVulScanPeriodicOutcome> DescribeVulScanPeriodicOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulScanPeriodicRequest&, DescribeVulScanPeriodicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulScanPeriodicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulScanTaskDetailResponse> DescribeVulScanTaskDetailOutcome;
                typedef std::future<DescribeVulScanTaskDetailOutcome> DescribeVulScanTaskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulScanTaskDetailRequest&, DescribeVulScanTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulScanTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulScanTaskListResponse> DescribeVulScanTaskListOutcome;
                typedef std::future<DescribeVulScanTaskListOutcome> DescribeVulScanTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulScanTaskListRequest&, DescribeVulScanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulScanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulViewVulRiskListResponse> DescribeVulViewVulRiskListOutcome;
                typedef std::future<DescribeVulViewVulRiskListOutcome> DescribeVulViewVulRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulViewVulRiskListRequest&, DescribeVulViewVulRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulViewVulRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebhookPolicyListResponse> DescribeWebhookPolicyListOutcome;
                typedef std::future<DescribeWebhookPolicyListOutcome> DescribeWebhookPolicyListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeWebhookPolicyListRequest&, DescribeWebhookPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebhookPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebhookReceiverListResponse> DescribeWebhookReceiverListOutcome;
                typedef std::future<DescribeWebhookReceiverListOutcome> DescribeWebhookReceiverListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeWebhookReceiverListRequest&, DescribeWebhookReceiverListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebhookReceiverListAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableAIScheduleResponse> DisableAIScheduleOutcome;
                typedef std::future<DisableAIScheduleOutcome> DisableAIScheduleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DisableAIScheduleRequest&, DisableAIScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableAIScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadDspmExportLogResponse> DownloadDspmExportLogOutcome;
                typedef std::future<DownloadDspmExportLogOutcome> DownloadDspmExportLogOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DownloadDspmExportLogRequest&, DownloadDspmExportLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadDspmExportLogAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableAIScheduleResponse> EnableAIScheduleOutcome;
                typedef std::future<EnableAIScheduleOutcome> EnableAIScheduleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::EnableAIScheduleRequest&, EnableAIScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableAIScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportCSIPMalwareScanTaskDetailResponse> ExportCSIPMalwareScanTaskDetailOutcome;
                typedef std::future<ExportCSIPMalwareScanTaskDetailOutcome> ExportCSIPMalwareScanTaskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ExportCSIPMalwareScanTaskDetailRequest&, ExportCSIPMalwareScanTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportCSIPMalwareScanTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportClientSettingHostListResponse> ExportClientSettingHostListOutcome;
                typedef std::future<ExportClientSettingHostListOutcome> ExportClientSettingHostListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ExportClientSettingHostListRequest&, ExportClientSettingHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportClientSettingHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportEDRRulesResponse> ExportEDRRulesOutcome;
                typedef std::future<ExportEDRRulesOutcome> ExportEDRRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ExportEDRRulesRequest&, ExportEDRRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportEDRRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportTasksResponse> ExportTasksOutcome;
                typedef std::future<ExportTasksOutcome> ExportTasksOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ExportTasksRequest&, ExportTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallClusterAgentResponse> InstallClusterAgentOutcome;
                typedef std::future<InstallClusterAgentOutcome> InstallClusterAgentOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::InstallClusterAgentRequest&, InstallClusterAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallClusterAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAILinkSettingResponse> ModifyAILinkSettingOutcome;
                typedef std::future<ModifyAILinkSettingOutcome> ModifyAILinkSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAILinkSettingRequest&, ModifyAILinkSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAILinkSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAIScheduleResponse> ModifyAIScheduleOutcome;
                typedef std::future<ModifyAIScheduleOutcome> ModifyAIScheduleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAIScheduleRequest&, ModifyAIScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAIScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentConfigSettingResponse> ModifyAgentConfigSettingOutcome;
                typedef std::future<ModifyAgentConfigSettingOutcome> ModifyAgentConfigSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAgentConfigSettingRequest&, ModifyAgentConfigSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentConfigSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentRunModeResponse> ModifyAgentRunModeOutcome;
                typedef std::future<ModifyAgentRunModeOutcome> ModifyAgentRunModeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAgentRunModeRequest&, ModifyAgentRunModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentRunModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentRunPolicyResponse> ModifyAgentRunPolicyOutcome;
                typedef std::future<ModifyAgentRunPolicyOutcome> ModifyAgentRunPolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAgentRunPolicyRequest&, ModifyAgentRunPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentRunPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmRiskStatusResponse> ModifyAlarmRiskStatusOutcome;
                typedef std::future<ModifyAlarmRiskStatusOutcome> ModifyAlarmRiskStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAlarmRiskStatusRequest&, ModifyAlarmRiskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmRiskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetCoreAttributeResponse> ModifyAssetCoreAttributeOutcome;
                typedef std::future<ModifyAssetCoreAttributeOutcome> ModifyAssetCoreAttributeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAssetCoreAttributeRequest&, ModifyAssetCoreAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetCoreAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetFilterViewResponse> ModifyAssetFilterViewOutcome;
                typedef std::future<ModifyAssetFilterViewOutcome> ModifyAssetFilterViewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAssetFilterViewRequest&, ModifyAssetFilterViewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetFilterViewAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetTagResponse> ModifyAssetTagOutcome;
                typedef std::future<ModifyAssetTagOutcome> ModifyAssetTagOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAssetTagRequest&, ModifyAssetTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetTagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetTagsResponse> ModifyAssetTagsOutcome;
                typedef std::future<ModifyAssetTagsOutcome> ModifyAssetTagsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAssetTagsRequest&, ModifyAssetTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetTagsByAssetInfoResponse> ModifyAssetTagsByAssetInfoOutcome;
                typedef std::future<ModifyAssetTagsByAssetInfoOutcome> ModifyAssetTagsByAssetInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAssetTagsByAssetInfoRequest&, ModifyAssetTagsByAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetTagsByAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBanModeResponse> ModifyBanModeOutcome;
                typedef std::future<ModifyBanModeOutcome> ModifyBanModeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBanModeRequest&, ModifyBanModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBanModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselinePolicyResponse> ModifyBaselinePolicyOutcome;
                typedef std::future<ModifyBaselinePolicyOutcome> ModifyBaselinePolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBaselinePolicyRequest&, ModifyBaselinePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselinePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselinePolicyEnableResponse> ModifyBaselinePolicyEnableOutcome;
                typedef std::future<ModifyBaselinePolicyEnableOutcome> ModifyBaselinePolicyEnableOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBaselinePolicyEnableRequest&, ModifyBaselinePolicyEnableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselinePolicyEnableAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselineSyncConfResponse> ModifyBaselineSyncConfOutcome;
                typedef std::future<ModifyBaselineSyncConfOutcome> ModifyBaselineSyncConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBaselineSyncConfRequest&, ModifyBaselineSyncConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselineSyncConfAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselineUserOtherConfResponse> ModifyBaselineUserOtherConfOutcome;
                typedef std::future<ModifyBaselineUserOtherConfOutcome> ModifyBaselineUserOtherConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBaselineUserOtherConfRequest&, ModifyBaselineUserOtherConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselineUserOtherConfAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselineUserWeakPasswordConfResponse> ModifyBaselineUserWeakPasswordConfOutcome;
                typedef std::future<ModifyBaselineUserWeakPasswordConfOutcome> ModifyBaselineUserWeakPasswordConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBaselineUserWeakPasswordConfRequest&, ModifyBaselineUserWeakPasswordConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselineUserWeakPasswordConfAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBruteAttackBanStatusResponse> ModifyBruteAttackBanStatusOutcome;
                typedef std::future<ModifyBruteAttackBanStatusOutcome> ModifyBruteAttackBanStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBruteAttackBanStatusRequest&, ModifyBruteAttackBanStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBruteAttackBanStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBruteAttackRulesResponse> ModifyBruteAttackRulesOutcome;
                typedef std::future<ModifyBruteAttackRulesOutcome> ModifyBruteAttackRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBruteAttackRulesRequest&, ModifyBruteAttackRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBruteAttackRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCSIPLicenseBindsResponse> ModifyCSIPLicenseBindsOutcome;
                typedef std::future<ModifyCSIPLicenseBindsOutcome> ModifyCSIPLicenseBindsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCSIPLicenseBindsRequest&, ModifyCSIPLicenseBindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCSIPLicenseBindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCSIPLicenseUnBindsResponse> ModifyCSIPLicenseUnBindsOutcome;
                typedef std::future<ModifyCSIPLicenseUnBindsOutcome> ModifyCSIPLicenseUnBindsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCSIPLicenseUnBindsRequest&, ModifyCSIPLicenseUnBindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCSIPLicenseUnBindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCSIPRaspLicenseBindsResponse> ModifyCSIPRaspLicenseBindsOutcome;
                typedef std::future<ModifyCSIPRaspLicenseBindsOutcome> ModifyCSIPRaspLicenseBindsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCSIPRaspLicenseBindsRequest&, ModifyCSIPRaspLicenseBindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCSIPRaspLicenseBindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCSIPRaspLicenseUnBindsResponse> ModifyCSIPRaspLicenseUnBindsOutcome;
                typedef std::future<ModifyCSIPRaspLicenseUnBindsOutcome> ModifyCSIPRaspLicenseUnBindsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCSIPRaspLicenseUnBindsRequest&, ModifyCSIPRaspLicenseUnBindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCSIPRaspLicenseUnBindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCosAuditBucketMonitorStatusResponse> ModifyCosAuditBucketMonitorStatusOutcome;
                typedef std::future<ModifyCosAuditBucketMonitorStatusOutcome> ModifyCosAuditBucketMonitorStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCosAuditBucketMonitorStatusRequest&, ModifyCosAuditBucketMonitorStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCosAuditBucketMonitorStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCosAuditMonitorAccountResponse> ModifyCosAuditMonitorAccountOutcome;
                typedef std::future<ModifyCosAuditMonitorAccountOutcome> ModifyCosAuditMonitorAccountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCosAuditMonitorAccountRequest&, ModifyCosAuditMonitorAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCosAuditMonitorAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCosAuditObjectIdentifyStatusResponse> ModifyCosAuditObjectIdentifyStatusOutcome;
                typedef std::future<ModifyCosAuditObjectIdentifyStatusOutcome> ModifyCosAuditObjectIdentifyStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCosAuditObjectIdentifyStatusRequest&, ModifyCosAuditObjectIdentifyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCosAuditObjectIdentifyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCosAuditObjectSampleRateResponse> ModifyCosAuditObjectSampleRateOutcome;
                typedef std::future<ModifyCosAuditObjectSampleRateOutcome> ModifyCosAuditObjectSampleRateOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCosAuditObjectSampleRateRequest&, ModifyCosAuditObjectSampleRateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCosAuditObjectSampleRateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCosMarkInfoResponse> ModifyCosMarkInfoOutcome;
                typedef std::future<ModifyCosMarkInfoOutcome> ModifyCosMarkInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCosMarkInfoRequest&, ModifyCosMarkInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCosMarkInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCspmShardConfigResponse> ModifyCspmShardConfigOutcome;
                typedef std::future<ModifyCspmShardConfigOutcome> ModifyCspmShardConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCspmShardConfigRequest&, ModifyCspmShardConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCspmShardConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAccessRecordResponse> ModifyDspmAccessRecordOutcome;
                typedef std::future<ModifyDspmAccessRecordOutcome> ModifyDspmAccessRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAccessRecordRequest&, ModifyDspmAccessRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAccessRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmApplyingIdentifyComplianceGroupResponse> ModifyDspmApplyingIdentifyComplianceGroupOutcome;
                typedef std::future<ModifyDspmApplyingIdentifyComplianceGroupOutcome> ModifyDspmApplyingIdentifyComplianceGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmApplyingIdentifyComplianceGroupRequest&, ModifyDspmApplyingIdentifyComplianceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmApplyingIdentifyComplianceGroupAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyDspmAssetDataScanTaskStatusResponse> ModifyDspmAssetDataScanTaskStatusOutcome;
                typedef std::future<ModifyDspmAssetDataScanTaskStatusOutcome> ModifyDspmAssetDataScanTaskStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAssetDataScanTaskStatusRequest&, ModifyDspmAssetDataScanTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAssetDataScanTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAssetLogDeliverySwitchResponse> ModifyDspmAssetLogDeliverySwitchOutcome;
                typedef std::future<ModifyDspmAssetLogDeliverySwitchOutcome> ModifyDspmAssetLogDeliverySwitchOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAssetLogDeliverySwitchRequest&, ModifyDspmAssetLogDeliverySwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAssetLogDeliverySwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAssetSecurityAnalysisSwitchResponse> ModifyDspmAssetSecurityAnalysisSwitchOutcome;
                typedef std::future<ModifyDspmAssetSecurityAnalysisSwitchOutcome> ModifyDspmAssetSecurityAnalysisSwitchOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAssetSecurityAnalysisSwitchRequest&, ModifyDspmAssetSecurityAnalysisSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAssetSecurityAnalysisSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmBackupSettingResponse> ModifyDspmBackupSettingOutcome;
                typedef std::future<ModifyDspmBackupSettingOutcome> ModifyDspmBackupSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmBackupSettingRequest&, ModifyDspmBackupSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmBackupSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyCategoryResponse> ModifyDspmIdentifyCategoryOutcome;
                typedef std::future<ModifyDspmIdentifyCategoryOutcome> ModifyDspmIdentifyCategoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyCategoryRequest&, ModifyDspmIdentifyCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyComplianceGroupResponse> ModifyDspmIdentifyComplianceGroupOutcome;
                typedef std::future<ModifyDspmIdentifyComplianceGroupOutcome> ModifyDspmIdentifyComplianceGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyComplianceGroupRequest&, ModifyDspmIdentifyComplianceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyComplianceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyComplianceGroupStatusResponse> ModifyDspmIdentifyComplianceGroupStatusOutcome;
                typedef std::future<ModifyDspmIdentifyComplianceGroupStatusOutcome> ModifyDspmIdentifyComplianceGroupStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyComplianceGroupStatusRequest&, ModifyDspmIdentifyComplianceGroupStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyComplianceGroupStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyComplianceRuleLevelInfoResponse> ModifyDspmIdentifyComplianceRuleLevelInfoOutcome;
                typedef std::future<ModifyDspmIdentifyComplianceRuleLevelInfoOutcome> ModifyDspmIdentifyComplianceRuleLevelInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyComplianceRuleLevelInfoRequest&, ModifyDspmIdentifyComplianceRuleLevelInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyComplianceRuleLevelInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyInfoResponse> ModifyDspmIdentifyInfoOutcome;
                typedef std::future<ModifyDspmIdentifyInfoOutcome> ModifyDspmIdentifyInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyInfoRequest&, ModifyDspmIdentifyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyLevelGroupResponse> ModifyDspmIdentifyLevelGroupOutcome;
                typedef std::future<ModifyDspmIdentifyLevelGroupOutcome> ModifyDspmIdentifyLevelGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyLevelGroupRequest&, ModifyDspmIdentifyLevelGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyLevelGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyLevelItemResponse> ModifyDspmIdentifyLevelItemOutcome;
                typedef std::future<ModifyDspmIdentifyLevelItemOutcome> ModifyDspmIdentifyLevelItemOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyLevelItemRequest&, ModifyDspmIdentifyLevelItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyLevelItemAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyRuleResponse> ModifyDspmIdentifyRuleOutcome;
                typedef std::future<ModifyDspmIdentifyRuleOutcome> ModifyDspmIdentifyRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyRuleRequest&, ModifyDspmIdentifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyRuleStatusResponse> ModifyDspmIdentifyRuleStatusOutcome;
                typedef std::future<ModifyDspmIdentifyRuleStatusOutcome> ModifyDspmIdentifyRuleStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyRuleStatusRequest&, ModifyDspmIdentifyRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyRuleStatusAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyEDRRuleResponse> ModifyEDRRuleOutcome;
                typedef std::future<ModifyEDRRuleOutcome> ModifyEDRRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEDRRuleRequest&, ModifyEDRRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEDRRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEDRRuleStatusResponse> ModifyEDRRuleStatusOutcome;
                typedef std::future<ModifyEDRRuleStatusOutcome> ModifyEDRRuleStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEDRRuleStatusRequest&, ModifyEDRRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEDRRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEDRRulesActionResponse> ModifyEDRRulesActionOutcome;
                typedef std::future<ModifyEDRRulesActionOutcome> ModifyEDRRulesActionOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEDRRulesActionRequest&, ModifyEDRRulesActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEDRRulesActionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdrAlertIsolationResponse> ModifyEdrAlertIsolationOutcome;
                typedef std::future<ModifyEdrAlertIsolationOutcome> ModifyEdrAlertIsolationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEdrAlertIsolationRequest&, ModifyEdrAlertIsolationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdrAlertIsolationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdrAlertPermanentIgnoreResponse> ModifyEdrAlertPermanentIgnoreOutcome;
                typedef std::future<ModifyEdrAlertPermanentIgnoreOutcome> ModifyEdrAlertPermanentIgnoreOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEdrAlertPermanentIgnoreRequest&, ModifyEdrAlertPermanentIgnoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdrAlertPermanentIgnoreAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdrAlertStatusResponse> ModifyEdrAlertStatusOutcome;
                typedef std::future<ModifyEdrAlertStatusOutcome> ModifyEdrAlertStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEdrAlertStatusRequest&, ModifyEdrAlertStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdrAlertStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdrExcludeNetworkSegmentsResponse> ModifyEdrExcludeNetworkSegmentsOutcome;
                typedef std::future<ModifyEdrExcludeNetworkSegmentsOutcome> ModifyEdrExcludeNetworkSegmentsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEdrExcludeNetworkSegmentsRequest&, ModifyEdrExcludeNetworkSegmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdrExcludeNetworkSegmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdrLogCollectPathResponse> ModifyEdrLogCollectPathOutcome;
                typedef std::future<ModifyEdrLogCollectPathOutcome> ModifyEdrLogCollectPathOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEdrLogCollectPathRequest&, ModifyEdrLogCollectPathOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdrLogCollectPathAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExposureAutoTagRuleResponse> ModifyExposureAutoTagRuleOutcome;
                typedef std::future<ModifyExposureAutoTagRuleOutcome> ModifyExposureAutoTagRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyExposureAutoTagRuleRequest&, ModifyExposureAutoTagRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExposureAutoTagRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExposureAutoTagRuleStatusResponse> ModifyExposureAutoTagRuleStatusOutcome;
                typedef std::future<ModifyExposureAutoTagRuleStatusOutcome> ModifyExposureAutoTagRuleStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyExposureAutoTagRuleStatusRequest&, ModifyExposureAutoTagRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExposureAutoTagRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExposureTagResponse> ModifyExposureTagOutcome;
                typedef std::future<ModifyExposureTagOutcome> ModifyExposureTagOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyExposureTagRequest&, ModifyExposureTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExposureTagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIaCTokenPeriodResponse> ModifyIaCTokenPeriodOutcome;
                typedef std::future<ModifyIaCTokenPeriodOutcome> ModifyIaCTokenPeriodOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyIaCTokenPeriodRequest&, ModifyIaCTokenPeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIaCTokenPeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageRegistryResponse> ModifyImageRegistryOutcome;
                typedef std::future<ModifyImageRegistryOutcome> ModifyImageRegistryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyImageRegistryRequest&, ModifyImageRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageRegistryTimedScanTaskConfigResponse> ModifyImageRegistryTimedScanTaskConfigOutcome;
                typedef std::future<ModifyImageRegistryTimedScanTaskConfigOutcome> ModifyImageRegistryTimedScanTaskConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyImageRegistryTimedScanTaskConfigRequest&, ModifyImageRegistryTimedScanTaskConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageRegistryTimedScanTaskConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageSensitiveWhitelistResponse> ModifyImageSensitiveWhitelistOutcome;
                typedef std::future<ModifyImageSensitiveWhitelistOutcome> ModifyImageSensitiveWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyImageSensitiveWhitelistRequest&, ModifyImageSensitiveWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageSensitiveWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageVirusWhitelistResponse> ModifyImageVirusWhitelistOutcome;
                typedef std::future<ModifyImageVirusWhitelistOutcome> ModifyImageVirusWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyImageVirusWhitelistRequest&, ModifyImageVirusWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageVirusWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageVulWhitelistResponse> ModifyImageVulWhitelistOutcome;
                typedef std::future<ModifyImageVulWhitelistOutcome> ModifyImageVulWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyImageVulWhitelistRequest&, ModifyImageVulWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageVulWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoginWhiteRecordResponse> ModifyLoginWhiteRecordOutcome;
                typedef std::future<ModifyLoginWhiteRecordOutcome> ModifyLoginWhiteRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyLoginWhiteRecordRequest&, ModifyLoginWhiteRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoginWhiteRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMachineAutoClearConfigResponse> ModifyMachineAutoClearConfigOutcome;
                typedef std::future<ModifyMachineAutoClearConfigOutcome> ModifyMachineAutoClearConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyMachineAutoClearConfigRequest&, ModifyMachineAutoClearConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachineAutoClearConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMachineRemarkResponse> ModifyMachineRemarkOutcome;
                typedef std::future<ModifyMachineRemarkOutcome> ModifyMachineRemarkOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyMachineRemarkRequest&, ModifyMachineRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachineRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMachinesLoginTypeResponse> ModifyMachinesLoginTypeOutcome;
                typedef std::future<ModifyMachinesLoginTypeOutcome> ModifyMachinesLoginTypeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyMachinesLoginTypeRequest&, ModifyMachinesLoginTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachinesLoginTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMalwareTimingScanSettingsResponse> ModifyMalwareTimingScanSettingsOutcome;
                typedef std::future<ModifyMalwareTimingScanSettingsOutcome> ModifyMalwareTimingScanSettingsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyMalwareTimingScanSettingsRequest&, ModifyMalwareTimingScanSettingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMalwareTimingScanSettingsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNFSScanConfResponse> ModifyNFSScanConfOutcome;
                typedef std::future<ModifyNFSScanConfOutcome> ModifyNFSScanConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNFSScanConfRequest&, ModifyNFSScanConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNFSScanConfAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNFSScanHostResponse> ModifyNFSScanHostOutcome;
                typedef std::future<ModifyNFSScanHostOutcome> ModifyNFSScanHostOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNFSScanHostRequest&, ModifyNFSScanHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNFSScanHostAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetAttackSettingResponse> ModifyNetAttackSettingOutcome;
                typedef std::future<ModifyNetAttackSettingOutcome> ModifyNetAttackSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNetAttackSettingRequest&, ModifyNetAttackSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetAttackSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotifyAgentOfflineDurationResponse> ModifyNotifyAgentOfflineDurationOutcome;
                typedef std::future<ModifyNotifyAgentOfflineDurationOutcome> ModifyNotifyAgentOfflineDurationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNotifyAgentOfflineDurationRequest&, ModifyNotifyAgentOfflineDurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotifyAgentOfflineDurationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotifyAssetConfigResponse> ModifyNotifyAssetConfigOutcome;
                typedef std::future<ModifyNotifyAssetConfigOutcome> ModifyNotifyAssetConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNotifyAssetConfigRequest&, ModifyNotifyAssetConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotifyAssetConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotifyMemberResponse> ModifyNotifyMemberOutcome;
                typedef std::future<ModifyNotifyMemberOutcome> ModifyNotifyMemberOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNotifyMemberRequest&, ModifyNotifyMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotifyMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotifySettingResponse> ModifyNotifySettingOutcome;
                typedef std::future<ModifyNotifySettingOutcome> ModifyNotifySettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNotifySettingRequest&, ModifyNotifySettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotifySettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotifySettingAkResponse> ModifyNotifySettingAkOutcome;
                typedef std::future<ModifyNotifySettingAkOutcome> ModifyNotifySettingAkOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNotifySettingAkRequest&, ModifyNotifySettingAkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotifySettingAkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotifySettingAlertResponse> ModifyNotifySettingAlertOutcome;
                typedef std::future<ModifyNotifySettingAlertOutcome> ModifyNotifySettingAlertOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNotifySettingAlertRequest&, ModifyNotifySettingAlertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotifySettingAlertAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOrganizationAccountStatusResponse> ModifyOrganizationAccountStatusOutcome;
                typedef std::future<ModifyOrganizationAccountStatusOutcome> ModifyOrganizationAccountStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyOrganizationAccountStatusRequest&, ModifyOrganizationAccountStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOrganizationAccountStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPayConfigResponse> ModifyPayConfigOutcome;
                typedef std::future<ModifyPayConfigOutcome> ModifyPayConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyPayConfigRequest&, ModifyPayConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPayConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPolicyStatusResponse> ModifyPolicyStatusOutcome;
                typedef std::future<ModifyPolicyStatusOutcome> ModifyPolicyStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyPolicyStatusRequest&, ModifyPolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProtectionSettingResponse> ModifyProtectionSettingOutcome;
                typedef std::future<ModifyProtectionSettingOutcome> ModifyProtectionSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyProtectionSettingRequest&, ModifyProtectionSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProtectionSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRaspLicenseBindsResponse> ModifyRaspLicenseBindsOutcome;
                typedef std::future<ModifyRaspLicenseBindsOutcome> ModifyRaspLicenseBindsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyRaspLicenseBindsRequest&, ModifyRaspLicenseBindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRaspLicenseBindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReverseShellSystemPolicyConfigResponse> ModifyReverseShellSystemPolicyConfigOutcome;
                typedef std::future<ModifyReverseShellSystemPolicyConfigOutcome> ModifyReverseShellSystemPolicyConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyReverseShellSystemPolicyConfigRequest&, ModifyReverseShellSystemPolicyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReverseShellSystemPolicyConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskCenterRiskStatusResponse> ModifyRiskCenterRiskStatusOutcome;
                typedef std::future<ModifyRiskCenterRiskStatusOutcome> ModifyRiskCenterRiskStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyRiskCenterRiskStatusRequest&, ModifyRiskCenterRiskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskCenterRiskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskCenterScanTaskResponse> ModifyRiskCenterScanTaskOutcome;
                typedef std::future<ModifyRiskCenterScanTaskOutcome> ModifyRiskCenterScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyRiskCenterScanTaskRequest&, ModifyRiskCenterScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskCenterScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskScanCronConfigResponse> ModifyRiskScanCronConfigOutcome;
                typedef std::future<ModifyRiskScanCronConfigOutcome> ModifyRiskScanCronConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyRiskScanCronConfigRequest&, ModifyRiskScanCronConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskScanCronConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySandboxLLMAuditRuleStatusResponse> ModifySandboxLLMAuditRuleStatusOutcome;
                typedef std::future<ModifySandboxLLMAuditRuleStatusOutcome> ModifySandboxLLMAuditRuleStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifySandboxLLMAuditRuleStatusRequest&, ModifySandboxLLMAuditRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySandboxLLMAuditRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityScoreRuleResponse> ModifySecurityScoreRuleOutcome;
                typedef std::future<ModifySecurityScoreRuleOutcome> ModifySecurityScoreRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifySecurityScoreRuleRequest&, ModifySecurityScoreRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityScoreRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyShareUserCSPMResponse> ModifyShareUserCSPMOutcome;
                typedef std::future<ModifyShareUserCSPMOutcome> ModifyShareUserCSPMOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyShareUserCSPMRequest&, ModifyShareUserCSPMOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyShareUserCSPMAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySkillScanAlertStatusResponse> ModifySkillScanAlertStatusOutcome;
                typedef std::future<ModifySkillScanAlertStatusOutcome> ModifySkillScanAlertStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifySkillScanAlertStatusRequest&, ModifySkillScanAlertStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySkillScanAlertStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUebaRuleSwitchResponse> ModifyUebaRuleSwitchOutcome;
                typedef std::future<ModifyUebaRuleSwitchOutcome> ModifyUebaRuleSwitchOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyUebaRuleSwitchRequest&, ModifyUebaRuleSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUebaRuleSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVulScanPeriodicResponse> ModifyVulScanPeriodicOutcome;
                typedef std::future<ModifyVulScanPeriodicOutcome> ModifyVulScanPeriodicOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyVulScanPeriodicRequest&, ModifyVulScanPeriodicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulScanPeriodicAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVulWhitelistConfigResponse> ModifyVulWhitelistConfigOutcome;
                typedef std::future<ModifyVulWhitelistConfigOutcome> ModifyVulWhitelistConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyVulWhitelistConfigRequest&, ModifyVulWhitelistConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulWhitelistConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVulWhitelistSwitchResponse> ModifyVulWhitelistSwitchOutcome;
                typedef std::future<ModifyVulWhitelistSwitchOutcome> ModifyVulWhitelistSwitchOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyVulWhitelistSwitchRequest&, ModifyVulWhitelistSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulWhitelistSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebhookPolicyResponse> ModifyWebhookPolicyOutcome;
                typedef std::future<ModifyWebhookPolicyOutcome> ModifyWebhookPolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyWebhookPolicyRequest&, ModifyWebhookPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebhookPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebhookPolicyStatusResponse> ModifyWebhookPolicyStatusOutcome;
                typedef std::future<ModifyWebhookPolicyStatusOutcome> ModifyWebhookPolicyStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyWebhookPolicyStatusRequest&, ModifyWebhookPolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebhookPolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebhookReceiverResponse> ModifyWebhookReceiverOutcome;
                typedef std::future<ModifyWebhookReceiverOutcome> ModifyWebhookReceiverOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyWebhookReceiverRequest&, ModifyWebhookReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebhookReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::OperateRiskResponse> OperateRiskOutcome;
                typedef std::future<OperateRiskOutcome> OperateRiskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::OperateRiskRequest&, OperateRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OperateRiskAsyncHandler;
                typedef Outcome<Core::Error, Model::OperateRiskRulePolicyResponse> OperateRiskRulePolicyOutcome;
                typedef std::future<OperateRiskRulePolicyOutcome> OperateRiskRulePolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::OperateRiskRulePolicyRequest&, OperateRiskRulePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OperateRiskRulePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetDspmAssetAccountPasswordResponse> ResetDspmAssetAccountPasswordOutcome;
                typedef std::future<ResetDspmAssetAccountPasswordOutcome> ResetDspmAssetAccountPasswordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ResetDspmAssetAccountPasswordRequest&, ResetDspmAssetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetDspmAssetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryDspmExportLogResponse> RetryDspmExportLogOutcome;
                typedef std::future<RetryDspmExportLogOutcome> RetryDspmExportLogOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::RetryDspmExportLogRequest&, RetryDspmExportLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryDspmExportLogAsyncHandler;
                typedef Outcome<Core::Error, Model::RevertDspmAssetAccountResponse> RevertDspmAssetAccountOutcome;
                typedef std::future<RevertDspmAssetAccountOutcome> RevertDspmAssetAccountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::RevertDspmAssetAccountRequest&, RevertDspmAssetAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevertDspmAssetAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanBaselineAssetItemListResponse> ScanBaselineAssetItemListOutcome;
                typedef std::future<ScanBaselineAssetItemListOutcome> ScanBaselineAssetItemListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ScanBaselineAssetItemListRequest&, ScanBaselineAssetItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanBaselineAssetItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanBaselineItemListResponse> ScanBaselineItemListOutcome;
                typedef std::future<ScanBaselineItemListOutcome> ScanBaselineItemListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ScanBaselineItemListRequest&, ScanBaselineItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanBaselineItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanBaselinePolicyListResponse> ScanBaselinePolicyListOutcome;
                typedef std::future<ScanBaselinePolicyListOutcome> ScanBaselinePolicyListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ScanBaselinePolicyListRequest&, ScanBaselinePolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanBaselinePolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanBaselineRiskListResponse> ScanBaselineRiskListOutcome;
                typedef std::future<ScanBaselineRiskListOutcome> ScanBaselineRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ScanBaselineRiskListRequest&, ScanBaselineRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanBaselineRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanCSIPTaskAgainResponse> ScanCSIPTaskAgainOutcome;
                typedef std::future<ScanCSIPTaskAgainOutcome> ScanCSIPTaskAgainOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ScanCSIPTaskAgainRequest&, ScanCSIPTaskAgainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanCSIPTaskAgainAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanEDRTaskAgainResponse> ScanEDRTaskAgainOutcome;
                typedef std::future<ScanEDRTaskAgainOutcome> ScanEDRTaskAgainOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ScanEDRTaskAgainRequest&, ScanEDRTaskAgainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanEDRTaskAgainAsyncHandler;
                typedef Outcome<Core::Error, Model::SendDspmAssetLoginSmsCodeResponse> SendDspmAssetLoginSmsCodeOutcome;
                typedef std::future<SendDspmAssetLoginSmsCodeOutcome> SendDspmAssetLoginSmsCodeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::SendDspmAssetLoginSmsCodeRequest&, SendDspmAssetLoginSmsCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendDspmAssetLoginSmsCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::StartOrModifyPreventUninstallResponse> StartOrModifyPreventUninstallOutcome;
                typedef std::future<StartOrModifyPreventUninstallOutcome> StartOrModifyPreventUninstallOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StartOrModifyPreventUninstallRequest&, StartOrModifyPreventUninstallOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartOrModifyPreventUninstallAsyncHandler;
                typedef Outcome<Core::Error, Model::StartOrModifyProcessDaemonResponse> StartOrModifyProcessDaemonOutcome;
                typedef std::future<StartOrModifyProcessDaemonOutcome> StartOrModifyProcessDaemonOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StartOrModifyProcessDaemonRequest&, StartOrModifyProcessDaemonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartOrModifyProcessDaemonAsyncHandler;
                typedef Outcome<Core::Error, Model::StopBaselineScanTaskResponse> StopBaselineScanTaskOutcome;
                typedef std::future<StopBaselineScanTaskOutcome> StopBaselineScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopBaselineScanTaskRequest&, StopBaselineScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopBaselineScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopCSIPManualMalwareScanResponse> StopCSIPManualMalwareScanOutcome;
                typedef std::future<StopCSIPManualMalwareScanOutcome> StopCSIPManualMalwareScanOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopCSIPManualMalwareScanRequest&, StopCSIPManualMalwareScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopCSIPManualMalwareScanAsyncHandler;
                typedef Outcome<Core::Error, Model::StopEDRScanTaskResponse> StopEDRScanTaskOutcome;
                typedef std::future<StopEDRScanTaskOutcome> StopEDRScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopEDRScanTaskRequest&, StopEDRScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopEDRScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopImageRegistryScanTaskResponse> StopImageRegistryScanTaskOutcome;
                typedef std::future<StopImageRegistryScanTaskOutcome> StopImageRegistryScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopImageRegistryScanTaskRequest&, StopImageRegistryScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopImageRegistryScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopPreventUninstallResponse> StopPreventUninstallOutcome;
                typedef std::future<StopPreventUninstallOutcome> StopPreventUninstallOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopPreventUninstallRequest&, StopPreventUninstallOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopPreventUninstallAsyncHandler;
                typedef Outcome<Core::Error, Model::StopProcessDaemonResponse> StopProcessDaemonOutcome;
                typedef std::future<StopProcessDaemonOutcome> StopProcessDaemonOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopProcessDaemonRequest&, StopProcessDaemonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopProcessDaemonAsyncHandler;
                typedef Outcome<Core::Error, Model::StopRiskCenterTaskResponse> StopRiskCenterTaskOutcome;
                typedef std::future<StopRiskCenterTaskOutcome> StopRiskCenterTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopRiskCenterTaskRequest&, StopRiskCenterTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopRiskCenterTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopVulScanTaskResponse> StopVulScanTaskOutcome;
                typedef std::future<StopVulScanTaskOutcome> StopVulScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopVulScanTaskRequest&, StopVulScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopVulScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncDspmAssetsResponse> SyncDspmAssetsOutcome;
                typedef std::future<SyncDspmAssetsOutcome> SyncDspmAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::SyncDspmAssetsRequest&, SyncDspmAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncDspmAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncDspmUsersResponse> SyncDspmUsersOutcome;
                typedef std::future<SyncDspmUsersOutcome> SyncDspmUsersOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::SyncDspmUsersRequest&, SyncDspmUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncDspmUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncImageRegistryResponse> SyncImageRegistryOutcome;
                typedef std::future<SyncImageRegistryOutcome> SyncImageRegistryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::SyncImageRegistryRequest&, SyncImageRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncImageRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::TestWebhookReceiverResponse> TestWebhookReceiverOutcome;
                typedef std::future<TestWebhookReceiverOutcome> TestWebhookReceiverOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::TestWebhookReceiverRequest&, TestWebhookReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TestWebhookReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::UninstallClusterAgentResponse> UninstallClusterAgentOutcome;
                typedef std::future<UninstallClusterAgentOutcome> UninstallClusterAgentOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::UninstallClusterAgentRequest&, UninstallClusterAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UninstallClusterAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAccessKeyAlarmStatusResponse> UpdateAccessKeyAlarmStatusOutcome;
                typedef std::future<UpdateAccessKeyAlarmStatusOutcome> UpdateAccessKeyAlarmStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::UpdateAccessKeyAlarmStatusRequest&, UpdateAccessKeyAlarmStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccessKeyAlarmStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAccessKeyRemarkResponse> UpdateAccessKeyRemarkOutcome;
                typedef std::future<UpdateAccessKeyRemarkOutcome> UpdateAccessKeyRemarkOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::UpdateAccessKeyRemarkRequest&, UpdateAccessKeyRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccessKeyRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAlertStatusListResponse> UpdateAlertStatusListOutcome;
                typedef std::future<UpdateAlertStatusListOutcome> UpdateAlertStatusListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::UpdateAlertStatusListRequest&, UpdateAlertStatusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlertStatusListAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateClusterOwnerResponse> UpdateClusterOwnerOutcome;
                typedef std::future<UpdateClusterOwnerOutcome> UpdateClusterOwnerOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::UpdateClusterOwnerRequest&, UpdateClusterOwnerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterOwnerAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyDspmAssetLoginCodeResponse> VerifyDspmAssetLoginCodeOutcome;
                typedef std::future<VerifyDspmAssetLoginCodeOutcome> VerifyDspmAssetLoginCodeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::VerifyDspmAssetLoginCodeRequest&, VerifyDspmAssetLoginCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyDspmAssetLoginCodeAsyncHandler;



                /**
                 *创建/修改SMTP邮箱接入请求
                 * @param req AccessAIAnalysisSMTPRequest
                 * @return AccessAIAnalysisSMTPOutcome
                 */
                AccessAIAnalysisSMTPOutcome AccessAIAnalysisSMTP(const Model::AccessAIAnalysisSMTPRequest &request);
                void AccessAIAnalysisSMTPAsync(const Model::AccessAIAnalysisSMTPRequest& request, const AccessAIAnalysisSMTPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AccessAIAnalysisSMTPOutcomeCallable AccessAIAnalysisSMTPCallable(const Model::AccessAIAnalysisSMTPRequest& request);

                /**
                 *添加资产管理员
                 * @param req AddDspmAssetManagerRequest
                 * @return AddDspmAssetManagerOutcome
                 */
                AddDspmAssetManagerOutcome AddDspmAssetManager(const Model::AddDspmAssetManagerRequest &request);
                void AddDspmAssetManagerAsync(const Model::AddDspmAssetManagerRequest& request, const AddDspmAssetManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDspmAssetManagerOutcomeCallable AddDspmAssetManagerCallable(const Model::AddDspmAssetManagerRequest& request);

                /**
                 *添加镜像仓库信息
                 * @param req AddImageRegistryRequest
                 * @return AddImageRegistryOutcome
                 */
                AddImageRegistryOutcome AddImageRegistry(const Model::AddImageRegistryRequest &request);
                void AddImageRegistryAsync(const Model::AddImageRegistryRequest& request, const AddImageRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddImageRegistryOutcomeCallable AddImageRegistryCallable(const Model::AddImageRegistryRequest& request);

                /**
                 *批量添加异地登录白名单
                 * @param req AddLoginWhiteListsRequest
                 * @return AddLoginWhiteListsOutcome
                 */
                AddLoginWhiteListsOutcome AddLoginWhiteLists(const Model::AddLoginWhiteListsRequest &request);
                void AddLoginWhiteListsAsync(const Model::AddLoginWhiteListsRequest& request, const AddLoginWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddLoginWhiteListsOutcomeCallable AddLoginWhiteListsCallable(const Model::AddLoginWhiteListsRequest& request);

                /**
                 *csip角色授权绑定接口
                 * @param req AddNewBindRoleUserRequest
                 * @return AddNewBindRoleUserOutcome
                 */
                AddNewBindRoleUserOutcome AddNewBindRoleUser(const Model::AddNewBindRoleUserRequest &request);
                void AddNewBindRoleUserAsync(const Model::AddNewBindRoleUserRequest& request, const AddNewBindRoleUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddNewBindRoleUserOutcomeCallable AddNewBindRoleUserCallable(const Model::AddNewBindRoleUserRequest& request);

                /**
                 *添加漏洞白名单
                 * @param req AddVulWhitelistRequest
                 * @return AddVulWhitelistOutcome
                 */
                AddVulWhitelistOutcome AddVulWhitelist(const Model::AddVulWhitelistRequest &request);
                void AddVulWhitelistAsync(const Model::AddVulWhitelistRequest& request, const AddVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddVulWhitelistOutcomeCallable AddVulWhitelistCallable(const Model::AddVulWhitelistRequest& request);

                /**
                 *批量修改基线策略的“周期扫描配置 / 自动同步新增检测项 / 检测项命中配置 / 自定义检测项”等设置。仅修改请求中传入的字段。
                 * @param req BatchModifyBaselinePolicyRequest
                 * @return BatchModifyBaselinePolicyOutcome
                 */
                BatchModifyBaselinePolicyOutcome BatchModifyBaselinePolicy(const Model::BatchModifyBaselinePolicyRequest &request);
                void BatchModifyBaselinePolicyAsync(const Model::BatchModifyBaselinePolicyRequest& request, const BatchModifyBaselinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyBaselinePolicyOutcomeCallable BatchModifyBaselinePolicyCallable(const Model::BatchModifyBaselinePolicyRequest& request);

                /**
                 *批量修改镜像仓库定时扫描任务配置
                 * @param req BatchModifyImageRegistryTimedScanTaskConfigRequest
                 * @return BatchModifyImageRegistryTimedScanTaskConfigOutcome
                 */
                BatchModifyImageRegistryTimedScanTaskConfigOutcome BatchModifyImageRegistryTimedScanTaskConfig(const Model::BatchModifyImageRegistryTimedScanTaskConfigRequest &request);
                void BatchModifyImageRegistryTimedScanTaskConfigAsync(const Model::BatchModifyImageRegistryTimedScanTaskConfigRequest& request, const BatchModifyImageRegistryTimedScanTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyImageRegistryTimedScanTaskConfigOutcomeCallable BatchModifyImageRegistryTimedScanTaskConfigCallable(const Model::BatchModifyImageRegistryTimedScanTaskConfigRequest& request);

                /**
                 *批量修改容器镜像敏感信息白名单
                 * @param req BatchModifyImageSensitiveWhitelistRequest
                 * @return BatchModifyImageSensitiveWhitelistOutcome
                 */
                BatchModifyImageSensitiveWhitelistOutcome BatchModifyImageSensitiveWhitelist(const Model::BatchModifyImageSensitiveWhitelistRequest &request);
                void BatchModifyImageSensitiveWhitelistAsync(const Model::BatchModifyImageSensitiveWhitelistRequest& request, const BatchModifyImageSensitiveWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyImageSensitiveWhitelistOutcomeCallable BatchModifyImageSensitiveWhitelistCallable(const Model::BatchModifyImageSensitiveWhitelistRequest& request);

                /**
                 *批量修改镜像木马白名单
                 * @param req BatchModifyImageVirusWhitelistRequest
                 * @return BatchModifyImageVirusWhitelistOutcome
                 */
                BatchModifyImageVirusWhitelistOutcome BatchModifyImageVirusWhitelist(const Model::BatchModifyImageVirusWhitelistRequest &request);
                void BatchModifyImageVirusWhitelistAsync(const Model::BatchModifyImageVirusWhitelistRequest& request, const BatchModifyImageVirusWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyImageVirusWhitelistOutcomeCallable BatchModifyImageVirusWhitelistCallable(const Model::BatchModifyImageVirusWhitelistRequest& request);

                /**
                 *批量修改容器镜像漏洞白名单
                 * @param req BatchModifyImageVulWhitelistRequest
                 * @return BatchModifyImageVulWhitelistOutcome
                 */
                BatchModifyImageVulWhitelistOutcome BatchModifyImageVulWhitelist(const Model::BatchModifyImageVulWhitelistRequest &request);
                void BatchModifyImageVulWhitelistAsync(const Model::BatchModifyImageVulWhitelistRequest& request, const BatchModifyImageVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyImageVulWhitelistOutcomeCallable BatchModifyImageVulWhitelistCallable(const Model::BatchModifyImageVulWhitelistRequest& request);

                /**
                 *绑定集群负责人
                 * @param req BindClusterOwnerRequest
                 * @return BindClusterOwnerOutcome
                 */
                BindClusterOwnerOutcome BindClusterOwner(const Model::BindClusterOwnerRequest &request);
                void BindClusterOwnerAsync(const Model::BindClusterOwnerRequest& request, const BindClusterOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindClusterOwnerOutcomeCallable BindClusterOwnerCallable(const Model::BindClusterOwnerRequest& request);

                /**
                 *取消已永久忽略的EDR多行为告警，从AI-Link永久忽略白名单移除对应主机+规则记录，并将告警状态恢复为待处理（PENDING）
                 * @param req CancelEdrAlertIgnoreRequest
                 * @return CancelEdrAlertIgnoreOutcome
                 */
                CancelEdrAlertIgnoreOutcome CancelEdrAlertIgnore(const Model::CancelEdrAlertIgnoreRequest &request);
                void CancelEdrAlertIgnoreAsync(const Model::CancelEdrAlertIgnoreRequest& request, const CancelEdrAlertIgnoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelEdrAlertIgnoreOutcomeCallable CancelEdrAlertIgnoreCallable(const Model::CancelEdrAlertIgnoreRequest& request);

                /**
                 *判断当前用户是否旗舰版(适用于主机)
                 * @param req CheckCWPExposePathPermissionRequest
                 * @return CheckCWPExposePathPermissionOutcome
                 */
                CheckCWPExposePathPermissionOutcome CheckCWPExposePathPermission(const Model::CheckCWPExposePathPermissionRequest &request);
                void CheckCWPExposePathPermissionAsync(const Model::CheckCWPExposePathPermissionRequest& request, const CheckCWPExposePathPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckCWPExposePathPermissionOutcomeCallable CheckCWPExposePathPermissionCallable(const Model::CheckCWPExposePathPermissionRequest& request);

                /**
                 *检查镜像仓库实例名是否重复
                 * @param req CheckImageRegistryInstanceNameDuplicateRequest
                 * @return CheckImageRegistryInstanceNameDuplicateOutcome
                 */
                CheckImageRegistryInstanceNameDuplicateOutcome CheckImageRegistryInstanceNameDuplicate(const Model::CheckImageRegistryInstanceNameDuplicateRequest &request);
                void CheckImageRegistryInstanceNameDuplicateAsync(const Model::CheckImageRegistryInstanceNameDuplicateRequest& request, const CheckImageRegistryInstanceNameDuplicateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckImageRegistryInstanceNameDuplicateOutcomeCallable CheckImageRegistryInstanceNameDuplicateCallable(const Model::CheckImageRegistryInstanceNameDuplicateRequest& request);

                /**
                 *判断当前用户是否旗舰版
                 * @param req CheckIsUltimateVersionRequest
                 * @return CheckIsUltimateVersionOutcome
                 */
                CheckIsUltimateVersionOutcome CheckIsUltimateVersion(const Model::CheckIsUltimateVersionRequest &request);
                void CheckIsUltimateVersionAsync(const Model::CheckIsUltimateVersionRequest& request, const CheckIsUltimateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckIsUltimateVersionOutcomeCallable CheckIsUltimateVersionCallable(const Model::CheckIsUltimateVersionRequest& request);

                /**
                 *风险验证示例
                 * @param req CheckRiskRequest
                 * @return CheckRiskOutcome
                 */
                CheckRiskOutcome CheckRisk(const Model::CheckRiskRequest &request);
                void CheckRiskAsync(const Model::CheckRiskRequest& request, const CheckRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckRiskOutcomeCallable CheckRiskCallable(const Model::CheckRiskRequest& request);

                /**
                 *复制自定义基线策略
                 * @param req CopyBaselinePolicyRequest
                 * @return CopyBaselinePolicyOutcome
                 */
                CopyBaselinePolicyOutcome CopyBaselinePolicy(const Model::CopyBaselinePolicyRequest &request);
                void CopyBaselinePolicyAsync(const Model::CopyBaselinePolicyRequest& request, const CopyBaselinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyBaselinePolicyOutcomeCallable CopyBaselinePolicyCallable(const Model::CopyBaselinePolicyRequest& request);

                /**
                 *创建AI 定时任务。

创建一个新的AI 定时任务，需传入任务名称、执行提示词和触发器配置。创建成功后返回AI 定时任务 ID。
                 * @param req CreateAIScheduleRequest
                 * @return CreateAIScheduleOutcome
                 */
                CreateAIScheduleOutcome CreateAISchedule(const Model::CreateAIScheduleRequest &request);
                void CreateAIScheduleAsync(const Model::CreateAIScheduleRequest& request, const CreateAIScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIScheduleOutcomeCallable CreateAIScheduleCallable(const Model::CreateAIScheduleRequest& request);

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
                 *创建全部资产导出任务
                 * @param req CreateAllAssetsExportJobRequest
                 * @return CreateAllAssetsExportJobOutcome
                 */
                CreateAllAssetsExportJobOutcome CreateAllAssetsExportJob(const Model::CreateAllAssetsExportJobRequest &request);
                void CreateAllAssetsExportJobAsync(const Model::CreateAllAssetsExportJobRequest& request, const CreateAllAssetsExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAllAssetsExportJobOutcomeCallable CreateAllAssetsExportJobCallable(const Model::CreateAllAssetsExportJobRequest& request);

                /**
                 *创建镜像资产中组件列表导出任务
                 * @param req CreateAssetComponentListExportJobRequest
                 * @return CreateAssetComponentListExportJobOutcome
                 */
                CreateAssetComponentListExportJobOutcome CreateAssetComponentListExportJob(const Model::CreateAssetComponentListExportJobRequest &request);
                void CreateAssetComponentListExportJobAsync(const Model::CreateAssetComponentListExportJobRequest& request, const CreateAssetComponentListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetComponentListExportJobOutcomeCallable CreateAssetComponentListExportJobCallable(const Model::CreateAssetComponentListExportJobRequest& request);

                /**
                 *创建镜像仓库组件关联镜像列表导出任务
                 * @param req CreateAssetComponentRelatedImageListExportJobRequest
                 * @return CreateAssetComponentRelatedImageListExportJobOutcome
                 */
                CreateAssetComponentRelatedImageListExportJobOutcome CreateAssetComponentRelatedImageListExportJob(const Model::CreateAssetComponentRelatedImageListExportJobRequest &request);
                void CreateAssetComponentRelatedImageListExportJobAsync(const Model::CreateAssetComponentRelatedImageListExportJobRequest& request, const CreateAssetComponentRelatedImageListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetComponentRelatedImageListExportJobOutcomeCallable CreateAssetComponentRelatedImageListExportJobCallable(const Model::CreateAssetComponentRelatedImageListExportJobRequest& request);

                /**
                 *创建资产搜索视图
                 * @param req CreateAssetFilterViewRequest
                 * @return CreateAssetFilterViewOutcome
                 */
                CreateAssetFilterViewOutcome CreateAssetFilterView(const Model::CreateAssetFilterViewRequest &request);
                void CreateAssetFilterViewAsync(const Model::CreateAssetFilterViewRequest& request, const CreateAssetFilterViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetFilterViewOutcomeCallable CreateAssetFilterViewCallable(const Model::CreateAssetFilterViewRequest& request);

                /**
                 *创建主机进程列表导出任务
                 * @param req CreateAssetProcessExportJobRequest
                 * @return CreateAssetProcessExportJobOutcome
                 */
                CreateAssetProcessExportJobOutcome CreateAssetProcessExportJob(const Model::CreateAssetProcessExportJobRequest &request);
                void CreateAssetProcessExportJobAsync(const Model::CreateAssetProcessExportJobRequest& request, const CreateAssetProcessExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetProcessExportJobOutcomeCallable CreateAssetProcessExportJobCallable(const Model::CreateAssetProcessExportJobRequest& request);

                /**
                 *创建资产同步任务
                 * @param req CreateAssetSyncTaskRequest
                 * @return CreateAssetSyncTaskOutcome
                 */
                CreateAssetSyncTaskOutcome CreateAssetSyncTask(const Model::CreateAssetSyncTaskRequest &request);
                void CreateAssetSyncTaskAsync(const Model::CreateAssetSyncTaskRequest& request, const CreateAssetSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetSyncTaskOutcomeCallable CreateAssetSyncTaskCallable(const Model::CreateAssetSyncTaskRequest& request);

                /**
                 *创建资产标签
                 * @param req CreateAssetTagRequest
                 * @return CreateAssetTagOutcome
                 */
                CreateAssetTagOutcome CreateAssetTag(const Model::CreateAssetTagRequest &request);
                void CreateAssetTagAsync(const Model::CreateAssetTagRequest& request, const CreateAssetTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetTagOutcomeCallable CreateAssetTagCallable(const Model::CreateAssetTagRequest& request);

                /**
                 *创建资产视角下风险列表导出任务示例
                 * @param req CreateAssetViewRisksExportJobRequest
                 * @return CreateAssetViewRisksExportJobOutcome
                 */
                CreateAssetViewRisksExportJobOutcome CreateAssetViewRisksExportJob(const Model::CreateAssetViewRisksExportJobRequest &request);
                void CreateAssetViewRisksExportJobAsync(const Model::CreateAssetViewRisksExportJobRequest& request, const CreateAssetViewRisksExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetViewRisksExportJobOutcomeCallable CreateAssetViewRisksExportJobCallable(const Model::CreateAssetViewRisksExportJobRequest& request);

                /**
                 *创建基线聚合检测项导出任务。通过 ExportType 选择导出统计结果或风险明细，可按策略、分类等条件限定范围；任务在后台异步执行，完成后可在导出任务列表中下载结果文件。
                 * @param req CreateBaselineAggregatedItemExportJobRequest
                 * @return CreateBaselineAggregatedItemExportJobOutcome
                 */
                CreateBaselineAggregatedItemExportJobOutcome CreateBaselineAggregatedItemExportJob(const Model::CreateBaselineAggregatedItemExportJobRequest &request);
                void CreateBaselineAggregatedItemExportJobAsync(const Model::CreateBaselineAggregatedItemExportJobRequest& request, const CreateBaselineAggregatedItemExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBaselineAggregatedItemExportJobOutcomeCallable CreateBaselineAggregatedItemExportJobCallable(const Model::CreateBaselineAggregatedItemExportJobRequest& request);

                /**
                 *创建基线修复记录导出任务，导出已修复检测项的记录数据（含检测项信息、资产信息、修复时间等）。任务在后台异步执行，完成后可在导出任务列表中下载结果文件。
                 * @param req CreateBaselineFixRecordExportJobRequest
                 * @return CreateBaselineFixRecordExportJobOutcome
                 */
                CreateBaselineFixRecordExportJobOutcome CreateBaselineFixRecordExportJob(const Model::CreateBaselineFixRecordExportJobRequest &request);
                void CreateBaselineFixRecordExportJobAsync(const Model::CreateBaselineFixRecordExportJobRequest& request, const CreateBaselineFixRecordExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBaselineFixRecordExportJobOutcomeCallable CreateBaselineFixRecordExportJobCallable(const Model::CreateBaselineFixRecordExportJobRequest& request);

                /**
                 *创建基线主任务导出任务，导出指定主任务下的检测项与子任务数据。任务在后台异步执行，完成后可在导出任务列表中下载结果文件。
                 * @param req CreateBaselineMainTaskExportJobRequest
                 * @return CreateBaselineMainTaskExportJobOutcome
                 */
                CreateBaselineMainTaskExportJobOutcome CreateBaselineMainTaskExportJob(const Model::CreateBaselineMainTaskExportJobRequest &request);
                void CreateBaselineMainTaskExportJobAsync(const Model::CreateBaselineMainTaskExportJobRequest& request, const CreateBaselineMainTaskExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBaselineMainTaskExportJobOutcomeCallable CreateBaselineMainTaskExportJobCallable(const Model::CreateBaselineMainTaskExportJobRequest& request);

                /**
                 *创建云资源配置检测PDF报告导出任务示例
                 * @param req CreateCFGRiskPDFReportExportJobRequest
                 * @return CreateCFGRiskPDFReportExportJobOutcome
                 */
                CreateCFGRiskPDFReportExportJobOutcome CreateCFGRiskPDFReportExportJob(const Model::CreateCFGRiskPDFReportExportJobRequest &request);
                void CreateCFGRiskPDFReportExportJobAsync(const Model::CreateCFGRiskPDFReportExportJobRequest& request, const CreateCFGRiskPDFReportExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCFGRiskPDFReportExportJobOutcomeCallable CreateCFGRiskPDFReportExportJobCallable(const Model::CreateCFGRiskPDFReportExportJobRequest& request);

                /**
                 *创建资产视角下风险列表导出任务示例
                 * @param req CreateCFGRisksExportJobRequest
                 * @return CreateCFGRisksExportJobOutcome
                 */
                CreateCFGRisksExportJobOutcome CreateCFGRisksExportJob(const Model::CreateCFGRisksExportJobRequest &request);
                void CreateCFGRisksExportJobAsync(const Model::CreateCFGRisksExportJobRequest& request, const CreateCFGRisksExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCFGRisksExportJobOutcomeCallable CreateCFGRisksExportJobCallable(const Model::CreateCFGRisksExportJobRequest& request);

                /**
                 *CSIP 手动扫描创建接口
                 * @param req CreateCSIPManualMalwareScanRequest
                 * @return CreateCSIPManualMalwareScanOutcome
                 */
                CreateCSIPManualMalwareScanOutcome CreateCSIPManualMalwareScan(const Model::CreateCSIPManualMalwareScanRequest &request);
                void CreateCSIPManualMalwareScanAsync(const Model::CreateCSIPManualMalwareScanRequest& request, const CreateCSIPManualMalwareScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCSIPManualMalwareScanOutcomeCallable CreateCSIPManualMalwareScanCallable(const Model::CreateCSIPManualMalwareScanRequest& request);

                /**
                 *创建资产视角下风险列表导出任务示例
                 * @param req CreateCheckViewRisksExportJobRequest
                 * @return CreateCheckViewRisksExportJobOutcome
                 */
                CreateCheckViewRisksExportJobOutcome CreateCheckViewRisksExportJob(const Model::CreateCheckViewRisksExportJobRequest &request);
                void CreateCheckViewRisksExportJobAsync(const Model::CreateCheckViewRisksExportJobRequest& request, const CreateCheckViewRisksExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCheckViewRisksExportJobOutcomeCallable CreateCheckViewRisksExportJobCallable(const Model::CreateCheckViewRisksExportJobRequest& request);

                /**
                 *创建云函数导出任务
                 * @param req CreateCloudFunctionExportJobRequest
                 * @return CreateCloudFunctionExportJobOutcome
                 */
                CreateCloudFunctionExportJobOutcome CreateCloudFunctionExportJob(const Model::CreateCloudFunctionExportJobRequest &request);
                void CreateCloudFunctionExportJobAsync(const Model::CreateCloudFunctionExportJobRequest& request, const CreateCloudFunctionExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudFunctionExportJobOutcomeCallable CreateCloudFunctionExportJobCallable(const Model::CreateCloudFunctionExportJobRequest& request);

                /**
                 *创建集群资产同步任务
                 * @param req CreateClusterAssetSyncTaskRequest
                 * @return CreateClusterAssetSyncTaskOutcome
                 */
                CreateClusterAssetSyncTaskOutcome CreateClusterAssetSyncTask(const Model::CreateClusterAssetSyncTaskRequest &request);
                void CreateClusterAssetSyncTaskAsync(const Model::CreateClusterAssetSyncTaskRequest& request, const CreateClusterAssetSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterAssetSyncTaskOutcomeCallable CreateClusterAssetSyncTaskCallable(const Model::CreateClusterAssetSyncTaskRequest& request);

                /**
                 *创建集群容器列表导出任务
                 * @param req CreateClusterContainerListExportJobRequest
                 * @return CreateClusterContainerListExportJobOutcome
                 */
                CreateClusterContainerListExportJobOutcome CreateClusterContainerListExportJob(const Model::CreateClusterContainerListExportJobRequest &request);
                void CreateClusterContainerListExportJobAsync(const Model::CreateClusterContainerListExportJobRequest& request, const CreateClusterContainerListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterContainerListExportJobOutcomeCallable CreateClusterContainerListExportJobCallable(const Model::CreateClusterContainerListExportJobRequest& request);

                /**
                 *创建集群列表导出任务
                 * @param req CreateClusterListExportJobRequest
                 * @return CreateClusterListExportJobOutcome
                 */
                CreateClusterListExportJobOutcome CreateClusterListExportJob(const Model::CreateClusterListExportJobRequest &request);
                void CreateClusterListExportJobAsync(const Model::CreateClusterListExportJobRequest& request, const CreateClusterListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterListExportJobOutcomeCallable CreateClusterListExportJobCallable(const Model::CreateClusterListExportJobRequest& request);

                /**
                 *创建集群命名空间列表导出任务。导出字段包含命名空间名称、Labels、创建时间。支持Filter过滤。导出通过异步任务实现，返回JobId后前端轮询查询导出任务状态。
                 * @param req CreateClusterNamespaceListExportJobRequest
                 * @return CreateClusterNamespaceListExportJobOutcome
                 */
                CreateClusterNamespaceListExportJobOutcome CreateClusterNamespaceListExportJob(const Model::CreateClusterNamespaceListExportJobRequest &request);
                void CreateClusterNamespaceListExportJobAsync(const Model::CreateClusterNamespaceListExportJobRequest& request, const CreateClusterNamespaceListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterNamespaceListExportJobOutcomeCallable CreateClusterNamespaceListExportJobCallable(const Model::CreateClusterNamespaceListExportJobRequest& request);

                /**
                 *创建集群节点列表导出任务。导出字段包含节点ID、节点名称、公网IP、内网IP、节点类型、核数、客户端状态、运行状态。NodeType和ClientStatus、RunStatus均经过国际化翻译。支持Filter过滤（含ClientStatus内存过滤）。导出通过异步任务实现，返回JobId后前端轮询查询导出任务状态。
                 * @param req CreateClusterNodeListExportJobRequest
                 * @return CreateClusterNodeListExportJobOutcome
                 */
                CreateClusterNodeListExportJobOutcome CreateClusterNodeListExportJob(const Model::CreateClusterNodeListExportJobRequest &request);
                void CreateClusterNodeListExportJobAsync(const Model::CreateClusterNodeListExportJobRequest& request, const CreateClusterNodeListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterNodeListExportJobOutcomeCallable CreateClusterNodeListExportJobCallable(const Model::CreateClusterNodeListExportJobRequest& request);

                /**
                 *创建合规标准聚合视角下风险列表导出任务示例
                 * @param req CreateComplianceRiskExportJobRequest
                 * @return CreateComplianceRiskExportJobOutcome
                 */
                CreateComplianceRiskExportJobOutcome CreateComplianceRiskExportJob(const Model::CreateComplianceRiskExportJobRequest &request);
                void CreateComplianceRiskExportJobAsync(const Model::CreateComplianceRiskExportJobRequest& request, const CreateComplianceRiskExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateComplianceRiskExportJobOutcomeCallable CreateComplianceRiskExportJobCallable(const Model::CreateComplianceRiskExportJobRequest& request);

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
                 * @param req CreateDspmAssetIdentifyInfoExportJobRequest
                 * @return CreateDspmAssetIdentifyInfoExportJobOutcome
                 */
                CreateDspmAssetIdentifyInfoExportJobOutcome CreateDspmAssetIdentifyInfoExportJob(const Model::CreateDspmAssetIdentifyInfoExportJobRequest &request);
                void CreateDspmAssetIdentifyInfoExportJobAsync(const Model::CreateDspmAssetIdentifyInfoExportJobRequest& request, const CreateDspmAssetIdentifyInfoExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmAssetIdentifyInfoExportJobOutcomeCallable CreateDspmAssetIdentifyInfoExportJobCallable(const Model::CreateDspmAssetIdentifyInfoExportJobRequest& request);

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
                 *创建dspm数据识别分类
                 * @param req CreateDspmIdentifyCategoryRequest
                 * @return CreateDspmIdentifyCategoryOutcome
                 */
                CreateDspmIdentifyCategoryOutcome CreateDspmIdentifyCategory(const Model::CreateDspmIdentifyCategoryRequest &request);
                void CreateDspmIdentifyCategoryAsync(const Model::CreateDspmIdentifyCategoryRequest& request, const CreateDspmIdentifyCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyCategoryOutcomeCallable CreateDspmIdentifyCategoryCallable(const Model::CreateDspmIdentifyCategoryRequest& request);

                /**
                 *创建dspm数据识别模板分类关联
                 * @param req CreateDspmIdentifyComplianceCategoryRelationRequest
                 * @return CreateDspmIdentifyComplianceCategoryRelationOutcome
                 */
                CreateDspmIdentifyComplianceCategoryRelationOutcome CreateDspmIdentifyComplianceCategoryRelation(const Model::CreateDspmIdentifyComplianceCategoryRelationRequest &request);
                void CreateDspmIdentifyComplianceCategoryRelationAsync(const Model::CreateDspmIdentifyComplianceCategoryRelationRequest& request, const CreateDspmIdentifyComplianceCategoryRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyComplianceCategoryRelationOutcomeCallable CreateDspmIdentifyComplianceCategoryRelationCallable(const Model::CreateDspmIdentifyComplianceCategoryRelationRequest& request);

                /**
                 *创建dspm数据识别模板
                 * @param req CreateDspmIdentifyComplianceGroupRequest
                 * @return CreateDspmIdentifyComplianceGroupOutcome
                 */
                CreateDspmIdentifyComplianceGroupOutcome CreateDspmIdentifyComplianceGroup(const Model::CreateDspmIdentifyComplianceGroupRequest &request);
                void CreateDspmIdentifyComplianceGroupAsync(const Model::CreateDspmIdentifyComplianceGroupRequest& request, const CreateDspmIdentifyComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyComplianceGroupOutcomeCallable CreateDspmIdentifyComplianceGroupCallable(const Model::CreateDspmIdentifyComplianceGroupRequest& request);

                /**
                 *复制dspm数据识别模板
                 * @param req CreateDspmIdentifyComplianceGroupCopyRequest
                 * @return CreateDspmIdentifyComplianceGroupCopyOutcome
                 */
                CreateDspmIdentifyComplianceGroupCopyOutcome CreateDspmIdentifyComplianceGroupCopy(const Model::CreateDspmIdentifyComplianceGroupCopyRequest &request);
                void CreateDspmIdentifyComplianceGroupCopyAsync(const Model::CreateDspmIdentifyComplianceGroupCopyRequest& request, const CreateDspmIdentifyComplianceGroupCopyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyComplianceGroupCopyOutcomeCallable CreateDspmIdentifyComplianceGroupCopyCallable(const Model::CreateDspmIdentifyComplianceGroupCopyRequest& request);

                /**
                 *创建dspm数据识别模板数据项关联
                 * @param req CreateDspmIdentifyComplianceRuleRelationRequest
                 * @return CreateDspmIdentifyComplianceRuleRelationOutcome
                 */
                CreateDspmIdentifyComplianceRuleRelationOutcome CreateDspmIdentifyComplianceRuleRelation(const Model::CreateDspmIdentifyComplianceRuleRelationRequest &request);
                void CreateDspmIdentifyComplianceRuleRelationAsync(const Model::CreateDspmIdentifyComplianceRuleRelationRequest& request, const CreateDspmIdentifyComplianceRuleRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyComplianceRuleRelationOutcomeCallable CreateDspmIdentifyComplianceRuleRelationCallable(const Model::CreateDspmIdentifyComplianceRuleRelationRequest& request);

                /**
                 *创建Dspm身份列表导出任务
                 * @param req CreateDspmIdentifyInfoListExportJobRequest
                 * @return CreateDspmIdentifyInfoListExportJobOutcome
                 */
                CreateDspmIdentifyInfoListExportJobOutcome CreateDspmIdentifyInfoListExportJob(const Model::CreateDspmIdentifyInfoListExportJobRequest &request);
                void CreateDspmIdentifyInfoListExportJobAsync(const Model::CreateDspmIdentifyInfoListExportJobRequest& request, const CreateDspmIdentifyInfoListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyInfoListExportJobOutcomeCallable CreateDspmIdentifyInfoListExportJobCallable(const Model::CreateDspmIdentifyInfoListExportJobRequest& request);

                /**
                 *创建dspm数据识别分级组
                 * @param req CreateDspmIdentifyLevelGroupRequest
                 * @return CreateDspmIdentifyLevelGroupOutcome
                 */
                CreateDspmIdentifyLevelGroupOutcome CreateDspmIdentifyLevelGroup(const Model::CreateDspmIdentifyLevelGroupRequest &request);
                void CreateDspmIdentifyLevelGroupAsync(const Model::CreateDspmIdentifyLevelGroupRequest& request, const CreateDspmIdentifyLevelGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyLevelGroupOutcomeCallable CreateDspmIdentifyLevelGroupCallable(const Model::CreateDspmIdentifyLevelGroupRequest& request);

                /**
                 *创建dspm数据识别数据项
                 * @param req CreateDspmIdentifyRuleRequest
                 * @return CreateDspmIdentifyRuleOutcome
                 */
                CreateDspmIdentifyRuleOutcome CreateDspmIdentifyRule(const Model::CreateDspmIdentifyRuleRequest &request);
                void CreateDspmIdentifyRuleAsync(const Model::CreateDspmIdentifyRuleRequest& request, const CreateDspmIdentifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyRuleOutcomeCallable CreateDspmIdentifyRuleCallable(const Model::CreateDspmIdentifyRuleRequest& request);

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
                 *创建公网资产导出任务
                 * @param req CreateDynamicAssetsExportJobRequest
                 * @return CreateDynamicAssetsExportJobOutcome
                 */
                CreateDynamicAssetsExportJobOutcome CreateDynamicAssetsExportJob(const Model::CreateDynamicAssetsExportJobRequest &request);
                void CreateDynamicAssetsExportJobAsync(const Model::CreateDynamicAssetsExportJobRequest& request, const CreateDynamicAssetsExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDynamicAssetsExportJobOutcomeCallable CreateDynamicAssetsExportJobCallable(const Model::CreateDynamicAssetsExportJobRequest& request);

                /**
                 *点击开始扫描后触发，支持多账号、多资产类型。同时选主机和容器集群时拆分为两个独立任务（主机+容器）。
                 * @param req CreateEDRManualScanRequest
                 * @return CreateEDRManualScanOutcome
                 */
                CreateEDRManualScanOutcome CreateEDRManualScan(const Model::CreateEDRManualScanRequest &request);
                void CreateEDRManualScanAsync(const Model::CreateEDRManualScanRequest& request, const CreateEDRManualScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEDRManualScanOutcomeCallable CreateEDRManualScanCallable(const Model::CreateEDRManualScanRequest& request);

                /**
                 *创建EDR告警导出任务
                 * @param req CreateEdrAlertExportJobRequest
                 * @return CreateEdrAlertExportJobOutcome
                 */
                CreateEdrAlertExportJobOutcome CreateEdrAlertExportJob(const Model::CreateEdrAlertExportJobRequest &request);
                void CreateEdrAlertExportJobAsync(const Model::CreateEdrAlertExportJobRequest& request, const CreateEdrAlertExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdrAlertExportJobOutcomeCallable CreateEdrAlertExportJobCallable(const Model::CreateEdrAlertExportJobRequest& request);

                /**
                 *创建EDR告警普通导出任务
                 * @param req CreateEdrLessAlertExportJobRequest
                 * @return CreateEdrLessAlertExportJobOutcome
                 */
                CreateEdrLessAlertExportJobOutcome CreateEdrLessAlertExportJob(const Model::CreateEdrLessAlertExportJobRequest &request);
                void CreateEdrLessAlertExportJobAsync(const Model::CreateEdrLessAlertExportJobRequest& request, const CreateEdrLessAlertExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdrLessAlertExportJobOutcomeCallable CreateEdrLessAlertExportJobCallable(const Model::CreateEdrLessAlertExportJobRequest& request);

                /**
                 *云边界自动打标-创建规则
                 * @param req CreateExposureAutoTagRuleRequest
                 * @return CreateExposureAutoTagRuleOutcome
                 */
                CreateExposureAutoTagRuleOutcome CreateExposureAutoTagRule(const Model::CreateExposureAutoTagRuleRequest &request);
                void CreateExposureAutoTagRuleAsync(const Model::CreateExposureAutoTagRuleRequest& request, const CreateExposureAutoTagRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExposureAutoTagRuleOutcomeCallable CreateExposureAutoTagRuleCallable(const Model::CreateExposureAutoTagRuleRequest& request);

                /**
                 *暴露资产导出任务
                 * @param req CreateExposuresExportJobRequest
                 * @return CreateExposuresExportJobOutcome
                 */
                CreateExposuresExportJobOutcome CreateExposuresExportJob(const Model::CreateExposuresExportJobRequest &request);
                void CreateExposuresExportJobAsync(const Model::CreateExposuresExportJobRequest& request, const CreateExposuresExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExposuresExportJobOutcomeCallable CreateExposuresExportJobCallable(const Model::CreateExposuresExportJobRequest& request);

                /**
                 *创建高危基线风险导出任务
                 * @param req CreateHighBaseLineRisksExportJobRequest
                 * @return CreateHighBaseLineRisksExportJobOutcome
                 */
                CreateHighBaseLineRisksExportJobOutcome CreateHighBaseLineRisksExportJob(const Model::CreateHighBaseLineRisksExportJobRequest &request);
                void CreateHighBaseLineRisksExportJobAsync(const Model::CreateHighBaseLineRisksExportJobRequest& request, const CreateHighBaseLineRisksExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHighBaseLineRisksExportJobOutcomeCallable CreateHighBaseLineRisksExportJobCallable(const Model::CreateHighBaseLineRisksExportJobRequest& request);

                /**
                 *创建主机列漏洞表导出任务
                 * @param req CreateHostVulExportJobRequest
                 * @return CreateHostVulExportJobOutcome
                 */
                CreateHostVulExportJobOutcome CreateHostVulExportJob(const Model::CreateHostVulExportJobRequest &request);
                void CreateHostVulExportJobAsync(const Model::CreateHostVulExportJobRequest& request, const CreateHostVulExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHostVulExportJobOutcomeCallable CreateHostVulExportJobCallable(const Model::CreateHostVulExportJobRequest& request);

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
                 *创建镜像资产列表导出任务
                 * @param req CreateImageAssetListExportJobRequest
                 * @return CreateImageAssetListExportJobOutcome
                 */
                CreateImageAssetListExportJobOutcome CreateImageAssetListExportJob(const Model::CreateImageAssetListExportJobRequest &request);
                void CreateImageAssetListExportJobAsync(const Model::CreateImageAssetListExportJobRequest& request, const CreateImageAssetListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageAssetListExportJobOutcomeCallable CreateImageAssetListExportJobCallable(const Model::CreateImageAssetListExportJobRequest& request);

                /**
                 *创建镜像关联容器资产导出任务
                 * @param req CreateImageAssociatedContainerListExportJobRequest
                 * @return CreateImageAssociatedContainerListExportJobOutcome
                 */
                CreateImageAssociatedContainerListExportJobOutcome CreateImageAssociatedContainerListExportJob(const Model::CreateImageAssociatedContainerListExportJobRequest &request);
                void CreateImageAssociatedContainerListExportJobAsync(const Model::CreateImageAssociatedContainerListExportJobRequest& request, const CreateImageAssociatedContainerListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageAssociatedContainerListExportJobOutcomeCallable CreateImageAssociatedContainerListExportJobCallable(const Model::CreateImageAssociatedContainerListExportJobRequest& request);

                /**
                 *创建镜像关联主机资产列表导出任务
                 * @param req CreateImageAssociatedHostListExportJobRequest
                 * @return CreateImageAssociatedHostListExportJobOutcome
                 */
                CreateImageAssociatedHostListExportJobOutcome CreateImageAssociatedHostListExportJob(const Model::CreateImageAssociatedHostListExportJobRequest &request);
                void CreateImageAssociatedHostListExportJobAsync(const Model::CreateImageAssociatedHostListExportJobRequest& request, const CreateImageAssociatedHostListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageAssociatedHostListExportJobOutcomeCallable CreateImageAssociatedHostListExportJobCallable(const Model::CreateImageAssociatedHostListExportJobRequest& request);

                /**
                 *创建镜像组件列表导出任务
                 * @param req CreateImageComponentListExportJobRequest
                 * @return CreateImageComponentListExportJobOutcome
                 */
                CreateImageComponentListExportJobOutcome CreateImageComponentListExportJob(const Model::CreateImageComponentListExportJobRequest &request);
                void CreateImageComponentListExportJobAsync(const Model::CreateImageComponentListExportJobRequest& request, const CreateImageComponentListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageComponentListExportJobOutcomeCallable CreateImageComponentListExportJobCallable(const Model::CreateImageComponentListExportJobRequest& request);

                /**
                 *创建镜像层漏洞列表导出任务
                 * @param req CreateImageLayerVulListExportJobRequest
                 * @return CreateImageLayerVulListExportJobOutcome
                 */
                CreateImageLayerVulListExportJobOutcome CreateImageLayerVulListExportJob(const Model::CreateImageLayerVulListExportJobRequest &request);
                void CreateImageLayerVulListExportJobAsync(const Model::CreateImageLayerVulListExportJobRequest& request, const CreateImageLayerVulListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageLayerVulListExportJobOutcomeCallable CreateImageLayerVulListExportJobCallable(const Model::CreateImageLayerVulListExportJobRequest& request);

                /**
                 *创建镜像仓库联通性检查任务
                 * @param req CreateImageRegistryConnectivityTaskRequest
                 * @return CreateImageRegistryConnectivityTaskOutcome
                 */
                CreateImageRegistryConnectivityTaskOutcome CreateImageRegistryConnectivityTask(const Model::CreateImageRegistryConnectivityTaskRequest &request);
                void CreateImageRegistryConnectivityTaskAsync(const Model::CreateImageRegistryConnectivityTaskRequest& request, const CreateImageRegistryConnectivityTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageRegistryConnectivityTaskOutcomeCallable CreateImageRegistryConnectivityTaskCallable(const Model::CreateImageRegistryConnectivityTaskRequest& request);

                /**
                 *创建镜像仓库列表导出任务
                 * @param req CreateImageRegistryListExportJobRequest
                 * @return CreateImageRegistryListExportJobOutcome
                 */
                CreateImageRegistryListExportJobOutcome CreateImageRegistryListExportJob(const Model::CreateImageRegistryListExportJobRequest &request);
                void CreateImageRegistryListExportJobAsync(const Model::CreateImageRegistryListExportJobRequest& request, const CreateImageRegistryListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageRegistryListExportJobOutcomeCallable CreateImageRegistryListExportJobCallable(const Model::CreateImageRegistryListExportJobRequest& request);

                /**
                 *创建镜像扫描任务
                 * @param req CreateImageRegistryScanTaskRequest
                 * @return CreateImageRegistryScanTaskOutcome
                 */
                CreateImageRegistryScanTaskOutcome CreateImageRegistryScanTask(const Model::CreateImageRegistryScanTaskRequest &request);
                void CreateImageRegistryScanTaskAsync(const Model::CreateImageRegistryScanTaskRequest& request, const CreateImageRegistryScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageRegistryScanTaskOutcomeCallable CreateImageRegistryScanTaskCallable(const Model::CreateImageRegistryScanTaskRequest& request);

                /**
                 *创建镜像仓库镜像扫描任务配置
                 * @param req CreateImageRegistryTimedScanTaskConfigRequest
                 * @return CreateImageRegistryTimedScanTaskConfigOutcome
                 */
                CreateImageRegistryTimedScanTaskConfigOutcome CreateImageRegistryTimedScanTaskConfig(const Model::CreateImageRegistryTimedScanTaskConfigRequest &request);
                void CreateImageRegistryTimedScanTaskConfigAsync(const Model::CreateImageRegistryTimedScanTaskConfigRequest& request, const CreateImageRegistryTimedScanTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageRegistryTimedScanTaskConfigOutcomeCallable CreateImageRegistryTimedScanTaskConfigCallable(const Model::CreateImageRegistryTimedScanTaskConfigRequest& request);

                /**
                 *创建镜像敏感信息列表导出任务
                 * @param req CreateImageSensitiveInfoListExportJobRequest
                 * @return CreateImageSensitiveInfoListExportJobOutcome
                 */
                CreateImageSensitiveInfoListExportJobOutcome CreateImageSensitiveInfoListExportJob(const Model::CreateImageSensitiveInfoListExportJobRequest &request);
                void CreateImageSensitiveInfoListExportJobAsync(const Model::CreateImageSensitiveInfoListExportJobRequest& request, const CreateImageSensitiveInfoListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageSensitiveInfoListExportJobOutcomeCallable CreateImageSensitiveInfoListExportJobCallable(const Model::CreateImageSensitiveInfoListExportJobRequest& request);

                /**
                 *创建容器镜像敏感信息白名单
                 * @param req CreateImageSensitiveWhitelistRequest
                 * @return CreateImageSensitiveWhitelistOutcome
                 */
                CreateImageSensitiveWhitelistOutcome CreateImageSensitiveWhitelist(const Model::CreateImageSensitiveWhitelistRequest &request);
                void CreateImageSensitiveWhitelistAsync(const Model::CreateImageSensitiveWhitelistRequest& request, const CreateImageSensitiveWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageSensitiveWhitelistOutcomeCallable CreateImageSensitiveWhitelistCallable(const Model::CreateImageSensitiveWhitelistRequest& request);

                /**
                 *创建镜像木马病毒列表导出任务
                 * @param req CreateImageVirusListExportJobRequest
                 * @return CreateImageVirusListExportJobOutcome
                 */
                CreateImageVirusListExportJobOutcome CreateImageVirusListExportJob(const Model::CreateImageVirusListExportJobRequest &request);
                void CreateImageVirusListExportJobAsync(const Model::CreateImageVirusListExportJobRequest& request, const CreateImageVirusListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageVirusListExportJobOutcomeCallable CreateImageVirusListExportJobCallable(const Model::CreateImageVirusListExportJobRequest& request);

                /**
                 *创建镜像木马白名单
                 * @param req CreateImageVirusWhitelistRequest
                 * @return CreateImageVirusWhitelistOutcome
                 */
                CreateImageVirusWhitelistOutcome CreateImageVirusWhitelist(const Model::CreateImageVirusWhitelistRequest &request);
                void CreateImageVirusWhitelistAsync(const Model::CreateImageVirusWhitelistRequest& request, const CreateImageVirusWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageVirusWhitelistOutcomeCallable CreateImageVirusWhitelistCallable(const Model::CreateImageVirusWhitelistRequest& request);

                /**
                 *创建镜像漏洞列表导出任务
                 * @param req CreateImageVulListExportJobRequest
                 * @return CreateImageVulListExportJobOutcome
                 */
                CreateImageVulListExportJobOutcome CreateImageVulListExportJob(const Model::CreateImageVulListExportJobRequest &request);
                void CreateImageVulListExportJobAsync(const Model::CreateImageVulListExportJobRequest& request, const CreateImageVulListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageVulListExportJobOutcomeCallable CreateImageVulListExportJobCallable(const Model::CreateImageVulListExportJobRequest& request);

                /**
                 *创建镜像漏洞概览列表导出任务
                 * @param req CreateImageVulSummaryListExportJobRequest
                 * @return CreateImageVulSummaryListExportJobOutcome
                 */
                CreateImageVulSummaryListExportJobOutcome CreateImageVulSummaryListExportJob(const Model::CreateImageVulSummaryListExportJobRequest &request);
                void CreateImageVulSummaryListExportJobAsync(const Model::CreateImageVulSummaryListExportJobRequest& request, const CreateImageVulSummaryListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageVulSummaryListExportJobOutcomeCallable CreateImageVulSummaryListExportJobCallable(const Model::CreateImageVulSummaryListExportJobRequest& request);

                /**
                 *创建容器镜像漏洞白名单
                 * @param req CreateImageVulWhitelistRequest
                 * @return CreateImageVulWhitelistOutcome
                 */
                CreateImageVulWhitelistOutcome CreateImageVulWhitelist(const Model::CreateImageVulWhitelistRequest &request);
                void CreateImageVulWhitelistAsync(const Model::CreateImageVulWhitelistRequest& request, const CreateImageVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageVulWhitelistOutcomeCallable CreateImageVulWhitelistCallable(const Model::CreateImageVulWhitelistRequest& request);

                /**
                 *创建Pod关联容器列表导出任务。导出字段包含容器ID、容器名称、运行状态、节点ID、节点类型、镜像ID、镜像名称、隔离状态。支持Filter过滤。导出通过异步任务实现，返回JobId后前端轮询查询导出任务状态。
                 * @param req CreatePodContainerListExportJobRequest
                 * @return CreatePodContainerListExportJobOutcome
                 */
                CreatePodContainerListExportJobOutcome CreatePodContainerListExportJob(const Model::CreatePodContainerListExportJobRequest &request);
                void CreatePodContainerListExportJobAsync(const Model::CreatePodContainerListExportJobRequest& request, const CreatePodContainerListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePodContainerListExportJobOutcomeCallable CreatePodContainerListExportJobCallable(const Model::CreatePodContainerListExportJobRequest& request);

                /**
                 *创建Pod关联服务列表导出任务。导出字段包含服务名称、类型、Selector、命名空间、创建时间。支持Filter过滤。当传入PodUniqueID时，复用DescribeClusterServiceList的Pod关联匹配逻辑。导出通过异步任务实现，返回JobId后前端轮询查询导出任务状态。
                 * @param req CreatePodServiceListExportJobRequest
                 * @return CreatePodServiceListExportJobOutcome
                 */
                CreatePodServiceListExportJobOutcome CreatePodServiceListExportJob(const Model::CreatePodServiceListExportJobRequest &request);
                void CreatePodServiceListExportJobAsync(const Model::CreatePodServiceListExportJobRequest& request, const CreatePodServiceListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePodServiceListExportJobOutcomeCallable CreatePodServiceListExportJobCallable(const Model::CreatePodServiceListExportJobRequest& request);

                /**
                 *创建公网资产导出任务
                 * @param req CreatePublicAssetsExportJobRequest
                 * @return CreatePublicAssetsExportJobOutcome
                 */
                CreatePublicAssetsExportJobOutcome CreatePublicAssetsExportJob(const Model::CreatePublicAssetsExportJobRequest &request);
                void CreatePublicAssetsExportJobAsync(const Model::CreatePublicAssetsExportJobRequest& request, const CreatePublicAssetsExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePublicAssetsExportJobOutcomeCallable CreatePublicAssetsExportJobCallable(const Model::CreatePublicAssetsExportJobRequest& request);

                /**
                 *创建风险中心扫描任务
                 * @param req CreateRiskCenterScanTaskRequest
                 * @return CreateRiskCenterScanTaskOutcome
                 */
                CreateRiskCenterScanTaskOutcome CreateRiskCenterScanTask(const Model::CreateRiskCenterScanTaskRequest &request);
                void CreateRiskCenterScanTaskAsync(const Model::CreateRiskCenterScanTaskRequest& request, const CreateRiskCenterScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRiskCenterScanTaskOutcomeCallable CreateRiskCenterScanTaskCallable(const Model::CreateRiskCenterScanTaskRequest& request);

                /**
                 *创建云资源配置检查风险详情导出任务示例
                 * @param req CreateRiskDetailExportJobRequest
                 * @return CreateRiskDetailExportJobOutcome
                 */
                CreateRiskDetailExportJobOutcome CreateRiskDetailExportJob(const Model::CreateRiskDetailExportJobRequest &request);
                void CreateRiskDetailExportJobAsync(const Model::CreateRiskDetailExportJobRequest& request, const CreateRiskDetailExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRiskDetailExportJobOutcomeCallable CreateRiskDetailExportJobCallable(const Model::CreateRiskDetailExportJobRequest& request);

                /**
                 *暴露面扫描结果导出任务
                 * @param req CreateScanStatisticExportJobRequest
                 * @return CreateScanStatisticExportJobOutcome
                 */
                CreateScanStatisticExportJobOutcome CreateScanStatisticExportJob(const Model::CreateScanStatisticExportJobRequest &request);
                void CreateScanStatisticExportJobAsync(const Model::CreateScanStatisticExportJobRequest& request, const CreateScanStatisticExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScanStatisticExportJobOutcomeCallable CreateScanStatisticExportJobCallable(const Model::CreateScanStatisticExportJobRequest& request);

                /**
                 *创建立即检测任务
                 * @param req CreateScanTaskRequest
                 * @return CreateScanTaskOutcome
                 */
                CreateScanTaskOutcome CreateScanTask(const Model::CreateScanTaskRequest &request);
                void CreateScanTaskAsync(const Model::CreateScanTaskRequest& request, const CreateScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScanTaskOutcomeCallable CreateScanTaskCallable(const Model::CreateScanTaskRequest& request);

                /**
                 *上传 Skill ZIP 文件，触发异步安全检测。上传成功后应使用返回的 ContentHash + EngineVersion 轮询 DescribeSkillScanResult 接口获取结果。上传接口具备幂等性，同一 Hash 的文件重复上传不会创建重复任务。检测结果保留90天，超期后需重新上传检测。
                 * @param req CreateSkillScanRequest
                 * @return CreateSkillScanOutcome
                 */
                CreateSkillScanOutcome CreateSkillScan(const Model::CreateSkillScanRequest &request);
                void CreateSkillScanAsync(const Model::CreateSkillScanRequest& request, const CreateSkillScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSkillScanOutcomeCallable CreateSkillScanCallable(const Model::CreateSkillScanRequest& request);

                /**
                 *对修复失败的漏洞修复任务进行重试，仅针对原任务中修复失败的主机重新下发修复指令。仅当任务状态为部分修复失败或全部修复失败时允许重试。
                 * @param req CreateVulFixRetryTaskRequest
                 * @return CreateVulFixRetryTaskOutcome
                 */
                CreateVulFixRetryTaskOutcome CreateVulFixRetryTask(const Model::CreateVulFixRetryTaskRequest &request);
                void CreateVulFixRetryTaskAsync(const Model::CreateVulFixRetryTaskRequest& request, const CreateVulFixRetryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulFixRetryTaskOutcomeCallable CreateVulFixRetryTaskCallable(const Model::CreateVulFixRetryTaskRequest& request);

                /**
                 *用户手动提交漏洞修复任务，指定需要修复的漏洞和目标主机，系统创建修复任务并下发执行。支持指定修复超时时间、是否创建快照等选项。通过FixItems数组精确控制每个漏洞/KB补丁修复哪些主机。
                 * @param req CreateVulFixTaskRequest
                 * @return CreateVulFixTaskOutcome
                 */
                CreateVulFixTaskOutcome CreateVulFixTask(const Model::CreateVulFixTaskRequest &request);
                void CreateVulFixTaskAsync(const Model::CreateVulFixTaskRequest& request, const CreateVulFixTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulFixTaskOutcomeCallable CreateVulFixTaskCallable(const Model::CreateVulFixTaskRequest& request);

                /**
                 *创建已修复漏洞列表的导出任务。支持与 DescribeVulFixedList 相同的过滤条件，导出通过异步任务实现，返回 JobID 后前端轮询查询导出任务状态。导出字段包含漏洞ID、漏洞名称、漏洞等级、VPR评级、漏洞类型、CVE编号、主机名称、实例ID、关联组件&路径、修复时间。
                 * @param req CreateVulFixedExportJobRequest
                 * @return CreateVulFixedExportJobOutcome
                 */
                CreateVulFixedExportJobOutcome CreateVulFixedExportJob(const Model::CreateVulFixedExportJobRequest &request);
                void CreateVulFixedExportJobAsync(const Model::CreateVulFixedExportJobRequest& request, const CreateVulFixedExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulFixedExportJobOutcomeCallable CreateVulFixedExportJobCallable(const Model::CreateVulFixedExportJobRequest& request);

                /**
                 *创建漏洞重新扫描
                 * @param req CreateVulReScanRequest
                 * @return CreateVulReScanOutcome
                 */
                CreateVulReScanOutcome CreateVulReScan(const Model::CreateVulReScanRequest &request);
                void CreateVulReScanAsync(const Model::CreateVulReScanRequest& request, const CreateVulReScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulReScanOutcomeCallable CreateVulReScanCallable(const Model::CreateVulReScanRequest& request);

                /**
                 *创建漏洞风险导出任务
                 * @param req CreateVulRisksExportJobRequest
                 * @return CreateVulRisksExportJobOutcome
                 */
                CreateVulRisksExportJobOutcome CreateVulRisksExportJob(const Model::CreateVulRisksExportJobRequest &request);
                void CreateVulRisksExportJobAsync(const Model::CreateVulRisksExportJobRequest& request, const CreateVulRisksExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulRisksExportJobOutcomeCallable CreateVulRisksExportJobCallable(const Model::CreateVulRisksExportJobRequest& request);

                /**
                 *创建漏洞扫描（一键扫描）
                 * @param req CreateVulScanManualRequest
                 * @return CreateVulScanManualOutcome
                 */
                CreateVulScanManualOutcome CreateVulScanManual(const Model::CreateVulScanManualRequest &request);
                void CreateVulScanManualAsync(const Model::CreateVulScanManualRequest& request, const CreateVulScanManualAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulScanManualOutcomeCallable CreateVulScanManualCallable(const Model::CreateVulScanManualRequest& request);

                /**
                 *删除AI助手的SMTP邮箱接入信息
                 * @param req DeleteAIAnalysisSMTPAccessRequest
                 * @return DeleteAIAnalysisSMTPAccessOutcome
                 */
                DeleteAIAnalysisSMTPAccessOutcome DeleteAIAnalysisSMTPAccess(const Model::DeleteAIAnalysisSMTPAccessRequest &request);
                void DeleteAIAnalysisSMTPAccessAsync(const Model::DeleteAIAnalysisSMTPAccessRequest& request, const DeleteAIAnalysisSMTPAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIAnalysisSMTPAccessOutcomeCallable DeleteAIAnalysisSMTPAccessCallable(const Model::DeleteAIAnalysisSMTPAccessRequest& request);

                /**
                 *删除AI 定时任务。

根据指定的AI 定时任务 ID 删除对应的定时任务。删除后不可恢复。
                 * @param req DeleteAIScheduleRequest
                 * @return DeleteAIScheduleOutcome
                 */
                DeleteAIScheduleOutcome DeleteAISchedule(const Model::DeleteAIScheduleRequest &request);
                void DeleteAIScheduleAsync(const Model::DeleteAIScheduleRequest& request, const DeleteAIScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIScheduleOutcomeCallable DeleteAIScheduleCallable(const Model::DeleteAIScheduleRequest& request);

                /**
                 *删除用户创建的指定资产搜索视图
                 * @param req DeleteAssetFilterViewRequest
                 * @return DeleteAssetFilterViewOutcome
                 */
                DeleteAssetFilterViewOutcome DeleteAssetFilterView(const Model::DeleteAssetFilterViewRequest &request);
                void DeleteAssetFilterViewAsync(const Model::DeleteAssetFilterViewRequest& request, const DeleteAssetFilterViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAssetFilterViewOutcomeCallable DeleteAssetFilterViewCallable(const Model::DeleteAssetFilterViewRequest& request);

                /**
                 *删除资产标签
                 * @param req DeleteAssetTagRequest
                 * @return DeleteAssetTagOutcome
                 */
                DeleteAssetTagOutcome DeleteAssetTag(const Model::DeleteAssetTagRequest &request);
                void DeleteAssetTagAsync(const Model::DeleteAssetTagRequest& request, const DeleteAssetTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAssetTagOutcomeCallable DeleteAssetTagCallable(const Model::DeleteAssetTagRequest& request);

                /**
                 *批量删除自定义基线策略。仅支持删除 PolicyType=SELF 的策略；删除后历史风险记录保留，但不再产生新结果。
                 * @param req DeleteBaselineSelfDefinedPolicyListRequest
                 * @return DeleteBaselineSelfDefinedPolicyListOutcome
                 */
                DeleteBaselineSelfDefinedPolicyListOutcome DeleteBaselineSelfDefinedPolicyList(const Model::DeleteBaselineSelfDefinedPolicyListRequest &request);
                void DeleteBaselineSelfDefinedPolicyListAsync(const Model::DeleteBaselineSelfDefinedPolicyListRequest& request, const DeleteBaselineSelfDefinedPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBaselineSelfDefinedPolicyListOutcomeCallable DeleteBaselineSelfDefinedPolicyListCallable(const Model::DeleteBaselineSelfDefinedPolicyListRequest& request);

                /**
                 *CSIP 手动扫描任务删除接口
                 * @param req DeleteCSIPMalwareScanTaskRequest
                 * @return DeleteCSIPMalwareScanTaskOutcome
                 */
                DeleteCSIPMalwareScanTaskOutcome DeleteCSIPMalwareScanTask(const Model::DeleteCSIPMalwareScanTaskRequest &request);
                void DeleteCSIPMalwareScanTaskAsync(const Model::DeleteCSIPMalwareScanTaskRequest& request, const DeleteCSIPMalwareScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCSIPMalwareScanTaskOutcomeCallable DeleteCSIPMalwareScanTaskCallable(const Model::DeleteCSIPMalwareScanTaskRequest& request);

                /**
                 *删除集群
                 * @param req DeleteClusterRequest
                 * @return DeleteClusterOutcome
                 */
                DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest &request);
                void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request);

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
                 *删除dspm数据识别分类
                 * @param req DeleteDspmIdentifyCategoryRequest
                 * @return DeleteDspmIdentifyCategoryOutcome
                 */
                DeleteDspmIdentifyCategoryOutcome DeleteDspmIdentifyCategory(const Model::DeleteDspmIdentifyCategoryRequest &request);
                void DeleteDspmIdentifyCategoryAsync(const Model::DeleteDspmIdentifyCategoryRequest& request, const DeleteDspmIdentifyCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmIdentifyCategoryOutcomeCallable DeleteDspmIdentifyCategoryCallable(const Model::DeleteDspmIdentifyCategoryRequest& request);

                /**
                 *删除dspm数据识别模板分类关联
                 * @param req DeleteDspmIdentifyComplianceCategoryRelationRequest
                 * @return DeleteDspmIdentifyComplianceCategoryRelationOutcome
                 */
                DeleteDspmIdentifyComplianceCategoryRelationOutcome DeleteDspmIdentifyComplianceCategoryRelation(const Model::DeleteDspmIdentifyComplianceCategoryRelationRequest &request);
                void DeleteDspmIdentifyComplianceCategoryRelationAsync(const Model::DeleteDspmIdentifyComplianceCategoryRelationRequest& request, const DeleteDspmIdentifyComplianceCategoryRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmIdentifyComplianceCategoryRelationOutcomeCallable DeleteDspmIdentifyComplianceCategoryRelationCallable(const Model::DeleteDspmIdentifyComplianceCategoryRelationRequest& request);

                /**
                 *删除dspm数据识别模板
                 * @param req DeleteDspmIdentifyComplianceGroupRequest
                 * @return DeleteDspmIdentifyComplianceGroupOutcome
                 */
                DeleteDspmIdentifyComplianceGroupOutcome DeleteDspmIdentifyComplianceGroup(const Model::DeleteDspmIdentifyComplianceGroupRequest &request);
                void DeleteDspmIdentifyComplianceGroupAsync(const Model::DeleteDspmIdentifyComplianceGroupRequest& request, const DeleteDspmIdentifyComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmIdentifyComplianceGroupOutcomeCallable DeleteDspmIdentifyComplianceGroupCallable(const Model::DeleteDspmIdentifyComplianceGroupRequest& request);

                /**
                 *删除dspm数据识别模板数据项关联
                 * @param req DeleteDspmIdentifyComplianceRuleRelationRequest
                 * @return DeleteDspmIdentifyComplianceRuleRelationOutcome
                 */
                DeleteDspmIdentifyComplianceRuleRelationOutcome DeleteDspmIdentifyComplianceRuleRelation(const Model::DeleteDspmIdentifyComplianceRuleRelationRequest &request);
                void DeleteDspmIdentifyComplianceRuleRelationAsync(const Model::DeleteDspmIdentifyComplianceRuleRelationRequest& request, const DeleteDspmIdentifyComplianceRuleRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmIdentifyComplianceRuleRelationOutcomeCallable DeleteDspmIdentifyComplianceRuleRelationCallable(const Model::DeleteDspmIdentifyComplianceRuleRelationRequest& request);

                /**
                 *删除dspm数据识别分级组
                 * @param req DeleteDspmIdentifyLevelGroupRequest
                 * @return DeleteDspmIdentifyLevelGroupOutcome
                 */
                DeleteDspmIdentifyLevelGroupOutcome DeleteDspmIdentifyLevelGroup(const Model::DeleteDspmIdentifyLevelGroupRequest &request);
                void DeleteDspmIdentifyLevelGroupAsync(const Model::DeleteDspmIdentifyLevelGroupRequest& request, const DeleteDspmIdentifyLevelGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmIdentifyLevelGroupOutcomeCallable DeleteDspmIdentifyLevelGroupCallable(const Model::DeleteDspmIdentifyLevelGroupRequest& request);

                /**
                 *删除dspm数据识别数据项
                 * @param req DeleteDspmIdentifyRuleRequest
                 * @return DeleteDspmIdentifyRuleOutcome
                 */
                DeleteDspmIdentifyRuleOutcome DeleteDspmIdentifyRule(const Model::DeleteDspmIdentifyRuleRequest &request);
                void DeleteDspmIdentifyRuleAsync(const Model::DeleteDspmIdentifyRuleRequest& request, const DeleteDspmIdentifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmIdentifyRuleOutcomeCallable DeleteDspmIdentifyRuleCallable(const Model::DeleteDspmIdentifyRuleRequest& request);

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
                 *删除EDR策略
                 * @param req DeleteEDRRulesRequest
                 * @return DeleteEDRRulesOutcome
                 */
                DeleteEDRRulesOutcome DeleteEDRRules(const Model::DeleteEDRRulesRequest &request);
                void DeleteEDRRulesAsync(const Model::DeleteEDRRulesRequest& request, const DeleteEDRRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEDRRulesOutcomeCallable DeleteEDRRulesCallable(const Model::DeleteEDRRulesRequest& request);

                /**
                 *删除已终止的扫描任务（物理删除主表及明细表）。只允许删除终态任务，只有创建者可操作。
                 * @param req DeleteEDRScanTaskRequest
                 * @return DeleteEDRScanTaskOutcome
                 */
                DeleteEDRScanTaskOutcome DeleteEDRScanTask(const Model::DeleteEDRScanTaskRequest &request);
                void DeleteEDRScanTaskAsync(const Model::DeleteEDRScanTaskRequest& request, const DeleteEDRScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEDRScanTaskOutcomeCallable DeleteEDRScanTaskCallable(const Model::DeleteEDRScanTaskRequest& request);

                /**
                 *批量删除EDR日志采集路径配置
                 * @param req DeleteEdrLogCollectPathsRequest
                 * @return DeleteEdrLogCollectPathsOutcome
                 */
                DeleteEdrLogCollectPathsOutcome DeleteEdrLogCollectPaths(const Model::DeleteEdrLogCollectPathsRequest &request);
                void DeleteEdrLogCollectPathsAsync(const Model::DeleteEdrLogCollectPathsRequest& request, const DeleteEdrLogCollectPathsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEdrLogCollectPathsOutcomeCallable DeleteEdrLogCollectPathsCallable(const Model::DeleteEdrLogCollectPathsRequest& request);

                /**
                 *云边界自动打标-删除规则
                 * @param req DeleteExposureAutoTagRuleRequest
                 * @return DeleteExposureAutoTagRuleOutcome
                 */
                DeleteExposureAutoTagRuleOutcome DeleteExposureAutoTagRule(const Model::DeleteExposureAutoTagRuleRequest &request);
                void DeleteExposureAutoTagRuleAsync(const Model::DeleteExposureAutoTagRuleRequest& request, const DeleteExposureAutoTagRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteExposureAutoTagRuleOutcomeCallable DeleteExposureAutoTagRuleCallable(const Model::DeleteExposureAutoTagRuleRequest& request);

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
                 *删除镜像仓库信息
                 * @param req DeleteImageRegistryRequest
                 * @return DeleteImageRegistryOutcome
                 */
                DeleteImageRegistryOutcome DeleteImageRegistry(const Model::DeleteImageRegistryRequest &request);
                void DeleteImageRegistryAsync(const Model::DeleteImageRegistryRequest& request, const DeleteImageRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageRegistryOutcomeCallable DeleteImageRegistryCallable(const Model::DeleteImageRegistryRequest& request);

                /**
                 *删除镜像仓库扫描任务
                 * @param req DeleteImageRegistryScanTaskRequest
                 * @return DeleteImageRegistryScanTaskOutcome
                 */
                DeleteImageRegistryScanTaskOutcome DeleteImageRegistryScanTask(const Model::DeleteImageRegistryScanTaskRequest &request);
                void DeleteImageRegistryScanTaskAsync(const Model::DeleteImageRegistryScanTaskRequest& request, const DeleteImageRegistryScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageRegistryScanTaskOutcomeCallable DeleteImageRegistryScanTaskCallable(const Model::DeleteImageRegistryScanTaskRequest& request);

                /**
                 *删除镜像仓库定时扫描任务配置
                 * @param req DeleteImageRegistryTimedScanTaskConfigRequest
                 * @return DeleteImageRegistryTimedScanTaskConfigOutcome
                 */
                DeleteImageRegistryTimedScanTaskConfigOutcome DeleteImageRegistryTimedScanTaskConfig(const Model::DeleteImageRegistryTimedScanTaskConfigRequest &request);
                void DeleteImageRegistryTimedScanTaskConfigAsync(const Model::DeleteImageRegistryTimedScanTaskConfigRequest& request, const DeleteImageRegistryTimedScanTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageRegistryTimedScanTaskConfigOutcomeCallable DeleteImageRegistryTimedScanTaskConfigCallable(const Model::DeleteImageRegistryTimedScanTaskConfigRequest& request);

                /**
                 *删除容器镜像敏感信息白名单
                 * @param req DeleteImageSensitiveWhitelistRequest
                 * @return DeleteImageSensitiveWhitelistOutcome
                 */
                DeleteImageSensitiveWhitelistOutcome DeleteImageSensitiveWhitelist(const Model::DeleteImageSensitiveWhitelistRequest &request);
                void DeleteImageSensitiveWhitelistAsync(const Model::DeleteImageSensitiveWhitelistRequest& request, const DeleteImageSensitiveWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageSensitiveWhitelistOutcomeCallable DeleteImageSensitiveWhitelistCallable(const Model::DeleteImageSensitiveWhitelistRequest& request);

                /**
                 *删除镜像木马白名单
                 * @param req DeleteImageVirusWhitelistRequest
                 * @return DeleteImageVirusWhitelistOutcome
                 */
                DeleteImageVirusWhitelistOutcome DeleteImageVirusWhitelist(const Model::DeleteImageVirusWhitelistRequest &request);
                void DeleteImageVirusWhitelistAsync(const Model::DeleteImageVirusWhitelistRequest& request, const DeleteImageVirusWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageVirusWhitelistOutcomeCallable DeleteImageVirusWhitelistCallable(const Model::DeleteImageVirusWhitelistRequest& request);

                /**
                 *删除容器镜像漏洞白名单
                 * @param req DeleteImageVulWhitelistRequest
                 * @return DeleteImageVulWhitelistOutcome
                 */
                DeleteImageVulWhitelistOutcome DeleteImageVulWhitelist(const Model::DeleteImageVulWhitelistRequest &request);
                void DeleteImageVulWhitelistAsync(const Model::DeleteImageVulWhitelistRequest& request, const DeleteImageVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageVulWhitelistOutcomeCallable DeleteImageVulWhitelistCallable(const Model::DeleteImageVulWhitelistRequest& request);

                /**
                 *本接口用于删除异地登录白名单规则。
                 * @param req DeleteLoginWhiteListRequest
                 * @return DeleteLoginWhiteListOutcome
                 */
                DeleteLoginWhiteListOutcome DeleteLoginWhiteList(const Model::DeleteLoginWhiteListRequest &request);
                void DeleteLoginWhiteListAsync(const Model::DeleteLoginWhiteListRequest& request, const DeleteLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoginWhiteListOutcomeCallable DeleteLoginWhiteListCallable(const Model::DeleteLoginWhiteListRequest& request);

                /**
                 *删除机器清理记录
                 * @param req DeleteMachineClearHistoryRequest
                 * @return DeleteMachineClearHistoryOutcome
                 */
                DeleteMachineClearHistoryOutcome DeleteMachineClearHistory(const Model::DeleteMachineClearHistoryRequest &request);
                void DeleteMachineClearHistoryAsync(const Model::DeleteMachineClearHistoryRequest& request, const DeleteMachineClearHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineClearHistoryOutcomeCallable DeleteMachineClearHistoryCallable(const Model::DeleteMachineClearHistoryRequest& request);

                /**
                 *删除风险中心扫描任务
                 * @param req DeleteRiskScanTaskRequest
                 * @return DeleteRiskScanTaskOutcome
                 */
                DeleteRiskScanTaskOutcome DeleteRiskScanTask(const Model::DeleteRiskScanTaskRequest &request);
                void DeleteRiskScanTaskAsync(const Model::DeleteRiskScanTaskRequest& request, const DeleteRiskScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRiskScanTaskOutcomeCallable DeleteRiskScanTaskCallable(const Model::DeleteRiskScanTaskRequest& request);

                /**
                 *批量删除 LLM 审计用户规则。任一 ID 不存在或属于其他租户时整体返回错误
                 * @param req DeleteSandboxLLMAuditRuleRequest
                 * @return DeleteSandboxLLMAuditRuleOutcome
                 */
                DeleteSandboxLLMAuditRuleOutcome DeleteSandboxLLMAuditRule(const Model::DeleteSandboxLLMAuditRuleRequest &request);
                void DeleteSandboxLLMAuditRuleAsync(const Model::DeleteSandboxLLMAuditRuleRequest& request, const DeleteSandboxLLMAuditRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSandboxLLMAuditRuleOutcomeCallable DeleteSandboxLLMAuditRuleCallable(const Model::DeleteSandboxLLMAuditRuleRequest& request);

                /**
                 *删除漏洞白名单
                 * @param req DeleteVulWhitelistRequest
                 * @return DeleteVulWhitelistOutcome
                 */
                DeleteVulWhitelistOutcome DeleteVulWhitelist(const Model::DeleteVulWhitelistRequest &request);
                void DeleteVulWhitelistAsync(const Model::DeleteVulWhitelistRequest& request, const DeleteVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVulWhitelistOutcomeCallable DeleteVulWhitelistCallable(const Model::DeleteVulWhitelistRequest& request);

                /**
                 *批量删除通知策略。
                 * @param req DeleteWebhookPoliciesRequest
                 * @return DeleteWebhookPoliciesOutcome
                 */
                DeleteWebhookPoliciesOutcome DeleteWebhookPolicies(const Model::DeleteWebhookPoliciesRequest &request);
                void DeleteWebhookPoliciesAsync(const Model::DeleteWebhookPoliciesRequest& request, const DeleteWebhookPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebhookPoliciesOutcomeCallable DeleteWebhookPoliciesCallable(const Model::DeleteWebhookPoliciesRequest& request);

                /**
                 *批量删除接收机器人。删除前会自动从所有引用了这些机器人的策略中移除引用关系。
                 * @param req DeleteWebhookReceiversRequest
                 * @return DeleteWebhookReceiversOutcome
                 */
                DeleteWebhookReceiversOutcome DeleteWebhookReceivers(const Model::DeleteWebhookReceiversRequest &request);
                void DeleteWebhookReceiversAsync(const Model::DeleteWebhookReceiversRequest& request, const DeleteWebhookReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebhookReceiversOutcomeCallable DeleteWebhookReceiversCallable(const Model::DeleteWebhookReceiversRequest& request);

                /**
                 *获取 AI agent 资产列表
                 * @param req DescribeAIAgentAssetListRequest
                 * @return DescribeAIAgentAssetListOutcome
                 */
                DescribeAIAgentAssetListOutcome DescribeAIAgentAssetList(const Model::DescribeAIAgentAssetListRequest &request);
                void DescribeAIAgentAssetListAsync(const Model::DescribeAIAgentAssetListRequest& request, const DescribeAIAgentAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAgentAssetListOutcomeCallable DescribeAIAgentAssetListCallable(const Model::DescribeAIAgentAssetListRequest& request);

                /**
                 *获取 AIAgent 资产凭据扫描列表
                 * @param req DescribeAIAgentCredentialListRequest
                 * @return DescribeAIAgentCredentialListOutcome
                 */
                DescribeAIAgentCredentialListOutcome DescribeAIAgentCredentialList(const Model::DescribeAIAgentCredentialListRequest &request);
                void DescribeAIAgentCredentialListAsync(const Model::DescribeAIAgentCredentialListRequest& request, const DescribeAIAgentCredentialListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAgentCredentialListOutcomeCallable DescribeAIAgentCredentialListCallable(const Model::DescribeAIAgentCredentialListRequest& request);

                /**
                 *按凭据组行 ID 分页查询单个凭据的泄露位置列表。用于配合 DescribeAIAgentCredentialList 接口拆分后的展开场景，避免单接口在数据倾斜场景下一次拉取几十万行 location 导致性能问题。
                 * @param req DescribeAIAgentCredentialLocationListRequest
                 * @return DescribeAIAgentCredentialLocationListOutcome
                 */
                DescribeAIAgentCredentialLocationListOutcome DescribeAIAgentCredentialLocationList(const Model::DescribeAIAgentCredentialLocationListRequest &request);
                void DescribeAIAgentCredentialLocationListAsync(const Model::DescribeAIAgentCredentialLocationListRequest& request, const DescribeAIAgentCredentialLocationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAgentCredentialLocationListOutcomeCallable DescribeAIAgentCredentialLocationListCallable(const Model::DescribeAIAgentCredentialLocationListRequest& request);

                /**
                 *获取 AI Agent skill 列表
                 * @param req DescribeAIAgentSkillListRequest
                 * @return DescribeAIAgentSkillListOutcome
                 */
                DescribeAIAgentSkillListOutcome DescribeAIAgentSkillList(const Model::DescribeAIAgentSkillListRequest &request);
                void DescribeAIAgentSkillListAsync(const Model::DescribeAIAgentSkillListRequest& request, const DescribeAIAgentSkillListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAgentSkillListOutcomeCallable DescribeAIAgentSkillListCallable(const Model::DescribeAIAgentSkillListRequest& request);

                /**
                 *获取 AI 分析文件的临时下载链接。

传入文件的原始地址，返回带签名的临时下载链接，链接有效期为 2 小时。
                 * @param req DescribeAIAnalysisFileDownloadURLRequest
                 * @return DescribeAIAnalysisFileDownloadURLOutcome
                 */
                DescribeAIAnalysisFileDownloadURLOutcome DescribeAIAnalysisFileDownloadURL(const Model::DescribeAIAnalysisFileDownloadURLRequest &request);
                void DescribeAIAnalysisFileDownloadURLAsync(const Model::DescribeAIAnalysisFileDownloadURLRequest& request, const DescribeAIAnalysisFileDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisFileDownloadURLOutcomeCallable DescribeAIAnalysisFileDownloadURLCallable(const Model::DescribeAIAnalysisFileDownloadURLRequest& request);

                /**
                 *获取云安全AI助手历史分析记录
                 * @param req DescribeAIAnalysisHistoryRequest
                 * @return DescribeAIAnalysisHistoryOutcome
                 */
                DescribeAIAnalysisHistoryOutcome DescribeAIAnalysisHistory(const Model::DescribeAIAnalysisHistoryRequest &request);
                void DescribeAIAnalysisHistoryAsync(const Model::DescribeAIAnalysisHistoryRequest& request, const DescribeAIAnalysisHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisHistoryOutcomeCallable DescribeAIAnalysisHistoryCallable(const Model::DescribeAIAnalysisHistoryRequest& request);

                /**
                 *获取AI问答推荐问题
                 * @param req DescribeAIAnalysisRecommendQuestionsRequest
                 * @return DescribeAIAnalysisRecommendQuestionsOutcome
                 */
                DescribeAIAnalysisRecommendQuestionsOutcome DescribeAIAnalysisRecommendQuestions(const Model::DescribeAIAnalysisRecommendQuestionsRequest &request);
                void DescribeAIAnalysisRecommendQuestionsAsync(const Model::DescribeAIAnalysisRecommendQuestionsRequest& request, const DescribeAIAnalysisRecommendQuestionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisRecommendQuestionsOutcomeCallable DescribeAIAnalysisRecommendQuestionsCallable(const Model::DescribeAIAnalysisRecommendQuestionsRequest& request);

                /**
                 *获取云安全AI助手基础信息
                 * @param req DescribeAIAnalysisRobotInfoRequest
                 * @return DescribeAIAnalysisRobotInfoOutcome
                 */
                DescribeAIAnalysisRobotInfoOutcome DescribeAIAnalysisRobotInfo(const Model::DescribeAIAnalysisRobotInfoRequest &request);
                void DescribeAIAnalysisRobotInfoAsync(const Model::DescribeAIAnalysisRobotInfoRequest& request, const DescribeAIAnalysisRobotInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisRobotInfoOutcomeCallable DescribeAIAnalysisRobotInfoCallable(const Model::DescribeAIAnalysisRobotInfoRequest& request);

                /**
                 *查询AI助手的SMTP邮箱接入信息
                 * @param req DescribeAIAnalysisSMTPRequest
                 * @return DescribeAIAnalysisSMTPOutcome
                 */
                DescribeAIAnalysisSMTPOutcome DescribeAIAnalysisSMTP(const Model::DescribeAIAnalysisSMTPRequest &request);
                void DescribeAIAnalysisSMTPAsync(const Model::DescribeAIAnalysisSMTPRequest& request, const DescribeAIAnalysisSMTPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisSMTPOutcomeCallable DescribeAIAnalysisSMTPCallable(const Model::DescribeAIAnalysisSMTPRequest& request);

                /**
                 *查询AI-Link智链引擎配置
                 * @param req DescribeAILinkSettingRequest
                 * @return DescribeAILinkSettingOutcome
                 */
                DescribeAILinkSettingOutcome DescribeAILinkSetting(const Model::DescribeAILinkSettingRequest &request);
                void DescribeAILinkSettingAsync(const Model::DescribeAILinkSettingRequest& request, const DescribeAILinkSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAILinkSettingOutcomeCallable DescribeAILinkSettingCallable(const Model::DescribeAILinkSettingRequest& request);

                /**
                 *查询AI 定时任务列表。

支持分页查询和状态过滤，返回定时任务列表及总条数。
                 * @param req DescribeAIScheduleListRequest
                 * @return DescribeAIScheduleListOutcome
                 */
                DescribeAIScheduleListOutcome DescribeAIScheduleList(const Model::DescribeAIScheduleListRequest &request);
                void DescribeAIScheduleListAsync(const Model::DescribeAIScheduleListRequest& request, const DescribeAIScheduleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIScheduleListOutcomeCallable DescribeAIScheduleListCallable(const Model::DescribeAIScheduleListRequest& request);

                /**
                 *查询AI 定时任务触发计划。

查询指定AI 定时任务在给定时间窗口内的未来触发计划列表。
                 * @param req DescribeAISchedulePlanListRequest
                 * @return DescribeAISchedulePlanListOutcome
                 */
                DescribeAISchedulePlanListOutcome DescribeAISchedulePlanList(const Model::DescribeAISchedulePlanListRequest &request);
                void DescribeAISchedulePlanListAsync(const Model::DescribeAISchedulePlanListRequest& request, const DescribeAISchedulePlanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAISchedulePlanListOutcomeCallable DescribeAISchedulePlanListCallable(const Model::DescribeAISchedulePlanListRequest& request);

                /**
                 *查询AI 定时任务统计信息。

返回当前用户的定时任务总数和当前运行中的任务数量。
                 * @param req DescribeAIScheduleStatsRequest
                 * @return DescribeAIScheduleStatsOutcome
                 */
                DescribeAIScheduleStatsOutcome DescribeAIScheduleStats(const Model::DescribeAIScheduleStatsRequest &request);
                void DescribeAIScheduleStatsAsync(const Model::DescribeAIScheduleStatsRequest& request, const DescribeAIScheduleStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIScheduleStatsOutcomeCallable DescribeAIScheduleStatsCallable(const Model::DescribeAIScheduleStatsRequest& request);

                /**
                 *查询AI 定时任务执行详情。

根据任务 ID 查询指定执行任务的详细信息，包括执行状态、结果等。
                 * @param req DescribeAIScheduleTaskDetailRequest
                 * @return DescribeAIScheduleTaskDetailOutcome
                 */
                DescribeAIScheduleTaskDetailOutcome DescribeAIScheduleTaskDetail(const Model::DescribeAIScheduleTaskDetailRequest &request);
                void DescribeAIScheduleTaskDetailAsync(const Model::DescribeAIScheduleTaskDetailRequest& request, const DescribeAIScheduleTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIScheduleTaskDetailOutcomeCallable DescribeAIScheduleTaskDetailCallable(const Model::DescribeAIScheduleTaskDetailRequest& request);

                /**
                 *查询AI 定时任务执行列表。

查询AI 定时任务的历史执行记录，支持分页和按定时任务 ID 过滤。
                 * @param req DescribeAIScheduleTaskListRequest
                 * @return DescribeAIScheduleTaskListOutcome
                 */
                DescribeAIScheduleTaskListOutcome DescribeAIScheduleTaskList(const Model::DescribeAIScheduleTaskListRequest &request);
                void DescribeAIScheduleTaskListAsync(const Model::DescribeAIScheduleTaskListRequest& request, const DescribeAIScheduleTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIScheduleTaskListOutcomeCallable DescribeAIScheduleTaskListCallable(const Model::DescribeAIScheduleTaskListRequest& request);

                /**
                 *访问密钥告警记录AI分析结果详情
                 * @param req DescribeAKAnalysisDetailRequest
                 * @return DescribeAKAnalysisDetailOutcome
                 */
                DescribeAKAnalysisDetailOutcome DescribeAKAnalysisDetail(const Model::DescribeAKAnalysisDetailRequest &request);
                void DescribeAKAnalysisDetailAsync(const Model::DescribeAKAnalysisDetailRequest& request, const DescribeAKAnalysisDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAKAnalysisDetailOutcomeCallable DescribeAKAnalysisDetailCallable(const Model::DescribeAKAnalysisDetailRequest& request);

                /**
                 *判断用户是否灰度用户
                 * @param req DescribeAbTestUserRequest
                 * @return DescribeAbTestUserOutcome
                 */
                DescribeAbTestUserOutcome DescribeAbTestUser(const Model::DescribeAbTestUserRequest &request);
                void DescribeAbTestUserAsync(const Model::DescribeAbTestUserRequest& request, const DescribeAbTestUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbTestUserOutcomeCallable DescribeAbTestUserCallable(const Model::DescribeAbTestUserRequest& request);

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
                 *查询客户端配置设置（配置组），从DescribeAgentRunMode拆分出的独立接口
                 * @param req DescribeAgentConfigSettingRequest
                 * @return DescribeAgentConfigSettingOutcome
                 */
                DescribeAgentConfigSettingOutcome DescribeAgentConfigSetting(const Model::DescribeAgentConfigSettingRequest &request);
                void DescribeAgentConfigSettingAsync(const Model::DescribeAgentConfigSettingRequest& request, const DescribeAgentConfigSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentConfigSettingOutcomeCallable DescribeAgentConfigSettingCallable(const Model::DescribeAgentConfigSettingRequest& request);

                /**
                 *获取客户端运行模式和运行配置信息
                 * @param req DescribeAgentRunModeRequest
                 * @return DescribeAgentRunModeOutcome
                 */
                DescribeAgentRunModeOutcome DescribeAgentRunMode(const Model::DescribeAgentRunModeRequest &request);
                void DescribeAgentRunModeAsync(const Model::DescribeAgentRunModeRequest& request, const DescribeAgentRunModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentRunModeOutcomeCallable DescribeAgentRunModeCallable(const Model::DescribeAgentRunModeRequest& request);

                /**
                 *查询客户端运行策略（策略组），从DescribeAgentRunMode拆分出的独立接口
                 * @param req DescribeAgentRunPolicyRequest
                 * @return DescribeAgentRunPolicyOutcome
                 */
                DescribeAgentRunPolicyOutcome DescribeAgentRunPolicy(const Model::DescribeAgentRunPolicyRequest &request);
                void DescribeAgentRunPolicyAsync(const Model::DescribeAgentRunPolicyRequest& request, const DescribeAgentRunPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentRunPolicyOutcomeCallable DescribeAgentRunPolicyCallable(const Model::DescribeAgentRunPolicyRequest& request);

                /**
                 *告警中心全量告警列表接口
                 * @param req DescribeAlertListRequest
                 * @return DescribeAlertListOutcome
                 */
                DescribeAlertListOutcome DescribeAlertList(const Model::DescribeAlertListRequest &request);
                void DescribeAlertListAsync(const Model::DescribeAlertListRequest& request, const DescribeAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlertListOutcomeCallable DescribeAlertListCallable(const Model::DescribeAlertListRequest& request);

                /**
                 *查询资产中组件列表
                 * @param req DescribeAssetComponentListRequest
                 * @return DescribeAssetComponentListOutcome
                 */
                DescribeAssetComponentListOutcome DescribeAssetComponentList(const Model::DescribeAssetComponentListRequest &request);
                void DescribeAssetComponentListAsync(const Model::DescribeAssetComponentListRequest& request, const DescribeAssetComponentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetComponentListOutcomeCallable DescribeAssetComponentListCallable(const Model::DescribeAssetComponentListRequest& request);

                /**
                 *查询镜像仓库组件关联的镜像列表
                 * @param req DescribeAssetComponentRelatedImageListRequest
                 * @return DescribeAssetComponentRelatedImageListOutcome
                 */
                DescribeAssetComponentRelatedImageListOutcome DescribeAssetComponentRelatedImageList(const Model::DescribeAssetComponentRelatedImageListRequest &request);
                void DescribeAssetComponentRelatedImageListAsync(const Model::DescribeAssetComponentRelatedImageListRequest& request, const DescribeAssetComponentRelatedImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetComponentRelatedImageListOutcomeCallable DescribeAssetComponentRelatedImageListCallable(const Model::DescribeAssetComponentRelatedImageListRequest& request);

                /**
                 *资产详情信息
                 * @param req DescribeAssetDetailRequest
                 * @return DescribeAssetDetailOutcome
                 */
                DescribeAssetDetailOutcome DescribeAssetDetail(const Model::DescribeAssetDetailRequest &request);
                void DescribeAssetDetailAsync(const Model::DescribeAssetDetailRequest& request, const DescribeAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetDetailOutcomeCallable DescribeAssetDetailCallable(const Model::DescribeAssetDetailRequest& request);

                /**
                 *资产搜索视图
                 * @param req DescribeAssetFilterViewsRequest
                 * @return DescribeAssetFilterViewsOutcome
                 */
                DescribeAssetFilterViewsOutcome DescribeAssetFilterViews(const Model::DescribeAssetFilterViewsRequest &request);
                void DescribeAssetFilterViewsAsync(const Model::DescribeAssetFilterViewsRequest& request, const DescribeAssetFilterViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetFilterViewsOutcomeCallable DescribeAssetFilterViewsCallable(const Model::DescribeAssetFilterViewsRequest& request);

                /**
                 *资产信息
                 * @param req DescribeAssetInfoRequest
                 * @return DescribeAssetInfoOutcome
                 */
                DescribeAssetInfoOutcome DescribeAssetInfo(const Model::DescribeAssetInfoRequest &request);
                void DescribeAssetInfoAsync(const Model::DescribeAssetInfoRequest& request, const DescribeAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetInfoOutcomeCallable DescribeAssetInfoCallable(const Model::DescribeAssetInfoRequest& request);

                /**
                 *资产最近同步时间
                 * @param req DescribeAssetLastSyncTimeRequest
                 * @return DescribeAssetLastSyncTimeOutcome
                 */
                DescribeAssetLastSyncTimeOutcome DescribeAssetLastSyncTime(const Model::DescribeAssetLastSyncTimeRequest &request);
                void DescribeAssetLastSyncTimeAsync(const Model::DescribeAssetLastSyncTimeRequest& request, const DescribeAssetLastSyncTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetLastSyncTimeOutcomeCallable DescribeAssetLastSyncTimeCallable(const Model::DescribeAssetLastSyncTimeRequest& request);

                /**
                 *资产概览统计
                 * @param req DescribeAssetOverviewRequest
                 * @return DescribeAssetOverviewOutcome
                 */
                DescribeAssetOverviewOutcome DescribeAssetOverview(const Model::DescribeAssetOverviewRequest &request);
                void DescribeAssetOverviewAsync(const Model::DescribeAssetOverviewRequest& request, const DescribeAssetOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetOverviewOutcomeCallable DescribeAssetOverviewCallable(const Model::DescribeAssetOverviewRequest& request);

                /**
                 *查询云边界分析-暴露路径下主机节点的进程列表
                 * @param req DescribeAssetProcessListRequest
                 * @return DescribeAssetProcessListOutcome
                 */
                DescribeAssetProcessListOutcome DescribeAssetProcessList(const Model::DescribeAssetProcessListRequest &request);
                void DescribeAssetProcessListAsync(const Model::DescribeAssetProcessListRequest& request, const DescribeAssetProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetProcessListOutcomeCallable DescribeAssetProcessListCallable(const Model::DescribeAssetProcessListRequest& request);

                /**
                 *资产风险详情
                 * @param req DescribeAssetRiskDetailRequest
                 * @return DescribeAssetRiskDetailOutcome
                 */
                DescribeAssetRiskDetailOutcome DescribeAssetRiskDetail(const Model::DescribeAssetRiskDetailRequest &request);
                void DescribeAssetRiskDetailAsync(const Model::DescribeAssetRiskDetailRequest& request, const DescribeAssetRiskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetRiskDetailOutcomeCallable DescribeAssetRiskDetailCallable(const Model::DescribeAssetRiskDetailRequest& request);

                /**
                 *资产视角下云资源配置风险列表
                 * @param req DescribeAssetRiskListRequest
                 * @return DescribeAssetRiskListOutcome
                 */
                DescribeAssetRiskListOutcome DescribeAssetRiskList(const Model::DescribeAssetRiskListRequest &request);
                void DescribeAssetRiskListAsync(const Model::DescribeAssetRiskListRequest& request, const DescribeAssetRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetRiskListOutcomeCallable DescribeAssetRiskListCallable(const Model::DescribeAssetRiskListRequest& request);

                /**
                 *资产同步任务状态
                 * @param req DescribeAssetSyncTaskStatusRequest
                 * @return DescribeAssetSyncTaskStatusOutcome
                 */
                DescribeAssetSyncTaskStatusOutcome DescribeAssetSyncTaskStatus(const Model::DescribeAssetSyncTaskStatusRequest &request);
                void DescribeAssetSyncTaskStatusAsync(const Model::DescribeAssetSyncTaskStatusRequest& request, const DescribeAssetSyncTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetSyncTaskStatusOutcomeCallable DescribeAssetSyncTaskStatusCallable(const Model::DescribeAssetSyncTaskStatusRequest& request);

                /**
                 *获取资产标签属性
                 * @param req DescribeAssetTagAttributesRequest
                 * @return DescribeAssetTagAttributesOutcome
                 */
                DescribeAssetTagAttributesOutcome DescribeAssetTagAttributes(const Model::DescribeAssetTagAttributesRequest &request);
                void DescribeAssetTagAttributesAsync(const Model::DescribeAssetTagAttributesRequest& request, const DescribeAssetTagAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetTagAttributesOutcomeCallable DescribeAssetTagAttributesCallable(const Model::DescribeAssetTagAttributesRequest& request);

                /**
                 *资产标签树结构数据
                 * @param req DescribeAssetTagTreeRequest
                 * @return DescribeAssetTagTreeOutcome
                 */
                DescribeAssetTagTreeOutcome DescribeAssetTagTree(const Model::DescribeAssetTagTreeRequest &request);
                void DescribeAssetTagTreeAsync(const Model::DescribeAssetTagTreeRequest& request, const DescribeAssetTagTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetTagTreeOutcomeCallable DescribeAssetTagTreeCallable(const Model::DescribeAssetTagTreeRequest& request);

                /**
                 *全部资产
                 * @param req DescribeAssetTagsRequest
                 * @return DescribeAssetTagsOutcome
                 */
                DescribeAssetTagsOutcome DescribeAssetTags(const Model::DescribeAssetTagsRequest &request);
                void DescribeAssetTagsAsync(const Model::DescribeAssetTagsRequest& request, const DescribeAssetTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetTagsOutcomeCallable DescribeAssetTagsCallable(const Model::DescribeAssetTagsRequest& request);

                /**
                 *资产树结构
                 * @param req DescribeAssetTreeRequest
                 * @return DescribeAssetTreeOutcome
                 */
                DescribeAssetTreeOutcome DescribeAssetTree(const Model::DescribeAssetTreeRequest &request);
                void DescribeAssetTreeAsync(const Model::DescribeAssetTreeRequest& request, const DescribeAssetTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetTreeOutcomeCallable DescribeAssetTreeCallable(const Model::DescribeAssetTreeRequest& request);

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
                 *查询后台扫描引擎地域列表
                 * @param req DescribeBackendScanEngineRegionListRequest
                 * @return DescribeBackendScanEngineRegionListOutcome
                 */
                DescribeBackendScanEngineRegionListOutcome DescribeBackendScanEngineRegionList(const Model::DescribeBackendScanEngineRegionListRequest &request);
                void DescribeBackendScanEngineRegionListAsync(const Model::DescribeBackendScanEngineRegionListRequest& request, const DescribeBackendScanEngineRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackendScanEngineRegionListOutcomeCallable DescribeBackendScanEngineRegionListCallable(const Model::DescribeBackendScanEngineRegionListRequest& request);

                /**
                 *获取爆破阻断模式
                 * @param req DescribeBanModeRequest
                 * @return DescribeBanModeOutcome
                 */
                DescribeBanModeOutcome DescribeBanMode(const Model::DescribeBanModeRequest &request);
                void DescribeBanModeAsync(const Model::DescribeBanModeRequest& request, const DescribeBanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBanModeOutcomeCallable DescribeBanModeCallable(const Model::DescribeBanModeRequest& request);

                /**
                 *获取阻断按钮状态
                 * @param req DescribeBanStatusRequest
                 * @return DescribeBanStatusOutcome
                 */
                DescribeBanStatusOutcome DescribeBanStatus(const Model::DescribeBanStatusRequest &request);
                void DescribeBanStatusAsync(const Model::DescribeBanStatusRequest& request, const DescribeBanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBanStatusOutcomeCallable DescribeBanStatusCallable(const Model::DescribeBanStatusRequest& request);

                /**
                 *获取检测项维度的聚合扫描结果列表，用于策略详情页“检测项”Tab 按检测项展示通过/未通过资产数。
                 * @param req DescribeBaselineAggregatedItemListRequest
                 * @return DescribeBaselineAggregatedItemListOutcome
                 */
                DescribeBaselineAggregatedItemListOutcome DescribeBaselineAggregatedItemList(const Model::DescribeBaselineAggregatedItemListRequest &request);
                void DescribeBaselineAggregatedItemListAsync(const Model::DescribeBaselineAggregatedItemListRequest& request, const DescribeBaselineAggregatedItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineAggregatedItemListOutcomeCallable DescribeBaselineAggregatedItemListCallable(const Model::DescribeBaselineAggregatedItemListRequest& request);

                /**
                 *获取基线策略维度的聚合扫描结果列表，用于概览页“基线扫描策略”模块按策略展示通过/未通过情况。
                 * @param req DescribeBaselineAggregatedPolicyListRequest
                 * @return DescribeBaselineAggregatedPolicyListOutcome
                 */
                DescribeBaselineAggregatedPolicyListOutcome DescribeBaselineAggregatedPolicyList(const Model::DescribeBaselineAggregatedPolicyListRequest &request);
                void DescribeBaselineAggregatedPolicyListAsync(const Model::DescribeBaselineAggregatedPolicyListRequest& request, const DescribeBaselineAggregatedPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineAggregatedPolicyListOutcomeCallable DescribeBaselineAggregatedPolicyListCallable(const Model::DescribeBaselineAggregatedPolicyListRequest& request);

                /**
                 *查询当前处于“统计计算中”状态的策略 ID 列表，用于前端轮询判断扫描结果统计是否就绪。
                 * @param req DescribeBaselineCalculatingStatisticsPolicyIDListRequest
                 * @return DescribeBaselineCalculatingStatisticsPolicyIDListOutcome
                 */
                DescribeBaselineCalculatingStatisticsPolicyIDListOutcome DescribeBaselineCalculatingStatisticsPolicyIDList(const Model::DescribeBaselineCalculatingStatisticsPolicyIDListRequest &request);
                void DescribeBaselineCalculatingStatisticsPolicyIDListAsync(const Model::DescribeBaselineCalculatingStatisticsPolicyIDListRequest& request, const DescribeBaselineCalculatingStatisticsPolicyIDListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineCalculatingStatisticsPolicyIDListOutcomeCallable DescribeBaselineCalculatingStatisticsPolicyIDListCallable(const Model::DescribeBaselineCalculatingStatisticsPolicyIDListRequest& request);

                /**
                 *获取分类检测项列表
                 * @param req DescribeBaselineCategoryItemListRequest
                 * @return DescribeBaselineCategoryItemListOutcome
                 */
                DescribeBaselineCategoryItemListOutcome DescribeBaselineCategoryItemList(const Model::DescribeBaselineCategoryItemListRequest &request);
                void DescribeBaselineCategoryItemListAsync(const Model::DescribeBaselineCategoryItemListRequest& request, const DescribeBaselineCategoryItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineCategoryItemListOutcomeCallable DescribeBaselineCategoryItemListCallable(const Model::DescribeBaselineCategoryItemListRequest& request);

                /**
                 *获取基线风险修复历史记录列表，用于“修复记录”页展示已修复的检测项与对应资产。
                 * @param req DescribeBaselineFixRecordListRequest
                 * @return DescribeBaselineFixRecordListOutcome
                 */
                DescribeBaselineFixRecordListOutcome DescribeBaselineFixRecordList(const Model::DescribeBaselineFixRecordListRequest &request);
                void DescribeBaselineFixRecordListAsync(const Model::DescribeBaselineFixRecordListRequest& request, const DescribeBaselineFixRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineFixRecordListOutcomeCallable DescribeBaselineFixRecordListCallable(const Model::DescribeBaselineFixRecordListRequest& request);

                /**
                 *获取检测项维度的风险记录列表。
                 * @param req DescribeBaselineItemRiskListRequest
                 * @return DescribeBaselineItemRiskListOutcome
                 */
                DescribeBaselineItemRiskListOutcome DescribeBaselineItemRiskList(const Model::DescribeBaselineItemRiskListRequest &request);
                void DescribeBaselineItemRiskListAsync(const Model::DescribeBaselineItemRiskListRequest& request, const DescribeBaselineItemRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineItemRiskListOutcomeCallable DescribeBaselineItemRiskListCallable(const Model::DescribeBaselineItemRiskListRequest& request);

                /**
                 *获取系统内置基线分类的检测项列表（父分类 → 子分类 → 内置检测项 ID 列表），用于策略编辑页选择基线检测项。
                 * @param req DescribeBaselineMainTaskItemListRequest
                 * @return DescribeBaselineMainTaskItemListOutcome
                 */
                DescribeBaselineMainTaskItemListOutcome DescribeBaselineMainTaskItemList(const Model::DescribeBaselineMainTaskItemListRequest &request);
                void DescribeBaselineMainTaskItemListAsync(const Model::DescribeBaselineMainTaskItemListRequest& request, const DescribeBaselineMainTaskItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineMainTaskItemListOutcomeCallable DescribeBaselineMainTaskItemListCallable(const Model::DescribeBaselineMainTaskItemListRequest& request);

                /**
                 *获取扫描主任务列表，用于“任务记录”页展示一键扫描 / 周期扫描 / 分散扫描的历史记录及结果。
                 * @param req DescribeBaselineMainTaskListRequest
                 * @return DescribeBaselineMainTaskListOutcome
                 */
                DescribeBaselineMainTaskListOutcome DescribeBaselineMainTaskList(const Model::DescribeBaselineMainTaskListRequest &request);
                void DescribeBaselineMainTaskListAsync(const Model::DescribeBaselineMainTaskListRequest& request, const DescribeBaselineMainTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineMainTaskListOutcomeCallable DescribeBaselineMainTaskListCallable(const Model::DescribeBaselineMainTaskListRequest& request);

                /**
                 *获取基线概览页的头部数据，含未通过检测项总数、近一年修复数、最近一次扫描时间、当前是否启用周期扫描等。
                 * @param req DescribeBaselineOverviewRequest
                 * @return DescribeBaselineOverviewOutcome
                 */
                DescribeBaselineOverviewOutcome DescribeBaselineOverview(const Model::DescribeBaselineOverviewRequest &request);
                void DescribeBaselineOverviewAsync(const Model::DescribeBaselineOverviewRequest& request, const DescribeBaselineOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineOverviewOutcomeCallable DescribeBaselineOverviewCallable(const Model::DescribeBaselineOverviewRequest& request);

                /**
                 *获取系统内置基线分类树（父分类 → 子分类 → 内置检测项 ID 列表），用于策略详情展示。
                 * @param req DescribeBaselinePolicyCategoryListRequest
                 * @return DescribeBaselinePolicyCategoryListOutcome
                 */
                DescribeBaselinePolicyCategoryListOutcome DescribeBaselinePolicyCategoryList(const Model::DescribeBaselinePolicyCategoryListRequest &request);
                void DescribeBaselinePolicyCategoryListAsync(const Model::DescribeBaselinePolicyCategoryListRequest& request, const DescribeBaselinePolicyCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselinePolicyCategoryListOutcomeCallable DescribeBaselinePolicyCategoryListCallable(const Model::DescribeBaselinePolicyCategoryListRequest& request);

                /**
                 *获取策略配置的检测项列表
                 * @param req DescribeBaselinePolicyItemListRequest
                 * @return DescribeBaselinePolicyItemListOutcome
                 */
                DescribeBaselinePolicyItemListOutcome DescribeBaselinePolicyItemList(const Model::DescribeBaselinePolicyItemListRequest &request);
                void DescribeBaselinePolicyItemListAsync(const Model::DescribeBaselinePolicyItemListRequest& request, const DescribeBaselinePolicyItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselinePolicyItemListOutcomeCallable DescribeBaselinePolicyItemListCallable(const Model::DescribeBaselinePolicyItemListRequest& request);

                /**
                 *获取基线策略列表，用于“周期计划管理”等列表页展示系统/自定义策略及其配置情况。
                 * @param req DescribeBaselinePolicyListRequest
                 * @return DescribeBaselinePolicyListOutcome
                 */
                DescribeBaselinePolicyListOutcome DescribeBaselinePolicyList(const Model::DescribeBaselinePolicyListRequest &request);
                void DescribeBaselinePolicyListAsync(const Model::DescribeBaselinePolicyListRequest& request, const DescribeBaselinePolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselinePolicyListOutcomeCallable DescribeBaselinePolicyListCallable(const Model::DescribeBaselinePolicyListRequest& request);

                /**
                 *获取基线策略名字存在的用户列表
                 * @param req DescribeBaselinePolicyNameExistAppidListRequest
                 * @return DescribeBaselinePolicyNameExistAppidListOutcome
                 */
                DescribeBaselinePolicyNameExistAppidListOutcome DescribeBaselinePolicyNameExistAppidList(const Model::DescribeBaselinePolicyNameExistAppidListRequest &request);
                void DescribeBaselinePolicyNameExistAppidListAsync(const Model::DescribeBaselinePolicyNameExistAppidListRequest& request, const DescribeBaselinePolicyNameExistAppidListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselinePolicyNameExistAppidListOutcomeCallable DescribeBaselinePolicyNameExistAppidListCallable(const Model::DescribeBaselinePolicyNameExistAppidListRequest& request);

                /**
                 *获取扫描子任务列表，用于任务详情页“资产维度”展示每台主机/每个集群的扫描状态与失败原因。
                 * @param req DescribeBaselineSubTaskListRequest
                 * @return DescribeBaselineSubTaskListOutcome
                 */
                DescribeBaselineSubTaskListOutcome DescribeBaselineSubTaskList(const Model::DescribeBaselineSubTaskListRequest &request);
                void DescribeBaselineSubTaskListAsync(const Model::DescribeBaselineSubTaskListRequest& request, const DescribeBaselineSubTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineSubTaskListOutcomeCallable DescribeBaselineSubTaskListCallable(const Model::DescribeBaselineSubTaskListRequest& request);

                /**
                 *获取当前账号（管理员）的基线同步配置。仅集团管理员可调用，普通成员账号请使用 DescribeBaselineUserOtherConf。
                 * @param req DescribeBaselineSyncConfRequest
                 * @return DescribeBaselineSyncConfOutcome
                 */
                DescribeBaselineSyncConfOutcome DescribeBaselineSyncConf(const Model::DescribeBaselineSyncConfRequest &request);
                void DescribeBaselineSyncConfAsync(const Model::DescribeBaselineSyncConfRequest& request, const DescribeBaselineSyncConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineSyncConfOutcomeCallable DescribeBaselineSyncConfCallable(const Model::DescribeBaselineSyncConfRequest& request);

                /**
                 *获取系统内置基线分类树（父分类 → 子分类 → 内置检测项 ID 列表），用于策略编辑页选择基线检测项。
                 * @param req DescribeBaselineSystemCategoryListRequest
                 * @return DescribeBaselineSystemCategoryListOutcome
                 */
                DescribeBaselineSystemCategoryListOutcome DescribeBaselineSystemCategoryList(const Model::DescribeBaselineSystemCategoryListRequest &request);
                void DescribeBaselineSystemCategoryListAsync(const Model::DescribeBaselineSystemCategoryListRequest& request, const DescribeBaselineSystemCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineSystemCategoryListOutcomeCallable DescribeBaselineSystemCategoryListCallable(const Model::DescribeBaselineSystemCategoryListRequest& request);

                /**
                 *获取当前账号的用户级基线配置。
                 * @param req DescribeBaselineUserOtherConfRequest
                 * @return DescribeBaselineUserOtherConfOutcome
                 */
                DescribeBaselineUserOtherConfOutcome DescribeBaselineUserOtherConf(const Model::DescribeBaselineUserOtherConfRequest &request);
                void DescribeBaselineUserOtherConfAsync(const Model::DescribeBaselineUserOtherConfRequest& request, const DescribeBaselineUserOtherConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineUserOtherConfOutcomeCallable DescribeBaselineUserOtherConfCallable(const Model::DescribeBaselineUserOtherConfRequest& request);

                /**
                 *获取当前账号的“用户弱口令”自定义字典（服务端解密后返回明文）。
                 * @param req DescribeBaselineUserWeakPasswordConfRequest
                 * @return DescribeBaselineUserWeakPasswordConfOutcome
                 */
                DescribeBaselineUserWeakPasswordConfOutcome DescribeBaselineUserWeakPasswordConf(const Model::DescribeBaselineUserWeakPasswordConfRequest &request);
                void DescribeBaselineUserWeakPasswordConfAsync(const Model::DescribeBaselineUserWeakPasswordConfRequest& request, const DescribeBaselineUserWeakPasswordConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineUserWeakPasswordConfOutcomeCallable DescribeBaselineUserWeakPasswordConfCallable(const Model::DescribeBaselineUserWeakPasswordConfRequest& request);

                /**
                 *获取爆破破解规则
                 * @param req DescribeBruteAttackRulesRequest
                 * @return DescribeBruteAttackRulesOutcome
                 */
                DescribeBruteAttackRulesOutcome DescribeBruteAttackRules(const Model::DescribeBruteAttackRulesRequest &request);
                void DescribeBruteAttackRulesAsync(const Model::DescribeBruteAttackRulesRequest& request, const DescribeBruteAttackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBruteAttackRulesOutcomeCallable DescribeBruteAttackRulesCallable(const Model::DescribeBruteAttackRulesRequest& request);

                /**
                 *查看存储桶调用源ip列表
                 * @param req DescribeBucketInvokeIpListRequest
                 * @return DescribeBucketInvokeIpListOutcome
                 */
                DescribeBucketInvokeIpListOutcome DescribeBucketInvokeIpList(const Model::DescribeBucketInvokeIpListRequest &request);
                void DescribeBucketInvokeIpListAsync(const Model::DescribeBucketInvokeIpListRequest& request, const DescribeBucketInvokeIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBucketInvokeIpListOutcomeCallable DescribeBucketInvokeIpListCallable(const Model::DescribeBucketInvokeIpListRequest& request);

                /**
                 *云资源配置检查报告风险统计
                 * @param req DescribeCFGRiskReportStatisticsRequest
                 * @return DescribeCFGRiskReportStatisticsOutcome
                 */
                DescribeCFGRiskReportStatisticsOutcome DescribeCFGRiskReportStatistics(const Model::DescribeCFGRiskReportStatisticsRequest &request);
                void DescribeCFGRiskReportStatisticsAsync(const Model::DescribeCFGRiskReportStatisticsRequest& request, const DescribeCFGRiskReportStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCFGRiskReportStatisticsOutcomeCallable DescribeCFGRiskReportStatisticsCallable(const Model::DescribeCFGRiskReportStatisticsRequest& request);

                /**
                 *获取扫描结果统计信息
                 * @param req DescribeCFGRiskStatisticsRequest
                 * @return DescribeCFGRiskStatisticsOutcome
                 */
                DescribeCFGRiskStatisticsOutcome DescribeCFGRiskStatistics(const Model::DescribeCFGRiskStatisticsRequest &request);
                void DescribeCFGRiskStatisticsAsync(const Model::DescribeCFGRiskStatisticsRequest& request, const DescribeCFGRiskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCFGRiskStatisticsOutcomeCallable DescribeCFGRiskStatisticsCallable(const Model::DescribeCFGRiskStatisticsRequest& request);

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
                 *查询ModifyCSIPLicenseBinds返回的异步绑定任务进度。
                 * @param req DescribeCSIPLicenseBindScheduleRequest
                 * @return DescribeCSIPLicenseBindScheduleOutcome
                 */
                DescribeCSIPLicenseBindScheduleOutcome DescribeCSIPLicenseBindSchedule(const Model::DescribeCSIPLicenseBindScheduleRequest &request);
                void DescribeCSIPLicenseBindScheduleAsync(const Model::DescribeCSIPLicenseBindScheduleRequest& request, const DescribeCSIPLicenseBindScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCSIPLicenseBindScheduleOutcomeCallable DescribeCSIPLicenseBindScheduleCallable(const Model::DescribeCSIPLicenseBindScheduleRequest& request);

                /**
                 *CSIP 扫描任务主机详情接口
                 * @param req DescribeCSIPMalwareScanTaskDetailRequest
                 * @return DescribeCSIPMalwareScanTaskDetailOutcome
                 */
                DescribeCSIPMalwareScanTaskDetailOutcome DescribeCSIPMalwareScanTaskDetail(const Model::DescribeCSIPMalwareScanTaskDetailRequest &request);
                void DescribeCSIPMalwareScanTaskDetailAsync(const Model::DescribeCSIPMalwareScanTaskDetailRequest& request, const DescribeCSIPMalwareScanTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCSIPMalwareScanTaskDetailOutcomeCallable DescribeCSIPMalwareScanTaskDetailCallable(const Model::DescribeCSIPMalwareScanTaskDetailRequest& request);

                /**
                 *CSIP 手动扫描进度查询接口
                 * @param req DescribeCSIPMalwareScanTaskProgressRequest
                 * @return DescribeCSIPMalwareScanTaskProgressOutcome
                 */
                DescribeCSIPMalwareScanTaskProgressOutcome DescribeCSIPMalwareScanTaskProgress(const Model::DescribeCSIPMalwareScanTaskProgressRequest &request);
                void DescribeCSIPMalwareScanTaskProgressAsync(const Model::DescribeCSIPMalwareScanTaskProgressRequest& request, const DescribeCSIPMalwareScanTaskProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCSIPMalwareScanTaskProgressOutcomeCallable DescribeCSIPMalwareScanTaskProgressCallable(const Model::DescribeCSIPMalwareScanTaskProgressRequest& request);

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
                 *查询云边界分析路径节点(主机专用)
                 * @param req DescribeCWPExposePathRequest
                 * @return DescribeCWPExposePathOutcome
                 */
                DescribeCWPExposePathOutcome DescribeCWPExposePath(const Model::DescribeCWPExposePathRequest &request);
                void DescribeCWPExposePathAsync(const Model::DescribeCWPExposePathRequest& request, const DescribeCWPExposePathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPExposePathOutcomeCallable DescribeCWPExposePathCallable(const Model::DescribeCWPExposePathRequest& request);

                /**
                 *云边界分析资产列表(适用于主机资产)
                 * @param req DescribeCWPExposuresRequest
                 * @return DescribeCWPExposuresOutcome
                 */
                DescribeCWPExposuresOutcome DescribeCWPExposures(const Model::DescribeCWPExposuresRequest &request);
                void DescribeCWPExposuresAsync(const Model::DescribeCWPExposuresRequest& request, const DescribeCWPExposuresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPExposuresOutcomeCallable DescribeCWPExposuresCallable(const Model::DescribeCWPExposuresRequest& request);

                /**
                 *查询授权绑定任务的进度
                 * @param req DescribeCWPLicenseBindScheduleRequest
                 * @return DescribeCWPLicenseBindScheduleOutcome
                 */
                DescribeCWPLicenseBindScheduleOutcome DescribeCWPLicenseBindSchedule(const Model::DescribeCWPLicenseBindScheduleRequest &request);
                void DescribeCWPLicenseBindScheduleAsync(const Model::DescribeCWPLicenseBindScheduleRequest& request, const DescribeCWPLicenseBindScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPLicenseBindScheduleOutcomeCallable DescribeCWPLicenseBindScheduleCallable(const Model::DescribeCWPLicenseBindScheduleRequest& request);

                /**
                 *主机详情
                 * @param req DescribeCWPMachineDetailRequest
                 * @return DescribeCWPMachineDetailOutcome
                 */
                DescribeCWPMachineDetailOutcome DescribeCWPMachineDetail(const Model::DescribeCWPMachineDetailRequest &request);
                void DescribeCWPMachineDetailAsync(const Model::DescribeCWPMachineDetailRequest& request, const DescribeCWPMachineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPMachineDetailOutcomeCallable DescribeCWPMachineDetailCallable(const Model::DescribeCWPMachineDetailRequest& request);

                /**
                 *查询可筛选操作系统列表.
                 * @param req DescribeCWPMachineOsListRequest
                 * @return DescribeCWPMachineOsListOutcome
                 */
                DescribeCWPMachineOsListOutcome DescribeCWPMachineOsList(const Model::DescribeCWPMachineOsListRequest &request);
                void DescribeCWPMachineOsListAsync(const Model::DescribeCWPMachineOsListRequest& request, const DescribeCWPMachineOsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPMachineOsListOutcomeCallable DescribeCWPMachineOsListCallable(const Model::DescribeCWPMachineOsListRequest& request);

                /**
                 *主机列表
                 * @param req DescribeCWPMachinesRequest
                 * @return DescribeCWPMachinesOutcome
                 */
                DescribeCWPMachinesOutcome DescribeCWPMachines(const Model::DescribeCWPMachinesRequest &request);
                void DescribeCWPMachinesAsync(const Model::DescribeCWPMachinesRequest& request, const DescribeCWPMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPMachinesOutcomeCallable DescribeCWPMachinesCallable(const Model::DescribeCWPMachinesRequest& request);

                /**
                 *查询资源订单列表
                 * @param req DescribeCWPOrderListRequest
                 * @return DescribeCWPOrderListOutcome
                 */
                DescribeCWPOrderListOutcome DescribeCWPOrderList(const Model::DescribeCWPOrderListRequest &request);
                void DescribeCWPOrderListAsync(const Model::DescribeCWPOrderListRequest& request, const DescribeCWPOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPOrderListOutcomeCallable DescribeCWPOrderListCallable(const Model::DescribeCWPOrderListRequest& request);

                /**
                 *查询腾讯云扫描IP信息
                 * @param req DescribeCWPScanIpInfoRequest
                 * @return DescribeCWPScanIpInfoOutcome
                 */
                DescribeCWPScanIpInfoOutcome DescribeCWPScanIpInfo(const Model::DescribeCWPScanIpInfoRequest &request);
                void DescribeCWPScanIpInfoAsync(const Model::DescribeCWPScanIpInfoRequest& request, const DescribeCWPScanIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPScanIpInfoOutcomeCallable DescribeCWPScanIpInfoCallable(const Model::DescribeCWPScanIpInfoRequest& request);

                /**
                 *获取任务下发时长
                 * @param req DescribeCWPTaskDurationRequest
                 * @return DescribeCWPTaskDurationOutcome
                 */
                DescribeCWPTaskDurationOutcome DescribeCWPTaskDuration(const Model::DescribeCWPTaskDurationRequest &request);
                void DescribeCWPTaskDurationAsync(const Model::DescribeCWPTaskDurationRequest& request, const DescribeCWPTaskDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPTaskDurationOutcomeCallable DescribeCWPTaskDurationCallable(const Model::DescribeCWPTaskDurationRequest& request);

                /**
                 *获取调用记录列表
                 * @param req DescribeCallRecordRequest
                 * @return DescribeCallRecordOutcome
                 */
                DescribeCallRecordOutcome DescribeCallRecord(const Model::DescribeCallRecordRequest &request);
                void DescribeCallRecordAsync(const Model::DescribeCallRecordRequest& request, const DescribeCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallRecordOutcomeCallable DescribeCallRecordCallable(const Model::DescribeCallRecordRequest& request);

                /**
                 *查询联通性检测主机列表
                 * @param req DescribeCheckConnectivityHostListRequest
                 * @return DescribeCheckConnectivityHostListOutcome
                 */
                DescribeCheckConnectivityHostListOutcome DescribeCheckConnectivityHostList(const Model::DescribeCheckConnectivityHostListRequest &request);
                void DescribeCheckConnectivityHostListAsync(const Model::DescribeCheckConnectivityHostListRequest& request, const DescribeCheckConnectivityHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCheckConnectivityHostListOutcomeCallable DescribeCheckConnectivityHostListCallable(const Model::DescribeCheckConnectivityHostListRequest& request);

                /**
                 *检查视角下云资源配置风险列表
                 * @param req DescribeCheckViewRisksRequest
                 * @return DescribeCheckViewRisksOutcome
                 */
                DescribeCheckViewRisksOutcome DescribeCheckViewRisks(const Model::DescribeCheckViewRisksRequest &request);
                void DescribeCheckViewRisksAsync(const Model::DescribeCheckViewRisksRequest& request, const DescribeCheckViewRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCheckViewRisksOutcomeCallable DescribeCheckViewRisksCallable(const Model::DescribeCheckViewRisksRequest& request);

                /**
                 *查询腾讯云指定CLB实例对应的监听器列表
                 * @param req DescribeClbListenerListRequest
                 * @return DescribeClbListenerListOutcome
                 */
                DescribeClbListenerListOutcome DescribeClbListenerList(const Model::DescribeClbListenerListRequest &request);
                void DescribeClbListenerListAsync(const Model::DescribeClbListenerListRequest& request, const DescribeClbListenerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClbListenerListOutcomeCallable DescribeClbListenerListCallable(const Model::DescribeClbListenerListRequest& request);

                /**
                 *查询腾讯云指定CLB实例对应的七层转发规则列表
                 * @param req DescribeClbListenerRulesRequest
                 * @return DescribeClbListenerRulesOutcome
                 */
                DescribeClbListenerRulesOutcome DescribeClbListenerRules(const Model::DescribeClbListenerRulesRequest &request);
                void DescribeClbListenerRulesAsync(const Model::DescribeClbListenerRulesRequest& request, const DescribeClbListenerRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClbListenerRulesOutcomeCallable DescribeClbListenerRulesCallable(const Model::DescribeClbListenerRulesRequest& request);

                /**
                 *查询CLB后端服务列表
                 * @param req DescribeClbTargetsRequest
                 * @return DescribeClbTargetsOutcome
                 */
                DescribeClbTargetsOutcome DescribeClbTargets(const Model::DescribeClbTargetsRequest &request);
                void DescribeClbTargetsAsync(const Model::DescribeClbTargetsRequest& request, const DescribeClbTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClbTargetsOutcomeCallable DescribeClbTargetsCallable(const Model::DescribeClbTargetsRequest& request);

                /**
                 *全部资产
                 * @param req DescribeCloudAssetsRequest
                 * @return DescribeCloudAssetsOutcome
                 */
                DescribeCloudAssetsOutcome DescribeCloudAssets(const Model::DescribeCloudAssetsRequest &request);
                void DescribeCloudAssetsAsync(const Model::DescribeCloudAssetsRequest& request, const DescribeCloudAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudAssetsOutcomeCallable DescribeCloudAssetsCallable(const Model::DescribeCloudAssetsRequest& request);

                /**
                 *云函数列表
                 * @param req DescribeCloudFunctionListRequest
                 * @return DescribeCloudFunctionListOutcome
                 */
                DescribeCloudFunctionListOutcome DescribeCloudFunctionList(const Model::DescribeCloudFunctionListRequest &request);
                void DescribeCloudFunctionListAsync(const Model::DescribeCloudFunctionListRequest& request, const DescribeCloudFunctionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudFunctionListOutcomeCallable DescribeCloudFunctionListCallable(const Model::DescribeCloudFunctionListRequest& request);

                /**
                 *查询容器集群资产列表
                 * @param req DescribeClusterAssetListRequest
                 * @return DescribeClusterAssetListOutcome
                 */
                DescribeClusterAssetListOutcome DescribeClusterAssetList(const Model::DescribeClusterAssetListRequest &request);
                void DescribeClusterAssetListAsync(const Model::DescribeClusterAssetListRequest& request, const DescribeClusterAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAssetListOutcomeCallable DescribeClusterAssetListCallable(const Model::DescribeClusterAssetListRequest& request);

                /**
                 *查询集群资产同步任务状态
                 * @param req DescribeClusterAssetSyncTaskStatusRequest
                 * @return DescribeClusterAssetSyncTaskStatusOutcome
                 */
                DescribeClusterAssetSyncTaskStatusOutcome DescribeClusterAssetSyncTaskStatus(const Model::DescribeClusterAssetSyncTaskStatusRequest &request);
                void DescribeClusterAssetSyncTaskStatusAsync(const Model::DescribeClusterAssetSyncTaskStatusRequest& request, const DescribeClusterAssetSyncTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAssetSyncTaskStatusOutcomeCallable DescribeClusterAssetSyncTaskStatusCallable(const Model::DescribeClusterAssetSyncTaskStatusRequest& request);

                /**
                 *集群列表
                 * @param req DescribeClusterAssetsRequest
                 * @return DescribeClusterAssetsOutcome
                 */
                DescribeClusterAssetsOutcome DescribeClusterAssets(const Model::DescribeClusterAssetsRequest &request);
                void DescribeClusterAssetsAsync(const Model::DescribeClusterAssetsRequest& request, const DescribeClusterAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAssetsOutcomeCallable DescribeClusterAssetsCallable(const Model::DescribeClusterAssetsRequest& request);

                /**
                 *查询容器关联应用列表。通过容器ID获取关联的应用服务信息，支持分页。
                 * @param req DescribeClusterContainerAppListRequest
                 * @return DescribeClusterContainerAppListOutcome
                 */
                DescribeClusterContainerAppListOutcome DescribeClusterContainerAppList(const Model::DescribeClusterContainerAppListRequest &request);
                void DescribeClusterContainerAppListAsync(const Model::DescribeClusterContainerAppListRequest& request, const DescribeClusterContainerAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterContainerAppListOutcomeCallable DescribeClusterContainerAppListCallable(const Model::DescribeClusterContainerAppListRequest& request);

                /**
                 *查询容器关联组件列表。通过容器ID获取关联的组件信息，支持分页。
                 * @param req DescribeClusterContainerComponentListRequest
                 * @return DescribeClusterContainerComponentListOutcome
                 */
                DescribeClusterContainerComponentListOutcome DescribeClusterContainerComponentList(const Model::DescribeClusterContainerComponentListRequest &request);
                void DescribeClusterContainerComponentListAsync(const Model::DescribeClusterContainerComponentListRequest& request, const DescribeClusterContainerComponentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterContainerComponentListOutcomeCallable DescribeClusterContainerComponentListCallable(const Model::DescribeClusterContainerComponentListRequest& request);

                /**
                 *查询集群容器详情。通过容器ID获取容器基本信息、镜像信息、挂载信息、网络信息以及关联节点信息。
                 * @param req DescribeClusterContainerDetailRequest
                 * @return DescribeClusterContainerDetailOutcome
                 */
                DescribeClusterContainerDetailOutcome DescribeClusterContainerDetail(const Model::DescribeClusterContainerDetailRequest &request);
                void DescribeClusterContainerDetailAsync(const Model::DescribeClusterContainerDetailRequest& request, const DescribeClusterContainerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterContainerDetailOutcomeCallable DescribeClusterContainerDetailCallable(const Model::DescribeClusterContainerDetailRequest& request);

                /**
                 *查询集群容器列表
                 * @param req DescribeClusterContainerListRequest
                 * @return DescribeClusterContainerListOutcome
                 */
                DescribeClusterContainerListOutcome DescribeClusterContainerList(const Model::DescribeClusterContainerListRequest &request);
                void DescribeClusterContainerListAsync(const Model::DescribeClusterContainerListRequest& request, const DescribeClusterContainerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterContainerListOutcomeCallable DescribeClusterContainerListCallable(const Model::DescribeClusterContainerListRequest& request);

                /**
                 *查询容器关联端口列表。通过容器ID获取关联的端口信息，支持分页。
                 * @param req DescribeClusterContainerPortListRequest
                 * @return DescribeClusterContainerPortListOutcome
                 */
                DescribeClusterContainerPortListOutcome DescribeClusterContainerPortList(const Model::DescribeClusterContainerPortListRequest &request);
                void DescribeClusterContainerPortListAsync(const Model::DescribeClusterContainerPortListRequest& request, const DescribeClusterContainerPortListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterContainerPortListOutcomeCallable DescribeClusterContainerPortListCallable(const Model::DescribeClusterContainerPortListRequest& request);

                /**
                 *查询容器关联进程列表。通过容器ID获取关联的进程信息，支持按启动时间排序和分页。Filter.By支持StartTime；Filter.Order支持ASC/DESC。
                 * @param req DescribeClusterContainerProcessListRequest
                 * @return DescribeClusterContainerProcessListOutcome
                 */
                DescribeClusterContainerProcessListOutcome DescribeClusterContainerProcessList(const Model::DescribeClusterContainerProcessListRequest &request);
                void DescribeClusterContainerProcessListAsync(const Model::DescribeClusterContainerProcessListRequest& request, const DescribeClusterContainerProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterContainerProcessListOutcomeCallable DescribeClusterContainerProcessListCallable(const Model::DescribeClusterContainerProcessListRequest& request);

                /**
                 *查询容器关联Web服务列表。通过容器ID获取关联的Web服务信息，支持分页。
                 * @param req DescribeClusterContainerWebServiceListRequest
                 * @return DescribeClusterContainerWebServiceListOutcome
                 */
                DescribeClusterContainerWebServiceListOutcome DescribeClusterContainerWebServiceList(const Model::DescribeClusterContainerWebServiceListRequest &request);
                void DescribeClusterContainerWebServiceListAsync(const Model::DescribeClusterContainerWebServiceListRequest& request, const DescribeClusterContainerWebServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterContainerWebServiceListOutcomeCallable DescribeClusterContainerWebServiceListCallable(const Model::DescribeClusterContainerWebServiceListRequest& request);

                /**
                 *查询集群详情
                 * @param req DescribeClusterDetailRequest
                 * @return DescribeClusterDetailOutcome
                 */
                DescribeClusterDetailOutcome DescribeClusterDetail(const Model::DescribeClusterDetailRequest &request);
                void DescribeClusterDetailAsync(const Model::DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterDetailOutcomeCallable DescribeClusterDetailCallable(const Model::DescribeClusterDetailRequest& request);

                /**
                 *查询集群安装命令
                 * @param req DescribeClusterInstallCommandRequest
                 * @return DescribeClusterInstallCommandOutcome
                 */
                DescribeClusterInstallCommandOutcome DescribeClusterInstallCommand(const Model::DescribeClusterInstallCommandRequest &request);
                void DescribeClusterInstallCommandAsync(const Model::DescribeClusterInstallCommandRequest& request, const DescribeClusterInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterInstallCommandOutcomeCallable DescribeClusterInstallCommandCallable(const Model::DescribeClusterInstallCommandRequest& request);

                /**
                 *查询集群列表
                 * @param req DescribeClusterListV2Request
                 * @return DescribeClusterListV2Outcome
                 */
                DescribeClusterListV2Outcome DescribeClusterListV2(const Model::DescribeClusterListV2Request &request);
                void DescribeClusterListV2Async(const Model::DescribeClusterListV2Request& request, const DescribeClusterListV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterListV2OutcomeCallable DescribeClusterListV2Callable(const Model::DescribeClusterListV2Request& request);

                /**
                 *查询集群命名空间列表
                 * @param req DescribeClusterNamespaceListRequest
                 * @return DescribeClusterNamespaceListOutcome
                 */
                DescribeClusterNamespaceListOutcome DescribeClusterNamespaceList(const Model::DescribeClusterNamespaceListRequest &request);
                void DescribeClusterNamespaceListAsync(const Model::DescribeClusterNamespaceListRequest& request, const DescribeClusterNamespaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterNamespaceListOutcomeCallable DescribeClusterNamespaceListCallable(const Model::DescribeClusterNamespaceListRequest& request);

                /**
                 *查询集群节点列表
                 * @param req DescribeClusterNodeListRequest
                 * @return DescribeClusterNodeListOutcome
                 */
                DescribeClusterNodeListOutcome DescribeClusterNodeList(const Model::DescribeClusterNodeListRequest &request);
                void DescribeClusterNodeListAsync(const Model::DescribeClusterNodeListRequest& request, const DescribeClusterNodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterNodeListOutcomeCallable DescribeClusterNodeListCallable(const Model::DescribeClusterNodeListRequest& request);

                /**
                 *集群pod列表
                 * @param req DescribeClusterPodAssetsRequest
                 * @return DescribeClusterPodAssetsOutcome
                 */
                DescribeClusterPodAssetsOutcome DescribeClusterPodAssets(const Model::DescribeClusterPodAssetsRequest &request);
                void DescribeClusterPodAssetsAsync(const Model::DescribeClusterPodAssetsRequest& request, const DescribeClusterPodAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterPodAssetsOutcomeCallable DescribeClusterPodAssetsCallable(const Model::DescribeClusterPodAssetsRequest& request);

                /**
                 *查询集群 Pod 详情。容器资产改版 A 类新接口，为 Pod 资产详情页主入口。入参仅 UniqueID；出参覆盖资产信息、所属集群、命名空间、节点、Workload、以及按四个风险等级分组的风险事件数和告警事件数。
                 * @param req DescribeClusterPodDetailRequest
                 * @return DescribeClusterPodDetailOutcome
                 */
                DescribeClusterPodDetailOutcome DescribeClusterPodDetail(const Model::DescribeClusterPodDetailRequest &request);
                void DescribeClusterPodDetailAsync(const Model::DescribeClusterPodDetailRequest& request, const DescribeClusterPodDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterPodDetailOutcomeCallable DescribeClusterPodDetailCallable(const Model::DescribeClusterPodDetailRequest& request);

                /**
                 *查询集群pod列表
                 * @param req DescribeClusterPodListRequest
                 * @return DescribeClusterPodListOutcome
                 */
                DescribeClusterPodListOutcome DescribeClusterPodList(const Model::DescribeClusterPodListRequest &request);
                void DescribeClusterPodListAsync(const Model::DescribeClusterPodListRequest& request, const DescribeClusterPodListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterPodListOutcomeCallable DescribeClusterPodListCallable(const Model::DescribeClusterPodListRequest& request);

                /**
                 *查询集群service列表
                 * @param req DescribeClusterServiceListRequest
                 * @return DescribeClusterServiceListOutcome
                 */
                DescribeClusterServiceListOutcome DescribeClusterServiceList(const Model::DescribeClusterServiceListRequest &request);
                void DescribeClusterServiceListAsync(const Model::DescribeClusterServiceListRequest& request, const DescribeClusterServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterServiceListOutcomeCallable DescribeClusterServiceListCallable(const Model::DescribeClusterServiceListRequest& request);

                /**
                 *查询集群概览数据
                 * @param req DescribeClusterSummaryRequest
                 * @return DescribeClusterSummaryOutcome
                 */
                DescribeClusterSummaryOutcome DescribeClusterSummary(const Model::DescribeClusterSummaryRequest &request);
                void DescribeClusterSummaryAsync(const Model::DescribeClusterSummaryRequest& request, const DescribeClusterSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterSummaryOutcomeCallable DescribeClusterSummaryCallable(const Model::DescribeClusterSummaryRequest& request);

                /**
                 *查询集群超级节点详情，返回基本信息（所属地域/可用区/资产最后更新时间/节点来源/子网/核数）与所属集群信息（集群名称/集群ID/集群状态/Kubernetes版本/Kubelet版本）。
                 * @param req DescribeClusterSuperNodeInfoRequest
                 * @return DescribeClusterSuperNodeInfoOutcome
                 */
                DescribeClusterSuperNodeInfoOutcome DescribeClusterSuperNodeInfo(const Model::DescribeClusterSuperNodeInfoRequest &request);
                void DescribeClusterSuperNodeInfoAsync(const Model::DescribeClusterSuperNodeInfoRequest& request, const DescribeClusterSuperNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterSuperNodeInfoOutcomeCallable DescribeClusterSuperNodeInfoCallable(const Model::DescribeClusterSuperNodeInfoRequest& request);

                /**
                 *云资源配置检测合规概览
                 * @param req DescribeComplianceOverviewRequest
                 * @return DescribeComplianceOverviewOutcome
                 */
                DescribeComplianceOverviewOutcome DescribeComplianceOverview(const Model::DescribeComplianceOverviewRequest &request);
                void DescribeComplianceOverviewAsync(const Model::DescribeComplianceOverviewRequest& request, const DescribeComplianceOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceOverviewOutcomeCallable DescribeComplianceOverviewCallable(const Model::DescribeComplianceOverviewRequest& request);

                /**
                 *合规标准聚合视角下云资源配置风险列表
                 * @param req DescribeComplianceRiskListRequest
                 * @return DescribeComplianceRiskListOutcome
                 */
                DescribeComplianceRiskListOutcome DescribeComplianceRiskList(const Model::DescribeComplianceRiskListRequest &request);
                void DescribeComplianceRiskListAsync(const Model::DescribeComplianceRiskListRequest& request, const DescribeComplianceRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceRiskListOutcomeCallable DescribeComplianceRiskListCallable(const Model::DescribeComplianceRiskListRequest& request);

                /**
                 *云资源配置检测标准章节条款树
                 * @param req DescribeComplianceStandardTermTreeRequest
                 * @return DescribeComplianceStandardTermTreeOutcome
                 */
                DescribeComplianceStandardTermTreeOutcome DescribeComplianceStandardTermTree(const Model::DescribeComplianceStandardTermTreeRequest &request);
                void DescribeComplianceStandardTermTreeAsync(const Model::DescribeComplianceStandardTermTreeRequest& request, const DescribeComplianceStandardTermTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceStandardTermTreeOutcomeCallable DescribeComplianceStandardTermTreeCallable(const Model::DescribeComplianceStandardTermTreeRequest& request);

                /**
                 *云资源配置检测规范分类统计
                 * @param req DescribeComplianceStatisticsRequest
                 * @return DescribeComplianceStatisticsOutcome
                 */
                DescribeComplianceStatisticsOutcome DescribeComplianceStatistics(const Model::DescribeComplianceStatisticsRequest &request);
                void DescribeComplianceStatisticsAsync(const Model::DescribeComplianceStatisticsRequest& request, const DescribeComplianceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceStatisticsOutcomeCallable DescribeComplianceStatisticsCallable(const Model::DescribeComplianceStatisticsRequest& request);

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
                 *查询cos风险文件扫描任务
                 * @param req DescribeCosObjectScanTaskRequest
                 * @return DescribeCosObjectScanTaskOutcome
                 */
                DescribeCosObjectScanTaskOutcome DescribeCosObjectScanTask(const Model::DescribeCosObjectScanTaskRequest &request);
                void DescribeCosObjectScanTaskAsync(const Model::DescribeCosObjectScanTaskRequest& request, const DescribeCosObjectScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosObjectScanTaskOutcomeCallable DescribeCosObjectScanTaskCallable(const Model::DescribeCosObjectScanTaskRequest& request);

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
                 *获取CSPM自动配额共享配置
                 * @param req DescribeCspmShardConfigRequest
                 * @return DescribeCspmShardConfigOutcome
                 */
                DescribeCspmShardConfigOutcome DescribeCspmShardConfig(const Model::DescribeCspmShardConfigRequest &request);
                void DescribeCspmShardConfigAsync(const Model::DescribeCspmShardConfigRequest& request, const DescribeCspmShardConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCspmShardConfigOutcomeCallable DescribeCspmShardConfigCallable(const Model::DescribeCspmShardConfigRequest& request);

                /**
                 *用户自定义 标签数量
                 * @param req DescribeCustomAssetTagCountRequest
                 * @return DescribeCustomAssetTagCountOutcome
                 */
                DescribeCustomAssetTagCountOutcome DescribeCustomAssetTagCount(const Model::DescribeCustomAssetTagCountRequest &request);
                void DescribeCustomAssetTagCountAsync(const Model::DescribeCustomAssetTagCountRequest& request, const DescribeCustomAssetTagCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomAssetTagCountOutcomeCallable DescribeCustomAssetTagCountCallable(const Model::DescribeCustomAssetTagCountRequest& request);

                /**
                 *自定义风险规则配置详情列表示例
                 * @param req DescribeCustomRiskRuleDetailRequest
                 * @return DescribeCustomRiskRuleDetailOutcome
                 */
                DescribeCustomRiskRuleDetailOutcome DescribeCustomRiskRuleDetail(const Model::DescribeCustomRiskRuleDetailRequest &request);
                void DescribeCustomRiskRuleDetailAsync(const Model::DescribeCustomRiskRuleDetailRequest& request, const DescribeCustomRiskRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomRiskRuleDetailOutcomeCallable DescribeCustomRiskRuleDetailCallable(const Model::DescribeCustomRiskRuleDetailRequest& request);

                /**
                 *自定义风险规则配置列表
                 * @param req DescribeCustomRiskRulesRequest
                 * @return DescribeCustomRiskRulesOutcome
                 */
                DescribeCustomRiskRulesOutcome DescribeCustomRiskRules(const Model::DescribeCustomRiskRulesRequest &request);
                void DescribeCustomRiskRulesAsync(const Model::DescribeCustomRiskRulesRequest& request, const DescribeCustomRiskRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomRiskRulesOutcomeCallable DescribeCustomRiskRulesCallable(const Model::DescribeCustomRiskRulesRequest& request);

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
                 *获取内置默认安全评分规则，用于重置自定义规则
                 * @param req DescribeDefaultSecurityScoreRuleRequest
                 * @return DescribeDefaultSecurityScoreRuleOutcome
                 */
                DescribeDefaultSecurityScoreRuleOutcome DescribeDefaultSecurityScoreRule(const Model::DescribeDefaultSecurityScoreRuleRequest &request);
                void DescribeDefaultSecurityScoreRuleAsync(const Model::DescribeDefaultSecurityScoreRuleRequest& request, const DescribeDefaultSecurityScoreRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultSecurityScoreRuleOutcomeCallable DescribeDefaultSecurityScoreRuleCallable(const Model::DescribeDefaultSecurityScoreRuleRequest& request);

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
                 *查询dspm资产字段样本值
                 * @param req DescribeDspmAssetFieldSamplesRequest
                 * @return DescribeDspmAssetFieldSamplesOutcome
                 */
                DescribeDspmAssetFieldSamplesOutcome DescribeDspmAssetFieldSamples(const Model::DescribeDspmAssetFieldSamplesRequest &request);
                void DescribeDspmAssetFieldSamplesAsync(const Model::DescribeDspmAssetFieldSamplesRequest& request, const DescribeDspmAssetFieldSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetFieldSamplesOutcomeCallable DescribeDspmAssetFieldSamplesCallable(const Model::DescribeDspmAssetFieldSamplesRequest& request);

                /**
                 *查询dspm资产数据识别信息列表
                 * @param req DescribeDspmAssetIdentifyInfoListRequest
                 * @return DescribeDspmAssetIdentifyInfoListOutcome
                 */
                DescribeDspmAssetIdentifyInfoListOutcome DescribeDspmAssetIdentifyInfoList(const Model::DescribeDspmAssetIdentifyInfoListRequest &request);
                void DescribeDspmAssetIdentifyInfoListAsync(const Model::DescribeDspmAssetIdentifyInfoListRequest& request, const DescribeDspmAssetIdentifyInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetIdentifyInfoListOutcomeCallable DescribeDspmAssetIdentifyInfoListCallable(const Model::DescribeDspmAssetIdentifyInfoListRequest& request);

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
                 *查询dspm数据识别分类列表
                 * @param req DescribeDspmIdentifyCategoryListRequest
                 * @return DescribeDspmIdentifyCategoryListOutcome
                 */
                DescribeDspmIdentifyCategoryListOutcome DescribeDspmIdentifyCategoryList(const Model::DescribeDspmIdentifyCategoryListRequest &request);
                void DescribeDspmIdentifyCategoryListAsync(const Model::DescribeDspmIdentifyCategoryListRequest& request, const DescribeDspmIdentifyCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyCategoryListOutcomeCallable DescribeDspmIdentifyCategoryListCallable(const Model::DescribeDspmIdentifyCategoryListRequest& request);

                /**
                 *查询dspm数据识别模板分类关联数据项列表
                 * @param req DescribeDspmIdentifyComplianceCategoryRuleListRequest
                 * @return DescribeDspmIdentifyComplianceCategoryRuleListOutcome
                 */
                DescribeDspmIdentifyComplianceCategoryRuleListOutcome DescribeDspmIdentifyComplianceCategoryRuleList(const Model::DescribeDspmIdentifyComplianceCategoryRuleListRequest &request);
                void DescribeDspmIdentifyComplianceCategoryRuleListAsync(const Model::DescribeDspmIdentifyComplianceCategoryRuleListRequest& request, const DescribeDspmIdentifyComplianceCategoryRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyComplianceCategoryRuleListOutcomeCallable DescribeDspmIdentifyComplianceCategoryRuleListCallable(const Model::DescribeDspmIdentifyComplianceCategoryRuleListRequest& request);

                /**
                 *查询dspm识别模板详情
                 * @param req DescribeDspmIdentifyComplianceGroupDetailRequest
                 * @return DescribeDspmIdentifyComplianceGroupDetailOutcome
                 */
                DescribeDspmIdentifyComplianceGroupDetailOutcome DescribeDspmIdentifyComplianceGroupDetail(const Model::DescribeDspmIdentifyComplianceGroupDetailRequest &request);
                void DescribeDspmIdentifyComplianceGroupDetailAsync(const Model::DescribeDspmIdentifyComplianceGroupDetailRequest& request, const DescribeDspmIdentifyComplianceGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyComplianceGroupDetailOutcomeCallable DescribeDspmIdentifyComplianceGroupDetailCallable(const Model::DescribeDspmIdentifyComplianceGroupDetailRequest& request);

                /**
                 *查询dspm数据识别模板列表
                 * @param req DescribeDspmIdentifyComplianceGroupListRequest
                 * @return DescribeDspmIdentifyComplianceGroupListOutcome
                 */
                DescribeDspmIdentifyComplianceGroupListOutcome DescribeDspmIdentifyComplianceGroupList(const Model::DescribeDspmIdentifyComplianceGroupListRequest &request);
                void DescribeDspmIdentifyComplianceGroupListAsync(const Model::DescribeDspmIdentifyComplianceGroupListRequest& request, const DescribeDspmIdentifyComplianceGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyComplianceGroupListOutcomeCallable DescribeDspmIdentifyComplianceGroupListCallable(const Model::DescribeDspmIdentifyComplianceGroupListRequest& request);

                /**
                 *查询dspm数据识别分布统计
                 * @param req DescribeDspmIdentifyDistributionStatisticsRequest
                 * @return DescribeDspmIdentifyDistributionStatisticsOutcome
                 */
                DescribeDspmIdentifyDistributionStatisticsOutcome DescribeDspmIdentifyDistributionStatistics(const Model::DescribeDspmIdentifyDistributionStatisticsRequest &request);
                void DescribeDspmIdentifyDistributionStatisticsAsync(const Model::DescribeDspmIdentifyDistributionStatisticsRequest& request, const DescribeDspmIdentifyDistributionStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyDistributionStatisticsOutcomeCallable DescribeDspmIdentifyDistributionStatisticsCallable(const Model::DescribeDspmIdentifyDistributionStatisticsRequest& request);

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
                 *查询dspm数据识别分级组列表
                 * @param req DescribeDspmIdentifyLevelGroupListRequest
                 * @return DescribeDspmIdentifyLevelGroupListOutcome
                 */
                DescribeDspmIdentifyLevelGroupListOutcome DescribeDspmIdentifyLevelGroupList(const Model::DescribeDspmIdentifyLevelGroupListRequest &request);
                void DescribeDspmIdentifyLevelGroupListAsync(const Model::DescribeDspmIdentifyLevelGroupListRequest& request, const DescribeDspmIdentifyLevelGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyLevelGroupListOutcomeCallable DescribeDspmIdentifyLevelGroupListCallable(const Model::DescribeDspmIdentifyLevelGroupListRequest& request);

                /**
                 *查询dspm数据识别数据项详情
                 * @param req DescribeDspmIdentifyRuleDetailRequest
                 * @return DescribeDspmIdentifyRuleDetailOutcome
                 */
                DescribeDspmIdentifyRuleDetailOutcome DescribeDspmIdentifyRuleDetail(const Model::DescribeDspmIdentifyRuleDetailRequest &request);
                void DescribeDspmIdentifyRuleDetailAsync(const Model::DescribeDspmIdentifyRuleDetailRequest& request, const DescribeDspmIdentifyRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyRuleDetailOutcomeCallable DescribeDspmIdentifyRuleDetailCallable(const Model::DescribeDspmIdentifyRuleDetailRequest& request);

                /**
                 *查询dspm数据识别数据项列表
                 * @param req DescribeDspmIdentifyRuleListRequest
                 * @return DescribeDspmIdentifyRuleListOutcome
                 */
                DescribeDspmIdentifyRuleListOutcome DescribeDspmIdentifyRuleList(const Model::DescribeDspmIdentifyRuleListRequest &request);
                void DescribeDspmIdentifyRuleListAsync(const Model::DescribeDspmIdentifyRuleListRequest& request, const DescribeDspmIdentifyRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyRuleListOutcomeCallable DescribeDspmIdentifyRuleListCallable(const Model::DescribeDspmIdentifyRuleListRequest& request);

                /**
                 *查询dspm数据识别数据项验证结果
                 * @param req DescribeDspmIdentifyRuleTestResultRequest
                 * @return DescribeDspmIdentifyRuleTestResultOutcome
                 */
                DescribeDspmIdentifyRuleTestResultOutcome DescribeDspmIdentifyRuleTestResult(const Model::DescribeDspmIdentifyRuleTestResultRequest &request);
                void DescribeDspmIdentifyRuleTestResultAsync(const Model::DescribeDspmIdentifyRuleTestResultRequest& request, const DescribeDspmIdentifyRuleTestResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyRuleTestResultOutcomeCallable DescribeDspmIdentifyRuleTestResultCallable(const Model::DescribeDspmIdentifyRuleTestResultRequest& request);

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
                 *指定资产类型列表
                 * @param req DescribeDynamicAssetsRequest
                 * @return DescribeDynamicAssetsOutcome
                 */
                DescribeDynamicAssetsOutcome DescribeDynamicAssets(const Model::DescribeDynamicAssetsRequest &request);
                void DescribeDynamicAssetsAsync(const Model::DescribeDynamicAssetsRequest& request, const DescribeDynamicAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDynamicAssetsOutcomeCallable DescribeDynamicAssetsCallable(const Model::DescribeDynamicAssetsRequest& request);

                /**
                 *获取EDR策略列表
                 * @param req DescribeEDRRuleListRequest
                 * @return DescribeEDRRuleListOutcome
                 */
                DescribeEDRRuleListOutcome DescribeEDRRuleList(const Model::DescribeEDRRuleListRequest &request);
                void DescribeEDRRuleListAsync(const Model::DescribeEDRRuleListRequest& request, const DescribeEDRRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEDRRuleListOutcomeCallable DescribeEDRRuleListCallable(const Model::DescribeEDRRuleListRequest& request);

                /**
                 *查询扫描任务列表。Filter.Filters支持Name：Keyword(模糊OperatorType=9)、ScanType(MANUAL/CYCLE)、TaskType(HOST/CONTAINER)、Status(WAIT/SCANNING/FINISHED/FAILED/CANCELED)、AppId(账号)。
                 * @param req DescribeEDRScanRecordListRequest
                 * @return DescribeEDRScanRecordListOutcome
                 */
                DescribeEDRScanRecordListOutcome DescribeEDRScanRecordList(const Model::DescribeEDRScanRecordListRequest &request);
                void DescribeEDRScanRecordListAsync(const Model::DescribeEDRScanRecordListRequest& request, const DescribeEDRScanRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEDRScanRecordListOutcomeCallable DescribeEDRScanRecordListCallable(const Model::DescribeEDRScanRecordListRequest& request);

                /**
                 *查询扫描任务详情。Filter.Filters支持Name：Status（资产扫描状态，OperatorType=7 IN匹配，取值WAIT/SCANNING/FINISHED/FAILED）。
                 * @param req DescribeEDRScanTaskDetailRequest
                 * @return DescribeEDRScanTaskDetailOutcome
                 */
                DescribeEDRScanTaskDetailOutcome DescribeEDRScanTaskDetail(const Model::DescribeEDRScanTaskDetailRequest &request);
                void DescribeEDRScanTaskDetailAsync(const Model::DescribeEDRScanTaskDetailRequest& request, const DescribeEDRScanTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEDRScanTaskDetailOutcomeCallable DescribeEDRScanTaskDetailCallable(const Model::DescribeEDRScanTaskDetailRequest& request);

                /**
                 *获取EDR告警数量统计，供资产模块调用。根据传入的MemberId和InstanceIDs，查询EDR告警表并返回告警记录条数信息。当InstanceIDs为空时返回汇总统计，非空时按InstanceIDs粒度分别返回统计。
                 * @param req DescribeEdrAlertCountForAssetRequest
                 * @return DescribeEdrAlertCountForAssetOutcome
                 */
                DescribeEdrAlertCountForAssetOutcome DescribeEdrAlertCountForAsset(const Model::DescribeEdrAlertCountForAssetRequest &request);
                void DescribeEdrAlertCountForAssetAsync(const Model::DescribeEdrAlertCountForAssetRequest& request, const DescribeEdrAlertCountForAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrAlertCountForAssetOutcomeCallable DescribeEdrAlertCountForAssetCallable(const Model::DescribeEdrAlertCountForAssetRequest& request);

                /**
                 *容器场景告警数量统计
                 * @param req DescribeEdrAlertCountForContainerRequest
                 * @return DescribeEdrAlertCountForContainerOutcome
                 */
                DescribeEdrAlertCountForContainerOutcome DescribeEdrAlertCountForContainer(const Model::DescribeEdrAlertCountForContainerRequest &request);
                void DescribeEdrAlertCountForContainerAsync(const Model::DescribeEdrAlertCountForContainerRequest& request, const DescribeEdrAlertCountForContainerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrAlertCountForContainerOutcomeCallable DescribeEdrAlertCountForContainerCallable(const Model::DescribeEdrAlertCountForContainerRequest& request);

                /**
                 *获取EDR告警详情，包含告警内容JSON、资产富化、情报富化等完整信息
                 * @param req DescribeEdrAlertInfoRequest
                 * @return DescribeEdrAlertInfoOutcome
                 */
                DescribeEdrAlertInfoOutcome DescribeEdrAlertInfo(const Model::DescribeEdrAlertInfoRequest &request);
                void DescribeEdrAlertInfoAsync(const Model::DescribeEdrAlertInfoRequest& request, const DescribeEdrAlertInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrAlertInfoOutcomeCallable DescribeEdrAlertInfoCallable(const Model::DescribeEdrAlertInfoRequest& request);

                /**
                 *获取EDR告警列表
                 * @param req DescribeEdrAlertListRequest
                 * @return DescribeEdrAlertListOutcome
                 */
                DescribeEdrAlertListOutcome DescribeEdrAlertList(const Model::DescribeEdrAlertListRequest &request);
                void DescribeEdrAlertListAsync(const Model::DescribeEdrAlertListRequest& request, const DescribeEdrAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrAlertListOutcomeCallable DescribeEdrAlertListCallable(const Model::DescribeEdrAlertListRequest& request);

                /**
                 *EDR告警多攻击阶段查询
                 * @param req DescribeEdrAlertMultiAttackStagesRequest
                 * @return DescribeEdrAlertMultiAttackStagesOutcome
                 */
                DescribeEdrAlertMultiAttackStagesOutcome DescribeEdrAlertMultiAttackStages(const Model::DescribeEdrAlertMultiAttackStagesRequest &request);
                void DescribeEdrAlertMultiAttackStagesAsync(const Model::DescribeEdrAlertMultiAttackStagesRequest& request, const DescribeEdrAlertMultiAttackStagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrAlertMultiAttackStagesOutcomeCallable DescribeEdrAlertMultiAttackStagesCallable(const Model::DescribeEdrAlertMultiAttackStagesRequest& request);

                /**
                 *获取EDR告警统计
                 * @param req DescribeEdrAlertSummaryRequest
                 * @return DescribeEdrAlertSummaryOutcome
                 */
                DescribeEdrAlertSummaryOutcome DescribeEdrAlertSummary(const Model::DescribeEdrAlertSummaryRequest &request);
                void DescribeEdrAlertSummaryAsync(const Model::DescribeEdrAlertSummaryRequest& request, const DescribeEdrAlertSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrAlertSummaryOutcomeCallable DescribeEdrAlertSummaryCallable(const Model::DescribeEdrAlertSummaryRequest& request);

                /**
                 *EDR告警标签批量查询
                 * @param req DescribeEdrAlertThreatTagsRequest
                 * @return DescribeEdrAlertThreatTagsOutcome
                 */
                DescribeEdrAlertThreatTagsOutcome DescribeEdrAlertThreatTags(const Model::DescribeEdrAlertThreatTagsRequest &request);
                void DescribeEdrAlertThreatTagsAsync(const Model::DescribeEdrAlertThreatTagsRequest& request, const DescribeEdrAlertThreatTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrAlertThreatTagsOutcomeCallable DescribeEdrAlertThreatTagsCallable(const Model::DescribeEdrAlertThreatTagsRequest& request);

                /**
                 *查询EDR日志采集例外网段配置，添加至例外名单的网段，其TCP日志将不被采集。如果用户未配置过，则返回系统推荐的默认网段
                 * @param req DescribeEdrExcludeNetworkSegmentsRequest
                 * @return DescribeEdrExcludeNetworkSegmentsOutcome
                 */
                DescribeEdrExcludeNetworkSegmentsOutcome DescribeEdrExcludeNetworkSegments(const Model::DescribeEdrExcludeNetworkSegmentsRequest &request);
                void DescribeEdrExcludeNetworkSegmentsAsync(const Model::DescribeEdrExcludeNetworkSegmentsRequest& request, const DescribeEdrExcludeNetworkSegmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrExcludeNetworkSegmentsOutcomeCallable DescribeEdrExcludeNetworkSegmentsCallable(const Model::DescribeEdrExcludeNetworkSegmentsRequest& request);

                /**
                 *获取EDR导出下载链接
                 * @param req DescribeEdrExportJobDownloadURLRequest
                 * @return DescribeEdrExportJobDownloadURLOutcome
                 */
                DescribeEdrExportJobDownloadURLOutcome DescribeEdrExportJobDownloadURL(const Model::DescribeEdrExportJobDownloadURLRequest &request);
                void DescribeEdrExportJobDownloadURLAsync(const Model::DescribeEdrExportJobDownloadURLRequest& request, const DescribeEdrExportJobDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrExportJobDownloadURLOutcomeCallable DescribeEdrExportJobDownloadURLCallable(const Model::DescribeEdrExportJobDownloadURLRequest& request);

                /**
                 *导出EDR任务列表
                 * @param req DescribeEdrExportJobListRequest
                 * @return DescribeEdrExportJobListOutcome
                 */
                DescribeEdrExportJobListOutcome DescribeEdrExportJobList(const Model::DescribeEdrExportJobListRequest &request);
                void DescribeEdrExportJobListAsync(const Model::DescribeEdrExportJobListRequest& request, const DescribeEdrExportJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrExportJobListOutcomeCallable DescribeEdrExportJobListCallable(const Model::DescribeEdrExportJobListRequest& request);

                /**
                 *查询采集路径配置
                 * @param req DescribeEdrLogCollectPathsRequest
                 * @return DescribeEdrLogCollectPathsOutcome
                 */
                DescribeEdrLogCollectPathsOutcome DescribeEdrLogCollectPaths(const Model::DescribeEdrLogCollectPathsRequest &request);
                void DescribeEdrLogCollectPathsAsync(const Model::DescribeEdrLogCollectPathsRequest& request, const DescribeEdrLogCollectPathsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrLogCollectPathsOutcomeCallable DescribeEdrLogCollectPathsCallable(const Model::DescribeEdrLogCollectPathsRequest& request);

                /**
                 *导出任务结果下载URL
                 * @param req DescribeExportJobDownloadURLRequest
                 * @return DescribeExportJobDownloadURLOutcome
                 */
                DescribeExportJobDownloadURLOutcome DescribeExportJobDownloadURL(const Model::DescribeExportJobDownloadURLRequest &request);
                void DescribeExportJobDownloadURLAsync(const Model::DescribeExportJobDownloadURLRequest& request, const DescribeExportJobDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExportJobDownloadURLOutcomeCallable DescribeExportJobDownloadURLCallable(const Model::DescribeExportJobDownloadURLRequest& request);

                /**
                 *导出任务列表
                 * @param req DescribeExportJobManageListRequest
                 * @return DescribeExportJobManageListOutcome
                 */
                DescribeExportJobManageListOutcome DescribeExportJobManageList(const Model::DescribeExportJobManageListRequest &request);
                void DescribeExportJobManageListAsync(const Model::DescribeExportJobManageListRequest& request, const DescribeExportJobManageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExportJobManageListOutcomeCallable DescribeExportJobManageListCallable(const Model::DescribeExportJobManageListRequest& request);

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
                 *云边界风险待治理风险
                 * @param req DescribeExposeRiskStatisticsRequest
                 * @return DescribeExposeRiskStatisticsOutcome
                 */
                DescribeExposeRiskStatisticsOutcome DescribeExposeRiskStatistics(const Model::DescribeExposeRiskStatisticsRequest &request);
                void DescribeExposeRiskStatisticsAsync(const Model::DescribeExposeRiskStatisticsRequest& request, const DescribeExposeRiskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposeRiskStatisticsOutcomeCallable DescribeExposeRiskStatisticsCallable(const Model::DescribeExposeRiskStatisticsRequest& request);

                /**
                 *云边界待处理风险列表
                 * @param req DescribeExposeRisksRequest
                 * @return DescribeExposeRisksOutcome
                 */
                DescribeExposeRisksOutcome DescribeExposeRisks(const Model::DescribeExposeRisksRequest &request);
                void DescribeExposeRisksAsync(const Model::DescribeExposeRisksRequest& request, const DescribeExposeRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposeRisksOutcomeCallable DescribeExposeRisksCallable(const Model::DescribeExposeRisksRequest& request);

                /**
                 *边界规则列表
                 * @param req DescribeExposeRulesRequest
                 * @return DescribeExposeRulesOutcome
                 */
                DescribeExposeRulesOutcome DescribeExposeRules(const Model::DescribeExposeRulesRequest &request);
                void DescribeExposeRulesAsync(const Model::DescribeExposeRulesRequest& request, const DescribeExposeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposeRulesOutcomeCallable DescribeExposeRulesCallable(const Model::DescribeExposeRulesRequest& request);

                /**
                 *云边界自动打标-规则属性
                 * @param req DescribeExposureAutoTagAttributeRequest
                 * @return DescribeExposureAutoTagAttributeOutcome
                 */
                DescribeExposureAutoTagAttributeOutcome DescribeExposureAutoTagAttribute(const Model::DescribeExposureAutoTagAttributeRequest &request);
                void DescribeExposureAutoTagAttributeAsync(const Model::DescribeExposureAutoTagAttributeRequest& request, const DescribeExposureAutoTagAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposureAutoTagAttributeOutcomeCallable DescribeExposureAutoTagAttributeCallable(const Model::DescribeExposureAutoTagAttributeRequest& request);

                /**
                 *云边界自动打标-规则列表
                 * @param req DescribeExposureAutoTagRulesRequest
                 * @return DescribeExposureAutoTagRulesOutcome
                 */
                DescribeExposureAutoTagRulesOutcome DescribeExposureAutoTagRules(const Model::DescribeExposureAutoTagRulesRequest &request);
                void DescribeExposureAutoTagRulesAsync(const Model::DescribeExposureAutoTagRulesRequest& request, const DescribeExposureAutoTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposureAutoTagRulesOutcomeCallable DescribeExposureAutoTagRulesCallable(const Model::DescribeExposureAutoTagRulesRequest& request);

                /**
                 *查询互联网暴露周期数量趋势统计信息
                 * @param req DescribeExposureTrendRequest
                 * @return DescribeExposureTrendOutcome
                 */
                DescribeExposureTrendOutcome DescribeExposureTrend(const Model::DescribeExposureTrendRequest &request);
                void DescribeExposureTrendAsync(const Model::DescribeExposureTrendRequest& request, const DescribeExposureTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposureTrendOutcomeCallable DescribeExposureTrendCallable(const Model::DescribeExposureTrendRequest& request);

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
                 *获取主机kb风险列表
                 * @param req DescribeHostKBRiskListRequest
                 * @return DescribeHostKBRiskListOutcome
                 */
                DescribeHostKBRiskListOutcome DescribeHostKBRiskList(const Model::DescribeHostKBRiskListRequest &request);
                void DescribeHostKBRiskListAsync(const Model::DescribeHostKBRiskListRequest& request, const DescribeHostKBRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostKBRiskListOutcomeCallable DescribeHostKBRiskListCallable(const Model::DescribeHostKBRiskListRequest& request);

                /**
                 *获取主机漏洞VPR信息
                 * @param req DescribeHostVulItemVPRInfoRequest
                 * @return DescribeHostVulItemVPRInfoOutcome
                 */
                DescribeHostVulItemVPRInfoOutcome DescribeHostVulItemVPRInfo(const Model::DescribeHostVulItemVPRInfoRequest &request);
                void DescribeHostVulItemVPRInfoAsync(const Model::DescribeHostVulItemVPRInfoRequest& request, const DescribeHostVulItemVPRInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostVulItemVPRInfoOutcomeCallable DescribeHostVulItemVPRInfoCallable(const Model::DescribeHostVulItemVPRInfoRequest& request);

                /**
                 *获取主机漏洞概览
                 * @param req DescribeHostVulOverviewRequest
                 * @return DescribeHostVulOverviewOutcome
                 */
                DescribeHostVulOverviewOutcome DescribeHostVulOverview(const Model::DescribeHostVulOverviewRequest &request);
                void DescribeHostVulOverviewAsync(const Model::DescribeHostVulOverviewRequest& request, const DescribeHostVulOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostVulOverviewOutcomeCallable DescribeHostVulOverviewCallable(const Model::DescribeHostVulOverviewRequest& request);

                /**
                 *获取主机漏洞风险列表
                 * @param req DescribeHostVulRiskListRequest
                 * @return DescribeHostVulRiskListOutcome
                 */
                DescribeHostVulRiskListOutcome DescribeHostVulRiskList(const Model::DescribeHostVulRiskListRequest &request);
                void DescribeHostVulRiskListAsync(const Model::DescribeHostVulRiskListRequest& request, const DescribeHostVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostVulRiskListOutcomeCallable DescribeHostVulRiskListCallable(const Model::DescribeHostVulRiskListRequest& request);

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
                 *查询镜像资产详情
                 * @param req DescribeImageAssetDetailRequest
                 * @return DescribeImageAssetDetailOutcome
                 */
                DescribeImageAssetDetailOutcome DescribeImageAssetDetail(const Model::DescribeImageAssetDetailRequest &request);
                void DescribeImageAssetDetailAsync(const Model::DescribeImageAssetDetailRequest& request, const DescribeImageAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAssetDetailOutcomeCallable DescribeImageAssetDetailCallable(const Model::DescribeImageAssetDetailRequest& request);

                /**
                 *查询镜像资产列表
                 * @param req DescribeImageAssetListRequest
                 * @return DescribeImageAssetListOutcome
                 */
                DescribeImageAssetListOutcome DescribeImageAssetList(const Model::DescribeImageAssetListRequest &request);
                void DescribeImageAssetListAsync(const Model::DescribeImageAssetListRequest& request, const DescribeImageAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAssetListOutcomeCallable DescribeImageAssetListCallable(const Model::DescribeImageAssetListRequest& request);

                /**
                 *查询镜像关联资产数
                 * @param req DescribeImageAssociatedAssetCountRequest
                 * @return DescribeImageAssociatedAssetCountOutcome
                 */
                DescribeImageAssociatedAssetCountOutcome DescribeImageAssociatedAssetCount(const Model::DescribeImageAssociatedAssetCountRequest &request);
                void DescribeImageAssociatedAssetCountAsync(const Model::DescribeImageAssociatedAssetCountRequest& request, const DescribeImageAssociatedAssetCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAssociatedAssetCountOutcomeCallable DescribeImageAssociatedAssetCountCallable(const Model::DescribeImageAssociatedAssetCountRequest& request);

                /**
                 *查询镜像关联容器资产
                 * @param req DescribeImageAssociatedContainerListRequest
                 * @return DescribeImageAssociatedContainerListOutcome
                 */
                DescribeImageAssociatedContainerListOutcome DescribeImageAssociatedContainerList(const Model::DescribeImageAssociatedContainerListRequest &request);
                void DescribeImageAssociatedContainerListAsync(const Model::DescribeImageAssociatedContainerListRequest& request, const DescribeImageAssociatedContainerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAssociatedContainerListOutcomeCallable DescribeImageAssociatedContainerListCallable(const Model::DescribeImageAssociatedContainerListRequest& request);

                /**
                 *查询镜像关联主机资产列表
                 * @param req DescribeImageAssociatedHostListRequest
                 * @return DescribeImageAssociatedHostListOutcome
                 */
                DescribeImageAssociatedHostListOutcome DescribeImageAssociatedHostList(const Model::DescribeImageAssociatedHostListRequest &request);
                void DescribeImageAssociatedHostListAsync(const Model::DescribeImageAssociatedHostListRequest& request, const DescribeImageAssociatedHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAssociatedHostListOutcomeCallable DescribeImageAssociatedHostListCallable(const Model::DescribeImageAssociatedHostListRequest& request);

                /**
                 *查询镜像组件列表
                 * @param req DescribeImageComponentListRequest
                 * @return DescribeImageComponentListOutcome
                 */
                DescribeImageComponentListOutcome DescribeImageComponentList(const Model::DescribeImageComponentListRequest &request);
                void DescribeImageComponentListAsync(const Model::DescribeImageComponentListRequest& request, const DescribeImageComponentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageComponentListOutcomeCallable DescribeImageComponentListCallable(const Model::DescribeImageComponentListRequest& request);

                /**
                 *查询镜像仓库导出任务列表
                 * @param req DescribeImageExportJobListRequest
                 * @return DescribeImageExportJobListOutcome
                 */
                DescribeImageExportJobListOutcome DescribeImageExportJobList(const Model::DescribeImageExportJobListRequest &request);
                void DescribeImageExportJobListAsync(const Model::DescribeImageExportJobListRequest& request, const DescribeImageExportJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageExportJobListOutcomeCallable DescribeImageExportJobListCallable(const Model::DescribeImageExportJobListRequest& request);

                /**
                 *查询镜像层信息列表
                 * @param req DescribeImageLayerListRequest
                 * @return DescribeImageLayerListOutcome
                 */
                DescribeImageLayerListOutcome DescribeImageLayerList(const Model::DescribeImageLayerListRequest &request);
                void DescribeImageLayerListAsync(const Model::DescribeImageLayerListRequest& request, const DescribeImageLayerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageLayerListOutcomeCallable DescribeImageLayerListCallable(const Model::DescribeImageLayerListRequest& request);

                /**
                 *查询镜像层漏洞列表
                 * @param req DescribeImageLayerVulListRequest
                 * @return DescribeImageLayerVulListOutcome
                 */
                DescribeImageLayerVulListOutcome DescribeImageLayerVulList(const Model::DescribeImageLayerVulListRequest &request);
                void DescribeImageLayerVulListAsync(const Model::DescribeImageLayerVulListRequest& request, const DescribeImageLayerVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageLayerVulListOutcomeCallable DescribeImageLayerVulListCallable(const Model::DescribeImageLayerVulListRequest& request);

                /**
                 *查询镜像仓库资产总览
                 * @param req DescribeImageRegistryAssetOverviewRequest
                 * @return DescribeImageRegistryAssetOverviewOutcome
                 */
                DescribeImageRegistryAssetOverviewOutcome DescribeImageRegistryAssetOverview(const Model::DescribeImageRegistryAssetOverviewRequest &request);
                void DescribeImageRegistryAssetOverviewAsync(const Model::DescribeImageRegistryAssetOverviewRequest& request, const DescribeImageRegistryAssetOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryAssetOverviewOutcomeCallable DescribeImageRegistryAssetOverviewCallable(const Model::DescribeImageRegistryAssetOverviewRequest& request);

                /**
                 *查询镜像仓库联通性检查任务结果
                 * @param req DescribeImageRegistryConnectivityTaskResultRequest
                 * @return DescribeImageRegistryConnectivityTaskResultOutcome
                 */
                DescribeImageRegistryConnectivityTaskResultOutcome DescribeImageRegistryConnectivityTaskResult(const Model::DescribeImageRegistryConnectivityTaskResultRequest &request);
                void DescribeImageRegistryConnectivityTaskResultAsync(const Model::DescribeImageRegistryConnectivityTaskResultRequest& request, const DescribeImageRegistryConnectivityTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryConnectivityTaskResultOutcomeCallable DescribeImageRegistryConnectivityTaskResultCallable(const Model::DescribeImageRegistryConnectivityTaskResultRequest& request);

                /**
                 *查询镜像仓库列表
                 * @param req DescribeImageRegistryListRequest
                 * @return DescribeImageRegistryListOutcome
                 */
                DescribeImageRegistryListOutcome DescribeImageRegistryList(const Model::DescribeImageRegistryListRequest &request);
                void DescribeImageRegistryListAsync(const Model::DescribeImageRegistryListRequest& request, const DescribeImageRegistryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryListOutcomeCallable DescribeImageRegistryListCallable(const Model::DescribeImageRegistryListRequest& request);

                /**
                 *查询镜像仓库命名空间列表
                 * @param req DescribeImageRegistryNamespaceListRequest
                 * @return DescribeImageRegistryNamespaceListOutcome
                 */
                DescribeImageRegistryNamespaceListOutcome DescribeImageRegistryNamespaceList(const Model::DescribeImageRegistryNamespaceListRequest &request);
                void DescribeImageRegistryNamespaceListAsync(const Model::DescribeImageRegistryNamespaceListRequest& request, const DescribeImageRegistryNamespaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryNamespaceListOutcomeCallable DescribeImageRegistryNamespaceListCallable(const Model::DescribeImageRegistryNamespaceListRequest& request);

                /**
                 *查询镜像仓库扫描子任务信息
                 * @param req DescribeImageRegistryScanSubTaskListRequest
                 * @return DescribeImageRegistryScanSubTaskListOutcome
                 */
                DescribeImageRegistryScanSubTaskListOutcome DescribeImageRegistryScanSubTaskList(const Model::DescribeImageRegistryScanSubTaskListRequest &request);
                void DescribeImageRegistryScanSubTaskListAsync(const Model::DescribeImageRegistryScanSubTaskListRequest& request, const DescribeImageRegistryScanSubTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryScanSubTaskListOutcomeCallable DescribeImageRegistryScanSubTaskListCallable(const Model::DescribeImageRegistryScanSubTaskListRequest& request);

                /**
                 *查询镜像仓库镜像扫描任务列表
                 * @param req DescribeImageRegistryScanTaskListRequest
                 * @return DescribeImageRegistryScanTaskListOutcome
                 */
                DescribeImageRegistryScanTaskListOutcome DescribeImageRegistryScanTaskList(const Model::DescribeImageRegistryScanTaskListRequest &request);
                void DescribeImageRegistryScanTaskListAsync(const Model::DescribeImageRegistryScanTaskListRequest& request, const DescribeImageRegistryScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryScanTaskListOutcomeCallable DescribeImageRegistryScanTaskListCallable(const Model::DescribeImageRegistryScanTaskListRequest& request);

                /**
                 *查看镜像仓库定时扫描任务配置
                 * @param req DescribeImageRegistryTimedScanTaskConfigRequest
                 * @return DescribeImageRegistryTimedScanTaskConfigOutcome
                 */
                DescribeImageRegistryTimedScanTaskConfigOutcome DescribeImageRegistryTimedScanTaskConfig(const Model::DescribeImageRegistryTimedScanTaskConfigRequest &request);
                void DescribeImageRegistryTimedScanTaskConfigAsync(const Model::DescribeImageRegistryTimedScanTaskConfigRequest& request, const DescribeImageRegistryTimedScanTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryTimedScanTaskConfigOutcomeCallable DescribeImageRegistryTimedScanTaskConfigCallable(const Model::DescribeImageRegistryTimedScanTaskConfigRequest& request);

                /**
                 *查询镜像仓库定时扫描任务预览
                 * @param req DescribeImageRegistryTimedScanTaskPreviewRequest
                 * @return DescribeImageRegistryTimedScanTaskPreviewOutcome
                 */
                DescribeImageRegistryTimedScanTaskPreviewOutcome DescribeImageRegistryTimedScanTaskPreview(const Model::DescribeImageRegistryTimedScanTaskPreviewRequest &request);
                void DescribeImageRegistryTimedScanTaskPreviewAsync(const Model::DescribeImageRegistryTimedScanTaskPreviewRequest& request, const DescribeImageRegistryTimedScanTaskPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryTimedScanTaskPreviewOutcomeCallable DescribeImageRegistryTimedScanTaskPreviewCallable(const Model::DescribeImageRegistryTimedScanTaskPreviewRequest& request);

                /**
                 *查询镜像敏感信息列表
                 * @param req DescribeImageSensitiveInfoListRequest
                 * @return DescribeImageSensitiveInfoListOutcome
                 */
                DescribeImageSensitiveInfoListOutcome DescribeImageSensitiveInfoList(const Model::DescribeImageSensitiveInfoListRequest &request);
                void DescribeImageSensitiveInfoListAsync(const Model::DescribeImageSensitiveInfoListRequest& request, const DescribeImageSensitiveInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageSensitiveInfoListOutcomeCallable DescribeImageSensitiveInfoListCallable(const Model::DescribeImageSensitiveInfoListRequest& request);

                /**
                 *查询容器镜像敏感信息白名单
                 * @param req DescribeImageSensitiveWhitelistRequest
                 * @return DescribeImageSensitiveWhitelistOutcome
                 */
                DescribeImageSensitiveWhitelistOutcome DescribeImageSensitiveWhitelist(const Model::DescribeImageSensitiveWhitelistRequest &request);
                void DescribeImageSensitiveWhitelistAsync(const Model::DescribeImageSensitiveWhitelistRequest& request, const DescribeImageSensitiveWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageSensitiveWhitelistOutcomeCallable DescribeImageSensitiveWhitelistCallable(const Model::DescribeImageSensitiveWhitelistRequest& request);

                /**
                 *查询镜像木马病毒列表
                 * @param req DescribeImageVirusListRequest
                 * @return DescribeImageVirusListOutcome
                 */
                DescribeImageVirusListOutcome DescribeImageVirusList(const Model::DescribeImageVirusListRequest &request);
                void DescribeImageVirusListAsync(const Model::DescribeImageVirusListRequest& request, const DescribeImageVirusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageVirusListOutcomeCallable DescribeImageVirusListCallable(const Model::DescribeImageVirusListRequest& request);

                /**
                 *查询镜像木马白名单
                 * @param req DescribeImageVirusWhitelistRequest
                 * @return DescribeImageVirusWhitelistOutcome
                 */
                DescribeImageVirusWhitelistOutcome DescribeImageVirusWhitelist(const Model::DescribeImageVirusWhitelistRequest &request);
                void DescribeImageVirusWhitelistAsync(const Model::DescribeImageVirusWhitelistRequest& request, const DescribeImageVirusWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageVirusWhitelistOutcomeCallable DescribeImageVirusWhitelistCallable(const Model::DescribeImageVirusWhitelistRequest& request);

                /**
                 *查询镜像木马白名单详情
                 * @param req DescribeImageVirusWhitelistDetailRequest
                 * @return DescribeImageVirusWhitelistDetailOutcome
                 */
                DescribeImageVirusWhitelistDetailOutcome DescribeImageVirusWhitelistDetail(const Model::DescribeImageVirusWhitelistDetailRequest &request);
                void DescribeImageVirusWhitelistDetailAsync(const Model::DescribeImageVirusWhitelistDetailRequest& request, const DescribeImageVirusWhitelistDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageVirusWhitelistDetailOutcomeCallable DescribeImageVirusWhitelistDetailCallable(const Model::DescribeImageVirusWhitelistDetailRequest& request);

                /**
                 *查询镜像漏洞列表
                 * @param req DescribeImageVulListRequest
                 * @return DescribeImageVulListOutcome
                 */
                DescribeImageVulListOutcome DescribeImageVulList(const Model::DescribeImageVulListRequest &request);
                void DescribeImageVulListAsync(const Model::DescribeImageVulListRequest& request, const DescribeImageVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageVulListOutcomeCallable DescribeImageVulListCallable(const Model::DescribeImageVulListRequest& request);

                /**
                 *查询镜像漏洞概览列表
                 * @param req DescribeImageVulSummaryListRequest
                 * @return DescribeImageVulSummaryListOutcome
                 */
                DescribeImageVulSummaryListOutcome DescribeImageVulSummaryList(const Model::DescribeImageVulSummaryListRequest &request);
                void DescribeImageVulSummaryListAsync(const Model::DescribeImageVulSummaryListRequest& request, const DescribeImageVulSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageVulSummaryListOutcomeCallable DescribeImageVulSummaryListCallable(const Model::DescribeImageVulSummaryListRequest& request);

                /**
                 *查询容器镜像漏洞白名单
                 * @param req DescribeImageVulWhitelistRequest
                 * @return DescribeImageVulWhitelistOutcome
                 */
                DescribeImageVulWhitelistOutcome DescribeImageVulWhitelist(const Model::DescribeImageVulWhitelistRequest &request);
                void DescribeImageVulWhitelistAsync(const Model::DescribeImageVulWhitelistRequest& request, const DescribeImageVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageVulWhitelistOutcomeCallable DescribeImageVulWhitelistCallable(const Model::DescribeImageVulWhitelistRequest& request);

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
                 *根据用户输入的 KB 内部 ID 查询单个 Windows KB 补丁的详情信息，返回 KB 基本信息、发布时间、是否需要重启，以及该 KB 关联的漏洞列表。
                 * @param req DescribeKBDetailRequest
                 * @return DescribeKBDetailOutcome
                 */
                DescribeKBDetailOutcome DescribeKBDetail(const Model::DescribeKBDetailRequest &request);
                void DescribeKBDetailAsync(const Model::DescribeKBDetailRequest& request, const DescribeKBDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKBDetailOutcomeCallable DescribeKBDetailCallable(const Model::DescribeKBDetailRequest& request);

                /**
                 *查询指定KB补丁可以更新的主机列表。用于Windows系统补丁修复场景，在用户提交KB补丁更新任务前，查询哪些主机缺少该补丁且支持自动更新。
                 * @param req DescribeKBUpdatableMachineListRequest
                 * @return DescribeKBUpdatableMachineListOutcome
                 */
                DescribeKBUpdatableMachineListOutcome DescribeKBUpdatableMachineList(const Model::DescribeKBUpdatableMachineListRequest &request);
                void DescribeKBUpdatableMachineListAsync(const Model::DescribeKBUpdatableMachineListRequest& request, const DescribeKBUpdatableMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKBUpdatableMachineListOutcomeCallable DescribeKBUpdatableMachineListCallable(const Model::DescribeKBUpdatableMachineListRequest& request);

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
                 *获取最近一次立即检测任务信息
                 * @param req DescribeLastScanTaskInfoRequest
                 * @return DescribeLastScanTaskInfoOutcome
                 */
                DescribeLastScanTaskInfoOutcome DescribeLastScanTaskInfo(const Model::DescribeLastScanTaskInfoRequest &request);
                void DescribeLastScanTaskInfoAsync(const Model::DescribeLastScanTaskInfoRequest& request, const DescribeLastScanTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLastScanTaskInfoOutcomeCallable DescribeLastScanTaskInfoCallable(const Model::DescribeLastScanTaskInfoRequest& request);

                /**
                 *查询当前账号下所有有效授权的汇总状态，按计费项分组返回总数、已用、剩余及到期时间，同时返回自动加购开关状态和合并剩余解绑次数。输出顺序固定为：旗舰版 → 专业版 → RASP → 其他。
                 * @param req DescribeLicenseStatusRequest
                 * @return DescribeLicenseStatusOutcome
                 */
                DescribeLicenseStatusOutcome DescribeLicenseStatus(const Model::DescribeLicenseStatusRequest &request);
                void DescribeLicenseStatusAsync(const Model::DescribeLicenseStatusRequest& request, const DescribeLicenseStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseStatusOutcomeCallable DescribeLicenseStatusCallable(const Model::DescribeLicenseStatusRequest& request);

                /**
                 *查询轻量应用服务器防火墙规则
                 * @param req DescribeLighthouseFirewallRulesRequest
                 * @return DescribeLighthouseFirewallRulesOutcome
                 */
                DescribeLighthouseFirewallRulesOutcome DescribeLighthouseFirewallRules(const Model::DescribeLighthouseFirewallRulesRequest &request);
                void DescribeLighthouseFirewallRulesAsync(const Model::DescribeLighthouseFirewallRulesRequest& request, const DescribeLighthouseFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLighthouseFirewallRulesOutcomeCallable DescribeLighthouseFirewallRulesCallable(const Model::DescribeLighthouseFirewallRulesRequest& request);

                /**
                 *查询clb监听器列表
                 * @param req DescribeListenerListRequest
                 * @return DescribeListenerListOutcome
                 */
                DescribeListenerListOutcome DescribeListenerList(const Model::DescribeListenerListRequest &request);
                void DescribeListenerListAsync(const Model::DescribeListenerListRequest& request, const DescribeListenerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenerListOutcomeCallable DescribeListenerListCallable(const Model::DescribeListenerListRequest& request);

                /**
                 *获取防卸载全局配置
                 * @param req DescribeLoginTypeGlobalConfRequest
                 * @return DescribeLoginTypeGlobalConfOutcome
                 */
                DescribeLoginTypeGlobalConfOutcome DescribeLoginTypeGlobalConf(const Model::DescribeLoginTypeGlobalConfRequest &request);
                void DescribeLoginTypeGlobalConfAsync(const Model::DescribeLoginTypeGlobalConfRequest& request, const DescribeLoginTypeGlobalConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginTypeGlobalConfOutcomeCallable DescribeLoginTypeGlobalConfCallable(const Model::DescribeLoginTypeGlobalConfRequest& request);

                /**
                 *获取扫码登录主机列表
                 * @param req DescribeLoginTypeHostRequest
                 * @return DescribeLoginTypeHostOutcome
                 */
                DescribeLoginTypeHostOutcome DescribeLoginTypeHost(const Model::DescribeLoginTypeHostRequest &request);
                void DescribeLoginTypeHostAsync(const Model::DescribeLoginTypeHostRequest& request, const DescribeLoginTypeHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginTypeHostOutcomeCallable DescribeLoginTypeHostCallable(const Model::DescribeLoginTypeHostRequest& request);

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
                 *查询机器清理历史记录
                 * @param req DescribeMachineClearHistoryRequest
                 * @return DescribeMachineClearHistoryOutcome
                 */
                DescribeMachineClearHistoryOutcome DescribeMachineClearHistory(const Model::DescribeMachineClearHistoryRequest &request);
                void DescribeMachineClearHistoryAsync(const Model::DescribeMachineClearHistoryRequest& request, const DescribeMachineClearHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineClearHistoryOutcomeCallable DescribeMachineClearHistoryCallable(const Model::DescribeMachineClearHistoryRequest& request);

                /**
                 *查询主机概览信息
                 * @param req DescribeMachineGeneralRequest
                 * @return DescribeMachineGeneralOutcome
                 */
                DescribeMachineGeneralOutcome DescribeMachineGeneral(const Model::DescribeMachineGeneralRequest &request);
                void DescribeMachineGeneralAsync(const Model::DescribeMachineGeneralRequest& request, const DescribeMachineGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineGeneralOutcomeCallable DescribeMachineGeneralCallable(const Model::DescribeMachineGeneralRequest& request);

                /**
                 *获取主机登录方式
                 * @param req DescribeMachineLoginTypeRequest
                 * @return DescribeMachineLoginTypeOutcome
                 */
                DescribeMachineLoginTypeOutcome DescribeMachineLoginType(const Model::DescribeMachineLoginTypeRequest &request);
                void DescribeMachineLoginTypeAsync(const Model::DescribeMachineLoginTypeRequest& request, const DescribeMachineLoginTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineLoginTypeOutcomeCallable DescribeMachineLoginTypeCallable(const Model::DescribeMachineLoginTypeRequest& request);

                /**
                 *查询文件查杀定时扫描配置
                 * @param req DescribeMalwareTimingScanSettingRequest
                 * @return DescribeMalwareTimingScanSettingOutcome
                 */
                DescribeMalwareTimingScanSettingOutcome DescribeMalwareTimingScanSetting(const Model::DescribeMalwareTimingScanSettingRequest &request);
                void DescribeMalwareTimingScanSettingAsync(const Model::DescribeMalwareTimingScanSettingRequest& request, const DescribeMalwareTimingScanSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareTimingScanSettingOutcomeCallable DescribeMalwareTimingScanSettingCallable(const Model::DescribeMalwareTimingScanSettingRequest& request);

                /**
                 *展示企业必修漏洞情报
                 * @param req DescribeMandatoryVulSetRequest
                 * @return DescribeMandatoryVulSetOutcome
                 */
                DescribeMandatoryVulSetOutcome DescribeMandatoryVulSet(const Model::DescribeMandatoryVulSetRequest &request);
                void DescribeMandatoryVulSetAsync(const Model::DescribeMandatoryVulSetRequest& request, const DescribeMandatoryVulSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMandatoryVulSetOutcomeCallable DescribeMandatoryVulSetCallable(const Model::DescribeMandatoryVulSetRequest& request);

                /**
                 *获取批量修改主机登录方式任务列表
                 * @param req DescribeModifyMachinesLoginTypeTasksRequest
                 * @return DescribeModifyMachinesLoginTypeTasksOutcome
                 */
                DescribeModifyMachinesLoginTypeTasksOutcome DescribeModifyMachinesLoginTypeTasks(const Model::DescribeModifyMachinesLoginTypeTasksRequest &request);
                void DescribeModifyMachinesLoginTypeTasksAsync(const Model::DescribeModifyMachinesLoginTypeTasksRequest& request, const DescribeModifyMachinesLoginTypeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModifyMachinesLoginTypeTasksOutcomeCallable DescribeModifyMachinesLoginTypeTasksCallable(const Model::DescribeModifyMachinesLoginTypeTasksRequest& request);

                /**
                 *获取多云（腾讯云、阿里云、AWS、华为云、Azure 等）接入的资产总数及各云厂商资产数量明细
                 * @param req DescribeMultiCloudAssetCountRequest
                 * @return DescribeMultiCloudAssetCountOutcome
                 */
                DescribeMultiCloudAssetCountOutcome DescribeMultiCloudAssetCount(const Model::DescribeMultiCloudAssetCountRequest &request);
                void DescribeMultiCloudAssetCountAsync(const Model::DescribeMultiCloudAssetCountRequest& request, const DescribeMultiCloudAssetCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMultiCloudAssetCountOutcomeCallable DescribeMultiCloudAssetCountCallable(const Model::DescribeMultiCloudAssetCountRequest& request);

                /**
                 *获取NFS扫描全局配置
                 * @param req DescribeNFSScanConfRequest
                 * @return DescribeNFSScanConfOutcome
                 */
                DescribeNFSScanConfOutcome DescribeNFSScanConf(const Model::DescribeNFSScanConfRequest &request);
                void DescribeNFSScanConfAsync(const Model::DescribeNFSScanConfRequest& request, const DescribeNFSScanConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNFSScanConfOutcomeCallable DescribeNFSScanConfCallable(const Model::DescribeNFSScanConfRequest& request);

                /**
                 *获取扫码登录主机列表
                 * @param req DescribeNFSScanHostRequest
                 * @return DescribeNFSScanHostOutcome
                 */
                DescribeNFSScanHostOutcome DescribeNFSScanHost(const Model::DescribeNFSScanHostRequest &request);
                void DescribeNFSScanHostAsync(const Model::DescribeNFSScanHostRequest& request, const DescribeNFSScanHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNFSScanHostOutcomeCallable DescribeNFSScanHostCallable(const Model::DescribeNFSScanHostRequest& request);

                /**
                 *获取网卡列表
                 * @param req DescribeNICAssetsRequest
                 * @return DescribeNICAssetsOutcome
                 */
                DescribeNICAssetsOutcome DescribeNICAssets(const Model::DescribeNICAssetsRequest &request);
                void DescribeNICAssetsAsync(const Model::DescribeNICAssetsRequest& request, const DescribeNICAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNICAssetsOutcomeCallable DescribeNICAssetsCallable(const Model::DescribeNICAssetsRequest& request);

                /**
                 *查询腾讯云nat网关实例对应的NAT策略
                 * @param req DescribeNatRulesRequest
                 * @return DescribeNatRulesOutcome
                 */
                DescribeNatRulesOutcome DescribeNatRules(const Model::DescribeNatRulesRequest &request);
                void DescribeNatRulesAsync(const Model::DescribeNatRulesRequest& request, const DescribeNatRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatRulesOutcomeCallable DescribeNatRulesCallable(const Model::DescribeNatRulesRequest& request);

                /**
                 *查询网络攻击检测开关及资产范围配置
                 * @param req DescribeNetAttackSettingRequest
                 * @return DescribeNetAttackSettingOutcome
                 */
                DescribeNetAttackSettingOutcome DescribeNetAttackSetting(const Model::DescribeNetAttackSettingRequest &request);
                void DescribeNetAttackSettingAsync(const Model::DescribeNetAttackSettingRequest& request, const DescribeNetAttackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetAttackSettingOutcomeCallable DescribeNetAttackSettingCallable(const Model::DescribeNetAttackSettingRequest& request);

                /**
                 *查询客户端离线时长
                 * @param req DescribeNotifyAgentOfflineDurationRequest
                 * @return DescribeNotifyAgentOfflineDurationOutcome
                 */
                DescribeNotifyAgentOfflineDurationOutcome DescribeNotifyAgentOfflineDuration(const Model::DescribeNotifyAgentOfflineDurationRequest &request);
                void DescribeNotifyAgentOfflineDurationAsync(const Model::DescribeNotifyAgentOfflineDurationRequest& request, const DescribeNotifyAgentOfflineDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotifyAgentOfflineDurationOutcomeCallable DescribeNotifyAgentOfflineDurationCallable(const Model::DescribeNotifyAgentOfflineDurationRequest& request);

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
                 *获取通知设置（云API风险治理）
                 * @param req DescribeNotifySettingAkRequest
                 * @return DescribeNotifySettingAkOutcome
                 */
                DescribeNotifySettingAkOutcome DescribeNotifySettingAk(const Model::DescribeNotifySettingAkRequest &request);
                void DescribeNotifySettingAkAsync(const Model::DescribeNotifySettingAkRequest& request, const DescribeNotifySettingAkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotifySettingAkOutcomeCallable DescribeNotifySettingAkCallable(const Model::DescribeNotifySettingAkRequest& request);

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
                 *查询 Pod 关联容器列表
                 * @param req DescribePodContainerListRequest
                 * @return DescribePodContainerListOutcome
                 */
                DescribePodContainerListOutcome DescribePodContainerList(const Model::DescribePodContainerListRequest &request);
                void DescribePodContainerListAsync(const Model::DescribePodContainerListRequest& request, const DescribePodContainerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePodContainerListOutcomeCallable DescribePodContainerListCallable(const Model::DescribePodContainerListRequest& request);

                /**
                 *按日期查看策略命中详情
                 * @param req DescribePolicyHitDataRequest
                 * @return DescribePolicyHitDataOutcome
                 */
                DescribePolicyHitDataOutcome DescribePolicyHitData(const Model::DescribePolicyHitDataRequest &request);
                void DescribePolicyHitDataAsync(const Model::DescribePolicyHitDataRequest& request, const DescribePolicyHitDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyHitDataOutcomeCallable DescribePolicyHitDataCallable(const Model::DescribePolicyHitDataRequest& request);

                /**
                 *端口探测列表
                 * @param req DescribePortDetectListRequest
                 * @return DescribePortDetectListOutcome
                 */
                DescribePortDetectListOutcome DescribePortDetectList(const Model::DescribePortDetectListRequest &request);
                void DescribePortDetectListAsync(const Model::DescribePortDetectListRequest& request, const DescribePortDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePortDetectListOutcomeCallable DescribePortDetectListCallable(const Model::DescribePortDetectListRequest& request);

                /**
                 *查询当前账号下端口扫描任务次数
                 * @param req DescribePortScanTaskCountRequest
                 * @return DescribePortScanTaskCountOutcome
                 */
                DescribePortScanTaskCountOutcome DescribePortScanTaskCount(const Model::DescribePortScanTaskCountRequest &request);
                void DescribePortScanTaskCountAsync(const Model::DescribePortScanTaskCountRequest& request, const DescribePortScanTaskCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePortScanTaskCountOutcomeCallable DescribePortScanTaskCountCallable(const Model::DescribePortScanTaskCountRequest& request);

                /**
                 *获取防卸载全局配置
                 * @param req DescribePreventUninstallGlobalConfRequest
                 * @return DescribePreventUninstallGlobalConfOutcome
                 */
                DescribePreventUninstallGlobalConfOutcome DescribePreventUninstallGlobalConf(const Model::DescribePreventUninstallGlobalConfRequest &request);
                void DescribePreventUninstallGlobalConfAsync(const Model::DescribePreventUninstallGlobalConfRequest& request, const DescribePreventUninstallGlobalConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePreventUninstallGlobalConfOutcomeCallable DescribePreventUninstallGlobalConfCallable(const Model::DescribePreventUninstallGlobalConfRequest& request);

                /**
                 *获取防卸载主机列表
                 * @param req DescribePreventUninstallHostRequest
                 * @return DescribePreventUninstallHostOutcome
                 */
                DescribePreventUninstallHostOutcome DescribePreventUninstallHost(const Model::DescribePreventUninstallHostRequest &request);
                void DescribePreventUninstallHostAsync(const Model::DescribePreventUninstallHostRequest& request, const DescribePreventUninstallHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePreventUninstallHostOutcomeCallable DescribePreventUninstallHostCallable(const Model::DescribePreventUninstallHostRequest& request);

                /**
                 *获取进程防护全局配置
                 * @param req DescribeProcessDaemonGlobalConfRequest
                 * @return DescribeProcessDaemonGlobalConfOutcome
                 */
                DescribeProcessDaemonGlobalConfOutcome DescribeProcessDaemonGlobalConf(const Model::DescribeProcessDaemonGlobalConfRequest &request);
                void DescribeProcessDaemonGlobalConfAsync(const Model::DescribeProcessDaemonGlobalConfRequest& request, const DescribeProcessDaemonGlobalConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcessDaemonGlobalConfOutcomeCallable DescribeProcessDaemonGlobalConfCallable(const Model::DescribeProcessDaemonGlobalConfRequest& request);

                /**
                 *获取进程守护主机列表
                 * @param req DescribeProcessDaemonHostRequest
                 * @return DescribeProcessDaemonHostOutcome
                 */
                DescribeProcessDaemonHostOutcome DescribeProcessDaemonHost(const Model::DescribeProcessDaemonHostRequest &request);
                void DescribeProcessDaemonHostAsync(const Model::DescribeProcessDaemonHostRequest& request, const DescribeProcessDaemonHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcessDaemonHostOutcomeCallable DescribeProcessDaemonHostCallable(const Model::DescribeProcessDaemonHostRequest& request);

                /**
                 *公网资产
                 * @param req DescribePublicCloudAssetsRequest
                 * @return DescribePublicCloudAssetsOutcome
                 */
                DescribePublicCloudAssetsOutcome DescribePublicCloudAssets(const Model::DescribePublicCloudAssetsRequest &request);
                void DescribePublicCloudAssetsAsync(const Model::DescribePublicCloudAssetsRequest& request, const DescribePublicCloudAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicCloudAssetsOutcomeCallable DescribePublicCloudAssetsCallable(const Model::DescribePublicCloudAssetsRequest& request);

                /**
                 *ip公网列表
                 * @param req DescribePublicIpAssetsRequest
                 * @return DescribePublicIpAssetsOutcome
                 */
                DescribePublicIpAssetsOutcome DescribePublicIpAssets(const Model::DescribePublicIpAssetsRequest &request);
                void DescribePublicIpAssetsAsync(const Model::DescribePublicIpAssetsRequest& request, const DescribePublicIpAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicIpAssetsOutcomeCallable DescribePublicIpAssetsCallable(const Model::DescribePublicIpAssetsRequest& request);

                /**
                 *查询应用防护授权列表
                 * @param req DescribeRaspLicenseListRequest
                 * @return DescribeRaspLicenseListOutcome
                 */
                DescribeRaspLicenseListOutcome DescribeRaspLicenseList(const Model::DescribeRaspLicenseListRequest &request);
                void DescribeRaspLicenseListAsync(const Model::DescribeRaspLicenseListRequest& request, const DescribeRaspLicenseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRaspLicenseListOutcomeCallable DescribeRaspLicenseListCallable(const Model::DescribeRaspLicenseListRequest& request);

                /**
                 *查询仓库总览
                 * @param req DescribeRegistryOverviewRequest
                 * @return DescribeRegistryOverviewOutcome
                 */
                DescribeRegistryOverviewOutcome DescribeRegistryOverview(const Model::DescribeRegistryOverviewRequest &request);
                void DescribeRegistryOverviewAsync(const Model::DescribeRegistryOverviewRequest& request, const DescribeRegistryOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegistryOverviewOutcomeCallable DescribeRegistryOverviewCallable(const Model::DescribeRegistryOverviewRequest& request);

                /**
                 *查询镜像仓库地域列表
                 * @param req DescribeRegistryRegionListRequest
                 * @return DescribeRegistryRegionListOutcome
                 */
                DescribeRegistryRegionListOutcome DescribeRegistryRegionList(const Model::DescribeRegistryRegionListRequest &request);
                void DescribeRegistryRegionListAsync(const Model::DescribeRegistryRegionListRequest& request, const DescribeRegistryRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegistryRegionListOutcomeCallable DescribeRegistryRegionListCallable(const Model::DescribeRegistryRegionListRequest& request);

                /**
                 *仓库镜像列表
                 * @param req DescribeRepositoryImageAssetsRequest
                 * @return DescribeRepositoryImageAssetsOutcome
                 */
                DescribeRepositoryImageAssetsOutcome DescribeRepositoryImageAssets(const Model::DescribeRepositoryImageAssetsRequest &request);
                void DescribeRepositoryImageAssetsAsync(const Model::DescribeRepositoryImageAssetsRequest& request, const DescribeRepositoryImageAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRepositoryImageAssetsOutcomeCallable DescribeRepositoryImageAssetsCallable(const Model::DescribeRepositoryImageAssetsRequest& request);

                /**
                 *查询反弹Shell内网告警与资产范围配置
                 * @param req DescribeReverseShellSystemPolicyConfigRequest
                 * @return DescribeReverseShellSystemPolicyConfigOutcome
                 */
                DescribeReverseShellSystemPolicyConfigOutcome DescribeReverseShellSystemPolicyConfig(const Model::DescribeReverseShellSystemPolicyConfigRequest &request);
                void DescribeReverseShellSystemPolicyConfigAsync(const Model::DescribeReverseShellSystemPolicyConfigRequest& request, const DescribeReverseShellSystemPolicyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReverseShellSystemPolicyConfigOutcomeCallable DescribeReverseShellSystemPolicyConfigCallable(const Model::DescribeReverseShellSystemPolicyConfigRequest& request);

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
                 *获取风险趋势分析示例
                 * @param req DescribeRiskCenterRiskTrendAnalysisRequest
                 * @return DescribeRiskCenterRiskTrendAnalysisOutcome
                 */
                DescribeRiskCenterRiskTrendAnalysisOutcome DescribeRiskCenterRiskTrendAnalysis(const Model::DescribeRiskCenterRiskTrendAnalysisRequest &request);
                void DescribeRiskCenterRiskTrendAnalysisAsync(const Model::DescribeRiskCenterRiskTrendAnalysisRequest& request, const DescribeRiskCenterRiskTrendAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterRiskTrendAnalysisOutcomeCallable DescribeRiskCenterRiskTrendAnalysisCallable(const Model::DescribeRiskCenterRiskTrendAnalysisRequest& request);

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
                 *获取风险扫描周期计划
                 * @param req DescribeRiskScanCronConfigRequest
                 * @return DescribeRiskScanCronConfigOutcome
                 */
                DescribeRiskScanCronConfigOutcome DescribeRiskScanCronConfig(const Model::DescribeRiskScanCronConfigRequest &request);
                void DescribeRiskScanCronConfigAsync(const Model::DescribeRiskScanCronConfigRequest& request, const DescribeRiskScanCronConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskScanCronConfigOutcomeCallable DescribeRiskScanCronConfigCallable(const Model::DescribeRiskScanCronConfigRequest& request);

                /**
                 *查看风险趋势图
                 * @param req DescribeRiskTrendDataRequest
                 * @return DescribeRiskTrendDataOutcome
                 */
                DescribeRiskTrendDataOutcome DescribeRiskTrendData(const Model::DescribeRiskTrendDataRequest &request);
                void DescribeRiskTrendDataAsync(const Model::DescribeRiskTrendDataRequest& request, const DescribeRiskTrendDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskTrendDataOutcomeCallable DescribeRiskTrendDataCallable(const Model::DescribeRiskTrendDataRequest& request);

                /**
                 *查询指定 SCF 函数下的别名列表。
                 * @param req DescribeSCFAliasListRequest
                 * @return DescribeSCFAliasListOutcome
                 */
                DescribeSCFAliasListOutcome DescribeSCFAliasList(const Model::DescribeSCFAliasListRequest &request);
                void DescribeSCFAliasListAsync(const Model::DescribeSCFAliasListRequest& request, const DescribeSCFAliasListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSCFAliasListOutcomeCallable DescribeSCFAliasListCallable(const Model::DescribeSCFAliasListRequest& request);

                /**
                 *查询指定命名空间下的 SCF 函数列表，仅返回 Event 触发器类型的函数。
                 * @param req DescribeSCFFunctionListRequest
                 * @return DescribeSCFFunctionListOutcome
                 */
                DescribeSCFFunctionListOutcome DescribeSCFFunctionList(const Model::DescribeSCFFunctionListRequest &request);
                void DescribeSCFFunctionListAsync(const Model::DescribeSCFFunctionListRequest& request, const DescribeSCFFunctionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSCFFunctionListOutcomeCallable DescribeSCFFunctionListCallable(const Model::DescribeSCFFunctionListRequest& request);

                /**
                 *查询指定 SCF 函数下的版本列表。
                 * @param req DescribeSCFFunctionVersionListRequest
                 * @return DescribeSCFFunctionVersionListOutcome
                 */
                DescribeSCFFunctionVersionListOutcome DescribeSCFFunctionVersionList(const Model::DescribeSCFFunctionVersionListRequest &request);
                void DescribeSCFFunctionVersionListAsync(const Model::DescribeSCFFunctionVersionListRequest& request, const DescribeSCFFunctionVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSCFFunctionVersionListOutcomeCallable DescribeSCFFunctionVersionListCallable(const Model::DescribeSCFFunctionVersionListRequest& request);

                /**
                 *查询当前用户在指定地域下的 SCF（云函数）命名空间列表。
                 * @param req DescribeSCFNamespaceListRequest
                 * @return DescribeSCFNamespaceListOutcome
                 */
                DescribeSCFNamespaceListOutcome DescribeSCFNamespaceList(const Model::DescribeSCFNamespaceListRequest &request);
                void DescribeSCFNamespaceListAsync(const Model::DescribeSCFNamespaceListRequest& request, const DescribeSCFNamespaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSCFNamespaceListOutcomeCallable DescribeSCFNamespaceListCallable(const Model::DescribeSCFNamespaceListRequest& request);

                /**
                 *分页查询 ACL 访问控制告警日志列表。支持按 Filter.Name=ID 精确过滤单条告警用于详情页场景
                 * @param req DescribeSandboxACLAlertListRequest
                 * @return DescribeSandboxACLAlertListOutcome
                 */
                DescribeSandboxACLAlertListOutcome DescribeSandboxACLAlertList(const Model::DescribeSandboxACLAlertListRequest &request);
                void DescribeSandboxACLAlertListAsync(const Model::DescribeSandboxACLAlertListRequest& request, const DescribeSandboxACLAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxACLAlertListOutcomeCallable DescribeSandboxACLAlertListCallable(const Model::DescribeSandboxACLAlertListRequest& request);

                /**
                 *查询当前租户的 ACL 用户访问控制规则列表。传入 Filter.Name=RuleID 可精确查询单条规则（用于详情页面场景）
                 * @param req DescribeSandboxACLRuleListRequest
                 * @return DescribeSandboxACLRuleListOutcome
                 */
                DescribeSandboxACLRuleListOutcome DescribeSandboxACLRuleList(const Model::DescribeSandboxACLRuleListRequest &request);
                void DescribeSandboxACLRuleListAsync(const Model::DescribeSandboxACLRuleListRequest& request, const DescribeSandboxACLRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxACLRuleListOutcomeCallable DescribeSandboxACLRuleListCallable(const Model::DescribeSandboxACLRuleListRequest& request);

                /**
                 *查询流量沙箱访问控制（ACL）系统规则列表，系统规则由 CSIP 平台内置，可被用户规则引用
                 * @param req DescribeSandboxACLSystemRuleListRequest
                 * @return DescribeSandboxACLSystemRuleListOutcome
                 */
                DescribeSandboxACLSystemRuleListOutcome DescribeSandboxACLSystemRuleList(const Model::DescribeSandboxACLSystemRuleListRequest &request);
                void DescribeSandboxACLSystemRuleListAsync(const Model::DescribeSandboxACLSystemRuleListRequest& request, const DescribeSandboxACLSystemRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxACLSystemRuleListOutcomeCallable DescribeSandboxACLSystemRuleListCallable(const Model::DescribeSandboxACLSystemRuleListRequest& request);

                /**
                 *查询流量沙箱数据泄露防护（DLP）系统规则列表，系统规则由 CSIP 平台内置，可被用户规则引用
                 * @param req DescribeSandboxDLPSystemRuleListRequest
                 * @return DescribeSandboxDLPSystemRuleListOutcome
                 */
                DescribeSandboxDLPSystemRuleListOutcome DescribeSandboxDLPSystemRuleList(const Model::DescribeSandboxDLPSystemRuleListRequest &request);
                void DescribeSandboxDLPSystemRuleListAsync(const Model::DescribeSandboxDLPSystemRuleListRequest& request, const DescribeSandboxDLPSystemRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxDLPSystemRuleListOutcomeCallable DescribeSandboxDLPSystemRuleListCallable(const Model::DescribeSandboxDLPSystemRuleListRequest& request);

                /**
                 *获取命令沙箱文件规则列表
                 * @param req DescribeSandboxFileRuleListRequest
                 * @return DescribeSandboxFileRuleListOutcome
                 */
                DescribeSandboxFileRuleListOutcome DescribeSandboxFileRuleList(const Model::DescribeSandboxFileRuleListRequest &request);
                void DescribeSandboxFileRuleListAsync(const Model::DescribeSandboxFileRuleListRequest& request, const DescribeSandboxFileRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxFileRuleListOutcomeCallable DescribeSandboxFileRuleListCallable(const Model::DescribeSandboxFileRuleListRequest& request);

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
                 *查询扫描任务记录列表
                 * @param req DescribeScanTaskRecordListRequest
                 * @return DescribeScanTaskRecordListOutcome
                 */
                DescribeScanTaskRecordListOutcome DescribeScanTaskRecordList(const Model::DescribeScanTaskRecordListRequest &request);
                void DescribeScanTaskRecordListAsync(const Model::DescribeScanTaskRecordListRequest& request, const DescribeScanTaskRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanTaskRecordListOutcomeCallable DescribeScanTaskRecordListCallable(const Model::DescribeScanTaskRecordListRequest& request);

                /**
                 *查询腾讯云SCF自定义域名端点列表
                 * @param req DescribeScfCustomDomainEndpointsRequest
                 * @return DescribeScfCustomDomainEndpointsOutcome
                 */
                DescribeScfCustomDomainEndpointsOutcome DescribeScfCustomDomainEndpoints(const Model::DescribeScfCustomDomainEndpointsRequest &request);
                void DescribeScfCustomDomainEndpointsAsync(const Model::DescribeScfCustomDomainEndpointsRequest& request, const DescribeScfCustomDomainEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScfCustomDomainEndpointsOutcomeCallable DescribeScfCustomDomainEndpointsCallable(const Model::DescribeScfCustomDomainEndpointsRequest& request);

                /**
                 *立体防护中心查询漏洞信息
                 * @param req DescribeSearchBugInfoRequest
                 * @return DescribeSearchBugInfoOutcome
                 */
                DescribeSearchBugInfoOutcome DescribeSearchBugInfo(const Model::DescribeSearchBugInfoRequest &request);
                void DescribeSearchBugInfoAsync(const Model::DescribeSearchBugInfoRequest& request, const DescribeSearchBugInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSearchBugInfoOutcomeCallable DescribeSearchBugInfoCallable(const Model::DescribeSearchBugInfoRequest& request);

                /**
                 *查询指定安全组ID对应安全组规则
                 * @param req DescribeSecurityGroupPolicyRequest
                 * @return DescribeSecurityGroupPolicyOutcome
                 */
                DescribeSecurityGroupPolicyOutcome DescribeSecurityGroupPolicy(const Model::DescribeSecurityGroupPolicyRequest &request);
                void DescribeSecurityGroupPolicyAsync(const Model::DescribeSecurityGroupPolicyRequest& request, const DescribeSecurityGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupPolicyOutcomeCallable DescribeSecurityGroupPolicyCallable(const Model::DescribeSecurityGroupPolicyRequest& request);

                /**
                 *获取安全风险趋势，返回按维度分组的每日风险数量
                 * @param req DescribeSecurityRiskTrendRequest
                 * @return DescribeSecurityRiskTrendOutcome
                 */
                DescribeSecurityRiskTrendOutcome DescribeSecurityRiskTrend(const Model::DescribeSecurityRiskTrendRequest &request);
                void DescribeSecurityRiskTrendAsync(const Model::DescribeSecurityRiskTrendRequest& request, const DescribeSecurityRiskTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityRiskTrendOutcomeCallable DescribeSecurityRiskTrendCallable(const Model::DescribeSecurityRiskTrendRequest& request);

                /**
                 *获取安全评分概览，实时计算各维度和子项扣分情况
                 * @param req DescribeSecurityScoreOverviewRequest
                 * @return DescribeSecurityScoreOverviewOutcome
                 */
                DescribeSecurityScoreOverviewOutcome DescribeSecurityScoreOverview(const Model::DescribeSecurityScoreOverviewRequest &request);
                void DescribeSecurityScoreOverviewAsync(const Model::DescribeSecurityScoreOverviewRequest& request, const DescribeSecurityScoreOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityScoreOverviewOutcomeCallable DescribeSecurityScoreOverviewCallable(const Model::DescribeSecurityScoreOverviewRequest& request);

                /**
                 *获取当前账号的安全评分规则，无自定义则返回内置默认规则
                 * @param req DescribeSecurityScoreRuleRequest
                 * @return DescribeSecurityScoreRuleOutcome
                 */
                DescribeSecurityScoreRuleOutcome DescribeSecurityScoreRule(const Model::DescribeSecurityScoreRuleRequest &request);
                void DescribeSecurityScoreRuleAsync(const Model::DescribeSecurityScoreRuleRequest& request, const DescribeSecurityScoreRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityScoreRuleOutcomeCallable DescribeSecurityScoreRuleCallable(const Model::DescribeSecurityScoreRuleRequest& request);

                /**
                 *查询 Skill 安全检测告警详情，包含本地告警信息和引擎实时检测数据
                 * @param req DescribeSkillScanAlertDetailRequest
                 * @return DescribeSkillScanAlertDetailOutcome
                 */
                DescribeSkillScanAlertDetailOutcome DescribeSkillScanAlertDetail(const Model::DescribeSkillScanAlertDetailRequest &request);
                void DescribeSkillScanAlertDetailAsync(const Model::DescribeSkillScanAlertDetailRequest& request, const DescribeSkillScanAlertDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillScanAlertDetailOutcomeCallable DescribeSkillScanAlertDetailCallable(const Model::DescribeSkillScanAlertDetailRequest& request);

                /**
                 *查询 Skill 安全检测告警列表，支持分页、过滤和排序
                 * @param req DescribeSkillScanAlertListRequest
                 * @return DescribeSkillScanAlertListOutcome
                 */
                DescribeSkillScanAlertListOutcome DescribeSkillScanAlertList(const Model::DescribeSkillScanAlertListRequest &request);
                void DescribeSkillScanAlertListAsync(const Model::DescribeSkillScanAlertListRequest& request, const DescribeSkillScanAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillScanAlertListOutcomeCallable DescribeSkillScanAlertListCallable(const Model::DescribeSkillScanAlertListRequest& request);

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
                 *获取TCR实例列表
                 * @param req DescribeTCRInstanceListRequest
                 * @return DescribeTCRInstanceListOutcome
                 */
                DescribeTCRInstanceListOutcome DescribeTCRInstanceList(const Model::DescribeTCRInstanceListRequest &request);
                void DescribeTCRInstanceListAsync(const Model::DescribeTCRInstanceListRequest& request, const DescribeTCRInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTCRInstanceListOutcomeCallable DescribeTCRInstanceListCallable(const Model::DescribeTCRInstanceListRequest& request);

                /**
                 *打标策略生效资产列表
                 * @param req DescribeTagRuleAssetsRequest
                 * @return DescribeTagRuleAssetsOutcome
                 */
                DescribeTagRuleAssetsOutcome DescribeTagRuleAssets(const Model::DescribeTagRuleAssetsRequest &request);
                void DescribeTagRuleAssetsAsync(const Model::DescribeTagRuleAssetsRequest& request, const DescribeTagRuleAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagRuleAssetsOutcomeCallable DescribeTagRuleAssetsCallable(const Model::DescribeTagRuleAssetsRequest& request);

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
                 *获取扫描预消耗配额
                 * @param req DescribeTaskPredictCostQuotaRequest
                 * @return DescribeTaskPredictCostQuotaOutcome
                 */
                DescribeTaskPredictCostQuotaOutcome DescribeTaskPredictCostQuota(const Model::DescribeTaskPredictCostQuotaRequest &request);
                void DescribeTaskPredictCostQuotaAsync(const Model::DescribeTaskPredictCostQuotaRequest& request, const DescribeTaskPredictCostQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskPredictCostQuotaOutcomeCallable DescribeTaskPredictCostQuotaCallable(const Model::DescribeTaskPredictCostQuotaRequest& request);

                /**
                 *查询TOP攻击信息
                 * @param req DescribeTopAttackInfoRequest
                 * @return DescribeTopAttackInfoOutcome
                 */
                DescribeTopAttackInfoOutcome DescribeTopAttackInfo(const Model::DescribeTopAttackInfoRequest &request);
                void DescribeTopAttackInfoAsync(const Model::DescribeTopAttackInfoRequest& request, const DescribeTopAttackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopAttackInfoOutcomeCallable DescribeTopAttackInfoCallable(const Model::DescribeTopAttackInfoRequest& request);

                /**
                 *查询用户行为分析的行为概览
                 * @param req DescribeUebaBehaviorSummaryRequest
                 * @return DescribeUebaBehaviorSummaryOutcome
                 */
                DescribeUebaBehaviorSummaryOutcome DescribeUebaBehaviorSummary(const Model::DescribeUebaBehaviorSummaryRequest &request);
                void DescribeUebaBehaviorSummaryAsync(const Model::DescribeUebaBehaviorSummaryRequest& request, const DescribeUebaBehaviorSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUebaBehaviorSummaryOutcomeCallable DescribeUebaBehaviorSummaryCallable(const Model::DescribeUebaBehaviorSummaryRequest& request);

                /**
                 *查询用户行为分析策略列表
                 * @param req DescribeUebaRuleRequest
                 * @return DescribeUebaRuleOutcome
                 */
                DescribeUebaRuleOutcome DescribeUebaRule(const Model::DescribeUebaRuleRequest &request);
                void DescribeUebaRuleAsync(const Model::DescribeUebaRuleRequest& request, const DescribeUebaRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUebaRuleOutcomeCallable DescribeUebaRuleCallable(const Model::DescribeUebaRuleRequest& request);

                /**
                 *获取用户行为分析模块的用户概览
                 * @param req DescribeUebaUserSummaryRequest
                 * @return DescribeUebaUserSummaryOutcome
                 */
                DescribeUebaUserSummaryOutcome DescribeUebaUserSummary(const Model::DescribeUebaUserSummaryRequest &request);
                void DescribeUebaUserSummaryAsync(const Model::DescribeUebaUserSummaryRequest& request, const DescribeUebaUserSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUebaUserSummaryOutcomeCallable DescribeUebaUserSummaryCallable(const Model::DescribeUebaUserSummaryRequest& request);

                /**
                 *获取账号CSPM信息
                 * @param req DescribeUserCSPMInfoListRequest
                 * @return DescribeUserCSPMInfoListOutcome
                 */
                DescribeUserCSPMInfoListOutcome DescribeUserCSPMInfoList(const Model::DescribeUserCSPMInfoListRequest &request);
                void DescribeUserCSPMInfoListAsync(const Model::DescribeUserCSPMInfoListRequest& request, const DescribeUserCSPMInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserCSPMInfoListOutcomeCallable DescribeUserCSPMInfoListCallable(const Model::DescribeUserCSPMInfoListRequest& request);

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
                 *用户CSPM配额信息
                 * @param req DescribeUserInfoRequest
                 * @return DescribeUserInfoOutcome
                 */
                DescribeUserInfoOutcome DescribeUserInfo(const Model::DescribeUserInfoRequest &request);
                void DescribeUserInfoAsync(const Model::DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserInfoOutcomeCallable DescribeUserInfoCallable(const Model::DescribeUserInfoRequest& request);

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
                 *获取病毒库及POC的更新信息
                 * @param req DescribeVdbAndPocInfoRequest
                 * @return DescribeVdbAndPocInfoOutcome
                 */
                DescribeVdbAndPocInfoOutcome DescribeVdbAndPocInfo(const Model::DescribeVdbAndPocInfoRequest &request);
                void DescribeVdbAndPocInfoAsync(const Model::DescribeVdbAndPocInfoRequest& request, const DescribeVdbAndPocInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVdbAndPocInfoOutcomeCallable DescribeVdbAndPocInfoCallable(const Model::DescribeVdbAndPocInfoRequest& request);

                /**
                 *获取vpc列表
                 * @param req DescribeVpcAssetsRequest
                 * @return DescribeVpcAssetsOutcome
                 */
                DescribeVpcAssetsOutcome DescribeVpcAssets(const Model::DescribeVpcAssetsRequest &request);
                void DescribeVpcAssetsAsync(const Model::DescribeVpcAssetsRequest& request, const DescribeVpcAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcAssetsOutcomeCallable DescribeVpcAssetsCallable(const Model::DescribeVpcAssetsRequest& request);

                /**
                 *获取漏洞组件关联主机
                 * @param req DescribeVulComponentRelateHostRequest
                 * @return DescribeVulComponentRelateHostOutcome
                 */
                DescribeVulComponentRelateHostOutcome DescribeVulComponentRelateHost(const Model::DescribeVulComponentRelateHostRequest &request);
                void DescribeVulComponentRelateHostAsync(const Model::DescribeVulComponentRelateHostRequest& request, const DescribeVulComponentRelateHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulComponentRelateHostOutcomeCallable DescribeVulComponentRelateHostCallable(const Model::DescribeVulComponentRelateHostRequest& request);

                /**
                 *查询指定漏洞修复任务的详情信息，包含每台主机的修复状态、快照状态等明细数据，支持分页和筛选。
                 * @param req DescribeVulFixTaskDetailRequest
                 * @return DescribeVulFixTaskDetailOutcome
                 */
                DescribeVulFixTaskDetailOutcome DescribeVulFixTaskDetail(const Model::DescribeVulFixTaskDetailRequest &request);
                void DescribeVulFixTaskDetailAsync(const Model::DescribeVulFixTaskDetailRequest& request, const DescribeVulFixTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulFixTaskDetailOutcomeCallable DescribeVulFixTaskDetailCallable(const Model::DescribeVulFixTaskDetailRequest& request);

                /**
                 *分页查询漏洞修复任务记录列表，支持按修复状态、时间范围等条件筛选，展示每个修复任务的概要信息。
                 * @param req DescribeVulFixTaskListRequest
                 * @return DescribeVulFixTaskListOutcome
                 */
                DescribeVulFixTaskListOutcome DescribeVulFixTaskList(const Model::DescribeVulFixTaskListRequest &request);
                void DescribeVulFixTaskListAsync(const Model::DescribeVulFixTaskListRequest& request, const DescribeVulFixTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulFixTaskListOutcomeCallable DescribeVulFixTaskListCallable(const Model::DescribeVulFixTaskListRequest& request);

                /**
                 *查询指定漏洞可以被修复的主机列表。在用户提交修复任务前，需要先查询哪些主机支持自动修复，为用户选择修复目标提供数据支持。
                 * @param req DescribeVulFixableMachineListRequest
                 * @return DescribeVulFixableMachineListOutcome
                 */
                DescribeVulFixableMachineListOutcome DescribeVulFixableMachineList(const Model::DescribeVulFixableMachineListRequest &request);
                void DescribeVulFixableMachineListAsync(const Model::DescribeVulFixableMachineListRequest& request, const DescribeVulFixableMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulFixableMachineListOutcomeCallable DescribeVulFixableMachineListCallable(const Model::DescribeVulFixableMachineListRequest& request);

                /**
                 *查询某个已修复漏洞在指定主机上的修复详情，包含漏洞基本信息、修复主机信息以及关联组件&路径的详细列表（组件名称、命中版本、关联路径、修复命令）。
                 * @param req DescribeVulFixedHostDetailRequest
                 * @return DescribeVulFixedHostDetailOutcome
                 */
                DescribeVulFixedHostDetailOutcome DescribeVulFixedHostDetail(const Model::DescribeVulFixedHostDetailRequest &request);
                void DescribeVulFixedHostDetailAsync(const Model::DescribeVulFixedHostDetailRequest& request, const DescribeVulFixedHostDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulFixedHostDetailOutcomeCallable DescribeVulFixedHostDetailCallable(const Model::DescribeVulFixedHostDetailRequest& request);

                /**
                 *查询已被修复的漏洞列表，展示修复成功的漏洞信息及修复情况统计，帮助用户了解修复成效。
                 * @param req DescribeVulFixedListRequest
                 * @return DescribeVulFixedListOutcome
                 */
                DescribeVulFixedListOutcome DescribeVulFixedList(const Model::DescribeVulFixedListRequest &request);
                void DescribeVulFixedListAsync(const Model::DescribeVulFixedListRequest& request, const DescribeVulFixedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulFixedListOutcomeCallable DescribeVulFixedListCallable(const Model::DescribeVulFixedListRequest& request);

                /**
                 *获取漏洞主机关联组件
                 * @param req DescribeVulHostRelateComponentRequest
                 * @return DescribeVulHostRelateComponentOutcome
                 */
                DescribeVulHostRelateComponentOutcome DescribeVulHostRelateComponent(const Model::DescribeVulHostRelateComponentRequest &request);
                void DescribeVulHostRelateComponentAsync(const Model::DescribeVulHostRelateComponentRequest& request, const DescribeVulHostRelateComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulHostRelateComponentOutcomeCallable DescribeVulHostRelateComponentCallable(const Model::DescribeVulHostRelateComponentRequest& request);

                /**
                 *获取漏洞忽略列表
                 * @param req DescribeVulIgnoreRuleListRequest
                 * @return DescribeVulIgnoreRuleListOutcome
                 */
                DescribeVulIgnoreRuleListOutcome DescribeVulIgnoreRuleList(const Model::DescribeVulIgnoreRuleListRequest &request);
                void DescribeVulIgnoreRuleListAsync(const Model::DescribeVulIgnoreRuleListRequest& request, const DescribeVulIgnoreRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulIgnoreRuleListOutcomeCallable DescribeVulIgnoreRuleListCallable(const Model::DescribeVulIgnoreRuleListRequest& request);

                /**
                 *获取漏洞列表
                 * @param req DescribeVulItemListRequest
                 * @return DescribeVulItemListOutcome
                 */
                DescribeVulItemListOutcome DescribeVulItemList(const Model::DescribeVulItemListRequest &request);
                void DescribeVulItemListAsync(const Model::DescribeVulItemListRequest& request, const DescribeVulItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulItemListOutcomeCallable DescribeVulItemListCallable(const Model::DescribeVulItemListRequest& request);

                /**
                 *获取漏洞标签列表
                 * @param req DescribeVulLabelListRequest
                 * @return DescribeVulLabelListOutcome
                 */
                DescribeVulLabelListOutcome DescribeVulLabelList(const Model::DescribeVulLabelListRequest &request);
                void DescribeVulLabelListAsync(const Model::DescribeVulLabelListRequest& request, const DescribeVulLabelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulLabelListOutcomeCallable DescribeVulLabelListCallable(const Model::DescribeVulLabelListRequest& request);

                /**
                 *查询云边界分析-暴露路径下主机节点的漏洞列表
                 * @param req DescribeVulRiskListRequest
                 * @return DescribeVulRiskListOutcome
                 */
                DescribeVulRiskListOutcome DescribeVulRiskList(const Model::DescribeVulRiskListRequest &request);
                void DescribeVulRiskListAsync(const Model::DescribeVulRiskListRequest& request, const DescribeVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulRiskListOutcomeCallable DescribeVulRiskListCallable(const Model::DescribeVulRiskListRequest& request);

                /**
                 *获取漏洞关联组件
                 * @param req DescribeVulRiskRelateComponentRequest
                 * @return DescribeVulRiskRelateComponentOutcome
                 */
                DescribeVulRiskRelateComponentOutcome DescribeVulRiskRelateComponent(const Model::DescribeVulRiskRelateComponentRequest &request);
                void DescribeVulRiskRelateComponentAsync(const Model::DescribeVulRiskRelateComponentRequest& request, const DescribeVulRiskRelateComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulRiskRelateComponentOutcomeCallable DescribeVulRiskRelateComponentCallable(const Model::DescribeVulRiskRelateComponentRequest& request);

                /**
                 *获取漏洞或KB关联的主机
                 * @param req DescribeVulRiskRelateHostRequest
                 * @return DescribeVulRiskRelateHostOutcome
                 */
                DescribeVulRiskRelateHostOutcome DescribeVulRiskRelateHost(const Model::DescribeVulRiskRelateHostRequest &request);
                void DescribeVulRiskRelateHostAsync(const Model::DescribeVulRiskRelateHostRequest& request, const DescribeVulRiskRelateHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulRiskRelateHostOutcomeCallable DescribeVulRiskRelateHostCallable(const Model::DescribeVulRiskRelateHostRequest& request);

                /**
                 *获取漏洞扫描（周期扫描）
                 * @param req DescribeVulScanPeriodicRequest
                 * @return DescribeVulScanPeriodicOutcome
                 */
                DescribeVulScanPeriodicOutcome DescribeVulScanPeriodic(const Model::DescribeVulScanPeriodicRequest &request);
                void DescribeVulScanPeriodicAsync(const Model::DescribeVulScanPeriodicRequest& request, const DescribeVulScanPeriodicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulScanPeriodicOutcomeCallable DescribeVulScanPeriodicCallable(const Model::DescribeVulScanPeriodicRequest& request);

                /**
                 *获取扫描漏洞任务详情
                 * @param req DescribeVulScanTaskDetailRequest
                 * @return DescribeVulScanTaskDetailOutcome
                 */
                DescribeVulScanTaskDetailOutcome DescribeVulScanTaskDetail(const Model::DescribeVulScanTaskDetailRequest &request);
                void DescribeVulScanTaskDetailAsync(const Model::DescribeVulScanTaskDetailRequest& request, const DescribeVulScanTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulScanTaskDetailOutcomeCallable DescribeVulScanTaskDetailCallable(const Model::DescribeVulScanTaskDetailRequest& request);

                /**
                 *获取漏洞扫描任务记录
                 * @param req DescribeVulScanTaskListRequest
                 * @return DescribeVulScanTaskListOutcome
                 */
                DescribeVulScanTaskListOutcome DescribeVulScanTaskList(const Model::DescribeVulScanTaskListRequest &request);
                void DescribeVulScanTaskListAsync(const Model::DescribeVulScanTaskListRequest& request, const DescribeVulScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulScanTaskListOutcomeCallable DescribeVulScanTaskListCallable(const Model::DescribeVulScanTaskListRequest& request);

                /**
                 *获取漏洞视角的漏洞风险列表
                 * @param req DescribeVulViewVulRiskListRequest
                 * @return DescribeVulViewVulRiskListOutcome
                 */
                DescribeVulViewVulRiskListOutcome DescribeVulViewVulRiskList(const Model::DescribeVulViewVulRiskListRequest &request);
                void DescribeVulViewVulRiskListAsync(const Model::DescribeVulViewVulRiskListRequest& request, const DescribeVulViewVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulViewVulRiskListOutcomeCallable DescribeVulViewVulRiskListCallable(const Model::DescribeVulViewVulRiskListRequest& request);

                /**
                 *分页查询当前租户下的通知策略列表，对应「通知中心 - 机器人通知 - 通知策略配置」Tab 的表格。返回的字段为「行展示」所需的精简信息。完整配置在编辑场景下使用 DescribeWebhookPolicy。每租户最多 100 个通知策略
                 * @param req DescribeWebhookPolicyListRequest
                 * @return DescribeWebhookPolicyListOutcome
                 */
                DescribeWebhookPolicyListOutcome DescribeWebhookPolicyList(const Model::DescribeWebhookPolicyListRequest &request);
                void DescribeWebhookPolicyListAsync(const Model::DescribeWebhookPolicyListRequest& request, const DescribeWebhookPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebhookPolicyListOutcomeCallable DescribeWebhookPolicyListCallable(const Model::DescribeWebhookPolicyListRequest& request);

                /**
                 *分页查询当前租户下的接收机器人列表，对应「通知中心 - 机器人通知 - 接收机器人管理」Tab 的表格。每租户最多 50 个机器人
                 * @param req DescribeWebhookReceiverListRequest
                 * @return DescribeWebhookReceiverListOutcome
                 */
                DescribeWebhookReceiverListOutcome DescribeWebhookReceiverList(const Model::DescribeWebhookReceiverListRequest &request);
                void DescribeWebhookReceiverListAsync(const Model::DescribeWebhookReceiverListRequest& request, const DescribeWebhookReceiverListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebhookReceiverListOutcomeCallable DescribeWebhookReceiverListCallable(const Model::DescribeWebhookReceiverListRequest& request);

                /**
                 *停用AI 定时任务。

将指定的AI 定时任务状态设置为已停用，停用后任务将暂停自动执行。
                 * @param req DisableAIScheduleRequest
                 * @return DisableAIScheduleOutcome
                 */
                DisableAIScheduleOutcome DisableAISchedule(const Model::DisableAIScheduleRequest &request);
                void DisableAIScheduleAsync(const Model::DisableAIScheduleRequest& request, const DisableAIScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableAIScheduleOutcomeCallable DisableAIScheduleCallable(const Model::DisableAIScheduleRequest& request);

                /**
                 *下载导出日志
                 * @param req DownloadDspmExportLogRequest
                 * @return DownloadDspmExportLogOutcome
                 */
                DownloadDspmExportLogOutcome DownloadDspmExportLog(const Model::DownloadDspmExportLogRequest &request);
                void DownloadDspmExportLogAsync(const Model::DownloadDspmExportLogRequest& request, const DownloadDspmExportLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadDspmExportLogOutcomeCallable DownloadDspmExportLogCallable(const Model::DownloadDspmExportLogRequest& request);

                /**
                 *启用AI 定时任务。

将指定的AI 定时任务状态设置为已启用，启用后任务将按触发器配置自动执行。
                 * @param req EnableAIScheduleRequest
                 * @return EnableAIScheduleOutcome
                 */
                EnableAIScheduleOutcome EnableAISchedule(const Model::EnableAIScheduleRequest &request);
                void EnableAIScheduleAsync(const Model::EnableAIScheduleRequest& request, const EnableAIScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableAIScheduleOutcomeCallable EnableAIScheduleCallable(const Model::EnableAIScheduleRequest& request);

                /**
                 *导出CSIP扫描任务主机详情为Excel文件，异步生成后通过DescribeExportMachines查询下载地址
                 * @param req ExportCSIPMalwareScanTaskDetailRequest
                 * @return ExportCSIPMalwareScanTaskDetailOutcome
                 */
                ExportCSIPMalwareScanTaskDetailOutcome ExportCSIPMalwareScanTaskDetail(const Model::ExportCSIPMalwareScanTaskDetailRequest &request);
                void ExportCSIPMalwareScanTaskDetailAsync(const Model::ExportCSIPMalwareScanTaskDetailRequest& request, const ExportCSIPMalwareScanTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportCSIPMalwareScanTaskDetailOutcomeCallable ExportCSIPMalwareScanTaskDetailCallable(const Model::ExportCSIPMalwareScanTaskDetailRequest& request);

                /**
                 *客户端设置主机列表导出
                 * @param req ExportClientSettingHostListRequest
                 * @return ExportClientSettingHostListOutcome
                 */
                ExportClientSettingHostListOutcome ExportClientSettingHostList(const Model::ExportClientSettingHostListRequest &request);
                void ExportClientSettingHostListAsync(const Model::ExportClientSettingHostListRequest& request, const ExportClientSettingHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportClientSettingHostListOutcomeCallable ExportClientSettingHostListCallable(const Model::ExportClientSettingHostListRequest& request);

                /**
                 *导出EDR策略列表
                 * @param req ExportEDRRulesRequest
                 * @return ExportEDRRulesOutcome
                 */
                ExportEDRRulesOutcome ExportEDRRules(const Model::ExportEDRRulesRequest &request);
                void ExportEDRRulesAsync(const Model::ExportEDRRulesRequest& request, const ExportEDRRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportEDRRulesOutcomeCallable ExportEDRRulesCallable(const Model::ExportEDRRulesRequest& request);

                /**
                 *用于异步导出数据量大的日志文件
                 * @param req ExportTasksRequest
                 * @return ExportTasksOutcome
                 */
                ExportTasksOutcome ExportTasks(const Model::ExportTasksRequest &request);
                void ExportTasksAsync(const Model::ExportTasksRequest& request, const ExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportTasksOutcomeCallable ExportTasksCallable(const Model::ExportTasksRequest& request);

                /**
                 *安装集群容器安全Agent（平行容器方式安装 Agent）。

capi 层处理流程：
1. 按 ClusterCaMD5List 查询 DB 集群列表（仅用于解析每个集群归属的 appid，不做存在性/类型校验）
2. 按 appid 分组透传到接入侧 ClusterInstall RPC

说明（容器资产改版 2026 H1）：本接口为透传接口，capi 层不对 ClusterCaMD5 做存在性/类型/格式校验；DB 中未命中的 ClusterCaMD5 静默跳过、不报错。
                 * @param req InstallClusterAgentRequest
                 * @return InstallClusterAgentOutcome
                 */
                InstallClusterAgentOutcome InstallClusterAgent(const Model::InstallClusterAgentRequest &request);
                void InstallClusterAgentAsync(const Model::InstallClusterAgentRequest& request, const InstallClusterAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallClusterAgentOutcomeCallable InstallClusterAgentCallable(const Model::InstallClusterAgentRequest& request);

                /**
                 *修改AI-Link智链引擎配置
                 * @param req ModifyAILinkSettingRequest
                 * @return ModifyAILinkSettingOutcome
                 */
                ModifyAILinkSettingOutcome ModifyAILinkSetting(const Model::ModifyAILinkSettingRequest &request);
                void ModifyAILinkSettingAsync(const Model::ModifyAILinkSettingRequest& request, const ModifyAILinkSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAILinkSettingOutcomeCallable ModifyAILinkSettingCallable(const Model::ModifyAILinkSettingRequest& request);

                /**
                 *修改AI 定时任务。

支持部分更新，仅更新传入的可选字段。触发器列表通过 UpdateTriggers 标志控制是否全量替换。
                 * @param req ModifyAIScheduleRequest
                 * @return ModifyAIScheduleOutcome
                 */
                ModifyAIScheduleOutcome ModifyAISchedule(const Model::ModifyAIScheduleRequest &request);
                void ModifyAIScheduleAsync(const Model::ModifyAIScheduleRequest& request, const ModifyAIScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAIScheduleOutcomeCallable ModifyAIScheduleCallable(const Model::ModifyAIScheduleRequest& request);

                /**
                 *修改客户端日志采集配置（CSIP专属），支持设置日志采集类型和生效资产范围
                 * @param req ModifyAgentConfigSettingRequest
                 * @return ModifyAgentConfigSettingOutcome
                 */
                ModifyAgentConfigSettingOutcome ModifyAgentConfigSetting(const Model::ModifyAgentConfigSettingRequest &request);
                void ModifyAgentConfigSettingAsync(const Model::ModifyAgentConfigSettingRequest& request, const ModifyAgentConfigSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentConfigSettingOutcomeCallable ModifyAgentConfigSettingCallable(const Model::ModifyAgentConfigSettingRequest& request);

                /**
                 *设置客户端运行模式以及配置
                 * @param req ModifyAgentRunModeRequest
                 * @return ModifyAgentRunModeOutcome
                 */
                ModifyAgentRunModeOutcome ModifyAgentRunMode(const Model::ModifyAgentRunModeRequest &request);
                void ModifyAgentRunModeAsync(const Model::ModifyAgentRunModeRequest& request, const ModifyAgentRunModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentRunModeOutcomeCallable ModifyAgentRunModeCallable(const Model::ModifyAgentRunModeRequest& request);

                /**
                 *修改客户端运行策略（策略组），支持设置自定义策略及关联机器列表
                 * @param req ModifyAgentRunPolicyRequest
                 * @return ModifyAgentRunPolicyOutcome
                 */
                ModifyAgentRunPolicyOutcome ModifyAgentRunPolicy(const Model::ModifyAgentRunPolicyRequest &request);
                void ModifyAgentRunPolicyAsync(const Model::ModifyAgentRunPolicyRequest& request, const ModifyAgentRunPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentRunPolicyOutcomeCallable ModifyAgentRunPolicyCallable(const Model::ModifyAgentRunPolicyRequest& request);

                /**
                 *修改或者更改处置状态
                 * @param req ModifyAlarmRiskStatusRequest
                 * @return ModifyAlarmRiskStatusOutcome
                 */
                ModifyAlarmRiskStatusOutcome ModifyAlarmRiskStatus(const Model::ModifyAlarmRiskStatusRequest &request);
                void ModifyAlarmRiskStatusAsync(const Model::ModifyAlarmRiskStatusRequest& request, const ModifyAlarmRiskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmRiskStatusOutcomeCallable ModifyAlarmRiskStatusCallable(const Model::ModifyAlarmRiskStatusRequest& request);

                /**
                 *标记资产是否核心
                 * @param req ModifyAssetCoreAttributeRequest
                 * @return ModifyAssetCoreAttributeOutcome
                 */
                ModifyAssetCoreAttributeOutcome ModifyAssetCoreAttribute(const Model::ModifyAssetCoreAttributeRequest &request);
                void ModifyAssetCoreAttributeAsync(const Model::ModifyAssetCoreAttributeRequest& request, const ModifyAssetCoreAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetCoreAttributeOutcomeCallable ModifyAssetCoreAttributeCallable(const Model::ModifyAssetCoreAttributeRequest& request);

                /**
                 *更新资产搜索视图
                 * @param req ModifyAssetFilterViewRequest
                 * @return ModifyAssetFilterViewOutcome
                 */
                ModifyAssetFilterViewOutcome ModifyAssetFilterView(const Model::ModifyAssetFilterViewRequest &request);
                void ModifyAssetFilterViewAsync(const Model::ModifyAssetFilterViewRequest& request, const ModifyAssetFilterViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetFilterViewOutcomeCallable ModifyAssetFilterViewCallable(const Model::ModifyAssetFilterViewRequest& request);

                /**
                 *编辑资产标签
                 * @param req ModifyAssetTagRequest
                 * @return ModifyAssetTagOutcome
                 */
                ModifyAssetTagOutcome ModifyAssetTag(const Model::ModifyAssetTagRequest &request);
                void ModifyAssetTagAsync(const Model::ModifyAssetTagRequest& request, const ModifyAssetTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetTagOutcomeCallable ModifyAssetTagCallable(const Model::ModifyAssetTagRequest& request);

                /**
                 *操作资产编辑标签
                 * @param req ModifyAssetTagsRequest
                 * @return ModifyAssetTagsOutcome
                 */
                ModifyAssetTagsOutcome ModifyAssetTags(const Model::ModifyAssetTagsRequest &request);
                void ModifyAssetTagsAsync(const Model::ModifyAssetTagsRequest& request, const ModifyAssetTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetTagsOutcomeCallable ModifyAssetTagsCallable(const Model::ModifyAssetTagsRequest& request);

                /**
                 *操作资产编辑标签
                 * @param req ModifyAssetTagsByAssetInfoRequest
                 * @return ModifyAssetTagsByAssetInfoOutcome
                 */
                ModifyAssetTagsByAssetInfoOutcome ModifyAssetTagsByAssetInfo(const Model::ModifyAssetTagsByAssetInfoRequest &request);
                void ModifyAssetTagsByAssetInfoAsync(const Model::ModifyAssetTagsByAssetInfoRequest& request, const ModifyAssetTagsByAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetTagsByAssetInfoOutcomeCallable ModifyAssetTagsByAssetInfoCallable(const Model::ModifyAssetTagsByAssetInfoRequest& request);

                /**
                 *修改爆破阻断模式
                 * @param req ModifyBanModeRequest
                 * @return ModifyBanModeOutcome
                 */
                ModifyBanModeOutcome ModifyBanMode(const Model::ModifyBanModeRequest &request);
                void ModifyBanModeAsync(const Model::ModifyBanModeRequest& request, const ModifyBanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBanModeOutcomeCallable ModifyBanModeCallable(const Model::ModifyBanModeRequest& request);

                /**
                 *新建或编辑一条基线策略。Policy.ID 为 0 视为新建，非 0 视为编辑；新建/编辑时 Name 必填，CheckAssetType 与 Type 需符合 CheckAssetType / PolicyType 枚举。
                 * @param req ModifyBaselinePolicyRequest
                 * @return ModifyBaselinePolicyOutcome
                 */
                ModifyBaselinePolicyOutcome ModifyBaselinePolicy(const Model::ModifyBaselinePolicyRequest &request);
                void ModifyBaselinePolicyAsync(const Model::ModifyBaselinePolicyRequest& request, const ModifyBaselinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselinePolicyOutcomeCallable ModifyBaselinePolicyCallable(const Model::ModifyBaselinePolicyRequest& request);

                /**
                 *批量启用或停用基线策略。停用后的策略将不再参与扫描与统计。
                 * @param req ModifyBaselinePolicyEnableRequest
                 * @return ModifyBaselinePolicyEnableOutcome
                 */
                ModifyBaselinePolicyEnableOutcome ModifyBaselinePolicyEnable(const Model::ModifyBaselinePolicyEnableRequest &request);
                void ModifyBaselinePolicyEnableAsync(const Model::ModifyBaselinePolicyEnableRequest& request, const ModifyBaselinePolicyEnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselinePolicyEnableOutcomeCallable ModifyBaselinePolicyEnableCallable(const Model::ModifyBaselinePolicyEnableRequest& request);

                /**
                 *更新当前账号（管理员）的基线同步配置。AutoSync=true 时 TargetAppidList 不可为空，且元素不可为 0。
                 * @param req ModifyBaselineSyncConfRequest
                 * @return ModifyBaselineSyncConfOutcome
                 */
                ModifyBaselineSyncConfOutcome ModifyBaselineSyncConf(const Model::ModifyBaselineSyncConfRequest &request);
                void ModifyBaselineSyncConfAsync(const Model::ModifyBaselineSyncConfRequest& request, const ModifyBaselineSyncConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselineSyncConfOutcomeCallable ModifyBaselineSyncConfCallable(const Model::ModifyBaselineSyncConfRequest& request);

                /**
                 *更新当前账号的用户级基线配置（允许同步、离线清风险、Agent 扫描超时等）。
                 * @param req ModifyBaselineUserOtherConfRequest
                 * @return ModifyBaselineUserOtherConfOutcome
                 */
                ModifyBaselineUserOtherConfOutcome ModifyBaselineUserOtherConf(const Model::ModifyBaselineUserOtherConfRequest &request);
                void ModifyBaselineUserOtherConfAsync(const Model::ModifyBaselineUserOtherConfRequest& request, const ModifyBaselineUserOtherConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselineUserOtherConfOutcomeCallable ModifyBaselineUserOtherConfCallable(const Model::ModifyBaselineUserOtherConfRequest& request);

                /**
                 *更新当前账号的“用户弱口令”自定义字典。字典原文经服务端加密后存储；传空字符串视为清空。
                 * @param req ModifyBaselineUserWeakPasswordConfRequest
                 * @return ModifyBaselineUserWeakPasswordConfOutcome
                 */
                ModifyBaselineUserWeakPasswordConfOutcome ModifyBaselineUserWeakPasswordConf(const Model::ModifyBaselineUserWeakPasswordConfRequest &request);
                void ModifyBaselineUserWeakPasswordConfAsync(const Model::ModifyBaselineUserWeakPasswordConfRequest& request, const ModifyBaselineUserWeakPasswordConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselineUserWeakPasswordConfOutcomeCallable ModifyBaselineUserWeakPasswordConfCallable(const Model::ModifyBaselineUserWeakPasswordConfRequest& request);

                /**
                 *设置暴力破解阻断开关状态
                 * @param req ModifyBruteAttackBanStatusRequest
                 * @return ModifyBruteAttackBanStatusOutcome
                 */
                ModifyBruteAttackBanStatusOutcome ModifyBruteAttackBanStatus(const Model::ModifyBruteAttackBanStatusRequest &request);
                void ModifyBruteAttackBanStatusAsync(const Model::ModifyBruteAttackBanStatusRequest& request, const ModifyBruteAttackBanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBruteAttackBanStatusOutcomeCallable ModifyBruteAttackBanStatusCallable(const Model::ModifyBruteAttackBanStatusRequest& request);

                /**
                 *修改暴力破解规则
                 * @param req ModifyBruteAttackRulesRequest
                 * @return ModifyBruteAttackRulesOutcome
                 */
                ModifyBruteAttackRulesOutcome ModifyBruteAttackRules(const Model::ModifyBruteAttackRulesRequest &request);
                void ModifyBruteAttackRulesAsync(const Model::ModifyBruteAttackRulesRequest& request, const ModifyBruteAttackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBruteAttackRulesOutcomeCallable ModifyBruteAttackRulesCallable(const Model::ModifyBruteAttackRulesRequest& request);

                /**
                 *绑定主机授权或RASP授权到指定订单。异步执行，返回TaskId供查询进度。通过LicenseType指定授权版本（旗舰版/专业版/RASP）。
                 * @param req ModifyCSIPLicenseBindsRequest
                 * @return ModifyCSIPLicenseBindsOutcome
                 */
                ModifyCSIPLicenseBindsOutcome ModifyCSIPLicenseBinds(const Model::ModifyCSIPLicenseBindsRequest &request);
                void ModifyCSIPLicenseBindsAsync(const Model::ModifyCSIPLicenseBindsRequest& request, const ModifyCSIPLicenseBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCSIPLicenseBindsOutcomeCallable ModifyCSIPLicenseBindsCallable(const Model::ModifyCSIPLicenseBindsRequest& request);

                /**
                 *手动解绑主机授权。同步执行，直接返回结果。仅解绑主机授权（category=0，含专业版/旗舰版）。单订单模式下appid即可定位订单，无需传ResourceId。RASP解绑请用ModifyCSIPRaspLicenseUnBinds。
                 * @param req ModifyCSIPLicenseUnBindsRequest
                 * @return ModifyCSIPLicenseUnBindsOutcome
                 */
                ModifyCSIPLicenseUnBindsOutcome ModifyCSIPLicenseUnBinds(const Model::ModifyCSIPLicenseUnBindsRequest &request);
                void ModifyCSIPLicenseUnBindsAsync(const Model::ModifyCSIPLicenseUnBindsRequest& request, const ModifyCSIPLicenseUnBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCSIPLicenseUnBindsOutcomeCallable ModifyCSIPLicenseUnBindsCallable(const Model::ModifyCSIPLicenseUnBindsRequest& request);

                /**
                 *绑定 RASP / 旗舰版授权到指定订单。异步执行，返回TaskId供查询进度。LicenseType=rasp 绑 RASP，LicenseType=enterprise_hp 绑旗舰版主机授权；AssetType 区分主机/容器节点/EKS。
                 * @param req ModifyCSIPRaspLicenseBindsRequest
                 * @return ModifyCSIPRaspLicenseBindsOutcome
                 */
                ModifyCSIPRaspLicenseBindsOutcome ModifyCSIPRaspLicenseBinds(const Model::ModifyCSIPRaspLicenseBindsRequest &request);
                void ModifyCSIPRaspLicenseBindsAsync(const Model::ModifyCSIPRaspLicenseBindsRequest& request, const ModifyCSIPRaspLicenseBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCSIPRaspLicenseBindsOutcomeCallable ModifyCSIPRaspLicenseBindsCallable(const Model::ModifyCSIPRaspLicenseBindsRequest& request);

                /**
                 *手动解绑RASP授权。同步执行，直接返回结果。仅解绑RASP授权（category=1），无解绑次数限制。单订单模式下appid即可定位订单，无需传ResourceId。
                 * @param req ModifyCSIPRaspLicenseUnBindsRequest
                 * @return ModifyCSIPRaspLicenseUnBindsOutcome
                 */
                ModifyCSIPRaspLicenseUnBindsOutcome ModifyCSIPRaspLicenseUnBinds(const Model::ModifyCSIPRaspLicenseUnBindsRequest &request);
                void ModifyCSIPRaspLicenseUnBindsAsync(const Model::ModifyCSIPRaspLicenseUnBindsRequest& request, const ModifyCSIPRaspLicenseUnBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCSIPRaspLicenseUnBindsOutcomeCallable ModifyCSIPRaspLicenseUnBindsCallable(const Model::ModifyCSIPRaspLicenseUnBindsRequest& request);

                /**
                 *修改存储桶监测状态
                 * @param req ModifyCosAuditBucketMonitorStatusRequest
                 * @return ModifyCosAuditBucketMonitorStatusOutcome
                 */
                ModifyCosAuditBucketMonitorStatusOutcome ModifyCosAuditBucketMonitorStatus(const Model::ModifyCosAuditBucketMonitorStatusRequest &request);
                void ModifyCosAuditBucketMonitorStatusAsync(const Model::ModifyCosAuditBucketMonitorStatusRequest& request, const ModifyCosAuditBucketMonitorStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCosAuditBucketMonitorStatusOutcomeCallable ModifyCosAuditBucketMonitorStatusCallable(const Model::ModifyCosAuditBucketMonitorStatusRequest& request);

                /**
                 *修改cos审计监测账号
                 * @param req ModifyCosAuditMonitorAccountRequest
                 * @return ModifyCosAuditMonitorAccountOutcome
                 */
                ModifyCosAuditMonitorAccountOutcome ModifyCosAuditMonitorAccount(const Model::ModifyCosAuditMonitorAccountRequest &request);
                void ModifyCosAuditMonitorAccountAsync(const Model::ModifyCosAuditMonitorAccountRequest& request, const ModifyCosAuditMonitorAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCosAuditMonitorAccountOutcomeCallable ModifyCosAuditMonitorAccountCallable(const Model::ModifyCosAuditMonitorAccountRequest& request);

                /**
                 *修改对象存储识别开关
                 * @param req ModifyCosAuditObjectIdentifyStatusRequest
                 * @return ModifyCosAuditObjectIdentifyStatusOutcome
                 */
                ModifyCosAuditObjectIdentifyStatusOutcome ModifyCosAuditObjectIdentifyStatus(const Model::ModifyCosAuditObjectIdentifyStatusRequest &request);
                void ModifyCosAuditObjectIdentifyStatusAsync(const Model::ModifyCosAuditObjectIdentifyStatusRequest& request, const ModifyCosAuditObjectIdentifyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCosAuditObjectIdentifyStatusOutcomeCallable ModifyCosAuditObjectIdentifyStatusCallable(const Model::ModifyCosAuditObjectIdentifyStatusRequest& request);

                /**
                 *设置对象存储扫描采样率
                 * @param req ModifyCosAuditObjectSampleRateRequest
                 * @return ModifyCosAuditObjectSampleRateOutcome
                 */
                ModifyCosAuditObjectSampleRateOutcome ModifyCosAuditObjectSampleRate(const Model::ModifyCosAuditObjectSampleRateRequest &request);
                void ModifyCosAuditObjectSampleRateAsync(const Model::ModifyCosAuditObjectSampleRateRequest& request, const ModifyCosAuditObjectSampleRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCosAuditObjectSampleRateOutcomeCallable ModifyCosAuditObjectSampleRateCallable(const Model::ModifyCosAuditObjectSampleRateRequest& request);

                /**
                 *修改对象存储备注
                 * @param req ModifyCosMarkInfoRequest
                 * @return ModifyCosMarkInfoOutcome
                 */
                ModifyCosMarkInfoOutcome ModifyCosMarkInfo(const Model::ModifyCosMarkInfoRequest &request);
                void ModifyCosMarkInfoAsync(const Model::ModifyCosMarkInfoRequest& request, const ModifyCosMarkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCosMarkInfoOutcomeCallable ModifyCosMarkInfoCallable(const Model::ModifyCosMarkInfoRequest& request);

                /**
                 *更新CSPM自动配额管理者共享开关
                 * @param req ModifyCspmShardConfigRequest
                 * @return ModifyCspmShardConfigOutcome
                 */
                ModifyCspmShardConfigOutcome ModifyCspmShardConfig(const Model::ModifyCspmShardConfigRequest &request);
                void ModifyCspmShardConfigAsync(const Model::ModifyCspmShardConfigRequest& request, const ModifyCspmShardConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCspmShardConfigOutcomeCallable ModifyCspmShardConfigCallable(const Model::ModifyCspmShardConfigRequest& request);

                /**
                 *修改Dspm访问管理信息
                 * @param req ModifyDspmAccessRecordRequest
                 * @return ModifyDspmAccessRecordOutcome
                 */
                ModifyDspmAccessRecordOutcome ModifyDspmAccessRecord(const Model::ModifyDspmAccessRecordRequest &request);
                void ModifyDspmAccessRecordAsync(const Model::ModifyDspmAccessRecordRequest& request, const ModifyDspmAccessRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAccessRecordOutcomeCallable ModifyDspmAccessRecordCallable(const Model::ModifyDspmAccessRecordRequest& request);

                /**
                 *修改dspm当前应用的数据识别模板
                 * @param req ModifyDspmApplyingIdentifyComplianceGroupRequest
                 * @return ModifyDspmApplyingIdentifyComplianceGroupOutcome
                 */
                ModifyDspmApplyingIdentifyComplianceGroupOutcome ModifyDspmApplyingIdentifyComplianceGroup(const Model::ModifyDspmApplyingIdentifyComplianceGroupRequest &request);
                void ModifyDspmApplyingIdentifyComplianceGroupAsync(const Model::ModifyDspmApplyingIdentifyComplianceGroupRequest& request, const ModifyDspmApplyingIdentifyComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmApplyingIdentifyComplianceGroupOutcomeCallable ModifyDspmApplyingIdentifyComplianceGroupCallable(const Model::ModifyDspmApplyingIdentifyComplianceGroupRequest& request);

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
                 *修改Dspm资产数据扫描任务状态
                 * @param req ModifyDspmAssetDataScanTaskStatusRequest
                 * @return ModifyDspmAssetDataScanTaskStatusOutcome
                 */
                ModifyDspmAssetDataScanTaskStatusOutcome ModifyDspmAssetDataScanTaskStatus(const Model::ModifyDspmAssetDataScanTaskStatusRequest &request);
                void ModifyDspmAssetDataScanTaskStatusAsync(const Model::ModifyDspmAssetDataScanTaskStatusRequest& request, const ModifyDspmAssetDataScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAssetDataScanTaskStatusOutcomeCallable ModifyDspmAssetDataScanTaskStatusCallable(const Model::ModifyDspmAssetDataScanTaskStatusRequest& request);

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
                 *修改dspm数据识别分类
                 * @param req ModifyDspmIdentifyCategoryRequest
                 * @return ModifyDspmIdentifyCategoryOutcome
                 */
                ModifyDspmIdentifyCategoryOutcome ModifyDspmIdentifyCategory(const Model::ModifyDspmIdentifyCategoryRequest &request);
                void ModifyDspmIdentifyCategoryAsync(const Model::ModifyDspmIdentifyCategoryRequest& request, const ModifyDspmIdentifyCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyCategoryOutcomeCallable ModifyDspmIdentifyCategoryCallable(const Model::ModifyDspmIdentifyCategoryRequest& request);

                /**
                 *修改dspm数据识别模板
                 * @param req ModifyDspmIdentifyComplianceGroupRequest
                 * @return ModifyDspmIdentifyComplianceGroupOutcome
                 */
                ModifyDspmIdentifyComplianceGroupOutcome ModifyDspmIdentifyComplianceGroup(const Model::ModifyDspmIdentifyComplianceGroupRequest &request);
                void ModifyDspmIdentifyComplianceGroupAsync(const Model::ModifyDspmIdentifyComplianceGroupRequest& request, const ModifyDspmIdentifyComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyComplianceGroupOutcomeCallable ModifyDspmIdentifyComplianceGroupCallable(const Model::ModifyDspmIdentifyComplianceGroupRequest& request);

                /**
                 *修改dspm数据识别模板状态
                 * @param req ModifyDspmIdentifyComplianceGroupStatusRequest
                 * @return ModifyDspmIdentifyComplianceGroupStatusOutcome
                 */
                ModifyDspmIdentifyComplianceGroupStatusOutcome ModifyDspmIdentifyComplianceGroupStatus(const Model::ModifyDspmIdentifyComplianceGroupStatusRequest &request);
                void ModifyDspmIdentifyComplianceGroupStatusAsync(const Model::ModifyDspmIdentifyComplianceGroupStatusRequest& request, const ModifyDspmIdentifyComplianceGroupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyComplianceGroupStatusOutcomeCallable ModifyDspmIdentifyComplianceGroupStatusCallable(const Model::ModifyDspmIdentifyComplianceGroupStatusRequest& request);

                /**
                 *修改dspm数据识别模板数据项关联级别信息
                 * @param req ModifyDspmIdentifyComplianceRuleLevelInfoRequest
                 * @return ModifyDspmIdentifyComplianceRuleLevelInfoOutcome
                 */
                ModifyDspmIdentifyComplianceRuleLevelInfoOutcome ModifyDspmIdentifyComplianceRuleLevelInfo(const Model::ModifyDspmIdentifyComplianceRuleLevelInfoRequest &request);
                void ModifyDspmIdentifyComplianceRuleLevelInfoAsync(const Model::ModifyDspmIdentifyComplianceRuleLevelInfoRequest& request, const ModifyDspmIdentifyComplianceRuleLevelInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyComplianceRuleLevelInfoOutcomeCallable ModifyDspmIdentifyComplianceRuleLevelInfoCallable(const Model::ModifyDspmIdentifyComplianceRuleLevelInfoRequest& request);

                /**
                 *修改Dspm身份信息
                 * @param req ModifyDspmIdentifyInfoRequest
                 * @return ModifyDspmIdentifyInfoOutcome
                 */
                ModifyDspmIdentifyInfoOutcome ModifyDspmIdentifyInfo(const Model::ModifyDspmIdentifyInfoRequest &request);
                void ModifyDspmIdentifyInfoAsync(const Model::ModifyDspmIdentifyInfoRequest& request, const ModifyDspmIdentifyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyInfoOutcomeCallable ModifyDspmIdentifyInfoCallable(const Model::ModifyDspmIdentifyInfoRequest& request);

                /**
                 *修改dspm数据识别分级组
                 * @param req ModifyDspmIdentifyLevelGroupRequest
                 * @return ModifyDspmIdentifyLevelGroupOutcome
                 */
                ModifyDspmIdentifyLevelGroupOutcome ModifyDspmIdentifyLevelGroup(const Model::ModifyDspmIdentifyLevelGroupRequest &request);
                void ModifyDspmIdentifyLevelGroupAsync(const Model::ModifyDspmIdentifyLevelGroupRequest& request, const ModifyDspmIdentifyLevelGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyLevelGroupOutcomeCallable ModifyDspmIdentifyLevelGroupCallable(const Model::ModifyDspmIdentifyLevelGroupRequest& request);

                /**
                 *修改dspm数据识别分级信息
                 * @param req ModifyDspmIdentifyLevelItemRequest
                 * @return ModifyDspmIdentifyLevelItemOutcome
                 */
                ModifyDspmIdentifyLevelItemOutcome ModifyDspmIdentifyLevelItem(const Model::ModifyDspmIdentifyLevelItemRequest &request);
                void ModifyDspmIdentifyLevelItemAsync(const Model::ModifyDspmIdentifyLevelItemRequest& request, const ModifyDspmIdentifyLevelItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyLevelItemOutcomeCallable ModifyDspmIdentifyLevelItemCallable(const Model::ModifyDspmIdentifyLevelItemRequest& request);

                /**
                 *修改dspm数据识别数据项
                 * @param req ModifyDspmIdentifyRuleRequest
                 * @return ModifyDspmIdentifyRuleOutcome
                 */
                ModifyDspmIdentifyRuleOutcome ModifyDspmIdentifyRule(const Model::ModifyDspmIdentifyRuleRequest &request);
                void ModifyDspmIdentifyRuleAsync(const Model::ModifyDspmIdentifyRuleRequest& request, const ModifyDspmIdentifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyRuleOutcomeCallable ModifyDspmIdentifyRuleCallable(const Model::ModifyDspmIdentifyRuleRequest& request);

                /**
                 *修改dspm数据识别数据项状态
                 * @param req ModifyDspmIdentifyRuleStatusRequest
                 * @return ModifyDspmIdentifyRuleStatusOutcome
                 */
                ModifyDspmIdentifyRuleStatusOutcome ModifyDspmIdentifyRuleStatus(const Model::ModifyDspmIdentifyRuleStatusRequest &request);
                void ModifyDspmIdentifyRuleStatusAsync(const Model::ModifyDspmIdentifyRuleStatusRequest& request, const ModifyDspmIdentifyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyRuleStatusOutcomeCallable ModifyDspmIdentifyRuleStatusCallable(const Model::ModifyDspmIdentifyRuleStatusRequest& request);

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
                 *编辑或者创建EDR策略
                 * @param req ModifyEDRRuleRequest
                 * @return ModifyEDRRuleOutcome
                 */
                ModifyEDRRuleOutcome ModifyEDRRule(const Model::ModifyEDRRuleRequest &request);
                void ModifyEDRRuleAsync(const Model::ModifyEDRRuleRequest& request, const ModifyEDRRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEDRRuleOutcomeCallable ModifyEDRRuleCallable(const Model::ModifyEDRRuleRequest& request);

                /**
                 *修改EDR策略开关状态
                 * @param req ModifyEDRRuleStatusRequest
                 * @return ModifyEDRRuleStatusOutcome
                 */
                ModifyEDRRuleStatusOutcome ModifyEDRRuleStatus(const Model::ModifyEDRRuleStatusRequest &request);
                void ModifyEDRRuleStatusAsync(const Model::ModifyEDRRuleStatusRequest& request, const ModifyEDRRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEDRRuleStatusOutcomeCallable ModifyEDRRuleStatusCallable(const Model::ModifyEDRRuleStatusRequest& request);

                /**
                 *批量修改EDR策略动作
                 * @param req ModifyEDRRulesActionRequest
                 * @return ModifyEDRRulesActionOutcome
                 */
                ModifyEDRRulesActionOutcome ModifyEDRRulesAction(const Model::ModifyEDRRulesActionRequest &request);
                void ModifyEDRRulesActionAsync(const Model::ModifyEDRRulesActionRequest& request, const ModifyEDRRulesActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEDRRulesActionOutcomeCallable ModifyEDRRulesActionCallable(const Model::ModifyEDRRulesActionRequest& request);

                /**
                 *EDR告警隔离和恢复
                 * @param req ModifyEdrAlertIsolationRequest
                 * @return ModifyEdrAlertIsolationOutcome
                 */
                ModifyEdrAlertIsolationOutcome ModifyEdrAlertIsolation(const Model::ModifyEdrAlertIsolationRequest &request);
                void ModifyEdrAlertIsolationAsync(const Model::ModifyEdrAlertIsolationRequest& request, const ModifyEdrAlertIsolationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdrAlertIsolationOutcomeCallable ModifyEdrAlertIsolationCallable(const Model::ModifyEdrAlertIsolationRequest& request);

                /**
                 *永久忽略EDR多行为告警，将告警对应的主机+规则加入AI-Link永久忽略白名单，后续同类告警将自动丢弃
                 * @param req ModifyEdrAlertPermanentIgnoreRequest
                 * @return ModifyEdrAlertPermanentIgnoreOutcome
                 */
                ModifyEdrAlertPermanentIgnoreOutcome ModifyEdrAlertPermanentIgnore(const Model::ModifyEdrAlertPermanentIgnoreRequest &request);
                void ModifyEdrAlertPermanentIgnoreAsync(const Model::ModifyEdrAlertPermanentIgnoreRequest& request, const ModifyEdrAlertPermanentIgnoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdrAlertPermanentIgnoreOutcomeCallable ModifyEdrAlertPermanentIgnoreCallable(const Model::ModifyEdrAlertPermanentIgnoreRequest& request);

                /**
                 *EDR告警状态处置
                 * @param req ModifyEdrAlertStatusRequest
                 * @return ModifyEdrAlertStatusOutcome
                 */
                ModifyEdrAlertStatusOutcome ModifyEdrAlertStatus(const Model::ModifyEdrAlertStatusRequest &request);
                void ModifyEdrAlertStatusAsync(const Model::ModifyEdrAlertStatusRequest& request, const ModifyEdrAlertStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdrAlertStatusOutcomeCallable ModifyEdrAlertStatusCallable(const Model::ModifyEdrAlertStatusRequest& request);

                /**
                 *修改日志采集例外网段配置，支持IP/IP段/CIDR格式，最多可添加100条
                 * @param req ModifyEdrExcludeNetworkSegmentsRequest
                 * @return ModifyEdrExcludeNetworkSegmentsOutcome
                 */
                ModifyEdrExcludeNetworkSegmentsOutcome ModifyEdrExcludeNetworkSegments(const Model::ModifyEdrExcludeNetworkSegmentsRequest &request);
                void ModifyEdrExcludeNetworkSegmentsAsync(const Model::ModifyEdrExcludeNetworkSegmentsRequest& request, const ModifyEdrExcludeNetworkSegmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdrExcludeNetworkSegmentsOutcomeCallable ModifyEdrExcludeNetworkSegmentsCallable(const Model::ModifyEdrExcludeNetworkSegmentsRequest& request);

                /**
                 *修改应用日志采集路径配置
                 * @param req ModifyEdrLogCollectPathRequest
                 * @return ModifyEdrLogCollectPathOutcome
                 */
                ModifyEdrLogCollectPathOutcome ModifyEdrLogCollectPath(const Model::ModifyEdrLogCollectPathRequest &request);
                void ModifyEdrLogCollectPathAsync(const Model::ModifyEdrLogCollectPathRequest& request, const ModifyEdrLogCollectPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdrLogCollectPathOutcomeCallable ModifyEdrLogCollectPathCallable(const Model::ModifyEdrLogCollectPathRequest& request);

                /**
                 *云边界自动打标-更新规则
                 * @param req ModifyExposureAutoTagRuleRequest
                 * @return ModifyExposureAutoTagRuleOutcome
                 */
                ModifyExposureAutoTagRuleOutcome ModifyExposureAutoTagRule(const Model::ModifyExposureAutoTagRuleRequest &request);
                void ModifyExposureAutoTagRuleAsync(const Model::ModifyExposureAutoTagRuleRequest& request, const ModifyExposureAutoTagRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyExposureAutoTagRuleOutcomeCallable ModifyExposureAutoTagRuleCallable(const Model::ModifyExposureAutoTagRuleRequest& request);

                /**
                 *云边界自动打标-启停规则
                 * @param req ModifyExposureAutoTagRuleStatusRequest
                 * @return ModifyExposureAutoTagRuleStatusOutcome
                 */
                ModifyExposureAutoTagRuleStatusOutcome ModifyExposureAutoTagRuleStatus(const Model::ModifyExposureAutoTagRuleStatusRequest &request);
                void ModifyExposureAutoTagRuleStatusAsync(const Model::ModifyExposureAutoTagRuleStatusRequest& request, const ModifyExposureAutoTagRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyExposureAutoTagRuleStatusOutcomeCallable ModifyExposureAutoTagRuleStatusCallable(const Model::ModifyExposureAutoTagRuleStatusRequest& request);

                /**
                 *更新云边界自定义标签
                 * @param req ModifyExposureTagRequest
                 * @return ModifyExposureTagOutcome
                 */
                ModifyExposureTagOutcome ModifyExposureTag(const Model::ModifyExposureTagRequest &request);
                void ModifyExposureTagAsync(const Model::ModifyExposureTagRequest& request, const ModifyExposureTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyExposureTagOutcomeCallable ModifyExposureTagCallable(const Model::ModifyExposureTagRequest& request);

                /**
                 *修改IaC检测接入Token存储周期
                 * @param req ModifyIaCTokenPeriodRequest
                 * @return ModifyIaCTokenPeriodOutcome
                 */
                ModifyIaCTokenPeriodOutcome ModifyIaCTokenPeriod(const Model::ModifyIaCTokenPeriodRequest &request);
                void ModifyIaCTokenPeriodAsync(const Model::ModifyIaCTokenPeriodRequest& request, const ModifyIaCTokenPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIaCTokenPeriodOutcomeCallable ModifyIaCTokenPeriodCallable(const Model::ModifyIaCTokenPeriodRequest& request);

                /**
                 *修改镜像仓库信息
                 * @param req ModifyImageRegistryRequest
                 * @return ModifyImageRegistryOutcome
                 */
                ModifyImageRegistryOutcome ModifyImageRegistry(const Model::ModifyImageRegistryRequest &request);
                void ModifyImageRegistryAsync(const Model::ModifyImageRegistryRequest& request, const ModifyImageRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageRegistryOutcomeCallable ModifyImageRegistryCallable(const Model::ModifyImageRegistryRequest& request);

                /**
                 *修改镜像仓库定时扫描任务配置
                 * @param req ModifyImageRegistryTimedScanTaskConfigRequest
                 * @return ModifyImageRegistryTimedScanTaskConfigOutcome
                 */
                ModifyImageRegistryTimedScanTaskConfigOutcome ModifyImageRegistryTimedScanTaskConfig(const Model::ModifyImageRegistryTimedScanTaskConfigRequest &request);
                void ModifyImageRegistryTimedScanTaskConfigAsync(const Model::ModifyImageRegistryTimedScanTaskConfigRequest& request, const ModifyImageRegistryTimedScanTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageRegistryTimedScanTaskConfigOutcomeCallable ModifyImageRegistryTimedScanTaskConfigCallable(const Model::ModifyImageRegistryTimedScanTaskConfigRequest& request);

                /**
                 *修改容器镜像敏感信息白名单
                 * @param req ModifyImageSensitiveWhitelistRequest
                 * @return ModifyImageSensitiveWhitelistOutcome
                 */
                ModifyImageSensitiveWhitelistOutcome ModifyImageSensitiveWhitelist(const Model::ModifyImageSensitiveWhitelistRequest &request);
                void ModifyImageSensitiveWhitelistAsync(const Model::ModifyImageSensitiveWhitelistRequest& request, const ModifyImageSensitiveWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageSensitiveWhitelistOutcomeCallable ModifyImageSensitiveWhitelistCallable(const Model::ModifyImageSensitiveWhitelistRequest& request);

                /**
                 *查询资产数据库信息
                 * @param req ModifyImageVirusWhitelistRequest
                 * @return ModifyImageVirusWhitelistOutcome
                 */
                ModifyImageVirusWhitelistOutcome ModifyImageVirusWhitelist(const Model::ModifyImageVirusWhitelistRequest &request);
                void ModifyImageVirusWhitelistAsync(const Model::ModifyImageVirusWhitelistRequest& request, const ModifyImageVirusWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageVirusWhitelistOutcomeCallable ModifyImageVirusWhitelistCallable(const Model::ModifyImageVirusWhitelistRequest& request);

                /**
                 *修改容器镜像漏洞白名单
                 * @param req ModifyImageVulWhitelistRequest
                 * @return ModifyImageVulWhitelistOutcome
                 */
                ModifyImageVulWhitelistOutcome ModifyImageVulWhitelist(const Model::ModifyImageVulWhitelistRequest &request);
                void ModifyImageVulWhitelistAsync(const Model::ModifyImageVulWhitelistRequest& request, const ModifyImageVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageVulWhitelistOutcomeCallable ModifyImageVulWhitelistCallable(const Model::ModifyImageVulWhitelistRequest& request);

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
                 *修改主机资产备注信息
                 * @param req ModifyMachineRemarkRequest
                 * @return ModifyMachineRemarkOutcome
                 */
                ModifyMachineRemarkOutcome ModifyMachineRemark(const Model::ModifyMachineRemarkRequest &request);
                void ModifyMachineRemarkAsync(const Model::ModifyMachineRemarkRequest& request, const ModifyMachineRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMachineRemarkOutcomeCallable ModifyMachineRemarkCallable(const Model::ModifyMachineRemarkRequest& request);

                /**
                 *批量修改主机登录方式
                 * @param req ModifyMachinesLoginTypeRequest
                 * @return ModifyMachinesLoginTypeOutcome
                 */
                ModifyMachinesLoginTypeOutcome ModifyMachinesLoginType(const Model::ModifyMachinesLoginTypeRequest &request);
                void ModifyMachinesLoginTypeAsync(const Model::ModifyMachinesLoginTypeRequest& request, const ModifyMachinesLoginTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMachinesLoginTypeOutcomeCallable ModifyMachinesLoginTypeCallable(const Model::ModifyMachinesLoginTypeRequest& request);

                /**
                 *修改文件查杀定时扫描配置，包含扫描周期、检测模式、资产范围、引擎选择、隔离配置等
                 * @param req ModifyMalwareTimingScanSettingsRequest
                 * @return ModifyMalwareTimingScanSettingsOutcome
                 */
                ModifyMalwareTimingScanSettingsOutcome ModifyMalwareTimingScanSettings(const Model::ModifyMalwareTimingScanSettingsRequest &request);
                void ModifyMalwareTimingScanSettingsAsync(const Model::ModifyMalwareTimingScanSettingsRequest& request, const ModifyMalwareTimingScanSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMalwareTimingScanSettingsOutcomeCallable ModifyMalwareTimingScanSettingsCallable(const Model::ModifyMalwareTimingScanSettingsRequest& request);

                /**
                 *新增或更新NFS扫描全局配置
                 * @param req ModifyNFSScanConfRequest
                 * @return ModifyNFSScanConfOutcome
                 */
                ModifyNFSScanConfOutcome ModifyNFSScanConf(const Model::ModifyNFSScanConfRequest &request);
                void ModifyNFSScanConfAsync(const Model::ModifyNFSScanConfRequest& request, const ModifyNFSScanConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNFSScanConfOutcomeCallable ModifyNFSScanConfCallable(const Model::ModifyNFSScanConfRequest& request);

                /**
                 *关闭进程守护功能
                 * @param req ModifyNFSScanHostRequest
                 * @return ModifyNFSScanHostOutcome
                 */
                ModifyNFSScanHostOutcome ModifyNFSScanHost(const Model::ModifyNFSScanHostRequest &request);
                void ModifyNFSScanHostAsync(const Model::ModifyNFSScanHostRequest& request, const ModifyNFSScanHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNFSScanHostOutcomeCallable ModifyNFSScanHostCallable(const Model::ModifyNFSScanHostRequest& request);

                /**
                 *修改网络攻击检测开关及资产范围配置
                 * @param req ModifyNetAttackSettingRequest
                 * @return ModifyNetAttackSettingOutcome
                 */
                ModifyNetAttackSettingOutcome ModifyNetAttackSetting(const Model::ModifyNetAttackSettingRequest &request);
                void ModifyNetAttackSettingAsync(const Model::ModifyNetAttackSettingRequest& request, const ModifyNetAttackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetAttackSettingOutcomeCallable ModifyNetAttackSettingCallable(const Model::ModifyNetAttackSettingRequest& request);

                /**
                 *修改客户端离线时长
                 * @param req ModifyNotifyAgentOfflineDurationRequest
                 * @return ModifyNotifyAgentOfflineDurationOutcome
                 */
                ModifyNotifyAgentOfflineDurationOutcome ModifyNotifyAgentOfflineDuration(const Model::ModifyNotifyAgentOfflineDurationRequest &request);
                void ModifyNotifyAgentOfflineDurationAsync(const Model::ModifyNotifyAgentOfflineDurationRequest& request, const ModifyNotifyAgentOfflineDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotifyAgentOfflineDurationOutcomeCallable ModifyNotifyAgentOfflineDurationCallable(const Model::ModifyNotifyAgentOfflineDurationRequest& request);

                /**
                 *修改通知资产范围配置
                 * @param req ModifyNotifyAssetConfigRequest
                 * @return ModifyNotifyAssetConfigOutcome
                 */
                ModifyNotifyAssetConfigOutcome ModifyNotifyAssetConfig(const Model::ModifyNotifyAssetConfigRequest &request);
                void ModifyNotifyAssetConfigAsync(const Model::ModifyNotifyAssetConfigRequest& request, const ModifyNotifyAssetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotifyAssetConfigOutcomeCallable ModifyNotifyAssetConfigCallable(const Model::ModifyNotifyAssetConfigRequest& request);

                /**
                 *修改通知成员账号
                 * @param req ModifyNotifyMemberRequest
                 * @return ModifyNotifyMemberOutcome
                 */
                ModifyNotifyMemberOutcome ModifyNotifyMember(const Model::ModifyNotifyMemberRequest &request);
                void ModifyNotifyMemberAsync(const Model::ModifyNotifyMemberRequest& request, const ModifyNotifyMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotifyMemberOutcomeCallable ModifyNotifyMemberCallable(const Model::ModifyNotifyMemberRequest& request);

                /**
                 *修改通知设置
                 * @param req ModifyNotifySettingRequest
                 * @return ModifyNotifySettingOutcome
                 */
                ModifyNotifySettingOutcome ModifyNotifySetting(const Model::ModifyNotifySettingRequest &request);
                void ModifyNotifySettingAsync(const Model::ModifyNotifySettingRequest& request, const ModifyNotifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotifySettingOutcomeCallable ModifyNotifySettingCallable(const Model::ModifyNotifySettingRequest& request);

                /**
                 *修改通知设置（云API风险治理）
                 * @param req ModifyNotifySettingAkRequest
                 * @return ModifyNotifySettingAkOutcome
                 */
                ModifyNotifySettingAkOutcome ModifyNotifySettingAk(const Model::ModifyNotifySettingAkRequest &request);
                void ModifyNotifySettingAkAsync(const Model::ModifyNotifySettingAkRequest& request, const ModifyNotifySettingAkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotifySettingAkOutcomeCallable ModifyNotifySettingAkCallable(const Model::ModifyNotifySettingAkRequest& request);

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
                 *修改自动扩容配置（多模块可扩展，本期仅主机安全模块）。

「自动扩容」为面向用户的对外概念，等价于底层自动加购(auto_repurchase)：当账号有新增资产时，自动加购所需授权。

补充说明：
1. 本期仅实现主机安全模块 HostConfig；后续可扩展容器安全、AI-Agent 安全等命名模块字段，各模块配置字段可异构；
2. 部分更新语义：模块对象为空表示该模块不修改，模块内字段为空表示该字段不修改；
3. HostConfig.Switch 联动映射 auto_repurchase_switch；auto_bind_switch（自动绑定）恒开，不由本接口改动；
4. 自动续费(renew_flag) 不由本接口改动；额度/用量请调用 DescribeLicenseStatus；
5. 顶部「自动扩容」总开关状态由前端按各模块开关聚合，后端不存储、不返回全局开关。
                 * @param req ModifyPayConfigRequest
                 * @return ModifyPayConfigOutcome
                 */
                ModifyPayConfigOutcome ModifyPayConfig(const Model::ModifyPayConfigRequest &request);
                void ModifyPayConfigAsync(const Model::ModifyPayConfigRequest& request, const ModifyPayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPayConfigOutcomeCallable ModifyPayConfigCallable(const Model::ModifyPayConfigRequest& request);

                /**
                 *修改策略状态
                 * @param req ModifyPolicyStatusRequest
                 * @return ModifyPolicyStatusOutcome
                 */
                ModifyPolicyStatusOutcome ModifyPolicyStatus(const Model::ModifyPolicyStatusRequest &request);
                void ModifyPolicyStatusAsync(const Model::ModifyPolicyStatusRequest& request, const ModifyPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPolicyStatusOutcomeCallable ModifyPolicyStatusCallable(const Model::ModifyPolicyStatusRequest& request);

                /**
                 *重保防护包防护设置
                 * @param req ModifyProtectionSettingRequest
                 * @return ModifyProtectionSettingOutcome
                 */
                ModifyProtectionSettingOutcome ModifyProtectionSetting(const Model::ModifyProtectionSettingRequest &request);
                void ModifyProtectionSettingAsync(const Model::ModifyProtectionSettingRequest& request, const ModifyProtectionSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProtectionSettingOutcomeCallable ModifyProtectionSettingCallable(const Model::ModifyProtectionSettingRequest& request);

                /**
                 *重保防护授权包绑定
                 * @param req ModifyRaspLicenseBindsRequest
                 * @return ModifyRaspLicenseBindsOutcome
                 */
                ModifyRaspLicenseBindsOutcome ModifyRaspLicenseBinds(const Model::ModifyRaspLicenseBindsRequest &request);
                void ModifyRaspLicenseBindsAsync(const Model::ModifyRaspLicenseBindsRequest& request, const ModifyRaspLicenseBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRaspLicenseBindsOutcomeCallable ModifyRaspLicenseBindsCallable(const Model::ModifyRaspLicenseBindsRequest& request);

                /**
                 *修改反弹Shell内网告警与资产范围配置
                 * @param req ModifyReverseShellSystemPolicyConfigRequest
                 * @return ModifyReverseShellSystemPolicyConfigOutcome
                 */
                ModifyReverseShellSystemPolicyConfigOutcome ModifyReverseShellSystemPolicyConfig(const Model::ModifyReverseShellSystemPolicyConfigRequest &request);
                void ModifyReverseShellSystemPolicyConfigAsync(const Model::ModifyReverseShellSystemPolicyConfigRequest& request, const ModifyReverseShellSystemPolicyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReverseShellSystemPolicyConfigOutcomeCallable ModifyReverseShellSystemPolicyConfigCallable(const Model::ModifyReverseShellSystemPolicyConfigRequest& request);

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
                 *更新周期扫描计划
                 * @param req ModifyRiskScanCronConfigRequest
                 * @return ModifyRiskScanCronConfigOutcome
                 */
                ModifyRiskScanCronConfigOutcome ModifyRiskScanCronConfig(const Model::ModifyRiskScanCronConfigRequest &request);
                void ModifyRiskScanCronConfigAsync(const Model::ModifyRiskScanCronConfigRequest& request, const ModifyRiskScanCronConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskScanCronConfigOutcomeCallable ModifyRiskScanCronConfigCallable(const Model::ModifyRiskScanCronConfigRequest& request);

                /**
                 *批量切换 LLM 审计用户规则的启禁用状态。任一规则不存在、属于其他租户或已删除时整体返回错误
                 * @param req ModifySandboxLLMAuditRuleStatusRequest
                 * @return ModifySandboxLLMAuditRuleStatusOutcome
                 */
                ModifySandboxLLMAuditRuleStatusOutcome ModifySandboxLLMAuditRuleStatus(const Model::ModifySandboxLLMAuditRuleStatusRequest &request);
                void ModifySandboxLLMAuditRuleStatusAsync(const Model::ModifySandboxLLMAuditRuleStatusRequest& request, const ModifySandboxLLMAuditRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySandboxLLMAuditRuleStatusOutcomeCallable ModifySandboxLLMAuditRuleStatusCallable(const Model::ModifySandboxLLMAuditRuleStatusRequest& request);

                /**
                 *修改安全评分规则，必须传入完整规则集
                 * @param req ModifySecurityScoreRuleRequest
                 * @return ModifySecurityScoreRuleOutcome
                 */
                ModifySecurityScoreRuleOutcome ModifySecurityScoreRule(const Model::ModifySecurityScoreRuleRequest &request);
                void ModifySecurityScoreRuleAsync(const Model::ModifySecurityScoreRuleRequest& request, const ModifySecurityScoreRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityScoreRuleOutcomeCallable ModifySecurityScoreRuleCallable(const Model::ModifySecurityScoreRuleRequest& request);

                /**
                 *编辑CSPM共享账号
                 * @param req ModifyShareUserCSPMRequest
                 * @return ModifyShareUserCSPMOutcome
                 */
                ModifyShareUserCSPMOutcome ModifyShareUserCSPM(const Model::ModifyShareUserCSPMRequest &request);
                void ModifyShareUserCSPMAsync(const Model::ModifyShareUserCSPMRequest& request, const ModifyShareUserCSPMAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyShareUserCSPMOutcomeCallable ModifyShareUserCSPMCallable(const Model::ModifyShareUserCSPMRequest& request);

                /**
                 *批量修改 Skill 安全检测告警的处理状态
                 * @param req ModifySkillScanAlertStatusRequest
                 * @return ModifySkillScanAlertStatusOutcome
                 */
                ModifySkillScanAlertStatusOutcome ModifySkillScanAlertStatus(const Model::ModifySkillScanAlertStatusRequest &request);
                void ModifySkillScanAlertStatusAsync(const Model::ModifySkillScanAlertStatusRequest& request, const ModifySkillScanAlertStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySkillScanAlertStatusOutcomeCallable ModifySkillScanAlertStatusCallable(const Model::ModifySkillScanAlertStatusRequest& request);

                /**
                 *更新自定义策略的开关
                 * @param req ModifyUebaRuleSwitchRequest
                 * @return ModifyUebaRuleSwitchOutcome
                 */
                ModifyUebaRuleSwitchOutcome ModifyUebaRuleSwitch(const Model::ModifyUebaRuleSwitchRequest &request);
                void ModifyUebaRuleSwitchAsync(const Model::ModifyUebaRuleSwitchRequest& request, const ModifyUebaRuleSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUebaRuleSwitchOutcomeCallable ModifyUebaRuleSwitchCallable(const Model::ModifyUebaRuleSwitchRequest& request);

                /**
                 *修改漏洞扫描（周期扫描）
                 * @param req ModifyVulScanPeriodicRequest
                 * @return ModifyVulScanPeriodicOutcome
                 */
                ModifyVulScanPeriodicOutcome ModifyVulScanPeriodic(const Model::ModifyVulScanPeriodicRequest &request);
                void ModifyVulScanPeriodicAsync(const Model::ModifyVulScanPeriodicRequest& request, const ModifyVulScanPeriodicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVulScanPeriodicOutcomeCallable ModifyVulScanPeriodicCallable(const Model::ModifyVulScanPeriodicRequest& request);

                /**
                 *修改漏洞白名单配置
                 * @param req ModifyVulWhitelistConfigRequest
                 * @return ModifyVulWhitelistConfigOutcome
                 */
                ModifyVulWhitelistConfigOutcome ModifyVulWhitelistConfig(const Model::ModifyVulWhitelistConfigRequest &request);
                void ModifyVulWhitelistConfigAsync(const Model::ModifyVulWhitelistConfigRequest& request, const ModifyVulWhitelistConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVulWhitelistConfigOutcomeCallable ModifyVulWhitelistConfigCallable(const Model::ModifyVulWhitelistConfigRequest& request);

                /**
                 *修改漏洞白名单开关
                 * @param req ModifyVulWhitelistSwitchRequest
                 * @return ModifyVulWhitelistSwitchOutcome
                 */
                ModifyVulWhitelistSwitchOutcome ModifyVulWhitelistSwitch(const Model::ModifyVulWhitelistSwitchRequest &request);
                void ModifyVulWhitelistSwitchAsync(const Model::ModifyVulWhitelistSwitchRequest& request, const ModifyVulWhitelistSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVulWhitelistSwitchOutcomeCallable ModifyVulWhitelistSwitchCallable(const Model::ModifyVulWhitelistSwitchRequest& request);

                /**
                 *新增或修改一条通知策略。ID > 0 表示修改；ID = 0 或不传表示新增。MemberAppIds 配置为空时，策略仅作用于当前主账号事件；非空时同时作用于自身账号 + 所列成员账号。
                 * @param req ModifyWebhookPolicyRequest
                 * @return ModifyWebhookPolicyOutcome
                 */
                ModifyWebhookPolicyOutcome ModifyWebhookPolicy(const Model::ModifyWebhookPolicyRequest &request);
                void ModifyWebhookPolicyAsync(const Model::ModifyWebhookPolicyRequest& request, const ModifyWebhookPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebhookPolicyOutcomeCallable ModifyWebhookPolicyCallable(const Model::ModifyWebhookPolicyRequest& request);

                /**
                 *切换通知策略的启用状态。
                 * @param req ModifyWebhookPolicyStatusRequest
                 * @return ModifyWebhookPolicyStatusOutcome
                 */
                ModifyWebhookPolicyStatusOutcome ModifyWebhookPolicyStatus(const Model::ModifyWebhookPolicyStatusRequest &request);
                void ModifyWebhookPolicyStatusAsync(const Model::ModifyWebhookPolicyStatusRequest& request, const ModifyWebhookPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebhookPolicyStatusOutcomeCallable ModifyWebhookPolicyStatusCallable(const Model::ModifyWebhookPolicyStatusRequest& request);

                /**
                 *新增或修改一个接收机器人。ID > 0 表示修改已有记录；ID = 0 或不传表示新增。机器人类型由 Type 字段决定，Type=WEBHOOK 时 WebhookAddr 必填，Type=SCF 时 SCFRegion/Namespace/FunctionName/FunctionVersion/Alias/MaxWaitSeconds 全部必填。修改时不允许变更 Type
                 * @param req ModifyWebhookReceiverRequest
                 * @return ModifyWebhookReceiverOutcome
                 */
                ModifyWebhookReceiverOutcome ModifyWebhookReceiver(const Model::ModifyWebhookReceiverRequest &request);
                void ModifyWebhookReceiverAsync(const Model::ModifyWebhookReceiverRequest& request, const ModifyWebhookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebhookReceiverOutcomeCallable ModifyWebhookReceiverCallable(const Model::ModifyWebhookReceiverRequest& request);

                /**
                 *风险操作示例
                 * @param req OperateRiskRequest
                 * @return OperateRiskOutcome
                 */
                OperateRiskOutcome OperateRisk(const Model::OperateRiskRequest &request);
                void OperateRiskAsync(const Model::OperateRiskRequest& request, const OperateRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OperateRiskOutcomeCallable OperateRiskCallable(const Model::OperateRiskRequest& request);

                /**
                 *自定义风险规则
                 * @param req OperateRiskRulePolicyRequest
                 * @return OperateRiskRulePolicyOutcome
                 */
                OperateRiskRulePolicyOutcome OperateRiskRulePolicy(const Model::OperateRiskRulePolicyRequest &request);
                void OperateRiskRulePolicyAsync(const Model::OperateRiskRulePolicyRequest& request, const OperateRiskRulePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OperateRiskRulePolicyOutcomeCallable OperateRiskRulePolicyCallable(const Model::OperateRiskRulePolicyRequest& request);

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
                 *对单个资产的部分检测项发起重新扫描（资产详情页“重新扫描”入口）。
                 * @param req ScanBaselineAssetItemListRequest
                 * @return ScanBaselineAssetItemListOutcome
                 */
                ScanBaselineAssetItemListOutcome ScanBaselineAssetItemList(const Model::ScanBaselineAssetItemListRequest &request);
                void ScanBaselineAssetItemListAsync(const Model::ScanBaselineAssetItemListRequest& request, const ScanBaselineAssetItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanBaselineAssetItemListOutcomeCallable ScanBaselineAssetItemListCallable(const Model::ScanBaselineAssetItemListRequest& request);

                /**
                 *对指定策略下的一批检测项发起重新扫描（策略详情页“检测项”维度的复扫入口）。
                 * @param req ScanBaselineItemListRequest
                 * @return ScanBaselineItemListOutcome
                 */
                ScanBaselineItemListOutcome ScanBaselineItemList(const Model::ScanBaselineItemListRequest &request);
                void ScanBaselineItemListAsync(const Model::ScanBaselineItemListRequest& request, const ScanBaselineItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanBaselineItemListOutcomeCallable ScanBaselineItemListCallable(const Model::ScanBaselineItemListRequest& request);

                /**
                 *对一批基线策略发起整体重新扫描（策略列表页“一键扫描”入口），按策略命中的资产范围全量重扫。
                 * @param req ScanBaselinePolicyListRequest
                 * @return ScanBaselinePolicyListOutcome
                 */
                ScanBaselinePolicyListOutcome ScanBaselinePolicyList(const Model::ScanBaselinePolicyListRequest &request);
                void ScanBaselinePolicyListAsync(const Model::ScanBaselinePolicyListRequest& request, const ScanBaselinePolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanBaselinePolicyListOutcomeCallable ScanBaselinePolicyListCallable(const Model::ScanBaselinePolicyListRequest& request);

                /**
                 *对一批风险记录发起重新扫描，常用于“风险列表”页批量勾选风险后的复扫场景。
                 * @param req ScanBaselineRiskListRequest
                 * @return ScanBaselineRiskListOutcome
                 */
                ScanBaselineRiskListOutcome ScanBaselineRiskList(const Model::ScanBaselineRiskListRequest &request);
                void ScanBaselineRiskListAsync(const Model::ScanBaselineRiskListRequest& request, const ScanBaselineRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanBaselineRiskListOutcomeCallable ScanBaselineRiskListCallable(const Model::ScanBaselineRiskListRequest& request);

                /**
                 *CSIP 手动扫描任务删除接口
                 * @param req ScanCSIPTaskAgainRequest
                 * @return ScanCSIPTaskAgainOutcome
                 */
                ScanCSIPTaskAgainOutcome ScanCSIPTaskAgain(const Model::ScanCSIPTaskAgainRequest &request);
                void ScanCSIPTaskAgainAsync(const Model::ScanCSIPTaskAgainRequest& request, const ScanCSIPTaskAgainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanCSIPTaskAgainOutcomeCallable ScanCSIPTaskAgainCallable(const Model::ScanCSIPTaskAgainRequest& request);

                /**
                 *基于原任务配置新建扫描任务。AssetId为空时从TaskId获取全部资产信息；AssetId非空时仅含该单资产。
                 * @param req ScanEDRTaskAgainRequest
                 * @return ScanEDRTaskAgainOutcome
                 */
                ScanEDRTaskAgainOutcome ScanEDRTaskAgain(const Model::ScanEDRTaskAgainRequest &request);
                void ScanEDRTaskAgainAsync(const Model::ScanEDRTaskAgainRequest& request, const ScanEDRTaskAgainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanEDRTaskAgainOutcomeCallable ScanEDRTaskAgainCallable(const Model::ScanEDRTaskAgainRequest& request);

                /**
                 *发送Dspm资产访问验证码
                 * @param req SendDspmAssetLoginSmsCodeRequest
                 * @return SendDspmAssetLoginSmsCodeOutcome
                 */
                SendDspmAssetLoginSmsCodeOutcome SendDspmAssetLoginSmsCode(const Model::SendDspmAssetLoginSmsCodeRequest &request);
                void SendDspmAssetLoginSmsCodeAsync(const Model::SendDspmAssetLoginSmsCodeRequest& request, const SendDspmAssetLoginSmsCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendDspmAssetLoginSmsCodeOutcomeCallable SendDspmAssetLoginSmsCodeCallable(const Model::SendDspmAssetLoginSmsCodeRequest& request);

                /**
                 *开启或者修改防卸载功能配置
                 * @param req StartOrModifyPreventUninstallRequest
                 * @return StartOrModifyPreventUninstallOutcome
                 */
                StartOrModifyPreventUninstallOutcome StartOrModifyPreventUninstall(const Model::StartOrModifyPreventUninstallRequest &request);
                void StartOrModifyPreventUninstallAsync(const Model::StartOrModifyPreventUninstallRequest& request, const StartOrModifyPreventUninstallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartOrModifyPreventUninstallOutcomeCallable StartOrModifyPreventUninstallCallable(const Model::StartOrModifyPreventUninstallRequest& request);

                /**
                 *开启或者修改进程守护功能配置
                 * @param req StartOrModifyProcessDaemonRequest
                 * @return StartOrModifyProcessDaemonOutcome
                 */
                StartOrModifyProcessDaemonOutcome StartOrModifyProcessDaemon(const Model::StartOrModifyProcessDaemonRequest &request);
                void StartOrModifyProcessDaemonAsync(const Model::StartOrModifyProcessDaemonRequest& request, const StartOrModifyProcessDaemonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartOrModifyProcessDaemonOutcomeCallable StartOrModifyProcessDaemonCallable(const Model::StartOrModifyProcessDaemonRequest& request);

                /**
                 *停止指定的基线扫描主任务，仅对处于 INIT / SUBTASK_CREATING / SCANNING 状态的任务生效。
                 * @param req StopBaselineScanTaskRequest
                 * @return StopBaselineScanTaskOutcome
                 */
                StopBaselineScanTaskOutcome StopBaselineScanTask(const Model::StopBaselineScanTaskRequest &request);
                void StopBaselineScanTaskAsync(const Model::StopBaselineScanTaskRequest& request, const StopBaselineScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopBaselineScanTaskOutcomeCallable StopBaselineScanTaskCallable(const Model::StopBaselineScanTaskRequest& request);

                /**
                 *CSIP 手动扫描停止接口
                 * @param req StopCSIPManualMalwareScanRequest
                 * @return StopCSIPManualMalwareScanOutcome
                 */
                StopCSIPManualMalwareScanOutcome StopCSIPManualMalwareScan(const Model::StopCSIPManualMalwareScanRequest &request);
                void StopCSIPManualMalwareScanAsync(const Model::StopCSIPManualMalwareScanRequest& request, const StopCSIPManualMalwareScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopCSIPManualMalwareScanOutcomeCallable StopCSIPManualMalwareScanCallable(const Model::StopCSIPManualMalwareScanRequest& request);

                /**
                 *停止或取消扫描任务。SCANNING状态调RPC停止，WAIT状态直接改库取消。只有任务创建者可操作。
                 * @param req StopEDRScanTaskRequest
                 * @return StopEDRScanTaskOutcome
                 */
                StopEDRScanTaskOutcome StopEDRScanTask(const Model::StopEDRScanTaskRequest &request);
                void StopEDRScanTaskAsync(const Model::StopEDRScanTaskRequest& request, const StopEDRScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopEDRScanTaskOutcomeCallable StopEDRScanTaskCallable(const Model::StopEDRScanTaskRequest& request);

                /**
                 *停止镜像仓库镜像扫描任务
                 * @param req StopImageRegistryScanTaskRequest
                 * @return StopImageRegistryScanTaskOutcome
                 */
                StopImageRegistryScanTaskOutcome StopImageRegistryScanTask(const Model::StopImageRegistryScanTaskRequest &request);
                void StopImageRegistryScanTaskAsync(const Model::StopImageRegistryScanTaskRequest& request, const StopImageRegistryScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopImageRegistryScanTaskOutcomeCallable StopImageRegistryScanTaskCallable(const Model::StopImageRegistryScanTaskRequest& request);

                /**
                 *关闭防卸载功能
                 * @param req StopPreventUninstallRequest
                 * @return StopPreventUninstallOutcome
                 */
                StopPreventUninstallOutcome StopPreventUninstall(const Model::StopPreventUninstallRequest &request);
                void StopPreventUninstallAsync(const Model::StopPreventUninstallRequest& request, const StopPreventUninstallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopPreventUninstallOutcomeCallable StopPreventUninstallCallable(const Model::StopPreventUninstallRequest& request);

                /**
                 *关闭进程守护功能
                 * @param req StopProcessDaemonRequest
                 * @return StopProcessDaemonOutcome
                 */
                StopProcessDaemonOutcome StopProcessDaemon(const Model::StopProcessDaemonRequest &request);
                void StopProcessDaemonAsync(const Model::StopProcessDaemonRequest& request, const StopProcessDaemonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopProcessDaemonOutcomeCallable StopProcessDaemonCallable(const Model::StopProcessDaemonRequest& request);

                /**
                 *停止扫风险中心扫描任务
                 * @param req StopRiskCenterTaskRequest
                 * @return StopRiskCenterTaskOutcome
                 */
                StopRiskCenterTaskOutcome StopRiskCenterTask(const Model::StopRiskCenterTaskRequest &request);
                void StopRiskCenterTaskAsync(const Model::StopRiskCenterTaskRequest& request, const StopRiskCenterTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopRiskCenterTaskOutcomeCallable StopRiskCenterTaskCallable(const Model::StopRiskCenterTaskRequest& request);

                /**
                 *停止漏洞扫描（任务扫描）
                 * @param req StopVulScanTaskRequest
                 * @return StopVulScanTaskOutcome
                 */
                StopVulScanTaskOutcome StopVulScanTask(const Model::StopVulScanTaskRequest &request);
                void StopVulScanTaskAsync(const Model::StopVulScanTaskRequest& request, const StopVulScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopVulScanTaskOutcomeCallable StopVulScanTaskCallable(const Model::StopVulScanTaskRequest& request);

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
                 *镜像仓库同步
                 * @param req SyncImageRegistryRequest
                 * @return SyncImageRegistryOutcome
                 */
                SyncImageRegistryOutcome SyncImageRegistry(const Model::SyncImageRegistryRequest &request);
                void SyncImageRegistryAsync(const Model::SyncImageRegistryRequest& request, const SyncImageRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncImageRegistryOutcomeCallable SyncImageRegistryCallable(const Model::SyncImageRegistryRequest& request);

                /**
                 *向指定的接收机器人发送一条测试消息，验证可达性与配置正确性。对应表格行内的「测试」按钮。
                 * @param req TestWebhookReceiverRequest
                 * @return TestWebhookReceiverOutcome
                 */
                TestWebhookReceiverOutcome TestWebhookReceiver(const Model::TestWebhookReceiverRequest &request);
                void TestWebhookReceiverAsync(const Model::TestWebhookReceiverRequest& request, const TestWebhookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TestWebhookReceiverOutcomeCallable TestWebhookReceiverCallable(const Model::TestWebhookReceiverRequest& request);

                /**
                 *卸载集群容器安全Agent。
                 * @param req UninstallClusterAgentRequest
                 * @return UninstallClusterAgentOutcome
                 */
                UninstallClusterAgentOutcome UninstallClusterAgent(const Model::UninstallClusterAgentRequest &request);
                void UninstallClusterAgentAsync(const Model::UninstallClusterAgentRequest& request, const UninstallClusterAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UninstallClusterAgentOutcomeCallable UninstallClusterAgentCallable(const Model::UninstallClusterAgentRequest& request);

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
                 *绑定、更新集群负责人
                 * @param req UpdateClusterOwnerRequest
                 * @return UpdateClusterOwnerOutcome
                 */
                UpdateClusterOwnerOutcome UpdateClusterOwner(const Model::UpdateClusterOwnerRequest &request);
                void UpdateClusterOwnerAsync(const Model::UpdateClusterOwnerRequest& request, const UpdateClusterOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateClusterOwnerOutcomeCallable UpdateClusterOwnerCallable(const Model::UpdateClusterOwnerRequest& request);

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
