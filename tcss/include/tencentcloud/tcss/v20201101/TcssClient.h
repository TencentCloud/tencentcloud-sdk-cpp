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
#include <tencentcloud/tcss/v20201101/model/AddAndPublishNetworkFirewallPolicyDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddAndPublishNetworkFirewallPolicyDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddAndPublishNetworkFirewallPolicyYamlDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddAndPublishNetworkFirewallPolicyYamlDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddAssetImageRegistryRegistryDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddAssetImageRegistryRegistryDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddComplianceAssetPolicySetToWhitelistRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddComplianceAssetPolicySetToWhitelistResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddCompliancePolicyAssetSetToWhitelistRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddCompliancePolicyAssetSetToWhitelistResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddCompliancePolicyItemToWhitelistRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddCompliancePolicyItemToWhitelistResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddEditAbnormalProcessRuleRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddEditAbnormalProcessRuleResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddEditAccessControlRuleRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddEditAccessControlRuleResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddEditImageAutoAuthorizedRuleRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddEditImageAutoAuthorizedRuleResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddEditReverseShellWhiteListRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddEditReverseShellWhiteListResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddEditRiskSyscallWhiteListRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddEditRiskSyscallWhiteListResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddEditWarningRulesRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddEditWarningRulesResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddEscapeWhiteListRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddEscapeWhiteListResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddIgnoreVulRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddIgnoreVulResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddNetworkFirewallPolicyDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddNetworkFirewallPolicyDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/AddNetworkFirewallPolicyYamlDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/AddNetworkFirewallPolicyYamlDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/CheckNetworkFirewallPolicyYamlRequest.h>
#include <tencentcloud/tcss/v20201101/model/CheckNetworkFirewallPolicyYamlResponse.h>
#include <tencentcloud/tcss/v20201101/model/CheckRepeatAssetImageRegistryRequest.h>
#include <tencentcloud/tcss/v20201101/model/CheckRepeatAssetImageRegistryResponse.h>
#include <tencentcloud/tcss/v20201101/model/ConfirmNetworkFirewallPolicyRequest.h>
#include <tencentcloud/tcss/v20201101/model/ConfirmNetworkFirewallPolicyResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateAbnormalProcessRulesExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateAbnormalProcessRulesExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateAccessControlsRuleExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateAccessControlsRuleExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageRegistryScanTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageRegistryScanTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageRegistryScanTaskOneKeyRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageRegistryScanTaskOneKeyResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageScanSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageScanSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageScanTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageScanTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageVirusExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateAssetImageVirusExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateCheckComponentRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateCheckComponentResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateClusterCheckTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateClusterCheckTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateComplianceTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateComplianceTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateComponentExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateComponentExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateDefenceVulExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateDefenceVulExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateEmergencyVulExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateEmergencyVulExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateEscapeEventsExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateEscapeEventsExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateEscapeWhiteListExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateEscapeWhiteListExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateExportComplianceStatusListJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateExportComplianceStatusListJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateHostExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateHostExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateImageExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateImageExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateK8sApiAbnormalEventExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateK8sApiAbnormalEventExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateK8sApiAbnormalRuleExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateK8sApiAbnormalRuleExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateK8sApiAbnormalRuleInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateK8sApiAbnormalRuleInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateNetworkFirewallClusterRefreshRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateNetworkFirewallClusterRefreshResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateNetworkFirewallPolicyDiscoverRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateNetworkFirewallPolicyDiscoverResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateNetworkFirewallPublishRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateNetworkFirewallPublishResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateNetworkFirewallUndoPublishRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateNetworkFirewallUndoPublishResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateOrModifyPostPayCoresRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateOrModifyPostPayCoresResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateProcessEventsExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateProcessEventsExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateRefreshTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateRefreshTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateRiskDnsEventExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateRiskDnsEventExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateSearchTemplateRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateSearchTemplateResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateSystemVulExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateSystemVulExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateVirusScanAgainRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateVirusScanAgainResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateVirusScanTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateVirusScanTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateVulContainerExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateVulContainerExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateVulDefenceEventExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateVulDefenceEventExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateVulDefenceHostExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateVulDefenceHostExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateVulExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateVulExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateVulImageExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateVulImageExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateVulScanTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateVulScanTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/CreateWebVulExportJobRequest.h>
#include <tencentcloud/tcss/v20201101/model/CreateWebVulExportJobResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteAbnormalProcessRulesRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteAbnormalProcessRulesResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteAccessControlRulesRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteAccessControlRulesResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteComplianceAssetPolicySetFromWhitelistRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteComplianceAssetPolicySetFromWhitelistResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteCompliancePolicyAssetSetFromWhitelistRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteCompliancePolicyAssetSetFromWhitelistResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteCompliancePolicyItemFromWhitelistRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteCompliancePolicyItemFromWhitelistResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteEscapeWhiteListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteEscapeWhiteListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteIgnoreVulRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteIgnoreVulResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteK8sApiAbnormalRuleRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteK8sApiAbnormalRuleResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteMachineRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteMachineResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteNetworkFirewallPolicyDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteNetworkFirewallPolicyDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteRaspRulesRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteRaspRulesResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteReverseShellEventsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteReverseShellEventsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteReverseShellWhiteListsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteReverseShellWhiteListsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteRiskSyscallEventsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteRiskSyscallEventsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteRiskSyscallWhiteListsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteRiskSyscallWhiteListsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DeleteSearchTemplateRequest.h>
#include <tencentcloud/tcss/v20201101/model/DeleteSearchTemplateResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeABTestConfigRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeABTestConfigResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessEventTendencyRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessEventTendencyResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessEventsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessEventsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessLevelSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessLevelSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessRuleDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessRuleDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessRulesRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessRulesResponse.h>
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
#include <tencentcloud/tcss/v20201101/model/DescribeAffectedClusterCountRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAffectedClusterCountResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAffectedNodeListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAffectedNodeListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAffectedWorkloadListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAffectedWorkloadListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAgentDaemonSetCmdRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAgentDaemonSetCmdResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAgentInstallCommandRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAgentInstallCommandResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetAppServiceListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetAppServiceListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetClusterListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetClusterListResponse.h>
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
#include <tencentcloud/tcss/v20201101/model/DescribeAssetSuperNodeListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetSuperNodeListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetSyncLastTimeRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetSyncLastTimeResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetWebServiceListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAssetWebServiceListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAutoAuthorizedRuleHostRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeAutoAuthorizedRuleHostResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeCheckItemListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeCheckItemListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeClusterDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeClusterDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeClusterNodesRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeClusterNodesResponse.h>
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
#include <tencentcloud/tcss/v20201101/model/DescribeESAggregationsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeESAggregationsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeESHitsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeESHitsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEmergencyVulListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEmergencyVulListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeEventDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeEventDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeEventInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeEventInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeEventTendencyRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeEventTendencyResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeEventTypeSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeEventTypeSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeRuleInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeRuleInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeSafeStateRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeSafeStateResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeWhiteListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEscapeWhiteListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEventEscapeImageListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeEventEscapeImageListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeExportJobDownloadURLRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeExportJobDownloadURLResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeExportJobManageListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeExportJobManageListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeExportJobResultRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeExportJobResultResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageAuthorizedInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageAuthorizedInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageAutoAuthorizedLogListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageAutoAuthorizedLogListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageAutoAuthorizedRuleRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageAutoAuthorizedRuleResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageAutoAuthorizedTaskListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageAutoAuthorizedTaskListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageComponentListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageComponentListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageRegistryNamespaceListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageRegistryNamespaceListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageRegistryTimingScanTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageRegistryTimingScanTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageRiskSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageRiskSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageRiskTendencyRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageRiskTendencyResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageSimpleListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeImageSimpleListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeIndexListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeIndexListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeInspectionReportRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeInspectionReportResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeK8sApiAbnormalEventInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeK8sApiAbnormalEventInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeK8sApiAbnormalEventListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeK8sApiAbnormalEventListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeK8sApiAbnormalRuleInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeK8sApiAbnormalRuleInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeK8sApiAbnormalRuleListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeK8sApiAbnormalRuleListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeK8sApiAbnormalRuleScopeListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeK8sApiAbnormalRuleScopeListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeK8sApiAbnormalSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeK8sApiAbnormalSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeK8sApiAbnormalTendencyRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeK8sApiAbnormalTendencyResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeLogStorageStatisticRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeLogStorageStatisticResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallAuditRecordRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallAuditRecordResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallClusterListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallClusterListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallClusterRefreshStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallClusterRefreshStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallNamespaceLabelListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallNamespaceLabelListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallNamespaceListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallNamespaceListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallPodLabelsListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallPodLabelsListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallPolicyDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallPolicyDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallPolicyDiscoverRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallPolicyDiscoverResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallPolicyListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallPolicyListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallPolicyStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallPolicyStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallPolicyYamlDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallPolicyYamlDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNewestVulRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeNewestVulResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribePostPayDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribePostPayDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeProVersionInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeProVersionInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribePromotionActivityRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribePromotionActivityResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribePublicKeyRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribePublicKeyResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribePurchaseStateInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribePurchaseStateInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRaspRuleVulsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRaspRuleVulsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRaspRulesRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRaspRulesResponse.h>
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
#include <tencentcloud/tcss/v20201101/model/DescribeRiskDnsEventDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskDnsEventDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskDnsListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeRiskDnsListResponse.h>
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
#include <tencentcloud/tcss/v20201101/model/DescribeScanIgnoreVulListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeScanIgnoreVulListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSearchExportListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSearchExportListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSearchLogsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSearchLogsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSearchTemplatesRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSearchTemplatesResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecEventsTendencyRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecEventsTendencyResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogAlertMsgRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogAlertMsgResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogCleanSettingInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogCleanSettingInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogDeliveryClsOptionsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogDeliveryClsOptionsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogDeliveryClsSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogDeliveryClsSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogDeliveryKafkaOptionsRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogDeliveryKafkaOptionsResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogDeliveryKafkaSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogDeliveryKafkaSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogJoinObjectListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogJoinObjectListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogJoinTypeListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogJoinTypeListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogKafkaUINRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogKafkaUINResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogVasInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSecLogVasInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSuperNodePodListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSuperNodePodListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSupportDefenceVulRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSupportDefenceVulResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSystemVulListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeSystemVulListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeTaskResultSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeTaskResultSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeTcssSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeTcssSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeUnauthorizedCoresTendencyRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeUnauthorizedCoresTendencyResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeUnfinishRefreshTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeUnfinishRefreshTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeUserClusterRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeUserClusterResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeUserPodListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeUserPodListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeValueAddedSrvInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeValueAddedSrvInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusAutoIsolateSampleDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusAutoIsolateSampleDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusAutoIsolateSampleDownloadURLRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusAutoIsolateSampleDownloadURLResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusAutoIsolateSampleListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusAutoIsolateSampleListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusAutoIsolateSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusAutoIsolateSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusEventTendencyRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusEventTendencyResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusManualScanEstimateTimeoutRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusManualScanEstimateTimeoutResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusMonitorSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusMonitorSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusSampleDownloadUrlRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVirusSampleDownloadUrlResponse.h>
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
#include <tencentcloud/tcss/v20201101/model/DescribeVulContainerListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulContainerListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulDefenceEventRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulDefenceEventResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulDefenceEventDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulDefenceEventDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulDefenceEventTendencyRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulDefenceEventTendencyResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulDefenceHostRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulDefenceHostResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulDefencePluginRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulDefencePluginResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulDefenceSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulDefenceSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulIgnoreLocalImageListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulIgnoreLocalImageListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulIgnoreRegistryImageListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulIgnoreRegistryImageListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulImageListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulImageListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulImageSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulImageSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulLevelImageSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulLevelImageSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulLevelSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulLevelSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulRegistryImageListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulRegistryImageListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulScanAuthorizedImageSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulScanAuthorizedImageSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulScanInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulScanInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulScanLocalImageListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulScanLocalImageListResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulSummaryRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulSummaryResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulTendencyRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulTendencyResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulTopRankingRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeVulTopRankingResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeWarningRulesRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeWarningRulesResponse.h>
#include <tencentcloud/tcss/v20201101/model/DescribeWebVulListRequest.h>
#include <tencentcloud/tcss/v20201101/model/DescribeWebVulListResponse.h>
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
#include <tencentcloud/tcss/v20201101/model/ModifyContainerNetStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyContainerNetStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyEscapeEventStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyEscapeEventStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyEscapeRuleRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyEscapeRuleResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyEscapeWhiteListRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyEscapeWhiteListResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyImageAuthorizedRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyImageAuthorizedResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyK8sApiAbnormalEventStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyK8sApiAbnormalEventStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyK8sApiAbnormalRuleInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyK8sApiAbnormalRuleInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyK8sApiAbnormalRuleStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyK8sApiAbnormalRuleStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyRaspRulesRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyRaspRulesResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyReverseShellStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyReverseShellStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyRiskDnsEventStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyRiskDnsEventStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyRiskSyscallStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyRiskSyscallStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifySecLogCleanSettingInfoRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifySecLogCleanSettingInfoResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifySecLogDeliveryClsSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifySecLogDeliveryClsSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifySecLogDeliveryKafkaSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifySecLogDeliveryKafkaSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifySecLogJoinObjectsRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifySecLogJoinObjectsResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifySecLogJoinStateRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifySecLogJoinStateResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifySecLogKafkaUINRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifySecLogKafkaUINResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusAutoIsolateExampleSwitchRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusAutoIsolateExampleSwitchResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusAutoIsolateSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusAutoIsolateSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusFileStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusFileStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusMonitorSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusMonitorSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusScanSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusScanSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusScanTimeoutSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVirusScanTimeoutSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVulDefenceEventStatusRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVulDefenceEventStatusResponse.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVulDefenceSettingRequest.h>
#include <tencentcloud/tcss/v20201101/model/ModifyVulDefenceSettingResponse.h>
#include <tencentcloud/tcss/v20201101/model/OpenTcssTrialRequest.h>
#include <tencentcloud/tcss/v20201101/model/OpenTcssTrialResponse.h>
#include <tencentcloud/tcss/v20201101/model/RemoveAssetImageRegistryRegistryDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/RemoveAssetImageRegistryRegistryDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/RenewImageAuthorizeStateRequest.h>
#include <tencentcloud/tcss/v20201101/model/RenewImageAuthorizeStateResponse.h>
#include <tencentcloud/tcss/v20201101/model/ResetSecLogTopicConfigRequest.h>
#include <tencentcloud/tcss/v20201101/model/ResetSecLogTopicConfigResponse.h>
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
#include <tencentcloud/tcss/v20201101/model/StopVulScanTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/StopVulScanTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/SwitchImageAutoAuthorizedRuleRequest.h>
#include <tencentcloud/tcss/v20201101/model/SwitchImageAutoAuthorizedRuleResponse.h>
#include <tencentcloud/tcss/v20201101/model/SyncAssetImageRegistryAssetRequest.h>
#include <tencentcloud/tcss/v20201101/model/SyncAssetImageRegistryAssetResponse.h>
#include <tencentcloud/tcss/v20201101/model/UpdateAndPublishNetworkFirewallPolicyDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/UpdateAndPublishNetworkFirewallPolicyDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/UpdateAndPublishNetworkFirewallPolicyYamlDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/UpdateAssetImageRegistryRegistryDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/UpdateAssetImageRegistryRegistryDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/UpdateImageRegistryTimingScanTaskRequest.h>
#include <tencentcloud/tcss/v20201101/model/UpdateImageRegistryTimingScanTaskResponse.h>
#include <tencentcloud/tcss/v20201101/model/UpdateNetworkFirewallPolicyDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/UpdateNetworkFirewallPolicyDetailResponse.h>
#include <tencentcloud/tcss/v20201101/model/UpdateNetworkFirewallPolicyYamlDetailRequest.h>
#include <tencentcloud/tcss/v20201101/model/UpdateNetworkFirewallPolicyYamlDetailResponse.h>


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

                typedef Outcome<Core::Error, Model::AddAndPublishNetworkFirewallPolicyDetailResponse> AddAndPublishNetworkFirewallPolicyDetailOutcome;
                typedef std::future<AddAndPublishNetworkFirewallPolicyDetailOutcome> AddAndPublishNetworkFirewallPolicyDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddAndPublishNetworkFirewallPolicyDetailRequest&, AddAndPublishNetworkFirewallPolicyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAndPublishNetworkFirewallPolicyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::AddAndPublishNetworkFirewallPolicyYamlDetailResponse> AddAndPublishNetworkFirewallPolicyYamlDetailOutcome;
                typedef std::future<AddAndPublishNetworkFirewallPolicyYamlDetailOutcome> AddAndPublishNetworkFirewallPolicyYamlDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddAndPublishNetworkFirewallPolicyYamlDetailRequest&, AddAndPublishNetworkFirewallPolicyYamlDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAndPublishNetworkFirewallPolicyYamlDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::AddAssetImageRegistryRegistryDetailResponse> AddAssetImageRegistryRegistryDetailOutcome;
                typedef std::future<AddAssetImageRegistryRegistryDetailOutcome> AddAssetImageRegistryRegistryDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddAssetImageRegistryRegistryDetailRequest&, AddAssetImageRegistryRegistryDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAssetImageRegistryRegistryDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::AddComplianceAssetPolicySetToWhitelistResponse> AddComplianceAssetPolicySetToWhitelistOutcome;
                typedef std::future<AddComplianceAssetPolicySetToWhitelistOutcome> AddComplianceAssetPolicySetToWhitelistOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddComplianceAssetPolicySetToWhitelistRequest&, AddComplianceAssetPolicySetToWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddComplianceAssetPolicySetToWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::AddCompliancePolicyAssetSetToWhitelistResponse> AddCompliancePolicyAssetSetToWhitelistOutcome;
                typedef std::future<AddCompliancePolicyAssetSetToWhitelistOutcome> AddCompliancePolicyAssetSetToWhitelistOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddCompliancePolicyAssetSetToWhitelistRequest&, AddCompliancePolicyAssetSetToWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCompliancePolicyAssetSetToWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::AddCompliancePolicyItemToWhitelistResponse> AddCompliancePolicyItemToWhitelistOutcome;
                typedef std::future<AddCompliancePolicyItemToWhitelistOutcome> AddCompliancePolicyItemToWhitelistOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddCompliancePolicyItemToWhitelistRequest&, AddCompliancePolicyItemToWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCompliancePolicyItemToWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::AddEditAbnormalProcessRuleResponse> AddEditAbnormalProcessRuleOutcome;
                typedef std::future<AddEditAbnormalProcessRuleOutcome> AddEditAbnormalProcessRuleOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddEditAbnormalProcessRuleRequest&, AddEditAbnormalProcessRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEditAbnormalProcessRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddEditAccessControlRuleResponse> AddEditAccessControlRuleOutcome;
                typedef std::future<AddEditAccessControlRuleOutcome> AddEditAccessControlRuleOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddEditAccessControlRuleRequest&, AddEditAccessControlRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEditAccessControlRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddEditImageAutoAuthorizedRuleResponse> AddEditImageAutoAuthorizedRuleOutcome;
                typedef std::future<AddEditImageAutoAuthorizedRuleOutcome> AddEditImageAutoAuthorizedRuleOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddEditImageAutoAuthorizedRuleRequest&, AddEditImageAutoAuthorizedRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEditImageAutoAuthorizedRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddEditReverseShellWhiteListResponse> AddEditReverseShellWhiteListOutcome;
                typedef std::future<AddEditReverseShellWhiteListOutcome> AddEditReverseShellWhiteListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddEditReverseShellWhiteListRequest&, AddEditReverseShellWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEditReverseShellWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::AddEditRiskSyscallWhiteListResponse> AddEditRiskSyscallWhiteListOutcome;
                typedef std::future<AddEditRiskSyscallWhiteListOutcome> AddEditRiskSyscallWhiteListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddEditRiskSyscallWhiteListRequest&, AddEditRiskSyscallWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEditRiskSyscallWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::AddEditWarningRulesResponse> AddEditWarningRulesOutcome;
                typedef std::future<AddEditWarningRulesOutcome> AddEditWarningRulesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddEditWarningRulesRequest&, AddEditWarningRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEditWarningRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::AddEscapeWhiteListResponse> AddEscapeWhiteListOutcome;
                typedef std::future<AddEscapeWhiteListOutcome> AddEscapeWhiteListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddEscapeWhiteListRequest&, AddEscapeWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEscapeWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::AddIgnoreVulResponse> AddIgnoreVulOutcome;
                typedef std::future<AddIgnoreVulOutcome> AddIgnoreVulOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddIgnoreVulRequest&, AddIgnoreVulOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddIgnoreVulAsyncHandler;
                typedef Outcome<Core::Error, Model::AddNetworkFirewallPolicyDetailResponse> AddNetworkFirewallPolicyDetailOutcome;
                typedef std::future<AddNetworkFirewallPolicyDetailOutcome> AddNetworkFirewallPolicyDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddNetworkFirewallPolicyDetailRequest&, AddNetworkFirewallPolicyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddNetworkFirewallPolicyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::AddNetworkFirewallPolicyYamlDetailResponse> AddNetworkFirewallPolicyYamlDetailOutcome;
                typedef std::future<AddNetworkFirewallPolicyYamlDetailOutcome> AddNetworkFirewallPolicyYamlDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::AddNetworkFirewallPolicyYamlDetailRequest&, AddNetworkFirewallPolicyYamlDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddNetworkFirewallPolicyYamlDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckNetworkFirewallPolicyYamlResponse> CheckNetworkFirewallPolicyYamlOutcome;
                typedef std::future<CheckNetworkFirewallPolicyYamlOutcome> CheckNetworkFirewallPolicyYamlOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CheckNetworkFirewallPolicyYamlRequest&, CheckNetworkFirewallPolicyYamlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckNetworkFirewallPolicyYamlAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckRepeatAssetImageRegistryResponse> CheckRepeatAssetImageRegistryOutcome;
                typedef std::future<CheckRepeatAssetImageRegistryOutcome> CheckRepeatAssetImageRegistryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CheckRepeatAssetImageRegistryRequest&, CheckRepeatAssetImageRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckRepeatAssetImageRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::ConfirmNetworkFirewallPolicyResponse> ConfirmNetworkFirewallPolicyOutcome;
                typedef std::future<ConfirmNetworkFirewallPolicyOutcome> ConfirmNetworkFirewallPolicyOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ConfirmNetworkFirewallPolicyRequest&, ConfirmNetworkFirewallPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmNetworkFirewallPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAbnormalProcessRulesExportJobResponse> CreateAbnormalProcessRulesExportJobOutcome;
                typedef std::future<CreateAbnormalProcessRulesExportJobOutcome> CreateAbnormalProcessRulesExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateAbnormalProcessRulesExportJobRequest&, CreateAbnormalProcessRulesExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAbnormalProcessRulesExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccessControlsRuleExportJobResponse> CreateAccessControlsRuleExportJobOutcome;
                typedef std::future<CreateAccessControlsRuleExportJobOutcome> CreateAccessControlsRuleExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateAccessControlsRuleExportJobRequest&, CreateAccessControlsRuleExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessControlsRuleExportJobAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateAssetImageVirusExportJobResponse> CreateAssetImageVirusExportJobOutcome;
                typedef std::future<CreateAssetImageVirusExportJobOutcome> CreateAssetImageVirusExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateAssetImageVirusExportJobRequest&, CreateAssetImageVirusExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetImageVirusExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCheckComponentResponse> CreateCheckComponentOutcome;
                typedef std::future<CreateCheckComponentOutcome> CreateCheckComponentOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateCheckComponentRequest&, CreateCheckComponentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCheckComponentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterCheckTaskResponse> CreateClusterCheckTaskOutcome;
                typedef std::future<CreateClusterCheckTaskOutcome> CreateClusterCheckTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateClusterCheckTaskRequest&, CreateClusterCheckTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterCheckTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateComplianceTaskResponse> CreateComplianceTaskOutcome;
                typedef std::future<CreateComplianceTaskOutcome> CreateComplianceTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateComplianceTaskRequest&, CreateComplianceTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateComplianceTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateComponentExportJobResponse> CreateComponentExportJobOutcome;
                typedef std::future<CreateComponentExportJobOutcome> CreateComponentExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateComponentExportJobRequest&, CreateComponentExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateComponentExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDefenceVulExportJobResponse> CreateDefenceVulExportJobOutcome;
                typedef std::future<CreateDefenceVulExportJobOutcome> CreateDefenceVulExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateDefenceVulExportJobRequest&, CreateDefenceVulExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDefenceVulExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmergencyVulExportJobResponse> CreateEmergencyVulExportJobOutcome;
                typedef std::future<CreateEmergencyVulExportJobOutcome> CreateEmergencyVulExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateEmergencyVulExportJobRequest&, CreateEmergencyVulExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmergencyVulExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEscapeEventsExportJobResponse> CreateEscapeEventsExportJobOutcome;
                typedef std::future<CreateEscapeEventsExportJobOutcome> CreateEscapeEventsExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateEscapeEventsExportJobRequest&, CreateEscapeEventsExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEscapeEventsExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEscapeWhiteListExportJobResponse> CreateEscapeWhiteListExportJobOutcome;
                typedef std::future<CreateEscapeWhiteListExportJobOutcome> CreateEscapeWhiteListExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateEscapeWhiteListExportJobRequest&, CreateEscapeWhiteListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEscapeWhiteListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExportComplianceStatusListJobResponse> CreateExportComplianceStatusListJobOutcome;
                typedef std::future<CreateExportComplianceStatusListJobOutcome> CreateExportComplianceStatusListJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateExportComplianceStatusListJobRequest&, CreateExportComplianceStatusListJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExportComplianceStatusListJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHostExportJobResponse> CreateHostExportJobOutcome;
                typedef std::future<CreateHostExportJobOutcome> CreateHostExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateHostExportJobRequest&, CreateHostExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHostExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageExportJobResponse> CreateImageExportJobOutcome;
                typedef std::future<CreateImageExportJobOutcome> CreateImageExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateImageExportJobRequest&, CreateImageExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateK8sApiAbnormalEventExportJobResponse> CreateK8sApiAbnormalEventExportJobOutcome;
                typedef std::future<CreateK8sApiAbnormalEventExportJobOutcome> CreateK8sApiAbnormalEventExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateK8sApiAbnormalEventExportJobRequest&, CreateK8sApiAbnormalEventExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateK8sApiAbnormalEventExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateK8sApiAbnormalRuleExportJobResponse> CreateK8sApiAbnormalRuleExportJobOutcome;
                typedef std::future<CreateK8sApiAbnormalRuleExportJobOutcome> CreateK8sApiAbnormalRuleExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateK8sApiAbnormalRuleExportJobRequest&, CreateK8sApiAbnormalRuleExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateK8sApiAbnormalRuleExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateK8sApiAbnormalRuleInfoResponse> CreateK8sApiAbnormalRuleInfoOutcome;
                typedef std::future<CreateK8sApiAbnormalRuleInfoOutcome> CreateK8sApiAbnormalRuleInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateK8sApiAbnormalRuleInfoRequest&, CreateK8sApiAbnormalRuleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateK8sApiAbnormalRuleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetworkFirewallClusterRefreshResponse> CreateNetworkFirewallClusterRefreshOutcome;
                typedef std::future<CreateNetworkFirewallClusterRefreshOutcome> CreateNetworkFirewallClusterRefreshOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateNetworkFirewallClusterRefreshRequest&, CreateNetworkFirewallClusterRefreshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkFirewallClusterRefreshAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetworkFirewallPolicyDiscoverResponse> CreateNetworkFirewallPolicyDiscoverOutcome;
                typedef std::future<CreateNetworkFirewallPolicyDiscoverOutcome> CreateNetworkFirewallPolicyDiscoverOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateNetworkFirewallPolicyDiscoverRequest&, CreateNetworkFirewallPolicyDiscoverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkFirewallPolicyDiscoverAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetworkFirewallPublishResponse> CreateNetworkFirewallPublishOutcome;
                typedef std::future<CreateNetworkFirewallPublishOutcome> CreateNetworkFirewallPublishOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateNetworkFirewallPublishRequest&, CreateNetworkFirewallPublishOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkFirewallPublishAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetworkFirewallUndoPublishResponse> CreateNetworkFirewallUndoPublishOutcome;
                typedef std::future<CreateNetworkFirewallUndoPublishOutcome> CreateNetworkFirewallUndoPublishOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateNetworkFirewallUndoPublishRequest&, CreateNetworkFirewallUndoPublishOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkFirewallUndoPublishAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrModifyPostPayCoresResponse> CreateOrModifyPostPayCoresOutcome;
                typedef std::future<CreateOrModifyPostPayCoresOutcome> CreateOrModifyPostPayCoresOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateOrModifyPostPayCoresRequest&, CreateOrModifyPostPayCoresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrModifyPostPayCoresAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProcessEventsExportJobResponse> CreateProcessEventsExportJobOutcome;
                typedef std::future<CreateProcessEventsExportJobOutcome> CreateProcessEventsExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateProcessEventsExportJobRequest&, CreateProcessEventsExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProcessEventsExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRefreshTaskResponse> CreateRefreshTaskOutcome;
                typedef std::future<CreateRefreshTaskOutcome> CreateRefreshTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateRefreshTaskRequest&, CreateRefreshTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRefreshTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRiskDnsEventExportJobResponse> CreateRiskDnsEventExportJobOutcome;
                typedef std::future<CreateRiskDnsEventExportJobOutcome> CreateRiskDnsEventExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateRiskDnsEventExportJobRequest&, CreateRiskDnsEventExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRiskDnsEventExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSearchTemplateResponse> CreateSearchTemplateOutcome;
                typedef std::future<CreateSearchTemplateOutcome> CreateSearchTemplateOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateSearchTemplateRequest&, CreateSearchTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSearchTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSystemVulExportJobResponse> CreateSystemVulExportJobOutcome;
                typedef std::future<CreateSystemVulExportJobOutcome> CreateSystemVulExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateSystemVulExportJobRequest&, CreateSystemVulExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSystemVulExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVirusScanAgainResponse> CreateVirusScanAgainOutcome;
                typedef std::future<CreateVirusScanAgainOutcome> CreateVirusScanAgainOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateVirusScanAgainRequest&, CreateVirusScanAgainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVirusScanAgainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVirusScanTaskResponse> CreateVirusScanTaskOutcome;
                typedef std::future<CreateVirusScanTaskOutcome> CreateVirusScanTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateVirusScanTaskRequest&, CreateVirusScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVirusScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulContainerExportJobResponse> CreateVulContainerExportJobOutcome;
                typedef std::future<CreateVulContainerExportJobOutcome> CreateVulContainerExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateVulContainerExportJobRequest&, CreateVulContainerExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulContainerExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulDefenceEventExportJobResponse> CreateVulDefenceEventExportJobOutcome;
                typedef std::future<CreateVulDefenceEventExportJobOutcome> CreateVulDefenceEventExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateVulDefenceEventExportJobRequest&, CreateVulDefenceEventExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulDefenceEventExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulDefenceHostExportJobResponse> CreateVulDefenceHostExportJobOutcome;
                typedef std::future<CreateVulDefenceHostExportJobOutcome> CreateVulDefenceHostExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateVulDefenceHostExportJobRequest&, CreateVulDefenceHostExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulDefenceHostExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulExportJobResponse> CreateVulExportJobOutcome;
                typedef std::future<CreateVulExportJobOutcome> CreateVulExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateVulExportJobRequest&, CreateVulExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulImageExportJobResponse> CreateVulImageExportJobOutcome;
                typedef std::future<CreateVulImageExportJobOutcome> CreateVulImageExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateVulImageExportJobRequest&, CreateVulImageExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulImageExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulScanTaskResponse> CreateVulScanTaskOutcome;
                typedef std::future<CreateVulScanTaskOutcome> CreateVulScanTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateVulScanTaskRequest&, CreateVulScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWebVulExportJobResponse> CreateWebVulExportJobOutcome;
                typedef std::future<CreateWebVulExportJobOutcome> CreateWebVulExportJobOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::CreateWebVulExportJobRequest&, CreateWebVulExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebVulExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAbnormalProcessRulesResponse> DeleteAbnormalProcessRulesOutcome;
                typedef std::future<DeleteAbnormalProcessRulesOutcome> DeleteAbnormalProcessRulesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteAbnormalProcessRulesRequest&, DeleteAbnormalProcessRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAbnormalProcessRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccessControlRulesResponse> DeleteAccessControlRulesOutcome;
                typedef std::future<DeleteAccessControlRulesOutcome> DeleteAccessControlRulesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteAccessControlRulesRequest&, DeleteAccessControlRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessControlRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteComplianceAssetPolicySetFromWhitelistResponse> DeleteComplianceAssetPolicySetFromWhitelistOutcome;
                typedef std::future<DeleteComplianceAssetPolicySetFromWhitelistOutcome> DeleteComplianceAssetPolicySetFromWhitelistOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteComplianceAssetPolicySetFromWhitelistRequest&, DeleteComplianceAssetPolicySetFromWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteComplianceAssetPolicySetFromWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCompliancePolicyAssetSetFromWhitelistResponse> DeleteCompliancePolicyAssetSetFromWhitelistOutcome;
                typedef std::future<DeleteCompliancePolicyAssetSetFromWhitelistOutcome> DeleteCompliancePolicyAssetSetFromWhitelistOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteCompliancePolicyAssetSetFromWhitelistRequest&, DeleteCompliancePolicyAssetSetFromWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCompliancePolicyAssetSetFromWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCompliancePolicyItemFromWhitelistResponse> DeleteCompliancePolicyItemFromWhitelistOutcome;
                typedef std::future<DeleteCompliancePolicyItemFromWhitelistOutcome> DeleteCompliancePolicyItemFromWhitelistOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteCompliancePolicyItemFromWhitelistRequest&, DeleteCompliancePolicyItemFromWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCompliancePolicyItemFromWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEscapeWhiteListResponse> DeleteEscapeWhiteListOutcome;
                typedef std::future<DeleteEscapeWhiteListOutcome> DeleteEscapeWhiteListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteEscapeWhiteListRequest&, DeleteEscapeWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEscapeWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIgnoreVulResponse> DeleteIgnoreVulOutcome;
                typedef std::future<DeleteIgnoreVulOutcome> DeleteIgnoreVulOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteIgnoreVulRequest&, DeleteIgnoreVulOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIgnoreVulAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteK8sApiAbnormalRuleResponse> DeleteK8sApiAbnormalRuleOutcome;
                typedef std::future<DeleteK8sApiAbnormalRuleOutcome> DeleteK8sApiAbnormalRuleOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteK8sApiAbnormalRuleRequest&, DeleteK8sApiAbnormalRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteK8sApiAbnormalRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineResponse> DeleteMachineOutcome;
                typedef std::future<DeleteMachineOutcome> DeleteMachineOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteMachineRequest&, DeleteMachineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNetworkFirewallPolicyDetailResponse> DeleteNetworkFirewallPolicyDetailOutcome;
                typedef std::future<DeleteNetworkFirewallPolicyDetailOutcome> DeleteNetworkFirewallPolicyDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteNetworkFirewallPolicyDetailRequest&, DeleteNetworkFirewallPolicyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkFirewallPolicyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRaspRulesResponse> DeleteRaspRulesOutcome;
                typedef std::future<DeleteRaspRulesOutcome> DeleteRaspRulesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteRaspRulesRequest&, DeleteRaspRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRaspRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReverseShellEventsResponse> DeleteReverseShellEventsOutcome;
                typedef std::future<DeleteReverseShellEventsOutcome> DeleteReverseShellEventsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteReverseShellEventsRequest&, DeleteReverseShellEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReverseShellEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReverseShellWhiteListsResponse> DeleteReverseShellWhiteListsOutcome;
                typedef std::future<DeleteReverseShellWhiteListsOutcome> DeleteReverseShellWhiteListsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteReverseShellWhiteListsRequest&, DeleteReverseShellWhiteListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReverseShellWhiteListsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRiskSyscallEventsResponse> DeleteRiskSyscallEventsOutcome;
                typedef std::future<DeleteRiskSyscallEventsOutcome> DeleteRiskSyscallEventsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteRiskSyscallEventsRequest&, DeleteRiskSyscallEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRiskSyscallEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRiskSyscallWhiteListsResponse> DeleteRiskSyscallWhiteListsOutcome;
                typedef std::future<DeleteRiskSyscallWhiteListsOutcome> DeleteRiskSyscallWhiteListsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteRiskSyscallWhiteListsRequest&, DeleteRiskSyscallWhiteListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRiskSyscallWhiteListsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSearchTemplateResponse> DeleteSearchTemplateOutcome;
                typedef std::future<DeleteSearchTemplateOutcome> DeleteSearchTemplateOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DeleteSearchTemplateRequest&, DeleteSearchTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSearchTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeABTestConfigResponse> DescribeABTestConfigOutcome;
                typedef std::future<DescribeABTestConfigOutcome> DescribeABTestConfigOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeABTestConfigRequest&, DescribeABTestConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeABTestConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalProcessDetailResponse> DescribeAbnormalProcessDetailOutcome;
                typedef std::future<DescribeAbnormalProcessDetailOutcome> DescribeAbnormalProcessDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAbnormalProcessDetailRequest&, DescribeAbnormalProcessDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalProcessDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalProcessEventTendencyResponse> DescribeAbnormalProcessEventTendencyOutcome;
                typedef std::future<DescribeAbnormalProcessEventTendencyOutcome> DescribeAbnormalProcessEventTendencyOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAbnormalProcessEventTendencyRequest&, DescribeAbnormalProcessEventTendencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalProcessEventTendencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalProcessEventsResponse> DescribeAbnormalProcessEventsOutcome;
                typedef std::future<DescribeAbnormalProcessEventsOutcome> DescribeAbnormalProcessEventsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAbnormalProcessEventsRequest&, DescribeAbnormalProcessEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalProcessEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalProcessLevelSummaryResponse> DescribeAbnormalProcessLevelSummaryOutcome;
                typedef std::future<DescribeAbnormalProcessLevelSummaryOutcome> DescribeAbnormalProcessLevelSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAbnormalProcessLevelSummaryRequest&, DescribeAbnormalProcessLevelSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalProcessLevelSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalProcessRuleDetailResponse> DescribeAbnormalProcessRuleDetailOutcome;
                typedef std::future<DescribeAbnormalProcessRuleDetailOutcome> DescribeAbnormalProcessRuleDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAbnormalProcessRuleDetailRequest&, DescribeAbnormalProcessRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalProcessRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalProcessRulesResponse> DescribeAbnormalProcessRulesOutcome;
                typedef std::future<DescribeAbnormalProcessRulesOutcome> DescribeAbnormalProcessRulesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAbnormalProcessRulesRequest&, DescribeAbnormalProcessRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalProcessRulesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeAffectedClusterCountResponse> DescribeAffectedClusterCountOutcome;
                typedef std::future<DescribeAffectedClusterCountOutcome> DescribeAffectedClusterCountOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAffectedClusterCountRequest&, DescribeAffectedClusterCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAffectedClusterCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAffectedNodeListResponse> DescribeAffectedNodeListOutcome;
                typedef std::future<DescribeAffectedNodeListOutcome> DescribeAffectedNodeListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAffectedNodeListRequest&, DescribeAffectedNodeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAffectedNodeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAffectedWorkloadListResponse> DescribeAffectedWorkloadListOutcome;
                typedef std::future<DescribeAffectedWorkloadListOutcome> DescribeAffectedWorkloadListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAffectedWorkloadListRequest&, DescribeAffectedWorkloadListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAffectedWorkloadListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentDaemonSetCmdResponse> DescribeAgentDaemonSetCmdOutcome;
                typedef std::future<DescribeAgentDaemonSetCmdOutcome> DescribeAgentDaemonSetCmdOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAgentDaemonSetCmdRequest&, DescribeAgentDaemonSetCmdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentDaemonSetCmdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentInstallCommandResponse> DescribeAgentInstallCommandOutcome;
                typedef std::future<DescribeAgentInstallCommandOutcome> DescribeAgentInstallCommandOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAgentInstallCommandRequest&, DescribeAgentInstallCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentInstallCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetAppServiceListResponse> DescribeAssetAppServiceListOutcome;
                typedef std::future<DescribeAssetAppServiceListOutcome> DescribeAssetAppServiceListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetAppServiceListRequest&, DescribeAssetAppServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetAppServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetClusterListResponse> DescribeAssetClusterListOutcome;
                typedef std::future<DescribeAssetClusterListOutcome> DescribeAssetClusterListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetClusterListRequest&, DescribeAssetClusterListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetClusterListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeAssetSuperNodeListResponse> DescribeAssetSuperNodeListOutcome;
                typedef std::future<DescribeAssetSuperNodeListOutcome> DescribeAssetSuperNodeListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetSuperNodeListRequest&, DescribeAssetSuperNodeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetSuperNodeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetSyncLastTimeResponse> DescribeAssetSyncLastTimeOutcome;
                typedef std::future<DescribeAssetSyncLastTimeOutcome> DescribeAssetSyncLastTimeOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetSyncLastTimeRequest&, DescribeAssetSyncLastTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetSyncLastTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebServiceListResponse> DescribeAssetWebServiceListOutcome;
                typedef std::future<DescribeAssetWebServiceListOutcome> DescribeAssetWebServiceListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAssetWebServiceListRequest&, DescribeAssetWebServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoAuthorizedRuleHostResponse> DescribeAutoAuthorizedRuleHostOutcome;
                typedef std::future<DescribeAutoAuthorizedRuleHostOutcome> DescribeAutoAuthorizedRuleHostOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeAutoAuthorizedRuleHostRequest&, DescribeAutoAuthorizedRuleHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoAuthorizedRuleHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCheckItemListResponse> DescribeCheckItemListOutcome;
                typedef std::future<DescribeCheckItemListOutcome> DescribeCheckItemListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeCheckItemListRequest&, DescribeCheckItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterDetailResponse> DescribeClusterDetailOutcome;
                typedef std::future<DescribeClusterDetailOutcome> DescribeClusterDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeClusterDetailRequest&, DescribeClusterDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterNodesResponse> DescribeClusterNodesOutcome;
                typedef std::future<DescribeClusterNodesOutcome> DescribeClusterNodesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeClusterNodesRequest&, DescribeClusterNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeESAggregationsResponse> DescribeESAggregationsOutcome;
                typedef std::future<DescribeESAggregationsOutcome> DescribeESAggregationsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeESAggregationsRequest&, DescribeESAggregationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeESAggregationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeESHitsResponse> DescribeESHitsOutcome;
                typedef std::future<DescribeESHitsOutcome> DescribeESHitsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeESHitsRequest&, DescribeESHitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeESHitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEmergencyVulListResponse> DescribeEmergencyVulListOutcome;
                typedef std::future<DescribeEmergencyVulListOutcome> DescribeEmergencyVulListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeEmergencyVulListRequest&, DescribeEmergencyVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmergencyVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEscapeEventDetailResponse> DescribeEscapeEventDetailOutcome;
                typedef std::future<DescribeEscapeEventDetailOutcome> DescribeEscapeEventDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeEscapeEventDetailRequest&, DescribeEscapeEventDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEscapeEventDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEscapeEventInfoResponse> DescribeEscapeEventInfoOutcome;
                typedef std::future<DescribeEscapeEventInfoOutcome> DescribeEscapeEventInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeEscapeEventInfoRequest&, DescribeEscapeEventInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEscapeEventInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEscapeEventTendencyResponse> DescribeEscapeEventTendencyOutcome;
                typedef std::future<DescribeEscapeEventTendencyOutcome> DescribeEscapeEventTendencyOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeEscapeEventTendencyRequest&, DescribeEscapeEventTendencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEscapeEventTendencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEscapeEventTypeSummaryResponse> DescribeEscapeEventTypeSummaryOutcome;
                typedef std::future<DescribeEscapeEventTypeSummaryOutcome> DescribeEscapeEventTypeSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeEscapeEventTypeSummaryRequest&, DescribeEscapeEventTypeSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEscapeEventTypeSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEscapeRuleInfoResponse> DescribeEscapeRuleInfoOutcome;
                typedef std::future<DescribeEscapeRuleInfoOutcome> DescribeEscapeRuleInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeEscapeRuleInfoRequest&, DescribeEscapeRuleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEscapeRuleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEscapeSafeStateResponse> DescribeEscapeSafeStateOutcome;
                typedef std::future<DescribeEscapeSafeStateOutcome> DescribeEscapeSafeStateOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeEscapeSafeStateRequest&, DescribeEscapeSafeStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEscapeSafeStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEscapeWhiteListResponse> DescribeEscapeWhiteListOutcome;
                typedef std::future<DescribeEscapeWhiteListOutcome> DescribeEscapeWhiteListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeEscapeWhiteListRequest&, DescribeEscapeWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEscapeWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventEscapeImageListResponse> DescribeEventEscapeImageListOutcome;
                typedef std::future<DescribeEventEscapeImageListOutcome> DescribeEventEscapeImageListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeEventEscapeImageListRequest&, DescribeEventEscapeImageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventEscapeImageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportJobDownloadURLResponse> DescribeExportJobDownloadURLOutcome;
                typedef std::future<DescribeExportJobDownloadURLOutcome> DescribeExportJobDownloadURLOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeExportJobDownloadURLRequest&, DescribeExportJobDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportJobDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportJobManageListResponse> DescribeExportJobManageListOutcome;
                typedef std::future<DescribeExportJobManageListOutcome> DescribeExportJobManageListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeExportJobManageListRequest&, DescribeExportJobManageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportJobManageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportJobResultResponse> DescribeExportJobResultOutcome;
                typedef std::future<DescribeExportJobResultOutcome> DescribeExportJobResultOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeExportJobResultRequest&, DescribeExportJobResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportJobResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAuthorizedInfoResponse> DescribeImageAuthorizedInfoOutcome;
                typedef std::future<DescribeImageAuthorizedInfoOutcome> DescribeImageAuthorizedInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeImageAuthorizedInfoRequest&, DescribeImageAuthorizedInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAuthorizedInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAutoAuthorizedLogListResponse> DescribeImageAutoAuthorizedLogListOutcome;
                typedef std::future<DescribeImageAutoAuthorizedLogListOutcome> DescribeImageAutoAuthorizedLogListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeImageAutoAuthorizedLogListRequest&, DescribeImageAutoAuthorizedLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAutoAuthorizedLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAutoAuthorizedRuleResponse> DescribeImageAutoAuthorizedRuleOutcome;
                typedef std::future<DescribeImageAutoAuthorizedRuleOutcome> DescribeImageAutoAuthorizedRuleOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeImageAutoAuthorizedRuleRequest&, DescribeImageAutoAuthorizedRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAutoAuthorizedRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAutoAuthorizedTaskListResponse> DescribeImageAutoAuthorizedTaskListOutcome;
                typedef std::future<DescribeImageAutoAuthorizedTaskListOutcome> DescribeImageAutoAuthorizedTaskListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeImageAutoAuthorizedTaskListRequest&, DescribeImageAutoAuthorizedTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAutoAuthorizedTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageComponentListResponse> DescribeImageComponentListOutcome;
                typedef std::future<DescribeImageComponentListOutcome> DescribeImageComponentListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeImageComponentListRequest&, DescribeImageComponentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageComponentListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryNamespaceListResponse> DescribeImageRegistryNamespaceListOutcome;
                typedef std::future<DescribeImageRegistryNamespaceListOutcome> DescribeImageRegistryNamespaceListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeImageRegistryNamespaceListRequest&, DescribeImageRegistryNamespaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryNamespaceListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeIndexListResponse> DescribeIndexListOutcome;
                typedef std::future<DescribeIndexListOutcome> DescribeIndexListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeIndexListRequest&, DescribeIndexListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIndexListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInspectionReportResponse> DescribeInspectionReportOutcome;
                typedef std::future<DescribeInspectionReportOutcome> DescribeInspectionReportOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeInspectionReportRequest&, DescribeInspectionReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInspectionReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeK8sApiAbnormalEventInfoResponse> DescribeK8sApiAbnormalEventInfoOutcome;
                typedef std::future<DescribeK8sApiAbnormalEventInfoOutcome> DescribeK8sApiAbnormalEventInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeK8sApiAbnormalEventInfoRequest&, DescribeK8sApiAbnormalEventInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeK8sApiAbnormalEventInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeK8sApiAbnormalEventListResponse> DescribeK8sApiAbnormalEventListOutcome;
                typedef std::future<DescribeK8sApiAbnormalEventListOutcome> DescribeK8sApiAbnormalEventListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeK8sApiAbnormalEventListRequest&, DescribeK8sApiAbnormalEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeK8sApiAbnormalEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeK8sApiAbnormalRuleInfoResponse> DescribeK8sApiAbnormalRuleInfoOutcome;
                typedef std::future<DescribeK8sApiAbnormalRuleInfoOutcome> DescribeK8sApiAbnormalRuleInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeK8sApiAbnormalRuleInfoRequest&, DescribeK8sApiAbnormalRuleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeK8sApiAbnormalRuleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeK8sApiAbnormalRuleListResponse> DescribeK8sApiAbnormalRuleListOutcome;
                typedef std::future<DescribeK8sApiAbnormalRuleListOutcome> DescribeK8sApiAbnormalRuleListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeK8sApiAbnormalRuleListRequest&, DescribeK8sApiAbnormalRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeK8sApiAbnormalRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeK8sApiAbnormalRuleScopeListResponse> DescribeK8sApiAbnormalRuleScopeListOutcome;
                typedef std::future<DescribeK8sApiAbnormalRuleScopeListOutcome> DescribeK8sApiAbnormalRuleScopeListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeK8sApiAbnormalRuleScopeListRequest&, DescribeK8sApiAbnormalRuleScopeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeK8sApiAbnormalRuleScopeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeK8sApiAbnormalSummaryResponse> DescribeK8sApiAbnormalSummaryOutcome;
                typedef std::future<DescribeK8sApiAbnormalSummaryOutcome> DescribeK8sApiAbnormalSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeK8sApiAbnormalSummaryRequest&, DescribeK8sApiAbnormalSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeK8sApiAbnormalSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeK8sApiAbnormalTendencyResponse> DescribeK8sApiAbnormalTendencyOutcome;
                typedef std::future<DescribeK8sApiAbnormalTendencyOutcome> DescribeK8sApiAbnormalTendencyOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeK8sApiAbnormalTendencyRequest&, DescribeK8sApiAbnormalTendencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeK8sApiAbnormalTendencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogStorageStatisticResponse> DescribeLogStorageStatisticOutcome;
                typedef std::future<DescribeLogStorageStatisticOutcome> DescribeLogStorageStatisticOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeLogStorageStatisticRequest&, DescribeLogStorageStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogStorageStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkFirewallAuditRecordResponse> DescribeNetworkFirewallAuditRecordOutcome;
                typedef std::future<DescribeNetworkFirewallAuditRecordOutcome> DescribeNetworkFirewallAuditRecordOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeNetworkFirewallAuditRecordRequest&, DescribeNetworkFirewallAuditRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkFirewallAuditRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkFirewallClusterListResponse> DescribeNetworkFirewallClusterListOutcome;
                typedef std::future<DescribeNetworkFirewallClusterListOutcome> DescribeNetworkFirewallClusterListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeNetworkFirewallClusterListRequest&, DescribeNetworkFirewallClusterListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkFirewallClusterListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkFirewallClusterRefreshStatusResponse> DescribeNetworkFirewallClusterRefreshStatusOutcome;
                typedef std::future<DescribeNetworkFirewallClusterRefreshStatusOutcome> DescribeNetworkFirewallClusterRefreshStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeNetworkFirewallClusterRefreshStatusRequest&, DescribeNetworkFirewallClusterRefreshStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkFirewallClusterRefreshStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkFirewallNamespaceLabelListResponse> DescribeNetworkFirewallNamespaceLabelListOutcome;
                typedef std::future<DescribeNetworkFirewallNamespaceLabelListOutcome> DescribeNetworkFirewallNamespaceLabelListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeNetworkFirewallNamespaceLabelListRequest&, DescribeNetworkFirewallNamespaceLabelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkFirewallNamespaceLabelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkFirewallNamespaceListResponse> DescribeNetworkFirewallNamespaceListOutcome;
                typedef std::future<DescribeNetworkFirewallNamespaceListOutcome> DescribeNetworkFirewallNamespaceListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeNetworkFirewallNamespaceListRequest&, DescribeNetworkFirewallNamespaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkFirewallNamespaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkFirewallPodLabelsListResponse> DescribeNetworkFirewallPodLabelsListOutcome;
                typedef std::future<DescribeNetworkFirewallPodLabelsListOutcome> DescribeNetworkFirewallPodLabelsListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeNetworkFirewallPodLabelsListRequest&, DescribeNetworkFirewallPodLabelsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkFirewallPodLabelsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkFirewallPolicyDetailResponse> DescribeNetworkFirewallPolicyDetailOutcome;
                typedef std::future<DescribeNetworkFirewallPolicyDetailOutcome> DescribeNetworkFirewallPolicyDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeNetworkFirewallPolicyDetailRequest&, DescribeNetworkFirewallPolicyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkFirewallPolicyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkFirewallPolicyDiscoverResponse> DescribeNetworkFirewallPolicyDiscoverOutcome;
                typedef std::future<DescribeNetworkFirewallPolicyDiscoverOutcome> DescribeNetworkFirewallPolicyDiscoverOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeNetworkFirewallPolicyDiscoverRequest&, DescribeNetworkFirewallPolicyDiscoverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkFirewallPolicyDiscoverAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkFirewallPolicyListResponse> DescribeNetworkFirewallPolicyListOutcome;
                typedef std::future<DescribeNetworkFirewallPolicyListOutcome> DescribeNetworkFirewallPolicyListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeNetworkFirewallPolicyListRequest&, DescribeNetworkFirewallPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkFirewallPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkFirewallPolicyStatusResponse> DescribeNetworkFirewallPolicyStatusOutcome;
                typedef std::future<DescribeNetworkFirewallPolicyStatusOutcome> DescribeNetworkFirewallPolicyStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeNetworkFirewallPolicyStatusRequest&, DescribeNetworkFirewallPolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkFirewallPolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkFirewallPolicyYamlDetailResponse> DescribeNetworkFirewallPolicyYamlDetailOutcome;
                typedef std::future<DescribeNetworkFirewallPolicyYamlDetailOutcome> DescribeNetworkFirewallPolicyYamlDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeNetworkFirewallPolicyYamlDetailRequest&, DescribeNetworkFirewallPolicyYamlDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkFirewallPolicyYamlDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNewestVulResponse> DescribeNewestVulOutcome;
                typedef std::future<DescribeNewestVulOutcome> DescribeNewestVulOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeNewestVulRequest&, DescribeNewestVulOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNewestVulAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePostPayDetailResponse> DescribePostPayDetailOutcome;
                typedef std::future<DescribePostPayDetailOutcome> DescribePostPayDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribePostPayDetailRequest&, DescribePostPayDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePostPayDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProVersionInfoResponse> DescribeProVersionInfoOutcome;
                typedef std::future<DescribeProVersionInfoOutcome> DescribeProVersionInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeProVersionInfoRequest&, DescribeProVersionInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProVersionInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePromotionActivityResponse> DescribePromotionActivityOutcome;
                typedef std::future<DescribePromotionActivityOutcome> DescribePromotionActivityOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribePromotionActivityRequest&, DescribePromotionActivityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePromotionActivityAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicKeyResponse> DescribePublicKeyOutcome;
                typedef std::future<DescribePublicKeyOutcome> DescribePublicKeyOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribePublicKeyRequest&, DescribePublicKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurchaseStateInfoResponse> DescribePurchaseStateInfoOutcome;
                typedef std::future<DescribePurchaseStateInfoOutcome> DescribePurchaseStateInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribePurchaseStateInfoRequest&, DescribePurchaseStateInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurchaseStateInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRaspRuleVulsResponse> DescribeRaspRuleVulsOutcome;
                typedef std::future<DescribeRaspRuleVulsOutcome> DescribeRaspRuleVulsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeRaspRuleVulsRequest&, DescribeRaspRuleVulsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRaspRuleVulsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRaspRulesResponse> DescribeRaspRulesOutcome;
                typedef std::future<DescribeRaspRulesOutcome> DescribeRaspRulesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeRaspRulesRequest&, DescribeRaspRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRaspRulesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeRiskDnsEventDetailResponse> DescribeRiskDnsEventDetailOutcome;
                typedef std::future<DescribeRiskDnsEventDetailOutcome> DescribeRiskDnsEventDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeRiskDnsEventDetailRequest&, DescribeRiskDnsEventDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDnsEventDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskDnsListResponse> DescribeRiskDnsListOutcome;
                typedef std::future<DescribeRiskDnsListOutcome> DescribeRiskDnsListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeRiskDnsListRequest&, DescribeRiskDnsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDnsListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeScanIgnoreVulListResponse> DescribeScanIgnoreVulListOutcome;
                typedef std::future<DescribeScanIgnoreVulListOutcome> DescribeScanIgnoreVulListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeScanIgnoreVulListRequest&, DescribeScanIgnoreVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanIgnoreVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchExportListResponse> DescribeSearchExportListOutcome;
                typedef std::future<DescribeSearchExportListOutcome> DescribeSearchExportListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSearchExportListRequest&, DescribeSearchExportListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchExportListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchLogsResponse> DescribeSearchLogsOutcome;
                typedef std::future<DescribeSearchLogsOutcome> DescribeSearchLogsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSearchLogsRequest&, DescribeSearchLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchTemplatesResponse> DescribeSearchTemplatesOutcome;
                typedef std::future<DescribeSearchTemplatesOutcome> DescribeSearchTemplatesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSearchTemplatesRequest&, DescribeSearchTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecEventsTendencyResponse> DescribeSecEventsTendencyOutcome;
                typedef std::future<DescribeSecEventsTendencyOutcome> DescribeSecEventsTendencyOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSecEventsTendencyRequest&, DescribeSecEventsTendencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecEventsTendencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecLogAlertMsgResponse> DescribeSecLogAlertMsgOutcome;
                typedef std::future<DescribeSecLogAlertMsgOutcome> DescribeSecLogAlertMsgOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSecLogAlertMsgRequest&, DescribeSecLogAlertMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecLogAlertMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecLogCleanSettingInfoResponse> DescribeSecLogCleanSettingInfoOutcome;
                typedef std::future<DescribeSecLogCleanSettingInfoOutcome> DescribeSecLogCleanSettingInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSecLogCleanSettingInfoRequest&, DescribeSecLogCleanSettingInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecLogCleanSettingInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecLogDeliveryClsOptionsResponse> DescribeSecLogDeliveryClsOptionsOutcome;
                typedef std::future<DescribeSecLogDeliveryClsOptionsOutcome> DescribeSecLogDeliveryClsOptionsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSecLogDeliveryClsOptionsRequest&, DescribeSecLogDeliveryClsOptionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecLogDeliveryClsOptionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecLogDeliveryClsSettingResponse> DescribeSecLogDeliveryClsSettingOutcome;
                typedef std::future<DescribeSecLogDeliveryClsSettingOutcome> DescribeSecLogDeliveryClsSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSecLogDeliveryClsSettingRequest&, DescribeSecLogDeliveryClsSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecLogDeliveryClsSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecLogDeliveryKafkaOptionsResponse> DescribeSecLogDeliveryKafkaOptionsOutcome;
                typedef std::future<DescribeSecLogDeliveryKafkaOptionsOutcome> DescribeSecLogDeliveryKafkaOptionsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSecLogDeliveryKafkaOptionsRequest&, DescribeSecLogDeliveryKafkaOptionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecLogDeliveryKafkaOptionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecLogDeliveryKafkaSettingResponse> DescribeSecLogDeliveryKafkaSettingOutcome;
                typedef std::future<DescribeSecLogDeliveryKafkaSettingOutcome> DescribeSecLogDeliveryKafkaSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSecLogDeliveryKafkaSettingRequest&, DescribeSecLogDeliveryKafkaSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecLogDeliveryKafkaSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecLogJoinObjectListResponse> DescribeSecLogJoinObjectListOutcome;
                typedef std::future<DescribeSecLogJoinObjectListOutcome> DescribeSecLogJoinObjectListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSecLogJoinObjectListRequest&, DescribeSecLogJoinObjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecLogJoinObjectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecLogJoinTypeListResponse> DescribeSecLogJoinTypeListOutcome;
                typedef std::future<DescribeSecLogJoinTypeListOutcome> DescribeSecLogJoinTypeListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSecLogJoinTypeListRequest&, DescribeSecLogJoinTypeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecLogJoinTypeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecLogKafkaUINResponse> DescribeSecLogKafkaUINOutcome;
                typedef std::future<DescribeSecLogKafkaUINOutcome> DescribeSecLogKafkaUINOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSecLogKafkaUINRequest&, DescribeSecLogKafkaUINOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecLogKafkaUINAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecLogVasInfoResponse> DescribeSecLogVasInfoOutcome;
                typedef std::future<DescribeSecLogVasInfoOutcome> DescribeSecLogVasInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSecLogVasInfoRequest&, DescribeSecLogVasInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecLogVasInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSuperNodePodListResponse> DescribeSuperNodePodListOutcome;
                typedef std::future<DescribeSuperNodePodListOutcome> DescribeSuperNodePodListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSuperNodePodListRequest&, DescribeSuperNodePodListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuperNodePodListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSupportDefenceVulResponse> DescribeSupportDefenceVulOutcome;
                typedef std::future<DescribeSupportDefenceVulOutcome> DescribeSupportDefenceVulOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSupportDefenceVulRequest&, DescribeSupportDefenceVulOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupportDefenceVulAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSystemVulListResponse> DescribeSystemVulListOutcome;
                typedef std::future<DescribeSystemVulListOutcome> DescribeSystemVulListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeSystemVulListRequest&, DescribeSystemVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSystemVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResultSummaryResponse> DescribeTaskResultSummaryOutcome;
                typedef std::future<DescribeTaskResultSummaryOutcome> DescribeTaskResultSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeTaskResultSummaryRequest&, DescribeTaskResultSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskResultSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTcssSummaryResponse> DescribeTcssSummaryOutcome;
                typedef std::future<DescribeTcssSummaryOutcome> DescribeTcssSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeTcssSummaryRequest&, DescribeTcssSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTcssSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnauthorizedCoresTendencyResponse> DescribeUnauthorizedCoresTendencyOutcome;
                typedef std::future<DescribeUnauthorizedCoresTendencyOutcome> DescribeUnauthorizedCoresTendencyOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeUnauthorizedCoresTendencyRequest&, DescribeUnauthorizedCoresTendencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnauthorizedCoresTendencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnfinishRefreshTaskResponse> DescribeUnfinishRefreshTaskOutcome;
                typedef std::future<DescribeUnfinishRefreshTaskOutcome> DescribeUnfinishRefreshTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeUnfinishRefreshTaskRequest&, DescribeUnfinishRefreshTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnfinishRefreshTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserClusterResponse> DescribeUserClusterOutcome;
                typedef std::future<DescribeUserClusterOutcome> DescribeUserClusterOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeUserClusterRequest&, DescribeUserClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserPodListResponse> DescribeUserPodListOutcome;
                typedef std::future<DescribeUserPodListOutcome> DescribeUserPodListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeUserPodListRequest&, DescribeUserPodListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserPodListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeValueAddedSrvInfoResponse> DescribeValueAddedSrvInfoOutcome;
                typedef std::future<DescribeValueAddedSrvInfoOutcome> DescribeValueAddedSrvInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeValueAddedSrvInfoRequest&, DescribeValueAddedSrvInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeValueAddedSrvInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusAutoIsolateSampleDetailResponse> DescribeVirusAutoIsolateSampleDetailOutcome;
                typedef std::future<DescribeVirusAutoIsolateSampleDetailOutcome> DescribeVirusAutoIsolateSampleDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusAutoIsolateSampleDetailRequest&, DescribeVirusAutoIsolateSampleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusAutoIsolateSampleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusAutoIsolateSampleDownloadURLResponse> DescribeVirusAutoIsolateSampleDownloadURLOutcome;
                typedef std::future<DescribeVirusAutoIsolateSampleDownloadURLOutcome> DescribeVirusAutoIsolateSampleDownloadURLOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusAutoIsolateSampleDownloadURLRequest&, DescribeVirusAutoIsolateSampleDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusAutoIsolateSampleDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusAutoIsolateSampleListResponse> DescribeVirusAutoIsolateSampleListOutcome;
                typedef std::future<DescribeVirusAutoIsolateSampleListOutcome> DescribeVirusAutoIsolateSampleListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusAutoIsolateSampleListRequest&, DescribeVirusAutoIsolateSampleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusAutoIsolateSampleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusAutoIsolateSettingResponse> DescribeVirusAutoIsolateSettingOutcome;
                typedef std::future<DescribeVirusAutoIsolateSettingOutcome> DescribeVirusAutoIsolateSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusAutoIsolateSettingRequest&, DescribeVirusAutoIsolateSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusAutoIsolateSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusDetailResponse> DescribeVirusDetailOutcome;
                typedef std::future<DescribeVirusDetailOutcome> DescribeVirusDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusDetailRequest&, DescribeVirusDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusEventTendencyResponse> DescribeVirusEventTendencyOutcome;
                typedef std::future<DescribeVirusEventTendencyOutcome> DescribeVirusEventTendencyOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusEventTendencyRequest&, DescribeVirusEventTendencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusEventTendencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusListResponse> DescribeVirusListOutcome;
                typedef std::future<DescribeVirusListOutcome> DescribeVirusListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusListRequest&, DescribeVirusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusManualScanEstimateTimeoutResponse> DescribeVirusManualScanEstimateTimeoutOutcome;
                typedef std::future<DescribeVirusManualScanEstimateTimeoutOutcome> DescribeVirusManualScanEstimateTimeoutOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusManualScanEstimateTimeoutRequest&, DescribeVirusManualScanEstimateTimeoutOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusManualScanEstimateTimeoutAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusMonitorSettingResponse> DescribeVirusMonitorSettingOutcome;
                typedef std::future<DescribeVirusMonitorSettingOutcome> DescribeVirusMonitorSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusMonitorSettingRequest&, DescribeVirusMonitorSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusMonitorSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVirusSampleDownloadUrlResponse> DescribeVirusSampleDownloadUrlOutcome;
                typedef std::future<DescribeVirusSampleDownloadUrlOutcome> DescribeVirusSampleDownloadUrlOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVirusSampleDownloadUrlRequest&, DescribeVirusSampleDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirusSampleDownloadUrlAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeVulContainerListResponse> DescribeVulContainerListOutcome;
                typedef std::future<DescribeVulContainerListOutcome> DescribeVulContainerListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulContainerListRequest&, DescribeVulContainerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulContainerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefenceEventResponse> DescribeVulDefenceEventOutcome;
                typedef std::future<DescribeVulDefenceEventOutcome> DescribeVulDefenceEventOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulDefenceEventRequest&, DescribeVulDefenceEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefenceEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefenceEventDetailResponse> DescribeVulDefenceEventDetailOutcome;
                typedef std::future<DescribeVulDefenceEventDetailOutcome> DescribeVulDefenceEventDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulDefenceEventDetailRequest&, DescribeVulDefenceEventDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefenceEventDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefenceEventTendencyResponse> DescribeVulDefenceEventTendencyOutcome;
                typedef std::future<DescribeVulDefenceEventTendencyOutcome> DescribeVulDefenceEventTendencyOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulDefenceEventTendencyRequest&, DescribeVulDefenceEventTendencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefenceEventTendencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefenceHostResponse> DescribeVulDefenceHostOutcome;
                typedef std::future<DescribeVulDefenceHostOutcome> DescribeVulDefenceHostOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulDefenceHostRequest&, DescribeVulDefenceHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefenceHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefencePluginResponse> DescribeVulDefencePluginOutcome;
                typedef std::future<DescribeVulDefencePluginOutcome> DescribeVulDefencePluginOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulDefencePluginRequest&, DescribeVulDefencePluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefencePluginAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefenceSettingResponse> DescribeVulDefenceSettingOutcome;
                typedef std::future<DescribeVulDefenceSettingOutcome> DescribeVulDefenceSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulDefenceSettingRequest&, DescribeVulDefenceSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefenceSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDetailResponse> DescribeVulDetailOutcome;
                typedef std::future<DescribeVulDetailOutcome> DescribeVulDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulDetailRequest&, DescribeVulDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulIgnoreLocalImageListResponse> DescribeVulIgnoreLocalImageListOutcome;
                typedef std::future<DescribeVulIgnoreLocalImageListOutcome> DescribeVulIgnoreLocalImageListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulIgnoreLocalImageListRequest&, DescribeVulIgnoreLocalImageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulIgnoreLocalImageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulIgnoreRegistryImageListResponse> DescribeVulIgnoreRegistryImageListOutcome;
                typedef std::future<DescribeVulIgnoreRegistryImageListOutcome> DescribeVulIgnoreRegistryImageListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulIgnoreRegistryImageListRequest&, DescribeVulIgnoreRegistryImageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulIgnoreRegistryImageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulImageListResponse> DescribeVulImageListOutcome;
                typedef std::future<DescribeVulImageListOutcome> DescribeVulImageListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulImageListRequest&, DescribeVulImageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulImageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulImageSummaryResponse> DescribeVulImageSummaryOutcome;
                typedef std::future<DescribeVulImageSummaryOutcome> DescribeVulImageSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulImageSummaryRequest&, DescribeVulImageSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulImageSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulLevelImageSummaryResponse> DescribeVulLevelImageSummaryOutcome;
                typedef std::future<DescribeVulLevelImageSummaryOutcome> DescribeVulLevelImageSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulLevelImageSummaryRequest&, DescribeVulLevelImageSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulLevelImageSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulLevelSummaryResponse> DescribeVulLevelSummaryOutcome;
                typedef std::future<DescribeVulLevelSummaryOutcome> DescribeVulLevelSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulLevelSummaryRequest&, DescribeVulLevelSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulLevelSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulRegistryImageListResponse> DescribeVulRegistryImageListOutcome;
                typedef std::future<DescribeVulRegistryImageListOutcome> DescribeVulRegistryImageListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulRegistryImageListRequest&, DescribeVulRegistryImageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulRegistryImageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulScanAuthorizedImageSummaryResponse> DescribeVulScanAuthorizedImageSummaryOutcome;
                typedef std::future<DescribeVulScanAuthorizedImageSummaryOutcome> DescribeVulScanAuthorizedImageSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulScanAuthorizedImageSummaryRequest&, DescribeVulScanAuthorizedImageSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulScanAuthorizedImageSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulScanInfoResponse> DescribeVulScanInfoOutcome;
                typedef std::future<DescribeVulScanInfoOutcome> DescribeVulScanInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulScanInfoRequest&, DescribeVulScanInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulScanInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulScanLocalImageListResponse> DescribeVulScanLocalImageListOutcome;
                typedef std::future<DescribeVulScanLocalImageListOutcome> DescribeVulScanLocalImageListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulScanLocalImageListRequest&, DescribeVulScanLocalImageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulScanLocalImageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulSummaryResponse> DescribeVulSummaryOutcome;
                typedef std::future<DescribeVulSummaryOutcome> DescribeVulSummaryOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulSummaryRequest&, DescribeVulSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulTendencyResponse> DescribeVulTendencyOutcome;
                typedef std::future<DescribeVulTendencyOutcome> DescribeVulTendencyOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulTendencyRequest&, DescribeVulTendencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulTendencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulTopRankingResponse> DescribeVulTopRankingOutcome;
                typedef std::future<DescribeVulTopRankingOutcome> DescribeVulTopRankingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeVulTopRankingRequest&, DescribeVulTopRankingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulTopRankingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWarningRulesResponse> DescribeWarningRulesOutcome;
                typedef std::future<DescribeWarningRulesOutcome> DescribeWarningRulesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeWarningRulesRequest&, DescribeWarningRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebVulListResponse> DescribeWebVulListOutcome;
                typedef std::future<DescribeWebVulListOutcome> DescribeWebVulListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::DescribeWebVulListRequest&, DescribeWebVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebVulListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyContainerNetStatusResponse> ModifyContainerNetStatusOutcome;
                typedef std::future<ModifyContainerNetStatusOutcome> ModifyContainerNetStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyContainerNetStatusRequest&, ModifyContainerNetStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContainerNetStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEscapeEventStatusResponse> ModifyEscapeEventStatusOutcome;
                typedef std::future<ModifyEscapeEventStatusOutcome> ModifyEscapeEventStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyEscapeEventStatusRequest&, ModifyEscapeEventStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEscapeEventStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEscapeRuleResponse> ModifyEscapeRuleOutcome;
                typedef std::future<ModifyEscapeRuleOutcome> ModifyEscapeRuleOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyEscapeRuleRequest&, ModifyEscapeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEscapeRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEscapeWhiteListResponse> ModifyEscapeWhiteListOutcome;
                typedef std::future<ModifyEscapeWhiteListOutcome> ModifyEscapeWhiteListOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyEscapeWhiteListRequest&, ModifyEscapeWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEscapeWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageAuthorizedResponse> ModifyImageAuthorizedOutcome;
                typedef std::future<ModifyImageAuthorizedOutcome> ModifyImageAuthorizedOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyImageAuthorizedRequest&, ModifyImageAuthorizedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageAuthorizedAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyK8sApiAbnormalEventStatusResponse> ModifyK8sApiAbnormalEventStatusOutcome;
                typedef std::future<ModifyK8sApiAbnormalEventStatusOutcome> ModifyK8sApiAbnormalEventStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyK8sApiAbnormalEventStatusRequest&, ModifyK8sApiAbnormalEventStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyK8sApiAbnormalEventStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyK8sApiAbnormalRuleInfoResponse> ModifyK8sApiAbnormalRuleInfoOutcome;
                typedef std::future<ModifyK8sApiAbnormalRuleInfoOutcome> ModifyK8sApiAbnormalRuleInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyK8sApiAbnormalRuleInfoRequest&, ModifyK8sApiAbnormalRuleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyK8sApiAbnormalRuleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyK8sApiAbnormalRuleStatusResponse> ModifyK8sApiAbnormalRuleStatusOutcome;
                typedef std::future<ModifyK8sApiAbnormalRuleStatusOutcome> ModifyK8sApiAbnormalRuleStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyK8sApiAbnormalRuleStatusRequest&, ModifyK8sApiAbnormalRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyK8sApiAbnormalRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRaspRulesResponse> ModifyRaspRulesOutcome;
                typedef std::future<ModifyRaspRulesOutcome> ModifyRaspRulesOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyRaspRulesRequest&, ModifyRaspRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRaspRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReverseShellStatusResponse> ModifyReverseShellStatusOutcome;
                typedef std::future<ModifyReverseShellStatusOutcome> ModifyReverseShellStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyReverseShellStatusRequest&, ModifyReverseShellStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReverseShellStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskDnsEventStatusResponse> ModifyRiskDnsEventStatusOutcome;
                typedef std::future<ModifyRiskDnsEventStatusOutcome> ModifyRiskDnsEventStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyRiskDnsEventStatusRequest&, ModifyRiskDnsEventStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskDnsEventStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskSyscallStatusResponse> ModifyRiskSyscallStatusOutcome;
                typedef std::future<ModifyRiskSyscallStatusOutcome> ModifyRiskSyscallStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyRiskSyscallStatusRequest&, ModifyRiskSyscallStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskSyscallStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecLogCleanSettingInfoResponse> ModifySecLogCleanSettingInfoOutcome;
                typedef std::future<ModifySecLogCleanSettingInfoOutcome> ModifySecLogCleanSettingInfoOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifySecLogCleanSettingInfoRequest&, ModifySecLogCleanSettingInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecLogCleanSettingInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecLogDeliveryClsSettingResponse> ModifySecLogDeliveryClsSettingOutcome;
                typedef std::future<ModifySecLogDeliveryClsSettingOutcome> ModifySecLogDeliveryClsSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifySecLogDeliveryClsSettingRequest&, ModifySecLogDeliveryClsSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecLogDeliveryClsSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecLogDeliveryKafkaSettingResponse> ModifySecLogDeliveryKafkaSettingOutcome;
                typedef std::future<ModifySecLogDeliveryKafkaSettingOutcome> ModifySecLogDeliveryKafkaSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifySecLogDeliveryKafkaSettingRequest&, ModifySecLogDeliveryKafkaSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecLogDeliveryKafkaSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecLogJoinObjectsResponse> ModifySecLogJoinObjectsOutcome;
                typedef std::future<ModifySecLogJoinObjectsOutcome> ModifySecLogJoinObjectsOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifySecLogJoinObjectsRequest&, ModifySecLogJoinObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecLogJoinObjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecLogJoinStateResponse> ModifySecLogJoinStateOutcome;
                typedef std::future<ModifySecLogJoinStateOutcome> ModifySecLogJoinStateOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifySecLogJoinStateRequest&, ModifySecLogJoinStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecLogJoinStateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecLogKafkaUINResponse> ModifySecLogKafkaUINOutcome;
                typedef std::future<ModifySecLogKafkaUINOutcome> ModifySecLogKafkaUINOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifySecLogKafkaUINRequest&, ModifySecLogKafkaUINOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecLogKafkaUINAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVirusAutoIsolateExampleSwitchResponse> ModifyVirusAutoIsolateExampleSwitchOutcome;
                typedef std::future<ModifyVirusAutoIsolateExampleSwitchOutcome> ModifyVirusAutoIsolateExampleSwitchOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyVirusAutoIsolateExampleSwitchRequest&, ModifyVirusAutoIsolateExampleSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVirusAutoIsolateExampleSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVirusAutoIsolateSettingResponse> ModifyVirusAutoIsolateSettingOutcome;
                typedef std::future<ModifyVirusAutoIsolateSettingOutcome> ModifyVirusAutoIsolateSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyVirusAutoIsolateSettingRequest&, ModifyVirusAutoIsolateSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVirusAutoIsolateSettingAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyVulDefenceEventStatusResponse> ModifyVulDefenceEventStatusOutcome;
                typedef std::future<ModifyVulDefenceEventStatusOutcome> ModifyVulDefenceEventStatusOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyVulDefenceEventStatusRequest&, ModifyVulDefenceEventStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulDefenceEventStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVulDefenceSettingResponse> ModifyVulDefenceSettingOutcome;
                typedef std::future<ModifyVulDefenceSettingOutcome> ModifyVulDefenceSettingOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ModifyVulDefenceSettingRequest&, ModifyVulDefenceSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulDefenceSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenTcssTrialResponse> OpenTcssTrialOutcome;
                typedef std::future<OpenTcssTrialOutcome> OpenTcssTrialOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::OpenTcssTrialRequest&, OpenTcssTrialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenTcssTrialAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveAssetImageRegistryRegistryDetailResponse> RemoveAssetImageRegistryRegistryDetailOutcome;
                typedef std::future<RemoveAssetImageRegistryRegistryDetailOutcome> RemoveAssetImageRegistryRegistryDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::RemoveAssetImageRegistryRegistryDetailRequest&, RemoveAssetImageRegistryRegistryDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveAssetImageRegistryRegistryDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewImageAuthorizeStateResponse> RenewImageAuthorizeStateOutcome;
                typedef std::future<RenewImageAuthorizeStateOutcome> RenewImageAuthorizeStateOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::RenewImageAuthorizeStateRequest&, RenewImageAuthorizeStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewImageAuthorizeStateAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetSecLogTopicConfigResponse> ResetSecLogTopicConfigOutcome;
                typedef std::future<ResetSecLogTopicConfigOutcome> ResetSecLogTopicConfigOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::ResetSecLogTopicConfigRequest&, ResetSecLogTopicConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetSecLogTopicConfigAsyncHandler;
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
                typedef Outcome<Core::Error, Model::StopVulScanTaskResponse> StopVulScanTaskOutcome;
                typedef std::future<StopVulScanTaskOutcome> StopVulScanTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::StopVulScanTaskRequest&, StopVulScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopVulScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchImageAutoAuthorizedRuleResponse> SwitchImageAutoAuthorizedRuleOutcome;
                typedef std::future<SwitchImageAutoAuthorizedRuleOutcome> SwitchImageAutoAuthorizedRuleOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::SwitchImageAutoAuthorizedRuleRequest&, SwitchImageAutoAuthorizedRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchImageAutoAuthorizedRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncAssetImageRegistryAssetResponse> SyncAssetImageRegistryAssetOutcome;
                typedef std::future<SyncAssetImageRegistryAssetOutcome> SyncAssetImageRegistryAssetOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::SyncAssetImageRegistryAssetRequest&, SyncAssetImageRegistryAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncAssetImageRegistryAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAndPublishNetworkFirewallPolicyDetailResponse> UpdateAndPublishNetworkFirewallPolicyDetailOutcome;
                typedef std::future<UpdateAndPublishNetworkFirewallPolicyDetailOutcome> UpdateAndPublishNetworkFirewallPolicyDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::UpdateAndPublishNetworkFirewallPolicyDetailRequest&, UpdateAndPublishNetworkFirewallPolicyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAndPublishNetworkFirewallPolicyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAndPublishNetworkFirewallPolicyYamlDetailResponse> UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcome;
                typedef std::future<UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcome> UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest&, UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAndPublishNetworkFirewallPolicyYamlDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAssetImageRegistryRegistryDetailResponse> UpdateAssetImageRegistryRegistryDetailOutcome;
                typedef std::future<UpdateAssetImageRegistryRegistryDetailOutcome> UpdateAssetImageRegistryRegistryDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::UpdateAssetImageRegistryRegistryDetailRequest&, UpdateAssetImageRegistryRegistryDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAssetImageRegistryRegistryDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateImageRegistryTimingScanTaskResponse> UpdateImageRegistryTimingScanTaskOutcome;
                typedef std::future<UpdateImageRegistryTimingScanTaskOutcome> UpdateImageRegistryTimingScanTaskOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::UpdateImageRegistryTimingScanTaskRequest&, UpdateImageRegistryTimingScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateImageRegistryTimingScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateNetworkFirewallPolicyDetailResponse> UpdateNetworkFirewallPolicyDetailOutcome;
                typedef std::future<UpdateNetworkFirewallPolicyDetailOutcome> UpdateNetworkFirewallPolicyDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::UpdateNetworkFirewallPolicyDetailRequest&, UpdateNetworkFirewallPolicyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNetworkFirewallPolicyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateNetworkFirewallPolicyYamlDetailResponse> UpdateNetworkFirewallPolicyYamlDetailOutcome;
                typedef std::future<UpdateNetworkFirewallPolicyYamlDetailOutcome> UpdateNetworkFirewallPolicyYamlDetailOutcomeCallable;
                typedef std::function<void(const TcssClient*, const Model::UpdateNetworkFirewallPolicyYamlDetailRequest&, UpdateNetworkFirewallPolicyYamlDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNetworkFirewallPolicyYamlDetailAsyncHandler;



                /**
                 *容器网络创建网络策略添加并发布任务
                 * @param req AddAndPublishNetworkFirewallPolicyDetailRequest
                 * @return AddAndPublishNetworkFirewallPolicyDetailOutcome
                 */
                AddAndPublishNetworkFirewallPolicyDetailOutcome AddAndPublishNetworkFirewallPolicyDetail(const Model::AddAndPublishNetworkFirewallPolicyDetailRequest &request);
                void AddAndPublishNetworkFirewallPolicyDetailAsync(const Model::AddAndPublishNetworkFirewallPolicyDetailRequest& request, const AddAndPublishNetworkFirewallPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAndPublishNetworkFirewallPolicyDetailOutcomeCallable AddAndPublishNetworkFirewallPolicyDetailCallable(const Model::AddAndPublishNetworkFirewallPolicyDetailRequest& request);

                /**
                 *容器网络创建Yaml网络策略并发布任务
                 * @param req AddAndPublishNetworkFirewallPolicyYamlDetailRequest
                 * @return AddAndPublishNetworkFirewallPolicyYamlDetailOutcome
                 */
                AddAndPublishNetworkFirewallPolicyYamlDetailOutcome AddAndPublishNetworkFirewallPolicyYamlDetail(const Model::AddAndPublishNetworkFirewallPolicyYamlDetailRequest &request);
                void AddAndPublishNetworkFirewallPolicyYamlDetailAsync(const Model::AddAndPublishNetworkFirewallPolicyYamlDetailRequest& request, const AddAndPublishNetworkFirewallPolicyYamlDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAndPublishNetworkFirewallPolicyYamlDetailOutcomeCallable AddAndPublishNetworkFirewallPolicyYamlDetailCallable(const Model::AddAndPublishNetworkFirewallPolicyYamlDetailRequest& request);

                /**
                 *新增单个镜像仓库详细信息
                 * @param req AddAssetImageRegistryRegistryDetailRequest
                 * @return AddAssetImageRegistryRegistryDetailOutcome
                 */
                AddAssetImageRegistryRegistryDetailOutcome AddAssetImageRegistryRegistryDetail(const Model::AddAssetImageRegistryRegistryDetailRequest &request);
                void AddAssetImageRegistryRegistryDetailAsync(const Model::AddAssetImageRegistryRegistryDetailRequest& request, const AddAssetImageRegistryRegistryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAssetImageRegistryRegistryDetailOutcomeCallable AddAssetImageRegistryRegistryDetailCallable(const Model::AddAssetImageRegistryRegistryDetailRequest& request);

                /**
                 *新增安全合规忽略(资产+检测项列表)列表，不显示指定的检查项包含的资产内容
参考的AddCompliancePolicyItemToWhitelist，除输入字段外，其它应该是一致的，如果有不同可能是定义的不对
                 * @param req AddComplianceAssetPolicySetToWhitelistRequest
                 * @return AddComplianceAssetPolicySetToWhitelistOutcome
                 */
                AddComplianceAssetPolicySetToWhitelistOutcome AddComplianceAssetPolicySetToWhitelist(const Model::AddComplianceAssetPolicySetToWhitelistRequest &request);
                void AddComplianceAssetPolicySetToWhitelistAsync(const Model::AddComplianceAssetPolicySetToWhitelistRequest& request, const AddComplianceAssetPolicySetToWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddComplianceAssetPolicySetToWhitelistOutcomeCallable AddComplianceAssetPolicySetToWhitelistCallable(const Model::AddComplianceAssetPolicySetToWhitelistRequest& request);

                /**
                 *新增安全合规忽略(检测项+资产)列表，不显示指定的检查项包含的资产内容
参考的AddCompliancePolicyItemToWhitelist，除输入字段外，其它应该是一致的，如果有不同可能是定义的不对
                 * @param req AddCompliancePolicyAssetSetToWhitelistRequest
                 * @return AddCompliancePolicyAssetSetToWhitelistOutcome
                 */
                AddCompliancePolicyAssetSetToWhitelistOutcome AddCompliancePolicyAssetSetToWhitelist(const Model::AddCompliancePolicyAssetSetToWhitelistRequest &request);
                void AddCompliancePolicyAssetSetToWhitelistAsync(const Model::AddCompliancePolicyAssetSetToWhitelistRequest& request, const AddCompliancePolicyAssetSetToWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCompliancePolicyAssetSetToWhitelistOutcomeCallable AddCompliancePolicyAssetSetToWhitelistCallable(const Model::AddCompliancePolicyAssetSetToWhitelistRequest& request);

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
                 *新增或编辑本地镜像自动授权规则
                 * @param req AddEditImageAutoAuthorizedRuleRequest
                 * @return AddEditImageAutoAuthorizedRuleOutcome
                 */
                AddEditImageAutoAuthorizedRuleOutcome AddEditImageAutoAuthorizedRule(const Model::AddEditImageAutoAuthorizedRuleRequest &request);
                void AddEditImageAutoAuthorizedRuleAsync(const Model::AddEditImageAutoAuthorizedRuleRequest& request, const AddEditImageAutoAuthorizedRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddEditImageAutoAuthorizedRuleOutcomeCallable AddEditImageAutoAuthorizedRuleCallable(const Model::AddEditImageAutoAuthorizedRuleRequest& request);

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
                 *新增逃逸白名单
                 * @param req AddEscapeWhiteListRequest
                 * @return AddEscapeWhiteListOutcome
                 */
                AddEscapeWhiteListOutcome AddEscapeWhiteList(const Model::AddEscapeWhiteListRequest &request);
                void AddEscapeWhiteListAsync(const Model::AddEscapeWhiteListRequest& request, const AddEscapeWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddEscapeWhiteListOutcomeCallable AddEscapeWhiteListCallable(const Model::AddEscapeWhiteListRequest& request);

                /**
                 *新增漏洞扫描忽略漏洞
                 * @param req AddIgnoreVulRequest
                 * @return AddIgnoreVulOutcome
                 */
                AddIgnoreVulOutcome AddIgnoreVul(const Model::AddIgnoreVulRequest &request);
                void AddIgnoreVulAsync(const Model::AddIgnoreVulRequest& request, const AddIgnoreVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddIgnoreVulOutcomeCallable AddIgnoreVulCallable(const Model::AddIgnoreVulRequest& request);

                /**
                 *容器网络创建网络策略添加任务
                 * @param req AddNetworkFirewallPolicyDetailRequest
                 * @return AddNetworkFirewallPolicyDetailOutcome
                 */
                AddNetworkFirewallPolicyDetailOutcome AddNetworkFirewallPolicyDetail(const Model::AddNetworkFirewallPolicyDetailRequest &request);
                void AddNetworkFirewallPolicyDetailAsync(const Model::AddNetworkFirewallPolicyDetailRequest& request, const AddNetworkFirewallPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddNetworkFirewallPolicyDetailOutcomeCallable AddNetworkFirewallPolicyDetailCallable(const Model::AddNetworkFirewallPolicyDetailRequest& request);

                /**
                 *容器网络创建Yaml网络策略添加任务
                 * @param req AddNetworkFirewallPolicyYamlDetailRequest
                 * @return AddNetworkFirewallPolicyYamlDetailOutcome
                 */
                AddNetworkFirewallPolicyYamlDetailOutcome AddNetworkFirewallPolicyYamlDetail(const Model::AddNetworkFirewallPolicyYamlDetailRequest &request);
                void AddNetworkFirewallPolicyYamlDetailAsync(const Model::AddNetworkFirewallPolicyYamlDetailRequest& request, const AddNetworkFirewallPolicyYamlDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddNetworkFirewallPolicyYamlDetailOutcomeCallable AddNetworkFirewallPolicyYamlDetailCallable(const Model::AddNetworkFirewallPolicyYamlDetailRequest& request);

                /**
                 *容器网络创建检查Yaml网络策略任务
                 * @param req CheckNetworkFirewallPolicyYamlRequest
                 * @return CheckNetworkFirewallPolicyYamlOutcome
                 */
                CheckNetworkFirewallPolicyYamlOutcome CheckNetworkFirewallPolicyYaml(const Model::CheckNetworkFirewallPolicyYamlRequest &request);
                void CheckNetworkFirewallPolicyYamlAsync(const Model::CheckNetworkFirewallPolicyYamlRequest& request, const CheckNetworkFirewallPolicyYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckNetworkFirewallPolicyYamlOutcomeCallable CheckNetworkFirewallPolicyYamlCallable(const Model::CheckNetworkFirewallPolicyYamlRequest& request);

                /**
                 *检查单个镜像仓库名是否重复
                 * @param req CheckRepeatAssetImageRegistryRequest
                 * @return CheckRepeatAssetImageRegistryOutcome
                 */
                CheckRepeatAssetImageRegistryOutcome CheckRepeatAssetImageRegistry(const Model::CheckRepeatAssetImageRegistryRequest &request);
                void CheckRepeatAssetImageRegistryAsync(const Model::CheckRepeatAssetImageRegistryRequest& request, const CheckRepeatAssetImageRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckRepeatAssetImageRegistryOutcomeCallable CheckRepeatAssetImageRegistryCallable(const Model::CheckRepeatAssetImageRegistryRequest& request);

                /**
                 *容器网络创建网络策略确认任务
                 * @param req ConfirmNetworkFirewallPolicyRequest
                 * @return ConfirmNetworkFirewallPolicyOutcome
                 */
                ConfirmNetworkFirewallPolicyOutcome ConfirmNetworkFirewallPolicy(const Model::ConfirmNetworkFirewallPolicyRequest &request);
                void ConfirmNetworkFirewallPolicyAsync(const Model::ConfirmNetworkFirewallPolicyRequest& request, const ConfirmNetworkFirewallPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfirmNetworkFirewallPolicyOutcomeCallable ConfirmNetworkFirewallPolicyCallable(const Model::ConfirmNetworkFirewallPolicyRequest& request);

                /**
                 *创建异常进程规则导出任务
                 * @param req CreateAbnormalProcessRulesExportJobRequest
                 * @return CreateAbnormalProcessRulesExportJobOutcome
                 */
                CreateAbnormalProcessRulesExportJobOutcome CreateAbnormalProcessRulesExportJob(const Model::CreateAbnormalProcessRulesExportJobRequest &request);
                void CreateAbnormalProcessRulesExportJobAsync(const Model::CreateAbnormalProcessRulesExportJobRequest& request, const CreateAbnormalProcessRulesExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAbnormalProcessRulesExportJobOutcomeCallable CreateAbnormalProcessRulesExportJobCallable(const Model::CreateAbnormalProcessRulesExportJobRequest& request);

                /**
                 *创建文件篡改规则导出任务
                 * @param req CreateAccessControlsRuleExportJobRequest
                 * @return CreateAccessControlsRuleExportJobOutcome
                 */
                CreateAccessControlsRuleExportJobOutcome CreateAccessControlsRuleExportJob(const Model::CreateAccessControlsRuleExportJobRequest &request);
                void CreateAccessControlsRuleExportJobAsync(const Model::CreateAccessControlsRuleExportJobRequest& request, const CreateAccessControlsRuleExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccessControlsRuleExportJobOutcomeCallable CreateAccessControlsRuleExportJobCallable(const Model::CreateAccessControlsRuleExportJobRequest& request);

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
                 *创建本地镜像木马列表导出任务
                 * @param req CreateAssetImageVirusExportJobRequest
                 * @return CreateAssetImageVirusExportJobOutcome
                 */
                CreateAssetImageVirusExportJobOutcome CreateAssetImageVirusExportJob(const Model::CreateAssetImageVirusExportJobRequest &request);
                void CreateAssetImageVirusExportJobAsync(const Model::CreateAssetImageVirusExportJobRequest& request, const CreateAssetImageVirusExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetImageVirusExportJobOutcomeCallable CreateAssetImageVirusExportJobCallable(const Model::CreateAssetImageVirusExportJobRequest& request);

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
                 *查询本地镜像组件列表导出
                 * @param req CreateComponentExportJobRequest
                 * @return CreateComponentExportJobOutcome
                 */
                CreateComponentExportJobOutcome CreateComponentExportJob(const Model::CreateComponentExportJobRequest &request);
                void CreateComponentExportJobAsync(const Model::CreateComponentExportJobRequest& request, const CreateComponentExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateComponentExportJobOutcomeCallable CreateComponentExportJobCallable(const Model::CreateComponentExportJobRequest& request);

                /**
                 *创建支持防御的漏洞导出任务
                 * @param req CreateDefenceVulExportJobRequest
                 * @return CreateDefenceVulExportJobOutcome
                 */
                CreateDefenceVulExportJobOutcome CreateDefenceVulExportJob(const Model::CreateDefenceVulExportJobRequest &request);
                void CreateDefenceVulExportJobAsync(const Model::CreateDefenceVulExportJobRequest& request, const CreateDefenceVulExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDefenceVulExportJobOutcomeCallable CreateDefenceVulExportJobCallable(const Model::CreateDefenceVulExportJobRequest& request);

                /**
                 *创建应急漏洞导出任务
                 * @param req CreateEmergencyVulExportJobRequest
                 * @return CreateEmergencyVulExportJobOutcome
                 */
                CreateEmergencyVulExportJobOutcome CreateEmergencyVulExportJob(const Model::CreateEmergencyVulExportJobRequest &request);
                void CreateEmergencyVulExportJobAsync(const Model::CreateEmergencyVulExportJobRequest& request, const CreateEmergencyVulExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmergencyVulExportJobOutcomeCallable CreateEmergencyVulExportJobCallable(const Model::CreateEmergencyVulExportJobRequest& request);

                /**
                 *创建逃逸事件导出异步任务
                 * @param req CreateEscapeEventsExportJobRequest
                 * @return CreateEscapeEventsExportJobOutcome
                 */
                CreateEscapeEventsExportJobOutcome CreateEscapeEventsExportJob(const Model::CreateEscapeEventsExportJobRequest &request);
                void CreateEscapeEventsExportJobAsync(const Model::CreateEscapeEventsExportJobRequest& request, const CreateEscapeEventsExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEscapeEventsExportJobOutcomeCallable CreateEscapeEventsExportJobCallable(const Model::CreateEscapeEventsExportJobRequest& request);

                /**
                 *创建逃逸白名单导出任务
                 * @param req CreateEscapeWhiteListExportJobRequest
                 * @return CreateEscapeWhiteListExportJobOutcome
                 */
                CreateEscapeWhiteListExportJobOutcome CreateEscapeWhiteListExportJob(const Model::CreateEscapeWhiteListExportJobRequest &request);
                void CreateEscapeWhiteListExportJobAsync(const Model::CreateEscapeWhiteListExportJobRequest& request, const CreateEscapeWhiteListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEscapeWhiteListExportJobOutcomeCallable CreateEscapeWhiteListExportJobCallable(const Model::CreateEscapeWhiteListExportJobRequest& request);

                /**
                 *创建一个导出安全合规信息的任务
                 * @param req CreateExportComplianceStatusListJobRequest
                 * @return CreateExportComplianceStatusListJobOutcome
                 */
                CreateExportComplianceStatusListJobOutcome CreateExportComplianceStatusListJob(const Model::CreateExportComplianceStatusListJobRequest &request);
                void CreateExportComplianceStatusListJobAsync(const Model::CreateExportComplianceStatusListJobRequest& request, const CreateExportComplianceStatusListJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExportComplianceStatusListJobOutcomeCallable CreateExportComplianceStatusListJobCallable(const Model::CreateExportComplianceStatusListJobRequest& request);

                /**
                 *创建主机列表导出任务
                 * @param req CreateHostExportJobRequest
                 * @return CreateHostExportJobOutcome
                 */
                CreateHostExportJobOutcome CreateHostExportJob(const Model::CreateHostExportJobRequest &request);
                void CreateHostExportJobAsync(const Model::CreateHostExportJobRequest& request, const CreateHostExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHostExportJobOutcomeCallable CreateHostExportJobCallable(const Model::CreateHostExportJobRequest& request);

                /**
                 *创建镜像导出任务
                 * @param req CreateImageExportJobRequest
                 * @return CreateImageExportJobOutcome
                 */
                CreateImageExportJobOutcome CreateImageExportJob(const Model::CreateImageExportJobRequest &request);
                void CreateImageExportJobAsync(const Model::CreateImageExportJobRequest& request, const CreateImageExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageExportJobOutcomeCallable CreateImageExportJobCallable(const Model::CreateImageExportJobRequest& request);

                /**
                 *创建k8s api异常事件导出任务
                 * @param req CreateK8sApiAbnormalEventExportJobRequest
                 * @return CreateK8sApiAbnormalEventExportJobOutcome
                 */
                CreateK8sApiAbnormalEventExportJobOutcome CreateK8sApiAbnormalEventExportJob(const Model::CreateK8sApiAbnormalEventExportJobRequest &request);
                void CreateK8sApiAbnormalEventExportJobAsync(const Model::CreateK8sApiAbnormalEventExportJobRequest& request, const CreateK8sApiAbnormalEventExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateK8sApiAbnormalEventExportJobOutcomeCallable CreateK8sApiAbnormalEventExportJobCallable(const Model::CreateK8sApiAbnormalEventExportJobRequest& request);

                /**
                 *创建k8sApi异常规则导出任务
                 * @param req CreateK8sApiAbnormalRuleExportJobRequest
                 * @return CreateK8sApiAbnormalRuleExportJobOutcome
                 */
                CreateK8sApiAbnormalRuleExportJobOutcome CreateK8sApiAbnormalRuleExportJob(const Model::CreateK8sApiAbnormalRuleExportJobRequest &request);
                void CreateK8sApiAbnormalRuleExportJobAsync(const Model::CreateK8sApiAbnormalRuleExportJobRequest& request, const CreateK8sApiAbnormalRuleExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateK8sApiAbnormalRuleExportJobOutcomeCallable CreateK8sApiAbnormalRuleExportJobCallable(const Model::CreateK8sApiAbnormalRuleExportJobRequest& request);

                /**
                 *创建k8sapi异常事件规则
                 * @param req CreateK8sApiAbnormalRuleInfoRequest
                 * @return CreateK8sApiAbnormalRuleInfoOutcome
                 */
                CreateK8sApiAbnormalRuleInfoOutcome CreateK8sApiAbnormalRuleInfo(const Model::CreateK8sApiAbnormalRuleInfoRequest &request);
                void CreateK8sApiAbnormalRuleInfoAsync(const Model::CreateK8sApiAbnormalRuleInfoRequest& request, const CreateK8sApiAbnormalRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateK8sApiAbnormalRuleInfoOutcomeCallable CreateK8sApiAbnormalRuleInfoCallable(const Model::CreateK8sApiAbnormalRuleInfoRequest& request);

                /**
                 *容器网络集群下发刷新任务
                 * @param req CreateNetworkFirewallClusterRefreshRequest
                 * @return CreateNetworkFirewallClusterRefreshOutcome
                 */
                CreateNetworkFirewallClusterRefreshOutcome CreateNetworkFirewallClusterRefresh(const Model::CreateNetworkFirewallClusterRefreshRequest &request);
                void CreateNetworkFirewallClusterRefreshAsync(const Model::CreateNetworkFirewallClusterRefreshRequest& request, const CreateNetworkFirewallClusterRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkFirewallClusterRefreshOutcomeCallable CreateNetworkFirewallClusterRefreshCallable(const Model::CreateNetworkFirewallClusterRefreshRequest& request);

                /**
                 *容器网络集群网络策略创建自动发现任务
                 * @param req CreateNetworkFirewallPolicyDiscoverRequest
                 * @return CreateNetworkFirewallPolicyDiscoverOutcome
                 */
                CreateNetworkFirewallPolicyDiscoverOutcome CreateNetworkFirewallPolicyDiscover(const Model::CreateNetworkFirewallPolicyDiscoverRequest &request);
                void CreateNetworkFirewallPolicyDiscoverAsync(const Model::CreateNetworkFirewallPolicyDiscoverRequest& request, const CreateNetworkFirewallPolicyDiscoverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkFirewallPolicyDiscoverOutcomeCallable CreateNetworkFirewallPolicyDiscoverCallable(const Model::CreateNetworkFirewallPolicyDiscoverRequest& request);

                /**
                 *容器网络创建网络策略发布任务
                 * @param req CreateNetworkFirewallPublishRequest
                 * @return CreateNetworkFirewallPublishOutcome
                 */
                CreateNetworkFirewallPublishOutcome CreateNetworkFirewallPublish(const Model::CreateNetworkFirewallPublishRequest &request);
                void CreateNetworkFirewallPublishAsync(const Model::CreateNetworkFirewallPublishRequest& request, const CreateNetworkFirewallPublishAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkFirewallPublishOutcomeCallable CreateNetworkFirewallPublishCallable(const Model::CreateNetworkFirewallPublishRequest& request);

                /**
                 *容器网络创建网络策略撤销任务
                 * @param req CreateNetworkFirewallUndoPublishRequest
                 * @return CreateNetworkFirewallUndoPublishOutcome
                 */
                CreateNetworkFirewallUndoPublishOutcome CreateNetworkFirewallUndoPublish(const Model::CreateNetworkFirewallUndoPublishRequest &request);
                void CreateNetworkFirewallUndoPublishAsync(const Model::CreateNetworkFirewallUndoPublishRequest& request, const CreateNetworkFirewallUndoPublishAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkFirewallUndoPublishOutcomeCallable CreateNetworkFirewallUndoPublishCallable(const Model::CreateNetworkFirewallUndoPublishRequest& request);

                /**
                 *CreateOrModifyPostPayCores  创建或者编辑弹性计费上限
                 * @param req CreateOrModifyPostPayCoresRequest
                 * @return CreateOrModifyPostPayCoresOutcome
                 */
                CreateOrModifyPostPayCoresOutcome CreateOrModifyPostPayCores(const Model::CreateOrModifyPostPayCoresRequest &request);
                void CreateOrModifyPostPayCoresAsync(const Model::CreateOrModifyPostPayCoresRequest& request, const CreateOrModifyPostPayCoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrModifyPostPayCoresOutcomeCallable CreateOrModifyPostPayCoresCallable(const Model::CreateOrModifyPostPayCoresRequest& request);

                /**
                 *创建异常进程事件导出异步任务
                 * @param req CreateProcessEventsExportJobRequest
                 * @return CreateProcessEventsExportJobOutcome
                 */
                CreateProcessEventsExportJobOutcome CreateProcessEventsExportJob(const Model::CreateProcessEventsExportJobRequest &request);
                void CreateProcessEventsExportJobAsync(const Model::CreateProcessEventsExportJobRequest& request, const CreateProcessEventsExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProcessEventsExportJobOutcomeCallable CreateProcessEventsExportJobCallable(const Model::CreateProcessEventsExportJobRequest& request);

                /**
                 *下发刷新任务，会刷新资产信息
                 * @param req CreateRefreshTaskRequest
                 * @return CreateRefreshTaskOutcome
                 */
                CreateRefreshTaskOutcome CreateRefreshTask(const Model::CreateRefreshTaskRequest &request);
                void CreateRefreshTaskAsync(const Model::CreateRefreshTaskRequest& request, const CreateRefreshTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRefreshTaskOutcomeCallable CreateRefreshTaskCallable(const Model::CreateRefreshTaskRequest& request);

                /**
                 *创建恶意请求事件导出任务
                 * @param req CreateRiskDnsEventExportJobRequest
                 * @return CreateRiskDnsEventExportJobOutcome
                 */
                CreateRiskDnsEventExportJobOutcome CreateRiskDnsEventExportJob(const Model::CreateRiskDnsEventExportJobRequest &request);
                void CreateRiskDnsEventExportJobAsync(const Model::CreateRiskDnsEventExportJobRequest& request, const CreateRiskDnsEventExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRiskDnsEventExportJobOutcomeCallable CreateRiskDnsEventExportJobCallable(const Model::CreateRiskDnsEventExportJobRequest& request);

                /**
                 *添加检索模板
                 * @param req CreateSearchTemplateRequest
                 * @return CreateSearchTemplateOutcome
                 */
                CreateSearchTemplateOutcome CreateSearchTemplate(const Model::CreateSearchTemplateRequest &request);
                void CreateSearchTemplateAsync(const Model::CreateSearchTemplateRequest& request, const CreateSearchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSearchTemplateOutcomeCallable CreateSearchTemplateCallable(const Model::CreateSearchTemplateRequest& request);

                /**
                 *创建系统漏洞导出任务
                 * @param req CreateSystemVulExportJobRequest
                 * @return CreateSystemVulExportJobOutcome
                 */
                CreateSystemVulExportJobOutcome CreateSystemVulExportJob(const Model::CreateSystemVulExportJobRequest &request);
                void CreateSystemVulExportJobAsync(const Model::CreateSystemVulExportJobRequest& request, const CreateSystemVulExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSystemVulExportJobOutcomeCallable CreateSystemVulExportJobCallable(const Model::CreateSystemVulExportJobRequest& request);

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
                 *创建受漏洞影响的容器导出任务
                 * @param req CreateVulContainerExportJobRequest
                 * @return CreateVulContainerExportJobOutcome
                 */
                CreateVulContainerExportJobOutcome CreateVulContainerExportJob(const Model::CreateVulContainerExportJobRequest &request);
                void CreateVulContainerExportJobAsync(const Model::CreateVulContainerExportJobRequest& request, const CreateVulContainerExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulContainerExportJobOutcomeCallable CreateVulContainerExportJobCallable(const Model::CreateVulContainerExportJobRequest& request);

                /**
                 *创建漏洞防御导出任务
                 * @param req CreateVulDefenceEventExportJobRequest
                 * @return CreateVulDefenceEventExportJobOutcome
                 */
                CreateVulDefenceEventExportJobOutcome CreateVulDefenceEventExportJob(const Model::CreateVulDefenceEventExportJobRequest &request);
                void CreateVulDefenceEventExportJobAsync(const Model::CreateVulDefenceEventExportJobRequest& request, const CreateVulDefenceEventExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulDefenceEventExportJobOutcomeCallable CreateVulDefenceEventExportJobCallable(const Model::CreateVulDefenceEventExportJobRequest& request);

                /**
                 *创建漏洞防御主机导出任务
                 * @param req CreateVulDefenceHostExportJobRequest
                 * @return CreateVulDefenceHostExportJobOutcome
                 */
                CreateVulDefenceHostExportJobOutcome CreateVulDefenceHostExportJob(const Model::CreateVulDefenceHostExportJobRequest &request);
                void CreateVulDefenceHostExportJobAsync(const Model::CreateVulDefenceHostExportJobRequest& request, const CreateVulDefenceHostExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulDefenceHostExportJobOutcomeCallable CreateVulDefenceHostExportJobCallable(const Model::CreateVulDefenceHostExportJobRequest& request);

                /**
                 *查询本地镜像漏洞列表导出
                 * @param req CreateVulExportJobRequest
                 * @return CreateVulExportJobOutcome
                 */
                CreateVulExportJobOutcome CreateVulExportJob(const Model::CreateVulExportJobRequest &request);
                void CreateVulExportJobAsync(const Model::CreateVulExportJobRequest& request, const CreateVulExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulExportJobOutcomeCallable CreateVulExportJobCallable(const Model::CreateVulExportJobRequest& request);

                /**
                 *创建受漏洞影响的镜像导出任务
                 * @param req CreateVulImageExportJobRequest
                 * @return CreateVulImageExportJobOutcome
                 */
                CreateVulImageExportJobOutcome CreateVulImageExportJob(const Model::CreateVulImageExportJobRequest &request);
                void CreateVulImageExportJobAsync(const Model::CreateVulImageExportJobRequest& request, const CreateVulImageExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulImageExportJobOutcomeCallable CreateVulImageExportJobCallable(const Model::CreateVulImageExportJobRequest& request);

                /**
                 *创建漏洞扫描任务
                 * @param req CreateVulScanTaskRequest
                 * @return CreateVulScanTaskOutcome
                 */
                CreateVulScanTaskOutcome CreateVulScanTask(const Model::CreateVulScanTaskRequest &request);
                void CreateVulScanTaskAsync(const Model::CreateVulScanTaskRequest& request, const CreateVulScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulScanTaskOutcomeCallable CreateVulScanTaskCallable(const Model::CreateVulScanTaskRequest& request);

                /**
                 *创建web漏洞导出任务
                 * @param req CreateWebVulExportJobRequest
                 * @return CreateWebVulExportJobOutcome
                 */
                CreateWebVulExportJobOutcome CreateWebVulExportJob(const Model::CreateWebVulExportJobRequest &request);
                void CreateWebVulExportJobAsync(const Model::CreateWebVulExportJobRequest& request, const CreateWebVulExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWebVulExportJobOutcomeCallable CreateWebVulExportJobCallable(const Model::CreateWebVulExportJobRequest& request);

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
                 *移除安全合规忽略(资产+检测项)列表，不显示指定的检查项包含的资产内容
参考的AddCompliancePolicyAssetSetToWhitelist，除输入字段外，其它应该是一致的，如果有不同可能是定义的不对
                 * @param req DeleteComplianceAssetPolicySetFromWhitelistRequest
                 * @return DeleteComplianceAssetPolicySetFromWhitelistOutcome
                 */
                DeleteComplianceAssetPolicySetFromWhitelistOutcome DeleteComplianceAssetPolicySetFromWhitelist(const Model::DeleteComplianceAssetPolicySetFromWhitelistRequest &request);
                void DeleteComplianceAssetPolicySetFromWhitelistAsync(const Model::DeleteComplianceAssetPolicySetFromWhitelistRequest& request, const DeleteComplianceAssetPolicySetFromWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteComplianceAssetPolicySetFromWhitelistOutcomeCallable DeleteComplianceAssetPolicySetFromWhitelistCallable(const Model::DeleteComplianceAssetPolicySetFromWhitelistRequest& request);

                /**
                 *新增安全合规忽略(检测项+资产)列表，不显示指定的检查项包含的资产内容
                 * @param req DeleteCompliancePolicyAssetSetFromWhitelistRequest
                 * @return DeleteCompliancePolicyAssetSetFromWhitelistOutcome
                 */
                DeleteCompliancePolicyAssetSetFromWhitelistOutcome DeleteCompliancePolicyAssetSetFromWhitelist(const Model::DeleteCompliancePolicyAssetSetFromWhitelistRequest &request);
                void DeleteCompliancePolicyAssetSetFromWhitelistAsync(const Model::DeleteCompliancePolicyAssetSetFromWhitelistRequest& request, const DeleteCompliancePolicyAssetSetFromWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCompliancePolicyAssetSetFromWhitelistOutcomeCallable DeleteCompliancePolicyAssetSetFromWhitelistCallable(const Model::DeleteCompliancePolicyAssetSetFromWhitelistRequest& request);

                /**
                 *产品重构优化，这几个接口已经没有调用了

从白名单中删除将指定的检测项。
                 * @param req DeleteCompliancePolicyItemFromWhitelistRequest
                 * @return DeleteCompliancePolicyItemFromWhitelistOutcome
                 */
                DeleteCompliancePolicyItemFromWhitelistOutcome DeleteCompliancePolicyItemFromWhitelist(const Model::DeleteCompliancePolicyItemFromWhitelistRequest &request);
                void DeleteCompliancePolicyItemFromWhitelistAsync(const Model::DeleteCompliancePolicyItemFromWhitelistRequest& request, const DeleteCompliancePolicyItemFromWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCompliancePolicyItemFromWhitelistOutcomeCallable DeleteCompliancePolicyItemFromWhitelistCallable(const Model::DeleteCompliancePolicyItemFromWhitelistRequest& request);

                /**
                 *删除逃逸白名单
                 * @param req DeleteEscapeWhiteListRequest
                 * @return DeleteEscapeWhiteListOutcome
                 */
                DeleteEscapeWhiteListOutcome DeleteEscapeWhiteList(const Model::DeleteEscapeWhiteListRequest &request);
                void DeleteEscapeWhiteListAsync(const Model::DeleteEscapeWhiteListRequest& request, const DeleteEscapeWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEscapeWhiteListOutcomeCallable DeleteEscapeWhiteListCallable(const Model::DeleteEscapeWhiteListRequest& request);

                /**
                 *取消漏洞扫描忽略漏洞
                 * @param req DeleteIgnoreVulRequest
                 * @return DeleteIgnoreVulOutcome
                 */
                DeleteIgnoreVulOutcome DeleteIgnoreVul(const Model::DeleteIgnoreVulRequest &request);
                void DeleteIgnoreVulAsync(const Model::DeleteIgnoreVulRequest& request, const DeleteIgnoreVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIgnoreVulOutcomeCallable DeleteIgnoreVulCallable(const Model::DeleteIgnoreVulRequest& request);

                /**
                 *删除k8sapi异常事件规则
                 * @param req DeleteK8sApiAbnormalRuleRequest
                 * @return DeleteK8sApiAbnormalRuleOutcome
                 */
                DeleteK8sApiAbnormalRuleOutcome DeleteK8sApiAbnormalRule(const Model::DeleteK8sApiAbnormalRuleRequest &request);
                void DeleteK8sApiAbnormalRuleAsync(const Model::DeleteK8sApiAbnormalRuleRequest& request, const DeleteK8sApiAbnormalRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteK8sApiAbnormalRuleOutcomeCallable DeleteK8sApiAbnormalRuleCallable(const Model::DeleteK8sApiAbnormalRuleRequest& request);

                /**
                 *卸载Agent客户端
                 * @param req DeleteMachineRequest
                 * @return DeleteMachineOutcome
                 */
                DeleteMachineOutcome DeleteMachine(const Model::DeleteMachineRequest &request);
                void DeleteMachineAsync(const Model::DeleteMachineRequest& request, const DeleteMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineOutcomeCallable DeleteMachineCallable(const Model::DeleteMachineRequest& request);

                /**
                 *容器网络创建网络策略删除任务
                 * @param req DeleteNetworkFirewallPolicyDetailRequest
                 * @return DeleteNetworkFirewallPolicyDetailOutcome
                 */
                DeleteNetworkFirewallPolicyDetailOutcome DeleteNetworkFirewallPolicyDetail(const Model::DeleteNetworkFirewallPolicyDetailRequest &request);
                void DeleteNetworkFirewallPolicyDetailAsync(const Model::DeleteNetworkFirewallPolicyDetailRequest& request, const DeleteNetworkFirewallPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNetworkFirewallPolicyDetailOutcomeCallable DeleteNetworkFirewallPolicyDetailCallable(const Model::DeleteNetworkFirewallPolicyDetailRequest& request);

                /**
                 *删除漏洞防御白名单
                 * @param req DeleteRaspRulesRequest
                 * @return DeleteRaspRulesOutcome
                 */
                DeleteRaspRulesOutcome DeleteRaspRules(const Model::DeleteRaspRulesRequest &request);
                void DeleteRaspRulesAsync(const Model::DeleteRaspRulesRequest& request, const DeleteRaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRaspRulesOutcomeCallable DeleteRaspRulesCallable(const Model::DeleteRaspRulesRequest& request);

                /**
                 *删除运行时反弹shell事件
                 * @param req DeleteReverseShellEventsRequest
                 * @return DeleteReverseShellEventsOutcome
                 */
                DeleteReverseShellEventsOutcome DeleteReverseShellEvents(const Model::DeleteReverseShellEventsRequest &request);
                void DeleteReverseShellEventsAsync(const Model::DeleteReverseShellEventsRequest& request, const DeleteReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReverseShellEventsOutcomeCallable DeleteReverseShellEventsCallable(const Model::DeleteReverseShellEventsRequest& request);

                /**
                 *删除运行时反弹shell白名单
                 * @param req DeleteReverseShellWhiteListsRequest
                 * @return DeleteReverseShellWhiteListsOutcome
                 */
                DeleteReverseShellWhiteListsOutcome DeleteReverseShellWhiteLists(const Model::DeleteReverseShellWhiteListsRequest &request);
                void DeleteReverseShellWhiteListsAsync(const Model::DeleteReverseShellWhiteListsRequest& request, const DeleteReverseShellWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReverseShellWhiteListsOutcomeCallable DeleteReverseShellWhiteListsCallable(const Model::DeleteReverseShellWhiteListsRequest& request);

                /**
                 *删除运行时高危系统调用事件
                 * @param req DeleteRiskSyscallEventsRequest
                 * @return DeleteRiskSyscallEventsOutcome
                 */
                DeleteRiskSyscallEventsOutcome DeleteRiskSyscallEvents(const Model::DeleteRiskSyscallEventsRequest &request);
                void DeleteRiskSyscallEventsAsync(const Model::DeleteRiskSyscallEventsRequest& request, const DeleteRiskSyscallEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRiskSyscallEventsOutcomeCallable DeleteRiskSyscallEventsCallable(const Model::DeleteRiskSyscallEventsRequest& request);

                /**
                 *删除运行时高危系统调用白名单
                 * @param req DeleteRiskSyscallWhiteListsRequest
                 * @return DeleteRiskSyscallWhiteListsOutcome
                 */
                DeleteRiskSyscallWhiteListsOutcome DeleteRiskSyscallWhiteLists(const Model::DeleteRiskSyscallWhiteListsRequest &request);
                void DeleteRiskSyscallWhiteListsAsync(const Model::DeleteRiskSyscallWhiteListsRequest& request, const DeleteRiskSyscallWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRiskSyscallWhiteListsOutcomeCallable DeleteRiskSyscallWhiteListsCallable(const Model::DeleteRiskSyscallWhiteListsRequest& request);

                /**
                 *删除检索模板
                 * @param req DeleteSearchTemplateRequest
                 * @return DeleteSearchTemplateOutcome
                 */
                DeleteSearchTemplateOutcome DeleteSearchTemplate(const Model::DeleteSearchTemplateRequest &request);
                void DeleteSearchTemplateAsync(const Model::DeleteSearchTemplateRequest& request, const DeleteSearchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSearchTemplateOutcomeCallable DeleteSearchTemplateCallable(const Model::DeleteSearchTemplateRequest& request);

                /**
                 *获取用户当前灰度配置
                 * @param req DescribeABTestConfigRequest
                 * @return DescribeABTestConfigOutcome
                 */
                DescribeABTestConfigOutcome DescribeABTestConfig(const Model::DescribeABTestConfigRequest &request);
                void DescribeABTestConfigAsync(const Model::DescribeABTestConfigRequest& request, const DescribeABTestConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeABTestConfigOutcomeCallable DescribeABTestConfigCallable(const Model::DescribeABTestConfigRequest& request);

                /**
                 *查询运行时异常进程事件详细信息
                 * @param req DescribeAbnormalProcessDetailRequest
                 * @return DescribeAbnormalProcessDetailOutcome
                 */
                DescribeAbnormalProcessDetailOutcome DescribeAbnormalProcessDetail(const Model::DescribeAbnormalProcessDetailRequest &request);
                void DescribeAbnormalProcessDetailAsync(const Model::DescribeAbnormalProcessDetailRequest& request, const DescribeAbnormalProcessDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalProcessDetailOutcomeCallable DescribeAbnormalProcessDetailCallable(const Model::DescribeAbnormalProcessDetailRequest& request);

                /**
                 *查询待处理异常进程事件趋势
                 * @param req DescribeAbnormalProcessEventTendencyRequest
                 * @return DescribeAbnormalProcessEventTendencyOutcome
                 */
                DescribeAbnormalProcessEventTendencyOutcome DescribeAbnormalProcessEventTendency(const Model::DescribeAbnormalProcessEventTendencyRequest &request);
                void DescribeAbnormalProcessEventTendencyAsync(const Model::DescribeAbnormalProcessEventTendencyRequest& request, const DescribeAbnormalProcessEventTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalProcessEventTendencyOutcomeCallable DescribeAbnormalProcessEventTendencyCallable(const Model::DescribeAbnormalProcessEventTendencyRequest& request);

                /**
                 *查询运行时异常进程事件列表信息
                 * @param req DescribeAbnormalProcessEventsRequest
                 * @return DescribeAbnormalProcessEventsOutcome
                 */
                DescribeAbnormalProcessEventsOutcome DescribeAbnormalProcessEvents(const Model::DescribeAbnormalProcessEventsRequest &request);
                void DescribeAbnormalProcessEventsAsync(const Model::DescribeAbnormalProcessEventsRequest& request, const DescribeAbnormalProcessEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalProcessEventsOutcomeCallable DescribeAbnormalProcessEventsCallable(const Model::DescribeAbnormalProcessEventsRequest& request);

                /**
                 *统计异常进程各威胁等级待处理事件数
                 * @param req DescribeAbnormalProcessLevelSummaryRequest
                 * @return DescribeAbnormalProcessLevelSummaryOutcome
                 */
                DescribeAbnormalProcessLevelSummaryOutcome DescribeAbnormalProcessLevelSummary(const Model::DescribeAbnormalProcessLevelSummaryRequest &request);
                void DescribeAbnormalProcessLevelSummaryAsync(const Model::DescribeAbnormalProcessLevelSummaryRequest& request, const DescribeAbnormalProcessLevelSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalProcessLevelSummaryOutcomeCallable DescribeAbnormalProcessLevelSummaryCallable(const Model::DescribeAbnormalProcessLevelSummaryRequest& request);

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
                 *查询平行容器安装命令
                 * @param req DescribeAgentDaemonSetCmdRequest
                 * @return DescribeAgentDaemonSetCmdOutcome
                 */
                DescribeAgentDaemonSetCmdOutcome DescribeAgentDaemonSetCmd(const Model::DescribeAgentDaemonSetCmdRequest &request);
                void DescribeAgentDaemonSetCmdAsync(const Model::DescribeAgentDaemonSetCmdRequest& request, const DescribeAgentDaemonSetCmdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentDaemonSetCmdOutcomeCallable DescribeAgentDaemonSetCmdCallable(const Model::DescribeAgentDaemonSetCmdRequest& request);

                /**
                 *查询agent安装命令
                 * @param req DescribeAgentInstallCommandRequest
                 * @return DescribeAgentInstallCommandOutcome
                 */
                DescribeAgentInstallCommandOutcome DescribeAgentInstallCommand(const Model::DescribeAgentInstallCommandRequest &request);
                void DescribeAgentInstallCommandAsync(const Model::DescribeAgentInstallCommandRequest& request, const DescribeAgentInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentInstallCommandOutcomeCallable DescribeAgentInstallCommandCallable(const Model::DescribeAgentInstallCommandRequest& request);

                /**
                 *容器安全查询app服务列表
                 * @param req DescribeAssetAppServiceListRequest
                 * @return DescribeAssetAppServiceListOutcome
                 */
                DescribeAssetAppServiceListOutcome DescribeAssetAppServiceList(const Model::DescribeAssetAppServiceListRequest &request);
                void DescribeAssetAppServiceListAsync(const Model::DescribeAssetAppServiceListRequest& request, const DescribeAssetAppServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetAppServiceListOutcomeCallable DescribeAssetAppServiceListCallable(const Model::DescribeAssetAppServiceListRequest& request);

                /**
                 *查询集群列表
                 * @param req DescribeAssetClusterListRequest
                 * @return DescribeAssetClusterListOutcome
                 */
                DescribeAssetClusterListOutcome DescribeAssetClusterList(const Model::DescribeAssetClusterListRequest &request);
                void DescribeAssetClusterListAsync(const Model::DescribeAssetClusterListRequest& request, const DescribeAssetClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetClusterListOutcomeCallable DescribeAssetClusterListCallable(const Model::DescribeAssetClusterListRequest& request);

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
                 *查询超级节点列表
                 * @param req DescribeAssetSuperNodeListRequest
                 * @return DescribeAssetSuperNodeListOutcome
                 */
                DescribeAssetSuperNodeListOutcome DescribeAssetSuperNodeList(const Model::DescribeAssetSuperNodeListRequest &request);
                void DescribeAssetSuperNodeListAsync(const Model::DescribeAssetSuperNodeListRequest& request, const DescribeAssetSuperNodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetSuperNodeListOutcomeCallable DescribeAssetSuperNodeListCallable(const Model::DescribeAssetSuperNodeListRequest& request);

                /**
                 *查询资产同步最近时间
                 * @param req DescribeAssetSyncLastTimeRequest
                 * @return DescribeAssetSyncLastTimeOutcome
                 */
                DescribeAssetSyncLastTimeOutcome DescribeAssetSyncLastTime(const Model::DescribeAssetSyncLastTimeRequest &request);
                void DescribeAssetSyncLastTimeAsync(const Model::DescribeAssetSyncLastTimeRequest& request, const DescribeAssetSyncLastTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetSyncLastTimeOutcomeCallable DescribeAssetSyncLastTimeCallable(const Model::DescribeAssetSyncLastTimeRequest& request);

                /**
                 *容器安全查询web服务列表
                 * @param req DescribeAssetWebServiceListRequest
                 * @return DescribeAssetWebServiceListOutcome
                 */
                DescribeAssetWebServiceListOutcome DescribeAssetWebServiceList(const Model::DescribeAssetWebServiceListRequest &request);
                void DescribeAssetWebServiceListAsync(const Model::DescribeAssetWebServiceListRequest& request, const DescribeAssetWebServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebServiceListOutcomeCallable DescribeAssetWebServiceListCallable(const Model::DescribeAssetWebServiceListRequest& request);

                /**
                 *查询自动授权规则授权范围主机信息
                 * @param req DescribeAutoAuthorizedRuleHostRequest
                 * @return DescribeAutoAuthorizedRuleHostOutcome
                 */
                DescribeAutoAuthorizedRuleHostOutcome DescribeAutoAuthorizedRuleHost(const Model::DescribeAutoAuthorizedRuleHostRequest &request);
                void DescribeAutoAuthorizedRuleHostAsync(const Model::DescribeAutoAuthorizedRuleHostRequest& request, const DescribeAutoAuthorizedRuleHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoAuthorizedRuleHostOutcomeCallable DescribeAutoAuthorizedRuleHostCallable(const Model::DescribeAutoAuthorizedRuleHostRequest& request);

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
                 *查询集群节点信息
                 * @param req DescribeClusterNodesRequest
                 * @return DescribeClusterNodesOutcome
                 */
                DescribeClusterNodesOutcome DescribeClusterNodes(const Model::DescribeClusterNodesRequest &request);
                void DescribeClusterNodesAsync(const Model::DescribeClusterNodesRequest& request, const DescribeClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterNodesOutcomeCallable DescribeClusterNodesCallable(const Model::DescribeClusterNodesRequest& request);

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
                 *获取ES字段聚合结果
                 * @param req DescribeESAggregationsRequest
                 * @return DescribeESAggregationsOutcome
                 */
                DescribeESAggregationsOutcome DescribeESAggregations(const Model::DescribeESAggregationsRequest &request);
                void DescribeESAggregationsAsync(const Model::DescribeESAggregationsRequest& request, const DescribeESAggregationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeESAggregationsOutcomeCallable DescribeESAggregationsCallable(const Model::DescribeESAggregationsRequest& request);

                /**
                 *获取ES查询文档列表
                 * @param req DescribeESHitsRequest
                 * @return DescribeESHitsOutcome
                 */
                DescribeESHitsOutcome DescribeESHits(const Model::DescribeESHitsRequest &request);
                void DescribeESHitsAsync(const Model::DescribeESHitsRequest& request, const DescribeESHitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeESHitsOutcomeCallable DescribeESHitsCallable(const Model::DescribeESHitsRequest& request);

                /**
                 *查询应急漏洞列表
                 * @param req DescribeEmergencyVulListRequest
                 * @return DescribeEmergencyVulListOutcome
                 */
                DescribeEmergencyVulListOutcome DescribeEmergencyVulList(const Model::DescribeEmergencyVulListRequest &request);
                void DescribeEmergencyVulListAsync(const Model::DescribeEmergencyVulListRequest& request, const DescribeEmergencyVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEmergencyVulListOutcomeCallable DescribeEmergencyVulListCallable(const Model::DescribeEmergencyVulListRequest& request);

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
                 *查询待处理逃逸事件趋势
                 * @param req DescribeEscapeEventTendencyRequest
                 * @return DescribeEscapeEventTendencyOutcome
                 */
                DescribeEscapeEventTendencyOutcome DescribeEscapeEventTendency(const Model::DescribeEscapeEventTendencyRequest &request);
                void DescribeEscapeEventTendencyAsync(const Model::DescribeEscapeEventTendencyRequest& request, const DescribeEscapeEventTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEscapeEventTendencyOutcomeCallable DescribeEscapeEventTendencyCallable(const Model::DescribeEscapeEventTendencyRequest& request);

                /**
                 *统计容器逃逸各事件类型和待处理事件数
                 * @param req DescribeEscapeEventTypeSummaryRequest
                 * @return DescribeEscapeEventTypeSummaryOutcome
                 */
                DescribeEscapeEventTypeSummaryOutcome DescribeEscapeEventTypeSummary(const Model::DescribeEscapeEventTypeSummaryRequest &request);
                void DescribeEscapeEventTypeSummaryAsync(const Model::DescribeEscapeEventTypeSummaryRequest& request, const DescribeEscapeEventTypeSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEscapeEventTypeSummaryOutcomeCallable DescribeEscapeEventTypeSummaryCallable(const Model::DescribeEscapeEventTypeSummaryRequest& request);

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
                 *查询逃逸白名单
                 * @param req DescribeEscapeWhiteListRequest
                 * @return DescribeEscapeWhiteListOutcome
                 */
                DescribeEscapeWhiteListOutcome DescribeEscapeWhiteList(const Model::DescribeEscapeWhiteListRequest &request);
                void DescribeEscapeWhiteListAsync(const Model::DescribeEscapeWhiteListRequest& request, const DescribeEscapeWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEscapeWhiteListOutcomeCallable DescribeEscapeWhiteListCallable(const Model::DescribeEscapeWhiteListRequest& request);

                /**
                 *DescribeRiskContainerImageList查询风险容器镜像列表
                 * @param req DescribeEventEscapeImageListRequest
                 * @return DescribeEventEscapeImageListOutcome
                 */
                DescribeEventEscapeImageListOutcome DescribeEventEscapeImageList(const Model::DescribeEventEscapeImageListRequest &request);
                void DescribeEventEscapeImageListAsync(const Model::DescribeEventEscapeImageListRequest& request, const DescribeEventEscapeImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventEscapeImageListOutcomeCallable DescribeEventEscapeImageListCallable(const Model::DescribeEventEscapeImageListRequest& request);

                /**
                 *查询导出任务下载URL
                 * @param req DescribeExportJobDownloadURLRequest
                 * @return DescribeExportJobDownloadURLOutcome
                 */
                DescribeExportJobDownloadURLOutcome DescribeExportJobDownloadURL(const Model::DescribeExportJobDownloadURLRequest &request);
                void DescribeExportJobDownloadURLAsync(const Model::DescribeExportJobDownloadURLRequest& request, const DescribeExportJobDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExportJobDownloadURLOutcomeCallable DescribeExportJobDownloadURLCallable(const Model::DescribeExportJobDownloadURLRequest& request);

                /**
                 *查询导出任务管理列表
                 * @param req DescribeExportJobManageListRequest
                 * @return DescribeExportJobManageListOutcome
                 */
                DescribeExportJobManageListOutcome DescribeExportJobManageList(const Model::DescribeExportJobManageListRequest &request);
                void DescribeExportJobManageListAsync(const Model::DescribeExportJobManageListRequest& request, const DescribeExportJobManageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExportJobManageListOutcomeCallable DescribeExportJobManageListCallable(const Model::DescribeExportJobManageListRequest& request);

                /**
                 *查询导出接口进度
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
                 *查询镜像自动授权结果列表
                 * @param req DescribeImageAutoAuthorizedLogListRequest
                 * @return DescribeImageAutoAuthorizedLogListOutcome
                 */
                DescribeImageAutoAuthorizedLogListOutcome DescribeImageAutoAuthorizedLogList(const Model::DescribeImageAutoAuthorizedLogListRequest &request);
                void DescribeImageAutoAuthorizedLogListAsync(const Model::DescribeImageAutoAuthorizedLogListRequest& request, const DescribeImageAutoAuthorizedLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAutoAuthorizedLogListOutcomeCallable DescribeImageAutoAuthorizedLogListCallable(const Model::DescribeImageAutoAuthorizedLogListRequest& request);

                /**
                 *查询本地镜像自动授权规则
                 * @param req DescribeImageAutoAuthorizedRuleRequest
                 * @return DescribeImageAutoAuthorizedRuleOutcome
                 */
                DescribeImageAutoAuthorizedRuleOutcome DescribeImageAutoAuthorizedRule(const Model::DescribeImageAutoAuthorizedRuleRequest &request);
                void DescribeImageAutoAuthorizedRuleAsync(const Model::DescribeImageAutoAuthorizedRuleRequest& request, const DescribeImageAutoAuthorizedRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAutoAuthorizedRuleOutcomeCallable DescribeImageAutoAuthorizedRuleCallable(const Model::DescribeImageAutoAuthorizedRuleRequest& request);

                /**
                 *查询镜像自动授权任务列表
                 * @param req DescribeImageAutoAuthorizedTaskListRequest
                 * @return DescribeImageAutoAuthorizedTaskListOutcome
                 */
                DescribeImageAutoAuthorizedTaskListOutcome DescribeImageAutoAuthorizedTaskList(const Model::DescribeImageAutoAuthorizedTaskListRequest &request);
                void DescribeImageAutoAuthorizedTaskListAsync(const Model::DescribeImageAutoAuthorizedTaskListRequest& request, const DescribeImageAutoAuthorizedTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAutoAuthorizedTaskListOutcomeCallable DescribeImageAutoAuthorizedTaskListCallable(const Model::DescribeImageAutoAuthorizedTaskListRequest& request);

                /**
                 *查询本地镜像组件列表
                 * @param req DescribeImageComponentListRequest
                 * @return DescribeImageComponentListOutcome
                 */
                DescribeImageComponentListOutcome DescribeImageComponentList(const Model::DescribeImageComponentListRequest &request);
                void DescribeImageComponentListAsync(const Model::DescribeImageComponentListRequest& request, const DescribeImageComponentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageComponentListOutcomeCallable DescribeImageComponentListCallable(const Model::DescribeImageComponentListRequest& request);

                /**
                 *查询用户镜像仓库下的命令空间列表
                 * @param req DescribeImageRegistryNamespaceListRequest
                 * @return DescribeImageRegistryNamespaceListOutcome
                 */
                DescribeImageRegistryNamespaceListOutcome DescribeImageRegistryNamespaceList(const Model::DescribeImageRegistryNamespaceListRequest &request);
                void DescribeImageRegistryNamespaceListAsync(const Model::DescribeImageRegistryNamespaceListRequest& request, const DescribeImageRegistryNamespaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryNamespaceListOutcomeCallable DescribeImageRegistryNamespaceListCallable(const Model::DescribeImageRegistryNamespaceListRequest& request);

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
                 *获取索引列表
                 * @param req DescribeIndexListRequest
                 * @return DescribeIndexListOutcome
                 */
                DescribeIndexListOutcome DescribeIndexList(const Model::DescribeIndexListRequest &request);
                void DescribeIndexListAsync(const Model::DescribeIndexListRequest& request, const DescribeIndexListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIndexListOutcomeCallable DescribeIndexListCallable(const Model::DescribeIndexListRequest& request);

                /**
                 *查询检查报告
                 * @param req DescribeInspectionReportRequest
                 * @return DescribeInspectionReportOutcome
                 */
                DescribeInspectionReportOutcome DescribeInspectionReport(const Model::DescribeInspectionReportRequest &request);
                void DescribeInspectionReportAsync(const Model::DescribeInspectionReportRequest& request, const DescribeInspectionReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInspectionReportOutcomeCallable DescribeInspectionReportCallable(const Model::DescribeInspectionReportRequest& request);

                /**
                 *查询k8s api 异常事件详情
                 * @param req DescribeK8sApiAbnormalEventInfoRequest
                 * @return DescribeK8sApiAbnormalEventInfoOutcome
                 */
                DescribeK8sApiAbnormalEventInfoOutcome DescribeK8sApiAbnormalEventInfo(const Model::DescribeK8sApiAbnormalEventInfoRequest &request);
                void DescribeK8sApiAbnormalEventInfoAsync(const Model::DescribeK8sApiAbnormalEventInfoRequest& request, const DescribeK8sApiAbnormalEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeK8sApiAbnormalEventInfoOutcomeCallable DescribeK8sApiAbnormalEventInfoCallable(const Model::DescribeK8sApiAbnormalEventInfoRequest& request);

                /**
                 *查询k8s api异常事件列表
                 * @param req DescribeK8sApiAbnormalEventListRequest
                 * @return DescribeK8sApiAbnormalEventListOutcome
                 */
                DescribeK8sApiAbnormalEventListOutcome DescribeK8sApiAbnormalEventList(const Model::DescribeK8sApiAbnormalEventListRequest &request);
                void DescribeK8sApiAbnormalEventListAsync(const Model::DescribeK8sApiAbnormalEventListRequest& request, const DescribeK8sApiAbnormalEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeK8sApiAbnormalEventListOutcomeCallable DescribeK8sApiAbnormalEventListCallable(const Model::DescribeK8sApiAbnormalEventListRequest& request);

                /**
                 *查询k8sapi异常请求规则详情
                 * @param req DescribeK8sApiAbnormalRuleInfoRequest
                 * @return DescribeK8sApiAbnormalRuleInfoOutcome
                 */
                DescribeK8sApiAbnormalRuleInfoOutcome DescribeK8sApiAbnormalRuleInfo(const Model::DescribeK8sApiAbnormalRuleInfoRequest &request);
                void DescribeK8sApiAbnormalRuleInfoAsync(const Model::DescribeK8sApiAbnormalRuleInfoRequest& request, const DescribeK8sApiAbnormalRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeK8sApiAbnormalRuleInfoOutcomeCallable DescribeK8sApiAbnormalRuleInfoCallable(const Model::DescribeK8sApiAbnormalRuleInfoRequest& request);

                /**
                 *查询k8sapi异常请求规则列表
                 * @param req DescribeK8sApiAbnormalRuleListRequest
                 * @return DescribeK8sApiAbnormalRuleListOutcome
                 */
                DescribeK8sApiAbnormalRuleListOutcome DescribeK8sApiAbnormalRuleList(const Model::DescribeK8sApiAbnormalRuleListRequest &request);
                void DescribeK8sApiAbnormalRuleListAsync(const Model::DescribeK8sApiAbnormalRuleListRequest& request, const DescribeK8sApiAbnormalRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeK8sApiAbnormalRuleListOutcomeCallable DescribeK8sApiAbnormalRuleListCallable(const Model::DescribeK8sApiAbnormalRuleListRequest& request);

                /**
                 *查询k8sapi 异常规则中范围列表
                 * @param req DescribeK8sApiAbnormalRuleScopeListRequest
                 * @return DescribeK8sApiAbnormalRuleScopeListOutcome
                 */
                DescribeK8sApiAbnormalRuleScopeListOutcome DescribeK8sApiAbnormalRuleScopeList(const Model::DescribeK8sApiAbnormalRuleScopeListRequest &request);
                void DescribeK8sApiAbnormalRuleScopeListAsync(const Model::DescribeK8sApiAbnormalRuleScopeListRequest& request, const DescribeK8sApiAbnormalRuleScopeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeK8sApiAbnormalRuleScopeListOutcomeCallable DescribeK8sApiAbnormalRuleScopeListCallable(const Model::DescribeK8sApiAbnormalRuleScopeListRequest& request);

                /**
                 *查询k8sapi异常事件统计
                 * @param req DescribeK8sApiAbnormalSummaryRequest
                 * @return DescribeK8sApiAbnormalSummaryOutcome
                 */
                DescribeK8sApiAbnormalSummaryOutcome DescribeK8sApiAbnormalSummary(const Model::DescribeK8sApiAbnormalSummaryRequest &request);
                void DescribeK8sApiAbnormalSummaryAsync(const Model::DescribeK8sApiAbnormalSummaryRequest& request, const DescribeK8sApiAbnormalSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeK8sApiAbnormalSummaryOutcomeCallable DescribeK8sApiAbnormalSummaryCallable(const Model::DescribeK8sApiAbnormalSummaryRequest& request);

                /**
                 *查询k8sapi异常事件趋势
                 * @param req DescribeK8sApiAbnormalTendencyRequest
                 * @return DescribeK8sApiAbnormalTendencyOutcome
                 */
                DescribeK8sApiAbnormalTendencyOutcome DescribeK8sApiAbnormalTendency(const Model::DescribeK8sApiAbnormalTendencyRequest &request);
                void DescribeK8sApiAbnormalTendencyAsync(const Model::DescribeK8sApiAbnormalTendencyRequest& request, const DescribeK8sApiAbnormalTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeK8sApiAbnormalTendencyOutcomeCallable DescribeK8sApiAbnormalTendencyCallable(const Model::DescribeK8sApiAbnormalTendencyRequest& request);

                /**
                 *获取日志检索容量使用统计
                 * @param req DescribeLogStorageStatisticRequest
                 * @return DescribeLogStorageStatisticOutcome
                 */
                DescribeLogStorageStatisticOutcome DescribeLogStorageStatistic(const Model::DescribeLogStorageStatisticRequest &request);
                void DescribeLogStorageStatisticAsync(const Model::DescribeLogStorageStatisticRequest& request, const DescribeLogStorageStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogStorageStatisticOutcomeCallable DescribeLogStorageStatisticCallable(const Model::DescribeLogStorageStatisticRequest& request);

                /**
                 *查询集群策略审计列表
                 * @param req DescribeNetworkFirewallAuditRecordRequest
                 * @return DescribeNetworkFirewallAuditRecordOutcome
                 */
                DescribeNetworkFirewallAuditRecordOutcome DescribeNetworkFirewallAuditRecord(const Model::DescribeNetworkFirewallAuditRecordRequest &request);
                void DescribeNetworkFirewallAuditRecordAsync(const Model::DescribeNetworkFirewallAuditRecordRequest& request, const DescribeNetworkFirewallAuditRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkFirewallAuditRecordOutcomeCallable DescribeNetworkFirewallAuditRecordCallable(const Model::DescribeNetworkFirewallAuditRecordRequest& request);

                /**
                 *查询集群策略列表
                 * @param req DescribeNetworkFirewallClusterListRequest
                 * @return DescribeNetworkFirewallClusterListOutcome
                 */
                DescribeNetworkFirewallClusterListOutcome DescribeNetworkFirewallClusterList(const Model::DescribeNetworkFirewallClusterListRequest &request);
                void DescribeNetworkFirewallClusterListAsync(const Model::DescribeNetworkFirewallClusterListRequest& request, const DescribeNetworkFirewallClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkFirewallClusterListOutcomeCallable DescribeNetworkFirewallClusterListCallable(const Model::DescribeNetworkFirewallClusterListRequest& request);

                /**
                 *容器网络查询资产任务进度
                 * @param req DescribeNetworkFirewallClusterRefreshStatusRequest
                 * @return DescribeNetworkFirewallClusterRefreshStatusOutcome
                 */
                DescribeNetworkFirewallClusterRefreshStatusOutcome DescribeNetworkFirewallClusterRefreshStatus(const Model::DescribeNetworkFirewallClusterRefreshStatusRequest &request);
                void DescribeNetworkFirewallClusterRefreshStatusAsync(const Model::DescribeNetworkFirewallClusterRefreshStatusRequest& request, const DescribeNetworkFirewallClusterRefreshStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkFirewallClusterRefreshStatusOutcomeCallable DescribeNetworkFirewallClusterRefreshStatusCallable(const Model::DescribeNetworkFirewallClusterRefreshStatusRequest& request);

                /**
                 *查询集群网络空间标签列表
                 * @param req DescribeNetworkFirewallNamespaceLabelListRequest
                 * @return DescribeNetworkFirewallNamespaceLabelListOutcome
                 */
                DescribeNetworkFirewallNamespaceLabelListOutcome DescribeNetworkFirewallNamespaceLabelList(const Model::DescribeNetworkFirewallNamespaceLabelListRequest &request);
                void DescribeNetworkFirewallNamespaceLabelListAsync(const Model::DescribeNetworkFirewallNamespaceLabelListRequest& request, const DescribeNetworkFirewallNamespaceLabelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkFirewallNamespaceLabelListOutcomeCallable DescribeNetworkFirewallNamespaceLabelListCallable(const Model::DescribeNetworkFirewallNamespaceLabelListRequest& request);

                /**
                 *查询集群网络空间列表
                 * @param req DescribeNetworkFirewallNamespaceListRequest
                 * @return DescribeNetworkFirewallNamespaceListOutcome
                 */
                DescribeNetworkFirewallNamespaceListOutcome DescribeNetworkFirewallNamespaceList(const Model::DescribeNetworkFirewallNamespaceListRequest &request);
                void DescribeNetworkFirewallNamespaceListAsync(const Model::DescribeNetworkFirewallNamespaceListRequest& request, const DescribeNetworkFirewallNamespaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkFirewallNamespaceListOutcomeCallable DescribeNetworkFirewallNamespaceListCallable(const Model::DescribeNetworkFirewallNamespaceListRequest& request);

                /**
                 *查询集群网络pod标签
                 * @param req DescribeNetworkFirewallPodLabelsListRequest
                 * @return DescribeNetworkFirewallPodLabelsListOutcome
                 */
                DescribeNetworkFirewallPodLabelsListOutcome DescribeNetworkFirewallPodLabelsList(const Model::DescribeNetworkFirewallPodLabelsListRequest &request);
                void DescribeNetworkFirewallPodLabelsListAsync(const Model::DescribeNetworkFirewallPodLabelsListRequest& request, const DescribeNetworkFirewallPodLabelsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkFirewallPodLabelsListOutcomeCallable DescribeNetworkFirewallPodLabelsListCallable(const Model::DescribeNetworkFirewallPodLabelsListRequest& request);

                /**
                 *容器网络集群查看策略详情
                 * @param req DescribeNetworkFirewallPolicyDetailRequest
                 * @return DescribeNetworkFirewallPolicyDetailOutcome
                 */
                DescribeNetworkFirewallPolicyDetailOutcome DescribeNetworkFirewallPolicyDetail(const Model::DescribeNetworkFirewallPolicyDetailRequest &request);
                void DescribeNetworkFirewallPolicyDetailAsync(const Model::DescribeNetworkFirewallPolicyDetailRequest& request, const DescribeNetworkFirewallPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkFirewallPolicyDetailOutcomeCallable DescribeNetworkFirewallPolicyDetailCallable(const Model::DescribeNetworkFirewallPolicyDetailRequest& request);

                /**
                 *容器网络查询网络策略自动发现任务进度
                 * @param req DescribeNetworkFirewallPolicyDiscoverRequest
                 * @return DescribeNetworkFirewallPolicyDiscoverOutcome
                 */
                DescribeNetworkFirewallPolicyDiscoverOutcome DescribeNetworkFirewallPolicyDiscover(const Model::DescribeNetworkFirewallPolicyDiscoverRequest &request);
                void DescribeNetworkFirewallPolicyDiscoverAsync(const Model::DescribeNetworkFirewallPolicyDiscoverRequest& request, const DescribeNetworkFirewallPolicyDiscoverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkFirewallPolicyDiscoverOutcomeCallable DescribeNetworkFirewallPolicyDiscoverCallable(const Model::DescribeNetworkFirewallPolicyDiscoverRequest& request);

                /**
                 *查询集群网络策略列表
                 * @param req DescribeNetworkFirewallPolicyListRequest
                 * @return DescribeNetworkFirewallPolicyListOutcome
                 */
                DescribeNetworkFirewallPolicyListOutcome DescribeNetworkFirewallPolicyList(const Model::DescribeNetworkFirewallPolicyListRequest &request);
                void DescribeNetworkFirewallPolicyListAsync(const Model::DescribeNetworkFirewallPolicyListRequest& request, const DescribeNetworkFirewallPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkFirewallPolicyListOutcomeCallable DescribeNetworkFirewallPolicyListCallable(const Model::DescribeNetworkFirewallPolicyListRequest& request);

                /**
                 *容器网络查询网络策略策略执行状态
                 * @param req DescribeNetworkFirewallPolicyStatusRequest
                 * @return DescribeNetworkFirewallPolicyStatusOutcome
                 */
                DescribeNetworkFirewallPolicyStatusOutcome DescribeNetworkFirewallPolicyStatus(const Model::DescribeNetworkFirewallPolicyStatusRequest &request);
                void DescribeNetworkFirewallPolicyStatusAsync(const Model::DescribeNetworkFirewallPolicyStatusRequest& request, const DescribeNetworkFirewallPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkFirewallPolicyStatusOutcomeCallable DescribeNetworkFirewallPolicyStatusCallable(const Model::DescribeNetworkFirewallPolicyStatusRequest& request);

                /**
                 *容器网络集群查看Yaml网络策略详情
                 * @param req DescribeNetworkFirewallPolicyYamlDetailRequest
                 * @return DescribeNetworkFirewallPolicyYamlDetailOutcome
                 */
                DescribeNetworkFirewallPolicyYamlDetailOutcome DescribeNetworkFirewallPolicyYamlDetail(const Model::DescribeNetworkFirewallPolicyYamlDetailRequest &request);
                void DescribeNetworkFirewallPolicyYamlDetailAsync(const Model::DescribeNetworkFirewallPolicyYamlDetailRequest& request, const DescribeNetworkFirewallPolicyYamlDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkFirewallPolicyYamlDetailOutcomeCallable DescribeNetworkFirewallPolicyYamlDetailCallable(const Model::DescribeNetworkFirewallPolicyYamlDetailRequest& request);

                /**
                 *查询最新披露漏洞列表
                 * @param req DescribeNewestVulRequest
                 * @return DescribeNewestVulOutcome
                 */
                DescribeNewestVulOutcome DescribeNewestVul(const Model::DescribeNewestVulRequest &request);
                void DescribeNewestVulAsync(const Model::DescribeNewestVulRequest& request, const DescribeNewestVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNewestVulOutcomeCallable DescribeNewestVulCallable(const Model::DescribeNewestVulRequest& request);

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
                 *查询促销活动
                 * @param req DescribePromotionActivityRequest
                 * @return DescribePromotionActivityOutcome
                 */
                DescribePromotionActivityOutcome DescribePromotionActivity(const Model::DescribePromotionActivityRequest &request);
                void DescribePromotionActivityAsync(const Model::DescribePromotionActivityRequest& request, const DescribePromotionActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePromotionActivityOutcomeCallable DescribePromotionActivityCallable(const Model::DescribePromotionActivityRequest& request);

                /**
                 *获取公钥
                 * @param req DescribePublicKeyRequest
                 * @return DescribePublicKeyOutcome
                 */
                DescribePublicKeyOutcome DescribePublicKey(const Model::DescribePublicKeyRequest &request);
                void DescribePublicKeyAsync(const Model::DescribePublicKeyRequest& request, const DescribePublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicKeyOutcomeCallable DescribePublicKeyCallable(const Model::DescribePublicKeyRequest& request);

                /**
                 *DescribePurchaseStateInfo 查询容器安全服务已购买信息
                 * @param req DescribePurchaseStateInfoRequest
                 * @return DescribePurchaseStateInfoOutcome
                 */
                DescribePurchaseStateInfoOutcome DescribePurchaseStateInfo(const Model::DescribePurchaseStateInfoRequest &request);
                void DescribePurchaseStateInfoAsync(const Model::DescribePurchaseStateInfoRequest& request, const DescribePurchaseStateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurchaseStateInfoOutcomeCallable DescribePurchaseStateInfoCallable(const Model::DescribePurchaseStateInfoRequest& request);

                /**
                 *获取漏洞防御白名单漏洞列表
                 * @param req DescribeRaspRuleVulsRequest
                 * @return DescribeRaspRuleVulsOutcome
                 */
                DescribeRaspRuleVulsOutcome DescribeRaspRuleVuls(const Model::DescribeRaspRuleVulsRequest &request);
                void DescribeRaspRuleVulsAsync(const Model::DescribeRaspRuleVulsRequest& request, const DescribeRaspRuleVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRaspRuleVulsOutcomeCallable DescribeRaspRuleVulsCallable(const Model::DescribeRaspRuleVulsRequest& request);

                /**
                 *查询支持防御的漏洞列表
                 * @param req DescribeRaspRulesRequest
                 * @return DescribeRaspRulesOutcome
                 */
                DescribeRaspRulesOutcome DescribeRaspRules(const Model::DescribeRaspRulesRequest &request);
                void DescribeRaspRulesAsync(const Model::DescribeRaspRulesRequest& request, const DescribeRaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRaspRulesOutcomeCallable DescribeRaspRulesCallable(const Model::DescribeRaspRulesRequest& request);

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
                 *查询恶意请求事件详情
                 * @param req DescribeRiskDnsEventDetailRequest
                 * @return DescribeRiskDnsEventDetailOutcome
                 */
                DescribeRiskDnsEventDetailOutcome DescribeRiskDnsEventDetail(const Model::DescribeRiskDnsEventDetailRequest &request);
                void DescribeRiskDnsEventDetailAsync(const Model::DescribeRiskDnsEventDetailRequest& request, const DescribeRiskDnsEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDnsEventDetailOutcomeCallable DescribeRiskDnsEventDetailCallable(const Model::DescribeRiskDnsEventDetailRequest& request);

                /**
                 *查询恶意请求事件列表
                 * @param req DescribeRiskDnsListRequest
                 * @return DescribeRiskDnsListOutcome
                 */
                DescribeRiskDnsListOutcome DescribeRiskDnsList(const Model::DescribeRiskDnsListRequest &request);
                void DescribeRiskDnsListAsync(const Model::DescribeRiskDnsListRequest& request, const DescribeRiskDnsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDnsListOutcomeCallable DescribeRiskDnsListCallable(const Model::DescribeRiskDnsListRequest& request);

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
                 *查询扫描忽略的漏洞列表
                 * @param req DescribeScanIgnoreVulListRequest
                 * @return DescribeScanIgnoreVulListOutcome
                 */
                DescribeScanIgnoreVulListOutcome DescribeScanIgnoreVulList(const Model::DescribeScanIgnoreVulListRequest &request);
                void DescribeScanIgnoreVulListAsync(const Model::DescribeScanIgnoreVulListRequest& request, const DescribeScanIgnoreVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanIgnoreVulListOutcomeCallable DescribeScanIgnoreVulListCallable(const Model::DescribeScanIgnoreVulListRequest& request);

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
                 *查询容器运行时安全事件趋势
                 * @param req DescribeSecEventsTendencyRequest
                 * @return DescribeSecEventsTendencyOutcome
                 */
                DescribeSecEventsTendencyOutcome DescribeSecEventsTendency(const Model::DescribeSecEventsTendencyRequest &request);
                void DescribeSecEventsTendencyAsync(const Model::DescribeSecEventsTendencyRequest& request, const DescribeSecEventsTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecEventsTendencyOutcomeCallable DescribeSecEventsTendencyCallable(const Model::DescribeSecEventsTendencyRequest& request);

                /**
                 *查询安全日志告警信息
                 * @param req DescribeSecLogAlertMsgRequest
                 * @return DescribeSecLogAlertMsgOutcome
                 */
                DescribeSecLogAlertMsgOutcome DescribeSecLogAlertMsg(const Model::DescribeSecLogAlertMsgRequest &request);
                void DescribeSecLogAlertMsgAsync(const Model::DescribeSecLogAlertMsgRequest& request, const DescribeSecLogAlertMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecLogAlertMsgOutcomeCallable DescribeSecLogAlertMsgCallable(const Model::DescribeSecLogAlertMsgRequest& request);

                /**
                 *查询安全日志清理设置详情
                 * @param req DescribeSecLogCleanSettingInfoRequest
                 * @return DescribeSecLogCleanSettingInfoOutcome
                 */
                DescribeSecLogCleanSettingInfoOutcome DescribeSecLogCleanSettingInfo(const Model::DescribeSecLogCleanSettingInfoRequest &request);
                void DescribeSecLogCleanSettingInfoAsync(const Model::DescribeSecLogCleanSettingInfoRequest& request, const DescribeSecLogCleanSettingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecLogCleanSettingInfoOutcomeCallable DescribeSecLogCleanSettingInfoCallable(const Model::DescribeSecLogCleanSettingInfoRequest& request);

                /**
                 *查询安全日志投递cls可选项
                 * @param req DescribeSecLogDeliveryClsOptionsRequest
                 * @return DescribeSecLogDeliveryClsOptionsOutcome
                 */
                DescribeSecLogDeliveryClsOptionsOutcome DescribeSecLogDeliveryClsOptions(const Model::DescribeSecLogDeliveryClsOptionsRequest &request);
                void DescribeSecLogDeliveryClsOptionsAsync(const Model::DescribeSecLogDeliveryClsOptionsRequest& request, const DescribeSecLogDeliveryClsOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecLogDeliveryClsOptionsOutcomeCallable DescribeSecLogDeliveryClsOptionsCallable(const Model::DescribeSecLogDeliveryClsOptionsRequest& request);

                /**
                 *查询安全日志投递Cls配置
                 * @param req DescribeSecLogDeliveryClsSettingRequest
                 * @return DescribeSecLogDeliveryClsSettingOutcome
                 */
                DescribeSecLogDeliveryClsSettingOutcome DescribeSecLogDeliveryClsSetting(const Model::DescribeSecLogDeliveryClsSettingRequest &request);
                void DescribeSecLogDeliveryClsSettingAsync(const Model::DescribeSecLogDeliveryClsSettingRequest& request, const DescribeSecLogDeliveryClsSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecLogDeliveryClsSettingOutcomeCallable DescribeSecLogDeliveryClsSettingCallable(const Model::DescribeSecLogDeliveryClsSettingRequest& request);

                /**
                 *查询安全日志投递kafka可选项
                 * @param req DescribeSecLogDeliveryKafkaOptionsRequest
                 * @return DescribeSecLogDeliveryKafkaOptionsOutcome
                 */
                DescribeSecLogDeliveryKafkaOptionsOutcome DescribeSecLogDeliveryKafkaOptions(const Model::DescribeSecLogDeliveryKafkaOptionsRequest &request);
                void DescribeSecLogDeliveryKafkaOptionsAsync(const Model::DescribeSecLogDeliveryKafkaOptionsRequest& request, const DescribeSecLogDeliveryKafkaOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecLogDeliveryKafkaOptionsOutcomeCallable DescribeSecLogDeliveryKafkaOptionsCallable(const Model::DescribeSecLogDeliveryKafkaOptionsRequest& request);

                /**
                 *查询安全日志投递kafka配置
                 * @param req DescribeSecLogDeliveryKafkaSettingRequest
                 * @return DescribeSecLogDeliveryKafkaSettingOutcome
                 */
                DescribeSecLogDeliveryKafkaSettingOutcome DescribeSecLogDeliveryKafkaSetting(const Model::DescribeSecLogDeliveryKafkaSettingRequest &request);
                void DescribeSecLogDeliveryKafkaSettingAsync(const Model::DescribeSecLogDeliveryKafkaSettingRequest& request, const DescribeSecLogDeliveryKafkaSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecLogDeliveryKafkaSettingOutcomeCallable DescribeSecLogDeliveryKafkaSettingCallable(const Model::DescribeSecLogDeliveryKafkaSettingRequest& request);

                /**
                 *查询安全日志接入对象列表
                 * @param req DescribeSecLogJoinObjectListRequest
                 * @return DescribeSecLogJoinObjectListOutcome
                 */
                DescribeSecLogJoinObjectListOutcome DescribeSecLogJoinObjectList(const Model::DescribeSecLogJoinObjectListRequest &request);
                void DescribeSecLogJoinObjectListAsync(const Model::DescribeSecLogJoinObjectListRequest& request, const DescribeSecLogJoinObjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecLogJoinObjectListOutcomeCallable DescribeSecLogJoinObjectListCallable(const Model::DescribeSecLogJoinObjectListRequest& request);

                /**
                 *查询安全日志接入列表
                 * @param req DescribeSecLogJoinTypeListRequest
                 * @return DescribeSecLogJoinTypeListOutcome
                 */
                DescribeSecLogJoinTypeListOutcome DescribeSecLogJoinTypeList(const Model::DescribeSecLogJoinTypeListRequest &request);
                void DescribeSecLogJoinTypeListAsync(const Model::DescribeSecLogJoinTypeListRequest& request, const DescribeSecLogJoinTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecLogJoinTypeListOutcomeCallable DescribeSecLogJoinTypeListCallable(const Model::DescribeSecLogJoinTypeListRequest& request);

                /**
                 *查询安全日志KafkaUIN
                 * @param req DescribeSecLogKafkaUINRequest
                 * @return DescribeSecLogKafkaUINOutcome
                 */
                DescribeSecLogKafkaUINOutcome DescribeSecLogKafkaUIN(const Model::DescribeSecLogKafkaUINRequest &request);
                void DescribeSecLogKafkaUINAsync(const Model::DescribeSecLogKafkaUINRequest& request, const DescribeSecLogKafkaUINAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecLogKafkaUINOutcomeCallable DescribeSecLogKafkaUINCallable(const Model::DescribeSecLogKafkaUINRequest& request);

                /**
                 *查询安全日志商品信息
                 * @param req DescribeSecLogVasInfoRequest
                 * @return DescribeSecLogVasInfoOutcome
                 */
                DescribeSecLogVasInfoOutcome DescribeSecLogVasInfo(const Model::DescribeSecLogVasInfoRequest &request);
                void DescribeSecLogVasInfoAsync(const Model::DescribeSecLogVasInfoRequest& request, const DescribeSecLogVasInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecLogVasInfoOutcomeCallable DescribeSecLogVasInfoCallable(const Model::DescribeSecLogVasInfoRequest& request);

                /**
                 *查询超级节点pod列表
                 * @param req DescribeSuperNodePodListRequest
                 * @return DescribeSuperNodePodListOutcome
                 */
                DescribeSuperNodePodListOutcome DescribeSuperNodePodList(const Model::DescribeSuperNodePodListRequest &request);
                void DescribeSuperNodePodListAsync(const Model::DescribeSuperNodePodListRequest& request, const DescribeSuperNodePodListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSuperNodePodListOutcomeCallable DescribeSuperNodePodListCallable(const Model::DescribeSuperNodePodListRequest& request);

                /**
                 *查询支持防御的漏洞列表
                 * @param req DescribeSupportDefenceVulRequest
                 * @return DescribeSupportDefenceVulOutcome
                 */
                DescribeSupportDefenceVulOutcome DescribeSupportDefenceVul(const Model::DescribeSupportDefenceVulRequest &request);
                void DescribeSupportDefenceVulAsync(const Model::DescribeSupportDefenceVulRequest& request, const DescribeSupportDefenceVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSupportDefenceVulOutcomeCallable DescribeSupportDefenceVulCallable(const Model::DescribeSupportDefenceVulRequest& request);

                /**
                 *查询系统漏洞列表
                 * @param req DescribeSystemVulListRequest
                 * @return DescribeSystemVulListOutcome
                 */
                DescribeSystemVulListOutcome DescribeSystemVulList(const Model::DescribeSystemVulListRequest &request);
                void DescribeSystemVulListAsync(const Model::DescribeSystemVulListRequest& request, const DescribeSystemVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSystemVulListOutcomeCallable DescribeSystemVulListCallable(const Model::DescribeSystemVulListRequest& request);

                /**
                 *查询检查结果总览，返回受影响的节点数量，返回7天的数据，总共7个
                 * @param req DescribeTaskResultSummaryRequest
                 * @return DescribeTaskResultSummaryOutcome
                 */
                DescribeTaskResultSummaryOutcome DescribeTaskResultSummary(const Model::DescribeTaskResultSummaryRequest &request);
                void DescribeTaskResultSummaryAsync(const Model::DescribeTaskResultSummaryRequest& request, const DescribeTaskResultSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskResultSummaryOutcomeCallable DescribeTaskResultSummaryCallable(const Model::DescribeTaskResultSummaryRequest& request);

                /**
                 *查询容器安全概览信息
                 * @param req DescribeTcssSummaryRequest
                 * @return DescribeTcssSummaryOutcome
                 */
                DescribeTcssSummaryOutcome DescribeTcssSummary(const Model::DescribeTcssSummaryRequest &request);
                void DescribeTcssSummaryAsync(const Model::DescribeTcssSummaryRequest& request, const DescribeTcssSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTcssSummaryOutcomeCallable DescribeTcssSummaryCallable(const Model::DescribeTcssSummaryRequest& request);

                /**
                 *查询当天未授权核数趋势
                 * @param req DescribeUnauthorizedCoresTendencyRequest
                 * @return DescribeUnauthorizedCoresTendencyOutcome
                 */
                DescribeUnauthorizedCoresTendencyOutcome DescribeUnauthorizedCoresTendency(const Model::DescribeUnauthorizedCoresTendencyRequest &request);
                void DescribeUnauthorizedCoresTendencyAsync(const Model::DescribeUnauthorizedCoresTendencyRequest& request, const DescribeUnauthorizedCoresTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnauthorizedCoresTendencyOutcomeCallable DescribeUnauthorizedCoresTendencyCallable(const Model::DescribeUnauthorizedCoresTendencyRequest& request);

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
                 *获取用户的pod列表
                 * @param req DescribeUserPodListRequest
                 * @return DescribeUserPodListOutcome
                 */
                DescribeUserPodListOutcome DescribeUserPodList(const Model::DescribeUserPodListRequest &request);
                void DescribeUserPodListAsync(const Model::DescribeUserPodListRequest& request, const DescribeUserPodListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserPodListOutcomeCallable DescribeUserPodListCallable(const Model::DescribeUserPodListRequest& request);

                /**
                 *DescribeValueAddedSrvInfo查询增值服务需购买信息
                 * @param req DescribeValueAddedSrvInfoRequest
                 * @return DescribeValueAddedSrvInfoOutcome
                 */
                DescribeValueAddedSrvInfoOutcome DescribeValueAddedSrvInfo(const Model::DescribeValueAddedSrvInfoRequest &request);
                void DescribeValueAddedSrvInfoAsync(const Model::DescribeValueAddedSrvInfoRequest& request, const DescribeValueAddedSrvInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeValueAddedSrvInfoOutcomeCallable DescribeValueAddedSrvInfoCallable(const Model::DescribeValueAddedSrvInfoRequest& request);

                /**
                 *查询木马自动隔离样本详情
                 * @param req DescribeVirusAutoIsolateSampleDetailRequest
                 * @return DescribeVirusAutoIsolateSampleDetailOutcome
                 */
                DescribeVirusAutoIsolateSampleDetailOutcome DescribeVirusAutoIsolateSampleDetail(const Model::DescribeVirusAutoIsolateSampleDetailRequest &request);
                void DescribeVirusAutoIsolateSampleDetailAsync(const Model::DescribeVirusAutoIsolateSampleDetailRequest& request, const DescribeVirusAutoIsolateSampleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusAutoIsolateSampleDetailOutcomeCallable DescribeVirusAutoIsolateSampleDetailCallable(const Model::DescribeVirusAutoIsolateSampleDetailRequest& request);

                /**
                 *查询木马自动隔离样本下载链接
                 * @param req DescribeVirusAutoIsolateSampleDownloadURLRequest
                 * @return DescribeVirusAutoIsolateSampleDownloadURLOutcome
                 */
                DescribeVirusAutoIsolateSampleDownloadURLOutcome DescribeVirusAutoIsolateSampleDownloadURL(const Model::DescribeVirusAutoIsolateSampleDownloadURLRequest &request);
                void DescribeVirusAutoIsolateSampleDownloadURLAsync(const Model::DescribeVirusAutoIsolateSampleDownloadURLRequest& request, const DescribeVirusAutoIsolateSampleDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusAutoIsolateSampleDownloadURLOutcomeCallable DescribeVirusAutoIsolateSampleDownloadURLCallable(const Model::DescribeVirusAutoIsolateSampleDownloadURLRequest& request);

                /**
                 *查询木马自动隔离样本列表
                 * @param req DescribeVirusAutoIsolateSampleListRequest
                 * @return DescribeVirusAutoIsolateSampleListOutcome
                 */
                DescribeVirusAutoIsolateSampleListOutcome DescribeVirusAutoIsolateSampleList(const Model::DescribeVirusAutoIsolateSampleListRequest &request);
                void DescribeVirusAutoIsolateSampleListAsync(const Model::DescribeVirusAutoIsolateSampleListRequest& request, const DescribeVirusAutoIsolateSampleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusAutoIsolateSampleListOutcomeCallable DescribeVirusAutoIsolateSampleListCallable(const Model::DescribeVirusAutoIsolateSampleListRequest& request);

                /**
                 *查询木马自动隔离设置
                 * @param req DescribeVirusAutoIsolateSettingRequest
                 * @return DescribeVirusAutoIsolateSettingOutcome
                 */
                DescribeVirusAutoIsolateSettingOutcome DescribeVirusAutoIsolateSetting(const Model::DescribeVirusAutoIsolateSettingRequest &request);
                void DescribeVirusAutoIsolateSettingAsync(const Model::DescribeVirusAutoIsolateSettingRequest& request, const DescribeVirusAutoIsolateSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusAutoIsolateSettingOutcomeCallable DescribeVirusAutoIsolateSettingCallable(const Model::DescribeVirusAutoIsolateSettingRequest& request);

                /**
                 *运行时查询木马文件信息
                 * @param req DescribeVirusDetailRequest
                 * @return DescribeVirusDetailOutcome
                 */
                DescribeVirusDetailOutcome DescribeVirusDetail(const Model::DescribeVirusDetailRequest &request);
                void DescribeVirusDetailAsync(const Model::DescribeVirusDetailRequest& request, const DescribeVirusDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusDetailOutcomeCallable DescribeVirusDetailCallable(const Model::DescribeVirusDetailRequest& request);

                /**
                 *查询木马事件趋势
                 * @param req DescribeVirusEventTendencyRequest
                 * @return DescribeVirusEventTendencyOutcome
                 */
                DescribeVirusEventTendencyOutcome DescribeVirusEventTendency(const Model::DescribeVirusEventTendencyRequest &request);
                void DescribeVirusEventTendencyAsync(const Model::DescribeVirusEventTendencyRequest& request, const DescribeVirusEventTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusEventTendencyOutcomeCallable DescribeVirusEventTendencyCallable(const Model::DescribeVirusEventTendencyRequest& request);

                /**
                 *查询运行时文件查杀事件列表
                 * @param req DescribeVirusListRequest
                 * @return DescribeVirusListOutcome
                 */
                DescribeVirusListOutcome DescribeVirusList(const Model::DescribeVirusListRequest &request);
                void DescribeVirusListAsync(const Model::DescribeVirusListRequest& request, const DescribeVirusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusListOutcomeCallable DescribeVirusListCallable(const Model::DescribeVirusListRequest& request);

                /**
                 *查询木马一键检测预估超时时间
                 * @param req DescribeVirusManualScanEstimateTimeoutRequest
                 * @return DescribeVirusManualScanEstimateTimeoutOutcome
                 */
                DescribeVirusManualScanEstimateTimeoutOutcome DescribeVirusManualScanEstimateTimeout(const Model::DescribeVirusManualScanEstimateTimeoutRequest &request);
                void DescribeVirusManualScanEstimateTimeoutAsync(const Model::DescribeVirusManualScanEstimateTimeoutRequest& request, const DescribeVirusManualScanEstimateTimeoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusManualScanEstimateTimeoutOutcomeCallable DescribeVirusManualScanEstimateTimeoutCallable(const Model::DescribeVirusManualScanEstimateTimeoutRequest& request);

                /**
                 *运行时查询文件查杀实时监控设置
                 * @param req DescribeVirusMonitorSettingRequest
                 * @return DescribeVirusMonitorSettingOutcome
                 */
                DescribeVirusMonitorSettingOutcome DescribeVirusMonitorSetting(const Model::DescribeVirusMonitorSettingRequest &request);
                void DescribeVirusMonitorSettingAsync(const Model::DescribeVirusMonitorSettingRequest& request, const DescribeVirusMonitorSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusMonitorSettingOutcomeCallable DescribeVirusMonitorSettingCallable(const Model::DescribeVirusMonitorSettingRequest& request);

                /**
                 *查询木马样本下载url
                 * @param req DescribeVirusSampleDownloadUrlRequest
                 * @return DescribeVirusSampleDownloadUrlOutcome
                 */
                DescribeVirusSampleDownloadUrlOutcome DescribeVirusSampleDownloadUrl(const Model::DescribeVirusSampleDownloadUrlRequest &request);
                void DescribeVirusSampleDownloadUrlAsync(const Model::DescribeVirusSampleDownloadUrlRequest& request, const DescribeVirusSampleDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVirusSampleDownloadUrlOutcomeCallable DescribeVirusSampleDownloadUrlCallable(const Model::DescribeVirusSampleDownloadUrlRequest& request);

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
                 *查询受漏洞的容器列表
                 * @param req DescribeVulContainerListRequest
                 * @return DescribeVulContainerListOutcome
                 */
                DescribeVulContainerListOutcome DescribeVulContainerList(const Model::DescribeVulContainerListRequest &request);
                void DescribeVulContainerListAsync(const Model::DescribeVulContainerListRequest& request, const DescribeVulContainerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulContainerListOutcomeCallable DescribeVulContainerListCallable(const Model::DescribeVulContainerListRequest& request);

                /**
                 *查询漏洞防御事件列表
                 * @param req DescribeVulDefenceEventRequest
                 * @return DescribeVulDefenceEventOutcome
                 */
                DescribeVulDefenceEventOutcome DescribeVulDefenceEvent(const Model::DescribeVulDefenceEventRequest &request);
                void DescribeVulDefenceEventAsync(const Model::DescribeVulDefenceEventRequest& request, const DescribeVulDefenceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefenceEventOutcomeCallable DescribeVulDefenceEventCallable(const Model::DescribeVulDefenceEventRequest& request);

                /**
                 *查询漏洞防御事件详情
                 * @param req DescribeVulDefenceEventDetailRequest
                 * @return DescribeVulDefenceEventDetailOutcome
                 */
                DescribeVulDefenceEventDetailOutcome DescribeVulDefenceEventDetail(const Model::DescribeVulDefenceEventDetailRequest &request);
                void DescribeVulDefenceEventDetailAsync(const Model::DescribeVulDefenceEventDetailRequest& request, const DescribeVulDefenceEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefenceEventDetailOutcomeCallable DescribeVulDefenceEventDetailCallable(const Model::DescribeVulDefenceEventDetailRequest& request);

                /**
                 *查询漏洞防御攻击事件趋势
                 * @param req DescribeVulDefenceEventTendencyRequest
                 * @return DescribeVulDefenceEventTendencyOutcome
                 */
                DescribeVulDefenceEventTendencyOutcome DescribeVulDefenceEventTendency(const Model::DescribeVulDefenceEventTendencyRequest &request);
                void DescribeVulDefenceEventTendencyAsync(const Model::DescribeVulDefenceEventTendencyRequest& request, const DescribeVulDefenceEventTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefenceEventTendencyOutcomeCallable DescribeVulDefenceEventTendencyCallable(const Model::DescribeVulDefenceEventTendencyRequest& request);

                /**
                 *查询漏洞防御的主机列表
                 * @param req DescribeVulDefenceHostRequest
                 * @return DescribeVulDefenceHostOutcome
                 */
                DescribeVulDefenceHostOutcome DescribeVulDefenceHost(const Model::DescribeVulDefenceHostRequest &request);
                void DescribeVulDefenceHostAsync(const Model::DescribeVulDefenceHostRequest& request, const DescribeVulDefenceHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefenceHostOutcomeCallable DescribeVulDefenceHostCallable(const Model::DescribeVulDefenceHostRequest& request);

                /**
                 *查询漏洞防御插件列表
                 * @param req DescribeVulDefencePluginRequest
                 * @return DescribeVulDefencePluginOutcome
                 */
                DescribeVulDefencePluginOutcome DescribeVulDefencePlugin(const Model::DescribeVulDefencePluginRequest &request);
                void DescribeVulDefencePluginAsync(const Model::DescribeVulDefencePluginRequest& request, const DescribeVulDefencePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefencePluginOutcomeCallable DescribeVulDefencePluginCallable(const Model::DescribeVulDefencePluginRequest& request);

                /**
                 *查询漏洞防御设置信息
                 * @param req DescribeVulDefenceSettingRequest
                 * @return DescribeVulDefenceSettingOutcome
                 */
                DescribeVulDefenceSettingOutcome DescribeVulDefenceSetting(const Model::DescribeVulDefenceSettingRequest &request);
                void DescribeVulDefenceSettingAsync(const Model::DescribeVulDefenceSettingRequest& request, const DescribeVulDefenceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefenceSettingOutcomeCallable DescribeVulDefenceSettingCallable(const Model::DescribeVulDefenceSettingRequest& request);

                /**
                 *查询漏洞详情
                 * @param req DescribeVulDetailRequest
                 * @return DescribeVulDetailOutcome
                 */
                DescribeVulDetailOutcome DescribeVulDetail(const Model::DescribeVulDetailRequest &request);
                void DescribeVulDetailAsync(const Model::DescribeVulDetailRequest& request, const DescribeVulDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDetailOutcomeCallable DescribeVulDetailCallable(const Model::DescribeVulDetailRequest& request);

                /**
                 *查询漏洞扫描忽略的本地镜像列表
                 * @param req DescribeVulIgnoreLocalImageListRequest
                 * @return DescribeVulIgnoreLocalImageListOutcome
                 */
                DescribeVulIgnoreLocalImageListOutcome DescribeVulIgnoreLocalImageList(const Model::DescribeVulIgnoreLocalImageListRequest &request);
                void DescribeVulIgnoreLocalImageListAsync(const Model::DescribeVulIgnoreLocalImageListRequest& request, const DescribeVulIgnoreLocalImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulIgnoreLocalImageListOutcomeCallable DescribeVulIgnoreLocalImageListCallable(const Model::DescribeVulIgnoreLocalImageListRequest& request);

                /**
                 *查询漏洞扫描忽略的仓库镜像列表
                 * @param req DescribeVulIgnoreRegistryImageListRequest
                 * @return DescribeVulIgnoreRegistryImageListOutcome
                 */
                DescribeVulIgnoreRegistryImageListOutcome DescribeVulIgnoreRegistryImageList(const Model::DescribeVulIgnoreRegistryImageListRequest &request);
                void DescribeVulIgnoreRegistryImageListAsync(const Model::DescribeVulIgnoreRegistryImageListRequest& request, const DescribeVulIgnoreRegistryImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulIgnoreRegistryImageListOutcomeCallable DescribeVulIgnoreRegistryImageListCallable(const Model::DescribeVulIgnoreRegistryImageListRequest& request);

                /**
                 *查询漏洞影响的镜像列表
                 * @param req DescribeVulImageListRequest
                 * @return DescribeVulImageListOutcome
                 */
                DescribeVulImageListOutcome DescribeVulImageList(const Model::DescribeVulImageListRequest &request);
                void DescribeVulImageListAsync(const Model::DescribeVulImageListRequest& request, const DescribeVulImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulImageListOutcomeCallable DescribeVulImageListCallable(const Model::DescribeVulImageListRequest& request);

                /**
                 *查询漏洞镜像统计
                 * @param req DescribeVulImageSummaryRequest
                 * @return DescribeVulImageSummaryOutcome
                 */
                DescribeVulImageSummaryOutcome DescribeVulImageSummary(const Model::DescribeVulImageSummaryRequest &request);
                void DescribeVulImageSummaryAsync(const Model::DescribeVulImageSummaryRequest& request, const DescribeVulImageSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulImageSummaryOutcomeCallable DescribeVulImageSummaryCallable(const Model::DescribeVulImageSummaryRequest& request);

                /**
                 *查询应急漏洞各威胁等级统计镜像数
                 * @param req DescribeVulLevelImageSummaryRequest
                 * @return DescribeVulLevelImageSummaryOutcome
                 */
                DescribeVulLevelImageSummaryOutcome DescribeVulLevelImageSummary(const Model::DescribeVulLevelImageSummaryRequest &request);
                void DescribeVulLevelImageSummaryAsync(const Model::DescribeVulLevelImageSummaryRequest& request, const DescribeVulLevelImageSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulLevelImageSummaryOutcomeCallable DescribeVulLevelImageSummaryCallable(const Model::DescribeVulLevelImageSummaryRequest& request);

                /**
                 *查询漏洞各威胁等级统计数
                 * @param req DescribeVulLevelSummaryRequest
                 * @return DescribeVulLevelSummaryOutcome
                 */
                DescribeVulLevelSummaryOutcome DescribeVulLevelSummary(const Model::DescribeVulLevelSummaryRequest &request);
                void DescribeVulLevelSummaryAsync(const Model::DescribeVulLevelSummaryRequest& request, const DescribeVulLevelSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulLevelSummaryOutcomeCallable DescribeVulLevelSummaryCallable(const Model::DescribeVulLevelSummaryRequest& request);

                /**
                 *查询漏洞影响的仓库镜像列表
                 * @param req DescribeVulRegistryImageListRequest
                 * @return DescribeVulRegistryImageListOutcome
                 */
                DescribeVulRegistryImageListOutcome DescribeVulRegistryImageList(const Model::DescribeVulRegistryImageListRequest &request);
                void DescribeVulRegistryImageListAsync(const Model::DescribeVulRegistryImageListRequest& request, const DescribeVulRegistryImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulRegistryImageListOutcomeCallable DescribeVulRegistryImageListCallable(const Model::DescribeVulRegistryImageListRequest& request);

                /**
                 *统计漏洞扫描页已授权和未扫描镜像数
                 * @param req DescribeVulScanAuthorizedImageSummaryRequest
                 * @return DescribeVulScanAuthorizedImageSummaryOutcome
                 */
                DescribeVulScanAuthorizedImageSummaryOutcome DescribeVulScanAuthorizedImageSummary(const Model::DescribeVulScanAuthorizedImageSummaryRequest &request);
                void DescribeVulScanAuthorizedImageSummaryAsync(const Model::DescribeVulScanAuthorizedImageSummaryRequest& request, const DescribeVulScanAuthorizedImageSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulScanAuthorizedImageSummaryOutcomeCallable DescribeVulScanAuthorizedImageSummaryCallable(const Model::DescribeVulScanAuthorizedImageSummaryRequest& request);

                /**
                 *查询漏洞扫描任务信息
                 * @param req DescribeVulScanInfoRequest
                 * @return DescribeVulScanInfoOutcome
                 */
                DescribeVulScanInfoOutcome DescribeVulScanInfo(const Model::DescribeVulScanInfoRequest &request);
                void DescribeVulScanInfoAsync(const Model::DescribeVulScanInfoRequest& request, const DescribeVulScanInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulScanInfoOutcomeCallable DescribeVulScanInfoCallable(const Model::DescribeVulScanInfoRequest& request);

                /**
                 *查询漏洞扫描任务的本地镜像列表
                 * @param req DescribeVulScanLocalImageListRequest
                 * @return DescribeVulScanLocalImageListOutcome
                 */
                DescribeVulScanLocalImageListOutcome DescribeVulScanLocalImageList(const Model::DescribeVulScanLocalImageListRequest &request);
                void DescribeVulScanLocalImageListAsync(const Model::DescribeVulScanLocalImageListRequest& request, const DescribeVulScanLocalImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulScanLocalImageListOutcomeCallable DescribeVulScanLocalImageListCallable(const Model::DescribeVulScanLocalImageListRequest& request);

                /**
                 *查询漏洞风险统计概览
                 * @param req DescribeVulSummaryRequest
                 * @return DescribeVulSummaryOutcome
                 */
                DescribeVulSummaryOutcome DescribeVulSummary(const Model::DescribeVulSummaryRequest &request);
                void DescribeVulSummaryAsync(const Model::DescribeVulSummaryRequest& request, const DescribeVulSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulSummaryOutcomeCallable DescribeVulSummaryCallable(const Model::DescribeVulSummaryRequest& request);

                /**
                 *查询本地镜像、仓库镜像中严重&高危的漏洞趋势
                 * @param req DescribeVulTendencyRequest
                 * @return DescribeVulTendencyOutcome
                 */
                DescribeVulTendencyOutcome DescribeVulTendency(const Model::DescribeVulTendencyRequest &request);
                void DescribeVulTendencyAsync(const Model::DescribeVulTendencyRequest& request, const DescribeVulTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulTendencyOutcomeCallable DescribeVulTendencyCallable(const Model::DescribeVulTendencyRequest& request);

                /**
                 *查询漏洞Top排名列表
                 * @param req DescribeVulTopRankingRequest
                 * @return DescribeVulTopRankingOutcome
                 */
                DescribeVulTopRankingOutcome DescribeVulTopRanking(const Model::DescribeVulTopRankingRequest &request);
                void DescribeVulTopRankingAsync(const Model::DescribeVulTopRankingRequest& request, const DescribeVulTopRankingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulTopRankingOutcomeCallable DescribeVulTopRankingCallable(const Model::DescribeVulTopRankingRequest& request);

                /**
                 *获取告警策略列表
                 * @param req DescribeWarningRulesRequest
                 * @return DescribeWarningRulesOutcome
                 */
                DescribeWarningRulesOutcome DescribeWarningRules(const Model::DescribeWarningRulesRequest &request);
                void DescribeWarningRulesAsync(const Model::DescribeWarningRulesRequest& request, const DescribeWarningRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWarningRulesOutcomeCallable DescribeWarningRulesCallable(const Model::DescribeWarningRulesRequest& request);

                /**
                 *查询web应用漏洞列表
                 * @param req DescribeWebVulListRequest
                 * @return DescribeWebVulListOutcome
                 */
                DescribeWebVulListOutcome DescribeWebVulList(const Model::DescribeWebVulListRequest &request);
                void DescribeWebVulListAsync(const Model::DescribeWebVulListRequest& request, const DescribeWebVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebVulListOutcomeCallable DescribeWebVulListCallable(const Model::DescribeWebVulListRequest& request);

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
                 *隔离容器网络状态
                 * @param req ModifyContainerNetStatusRequest
                 * @return ModifyContainerNetStatusOutcome
                 */
                ModifyContainerNetStatusOutcome ModifyContainerNetStatus(const Model::ModifyContainerNetStatusRequest &request);
                void ModifyContainerNetStatusAsync(const Model::ModifyContainerNetStatusRequest& request, const ModifyContainerNetStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyContainerNetStatusOutcomeCallable ModifyContainerNetStatusCallable(const Model::ModifyContainerNetStatusRequest& request);

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
                 *修改逃逸白名单
                 * @param req ModifyEscapeWhiteListRequest
                 * @return ModifyEscapeWhiteListOutcome
                 */
                ModifyEscapeWhiteListOutcome ModifyEscapeWhiteList(const Model::ModifyEscapeWhiteListRequest &request);
                void ModifyEscapeWhiteListAsync(const Model::ModifyEscapeWhiteListRequest& request, const ModifyEscapeWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEscapeWhiteListOutcomeCallable ModifyEscapeWhiteListCallable(const Model::ModifyEscapeWhiteListRequest& request);

                /**
                 *批量授权镜像扫描V2.0
                 * @param req ModifyImageAuthorizedRequest
                 * @return ModifyImageAuthorizedOutcome
                 */
                ModifyImageAuthorizedOutcome ModifyImageAuthorized(const Model::ModifyImageAuthorizedRequest &request);
                void ModifyImageAuthorizedAsync(const Model::ModifyImageAuthorizedRequest& request, const ModifyImageAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageAuthorizedOutcomeCallable ModifyImageAuthorizedCallable(const Model::ModifyImageAuthorizedRequest& request);

                /**
                 *修改k8sapi异常事件状态
                 * @param req ModifyK8sApiAbnormalEventStatusRequest
                 * @return ModifyK8sApiAbnormalEventStatusOutcome
                 */
                ModifyK8sApiAbnormalEventStatusOutcome ModifyK8sApiAbnormalEventStatus(const Model::ModifyK8sApiAbnormalEventStatusRequest &request);
                void ModifyK8sApiAbnormalEventStatusAsync(const Model::ModifyK8sApiAbnormalEventStatusRequest& request, const ModifyK8sApiAbnormalEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyK8sApiAbnormalEventStatusOutcomeCallable ModifyK8sApiAbnormalEventStatusCallable(const Model::ModifyK8sApiAbnormalEventStatusRequest& request);

                /**
                 *修改k8sapi异常规则信息
                 * @param req ModifyK8sApiAbnormalRuleInfoRequest
                 * @return ModifyK8sApiAbnormalRuleInfoOutcome
                 */
                ModifyK8sApiAbnormalRuleInfoOutcome ModifyK8sApiAbnormalRuleInfo(const Model::ModifyK8sApiAbnormalRuleInfoRequest &request);
                void ModifyK8sApiAbnormalRuleInfoAsync(const Model::ModifyK8sApiAbnormalRuleInfoRequest& request, const ModifyK8sApiAbnormalRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyK8sApiAbnormalRuleInfoOutcomeCallable ModifyK8sApiAbnormalRuleInfoCallable(const Model::ModifyK8sApiAbnormalRuleInfoRequest& request);

                /**
                 *修改k8sapi异常事件规则状态
                 * @param req ModifyK8sApiAbnormalRuleStatusRequest
                 * @return ModifyK8sApiAbnormalRuleStatusOutcome
                 */
                ModifyK8sApiAbnormalRuleStatusOutcome ModifyK8sApiAbnormalRuleStatus(const Model::ModifyK8sApiAbnormalRuleStatusRequest &request);
                void ModifyK8sApiAbnormalRuleStatusAsync(const Model::ModifyK8sApiAbnormalRuleStatusRequest& request, const ModifyK8sApiAbnormalRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyK8sApiAbnormalRuleStatusOutcomeCallable ModifyK8sApiAbnormalRuleStatusCallable(const Model::ModifyK8sApiAbnormalRuleStatusRequest& request);

                /**
                 *编辑或者创建java内存马白名单
                 * @param req ModifyRaspRulesRequest
                 * @return ModifyRaspRulesOutcome
                 */
                ModifyRaspRulesOutcome ModifyRaspRules(const Model::ModifyRaspRulesRequest &request);
                void ModifyRaspRulesAsync(const Model::ModifyRaspRulesRequest& request, const ModifyRaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRaspRulesOutcomeCallable ModifyRaspRulesCallable(const Model::ModifyRaspRulesRequest& request);

                /**
                 *修改反弹shell事件的状态信息
                 * @param req ModifyReverseShellStatusRequest
                 * @return ModifyReverseShellStatusOutcome
                 */
                ModifyReverseShellStatusOutcome ModifyReverseShellStatus(const Model::ModifyReverseShellStatusRequest &request);
                void ModifyReverseShellStatusAsync(const Model::ModifyReverseShellStatusRequest& request, const ModifyReverseShellStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReverseShellStatusOutcomeCallable ModifyReverseShellStatusCallable(const Model::ModifyReverseShellStatusRequest& request);

                /**
                 *编辑恶意请求事件状态
                 * @param req ModifyRiskDnsEventStatusRequest
                 * @return ModifyRiskDnsEventStatusOutcome
                 */
                ModifyRiskDnsEventStatusOutcome ModifyRiskDnsEventStatus(const Model::ModifyRiskDnsEventStatusRequest &request);
                void ModifyRiskDnsEventStatusAsync(const Model::ModifyRiskDnsEventStatusRequest& request, const ModifyRiskDnsEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskDnsEventStatusOutcomeCallable ModifyRiskDnsEventStatusCallable(const Model::ModifyRiskDnsEventStatusRequest& request);

                /**
                 *修改高危系统调用事件的状态信息
                 * @param req ModifyRiskSyscallStatusRequest
                 * @return ModifyRiskSyscallStatusOutcome
                 */
                ModifyRiskSyscallStatusOutcome ModifyRiskSyscallStatus(const Model::ModifyRiskSyscallStatusRequest &request);
                void ModifyRiskSyscallStatusAsync(const Model::ModifyRiskSyscallStatusRequest& request, const ModifyRiskSyscallStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskSyscallStatusOutcomeCallable ModifyRiskSyscallStatusCallable(const Model::ModifyRiskSyscallStatusRequest& request);

                /**
                 *修改安全日志清理设置信息
                 * @param req ModifySecLogCleanSettingInfoRequest
                 * @return ModifySecLogCleanSettingInfoOutcome
                 */
                ModifySecLogCleanSettingInfoOutcome ModifySecLogCleanSettingInfo(const Model::ModifySecLogCleanSettingInfoRequest &request);
                void ModifySecLogCleanSettingInfoAsync(const Model::ModifySecLogCleanSettingInfoRequest& request, const ModifySecLogCleanSettingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecLogCleanSettingInfoOutcomeCallable ModifySecLogCleanSettingInfoCallable(const Model::ModifySecLogCleanSettingInfoRequest& request);

                /**
                 *更新安全日志-日志投递cls配置
                 * @param req ModifySecLogDeliveryClsSettingRequest
                 * @return ModifySecLogDeliveryClsSettingOutcome
                 */
                ModifySecLogDeliveryClsSettingOutcome ModifySecLogDeliveryClsSetting(const Model::ModifySecLogDeliveryClsSettingRequest &request);
                void ModifySecLogDeliveryClsSettingAsync(const Model::ModifySecLogDeliveryClsSettingRequest& request, const ModifySecLogDeliveryClsSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecLogDeliveryClsSettingOutcomeCallable ModifySecLogDeliveryClsSettingCallable(const Model::ModifySecLogDeliveryClsSettingRequest& request);

                /**
                 *更新安全日志投递kafka设置
                 * @param req ModifySecLogDeliveryKafkaSettingRequest
                 * @return ModifySecLogDeliveryKafkaSettingOutcome
                 */
                ModifySecLogDeliveryKafkaSettingOutcome ModifySecLogDeliveryKafkaSetting(const Model::ModifySecLogDeliveryKafkaSettingRequest &request);
                void ModifySecLogDeliveryKafkaSettingAsync(const Model::ModifySecLogDeliveryKafkaSettingRequest& request, const ModifySecLogDeliveryKafkaSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecLogDeliveryKafkaSettingOutcomeCallable ModifySecLogDeliveryKafkaSettingCallable(const Model::ModifySecLogDeliveryKafkaSettingRequest& request);

                /**
                 *修改安全日志接入对象
                 * @param req ModifySecLogJoinObjectsRequest
                 * @return ModifySecLogJoinObjectsOutcome
                 */
                ModifySecLogJoinObjectsOutcome ModifySecLogJoinObjects(const Model::ModifySecLogJoinObjectsRequest &request);
                void ModifySecLogJoinObjectsAsync(const Model::ModifySecLogJoinObjectsRequest& request, const ModifySecLogJoinObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecLogJoinObjectsOutcomeCallable ModifySecLogJoinObjectsCallable(const Model::ModifySecLogJoinObjectsRequest& request);

                /**
                 *修改安全日志接入状态
                 * @param req ModifySecLogJoinStateRequest
                 * @return ModifySecLogJoinStateOutcome
                 */
                ModifySecLogJoinStateOutcome ModifySecLogJoinState(const Model::ModifySecLogJoinStateRequest &request);
                void ModifySecLogJoinStateAsync(const Model::ModifySecLogJoinStateRequest& request, const ModifySecLogJoinStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecLogJoinStateOutcomeCallable ModifySecLogJoinStateCallable(const Model::ModifySecLogJoinStateRequest& request);

                /**
                 *修改安全日志kafkaUIN
                 * @param req ModifySecLogKafkaUINRequest
                 * @return ModifySecLogKafkaUINOutcome
                 */
                ModifySecLogKafkaUINOutcome ModifySecLogKafkaUIN(const Model::ModifySecLogKafkaUINRequest &request);
                void ModifySecLogKafkaUINAsync(const Model::ModifySecLogKafkaUINRequest& request, const ModifySecLogKafkaUINAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecLogKafkaUINOutcomeCallable ModifySecLogKafkaUINCallable(const Model::ModifySecLogKafkaUINRequest& request);

                /**
                 *修改木马自动隔离样本开关
                 * @param req ModifyVirusAutoIsolateExampleSwitchRequest
                 * @return ModifyVirusAutoIsolateExampleSwitchOutcome
                 */
                ModifyVirusAutoIsolateExampleSwitchOutcome ModifyVirusAutoIsolateExampleSwitch(const Model::ModifyVirusAutoIsolateExampleSwitchRequest &request);
                void ModifyVirusAutoIsolateExampleSwitchAsync(const Model::ModifyVirusAutoIsolateExampleSwitchRequest& request, const ModifyVirusAutoIsolateExampleSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVirusAutoIsolateExampleSwitchOutcomeCallable ModifyVirusAutoIsolateExampleSwitchCallable(const Model::ModifyVirusAutoIsolateExampleSwitchRequest& request);

                /**
                 *修改木马自动隔离设置
                 * @param req ModifyVirusAutoIsolateSettingRequest
                 * @return ModifyVirusAutoIsolateSettingOutcome
                 */
                ModifyVirusAutoIsolateSettingOutcome ModifyVirusAutoIsolateSetting(const Model::ModifyVirusAutoIsolateSettingRequest &request);
                void ModifyVirusAutoIsolateSettingAsync(const Model::ModifyVirusAutoIsolateSettingRequest& request, const ModifyVirusAutoIsolateSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVirusAutoIsolateSettingOutcomeCallable ModifyVirusAutoIsolateSettingCallable(const Model::ModifyVirusAutoIsolateSettingRequest& request);

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
                 *修改漏洞防御事件状态
                 * @param req ModifyVulDefenceEventStatusRequest
                 * @return ModifyVulDefenceEventStatusOutcome
                 */
                ModifyVulDefenceEventStatusOutcome ModifyVulDefenceEventStatus(const Model::ModifyVulDefenceEventStatusRequest &request);
                void ModifyVulDefenceEventStatusAsync(const Model::ModifyVulDefenceEventStatusRequest& request, const ModifyVulDefenceEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVulDefenceEventStatusOutcomeCallable ModifyVulDefenceEventStatusCallable(const Model::ModifyVulDefenceEventStatusRequest& request);

                /**
                 *编辑漏洞防御设置
                 * @param req ModifyVulDefenceSettingRequest
                 * @return ModifyVulDefenceSettingOutcome
                 */
                ModifyVulDefenceSettingOutcome ModifyVulDefenceSetting(const Model::ModifyVulDefenceSettingRequest &request);
                void ModifyVulDefenceSettingAsync(const Model::ModifyVulDefenceSettingRequest& request, const ModifyVulDefenceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVulDefenceSettingOutcomeCallable ModifyVulDefenceSettingCallable(const Model::ModifyVulDefenceSettingRequest& request);

                /**
                 *开通容器安全服务试用
                 * @param req OpenTcssTrialRequest
                 * @return OpenTcssTrialOutcome
                 */
                OpenTcssTrialOutcome OpenTcssTrial(const Model::OpenTcssTrialRequest &request);
                void OpenTcssTrialAsync(const Model::OpenTcssTrialRequest& request, const OpenTcssTrialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenTcssTrialOutcomeCallable OpenTcssTrialCallable(const Model::OpenTcssTrialRequest& request);

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
                 *重置安全日志主题设置
                 * @param req ResetSecLogTopicConfigRequest
                 * @return ResetSecLogTopicConfigOutcome
                 */
                ResetSecLogTopicConfigOutcome ResetSecLogTopicConfig(const Model::ResetSecLogTopicConfigRequest &request);
                void ResetSecLogTopicConfigAsync(const Model::ResetSecLogTopicConfigRequest& request, const ResetSecLogTopicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetSecLogTopicConfigOutcomeCallable ResetSecLogTopicConfigCallable(const Model::ResetSecLogTopicConfigRequest& request);

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
                 *停止漏洞扫描任务
                 * @param req StopVulScanTaskRequest
                 * @return StopVulScanTaskOutcome
                 */
                StopVulScanTaskOutcome StopVulScanTask(const Model::StopVulScanTaskRequest &request);
                void StopVulScanTaskAsync(const Model::StopVulScanTaskRequest& request, const StopVulScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopVulScanTaskOutcomeCallable StopVulScanTaskCallable(const Model::StopVulScanTaskRequest& request);

                /**
                 *编辑本地镜像自动授权开关
                 * @param req SwitchImageAutoAuthorizedRuleRequest
                 * @return SwitchImageAutoAuthorizedRuleOutcome
                 */
                SwitchImageAutoAuthorizedRuleOutcome SwitchImageAutoAuthorizedRule(const Model::SwitchImageAutoAuthorizedRuleRequest &request);
                void SwitchImageAutoAuthorizedRuleAsync(const Model::SwitchImageAutoAuthorizedRuleRequest& request, const SwitchImageAutoAuthorizedRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchImageAutoAuthorizedRuleOutcomeCallable SwitchImageAutoAuthorizedRuleCallable(const Model::SwitchImageAutoAuthorizedRuleRequest& request);

                /**
                 *镜像仓库资产刷新
                 * @param req SyncAssetImageRegistryAssetRequest
                 * @return SyncAssetImageRegistryAssetOutcome
                 */
                SyncAssetImageRegistryAssetOutcome SyncAssetImageRegistryAsset(const Model::SyncAssetImageRegistryAssetRequest &request);
                void SyncAssetImageRegistryAssetAsync(const Model::SyncAssetImageRegistryAssetRequest& request, const SyncAssetImageRegistryAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncAssetImageRegistryAssetOutcomeCallable SyncAssetImageRegistryAssetCallable(const Model::SyncAssetImageRegistryAssetRequest& request);

                /**
                 *容器网络创建网络策略更新并发布任务
                 * @param req UpdateAndPublishNetworkFirewallPolicyDetailRequest
                 * @return UpdateAndPublishNetworkFirewallPolicyDetailOutcome
                 */
                UpdateAndPublishNetworkFirewallPolicyDetailOutcome UpdateAndPublishNetworkFirewallPolicyDetail(const Model::UpdateAndPublishNetworkFirewallPolicyDetailRequest &request);
                void UpdateAndPublishNetworkFirewallPolicyDetailAsync(const Model::UpdateAndPublishNetworkFirewallPolicyDetailRequest& request, const UpdateAndPublishNetworkFirewallPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAndPublishNetworkFirewallPolicyDetailOutcomeCallable UpdateAndPublishNetworkFirewallPolicyDetailCallable(const Model::UpdateAndPublishNetworkFirewallPolicyDetailRequest& request);

                /**
                 *容器网络更新Yaml网络策略并发布任务
                 * @param req UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest
                 * @return UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcome
                 */
                UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcome UpdateAndPublishNetworkFirewallPolicyYamlDetail(const Model::UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest &request);
                void UpdateAndPublishNetworkFirewallPolicyYamlDetailAsync(const Model::UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest& request, const UpdateAndPublishNetworkFirewallPolicyYamlDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcomeCallable UpdateAndPublishNetworkFirewallPolicyYamlDetailCallable(const Model::UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest& request);

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

                /**
                 *容器网络创建网络策略更新任务
                 * @param req UpdateNetworkFirewallPolicyDetailRequest
                 * @return UpdateNetworkFirewallPolicyDetailOutcome
                 */
                UpdateNetworkFirewallPolicyDetailOutcome UpdateNetworkFirewallPolicyDetail(const Model::UpdateNetworkFirewallPolicyDetailRequest &request);
                void UpdateNetworkFirewallPolicyDetailAsync(const Model::UpdateNetworkFirewallPolicyDetailRequest& request, const UpdateNetworkFirewallPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateNetworkFirewallPolicyDetailOutcomeCallable UpdateNetworkFirewallPolicyDetailCallable(const Model::UpdateNetworkFirewallPolicyDetailRequest& request);

                /**
                 *容器网络更新Yaml网络策略任务
                 * @param req UpdateNetworkFirewallPolicyYamlDetailRequest
                 * @return UpdateNetworkFirewallPolicyYamlDetailOutcome
                 */
                UpdateNetworkFirewallPolicyYamlDetailOutcome UpdateNetworkFirewallPolicyYamlDetail(const Model::UpdateNetworkFirewallPolicyYamlDetailRequest &request);
                void UpdateNetworkFirewallPolicyYamlDetailAsync(const Model::UpdateNetworkFirewallPolicyYamlDetailRequest& request, const UpdateNetworkFirewallPolicyYamlDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateNetworkFirewallPolicyYamlDetailOutcomeCallable UpdateNetworkFirewallPolicyYamlDetailCallable(const Model::UpdateNetworkFirewallPolicyYamlDetailRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_TCSSCLIENT_H_
