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

#ifndef TENCENTCLOUD_TCSS_V20201101_TCSSCLIENT_H_
#define TENCENTCLOUD_TCSS_V20201101_TCSSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcss/v20201101/model/AddAssetImageRegistryRegistryDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddAssetImageRegistryRegistryDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddCompliancePolicyItemToWhitelistRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddCompliancePolicyItemToWhitelistResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddEditAbnormalProcessRuleRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddEditAbnormalProcessRuleResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddEditAccessControlRuleRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddEditAccessControlRuleResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddEditReverseShellWhiteListRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddEditReverseShellWhiteListResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddEditRiskSyscallWhiteListRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddEditRiskSyscallWhiteListResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddEditWarningRulesRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddEditWarningRulesResponse.h>
#include <tencentcloud/tcss/v20201101/model/CheckRepeatAssetImageRegistryRequest.h>
#include <tencentcloud/tcss/v20201101/model/CheckRepeatAssetImageRegistryResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageRegistryScanTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageRegistryScanTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageRegistryScanTaskOneKeyRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageRegistryScanTaskOneKeyResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageScanSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageScanSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageScanTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageScanTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateCheckComponentRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateCheckComponentResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateClusterCheckTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateClusterCheckTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateComplianceTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateComplianceTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateExportComplianceStatusListJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateExportComplianceStatusListJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateOrModifyPostPayCoresRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateOrModifyPostPayCoresResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateRefreshTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateRefreshTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateVirusScanAgainRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateVirusScanAgainResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateVirusScanTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateVirusScanTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteAbnormalProcessRulesRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteAbnormalProcessRulesResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteAccessControlRulesRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteAccessControlRulesResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteCompliancePolicyItemFromWhitelistRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteCompliancePolicyItemFromWhitelistResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteReverseShellWhiteListsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteReverseShellWhiteListsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteRiskSyscallWhiteListsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteRiskSyscallWhiteListsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessEventsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessEventsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessEventsExportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessEventsExportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessRuleDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessRuleDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessRulesRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessRulesResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessRulesExportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessRulesExportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAccessControlDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAccessControlDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAccessControlEventsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAccessControlEventsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAccessControlEventsExportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAccessControlEventsExportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAccessControlRuleDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAccessControlRuleDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAccessControlRulesRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAccessControlRulesResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAccessControlRulesExportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAccessControlRulesExportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAffectedClusterCountRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAffectedClusterCountResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAffectedNodeListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAffectedNodeListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAffectedWorkloadListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAffectedWorkloadListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetAppServiceListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetAppServiceListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetComponentListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetComponentListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetContainerDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetContainerDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetContainerListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetContainerListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetDBServiceListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetDBServiceListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetHostDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetHostDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetHostListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetHostListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageBindRuleInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageBindRuleInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageHostListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageHostListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageListExportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageListExportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryAssetStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryAssetStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryListExportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryListExportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryRegistryDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryRegistryDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryRegistryListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryRegistryListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryRiskInfoListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryRiskInfoListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryRiskListExportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryRiskListExportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryScanStatusOneKeyRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryScanStatusOneKeyResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistrySummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistrySummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryVirusListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryVirusListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryVirusListExportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryVirusListExportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryVulListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryVulListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryVulListExportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRegistryVulListExportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRiskListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRiskListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRiskListExportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageRiskListExportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageScanSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageScanSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageScanStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageScanStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageScanTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageScanTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageSimpleListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageSimpleListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageVirusListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageVirusListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageVirusListExportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageVirusListExportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageVulListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageVulListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageVulListExportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetImageVulListExportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetPortListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetPortListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetProcessListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetProcessListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetWebServiceListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetWebServiceListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeCheckItemListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeCheckItemListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeClusterDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeClusterDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeClusterSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeClusterSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeComplianceAssetDetailInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeComplianceAssetDetailInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeComplianceAssetListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeComplianceAssetListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeComplianceAssetPolicyItemListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeComplianceAssetPolicyItemListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeCompliancePeriodTaskListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeCompliancePeriodTaskListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeCompliancePolicyItemAffectedAssetListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeCompliancePolicyItemAffectedAssetListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeCompliancePolicyItemAffectedSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeCompliancePolicyItemAffectedSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeComplianceScanFailedAssetListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeComplianceScanFailedAssetListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeComplianceTaskAssetSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeComplianceTaskAssetSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeComplianceTaskPolicyItemSummaryListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeComplianceTaskPolicyItemSummaryListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeComplianceWhitelistItemListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeComplianceWhitelistItemListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeContainerAssetSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeContainerAssetSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeContainerSecEventSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeContainerSecEventSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeEventDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeEventDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeEventInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeEventInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeEventsExportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeEventsExportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeRuleInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeRuleInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeSafeStateRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeSafeStateResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeExportJobResultRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeExportJobResultResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageAuthorizedInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageAuthorizedInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageRegistryTimingScanTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageRegistryTimingScanTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageRiskSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageRiskSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageRiskTendencyRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageRiskTendencyResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageSimpleListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageSimpleListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribePostPayDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribePostPayDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeProVersionInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeProVersionInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribePurchaseStateInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribePurchaseStateInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRefreshTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRefreshTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeReverseShellDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeReverseShellDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeReverseShellEventsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeReverseShellEventsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeReverseShellEventsExportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeReverseShellEventsExportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeReverseShellWhiteListDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeReverseShellWhiteListDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeReverseShellWhiteListsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeReverseShellWhiteListsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskSyscallDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskSyscallDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskSyscallEventsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskSyscallEventsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskSyscallEventsExportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskSyscallEventsExportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskSyscallNamesRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskSyscallNamesResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskSyscallWhiteListDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskSyscallWhiteListDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskSyscallWhiteListsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskSyscallWhiteListsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecEventsTendencyRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecEventsTendencyResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeTaskResultSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeTaskResultSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeUnfinishRefreshTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeUnfinishRefreshTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeUserClusterRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeUserClusterResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeValueAddedSrvInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeValueAddedSrvInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusMonitorSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusMonitorSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusScanSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusScanSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusScanTaskStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusScanTaskStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusScanTimeoutSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusScanTimeoutSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusTaskListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusTaskListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeWarningRulesRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeWarningRulesResponse.h>
#include <tencentcloud/tcss/v20201101/model/ExportVirusListRequest.h>
#include <tencentcloud/tcss/v20201101/model/ExportVirusListResponse.h>
#include <tencentcloud/tcss/v20201101/model/InitializeUserComplianceEnvironmentRequest.h>
#include <tencentcloud/tcss/v20201101/model/InitializeUserComplianceEnvironmentResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAbnormalProcessRuleStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAbnormalProcessRuleStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAbnormalProcessStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAbnormalProcessStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAccessControlRuleStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAccessControlRuleStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAccessControlStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAccessControlStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAssetRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAssetResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAssetImageRegistryScanStopRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAssetImageRegistryScanStopResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAssetImageRegistryScanStopOneKeyRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAssetImageRegistryScanStopOneKeyResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAssetImageScanStopRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyAssetImageScanStopResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyCompliancePeriodTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyCompliancePeriodTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyEscapeEventStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyEscapeEventStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyEscapeRuleRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyEscapeRuleResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyReverseShellStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyReverseShellStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyRiskSyscallStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyRiskSyscallStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusFileStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusFileStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusMonitorSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusMonitorSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusScanSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusScanSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusScanTimeoutSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusScanTimeoutSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/RemoveAssetImageRegistryRegistryDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/RemoveAssetImageRegistryRegistryDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/RenewImageAuthorizeStateRequest.h>
#include <tencentcloud/tcss/v20201101/model/RenewImageAuthorizeStateResponse.h>
#include <tencentcloud/tcss/v20201101/model/ScanComplianceAssetsRequest.h>
#include <tencentcloud/tcss/v20201101/model/ScanComplianceAssetsResponse.h>
#include <tencentcloud/tcss/v20201101/model/ScanComplianceAssetsByPolicyItemRequest.h>
#include <tencentcloud/tcss/v20201101/model/ScanComplianceAssetsByPolicyItemResponse.h>
#include <tencentcloud/tcss/v20201101/model/ScanCompliancePolicyItemsRequest.h>
#include <tencentcloud/tcss/v20201101/model/ScanCompliancePolicyItemsResponse.h>
#include <tencentcloud/tcss/v20201101/model/ScanComplianceScanFailedAssetsRequest.h>
#include <tencentcloud/tcss/v20201101/model/ScanComplianceScanFailedAssetsResponse.h>
#include <tencentcloud/tcss/v20201101/model/SetCheckModeRequest.h>
#include <tencentcloud/tcss/v20201101/model/SetCheckModeResponse.h>
#include <tencentcloud/tcss/v20201101/model/StopVirusScanTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/StopVirusScanTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/SyncAssetImageRegistryAssetRequest.h>
#include <tencentcloud/tcss/v20201101/model/SyncAssetImageRegistryAssetResponse.h>
#include <tencentcloud/tcss/v20201101/model/UpdateAssetImageRegistryRegistryDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/UpdateAssetImageRegistryRegistryDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/UpdateImageRegistryTimingScanTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/UpdateImageRegistryTimingScanTaskResponse.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            class TcssClient : public AbstractClient
            {
            public:
                TcssClient(const Credential &credential, const std::string &region);
                TcssClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddAssetImageRegistryRegistryDetailResponse> AddAssetImageRegistryRegistryDetailOutcome;
                typedef std::future<AddAssetImageRegistryRegistryDetailOutcome> AddAssetImageRegistryRegistryDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddAssetImageRegistryRegistryDetailRequest&, AddAssetImageRegistryRegistryDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAssetImageRegistryRegistryDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::AddCompliancePolicyItemToWhitelistResponse> AddCompliancePolicyItemToWhitelistOutcome;
                typedef std::future<AddCompliancePolicyItemToWhitelistOutcome> AddCompliancePolicyItemToWhitelistOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddCompliancePolicyItemToWhitelistRequest&, AddCompliancePolicyItemToWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCompliancePolicyItemToWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::AddEditAbnormalProcessRuleResponse> AddEditAbnormalProcessRuleOutcome;
                typedef std::future<AddEditAbnormalProcessRuleOutcome> AddEditAbnormalProcessRuleOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddEditAbnormalProcessRuleRequest&, AddEditAbnormalProcessRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEditAbnormalProcessRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddEditAccessControlRuleResponse> AddEditAccessControlRuleOutcome;
                typedef std::future<AddEditAccessControlRuleOutcome> AddEditAccessControlRuleOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddEditAccessControlRuleRequest&, AddEditAccessControlRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEditAccessControlRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddEditReverseShellWhiteListResponse> AddEditReverseShellWhiteListOutcome;
                typedef std::future<AddEditReverseShellWhiteListOutcome> AddEditReverseShellWhiteListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddEditReverseShellWhiteListRequest&, AddEditReverseShellWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEditReverseShellWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::AddEditRiskSyscallWhiteListResponse> AddEditRiskSyscallWhiteListOutcome;
                typedef std::future<AddEditRiskSyscallWhiteListOutcome> AddEditRiskSyscallWhiteListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddEditRiskSyscallWhiteListRequest&, AddEditRiskSyscallWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEditRiskSyscallWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::AddEditWarningRulesResponse> AddEditWarningRulesOutcome;
                typedef std::future<AddEditWarningRulesOutcome> AddEditWarningRulesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddEditWarningRulesRequest&, AddEditWarningRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEditWarningRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckRepeatAssetImageRegistryResponse> CheckRepeatAssetImageRegistryOutcome;
                typedef std::future<CheckRepeatAssetImageRegistryOutcome> CheckRepeatAssetImageRegistryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CheckRepeatAssetImageRegistryRequest&, CheckRepeatAssetImageRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckRepeatAssetImageRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetImageRegistryScanTaskResponse> CreateAssetImageRegistryScanTaskOutcome;
                typedef std::future<CreateAssetImageRegistryScanTaskOutcome> CreateAssetImageRegistryScanTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateAssetImageRegistryScanTaskRequest&, CreateAssetImageRegistryScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetImageRegistryScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetImageRegistryScanTaskOneKeyResponse> CreateAssetImageRegistryScanTaskOneKeyOutcome;
                typedef std::future<CreateAssetImageRegistryScanTaskOneKeyOutcome> CreateAssetImageRegistryScanTaskOneKeyOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateAssetImageRegistryScanTaskOneKeyRequest&, CreateAssetImageRegistryScanTaskOneKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetImageRegistryScanTaskOneKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetImageScanSettingResponse> CreateAssetImageScanSettingOutcome;
                typedef std::future<CreateAssetImageScanSettingOutcome> CreateAssetImageScanSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateAssetImageScanSettingRequest&, CreateAssetImageScanSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetImageScanSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetImageScanTaskResponse> CreateAssetImageScanTaskOutcome;
                typedef std::future<CreateAssetImageScanTaskOutcome> CreateAssetImageScanTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateAssetImageScanTaskRequest&, CreateAssetImageScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetImageScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCheckComponentResponse> CreateCheckComponentOutcome;
                typedef std::future<CreateCheckComponentOutcome> CreateCheckComponentOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateCheckComponentRequest&, CreateCheckComponentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCheckComponentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterCheckTaskResponse> CreateClusterCheckTaskOutcome;
                typedef std::future<CreateClusterCheckTaskOutcome> CreateClusterCheckTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateClusterCheckTaskRequest&, CreateClusterCheckTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterCheckTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateComplianceTaskResponse> CreateComplianceTaskOutcome;
                typedef std::future<CreateComplianceTaskOutcome> CreateComplianceTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateComplianceTaskRequest&, CreateComplianceTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateComplianceTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExportComplianceStatusListJobResponse> CreateExportComplianceStatusListJobOutcome;
                typedef std::future<CreateExportComplianceStatusListJobOutcome> CreateExportComplianceStatusListJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateExportComplianceStatusListJobRequest&, CreateExportComplianceStatusListJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExportComplianceStatusListJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrModifyPostPayCoresResponse> CreateOrModifyPostPayCoresOutcome;
                typedef std::future<CreateOrModifyPostPayCoresOutcome> CreateOrModifyPostPayCoresOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateOrModifyPostPayCoresRequest&, CreateOrModifyPostPayCoresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrModifyPostPayCoresAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRefreshTaskResponse> CreateRefreshTaskOutcome;
                typedef std::future<CreateRefreshTaskOutcome> CreateRefreshTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateRefreshTaskRequest&, CreateRefreshTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRefreshTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVirusScanAgainResponse> CreateVirusScanAgainOutcome;
                typedef std::future<CreateVirusScanAgainOutcome> CreateVirusScanAgainOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateVirusScanAgainRequest&, CreateVirusScanAgainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVirusScanAgainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVirusScanTaskResponse> CreateVirusScanTaskOutcome;
                typedef std::future<CreateVirusScanTaskOutcome> CreateVirusScanTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateVirusScanTaskRequest&, CreateVirusScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVirusScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAbnormalProcessRulesResponse> DeleteAbnormalProcessRulesOutcome;
                typedef std::future<DeleteAbnormalProcessRulesOutcome> DeleteAbnormalProcessRulesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteAbnormalProcessRulesRequest&, DeleteAbnormalProcessRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAbnormalProcessRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccessControlRulesResponse> DeleteAccessControlRulesOutcome;
                typedef std::future<DeleteAccessControlRulesOutcome> DeleteAccessControlRulesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteAccessControlRulesRequest&, DeleteAccessControlRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessControlRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCompliancePolicyItemFromWhitelistResponse> DeleteCompliancePolicyItemFromWhitelistOutcome;
                typedef std::future<DeleteCompliancePolicyItemFromWhitelistOutcome> DeleteCompliancePolicyItemFromWhitelistOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteCompliancePolicyItemFromWhitelistRequest&, DeleteCompliancePolicyItemFromWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCompliancePolicyItemFromWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReverseShellWhiteListsResponse> DeleteReverseShellWhiteListsOutcome;
                typedef std::future<DeleteReverseShellWhiteListsOutcome> DeleteReverseShellWhiteListsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteReverseShellWhiteListsRequest&, DeleteReverseShellWhiteListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReverseShellWhiteListsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRiskSyscallWhiteListsResponse> DeleteRiskSyscallWhiteListsOutcome;
                typedef std::future<DeleteRiskSyscallWhiteListsOutcome> DeleteRiskSyscallWhiteListsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteRiskSyscallWhiteListsRequest&, DeleteRiskSyscallWhiteListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRiskSyscallWhiteListsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalProcessDetailResponse> DescribeAbnormalProcessDetailOutcome;
                typedef std::future<DescribeAbnormalProcessDetailOutcome> DescribeAbnormalProcessDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAbnormalProcessDetailRequest&, DescribeAbnormalProcessDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalProcessDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalProcessEventsResponse> DescribeAbnormalProcessEventsOutcome;
                typedef std::future<DescribeAbnormalProcessEventsOutcome> DescribeAbnormalProcessEventsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAbnormalProcessEventsRequest&, DescribeAbnormalProcessEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalProcessEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalProcessEventsExportResponse> DescribeAbnormalProcessEventsExportOutcome;
                typedef std::future<DescribeAbnormalProcessEventsExportOutcome> DescribeAbnormalProcessEventsExportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAbnormalProcessEventsExportRequest&, DescribeAbnormalProcessEventsExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalProcessEventsExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalProcessRuleDetailResponse> DescribeAbnormalProcessRuleDetailOutcome;
                typedef std::future<DescribeAbnormalProcessRuleDetailOutcome> DescribeAbnormalProcessRuleDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAbnormalProcessRuleDetailRequest&, DescribeAbnormalProcessRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalProcessRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalProcessRulesResponse> DescribeAbnormalProcessRulesOutcome;
                typedef std::future<DescribeAbnormalProcessRulesOutcome> DescribeAbnormalProcessRulesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAbnormalProcessRulesRequest&, DescribeAbnormalProcessRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalProcessRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalProcessRulesExportResponse> DescribeAbnormalProcessRulesExportOutcome;
                typedef std::future<DescribeAbnormalProcessRulesExportOutcome> DescribeAbnormalProcessRulesExportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAbnormalProcessRulesExportRequest&, DescribeAbnormalProcessRulesExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalProcessRulesExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessControlDetailResponse> DescribeAccessControlDetailOutcome;
                typedef std::future<DescribeAccessControlDetailOutcome> DescribeAccessControlDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAccessControlDetailRequest&, DescribeAccessControlDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessControlDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessControlEventsResponse> DescribeAccessControlEventsOutcome;
                typedef std::future<DescribeAccessControlEventsOutcome> DescribeAccessControlEventsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAccessControlEventsRequest&, DescribeAccessControlEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessControlEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessControlEventsExportResponse> DescribeAccessControlEventsExportOutcome;
                typedef std::future<DescribeAccessControlEventsExportOutcome> DescribeAccessControlEventsExportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAccessControlEventsExportRequest&, DescribeAccessControlEventsExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessControlEventsExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessControlRuleDetailResponse> DescribeAccessControlRuleDetailOutcome;
                typedef std::future<DescribeAccessControlRuleDetailOutcome> DescribeAccessControlRuleDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAccessControlRuleDetailRequest&, DescribeAccessControlRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessControlRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessControlRulesResponse> DescribeAccessControlRulesOutcome;
                typedef std::future<DescribeAccessControlRulesOutcome> DescribeAccessControlRulesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAccessControlRulesRequest&, DescribeAccessControlRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessControlRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessControlRulesExportResponse> DescribeAccessControlRulesExportOutcome;
                typedef std::future<DescribeAccessControlRulesExportOutcome> DescribeAccessControlRulesExportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAccessControlRulesExportRequest&, DescribeAccessControlRulesExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessControlRulesExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAffectedClusterCountResponse> DescribeAffectedClusterCountOutcome;
                typedef std::future<DescribeAffectedClusterCountOutcome> DescribeAffectedClusterCountOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAffectedClusterCountRequest&, DescribeAffectedClusterCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAffectedClusterCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAffectedNodeListResponse> DescribeAffectedNodeListOutcome;
                typedef std::future<DescribeAffectedNodeListOutcome> DescribeAffectedNodeListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAffectedNodeListRequest&, DescribeAffectedNodeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAffectedNodeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAffectedWorkloadListResponse> DescribeAffectedWorkloadListOutcome;
                typedef std::future<DescribeAffectedWorkloadListOutcome> DescribeAffectedWorkloadListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAffectedWorkloadListRequest&, DescribeAffectedWorkloadListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAffectedWorkloadListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetAppServiceListResponse> DescribeAssetAppServiceListOutcome;
                typedef std::future<DescribeAssetAppServiceListOutcome> DescribeAssetAppServiceListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetAppServiceListRequest&, DescribeAssetAppServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetAppServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetComponentListResponse> DescribeAssetComponentListOutcome;
                typedef std::future<DescribeAssetComponentListOutcome> DescribeAssetComponentListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetComponentListRequest&, DescribeAssetComponentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetComponentListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetContainerDetailResponse> DescribeAssetContainerDetailOutcome;
                typedef std::future<DescribeAssetContainerDetailOutcome> DescribeAssetContainerDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetContainerDetailRequest&, DescribeAssetContainerDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetContainerDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetContainerListResponse> DescribeAssetContainerListOutcome;
                typedef std::future<DescribeAssetContainerListOutcome> DescribeAssetContainerListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetContainerListRequest&, DescribeAssetContainerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetContainerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetDBServiceListResponse> DescribeAssetDBServiceListOutcome;
                typedef std::future<DescribeAssetDBServiceListOutcome> DescribeAssetDBServiceListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetDBServiceListRequest&, DescribeAssetDBServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDBServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetHostDetailResponse> DescribeAssetHostDetailOutcome;
                typedef std::future<DescribeAssetHostDetailOutcome> DescribeAssetHostDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetHostDetailRequest&, DescribeAssetHostDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetHostDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetHostListResponse> DescribeAssetHostListOutcome;
                typedef std::future<DescribeAssetHostListOutcome> DescribeAssetHostListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetHostListRequest&, DescribeAssetHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageBindRuleInfoResponse> DescribeAssetImageBindRuleInfoOutcome;
                typedef std::future<DescribeAssetImageBindRuleInfoOutcome> DescribeAssetImageBindRuleInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageBindRuleInfoRequest&, DescribeAssetImageBindRuleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageBindRuleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageDetailResponse> DescribeAssetImageDetailOutcome;
                typedef std::future<DescribeAssetImageDetailOutcome> DescribeAssetImageDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageDetailRequest&, DescribeAssetImageDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageHostListResponse> DescribeAssetImageHostListOutcome;
                typedef std::future<DescribeAssetImageHostListOutcome> DescribeAssetImageHostListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageHostListRequest&, DescribeAssetImageHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageListResponse> DescribeAssetImageListOutcome;
                typedef std::future<DescribeAssetImageListOutcome> DescribeAssetImageListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageListRequest&, DescribeAssetImageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageListExportResponse> DescribeAssetImageListExportOutcome;
                typedef std::future<DescribeAssetImageListExportOutcome> DescribeAssetImageListExportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageListExportRequest&, DescribeAssetImageListExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageListExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRegistryAssetStatusResponse> DescribeAssetImageRegistryAssetStatusOutcome;
                typedef std::future<DescribeAssetImageRegistryAssetStatusOutcome> DescribeAssetImageRegistryAssetStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRegistryAssetStatusRequest&, DescribeAssetImageRegistryAssetStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRegistryAssetStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRegistryDetailResponse> DescribeAssetImageRegistryDetailOutcome;
                typedef std::future<DescribeAssetImageRegistryDetailOutcome> DescribeAssetImageRegistryDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRegistryDetailRequest&, DescribeAssetImageRegistryDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRegistryDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRegistryListResponse> DescribeAssetImageRegistryListOutcome;
                typedef std::future<DescribeAssetImageRegistryListOutcome> DescribeAssetImageRegistryListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRegistryListRequest&, DescribeAssetImageRegistryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRegistryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRegistryListExportResponse> DescribeAssetImageRegistryListExportOutcome;
                typedef std::future<DescribeAssetImageRegistryListExportOutcome> DescribeAssetImageRegistryListExportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRegistryListExportRequest&, DescribeAssetImageRegistryListExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRegistryListExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRegistryRegistryDetailResponse> DescribeAssetImageRegistryRegistryDetailOutcome;
                typedef std::future<DescribeAssetImageRegistryRegistryDetailOutcome> DescribeAssetImageRegistryRegistryDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRegistryRegistryDetailRequest&, DescribeAssetImageRegistryRegistryDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRegistryRegistryDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRegistryRegistryListResponse> DescribeAssetImageRegistryRegistryListOutcome;
                typedef std::future<DescribeAssetImageRegistryRegistryListOutcome> DescribeAssetImageRegistryRegistryListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRegistryRegistryListRequest&, DescribeAssetImageRegistryRegistryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRegistryRegistryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRegistryRiskInfoListResponse> DescribeAssetImageRegistryRiskInfoListOutcome;
                typedef std::future<DescribeAssetImageRegistryRiskInfoListOutcome> DescribeAssetImageRegistryRiskInfoListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRegistryRiskInfoListRequest&, DescribeAssetImageRegistryRiskInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRegistryRiskInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRegistryRiskListExportResponse> DescribeAssetImageRegistryRiskListExportOutcome;
                typedef std::future<DescribeAssetImageRegistryRiskListExportOutcome> DescribeAssetImageRegistryRiskListExportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRegistryRiskListExportRequest&, DescribeAssetImageRegistryRiskListExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRegistryRiskListExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRegistryScanStatusOneKeyResponse> DescribeAssetImageRegistryScanStatusOneKeyOutcome;
                typedef std::future<DescribeAssetImageRegistryScanStatusOneKeyOutcome> DescribeAssetImageRegistryScanStatusOneKeyOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRegistryScanStatusOneKeyRequest&, DescribeAssetImageRegistryScanStatusOneKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRegistryScanStatusOneKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRegistrySummaryResponse> DescribeAssetImageRegistrySummaryOutcome;
                typedef std::future<DescribeAssetImageRegistrySummaryOutcome> DescribeAssetImageRegistrySummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRegistrySummaryRequest&, DescribeAssetImageRegistrySummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRegistrySummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRegistryVirusListResponse> DescribeAssetImageRegistryVirusListOutcome;
                typedef std::future<DescribeAssetImageRegistryVirusListOutcome> DescribeAssetImageRegistryVirusListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRegistryVirusListRequest&, DescribeAssetImageRegistryVirusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRegistryVirusListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRegistryVirusListExportResponse> DescribeAssetImageRegistryVirusListExportOutcome;
                typedef std::future<DescribeAssetImageRegistryVirusListExportOutcome> DescribeAssetImageRegistryVirusListExportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRegistryVirusListExportRequest&, DescribeAssetImageRegistryVirusListExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRegistryVirusListExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRegistryVulListResponse> DescribeAssetImageRegistryVulListOutcome;
                typedef std::future<DescribeAssetImageRegistryVulListOutcome> DescribeAssetImageRegistryVulListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRegistryVulListRequest&, DescribeAssetImageRegistryVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRegistryVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRegistryVulListExportResponse> DescribeAssetImageRegistryVulListExportOutcome;
                typedef std::future<DescribeAssetImageRegistryVulListExportOutcome> DescribeAssetImageRegistryVulListExportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRegistryVulListExportRequest&, DescribeAssetImageRegistryVulListExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRegistryVulListExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRiskListResponse> DescribeAssetImageRiskListOutcome;
                typedef std::future<DescribeAssetImageRiskListOutcome> DescribeAssetImageRiskListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRiskListRequest&, DescribeAssetImageRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageRiskListExportResponse> DescribeAssetImageRiskListExportOutcome;
                typedef std::future<DescribeAssetImageRiskListExportOutcome> DescribeAssetImageRiskListExportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageRiskListExportRequest&, DescribeAssetImageRiskListExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageRiskListExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageScanSettingResponse> DescribeAssetImageScanSettingOutcome;
                typedef std::future<DescribeAssetImageScanSettingOutcome> DescribeAssetImageScanSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageScanSettingRequest&, DescribeAssetImageScanSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageScanSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageScanStatusResponse> DescribeAssetImageScanStatusOutcome;
                typedef std::future<DescribeAssetImageScanStatusOutcome> DescribeAssetImageScanStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageScanStatusRequest&, DescribeAssetImageScanStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageScanStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageScanTaskResponse> DescribeAssetImageScanTaskOutcome;
                typedef std::future<DescribeAssetImageScanTaskOutcome> DescribeAssetImageScanTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageScanTaskRequest&, DescribeAssetImageScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageSimpleListResponse> DescribeAssetImageSimpleListOutcome;
                typedef std::future<DescribeAssetImageSimpleListOutcome> DescribeAssetImageSimpleListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageSimpleListRequest&, DescribeAssetImageSimpleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageSimpleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageVirusListResponse> DescribeAssetImageVirusListOutcome;
                typedef std::future<DescribeAssetImageVirusListOutcome> DescribeAssetImageVirusListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageVirusListRequest&, DescribeAssetImageVirusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageVirusListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageVirusListExportResponse> DescribeAssetImageVirusListExportOutcome;
                typedef std::future<DescribeAssetImageVirusListExportOutcome> DescribeAssetImageVirusListExportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageVirusListExportRequest&, DescribeAssetImageVirusListExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageVirusListExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageVulListResponse> DescribeAssetImageVulListOutcome;
                typedef std::future<DescribeAssetImageVulListOutcome> DescribeAssetImageVulListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageVulListRequest&, DescribeAssetImageVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetImageVulListExportResponse> DescribeAssetImageVulListExportOutcome;
                typedef std::future<DescribeAssetImageVulListExportOutcome> DescribeAssetImageVulListExportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetImageVulListExportRequest&, DescribeAssetImageVulListExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetImageVulListExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetPortListResponse> DescribeAssetPortListOutcome;
                typedef std::future<DescribeAssetPortListOutcome> DescribeAssetPortListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetPortListRequest&, DescribeAssetPortListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetPortListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetProcessListResponse> DescribeAssetProcessListOutcome;
                typedef std::future<DescribeAssetProcessListOutcome> DescribeAssetProcessListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetProcessListRequest&, DescribeAssetProcessListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetProcessListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetSummaryResponse> DescribeAssetSummaryOutcome;
                typedef std::future<DescribeAssetSummaryOutcome> DescribeAssetSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetSummaryRequest&, DescribeAssetSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebServiceListResponse> DescribeAssetWebServiceListOutcome;
                typedef std::future<DescribeAssetWebServiceListOutcome> DescribeAssetWebServiceListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetWebServiceListRequest&, DescribeAssetWebServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCheckItemListResponse> DescribeCheckItemListOutcome;
                typedef std::future<DescribeCheckItemListOutcome> DescribeCheckItemListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeCheckItemListRequest&, DescribeCheckItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterDetailResponse> DescribeClusterDetailOutcome;
                typedef std::future<DescribeClusterDetailOutcome> DescribeClusterDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeClusterDetailRequest&, DescribeClusterDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterSummaryResponse> DescribeClusterSummaryOutcome;
                typedef std::future<DescribeClusterSummaryOutcome> DescribeClusterSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeClusterSummaryRequest&, DescribeClusterSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceAssetDetailInfoResponse> DescribeComplianceAssetDetailInfoOutcome;
                typedef std::future<DescribeComplianceAssetDetailInfoOutcome> DescribeComplianceAssetDetailInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeComplianceAssetDetailInfoRequest&, DescribeComplianceAssetDetailInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceAssetDetailInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceAssetListResponse> DescribeComplianceAssetListOutcome;
                typedef std::future<DescribeComplianceAssetListOutcome> DescribeComplianceAssetListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeComplianceAssetListRequest&, DescribeComplianceAssetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceAssetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceAssetPolicyItemListResponse> DescribeComplianceAssetPolicyItemListOutcome;
                typedef std::future<DescribeComplianceAssetPolicyItemListOutcome> DescribeComplianceAssetPolicyItemListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeComplianceAssetPolicyItemListRequest&, DescribeComplianceAssetPolicyItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceAssetPolicyItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCompliancePeriodTaskListResponse> DescribeCompliancePeriodTaskListOutcome;
                typedef std::future<DescribeCompliancePeriodTaskListOutcome> DescribeCompliancePeriodTaskListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeCompliancePeriodTaskListRequest&, DescribeCompliancePeriodTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompliancePeriodTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCompliancePolicyItemAffectedAssetListResponse> DescribeCompliancePolicyItemAffectedAssetListOutcome;
                typedef std::future<DescribeCompliancePolicyItemAffectedAssetListOutcome> DescribeCompliancePolicyItemAffectedAssetListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeCompliancePolicyItemAffectedAssetListRequest&, DescribeCompliancePolicyItemAffectedAssetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompliancePolicyItemAffectedAssetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCompliancePolicyItemAffectedSummaryResponse> DescribeCompliancePolicyItemAffectedSummaryOutcome;
                typedef std::future<DescribeCompliancePolicyItemAffectedSummaryOutcome> DescribeCompliancePolicyItemAffectedSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeCompliancePolicyItemAffectedSummaryRequest&, DescribeCompliancePolicyItemAffectedSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompliancePolicyItemAffectedSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceScanFailedAssetListResponse> DescribeComplianceScanFailedAssetListOutcome;
                typedef std::future<DescribeComplianceScanFailedAssetListOutcome> DescribeComplianceScanFailedAssetListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeComplianceScanFailedAssetListRequest&, DescribeComplianceScanFailedAssetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceScanFailedAssetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceTaskAssetSummaryResponse> DescribeComplianceTaskAssetSummaryOutcome;
                typedef std::future<DescribeComplianceTaskAssetSummaryOutcome> DescribeComplianceTaskAssetSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeComplianceTaskAssetSummaryRequest&, DescribeComplianceTaskAssetSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceTaskAssetSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceTaskPolicyItemSummaryListResponse> DescribeComplianceTaskPolicyItemSummaryListOutcome;
                typedef std::future<DescribeComplianceTaskPolicyItemSummaryListOutcome> DescribeComplianceTaskPolicyItemSummaryListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeComplianceTaskPolicyItemSummaryListRequest&, DescribeComplianceTaskPolicyItemSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceTaskPolicyItemSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceWhitelistItemListResponse> DescribeComplianceWhitelistItemListOutcome;
                typedef std::future<DescribeComplianceWhitelistItemListOutcome> DescribeComplianceWhitelistItemListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeComplianceWhitelistItemListRequest&, DescribeComplianceWhitelistItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceWhitelistItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContainerAssetSummaryResponse> DescribeContainerAssetSummaryOutcome;
                typedef std::future<DescribeContainerAssetSummaryOutcome> DescribeContainerAssetSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeContainerAssetSummaryRequest&, DescribeContainerAssetSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerAssetSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContainerSecEventSummaryResponse> DescribeContainerSecEventSummaryOutcome;
                typedef std::future<DescribeContainerSecEventSummaryOutcome> DescribeContainerSecEventSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeContainerSecEventSummaryRequest&, DescribeContainerSecEventSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerSecEventSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEscapeEventDetailResponse> DescribeEscapeEventDetailOutcome;
                typedef std::future<DescribeEscapeEventDetailOutcome> DescribeEscapeEventDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeEscapeEventDetailRequest&, DescribeEscapeEventDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEscapeEventDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEscapeEventInfoResponse> DescribeEscapeEventInfoOutcome;
                typedef std::future<DescribeEscapeEventInfoOutcome> DescribeEscapeEventInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeEscapeEventInfoRequest&, DescribeEscapeEventInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEscapeEventInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEscapeEventsExportResponse> DescribeEscapeEventsExportOutcome;
                typedef std::future<DescribeEscapeEventsExportOutcome> DescribeEscapeEventsExportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeEscapeEventsExportRequest&, DescribeEscapeEventsExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEscapeEventsExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEscapeRuleInfoResponse> DescribeEscapeRuleInfoOutcome;
                typedef std::future<DescribeEscapeRuleInfoOutcome> DescribeEscapeRuleInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeEscapeRuleInfoRequest&, DescribeEscapeRuleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEscapeRuleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEscapeSafeStateResponse> DescribeEscapeSafeStateOutcome;
                typedef std::future<DescribeEscapeSafeStateOutcome> DescribeEscapeSafeStateOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeEscapeSafeStateRequest&, DescribeEscapeSafeStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEscapeSafeStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportJobResultResponse> DescribeExportJobResultOutcome;
                typedef std::future<DescribeExportJobResultOutcome> DescribeExportJobResultOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeExportJobResultRequest&, DescribeExportJobResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportJobResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAuthorizedInfoResponse> DescribeImageAuthorizedInfoOutcome;
                typedef std::future<DescribeImageAuthorizedInfoOutcome> DescribeImageAuthorizedInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeImageAuthorizedInfoRequest&, DescribeImageAuthorizedInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAuthorizedInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryTimingScanTaskResponse> DescribeImageRegistryTimingScanTaskOutcome;
                typedef std::future<DescribeImageRegistryTimingScanTaskOutcome> DescribeImageRegistryTimingScanTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeImageRegistryTimingScanTaskRequest&, DescribeImageRegistryTimingScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryTimingScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRiskSummaryResponse> DescribeImageRiskSummaryOutcome;
                typedef std::future<DescribeImageRiskSummaryOutcome> DescribeImageRiskSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeImageRiskSummaryRequest&, DescribeImageRiskSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRiskSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRiskTendencyResponse> DescribeImageRiskTendencyOutcome;
                typedef std::future<DescribeImageRiskTendencyOutcome> DescribeImageRiskTendencyOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeImageRiskTendencyRequest&, DescribeImageRiskTendencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRiskTendencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageSimpleListResponse> DescribeImageSimpleListOutcome;
                typedef std::future<DescribeImageSimpleListOutcome> DescribeImageSimpleListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeImageSimpleListRequest&, DescribeImageSimpleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSimpleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePostPayDetailResponse> DescribePostPayDetailOutcome;
                typedef std::future<DescribePostPayDetailOutcome> DescribePostPayDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribePostPayDetailRequest&, DescribePostPayDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePostPayDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProVersionInfoResponse> DescribeProVersionInfoOutcome;
                typedef std::future<DescribeProVersionInfoOutcome> DescribeProVersionInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeProVersionInfoRequest&, DescribeProVersionInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProVersionInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurchaseStateInfoResponse> DescribePurchaseStateInfoOutcome;
                typedef std::future<DescribePurchaseStateInfoOutcome> DescribePurchaseStateInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribePurchaseStateInfoRequest&, DescribePurchaseStateInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurchaseStateInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRefreshTaskResponse> DescribeRefreshTaskOutcome;
                typedef std::future<DescribeRefreshTaskOutcome> DescribeRefreshTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeRefreshTaskRequest&, DescribeRefreshTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRefreshTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellDetailResponse> DescribeReverseShellDetailOutcome;
                typedef std::future<DescribeReverseShellDetailOutcome> DescribeReverseShellDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeReverseShellDetailRequest&, DescribeReverseShellDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellEventsResponse> DescribeReverseShellEventsOutcome;
                typedef std::future<DescribeReverseShellEventsOutcome> DescribeReverseShellEventsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeReverseShellEventsRequest&, DescribeReverseShellEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellEventsExportResponse> DescribeReverseShellEventsExportOutcome;
                typedef std::future<DescribeReverseShellEventsExportOutcome> DescribeReverseShellEventsExportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeReverseShellEventsExportRequest&, DescribeReverseShellEventsExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellEventsExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellWhiteListDetailResponse> DescribeReverseShellWhiteListDetailOutcome;
                typedef std::future<DescribeReverseShellWhiteListDetailOutcome> DescribeReverseShellWhiteListDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeReverseShellWhiteListDetailRequest&, DescribeReverseShellWhiteListDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellWhiteListDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellWhiteListsResponse> DescribeReverseShellWhiteListsOutcome;
                typedef std::future<DescribeReverseShellWhiteListsOutcome> DescribeReverseShellWhiteListsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeReverseShellWhiteListsRequest&, DescribeReverseShellWhiteListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellWhiteListsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskListResponse> DescribeRiskListOutcome;
                typedef std::future<DescribeRiskListOutcome> DescribeRiskListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeRiskListRequest&, DescribeRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskSyscallDetailResponse> DescribeRiskSyscallDetailOutcome;
                typedef std::future<DescribeRiskSyscallDetailOutcome> DescribeRiskSyscallDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeRiskSyscallDetailRequest&, DescribeRiskSyscallDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskSyscallDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskSyscallEventsResponse> DescribeRiskSyscallEventsOutcome;
                typedef std::future<DescribeRiskSyscallEventsOutcome> DescribeRiskSyscallEventsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeRiskSyscallEventsRequest&, DescribeRiskSyscallEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskSyscallEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskSyscallEventsExportResponse> DescribeRiskSyscallEventsExportOutcome;
                typedef std::future<DescribeRiskSyscallEventsExportOutcome> DescribeRiskSyscallEventsExportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeRiskSyscallEventsExportRequest&, DescribeRiskSyscallEventsExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskSyscallEventsExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskSyscallNamesResponse> DescribeRiskSyscallNamesOutcome;
                typedef std::future<DescribeRiskSyscallNamesOutcome> DescribeRiskSyscallNamesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeRiskSyscallNamesRequest&, DescribeRiskSyscallNamesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskSyscallNamesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskSyscallWhiteListDetailResponse> DescribeRiskSyscallWhiteListDetailOutcome;
                typedef std::future<DescribeRiskSyscallWhiteListDetailOutcome> DescribeRiskSyscallWhiteListDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeRiskSyscallWhiteListDetailRequest&, DescribeRiskSyscallWhiteListDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskSyscallWhiteListDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskSyscallWhiteListsResponse> DescribeRiskSyscallWhiteListsOutcome;
                typedef std::future<DescribeRiskSyscallWhiteListsOutcome> DescribeRiskSyscallWhiteListsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeRiskSyscallWhiteListsRequest&, DescribeRiskSyscallWhiteListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskSyscallWhiteListsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecEventsTendencyResponse> DescribeSecEventsTendencyOutcome;
                typedef std::future<DescribeSecEventsTendencyOutcome> DescribeSecEventsTendencyOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSecEventsTendencyRequest&, DescribeSecEventsTendencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecEventsTendencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResultSummaryResponse> DescribeTaskResultSummaryOutcome;
                typedef std::future<DescribeTaskResultSummaryOutcome> DescribeTaskResultSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeTaskResultSummaryRequest&, DescribeTaskResultSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskResultSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnfinishRefreshTaskResponse> DescribeUnfinishRefreshTaskOutcome;
                typedef std::future<DescribeUnfinishRefreshTaskOutcome> DescribeUnfinishRefreshTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeUnfinishRefreshTaskRequest&, DescribeUnfinishRefreshTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnfinishRefreshTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserClusterResponse> DescribeUserClusterOutcome;
                typedef std::future<DescribeUserClusterOutcome> DescribeUserClusterOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeUserClusterRequest&, DescribeUserClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeValueAddedSrvInfoResponse> DescribeValueAddedSrvInfoOutcome;
                typedef std::future<DescribeValueAddedSrvInfoOutcome> DescribeValueAddedSrvInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeValueAddedSrvInfoRequest&, DescribeValueAddedSrvInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeValueAddedSrvInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusDetailResponse> DescribeVirusDetailOutcome;
                typedef std::future<DescribeVirusDetailOutcome> DescribeVirusDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusDetailRequest&, DescribeVirusDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusListResponse> DescribeVirusListOutcome;
                typedef std::future<DescribeVirusListOutcome> DescribeVirusListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusListRequest&, DescribeVirusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusMonitorSettingResponse> DescribeVirusMonitorSettingOutcome;
                typedef std::future<DescribeVirusMonitorSettingOutcome> DescribeVirusMonitorSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusMonitorSettingRequest&, DescribeVirusMonitorSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusMonitorSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusScanSettingResponse> DescribeVirusScanSettingOutcome;
                typedef std::future<DescribeVirusScanSettingOutcome> DescribeVirusScanSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusScanSettingRequest&, DescribeVirusScanSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusScanSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusScanTaskStatusResponse> DescribeVirusScanTaskStatusOutcome;
                typedef std::future<DescribeVirusScanTaskStatusOutcome> DescribeVirusScanTaskStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusScanTaskStatusRequest&, DescribeVirusScanTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusScanTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusScanTimeoutSettingResponse> DescribeVirusScanTimeoutSettingOutcome;
                typedef std::future<DescribeVirusScanTimeoutSettingOutcome> DescribeVirusScanTimeoutSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusScanTimeoutSettingRequest&, DescribeVirusScanTimeoutSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusScanTimeoutSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusSummaryResponse> DescribeVirusSummaryOutcome;
                typedef std::future<DescribeVirusSummaryOutcome> DescribeVirusSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusSummaryRequest&, DescribeVirusSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusTaskListResponse> DescribeVirusTaskListOutcome;
                typedef std::future<DescribeVirusTaskListOutcome> DescribeVirusTaskListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusTaskListRequest&, DescribeVirusTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWarningRulesResponse> DescribeWarningRulesOutcome;
                typedef std::future<DescribeWarningRulesOutcome> DescribeWarningRulesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeWarningRulesRequest&, DescribeWarningRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVirusListResponse> ExportVirusListOutcome;
                typedef std::future<ExportVirusListOutcome> ExportVirusListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ExportVirusListRequest&, ExportVirusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVirusListAsyncHandler;
                typedef Outcome<Core::Error, Model::InitializeUserComplianceEnvironmentResponse> InitializeUserComplianceEnvironmentOutcome;
                typedef std::future<InitializeUserComplianceEnvironmentOutcome> InitializeUserComplianceEnvironmentOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::InitializeUserComplianceEnvironmentRequest&, InitializeUserComplianceEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InitializeUserComplianceEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAbnormalProcessRuleStatusResponse> ModifyAbnormalProcessRuleStatusOutcome;
                typedef std::future<ModifyAbnormalProcessRuleStatusOutcome> ModifyAbnormalProcessRuleStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyAbnormalProcessRuleStatusRequest&, ModifyAbnormalProcessRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAbnormalProcessRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAbnormalProcessStatusResponse> ModifyAbnormalProcessStatusOutcome;
                typedef std::future<ModifyAbnormalProcessStatusOutcome> ModifyAbnormalProcessStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyAbnormalProcessStatusRequest&, ModifyAbnormalProcessStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAbnormalProcessStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccessControlRuleStatusResponse> ModifyAccessControlRuleStatusOutcome;
                typedef std::future<ModifyAccessControlRuleStatusOutcome> ModifyAccessControlRuleStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyAccessControlRuleStatusRequest&, ModifyAccessControlRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessControlRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccessControlStatusResponse> ModifyAccessControlStatusOutcome;
                typedef std::future<ModifyAccessControlStatusOutcome> ModifyAccessControlStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyAccessControlStatusRequest&, ModifyAccessControlStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessControlStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetResponse> ModifyAssetOutcome;
                typedef std::future<ModifyAssetOutcome> ModifyAssetOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyAssetRequest&, ModifyAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetImageRegistryScanStopResponse> ModifyAssetImageRegistryScanStopOutcome;
                typedef std::future<ModifyAssetImageRegistryScanStopOutcome> ModifyAssetImageRegistryScanStopOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyAssetImageRegistryScanStopRequest&, ModifyAssetImageRegistryScanStopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetImageRegistryScanStopAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetImageRegistryScanStopOneKeyResponse> ModifyAssetImageRegistryScanStopOneKeyOutcome;
                typedef std::future<ModifyAssetImageRegistryScanStopOneKeyOutcome> ModifyAssetImageRegistryScanStopOneKeyOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyAssetImageRegistryScanStopOneKeyRequest&, ModifyAssetImageRegistryScanStopOneKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetImageRegistryScanStopOneKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetImageScanStopResponse> ModifyAssetImageScanStopOutcome;
                typedef std::future<ModifyAssetImageScanStopOutcome> ModifyAssetImageScanStopOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyAssetImageScanStopRequest&, ModifyAssetImageScanStopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetImageScanStopAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCompliancePeriodTaskResponse> ModifyCompliancePeriodTaskOutcome;
                typedef std::future<ModifyCompliancePeriodTaskOutcome> ModifyCompliancePeriodTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyCompliancePeriodTaskRequest&, ModifyCompliancePeriodTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCompliancePeriodTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEscapeEventStatusResponse> ModifyEscapeEventStatusOutcome;
                typedef std::future<ModifyEscapeEventStatusOutcome> ModifyEscapeEventStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyEscapeEventStatusRequest&, ModifyEscapeEventStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEscapeEventStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEscapeRuleResponse> ModifyEscapeRuleOutcome;
                typedef std::future<ModifyEscapeRuleOutcome> ModifyEscapeRuleOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyEscapeRuleRequest&, ModifyEscapeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEscapeRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReverseShellStatusResponse> ModifyReverseShellStatusOutcome;
                typedef std::future<ModifyReverseShellStatusOutcome> ModifyReverseShellStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyReverseShellStatusRequest&, ModifyReverseShellStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReverseShellStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskSyscallStatusResponse> ModifyRiskSyscallStatusOutcome;
                typedef std::future<ModifyRiskSyscallStatusOutcome> ModifyRiskSyscallStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyRiskSyscallStatusRequest&, ModifyRiskSyscallStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskSyscallStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVirusFileStatusResponse> ModifyVirusFileStatusOutcome;
                typedef std::future<ModifyVirusFileStatusOutcome> ModifyVirusFileStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyVirusFileStatusRequest&, ModifyVirusFileStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVirusFileStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVirusMonitorSettingResponse> ModifyVirusMonitorSettingOutcome;
                typedef std::future<ModifyVirusMonitorSettingOutcome> ModifyVirusMonitorSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyVirusMonitorSettingRequest&, ModifyVirusMonitorSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVirusMonitorSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVirusScanSettingResponse> ModifyVirusScanSettingOutcome;
                typedef std::future<ModifyVirusScanSettingOutcome> ModifyVirusScanSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyVirusScanSettingRequest&, ModifyVirusScanSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVirusScanSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVirusScanTimeoutSettingResponse> ModifyVirusScanTimeoutSettingOutcome;
                typedef std::future<ModifyVirusScanTimeoutSettingOutcome> ModifyVirusScanTimeoutSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyVirusScanTimeoutSettingRequest&, ModifyVirusScanTimeoutSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVirusScanTimeoutSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveAssetImageRegistryRegistryDetailResponse> RemoveAssetImageRegistryRegistryDetailOutcome;
                typedef std::future<RemoveAssetImageRegistryRegistryDetailOutcome> RemoveAssetImageRegistryRegistryDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::RemoveAssetImageRegistryRegistryDetailRequest&, RemoveAssetImageRegistryRegistryDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveAssetImageRegistryRegistryDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewImageAuthorizeStateResponse> RenewImageAuthorizeStateOutcome;
                typedef std::future<RenewImageAuthorizeStateOutcome> RenewImageAuthorizeStateOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::RenewImageAuthorizeStateRequest&, RenewImageAuthorizeStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewImageAuthorizeStateAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanComplianceAssetsResponse> ScanComplianceAssetsOutcome;
                typedef std::future<ScanComplianceAssetsOutcome> ScanComplianceAssetsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ScanComplianceAssetsRequest&, ScanComplianceAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanComplianceAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanComplianceAssetsByPolicyItemResponse> ScanComplianceAssetsByPolicyItemOutcome;
                typedef std::future<ScanComplianceAssetsByPolicyItemOutcome> ScanComplianceAssetsByPolicyItemOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ScanComplianceAssetsByPolicyItemRequest&, ScanComplianceAssetsByPolicyItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanComplianceAssetsByPolicyItemAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanCompliancePolicyItemsResponse> ScanCompliancePolicyItemsOutcome;
                typedef std::future<ScanCompliancePolicyItemsOutcome> ScanCompliancePolicyItemsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ScanCompliancePolicyItemsRequest&, ScanCompliancePolicyItemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanCompliancePolicyItemsAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanComplianceScanFailedAssetsResponse> ScanComplianceScanFailedAssetsOutcome;
                typedef std::future<ScanComplianceScanFailedAssetsOutcome> ScanComplianceScanFailedAssetsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ScanComplianceScanFailedAssetsRequest&, ScanComplianceScanFailedAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanComplianceScanFailedAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::SetCheckModeResponse> SetCheckModeOutcome;
                typedef std::future<SetCheckModeOutcome> SetCheckModeOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::SetCheckModeRequest&, SetCheckModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetCheckModeAsyncHandler;
                typedef Outcome<Core::Error, Model::StopVirusScanTaskResponse> StopVirusScanTaskOutcome;
                typedef std::future<StopVirusScanTaskOutcome> StopVirusScanTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::StopVirusScanTaskRequest&, StopVirusScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopVirusScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncAssetImageRegistryAssetResponse> SyncAssetImageRegistryAssetOutcome;
                typedef std::future<SyncAssetImageRegistryAssetOutcome> SyncAssetImageRegistryAssetOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::SyncAssetImageRegistryAssetRequest&, SyncAssetImageRegistryAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncAssetImageRegistryAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAssetImageRegistryRegistryDetailResponse> UpdateAssetImageRegistryRegistryDetailOutcome;
                typedef std::future<UpdateAssetImageRegistryRegistryDetailOutcome> UpdateAssetImageRegistryRegistryDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::UpdateAssetImageRegistryRegistryDetailRequest&, UpdateAssetImageRegistryRegistryDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAssetImageRegistryRegistryDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateImageRegistryTimingScanTaskResponse> UpdateImageRegistryTimingScanTaskOutcome;
                typedef std::future<UpdateImageRegistryTimingScanTaskOutcome> UpdateImageRegistryTimingScanTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::UpdateImageRegistryTimingScanTaskRequest&, UpdateImageRegistryTimingScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateImageRegistryTimingScanTaskAsyncHandler;



                /**
                 *新增单个镜像仓库详细信息
                 * @param req AddAssetImageRegistryRegistryDetailRequest
                 * @return AddAssetImageRegistryRegistryDetailOutcome
                 */
                AddAssetImageRegistryRegistryDetailOutcome AddAssetImageRegistryRegistryDetail(const Model::AddAssetImageRegistryRegistryDetailRequest &request);
                void AddAssetImageRegistryRegistryDetailAsync(const Model::AddAssetImageRegistryRegistryDetailRequest& request, const AddAssetImageRegistryRegistryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAssetImageRegistryRegistryDetailOutcomeCallable AddAssetImageRegistryRegistryDetailCallable(const Model::AddAssetImageRegistryRegistryDetailRequest& request);

                /**
                 *将指定的检测项添加到白名单中，不显示未通过结果。
                 * @param req AddCompliancePolicyItemToWhitelistRequest
                 * @return AddCompliancePolicyItemToWhitelistOutcome
                 */
                AddCompliancePolicyItemToWhitelistOutcome AddCompliancePolicyItemToWhitelist(const Model::AddCompliancePolicyItemToWhitelistRequest &request);
                void AddCompliancePolicyItemToWhitelistAsync(const Model::AddCompliancePolicyItemToWhitelistRequest& request, const AddCompliancePolicyItemToWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCompliancePolicyItemToWhitelistOutcomeCallable AddCompliancePolicyItemToWhitelistCallable(const Model::AddCompliancePolicyItemToWhitelistRequest& request);

                /**
                 *添加编辑运行时异常进程策略
                 * @param req AddEditAbnormalProcessRuleRequest
                 * @return AddEditAbnormalProcessRuleOutcome
                 */
                AddEditAbnormalProcessRuleOutcome AddEditAbnormalProcessRule(const Model::AddEditAbnormalProcessRuleRequest &request);
                void AddEditAbnormalProcessRuleAsync(const Model::AddEditAbnormalProcessRuleRequest& request, const AddEditAbnormalProcessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddEditAbnormalProcessRuleOutcomeCallable AddEditAbnormalProcessRuleCallable(const Model::AddEditAbnormalProcessRuleRequest& request);

                /**
                 *添加编辑运行时访问控制策略
                 * @param req AddEditAccessControlRuleRequest
                 * @return AddEditAccessControlRuleOutcome
                 */
                AddEditAccessControlRuleOutcome AddEditAccessControlRule(const Model::AddEditAccessControlRuleRequest &request);
                void AddEditAccessControlRuleAsync(const Model::AddEditAccessControlRuleRequest& request, const AddEditAccessControlRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddEditAccessControlRuleOutcomeCallable AddEditAccessControlRuleCallable(const Model::AddEditAccessControlRuleRequest& request);

                /**
                 *添加编辑运行时反弹shell白名单
                 * @param req AddEditReverseShellWhiteListRequest
                 * @return AddEditReverseShellWhiteListOutcome
                 */
                AddEditReverseShellWhiteListOutcome AddEditReverseShellWhiteList(const Model::AddEditReverseShellWhiteListRequest &request);
                void AddEditReverseShellWhiteListAsync(const Model::AddEditReverseShellWhiteListRequest& request, const AddEditReverseShellWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddEditReverseShellWhiteListOutcomeCallable AddEditReverseShellWhiteListCallable(const Model::AddEditReverseShellWhiteListRequest& request);

                /**
                 *添加编辑运行时高危系统调用白名单
                 * @param req AddEditRiskSyscallWhiteListRequest
                 * @return AddEditRiskSyscallWhiteListOutcome
                 */
                AddEditRiskSyscallWhiteListOutcome AddEditRiskSyscallWhiteList(const Model::AddEditRiskSyscallWhiteListRequest &request);
                void AddEditRiskSyscallWhiteListAsync(const Model::AddEditRiskSyscallWhiteListRequest& request, const AddEditRiskSyscallWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddEditRiskSyscallWhiteListOutcomeCallable AddEditRiskSyscallWhiteListCallable(const Model::AddEditRiskSyscallWhiteListRequest& request);

                /**
                 *添加编辑告警策略
                 * @param req AddEditWarningRulesRequest
                 * @return AddEditWarningRulesOutcome
                 */
                AddEditWarningRulesOutcome AddEditWarningRules(const Model::AddEditWarningRulesRequest &request);
                void AddEditWarningRulesAsync(const Model::AddEditWarningRulesRequest& request, const AddEditWarningRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddEditWarningRulesOutcomeCallable AddEditWarningRulesCallable(const Model::AddEditWarningRulesRequest& request);

                /**
                 *检查单个镜像仓库名是否重复
                 * @param req CheckRepeatAssetImageRegistryRequest
                 * @return CheckRepeatAssetImageRegistryOutcome
                 */
                CheckRepeatAssetImageRegistryOutcome CheckRepeatAssetImageRegistry(const Model::CheckRepeatAssetImageRegistryRequest &request);
                void CheckRepeatAssetImageRegistryAsync(const Model::CheckRepeatAssetImageRegistryRequest& request, const CheckRepeatAssetImageRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckRepeatAssetImageRegistryOutcomeCallable CheckRepeatAssetImageRegistryCallable(const Model::CheckRepeatAssetImageRegistryRequest& request);

                /**
                 *镜像仓库创建镜像扫描任务
                 * @param req CreateAssetImageRegistryScanTaskRequest
                 * @return CreateAssetImageRegistryScanTaskOutcome
                 */
                CreateAssetImageRegistryScanTaskOutcome CreateAssetImageRegistryScanTask(const Model::CreateAssetImageRegistryScanTaskRequest &request);
                void CreateAssetImageRegistryScanTaskAsync(const Model::CreateAssetImageRegistryScanTaskRequest& request, const CreateAssetImageRegistryScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetImageRegistryScanTaskOutcomeCallable CreateAssetImageRegistryScanTaskCallable(const Model::CreateAssetImageRegistryScanTaskRequest& request);

                /**
                 *镜像仓库创建镜像一键扫描任务
                 * @param req CreateAssetImageRegistryScanTaskOneKeyRequest
                 * @return CreateAssetImageRegistryScanTaskOneKeyOutcome
                 */
                CreateAssetImageRegistryScanTaskOneKeyOutcome CreateAssetImageRegistryScanTaskOneKey(const Model::CreateAssetImageRegistryScanTaskOneKeyRequest &request);
                void CreateAssetImageRegistryScanTaskOneKeyAsync(const Model::CreateAssetImageRegistryScanTaskOneKeyRequest& request, const CreateAssetImageRegistryScanTaskOneKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetImageRegistryScanTaskOneKeyOutcomeCallable CreateAssetImageRegistryScanTaskOneKeyCallable(const Model::CreateAssetImageRegistryScanTaskOneKeyRequest& request);

                /**
                 *添加容器安全镜像扫描设置
                 * @param req CreateAssetImageScanSettingRequest
                 * @return CreateAssetImageScanSettingOutcome
                 */
                CreateAssetImageScanSettingOutcome CreateAssetImageScanSetting(const Model::CreateAssetImageScanSettingRequest &request);
                void CreateAssetImageScanSettingAsync(const Model::CreateAssetImageScanSettingRequest& request, const CreateAssetImageScanSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetImageScanSettingOutcomeCallable CreateAssetImageScanSettingCallable(const Model::CreateAssetImageScanSettingRequest& request);

                /**
                 *容器安全创建镜像扫描任务
                 * @param req CreateAssetImageScanTaskRequest
                 * @return CreateAssetImageScanTaskOutcome
                 */
                CreateAssetImageScanTaskOutcome CreateAssetImageScanTask(const Model::CreateAssetImageScanTaskRequest &request);
                void CreateAssetImageScanTaskAsync(const Model::CreateAssetImageScanTaskRequest& request, const CreateAssetImageScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetImageScanTaskOutcomeCallable CreateAssetImageScanTaskCallable(const Model::CreateAssetImageScanTaskRequest& request);

                /**
                 *安装检查组件，创建防护容器
                 * @param req CreateCheckComponentRequest
                 * @return CreateCheckComponentOutcome
                 */
                CreateCheckComponentOutcome CreateCheckComponent(const Model::CreateCheckComponentRequest &request);
                void CreateCheckComponentAsync(const Model::CreateCheckComponentRequest& request, const CreateCheckComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCheckComponentOutcomeCallable CreateCheckComponentCallable(const Model::CreateCheckComponentRequest& request);

                /**
                 *创建集群检查任务，用户检查用户的集群相关风险项
                 * @param req CreateClusterCheckTaskRequest
                 * @return CreateClusterCheckTaskOutcome
                 */
                CreateClusterCheckTaskOutcome CreateClusterCheckTask(const Model::CreateClusterCheckTaskRequest &request);
                void CreateClusterCheckTaskAsync(const Model::CreateClusterCheckTaskRequest& request, const CreateClusterCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterCheckTaskOutcomeCallable CreateClusterCheckTaskCallable(const Model::CreateClusterCheckTaskRequest& request);

                /**
                 *创建合规检查任务，在资产级别触发重新检测时使用。
                 * @param req CreateComplianceTaskRequest
                 * @return CreateComplianceTaskOutcome
                 */
                CreateComplianceTaskOutcome CreateComplianceTask(const Model::CreateComplianceTaskRequest &request);
                void CreateComplianceTaskAsync(const Model::CreateComplianceTaskRequest& request, const CreateComplianceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateComplianceTaskOutcomeCallable CreateComplianceTaskCallable(const Model::CreateComplianceTaskRequest& request);

                /**
                 *创建一个导出安全合规信息的任务
                 * @param req CreateExportComplianceStatusListJobRequest
                 * @return CreateExportComplianceStatusListJobOutcome
                 */
                CreateExportComplianceStatusListJobOutcome CreateExportComplianceStatusListJob(const Model::CreateExportComplianceStatusListJobRequest &request);
                void CreateExportComplianceStatusListJobAsync(const Model::CreateExportComplianceStatusListJobRequest& request, const CreateExportComplianceStatusListJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExportComplianceStatusListJobOutcomeCallable CreateExportComplianceStatusListJobCallable(const Model::CreateExportComplianceStatusListJobRequest& request);

                /**
                 *CreateOrModifyPostPayCores  创建或者编辑弹性计费上限
                 * @param req CreateOrModifyPostPayCoresRequest
                 * @return CreateOrModifyPostPayCoresOutcome
                 */
                CreateOrModifyPostPayCoresOutcome CreateOrModifyPostPayCores(const Model::CreateOrModifyPostPayCoresRequest &request);
                void CreateOrModifyPostPayCoresAsync(const Model::CreateOrModifyPostPayCoresRequest& request, const CreateOrModifyPostPayCoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrModifyPostPayCoresOutcomeCallable CreateOrModifyPostPayCoresCallable(const Model::CreateOrModifyPostPayCoresRequest& request);

                /**
                 *下发刷新任务，会刷新资产信息
                 * @param req CreateRefreshTaskRequest
                 * @return CreateRefreshTaskOutcome
                 */
                CreateRefreshTaskOutcome CreateRefreshTask(const Model::CreateRefreshTaskRequest &request);
                void CreateRefreshTaskAsync(const Model::CreateRefreshTaskRequest& request, const CreateRefreshTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRefreshTaskOutcomeCallable CreateRefreshTaskCallable(const Model::CreateRefreshTaskRequest& request);

                /**
                 *运行时文件查杀重新检测
                 * @param req CreateVirusScanAgainRequest
                 * @return CreateVirusScanAgainOutcome
                 */
                CreateVirusScanAgainOutcome CreateVirusScanAgain(const Model::CreateVirusScanAgainRequest &request);
                void CreateVirusScanAgainAsync(const Model::CreateVirusScanAgainRequest& request, const CreateVirusScanAgainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVirusScanAgainOutcomeCallable CreateVirusScanAgainCallable(const Model::CreateVirusScanAgainRequest& request);

                /**
                 *运行时文件查杀一键扫描
                 * @param req CreateVirusScanTaskRequest
                 * @return CreateVirusScanTaskOutcome
                 */
                CreateVirusScanTaskOutcome CreateVirusScanTask(const Model::CreateVirusScanTaskRequest &request);
                void CreateVirusScanTaskAsync(const Model::CreateVirusScanTaskRequest& request, const CreateVirusScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVirusScanTaskOutcomeCallable CreateVirusScanTaskCallable(const Model::CreateVirusScanTaskRequest& request);

                /**
                 *删除运行异常进程策略
                 * @param req DeleteAbnormalProcessRulesRequest
                 * @return DeleteAbnormalProcessRulesOutcome
                 */
                DeleteAbnormalProcessRulesOutcome DeleteAbnormalProcessRules(const Model::DeleteAbnormalProcessRulesRequest &request);
                void DeleteAbnormalProcessRulesAsync(const Model::DeleteAbnormalProcessRulesRequest& request, const DeleteAbnormalProcessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAbnormalProcessRulesOutcomeCallable DeleteAbnormalProcessRulesCallable(const Model::DeleteAbnormalProcessRulesRequest& request);

                /**
                 *删除运行访问控制策略
                 * @param req DeleteAccessControlRulesRequest
                 * @return DeleteAccessControlRulesOutcome
                 */
                DeleteAccessControlRulesOutcome DeleteAccessControlRules(const Model::DeleteAccessControlRulesRequest &request);
                void DeleteAccessControlRulesAsync(const Model::DeleteAccessControlRulesRequest& request, const DeleteAccessControlRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccessControlRulesOutcomeCallable DeleteAccessControlRulesCallable(const Model::DeleteAccessControlRulesRequest& request);

                /**
                 *从白名单中删除将指定的检测项。
                 * @param req DeleteCompliancePolicyItemFromWhitelistRequest
                 * @return DeleteCompliancePolicyItemFromWhitelistOutcome
                 */
                DeleteCompliancePolicyItemFromWhitelistOutcome DeleteCompliancePolicyItemFromWhitelist(const Model::DeleteCompliancePolicyItemFromWhitelistRequest &request);
                void DeleteCompliancePolicyItemFromWhitelistAsync(const Model::DeleteCompliancePolicyItemFromWhitelistRequest& request, const DeleteCompliancePolicyItemFromWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCompliancePolicyItemFromWhitelistOutcomeCallable DeleteCompliancePolicyItemFromWhitelistCallable(const Model::DeleteCompliancePolicyItemFromWhitelistRequest& request);

                /**
                 *删除运行时反弹shell白名单
                 * @param req DeleteReverseShellWhiteListsRequest
                 * @return DeleteReverseShellWhiteListsOutcome
                 */
                DeleteReverseShellWhiteListsOutcome DeleteReverseShellWhiteLists(const Model::DeleteReverseShellWhiteListsRequest &request);
                void DeleteReverseShellWhiteListsAsync(const Model::DeleteReverseShellWhiteListsRequest& request, const DeleteReverseShellWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReverseShellWhiteListsOutcomeCallable DeleteReverseShellWhiteListsCallable(const Model::DeleteReverseShellWhiteListsRequest& request);

                /**
                 *删除运行时高危系统调用白名单
                 * @param req DeleteRiskSyscallWhiteListsRequest
                 * @return DeleteRiskSyscallWhiteListsOutcome
                 */
                DeleteRiskSyscallWhiteListsOutcome DeleteRiskSyscallWhiteLists(const Model::DeleteRiskSyscallWhiteListsRequest &request);
                void DeleteRiskSyscallWhiteListsAsync(const Model::DeleteRiskSyscallWhiteListsRequest& request, const DeleteRiskSyscallWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRiskSyscallWhiteListsOutcomeCallable DeleteRiskSyscallWhiteListsCallable(const Model::DeleteRiskSyscallWhiteListsRequest& request);

                /**
                 *查询运行时异常进程事件详细信息
                 * @param req DescribeAbnormalProcessDetailRequest
                 * @return DescribeAbnormalProcessDetailOutcome
                 */
                DescribeAbnormalProcessDetailOutcome DescribeAbnormalProcessDetail(const Model::DescribeAbnormalProcessDetailRequest &request);
                void DescribeAbnormalProcessDetailAsync(const Model::DescribeAbnormalProcessDetailRequest& request, const DescribeAbnormalProcessDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalProcessDetailOutcomeCallable DescribeAbnormalProcessDetailCallable(const Model::DescribeAbnormalProcessDetailRequest& request);

                /**
                 *查询运行时异常进程事件列表信息
                 * @param req DescribeAbnormalProcessEventsRequest
                 * @return DescribeAbnormalProcessEventsOutcome
                 */
                DescribeAbnormalProcessEventsOutcome DescribeAbnormalProcessEvents(const Model::DescribeAbnormalProcessEventsRequest &request);
                void DescribeAbnormalProcessEventsAsync(const Model::DescribeAbnormalProcessEventsRequest& request, const DescribeAbnormalProcessEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalProcessEventsOutcomeCallable DescribeAbnormalProcessEventsCallable(const Model::DescribeAbnormalProcessEventsRequest& request);

                /**
                 *查询运行时异常进程事件列表信息导出
                 * @param req DescribeAbnormalProcessEventsExportRequest
                 * @return DescribeAbnormalProcessEventsExportOutcome
                 */
                DescribeAbnormalProcessEventsExportOutcome DescribeAbnormalProcessEventsExport(const Model::DescribeAbnormalProcessEventsExportRequest &request);
                void DescribeAbnormalProcessEventsExportAsync(const Model::DescribeAbnormalProcessEventsExportRequest& request, const DescribeAbnormalProcessEventsExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalProcessEventsExportOutcomeCallable DescribeAbnormalProcessEventsExportCallable(const Model::DescribeAbnormalProcessEventsExportRequest& request);

                /**
                 *查询运行时异常策略详细信息
                 * @param req DescribeAbnormalProcessRuleDetailRequest
                 * @return DescribeAbnormalProcessRuleDetailOutcome
                 */
                DescribeAbnormalProcessRuleDetailOutcome DescribeAbnormalProcessRuleDetail(const Model::DescribeAbnormalProcessRuleDetailRequest &request);
                void DescribeAbnormalProcessRuleDetailAsync(const Model::DescribeAbnormalProcessRuleDetailRequest& request, const DescribeAbnormalProcessRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalProcessRuleDetailOutcomeCallable DescribeAbnormalProcessRuleDetailCallable(const Model::DescribeAbnormalProcessRuleDetailRequest& request);

                /**
                 *查询运行时异常进程策略列表信息
                 * @param req DescribeAbnormalProcessRulesRequest
                 * @return DescribeAbnormalProcessRulesOutcome
                 */
                DescribeAbnormalProcessRulesOutcome DescribeAbnormalProcessRules(const Model::DescribeAbnormalProcessRulesRequest &request);
                void DescribeAbnormalProcessRulesAsync(const Model::DescribeAbnormalProcessRulesRequest& request, const DescribeAbnormalProcessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalProcessRulesOutcomeCallable DescribeAbnormalProcessRulesCallable(const Model::DescribeAbnormalProcessRulesRequest& request);

                /**
                 *查询运行时异常进程策略列表信息导出
                 * @param req DescribeAbnormalProcessRulesExportRequest
                 * @return DescribeAbnormalProcessRulesExportOutcome
                 */
                DescribeAbnormalProcessRulesExportOutcome DescribeAbnormalProcessRulesExport(const Model::DescribeAbnormalProcessRulesExportRequest &request);
                void DescribeAbnormalProcessRulesExportAsync(const Model::DescribeAbnormalProcessRulesExportRequest& request, const DescribeAbnormalProcessRulesExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalProcessRulesExportOutcomeCallable DescribeAbnormalProcessRulesExportCallable(const Model::DescribeAbnormalProcessRulesExportRequest& request);

                /**
                 *查询运行时访问控制事件的详细信息
                 * @param req DescribeAccessControlDetailRequest
                 * @return DescribeAccessControlDetailOutcome
                 */
                DescribeAccessControlDetailOutcome DescribeAccessControlDetail(const Model::DescribeAccessControlDetailRequest &request);
                void DescribeAccessControlDetailAsync(const Model::DescribeAccessControlDetailRequest& request, const DescribeAccessControlDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessControlDetailOutcomeCallable DescribeAccessControlDetailCallable(const Model::DescribeAccessControlDetailRequest& request);

                /**
                 *查询运行时访问控制事件列表
                 * @param req DescribeAccessControlEventsRequest
                 * @return DescribeAccessControlEventsOutcome
                 */
                DescribeAccessControlEventsOutcome DescribeAccessControlEvents(const Model::DescribeAccessControlEventsRequest &request);
                void DescribeAccessControlEventsAsync(const Model::DescribeAccessControlEventsRequest& request, const DescribeAccessControlEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessControlEventsOutcomeCallable DescribeAccessControlEventsCallable(const Model::DescribeAccessControlEventsRequest& request);

                /**
                 *查询运行时访问控制事件列表导出
                 * @param req DescribeAccessControlEventsExportRequest
                 * @return DescribeAccessControlEventsExportOutcome
                 */
                DescribeAccessControlEventsExportOutcome DescribeAccessControlEventsExport(const Model::DescribeAccessControlEventsExportRequest &request);
                void DescribeAccessControlEventsExportAsync(const Model::DescribeAccessControlEventsExportRequest& request, const DescribeAccessControlEventsExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessControlEventsExportOutcomeCallable DescribeAccessControlEventsExportCallable(const Model::DescribeAccessControlEventsExportRequest& request);

                /**
                 *查询运行时访问控制策略详细信息
                 * @param req DescribeAccessControlRuleDetailRequest
                 * @return DescribeAccessControlRuleDetailOutcome
                 */
                DescribeAccessControlRuleDetailOutcome DescribeAccessControlRuleDetail(const Model::DescribeAccessControlRuleDetailRequest &request);
                void DescribeAccessControlRuleDetailAsync(const Model::DescribeAccessControlRuleDetailRequest& request, const DescribeAccessControlRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessControlRuleDetailOutcomeCallable DescribeAccessControlRuleDetailCallable(const Model::DescribeAccessControlRuleDetailRequest& request);

                /**
                 *查询运行访问控制策略列表信息
                 * @param req DescribeAccessControlRulesRequest
                 * @return DescribeAccessControlRulesOutcome
                 */
                DescribeAccessControlRulesOutcome DescribeAccessControlRules(const Model::DescribeAccessControlRulesRequest &request);
                void DescribeAccessControlRulesAsync(const Model::DescribeAccessControlRulesRequest& request, const DescribeAccessControlRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessControlRulesOutcomeCallable DescribeAccessControlRulesCallable(const Model::DescribeAccessControlRulesRequest& request);

                /**
                 *查询运行时访问控制策略列表导出
                 * @param req DescribeAccessControlRulesExportRequest
                 * @return DescribeAccessControlRulesExportOutcome
                 */
                DescribeAccessControlRulesExportOutcome DescribeAccessControlRulesExport(const Model::DescribeAccessControlRulesExportRequest &request);
                void DescribeAccessControlRulesExportAsync(const Model::DescribeAccessControlRulesExportRequest& request, const DescribeAccessControlRulesExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessControlRulesExportOutcomeCallable DescribeAccessControlRulesExportCallable(const Model::DescribeAccessControlRulesExportRequest& request);

                /**
                 *获取受影响的集群数量，返回数量
                 * @param req DescribeAffectedClusterCountRequest
                 * @return DescribeAffectedClusterCountOutcome
                 */
                DescribeAffectedClusterCountOutcome DescribeAffectedClusterCount(const Model::DescribeAffectedClusterCountRequest &request);
                void DescribeAffectedClusterCountAsync(const Model::DescribeAffectedClusterCountRequest& request, const DescribeAffectedClusterCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAffectedClusterCountOutcomeCallable DescribeAffectedClusterCountCallable(const Model::DescribeAffectedClusterCountRequest& request);

                /**
                 *查询节点类型的影响范围，返回节点列表
                 * @param req DescribeAffectedNodeListRequest
                 * @return DescribeAffectedNodeListOutcome
                 */
                DescribeAffectedNodeListOutcome DescribeAffectedNodeList(const Model::DescribeAffectedNodeListRequest &request);
                void DescribeAffectedNodeListAsync(const Model::DescribeAffectedNodeListRequest& request, const DescribeAffectedNodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAffectedNodeListOutcomeCallable DescribeAffectedNodeListCallable(const Model::DescribeAffectedNodeListRequest& request);

                /**
                 *查询workload类型的影响范围，返回workload列表
                 * @param req DescribeAffectedWorkloadListRequest
                 * @return DescribeAffectedWorkloadListOutcome
                 */
                DescribeAffectedWorkloadListOutcome DescribeAffectedWorkloadList(const Model::DescribeAffectedWorkloadListRequest &request);
                void DescribeAffectedWorkloadListAsync(const Model::DescribeAffectedWorkloadListRequest& request, const DescribeAffectedWorkloadListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAffectedWorkloadListOutcomeCallable DescribeAffectedWorkloadListCallable(const Model::DescribeAffectedWorkloadListRequest& request);

                /**
                 *容器安全查询app服务列表
                 * @param req DescribeAssetAppServiceListRequest
                 * @return DescribeAssetAppServiceListOutcome
                 */
                DescribeAssetAppServiceListOutcome DescribeAssetAppServiceList(const Model::DescribeAssetAppServiceListRequest &request);
                void DescribeAssetAppServiceListAsync(const Model::DescribeAssetAppServiceListRequest& request, const DescribeAssetAppServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetAppServiceListOutcomeCallable DescribeAssetAppServiceListCallable(const Model::DescribeAssetAppServiceListRequest& request);

                /**
                 *容器安全搜索查询容器组件列表
                 * @param req DescribeAssetComponentListRequest
                 * @return DescribeAssetComponentListOutcome
                 */
                DescribeAssetComponentListOutcome DescribeAssetComponentList(const Model::DescribeAssetComponentListRequest &request);
                void DescribeAssetComponentListAsync(const Model::DescribeAssetComponentListRequest& request, const DescribeAssetComponentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetComponentListOutcomeCallable DescribeAssetComponentListCallable(const Model::DescribeAssetComponentListRequest& request);

                /**
                 *查询容器详细信息
                 * @param req DescribeAssetContainerDetailRequest
                 * @return DescribeAssetContainerDetailOutcome
                 */
                DescribeAssetContainerDetailOutcome DescribeAssetContainerDetail(const Model::DescribeAssetContainerDetailRequest &request);
                void DescribeAssetContainerDetailAsync(const Model::DescribeAssetContainerDetailRequest& request, const DescribeAssetContainerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetContainerDetailOutcomeCallable DescribeAssetContainerDetailCallable(const Model::DescribeAssetContainerDetailRequest& request);

                /**
                 *搜索查询容器列表
                 * @param req DescribeAssetContainerListRequest
                 * @return DescribeAssetContainerListOutcome
                 */
                DescribeAssetContainerListOutcome DescribeAssetContainerList(const Model::DescribeAssetContainerListRequest &request);
                void DescribeAssetContainerListAsync(const Model::DescribeAssetContainerListRequest& request, const DescribeAssetContainerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetContainerListOutcomeCallable DescribeAssetContainerListCallable(const Model::DescribeAssetContainerListRequest& request);

                /**
                 *容器安全查询db服务列表
                 * @param req DescribeAssetDBServiceListRequest
                 * @return DescribeAssetDBServiceListOutcome
                 */
                DescribeAssetDBServiceListOutcome DescribeAssetDBServiceList(const Model::DescribeAssetDBServiceListRequest &request);
                void DescribeAssetDBServiceListAsync(const Model::DescribeAssetDBServiceListRequest& request, const DescribeAssetDBServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetDBServiceListOutcomeCallable DescribeAssetDBServiceListCallable(const Model::DescribeAssetDBServiceListRequest& request);

                /**
                 *查询主机详细信息
                 * @param req DescribeAssetHostDetailRequest
                 * @return DescribeAssetHostDetailOutcome
                 */
                DescribeAssetHostDetailOutcome DescribeAssetHostDetail(const Model::DescribeAssetHostDetailRequest &request);
                void DescribeAssetHostDetailAsync(const Model::DescribeAssetHostDetailRequest& request, const DescribeAssetHostDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetHostDetailOutcomeCallable DescribeAssetHostDetailCallable(const Model::DescribeAssetHostDetailRequest& request);

                /**
                 *容器安全搜索查询主机列表
                 * @param req DescribeAssetHostListRequest
                 * @return DescribeAssetHostListOutcome
                 */
                DescribeAssetHostListOutcome DescribeAssetHostList(const Model::DescribeAssetHostListRequest &request);
                void DescribeAssetHostListAsync(const Model::DescribeAssetHostListRequest& request, const DescribeAssetHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetHostListOutcomeCallable DescribeAssetHostListCallable(const Model::DescribeAssetHostListRequest& request);

                /**
                 *镜像绑定规则列表信息，包含运行时访问控制和异常进程公用
                 * @param req DescribeAssetImageBindRuleInfoRequest
                 * @return DescribeAssetImageBindRuleInfoOutcome
                 */
                DescribeAssetImageBindRuleInfoOutcome DescribeAssetImageBindRuleInfo(const Model::DescribeAssetImageBindRuleInfoRequest &request);
                void DescribeAssetImageBindRuleInfoAsync(const Model::DescribeAssetImageBindRuleInfoRequest& request, const DescribeAssetImageBindRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageBindRuleInfoOutcomeCallable DescribeAssetImageBindRuleInfoCallable(const Model::DescribeAssetImageBindRuleInfoRequest& request);

                /**
                 *查询镜像详细信息
                 * @param req DescribeAssetImageDetailRequest
                 * @return DescribeAssetImageDetailOutcome
                 */
                DescribeAssetImageDetailOutcome DescribeAssetImageDetail(const Model::DescribeAssetImageDetailRequest &request);
                void DescribeAssetImageDetailAsync(const Model::DescribeAssetImageDetailRequest& request, const DescribeAssetImageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageDetailOutcomeCallable DescribeAssetImageDetailCallable(const Model::DescribeAssetImageDetailRequest& request);

                /**
                 *容器安全查询镜像关联主机
                 * @param req DescribeAssetImageHostListRequest
                 * @return DescribeAssetImageHostListOutcome
                 */
                DescribeAssetImageHostListOutcome DescribeAssetImageHostList(const Model::DescribeAssetImageHostListRequest &request);
                void DescribeAssetImageHostListAsync(const Model::DescribeAssetImageHostListRequest& request, const DescribeAssetImageHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageHostListOutcomeCallable DescribeAssetImageHostListCallable(const Model::DescribeAssetImageHostListRequest& request);

                /**
                 *容器安全搜索查询镜像列表
                 * @param req DescribeAssetImageListRequest
                 * @return DescribeAssetImageListOutcome
                 */
                DescribeAssetImageListOutcome DescribeAssetImageList(const Model::DescribeAssetImageListRequest &request);
                void DescribeAssetImageListAsync(const Model::DescribeAssetImageListRequest& request, const DescribeAssetImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageListOutcomeCallable DescribeAssetImageListCallable(const Model::DescribeAssetImageListRequest& request);

                /**
                 *容器安全搜索查询镜像列表导出
                 * @param req DescribeAssetImageListExportRequest
                 * @return DescribeAssetImageListExportOutcome
                 */
                DescribeAssetImageListExportOutcome DescribeAssetImageListExport(const Model::DescribeAssetImageListExportRequest &request);
                void DescribeAssetImageListExportAsync(const Model::DescribeAssetImageListExportRequest& request, const DescribeAssetImageListExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageListExportOutcomeCallable DescribeAssetImageListExportCallable(const Model::DescribeAssetImageListExportRequest& request);

                /**
                 *查看镜像仓库资产更新进度状态
                 * @param req DescribeAssetImageRegistryAssetStatusRequest
                 * @return DescribeAssetImageRegistryAssetStatusOutcome
                 */
                DescribeAssetImageRegistryAssetStatusOutcome DescribeAssetImageRegistryAssetStatus(const Model::DescribeAssetImageRegistryAssetStatusRequest &request);
                void DescribeAssetImageRegistryAssetStatusAsync(const Model::DescribeAssetImageRegistryAssetStatusRequest& request, const DescribeAssetImageRegistryAssetStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRegistryAssetStatusOutcomeCallable DescribeAssetImageRegistryAssetStatusCallable(const Model::DescribeAssetImageRegistryAssetStatusRequest& request);

                /**
                 *镜像仓库镜像仓库列表详情
                 * @param req DescribeAssetImageRegistryDetailRequest
                 * @return DescribeAssetImageRegistryDetailOutcome
                 */
                DescribeAssetImageRegistryDetailOutcome DescribeAssetImageRegistryDetail(const Model::DescribeAssetImageRegistryDetailRequest &request);
                void DescribeAssetImageRegistryDetailAsync(const Model::DescribeAssetImageRegistryDetailRequest& request, const DescribeAssetImageRegistryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRegistryDetailOutcomeCallable DescribeAssetImageRegistryDetailCallable(const Model::DescribeAssetImageRegistryDetailRequest& request);

                /**
                 *镜像仓库镜像仓库列表
                 * @param req DescribeAssetImageRegistryListRequest
                 * @return DescribeAssetImageRegistryListOutcome
                 */
                DescribeAssetImageRegistryListOutcome DescribeAssetImageRegistryList(const Model::DescribeAssetImageRegistryListRequest &request);
                void DescribeAssetImageRegistryListAsync(const Model::DescribeAssetImageRegistryListRequest& request, const DescribeAssetImageRegistryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRegistryListOutcomeCallable DescribeAssetImageRegistryListCallable(const Model::DescribeAssetImageRegistryListRequest& request);

                /**
                 *镜像仓库镜像列表导出
                 * @param req DescribeAssetImageRegistryListExportRequest
                 * @return DescribeAssetImageRegistryListExportOutcome
                 */
                DescribeAssetImageRegistryListExportOutcome DescribeAssetImageRegistryListExport(const Model::DescribeAssetImageRegistryListExportRequest &request);
                void DescribeAssetImageRegistryListExportAsync(const Model::DescribeAssetImageRegistryListExportRequest& request, const DescribeAssetImageRegistryListExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRegistryListExportOutcomeCallable DescribeAssetImageRegistryListExportCallable(const Model::DescribeAssetImageRegistryListExportRequest& request);

                /**
                 *查看单个镜像仓库详细信息
                 * @param req DescribeAssetImageRegistryRegistryDetailRequest
                 * @return DescribeAssetImageRegistryRegistryDetailOutcome
                 */
                DescribeAssetImageRegistryRegistryDetailOutcome DescribeAssetImageRegistryRegistryDetail(const Model::DescribeAssetImageRegistryRegistryDetailRequest &request);
                void DescribeAssetImageRegistryRegistryDetailAsync(const Model::DescribeAssetImageRegistryRegistryDetailRequest& request, const DescribeAssetImageRegistryRegistryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRegistryRegistryDetailOutcomeCallable DescribeAssetImageRegistryRegistryDetailCallable(const Model::DescribeAssetImageRegistryRegistryDetailRequest& request);

                /**
                 *镜像仓库仓库列表
                 * @param req DescribeAssetImageRegistryRegistryListRequest
                 * @return DescribeAssetImageRegistryRegistryListOutcome
                 */
                DescribeAssetImageRegistryRegistryListOutcome DescribeAssetImageRegistryRegistryList(const Model::DescribeAssetImageRegistryRegistryListRequest &request);
                void DescribeAssetImageRegistryRegistryListAsync(const Model::DescribeAssetImageRegistryRegistryListRequest& request, const DescribeAssetImageRegistryRegistryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRegistryRegistryListOutcomeCallable DescribeAssetImageRegistryRegistryListCallable(const Model::DescribeAssetImageRegistryRegistryListRequest& request);

                /**
                 *镜像仓库查询镜像高危行为列表
                 * @param req DescribeAssetImageRegistryRiskInfoListRequest
                 * @return DescribeAssetImageRegistryRiskInfoListOutcome
                 */
                DescribeAssetImageRegistryRiskInfoListOutcome DescribeAssetImageRegistryRiskInfoList(const Model::DescribeAssetImageRegistryRiskInfoListRequest &request);
                void DescribeAssetImageRegistryRiskInfoListAsync(const Model::DescribeAssetImageRegistryRiskInfoListRequest& request, const DescribeAssetImageRegistryRiskInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRegistryRiskInfoListOutcomeCallable DescribeAssetImageRegistryRiskInfoListCallable(const Model::DescribeAssetImageRegistryRiskInfoListRequest& request);

                /**
                 *镜像仓库敏感信息列表导出
                 * @param req DescribeAssetImageRegistryRiskListExportRequest
                 * @return DescribeAssetImageRegistryRiskListExportOutcome
                 */
                DescribeAssetImageRegistryRiskListExportOutcome DescribeAssetImageRegistryRiskListExport(const Model::DescribeAssetImageRegistryRiskListExportRequest &request);
                void DescribeAssetImageRegistryRiskListExportAsync(const Model::DescribeAssetImageRegistryRiskListExportRequest& request, const DescribeAssetImageRegistryRiskListExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRegistryRiskListExportOutcomeCallable DescribeAssetImageRegistryRiskListExportCallable(const Model::DescribeAssetImageRegistryRiskListExportRequest& request);

                /**
                 *镜像仓库查询一键镜像扫描状态
                 * @param req DescribeAssetImageRegistryScanStatusOneKeyRequest
                 * @return DescribeAssetImageRegistryScanStatusOneKeyOutcome
                 */
                DescribeAssetImageRegistryScanStatusOneKeyOutcome DescribeAssetImageRegistryScanStatusOneKey(const Model::DescribeAssetImageRegistryScanStatusOneKeyRequest &request);
                void DescribeAssetImageRegistryScanStatusOneKeyAsync(const Model::DescribeAssetImageRegistryScanStatusOneKeyRequest& request, const DescribeAssetImageRegistryScanStatusOneKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRegistryScanStatusOneKeyOutcomeCallable DescribeAssetImageRegistryScanStatusOneKeyCallable(const Model::DescribeAssetImageRegistryScanStatusOneKeyRequest& request);

                /**
                 *镜像仓库查询镜像统计信息
                 * @param req DescribeAssetImageRegistrySummaryRequest
                 * @return DescribeAssetImageRegistrySummaryOutcome
                 */
                DescribeAssetImageRegistrySummaryOutcome DescribeAssetImageRegistrySummary(const Model::DescribeAssetImageRegistrySummaryRequest &request);
                void DescribeAssetImageRegistrySummaryAsync(const Model::DescribeAssetImageRegistrySummaryRequest& request, const DescribeAssetImageRegistrySummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRegistrySummaryOutcomeCallable DescribeAssetImageRegistrySummaryCallable(const Model::DescribeAssetImageRegistrySummaryRequest& request);

                /**
                 *镜像仓库查询木马病毒列表
                 * @param req DescribeAssetImageRegistryVirusListRequest
                 * @return DescribeAssetImageRegistryVirusListOutcome
                 */
                DescribeAssetImageRegistryVirusListOutcome DescribeAssetImageRegistryVirusList(const Model::DescribeAssetImageRegistryVirusListRequest &request);
                void DescribeAssetImageRegistryVirusListAsync(const Model::DescribeAssetImageRegistryVirusListRequest& request, const DescribeAssetImageRegistryVirusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRegistryVirusListOutcomeCallable DescribeAssetImageRegistryVirusListCallable(const Model::DescribeAssetImageRegistryVirusListRequest& request);

                /**
                 *镜像仓库木马信息列表导出
                 * @param req DescribeAssetImageRegistryVirusListExportRequest
                 * @return DescribeAssetImageRegistryVirusListExportOutcome
                 */
                DescribeAssetImageRegistryVirusListExportOutcome DescribeAssetImageRegistryVirusListExport(const Model::DescribeAssetImageRegistryVirusListExportRequest &request);
                void DescribeAssetImageRegistryVirusListExportAsync(const Model::DescribeAssetImageRegistryVirusListExportRequest& request, const DescribeAssetImageRegistryVirusListExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRegistryVirusListExportOutcomeCallable DescribeAssetImageRegistryVirusListExportCallable(const Model::DescribeAssetImageRegistryVirusListExportRequest& request);

                /**
                 *镜像仓库查询镜像漏洞列表
                 * @param req DescribeAssetImageRegistryVulListRequest
                 * @return DescribeAssetImageRegistryVulListOutcome
                 */
                DescribeAssetImageRegistryVulListOutcome DescribeAssetImageRegistryVulList(const Model::DescribeAssetImageRegistryVulListRequest &request);
                void DescribeAssetImageRegistryVulListAsync(const Model::DescribeAssetImageRegistryVulListRequest& request, const DescribeAssetImageRegistryVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRegistryVulListOutcomeCallable DescribeAssetImageRegistryVulListCallable(const Model::DescribeAssetImageRegistryVulListRequest& request);

                /**
                 *镜像仓库漏洞列表导出
                 * @param req DescribeAssetImageRegistryVulListExportRequest
                 * @return DescribeAssetImageRegistryVulListExportOutcome
                 */
                DescribeAssetImageRegistryVulListExportOutcome DescribeAssetImageRegistryVulListExport(const Model::DescribeAssetImageRegistryVulListExportRequest &request);
                void DescribeAssetImageRegistryVulListExportAsync(const Model::DescribeAssetImageRegistryVulListExportRequest& request, const DescribeAssetImageRegistryVulListExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRegistryVulListExportOutcomeCallable DescribeAssetImageRegistryVulListExportCallable(const Model::DescribeAssetImageRegistryVulListExportRequest& request);

                /**
                 *容器安全查询镜像风险列表
                 * @param req DescribeAssetImageRiskListRequest
                 * @return DescribeAssetImageRiskListOutcome
                 */
                DescribeAssetImageRiskListOutcome DescribeAssetImageRiskList(const Model::DescribeAssetImageRiskListRequest &request);
                void DescribeAssetImageRiskListAsync(const Model::DescribeAssetImageRiskListRequest& request, const DescribeAssetImageRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRiskListOutcomeCallable DescribeAssetImageRiskListCallable(const Model::DescribeAssetImageRiskListRequest& request);

                /**
                 *容器安全搜索查询镜像风险列表导出
                 * @param req DescribeAssetImageRiskListExportRequest
                 * @return DescribeAssetImageRiskListExportOutcome
                 */
                DescribeAssetImageRiskListExportOutcome DescribeAssetImageRiskListExport(const Model::DescribeAssetImageRiskListExportRequest &request);
                void DescribeAssetImageRiskListExportAsync(const Model::DescribeAssetImageRiskListExportRequest& request, const DescribeAssetImageRiskListExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageRiskListExportOutcomeCallable DescribeAssetImageRiskListExportCallable(const Model::DescribeAssetImageRiskListExportRequest& request);

                /**
                 *获取镜像扫描设置信息
                 * @param req DescribeAssetImageScanSettingRequest
                 * @return DescribeAssetImageScanSettingOutcome
                 */
                DescribeAssetImageScanSettingOutcome DescribeAssetImageScanSetting(const Model::DescribeAssetImageScanSettingRequest &request);
                void DescribeAssetImageScanSettingAsync(const Model::DescribeAssetImageScanSettingRequest& request, const DescribeAssetImageScanSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageScanSettingOutcomeCallable DescribeAssetImageScanSettingCallable(const Model::DescribeAssetImageScanSettingRequest& request);

                /**
                 *容器安全查询镜像扫描状态
                 * @param req DescribeAssetImageScanStatusRequest
                 * @return DescribeAssetImageScanStatusOutcome
                 */
                DescribeAssetImageScanStatusOutcome DescribeAssetImageScanStatus(const Model::DescribeAssetImageScanStatusRequest &request);
                void DescribeAssetImageScanStatusAsync(const Model::DescribeAssetImageScanStatusRequest& request, const DescribeAssetImageScanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageScanStatusOutcomeCallable DescribeAssetImageScanStatusCallable(const Model::DescribeAssetImageScanStatusRequest& request);

                /**
                 *查询正在一键扫描的镜像扫描taskid
                 * @param req DescribeAssetImageScanTaskRequest
                 * @return DescribeAssetImageScanTaskOutcome
                 */
                DescribeAssetImageScanTaskOutcome DescribeAssetImageScanTask(const Model::DescribeAssetImageScanTaskRequest &request);
                void DescribeAssetImageScanTaskAsync(const Model::DescribeAssetImageScanTaskRequest& request, const DescribeAssetImageScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageScanTaskOutcomeCallable DescribeAssetImageScanTaskCallable(const Model::DescribeAssetImageScanTaskRequest& request);

                /**
                 *容器安全搜索查询镜像简略信息列表
                 * @param req DescribeAssetImageSimpleListRequest
                 * @return DescribeAssetImageSimpleListOutcome
                 */
                DescribeAssetImageSimpleListOutcome DescribeAssetImageSimpleList(const Model::DescribeAssetImageSimpleListRequest &request);
                void DescribeAssetImageSimpleListAsync(const Model::DescribeAssetImageSimpleListRequest& request, const DescribeAssetImageSimpleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageSimpleListOutcomeCallable DescribeAssetImageSimpleListCallable(const Model::DescribeAssetImageSimpleListRequest& request);

                /**
                 *容器安全查询镜像病毒列表
                 * @param req DescribeAssetImageVirusListRequest
                 * @return DescribeAssetImageVirusListOutcome
                 */
                DescribeAssetImageVirusListOutcome DescribeAssetImageVirusList(const Model::DescribeAssetImageVirusListRequest &request);
                void DescribeAssetImageVirusListAsync(const Model::DescribeAssetImageVirusListRequest& request, const DescribeAssetImageVirusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageVirusListOutcomeCallable DescribeAssetImageVirusListCallable(const Model::DescribeAssetImageVirusListRequest& request);

                /**
                 *容器安全搜索查询镜像木马列表导出
                 * @param req DescribeAssetImageVirusListExportRequest
                 * @return DescribeAssetImageVirusListExportOutcome
                 */
                DescribeAssetImageVirusListExportOutcome DescribeAssetImageVirusListExport(const Model::DescribeAssetImageVirusListExportRequest &request);
                void DescribeAssetImageVirusListExportAsync(const Model::DescribeAssetImageVirusListExportRequest& request, const DescribeAssetImageVirusListExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageVirusListExportOutcomeCallable DescribeAssetImageVirusListExportCallable(const Model::DescribeAssetImageVirusListExportRequest& request);

                /**
                 *容器安全查询镜像漏洞列表
                 * @param req DescribeAssetImageVulListRequest
                 * @return DescribeAssetImageVulListOutcome
                 */
                DescribeAssetImageVulListOutcome DescribeAssetImageVulList(const Model::DescribeAssetImageVulListRequest &request);
                void DescribeAssetImageVulListAsync(const Model::DescribeAssetImageVulListRequest& request, const DescribeAssetImageVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageVulListOutcomeCallable DescribeAssetImageVulListCallable(const Model::DescribeAssetImageVulListRequest& request);

                /**
                 *容器安全搜索查询镜像漏洞列表导出
                 * @param req DescribeAssetImageVulListExportRequest
                 * @return DescribeAssetImageVulListExportOutcome
                 */
                DescribeAssetImageVulListExportOutcome DescribeAssetImageVulListExport(const Model::DescribeAssetImageVulListExportRequest &request);
                void DescribeAssetImageVulListExportAsync(const Model::DescribeAssetImageVulListExportRequest& request, const DescribeAssetImageVulListExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetImageVulListExportOutcomeCallable DescribeAssetImageVulListExportCallable(const Model::DescribeAssetImageVulListExportRequest& request);

                /**
                 *容器安全搜索查询端口占用列表
                 * @param req DescribeAssetPortListRequest
                 * @return DescribeAssetPortListOutcome
                 */
                DescribeAssetPortListOutcome DescribeAssetPortList(const Model::DescribeAssetPortListRequest &request);
                void DescribeAssetPortListAsync(const Model::DescribeAssetPortListRequest& request, const DescribeAssetPortListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetPortListOutcomeCallable DescribeAssetPortListCallable(const Model::DescribeAssetPortListRequest& request);

                /**
                 *容器安全搜索查询进程列表
                 * @param req DescribeAssetProcessListRequest
                 * @return DescribeAssetProcessListOutcome
                 */
                DescribeAssetProcessListOutcome DescribeAssetProcessList(const Model::DescribeAssetProcessListRequest &request);
                void DescribeAssetProcessListAsync(const Model::DescribeAssetProcessListRequest& request, const DescribeAssetProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetProcessListOutcomeCallable DescribeAssetProcessListCallable(const Model::DescribeAssetProcessListRequest& request);

                /**
                 *查询账户容器、镜像等统计信息
                 * @param req DescribeAssetSummaryRequest
                 * @return DescribeAssetSummaryOutcome
                 */
                DescribeAssetSummaryOutcome DescribeAssetSummary(const Model::DescribeAssetSummaryRequest &request);
                void DescribeAssetSummaryAsync(const Model::DescribeAssetSummaryRequest& request, const DescribeAssetSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetSummaryOutcomeCallable DescribeAssetSummaryCallable(const Model::DescribeAssetSummaryRequest& request);

                /**
                 *容器安全查询web服务列表
                 * @param req DescribeAssetWebServiceListRequest
                 * @return DescribeAssetWebServiceListOutcome
                 */
                DescribeAssetWebServiceListOutcome DescribeAssetWebServiceList(const Model::DescribeAssetWebServiceListRequest &request);
                void DescribeAssetWebServiceListAsync(const Model::DescribeAssetWebServiceListRequest& request, const DescribeAssetWebServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebServiceListOutcomeCallable DescribeAssetWebServiceListCallable(const Model::DescribeAssetWebServiceListRequest& request);

                /**
                 *查询所有检查项接口，返回总数和检查项列表
                 * @param req DescribeCheckItemListRequest
                 * @return DescribeCheckItemListOutcome
                 */
                DescribeCheckItemListOutcome DescribeCheckItemList(const Model::DescribeCheckItemListRequest &request);
                void DescribeCheckItemListAsync(const Model::DescribeCheckItemListRequest& request, const DescribeCheckItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCheckItemListOutcomeCallable DescribeCheckItemListCallable(const Model::DescribeCheckItemListRequest& request);

                /**
                 *查询单个集群的详细信息
                 * @param req DescribeClusterDetailRequest
                 * @return DescribeClusterDetailOutcome
                 */
                DescribeClusterDetailOutcome DescribeClusterDetail(const Model::DescribeClusterDetailRequest &request);
                void DescribeClusterDetailAsync(const Model::DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterDetailOutcomeCallable DescribeClusterDetailCallable(const Model::DescribeClusterDetailRequest& request);

                /**
                 *查询用户集群资产总览
                 * @param req DescribeClusterSummaryRequest
                 * @return DescribeClusterSummaryOutcome
                 */
                DescribeClusterSummaryOutcome DescribeClusterSummary(const Model::DescribeClusterSummaryRequest &request);
                void DescribeClusterSummaryAsync(const Model::DescribeClusterSummaryRequest& request, const DescribeClusterSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterSummaryOutcomeCallable DescribeClusterSummaryCallable(const Model::DescribeClusterSummaryRequest& request);

                /**
                 *查询某个资产的详情
                 * @param req DescribeComplianceAssetDetailInfoRequest
                 * @return DescribeComplianceAssetDetailInfoOutcome
                 */
                DescribeComplianceAssetDetailInfoOutcome DescribeComplianceAssetDetailInfo(const Model::DescribeComplianceAssetDetailInfoRequest &request);
                void DescribeComplianceAssetDetailInfoAsync(const Model::DescribeComplianceAssetDetailInfoRequest& request, const DescribeComplianceAssetDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceAssetDetailInfoOutcomeCallable DescribeComplianceAssetDetailInfoCallable(const Model::DescribeComplianceAssetDetailInfoRequest& request);

                /**
                 *查询某类资产的列表
                 * @param req DescribeComplianceAssetListRequest
                 * @return DescribeComplianceAssetListOutcome
                 */
                DescribeComplianceAssetListOutcome DescribeComplianceAssetList(const Model::DescribeComplianceAssetListRequest &request);
                void DescribeComplianceAssetListAsync(const Model::DescribeComplianceAssetListRequest& request, const DescribeComplianceAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceAssetListOutcomeCallable DescribeComplianceAssetListCallable(const Model::DescribeComplianceAssetListRequest& request);

                /**
                 *查询某资产下的检测项列表
                 * @param req DescribeComplianceAssetPolicyItemListRequest
                 * @return DescribeComplianceAssetPolicyItemListOutcome
                 */
                DescribeComplianceAssetPolicyItemListOutcome DescribeComplianceAssetPolicyItemList(const Model::DescribeComplianceAssetPolicyItemListRequest &request);
                void DescribeComplianceAssetPolicyItemListAsync(const Model::DescribeComplianceAssetPolicyItemListRequest& request, const DescribeComplianceAssetPolicyItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceAssetPolicyItemListOutcomeCallable DescribeComplianceAssetPolicyItemListCallable(const Model::DescribeComplianceAssetPolicyItemListRequest& request);

                /**
                 *查询合规检测的定时任务列表
                 * @param req DescribeCompliancePeriodTaskListRequest
                 * @return DescribeCompliancePeriodTaskListOutcome
                 */
                DescribeCompliancePeriodTaskListOutcome DescribeCompliancePeriodTaskList(const Model::DescribeCompliancePeriodTaskListRequest &request);
                void DescribeCompliancePeriodTaskListAsync(const Model::DescribeCompliancePeriodTaskListRequest& request, const DescribeCompliancePeriodTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCompliancePeriodTaskListOutcomeCallable DescribeCompliancePeriodTaskListCallable(const Model::DescribeCompliancePeriodTaskListRequest& request);

                /**
                 *按照 检测项 → 资产 的两级层次展开的第二层级：资产层级。
                 * @param req DescribeCompliancePolicyItemAffectedAssetListRequest
                 * @return DescribeCompliancePolicyItemAffectedAssetListOutcome
                 */
                DescribeCompliancePolicyItemAffectedAssetListOutcome DescribeCompliancePolicyItemAffectedAssetList(const Model::DescribeCompliancePolicyItemAffectedAssetListRequest &request);
                void DescribeCompliancePolicyItemAffectedAssetListAsync(const Model::DescribeCompliancePolicyItemAffectedAssetListRequest& request, const DescribeCompliancePolicyItemAffectedAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCompliancePolicyItemAffectedAssetListOutcomeCallable DescribeCompliancePolicyItemAffectedAssetListCallable(const Model::DescribeCompliancePolicyItemAffectedAssetListRequest& request);

                /**
                 *按照 检测项 → 资产 的两级层次展开的第一层级：检测项层级。
                 * @param req DescribeCompliancePolicyItemAffectedSummaryRequest
                 * @return DescribeCompliancePolicyItemAffectedSummaryOutcome
                 */
                DescribeCompliancePolicyItemAffectedSummaryOutcome DescribeCompliancePolicyItemAffectedSummary(const Model::DescribeCompliancePolicyItemAffectedSummaryRequest &request);
                void DescribeCompliancePolicyItemAffectedSummaryAsync(const Model::DescribeCompliancePolicyItemAffectedSummaryRequest& request, const DescribeCompliancePolicyItemAffectedSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCompliancePolicyItemAffectedSummaryOutcomeCallable DescribeCompliancePolicyItemAffectedSummaryCallable(const Model::DescribeCompliancePolicyItemAffectedSummaryRequest& request);

                /**
                 *按照 资产 → 检测项 二层结构展示的信息。这里查询第一层 资产的通过率汇总信息。
                 * @param req DescribeComplianceScanFailedAssetListRequest
                 * @return DescribeComplianceScanFailedAssetListOutcome
                 */
                DescribeComplianceScanFailedAssetListOutcome DescribeComplianceScanFailedAssetList(const Model::DescribeComplianceScanFailedAssetListRequest &request);
                void DescribeComplianceScanFailedAssetListAsync(const Model::DescribeComplianceScanFailedAssetListRequest& request, const DescribeComplianceScanFailedAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceScanFailedAssetListOutcomeCallable DescribeComplianceScanFailedAssetListCallable(const Model::DescribeComplianceScanFailedAssetListRequest& request);

                /**
                 *查询上次任务的资产通过率汇总信息
                 * @param req DescribeComplianceTaskAssetSummaryRequest
                 * @return DescribeComplianceTaskAssetSummaryOutcome
                 */
                DescribeComplianceTaskAssetSummaryOutcome DescribeComplianceTaskAssetSummary(const Model::DescribeComplianceTaskAssetSummaryRequest &request);
                void DescribeComplianceTaskAssetSummaryAsync(const Model::DescribeComplianceTaskAssetSummaryRequest& request, const DescribeComplianceTaskAssetSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceTaskAssetSummaryOutcomeCallable DescribeComplianceTaskAssetSummaryCallable(const Model::DescribeComplianceTaskAssetSummaryRequest& request);

                /**
                 *查询最近一次任务发现的检测项的汇总信息列表，按照 检测项 → 资产 的两级层次展开。
                 * @param req DescribeComplianceTaskPolicyItemSummaryListRequest
                 * @return DescribeComplianceTaskPolicyItemSummaryListOutcome
                 */
                DescribeComplianceTaskPolicyItemSummaryListOutcome DescribeComplianceTaskPolicyItemSummaryList(const Model::DescribeComplianceTaskPolicyItemSummaryListRequest &request);
                void DescribeComplianceTaskPolicyItemSummaryListAsync(const Model::DescribeComplianceTaskPolicyItemSummaryListRequest& request, const DescribeComplianceTaskPolicyItemSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceTaskPolicyItemSummaryListOutcomeCallable DescribeComplianceTaskPolicyItemSummaryListCallable(const Model::DescribeComplianceTaskPolicyItemSummaryListRequest& request);

                /**
                 *查询白名单列表
                 * @param req DescribeComplianceWhitelistItemListRequest
                 * @return DescribeComplianceWhitelistItemListOutcome
                 */
                DescribeComplianceWhitelistItemListOutcome DescribeComplianceWhitelistItemList(const Model::DescribeComplianceWhitelistItemListRequest &request);
                void DescribeComplianceWhitelistItemListAsync(const Model::DescribeComplianceWhitelistItemListRequest& request, const DescribeComplianceWhitelistItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceWhitelistItemListOutcomeCallable DescribeComplianceWhitelistItemListCallable(const Model::DescribeComplianceWhitelistItemListRequest& request);

                /**
                 *查询容器资产概览信息
                 * @param req DescribeContainerAssetSummaryRequest
                 * @return DescribeContainerAssetSummaryOutcome
                 */
                DescribeContainerAssetSummaryOutcome DescribeContainerAssetSummary(const Model::DescribeContainerAssetSummaryRequest &request);
                void DescribeContainerAssetSummaryAsync(const Model::DescribeContainerAssetSummaryRequest& request, const DescribeContainerAssetSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContainerAssetSummaryOutcomeCallable DescribeContainerAssetSummaryCallable(const Model::DescribeContainerAssetSummaryRequest& request);

                /**
                 *查询容器安全未处理事件信息
                 * @param req DescribeContainerSecEventSummaryRequest
                 * @return DescribeContainerSecEventSummaryOutcome
                 */
                DescribeContainerSecEventSummaryOutcome DescribeContainerSecEventSummary(const Model::DescribeContainerSecEventSummaryRequest &request);
                void DescribeContainerSecEventSummaryAsync(const Model::DescribeContainerSecEventSummaryRequest& request, const DescribeContainerSecEventSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContainerSecEventSummaryOutcomeCallable DescribeContainerSecEventSummaryCallable(const Model::DescribeContainerSecEventSummaryRequest& request);

                /**
                 *DescribeEscapeEventDetail  查询容器逃逸事件详情
                 * @param req DescribeEscapeEventDetailRequest
                 * @return DescribeEscapeEventDetailOutcome
                 */
                DescribeEscapeEventDetailOutcome DescribeEscapeEventDetail(const Model::DescribeEscapeEventDetailRequest &request);
                void DescribeEscapeEventDetailAsync(const Model::DescribeEscapeEventDetailRequest& request, const DescribeEscapeEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEscapeEventDetailOutcomeCallable DescribeEscapeEventDetailCallable(const Model::DescribeEscapeEventDetailRequest& request);

                /**
                 *DescribeEscapeEventInfo 查询容器逃逸事件列表
                 * @param req DescribeEscapeEventInfoRequest
                 * @return DescribeEscapeEventInfoOutcome
                 */
                DescribeEscapeEventInfoOutcome DescribeEscapeEventInfo(const Model::DescribeEscapeEventInfoRequest &request);
                void DescribeEscapeEventInfoAsync(const Model::DescribeEscapeEventInfoRequest& request, const DescribeEscapeEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEscapeEventInfoOutcomeCallable DescribeEscapeEventInfoCallable(const Model::DescribeEscapeEventInfoRequest& request);

                /**
                 *DescribeEscapeEventsExport  查询容器逃逸事件列表导出
                 * @param req DescribeEscapeEventsExportRequest
                 * @return DescribeEscapeEventsExportOutcome
                 */
                DescribeEscapeEventsExportOutcome DescribeEscapeEventsExport(const Model::DescribeEscapeEventsExportRequest &request);
                void DescribeEscapeEventsExportAsync(const Model::DescribeEscapeEventsExportRequest& request, const DescribeEscapeEventsExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEscapeEventsExportOutcomeCallable DescribeEscapeEventsExportCallable(const Model::DescribeEscapeEventsExportRequest& request);

                /**
                 *DescribeEscapeRuleInfo 查询容器逃逸扫描规则信息
                 * @param req DescribeEscapeRuleInfoRequest
                 * @return DescribeEscapeRuleInfoOutcome
                 */
                DescribeEscapeRuleInfoOutcome DescribeEscapeRuleInfo(const Model::DescribeEscapeRuleInfoRequest &request);
                void DescribeEscapeRuleInfoAsync(const Model::DescribeEscapeRuleInfoRequest& request, const DescribeEscapeRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEscapeRuleInfoOutcomeCallable DescribeEscapeRuleInfoCallable(const Model::DescribeEscapeRuleInfoRequest& request);

                /**
                 *DescribeEscapeSafeState 查询容器逃逸安全状态
                 * @param req DescribeEscapeSafeStateRequest
                 * @return DescribeEscapeSafeStateOutcome
                 */
                DescribeEscapeSafeStateOutcome DescribeEscapeSafeState(const Model::DescribeEscapeSafeStateRequest &request);
                void DescribeEscapeSafeStateAsync(const Model::DescribeEscapeSafeStateRequest& request, const DescribeEscapeSafeStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEscapeSafeStateOutcomeCallable DescribeEscapeSafeStateCallable(const Model::DescribeEscapeSafeStateRequest& request);

                /**
                 *查询导出任务的结果
                 * @param req DescribeExportJobResultRequest
                 * @return DescribeExportJobResultOutcome
                 */
                DescribeExportJobResultOutcome DescribeExportJobResult(const Model::DescribeExportJobResultRequest &request);
                void DescribeExportJobResultAsync(const Model::DescribeExportJobResultRequest& request, const DescribeExportJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExportJobResultOutcomeCallable DescribeExportJobResultCallable(const Model::DescribeExportJobResultRequest& request);

                /**
                 *DescribeImageAuthorizedInfo  查询镜像授权信息
                 * @param req DescribeImageAuthorizedInfoRequest
                 * @return DescribeImageAuthorizedInfoOutcome
                 */
                DescribeImageAuthorizedInfoOutcome DescribeImageAuthorizedInfo(const Model::DescribeImageAuthorizedInfoRequest &request);
                void DescribeImageAuthorizedInfoAsync(const Model::DescribeImageAuthorizedInfoRequest& request, const DescribeImageAuthorizedInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAuthorizedInfoOutcomeCallable DescribeImageAuthorizedInfoCallable(const Model::DescribeImageAuthorizedInfoRequest& request);

                /**
                 *镜像仓库查看定时任务
                 * @param req DescribeImageRegistryTimingScanTaskRequest
                 * @return DescribeImageRegistryTimingScanTaskOutcome
                 */
                DescribeImageRegistryTimingScanTaskOutcome DescribeImageRegistryTimingScanTask(const Model::DescribeImageRegistryTimingScanTaskRequest &request);
                void DescribeImageRegistryTimingScanTaskAsync(const Model::DescribeImageRegistryTimingScanTaskRequest& request, const DescribeImageRegistryTimingScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryTimingScanTaskOutcomeCallable DescribeImageRegistryTimingScanTaskCallable(const Model::DescribeImageRegistryTimingScanTaskRequest& request);

                /**
                 *查询本地镜像风险概览
                 * @param req DescribeImageRiskSummaryRequest
                 * @return DescribeImageRiskSummaryOutcome
                 */
                DescribeImageRiskSummaryOutcome DescribeImageRiskSummary(const Model::DescribeImageRiskSummaryRequest &request);
                void DescribeImageRiskSummaryAsync(const Model::DescribeImageRiskSummaryRequest& request, const DescribeImageRiskSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRiskSummaryOutcomeCallable DescribeImageRiskSummaryCallable(const Model::DescribeImageRiskSummaryRequest& request);

                /**
                 *查询容器安全本地镜像风险趋势
                 * @param req DescribeImageRiskTendencyRequest
                 * @return DescribeImageRiskTendencyOutcome
                 */
                DescribeImageRiskTendencyOutcome DescribeImageRiskTendency(const Model::DescribeImageRiskTendencyRequest &request);
                void DescribeImageRiskTendencyAsync(const Model::DescribeImageRiskTendencyRequest& request, const DescribeImageRiskTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRiskTendencyOutcomeCallable DescribeImageRiskTendencyCallable(const Model::DescribeImageRiskTendencyRequest& request);

                /**
                 *DescribeImageSimpleList 查询全部镜像列表
                 * @param req DescribeImageSimpleListRequest
                 * @return DescribeImageSimpleListOutcome
                 */
                DescribeImageSimpleListOutcome DescribeImageSimpleList(const Model::DescribeImageSimpleListRequest &request);
                void DescribeImageSimpleListAsync(const Model::DescribeImageSimpleListRequest& request, const DescribeImageSimpleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageSimpleListOutcomeCallable DescribeImageSimpleListCallable(const Model::DescribeImageSimpleListRequest& request);

                /**
                 *DescribePostPayDetail  查询后付费详情
                 * @param req DescribePostPayDetailRequest
                 * @return DescribePostPayDetailOutcome
                 */
                DescribePostPayDetailOutcome DescribePostPayDetail(const Model::DescribePostPayDetailRequest &request);
                void DescribePostPayDetailAsync(const Model::DescribePostPayDetailRequest& request, const DescribePostPayDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePostPayDetailOutcomeCallable DescribePostPayDetailCallable(const Model::DescribePostPayDetailRequest& request);

                /**
                 *DescribeProVersionInfo  查询专业版需购买信息
                 * @param req DescribeProVersionInfoRequest
                 * @return DescribeProVersionInfoOutcome
                 */
                DescribeProVersionInfoOutcome DescribeProVersionInfo(const Model::DescribeProVersionInfoRequest &request);
                void DescribeProVersionInfoAsync(const Model::DescribeProVersionInfoRequest& request, const DescribeProVersionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProVersionInfoOutcomeCallable DescribeProVersionInfoCallable(const Model::DescribeProVersionInfoRequest& request);

                /**
                 *DescribePurchaseStateInfo 查询容器安全服务已购买信息
                 * @param req DescribePurchaseStateInfoRequest
                 * @return DescribePurchaseStateInfoOutcome
                 */
                DescribePurchaseStateInfoOutcome DescribePurchaseStateInfo(const Model::DescribePurchaseStateInfoRequest &request);
                void DescribePurchaseStateInfoAsync(const Model::DescribePurchaseStateInfoRequest& request, const DescribePurchaseStateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurchaseStateInfoOutcomeCallable DescribePurchaseStateInfoCallable(const Model::DescribePurchaseStateInfoRequest& request);

                /**
                 *查询刷新任务
                 * @param req DescribeRefreshTaskRequest
                 * @return DescribeRefreshTaskOutcome
                 */
                DescribeRefreshTaskOutcome DescribeRefreshTask(const Model::DescribeRefreshTaskRequest &request);
                void DescribeRefreshTaskAsync(const Model::DescribeRefreshTaskRequest& request, const DescribeRefreshTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRefreshTaskOutcomeCallable DescribeRefreshTaskCallable(const Model::DescribeRefreshTaskRequest& request);

                /**
                 *查询运行时反弹shell事件详细信息
                 * @param req DescribeReverseShellDetailRequest
                 * @return DescribeReverseShellDetailOutcome
                 */
                DescribeReverseShellDetailOutcome DescribeReverseShellDetail(const Model::DescribeReverseShellDetailRequest &request);
                void DescribeReverseShellDetailAsync(const Model::DescribeReverseShellDetailRequest& request, const DescribeReverseShellDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReverseShellDetailOutcomeCallable DescribeReverseShellDetailCallable(const Model::DescribeReverseShellDetailRequest& request);

                /**
                 *查询运行时反弹shell事件列表信息
                 * @param req DescribeReverseShellEventsRequest
                 * @return DescribeReverseShellEventsOutcome
                 */
                DescribeReverseShellEventsOutcome DescribeReverseShellEvents(const Model::DescribeReverseShellEventsRequest &request);
                void DescribeReverseShellEventsAsync(const Model::DescribeReverseShellEventsRequest& request, const DescribeReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReverseShellEventsOutcomeCallable DescribeReverseShellEventsCallable(const Model::DescribeReverseShellEventsRequest& request);

                /**
                 *查询运行时反弹shell事件列表信息导出
                 * @param req DescribeReverseShellEventsExportRequest
                 * @return DescribeReverseShellEventsExportOutcome
                 */
                DescribeReverseShellEventsExportOutcome DescribeReverseShellEventsExport(const Model::DescribeReverseShellEventsExportRequest &request);
                void DescribeReverseShellEventsExportAsync(const Model::DescribeReverseShellEventsExportRequest& request, const DescribeReverseShellEventsExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReverseShellEventsExportOutcomeCallable DescribeReverseShellEventsExportCallable(const Model::DescribeReverseShellEventsExportRequest& request);

                /**
                 *查询运行时反弹shell白名单详细信息
                 * @param req DescribeReverseShellWhiteListDetailRequest
                 * @return DescribeReverseShellWhiteListDetailOutcome
                 */
                DescribeReverseShellWhiteListDetailOutcome DescribeReverseShellWhiteListDetail(const Model::DescribeReverseShellWhiteListDetailRequest &request);
                void DescribeReverseShellWhiteListDetailAsync(const Model::DescribeReverseShellWhiteListDetailRequest& request, const DescribeReverseShellWhiteListDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReverseShellWhiteListDetailOutcomeCallable DescribeReverseShellWhiteListDetailCallable(const Model::DescribeReverseShellWhiteListDetailRequest& request);

                /**
                 *查询运行时运行时反弹shell白名单列表信息
                 * @param req DescribeReverseShellWhiteListsRequest
                 * @return DescribeReverseShellWhiteListsOutcome
                 */
                DescribeReverseShellWhiteListsOutcome DescribeReverseShellWhiteLists(const Model::DescribeReverseShellWhiteListsRequest &request);
                void DescribeReverseShellWhiteListsAsync(const Model::DescribeReverseShellWhiteListsRequest& request, const DescribeReverseShellWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReverseShellWhiteListsOutcomeCallable DescribeReverseShellWhiteListsCallable(const Model::DescribeReverseShellWhiteListsRequest& request);

                /**
                 *查询最近一次任务发现的风险项的信息列表，支持根据特殊字段进行过滤
                 * @param req DescribeRiskListRequest
                 * @return DescribeRiskListOutcome
                 */
                DescribeRiskListOutcome DescribeRiskList(const Model::DescribeRiskListRequest &request);
                void DescribeRiskListAsync(const Model::DescribeRiskListRequest& request, const DescribeRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskListOutcomeCallable DescribeRiskListCallable(const Model::DescribeRiskListRequest& request);

                /**
                 *查询高危系统调用事件详细信息
                 * @param req DescribeRiskSyscallDetailRequest
                 * @return DescribeRiskSyscallDetailOutcome
                 */
                DescribeRiskSyscallDetailOutcome DescribeRiskSyscallDetail(const Model::DescribeRiskSyscallDetailRequest &request);
                void DescribeRiskSyscallDetailAsync(const Model::DescribeRiskSyscallDetailRequest& request, const DescribeRiskSyscallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskSyscallDetailOutcomeCallable DescribeRiskSyscallDetailCallable(const Model::DescribeRiskSyscallDetailRequest& request);

                /**
                 *查询运行时运行时高危系统调用列表信息
                 * @param req DescribeRiskSyscallEventsRequest
                 * @return DescribeRiskSyscallEventsOutcome
                 */
                DescribeRiskSyscallEventsOutcome DescribeRiskSyscallEvents(const Model::DescribeRiskSyscallEventsRequest &request);
                void DescribeRiskSyscallEventsAsync(const Model::DescribeRiskSyscallEventsRequest& request, const DescribeRiskSyscallEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskSyscallEventsOutcomeCallable DescribeRiskSyscallEventsCallable(const Model::DescribeRiskSyscallEventsRequest& request);

                /**
                 *运行时高危系统调用列表导出
                 * @param req DescribeRiskSyscallEventsExportRequest
                 * @return DescribeRiskSyscallEventsExportOutcome
                 */
                DescribeRiskSyscallEventsExportOutcome DescribeRiskSyscallEventsExport(const Model::DescribeRiskSyscallEventsExportRequest &request);
                void DescribeRiskSyscallEventsExportAsync(const Model::DescribeRiskSyscallEventsExportRequest& request, const DescribeRiskSyscallEventsExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskSyscallEventsExportOutcomeCallable DescribeRiskSyscallEventsExportCallable(const Model::DescribeRiskSyscallEventsExportRequest& request);

                /**
                 *查询运行时高危系统调用系统名称列表
                 * @param req DescribeRiskSyscallNamesRequest
                 * @return DescribeRiskSyscallNamesOutcome
                 */
                DescribeRiskSyscallNamesOutcome DescribeRiskSyscallNames(const Model::DescribeRiskSyscallNamesRequest &request);
                void DescribeRiskSyscallNamesAsync(const Model::DescribeRiskSyscallNamesRequest& request, const DescribeRiskSyscallNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskSyscallNamesOutcomeCallable DescribeRiskSyscallNamesCallable(const Model::DescribeRiskSyscallNamesRequest& request);

                /**
                 *查询运行时高危系统调用白名单详细信息
                 * @param req DescribeRiskSyscallWhiteListDetailRequest
                 * @return DescribeRiskSyscallWhiteListDetailOutcome
                 */
                DescribeRiskSyscallWhiteListDetailOutcome DescribeRiskSyscallWhiteListDetail(const Model::DescribeRiskSyscallWhiteListDetailRequest &request);
                void DescribeRiskSyscallWhiteListDetailAsync(const Model::DescribeRiskSyscallWhiteListDetailRequest& request, const DescribeRiskSyscallWhiteListDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskSyscallWhiteListDetailOutcomeCallable DescribeRiskSyscallWhiteListDetailCallable(const Model::DescribeRiskSyscallWhiteListDetailRequest& request);

                /**
                 *查询运行时高危系统调用白名单列表信息
                 * @param req DescribeRiskSyscallWhiteListsRequest
                 * @return DescribeRiskSyscallWhiteListsOutcome
                 */
                DescribeRiskSyscallWhiteListsOutcome DescribeRiskSyscallWhiteLists(const Model::DescribeRiskSyscallWhiteListsRequest &request);
                void DescribeRiskSyscallWhiteListsAsync(const Model::DescribeRiskSyscallWhiteListsRequest& request, const DescribeRiskSyscallWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskSyscallWhiteListsOutcomeCallable DescribeRiskSyscallWhiteListsCallable(const Model::DescribeRiskSyscallWhiteListsRequest& request);

                /**
                 *查询容器运行时安全事件趋势
                 * @param req DescribeSecEventsTendencyRequest
                 * @return DescribeSecEventsTendencyOutcome
                 */
                DescribeSecEventsTendencyOutcome DescribeSecEventsTendency(const Model::DescribeSecEventsTendencyRequest &request);
                void DescribeSecEventsTendencyAsync(const Model::DescribeSecEventsTendencyRequest& request, const DescribeSecEventsTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecEventsTendencyOutcomeCallable DescribeSecEventsTendencyCallable(const Model::DescribeSecEventsTendencyRequest& request);

                /**
                 *查询检查结果总览，返回受影响的节点数量，返回7天的数据，总共7个
                 * @param req DescribeTaskResultSummaryRequest
                 * @return DescribeTaskResultSummaryOutcome
                 */
                DescribeTaskResultSummaryOutcome DescribeTaskResultSummary(const Model::DescribeTaskResultSummaryRequest &request);
                void DescribeTaskResultSummaryAsync(const Model::DescribeTaskResultSummaryRequest& request, const DescribeTaskResultSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskResultSummaryOutcomeCallable DescribeTaskResultSummaryCallable(const Model::DescribeTaskResultSummaryRequest& request);

                /**
                 *查询未完成的刷新资产任务信息
                 * @param req DescribeUnfinishRefreshTaskRequest
                 * @return DescribeUnfinishRefreshTaskOutcome
                 */
                DescribeUnfinishRefreshTaskOutcome DescribeUnfinishRefreshTask(const Model::DescribeUnfinishRefreshTaskRequest &request);
                void DescribeUnfinishRefreshTaskAsync(const Model::DescribeUnfinishRefreshTaskRequest& request, const DescribeUnfinishRefreshTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnfinishRefreshTaskOutcomeCallable DescribeUnfinishRefreshTaskCallable(const Model::DescribeUnfinishRefreshTaskRequest& request);

                /**
                 *安全概览和集群安全页进入调用该接口，查询用户集群相关信息。
                 * @param req DescribeUserClusterRequest
                 * @return DescribeUserClusterOutcome
                 */
                DescribeUserClusterOutcome DescribeUserCluster(const Model::DescribeUserClusterRequest &request);
                void DescribeUserClusterAsync(const Model::DescribeUserClusterRequest& request, const DescribeUserClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserClusterOutcomeCallable DescribeUserClusterCallable(const Model::DescribeUserClusterRequest& request);

                /**
                 *DescribeValueAddedSrvInfo查询增值服务需购买信息
                 * @param req DescribeValueAddedSrvInfoRequest
                 * @return DescribeValueAddedSrvInfoOutcome
                 */
                DescribeValueAddedSrvInfoOutcome DescribeValueAddedSrvInfo(const Model::DescribeValueAddedSrvInfoRequest &request);
                void DescribeValueAddedSrvInfoAsync(const Model::DescribeValueAddedSrvInfoRequest& request, const DescribeValueAddedSrvInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeValueAddedSrvInfoOutcomeCallable DescribeValueAddedSrvInfoCallable(const Model::DescribeValueAddedSrvInfoRequest& request);

                /**
                 *运行时查询木马文件信息
                 * @param req DescribeVirusDetailRequest
                 * @return DescribeVirusDetailOutcome
                 */
                DescribeVirusDetailOutcome DescribeVirusDetail(const Model::DescribeVirusDetailRequest &request);
                void DescribeVirusDetailAsync(const Model::DescribeVirusDetailRequest& request, const DescribeVirusDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusDetailOutcomeCallable DescribeVirusDetailCallable(const Model::DescribeVirusDetailRequest& request);

                /**
                 *查询运行时文件查杀事件列表
                 * @param req DescribeVirusListRequest
                 * @return DescribeVirusListOutcome
                 */
                DescribeVirusListOutcome DescribeVirusList(const Model::DescribeVirusListRequest &request);
                void DescribeVirusListAsync(const Model::DescribeVirusListRequest& request, const DescribeVirusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusListOutcomeCallable DescribeVirusListCallable(const Model::DescribeVirusListRequest& request);

                /**
                 *运行时查询文件查杀实时监控设置
                 * @param req DescribeVirusMonitorSettingRequest
                 * @return DescribeVirusMonitorSettingOutcome
                 */
                DescribeVirusMonitorSettingOutcome DescribeVirusMonitorSetting(const Model::DescribeVirusMonitorSettingRequest &request);
                void DescribeVirusMonitorSettingAsync(const Model::DescribeVirusMonitorSettingRequest& request, const DescribeVirusMonitorSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusMonitorSettingOutcomeCallable DescribeVirusMonitorSettingCallable(const Model::DescribeVirusMonitorSettingRequest& request);

                /**
                 *运行时查询文件查杀设置
                 * @param req DescribeVirusScanSettingRequest
                 * @return DescribeVirusScanSettingOutcome
                 */
                DescribeVirusScanSettingOutcome DescribeVirusScanSetting(const Model::DescribeVirusScanSettingRequest &request);
                void DescribeVirusScanSettingAsync(const Model::DescribeVirusScanSettingRequest& request, const DescribeVirusScanSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusScanSettingOutcomeCallable DescribeVirusScanSettingCallable(const Model::DescribeVirusScanSettingRequest& request);

                /**
                 *运行时查询文件查杀任务状态
                 * @param req DescribeVirusScanTaskStatusRequest
                 * @return DescribeVirusScanTaskStatusOutcome
                 */
                DescribeVirusScanTaskStatusOutcome DescribeVirusScanTaskStatus(const Model::DescribeVirusScanTaskStatusRequest &request);
                void DescribeVirusScanTaskStatusAsync(const Model::DescribeVirusScanTaskStatusRequest& request, const DescribeVirusScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusScanTaskStatusOutcomeCallable DescribeVirusScanTaskStatusCallable(const Model::DescribeVirusScanTaskStatusRequest& request);

                /**
                 *运行时文件扫描超时设置查询
                 * @param req DescribeVirusScanTimeoutSettingRequest
                 * @return DescribeVirusScanTimeoutSettingOutcome
                 */
                DescribeVirusScanTimeoutSettingOutcome DescribeVirusScanTimeoutSetting(const Model::DescribeVirusScanTimeoutSettingRequest &request);
                void DescribeVirusScanTimeoutSettingAsync(const Model::DescribeVirusScanTimeoutSettingRequest& request, const DescribeVirusScanTimeoutSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusScanTimeoutSettingOutcomeCallable DescribeVirusScanTimeoutSettingCallable(const Model::DescribeVirusScanTimeoutSettingRequest& request);

                /**
                 *运行时查询木马概览信息
                 * @param req DescribeVirusSummaryRequest
                 * @return DescribeVirusSummaryOutcome
                 */
                DescribeVirusSummaryOutcome DescribeVirusSummary(const Model::DescribeVirusSummaryRequest &request);
                void DescribeVirusSummaryAsync(const Model::DescribeVirusSummaryRequest& request, const DescribeVirusSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusSummaryOutcomeCallable DescribeVirusSummaryCallable(const Model::DescribeVirusSummaryRequest& request);

                /**
                 *运行时查询文件查杀任务列表
                 * @param req DescribeVirusTaskListRequest
                 * @return DescribeVirusTaskListOutcome
                 */
                DescribeVirusTaskListOutcome DescribeVirusTaskList(const Model::DescribeVirusTaskListRequest &request);
                void DescribeVirusTaskListAsync(const Model::DescribeVirusTaskListRequest& request, const DescribeVirusTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusTaskListOutcomeCallable DescribeVirusTaskListCallable(const Model::DescribeVirusTaskListRequest& request);

                /**
                 *获取告警策略列表
                 * @param req DescribeWarningRulesRequest
                 * @return DescribeWarningRulesOutcome
                 */
                DescribeWarningRulesOutcome DescribeWarningRules(const Model::DescribeWarningRulesRequest &request);
                void DescribeWarningRulesAsync(const Model::DescribeWarningRulesRequest& request, const DescribeWarningRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWarningRulesOutcomeCallable DescribeWarningRulesCallable(const Model::DescribeWarningRulesRequest& request);

                /**
                 *运行时文件查杀事件列表导出
                 * @param req ExportVirusListRequest
                 * @return ExportVirusListOutcome
                 */
                ExportVirusListOutcome ExportVirusList(const Model::ExportVirusListRequest &request);
                void ExportVirusListAsync(const Model::ExportVirusListRequest& request, const ExportVirusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVirusListOutcomeCallable ExportVirusListCallable(const Model::ExportVirusListRequest& request);

                /**
                 *为客户初始化合规基线的使用环境，创建必要的数据和选项。
                 * @param req InitializeUserComplianceEnvironmentRequest
                 * @return InitializeUserComplianceEnvironmentOutcome
                 */
                InitializeUserComplianceEnvironmentOutcome InitializeUserComplianceEnvironment(const Model::InitializeUserComplianceEnvironmentRequest &request);
                void InitializeUserComplianceEnvironmentAsync(const Model::InitializeUserComplianceEnvironmentRequest& request, const InitializeUserComplianceEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InitializeUserComplianceEnvironmentOutcomeCallable InitializeUserComplianceEnvironmentCallable(const Model::InitializeUserComplianceEnvironmentRequest& request);

                /**
                 *修改运行时异常进程策略的开启关闭状态
                 * @param req ModifyAbnormalProcessRuleStatusRequest
                 * @return ModifyAbnormalProcessRuleStatusOutcome
                 */
                ModifyAbnormalProcessRuleStatusOutcome ModifyAbnormalProcessRuleStatus(const Model::ModifyAbnormalProcessRuleStatusRequest &request);
                void ModifyAbnormalProcessRuleStatusAsync(const Model::ModifyAbnormalProcessRuleStatusRequest& request, const ModifyAbnormalProcessRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAbnormalProcessRuleStatusOutcomeCallable ModifyAbnormalProcessRuleStatusCallable(const Model::ModifyAbnormalProcessRuleStatusRequest& request);

                /**
                 *修改异常进程事件的状态信息
                 * @param req ModifyAbnormalProcessStatusRequest
                 * @return ModifyAbnormalProcessStatusOutcome
                 */
                ModifyAbnormalProcessStatusOutcome ModifyAbnormalProcessStatus(const Model::ModifyAbnormalProcessStatusRequest &request);
                void ModifyAbnormalProcessStatusAsync(const Model::ModifyAbnormalProcessStatusRequest& request, const ModifyAbnormalProcessStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAbnormalProcessStatusOutcomeCallable ModifyAbnormalProcessStatusCallable(const Model::ModifyAbnormalProcessStatusRequest& request);

                /**
                 *修改运行时访问控制策略的状态，启用或者禁用
                 * @param req ModifyAccessControlRuleStatusRequest
                 * @return ModifyAccessControlRuleStatusOutcome
                 */
                ModifyAccessControlRuleStatusOutcome ModifyAccessControlRuleStatus(const Model::ModifyAccessControlRuleStatusRequest &request);
                void ModifyAccessControlRuleStatusAsync(const Model::ModifyAccessControlRuleStatusRequest& request, const ModifyAccessControlRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccessControlRuleStatusOutcomeCallable ModifyAccessControlRuleStatusCallable(const Model::ModifyAccessControlRuleStatusRequest& request);

                /**
                 *修改运行时访问控制事件状态信息
                 * @param req ModifyAccessControlStatusRequest
                 * @return ModifyAccessControlStatusOutcome
                 */
                ModifyAccessControlStatusOutcome ModifyAccessControlStatus(const Model::ModifyAccessControlStatusRequest &request);
                void ModifyAccessControlStatusAsync(const Model::ModifyAccessControlStatusRequest& request, const ModifyAccessControlStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccessControlStatusOutcomeCallable ModifyAccessControlStatusCallable(const Model::ModifyAccessControlStatusRequest& request);

                /**
                 *容器安全主机资产刷新
                 * @param req ModifyAssetRequest
                 * @return ModifyAssetOutcome
                 */
                ModifyAssetOutcome ModifyAsset(const Model::ModifyAssetRequest &request);
                void ModifyAssetAsync(const Model::ModifyAssetRequest& request, const ModifyAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetOutcomeCallable ModifyAssetCallable(const Model::ModifyAssetRequest& request);

                /**
                 *镜像仓库停止镜像扫描任务
                 * @param req ModifyAssetImageRegistryScanStopRequest
                 * @return ModifyAssetImageRegistryScanStopOutcome
                 */
                ModifyAssetImageRegistryScanStopOutcome ModifyAssetImageRegistryScanStop(const Model::ModifyAssetImageRegistryScanStopRequest &request);
                void ModifyAssetImageRegistryScanStopAsync(const Model::ModifyAssetImageRegistryScanStopRequest& request, const ModifyAssetImageRegistryScanStopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetImageRegistryScanStopOutcomeCallable ModifyAssetImageRegistryScanStopCallable(const Model::ModifyAssetImageRegistryScanStopRequest& request);

                /**
                 *镜像仓库停止镜像一键扫描任务
                 * @param req ModifyAssetImageRegistryScanStopOneKeyRequest
                 * @return ModifyAssetImageRegistryScanStopOneKeyOutcome
                 */
                ModifyAssetImageRegistryScanStopOneKeyOutcome ModifyAssetImageRegistryScanStopOneKey(const Model::ModifyAssetImageRegistryScanStopOneKeyRequest &request);
                void ModifyAssetImageRegistryScanStopOneKeyAsync(const Model::ModifyAssetImageRegistryScanStopOneKeyRequest& request, const ModifyAssetImageRegistryScanStopOneKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetImageRegistryScanStopOneKeyOutcomeCallable ModifyAssetImageRegistryScanStopOneKeyCallable(const Model::ModifyAssetImageRegistryScanStopOneKeyRequest& request);

                /**
                 *容器安全停止镜像扫描
                 * @param req ModifyAssetImageScanStopRequest
                 * @return ModifyAssetImageScanStopOutcome
                 */
                ModifyAssetImageScanStopOutcome ModifyAssetImageScanStop(const Model::ModifyAssetImageScanStopRequest &request);
                void ModifyAssetImageScanStopAsync(const Model::ModifyAssetImageScanStopRequest& request, const ModifyAssetImageScanStopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetImageScanStopOutcomeCallable ModifyAssetImageScanStopCallable(const Model::ModifyAssetImageScanStopRequest& request);

                /**
                 *修改定时任务的设置，包括检测周期、开启/禁用合规基准。
                 * @param req ModifyCompliancePeriodTaskRequest
                 * @return ModifyCompliancePeriodTaskOutcome
                 */
                ModifyCompliancePeriodTaskOutcome ModifyCompliancePeriodTask(const Model::ModifyCompliancePeriodTaskRequest &request);
                void ModifyCompliancePeriodTaskAsync(const Model::ModifyCompliancePeriodTaskRequest& request, const ModifyCompliancePeriodTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCompliancePeriodTaskOutcomeCallable ModifyCompliancePeriodTaskCallable(const Model::ModifyCompliancePeriodTaskRequest& request);

                /**
                 *ModifyEscapeEventStatus  修改容器逃逸扫描事件状态
                 * @param req ModifyEscapeEventStatusRequest
                 * @return ModifyEscapeEventStatusOutcome
                 */
                ModifyEscapeEventStatusOutcome ModifyEscapeEventStatus(const Model::ModifyEscapeEventStatusRequest &request);
                void ModifyEscapeEventStatusAsync(const Model::ModifyEscapeEventStatusRequest& request, const ModifyEscapeEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEscapeEventStatusOutcomeCallable ModifyEscapeEventStatusCallable(const Model::ModifyEscapeEventStatusRequest& request);

                /**
                 *ModifyEscapeRule  修改容器逃逸扫描规则信息
                 * @param req ModifyEscapeRuleRequest
                 * @return ModifyEscapeRuleOutcome
                 */
                ModifyEscapeRuleOutcome ModifyEscapeRule(const Model::ModifyEscapeRuleRequest &request);
                void ModifyEscapeRuleAsync(const Model::ModifyEscapeRuleRequest& request, const ModifyEscapeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEscapeRuleOutcomeCallable ModifyEscapeRuleCallable(const Model::ModifyEscapeRuleRequest& request);

                /**
                 *修改反弹shell事件的状态信息
                 * @param req ModifyReverseShellStatusRequest
                 * @return ModifyReverseShellStatusOutcome
                 */
                ModifyReverseShellStatusOutcome ModifyReverseShellStatus(const Model::ModifyReverseShellStatusRequest &request);
                void ModifyReverseShellStatusAsync(const Model::ModifyReverseShellStatusRequest& request, const ModifyReverseShellStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReverseShellStatusOutcomeCallable ModifyReverseShellStatusCallable(const Model::ModifyReverseShellStatusRequest& request);

                /**
                 *修改高危系统调用事件的状态信息
                 * @param req ModifyRiskSyscallStatusRequest
                 * @return ModifyRiskSyscallStatusOutcome
                 */
                ModifyRiskSyscallStatusOutcome ModifyRiskSyscallStatus(const Model::ModifyRiskSyscallStatusRequest &request);
                void ModifyRiskSyscallStatusAsync(const Model::ModifyRiskSyscallStatusRequest& request, const ModifyRiskSyscallStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskSyscallStatusOutcomeCallable ModifyRiskSyscallStatusCallable(const Model::ModifyRiskSyscallStatusRequest& request);

                /**
                 *运行时更新木马文件事件状态
                 * @param req ModifyVirusFileStatusRequest
                 * @return ModifyVirusFileStatusOutcome
                 */
                ModifyVirusFileStatusOutcome ModifyVirusFileStatus(const Model::ModifyVirusFileStatusRequest &request);
                void ModifyVirusFileStatusAsync(const Model::ModifyVirusFileStatusRequest& request, const ModifyVirusFileStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVirusFileStatusOutcomeCallable ModifyVirusFileStatusCallable(const Model::ModifyVirusFileStatusRequest& request);

                /**
                 *运行时更新文件查杀实时监控设置
                 * @param req ModifyVirusMonitorSettingRequest
                 * @return ModifyVirusMonitorSettingOutcome
                 */
                ModifyVirusMonitorSettingOutcome ModifyVirusMonitorSetting(const Model::ModifyVirusMonitorSettingRequest &request);
                void ModifyVirusMonitorSettingAsync(const Model::ModifyVirusMonitorSettingRequest& request, const ModifyVirusMonitorSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVirusMonitorSettingOutcomeCallable ModifyVirusMonitorSettingCallable(const Model::ModifyVirusMonitorSettingRequest& request);

                /**
                 *运行时更新文件查杀设置
                 * @param req ModifyVirusScanSettingRequest
                 * @return ModifyVirusScanSettingOutcome
                 */
                ModifyVirusScanSettingOutcome ModifyVirusScanSetting(const Model::ModifyVirusScanSettingRequest &request);
                void ModifyVirusScanSettingAsync(const Model::ModifyVirusScanSettingRequest& request, const ModifyVirusScanSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVirusScanSettingOutcomeCallable ModifyVirusScanSettingCallable(const Model::ModifyVirusScanSettingRequest& request);

                /**
                 *运行时文件扫描超时设置
                 * @param req ModifyVirusScanTimeoutSettingRequest
                 * @return ModifyVirusScanTimeoutSettingOutcome
                 */
                ModifyVirusScanTimeoutSettingOutcome ModifyVirusScanTimeoutSetting(const Model::ModifyVirusScanTimeoutSettingRequest &request);
                void ModifyVirusScanTimeoutSettingAsync(const Model::ModifyVirusScanTimeoutSettingRequest& request, const ModifyVirusScanTimeoutSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVirusScanTimeoutSettingOutcomeCallable ModifyVirusScanTimeoutSettingCallable(const Model::ModifyVirusScanTimeoutSettingRequest& request);

                /**
                 *删除单个镜像仓库详细信息
                 * @param req RemoveAssetImageRegistryRegistryDetailRequest
                 * @return RemoveAssetImageRegistryRegistryDetailOutcome
                 */
                RemoveAssetImageRegistryRegistryDetailOutcome RemoveAssetImageRegistryRegistryDetail(const Model::RemoveAssetImageRegistryRegistryDetailRequest &request);
                void RemoveAssetImageRegistryRegistryDetailAsync(const Model::RemoveAssetImageRegistryRegistryDetailRequest& request, const RemoveAssetImageRegistryRegistryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveAssetImageRegistryRegistryDetailOutcomeCallable RemoveAssetImageRegistryRegistryDetailCallable(const Model::RemoveAssetImageRegistryRegistryDetailRequest& request);

                /**
                 *RenewImageAuthorizeState   授权镜像扫描
                 * @param req RenewImageAuthorizeStateRequest
                 * @return RenewImageAuthorizeStateOutcome
                 */
                RenewImageAuthorizeStateOutcome RenewImageAuthorizeState(const Model::RenewImageAuthorizeStateRequest &request);
                void RenewImageAuthorizeStateAsync(const Model::RenewImageAuthorizeStateRequest& request, const RenewImageAuthorizeStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewImageAuthorizeStateOutcomeCallable RenewImageAuthorizeStateCallable(const Model::RenewImageAuthorizeStateRequest& request);

                /**
                 *重新检测选定的资产
                 * @param req ScanComplianceAssetsRequest
                 * @return ScanComplianceAssetsOutcome
                 */
                ScanComplianceAssetsOutcome ScanComplianceAssets(const Model::ScanComplianceAssetsRequest &request);
                void ScanComplianceAssetsAsync(const Model::ScanComplianceAssetsRequest& request, const ScanComplianceAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanComplianceAssetsOutcomeCallable ScanComplianceAssetsCallable(const Model::ScanComplianceAssetsRequest& request);

                /**
                 *用指定的检测项重新检测选定的资产，返回创建的合规检查任务的ID。
                 * @param req ScanComplianceAssetsByPolicyItemRequest
                 * @return ScanComplianceAssetsByPolicyItemOutcome
                 */
                ScanComplianceAssetsByPolicyItemOutcome ScanComplianceAssetsByPolicyItem(const Model::ScanComplianceAssetsByPolicyItemRequest &request);
                void ScanComplianceAssetsByPolicyItemAsync(const Model::ScanComplianceAssetsByPolicyItemRequest& request, const ScanComplianceAssetsByPolicyItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanComplianceAssetsByPolicyItemOutcomeCallable ScanComplianceAssetsByPolicyItemCallable(const Model::ScanComplianceAssetsByPolicyItemRequest& request);

                /**
                 *重新检测选的检测项下的所有资产，返回创建的合规检查任务的ID。
                 * @param req ScanCompliancePolicyItemsRequest
                 * @return ScanCompliancePolicyItemsOutcome
                 */
                ScanCompliancePolicyItemsOutcome ScanCompliancePolicyItems(const Model::ScanCompliancePolicyItemsRequest &request);
                void ScanCompliancePolicyItemsAsync(const Model::ScanCompliancePolicyItemsRequest& request, const ScanCompliancePolicyItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanCompliancePolicyItemsOutcomeCallable ScanCompliancePolicyItemsCallable(const Model::ScanCompliancePolicyItemsRequest& request);

                /**
                 *重新检测选定的检测失败的资产下的所有失败的检测项，返回创建的合规检查任务的ID。
                 * @param req ScanComplianceScanFailedAssetsRequest
                 * @return ScanComplianceScanFailedAssetsOutcome
                 */
                ScanComplianceScanFailedAssetsOutcome ScanComplianceScanFailedAssets(const Model::ScanComplianceScanFailedAssetsRequest &request);
                void ScanComplianceScanFailedAssetsAsync(const Model::ScanComplianceScanFailedAssetsRequest& request, const ScanComplianceScanFailedAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanComplianceScanFailedAssetsOutcomeCallable ScanComplianceScanFailedAssetsCallable(const Model::ScanComplianceScanFailedAssetsRequest& request);

                /**
                 *设置检测模式和自动检查
                 * @param req SetCheckModeRequest
                 * @return SetCheckModeOutcome
                 */
                SetCheckModeOutcome SetCheckMode(const Model::SetCheckModeRequest &request);
                void SetCheckModeAsync(const Model::SetCheckModeRequest& request, const SetCheckModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetCheckModeOutcomeCallable SetCheckModeCallable(const Model::SetCheckModeRequest& request);

                /**
                 *运行时停止木马查杀任务
                 * @param req StopVirusScanTaskRequest
                 * @return StopVirusScanTaskOutcome
                 */
                StopVirusScanTaskOutcome StopVirusScanTask(const Model::StopVirusScanTaskRequest &request);
                void StopVirusScanTaskAsync(const Model::StopVirusScanTaskRequest& request, const StopVirusScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopVirusScanTaskOutcomeCallable StopVirusScanTaskCallable(const Model::StopVirusScanTaskRequest& request);

                /**
                 *镜像仓库资产刷新
                 * @param req SyncAssetImageRegistryAssetRequest
                 * @return SyncAssetImageRegistryAssetOutcome
                 */
                SyncAssetImageRegistryAssetOutcome SyncAssetImageRegistryAsset(const Model::SyncAssetImageRegistryAssetRequest &request);
                void SyncAssetImageRegistryAssetAsync(const Model::SyncAssetImageRegistryAssetRequest& request, const SyncAssetImageRegistryAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncAssetImageRegistryAssetOutcomeCallable SyncAssetImageRegistryAssetCallable(const Model::SyncAssetImageRegistryAssetRequest& request);

                /**
                 *更新单个镜像仓库详细信息
                 * @param req UpdateAssetImageRegistryRegistryDetailRequest
                 * @return UpdateAssetImageRegistryRegistryDetailOutcome
                 */
                UpdateAssetImageRegistryRegistryDetailOutcome UpdateAssetImageRegistryRegistryDetail(const Model::UpdateAssetImageRegistryRegistryDetailRequest &request);
                void UpdateAssetImageRegistryRegistryDetailAsync(const Model::UpdateAssetImageRegistryRegistryDetailRequest& request, const UpdateAssetImageRegistryRegistryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAssetImageRegistryRegistryDetailOutcomeCallable UpdateAssetImageRegistryRegistryDetailCallable(const Model::UpdateAssetImageRegistryRegistryDetailRequest& request);

                /**
                 *镜像仓库更新定时任务
                 * @param req UpdateImageRegistryTimingScanTaskRequest
                 * @return UpdateImageRegistryTimingScanTaskOutcome
                 */
                UpdateImageRegistryTimingScanTaskOutcome UpdateImageRegistryTimingScanTask(const Model::UpdateImageRegistryTimingScanTaskRequest &request);
                void UpdateImageRegistryTimingScanTaskAsync(const Model::UpdateImageRegistryTimingScanTaskRequest& request, const UpdateImageRegistryTimingScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateImageRegistryTimingScanTaskOutcomeCallable UpdateImageRegistryTimingScanTaskCallable(const Model::UpdateImageRegistryTimingScanTaskRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_TCSSCLIENT_H_
