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

#ifndef TENCENTCLOUD_TKE_V20180525_TKECLIENT_H_
#define TENCENTCLOUD_TKE_V20180525_TKECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tke/v20180525/model/AcquireClusterAdminRoleRequest.h>
#include <tencentcloud/tke/v20180525/model/AcquireClusterAdminRoleResponse.h>
#include <tencentcloud/tke/v20180525/model/AddClusterCIDRRequest.h>
#include <tencentcloud/tke/v20180525/model/AddClusterCIDRResponse.h>
#include <tencentcloud/tke/v20180525/model/AddExistedInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/AddExistedInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/AddNodeToNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/AddNodeToNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/AddVpcCniSubnetsRequest.h>
#include <tencentcloud/tke/v20180525/model/AddVpcCniSubnetsResponse.h>
#include <tencentcloud/tke/v20180525/model/CancelClusterReleaseRequest.h>
#include <tencentcloud/tke/v20180525/model/CancelClusterReleaseResponse.h>
#include <tencentcloud/tke/v20180525/model/CancelUpgradePlanRequest.h>
#include <tencentcloud/tke/v20180525/model/CancelUpgradePlanResponse.h>
#include <tencentcloud/tke/v20180525/model/CheckEdgeClusterCIDRRequest.h>
#include <tencentcloud/tke/v20180525/model/CheckEdgeClusterCIDRResponse.h>
#include <tencentcloud/tke/v20180525/model/CheckInstancesUpgradeAbleRequest.h>
#include <tencentcloud/tke/v20180525/model/CheckInstancesUpgradeAbleResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateBackupStorageLocationRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateBackupStorageLocationResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateCLSLogConfigRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateCLSLogConfigResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterEndpointRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterEndpointResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterEndpointVipRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterEndpointVipResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterMaintenanceWindowAndExclusionsRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterMaintenanceWindowAndExclusionsResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterReleaseRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterReleaseResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRouteRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRouteResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRouteTableRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRouteTableResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterVirtualNodeRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterVirtualNodeResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterVirtualNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterVirtualNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateECMInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateECMInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateEKSClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateEKSClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateEKSContainerInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateEKSContainerInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateEdgeCVMInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateEdgeCVMInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateEdgeLogConfigRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateEdgeLogConfigResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateEksLogConfigRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateEksLogConfigResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateExternalNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateExternalNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateGlobalMaintenanceWindowAndExclusionsRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateGlobalMaintenanceWindowAndExclusionsResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateImageCacheRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateImageCacheResponse.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusAlertPolicyRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusAlertPolicyResponse.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusAlertRuleRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusAlertRuleResponse.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusClusterAgentRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusClusterAgentResponse.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusConfigRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusConfigResponse.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusDashboardRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusDashboardResponse.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusGlobalNotificationRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusGlobalNotificationResponse.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusRecordRuleYamlRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusRecordRuleYamlResponse.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusTempRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusTempResponse.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusTemplateRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusTemplateResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateReservedInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateReservedInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateRollOutSequenceRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateRollOutSequenceResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateTKEEdgeClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateTKEEdgeClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteAddonRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteAddonResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteBackupStorageLocationRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteBackupStorageLocationResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterAsGroupsRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterAsGroupsResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterEndpointRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterEndpointResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterEndpointVipRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterEndpointVipResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterMaintenanceWindowAndExclusionRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterMaintenanceWindowAndExclusionResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteTableRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteTableResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterVirtualNodeRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterVirtualNodeResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterVirtualNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterVirtualNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteECMInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteECMInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteEKSClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteEKSClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteEKSContainerInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteEKSContainerInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteEdgeCVMInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteEdgeCVMInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteEdgeClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteEdgeClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteExternalNodeRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteExternalNodeResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteExternalNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteExternalNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteGlobalMaintenanceWindowAndExclusionRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteGlobalMaintenanceWindowAndExclusionResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteImageCachesRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteImageCachesResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteLogConfigsRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteLogConfigsResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusAlertPolicyRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusAlertPolicyResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusAlertRuleRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusAlertRuleResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusClusterAgentRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusClusterAgentResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusConfigRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusConfigResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusRecordRuleYamlRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusRecordRuleYamlResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTempRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTempResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTempSyncRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTempSyncResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTemplateRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTemplateResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTemplateSyncRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTemplateSyncResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteReservedInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteReservedInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteRollOutSequenceRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteRollOutSequenceResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteTKEEdgeClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteTKEEdgeClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteUserPermissionsRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteUserPermissionsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeAddonRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeAddonResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeAddonValuesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeAddonValuesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeAvailableClusterVersionRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeAvailableClusterVersionResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeAvailableTKEEdgeVersionRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeAvailableTKEEdgeVersionResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeBackupStorageLocationsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeBackupStorageLocationsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeBatchModifyTagsStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeBatchModifyTagsStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAsGroupOptionRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAsGroupOptionResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAsGroupsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAsGroupsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAuthenticationOptionsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAuthenticationOptionsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAvailableExtraArgsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAvailableExtraArgsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterCommonNamesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterCommonNamesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterControllersRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterControllersResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointVipStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointVipStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterExtraArgsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterExtraArgsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterInspectionResultsOverviewRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterInspectionResultsOverviewResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterKubeconfigRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterKubeconfigResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterLevelAttributeRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterLevelAttributeResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterLevelChangeRecordsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterLevelChangeRecordsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterMaintenanceWindowAndExclusionsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterMaintenanceWindowAndExclusionsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterNodePoolDetailRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterNodePoolDetailResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterNodePoolsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterNodePoolsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterPendingReleasesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterPendingReleasesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterReleaseDetailsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterReleaseDetailsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterReleaseHistoryRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterReleaseHistoryResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterReleasesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterReleasesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRollOutSequenceTagsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRollOutSequenceTagsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRouteTablesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRouteTablesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRoutesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRoutesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterSchedulerPolicyRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterSchedulerPolicyResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterSecurityRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterSecurityResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterVirtualNodeRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterVirtualNodeResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterVirtualNodePoolsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterVirtualNodePoolsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClustersRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClustersResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeControlPlaneLogsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeControlPlaneLogsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeECMInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeECMInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEKSClusterCredentialRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEKSClusterCredentialResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEKSClustersRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEKSClustersResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEKSContainerInstanceEventRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEKSContainerInstanceEventResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEKSContainerInstanceRegionsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEKSContainerInstanceRegionsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEKSContainerInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEKSContainerInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeAvailableExtraArgsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeAvailableExtraArgsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeCVMInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeCVMInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeClusterExtraArgsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeClusterExtraArgsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeClusterUpgradeInfoRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeClusterUpgradeInfoResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeLogSwitchesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeLogSwitchesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEksContainerInstanceLogRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEksContainerInstanceLogResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEnableVpcCniProgressRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEnableVpcCniProgressResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEncryptionStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEncryptionStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeExistedInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeExistedInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeExternalNodeRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeExternalNodeResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeExternalNodePoolsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeExternalNodePoolsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeExternalNodeScriptRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeExternalNodeScriptResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeExternalNodeSupportConfigRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeExternalNodeSupportConfigResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeGlobalMaintenanceWindowAndExclusionsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeGlobalMaintenanceWindowAndExclusionsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeIPAMDRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeIPAMDResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeImageCachesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeImageCachesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeImagesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeImagesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeLogConfigsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeLogConfigsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeLogSwitchesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeLogSwitchesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeMasterComponentRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeMasterComponentResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeOSImagesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeOSImagesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeOpenPolicyListRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeOpenPolicyListResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePodChargeInfoRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePodChargeInfoResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePodDeductionRateRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePodDeductionRateResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePodsBySpecRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePodsBySpecResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePostNodeResourcesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePostNodeResourcesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAgentInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAgentInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAgentsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAgentsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAlertHistoryRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAlertHistoryResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAlertPolicyRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAlertPolicyResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAlertRuleRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAlertRuleResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusClusterAgentsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusClusterAgentsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusConfigRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusConfigResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusGlobalConfigRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusGlobalConfigResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusGlobalNotificationRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusGlobalNotificationResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusInstanceRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusInstanceResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusInstanceInitStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusInstanceInitStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusInstancesOverviewRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusInstancesOverviewResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusOverviewsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusOverviewsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusRecordRulesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusRecordRulesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTargetsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTargetsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTempRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTempResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTempSyncRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTempSyncResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTemplateSyncRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTemplateSyncResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTemplatesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTemplatesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeRIUtilizationDetailRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeRIUtilizationDetailResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeRegionsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeRegionsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeReservedInstanceUtilizationRateRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeReservedInstanceUtilizationRateResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeReservedInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeReservedInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeResourceUsageRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeResourceUsageResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeRollOutSequencesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeRollOutSequencesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeRouteTableConflictsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeRouteTableConflictsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeSupportedRuntimeRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeSupportedRuntimeResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeClusterCredentialRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeClusterCredentialResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeClusterStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeClusterStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeClustersRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeClustersResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeExternalKubeconfigRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeExternalKubeconfigResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeScriptRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeScriptResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeTasksRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeTasksResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeUpgradeTaskDetailRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeUpgradeTaskDetailResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeUpgradeTasksRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeUpgradeTasksResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeUserPermissionsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeUserPermissionsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeVersionsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeVersionsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeVpcCniPodLimitsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeVpcCniPodLimitsResponse.h>
#include <tencentcloud/tke/v20180525/model/DisableClusterAuditRequest.h>
#include <tencentcloud/tke/v20180525/model/DisableClusterAuditResponse.h>
#include <tencentcloud/tke/v20180525/model/DisableClusterDeletionProtectionRequest.h>
#include <tencentcloud/tke/v20180525/model/DisableClusterDeletionProtectionResponse.h>
#include <tencentcloud/tke/v20180525/model/DisableControlPlaneLogsRequest.h>
#include <tencentcloud/tke/v20180525/model/DisableControlPlaneLogsResponse.h>
#include <tencentcloud/tke/v20180525/model/DisableEncryptionProtectionRequest.h>
#include <tencentcloud/tke/v20180525/model/DisableEncryptionProtectionResponse.h>
#include <tencentcloud/tke/v20180525/model/DisableEventPersistenceRequest.h>
#include <tencentcloud/tke/v20180525/model/DisableEventPersistenceResponse.h>
#include <tencentcloud/tke/v20180525/model/DisableVpcCniNetworkTypeRequest.h>
#include <tencentcloud/tke/v20180525/model/DisableVpcCniNetworkTypeResponse.h>
#include <tencentcloud/tke/v20180525/model/DrainClusterVirtualNodeRequest.h>
#include <tencentcloud/tke/v20180525/model/DrainClusterVirtualNodeResponse.h>
#include <tencentcloud/tke/v20180525/model/DrainExternalNodeRequest.h>
#include <tencentcloud/tke/v20180525/model/DrainExternalNodeResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableClusterAuditRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableClusterAuditResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableClusterDeletionProtectionRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableClusterDeletionProtectionResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableControlPlaneLogsRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableControlPlaneLogsResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableEksEventPersistenceRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableEksEventPersistenceResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableEncryptionProtectionRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableEncryptionProtectionResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableEventPersistenceRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableEventPersistenceResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableExternalNodeSupportRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableExternalNodeSupportResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableVpcCniNetworkTypeRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableVpcCniNetworkTypeResponse.h>
#include <tencentcloud/tke/v20180525/model/ForwardTKEEdgeApplicationRequestV3Request.h>
#include <tencentcloud/tke/v20180525/model/ForwardTKEEdgeApplicationRequestV3Response.h>
#include <tencentcloud/tke/v20180525/model/GetClusterLevelPriceRequest.h>
#include <tencentcloud/tke/v20180525/model/GetClusterLevelPriceResponse.h>
#include <tencentcloud/tke/v20180525/model/GetMostSuitableImageCacheRequest.h>
#include <tencentcloud/tke/v20180525/model/GetMostSuitableImageCacheResponse.h>
#include <tencentcloud/tke/v20180525/model/GetTkeAppChartListRequest.h>
#include <tencentcloud/tke/v20180525/model/GetTkeAppChartListResponse.h>
#include <tencentcloud/tke/v20180525/model/GetUpgradeInstanceProgressRequest.h>
#include <tencentcloud/tke/v20180525/model/GetUpgradeInstanceProgressResponse.h>
#include <tencentcloud/tke/v20180525/model/GrantUserPermissionsRequest.h>
#include <tencentcloud/tke/v20180525/model/GrantUserPermissionsResponse.h>
#include <tencentcloud/tke/v20180525/model/InstallAddonRequest.h>
#include <tencentcloud/tke/v20180525/model/InstallAddonResponse.h>
#include <tencentcloud/tke/v20180525/model/InstallEdgeLogAgentRequest.h>
#include <tencentcloud/tke/v20180525/model/InstallEdgeLogAgentResponse.h>
#include <tencentcloud/tke/v20180525/model/InstallLogAgentRequest.h>
#include <tencentcloud/tke/v20180525/model/InstallLogAgentResponse.h>
#include <tencentcloud/tke/v20180525/model/ListClusterInspectionResultsRequest.h>
#include <tencentcloud/tke/v20180525/model/ListClusterInspectionResultsResponse.h>
#include <tencentcloud/tke/v20180525/model/ListClusterInspectionResultsItemsRequest.h>
#include <tencentcloud/tke/v20180525/model/ListClusterInspectionResultsItemsResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAsGroupAttributeRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAsGroupAttributeResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAsGroupOptionAttributeRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAsGroupOptionAttributeResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAttributeRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAttributeResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAuthenticationOptionsRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAuthenticationOptionsResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterEndpointSPRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterEndpointSPResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterExtraArgsRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterExtraArgsResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterExtraArgsTaskStateRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterExtraArgsTaskStateResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterImageRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterImageResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterMaintenanceWindowAndExclusionsRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterMaintenanceWindowAndExclusionsResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterRollOutSequenceTagsRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterRollOutSequenceTagsResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterRuntimeConfigRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterRuntimeConfigResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterSchedulerPolicyRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterSchedulerPolicyResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterTagsRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterTagsResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterVirtualNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterVirtualNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyExternalNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyExternalNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyGlobalMaintenanceWindowAndExclusionsRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyGlobalMaintenanceWindowAndExclusionsResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyMasterComponentRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyMasterComponentResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyNodePoolDesiredCapacityAboutAsgRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyNodePoolDesiredCapacityAboutAsgResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyNodePoolInstanceTypesRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyNodePoolInstanceTypesResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyOpenPolicyListRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyOpenPolicyListResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusAgentExternalLabelsRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusAgentExternalLabelsResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusAlertPolicyRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusAlertPolicyResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusAlertRuleRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusAlertRuleResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusConfigRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusConfigResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusGlobalNotificationRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusGlobalNotificationResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusRecordRuleYamlRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusRecordRuleYamlResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusTempRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusTempResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusTemplateRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusTemplateResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyReservedInstanceScopeRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyReservedInstanceScopeResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyRollOutSequenceRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyRollOutSequenceResponse.h>
#include <tencentcloud/tke/v20180525/model/RemoveNodeFromNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/RemoveNodeFromNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/RenewReservedInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/RenewReservedInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/RestartEKSContainerInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/RestartEKSContainerInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/RollbackClusterReleaseRequest.h>
#include <tencentcloud/tke/v20180525/model/RollbackClusterReleaseResponse.h>
#include <tencentcloud/tke/v20180525/model/RunPrometheusInstanceRequest.h>
#include <tencentcloud/tke/v20180525/model/RunPrometheusInstanceResponse.h>
#include <tencentcloud/tke/v20180525/model/ScaleInClusterMasterRequest.h>
#include <tencentcloud/tke/v20180525/model/ScaleInClusterMasterResponse.h>
#include <tencentcloud/tke/v20180525/model/ScaleOutClusterMasterRequest.h>
#include <tencentcloud/tke/v20180525/model/ScaleOutClusterMasterResponse.h>
#include <tencentcloud/tke/v20180525/model/SetNodePoolNodeProtectionRequest.h>
#include <tencentcloud/tke/v20180525/model/SetNodePoolNodeProtectionResponse.h>
#include <tencentcloud/tke/v20180525/model/SwitchClusterEndpointRequest.h>
#include <tencentcloud/tke/v20180525/model/SwitchClusterEndpointResponse.h>
#include <tencentcloud/tke/v20180525/model/SyncPrometheusTempRequest.h>
#include <tencentcloud/tke/v20180525/model/SyncPrometheusTempResponse.h>
#include <tencentcloud/tke/v20180525/model/SyncPrometheusTemplateRequest.h>
#include <tencentcloud/tke/v20180525/model/SyncPrometheusTemplateResponse.h>
#include <tencentcloud/tke/v20180525/model/UninstallClusterReleaseRequest.h>
#include <tencentcloud/tke/v20180525/model/UninstallClusterReleaseResponse.h>
#include <tencentcloud/tke/v20180525/model/UninstallEdgeLogAgentRequest.h>
#include <tencentcloud/tke/v20180525/model/UninstallEdgeLogAgentResponse.h>
#include <tencentcloud/tke/v20180525/model/UninstallLogAgentRequest.h>
#include <tencentcloud/tke/v20180525/model/UninstallLogAgentResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateAddonRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateAddonResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateClusterKubeconfigRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateClusterKubeconfigResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateClusterVersionRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateClusterVersionResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateEKSClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateEKSClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateEKSContainerInstanceRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateEKSContainerInstanceResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateEdgeClusterVersionRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateEdgeClusterVersionResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateImageCacheRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateImageCacheResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateTKEEdgeClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateTKEEdgeClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/UpgradeClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/UpgradeClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/UpgradeClusterReleaseRequest.h>
#include <tencentcloud/tke/v20180525/model/UpgradeClusterReleaseResponse.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            class TkeClient : public AbstractClient
            {
            public:
                TkeClient(const Credential &credential, const std::string &region);
                TkeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AcquireClusterAdminRoleResponse> AcquireClusterAdminRoleOutcome;
                typedef std::future<AcquireClusterAdminRoleOutcome> AcquireClusterAdminRoleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::AcquireClusterAdminRoleRequest&, AcquireClusterAdminRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcquireClusterAdminRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddClusterCIDRResponse> AddClusterCIDROutcome;
                typedef std::future<AddClusterCIDROutcome> AddClusterCIDROutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::AddClusterCIDRRequest&, AddClusterCIDROutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddClusterCIDRAsyncHandler;
                typedef Outcome<Core::Error, Model::AddExistedInstancesResponse> AddExistedInstancesOutcome;
                typedef std::future<AddExistedInstancesOutcome> AddExistedInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::AddExistedInstancesRequest&, AddExistedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddExistedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::AddNodeToNodePoolResponse> AddNodeToNodePoolOutcome;
                typedef std::future<AddNodeToNodePoolOutcome> AddNodeToNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::AddNodeToNodePoolRequest&, AddNodeToNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddNodeToNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::AddVpcCniSubnetsResponse> AddVpcCniSubnetsOutcome;
                typedef std::future<AddVpcCniSubnetsOutcome> AddVpcCniSubnetsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::AddVpcCniSubnetsRequest&, AddVpcCniSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddVpcCniSubnetsAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelClusterReleaseResponse> CancelClusterReleaseOutcome;
                typedef std::future<CancelClusterReleaseOutcome> CancelClusterReleaseOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CancelClusterReleaseRequest&, CancelClusterReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelClusterReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelUpgradePlanResponse> CancelUpgradePlanOutcome;
                typedef std::future<CancelUpgradePlanOutcome> CancelUpgradePlanOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CancelUpgradePlanRequest&, CancelUpgradePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelUpgradePlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckEdgeClusterCIDRResponse> CheckEdgeClusterCIDROutcome;
                typedef std::future<CheckEdgeClusterCIDROutcome> CheckEdgeClusterCIDROutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CheckEdgeClusterCIDRRequest&, CheckEdgeClusterCIDROutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckEdgeClusterCIDRAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckInstancesUpgradeAbleResponse> CheckInstancesUpgradeAbleOutcome;
                typedef std::future<CheckInstancesUpgradeAbleOutcome> CheckInstancesUpgradeAbleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CheckInstancesUpgradeAbleRequest&, CheckInstancesUpgradeAbleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckInstancesUpgradeAbleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupStorageLocationResponse> CreateBackupStorageLocationOutcome;
                typedef std::future<CreateBackupStorageLocationOutcome> CreateBackupStorageLocationOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateBackupStorageLocationRequest&, CreateBackupStorageLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupStorageLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCLSLogConfigResponse> CreateCLSLogConfigOutcome;
                typedef std::future<CreateCLSLogConfigOutcome> CreateCLSLogConfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateCLSLogConfigRequest&, CreateCLSLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCLSLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterEndpointResponse> CreateClusterEndpointOutcome;
                typedef std::future<CreateClusterEndpointOutcome> CreateClusterEndpointOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterEndpointRequest&, CreateClusterEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterEndpointVipResponse> CreateClusterEndpointVipOutcome;
                typedef std::future<CreateClusterEndpointVipOutcome> CreateClusterEndpointVipOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterEndpointVipRequest&, CreateClusterEndpointVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterEndpointVipAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterInstancesResponse> CreateClusterInstancesOutcome;
                typedef std::future<CreateClusterInstancesOutcome> CreateClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterInstancesRequest&, CreateClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterMaintenanceWindowAndExclusionsResponse> CreateClusterMaintenanceWindowAndExclusionsOutcome;
                typedef std::future<CreateClusterMaintenanceWindowAndExclusionsOutcome> CreateClusterMaintenanceWindowAndExclusionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterMaintenanceWindowAndExclusionsRequest&, CreateClusterMaintenanceWindowAndExclusionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterMaintenanceWindowAndExclusionsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterNodePoolResponse> CreateClusterNodePoolOutcome;
                typedef std::future<CreateClusterNodePoolOutcome> CreateClusterNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterNodePoolRequest&, CreateClusterNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterReleaseResponse> CreateClusterReleaseOutcome;
                typedef std::future<CreateClusterReleaseOutcome> CreateClusterReleaseOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterReleaseRequest&, CreateClusterReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterRouteResponse> CreateClusterRouteOutcome;
                typedef std::future<CreateClusterRouteOutcome> CreateClusterRouteOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterRouteRequest&, CreateClusterRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterRouteTableResponse> CreateClusterRouteTableOutcome;
                typedef std::future<CreateClusterRouteTableOutcome> CreateClusterRouteTableOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterRouteTableRequest&, CreateClusterRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterRouteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterVirtualNodeResponse> CreateClusterVirtualNodeOutcome;
                typedef std::future<CreateClusterVirtualNodeOutcome> CreateClusterVirtualNodeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterVirtualNodeRequest&, CreateClusterVirtualNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterVirtualNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterVirtualNodePoolResponse> CreateClusterVirtualNodePoolOutcome;
                typedef std::future<CreateClusterVirtualNodePoolOutcome> CreateClusterVirtualNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterVirtualNodePoolRequest&, CreateClusterVirtualNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterVirtualNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateECMInstancesResponse> CreateECMInstancesOutcome;
                typedef std::future<CreateECMInstancesOutcome> CreateECMInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateECMInstancesRequest&, CreateECMInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateECMInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEKSClusterResponse> CreateEKSClusterOutcome;
                typedef std::future<CreateEKSClusterOutcome> CreateEKSClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateEKSClusterRequest&, CreateEKSClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEKSClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEKSContainerInstancesResponse> CreateEKSContainerInstancesOutcome;
                typedef std::future<CreateEKSContainerInstancesOutcome> CreateEKSContainerInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateEKSContainerInstancesRequest&, CreateEKSContainerInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEKSContainerInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdgeCVMInstancesResponse> CreateEdgeCVMInstancesOutcome;
                typedef std::future<CreateEdgeCVMInstancesOutcome> CreateEdgeCVMInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateEdgeCVMInstancesRequest&, CreateEdgeCVMInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeCVMInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdgeLogConfigResponse> CreateEdgeLogConfigOutcome;
                typedef std::future<CreateEdgeLogConfigOutcome> CreateEdgeLogConfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateEdgeLogConfigRequest&, CreateEdgeLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEksLogConfigResponse> CreateEksLogConfigOutcome;
                typedef std::future<CreateEksLogConfigOutcome> CreateEksLogConfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateEksLogConfigRequest&, CreateEksLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEksLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExternalNodePoolResponse> CreateExternalNodePoolOutcome;
                typedef std::future<CreateExternalNodePoolOutcome> CreateExternalNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateExternalNodePoolRequest&, CreateExternalNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExternalNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGlobalMaintenanceWindowAndExclusionsResponse> CreateGlobalMaintenanceWindowAndExclusionsOutcome;
                typedef std::future<CreateGlobalMaintenanceWindowAndExclusionsOutcome> CreateGlobalMaintenanceWindowAndExclusionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateGlobalMaintenanceWindowAndExclusionsRequest&, CreateGlobalMaintenanceWindowAndExclusionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalMaintenanceWindowAndExclusionsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageCacheResponse> CreateImageCacheOutcome;
                typedef std::future<CreateImageCacheOutcome> CreateImageCacheOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateImageCacheRequest&, CreateImageCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusAlertPolicyResponse> CreatePrometheusAlertPolicyOutcome;
                typedef std::future<CreatePrometheusAlertPolicyOutcome> CreatePrometheusAlertPolicyOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusAlertPolicyRequest&, CreatePrometheusAlertPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusAlertPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusAlertRuleResponse> CreatePrometheusAlertRuleOutcome;
                typedef std::future<CreatePrometheusAlertRuleOutcome> CreatePrometheusAlertRuleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusAlertRuleRequest&, CreatePrometheusAlertRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusAlertRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusClusterAgentResponse> CreatePrometheusClusterAgentOutcome;
                typedef std::future<CreatePrometheusClusterAgentOutcome> CreatePrometheusClusterAgentOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusClusterAgentRequest&, CreatePrometheusClusterAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusClusterAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusConfigResponse> CreatePrometheusConfigOutcome;
                typedef std::future<CreatePrometheusConfigOutcome> CreatePrometheusConfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusConfigRequest&, CreatePrometheusConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusDashboardResponse> CreatePrometheusDashboardOutcome;
                typedef std::future<CreatePrometheusDashboardOutcome> CreatePrometheusDashboardOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusDashboardRequest&, CreatePrometheusDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusDashboardAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusGlobalNotificationResponse> CreatePrometheusGlobalNotificationOutcome;
                typedef std::future<CreatePrometheusGlobalNotificationOutcome> CreatePrometheusGlobalNotificationOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusGlobalNotificationRequest&, CreatePrometheusGlobalNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusGlobalNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusRecordRuleYamlResponse> CreatePrometheusRecordRuleYamlOutcome;
                typedef std::future<CreatePrometheusRecordRuleYamlOutcome> CreatePrometheusRecordRuleYamlOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusRecordRuleYamlRequest&, CreatePrometheusRecordRuleYamlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusRecordRuleYamlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusTempResponse> CreatePrometheusTempOutcome;
                typedef std::future<CreatePrometheusTempOutcome> CreatePrometheusTempOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusTempRequest&, CreatePrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusTemplateResponse> CreatePrometheusTemplateOutcome;
                typedef std::future<CreatePrometheusTemplateOutcome> CreatePrometheusTemplateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusTemplateRequest&, CreatePrometheusTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReservedInstancesResponse> CreateReservedInstancesOutcome;
                typedef std::future<CreateReservedInstancesOutcome> CreateReservedInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateReservedInstancesRequest&, CreateReservedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReservedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRollOutSequenceResponse> CreateRollOutSequenceOutcome;
                typedef std::future<CreateRollOutSequenceOutcome> CreateRollOutSequenceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateRollOutSequenceRequest&, CreateRollOutSequenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRollOutSequenceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTKEEdgeClusterResponse> CreateTKEEdgeClusterOutcome;
                typedef std::future<CreateTKEEdgeClusterOutcome> CreateTKEEdgeClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateTKEEdgeClusterRequest&, CreateTKEEdgeClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTKEEdgeClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAddonResponse> DeleteAddonOutcome;
                typedef std::future<DeleteAddonOutcome> DeleteAddonOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteAddonRequest&, DeleteAddonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAddonAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBackupStorageLocationResponse> DeleteBackupStorageLocationOutcome;
                typedef std::future<DeleteBackupStorageLocationOutcome> DeleteBackupStorageLocationOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteBackupStorageLocationRequest&, DeleteBackupStorageLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupStorageLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterResponse> DeleteClusterOutcome;
                typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterRequest&, DeleteClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterAsGroupsResponse> DeleteClusterAsGroupsOutcome;
                typedef std::future<DeleteClusterAsGroupsOutcome> DeleteClusterAsGroupsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterAsGroupsRequest&, DeleteClusterAsGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterEndpointResponse> DeleteClusterEndpointOutcome;
                typedef std::future<DeleteClusterEndpointOutcome> DeleteClusterEndpointOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterEndpointRequest&, DeleteClusterEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterEndpointVipResponse> DeleteClusterEndpointVipOutcome;
                typedef std::future<DeleteClusterEndpointVipOutcome> DeleteClusterEndpointVipOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterEndpointVipRequest&, DeleteClusterEndpointVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterEndpointVipAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterInstancesResponse> DeleteClusterInstancesOutcome;
                typedef std::future<DeleteClusterInstancesOutcome> DeleteClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterInstancesRequest&, DeleteClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterMaintenanceWindowAndExclusionResponse> DeleteClusterMaintenanceWindowAndExclusionOutcome;
                typedef std::future<DeleteClusterMaintenanceWindowAndExclusionOutcome> DeleteClusterMaintenanceWindowAndExclusionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterMaintenanceWindowAndExclusionRequest&, DeleteClusterMaintenanceWindowAndExclusionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterMaintenanceWindowAndExclusionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterNodePoolResponse> DeleteClusterNodePoolOutcome;
                typedef std::future<DeleteClusterNodePoolOutcome> DeleteClusterNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterNodePoolRequest&, DeleteClusterNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterRouteResponse> DeleteClusterRouteOutcome;
                typedef std::future<DeleteClusterRouteOutcome> DeleteClusterRouteOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterRouteRequest&, DeleteClusterRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterRouteTableResponse> DeleteClusterRouteTableOutcome;
                typedef std::future<DeleteClusterRouteTableOutcome> DeleteClusterRouteTableOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterRouteTableRequest&, DeleteClusterRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterRouteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterVirtualNodeResponse> DeleteClusterVirtualNodeOutcome;
                typedef std::future<DeleteClusterVirtualNodeOutcome> DeleteClusterVirtualNodeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterVirtualNodeRequest&, DeleteClusterVirtualNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterVirtualNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterVirtualNodePoolResponse> DeleteClusterVirtualNodePoolOutcome;
                typedef std::future<DeleteClusterVirtualNodePoolOutcome> DeleteClusterVirtualNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterVirtualNodePoolRequest&, DeleteClusterVirtualNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterVirtualNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteECMInstancesResponse> DeleteECMInstancesOutcome;
                typedef std::future<DeleteECMInstancesOutcome> DeleteECMInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteECMInstancesRequest&, DeleteECMInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteECMInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEKSClusterResponse> DeleteEKSClusterOutcome;
                typedef std::future<DeleteEKSClusterOutcome> DeleteEKSClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteEKSClusterRequest&, DeleteEKSClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEKSClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEKSContainerInstancesResponse> DeleteEKSContainerInstancesOutcome;
                typedef std::future<DeleteEKSContainerInstancesOutcome> DeleteEKSContainerInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteEKSContainerInstancesRequest&, DeleteEKSContainerInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEKSContainerInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEdgeCVMInstancesResponse> DeleteEdgeCVMInstancesOutcome;
                typedef std::future<DeleteEdgeCVMInstancesOutcome> DeleteEdgeCVMInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteEdgeCVMInstancesRequest&, DeleteEdgeCVMInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeCVMInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEdgeClusterInstancesResponse> DeleteEdgeClusterInstancesOutcome;
                typedef std::future<DeleteEdgeClusterInstancesOutcome> DeleteEdgeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteEdgeClusterInstancesRequest&, DeleteEdgeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteExternalNodeResponse> DeleteExternalNodeOutcome;
                typedef std::future<DeleteExternalNodeOutcome> DeleteExternalNodeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteExternalNodeRequest&, DeleteExternalNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExternalNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteExternalNodePoolResponse> DeleteExternalNodePoolOutcome;
                typedef std::future<DeleteExternalNodePoolOutcome> DeleteExternalNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteExternalNodePoolRequest&, DeleteExternalNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExternalNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlobalMaintenanceWindowAndExclusionResponse> DeleteGlobalMaintenanceWindowAndExclusionOutcome;
                typedef std::future<DeleteGlobalMaintenanceWindowAndExclusionOutcome> DeleteGlobalMaintenanceWindowAndExclusionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteGlobalMaintenanceWindowAndExclusionRequest&, DeleteGlobalMaintenanceWindowAndExclusionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalMaintenanceWindowAndExclusionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageCachesResponse> DeleteImageCachesOutcome;
                typedef std::future<DeleteImageCachesOutcome> DeleteImageCachesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteImageCachesRequest&, DeleteImageCachesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageCachesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLogConfigsResponse> DeleteLogConfigsOutcome;
                typedef std::future<DeleteLogConfigsOutcome> DeleteLogConfigsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteLogConfigsRequest&, DeleteLogConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusAlertPolicyResponse> DeletePrometheusAlertPolicyOutcome;
                typedef std::future<DeletePrometheusAlertPolicyOutcome> DeletePrometheusAlertPolicyOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeletePrometheusAlertPolicyRequest&, DeletePrometheusAlertPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusAlertPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusAlertRuleResponse> DeletePrometheusAlertRuleOutcome;
                typedef std::future<DeletePrometheusAlertRuleOutcome> DeletePrometheusAlertRuleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeletePrometheusAlertRuleRequest&, DeletePrometheusAlertRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusAlertRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusClusterAgentResponse> DeletePrometheusClusterAgentOutcome;
                typedef std::future<DeletePrometheusClusterAgentOutcome> DeletePrometheusClusterAgentOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeletePrometheusClusterAgentRequest&, DeletePrometheusClusterAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusClusterAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusConfigResponse> DeletePrometheusConfigOutcome;
                typedef std::future<DeletePrometheusConfigOutcome> DeletePrometheusConfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeletePrometheusConfigRequest&, DeletePrometheusConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusRecordRuleYamlResponse> DeletePrometheusRecordRuleYamlOutcome;
                typedef std::future<DeletePrometheusRecordRuleYamlOutcome> DeletePrometheusRecordRuleYamlOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeletePrometheusRecordRuleYamlRequest&, DeletePrometheusRecordRuleYamlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusRecordRuleYamlAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusTempResponse> DeletePrometheusTempOutcome;
                typedef std::future<DeletePrometheusTempOutcome> DeletePrometheusTempOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeletePrometheusTempRequest&, DeletePrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusTempSyncResponse> DeletePrometheusTempSyncOutcome;
                typedef std::future<DeletePrometheusTempSyncOutcome> DeletePrometheusTempSyncOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeletePrometheusTempSyncRequest&, DeletePrometheusTempSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusTempSyncAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusTemplateResponse> DeletePrometheusTemplateOutcome;
                typedef std::future<DeletePrometheusTemplateOutcome> DeletePrometheusTemplateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeletePrometheusTemplateRequest&, DeletePrometheusTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusTemplateSyncResponse> DeletePrometheusTemplateSyncOutcome;
                typedef std::future<DeletePrometheusTemplateSyncOutcome> DeletePrometheusTemplateSyncOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeletePrometheusTemplateSyncRequest&, DeletePrometheusTemplateSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusTemplateSyncAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReservedInstancesResponse> DeleteReservedInstancesOutcome;
                typedef std::future<DeleteReservedInstancesOutcome> DeleteReservedInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteReservedInstancesRequest&, DeleteReservedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReservedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRollOutSequenceResponse> DeleteRollOutSequenceOutcome;
                typedef std::future<DeleteRollOutSequenceOutcome> DeleteRollOutSequenceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteRollOutSequenceRequest&, DeleteRollOutSequenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRollOutSequenceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTKEEdgeClusterResponse> DeleteTKEEdgeClusterOutcome;
                typedef std::future<DeleteTKEEdgeClusterOutcome> DeleteTKEEdgeClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteTKEEdgeClusterRequest&, DeleteTKEEdgeClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTKEEdgeClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserPermissionsResponse> DeleteUserPermissionsOutcome;
                typedef std::future<DeleteUserPermissionsOutcome> DeleteUserPermissionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteUserPermissionsRequest&, DeleteUserPermissionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserPermissionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddonResponse> DescribeAddonOutcome;
                typedef std::future<DescribeAddonOutcome> DescribeAddonOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeAddonRequest&, DescribeAddonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddonAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddonValuesResponse> DescribeAddonValuesOutcome;
                typedef std::future<DescribeAddonValuesOutcome> DescribeAddonValuesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeAddonValuesRequest&, DescribeAddonValuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddonValuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailableClusterVersionResponse> DescribeAvailableClusterVersionOutcome;
                typedef std::future<DescribeAvailableClusterVersionOutcome> DescribeAvailableClusterVersionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeAvailableClusterVersionRequest&, DescribeAvailableClusterVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableClusterVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailableTKEEdgeVersionResponse> DescribeAvailableTKEEdgeVersionOutcome;
                typedef std::future<DescribeAvailableTKEEdgeVersionOutcome> DescribeAvailableTKEEdgeVersionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeAvailableTKEEdgeVersionRequest&, DescribeAvailableTKEEdgeVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableTKEEdgeVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupStorageLocationsResponse> DescribeBackupStorageLocationsOutcome;
                typedef std::future<DescribeBackupStorageLocationsOutcome> DescribeBackupStorageLocationsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeBackupStorageLocationsRequest&, DescribeBackupStorageLocationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupStorageLocationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchModifyTagsStatusResponse> DescribeBatchModifyTagsStatusOutcome;
                typedef std::future<DescribeBatchModifyTagsStatusOutcome> DescribeBatchModifyTagsStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeBatchModifyTagsStatusRequest&, DescribeBatchModifyTagsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchModifyTagsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAsGroupOptionResponse> DescribeClusterAsGroupOptionOutcome;
                typedef std::future<DescribeClusterAsGroupOptionOutcome> DescribeClusterAsGroupOptionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterAsGroupOptionRequest&, DescribeClusterAsGroupOptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAsGroupOptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAsGroupsResponse> DescribeClusterAsGroupsOutcome;
                typedef std::future<DescribeClusterAsGroupsOutcome> DescribeClusterAsGroupsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterAsGroupsRequest&, DescribeClusterAsGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAsGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAuthenticationOptionsResponse> DescribeClusterAuthenticationOptionsOutcome;
                typedef std::future<DescribeClusterAuthenticationOptionsOutcome> DescribeClusterAuthenticationOptionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterAuthenticationOptionsRequest&, DescribeClusterAuthenticationOptionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAuthenticationOptionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAvailableExtraArgsResponse> DescribeClusterAvailableExtraArgsOutcome;
                typedef std::future<DescribeClusterAvailableExtraArgsOutcome> DescribeClusterAvailableExtraArgsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterAvailableExtraArgsRequest&, DescribeClusterAvailableExtraArgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAvailableExtraArgsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterCommonNamesResponse> DescribeClusterCommonNamesOutcome;
                typedef std::future<DescribeClusterCommonNamesOutcome> DescribeClusterCommonNamesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterCommonNamesRequest&, DescribeClusterCommonNamesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterCommonNamesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterControllersResponse> DescribeClusterControllersOutcome;
                typedef std::future<DescribeClusterControllersOutcome> DescribeClusterControllersOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterControllersRequest&, DescribeClusterControllersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterControllersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterEndpointStatusResponse> DescribeClusterEndpointStatusOutcome;
                typedef std::future<DescribeClusterEndpointStatusOutcome> DescribeClusterEndpointStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterEndpointStatusRequest&, DescribeClusterEndpointStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterEndpointStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterEndpointVipStatusResponse> DescribeClusterEndpointVipStatusOutcome;
                typedef std::future<DescribeClusterEndpointVipStatusOutcome> DescribeClusterEndpointVipStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterEndpointVipStatusRequest&, DescribeClusterEndpointVipStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterEndpointVipStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterEndpointsResponse> DescribeClusterEndpointsOutcome;
                typedef std::future<DescribeClusterEndpointsOutcome> DescribeClusterEndpointsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterEndpointsRequest&, DescribeClusterEndpointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterEndpointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterExtraArgsResponse> DescribeClusterExtraArgsOutcome;
                typedef std::future<DescribeClusterExtraArgsOutcome> DescribeClusterExtraArgsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterExtraArgsRequest&, DescribeClusterExtraArgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterExtraArgsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterInspectionResultsOverviewResponse> DescribeClusterInspectionResultsOverviewOutcome;
                typedef std::future<DescribeClusterInspectionResultsOverviewOutcome> DescribeClusterInspectionResultsOverviewOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterInspectionResultsOverviewRequest&, DescribeClusterInspectionResultsOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInspectionResultsOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterInstancesResponse> DescribeClusterInstancesOutcome;
                typedef std::future<DescribeClusterInstancesOutcome> DescribeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterInstancesRequest&, DescribeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterKubeconfigResponse> DescribeClusterKubeconfigOutcome;
                typedef std::future<DescribeClusterKubeconfigOutcome> DescribeClusterKubeconfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterKubeconfigRequest&, DescribeClusterKubeconfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterKubeconfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterLevelAttributeResponse> DescribeClusterLevelAttributeOutcome;
                typedef std::future<DescribeClusterLevelAttributeOutcome> DescribeClusterLevelAttributeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterLevelAttributeRequest&, DescribeClusterLevelAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterLevelAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterLevelChangeRecordsResponse> DescribeClusterLevelChangeRecordsOutcome;
                typedef std::future<DescribeClusterLevelChangeRecordsOutcome> DescribeClusterLevelChangeRecordsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterLevelChangeRecordsRequest&, DescribeClusterLevelChangeRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterLevelChangeRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterMaintenanceWindowAndExclusionsResponse> DescribeClusterMaintenanceWindowAndExclusionsOutcome;
                typedef std::future<DescribeClusterMaintenanceWindowAndExclusionsOutcome> DescribeClusterMaintenanceWindowAndExclusionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterMaintenanceWindowAndExclusionsRequest&, DescribeClusterMaintenanceWindowAndExclusionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterMaintenanceWindowAndExclusionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterNodePoolDetailResponse> DescribeClusterNodePoolDetailOutcome;
                typedef std::future<DescribeClusterNodePoolDetailOutcome> DescribeClusterNodePoolDetailOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterNodePoolDetailRequest&, DescribeClusterNodePoolDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodePoolDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterNodePoolsResponse> DescribeClusterNodePoolsOutcome;
                typedef std::future<DescribeClusterNodePoolsOutcome> DescribeClusterNodePoolsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterNodePoolsRequest&, DescribeClusterNodePoolsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodePoolsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterPendingReleasesResponse> DescribeClusterPendingReleasesOutcome;
                typedef std::future<DescribeClusterPendingReleasesOutcome> DescribeClusterPendingReleasesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterPendingReleasesRequest&, DescribeClusterPendingReleasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterPendingReleasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterReleaseDetailsResponse> DescribeClusterReleaseDetailsOutcome;
                typedef std::future<DescribeClusterReleaseDetailsOutcome> DescribeClusterReleaseDetailsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterReleaseDetailsRequest&, DescribeClusterReleaseDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterReleaseDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterReleaseHistoryResponse> DescribeClusterReleaseHistoryOutcome;
                typedef std::future<DescribeClusterReleaseHistoryOutcome> DescribeClusterReleaseHistoryOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterReleaseHistoryRequest&, DescribeClusterReleaseHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterReleaseHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterReleasesResponse> DescribeClusterReleasesOutcome;
                typedef std::future<DescribeClusterReleasesOutcome> DescribeClusterReleasesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterReleasesRequest&, DescribeClusterReleasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterReleasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterRollOutSequenceTagsResponse> DescribeClusterRollOutSequenceTagsOutcome;
                typedef std::future<DescribeClusterRollOutSequenceTagsOutcome> DescribeClusterRollOutSequenceTagsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterRollOutSequenceTagsRequest&, DescribeClusterRollOutSequenceTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterRollOutSequenceTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterRouteTablesResponse> DescribeClusterRouteTablesOutcome;
                typedef std::future<DescribeClusterRouteTablesOutcome> DescribeClusterRouteTablesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterRouteTablesRequest&, DescribeClusterRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterRouteTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterRoutesResponse> DescribeClusterRoutesOutcome;
                typedef std::future<DescribeClusterRoutesOutcome> DescribeClusterRoutesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterRoutesRequest&, DescribeClusterRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterSchedulerPolicyResponse> DescribeClusterSchedulerPolicyOutcome;
                typedef std::future<DescribeClusterSchedulerPolicyOutcome> DescribeClusterSchedulerPolicyOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterSchedulerPolicyRequest&, DescribeClusterSchedulerPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterSchedulerPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterSecurityResponse> DescribeClusterSecurityOutcome;
                typedef std::future<DescribeClusterSecurityOutcome> DescribeClusterSecurityOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterSecurityRequest&, DescribeClusterSecurityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterSecurityAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterStatusResponse> DescribeClusterStatusOutcome;
                typedef std::future<DescribeClusterStatusOutcome> DescribeClusterStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterStatusRequest&, DescribeClusterStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterVirtualNodeResponse> DescribeClusterVirtualNodeOutcome;
                typedef std::future<DescribeClusterVirtualNodeOutcome> DescribeClusterVirtualNodeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterVirtualNodeRequest&, DescribeClusterVirtualNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterVirtualNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterVirtualNodePoolsResponse> DescribeClusterVirtualNodePoolsOutcome;
                typedef std::future<DescribeClusterVirtualNodePoolsOutcome> DescribeClusterVirtualNodePoolsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterVirtualNodePoolsRequest&, DescribeClusterVirtualNodePoolsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterVirtualNodePoolsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeControlPlaneLogsResponse> DescribeControlPlaneLogsOutcome;
                typedef std::future<DescribeControlPlaneLogsOutcome> DescribeControlPlaneLogsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeControlPlaneLogsRequest&, DescribeControlPlaneLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeControlPlaneLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeECMInstancesResponse> DescribeECMInstancesOutcome;
                typedef std::future<DescribeECMInstancesOutcome> DescribeECMInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeECMInstancesRequest&, DescribeECMInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeECMInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEKSClusterCredentialResponse> DescribeEKSClusterCredentialOutcome;
                typedef std::future<DescribeEKSClusterCredentialOutcome> DescribeEKSClusterCredentialOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEKSClusterCredentialRequest&, DescribeEKSClusterCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEKSClusterCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEKSClustersResponse> DescribeEKSClustersOutcome;
                typedef std::future<DescribeEKSClustersOutcome> DescribeEKSClustersOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEKSClustersRequest&, DescribeEKSClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEKSClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEKSContainerInstanceEventResponse> DescribeEKSContainerInstanceEventOutcome;
                typedef std::future<DescribeEKSContainerInstanceEventOutcome> DescribeEKSContainerInstanceEventOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEKSContainerInstanceEventRequest&, DescribeEKSContainerInstanceEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEKSContainerInstanceEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEKSContainerInstanceRegionsResponse> DescribeEKSContainerInstanceRegionsOutcome;
                typedef std::future<DescribeEKSContainerInstanceRegionsOutcome> DescribeEKSContainerInstanceRegionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEKSContainerInstanceRegionsRequest&, DescribeEKSContainerInstanceRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEKSContainerInstanceRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEKSContainerInstancesResponse> DescribeEKSContainerInstancesOutcome;
                typedef std::future<DescribeEKSContainerInstancesOutcome> DescribeEKSContainerInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEKSContainerInstancesRequest&, DescribeEKSContainerInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEKSContainerInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeAvailableExtraArgsResponse> DescribeEdgeAvailableExtraArgsOutcome;
                typedef std::future<DescribeEdgeAvailableExtraArgsOutcome> DescribeEdgeAvailableExtraArgsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEdgeAvailableExtraArgsRequest&, DescribeEdgeAvailableExtraArgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeAvailableExtraArgsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeCVMInstancesResponse> DescribeEdgeCVMInstancesOutcome;
                typedef std::future<DescribeEdgeCVMInstancesOutcome> DescribeEdgeCVMInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEdgeCVMInstancesRequest&, DescribeEdgeCVMInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeCVMInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeClusterExtraArgsResponse> DescribeEdgeClusterExtraArgsOutcome;
                typedef std::future<DescribeEdgeClusterExtraArgsOutcome> DescribeEdgeClusterExtraArgsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEdgeClusterExtraArgsRequest&, DescribeEdgeClusterExtraArgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeClusterExtraArgsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeClusterInstancesResponse> DescribeEdgeClusterInstancesOutcome;
                typedef std::future<DescribeEdgeClusterInstancesOutcome> DescribeEdgeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEdgeClusterInstancesRequest&, DescribeEdgeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeClusterUpgradeInfoResponse> DescribeEdgeClusterUpgradeInfoOutcome;
                typedef std::future<DescribeEdgeClusterUpgradeInfoOutcome> DescribeEdgeClusterUpgradeInfoOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEdgeClusterUpgradeInfoRequest&, DescribeEdgeClusterUpgradeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeClusterUpgradeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeLogSwitchesResponse> DescribeEdgeLogSwitchesOutcome;
                typedef std::future<DescribeEdgeLogSwitchesOutcome> DescribeEdgeLogSwitchesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEdgeLogSwitchesRequest&, DescribeEdgeLogSwitchesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeLogSwitchesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEksContainerInstanceLogResponse> DescribeEksContainerInstanceLogOutcome;
                typedef std::future<DescribeEksContainerInstanceLogOutcome> DescribeEksContainerInstanceLogOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEksContainerInstanceLogRequest&, DescribeEksContainerInstanceLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEksContainerInstanceLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnableVpcCniProgressResponse> DescribeEnableVpcCniProgressOutcome;
                typedef std::future<DescribeEnableVpcCniProgressOutcome> DescribeEnableVpcCniProgressOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEnableVpcCniProgressRequest&, DescribeEnableVpcCniProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnableVpcCniProgressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEncryptionStatusResponse> DescribeEncryptionStatusOutcome;
                typedef std::future<DescribeEncryptionStatusOutcome> DescribeEncryptionStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEncryptionStatusRequest&, DescribeEncryptionStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEncryptionStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExistedInstancesResponse> DescribeExistedInstancesOutcome;
                typedef std::future<DescribeExistedInstancesOutcome> DescribeExistedInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeExistedInstancesRequest&, DescribeExistedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExistedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExternalNodeResponse> DescribeExternalNodeOutcome;
                typedef std::future<DescribeExternalNodeOutcome> DescribeExternalNodeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeExternalNodeRequest&, DescribeExternalNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExternalNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExternalNodePoolsResponse> DescribeExternalNodePoolsOutcome;
                typedef std::future<DescribeExternalNodePoolsOutcome> DescribeExternalNodePoolsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeExternalNodePoolsRequest&, DescribeExternalNodePoolsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExternalNodePoolsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExternalNodeScriptResponse> DescribeExternalNodeScriptOutcome;
                typedef std::future<DescribeExternalNodeScriptOutcome> DescribeExternalNodeScriptOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeExternalNodeScriptRequest&, DescribeExternalNodeScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExternalNodeScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExternalNodeSupportConfigResponse> DescribeExternalNodeSupportConfigOutcome;
                typedef std::future<DescribeExternalNodeSupportConfigOutcome> DescribeExternalNodeSupportConfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeExternalNodeSupportConfigRequest&, DescribeExternalNodeSupportConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExternalNodeSupportConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalMaintenanceWindowAndExclusionsResponse> DescribeGlobalMaintenanceWindowAndExclusionsOutcome;
                typedef std::future<DescribeGlobalMaintenanceWindowAndExclusionsOutcome> DescribeGlobalMaintenanceWindowAndExclusionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeGlobalMaintenanceWindowAndExclusionsRequest&, DescribeGlobalMaintenanceWindowAndExclusionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalMaintenanceWindowAndExclusionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIPAMDResponse> DescribeIPAMDOutcome;
                typedef std::future<DescribeIPAMDOutcome> DescribeIPAMDOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeIPAMDRequest&, DescribeIPAMDOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPAMDAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageCachesResponse> DescribeImageCachesOutcome;
                typedef std::future<DescribeImageCachesOutcome> DescribeImageCachesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeImageCachesRequest&, DescribeImageCachesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageCachesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImagesResponse> DescribeImagesOutcome;
                typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeImagesRequest&, DescribeImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogConfigsResponse> DescribeLogConfigsOutcome;
                typedef std::future<DescribeLogConfigsOutcome> DescribeLogConfigsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeLogConfigsRequest&, DescribeLogConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogSwitchesResponse> DescribeLogSwitchesOutcome;
                typedef std::future<DescribeLogSwitchesOutcome> DescribeLogSwitchesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeLogSwitchesRequest&, DescribeLogSwitchesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogSwitchesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMasterComponentResponse> DescribeMasterComponentOutcome;
                typedef std::future<DescribeMasterComponentOutcome> DescribeMasterComponentOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeMasterComponentRequest&, DescribeMasterComponentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMasterComponentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOSImagesResponse> DescribeOSImagesOutcome;
                typedef std::future<DescribeOSImagesOutcome> DescribeOSImagesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeOSImagesRequest&, DescribeOSImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOSImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOpenPolicyListResponse> DescribeOpenPolicyListOutcome;
                typedef std::future<DescribeOpenPolicyListOutcome> DescribeOpenPolicyListOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeOpenPolicyListRequest&, DescribeOpenPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpenPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePodChargeInfoResponse> DescribePodChargeInfoOutcome;
                typedef std::future<DescribePodChargeInfoOutcome> DescribePodChargeInfoOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePodChargeInfoRequest&, DescribePodChargeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePodChargeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePodDeductionRateResponse> DescribePodDeductionRateOutcome;
                typedef std::future<DescribePodDeductionRateOutcome> DescribePodDeductionRateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePodDeductionRateRequest&, DescribePodDeductionRateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePodDeductionRateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePodsBySpecResponse> DescribePodsBySpecOutcome;
                typedef std::future<DescribePodsBySpecOutcome> DescribePodsBySpecOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePodsBySpecRequest&, DescribePodsBySpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePodsBySpecAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePostNodeResourcesResponse> DescribePostNodeResourcesOutcome;
                typedef std::future<DescribePostNodeResourcesOutcome> DescribePostNodeResourcesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePostNodeResourcesRequest&, DescribePostNodeResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePostNodeResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusAgentInstancesResponse> DescribePrometheusAgentInstancesOutcome;
                typedef std::future<DescribePrometheusAgentInstancesOutcome> DescribePrometheusAgentInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusAgentInstancesRequest&, DescribePrometheusAgentInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAgentInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusAgentsResponse> DescribePrometheusAgentsOutcome;
                typedef std::future<DescribePrometheusAgentsOutcome> DescribePrometheusAgentsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusAgentsRequest&, DescribePrometheusAgentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAgentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusAlertHistoryResponse> DescribePrometheusAlertHistoryOutcome;
                typedef std::future<DescribePrometheusAlertHistoryOutcome> DescribePrometheusAlertHistoryOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusAlertHistoryRequest&, DescribePrometheusAlertHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAlertHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusAlertPolicyResponse> DescribePrometheusAlertPolicyOutcome;
                typedef std::future<DescribePrometheusAlertPolicyOutcome> DescribePrometheusAlertPolicyOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusAlertPolicyRequest&, DescribePrometheusAlertPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAlertPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusAlertRuleResponse> DescribePrometheusAlertRuleOutcome;
                typedef std::future<DescribePrometheusAlertRuleOutcome> DescribePrometheusAlertRuleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusAlertRuleRequest&, DescribePrometheusAlertRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAlertRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusClusterAgentsResponse> DescribePrometheusClusterAgentsOutcome;
                typedef std::future<DescribePrometheusClusterAgentsOutcome> DescribePrometheusClusterAgentsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusClusterAgentsRequest&, DescribePrometheusClusterAgentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusClusterAgentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusConfigResponse> DescribePrometheusConfigOutcome;
                typedef std::future<DescribePrometheusConfigOutcome> DescribePrometheusConfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusConfigRequest&, DescribePrometheusConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusGlobalConfigResponse> DescribePrometheusGlobalConfigOutcome;
                typedef std::future<DescribePrometheusGlobalConfigOutcome> DescribePrometheusGlobalConfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusGlobalConfigRequest&, DescribePrometheusGlobalConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusGlobalConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusGlobalNotificationResponse> DescribePrometheusGlobalNotificationOutcome;
                typedef std::future<DescribePrometheusGlobalNotificationOutcome> DescribePrometheusGlobalNotificationOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusGlobalNotificationRequest&, DescribePrometheusGlobalNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusGlobalNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusInstanceResponse> DescribePrometheusInstanceOutcome;
                typedef std::future<DescribePrometheusInstanceOutcome> DescribePrometheusInstanceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusInstanceRequest&, DescribePrometheusInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusInstanceInitStatusResponse> DescribePrometheusInstanceInitStatusOutcome;
                typedef std::future<DescribePrometheusInstanceInitStatusOutcome> DescribePrometheusInstanceInitStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusInstanceInitStatusRequest&, DescribePrometheusInstanceInitStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusInstanceInitStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusInstancesOverviewResponse> DescribePrometheusInstancesOverviewOutcome;
                typedef std::future<DescribePrometheusInstancesOverviewOutcome> DescribePrometheusInstancesOverviewOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusInstancesOverviewRequest&, DescribePrometheusInstancesOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusInstancesOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusOverviewsResponse> DescribePrometheusOverviewsOutcome;
                typedef std::future<DescribePrometheusOverviewsOutcome> DescribePrometheusOverviewsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusOverviewsRequest&, DescribePrometheusOverviewsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusOverviewsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusRecordRulesResponse> DescribePrometheusRecordRulesOutcome;
                typedef std::future<DescribePrometheusRecordRulesOutcome> DescribePrometheusRecordRulesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusRecordRulesRequest&, DescribePrometheusRecordRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusRecordRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusTargetsResponse> DescribePrometheusTargetsOutcome;
                typedef std::future<DescribePrometheusTargetsOutcome> DescribePrometheusTargetsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusTargetsRequest&, DescribePrometheusTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusTempResponse> DescribePrometheusTempOutcome;
                typedef std::future<DescribePrometheusTempOutcome> DescribePrometheusTempOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusTempRequest&, DescribePrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusTempSyncResponse> DescribePrometheusTempSyncOutcome;
                typedef std::future<DescribePrometheusTempSyncOutcome> DescribePrometheusTempSyncOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusTempSyncRequest&, DescribePrometheusTempSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusTempSyncAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusTemplateSyncResponse> DescribePrometheusTemplateSyncOutcome;
                typedef std::future<DescribePrometheusTemplateSyncOutcome> DescribePrometheusTemplateSyncOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusTemplateSyncRequest&, DescribePrometheusTemplateSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusTemplateSyncAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusTemplatesResponse> DescribePrometheusTemplatesOutcome;
                typedef std::future<DescribePrometheusTemplatesOutcome> DescribePrometheusTemplatesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusTemplatesRequest&, DescribePrometheusTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRIUtilizationDetailResponse> DescribeRIUtilizationDetailOutcome;
                typedef std::future<DescribeRIUtilizationDetailOutcome> DescribeRIUtilizationDetailOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeRIUtilizationDetailRequest&, DescribeRIUtilizationDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRIUtilizationDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReservedInstanceUtilizationRateResponse> DescribeReservedInstanceUtilizationRateOutcome;
                typedef std::future<DescribeReservedInstanceUtilizationRateOutcome> DescribeReservedInstanceUtilizationRateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeReservedInstanceUtilizationRateRequest&, DescribeReservedInstanceUtilizationRateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReservedInstanceUtilizationRateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReservedInstancesResponse> DescribeReservedInstancesOutcome;
                typedef std::future<DescribeReservedInstancesOutcome> DescribeReservedInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeReservedInstancesRequest&, DescribeReservedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReservedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceUsageResponse> DescribeResourceUsageOutcome;
                typedef std::future<DescribeResourceUsageOutcome> DescribeResourceUsageOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeResourceUsageRequest&, DescribeResourceUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRollOutSequencesResponse> DescribeRollOutSequencesOutcome;
                typedef std::future<DescribeRollOutSequencesOutcome> DescribeRollOutSequencesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeRollOutSequencesRequest&, DescribeRollOutSequencesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRollOutSequencesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRouteTableConflictsResponse> DescribeRouteTableConflictsOutcome;
                typedef std::future<DescribeRouteTableConflictsOutcome> DescribeRouteTableConflictsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeRouteTableConflictsRequest&, DescribeRouteTableConflictsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTableConflictsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSupportedRuntimeResponse> DescribeSupportedRuntimeOutcome;
                typedef std::future<DescribeSupportedRuntimeOutcome> DescribeSupportedRuntimeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeSupportedRuntimeRequest&, DescribeSupportedRuntimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupportedRuntimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTKEEdgeClusterCredentialResponse> DescribeTKEEdgeClusterCredentialOutcome;
                typedef std::future<DescribeTKEEdgeClusterCredentialOutcome> DescribeTKEEdgeClusterCredentialOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeTKEEdgeClusterCredentialRequest&, DescribeTKEEdgeClusterCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTKEEdgeClusterCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTKEEdgeClusterStatusResponse> DescribeTKEEdgeClusterStatusOutcome;
                typedef std::future<DescribeTKEEdgeClusterStatusOutcome> DescribeTKEEdgeClusterStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeTKEEdgeClusterStatusRequest&, DescribeTKEEdgeClusterStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTKEEdgeClusterStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTKEEdgeClustersResponse> DescribeTKEEdgeClustersOutcome;
                typedef std::future<DescribeTKEEdgeClustersOutcome> DescribeTKEEdgeClustersOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeTKEEdgeClustersRequest&, DescribeTKEEdgeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTKEEdgeClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTKEEdgeExternalKubeconfigResponse> DescribeTKEEdgeExternalKubeconfigOutcome;
                typedef std::future<DescribeTKEEdgeExternalKubeconfigOutcome> DescribeTKEEdgeExternalKubeconfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeTKEEdgeExternalKubeconfigRequest&, DescribeTKEEdgeExternalKubeconfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTKEEdgeExternalKubeconfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTKEEdgeScriptResponse> DescribeTKEEdgeScriptOutcome;
                typedef std::future<DescribeTKEEdgeScriptOutcome> DescribeTKEEdgeScriptOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeTKEEdgeScriptRequest&, DescribeTKEEdgeScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTKEEdgeScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUpgradeTaskDetailResponse> DescribeUpgradeTaskDetailOutcome;
                typedef std::future<DescribeUpgradeTaskDetailOutcome> DescribeUpgradeTaskDetailOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeUpgradeTaskDetailRequest&, DescribeUpgradeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpgradeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUpgradeTasksResponse> DescribeUpgradeTasksOutcome;
                typedef std::future<DescribeUpgradeTasksOutcome> DescribeUpgradeTasksOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeUpgradeTasksRequest&, DescribeUpgradeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpgradeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserPermissionsResponse> DescribeUserPermissionsOutcome;
                typedef std::future<DescribeUserPermissionsOutcome> DescribeUserPermissionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeUserPermissionsRequest&, DescribeUserPermissionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserPermissionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVersionsResponse> DescribeVersionsOutcome;
                typedef std::future<DescribeVersionsOutcome> DescribeVersionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeVersionsRequest&, DescribeVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcCniPodLimitsResponse> DescribeVpcCniPodLimitsOutcome;
                typedef std::future<DescribeVpcCniPodLimitsOutcome> DescribeVpcCniPodLimitsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeVpcCniPodLimitsRequest&, DescribeVpcCniPodLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcCniPodLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableClusterAuditResponse> DisableClusterAuditOutcome;
                typedef std::future<DisableClusterAuditOutcome> DisableClusterAuditOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DisableClusterAuditRequest&, DisableClusterAuditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableClusterAuditAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableClusterDeletionProtectionResponse> DisableClusterDeletionProtectionOutcome;
                typedef std::future<DisableClusterDeletionProtectionOutcome> DisableClusterDeletionProtectionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DisableClusterDeletionProtectionRequest&, DisableClusterDeletionProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableClusterDeletionProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableControlPlaneLogsResponse> DisableControlPlaneLogsOutcome;
                typedef std::future<DisableControlPlaneLogsOutcome> DisableControlPlaneLogsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DisableControlPlaneLogsRequest&, DisableControlPlaneLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableControlPlaneLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableEncryptionProtectionResponse> DisableEncryptionProtectionOutcome;
                typedef std::future<DisableEncryptionProtectionOutcome> DisableEncryptionProtectionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DisableEncryptionProtectionRequest&, DisableEncryptionProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableEncryptionProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableEventPersistenceResponse> DisableEventPersistenceOutcome;
                typedef std::future<DisableEventPersistenceOutcome> DisableEventPersistenceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DisableEventPersistenceRequest&, DisableEventPersistenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableEventPersistenceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableVpcCniNetworkTypeResponse> DisableVpcCniNetworkTypeOutcome;
                typedef std::future<DisableVpcCniNetworkTypeOutcome> DisableVpcCniNetworkTypeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DisableVpcCniNetworkTypeRequest&, DisableVpcCniNetworkTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableVpcCniNetworkTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DrainClusterVirtualNodeResponse> DrainClusterVirtualNodeOutcome;
                typedef std::future<DrainClusterVirtualNodeOutcome> DrainClusterVirtualNodeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DrainClusterVirtualNodeRequest&, DrainClusterVirtualNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DrainClusterVirtualNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DrainExternalNodeResponse> DrainExternalNodeOutcome;
                typedef std::future<DrainExternalNodeOutcome> DrainExternalNodeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DrainExternalNodeRequest&, DrainExternalNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DrainExternalNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableClusterAuditResponse> EnableClusterAuditOutcome;
                typedef std::future<EnableClusterAuditOutcome> EnableClusterAuditOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableClusterAuditRequest&, EnableClusterAuditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableClusterAuditAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableClusterDeletionProtectionResponse> EnableClusterDeletionProtectionOutcome;
                typedef std::future<EnableClusterDeletionProtectionOutcome> EnableClusterDeletionProtectionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableClusterDeletionProtectionRequest&, EnableClusterDeletionProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableClusterDeletionProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableControlPlaneLogsResponse> EnableControlPlaneLogsOutcome;
                typedef std::future<EnableControlPlaneLogsOutcome> EnableControlPlaneLogsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableControlPlaneLogsRequest&, EnableControlPlaneLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableControlPlaneLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableEksEventPersistenceResponse> EnableEksEventPersistenceOutcome;
                typedef std::future<EnableEksEventPersistenceOutcome> EnableEksEventPersistenceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableEksEventPersistenceRequest&, EnableEksEventPersistenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableEksEventPersistenceAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableEncryptionProtectionResponse> EnableEncryptionProtectionOutcome;
                typedef std::future<EnableEncryptionProtectionOutcome> EnableEncryptionProtectionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableEncryptionProtectionRequest&, EnableEncryptionProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableEncryptionProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableEventPersistenceResponse> EnableEventPersistenceOutcome;
                typedef std::future<EnableEventPersistenceOutcome> EnableEventPersistenceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableEventPersistenceRequest&, EnableEventPersistenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableEventPersistenceAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableExternalNodeSupportResponse> EnableExternalNodeSupportOutcome;
                typedef std::future<EnableExternalNodeSupportOutcome> EnableExternalNodeSupportOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableExternalNodeSupportRequest&, EnableExternalNodeSupportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableExternalNodeSupportAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableVpcCniNetworkTypeResponse> EnableVpcCniNetworkTypeOutcome;
                typedef std::future<EnableVpcCniNetworkTypeOutcome> EnableVpcCniNetworkTypeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableVpcCniNetworkTypeRequest&, EnableVpcCniNetworkTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableVpcCniNetworkTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ForwardTKEEdgeApplicationRequestV3Response> ForwardTKEEdgeApplicationRequestV3Outcome;
                typedef std::future<ForwardTKEEdgeApplicationRequestV3Outcome> ForwardTKEEdgeApplicationRequestV3OutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ForwardTKEEdgeApplicationRequestV3Request&, ForwardTKEEdgeApplicationRequestV3Outcome, const std::shared_ptr<const AsyncCallerContext>&)> ForwardTKEEdgeApplicationRequestV3AsyncHandler;
                typedef Outcome<Core::Error, Model::GetClusterLevelPriceResponse> GetClusterLevelPriceOutcome;
                typedef std::future<GetClusterLevelPriceOutcome> GetClusterLevelPriceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::GetClusterLevelPriceRequest&, GetClusterLevelPriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterLevelPriceAsyncHandler;
                typedef Outcome<Core::Error, Model::GetMostSuitableImageCacheResponse> GetMostSuitableImageCacheOutcome;
                typedef std::future<GetMostSuitableImageCacheOutcome> GetMostSuitableImageCacheOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::GetMostSuitableImageCacheRequest&, GetMostSuitableImageCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMostSuitableImageCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTkeAppChartListResponse> GetTkeAppChartListOutcome;
                typedef std::future<GetTkeAppChartListOutcome> GetTkeAppChartListOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::GetTkeAppChartListRequest&, GetTkeAppChartListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTkeAppChartListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUpgradeInstanceProgressResponse> GetUpgradeInstanceProgressOutcome;
                typedef std::future<GetUpgradeInstanceProgressOutcome> GetUpgradeInstanceProgressOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::GetUpgradeInstanceProgressRequest&, GetUpgradeInstanceProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUpgradeInstanceProgressAsyncHandler;
                typedef Outcome<Core::Error, Model::GrantUserPermissionsResponse> GrantUserPermissionsOutcome;
                typedef std::future<GrantUserPermissionsOutcome> GrantUserPermissionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::GrantUserPermissionsRequest&, GrantUserPermissionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantUserPermissionsAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallAddonResponse> InstallAddonOutcome;
                typedef std::future<InstallAddonOutcome> InstallAddonOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::InstallAddonRequest&, InstallAddonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallAddonAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallEdgeLogAgentResponse> InstallEdgeLogAgentOutcome;
                typedef std::future<InstallEdgeLogAgentOutcome> InstallEdgeLogAgentOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::InstallEdgeLogAgentRequest&, InstallEdgeLogAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallEdgeLogAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallLogAgentResponse> InstallLogAgentOutcome;
                typedef std::future<InstallLogAgentOutcome> InstallLogAgentOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::InstallLogAgentRequest&, InstallLogAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallLogAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::ListClusterInspectionResultsResponse> ListClusterInspectionResultsOutcome;
                typedef std::future<ListClusterInspectionResultsOutcome> ListClusterInspectionResultsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ListClusterInspectionResultsRequest&, ListClusterInspectionResultsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterInspectionResultsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListClusterInspectionResultsItemsResponse> ListClusterInspectionResultsItemsOutcome;
                typedef std::future<ListClusterInspectionResultsItemsOutcome> ListClusterInspectionResultsItemsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ListClusterInspectionResultsItemsRequest&, ListClusterInspectionResultsItemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterInspectionResultsItemsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterAsGroupAttributeResponse> ModifyClusterAsGroupAttributeOutcome;
                typedef std::future<ModifyClusterAsGroupAttributeOutcome> ModifyClusterAsGroupAttributeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterAsGroupAttributeRequest&, ModifyClusterAsGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAsGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterAsGroupOptionAttributeResponse> ModifyClusterAsGroupOptionAttributeOutcome;
                typedef std::future<ModifyClusterAsGroupOptionAttributeOutcome> ModifyClusterAsGroupOptionAttributeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterAsGroupOptionAttributeRequest&, ModifyClusterAsGroupOptionAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAsGroupOptionAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterAttributeResponse> ModifyClusterAttributeOutcome;
                typedef std::future<ModifyClusterAttributeOutcome> ModifyClusterAttributeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterAttributeRequest&, ModifyClusterAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterAuthenticationOptionsResponse> ModifyClusterAuthenticationOptionsOutcome;
                typedef std::future<ModifyClusterAuthenticationOptionsOutcome> ModifyClusterAuthenticationOptionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterAuthenticationOptionsRequest&, ModifyClusterAuthenticationOptionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAuthenticationOptionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterEndpointSPResponse> ModifyClusterEndpointSPOutcome;
                typedef std::future<ModifyClusterEndpointSPOutcome> ModifyClusterEndpointSPOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterEndpointSPRequest&, ModifyClusterEndpointSPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterEndpointSPAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterExtraArgsResponse> ModifyClusterExtraArgsOutcome;
                typedef std::future<ModifyClusterExtraArgsOutcome> ModifyClusterExtraArgsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterExtraArgsRequest&, ModifyClusterExtraArgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterExtraArgsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterExtraArgsTaskStateResponse> ModifyClusterExtraArgsTaskStateOutcome;
                typedef std::future<ModifyClusterExtraArgsTaskStateOutcome> ModifyClusterExtraArgsTaskStateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterExtraArgsTaskStateRequest&, ModifyClusterExtraArgsTaskStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterExtraArgsTaskStateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterImageResponse> ModifyClusterImageOutcome;
                typedef std::future<ModifyClusterImageOutcome> ModifyClusterImageOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterImageRequest&, ModifyClusterImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterImageAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterMaintenanceWindowAndExclusionsResponse> ModifyClusterMaintenanceWindowAndExclusionsOutcome;
                typedef std::future<ModifyClusterMaintenanceWindowAndExclusionsOutcome> ModifyClusterMaintenanceWindowAndExclusionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterMaintenanceWindowAndExclusionsRequest&, ModifyClusterMaintenanceWindowAndExclusionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterMaintenanceWindowAndExclusionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterNodePoolResponse> ModifyClusterNodePoolOutcome;
                typedef std::future<ModifyClusterNodePoolOutcome> ModifyClusterNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterNodePoolRequest&, ModifyClusterNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterRollOutSequenceTagsResponse> ModifyClusterRollOutSequenceTagsOutcome;
                typedef std::future<ModifyClusterRollOutSequenceTagsOutcome> ModifyClusterRollOutSequenceTagsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterRollOutSequenceTagsRequest&, ModifyClusterRollOutSequenceTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterRollOutSequenceTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterRuntimeConfigResponse> ModifyClusterRuntimeConfigOutcome;
                typedef std::future<ModifyClusterRuntimeConfigOutcome> ModifyClusterRuntimeConfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterRuntimeConfigRequest&, ModifyClusterRuntimeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterRuntimeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterSchedulerPolicyResponse> ModifyClusterSchedulerPolicyOutcome;
                typedef std::future<ModifyClusterSchedulerPolicyOutcome> ModifyClusterSchedulerPolicyOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterSchedulerPolicyRequest&, ModifyClusterSchedulerPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterSchedulerPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterTagsResponse> ModifyClusterTagsOutcome;
                typedef std::future<ModifyClusterTagsOutcome> ModifyClusterTagsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterTagsRequest&, ModifyClusterTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterVirtualNodePoolResponse> ModifyClusterVirtualNodePoolOutcome;
                typedef std::future<ModifyClusterVirtualNodePoolOutcome> ModifyClusterVirtualNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterVirtualNodePoolRequest&, ModifyClusterVirtualNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterVirtualNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExternalNodePoolResponse> ModifyExternalNodePoolOutcome;
                typedef std::future<ModifyExternalNodePoolOutcome> ModifyExternalNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyExternalNodePoolRequest&, ModifyExternalNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExternalNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGlobalMaintenanceWindowAndExclusionsResponse> ModifyGlobalMaintenanceWindowAndExclusionsOutcome;
                typedef std::future<ModifyGlobalMaintenanceWindowAndExclusionsOutcome> ModifyGlobalMaintenanceWindowAndExclusionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyGlobalMaintenanceWindowAndExclusionsRequest&, ModifyGlobalMaintenanceWindowAndExclusionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalMaintenanceWindowAndExclusionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMasterComponentResponse> ModifyMasterComponentOutcome;
                typedef std::future<ModifyMasterComponentOutcome> ModifyMasterComponentOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyMasterComponentRequest&, ModifyMasterComponentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMasterComponentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNodePoolDesiredCapacityAboutAsgResponse> ModifyNodePoolDesiredCapacityAboutAsgOutcome;
                typedef std::future<ModifyNodePoolDesiredCapacityAboutAsgOutcome> ModifyNodePoolDesiredCapacityAboutAsgOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyNodePoolDesiredCapacityAboutAsgRequest&, ModifyNodePoolDesiredCapacityAboutAsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodePoolDesiredCapacityAboutAsgAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNodePoolInstanceTypesResponse> ModifyNodePoolInstanceTypesOutcome;
                typedef std::future<ModifyNodePoolInstanceTypesOutcome> ModifyNodePoolInstanceTypesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyNodePoolInstanceTypesRequest&, ModifyNodePoolInstanceTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodePoolInstanceTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOpenPolicyListResponse> ModifyOpenPolicyListOutcome;
                typedef std::future<ModifyOpenPolicyListOutcome> ModifyOpenPolicyListOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyOpenPolicyListRequest&, ModifyOpenPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOpenPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusAgentExternalLabelsResponse> ModifyPrometheusAgentExternalLabelsOutcome;
                typedef std::future<ModifyPrometheusAgentExternalLabelsOutcome> ModifyPrometheusAgentExternalLabelsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyPrometheusAgentExternalLabelsRequest&, ModifyPrometheusAgentExternalLabelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusAgentExternalLabelsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusAlertPolicyResponse> ModifyPrometheusAlertPolicyOutcome;
                typedef std::future<ModifyPrometheusAlertPolicyOutcome> ModifyPrometheusAlertPolicyOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyPrometheusAlertPolicyRequest&, ModifyPrometheusAlertPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusAlertPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusAlertRuleResponse> ModifyPrometheusAlertRuleOutcome;
                typedef std::future<ModifyPrometheusAlertRuleOutcome> ModifyPrometheusAlertRuleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyPrometheusAlertRuleRequest&, ModifyPrometheusAlertRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusAlertRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusConfigResponse> ModifyPrometheusConfigOutcome;
                typedef std::future<ModifyPrometheusConfigOutcome> ModifyPrometheusConfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyPrometheusConfigRequest&, ModifyPrometheusConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusGlobalNotificationResponse> ModifyPrometheusGlobalNotificationOutcome;
                typedef std::future<ModifyPrometheusGlobalNotificationOutcome> ModifyPrometheusGlobalNotificationOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyPrometheusGlobalNotificationRequest&, ModifyPrometheusGlobalNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusGlobalNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusRecordRuleYamlResponse> ModifyPrometheusRecordRuleYamlOutcome;
                typedef std::future<ModifyPrometheusRecordRuleYamlOutcome> ModifyPrometheusRecordRuleYamlOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyPrometheusRecordRuleYamlRequest&, ModifyPrometheusRecordRuleYamlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusRecordRuleYamlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusTempResponse> ModifyPrometheusTempOutcome;
                typedef std::future<ModifyPrometheusTempOutcome> ModifyPrometheusTempOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyPrometheusTempRequest&, ModifyPrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusTemplateResponse> ModifyPrometheusTemplateOutcome;
                typedef std::future<ModifyPrometheusTemplateOutcome> ModifyPrometheusTemplateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyPrometheusTemplateRequest&, ModifyPrometheusTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReservedInstanceScopeResponse> ModifyReservedInstanceScopeOutcome;
                typedef std::future<ModifyReservedInstanceScopeOutcome> ModifyReservedInstanceScopeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyReservedInstanceScopeRequest&, ModifyReservedInstanceScopeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReservedInstanceScopeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRollOutSequenceResponse> ModifyRollOutSequenceOutcome;
                typedef std::future<ModifyRollOutSequenceOutcome> ModifyRollOutSequenceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyRollOutSequenceRequest&, ModifyRollOutSequenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRollOutSequenceAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveNodeFromNodePoolResponse> RemoveNodeFromNodePoolOutcome;
                typedef std::future<RemoveNodeFromNodePoolOutcome> RemoveNodeFromNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::RemoveNodeFromNodePoolRequest&, RemoveNodeFromNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveNodeFromNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewReservedInstancesResponse> RenewReservedInstancesOutcome;
                typedef std::future<RenewReservedInstancesOutcome> RenewReservedInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::RenewReservedInstancesRequest&, RenewReservedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewReservedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartEKSContainerInstancesResponse> RestartEKSContainerInstancesOutcome;
                typedef std::future<RestartEKSContainerInstancesOutcome> RestartEKSContainerInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::RestartEKSContainerInstancesRequest&, RestartEKSContainerInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartEKSContainerInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackClusterReleaseResponse> RollbackClusterReleaseOutcome;
                typedef std::future<RollbackClusterReleaseOutcome> RollbackClusterReleaseOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::RollbackClusterReleaseRequest&, RollbackClusterReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackClusterReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::RunPrometheusInstanceResponse> RunPrometheusInstanceOutcome;
                typedef std::future<RunPrometheusInstanceOutcome> RunPrometheusInstanceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::RunPrometheusInstanceRequest&, RunPrometheusInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunPrometheusInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleInClusterMasterResponse> ScaleInClusterMasterOutcome;
                typedef std::future<ScaleInClusterMasterOutcome> ScaleInClusterMasterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ScaleInClusterMasterRequest&, ScaleInClusterMasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleInClusterMasterAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleOutClusterMasterResponse> ScaleOutClusterMasterOutcome;
                typedef std::future<ScaleOutClusterMasterOutcome> ScaleOutClusterMasterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ScaleOutClusterMasterRequest&, ScaleOutClusterMasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutClusterMasterAsyncHandler;
                typedef Outcome<Core::Error, Model::SetNodePoolNodeProtectionResponse> SetNodePoolNodeProtectionOutcome;
                typedef std::future<SetNodePoolNodeProtectionOutcome> SetNodePoolNodeProtectionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::SetNodePoolNodeProtectionRequest&, SetNodePoolNodeProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetNodePoolNodeProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchClusterEndpointResponse> SwitchClusterEndpointOutcome;
                typedef std::future<SwitchClusterEndpointOutcome> SwitchClusterEndpointOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::SwitchClusterEndpointRequest&, SwitchClusterEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchClusterEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncPrometheusTempResponse> SyncPrometheusTempOutcome;
                typedef std::future<SyncPrometheusTempOutcome> SyncPrometheusTempOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::SyncPrometheusTempRequest&, SyncPrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncPrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncPrometheusTemplateResponse> SyncPrometheusTemplateOutcome;
                typedef std::future<SyncPrometheusTemplateOutcome> SyncPrometheusTemplateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::SyncPrometheusTemplateRequest&, SyncPrometheusTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncPrometheusTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::UninstallClusterReleaseResponse> UninstallClusterReleaseOutcome;
                typedef std::future<UninstallClusterReleaseOutcome> UninstallClusterReleaseOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UninstallClusterReleaseRequest&, UninstallClusterReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UninstallClusterReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::UninstallEdgeLogAgentResponse> UninstallEdgeLogAgentOutcome;
                typedef std::future<UninstallEdgeLogAgentOutcome> UninstallEdgeLogAgentOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UninstallEdgeLogAgentRequest&, UninstallEdgeLogAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UninstallEdgeLogAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::UninstallLogAgentResponse> UninstallLogAgentOutcome;
                typedef std::future<UninstallLogAgentOutcome> UninstallLogAgentOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UninstallLogAgentRequest&, UninstallLogAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UninstallLogAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAddonResponse> UpdateAddonOutcome;
                typedef std::future<UpdateAddonOutcome> UpdateAddonOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateAddonRequest&, UpdateAddonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAddonAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateClusterKubeconfigResponse> UpdateClusterKubeconfigOutcome;
                typedef std::future<UpdateClusterKubeconfigOutcome> UpdateClusterKubeconfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateClusterKubeconfigRequest&, UpdateClusterKubeconfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterKubeconfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateClusterVersionResponse> UpdateClusterVersionOutcome;
                typedef std::future<UpdateClusterVersionOutcome> UpdateClusterVersionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateClusterVersionRequest&, UpdateClusterVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEKSClusterResponse> UpdateEKSClusterOutcome;
                typedef std::future<UpdateEKSClusterOutcome> UpdateEKSClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateEKSClusterRequest&, UpdateEKSClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEKSClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEKSContainerInstanceResponse> UpdateEKSContainerInstanceOutcome;
                typedef std::future<UpdateEKSContainerInstanceOutcome> UpdateEKSContainerInstanceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateEKSContainerInstanceRequest&, UpdateEKSContainerInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEKSContainerInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEdgeClusterVersionResponse> UpdateEdgeClusterVersionOutcome;
                typedef std::future<UpdateEdgeClusterVersionOutcome> UpdateEdgeClusterVersionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateEdgeClusterVersionRequest&, UpdateEdgeClusterVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEdgeClusterVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateImageCacheResponse> UpdateImageCacheOutcome;
                typedef std::future<UpdateImageCacheOutcome> UpdateImageCacheOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateImageCacheRequest&, UpdateImageCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateImageCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateTKEEdgeClusterResponse> UpdateTKEEdgeClusterOutcome;
                typedef std::future<UpdateTKEEdgeClusterOutcome> UpdateTKEEdgeClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateTKEEdgeClusterRequest&, UpdateTKEEdgeClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTKEEdgeClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeClusterInstancesResponse> UpgradeClusterInstancesOutcome;
                typedef std::future<UpgradeClusterInstancesOutcome> UpgradeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpgradeClusterInstancesRequest&, UpgradeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeClusterReleaseResponse> UpgradeClusterReleaseOutcome;
                typedef std::future<UpgradeClusterReleaseOutcome> UpgradeClusterReleaseOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpgradeClusterReleaseRequest&, UpgradeClusterReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeClusterReleaseAsyncHandler;



                /**
                 *通过此接口，可以获取集群的tke:admin的ClusterRole，即管理员角色，可以用于CAM侧高权限的用户，通过CAM策略给予子账户此接口权限，进而可以通过此接口直接获取到kubernetes集群内的管理员角色。
                 * @param req AcquireClusterAdminRoleRequest
                 * @return AcquireClusterAdminRoleOutcome
                 */
                AcquireClusterAdminRoleOutcome AcquireClusterAdminRole(const Model::AcquireClusterAdminRoleRequest &request);
                void AcquireClusterAdminRoleAsync(const Model::AcquireClusterAdminRoleRequest& request, const AcquireClusterAdminRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcquireClusterAdminRoleOutcomeCallable AcquireClusterAdminRoleCallable(const Model::AcquireClusterAdminRoleRequest& request);

                /**
                 *给GR集群增加可用的ClusterCIDR（开白才能使用此功能，如需要请联系我们）
                 * @param req AddClusterCIDRRequest
                 * @return AddClusterCIDROutcome
                 */
                AddClusterCIDROutcome AddClusterCIDR(const Model::AddClusterCIDRRequest &request);
                void AddClusterCIDRAsync(const Model::AddClusterCIDRRequest& request, const AddClusterCIDRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddClusterCIDROutcomeCallable AddClusterCIDRCallable(const Model::AddClusterCIDRRequest& request);

                /**
                 *添加已经存在的实例到集群
                 * @param req AddExistedInstancesRequest
                 * @return AddExistedInstancesOutcome
                 */
                AddExistedInstancesOutcome AddExistedInstances(const Model::AddExistedInstancesRequest &request);
                void AddExistedInstancesAsync(const Model::AddExistedInstancesRequest& request, const AddExistedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddExistedInstancesOutcomeCallable AddExistedInstancesCallable(const Model::AddExistedInstancesRequest& request);

                /**
                 *将集群内节点移入节点池
                 * @param req AddNodeToNodePoolRequest
                 * @return AddNodeToNodePoolOutcome
                 */
                AddNodeToNodePoolOutcome AddNodeToNodePool(const Model::AddNodeToNodePoolRequest &request);
                void AddNodeToNodePoolAsync(const Model::AddNodeToNodePoolRequest& request, const AddNodeToNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddNodeToNodePoolOutcomeCallable AddNodeToNodePoolCallable(const Model::AddNodeToNodePoolRequest& request);

                /**
                 *针对VPC-CNI模式的集群，增加集群容器网络可使用的子网
                 * @param req AddVpcCniSubnetsRequest
                 * @return AddVpcCniSubnetsOutcome
                 */
                AddVpcCniSubnetsOutcome AddVpcCniSubnets(const Model::AddVpcCniSubnetsRequest &request);
                void AddVpcCniSubnetsAsync(const Model::AddVpcCniSubnetsRequest& request, const AddVpcCniSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddVpcCniSubnetsOutcomeCallable AddVpcCniSubnetsCallable(const Model::AddVpcCniSubnetsRequest& request);

                /**
                 *在应用市场中取消安装失败的应用
                 * @param req CancelClusterReleaseRequest
                 * @return CancelClusterReleaseOutcome
                 */
                CancelClusterReleaseOutcome CancelClusterRelease(const Model::CancelClusterReleaseRequest &request);
                void CancelClusterReleaseAsync(const Model::CancelClusterReleaseRequest& request, const CancelClusterReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelClusterReleaseOutcomeCallable CancelClusterReleaseCallable(const Model::CancelClusterReleaseRequest& request);

                /**
                 *取消升级计划
                 * @param req CancelUpgradePlanRequest
                 * @return CancelUpgradePlanOutcome
                 */
                CancelUpgradePlanOutcome CancelUpgradePlan(const Model::CancelUpgradePlanRequest &request);
                void CancelUpgradePlanAsync(const Model::CancelUpgradePlanRequest& request, const CancelUpgradePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelUpgradePlanOutcomeCallable CancelUpgradePlanCallable(const Model::CancelUpgradePlanRequest& request);

                /**
                 *检查边缘计算集群的CIDR是否冲突
                 * @param req CheckEdgeClusterCIDRRequest
                 * @return CheckEdgeClusterCIDROutcome
                 */
                CheckEdgeClusterCIDROutcome CheckEdgeClusterCIDR(const Model::CheckEdgeClusterCIDRRequest &request);
                void CheckEdgeClusterCIDRAsync(const Model::CheckEdgeClusterCIDRRequest& request, const CheckEdgeClusterCIDRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckEdgeClusterCIDROutcomeCallable CheckEdgeClusterCIDRCallable(const Model::CheckEdgeClusterCIDRRequest& request);

                /**
                 *检查给定节点列表中哪些是可升级的
                 * @param req CheckInstancesUpgradeAbleRequest
                 * @return CheckInstancesUpgradeAbleOutcome
                 */
                CheckInstancesUpgradeAbleOutcome CheckInstancesUpgradeAble(const Model::CheckInstancesUpgradeAbleRequest &request);
                void CheckInstancesUpgradeAbleAsync(const Model::CheckInstancesUpgradeAbleRequest& request, const CheckInstancesUpgradeAbleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckInstancesUpgradeAbleOutcomeCallable CheckInstancesUpgradeAbleCallable(const Model::CheckInstancesUpgradeAbleRequest& request);

                /**
                 *创建备份仓库，指定了存储仓库类型（如COS）、COS桶地区、名称等信息，当前最多允许创建100个仓库， 注意此接口当前是全局接口，多个地域的TKE集群如果要备份到相同的备份仓库中，不需要重复创建备份仓库
                 * @param req CreateBackupStorageLocationRequest
                 * @return CreateBackupStorageLocationOutcome
                 */
                CreateBackupStorageLocationOutcome CreateBackupStorageLocation(const Model::CreateBackupStorageLocationRequest &request);
                void CreateBackupStorageLocationAsync(const Model::CreateBackupStorageLocationRequest& request, const CreateBackupStorageLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupStorageLocationOutcomeCallable CreateBackupStorageLocationCallable(const Model::CreateBackupStorageLocationRequest& request);

                /**
                 *创建日志采集配置
                 * @param req CreateCLSLogConfigRequest
                 * @return CreateCLSLogConfigOutcome
                 */
                CreateCLSLogConfigOutcome CreateCLSLogConfig(const Model::CreateCLSLogConfigRequest &request);
                void CreateCLSLogConfigAsync(const Model::CreateCLSLogConfigRequest& request, const CreateCLSLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCLSLogConfigOutcomeCallable CreateCLSLogConfigCallable(const Model::CreateCLSLogConfigRequest& request);

                /**
                 *创建集群
                 * @param req CreateClusterRequest
                 * @return CreateClusterOutcome
                 */
                CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest &request);
                void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request);

                /**
                 *创建集群访问端口
                 * @param req CreateClusterEndpointRequest
                 * @return CreateClusterEndpointOutcome
                 */
                CreateClusterEndpointOutcome CreateClusterEndpoint(const Model::CreateClusterEndpointRequest &request);
                void CreateClusterEndpointAsync(const Model::CreateClusterEndpointRequest& request, const CreateClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterEndpointOutcomeCallable CreateClusterEndpointCallable(const Model::CreateClusterEndpointRequest& request);

                /**
                 *创建托管集群外网访问端口（不再维护，准备下线）请使用新接口：CreateClusterEndpoint
                 * @param req CreateClusterEndpointVipRequest
                 * @return CreateClusterEndpointVipOutcome
                 */
                CreateClusterEndpointVipOutcome CreateClusterEndpointVip(const Model::CreateClusterEndpointVipRequest &request);
                void CreateClusterEndpointVipAsync(const Model::CreateClusterEndpointVipRequest& request, const CreateClusterEndpointVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterEndpointVipOutcomeCallable CreateClusterEndpointVipCallable(const Model::CreateClusterEndpointVipRequest& request);

                /**
                 *扩展(新建)集群节点
                 * @param req CreateClusterInstancesRequest
                 * @return CreateClusterInstancesOutcome
                 */
                CreateClusterInstancesOutcome CreateClusterInstances(const Model::CreateClusterInstancesRequest &request);
                void CreateClusterInstancesAsync(const Model::CreateClusterInstancesRequest& request, const CreateClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterInstancesOutcomeCallable CreateClusterInstancesCallable(const Model::CreateClusterInstancesRequest& request);

                /**
                 *创建集群维护时间窗口和排除项
                 * @param req CreateClusterMaintenanceWindowAndExclusionsRequest
                 * @return CreateClusterMaintenanceWindowAndExclusionsOutcome
                 */
                CreateClusterMaintenanceWindowAndExclusionsOutcome CreateClusterMaintenanceWindowAndExclusions(const Model::CreateClusterMaintenanceWindowAndExclusionsRequest &request);
                void CreateClusterMaintenanceWindowAndExclusionsAsync(const Model::CreateClusterMaintenanceWindowAndExclusionsRequest& request, const CreateClusterMaintenanceWindowAndExclusionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterMaintenanceWindowAndExclusionsOutcomeCallable CreateClusterMaintenanceWindowAndExclusionsCallable(const Model::CreateClusterMaintenanceWindowAndExclusionsRequest& request);

                /**
                 *创建节点池
                 * @param req CreateClusterNodePoolRequest
                 * @return CreateClusterNodePoolOutcome
                 */
                CreateClusterNodePoolOutcome CreateClusterNodePool(const Model::CreateClusterNodePoolRequest &request);
                void CreateClusterNodePoolAsync(const Model::CreateClusterNodePoolRequest& request, const CreateClusterNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterNodePoolOutcomeCallable CreateClusterNodePoolCallable(const Model::CreateClusterNodePoolRequest& request);

                /**
                 *集群创建应用
                 * @param req CreateClusterReleaseRequest
                 * @return CreateClusterReleaseOutcome
                 */
                CreateClusterReleaseOutcome CreateClusterRelease(const Model::CreateClusterReleaseRequest &request);
                void CreateClusterReleaseAsync(const Model::CreateClusterReleaseRequest& request, const CreateClusterReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterReleaseOutcomeCallable CreateClusterReleaseCallable(const Model::CreateClusterReleaseRequest& request);

                /**
                 *创建集群路由
                 * @param req CreateClusterRouteRequest
                 * @return CreateClusterRouteOutcome
                 */
                CreateClusterRouteOutcome CreateClusterRoute(const Model::CreateClusterRouteRequest &request);
                void CreateClusterRouteAsync(const Model::CreateClusterRouteRequest& request, const CreateClusterRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterRouteOutcomeCallable CreateClusterRouteCallable(const Model::CreateClusterRouteRequest& request);

                /**
                 *创建集群路由表
                 * @param req CreateClusterRouteTableRequest
                 * @return CreateClusterRouteTableOutcome
                 */
                CreateClusterRouteTableOutcome CreateClusterRouteTable(const Model::CreateClusterRouteTableRequest &request);
                void CreateClusterRouteTableAsync(const Model::CreateClusterRouteTableRequest& request, const CreateClusterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterRouteTableOutcomeCallable CreateClusterRouteTableCallable(const Model::CreateClusterRouteTableRequest& request);

                /**
                 *创建按量计费超级节点
                 * @param req CreateClusterVirtualNodeRequest
                 * @return CreateClusterVirtualNodeOutcome
                 */
                CreateClusterVirtualNodeOutcome CreateClusterVirtualNode(const Model::CreateClusterVirtualNodeRequest &request);
                void CreateClusterVirtualNodeAsync(const Model::CreateClusterVirtualNodeRequest& request, const CreateClusterVirtualNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterVirtualNodeOutcomeCallable CreateClusterVirtualNodeCallable(const Model::CreateClusterVirtualNodeRequest& request);

                /**
                 *创建超级节点池
                 * @param req CreateClusterVirtualNodePoolRequest
                 * @return CreateClusterVirtualNodePoolOutcome
                 */
                CreateClusterVirtualNodePoolOutcome CreateClusterVirtualNodePool(const Model::CreateClusterVirtualNodePoolRequest &request);
                void CreateClusterVirtualNodePoolAsync(const Model::CreateClusterVirtualNodePoolRequest& request, const CreateClusterVirtualNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterVirtualNodePoolOutcomeCallable CreateClusterVirtualNodePoolCallable(const Model::CreateClusterVirtualNodePoolRequest& request);

                /**
                 *创建边缘计算ECM机器
                 * @param req CreateECMInstancesRequest
                 * @return CreateECMInstancesOutcome
                 */
                CreateECMInstancesOutcome CreateECMInstances(const Model::CreateECMInstancesRequest &request);
                void CreateECMInstancesAsync(const Model::CreateECMInstancesRequest& request, const CreateECMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateECMInstancesOutcomeCallable CreateECMInstancesCallable(const Model::CreateECMInstancesRequest& request);

                /**
                 *创建弹性集群
                 * @param req CreateEKSClusterRequest
                 * @return CreateEKSClusterOutcome
                 */
                CreateEKSClusterOutcome CreateEKSCluster(const Model::CreateEKSClusterRequest &request);
                void CreateEKSClusterAsync(const Model::CreateEKSClusterRequest& request, const CreateEKSClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEKSClusterOutcomeCallable CreateEKSClusterCallable(const Model::CreateEKSClusterRequest& request);

                /**
                 *创建容器实例
                 * @param req CreateEKSContainerInstancesRequest
                 * @return CreateEKSContainerInstancesOutcome
                 */
                CreateEKSContainerInstancesOutcome CreateEKSContainerInstances(const Model::CreateEKSContainerInstancesRequest &request);
                void CreateEKSContainerInstancesAsync(const Model::CreateEKSContainerInstancesRequest& request, const CreateEKSContainerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEKSContainerInstancesOutcomeCallable CreateEKSContainerInstancesCallable(const Model::CreateEKSContainerInstancesRequest& request);

                /**
                 *创建边缘容器CVM机器
                 * @param req CreateEdgeCVMInstancesRequest
                 * @return CreateEdgeCVMInstancesOutcome
                 */
                CreateEdgeCVMInstancesOutcome CreateEdgeCVMInstances(const Model::CreateEdgeCVMInstancesRequest &request);
                void CreateEdgeCVMInstancesAsync(const Model::CreateEdgeCVMInstancesRequest& request, const CreateEdgeCVMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdgeCVMInstancesOutcomeCallable CreateEdgeCVMInstancesCallable(const Model::CreateEdgeCVMInstancesRequest& request);

                /**
                 *创建边缘集群日志采集配置
                 * @param req CreateEdgeLogConfigRequest
                 * @return CreateEdgeLogConfigOutcome
                 */
                CreateEdgeLogConfigOutcome CreateEdgeLogConfig(const Model::CreateEdgeLogConfigRequest &request);
                void CreateEdgeLogConfigAsync(const Model::CreateEdgeLogConfigRequest& request, const CreateEdgeLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdgeLogConfigOutcomeCallable CreateEdgeLogConfigCallable(const Model::CreateEdgeLogConfigRequest& request);

                /**
                 *为弹性集群创建日志采集配置
                 * @param req CreateEksLogConfigRequest
                 * @return CreateEksLogConfigOutcome
                 */
                CreateEksLogConfigOutcome CreateEksLogConfig(const Model::CreateEksLogConfigRequest &request);
                void CreateEksLogConfigAsync(const Model::CreateEksLogConfigRequest& request, const CreateEksLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEksLogConfigOutcomeCallable CreateEksLogConfigCallable(const Model::CreateEksLogConfigRequest& request);

                /**
                 *创建注册节点池
                 * @param req CreateExternalNodePoolRequest
                 * @return CreateExternalNodePoolOutcome
                 */
                CreateExternalNodePoolOutcome CreateExternalNodePool(const Model::CreateExternalNodePoolRequest &request);
                void CreateExternalNodePoolAsync(const Model::CreateExternalNodePoolRequest& request, const CreateExternalNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExternalNodePoolOutcomeCallable CreateExternalNodePoolCallable(const Model::CreateExternalNodePoolRequest& request);

                /**
                 *创建全局维护时间窗口和排除项
                 * @param req CreateGlobalMaintenanceWindowAndExclusionsRequest
                 * @return CreateGlobalMaintenanceWindowAndExclusionsOutcome
                 */
                CreateGlobalMaintenanceWindowAndExclusionsOutcome CreateGlobalMaintenanceWindowAndExclusions(const Model::CreateGlobalMaintenanceWindowAndExclusionsRequest &request);
                void CreateGlobalMaintenanceWindowAndExclusionsAsync(const Model::CreateGlobalMaintenanceWindowAndExclusionsRequest& request, const CreateGlobalMaintenanceWindowAndExclusionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlobalMaintenanceWindowAndExclusionsOutcomeCallable CreateGlobalMaintenanceWindowAndExclusionsCallable(const Model::CreateGlobalMaintenanceWindowAndExclusionsRequest& request);

                /**
                 *创建镜像缓存的接口。创建过程中，请勿删除EKSCI实例和云盘，否则镜像缓存将创建失败。
                 * @param req CreateImageCacheRequest
                 * @return CreateImageCacheOutcome
                 */
                CreateImageCacheOutcome CreateImageCache(const Model::CreateImageCacheRequest &request);
                void CreateImageCacheAsync(const Model::CreateImageCacheRequest& request, const CreateImageCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageCacheOutcomeCallable CreateImageCacheCallable(const Model::CreateImageCacheRequest& request);

                /**
                 *创建告警策略
                 * @param req CreatePrometheusAlertPolicyRequest
                 * @return CreatePrometheusAlertPolicyOutcome
                 */
                CreatePrometheusAlertPolicyOutcome CreatePrometheusAlertPolicy(const Model::CreatePrometheusAlertPolicyRequest &request);
                void CreatePrometheusAlertPolicyAsync(const Model::CreatePrometheusAlertPolicyRequest& request, const CreatePrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusAlertPolicyOutcomeCallable CreatePrometheusAlertPolicyCallable(const Model::CreatePrometheusAlertPolicyRequest& request);

                /**
                 *创建告警规则
                 * @param req CreatePrometheusAlertRuleRequest
                 * @return CreatePrometheusAlertRuleOutcome
                 */
                CreatePrometheusAlertRuleOutcome CreatePrometheusAlertRule(const Model::CreatePrometheusAlertRuleRequest &request);
                void CreatePrometheusAlertRuleAsync(const Model::CreatePrometheusAlertRuleRequest& request, const CreatePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusAlertRuleOutcomeCallable CreatePrometheusAlertRuleCallable(const Model::CreatePrometheusAlertRuleRequest& request);

                /**
                 *与云监控融合的2.0实例关联集群
                 * @param req CreatePrometheusClusterAgentRequest
                 * @return CreatePrometheusClusterAgentOutcome
                 */
                CreatePrometheusClusterAgentOutcome CreatePrometheusClusterAgent(const Model::CreatePrometheusClusterAgentRequest &request);
                void CreatePrometheusClusterAgentAsync(const Model::CreatePrometheusClusterAgentRequest& request, const CreatePrometheusClusterAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusClusterAgentOutcomeCallable CreatePrometheusClusterAgentCallable(const Model::CreatePrometheusClusterAgentRequest& request);

                /**
                 *创建集群采集配置
                 * @param req CreatePrometheusConfigRequest
                 * @return CreatePrometheusConfigOutcome
                 */
                CreatePrometheusConfigOutcome CreatePrometheusConfig(const Model::CreatePrometheusConfigRequest &request);
                void CreatePrometheusConfigAsync(const Model::CreatePrometheusConfigRequest& request, const CreatePrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusConfigOutcomeCallable CreatePrometheusConfigCallable(const Model::CreatePrometheusConfigRequest& request);

                /**
                 *创建grafana监控面板
                 * @param req CreatePrometheusDashboardRequest
                 * @return CreatePrometheusDashboardOutcome
                 */
                CreatePrometheusDashboardOutcome CreatePrometheusDashboard(const Model::CreatePrometheusDashboardRequest &request);
                void CreatePrometheusDashboardAsync(const Model::CreatePrometheusDashboardRequest& request, const CreatePrometheusDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusDashboardOutcomeCallable CreatePrometheusDashboardCallable(const Model::CreatePrometheusDashboardRequest& request);

                /**
                 *创建全局告警通知渠道
                 * @param req CreatePrometheusGlobalNotificationRequest
                 * @return CreatePrometheusGlobalNotificationOutcome
                 */
                CreatePrometheusGlobalNotificationOutcome CreatePrometheusGlobalNotification(const Model::CreatePrometheusGlobalNotificationRequest &request);
                void CreatePrometheusGlobalNotificationAsync(const Model::CreatePrometheusGlobalNotificationRequest& request, const CreatePrometheusGlobalNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusGlobalNotificationOutcomeCallable CreatePrometheusGlobalNotificationCallable(const Model::CreatePrometheusGlobalNotificationRequest& request);

                /**
                 *创建聚合规则yaml方式
                 * @param req CreatePrometheusRecordRuleYamlRequest
                 * @return CreatePrometheusRecordRuleYamlOutcome
                 */
                CreatePrometheusRecordRuleYamlOutcome CreatePrometheusRecordRuleYaml(const Model::CreatePrometheusRecordRuleYamlRequest &request);
                void CreatePrometheusRecordRuleYamlAsync(const Model::CreatePrometheusRecordRuleYamlRequest& request, const CreatePrometheusRecordRuleYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusRecordRuleYamlOutcomeCallable CreatePrometheusRecordRuleYamlCallable(const Model::CreatePrometheusRecordRuleYamlRequest& request);

                /**
                 *创建一个云原生Prometheus模板
                 * @param req CreatePrometheusTempRequest
                 * @return CreatePrometheusTempOutcome
                 */
                CreatePrometheusTempOutcome CreatePrometheusTemp(const Model::CreatePrometheusTempRequest &request);
                void CreatePrometheusTempAsync(const Model::CreatePrometheusTempRequest& request, const CreatePrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusTempOutcomeCallable CreatePrometheusTempCallable(const Model::CreatePrometheusTempRequest& request);

                /**
                 *创建一个云原生Prometheus模板实例
                 * @param req CreatePrometheusTemplateRequest
                 * @return CreatePrometheusTemplateOutcome
                 */
                CreatePrometheusTemplateOutcome CreatePrometheusTemplate(const Model::CreatePrometheusTemplateRequest &request);
                void CreatePrometheusTemplateAsync(const Model::CreatePrometheusTemplateRequest& request, const CreatePrometheusTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusTemplateOutcomeCallable CreatePrometheusTemplateCallable(const Model::CreatePrometheusTemplateRequest& request);

                /**
                 *预留券实例的购买会预先扣除本次实例购买所需金额，在调用本接口前请确保账户余额充足。
                 * @param req CreateReservedInstancesRequest
                 * @return CreateReservedInstancesOutcome
                 */
                CreateReservedInstancesOutcome CreateReservedInstances(const Model::CreateReservedInstancesRequest &request);
                void CreateReservedInstancesAsync(const Model::CreateReservedInstancesRequest& request, const CreateReservedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReservedInstancesOutcomeCallable CreateReservedInstancesCallable(const Model::CreateReservedInstancesRequest& request);

                /**
                 *创建集群发布序列
                 * @param req CreateRollOutSequenceRequest
                 * @return CreateRollOutSequenceOutcome
                 */
                CreateRollOutSequenceOutcome CreateRollOutSequence(const Model::CreateRollOutSequenceRequest &request);
                void CreateRollOutSequenceAsync(const Model::CreateRollOutSequenceRequest& request, const CreateRollOutSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRollOutSequenceOutcomeCallable CreateRollOutSequenceCallable(const Model::CreateRollOutSequenceRequest& request);

                /**
                 *创建边缘计算集群
                 * @param req CreateTKEEdgeClusterRequest
                 * @return CreateTKEEdgeClusterOutcome
                 */
                CreateTKEEdgeClusterOutcome CreateTKEEdgeCluster(const Model::CreateTKEEdgeClusterRequest &request);
                void CreateTKEEdgeClusterAsync(const Model::CreateTKEEdgeClusterRequest& request, const CreateTKEEdgeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTKEEdgeClusterOutcomeCallable CreateTKEEdgeClusterCallable(const Model::CreateTKEEdgeClusterRequest& request);

                /**
                 *删除一个addon
                 * @param req DeleteAddonRequest
                 * @return DeleteAddonOutcome
                 */
                DeleteAddonOutcome DeleteAddon(const Model::DeleteAddonRequest &request);
                void DeleteAddonAsync(const Model::DeleteAddonRequest& request, const DeleteAddonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAddonOutcomeCallable DeleteAddonCallable(const Model::DeleteAddonRequest& request);

                /**
                 *删除备份仓库
                 * @param req DeleteBackupStorageLocationRequest
                 * @return DeleteBackupStorageLocationOutcome
                 */
                DeleteBackupStorageLocationOutcome DeleteBackupStorageLocation(const Model::DeleteBackupStorageLocationRequest &request);
                void DeleteBackupStorageLocationAsync(const Model::DeleteBackupStorageLocationRequest& request, const DeleteBackupStorageLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackupStorageLocationOutcomeCallable DeleteBackupStorageLocationCallable(const Model::DeleteBackupStorageLocationRequest& request);

                /**
                 *删除集群(YUNAPI V3版本)
                 * @param req DeleteClusterRequest
                 * @return DeleteClusterOutcome
                 */
                DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest &request);
                void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request);

                /**
                 *删除集群伸缩组
                 * @param req DeleteClusterAsGroupsRequest
                 * @return DeleteClusterAsGroupsOutcome
                 */
                DeleteClusterAsGroupsOutcome DeleteClusterAsGroups(const Model::DeleteClusterAsGroupsRequest &request);
                void DeleteClusterAsGroupsAsync(const Model::DeleteClusterAsGroupsRequest& request, const DeleteClusterAsGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterAsGroupsOutcomeCallable DeleteClusterAsGroupsCallable(const Model::DeleteClusterAsGroupsRequest& request);

                /**
                 *删除集群访问端口
                 * @param req DeleteClusterEndpointRequest
                 * @return DeleteClusterEndpointOutcome
                 */
                DeleteClusterEndpointOutcome DeleteClusterEndpoint(const Model::DeleteClusterEndpointRequest &request);
                void DeleteClusterEndpointAsync(const Model::DeleteClusterEndpointRequest& request, const DeleteClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterEndpointOutcomeCallable DeleteClusterEndpointCallable(const Model::DeleteClusterEndpointRequest& request);

                /**
                 *删除托管集群外网访问端口（老的方式，仅支持托管集群外网端口）
                 * @param req DeleteClusterEndpointVipRequest
                 * @return DeleteClusterEndpointVipOutcome
                 */
                DeleteClusterEndpointVipOutcome DeleteClusterEndpointVip(const Model::DeleteClusterEndpointVipRequest &request);
                void DeleteClusterEndpointVipAsync(const Model::DeleteClusterEndpointVipRequest& request, const DeleteClusterEndpointVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterEndpointVipOutcomeCallable DeleteClusterEndpointVipCallable(const Model::DeleteClusterEndpointVipRequest& request);

                /**
                 *删除集群中的实例
                 * @param req DeleteClusterInstancesRequest
                 * @return DeleteClusterInstancesOutcome
                 */
                DeleteClusterInstancesOutcome DeleteClusterInstances(const Model::DeleteClusterInstancesRequest &request);
                void DeleteClusterInstancesAsync(const Model::DeleteClusterInstancesRequest& request, const DeleteClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterInstancesOutcomeCallable DeleteClusterInstancesCallable(const Model::DeleteClusterInstancesRequest& request);

                /**
                 *删除集群维护时间窗口和排除项
                 * @param req DeleteClusterMaintenanceWindowAndExclusionRequest
                 * @return DeleteClusterMaintenanceWindowAndExclusionOutcome
                 */
                DeleteClusterMaintenanceWindowAndExclusionOutcome DeleteClusterMaintenanceWindowAndExclusion(const Model::DeleteClusterMaintenanceWindowAndExclusionRequest &request);
                void DeleteClusterMaintenanceWindowAndExclusionAsync(const Model::DeleteClusterMaintenanceWindowAndExclusionRequest& request, const DeleteClusterMaintenanceWindowAndExclusionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterMaintenanceWindowAndExclusionOutcomeCallable DeleteClusterMaintenanceWindowAndExclusionCallable(const Model::DeleteClusterMaintenanceWindowAndExclusionRequest& request);

                /**
                 *删除节点池
                 * @param req DeleteClusterNodePoolRequest
                 * @return DeleteClusterNodePoolOutcome
                 */
                DeleteClusterNodePoolOutcome DeleteClusterNodePool(const Model::DeleteClusterNodePoolRequest &request);
                void DeleteClusterNodePoolAsync(const Model::DeleteClusterNodePoolRequest& request, const DeleteClusterNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterNodePoolOutcomeCallable DeleteClusterNodePoolCallable(const Model::DeleteClusterNodePoolRequest& request);

                /**
                 *删除集群路由
                 * @param req DeleteClusterRouteRequest
                 * @return DeleteClusterRouteOutcome
                 */
                DeleteClusterRouteOutcome DeleteClusterRoute(const Model::DeleteClusterRouteRequest &request);
                void DeleteClusterRouteAsync(const Model::DeleteClusterRouteRequest& request, const DeleteClusterRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterRouteOutcomeCallable DeleteClusterRouteCallable(const Model::DeleteClusterRouteRequest& request);

                /**
                 *删除集群路由表
                 * @param req DeleteClusterRouteTableRequest
                 * @return DeleteClusterRouteTableOutcome
                 */
                DeleteClusterRouteTableOutcome DeleteClusterRouteTable(const Model::DeleteClusterRouteTableRequest &request);
                void DeleteClusterRouteTableAsync(const Model::DeleteClusterRouteTableRequest& request, const DeleteClusterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterRouteTableOutcomeCallable DeleteClusterRouteTableCallable(const Model::DeleteClusterRouteTableRequest& request);

                /**
                 *删除超级节点
                 * @param req DeleteClusterVirtualNodeRequest
                 * @return DeleteClusterVirtualNodeOutcome
                 */
                DeleteClusterVirtualNodeOutcome DeleteClusterVirtualNode(const Model::DeleteClusterVirtualNodeRequest &request);
                void DeleteClusterVirtualNodeAsync(const Model::DeleteClusterVirtualNodeRequest& request, const DeleteClusterVirtualNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterVirtualNodeOutcomeCallable DeleteClusterVirtualNodeCallable(const Model::DeleteClusterVirtualNodeRequest& request);

                /**
                 *删除超级节点池
                 * @param req DeleteClusterVirtualNodePoolRequest
                 * @return DeleteClusterVirtualNodePoolOutcome
                 */
                DeleteClusterVirtualNodePoolOutcome DeleteClusterVirtualNodePool(const Model::DeleteClusterVirtualNodePoolRequest &request);
                void DeleteClusterVirtualNodePoolAsync(const Model::DeleteClusterVirtualNodePoolRequest& request, const DeleteClusterVirtualNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterVirtualNodePoolOutcomeCallable DeleteClusterVirtualNodePoolCallable(const Model::DeleteClusterVirtualNodePoolRequest& request);

                /**
                 *删除ECM实例
                 * @param req DeleteECMInstancesRequest
                 * @return DeleteECMInstancesOutcome
                 */
                DeleteECMInstancesOutcome DeleteECMInstances(const Model::DeleteECMInstancesRequest &request);
                void DeleteECMInstancesAsync(const Model::DeleteECMInstancesRequest& request, const DeleteECMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteECMInstancesOutcomeCallable DeleteECMInstancesCallable(const Model::DeleteECMInstancesRequest& request);

                /**
                 *删除弹性集群(yunapiv3)
                 * @param req DeleteEKSClusterRequest
                 * @return DeleteEKSClusterOutcome
                 */
                DeleteEKSClusterOutcome DeleteEKSCluster(const Model::DeleteEKSClusterRequest &request);
                void DeleteEKSClusterAsync(const Model::DeleteEKSClusterRequest& request, const DeleteEKSClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEKSClusterOutcomeCallable DeleteEKSClusterCallable(const Model::DeleteEKSClusterRequest& request);

                /**
                 *删除容器实例，可批量删除
                 * @param req DeleteEKSContainerInstancesRequest
                 * @return DeleteEKSContainerInstancesOutcome
                 */
                DeleteEKSContainerInstancesOutcome DeleteEKSContainerInstances(const Model::DeleteEKSContainerInstancesRequest &request);
                void DeleteEKSContainerInstancesAsync(const Model::DeleteEKSContainerInstancesRequest& request, const DeleteEKSContainerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEKSContainerInstancesOutcomeCallable DeleteEKSContainerInstancesCallable(const Model::DeleteEKSContainerInstancesRequest& request);

                /**
                 *删除边缘容器CVM实例
                 * @param req DeleteEdgeCVMInstancesRequest
                 * @return DeleteEdgeCVMInstancesOutcome
                 */
                DeleteEdgeCVMInstancesOutcome DeleteEdgeCVMInstances(const Model::DeleteEdgeCVMInstancesRequest &request);
                void DeleteEdgeCVMInstancesAsync(const Model::DeleteEdgeCVMInstancesRequest& request, const DeleteEdgeCVMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEdgeCVMInstancesOutcomeCallable DeleteEdgeCVMInstancesCallable(const Model::DeleteEdgeCVMInstancesRequest& request);

                /**
                 *删除边缘计算实例
                 * @param req DeleteEdgeClusterInstancesRequest
                 * @return DeleteEdgeClusterInstancesOutcome
                 */
                DeleteEdgeClusterInstancesOutcome DeleteEdgeClusterInstances(const Model::DeleteEdgeClusterInstancesRequest &request);
                void DeleteEdgeClusterInstancesAsync(const Model::DeleteEdgeClusterInstancesRequest& request, const DeleteEdgeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEdgeClusterInstancesOutcomeCallable DeleteEdgeClusterInstancesCallable(const Model::DeleteEdgeClusterInstancesRequest& request);

                /**
                 *删除注册节点
                 * @param req DeleteExternalNodeRequest
                 * @return DeleteExternalNodeOutcome
                 */
                DeleteExternalNodeOutcome DeleteExternalNode(const Model::DeleteExternalNodeRequest &request);
                void DeleteExternalNodeAsync(const Model::DeleteExternalNodeRequest& request, const DeleteExternalNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteExternalNodeOutcomeCallable DeleteExternalNodeCallable(const Model::DeleteExternalNodeRequest& request);

                /**
                 *删除注册节点池
                 * @param req DeleteExternalNodePoolRequest
                 * @return DeleteExternalNodePoolOutcome
                 */
                DeleteExternalNodePoolOutcome DeleteExternalNodePool(const Model::DeleteExternalNodePoolRequest &request);
                void DeleteExternalNodePoolAsync(const Model::DeleteExternalNodePoolRequest& request, const DeleteExternalNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteExternalNodePoolOutcomeCallable DeleteExternalNodePoolCallable(const Model::DeleteExternalNodePoolRequest& request);

                /**
                 *删除全集维护时间窗口和排除项
                 * @param req DeleteGlobalMaintenanceWindowAndExclusionRequest
                 * @return DeleteGlobalMaintenanceWindowAndExclusionOutcome
                 */
                DeleteGlobalMaintenanceWindowAndExclusionOutcome DeleteGlobalMaintenanceWindowAndExclusion(const Model::DeleteGlobalMaintenanceWindowAndExclusionRequest &request);
                void DeleteGlobalMaintenanceWindowAndExclusionAsync(const Model::DeleteGlobalMaintenanceWindowAndExclusionRequest& request, const DeleteGlobalMaintenanceWindowAndExclusionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGlobalMaintenanceWindowAndExclusionOutcomeCallable DeleteGlobalMaintenanceWindowAndExclusionCallable(const Model::DeleteGlobalMaintenanceWindowAndExclusionRequest& request);

                /**
                 *批量删除镜像缓存
                 * @param req DeleteImageCachesRequest
                 * @return DeleteImageCachesOutcome
                 */
                DeleteImageCachesOutcome DeleteImageCaches(const Model::DeleteImageCachesRequest &request);
                void DeleteImageCachesAsync(const Model::DeleteImageCachesRequest& request, const DeleteImageCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageCachesOutcomeCallable DeleteImageCachesCallable(const Model::DeleteImageCachesRequest& request);

                /**
                 *删除集群内采集规则
                 * @param req DeleteLogConfigsRequest
                 * @return DeleteLogConfigsOutcome
                 */
                DeleteLogConfigsOutcome DeleteLogConfigs(const Model::DeleteLogConfigsRequest &request);
                void DeleteLogConfigsAsync(const Model::DeleteLogConfigsRequest& request, const DeleteLogConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLogConfigsOutcomeCallable DeleteLogConfigsCallable(const Model::DeleteLogConfigsRequest& request);

                /**
                 *删除2.0实例告警策略
                 * @param req DeletePrometheusAlertPolicyRequest
                 * @return DeletePrometheusAlertPolicyOutcome
                 */
                DeletePrometheusAlertPolicyOutcome DeletePrometheusAlertPolicy(const Model::DeletePrometheusAlertPolicyRequest &request);
                void DeletePrometheusAlertPolicyAsync(const Model::DeletePrometheusAlertPolicyRequest& request, const DeletePrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusAlertPolicyOutcomeCallable DeletePrometheusAlertPolicyCallable(const Model::DeletePrometheusAlertPolicyRequest& request);

                /**
                 *删除告警规则
                 * @param req DeletePrometheusAlertRuleRequest
                 * @return DeletePrometheusAlertRuleOutcome
                 */
                DeletePrometheusAlertRuleOutcome DeletePrometheusAlertRule(const Model::DeletePrometheusAlertRuleRequest &request);
                void DeletePrometheusAlertRuleAsync(const Model::DeletePrometheusAlertRuleRequest& request, const DeletePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusAlertRuleOutcomeCallable DeletePrometheusAlertRuleCallable(const Model::DeletePrometheusAlertRuleRequest& request);

                /**
                 *解除TMP实例的集群关联
                 * @param req DeletePrometheusClusterAgentRequest
                 * @return DeletePrometheusClusterAgentOutcome
                 */
                DeletePrometheusClusterAgentOutcome DeletePrometheusClusterAgent(const Model::DeletePrometheusClusterAgentRequest &request);
                void DeletePrometheusClusterAgentAsync(const Model::DeletePrometheusClusterAgentRequest& request, const DeletePrometheusClusterAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusClusterAgentOutcomeCallable DeletePrometheusClusterAgentCallable(const Model::DeletePrometheusClusterAgentRequest& request);

                /**
                 *删除集群采集配置
                 * @param req DeletePrometheusConfigRequest
                 * @return DeletePrometheusConfigOutcome
                 */
                DeletePrometheusConfigOutcome DeletePrometheusConfig(const Model::DeletePrometheusConfigRequest &request);
                void DeletePrometheusConfigAsync(const Model::DeletePrometheusConfigRequest& request, const DeletePrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusConfigOutcomeCallable DeletePrometheusConfigCallable(const Model::DeletePrometheusConfigRequest& request);

                /**
                 *删除聚合规则
                 * @param req DeletePrometheusRecordRuleYamlRequest
                 * @return DeletePrometheusRecordRuleYamlOutcome
                 */
                DeletePrometheusRecordRuleYamlOutcome DeletePrometheusRecordRuleYaml(const Model::DeletePrometheusRecordRuleYamlRequest &request);
                void DeletePrometheusRecordRuleYamlAsync(const Model::DeletePrometheusRecordRuleYamlRequest& request, const DeletePrometheusRecordRuleYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusRecordRuleYamlOutcomeCallable DeletePrometheusRecordRuleYamlCallable(const Model::DeletePrometheusRecordRuleYamlRequest& request);

                /**
                 *删除一个云原生Prometheus配置模板
                 * @param req DeletePrometheusTempRequest
                 * @return DeletePrometheusTempOutcome
                 */
                DeletePrometheusTempOutcome DeletePrometheusTemp(const Model::DeletePrometheusTempRequest &request);
                void DeletePrometheusTempAsync(const Model::DeletePrometheusTempRequest& request, const DeletePrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusTempOutcomeCallable DeletePrometheusTempCallable(const Model::DeletePrometheusTempRequest& request);

                /**
                 *解除模板同步，这将会删除目标中该模板所生产的配置，针对V2版本实例
                 * @param req DeletePrometheusTempSyncRequest
                 * @return DeletePrometheusTempSyncOutcome
                 */
                DeletePrometheusTempSyncOutcome DeletePrometheusTempSync(const Model::DeletePrometheusTempSyncRequest &request);
                void DeletePrometheusTempSyncAsync(const Model::DeletePrometheusTempSyncRequest& request, const DeletePrometheusTempSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusTempSyncOutcomeCallable DeletePrometheusTempSyncCallable(const Model::DeletePrometheusTempSyncRequest& request);

                /**
                 *删除一个云原生Prometheus配置模板
                 * @param req DeletePrometheusTemplateRequest
                 * @return DeletePrometheusTemplateOutcome
                 */
                DeletePrometheusTemplateOutcome DeletePrometheusTemplate(const Model::DeletePrometheusTemplateRequest &request);
                void DeletePrometheusTemplateAsync(const Model::DeletePrometheusTemplateRequest& request, const DeletePrometheusTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusTemplateOutcomeCallable DeletePrometheusTemplateCallable(const Model::DeletePrometheusTemplateRequest& request);

                /**
                 *取消模板同步，这将会删除目标中该模板所生产的配置
                 * @param req DeletePrometheusTemplateSyncRequest
                 * @return DeletePrometheusTemplateSyncOutcome
                 */
                DeletePrometheusTemplateSyncOutcome DeletePrometheusTemplateSync(const Model::DeletePrometheusTemplateSyncRequest &request);
                void DeletePrometheusTemplateSyncAsync(const Model::DeletePrometheusTemplateSyncRequest& request, const DeletePrometheusTemplateSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusTemplateSyncOutcomeCallable DeletePrometheusTemplateSyncCallable(const Model::DeletePrometheusTemplateSyncRequest& request);

                /**
                 *预留券实例如符合退还规则，可通过本接口主动退还。
                 * @param req DeleteReservedInstancesRequest
                 * @return DeleteReservedInstancesOutcome
                 */
                DeleteReservedInstancesOutcome DeleteReservedInstances(const Model::DeleteReservedInstancesRequest &request);
                void DeleteReservedInstancesAsync(const Model::DeleteReservedInstancesRequest& request, const DeleteReservedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReservedInstancesOutcomeCallable DeleteReservedInstancesCallable(const Model::DeleteReservedInstancesRequest& request);

                /**
                 *删除集群发布序列
                 * @param req DeleteRollOutSequenceRequest
                 * @return DeleteRollOutSequenceOutcome
                 */
                DeleteRollOutSequenceOutcome DeleteRollOutSequence(const Model::DeleteRollOutSequenceRequest &request);
                void DeleteRollOutSequenceAsync(const Model::DeleteRollOutSequenceRequest& request, const DeleteRollOutSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRollOutSequenceOutcomeCallable DeleteRollOutSequenceCallable(const Model::DeleteRollOutSequenceRequest& request);

                /**
                 *删除边缘计算集群
                 * @param req DeleteTKEEdgeClusterRequest
                 * @return DeleteTKEEdgeClusterOutcome
                 */
                DeleteTKEEdgeClusterOutcome DeleteTKEEdgeCluster(const Model::DeleteTKEEdgeClusterRequest &request);
                void DeleteTKEEdgeClusterAsync(const Model::DeleteTKEEdgeClusterRequest& request, const DeleteTKEEdgeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTKEEdgeClusterOutcomeCallable DeleteTKEEdgeClusterCallable(const Model::DeleteTKEEdgeClusterRequest& request);

                /**
                 *使用请求中提供的权限集合，删除用户对应的权限
                 * @param req DeleteUserPermissionsRequest
                 * @return DeleteUserPermissionsOutcome
                 */
                DeleteUserPermissionsOutcome DeleteUserPermissions(const Model::DeleteUserPermissionsRequest &request);
                void DeleteUserPermissionsAsync(const Model::DeleteUserPermissionsRequest& request, const DeleteUserPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserPermissionsOutcomeCallable DeleteUserPermissionsCallable(const Model::DeleteUserPermissionsRequest& request);

                /**
                 *获取addon列表
                 * @param req DescribeAddonRequest
                 * @return DescribeAddonOutcome
                 */
                DescribeAddonOutcome DescribeAddon(const Model::DescribeAddonRequest &request);
                void DescribeAddonAsync(const Model::DescribeAddonRequest& request, const DescribeAddonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddonOutcomeCallable DescribeAddonCallable(const Model::DescribeAddonRequest& request);

                /**
                 *获取一个addon的参数
                 * @param req DescribeAddonValuesRequest
                 * @return DescribeAddonValuesOutcome
                 */
                DescribeAddonValuesOutcome DescribeAddonValues(const Model::DescribeAddonValuesRequest &request);
                void DescribeAddonValuesAsync(const Model::DescribeAddonValuesRequest& request, const DescribeAddonValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddonValuesOutcomeCallable DescribeAddonValuesCallable(const Model::DescribeAddonValuesRequest& request);

                /**
                 *获取集群可以升级的所有版本
                 * @param req DescribeAvailableClusterVersionRequest
                 * @return DescribeAvailableClusterVersionOutcome
                 */
                DescribeAvailableClusterVersionOutcome DescribeAvailableClusterVersion(const Model::DescribeAvailableClusterVersionRequest &request);
                void DescribeAvailableClusterVersionAsync(const Model::DescribeAvailableClusterVersionRequest& request, const DescribeAvailableClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableClusterVersionOutcomeCallable DescribeAvailableClusterVersionCallable(const Model::DescribeAvailableClusterVersionRequest& request);

                /**
                 *边缘计算支持版本和k8s版本
                 * @param req DescribeAvailableTKEEdgeVersionRequest
                 * @return DescribeAvailableTKEEdgeVersionOutcome
                 */
                DescribeAvailableTKEEdgeVersionOutcome DescribeAvailableTKEEdgeVersion(const Model::DescribeAvailableTKEEdgeVersionRequest &request);
                void DescribeAvailableTKEEdgeVersionAsync(const Model::DescribeAvailableTKEEdgeVersionRequest& request, const DescribeAvailableTKEEdgeVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableTKEEdgeVersionOutcomeCallable DescribeAvailableTKEEdgeVersionCallable(const Model::DescribeAvailableTKEEdgeVersionRequest& request);

                /**
                 *查询备份仓库信息
                 * @param req DescribeBackupStorageLocationsRequest
                 * @return DescribeBackupStorageLocationsOutcome
                 */
                DescribeBackupStorageLocationsOutcome DescribeBackupStorageLocations(const Model::DescribeBackupStorageLocationsRequest &request);
                void DescribeBackupStorageLocationsAsync(const Model::DescribeBackupStorageLocationsRequest& request, const DescribeBackupStorageLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupStorageLocationsOutcomeCallable DescribeBackupStorageLocationsCallable(const Model::DescribeBackupStorageLocationsRequest& request);

                /**
                 *查询批量修改标签状态
                 * @param req DescribeBatchModifyTagsStatusRequest
                 * @return DescribeBatchModifyTagsStatusOutcome
                 */
                DescribeBatchModifyTagsStatusOutcome DescribeBatchModifyTagsStatus(const Model::DescribeBatchModifyTagsStatusRequest &request);
                void DescribeBatchModifyTagsStatusAsync(const Model::DescribeBatchModifyTagsStatusRequest& request, const DescribeBatchModifyTagsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchModifyTagsStatusOutcomeCallable DescribeBatchModifyTagsStatusCallable(const Model::DescribeBatchModifyTagsStatusRequest& request);

                /**
                 *集群弹性伸缩配置
                 * @param req DescribeClusterAsGroupOptionRequest
                 * @return DescribeClusterAsGroupOptionOutcome
                 */
                DescribeClusterAsGroupOptionOutcome DescribeClusterAsGroupOption(const Model::DescribeClusterAsGroupOptionRequest &request);
                void DescribeClusterAsGroupOptionAsync(const Model::DescribeClusterAsGroupOptionRequest& request, const DescribeClusterAsGroupOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAsGroupOptionOutcomeCallable DescribeClusterAsGroupOptionCallable(const Model::DescribeClusterAsGroupOptionRequest& request);

                /**
                 *集群关联的伸缩组列表
                 * @param req DescribeClusterAsGroupsRequest
                 * @return DescribeClusterAsGroupsOutcome
                 */
                DescribeClusterAsGroupsOutcome DescribeClusterAsGroups(const Model::DescribeClusterAsGroupsRequest &request);
                void DescribeClusterAsGroupsAsync(const Model::DescribeClusterAsGroupsRequest& request, const DescribeClusterAsGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAsGroupsOutcomeCallable DescribeClusterAsGroupsCallable(const Model::DescribeClusterAsGroupsRequest& request);

                /**
                 *查看集群认证配置
                 * @param req DescribeClusterAuthenticationOptionsRequest
                 * @return DescribeClusterAuthenticationOptionsOutcome
                 */
                DescribeClusterAuthenticationOptionsOutcome DescribeClusterAuthenticationOptions(const Model::DescribeClusterAuthenticationOptionsRequest &request);
                void DescribeClusterAuthenticationOptionsAsync(const Model::DescribeClusterAuthenticationOptionsRequest& request, const DescribeClusterAuthenticationOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAuthenticationOptionsOutcomeCallable DescribeClusterAuthenticationOptionsCallable(const Model::DescribeClusterAuthenticationOptionsRequest& request);

                /**
                 *查询集群可用的自定义参数
                 * @param req DescribeClusterAvailableExtraArgsRequest
                 * @return DescribeClusterAvailableExtraArgsOutcome
                 */
                DescribeClusterAvailableExtraArgsOutcome DescribeClusterAvailableExtraArgs(const Model::DescribeClusterAvailableExtraArgsRequest &request);
                void DescribeClusterAvailableExtraArgsAsync(const Model::DescribeClusterAvailableExtraArgsRequest& request, const DescribeClusterAvailableExtraArgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAvailableExtraArgsOutcomeCallable DescribeClusterAvailableExtraArgsCallable(const Model::DescribeClusterAvailableExtraArgsRequest& request);

                /**
                 *获取指定子账户在RBAC授权模式中对应kube-apiserver客户端证书的CommonName字段，如果没有客户端证书，将会签发一个，此接口有最大传入子账户数量上限，当前为50
                 * @param req DescribeClusterCommonNamesRequest
                 * @return DescribeClusterCommonNamesOutcome
                 */
                DescribeClusterCommonNamesOutcome DescribeClusterCommonNames(const Model::DescribeClusterCommonNamesRequest &request);
                void DescribeClusterCommonNamesAsync(const Model::DescribeClusterCommonNamesRequest& request, const DescribeClusterCommonNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterCommonNamesOutcomeCallable DescribeClusterCommonNamesCallable(const Model::DescribeClusterCommonNamesRequest& request);

                /**
                 *用于查询Kubernetes的各个原生控制器是否开启
                 * @param req DescribeClusterControllersRequest
                 * @return DescribeClusterControllersOutcome
                 */
                DescribeClusterControllersOutcome DescribeClusterControllers(const Model::DescribeClusterControllersRequest &request);
                void DescribeClusterControllersAsync(const Model::DescribeClusterControllersRequest& request, const DescribeClusterControllersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterControllersOutcomeCallable DescribeClusterControllersCallable(const Model::DescribeClusterControllersRequest& request);

                /**
                 *查询集群访问端口状态(独立集群开启内网/外网访问，托管集群支持开启内网访问)
                 * @param req DescribeClusterEndpointStatusRequest
                 * @return DescribeClusterEndpointStatusOutcome
                 */
                DescribeClusterEndpointStatusOutcome DescribeClusterEndpointStatus(const Model::DescribeClusterEndpointStatusRequest &request);
                void DescribeClusterEndpointStatusAsync(const Model::DescribeClusterEndpointStatusRequest& request, const DescribeClusterEndpointStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterEndpointStatusOutcomeCallable DescribeClusterEndpointStatusCallable(const Model::DescribeClusterEndpointStatusRequest& request);

                /**
                 *查询集群开启端口流程状态(仅支持托管集群外网端口)
                 * @param req DescribeClusterEndpointVipStatusRequest
                 * @return DescribeClusterEndpointVipStatusOutcome
                 */
                DescribeClusterEndpointVipStatusOutcome DescribeClusterEndpointVipStatus(const Model::DescribeClusterEndpointVipStatusRequest &request);
                void DescribeClusterEndpointVipStatusAsync(const Model::DescribeClusterEndpointVipStatusRequest& request, const DescribeClusterEndpointVipStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterEndpointVipStatusOutcomeCallable DescribeClusterEndpointVipStatusCallable(const Model::DescribeClusterEndpointVipStatusRequest& request);

                /**
                 *获取集群的访问地址，包括内网地址，外网地址，外网域名，外网访问安全策略
                 * @param req DescribeClusterEndpointsRequest
                 * @return DescribeClusterEndpointsOutcome
                 */
                DescribeClusterEndpointsOutcome DescribeClusterEndpoints(const Model::DescribeClusterEndpointsRequest &request);
                void DescribeClusterEndpointsAsync(const Model::DescribeClusterEndpointsRequest& request, const DescribeClusterEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterEndpointsOutcomeCallable DescribeClusterEndpointsCallable(const Model::DescribeClusterEndpointsRequest& request);

                /**
                 *查询集群自定义参数
                 * @param req DescribeClusterExtraArgsRequest
                 * @return DescribeClusterExtraArgsOutcome
                 */
                DescribeClusterExtraArgsOutcome DescribeClusterExtraArgs(const Model::DescribeClusterExtraArgsRequest &request);
                void DescribeClusterExtraArgsAsync(const Model::DescribeClusterExtraArgsRequest& request, const DescribeClusterExtraArgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterExtraArgsOutcomeCallable DescribeClusterExtraArgsCallable(const Model::DescribeClusterExtraArgsRequest& request);

                /**
                 *查询用户单个Region下的所有集群巡检结果概览信息
                 * @param req DescribeClusterInspectionResultsOverviewRequest
                 * @return DescribeClusterInspectionResultsOverviewOutcome
                 */
                DescribeClusterInspectionResultsOverviewOutcome DescribeClusterInspectionResultsOverview(const Model::DescribeClusterInspectionResultsOverviewRequest &request);
                void DescribeClusterInspectionResultsOverviewAsync(const Model::DescribeClusterInspectionResultsOverviewRequest& request, const DescribeClusterInspectionResultsOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterInspectionResultsOverviewOutcomeCallable DescribeClusterInspectionResultsOverviewCallable(const Model::DescribeClusterInspectionResultsOverviewRequest& request);

                /**
                 *查询集群下节点实例信息
                 * @param req DescribeClusterInstancesRequest
                 * @return DescribeClusterInstancesOutcome
                 */
                DescribeClusterInstancesOutcome DescribeClusterInstances(const Model::DescribeClusterInstancesRequest &request);
                void DescribeClusterInstancesAsync(const Model::DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterInstancesOutcomeCallable DescribeClusterInstancesCallable(const Model::DescribeClusterInstancesRequest& request);

                /**
                 *获取集群的kubeconfig文件，不同子账户获取自己的kubeconfig文件，该文件中有每个子账户自己的kube-apiserver的客户端证书，默认首次调此接口时候创建客户端证书，时效20年，未授予任何权限，如果是集群所有者或者主账户，则默认是cluster-admin权限。
                 * @param req DescribeClusterKubeconfigRequest
                 * @return DescribeClusterKubeconfigOutcome
                 */
                DescribeClusterKubeconfigOutcome DescribeClusterKubeconfig(const Model::DescribeClusterKubeconfigRequest &request);
                void DescribeClusterKubeconfigAsync(const Model::DescribeClusterKubeconfigRequest& request, const DescribeClusterKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterKubeconfigOutcomeCallable DescribeClusterKubeconfigCallable(const Model::DescribeClusterKubeconfigRequest& request);

                /**
                 *获取集群规模
                 * @param req DescribeClusterLevelAttributeRequest
                 * @return DescribeClusterLevelAttributeOutcome
                 */
                DescribeClusterLevelAttributeOutcome DescribeClusterLevelAttribute(const Model::DescribeClusterLevelAttributeRequest &request);
                void DescribeClusterLevelAttributeAsync(const Model::DescribeClusterLevelAttributeRequest& request, const DescribeClusterLevelAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterLevelAttributeOutcomeCallable DescribeClusterLevelAttributeCallable(const Model::DescribeClusterLevelAttributeRequest& request);

                /**
                 *查询集群变配记录
                 * @param req DescribeClusterLevelChangeRecordsRequest
                 * @return DescribeClusterLevelChangeRecordsOutcome
                 */
                DescribeClusterLevelChangeRecordsOutcome DescribeClusterLevelChangeRecords(const Model::DescribeClusterLevelChangeRecordsRequest &request);
                void DescribeClusterLevelChangeRecordsAsync(const Model::DescribeClusterLevelChangeRecordsRequest& request, const DescribeClusterLevelChangeRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterLevelChangeRecordsOutcomeCallable DescribeClusterLevelChangeRecordsCallable(const Model::DescribeClusterLevelChangeRecordsRequest& request);

                /**
                 *获取集群维护时间窗口和排除项
                 * @param req DescribeClusterMaintenanceWindowAndExclusionsRequest
                 * @return DescribeClusterMaintenanceWindowAndExclusionsOutcome
                 */
                DescribeClusterMaintenanceWindowAndExclusionsOutcome DescribeClusterMaintenanceWindowAndExclusions(const Model::DescribeClusterMaintenanceWindowAndExclusionsRequest &request);
                void DescribeClusterMaintenanceWindowAndExclusionsAsync(const Model::DescribeClusterMaintenanceWindowAndExclusionsRequest& request, const DescribeClusterMaintenanceWindowAndExclusionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterMaintenanceWindowAndExclusionsOutcomeCallable DescribeClusterMaintenanceWindowAndExclusionsCallable(const Model::DescribeClusterMaintenanceWindowAndExclusionsRequest& request);

                /**
                 *查询节点池详情
                 * @param req DescribeClusterNodePoolDetailRequest
                 * @return DescribeClusterNodePoolDetailOutcome
                 */
                DescribeClusterNodePoolDetailOutcome DescribeClusterNodePoolDetail(const Model::DescribeClusterNodePoolDetailRequest &request);
                void DescribeClusterNodePoolDetailAsync(const Model::DescribeClusterNodePoolDetailRequest& request, const DescribeClusterNodePoolDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterNodePoolDetailOutcomeCallable DescribeClusterNodePoolDetailCallable(const Model::DescribeClusterNodePoolDetailRequest& request);

                /**
                 *查询节点池列表
                 * @param req DescribeClusterNodePoolsRequest
                 * @return DescribeClusterNodePoolsOutcome
                 */
                DescribeClusterNodePoolsOutcome DescribeClusterNodePools(const Model::DescribeClusterNodePoolsRequest &request);
                void DescribeClusterNodePoolsAsync(const Model::DescribeClusterNodePoolsRequest& request, const DescribeClusterNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterNodePoolsOutcomeCallable DescribeClusterNodePoolsCallable(const Model::DescribeClusterNodePoolsRequest& request);

                /**
                 *在应用市场中查询正在安装中的应用列表
                 * @param req DescribeClusterPendingReleasesRequest
                 * @return DescribeClusterPendingReleasesOutcome
                 */
                DescribeClusterPendingReleasesOutcome DescribeClusterPendingReleases(const Model::DescribeClusterPendingReleasesRequest &request);
                void DescribeClusterPendingReleasesAsync(const Model::DescribeClusterPendingReleasesRequest& request, const DescribeClusterPendingReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterPendingReleasesOutcomeCallable DescribeClusterPendingReleasesCallable(const Model::DescribeClusterPendingReleasesRequest& request);

                /**
                 *查询通过应用市场安装的某个应用详情
                 * @param req DescribeClusterReleaseDetailsRequest
                 * @return DescribeClusterReleaseDetailsOutcome
                 */
                DescribeClusterReleaseDetailsOutcome DescribeClusterReleaseDetails(const Model::DescribeClusterReleaseDetailsRequest &request);
                void DescribeClusterReleaseDetailsAsync(const Model::DescribeClusterReleaseDetailsRequest& request, const DescribeClusterReleaseDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterReleaseDetailsOutcomeCallable DescribeClusterReleaseDetailsCallable(const Model::DescribeClusterReleaseDetailsRequest& request);

                /**
                 *查询集群在应用市场中某个已安装应用的版本历史
                 * @param req DescribeClusterReleaseHistoryRequest
                 * @return DescribeClusterReleaseHistoryOutcome
                 */
                DescribeClusterReleaseHistoryOutcome DescribeClusterReleaseHistory(const Model::DescribeClusterReleaseHistoryRequest &request);
                void DescribeClusterReleaseHistoryAsync(const Model::DescribeClusterReleaseHistoryRequest& request, const DescribeClusterReleaseHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterReleaseHistoryOutcomeCallable DescribeClusterReleaseHistoryCallable(const Model::DescribeClusterReleaseHistoryRequest& request);

                /**
                 *查询集群在应用市场中已安装应用列表
                 * @param req DescribeClusterReleasesRequest
                 * @return DescribeClusterReleasesOutcome
                 */
                DescribeClusterReleasesOutcome DescribeClusterReleases(const Model::DescribeClusterReleasesRequest &request);
                void DescribeClusterReleasesAsync(const Model::DescribeClusterReleasesRequest& request, const DescribeClusterReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterReleasesOutcomeCallable DescribeClusterReleasesCallable(const Model::DescribeClusterReleasesRequest& request);

                /**
                 *查询集群发布序列标签
                 * @param req DescribeClusterRollOutSequenceTagsRequest
                 * @return DescribeClusterRollOutSequenceTagsOutcome
                 */
                DescribeClusterRollOutSequenceTagsOutcome DescribeClusterRollOutSequenceTags(const Model::DescribeClusterRollOutSequenceTagsRequest &request);
                void DescribeClusterRollOutSequenceTagsAsync(const Model::DescribeClusterRollOutSequenceTagsRequest& request, const DescribeClusterRollOutSequenceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterRollOutSequenceTagsOutcomeCallable DescribeClusterRollOutSequenceTagsCallable(const Model::DescribeClusterRollOutSequenceTagsRequest& request);

                /**
                 *查询集群路由表
                 * @param req DescribeClusterRouteTablesRequest
                 * @return DescribeClusterRouteTablesOutcome
                 */
                DescribeClusterRouteTablesOutcome DescribeClusterRouteTables(const Model::DescribeClusterRouteTablesRequest &request);
                void DescribeClusterRouteTablesAsync(const Model::DescribeClusterRouteTablesRequest& request, const DescribeClusterRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterRouteTablesOutcomeCallable DescribeClusterRouteTablesCallable(const Model::DescribeClusterRouteTablesRequest& request);

                /**
                 *查询集群路由
                 * @param req DescribeClusterRoutesRequest
                 * @return DescribeClusterRoutesOutcome
                 */
                DescribeClusterRoutesOutcome DescribeClusterRoutes(const Model::DescribeClusterRoutesRequest &request);
                void DescribeClusterRoutesAsync(const Model::DescribeClusterRoutesRequest& request, const DescribeClusterRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterRoutesOutcomeCallable DescribeClusterRoutesCallable(const Model::DescribeClusterRoutesRequest& request);

                /**
                 *查询集群调度策略
                 * @param req DescribeClusterSchedulerPolicyRequest
                 * @return DescribeClusterSchedulerPolicyOutcome
                 */
                DescribeClusterSchedulerPolicyOutcome DescribeClusterSchedulerPolicy(const Model::DescribeClusterSchedulerPolicyRequest &request);
                void DescribeClusterSchedulerPolicyAsync(const Model::DescribeClusterSchedulerPolicyRequest& request, const DescribeClusterSchedulerPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterSchedulerPolicyOutcomeCallable DescribeClusterSchedulerPolicyCallable(const Model::DescribeClusterSchedulerPolicyRequest& request);

                /**
                 *集群的密钥信息
                 * @param req DescribeClusterSecurityRequest
                 * @return DescribeClusterSecurityOutcome
                 */
                DescribeClusterSecurityOutcome DescribeClusterSecurity(const Model::DescribeClusterSecurityRequest &request);
                void DescribeClusterSecurityAsync(const Model::DescribeClusterSecurityRequest& request, const DescribeClusterSecurityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterSecurityOutcomeCallable DescribeClusterSecurityCallable(const Model::DescribeClusterSecurityRequest& request);

                /**
                 *查看集群状态列表
                 * @param req DescribeClusterStatusRequest
                 * @return DescribeClusterStatusOutcome
                 */
                DescribeClusterStatusOutcome DescribeClusterStatus(const Model::DescribeClusterStatusRequest &request);
                void DescribeClusterStatusAsync(const Model::DescribeClusterStatusRequest& request, const DescribeClusterStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterStatusOutcomeCallable DescribeClusterStatusCallable(const Model::DescribeClusterStatusRequest& request);

                /**
                 *查看超级节点列表
                 * @param req DescribeClusterVirtualNodeRequest
                 * @return DescribeClusterVirtualNodeOutcome
                 */
                DescribeClusterVirtualNodeOutcome DescribeClusterVirtualNode(const Model::DescribeClusterVirtualNodeRequest &request);
                void DescribeClusterVirtualNodeAsync(const Model::DescribeClusterVirtualNodeRequest& request, const DescribeClusterVirtualNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterVirtualNodeOutcomeCallable DescribeClusterVirtualNodeCallable(const Model::DescribeClusterVirtualNodeRequest& request);

                /**
                 *查看超级节点池列表
                 * @param req DescribeClusterVirtualNodePoolsRequest
                 * @return DescribeClusterVirtualNodePoolsOutcome
                 */
                DescribeClusterVirtualNodePoolsOutcome DescribeClusterVirtualNodePools(const Model::DescribeClusterVirtualNodePoolsRequest &request);
                void DescribeClusterVirtualNodePoolsAsync(const Model::DescribeClusterVirtualNodePoolsRequest& request, const DescribeClusterVirtualNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterVirtualNodePoolsOutcomeCallable DescribeClusterVirtualNodePoolsCallable(const Model::DescribeClusterVirtualNodePoolsRequest& request);

                /**
                 *查询集群列表
                 * @param req DescribeClustersRequest
                 * @return DescribeClustersOutcome
                 */
                DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest &request);
                void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request);

                /**
                 *查询插件日志采集配置
                 * @param req DescribeControlPlaneLogsRequest
                 * @return DescribeControlPlaneLogsOutcome
                 */
                DescribeControlPlaneLogsOutcome DescribeControlPlaneLogs(const Model::DescribeControlPlaneLogsRequest &request);
                void DescribeControlPlaneLogsAsync(const Model::DescribeControlPlaneLogsRequest& request, const DescribeControlPlaneLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeControlPlaneLogsOutcomeCallable DescribeControlPlaneLogsCallable(const Model::DescribeControlPlaneLogsRequest& request);

                /**
                 *获取ECM实例相关信息
                 * @param req DescribeECMInstancesRequest
                 * @return DescribeECMInstancesOutcome
                 */
                DescribeECMInstancesOutcome DescribeECMInstances(const Model::DescribeECMInstancesRequest &request);
                void DescribeECMInstancesAsync(const Model::DescribeECMInstancesRequest& request, const DescribeECMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeECMInstancesOutcomeCallable DescribeECMInstancesCallable(const Model::DescribeECMInstancesRequest& request);

                /**
                 *获取弹性容器集群的接入认证信息
                 * @param req DescribeEKSClusterCredentialRequest
                 * @return DescribeEKSClusterCredentialOutcome
                 */
                DescribeEKSClusterCredentialOutcome DescribeEKSClusterCredential(const Model::DescribeEKSClusterCredentialRequest &request);
                void DescribeEKSClusterCredentialAsync(const Model::DescribeEKSClusterCredentialRequest& request, const DescribeEKSClusterCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEKSClusterCredentialOutcomeCallable DescribeEKSClusterCredentialCallable(const Model::DescribeEKSClusterCredentialRequest& request);

                /**
                 *查询弹性集群列表
                 * @param req DescribeEKSClustersRequest
                 * @return DescribeEKSClustersOutcome
                 */
                DescribeEKSClustersOutcome DescribeEKSClusters(const Model::DescribeEKSClustersRequest &request);
                void DescribeEKSClustersAsync(const Model::DescribeEKSClustersRequest& request, const DescribeEKSClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEKSClustersOutcomeCallable DescribeEKSClustersCallable(const Model::DescribeEKSClustersRequest& request);

                /**
                 *查询容器实例的事件
                 * @param req DescribeEKSContainerInstanceEventRequest
                 * @return DescribeEKSContainerInstanceEventOutcome
                 */
                DescribeEKSContainerInstanceEventOutcome DescribeEKSContainerInstanceEvent(const Model::DescribeEKSContainerInstanceEventRequest &request);
                void DescribeEKSContainerInstanceEventAsync(const Model::DescribeEKSContainerInstanceEventRequest& request, const DescribeEKSContainerInstanceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEKSContainerInstanceEventOutcomeCallable DescribeEKSContainerInstanceEventCallable(const Model::DescribeEKSContainerInstanceEventRequest& request);

                /**
                 *查询容器实例支持的地域
                 * @param req DescribeEKSContainerInstanceRegionsRequest
                 * @return DescribeEKSContainerInstanceRegionsOutcome
                 */
                DescribeEKSContainerInstanceRegionsOutcome DescribeEKSContainerInstanceRegions(const Model::DescribeEKSContainerInstanceRegionsRequest &request);
                void DescribeEKSContainerInstanceRegionsAsync(const Model::DescribeEKSContainerInstanceRegionsRequest& request, const DescribeEKSContainerInstanceRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEKSContainerInstanceRegionsOutcomeCallable DescribeEKSContainerInstanceRegionsCallable(const Model::DescribeEKSContainerInstanceRegionsRequest& request);

                /**
                 *查询容器实例
                 * @param req DescribeEKSContainerInstancesRequest
                 * @return DescribeEKSContainerInstancesOutcome
                 */
                DescribeEKSContainerInstancesOutcome DescribeEKSContainerInstances(const Model::DescribeEKSContainerInstancesRequest &request);
                void DescribeEKSContainerInstancesAsync(const Model::DescribeEKSContainerInstancesRequest& request, const DescribeEKSContainerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEKSContainerInstancesOutcomeCallable DescribeEKSContainerInstancesCallable(const Model::DescribeEKSContainerInstancesRequest& request);

                /**
                 *查询边缘容器集群可用的自定义参数
                 * @param req DescribeEdgeAvailableExtraArgsRequest
                 * @return DescribeEdgeAvailableExtraArgsOutcome
                 */
                DescribeEdgeAvailableExtraArgsOutcome DescribeEdgeAvailableExtraArgs(const Model::DescribeEdgeAvailableExtraArgsRequest &request);
                void DescribeEdgeAvailableExtraArgsAsync(const Model::DescribeEdgeAvailableExtraArgsRequest& request, const DescribeEdgeAvailableExtraArgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeAvailableExtraArgsOutcomeCallable DescribeEdgeAvailableExtraArgsCallable(const Model::DescribeEdgeAvailableExtraArgsRequest& request);

                /**
                 *获取边缘容器CVM实例相关信息
                 * @param req DescribeEdgeCVMInstancesRequest
                 * @return DescribeEdgeCVMInstancesOutcome
                 */
                DescribeEdgeCVMInstancesOutcome DescribeEdgeCVMInstances(const Model::DescribeEdgeCVMInstancesRequest &request);
                void DescribeEdgeCVMInstancesAsync(const Model::DescribeEdgeCVMInstancesRequest& request, const DescribeEdgeCVMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeCVMInstancesOutcomeCallable DescribeEdgeCVMInstancesCallable(const Model::DescribeEdgeCVMInstancesRequest& request);

                /**
                 *查询边缘集群自定义参数
                 * @param req DescribeEdgeClusterExtraArgsRequest
                 * @return DescribeEdgeClusterExtraArgsOutcome
                 */
                DescribeEdgeClusterExtraArgsOutcome DescribeEdgeClusterExtraArgs(const Model::DescribeEdgeClusterExtraArgsRequest &request);
                void DescribeEdgeClusterExtraArgsAsync(const Model::DescribeEdgeClusterExtraArgsRequest& request, const DescribeEdgeClusterExtraArgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeClusterExtraArgsOutcomeCallable DescribeEdgeClusterExtraArgsCallable(const Model::DescribeEdgeClusterExtraArgsRequest& request);

                /**
                 *查询边缘计算集群的节点信息
                 * @param req DescribeEdgeClusterInstancesRequest
                 * @return DescribeEdgeClusterInstancesOutcome
                 */
                DescribeEdgeClusterInstancesOutcome DescribeEdgeClusterInstances(const Model::DescribeEdgeClusterInstancesRequest &request);
                void DescribeEdgeClusterInstancesAsync(const Model::DescribeEdgeClusterInstancesRequest& request, const DescribeEdgeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeClusterInstancesOutcomeCallable DescribeEdgeClusterInstancesCallable(const Model::DescribeEdgeClusterInstancesRequest& request);

                /**
                 *可以查询边缘集群升级信息，包含可以升级的组件，当前升级状态和升级错误信息
                 * @param req DescribeEdgeClusterUpgradeInfoRequest
                 * @return DescribeEdgeClusterUpgradeInfoOutcome
                 */
                DescribeEdgeClusterUpgradeInfoOutcome DescribeEdgeClusterUpgradeInfo(const Model::DescribeEdgeClusterUpgradeInfoRequest &request);
                void DescribeEdgeClusterUpgradeInfoAsync(const Model::DescribeEdgeClusterUpgradeInfoRequest& request, const DescribeEdgeClusterUpgradeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeClusterUpgradeInfoOutcomeCallable DescribeEdgeClusterUpgradeInfoCallable(const Model::DescribeEdgeClusterUpgradeInfoRequest& request);

                /**
                 *获取事件、审计和日志的状态
                 * @param req DescribeEdgeLogSwitchesRequest
                 * @return DescribeEdgeLogSwitchesOutcome
                 */
                DescribeEdgeLogSwitchesOutcome DescribeEdgeLogSwitches(const Model::DescribeEdgeLogSwitchesRequest &request);
                void DescribeEdgeLogSwitchesAsync(const Model::DescribeEdgeLogSwitchesRequest& request, const DescribeEdgeLogSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeLogSwitchesOutcomeCallable DescribeEdgeLogSwitchesCallable(const Model::DescribeEdgeLogSwitchesRequest& request);

                /**
                 *查询容器实例中容器日志
                 * @param req DescribeEksContainerInstanceLogRequest
                 * @return DescribeEksContainerInstanceLogOutcome
                 */
                DescribeEksContainerInstanceLogOutcome DescribeEksContainerInstanceLog(const Model::DescribeEksContainerInstanceLogRequest &request);
                void DescribeEksContainerInstanceLogAsync(const Model::DescribeEksContainerInstanceLogRequest& request, const DescribeEksContainerInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEksContainerInstanceLogOutcomeCallable DescribeEksContainerInstanceLogCallable(const Model::DescribeEksContainerInstanceLogRequest& request);

                /**
                 *本接口用于查询开启vpc-cni模式的任务进度
                 * @param req DescribeEnableVpcCniProgressRequest
                 * @return DescribeEnableVpcCniProgressOutcome
                 */
                DescribeEnableVpcCniProgressOutcome DescribeEnableVpcCniProgress(const Model::DescribeEnableVpcCniProgressRequest &request);
                void DescribeEnableVpcCniProgressAsync(const Model::DescribeEnableVpcCniProgressRequest& request, const DescribeEnableVpcCniProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnableVpcCniProgressOutcomeCallable DescribeEnableVpcCniProgressCallable(const Model::DescribeEnableVpcCniProgressRequest& request);

                /**
                 *查询etcd数据是否进行加密
                 * @param req DescribeEncryptionStatusRequest
                 * @return DescribeEncryptionStatusOutcome
                 */
                DescribeEncryptionStatusOutcome DescribeEncryptionStatus(const Model::DescribeEncryptionStatusRequest &request);
                void DescribeEncryptionStatusAsync(const Model::DescribeEncryptionStatusRequest& request, const DescribeEncryptionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEncryptionStatusOutcomeCallable DescribeEncryptionStatusCallable(const Model::DescribeEncryptionStatusRequest& request);

                /**
                 *查询已经存在的节点，判断是否可以加入集群
                 * @param req DescribeExistedInstancesRequest
                 * @return DescribeExistedInstancesOutcome
                 */
                DescribeExistedInstancesOutcome DescribeExistedInstances(const Model::DescribeExistedInstancesRequest &request);
                void DescribeExistedInstancesAsync(const Model::DescribeExistedInstancesRequest& request, const DescribeExistedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExistedInstancesOutcomeCallable DescribeExistedInstancesCallable(const Model::DescribeExistedInstancesRequest& request);

                /**
                 *查看注册节点列表
                 * @param req DescribeExternalNodeRequest
                 * @return DescribeExternalNodeOutcome
                 */
                DescribeExternalNodeOutcome DescribeExternalNode(const Model::DescribeExternalNodeRequest &request);
                void DescribeExternalNodeAsync(const Model::DescribeExternalNodeRequest& request, const DescribeExternalNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExternalNodeOutcomeCallable DescribeExternalNodeCallable(const Model::DescribeExternalNodeRequest& request);

                /**
                 *查看注册节点池列表
                 * @param req DescribeExternalNodePoolsRequest
                 * @return DescribeExternalNodePoolsOutcome
                 */
                DescribeExternalNodePoolsOutcome DescribeExternalNodePools(const Model::DescribeExternalNodePoolsRequest &request);
                void DescribeExternalNodePoolsAsync(const Model::DescribeExternalNodePoolsRequest& request, const DescribeExternalNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExternalNodePoolsOutcomeCallable DescribeExternalNodePoolsCallable(const Model::DescribeExternalNodePoolsRequest& request);

                /**
                 *获取注册节点初始化脚本
                 * @param req DescribeExternalNodeScriptRequest
                 * @return DescribeExternalNodeScriptOutcome
                 */
                DescribeExternalNodeScriptOutcome DescribeExternalNodeScript(const Model::DescribeExternalNodeScriptRequest &request);
                void DescribeExternalNodeScriptAsync(const Model::DescribeExternalNodeScriptRequest& request, const DescribeExternalNodeScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExternalNodeScriptOutcomeCallable DescribeExternalNodeScriptCallable(const Model::DescribeExternalNodeScriptRequest& request);

                /**
                 *查看开启注册节点池配置信息
                 * @param req DescribeExternalNodeSupportConfigRequest
                 * @return DescribeExternalNodeSupportConfigOutcome
                 */
                DescribeExternalNodeSupportConfigOutcome DescribeExternalNodeSupportConfig(const Model::DescribeExternalNodeSupportConfigRequest &request);
                void DescribeExternalNodeSupportConfigAsync(const Model::DescribeExternalNodeSupportConfigRequest& request, const DescribeExternalNodeSupportConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExternalNodeSupportConfigOutcomeCallable DescribeExternalNodeSupportConfigCallable(const Model::DescribeExternalNodeSupportConfigRequest& request);

                /**
                 *获取全局维护时间窗口和排除项
                 * @param req DescribeGlobalMaintenanceWindowAndExclusionsRequest
                 * @return DescribeGlobalMaintenanceWindowAndExclusionsOutcome
                 */
                DescribeGlobalMaintenanceWindowAndExclusionsOutcome DescribeGlobalMaintenanceWindowAndExclusions(const Model::DescribeGlobalMaintenanceWindowAndExclusionsRequest &request);
                void DescribeGlobalMaintenanceWindowAndExclusionsAsync(const Model::DescribeGlobalMaintenanceWindowAndExclusionsRequest& request, const DescribeGlobalMaintenanceWindowAndExclusionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalMaintenanceWindowAndExclusionsOutcomeCallable DescribeGlobalMaintenanceWindowAndExclusionsCallable(const Model::DescribeGlobalMaintenanceWindowAndExclusionsRequest& request);

                /**
                 *获取eniipamd组件信息
                 * @param req DescribeIPAMDRequest
                 * @return DescribeIPAMDOutcome
                 */
                DescribeIPAMDOutcome DescribeIPAMD(const Model::DescribeIPAMDRequest &request);
                void DescribeIPAMDAsync(const Model::DescribeIPAMDRequest& request, const DescribeIPAMDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIPAMDOutcomeCallable DescribeIPAMDCallable(const Model::DescribeIPAMDRequest& request);

                /**
                 *查询镜像缓存信息接口
                 * @param req DescribeImageCachesRequest
                 * @return DescribeImageCachesOutcome
                 */
                DescribeImageCachesOutcome DescribeImageCaches(const Model::DescribeImageCachesRequest &request);
                void DescribeImageCachesAsync(const Model::DescribeImageCachesRequest& request, const DescribeImageCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageCachesOutcomeCallable DescribeImageCachesCallable(const Model::DescribeImageCachesRequest& request);

                /**
                 *获取镜像信息
                 * @param req DescribeImagesRequest
                 * @return DescribeImagesOutcome
                 */
                DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest &request);
                void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request);

                /**
                 *查询日志采集规则
                 * @param req DescribeLogConfigsRequest
                 * @return DescribeLogConfigsOutcome
                 */
                DescribeLogConfigsOutcome DescribeLogConfigs(const Model::DescribeLogConfigsRequest &request);
                void DescribeLogConfigsAsync(const Model::DescribeLogConfigsRequest& request, const DescribeLogConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogConfigsOutcomeCallable DescribeLogConfigsCallable(const Model::DescribeLogConfigsRequest& request);

                /**
                 *查询集群日志（审计、事件、普通日志）开关列表
                 * @param req DescribeLogSwitchesRequest
                 * @return DescribeLogSwitchesOutcome
                 */
                DescribeLogSwitchesOutcome DescribeLogSwitches(const Model::DescribeLogSwitchesRequest &request);
                void DescribeLogSwitchesAsync(const Model::DescribeLogSwitchesRequest& request, const DescribeLogSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogSwitchesOutcomeCallable DescribeLogSwitchesCallable(const Model::DescribeLogSwitchesRequest& request);

                /**
                 *进行master组件停机故障演练时，获取master组件运行状态，支持kube-apiserver、kube-scheduler、kube-controller-manager
                 * @param req DescribeMasterComponentRequest
                 * @return DescribeMasterComponentOutcome
                 */
                DescribeMasterComponentOutcome DescribeMasterComponent(const Model::DescribeMasterComponentRequest &request);
                void DescribeMasterComponentAsync(const Model::DescribeMasterComponentRequest& request, const DescribeMasterComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMasterComponentOutcomeCallable DescribeMasterComponentCallable(const Model::DescribeMasterComponentRequest& request);

                /**
                 *获取OS聚合信息
                 * @param req DescribeOSImagesRequest
                 * @return DescribeOSImagesOutcome
                 */
                DescribeOSImagesOutcome DescribeOSImages(const Model::DescribeOSImagesRequest &request);
                void DescribeOSImagesAsync(const Model::DescribeOSImagesRequest& request, const DescribeOSImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOSImagesOutcomeCallable DescribeOSImagesCallable(const Model::DescribeOSImagesRequest& request);

                /**
                 *查询opa策略列表
                 * @param req DescribeOpenPolicyListRequest
                 * @return DescribeOpenPolicyListOutcome
                 */
                DescribeOpenPolicyListOutcome DescribeOpenPolicyList(const Model::DescribeOpenPolicyListRequest &request);
                void DescribeOpenPolicyListAsync(const Model::DescribeOpenPolicyListRequest& request, const DescribeOpenPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOpenPolicyListOutcomeCallable DescribeOpenPolicyListCallable(const Model::DescribeOpenPolicyListRequest& request);

                /**
                 *查询正在运行中Pod的计费信息。可以通过 Namespace 和 Name 来查询某个 Pod 的信息，也可以通过 Pod 的 Uid 批量查询。
                 * @param req DescribePodChargeInfoRequest
                 * @return DescribePodChargeInfoOutcome
                 */
                DescribePodChargeInfoOutcome DescribePodChargeInfo(const Model::DescribePodChargeInfoRequest &request);
                void DescribePodChargeInfoAsync(const Model::DescribePodChargeInfoRequest& request, const DescribePodChargeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePodChargeInfoOutcomeCallable DescribePodChargeInfoCallable(const Model::DescribePodChargeInfoRequest& request);

                /**
                 *查询各个规格的 Pod 的抵扣率
                 * @param req DescribePodDeductionRateRequest
                 * @return DescribePodDeductionRateOutcome
                 */
                DescribePodDeductionRateOutcome DescribePodDeductionRate(const Model::DescribePodDeductionRateRequest &request);
                void DescribePodDeductionRateAsync(const Model::DescribePodDeductionRateRequest& request, const DescribePodDeductionRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePodDeductionRateOutcomeCallable DescribePodDeductionRateCallable(const Model::DescribePodDeductionRateRequest& request);

                /**
                 *查询可以用预留券抵扣的 Pod 信息。
                 * @param req DescribePodsBySpecRequest
                 * @return DescribePodsBySpecOutcome
                 */
                DescribePodsBySpecOutcome DescribePodsBySpec(const Model::DescribePodsBySpecRequest &request);
                void DescribePodsBySpecAsync(const Model::DescribePodsBySpecRequest& request, const DescribePodsBySpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePodsBySpecOutcomeCallable DescribePodsBySpecCallable(const Model::DescribePodsBySpecRequest& request);

                /**
                 *包括 Pod 资源统计和绑定的预留券资源统计。
                 * @param req DescribePostNodeResourcesRequest
                 * @return DescribePostNodeResourcesOutcome
                 */
                DescribePostNodeResourcesOutcome DescribePostNodeResources(const Model::DescribePostNodeResourcesRequest &request);
                void DescribePostNodeResourcesAsync(const Model::DescribePostNodeResourcesRequest& request, const DescribePostNodeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePostNodeResourcesOutcomeCallable DescribePostNodeResourcesCallable(const Model::DescribePostNodeResourcesRequest& request);

                /**
                 *获取关联目标集群的实例列表
                 * @param req DescribePrometheusAgentInstancesRequest
                 * @return DescribePrometheusAgentInstancesOutcome
                 */
                DescribePrometheusAgentInstancesOutcome DescribePrometheusAgentInstances(const Model::DescribePrometheusAgentInstancesRequest &request);
                void DescribePrometheusAgentInstancesAsync(const Model::DescribePrometheusAgentInstancesRequest& request, const DescribePrometheusAgentInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusAgentInstancesOutcomeCallable DescribePrometheusAgentInstancesCallable(const Model::DescribePrometheusAgentInstancesRequest& request);

                /**
                 *获取被关联集群列表
                 * @param req DescribePrometheusAgentsRequest
                 * @return DescribePrometheusAgentsOutcome
                 */
                DescribePrometheusAgentsOutcome DescribePrometheusAgents(const Model::DescribePrometheusAgentsRequest &request);
                void DescribePrometheusAgentsAsync(const Model::DescribePrometheusAgentsRequest& request, const DescribePrometheusAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusAgentsOutcomeCallable DescribePrometheusAgentsCallable(const Model::DescribePrometheusAgentsRequest& request);

                /**
                 *获取告警历史
                 * @param req DescribePrometheusAlertHistoryRequest
                 * @return DescribePrometheusAlertHistoryOutcome
                 */
                DescribePrometheusAlertHistoryOutcome DescribePrometheusAlertHistory(const Model::DescribePrometheusAlertHistoryRequest &request);
                void DescribePrometheusAlertHistoryAsync(const Model::DescribePrometheusAlertHistoryRequest& request, const DescribePrometheusAlertHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusAlertHistoryOutcomeCallable DescribePrometheusAlertHistoryCallable(const Model::DescribePrometheusAlertHistoryRequest& request);

                /**
                 *获取2.0实例告警策略列表
                 * @param req DescribePrometheusAlertPolicyRequest
                 * @return DescribePrometheusAlertPolicyOutcome
                 */
                DescribePrometheusAlertPolicyOutcome DescribePrometheusAlertPolicy(const Model::DescribePrometheusAlertPolicyRequest &request);
                void DescribePrometheusAlertPolicyAsync(const Model::DescribePrometheusAlertPolicyRequest& request, const DescribePrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusAlertPolicyOutcomeCallable DescribePrometheusAlertPolicyCallable(const Model::DescribePrometheusAlertPolicyRequest& request);

                /**
                 *获取告警规则列表
                 * @param req DescribePrometheusAlertRuleRequest
                 * @return DescribePrometheusAlertRuleOutcome
                 */
                DescribePrometheusAlertRuleOutcome DescribePrometheusAlertRule(const Model::DescribePrometheusAlertRuleRequest &request);
                void DescribePrometheusAlertRuleAsync(const Model::DescribePrometheusAlertRuleRequest& request, const DescribePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusAlertRuleOutcomeCallable DescribePrometheusAlertRuleCallable(const Model::DescribePrometheusAlertRuleRequest& request);

                /**
                 *获取TMP实例关联集群列表
                 * @param req DescribePrometheusClusterAgentsRequest
                 * @return DescribePrometheusClusterAgentsOutcome
                 */
                DescribePrometheusClusterAgentsOutcome DescribePrometheusClusterAgents(const Model::DescribePrometheusClusterAgentsRequest &request);
                void DescribePrometheusClusterAgentsAsync(const Model::DescribePrometheusClusterAgentsRequest& request, const DescribePrometheusClusterAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusClusterAgentsOutcomeCallable DescribePrometheusClusterAgentsCallable(const Model::DescribePrometheusClusterAgentsRequest& request);

                /**
                 *获取集群采集配置
                 * @param req DescribePrometheusConfigRequest
                 * @return DescribePrometheusConfigOutcome
                 */
                DescribePrometheusConfigOutcome DescribePrometheusConfig(const Model::DescribePrometheusConfigRequest &request);
                void DescribePrometheusConfigAsync(const Model::DescribePrometheusConfigRequest& request, const DescribePrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusConfigOutcomeCallable DescribePrometheusConfigCallable(const Model::DescribePrometheusConfigRequest& request);

                /**
                 *获得实例级别抓取配置
                 * @param req DescribePrometheusGlobalConfigRequest
                 * @return DescribePrometheusGlobalConfigOutcome
                 */
                DescribePrometheusGlobalConfigOutcome DescribePrometheusGlobalConfig(const Model::DescribePrometheusGlobalConfigRequest &request);
                void DescribePrometheusGlobalConfigAsync(const Model::DescribePrometheusGlobalConfigRequest& request, const DescribePrometheusGlobalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusGlobalConfigOutcomeCallable DescribePrometheusGlobalConfigCallable(const Model::DescribePrometheusGlobalConfigRequest& request);

                /**
                 *查询全局告警通知渠道
                 * @param req DescribePrometheusGlobalNotificationRequest
                 * @return DescribePrometheusGlobalNotificationOutcome
                 */
                DescribePrometheusGlobalNotificationOutcome DescribePrometheusGlobalNotification(const Model::DescribePrometheusGlobalNotificationRequest &request);
                void DescribePrometheusGlobalNotificationAsync(const Model::DescribePrometheusGlobalNotificationRequest& request, const DescribePrometheusGlobalNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusGlobalNotificationOutcomeCallable DescribePrometheusGlobalNotificationCallable(const Model::DescribePrometheusGlobalNotificationRequest& request);

                /**
                 *获取实例详细信息
                 * @param req DescribePrometheusInstanceRequest
                 * @return DescribePrometheusInstanceOutcome
                 */
                DescribePrometheusInstanceOutcome DescribePrometheusInstance(const Model::DescribePrometheusInstanceRequest &request);
                void DescribePrometheusInstanceAsync(const Model::DescribePrometheusInstanceRequest& request, const DescribePrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusInstanceOutcomeCallable DescribePrometheusInstanceCallable(const Model::DescribePrometheusInstanceRequest& request);

                /**
                 *获取2.0实例初始化任务状态
                 * @param req DescribePrometheusInstanceInitStatusRequest
                 * @return DescribePrometheusInstanceInitStatusOutcome
                 */
                DescribePrometheusInstanceInitStatusOutcome DescribePrometheusInstanceInitStatus(const Model::DescribePrometheusInstanceInitStatusRequest &request);
                void DescribePrometheusInstanceInitStatusAsync(const Model::DescribePrometheusInstanceInitStatusRequest& request, const DescribePrometheusInstanceInitStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusInstanceInitStatusOutcomeCallable DescribePrometheusInstanceInitStatusCallable(const Model::DescribePrometheusInstanceInitStatusRequest& request);

                /**
                 *获取与云监控融合实例列表
                 * @param req DescribePrometheusInstancesOverviewRequest
                 * @return DescribePrometheusInstancesOverviewOutcome
                 */
                DescribePrometheusInstancesOverviewOutcome DescribePrometheusInstancesOverview(const Model::DescribePrometheusInstancesOverviewRequest &request);
                void DescribePrometheusInstancesOverviewAsync(const Model::DescribePrometheusInstancesOverviewRequest& request, const DescribePrometheusInstancesOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusInstancesOverviewOutcomeCallable DescribePrometheusInstancesOverviewCallable(const Model::DescribePrometheusInstancesOverviewRequest& request);

                /**
                 *获取实例列表
                 * @param req DescribePrometheusOverviewsRequest
                 * @return DescribePrometheusOverviewsOutcome
                 */
                DescribePrometheusOverviewsOutcome DescribePrometheusOverviews(const Model::DescribePrometheusOverviewsRequest &request);
                void DescribePrometheusOverviewsAsync(const Model::DescribePrometheusOverviewsRequest& request, const DescribePrometheusOverviewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusOverviewsOutcomeCallable DescribePrometheusOverviewsCallable(const Model::DescribePrometheusOverviewsRequest& request);

                /**
                 *获取聚合规则列表，包含关联集群内crd资源创建的record rule
                 * @param req DescribePrometheusRecordRulesRequest
                 * @return DescribePrometheusRecordRulesOutcome
                 */
                DescribePrometheusRecordRulesOutcome DescribePrometheusRecordRules(const Model::DescribePrometheusRecordRulesRequest &request);
                void DescribePrometheusRecordRulesAsync(const Model::DescribePrometheusRecordRulesRequest& request, const DescribePrometheusRecordRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusRecordRulesOutcomeCallable DescribePrometheusRecordRulesCallable(const Model::DescribePrometheusRecordRulesRequest& request);

                /**
                 *获取targets信息
                 * @param req DescribePrometheusTargetsRequest
                 * @return DescribePrometheusTargetsOutcome
                 */
                DescribePrometheusTargetsOutcome DescribePrometheusTargets(const Model::DescribePrometheusTargetsRequest &request);
                void DescribePrometheusTargetsAsync(const Model::DescribePrometheusTargetsRequest& request, const DescribePrometheusTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusTargetsOutcomeCallable DescribePrometheusTargetsCallable(const Model::DescribePrometheusTargetsRequest& request);

                /**
                 *拉取模板列表，默认模板将总是在最前面
                 * @param req DescribePrometheusTempRequest
                 * @return DescribePrometheusTempOutcome
                 */
                DescribePrometheusTempOutcome DescribePrometheusTemp(const Model::DescribePrometheusTempRequest &request);
                void DescribePrometheusTempAsync(const Model::DescribePrometheusTempRequest& request, const DescribePrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusTempOutcomeCallable DescribePrometheusTempCallable(const Model::DescribePrometheusTempRequest& request);

                /**
                 *获取模板关联实例信息，针对V2版本实例
                 * @param req DescribePrometheusTempSyncRequest
                 * @return DescribePrometheusTempSyncOutcome
                 */
                DescribePrometheusTempSyncOutcome DescribePrometheusTempSync(const Model::DescribePrometheusTempSyncRequest &request);
                void DescribePrometheusTempSyncAsync(const Model::DescribePrometheusTempSyncRequest& request, const DescribePrometheusTempSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusTempSyncOutcomeCallable DescribePrometheusTempSyncCallable(const Model::DescribePrometheusTempSyncRequest& request);

                /**
                 *获取模板同步信息
                 * @param req DescribePrometheusTemplateSyncRequest
                 * @return DescribePrometheusTemplateSyncOutcome
                 */
                DescribePrometheusTemplateSyncOutcome DescribePrometheusTemplateSync(const Model::DescribePrometheusTemplateSyncRequest &request);
                void DescribePrometheusTemplateSyncAsync(const Model::DescribePrometheusTemplateSyncRequest& request, const DescribePrometheusTemplateSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusTemplateSyncOutcomeCallable DescribePrometheusTemplateSyncCallable(const Model::DescribePrometheusTemplateSyncRequest& request);

                /**
                 *拉取模板列表，默认模板将总是在最前面
                 * @param req DescribePrometheusTemplatesRequest
                 * @return DescribePrometheusTemplatesOutcome
                 */
                DescribePrometheusTemplatesOutcome DescribePrometheusTemplates(const Model::DescribePrometheusTemplatesRequest &request);
                void DescribePrometheusTemplatesAsync(const Model::DescribePrometheusTemplatesRequest& request, const DescribePrometheusTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusTemplatesOutcomeCallable DescribePrometheusTemplatesCallable(const Model::DescribePrometheusTemplatesRequest& request);

                /**
                 *预留实例用量查询
                 * @param req DescribeRIUtilizationDetailRequest
                 * @return DescribeRIUtilizationDetailOutcome
                 */
                DescribeRIUtilizationDetailOutcome DescribeRIUtilizationDetail(const Model::DescribeRIUtilizationDetailRequest &request);
                void DescribeRIUtilizationDetailAsync(const Model::DescribeRIUtilizationDetailRequest& request, const DescribeRIUtilizationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRIUtilizationDetailOutcomeCallable DescribeRIUtilizationDetailCallable(const Model::DescribeRIUtilizationDetailRequest& request);

                /**
                 *获取容器服务支持的所有地域
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *查询各种规格类型的预留券使用率
                 * @param req DescribeReservedInstanceUtilizationRateRequest
                 * @return DescribeReservedInstanceUtilizationRateOutcome
                 */
                DescribeReservedInstanceUtilizationRateOutcome DescribeReservedInstanceUtilizationRate(const Model::DescribeReservedInstanceUtilizationRateRequest &request);
                void DescribeReservedInstanceUtilizationRateAsync(const Model::DescribeReservedInstanceUtilizationRateRequest& request, const DescribeReservedInstanceUtilizationRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReservedInstanceUtilizationRateOutcomeCallable DescribeReservedInstanceUtilizationRateCallable(const Model::DescribeReservedInstanceUtilizationRateRequest& request);

                /**
                 *查询预留实例列表
                 * @param req DescribeReservedInstancesRequest
                 * @return DescribeReservedInstancesOutcome
                 */
                DescribeReservedInstancesOutcome DescribeReservedInstances(const Model::DescribeReservedInstancesRequest &request);
                void DescribeReservedInstancesAsync(const Model::DescribeReservedInstancesRequest& request, const DescribeReservedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReservedInstancesOutcomeCallable DescribeReservedInstancesCallable(const Model::DescribeReservedInstancesRequest& request);

                /**
                 *获取集群资源使用量
                 * @param req DescribeResourceUsageRequest
                 * @return DescribeResourceUsageOutcome
                 */
                DescribeResourceUsageOutcome DescribeResourceUsage(const Model::DescribeResourceUsageRequest &request);
                void DescribeResourceUsageAsync(const Model::DescribeResourceUsageRequest& request, const DescribeResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceUsageOutcomeCallable DescribeResourceUsageCallable(const Model::DescribeResourceUsageRequest& request);

                /**
                 *查询集群发布序列
                 * @param req DescribeRollOutSequencesRequest
                 * @return DescribeRollOutSequencesOutcome
                 */
                DescribeRollOutSequencesOutcome DescribeRollOutSequences(const Model::DescribeRollOutSequencesRequest &request);
                void DescribeRollOutSequencesAsync(const Model::DescribeRollOutSequencesRequest& request, const DescribeRollOutSequencesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRollOutSequencesOutcomeCallable DescribeRollOutSequencesCallable(const Model::DescribeRollOutSequencesRequest& request);

                /**
                 *查询路由表冲突列表
                 * @param req DescribeRouteTableConflictsRequest
                 * @return DescribeRouteTableConflictsOutcome
                 */
                DescribeRouteTableConflictsOutcome DescribeRouteTableConflicts(const Model::DescribeRouteTableConflictsRequest &request);
                void DescribeRouteTableConflictsAsync(const Model::DescribeRouteTableConflictsRequest& request, const DescribeRouteTableConflictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteTableConflictsOutcomeCallable DescribeRouteTableConflictsCallable(const Model::DescribeRouteTableConflictsRequest& request);

                /**
                 *根据K8S版本获取可选运行时版本
                 * @param req DescribeSupportedRuntimeRequest
                 * @return DescribeSupportedRuntimeOutcome
                 */
                DescribeSupportedRuntimeOutcome DescribeSupportedRuntime(const Model::DescribeSupportedRuntimeRequest &request);
                void DescribeSupportedRuntimeAsync(const Model::DescribeSupportedRuntimeRequest& request, const DescribeSupportedRuntimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSupportedRuntimeOutcomeCallable DescribeSupportedRuntimeCallable(const Model::DescribeSupportedRuntimeRequest& request);

                /**
                 *获取边缘计算集群的认证信息
                 * @param req DescribeTKEEdgeClusterCredentialRequest
                 * @return DescribeTKEEdgeClusterCredentialOutcome
                 */
                DescribeTKEEdgeClusterCredentialOutcome DescribeTKEEdgeClusterCredential(const Model::DescribeTKEEdgeClusterCredentialRequest &request);
                void DescribeTKEEdgeClusterCredentialAsync(const Model::DescribeTKEEdgeClusterCredentialRequest& request, const DescribeTKEEdgeClusterCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTKEEdgeClusterCredentialOutcomeCallable DescribeTKEEdgeClusterCredentialCallable(const Model::DescribeTKEEdgeClusterCredentialRequest& request);

                /**
                 *获取边缘计算集群的当前状态以及过程信息
                 * @param req DescribeTKEEdgeClusterStatusRequest
                 * @return DescribeTKEEdgeClusterStatusOutcome
                 */
                DescribeTKEEdgeClusterStatusOutcome DescribeTKEEdgeClusterStatus(const Model::DescribeTKEEdgeClusterStatusRequest &request);
                void DescribeTKEEdgeClusterStatusAsync(const Model::DescribeTKEEdgeClusterStatusRequest& request, const DescribeTKEEdgeClusterStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTKEEdgeClusterStatusOutcomeCallable DescribeTKEEdgeClusterStatusCallable(const Model::DescribeTKEEdgeClusterStatusRequest& request);

                /**
                 *查询边缘集群列表
                 * @param req DescribeTKEEdgeClustersRequest
                 * @return DescribeTKEEdgeClustersOutcome
                 */
                DescribeTKEEdgeClustersOutcome DescribeTKEEdgeClusters(const Model::DescribeTKEEdgeClustersRequest &request);
                void DescribeTKEEdgeClustersAsync(const Model::DescribeTKEEdgeClustersRequest& request, const DescribeTKEEdgeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTKEEdgeClustersOutcomeCallable DescribeTKEEdgeClustersCallable(const Model::DescribeTKEEdgeClustersRequest& request);

                /**
                 *获取边缘计算外部访问的kubeconfig
                 * @param req DescribeTKEEdgeExternalKubeconfigRequest
                 * @return DescribeTKEEdgeExternalKubeconfigOutcome
                 */
                DescribeTKEEdgeExternalKubeconfigOutcome DescribeTKEEdgeExternalKubeconfig(const Model::DescribeTKEEdgeExternalKubeconfigRequest &request);
                void DescribeTKEEdgeExternalKubeconfigAsync(const Model::DescribeTKEEdgeExternalKubeconfigRequest& request, const DescribeTKEEdgeExternalKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTKEEdgeExternalKubeconfigOutcomeCallable DescribeTKEEdgeExternalKubeconfigCallable(const Model::DescribeTKEEdgeExternalKubeconfigRequest& request);

                /**
                 *获取边缘脚本链接，此接口用于添加第三方节点，通过下载脚本从而将节点添加到边缘集群。
                 * @param req DescribeTKEEdgeScriptRequest
                 * @return DescribeTKEEdgeScriptOutcome
                 */
                DescribeTKEEdgeScriptOutcome DescribeTKEEdgeScript(const Model::DescribeTKEEdgeScriptRequest &request);
                void DescribeTKEEdgeScriptAsync(const Model::DescribeTKEEdgeScriptRequest& request, const DescribeTKEEdgeScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTKEEdgeScriptOutcomeCallable DescribeTKEEdgeScriptCallable(const Model::DescribeTKEEdgeScriptRequest& request);

                /**
                 *查询任务相关信息，只会查询对应任务类型的最新的一条任务状态
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *查询计划升级任务详情
                 * @param req DescribeUpgradeTaskDetailRequest
                 * @return DescribeUpgradeTaskDetailOutcome
                 */
                DescribeUpgradeTaskDetailOutcome DescribeUpgradeTaskDetail(const Model::DescribeUpgradeTaskDetailRequest &request);
                void DescribeUpgradeTaskDetailAsync(const Model::DescribeUpgradeTaskDetailRequest& request, const DescribeUpgradeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUpgradeTaskDetailOutcomeCallable DescribeUpgradeTaskDetailCallable(const Model::DescribeUpgradeTaskDetailRequest& request);

                /**
                 *查询计划升级任务
                 * @param req DescribeUpgradeTasksRequest
                 * @return DescribeUpgradeTasksOutcome
                 */
                DescribeUpgradeTasksOutcome DescribeUpgradeTasks(const Model::DescribeUpgradeTasksRequest &request);
                void DescribeUpgradeTasksAsync(const Model::DescribeUpgradeTasksRequest& request, const DescribeUpgradeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUpgradeTasksOutcomeCallable DescribeUpgradeTasksCallable(const Model::DescribeUpgradeTasksRequest& request);

                /**
                 *查询一个指定用户在当前地域下所有 TKE 集群中的聚合权限信息。返回用户在各集群中的 ClusterRoleBinding 和 RoleBinding 信息。
                 * @param req DescribeUserPermissionsRequest
                 * @return DescribeUserPermissionsOutcome
                 */
                DescribeUserPermissionsOutcome DescribeUserPermissions(const Model::DescribeUserPermissionsRequest &request);
                void DescribeUserPermissionsAsync(const Model::DescribeUserPermissionsRequest& request, const DescribeUserPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserPermissionsOutcomeCallable DescribeUserPermissionsCallable(const Model::DescribeUserPermissionsRequest& request);

                /**
                 *获取集群版本信息
                 * @param req DescribeVersionsRequest
                 * @return DescribeVersionsOutcome
                 */
                DescribeVersionsOutcome DescribeVersions(const Model::DescribeVersionsRequest &request);
                void DescribeVersionsAsync(const Model::DescribeVersionsRequest& request, const DescribeVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVersionsOutcomeCallable DescribeVersionsCallable(const Model::DescribeVersionsRequest& request);

                /**
                 *本接口查询当前用户和地域在指定可用区下的机型可支持的最大 TKE VPC-CNI 网络模式的 Pod 数量
                 * @param req DescribeVpcCniPodLimitsRequest
                 * @return DescribeVpcCniPodLimitsOutcome
                 */
                DescribeVpcCniPodLimitsOutcome DescribeVpcCniPodLimits(const Model::DescribeVpcCniPodLimitsRequest &request);
                void DescribeVpcCniPodLimitsAsync(const Model::DescribeVpcCniPodLimitsRequest& request, const DescribeVpcCniPodLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcCniPodLimitsOutcomeCallable DescribeVpcCniPodLimitsCallable(const Model::DescribeVpcCniPodLimitsRequest& request);

                /**
                 *关闭集群审计
                 * @param req DisableClusterAuditRequest
                 * @return DisableClusterAuditOutcome
                 */
                DisableClusterAuditOutcome DisableClusterAudit(const Model::DisableClusterAuditRequest &request);
                void DisableClusterAuditAsync(const Model::DisableClusterAuditRequest& request, const DisableClusterAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableClusterAuditOutcomeCallable DisableClusterAuditCallable(const Model::DisableClusterAuditRequest& request);

                /**
                 *关闭集群删除保护
                 * @param req DisableClusterDeletionProtectionRequest
                 * @return DisableClusterDeletionProtectionOutcome
                 */
                DisableClusterDeletionProtectionOutcome DisableClusterDeletionProtection(const Model::DisableClusterDeletionProtectionRequest &request);
                void DisableClusterDeletionProtectionAsync(const Model::DisableClusterDeletionProtectionRequest& request, const DisableClusterDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableClusterDeletionProtectionOutcomeCallable DisableClusterDeletionProtectionCallable(const Model::DisableClusterDeletionProtectionRequest& request);

                /**
                 *删除插件日志采集配置
                 * @param req DisableControlPlaneLogsRequest
                 * @return DisableControlPlaneLogsOutcome
                 */
                DisableControlPlaneLogsOutcome DisableControlPlaneLogs(const Model::DisableControlPlaneLogsRequest &request);
                void DisableControlPlaneLogsAsync(const Model::DisableControlPlaneLogsRequest& request, const DisableControlPlaneLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableControlPlaneLogsOutcomeCallable DisableControlPlaneLogsCallable(const Model::DisableControlPlaneLogsRequest& request);

                /**
                 *关闭加密信息保护
                 * @param req DisableEncryptionProtectionRequest
                 * @return DisableEncryptionProtectionOutcome
                 */
                DisableEncryptionProtectionOutcome DisableEncryptionProtection(const Model::DisableEncryptionProtectionRequest &request);
                void DisableEncryptionProtectionAsync(const Model::DisableEncryptionProtectionRequest& request, const DisableEncryptionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableEncryptionProtectionOutcomeCallable DisableEncryptionProtectionCallable(const Model::DisableEncryptionProtectionRequest& request);

                /**
                 *关闭事件持久化功能
                 * @param req DisableEventPersistenceRequest
                 * @return DisableEventPersistenceOutcome
                 */
                DisableEventPersistenceOutcome DisableEventPersistence(const Model::DisableEventPersistenceRequest &request);
                void DisableEventPersistenceAsync(const Model::DisableEventPersistenceRequest& request, const DisableEventPersistenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableEventPersistenceOutcomeCallable DisableEventPersistenceCallable(const Model::DisableEventPersistenceRequest& request);

                /**
                 *提供给附加了VPC-CNI能力的Global-Route集群关闭VPC-CNI
                 * @param req DisableVpcCniNetworkTypeRequest
                 * @return DisableVpcCniNetworkTypeOutcome
                 */
                DisableVpcCniNetworkTypeOutcome DisableVpcCniNetworkType(const Model::DisableVpcCniNetworkTypeRequest &request);
                void DisableVpcCniNetworkTypeAsync(const Model::DisableVpcCniNetworkTypeRequest& request, const DisableVpcCniNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableVpcCniNetworkTypeOutcomeCallable DisableVpcCniNetworkTypeCallable(const Model::DisableVpcCniNetworkTypeRequest& request);

                /**
                 *驱逐超级节点
                 * @param req DrainClusterVirtualNodeRequest
                 * @return DrainClusterVirtualNodeOutcome
                 */
                DrainClusterVirtualNodeOutcome DrainClusterVirtualNode(const Model::DrainClusterVirtualNodeRequest &request);
                void DrainClusterVirtualNodeAsync(const Model::DrainClusterVirtualNodeRequest& request, const DrainClusterVirtualNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DrainClusterVirtualNodeOutcomeCallable DrainClusterVirtualNodeCallable(const Model::DrainClusterVirtualNodeRequest& request);

                /**
                 *驱逐注册节点
                 * @param req DrainExternalNodeRequest
                 * @return DrainExternalNodeOutcome
                 */
                DrainExternalNodeOutcome DrainExternalNode(const Model::DrainExternalNodeRequest &request);
                void DrainExternalNodeAsync(const Model::DrainExternalNodeRequest& request, const DrainExternalNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DrainExternalNodeOutcomeCallable DrainExternalNodeCallable(const Model::DrainExternalNodeRequest& request);

                /**
                 *开启集群审计
                 * @param req EnableClusterAuditRequest
                 * @return EnableClusterAuditOutcome
                 */
                EnableClusterAuditOutcome EnableClusterAudit(const Model::EnableClusterAuditRequest &request);
                void EnableClusterAuditAsync(const Model::EnableClusterAuditRequest& request, const EnableClusterAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableClusterAuditOutcomeCallable EnableClusterAuditCallable(const Model::EnableClusterAuditRequest& request);

                /**
                 *启用集群删除保护
                 * @param req EnableClusterDeletionProtectionRequest
                 * @return EnableClusterDeletionProtectionOutcome
                 */
                EnableClusterDeletionProtectionOutcome EnableClusterDeletionProtection(const Model::EnableClusterDeletionProtectionRequest &request);
                void EnableClusterDeletionProtectionAsync(const Model::EnableClusterDeletionProtectionRequest& request, const EnableClusterDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableClusterDeletionProtectionOutcomeCallable EnableClusterDeletionProtectionCallable(const Model::EnableClusterDeletionProtectionRequest& request);

                /**
                 *创建插件日志采集配置
                 * @param req EnableControlPlaneLogsRequest
                 * @return EnableControlPlaneLogsOutcome
                 */
                EnableControlPlaneLogsOutcome EnableControlPlaneLogs(const Model::EnableControlPlaneLogsRequest &request);
                void EnableControlPlaneLogsAsync(const Model::EnableControlPlaneLogsRequest& request, const EnableControlPlaneLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableControlPlaneLogsOutcomeCallable EnableControlPlaneLogsCallable(const Model::EnableControlPlaneLogsRequest& request);

                /**
                 *Eks集群开启事件持久化功能
                 * @param req EnableEksEventPersistenceRequest
                 * @return EnableEksEventPersistenceOutcome
                 */
                EnableEksEventPersistenceOutcome EnableEksEventPersistence(const Model::EnableEksEventPersistenceRequest &request);
                void EnableEksEventPersistenceAsync(const Model::EnableEksEventPersistenceRequest& request, const EnableEksEventPersistenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableEksEventPersistenceOutcomeCallable EnableEksEventPersistenceCallable(const Model::EnableEksEventPersistenceRequest& request);

                /**
                 *开启加密数据保护，需要先开启KMS能力，完成KMS授权
                 * @param req EnableEncryptionProtectionRequest
                 * @return EnableEncryptionProtectionOutcome
                 */
                EnableEncryptionProtectionOutcome EnableEncryptionProtection(const Model::EnableEncryptionProtectionRequest &request);
                void EnableEncryptionProtectionAsync(const Model::EnableEncryptionProtectionRequest& request, const EnableEncryptionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableEncryptionProtectionOutcomeCallable EnableEncryptionProtectionCallable(const Model::EnableEncryptionProtectionRequest& request);

                /**
                 *开启事件持久化功能
                 * @param req EnableEventPersistenceRequest
                 * @return EnableEventPersistenceOutcome
                 */
                EnableEventPersistenceOutcome EnableEventPersistence(const Model::EnableEventPersistenceRequest &request);
                void EnableEventPersistenceAsync(const Model::EnableEventPersistenceRequest& request, const EnableEventPersistenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableEventPersistenceOutcomeCallable EnableEventPersistenceCallable(const Model::EnableEventPersistenceRequest& request);

                /**
                 *开启注册节点池支持
                 * @param req EnableExternalNodeSupportRequest
                 * @return EnableExternalNodeSupportOutcome
                 */
                EnableExternalNodeSupportOutcome EnableExternalNodeSupport(const Model::EnableExternalNodeSupportRequest &request);
                void EnableExternalNodeSupportAsync(const Model::EnableExternalNodeSupportRequest& request, const EnableExternalNodeSupportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableExternalNodeSupportOutcomeCallable EnableExternalNodeSupportCallable(const Model::EnableExternalNodeSupportRequest& request);

                /**
                 *GR集群可以通过本接口附加vpc-cni容器网络插件，开启vpc-cni容器网络能力
                 * @param req EnableVpcCniNetworkTypeRequest
                 * @return EnableVpcCniNetworkTypeOutcome
                 */
                EnableVpcCniNetworkTypeOutcome EnableVpcCniNetworkType(const Model::EnableVpcCniNetworkTypeRequest &request);
                void EnableVpcCniNetworkTypeAsync(const Model::EnableVpcCniNetworkTypeRequest& request, const EnableVpcCniNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableVpcCniNetworkTypeOutcomeCallable EnableVpcCniNetworkTypeCallable(const Model::EnableVpcCniNetworkTypeRequest& request);

                /**
                 *操作TKEEdge集群的addon
                 * @param req ForwardTKEEdgeApplicationRequestV3Request
                 * @return ForwardTKEEdgeApplicationRequestV3Outcome
                 */
                ForwardTKEEdgeApplicationRequestV3Outcome ForwardTKEEdgeApplicationRequestV3(const Model::ForwardTKEEdgeApplicationRequestV3Request &request);
                void ForwardTKEEdgeApplicationRequestV3Async(const Model::ForwardTKEEdgeApplicationRequestV3Request& request, const ForwardTKEEdgeApplicationRequestV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForwardTKEEdgeApplicationRequestV3OutcomeCallable ForwardTKEEdgeApplicationRequestV3Callable(const Model::ForwardTKEEdgeApplicationRequestV3Request& request);

                /**
                 *获取集群规模价格
                 * @param req GetClusterLevelPriceRequest
                 * @return GetClusterLevelPriceOutcome
                 */
                GetClusterLevelPriceOutcome GetClusterLevelPrice(const Model::GetClusterLevelPriceRequest &request);
                void GetClusterLevelPriceAsync(const Model::GetClusterLevelPriceRequest& request, const GetClusterLevelPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetClusterLevelPriceOutcomeCallable GetClusterLevelPriceCallable(const Model::GetClusterLevelPriceRequest& request);

                /**
                 *根据镜像列表，查询匹配的镜像缓存
                 * @param req GetMostSuitableImageCacheRequest
                 * @return GetMostSuitableImageCacheOutcome
                 */
                GetMostSuitableImageCacheOutcome GetMostSuitableImageCache(const Model::GetMostSuitableImageCacheRequest &request);
                void GetMostSuitableImageCacheAsync(const Model::GetMostSuitableImageCacheRequest& request, const GetMostSuitableImageCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetMostSuitableImageCacheOutcomeCallable GetMostSuitableImageCacheCallable(const Model::GetMostSuitableImageCacheRequest& request);

                /**
                 *获取TKE支持的App列表
                 * @param req GetTkeAppChartListRequest
                 * @return GetTkeAppChartListOutcome
                 */
                GetTkeAppChartListOutcome GetTkeAppChartList(const Model::GetTkeAppChartListRequest &request);
                void GetTkeAppChartListAsync(const Model::GetTkeAppChartListRequest& request, const GetTkeAppChartListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTkeAppChartListOutcomeCallable GetTkeAppChartListCallable(const Model::GetTkeAppChartListRequest& request);

                /**
                 *获得节点升级当前的进度，若集群未处于节点升级状态，则接口会报错：任务未找到。
                 * @param req GetUpgradeInstanceProgressRequest
                 * @return GetUpgradeInstanceProgressOutcome
                 */
                GetUpgradeInstanceProgressOutcome GetUpgradeInstanceProgress(const Model::GetUpgradeInstanceProgressRequest &request);
                void GetUpgradeInstanceProgressAsync(const Model::GetUpgradeInstanceProgressRequest& request, const GetUpgradeInstanceProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUpgradeInstanceProgressOutcomeCallable GetUpgradeInstanceProgressCallable(const Model::GetUpgradeInstanceProgressRequest& request);

                /**
                 *使用请求中提供的权限集合，为用户授予对应的 RBAC 权限。
                 * @param req GrantUserPermissionsRequest
                 * @return GrantUserPermissionsOutcome
                 */
                GrantUserPermissionsOutcome GrantUserPermissions(const Model::GrantUserPermissionsRequest &request);
                void GrantUserPermissionsAsync(const Model::GrantUserPermissionsRequest& request, const GrantUserPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GrantUserPermissionsOutcomeCallable GrantUserPermissionsCallable(const Model::GrantUserPermissionsRequest& request);

                /**
                 *为目标集群安装一个addon
                 * @param req InstallAddonRequest
                 * @return InstallAddonOutcome
                 */
                InstallAddonOutcome InstallAddon(const Model::InstallAddonRequest &request);
                void InstallAddonAsync(const Model::InstallAddonRequest& request, const InstallAddonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallAddonOutcomeCallable InstallAddonCallable(const Model::InstallAddonRequest& request);

                /**
                 *在tke@edge集群的边缘节点上安装日志采集组件
                 * @param req InstallEdgeLogAgentRequest
                 * @return InstallEdgeLogAgentOutcome
                 */
                InstallEdgeLogAgentOutcome InstallEdgeLogAgent(const Model::InstallEdgeLogAgentRequest &request);
                void InstallEdgeLogAgentAsync(const Model::InstallEdgeLogAgentRequest& request, const InstallEdgeLogAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallEdgeLogAgentOutcomeCallable InstallEdgeLogAgentCallable(const Model::InstallEdgeLogAgentRequest& request);

                /**
                 *在TKE集群中安装CLS日志采集组件
                 * @param req InstallLogAgentRequest
                 * @return InstallLogAgentOutcome
                 */
                InstallLogAgentOutcome InstallLogAgent(const Model::InstallLogAgentRequest &request);
                void InstallLogAgentAsync(const Model::InstallLogAgentRequest& request, const InstallLogAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallLogAgentOutcomeCallable InstallLogAgentCallable(const Model::InstallLogAgentRequest& request);

                /**
                 *查询指定集群的巡检结果信息
                 * @param req ListClusterInspectionResultsRequest
                 * @return ListClusterInspectionResultsOutcome
                 */
                ListClusterInspectionResultsOutcome ListClusterInspectionResults(const Model::ListClusterInspectionResultsRequest &request);
                void ListClusterInspectionResultsAsync(const Model::ListClusterInspectionResultsRequest& request, const ListClusterInspectionResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListClusterInspectionResultsOutcomeCallable ListClusterInspectionResultsCallable(const Model::ListClusterInspectionResultsRequest& request);

                /**
                 *查询集群巡检结果历史列表
                 * @param req ListClusterInspectionResultsItemsRequest
                 * @return ListClusterInspectionResultsItemsOutcome
                 */
                ListClusterInspectionResultsItemsOutcome ListClusterInspectionResultsItems(const Model::ListClusterInspectionResultsItemsRequest &request);
                void ListClusterInspectionResultsItemsAsync(const Model::ListClusterInspectionResultsItemsRequest& request, const ListClusterInspectionResultsItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListClusterInspectionResultsItemsOutcomeCallable ListClusterInspectionResultsItemsCallable(const Model::ListClusterInspectionResultsItemsRequest& request);

                /**
                 *修改集群伸缩组属性
                 * @param req ModifyClusterAsGroupAttributeRequest
                 * @return ModifyClusterAsGroupAttributeOutcome
                 */
                ModifyClusterAsGroupAttributeOutcome ModifyClusterAsGroupAttribute(const Model::ModifyClusterAsGroupAttributeRequest &request);
                void ModifyClusterAsGroupAttributeAsync(const Model::ModifyClusterAsGroupAttributeRequest& request, const ModifyClusterAsGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterAsGroupAttributeOutcomeCallable ModifyClusterAsGroupAttributeCallable(const Model::ModifyClusterAsGroupAttributeRequest& request);

                /**
                 *修改集群弹性伸缩属性
                 * @param req ModifyClusterAsGroupOptionAttributeRequest
                 * @return ModifyClusterAsGroupOptionAttributeOutcome
                 */
                ModifyClusterAsGroupOptionAttributeOutcome ModifyClusterAsGroupOptionAttribute(const Model::ModifyClusterAsGroupOptionAttributeRequest &request);
                void ModifyClusterAsGroupOptionAttributeAsync(const Model::ModifyClusterAsGroupOptionAttributeRequest& request, const ModifyClusterAsGroupOptionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterAsGroupOptionAttributeOutcomeCallable ModifyClusterAsGroupOptionAttributeCallable(const Model::ModifyClusterAsGroupOptionAttributeRequest& request);

                /**
                 *修改集群属性，至少选择一个参数更新
                 * @param req ModifyClusterAttributeRequest
                 * @return ModifyClusterAttributeOutcome
                 */
                ModifyClusterAttributeOutcome ModifyClusterAttribute(const Model::ModifyClusterAttributeRequest &request);
                void ModifyClusterAttributeAsync(const Model::ModifyClusterAttributeRequest& request, const ModifyClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterAttributeOutcomeCallable ModifyClusterAttributeCallable(const Model::ModifyClusterAttributeRequest& request);

                /**
                 *修改集群认证配置
                 * @param req ModifyClusterAuthenticationOptionsRequest
                 * @return ModifyClusterAuthenticationOptionsOutcome
                 */
                ModifyClusterAuthenticationOptionsOutcome ModifyClusterAuthenticationOptions(const Model::ModifyClusterAuthenticationOptionsRequest &request);
                void ModifyClusterAuthenticationOptionsAsync(const Model::ModifyClusterAuthenticationOptionsRequest& request, const ModifyClusterAuthenticationOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterAuthenticationOptionsOutcomeCallable ModifyClusterAuthenticationOptionsCallable(const Model::ModifyClusterAuthenticationOptionsRequest& request);

                /**
                 *修改托管集群外网端口的安全策略（老的方式，仅支持托管集群外网端口）
                 * @param req ModifyClusterEndpointSPRequest
                 * @return ModifyClusterEndpointSPOutcome
                 */
                ModifyClusterEndpointSPOutcome ModifyClusterEndpointSP(const Model::ModifyClusterEndpointSPRequest &request);
                void ModifyClusterEndpointSPAsync(const Model::ModifyClusterEndpointSPRequest& request, const ModifyClusterEndpointSPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterEndpointSPOutcomeCallable ModifyClusterEndpointSPCallable(const Model::ModifyClusterEndpointSPRequest& request);

                /**
                 *更新集群自定义参数，只支持托管集群
                 * @param req ModifyClusterExtraArgsRequest
                 * @return ModifyClusterExtraArgsOutcome
                 */
                ModifyClusterExtraArgsOutcome ModifyClusterExtraArgs(const Model::ModifyClusterExtraArgsRequest &request);
                void ModifyClusterExtraArgsAsync(const Model::ModifyClusterExtraArgsRequest& request, const ModifyClusterExtraArgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterExtraArgsOutcomeCallable ModifyClusterExtraArgsCallable(const Model::ModifyClusterExtraArgsRequest& request);

                /**
                 *暂停或者取消集群更新参数任务
                 * @param req ModifyClusterExtraArgsTaskStateRequest
                 * @return ModifyClusterExtraArgsTaskStateOutcome
                 */
                ModifyClusterExtraArgsTaskStateOutcome ModifyClusterExtraArgsTaskState(const Model::ModifyClusterExtraArgsTaskStateRequest &request);
                void ModifyClusterExtraArgsTaskStateAsync(const Model::ModifyClusterExtraArgsTaskStateRequest& request, const ModifyClusterExtraArgsTaskStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterExtraArgsTaskStateOutcomeCallable ModifyClusterExtraArgsTaskStateCallable(const Model::ModifyClusterExtraArgsTaskStateRequest& request);

                /**
                 *修改集群镜像
                 * @param req ModifyClusterImageRequest
                 * @return ModifyClusterImageOutcome
                 */
                ModifyClusterImageOutcome ModifyClusterImage(const Model::ModifyClusterImageRequest &request);
                void ModifyClusterImageAsync(const Model::ModifyClusterImageRequest& request, const ModifyClusterImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterImageOutcomeCallable ModifyClusterImageCallable(const Model::ModifyClusterImageRequest& request);

                /**
                 *更新集群维护时间窗口和排除项
                 * @param req ModifyClusterMaintenanceWindowAndExclusionsRequest
                 * @return ModifyClusterMaintenanceWindowAndExclusionsOutcome
                 */
                ModifyClusterMaintenanceWindowAndExclusionsOutcome ModifyClusterMaintenanceWindowAndExclusions(const Model::ModifyClusterMaintenanceWindowAndExclusionsRequest &request);
                void ModifyClusterMaintenanceWindowAndExclusionsAsync(const Model::ModifyClusterMaintenanceWindowAndExclusionsRequest& request, const ModifyClusterMaintenanceWindowAndExclusionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterMaintenanceWindowAndExclusionsOutcomeCallable ModifyClusterMaintenanceWindowAndExclusionsCallable(const Model::ModifyClusterMaintenanceWindowAndExclusionsRequest& request);

                /**
                 *编辑节点池
                 * @param req ModifyClusterNodePoolRequest
                 * @return ModifyClusterNodePoolOutcome
                 */
                ModifyClusterNodePoolOutcome ModifyClusterNodePool(const Model::ModifyClusterNodePoolRequest &request);
                void ModifyClusterNodePoolAsync(const Model::ModifyClusterNodePoolRequest& request, const ModifyClusterNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterNodePoolOutcomeCallable ModifyClusterNodePoolCallable(const Model::ModifyClusterNodePoolRequest& request);

                /**
                 *更新集群发布序列标签
                 * @param req ModifyClusterRollOutSequenceTagsRequest
                 * @return ModifyClusterRollOutSequenceTagsOutcome
                 */
                ModifyClusterRollOutSequenceTagsOutcome ModifyClusterRollOutSequenceTags(const Model::ModifyClusterRollOutSequenceTagsRequest &request);
                void ModifyClusterRollOutSequenceTagsAsync(const Model::ModifyClusterRollOutSequenceTagsRequest& request, const ModifyClusterRollOutSequenceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterRollOutSequenceTagsOutcomeCallable ModifyClusterRollOutSequenceTagsCallable(const Model::ModifyClusterRollOutSequenceTagsRequest& request);

                /**
                 *修改集群及节点池维度运行时配置
                 * @param req ModifyClusterRuntimeConfigRequest
                 * @return ModifyClusterRuntimeConfigOutcome
                 */
                ModifyClusterRuntimeConfigOutcome ModifyClusterRuntimeConfig(const Model::ModifyClusterRuntimeConfigRequest &request);
                void ModifyClusterRuntimeConfigAsync(const Model::ModifyClusterRuntimeConfigRequest& request, const ModifyClusterRuntimeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterRuntimeConfigOutcomeCallable ModifyClusterRuntimeConfigCallable(const Model::ModifyClusterRuntimeConfigRequest& request);

                /**
                 *修改集群调度策略
                 * @param req ModifyClusterSchedulerPolicyRequest
                 * @return ModifyClusterSchedulerPolicyOutcome
                 */
                ModifyClusterSchedulerPolicyOutcome ModifyClusterSchedulerPolicy(const Model::ModifyClusterSchedulerPolicyRequest &request);
                void ModifyClusterSchedulerPolicyAsync(const Model::ModifyClusterSchedulerPolicyRequest& request, const ModifyClusterSchedulerPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterSchedulerPolicyOutcomeCallable ModifyClusterSchedulerPolicyCallable(const Model::ModifyClusterSchedulerPolicyRequest& request);

                /**
                 *修改集群标签
                 * @param req ModifyClusterTagsRequest
                 * @return ModifyClusterTagsOutcome
                 */
                ModifyClusterTagsOutcome ModifyClusterTags(const Model::ModifyClusterTagsRequest &request);
                void ModifyClusterTagsAsync(const Model::ModifyClusterTagsRequest& request, const ModifyClusterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterTagsOutcomeCallable ModifyClusterTagsCallable(const Model::ModifyClusterTagsRequest& request);

                /**
                 *修改超级节点池
                 * @param req ModifyClusterVirtualNodePoolRequest
                 * @return ModifyClusterVirtualNodePoolOutcome
                 */
                ModifyClusterVirtualNodePoolOutcome ModifyClusterVirtualNodePool(const Model::ModifyClusterVirtualNodePoolRequest &request);
                void ModifyClusterVirtualNodePoolAsync(const Model::ModifyClusterVirtualNodePoolRequest& request, const ModifyClusterVirtualNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterVirtualNodePoolOutcomeCallable ModifyClusterVirtualNodePoolCallable(const Model::ModifyClusterVirtualNodePoolRequest& request);

                /**
                 *修改注册节点池
                 * @param req ModifyExternalNodePoolRequest
                 * @return ModifyExternalNodePoolOutcome
                 */
                ModifyExternalNodePoolOutcome ModifyExternalNodePool(const Model::ModifyExternalNodePoolRequest &request);
                void ModifyExternalNodePoolAsync(const Model::ModifyExternalNodePoolRequest& request, const ModifyExternalNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyExternalNodePoolOutcomeCallable ModifyExternalNodePoolCallable(const Model::ModifyExternalNodePoolRequest& request);

                /**
                 *更新全局维护时间窗口和排除项
                 * @param req ModifyGlobalMaintenanceWindowAndExclusionsRequest
                 * @return ModifyGlobalMaintenanceWindowAndExclusionsOutcome
                 */
                ModifyGlobalMaintenanceWindowAndExclusionsOutcome ModifyGlobalMaintenanceWindowAndExclusions(const Model::ModifyGlobalMaintenanceWindowAndExclusionsRequest &request);
                void ModifyGlobalMaintenanceWindowAndExclusionsAsync(const Model::ModifyGlobalMaintenanceWindowAndExclusionsRequest& request, const ModifyGlobalMaintenanceWindowAndExclusionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGlobalMaintenanceWindowAndExclusionsOutcomeCallable ModifyGlobalMaintenanceWindowAndExclusionsCallable(const Model::ModifyGlobalMaintenanceWindowAndExclusionsRequest& request);

                /**
                 *修改master组件，支持kube-apiserver、kube-scheduler、kube-controller-manager副本数调整为0和恢复
                 * @param req ModifyMasterComponentRequest
                 * @return ModifyMasterComponentOutcome
                 */
                ModifyMasterComponentOutcome ModifyMasterComponent(const Model::ModifyMasterComponentRequest &request);
                void ModifyMasterComponentAsync(const Model::ModifyMasterComponentRequest& request, const ModifyMasterComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMasterComponentOutcomeCallable ModifyMasterComponentCallable(const Model::ModifyMasterComponentRequest& request);

                /**
                 *修改节点池关联伸缩组的期望实例数
                 * @param req ModifyNodePoolDesiredCapacityAboutAsgRequest
                 * @return ModifyNodePoolDesiredCapacityAboutAsgOutcome
                 */
                ModifyNodePoolDesiredCapacityAboutAsgOutcome ModifyNodePoolDesiredCapacityAboutAsg(const Model::ModifyNodePoolDesiredCapacityAboutAsgRequest &request);
                void ModifyNodePoolDesiredCapacityAboutAsgAsync(const Model::ModifyNodePoolDesiredCapacityAboutAsgRequest& request, const ModifyNodePoolDesiredCapacityAboutAsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNodePoolDesiredCapacityAboutAsgOutcomeCallable ModifyNodePoolDesiredCapacityAboutAsgCallable(const Model::ModifyNodePoolDesiredCapacityAboutAsgRequest& request);

                /**
                 *修改节点池的机型配置
                 * @param req ModifyNodePoolInstanceTypesRequest
                 * @return ModifyNodePoolInstanceTypesOutcome
                 */
                ModifyNodePoolInstanceTypesOutcome ModifyNodePoolInstanceTypes(const Model::ModifyNodePoolInstanceTypesRequest &request);
                void ModifyNodePoolInstanceTypesAsync(const Model::ModifyNodePoolInstanceTypesRequest& request, const ModifyNodePoolInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNodePoolInstanceTypesOutcomeCallable ModifyNodePoolInstanceTypesCallable(const Model::ModifyNodePoolInstanceTypesRequest& request);

                /**
                 *批量修改opa策略
                 * @param req ModifyOpenPolicyListRequest
                 * @return ModifyOpenPolicyListOutcome
                 */
                ModifyOpenPolicyListOutcome ModifyOpenPolicyList(const Model::ModifyOpenPolicyListRequest &request);
                void ModifyOpenPolicyListAsync(const Model::ModifyOpenPolicyListRequest& request, const ModifyOpenPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOpenPolicyListOutcomeCallable ModifyOpenPolicyListCallable(const Model::ModifyOpenPolicyListRequest& request);

                /**
                 *修改被关联集群的external labels
                 * @param req ModifyPrometheusAgentExternalLabelsRequest
                 * @return ModifyPrometheusAgentExternalLabelsOutcome
                 */
                ModifyPrometheusAgentExternalLabelsOutcome ModifyPrometheusAgentExternalLabels(const Model::ModifyPrometheusAgentExternalLabelsRequest &request);
                void ModifyPrometheusAgentExternalLabelsAsync(const Model::ModifyPrometheusAgentExternalLabelsRequest& request, const ModifyPrometheusAgentExternalLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusAgentExternalLabelsOutcomeCallable ModifyPrometheusAgentExternalLabelsCallable(const Model::ModifyPrometheusAgentExternalLabelsRequest& request);

                /**
                 *修改2.0实例告警策略
                 * @param req ModifyPrometheusAlertPolicyRequest
                 * @return ModifyPrometheusAlertPolicyOutcome
                 */
                ModifyPrometheusAlertPolicyOutcome ModifyPrometheusAlertPolicy(const Model::ModifyPrometheusAlertPolicyRequest &request);
                void ModifyPrometheusAlertPolicyAsync(const Model::ModifyPrometheusAlertPolicyRequest& request, const ModifyPrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusAlertPolicyOutcomeCallable ModifyPrometheusAlertPolicyCallable(const Model::ModifyPrometheusAlertPolicyRequest& request);

                /**
                 *修改告警规则
                 * @param req ModifyPrometheusAlertRuleRequest
                 * @return ModifyPrometheusAlertRuleOutcome
                 */
                ModifyPrometheusAlertRuleOutcome ModifyPrometheusAlertRule(const Model::ModifyPrometheusAlertRuleRequest &request);
                void ModifyPrometheusAlertRuleAsync(const Model::ModifyPrometheusAlertRuleRequest& request, const ModifyPrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusAlertRuleOutcomeCallable ModifyPrometheusAlertRuleCallable(const Model::ModifyPrometheusAlertRuleRequest& request);

                /**
                 *修改集群采集配置
                 * @param req ModifyPrometheusConfigRequest
                 * @return ModifyPrometheusConfigOutcome
                 */
                ModifyPrometheusConfigOutcome ModifyPrometheusConfig(const Model::ModifyPrometheusConfigRequest &request);
                void ModifyPrometheusConfigAsync(const Model::ModifyPrometheusConfigRequest& request, const ModifyPrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusConfigOutcomeCallable ModifyPrometheusConfigCallable(const Model::ModifyPrometheusConfigRequest& request);

                /**
                 *修改全局告警通知渠道
                 * @param req ModifyPrometheusGlobalNotificationRequest
                 * @return ModifyPrometheusGlobalNotificationOutcome
                 */
                ModifyPrometheusGlobalNotificationOutcome ModifyPrometheusGlobalNotification(const Model::ModifyPrometheusGlobalNotificationRequest &request);
                void ModifyPrometheusGlobalNotificationAsync(const Model::ModifyPrometheusGlobalNotificationRequest& request, const ModifyPrometheusGlobalNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusGlobalNotificationOutcomeCallable ModifyPrometheusGlobalNotificationCallable(const Model::ModifyPrometheusGlobalNotificationRequest& request);

                /**
                 *修改聚合规则yaml方式
                 * @param req ModifyPrometheusRecordRuleYamlRequest
                 * @return ModifyPrometheusRecordRuleYamlOutcome
                 */
                ModifyPrometheusRecordRuleYamlOutcome ModifyPrometheusRecordRuleYaml(const Model::ModifyPrometheusRecordRuleYamlRequest &request);
                void ModifyPrometheusRecordRuleYamlAsync(const Model::ModifyPrometheusRecordRuleYamlRequest& request, const ModifyPrometheusRecordRuleYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusRecordRuleYamlOutcomeCallable ModifyPrometheusRecordRuleYamlCallable(const Model::ModifyPrometheusRecordRuleYamlRequest& request);

                /**
                 *修改模板内容
                 * @param req ModifyPrometheusTempRequest
                 * @return ModifyPrometheusTempOutcome
                 */
                ModifyPrometheusTempOutcome ModifyPrometheusTemp(const Model::ModifyPrometheusTempRequest &request);
                void ModifyPrometheusTempAsync(const Model::ModifyPrometheusTempRequest& request, const ModifyPrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusTempOutcomeCallable ModifyPrometheusTempCallable(const Model::ModifyPrometheusTempRequest& request);

                /**
                 *修改模板内容
                 * @param req ModifyPrometheusTemplateRequest
                 * @return ModifyPrometheusTemplateOutcome
                 */
                ModifyPrometheusTemplateOutcome ModifyPrometheusTemplate(const Model::ModifyPrometheusTemplateRequest &request);
                void ModifyPrometheusTemplateAsync(const Model::ModifyPrometheusTemplateRequest& request, const ModifyPrometheusTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusTemplateOutcomeCallable ModifyPrometheusTemplateCallable(const Model::ModifyPrometheusTemplateRequest& request);

                /**
                 *修改预留券的抵扣范围，抵扣范围取值：Region、Zone 和 Node。
                 * @param req ModifyReservedInstanceScopeRequest
                 * @return ModifyReservedInstanceScopeOutcome
                 */
                ModifyReservedInstanceScopeOutcome ModifyReservedInstanceScope(const Model::ModifyReservedInstanceScopeRequest &request);
                void ModifyReservedInstanceScopeAsync(const Model::ModifyReservedInstanceScopeRequest& request, const ModifyReservedInstanceScopeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReservedInstanceScopeOutcomeCallable ModifyReservedInstanceScopeCallable(const Model::ModifyReservedInstanceScopeRequest& request);

                /**
                 *更新集群发布序列
                 * @param req ModifyRollOutSequenceRequest
                 * @return ModifyRollOutSequenceOutcome
                 */
                ModifyRollOutSequenceOutcome ModifyRollOutSequence(const Model::ModifyRollOutSequenceRequest &request);
                void ModifyRollOutSequenceAsync(const Model::ModifyRollOutSequenceRequest& request, const ModifyRollOutSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRollOutSequenceOutcomeCallable ModifyRollOutSequenceCallable(const Model::ModifyRollOutSequenceRequest& request);

                /**
                 *移出节点池节点，但保留在集群内
                 * @param req RemoveNodeFromNodePoolRequest
                 * @return RemoveNodeFromNodePoolOutcome
                 */
                RemoveNodeFromNodePoolOutcome RemoveNodeFromNodePool(const Model::RemoveNodeFromNodePoolRequest &request);
                void RemoveNodeFromNodePoolAsync(const Model::RemoveNodeFromNodePoolRequest& request, const RemoveNodeFromNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveNodeFromNodePoolOutcomeCallable RemoveNodeFromNodePoolCallable(const Model::RemoveNodeFromNodePoolRequest& request);

                /**
                 *续费时请确保账户余额充足。
                 * @param req RenewReservedInstancesRequest
                 * @return RenewReservedInstancesOutcome
                 */
                RenewReservedInstancesOutcome RenewReservedInstances(const Model::RenewReservedInstancesRequest &request);
                void RenewReservedInstancesAsync(const Model::RenewReservedInstancesRequest& request, const RenewReservedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewReservedInstancesOutcomeCallable RenewReservedInstancesCallable(const Model::RenewReservedInstancesRequest& request);

                /**
                 *重启弹性容器实例，支持批量操作
                 * @param req RestartEKSContainerInstancesRequest
                 * @return RestartEKSContainerInstancesOutcome
                 */
                RestartEKSContainerInstancesOutcome RestartEKSContainerInstances(const Model::RestartEKSContainerInstancesRequest &request);
                void RestartEKSContainerInstancesAsync(const Model::RestartEKSContainerInstancesRequest& request, const RestartEKSContainerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartEKSContainerInstancesOutcomeCallable RestartEKSContainerInstancesCallable(const Model::RestartEKSContainerInstancesRequest& request);

                /**
                 *在应用市场中集群回滚应用至某个历史版本
                 * @param req RollbackClusterReleaseRequest
                 * @return RollbackClusterReleaseOutcome
                 */
                RollbackClusterReleaseOutcome RollbackClusterRelease(const Model::RollbackClusterReleaseRequest &request);
                void RollbackClusterReleaseAsync(const Model::RollbackClusterReleaseRequest& request, const RollbackClusterReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackClusterReleaseOutcomeCallable RollbackClusterReleaseCallable(const Model::RollbackClusterReleaseRequest& request);

                /**
                 *初始化TMP实例，开启集成中心时调用
                 * @param req RunPrometheusInstanceRequest
                 * @return RunPrometheusInstanceOutcome
                 */
                RunPrometheusInstanceOutcome RunPrometheusInstance(const Model::RunPrometheusInstanceRequest &request);
                void RunPrometheusInstanceAsync(const Model::RunPrometheusInstanceRequest& request, const RunPrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunPrometheusInstanceOutcomeCallable RunPrometheusInstanceCallable(const Model::RunPrometheusInstanceRequest& request);

                /**
                 *缩容独立集群master节点，本功能为内测能力，使用之前请先提单联系我们。
                 * @param req ScaleInClusterMasterRequest
                 * @return ScaleInClusterMasterOutcome
                 */
                ScaleInClusterMasterOutcome ScaleInClusterMaster(const Model::ScaleInClusterMasterRequest &request);
                void ScaleInClusterMasterAsync(const Model::ScaleInClusterMasterRequest& request, const ScaleInClusterMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleInClusterMasterOutcomeCallable ScaleInClusterMasterCallable(const Model::ScaleInClusterMasterRequest& request);

                /**
                 *扩容独立集群master节点
                 * @param req ScaleOutClusterMasterRequest
                 * @return ScaleOutClusterMasterOutcome
                 */
                ScaleOutClusterMasterOutcome ScaleOutClusterMaster(const Model::ScaleOutClusterMasterRequest &request);
                void ScaleOutClusterMasterAsync(const Model::ScaleOutClusterMasterRequest& request, const ScaleOutClusterMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleOutClusterMasterOutcomeCallable ScaleOutClusterMasterCallable(const Model::ScaleOutClusterMasterRequest& request);

                /**
                 *仅能设置节点池中处于伸缩组的节点
                 * @param req SetNodePoolNodeProtectionRequest
                 * @return SetNodePoolNodeProtectionOutcome
                 */
                SetNodePoolNodeProtectionOutcome SetNodePoolNodeProtection(const Model::SetNodePoolNodeProtectionRequest &request);
                void SetNodePoolNodeProtectionAsync(const Model::SetNodePoolNodeProtectionRequest& request, const SetNodePoolNodeProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetNodePoolNodeProtectionOutcomeCallable SetNodePoolNodeProtectionCallable(const Model::SetNodePoolNodeProtectionRequest& request);

                /**
                 *切换集群网络访问链路为直连
                 * @param req SwitchClusterEndpointRequest
                 * @return SwitchClusterEndpointOutcome
                 */
                SwitchClusterEndpointOutcome SwitchClusterEndpoint(const Model::SwitchClusterEndpointRequest &request);
                void SwitchClusterEndpointAsync(const Model::SwitchClusterEndpointRequest& request, const SwitchClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchClusterEndpointOutcomeCallable SwitchClusterEndpointCallable(const Model::SwitchClusterEndpointRequest& request);

                /**
                 *同步模板到实例或者集群，针对V2版本实例
                 * @param req SyncPrometheusTempRequest
                 * @return SyncPrometheusTempOutcome
                 */
                SyncPrometheusTempOutcome SyncPrometheusTemp(const Model::SyncPrometheusTempRequest &request);
                void SyncPrometheusTempAsync(const Model::SyncPrometheusTempRequest& request, const SyncPrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncPrometheusTempOutcomeCallable SyncPrometheusTempCallable(const Model::SyncPrometheusTempRequest& request);

                /**
                 *同步模板到实例或者集群
                 * @param req SyncPrometheusTemplateRequest
                 * @return SyncPrometheusTemplateOutcome
                 */
                SyncPrometheusTemplateOutcome SyncPrometheusTemplate(const Model::SyncPrometheusTemplateRequest &request);
                void SyncPrometheusTemplateAsync(const Model::SyncPrometheusTemplateRequest& request, const SyncPrometheusTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncPrometheusTemplateOutcomeCallable SyncPrometheusTemplateCallable(const Model::SyncPrometheusTemplateRequest& request);

                /**
                 *在应用市场中集群删除某个应用
                 * @param req UninstallClusterReleaseRequest
                 * @return UninstallClusterReleaseOutcome
                 */
                UninstallClusterReleaseOutcome UninstallClusterRelease(const Model::UninstallClusterReleaseRequest &request);
                void UninstallClusterReleaseAsync(const Model::UninstallClusterReleaseRequest& request, const UninstallClusterReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UninstallClusterReleaseOutcomeCallable UninstallClusterReleaseCallable(const Model::UninstallClusterReleaseRequest& request);

                /**
                 *从tke@edge集群边缘节点上卸载日志采集组件
                 * @param req UninstallEdgeLogAgentRequest
                 * @return UninstallEdgeLogAgentOutcome
                 */
                UninstallEdgeLogAgentOutcome UninstallEdgeLogAgent(const Model::UninstallEdgeLogAgentRequest &request);
                void UninstallEdgeLogAgentAsync(const Model::UninstallEdgeLogAgentRequest& request, const UninstallEdgeLogAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UninstallEdgeLogAgentOutcomeCallable UninstallEdgeLogAgentCallable(const Model::UninstallEdgeLogAgentRequest& request);

                /**
                 *从TKE集群中卸载CLS日志采集组件
                 * @param req UninstallLogAgentRequest
                 * @return UninstallLogAgentOutcome
                 */
                UninstallLogAgentOutcome UninstallLogAgent(const Model::UninstallLogAgentRequest &request);
                void UninstallLogAgentAsync(const Model::UninstallLogAgentRequest& request, const UninstallLogAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UninstallLogAgentOutcomeCallable UninstallLogAgentCallable(const Model::UninstallLogAgentRequest& request);

                /**
                 *更新一个addon的参数和版本
                 * @param req UpdateAddonRequest
                 * @return UpdateAddonOutcome
                 */
                UpdateAddonOutcome UpdateAddon(const Model::UpdateAddonRequest &request);
                void UpdateAddonAsync(const Model::UpdateAddonRequest& request, const UpdateAddonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAddonOutcomeCallable UpdateAddonCallable(const Model::UpdateAddonRequest& request);

                /**
                 *对集群的Kubeconfig信息进行更新
                 * @param req UpdateClusterKubeconfigRequest
                 * @return UpdateClusterKubeconfigOutcome
                 */
                UpdateClusterKubeconfigOutcome UpdateClusterKubeconfig(const Model::UpdateClusterKubeconfigRequest &request);
                void UpdateClusterKubeconfigAsync(const Model::UpdateClusterKubeconfigRequest& request, const UpdateClusterKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateClusterKubeconfigOutcomeCallable UpdateClusterKubeconfigCallable(const Model::UpdateClusterKubeconfigRequest& request);

                /**
                 *升级集群 Master 组件到指定版本
                 * @param req UpdateClusterVersionRequest
                 * @return UpdateClusterVersionOutcome
                 */
                UpdateClusterVersionOutcome UpdateClusterVersion(const Model::UpdateClusterVersionRequest &request);
                void UpdateClusterVersionAsync(const Model::UpdateClusterVersionRequest& request, const UpdateClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateClusterVersionOutcomeCallable UpdateClusterVersionCallable(const Model::UpdateClusterVersionRequest& request);

                /**
                 *修改弹性集群名称等属性
                 * @param req UpdateEKSClusterRequest
                 * @return UpdateEKSClusterOutcome
                 */
                UpdateEKSClusterOutcome UpdateEKSCluster(const Model::UpdateEKSClusterRequest &request);
                void UpdateEKSClusterAsync(const Model::UpdateEKSClusterRequest& request, const UpdateEKSClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEKSClusterOutcomeCallable UpdateEKSClusterCallable(const Model::UpdateEKSClusterRequest& request);

                /**
                 *更新容器实例
                 * @param req UpdateEKSContainerInstanceRequest
                 * @return UpdateEKSContainerInstanceOutcome
                 */
                UpdateEKSContainerInstanceOutcome UpdateEKSContainerInstance(const Model::UpdateEKSContainerInstanceRequest &request);
                void UpdateEKSContainerInstanceAsync(const Model::UpdateEKSContainerInstanceRequest& request, const UpdateEKSContainerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEKSContainerInstanceOutcomeCallable UpdateEKSContainerInstanceCallable(const Model::UpdateEKSContainerInstanceRequest& request);

                /**
                 *升级边缘集群组件到指定版本，此版本为TKEEdge专用版本。
                 * @param req UpdateEdgeClusterVersionRequest
                 * @return UpdateEdgeClusterVersionOutcome
                 */
                UpdateEdgeClusterVersionOutcome UpdateEdgeClusterVersion(const Model::UpdateEdgeClusterVersionRequest &request);
                void UpdateEdgeClusterVersionAsync(const Model::UpdateEdgeClusterVersionRequest& request, const UpdateEdgeClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEdgeClusterVersionOutcomeCallable UpdateEdgeClusterVersionCallable(const Model::UpdateEdgeClusterVersionRequest& request);

                /**
                 *更新镜像缓存接口
                 * @param req UpdateImageCacheRequest
                 * @return UpdateImageCacheOutcome
                 */
                UpdateImageCacheOutcome UpdateImageCache(const Model::UpdateImageCacheRequest &request);
                void UpdateImageCacheAsync(const Model::UpdateImageCacheRequest& request, const UpdateImageCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateImageCacheOutcomeCallable UpdateImageCacheCallable(const Model::UpdateImageCacheRequest& request);

                /**
                 *修改边缘计算集群名称等属性
                 * @param req UpdateTKEEdgeClusterRequest
                 * @return UpdateTKEEdgeClusterOutcome
                 */
                UpdateTKEEdgeClusterOutcome UpdateTKEEdgeCluster(const Model::UpdateTKEEdgeClusterRequest &request);
                void UpdateTKEEdgeClusterAsync(const Model::UpdateTKEEdgeClusterRequest& request, const UpdateTKEEdgeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateTKEEdgeClusterOutcomeCallable UpdateTKEEdgeClusterCallable(const Model::UpdateTKEEdgeClusterRequest& request);

                /**
                 *给集群的一批work节点进行升级
                 * @param req UpgradeClusterInstancesRequest
                 * @return UpgradeClusterInstancesOutcome
                 */
                UpgradeClusterInstancesOutcome UpgradeClusterInstances(const Model::UpgradeClusterInstancesRequest &request);
                void UpgradeClusterInstancesAsync(const Model::UpgradeClusterInstancesRequest& request, const UpgradeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeClusterInstancesOutcomeCallable UpgradeClusterInstancesCallable(const Model::UpgradeClusterInstancesRequest& request);

                /**
                 *升级集群中已安装的应用
                 * @param req UpgradeClusterReleaseRequest
                 * @return UpgradeClusterReleaseOutcome
                 */
                UpgradeClusterReleaseOutcome UpgradeClusterRelease(const Model::UpgradeClusterReleaseRequest &request);
                void UpgradeClusterReleaseAsync(const Model::UpgradeClusterReleaseRequest& request, const UpgradeClusterReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeClusterReleaseOutcomeCallable UpgradeClusterReleaseCallable(const Model::UpgradeClusterReleaseRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_TKECLIENT_H_
