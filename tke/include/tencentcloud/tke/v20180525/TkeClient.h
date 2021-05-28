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
#include <tencentcloud/tke/v20180525/model/CreateClusterAsGroupRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterAsGroupResponse.h>
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
#include <tencentcloud/tke/v20180525/model/CreatePrometheusDashboardRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusDashboardResponse.h>
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
#include <tencentcloud/tke/v20180525/model/DescribeClusterCommonNamesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterCommonNamesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointVipStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointVipStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterKubeconfigRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterKubeconfigResponse.h>
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
#include <tencentcloud/tke/v20180525/model/DescribeClustersRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClustersResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEKSClusterCredentialRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEKSClusterCredentialResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEKSClustersRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEKSClustersResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEnableVpcCniProgressRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEnableVpcCniProgressResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeExistedInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeExistedInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeImagesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeImagesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAgentInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAgentInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAgentsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAgentsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAlertHistoryRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAlertHistoryResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAlertRuleRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusAlertRuleResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusOverviewsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusOverviewsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTargetsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTargetsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTemplateSyncRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTemplateSyncResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTemplatesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusTemplatesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeRegionsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeRegionsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeRouteTableConflictsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeRouteTableConflictsResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableVpcCniNetworkTypeRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableVpcCniNetworkTypeResponse.h>
#include <tencentcloud/tke/v20180525/model/GetUpgradeInstanceProgressRequest.h>
#include <tencentcloud/tke/v20180525/model/GetUpgradeInstanceProgressResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAsGroupAttributeRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAsGroupAttributeResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAsGroupOptionAttributeRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAsGroupOptionAttributeResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAttributeRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAttributeResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterEndpointSPRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterEndpointSPResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyNodePoolDesiredCapacityAboutAsgRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyNodePoolDesiredCapacityAboutAsgResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusTemplateRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusTemplateResponse.h>
#include <tencentcloud/tke/v20180525/model/RemoveNodeFromNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/RemoveNodeFromNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/SetNodePoolNodeProtectionRequest.h>
#include <tencentcloud/tke/v20180525/model/SetNodePoolNodeProtectionResponse.h>
#include <tencentcloud/tke/v20180525/model/SyncPrometheusTemplateRequest.h>
#include <tencentcloud/tke/v20180525/model/SyncPrometheusTemplateResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateClusterVersionRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateClusterVersionResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateEKSClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateEKSClusterResponse.h>
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

                typedef Outcome<Error, Model::AcquireClusterAdminRoleResponse> AcquireClusterAdminRoleOutcome;
                typedef std::future<AcquireClusterAdminRoleOutcome> AcquireClusterAdminRoleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::AcquireClusterAdminRoleRequest&, AcquireClusterAdminRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcquireClusterAdminRoleAsyncHandler;
                typedef Outcome<Error, Model::AddExistedInstancesResponse> AddExistedInstancesOutcome;
                typedef std::future<AddExistedInstancesOutcome> AddExistedInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::AddExistedInstancesRequest&, AddExistedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddExistedInstancesAsyncHandler;
                typedef Outcome<Error, Model::AddNodeToNodePoolResponse> AddNodeToNodePoolOutcome;
                typedef std::future<AddNodeToNodePoolOutcome> AddNodeToNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::AddNodeToNodePoolRequest&, AddNodeToNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddNodeToNodePoolAsyncHandler;
                typedef Outcome<Error, Model::AddVpcCniSubnetsResponse> AddVpcCniSubnetsOutcome;
                typedef std::future<AddVpcCniSubnetsOutcome> AddVpcCniSubnetsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::AddVpcCniSubnetsRequest&, AddVpcCniSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddVpcCniSubnetsAsyncHandler;
                typedef Outcome<Error, Model::CheckInstancesUpgradeAbleResponse> CheckInstancesUpgradeAbleOutcome;
                typedef std::future<CheckInstancesUpgradeAbleOutcome> CheckInstancesUpgradeAbleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CheckInstancesUpgradeAbleRequest&, CheckInstancesUpgradeAbleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckInstancesUpgradeAbleAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterAsGroupResponse> CreateClusterAsGroupOutcome;
                typedef std::future<CreateClusterAsGroupOutcome> CreateClusterAsGroupOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterAsGroupRequest&, CreateClusterAsGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterEndpointResponse> CreateClusterEndpointOutcome;
                typedef std::future<CreateClusterEndpointOutcome> CreateClusterEndpointOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterEndpointRequest&, CreateClusterEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterEndpointAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterEndpointVipResponse> CreateClusterEndpointVipOutcome;
                typedef std::future<CreateClusterEndpointVipOutcome> CreateClusterEndpointVipOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterEndpointVipRequest&, CreateClusterEndpointVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterEndpointVipAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterInstancesResponse> CreateClusterInstancesOutcome;
                typedef std::future<CreateClusterInstancesOutcome> CreateClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterInstancesRequest&, CreateClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterInstancesAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterNodePoolResponse> CreateClusterNodePoolOutcome;
                typedef std::future<CreateClusterNodePoolOutcome> CreateClusterNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterNodePoolRequest&, CreateClusterNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterNodePoolAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterNodePoolFromExistingAsgResponse> CreateClusterNodePoolFromExistingAsgOutcome;
                typedef std::future<CreateClusterNodePoolFromExistingAsgOutcome> CreateClusterNodePoolFromExistingAsgOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterNodePoolFromExistingAsgRequest&, CreateClusterNodePoolFromExistingAsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterNodePoolFromExistingAsgAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterRouteResponse> CreateClusterRouteOutcome;
                typedef std::future<CreateClusterRouteOutcome> CreateClusterRouteOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterRouteRequest&, CreateClusterRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterRouteAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterRouteTableResponse> CreateClusterRouteTableOutcome;
                typedef std::future<CreateClusterRouteTableOutcome> CreateClusterRouteTableOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterRouteTableRequest&, CreateClusterRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterRouteTableAsyncHandler;
                typedef Outcome<Error, Model::CreateEKSClusterResponse> CreateEKSClusterOutcome;
                typedef std::future<CreateEKSClusterOutcome> CreateEKSClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateEKSClusterRequest&, CreateEKSClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEKSClusterAsyncHandler;
                typedef Outcome<Error, Model::CreatePrometheusDashboardResponse> CreatePrometheusDashboardOutcome;
                typedef std::future<CreatePrometheusDashboardOutcome> CreatePrometheusDashboardOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusDashboardRequest&, CreatePrometheusDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusDashboardAsyncHandler;
                typedef Outcome<Error, Model::CreatePrometheusTemplateResponse> CreatePrometheusTemplateOutcome;
                typedef std::future<CreatePrometheusTemplateOutcome> CreatePrometheusTemplateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusTemplateRequest&, CreatePrometheusTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteClusterResponse> DeleteClusterOutcome;
                typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterRequest&, DeleteClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
                typedef Outcome<Error, Model::DeleteClusterAsGroupsResponse> DeleteClusterAsGroupsOutcome;
                typedef std::future<DeleteClusterAsGroupsOutcome> DeleteClusterAsGroupsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterAsGroupsRequest&, DeleteClusterAsGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsGroupsAsyncHandler;
                typedef Outcome<Error, Model::DeleteClusterEndpointResponse> DeleteClusterEndpointOutcome;
                typedef std::future<DeleteClusterEndpointOutcome> DeleteClusterEndpointOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterEndpointRequest&, DeleteClusterEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterEndpointAsyncHandler;
                typedef Outcome<Error, Model::DeleteClusterEndpointVipResponse> DeleteClusterEndpointVipOutcome;
                typedef std::future<DeleteClusterEndpointVipOutcome> DeleteClusterEndpointVipOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterEndpointVipRequest&, DeleteClusterEndpointVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterEndpointVipAsyncHandler;
                typedef Outcome<Error, Model::DeleteClusterInstancesResponse> DeleteClusterInstancesOutcome;
                typedef std::future<DeleteClusterInstancesOutcome> DeleteClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterInstancesRequest&, DeleteClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterInstancesAsyncHandler;
                typedef Outcome<Error, Model::DeleteClusterNodePoolResponse> DeleteClusterNodePoolOutcome;
                typedef std::future<DeleteClusterNodePoolOutcome> DeleteClusterNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterNodePoolRequest&, DeleteClusterNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterNodePoolAsyncHandler;
                typedef Outcome<Error, Model::DeleteClusterRouteResponse> DeleteClusterRouteOutcome;
                typedef std::future<DeleteClusterRouteOutcome> DeleteClusterRouteOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterRouteRequest&, DeleteClusterRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterRouteAsyncHandler;
                typedef Outcome<Error, Model::DeleteClusterRouteTableResponse> DeleteClusterRouteTableOutcome;
                typedef std::future<DeleteClusterRouteTableOutcome> DeleteClusterRouteTableOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterRouteTableRequest&, DeleteClusterRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterRouteTableAsyncHandler;
                typedef Outcome<Error, Model::DeleteEKSClusterResponse> DeleteEKSClusterOutcome;
                typedef std::future<DeleteEKSClusterOutcome> DeleteEKSClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteEKSClusterRequest&, DeleteEKSClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEKSClusterAsyncHandler;
                typedef Outcome<Error, Model::DeletePrometheusTemplateResponse> DeletePrometheusTemplateOutcome;
                typedef std::future<DeletePrometheusTemplateOutcome> DeletePrometheusTemplateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeletePrometheusTemplateRequest&, DeletePrometheusTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeletePrometheusTemplateSyncResponse> DeletePrometheusTemplateSyncOutcome;
                typedef std::future<DeletePrometheusTemplateSyncOutcome> DeletePrometheusTemplateSyncOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeletePrometheusTemplateSyncRequest&, DeletePrometheusTemplateSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusTemplateSyncAsyncHandler;
                typedef Outcome<Error, Model::DescribeAvailableClusterVersionResponse> DescribeAvailableClusterVersionOutcome;
                typedef std::future<DescribeAvailableClusterVersionOutcome> DescribeAvailableClusterVersionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeAvailableClusterVersionRequest&, DescribeAvailableClusterVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableClusterVersionAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterAsGroupOptionResponse> DescribeClusterAsGroupOptionOutcome;
                typedef std::future<DescribeClusterAsGroupOptionOutcome> DescribeClusterAsGroupOptionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterAsGroupOptionRequest&, DescribeClusterAsGroupOptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAsGroupOptionAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterAsGroupsResponse> DescribeClusterAsGroupsOutcome;
                typedef std::future<DescribeClusterAsGroupsOutcome> DescribeClusterAsGroupsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterAsGroupsRequest&, DescribeClusterAsGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAsGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterCommonNamesResponse> DescribeClusterCommonNamesOutcome;
                typedef std::future<DescribeClusterCommonNamesOutcome> DescribeClusterCommonNamesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterCommonNamesRequest&, DescribeClusterCommonNamesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterCommonNamesAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterEndpointStatusResponse> DescribeClusterEndpointStatusOutcome;
                typedef std::future<DescribeClusterEndpointStatusOutcome> DescribeClusterEndpointStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterEndpointStatusRequest&, DescribeClusterEndpointStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterEndpointStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterEndpointVipStatusResponse> DescribeClusterEndpointVipStatusOutcome;
                typedef std::future<DescribeClusterEndpointVipStatusOutcome> DescribeClusterEndpointVipStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterEndpointVipStatusRequest&, DescribeClusterEndpointVipStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterEndpointVipStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterInstancesResponse> DescribeClusterInstancesOutcome;
                typedef std::future<DescribeClusterInstancesOutcome> DescribeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterInstancesRequest&, DescribeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterKubeconfigResponse> DescribeClusterKubeconfigOutcome;
                typedef std::future<DescribeClusterKubeconfigOutcome> DescribeClusterKubeconfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterKubeconfigRequest&, DescribeClusterKubeconfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterKubeconfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterNodePoolDetailResponse> DescribeClusterNodePoolDetailOutcome;
                typedef std::future<DescribeClusterNodePoolDetailOutcome> DescribeClusterNodePoolDetailOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterNodePoolDetailRequest&, DescribeClusterNodePoolDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodePoolDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterNodePoolsResponse> DescribeClusterNodePoolsOutcome;
                typedef std::future<DescribeClusterNodePoolsOutcome> DescribeClusterNodePoolsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterNodePoolsRequest&, DescribeClusterNodePoolsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodePoolsAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterRouteTablesResponse> DescribeClusterRouteTablesOutcome;
                typedef std::future<DescribeClusterRouteTablesOutcome> DescribeClusterRouteTablesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterRouteTablesRequest&, DescribeClusterRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterRouteTablesAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterRoutesResponse> DescribeClusterRoutesOutcome;
                typedef std::future<DescribeClusterRoutesOutcome> DescribeClusterRoutesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterRoutesRequest&, DescribeClusterRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterRoutesAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterSecurityResponse> DescribeClusterSecurityOutcome;
                typedef std::future<DescribeClusterSecurityOutcome> DescribeClusterSecurityOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterSecurityRequest&, DescribeClusterSecurityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterSecurityAsyncHandler;
                typedef Outcome<Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
                typedef Outcome<Error, Model::DescribeEKSClusterCredentialResponse> DescribeEKSClusterCredentialOutcome;
                typedef std::future<DescribeEKSClusterCredentialOutcome> DescribeEKSClusterCredentialOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEKSClusterCredentialRequest&, DescribeEKSClusterCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEKSClusterCredentialAsyncHandler;
                typedef Outcome<Error, Model::DescribeEKSClustersResponse> DescribeEKSClustersOutcome;
                typedef std::future<DescribeEKSClustersOutcome> DescribeEKSClustersOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEKSClustersRequest&, DescribeEKSClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEKSClustersAsyncHandler;
                typedef Outcome<Error, Model::DescribeEnableVpcCniProgressResponse> DescribeEnableVpcCniProgressOutcome;
                typedef std::future<DescribeEnableVpcCniProgressOutcome> DescribeEnableVpcCniProgressOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEnableVpcCniProgressRequest&, DescribeEnableVpcCniProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnableVpcCniProgressAsyncHandler;
                typedef Outcome<Error, Model::DescribeExistedInstancesResponse> DescribeExistedInstancesOutcome;
                typedef std::future<DescribeExistedInstancesOutcome> DescribeExistedInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeExistedInstancesRequest&, DescribeExistedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExistedInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeImagesResponse> DescribeImagesOutcome;
                typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeImagesRequest&, DescribeImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
                typedef Outcome<Error, Model::DescribePrometheusAgentInstancesResponse> DescribePrometheusAgentInstancesOutcome;
                typedef std::future<DescribePrometheusAgentInstancesOutcome> DescribePrometheusAgentInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusAgentInstancesRequest&, DescribePrometheusAgentInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAgentInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribePrometheusAgentsResponse> DescribePrometheusAgentsOutcome;
                typedef std::future<DescribePrometheusAgentsOutcome> DescribePrometheusAgentsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusAgentsRequest&, DescribePrometheusAgentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAgentsAsyncHandler;
                typedef Outcome<Error, Model::DescribePrometheusAlertHistoryResponse> DescribePrometheusAlertHistoryOutcome;
                typedef std::future<DescribePrometheusAlertHistoryOutcome> DescribePrometheusAlertHistoryOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusAlertHistoryRequest&, DescribePrometheusAlertHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAlertHistoryAsyncHandler;
                typedef Outcome<Error, Model::DescribePrometheusAlertRuleResponse> DescribePrometheusAlertRuleOutcome;
                typedef std::future<DescribePrometheusAlertRuleOutcome> DescribePrometheusAlertRuleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusAlertRuleRequest&, DescribePrometheusAlertRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAlertRuleAsyncHandler;
                typedef Outcome<Error, Model::DescribePrometheusOverviewsResponse> DescribePrometheusOverviewsOutcome;
                typedef std::future<DescribePrometheusOverviewsOutcome> DescribePrometheusOverviewsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusOverviewsRequest&, DescribePrometheusOverviewsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusOverviewsAsyncHandler;
                typedef Outcome<Error, Model::DescribePrometheusTargetsResponse> DescribePrometheusTargetsOutcome;
                typedef std::future<DescribePrometheusTargetsOutcome> DescribePrometheusTargetsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusTargetsRequest&, DescribePrometheusTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusTargetsAsyncHandler;
                typedef Outcome<Error, Model::DescribePrometheusTemplateSyncResponse> DescribePrometheusTemplateSyncOutcome;
                typedef std::future<DescribePrometheusTemplateSyncOutcome> DescribePrometheusTemplateSyncOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusTemplateSyncRequest&, DescribePrometheusTemplateSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusTemplateSyncAsyncHandler;
                typedef Outcome<Error, Model::DescribePrometheusTemplatesResponse> DescribePrometheusTemplatesOutcome;
                typedef std::future<DescribePrometheusTemplatesOutcome> DescribePrometheusTemplatesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusTemplatesRequest&, DescribePrometheusTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Error, Model::DescribeRouteTableConflictsResponse> DescribeRouteTableConflictsOutcome;
                typedef std::future<DescribeRouteTableConflictsOutcome> DescribeRouteTableConflictsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeRouteTableConflictsRequest&, DescribeRouteTableConflictsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTableConflictsAsyncHandler;
                typedef Outcome<Error, Model::EnableVpcCniNetworkTypeResponse> EnableVpcCniNetworkTypeOutcome;
                typedef std::future<EnableVpcCniNetworkTypeOutcome> EnableVpcCniNetworkTypeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableVpcCniNetworkTypeRequest&, EnableVpcCniNetworkTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableVpcCniNetworkTypeAsyncHandler;
                typedef Outcome<Error, Model::GetUpgradeInstanceProgressResponse> GetUpgradeInstanceProgressOutcome;
                typedef std::future<GetUpgradeInstanceProgressOutcome> GetUpgradeInstanceProgressOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::GetUpgradeInstanceProgressRequest&, GetUpgradeInstanceProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUpgradeInstanceProgressAsyncHandler;
                typedef Outcome<Error, Model::ModifyClusterAsGroupAttributeResponse> ModifyClusterAsGroupAttributeOutcome;
                typedef std::future<ModifyClusterAsGroupAttributeOutcome> ModifyClusterAsGroupAttributeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterAsGroupAttributeRequest&, ModifyClusterAsGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAsGroupAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyClusterAsGroupOptionAttributeResponse> ModifyClusterAsGroupOptionAttributeOutcome;
                typedef std::future<ModifyClusterAsGroupOptionAttributeOutcome> ModifyClusterAsGroupOptionAttributeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterAsGroupOptionAttributeRequest&, ModifyClusterAsGroupOptionAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAsGroupOptionAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyClusterAttributeResponse> ModifyClusterAttributeOutcome;
                typedef std::future<ModifyClusterAttributeOutcome> ModifyClusterAttributeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterAttributeRequest&, ModifyClusterAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyClusterEndpointSPResponse> ModifyClusterEndpointSPOutcome;
                typedef std::future<ModifyClusterEndpointSPOutcome> ModifyClusterEndpointSPOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterEndpointSPRequest&, ModifyClusterEndpointSPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterEndpointSPAsyncHandler;
                typedef Outcome<Error, Model::ModifyClusterNodePoolResponse> ModifyClusterNodePoolOutcome;
                typedef std::future<ModifyClusterNodePoolOutcome> ModifyClusterNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterNodePoolRequest&, ModifyClusterNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterNodePoolAsyncHandler;
                typedef Outcome<Error, Model::ModifyNodePoolDesiredCapacityAboutAsgResponse> ModifyNodePoolDesiredCapacityAboutAsgOutcome;
                typedef std::future<ModifyNodePoolDesiredCapacityAboutAsgOutcome> ModifyNodePoolDesiredCapacityAboutAsgOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyNodePoolDesiredCapacityAboutAsgRequest&, ModifyNodePoolDesiredCapacityAboutAsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodePoolDesiredCapacityAboutAsgAsyncHandler;
                typedef Outcome<Error, Model::ModifyPrometheusTemplateResponse> ModifyPrometheusTemplateOutcome;
                typedef std::future<ModifyPrometheusTemplateOutcome> ModifyPrometheusTemplateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyPrometheusTemplateRequest&, ModifyPrometheusTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusTemplateAsyncHandler;
                typedef Outcome<Error, Model::RemoveNodeFromNodePoolResponse> RemoveNodeFromNodePoolOutcome;
                typedef std::future<RemoveNodeFromNodePoolOutcome> RemoveNodeFromNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::RemoveNodeFromNodePoolRequest&, RemoveNodeFromNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveNodeFromNodePoolAsyncHandler;
                typedef Outcome<Error, Model::SetNodePoolNodeProtectionResponse> SetNodePoolNodeProtectionOutcome;
                typedef std::future<SetNodePoolNodeProtectionOutcome> SetNodePoolNodeProtectionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::SetNodePoolNodeProtectionRequest&, SetNodePoolNodeProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetNodePoolNodeProtectionAsyncHandler;
                typedef Outcome<Error, Model::SyncPrometheusTemplateResponse> SyncPrometheusTemplateOutcome;
                typedef std::future<SyncPrometheusTemplateOutcome> SyncPrometheusTemplateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::SyncPrometheusTemplateRequest&, SyncPrometheusTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncPrometheusTemplateAsyncHandler;
                typedef Outcome<Error, Model::UpdateClusterVersionResponse> UpdateClusterVersionOutcome;
                typedef std::future<UpdateClusterVersionOutcome> UpdateClusterVersionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateClusterVersionRequest&, UpdateClusterVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterVersionAsyncHandler;
                typedef Outcome<Error, Model::UpdateEKSClusterResponse> UpdateEKSClusterOutcome;
                typedef std::future<UpdateEKSClusterOutcome> UpdateEKSClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateEKSClusterRequest&, UpdateEKSClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEKSClusterAsyncHandler;
                typedef Outcome<Error, Model::UpgradeClusterInstancesResponse> UpgradeClusterInstancesOutcome;
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
                 *为已经存在的集群创建伸缩组
                 * @param req CreateClusterAsGroupRequest
                 * @return CreateClusterAsGroupOutcome
                 */
                CreateClusterAsGroupOutcome CreateClusterAsGroup(const Model::CreateClusterAsGroupRequest &request);
                void CreateClusterAsGroupAsync(const Model::CreateClusterAsGroupRequest& request, const CreateClusterAsGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterAsGroupOutcomeCallable CreateClusterAsGroupCallable(const Model::CreateClusterAsGroupRequest& request);

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
                 *创建grafana监控面板
                 * @param req CreatePrometheusDashboardRequest
                 * @return CreatePrometheusDashboardOutcome
                 */
                CreatePrometheusDashboardOutcome CreatePrometheusDashboard(const Model::CreatePrometheusDashboardRequest &request);
                void CreatePrometheusDashboardAsync(const Model::CreatePrometheusDashboardRequest& request, const CreatePrometheusDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusDashboardOutcomeCallable CreatePrometheusDashboardCallable(const Model::CreatePrometheusDashboardRequest& request);

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
                 *获取指定子账户在RBAC授权模式中对应kube-apiserver客户端证书的CommonName字段，如果没有客户端证书，将会签发一个，此接口有最大传入子账户数量上限，当前为50
                 * @param req DescribeClusterCommonNamesRequest
                 * @return DescribeClusterCommonNamesOutcome
                 */
                DescribeClusterCommonNamesOutcome DescribeClusterCommonNames(const Model::DescribeClusterCommonNamesRequest &request);
                void DescribeClusterCommonNamesAsync(const Model::DescribeClusterCommonNamesRequest& request, const DescribeClusterCommonNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterCommonNamesOutcomeCallable DescribeClusterCommonNamesCallable(const Model::DescribeClusterCommonNamesRequest& request);

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
                 *获取告警规则列表
                 * @param req DescribePrometheusAlertRuleRequest
                 * @return DescribePrometheusAlertRuleOutcome
                 */
                DescribePrometheusAlertRuleOutcome DescribePrometheusAlertRule(const Model::DescribePrometheusAlertRuleRequest &request);
                void DescribePrometheusAlertRuleAsync(const Model::DescribePrometheusAlertRuleRequest& request, const DescribePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusAlertRuleOutcomeCallable DescribePrometheusAlertRuleCallable(const Model::DescribePrometheusAlertRuleRequest& request);

                /**
                 *获取实例列表
                 * @param req DescribePrometheusOverviewsRequest
                 * @return DescribePrometheusOverviewsOutcome
                 */
                DescribePrometheusOverviewsOutcome DescribePrometheusOverviews(const Model::DescribePrometheusOverviewsRequest &request);
                void DescribePrometheusOverviewsAsync(const Model::DescribePrometheusOverviewsRequest& request, const DescribePrometheusOverviewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusOverviewsOutcomeCallable DescribePrometheusOverviewsCallable(const Model::DescribePrometheusOverviewsRequest& request);

                /**
                 *获取targets信息
                 * @param req DescribePrometheusTargetsRequest
                 * @return DescribePrometheusTargetsOutcome
                 */
                DescribePrometheusTargetsOutcome DescribePrometheusTargets(const Model::DescribePrometheusTargetsRequest &request);
                void DescribePrometheusTargetsAsync(const Model::DescribePrometheusTargetsRequest& request, const DescribePrometheusTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusTargetsOutcomeCallable DescribePrometheusTargetsCallable(const Model::DescribePrometheusTargetsRequest& request);

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
                 *查询路由表冲突列表
                 * @param req DescribeRouteTableConflictsRequest
                 * @return DescribeRouteTableConflictsOutcome
                 */
                DescribeRouteTableConflictsOutcome DescribeRouteTableConflicts(const Model::DescribeRouteTableConflictsRequest &request);
                void DescribeRouteTableConflictsAsync(const Model::DescribeRouteTableConflictsRequest& request, const DescribeRouteTableConflictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteTableConflictsOutcomeCallable DescribeRouteTableConflictsCallable(const Model::DescribeRouteTableConflictsRequest& request);

                /**
                 *GR集群可以通过本接口附加vpc-cni容器网络插件，开启vpc-cni容器网络能力
                 * @param req EnableVpcCniNetworkTypeRequest
                 * @return EnableVpcCniNetworkTypeOutcome
                 */
                EnableVpcCniNetworkTypeOutcome EnableVpcCniNetworkType(const Model::EnableVpcCniNetworkTypeRequest &request);
                void EnableVpcCniNetworkTypeAsync(const Model::EnableVpcCniNetworkTypeRequest& request, const EnableVpcCniNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableVpcCniNetworkTypeOutcomeCallable EnableVpcCniNetworkTypeCallable(const Model::EnableVpcCniNetworkTypeRequest& request);

                /**
                 *获得节点升级当前的进度 
                 * @param req GetUpgradeInstanceProgressRequest
                 * @return GetUpgradeInstanceProgressOutcome
                 */
                GetUpgradeInstanceProgressOutcome GetUpgradeInstanceProgress(const Model::GetUpgradeInstanceProgressRequest &request);
                void GetUpgradeInstanceProgressAsync(const Model::GetUpgradeInstanceProgressRequest& request, const GetUpgradeInstanceProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUpgradeInstanceProgressOutcomeCallable GetUpgradeInstanceProgressCallable(const Model::GetUpgradeInstanceProgressRequest& request);

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
                 *仅能设置节点池中处于伸缩组的节点
                 * @param req SetNodePoolNodeProtectionRequest
                 * @return SetNodePoolNodeProtectionOutcome
                 */
                SetNodePoolNodeProtectionOutcome SetNodePoolNodeProtection(const Model::SetNodePoolNodeProtectionRequest &request);
                void SetNodePoolNodeProtectionAsync(const Model::SetNodePoolNodeProtectionRequest& request, const SetNodePoolNodeProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetNodePoolNodeProtectionOutcomeCallable SetNodePoolNodeProtectionCallable(const Model::SetNodePoolNodeProtectionRequest& request);

                /**
                 *同步模板到实例或者集群
                 * @param req SyncPrometheusTemplateRequest
                 * @return SyncPrometheusTemplateOutcome
                 */
                SyncPrometheusTemplateOutcome SyncPrometheusTemplate(const Model::SyncPrometheusTemplateRequest &request);
                void SyncPrometheusTemplateAsync(const Model::SyncPrometheusTemplateRequest& request, const SyncPrometheusTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncPrometheusTemplateOutcomeCallable SyncPrometheusTemplateCallable(const Model::SyncPrometheusTemplateRequest& request);

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
