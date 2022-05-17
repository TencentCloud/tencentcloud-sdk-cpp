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
#include <tencentcloud/tke/v20180525/model/CheckInstancesUpgradeAbleRequest.h>
#include <tencentcloud/tke/v20180525/model/CheckInstancesUpgradeAbleResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterEndpointRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterEndpointResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterEndpointVipRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterEndpointVipResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterNodePoolFromExistingAsgRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterNodePoolFromExistingAsgResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRouteRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRouteResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRouteTableRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRouteTableResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateEKSClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateEKSClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateEKSContainerInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateEKSContainerInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateImageCacheRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateImageCacheResponse.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusAlertPolicyRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusAlertPolicyResponse.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusAlertRuleRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusAlertRuleResponse.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusDashboardRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusDashboardResponse.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusTempRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusTempResponse.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusTemplateRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusTemplateResponse.h>
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
#include <tencentcloud/tke/v20180525/model/DeleteClusterNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteTableRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteTableResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteEKSClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteEKSClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteEKSContainerInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteEKSContainerInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteImageCachesRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteImageCachesResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusAlertPolicyRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusAlertPolicyResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusAlertRuleRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusAlertRuleResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTempRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTempResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTempSyncRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTempSyncResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTemplateRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTemplateResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTemplateSyncRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusTemplateSyncResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeAvailableClusterVersionRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeAvailableClusterVersionResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAsGroupOptionRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAsGroupOptionResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAsGroupsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAsGroupsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAuthenticationOptionsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAuthenticationOptionsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterCommonNamesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterCommonNamesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterControllersRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterControllersResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointVipStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointVipStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterKubeconfigRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterKubeconfigResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterLevelAttributeRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterLevelAttributeResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterLevelChangeRecordsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterLevelChangeRecordsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterNodePoolDetailRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterNodePoolDetailResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterNodePoolsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterNodePoolsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRouteTablesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRouteTablesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRoutesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRoutesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterSecurityRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterSecurityResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClustersRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClustersResponse.h>
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
#include <tencentcloud/tke/v20180525/model/DescribeEksContainerInstanceLogRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEksContainerInstanceLogResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEnableVpcCniProgressRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEnableVpcCniProgressResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeExistedInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeExistedInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeExternalClusterSpecRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeExternalClusterSpecResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeImageCachesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeImageCachesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeImagesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeImagesResponse.h>
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
#include <tencentcloud/tke/v20180525/model/DescribePrometheusInstanceRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusInstanceResponse.h>
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
#include <tencentcloud/tke/v20180525/model/DescribeRegionsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeRegionsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeResourceUsageRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeResourceUsageResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeRouteTableConflictsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeRouteTableConflictsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeScriptRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeScriptResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeVersionsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeVersionsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeVpcCniPodLimitsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeVpcCniPodLimitsResponse.h>
#include <tencentcloud/tke/v20180525/model/DisableClusterAuditRequest.h>
#include <tencentcloud/tke/v20180525/model/DisableClusterAuditResponse.h>
#include <tencentcloud/tke/v20180525/model/DisableClusterDeletionProtectionRequest.h>
#include <tencentcloud/tke/v20180525/model/DisableClusterDeletionProtectionResponse.h>
#include <tencentcloud/tke/v20180525/model/DisableEventPersistenceRequest.h>
#include <tencentcloud/tke/v20180525/model/DisableEventPersistenceResponse.h>
#include <tencentcloud/tke/v20180525/model/DisableVpcCniNetworkTypeRequest.h>
#include <tencentcloud/tke/v20180525/model/DisableVpcCniNetworkTypeResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableClusterAuditRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableClusterAuditResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableClusterDeletionProtectionRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableClusterDeletionProtectionResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableEventPersistenceRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableEventPersistenceResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableVpcCniNetworkTypeRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableVpcCniNetworkTypeResponse.h>
#include <tencentcloud/tke/v20180525/model/ForwardApplicationRequestV3Request.h>
#include <tencentcloud/tke/v20180525/model/ForwardApplicationRequestV3Response.h>
#include <tencentcloud/tke/v20180525/model/GetClusterLevelPriceRequest.h>
#include <tencentcloud/tke/v20180525/model/GetClusterLevelPriceResponse.h>
#include <tencentcloud/tke/v20180525/model/GetMostSuitableImageCacheRequest.h>
#include <tencentcloud/tke/v20180525/model/GetMostSuitableImageCacheResponse.h>
#include <tencentcloud/tke/v20180525/model/GetTkeAppChartListRequest.h>
#include <tencentcloud/tke/v20180525/model/GetTkeAppChartListResponse.h>
#include <tencentcloud/tke/v20180525/model/GetUpgradeInstanceProgressRequest.h>
#include <tencentcloud/tke/v20180525/model/GetUpgradeInstanceProgressResponse.h>
#include <tencentcloud/tke/v20180525/model/InstallLogAgentRequest.h>
#include <tencentcloud/tke/v20180525/model/InstallLogAgentResponse.h>
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
#include <tencentcloud/tke/v20180525/model/ModifyClusterNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyNodePoolDesiredCapacityAboutAsgRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyNodePoolDesiredCapacityAboutAsgResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyNodePoolInstanceTypesRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyNodePoolInstanceTypesResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusAlertPolicyRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusAlertPolicyResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusAlertRuleRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusAlertRuleResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusTemplateRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusTemplateResponse.h>
#include <tencentcloud/tke/v20180525/model/RemoveNodeFromNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/RemoveNodeFromNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/RestartEKSContainerInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/RestartEKSContainerInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/ScaleInClusterMasterRequest.h>
#include <tencentcloud/tke/v20180525/model/ScaleInClusterMasterResponse.h>
#include <tencentcloud/tke/v20180525/model/ScaleOutClusterMasterRequest.h>
#include <tencentcloud/tke/v20180525/model/ScaleOutClusterMasterResponse.h>
#include <tencentcloud/tke/v20180525/model/SetNodePoolNodeProtectionRequest.h>
#include <tencentcloud/tke/v20180525/model/SetNodePoolNodeProtectionResponse.h>
#include <tencentcloud/tke/v20180525/model/SyncPrometheusTempRequest.h>
#include <tencentcloud/tke/v20180525/model/SyncPrometheusTempResponse.h>
#include <tencentcloud/tke/v20180525/model/SyncPrometheusTemplateRequest.h>
#include <tencentcloud/tke/v20180525/model/SyncPrometheusTemplateResponse.h>
#include <tencentcloud/tke/v20180525/model/UninstallLogAgentRequest.h>
#include <tencentcloud/tke/v20180525/model/UninstallLogAgentResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateClusterVersionRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateClusterVersionResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateEKSClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateEKSClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateEKSContainerInstanceRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateEKSContainerInstanceResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateImageCacheRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateImageCacheResponse.h>
#include <tencentcloud/tke/v20180525/model/UpgradeClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/UpgradeClusterInstancesResponse.h>


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
                typedef Outcome<Core::Error, Model::CheckInstancesUpgradeAbleResponse> CheckInstancesUpgradeAbleOutcome;
                typedef std::future<CheckInstancesUpgradeAbleOutcome> CheckInstancesUpgradeAbleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CheckInstancesUpgradeAbleRequest&, CheckInstancesUpgradeAbleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckInstancesUpgradeAbleAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateClusterNodePoolResponse> CreateClusterNodePoolOutcome;
                typedef std::future<CreateClusterNodePoolOutcome> CreateClusterNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterNodePoolRequest&, CreateClusterNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterNodePoolFromExistingAsgResponse> CreateClusterNodePoolFromExistingAsgOutcome;
                typedef std::future<CreateClusterNodePoolFromExistingAsgOutcome> CreateClusterNodePoolFromExistingAsgOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterNodePoolFromExistingAsgRequest&, CreateClusterNodePoolFromExistingAsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterNodePoolFromExistingAsgAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterRouteResponse> CreateClusterRouteOutcome;
                typedef std::future<CreateClusterRouteOutcome> CreateClusterRouteOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterRouteRequest&, CreateClusterRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterRouteTableResponse> CreateClusterRouteTableOutcome;
                typedef std::future<CreateClusterRouteTableOutcome> CreateClusterRouteTableOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterRouteTableRequest&, CreateClusterRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterRouteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEKSClusterResponse> CreateEKSClusterOutcome;
                typedef std::future<CreateEKSClusterOutcome> CreateEKSClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateEKSClusterRequest&, CreateEKSClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEKSClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEKSContainerInstancesResponse> CreateEKSContainerInstancesOutcome;
                typedef std::future<CreateEKSContainerInstancesOutcome> CreateEKSContainerInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateEKSContainerInstancesRequest&, CreateEKSContainerInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEKSContainerInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageCacheResponse> CreateImageCacheOutcome;
                typedef std::future<CreateImageCacheOutcome> CreateImageCacheOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateImageCacheRequest&, CreateImageCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusAlertPolicyResponse> CreatePrometheusAlertPolicyOutcome;
                typedef std::future<CreatePrometheusAlertPolicyOutcome> CreatePrometheusAlertPolicyOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusAlertPolicyRequest&, CreatePrometheusAlertPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusAlertPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusAlertRuleResponse> CreatePrometheusAlertRuleOutcome;
                typedef std::future<CreatePrometheusAlertRuleOutcome> CreatePrometheusAlertRuleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusAlertRuleRequest&, CreatePrometheusAlertRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusAlertRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusDashboardResponse> CreatePrometheusDashboardOutcome;
                typedef std::future<CreatePrometheusDashboardOutcome> CreatePrometheusDashboardOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusDashboardRequest&, CreatePrometheusDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusDashboardAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusTempResponse> CreatePrometheusTempOutcome;
                typedef std::future<CreatePrometheusTempOutcome> CreatePrometheusTempOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusTempRequest&, CreatePrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusTemplateResponse> CreatePrometheusTemplateOutcome;
                typedef std::future<CreatePrometheusTemplateOutcome> CreatePrometheusTemplateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusTemplateRequest&, CreatePrometheusTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusTemplateAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteClusterNodePoolResponse> DeleteClusterNodePoolOutcome;
                typedef std::future<DeleteClusterNodePoolOutcome> DeleteClusterNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterNodePoolRequest&, DeleteClusterNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterRouteResponse> DeleteClusterRouteOutcome;
                typedef std::future<DeleteClusterRouteOutcome> DeleteClusterRouteOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterRouteRequest&, DeleteClusterRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterRouteTableResponse> DeleteClusterRouteTableOutcome;
                typedef std::future<DeleteClusterRouteTableOutcome> DeleteClusterRouteTableOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterRouteTableRequest&, DeleteClusterRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterRouteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEKSClusterResponse> DeleteEKSClusterOutcome;
                typedef std::future<DeleteEKSClusterOutcome> DeleteEKSClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteEKSClusterRequest&, DeleteEKSClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEKSClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEKSContainerInstancesResponse> DeleteEKSContainerInstancesOutcome;
                typedef std::future<DeleteEKSContainerInstancesOutcome> DeleteEKSContainerInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteEKSContainerInstancesRequest&, DeleteEKSContainerInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEKSContainerInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageCachesResponse> DeleteImageCachesOutcome;
                typedef std::future<DeleteImageCachesOutcome> DeleteImageCachesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteImageCachesRequest&, DeleteImageCachesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageCachesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusAlertPolicyResponse> DeletePrometheusAlertPolicyOutcome;
                typedef std::future<DeletePrometheusAlertPolicyOutcome> DeletePrometheusAlertPolicyOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeletePrometheusAlertPolicyRequest&, DeletePrometheusAlertPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusAlertPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusAlertRuleResponse> DeletePrometheusAlertRuleOutcome;
                typedef std::future<DeletePrometheusAlertRuleOutcome> DeletePrometheusAlertRuleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeletePrometheusAlertRuleRequest&, DeletePrometheusAlertRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusAlertRuleAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeAvailableClusterVersionResponse> DescribeAvailableClusterVersionOutcome;
                typedef std::future<DescribeAvailableClusterVersionOutcome> DescribeAvailableClusterVersionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeAvailableClusterVersionRequest&, DescribeAvailableClusterVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableClusterVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAsGroupOptionResponse> DescribeClusterAsGroupOptionOutcome;
                typedef std::future<DescribeClusterAsGroupOptionOutcome> DescribeClusterAsGroupOptionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterAsGroupOptionRequest&, DescribeClusterAsGroupOptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAsGroupOptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAsGroupsResponse> DescribeClusterAsGroupsOutcome;
                typedef std::future<DescribeClusterAsGroupsOutcome> DescribeClusterAsGroupsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterAsGroupsRequest&, DescribeClusterAsGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAsGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAuthenticationOptionsResponse> DescribeClusterAuthenticationOptionsOutcome;
                typedef std::future<DescribeClusterAuthenticationOptionsOutcome> DescribeClusterAuthenticationOptionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterAuthenticationOptionsRequest&, DescribeClusterAuthenticationOptionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAuthenticationOptionsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeClusterNodePoolDetailResponse> DescribeClusterNodePoolDetailOutcome;
                typedef std::future<DescribeClusterNodePoolDetailOutcome> DescribeClusterNodePoolDetailOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterNodePoolDetailRequest&, DescribeClusterNodePoolDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodePoolDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterNodePoolsResponse> DescribeClusterNodePoolsOutcome;
                typedef std::future<DescribeClusterNodePoolsOutcome> DescribeClusterNodePoolsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterNodePoolsRequest&, DescribeClusterNodePoolsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodePoolsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterRouteTablesResponse> DescribeClusterRouteTablesOutcome;
                typedef std::future<DescribeClusterRouteTablesOutcome> DescribeClusterRouteTablesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterRouteTablesRequest&, DescribeClusterRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterRouteTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterRoutesResponse> DescribeClusterRoutesOutcome;
                typedef std::future<DescribeClusterRoutesOutcome> DescribeClusterRoutesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterRoutesRequest&, DescribeClusterRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterSecurityResponse> DescribeClusterSecurityOutcome;
                typedef std::future<DescribeClusterSecurityOutcome> DescribeClusterSecurityOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterSecurityRequest&, DescribeClusterSecurityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterSecurityAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterStatusResponse> DescribeClusterStatusOutcome;
                typedef std::future<DescribeClusterStatusOutcome> DescribeClusterStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterStatusRequest&, DescribeClusterStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeEksContainerInstanceLogResponse> DescribeEksContainerInstanceLogOutcome;
                typedef std::future<DescribeEksContainerInstanceLogOutcome> DescribeEksContainerInstanceLogOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEksContainerInstanceLogRequest&, DescribeEksContainerInstanceLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEksContainerInstanceLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnableVpcCniProgressResponse> DescribeEnableVpcCniProgressOutcome;
                typedef std::future<DescribeEnableVpcCniProgressOutcome> DescribeEnableVpcCniProgressOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEnableVpcCniProgressRequest&, DescribeEnableVpcCniProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnableVpcCniProgressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExistedInstancesResponse> DescribeExistedInstancesOutcome;
                typedef std::future<DescribeExistedInstancesOutcome> DescribeExistedInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeExistedInstancesRequest&, DescribeExistedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExistedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExternalClusterSpecResponse> DescribeExternalClusterSpecOutcome;
                typedef std::future<DescribeExternalClusterSpecOutcome> DescribeExternalClusterSpecOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeExternalClusterSpecRequest&, DescribeExternalClusterSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExternalClusterSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageCachesResponse> DescribeImageCachesOutcome;
                typedef std::future<DescribeImageCachesOutcome> DescribeImageCachesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeImageCachesRequest&, DescribeImageCachesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageCachesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImagesResponse> DescribeImagesOutcome;
                typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeImagesRequest&, DescribeImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribePrometheusInstanceResponse> DescribePrometheusInstanceOutcome;
                typedef std::future<DescribePrometheusInstanceOutcome> DescribePrometheusInstanceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusInstanceRequest&, DescribePrometheusInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusInstanceAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceUsageResponse> DescribeResourceUsageOutcome;
                typedef std::future<DescribeResourceUsageOutcome> DescribeResourceUsageOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeResourceUsageRequest&, DescribeResourceUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRouteTableConflictsResponse> DescribeRouteTableConflictsOutcome;
                typedef std::future<DescribeRouteTableConflictsOutcome> DescribeRouteTableConflictsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeRouteTableConflictsRequest&, DescribeRouteTableConflictsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTableConflictsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTKEEdgeScriptResponse> DescribeTKEEdgeScriptOutcome;
                typedef std::future<DescribeTKEEdgeScriptOutcome> DescribeTKEEdgeScriptOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeTKEEdgeScriptRequest&, DescribeTKEEdgeScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTKEEdgeScriptAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DisableEventPersistenceResponse> DisableEventPersistenceOutcome;
                typedef std::future<DisableEventPersistenceOutcome> DisableEventPersistenceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DisableEventPersistenceRequest&, DisableEventPersistenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableEventPersistenceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableVpcCniNetworkTypeResponse> DisableVpcCniNetworkTypeOutcome;
                typedef std::future<DisableVpcCniNetworkTypeOutcome> DisableVpcCniNetworkTypeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DisableVpcCniNetworkTypeRequest&, DisableVpcCniNetworkTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableVpcCniNetworkTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableClusterAuditResponse> EnableClusterAuditOutcome;
                typedef std::future<EnableClusterAuditOutcome> EnableClusterAuditOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableClusterAuditRequest&, EnableClusterAuditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableClusterAuditAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableClusterDeletionProtectionResponse> EnableClusterDeletionProtectionOutcome;
                typedef std::future<EnableClusterDeletionProtectionOutcome> EnableClusterDeletionProtectionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableClusterDeletionProtectionRequest&, EnableClusterDeletionProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableClusterDeletionProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableEventPersistenceResponse> EnableEventPersistenceOutcome;
                typedef std::future<EnableEventPersistenceOutcome> EnableEventPersistenceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableEventPersistenceRequest&, EnableEventPersistenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableEventPersistenceAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableVpcCniNetworkTypeResponse> EnableVpcCniNetworkTypeOutcome;
                typedef std::future<EnableVpcCniNetworkTypeOutcome> EnableVpcCniNetworkTypeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableVpcCniNetworkTypeRequest&, EnableVpcCniNetworkTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableVpcCniNetworkTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ForwardApplicationRequestV3Response> ForwardApplicationRequestV3Outcome;
                typedef std::future<ForwardApplicationRequestV3Outcome> ForwardApplicationRequestV3OutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ForwardApplicationRequestV3Request&, ForwardApplicationRequestV3Outcome, const std::shared_ptr<const AsyncCallerContext>&)> ForwardApplicationRequestV3AsyncHandler;
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
                typedef Outcome<Core::Error, Model::InstallLogAgentResponse> InstallLogAgentOutcome;
                typedef std::future<InstallLogAgentOutcome> InstallLogAgentOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::InstallLogAgentRequest&, InstallLogAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallLogAgentAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyClusterNodePoolResponse> ModifyClusterNodePoolOutcome;
                typedef std::future<ModifyClusterNodePoolOutcome> ModifyClusterNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterNodePoolRequest&, ModifyClusterNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNodePoolDesiredCapacityAboutAsgResponse> ModifyNodePoolDesiredCapacityAboutAsgOutcome;
                typedef std::future<ModifyNodePoolDesiredCapacityAboutAsgOutcome> ModifyNodePoolDesiredCapacityAboutAsgOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyNodePoolDesiredCapacityAboutAsgRequest&, ModifyNodePoolDesiredCapacityAboutAsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodePoolDesiredCapacityAboutAsgAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNodePoolInstanceTypesResponse> ModifyNodePoolInstanceTypesOutcome;
                typedef std::future<ModifyNodePoolInstanceTypesOutcome> ModifyNodePoolInstanceTypesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyNodePoolInstanceTypesRequest&, ModifyNodePoolInstanceTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodePoolInstanceTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusAlertPolicyResponse> ModifyPrometheusAlertPolicyOutcome;
                typedef std::future<ModifyPrometheusAlertPolicyOutcome> ModifyPrometheusAlertPolicyOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyPrometheusAlertPolicyRequest&, ModifyPrometheusAlertPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusAlertPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusAlertRuleResponse> ModifyPrometheusAlertRuleOutcome;
                typedef std::future<ModifyPrometheusAlertRuleOutcome> ModifyPrometheusAlertRuleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyPrometheusAlertRuleRequest&, ModifyPrometheusAlertRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusAlertRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusTemplateResponse> ModifyPrometheusTemplateOutcome;
                typedef std::future<ModifyPrometheusTemplateOutcome> ModifyPrometheusTemplateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyPrometheusTemplateRequest&, ModifyPrometheusTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveNodeFromNodePoolResponse> RemoveNodeFromNodePoolOutcome;
                typedef std::future<RemoveNodeFromNodePoolOutcome> RemoveNodeFromNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::RemoveNodeFromNodePoolRequest&, RemoveNodeFromNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveNodeFromNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartEKSContainerInstancesResponse> RestartEKSContainerInstancesOutcome;
                typedef std::future<RestartEKSContainerInstancesOutcome> RestartEKSContainerInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::RestartEKSContainerInstancesRequest&, RestartEKSContainerInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartEKSContainerInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleInClusterMasterResponse> ScaleInClusterMasterOutcome;
                typedef std::future<ScaleInClusterMasterOutcome> ScaleInClusterMasterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ScaleInClusterMasterRequest&, ScaleInClusterMasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleInClusterMasterAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleOutClusterMasterResponse> ScaleOutClusterMasterOutcome;
                typedef std::future<ScaleOutClusterMasterOutcome> ScaleOutClusterMasterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ScaleOutClusterMasterRequest&, ScaleOutClusterMasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutClusterMasterAsyncHandler;
                typedef Outcome<Core::Error, Model::SetNodePoolNodeProtectionResponse> SetNodePoolNodeProtectionOutcome;
                typedef std::future<SetNodePoolNodeProtectionOutcome> SetNodePoolNodeProtectionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::SetNodePoolNodeProtectionRequest&, SetNodePoolNodeProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetNodePoolNodeProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncPrometheusTempResponse> SyncPrometheusTempOutcome;
                typedef std::future<SyncPrometheusTempOutcome> SyncPrometheusTempOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::SyncPrometheusTempRequest&, SyncPrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncPrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncPrometheusTemplateResponse> SyncPrometheusTemplateOutcome;
                typedef std::future<SyncPrometheusTemplateOutcome> SyncPrometheusTemplateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::SyncPrometheusTemplateRequest&, SyncPrometheusTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncPrometheusTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::UninstallLogAgentResponse> UninstallLogAgentOutcome;
                typedef std::future<UninstallLogAgentOutcome> UninstallLogAgentOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UninstallLogAgentRequest&, UninstallLogAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UninstallLogAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateClusterVersionResponse> UpdateClusterVersionOutcome;
                typedef std::future<UpdateClusterVersionOutcome> UpdateClusterVersionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateClusterVersionRequest&, UpdateClusterVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEKSClusterResponse> UpdateEKSClusterOutcome;
                typedef std::future<UpdateEKSClusterOutcome> UpdateEKSClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateEKSClusterRequest&, UpdateEKSClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEKSClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEKSContainerInstanceResponse> UpdateEKSContainerInstanceOutcome;
                typedef std::future<UpdateEKSContainerInstanceOutcome> UpdateEKSContainerInstanceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateEKSContainerInstanceRequest&, UpdateEKSContainerInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEKSContainerInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateImageCacheResponse> UpdateImageCacheOutcome;
                typedef std::future<UpdateImageCacheOutcome> UpdateImageCacheOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateImageCacheRequest&, UpdateImageCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateImageCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeClusterInstancesResponse> UpgradeClusterInstancesOutcome;
                typedef std::future<UpgradeClusterInstancesOutcome> UpgradeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpgradeClusterInstancesRequest&, UpgradeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeClusterInstancesAsyncHandler;



                /**
                 *通过此接口，可以获取集群的tke:admin的ClusterRole，即管理员角色，可以用于CAM侧高权限的用户，通过CAM策略给予子账户此接口权限，进而可以通过此接口直接获取到kubernetes集群内的管理员角色。
                 * @param req AcquireClusterAdminRoleRequest
                 * @return AcquireClusterAdminRoleOutcome
                 */
                AcquireClusterAdminRoleOutcome AcquireClusterAdminRole(const Model::AcquireClusterAdminRoleRequest &request);
                void AcquireClusterAdminRoleAsync(const Model::AcquireClusterAdminRoleRequest& request, const AcquireClusterAdminRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcquireClusterAdminRoleOutcomeCallable AcquireClusterAdminRoleCallable(const Model::AcquireClusterAdminRoleRequest& request);

                /**
                 *给GR集群增加可用的ClusterCIDR
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
                 *检查给定节点列表中哪些是可升级的 
                 * @param req CheckInstancesUpgradeAbleRequest
                 * @return CheckInstancesUpgradeAbleOutcome
                 */
                CheckInstancesUpgradeAbleOutcome CheckInstancesUpgradeAble(const Model::CheckInstancesUpgradeAbleRequest &request);
                void CheckInstancesUpgradeAbleAsync(const Model::CheckInstancesUpgradeAbleRequest& request, const CheckInstancesUpgradeAbleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckInstancesUpgradeAbleOutcomeCallable CheckInstancesUpgradeAbleCallable(const Model::CheckInstancesUpgradeAbleRequest& request);

                /**
                 *创建集群
                 * @param req CreateClusterRequest
                 * @return CreateClusterOutcome
                 */
                CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest &request);
                void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request);

                /**
                 *创建集群访问端口(独立集群开启内网/外网访问，托管集群支持开启内网访问)
                 * @param req CreateClusterEndpointRequest
                 * @return CreateClusterEndpointOutcome
                 */
                CreateClusterEndpointOutcome CreateClusterEndpoint(const Model::CreateClusterEndpointRequest &request);
                void CreateClusterEndpointAsync(const Model::CreateClusterEndpointRequest& request, const CreateClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterEndpointOutcomeCallable CreateClusterEndpointCallable(const Model::CreateClusterEndpointRequest& request);

                /**
                 *创建托管集群外网访问端口（老的方式，仅支持托管集群外网端口）
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
                 *创建节点池
                 * @param req CreateClusterNodePoolRequest
                 * @return CreateClusterNodePoolOutcome
                 */
                CreateClusterNodePoolOutcome CreateClusterNodePool(const Model::CreateClusterNodePoolRequest &request);
                void CreateClusterNodePoolAsync(const Model::CreateClusterNodePoolRequest& request, const CreateClusterNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterNodePoolOutcomeCallable CreateClusterNodePoolCallable(const Model::CreateClusterNodePoolRequest& request);

                /**
                 *从伸缩组创建节点池
                 * @param req CreateClusterNodePoolFromExistingAsgRequest
                 * @return CreateClusterNodePoolFromExistingAsgOutcome
                 */
                CreateClusterNodePoolFromExistingAsgOutcome CreateClusterNodePoolFromExistingAsg(const Model::CreateClusterNodePoolFromExistingAsgRequest &request);
                void CreateClusterNodePoolFromExistingAsgAsync(const Model::CreateClusterNodePoolFromExistingAsgRequest& request, const CreateClusterNodePoolFromExistingAsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterNodePoolFromExistingAsgOutcomeCallable CreateClusterNodePoolFromExistingAsgCallable(const Model::CreateClusterNodePoolFromExistingAsgRequest& request);

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
                 *创建grafana监控面板
                 * @param req CreatePrometheusDashboardRequest
                 * @return CreatePrometheusDashboardOutcome
                 */
                CreatePrometheusDashboardOutcome CreatePrometheusDashboard(const Model::CreatePrometheusDashboardRequest &request);
                void CreatePrometheusDashboardAsync(const Model::CreatePrometheusDashboardRequest& request, const CreatePrometheusDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusDashboardOutcomeCallable CreatePrometheusDashboardCallable(const Model::CreatePrometheusDashboardRequest& request);

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
                 *删除集群访问端口(独立集群开启内网/外网访问，托管集群支持开启内网访问)
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
                 *批量删除镜像缓存
                 * @param req DeleteImageCachesRequest
                 * @return DeleteImageCachesOutcome
                 */
                DeleteImageCachesOutcome DeleteImageCaches(const Model::DeleteImageCachesRequest &request);
                void DeleteImageCachesAsync(const Model::DeleteImageCachesRequest& request, const DeleteImageCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageCachesOutcomeCallable DeleteImageCachesCallable(const Model::DeleteImageCachesRequest& request);

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
                 *获取集群可以升级的所有版本
                 * @param req DescribeAvailableClusterVersionRequest
                 * @return DescribeAvailableClusterVersionOutcome
                 */
                DescribeAvailableClusterVersionOutcome DescribeAvailableClusterVersion(const Model::DescribeAvailableClusterVersionRequest &request);
                void DescribeAvailableClusterVersionAsync(const Model::DescribeAvailableClusterVersionRequest& request, const DescribeAvailableClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableClusterVersionOutcomeCallable DescribeAvailableClusterVersionCallable(const Model::DescribeAvailableClusterVersionRequest& request);

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
                 * 查询集群下节点实例信息 
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
                 *查询集群列表
                 * @param req DescribeClustersRequest
                 * @return DescribeClustersOutcome
                 */
                DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest &request);
                void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request);

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
                 *查询已经存在的节点，判断是否可以加入集群
                 * @param req DescribeExistedInstancesRequest
                 * @return DescribeExistedInstancesOutcome
                 */
                DescribeExistedInstancesOutcome DescribeExistedInstances(const Model::DescribeExistedInstancesRequest &request);
                void DescribeExistedInstancesAsync(const Model::DescribeExistedInstancesRequest& request, const DescribeExistedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExistedInstancesOutcomeCallable DescribeExistedInstancesCallable(const Model::DescribeExistedInstancesRequest& request);

                /**
                 *获取导入第三方集群YAML定义
                 * @param req DescribeExternalClusterSpecRequest
                 * @return DescribeExternalClusterSpecOutcome
                 */
                DescribeExternalClusterSpecOutcome DescribeExternalClusterSpec(const Model::DescribeExternalClusterSpecRequest &request);
                void DescribeExternalClusterSpecAsync(const Model::DescribeExternalClusterSpecRequest& request, const DescribeExternalClusterSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExternalClusterSpecOutcomeCallable DescribeExternalClusterSpecCallable(const Model::DescribeExternalClusterSpecRequest& request);

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
                 *获取2.0实例关联集群列表
                 * @param req DescribePrometheusClusterAgentsRequest
                 * @return DescribePrometheusClusterAgentsOutcome
                 */
                DescribePrometheusClusterAgentsOutcome DescribePrometheusClusterAgents(const Model::DescribePrometheusClusterAgentsRequest &request);
                void DescribePrometheusClusterAgentsAsync(const Model::DescribePrometheusClusterAgentsRequest& request, const DescribePrometheusClusterAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusClusterAgentsOutcomeCallable DescribePrometheusClusterAgentsCallable(const Model::DescribePrometheusClusterAgentsRequest& request);

                /**
                 *获取实例详细信息
                 * @param req DescribePrometheusInstanceRequest
                 * @return DescribePrometheusInstanceOutcome
                 */
                DescribePrometheusInstanceOutcome DescribePrometheusInstance(const Model::DescribePrometheusInstanceRequest &request);
                void DescribePrometheusInstanceAsync(const Model::DescribePrometheusInstanceRequest& request, const DescribePrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusInstanceOutcomeCallable DescribePrometheusInstanceCallable(const Model::DescribePrometheusInstanceRequest& request);

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
                 *获取容器服务支持的所有地域
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *获取集群资源使用量
                 * @param req DescribeResourceUsageRequest
                 * @return DescribeResourceUsageOutcome
                 */
                DescribeResourceUsageOutcome DescribeResourceUsage(const Model::DescribeResourceUsageRequest &request);
                void DescribeResourceUsageAsync(const Model::DescribeResourceUsageRequest& request, const DescribeResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceUsageOutcomeCallable DescribeResourceUsageCallable(const Model::DescribeResourceUsageRequest& request);

                /**
                 *查询路由表冲突列表
                 * @param req DescribeRouteTableConflictsRequest
                 * @return DescribeRouteTableConflictsOutcome
                 */
                DescribeRouteTableConflictsOutcome DescribeRouteTableConflicts(const Model::DescribeRouteTableConflictsRequest &request);
                void DescribeRouteTableConflictsAsync(const Model::DescribeRouteTableConflictsRequest& request, const DescribeRouteTableConflictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteTableConflictsOutcomeCallable DescribeRouteTableConflictsCallable(const Model::DescribeRouteTableConflictsRequest& request);

                /**
                 *获取边缘脚本链接
                 * @param req DescribeTKEEdgeScriptRequest
                 * @return DescribeTKEEdgeScriptOutcome
                 */
                DescribeTKEEdgeScriptOutcome DescribeTKEEdgeScript(const Model::DescribeTKEEdgeScriptRequest &request);
                void DescribeTKEEdgeScriptAsync(const Model::DescribeTKEEdgeScriptRequest& request, const DescribeTKEEdgeScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTKEEdgeScriptOutcomeCallable DescribeTKEEdgeScriptCallable(const Model::DescribeTKEEdgeScriptRequest& request);

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
                 *开启事件持久化功能
                 * @param req EnableEventPersistenceRequest
                 * @return EnableEventPersistenceOutcome
                 */
                EnableEventPersistenceOutcome EnableEventPersistence(const Model::EnableEventPersistenceRequest &request);
                void EnableEventPersistenceAsync(const Model::EnableEventPersistenceRequest& request, const EnableEventPersistenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableEventPersistenceOutcomeCallable EnableEventPersistenceCallable(const Model::EnableEventPersistenceRequest& request);

                /**
                 *GR集群可以通过本接口附加vpc-cni容器网络插件，开启vpc-cni容器网络能力
                 * @param req EnableVpcCniNetworkTypeRequest
                 * @return EnableVpcCniNetworkTypeOutcome
                 */
                EnableVpcCniNetworkTypeOutcome EnableVpcCniNetworkType(const Model::EnableVpcCniNetworkTypeRequest &request);
                void EnableVpcCniNetworkTypeAsync(const Model::EnableVpcCniNetworkTypeRequest& request, const EnableVpcCniNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableVpcCniNetworkTypeOutcomeCallable EnableVpcCniNetworkTypeCallable(const Model::EnableVpcCniNetworkTypeRequest& request);

                /**
                 *操作TKE集群的addon
                 * @param req ForwardApplicationRequestV3Request
                 * @return ForwardApplicationRequestV3Outcome
                 */
                ForwardApplicationRequestV3Outcome ForwardApplicationRequestV3(const Model::ForwardApplicationRequestV3Request &request);
                void ForwardApplicationRequestV3Async(const Model::ForwardApplicationRequestV3Request& request, const ForwardApplicationRequestV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForwardApplicationRequestV3OutcomeCallable ForwardApplicationRequestV3Callable(const Model::ForwardApplicationRequestV3Request& request);

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
                 *获得节点升级当前的进度 
                 * @param req GetUpgradeInstanceProgressRequest
                 * @return GetUpgradeInstanceProgressOutcome
                 */
                GetUpgradeInstanceProgressOutcome GetUpgradeInstanceProgress(const Model::GetUpgradeInstanceProgressRequest &request);
                void GetUpgradeInstanceProgressAsync(const Model::GetUpgradeInstanceProgressRequest& request, const GetUpgradeInstanceProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUpgradeInstanceProgressOutcomeCallable GetUpgradeInstanceProgressCallable(const Model::GetUpgradeInstanceProgressRequest& request);

                /**
                 *在TKE集群中安装CLS日志采集组件
                 * @param req InstallLogAgentRequest
                 * @return InstallLogAgentOutcome
                 */
                InstallLogAgentOutcome InstallLogAgent(const Model::InstallLogAgentRequest &request);
                void InstallLogAgentAsync(const Model::InstallLogAgentRequest& request, const InstallLogAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallLogAgentOutcomeCallable InstallLogAgentCallable(const Model::InstallLogAgentRequest& request);

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
                 *修改集群属性
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
                 *编辑节点池
                 * @param req ModifyClusterNodePoolRequest
                 * @return ModifyClusterNodePoolOutcome
                 */
                ModifyClusterNodePoolOutcome ModifyClusterNodePool(const Model::ModifyClusterNodePoolRequest &request);
                void ModifyClusterNodePoolAsync(const Model::ModifyClusterNodePoolRequest& request, const ModifyClusterNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterNodePoolOutcomeCallable ModifyClusterNodePoolCallable(const Model::ModifyClusterNodePoolRequest& request);

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
                 *修改模板内容
                 * @param req ModifyPrometheusTemplateRequest
                 * @return ModifyPrometheusTemplateOutcome
                 */
                ModifyPrometheusTemplateOutcome ModifyPrometheusTemplate(const Model::ModifyPrometheusTemplateRequest &request);
                void ModifyPrometheusTemplateAsync(const Model::ModifyPrometheusTemplateRequest& request, const ModifyPrometheusTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusTemplateOutcomeCallable ModifyPrometheusTemplateCallable(const Model::ModifyPrometheusTemplateRequest& request);

                /**
                 *移出节点池节点，但保留在集群内
                 * @param req RemoveNodeFromNodePoolRequest
                 * @return RemoveNodeFromNodePoolOutcome
                 */
                RemoveNodeFromNodePoolOutcome RemoveNodeFromNodePool(const Model::RemoveNodeFromNodePoolRequest &request);
                void RemoveNodeFromNodePoolAsync(const Model::RemoveNodeFromNodePoolRequest& request, const RemoveNodeFromNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveNodeFromNodePoolOutcomeCallable RemoveNodeFromNodePoolCallable(const Model::RemoveNodeFromNodePoolRequest& request);

                /**
                 *重启弹性容器实例，支持批量操作
                 * @param req RestartEKSContainerInstancesRequest
                 * @return RestartEKSContainerInstancesOutcome
                 */
                RestartEKSContainerInstancesOutcome RestartEKSContainerInstances(const Model::RestartEKSContainerInstancesRequest &request);
                void RestartEKSContainerInstancesAsync(const Model::RestartEKSContainerInstancesRequest& request, const RestartEKSContainerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartEKSContainerInstancesOutcomeCallable RestartEKSContainerInstancesCallable(const Model::RestartEKSContainerInstancesRequest& request);

                /**
                 *缩容独立集群master节点
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
                 *从TKE集群中卸载CLS日志采集组件
                 * @param req UninstallLogAgentRequest
                 * @return UninstallLogAgentOutcome
                 */
                UninstallLogAgentOutcome UninstallLogAgent(const Model::UninstallLogAgentRequest &request);
                void UninstallLogAgentAsync(const Model::UninstallLogAgentRequest& request, const UninstallLogAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UninstallLogAgentOutcomeCallable UninstallLogAgentCallable(const Model::UninstallLogAgentRequest& request);

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
                 *更新镜像缓存接口
                 * @param req UpdateImageCacheRequest
                 * @return UpdateImageCacheOutcome
                 */
                UpdateImageCacheOutcome UpdateImageCache(const Model::UpdateImageCacheRequest &request);
                void UpdateImageCacheAsync(const Model::UpdateImageCacheRequest& request, const UpdateImageCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateImageCacheOutcomeCallable UpdateImageCacheCallable(const Model::UpdateImageCacheRequest& request);

                /**
                 *给集群的一批work节点进行升级 
                 * @param req UpgradeClusterInstancesRequest
                 * @return UpgradeClusterInstancesOutcome
                 */
                UpgradeClusterInstancesOutcome UpgradeClusterInstances(const Model::UpgradeClusterInstancesRequest &request);
                void UpgradeClusterInstancesAsync(const Model::UpgradeClusterInstancesRequest& request, const UpgradeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeClusterInstancesOutcomeCallable UpgradeClusterInstancesCallable(const Model::UpgradeClusterInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_TKECLIENT_H_
