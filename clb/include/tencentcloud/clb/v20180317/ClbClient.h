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

#ifndef TENCENTCLOUD_CLB_V20180317_CLBCLIENT_H_
#define TENCENTCLOUD_CLB_V20180317_CLBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/clb/v20180317/model/AssociateTargetGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/AssociateTargetGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/AutoRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/AutoRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/BatchDeregisterTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/BatchDeregisterTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/BatchModifyTargetWeightRequest.h>
#include <tencentcloud/clb/v20180317/model/BatchModifyTargetWeightResponse.h>
#include <tencentcloud/clb/v20180317/model/BatchRegisterTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/BatchRegisterTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/CloneLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/CloneLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateClsLogSetRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateClsLogSetResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateListenerRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateListenerResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerSnatIpsRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerSnatIpsResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateRuleRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateRuleResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateTargetGroupRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateTargetGroupResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateTopicRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateTopicResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteListenerRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteListenerResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerListenersRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerListenersResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerSnatIpsRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerSnatIpsResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteRuleRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteRuleResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteTargetGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteTargetGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetGroupInstancesRequest.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetGroupInstancesResponse.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsFromClassicalLBRequest.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsFromClassicalLBResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeBlockIPListRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeBlockIPListResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeBlockIPTaskRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeBlockIPTaskResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBByInstanceIdRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBByInstanceIdResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBHealthStatusRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBHealthStatusResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBListenersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBListenersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClsLogSetRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClsLogSetResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClusterResourcesRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClusterResourcesResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeCrossTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeCrossTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeCustomizedConfigAssociateListRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeCustomizedConfigAssociateListResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeCustomizedConfigListRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeCustomizedConfigListResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeExclusiveClustersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeExclusiveClustersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLBListenersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLBListenersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeListenersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeListenersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerListByCertIdRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerListByCertIdResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerOverviewRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerOverviewResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerTrafficRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerTrafficResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersDetailRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersDetailResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeQuotaRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeQuotaResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeResourcesRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeResourcesResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupInstancesRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupInstancesResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupListRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupListResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetHealthRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetHealthResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/clb/v20180317/model/DisassociateTargetGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/DisassociateTargetGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/ManualRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/ManualRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/MigrateClassicalLoadBalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/MigrateClassicalLoadBalancersResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyBlockIPListRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyBlockIPListResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyDomainRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyDomainResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyDomainAttributesRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyDomainAttributesResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyListenerRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyListenerResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerAttributesRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerAttributesResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerMixIpTargetRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerMixIpTargetResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerSlaRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerSlaResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyRuleRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyRuleResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupAttributeRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupAttributeResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupInstancesPortRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupInstancesPortResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupInstancesWeightRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupInstancesWeightResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetPortRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetPortResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetWeightRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetWeightResponse.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetGroupInstancesRequest.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetGroupInstancesResponse.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsWithClassicalLBRequest.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsWithClassicalLBResponse.h>
#include <tencentcloud/clb/v20180317/model/ReplaceCertForLoadBalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/ReplaceCertForLoadBalancersResponse.h>
#include <tencentcloud/clb/v20180317/model/SetCustomizedConfigForLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/SetCustomizedConfigForLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerClsLogRequest.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerClsLogResponse.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerSecurityGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerSecurityGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/SetSecurityGroupForLoadbalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/SetSecurityGroupForLoadbalancersResponse.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            class ClbClient : public AbstractClient
            {
            public:
                ClbClient(const Credential &credential, const std::string &region);
                ClbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssociateTargetGroupsResponse> AssociateTargetGroupsOutcome;
                typedef std::future<AssociateTargetGroupsOutcome> AssociateTargetGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::AssociateTargetGroupsRequest&, AssociateTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::AutoRewriteResponse> AutoRewriteOutcome;
                typedef std::future<AutoRewriteOutcome> AutoRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::AutoRewriteRequest&, AutoRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AutoRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeregisterTargetsResponse> BatchDeregisterTargetsOutcome;
                typedef std::future<BatchDeregisterTargetsOutcome> BatchDeregisterTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::BatchDeregisterTargetsRequest&, BatchDeregisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeregisterTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyTargetWeightResponse> BatchModifyTargetWeightOutcome;
                typedef std::future<BatchModifyTargetWeightOutcome> BatchModifyTargetWeightOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::BatchModifyTargetWeightRequest&, BatchModifyTargetWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyTargetWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchRegisterTargetsResponse> BatchRegisterTargetsOutcome;
                typedef std::future<BatchRegisterTargetsOutcome> BatchRegisterTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::BatchRegisterTargetsRequest&, BatchRegisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchRegisterTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneLoadBalancerResponse> CloneLoadBalancerOutcome;
                typedef std::future<CloneLoadBalancerOutcome> CloneLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CloneLoadBalancerRequest&, CloneLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClsLogSetResponse> CreateClsLogSetOutcome;
                typedef std::future<CreateClsLogSetOutcome> CreateClsLogSetOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateClsLogSetRequest&, CreateClsLogSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClsLogSetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateListenerResponse> CreateListenerOutcome;
                typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateListenerRequest&, CreateListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoadBalancerResponse> CreateLoadBalancerOutcome;
                typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateLoadBalancerRequest&, CreateLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoadBalancerSnatIpsResponse> CreateLoadBalancerSnatIpsOutcome;
                typedef std::future<CreateLoadBalancerSnatIpsOutcome> CreateLoadBalancerSnatIpsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateLoadBalancerSnatIpsRequest&, CreateLoadBalancerSnatIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerSnatIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTargetGroupResponse> CreateTargetGroupOutcome;
                typedef std::future<CreateTargetGroupOutcome> CreateTargetGroupOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateTargetGroupRequest&, CreateTargetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTargetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicResponse> CreateTopicOutcome;
                typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateTopicRequest&, CreateTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteListenerResponse> DeleteListenerOutcome;
                typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteListenerRequest&, DeleteListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancerResponse> DeleteLoadBalancerOutcome;
                typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteLoadBalancerRequest&, DeleteLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancerListenersResponse> DeleteLoadBalancerListenersOutcome;
                typedef std::future<DeleteLoadBalancerListenersOutcome> DeleteLoadBalancerListenersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteLoadBalancerListenersRequest&, DeleteLoadBalancerListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancerSnatIpsResponse> DeleteLoadBalancerSnatIpsOutcome;
                typedef std::future<DeleteLoadBalancerSnatIpsOutcome> DeleteLoadBalancerSnatIpsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteLoadBalancerSnatIpsRequest&, DeleteLoadBalancerSnatIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerSnatIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRewriteResponse> DeleteRewriteOutcome;
                typedef std::future<DeleteRewriteOutcome> DeleteRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteRewriteRequest&, DeleteRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRuleResponse> DeleteRuleOutcome;
                typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteRuleRequest&, DeleteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTargetGroupsResponse> DeleteTargetGroupsOutcome;
                typedef std::future<DeleteTargetGroupsOutcome> DeleteTargetGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteTargetGroupsRequest&, DeleteTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeregisterTargetGroupInstancesResponse> DeregisterTargetGroupInstancesOutcome;
                typedef std::future<DeregisterTargetGroupInstancesOutcome> DeregisterTargetGroupInstancesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeregisterTargetGroupInstancesRequest&, DeregisterTargetGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterTargetGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeregisterTargetsResponse> DeregisterTargetsOutcome;
                typedef std::future<DeregisterTargetsOutcome> DeregisterTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeregisterTargetsRequest&, DeregisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeregisterTargetsFromClassicalLBResponse> DeregisterTargetsFromClassicalLBOutcome;
                typedef std::future<DeregisterTargetsFromClassicalLBOutcome> DeregisterTargetsFromClassicalLBOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeregisterTargetsFromClassicalLBRequest&, DeregisterTargetsFromClassicalLBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterTargetsFromClassicalLBAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlockIPListResponse> DescribeBlockIPListOutcome;
                typedef std::future<DescribeBlockIPListOutcome> DescribeBlockIPListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeBlockIPListRequest&, DescribeBlockIPListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlockIPListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlockIPTaskResponse> DescribeBlockIPTaskOutcome;
                typedef std::future<DescribeBlockIPTaskOutcome> DescribeBlockIPTaskOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeBlockIPTaskRequest&, DescribeBlockIPTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlockIPTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassicalLBByInstanceIdResponse> DescribeClassicalLBByInstanceIdOutcome;
                typedef std::future<DescribeClassicalLBByInstanceIdOutcome> DescribeClassicalLBByInstanceIdOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBByInstanceIdRequest&, DescribeClassicalLBByInstanceIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBByInstanceIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassicalLBHealthStatusResponse> DescribeClassicalLBHealthStatusOutcome;
                typedef std::future<DescribeClassicalLBHealthStatusOutcome> DescribeClassicalLBHealthStatusOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBHealthStatusRequest&, DescribeClassicalLBHealthStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBHealthStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassicalLBListenersResponse> DescribeClassicalLBListenersOutcome;
                typedef std::future<DescribeClassicalLBListenersOutcome> DescribeClassicalLBListenersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBListenersRequest&, DescribeClassicalLBListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassicalLBTargetsResponse> DescribeClassicalLBTargetsOutcome;
                typedef std::future<DescribeClassicalLBTargetsOutcome> DescribeClassicalLBTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBTargetsRequest&, DescribeClassicalLBTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClsLogSetResponse> DescribeClsLogSetOutcome;
                typedef std::future<DescribeClsLogSetOutcome> DescribeClsLogSetOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClsLogSetRequest&, DescribeClsLogSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClsLogSetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterResourcesResponse> DescribeClusterResourcesOutcome;
                typedef std::future<DescribeClusterResourcesOutcome> DescribeClusterResourcesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClusterResourcesRequest&, DescribeClusterResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrossTargetsResponse> DescribeCrossTargetsOutcome;
                typedef std::future<DescribeCrossTargetsOutcome> DescribeCrossTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeCrossTargetsRequest&, DescribeCrossTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomizedConfigAssociateListResponse> DescribeCustomizedConfigAssociateListOutcome;
                typedef std::future<DescribeCustomizedConfigAssociateListOutcome> DescribeCustomizedConfigAssociateListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeCustomizedConfigAssociateListRequest&, DescribeCustomizedConfigAssociateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizedConfigAssociateListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomizedConfigListResponse> DescribeCustomizedConfigListOutcome;
                typedef std::future<DescribeCustomizedConfigListOutcome> DescribeCustomizedConfigListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeCustomizedConfigListRequest&, DescribeCustomizedConfigListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizedConfigListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExclusiveClustersResponse> DescribeExclusiveClustersOutcome;
                typedef std::future<DescribeExclusiveClustersOutcome> DescribeExclusiveClustersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeExclusiveClustersRequest&, DescribeExclusiveClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExclusiveClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLBListenersResponse> DescribeLBListenersOutcome;
                typedef std::future<DescribeLBListenersOutcome> DescribeLBListenersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLBListenersRequest&, DescribeLBListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLBListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenersResponse> DescribeListenersOutcome;
                typedef std::future<DescribeListenersOutcome> DescribeListenersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeListenersRequest&, DescribeListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancerListByCertIdResponse> DescribeLoadBalancerListByCertIdOutcome;
                typedef std::future<DescribeLoadBalancerListByCertIdOutcome> DescribeLoadBalancerListByCertIdOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancerListByCertIdRequest&, DescribeLoadBalancerListByCertIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerListByCertIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancerOverviewResponse> DescribeLoadBalancerOverviewOutcome;
                typedef std::future<DescribeLoadBalancerOverviewOutcome> DescribeLoadBalancerOverviewOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancerOverviewRequest&, DescribeLoadBalancerOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancerTrafficResponse> DescribeLoadBalancerTrafficOutcome;
                typedef std::future<DescribeLoadBalancerTrafficOutcome> DescribeLoadBalancerTrafficOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancerTrafficRequest&, DescribeLoadBalancerTrafficOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerTrafficAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancersResponse> DescribeLoadBalancersOutcome;
                typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancersRequest&, DescribeLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancersDetailResponse> DescribeLoadBalancersDetailOutcome;
                typedef std::future<DescribeLoadBalancersDetailOutcome> DescribeLoadBalancersDetailOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancersDetailRequest&, DescribeLoadBalancersDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQuotaResponse> DescribeQuotaOutcome;
                typedef std::future<DescribeQuotaOutcome> DescribeQuotaOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeQuotaRequest&, DescribeQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcesResponse> DescribeResourcesOutcome;
                typedef std::future<DescribeResourcesOutcome> DescribeResourcesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeResourcesRequest&, DescribeResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRewriteResponse> DescribeRewriteOutcome;
                typedef std::future<DescribeRewriteOutcome> DescribeRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeRewriteRequest&, DescribeRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupInstancesResponse> DescribeTargetGroupInstancesOutcome;
                typedef std::future<DescribeTargetGroupInstancesOutcome> DescribeTargetGroupInstancesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetGroupInstancesRequest&, DescribeTargetGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupListResponse> DescribeTargetGroupListOutcome;
                typedef std::future<DescribeTargetGroupListOutcome> DescribeTargetGroupListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetGroupListRequest&, DescribeTargetGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupsResponse> DescribeTargetGroupsOutcome;
                typedef std::future<DescribeTargetGroupsOutcome> DescribeTargetGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetGroupsRequest&, DescribeTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetHealthResponse> DescribeTargetHealthOutcome;
                typedef std::future<DescribeTargetHealthOutcome> DescribeTargetHealthOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetHealthRequest&, DescribeTargetHealthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetHealthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetsResponse> DescribeTargetsOutcome;
                typedef std::future<DescribeTargetsOutcome> DescribeTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetsRequest&, DescribeTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef std::future<DescribeTaskStatusOutcome> DescribeTaskStatusOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTaskStatusRequest&, DescribeTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateTargetGroupsResponse> DisassociateTargetGroupsOutcome;
                typedef std::future<DisassociateTargetGroupsOutcome> DisassociateTargetGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DisassociateTargetGroupsRequest&, DisassociateTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ManualRewriteResponse> ManualRewriteOutcome;
                typedef std::future<ManualRewriteOutcome> ManualRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ManualRewriteRequest&, ManualRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManualRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::MigrateClassicalLoadBalancersResponse> MigrateClassicalLoadBalancersOutcome;
                typedef std::future<MigrateClassicalLoadBalancersOutcome> MigrateClassicalLoadBalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::MigrateClassicalLoadBalancersRequest&, MigrateClassicalLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigrateClassicalLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBlockIPListResponse> ModifyBlockIPListOutcome;
                typedef std::future<ModifyBlockIPListOutcome> ModifyBlockIPListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyBlockIPListRequest&, ModifyBlockIPListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlockIPListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainResponse> ModifyDomainOutcome;
                typedef std::future<ModifyDomainOutcome> ModifyDomainOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyDomainRequest&, ModifyDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainAttributesResponse> ModifyDomainAttributesOutcome;
                typedef std::future<ModifyDomainAttributesOutcome> ModifyDomainAttributesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyDomainAttributesRequest&, ModifyDomainAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyListenerResponse> ModifyListenerOutcome;
                typedef std::future<ModifyListenerOutcome> ModifyListenerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyListenerRequest&, ModifyListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerAttributesResponse> ModifyLoadBalancerAttributesOutcome;
                typedef std::future<ModifyLoadBalancerAttributesOutcome> ModifyLoadBalancerAttributesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyLoadBalancerAttributesRequest&, ModifyLoadBalancerAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerMixIpTargetResponse> ModifyLoadBalancerMixIpTargetOutcome;
                typedef std::future<ModifyLoadBalancerMixIpTargetOutcome> ModifyLoadBalancerMixIpTargetOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyLoadBalancerMixIpTargetRequest&, ModifyLoadBalancerMixIpTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerMixIpTargetAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerSlaResponse> ModifyLoadBalancerSlaOutcome;
                typedef std::future<ModifyLoadBalancerSlaOutcome> ModifyLoadBalancerSlaOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyLoadBalancerSlaRequest&, ModifyLoadBalancerSlaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerSlaAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleResponse> ModifyRuleOutcome;
                typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyRuleRequest&, ModifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetGroupAttributeResponse> ModifyTargetGroupAttributeOutcome;
                typedef std::future<ModifyTargetGroupAttributeOutcome> ModifyTargetGroupAttributeOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetGroupAttributeRequest&, ModifyTargetGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetGroupInstancesPortResponse> ModifyTargetGroupInstancesPortOutcome;
                typedef std::future<ModifyTargetGroupInstancesPortOutcome> ModifyTargetGroupInstancesPortOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetGroupInstancesPortRequest&, ModifyTargetGroupInstancesPortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetGroupInstancesPortAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetGroupInstancesWeightResponse> ModifyTargetGroupInstancesWeightOutcome;
                typedef std::future<ModifyTargetGroupInstancesWeightOutcome> ModifyTargetGroupInstancesWeightOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetGroupInstancesWeightRequest&, ModifyTargetGroupInstancesWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetGroupInstancesWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetPortResponse> ModifyTargetPortOutcome;
                typedef std::future<ModifyTargetPortOutcome> ModifyTargetPortOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetPortRequest&, ModifyTargetPortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetPortAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetWeightResponse> ModifyTargetWeightOutcome;
                typedef std::future<ModifyTargetWeightOutcome> ModifyTargetWeightOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetWeightRequest&, ModifyTargetWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterTargetGroupInstancesResponse> RegisterTargetGroupInstancesOutcome;
                typedef std::future<RegisterTargetGroupInstancesOutcome> RegisterTargetGroupInstancesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RegisterTargetGroupInstancesRequest&, RegisterTargetGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterTargetGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterTargetsResponse> RegisterTargetsOutcome;
                typedef std::future<RegisterTargetsOutcome> RegisterTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RegisterTargetsRequest&, RegisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterTargetsWithClassicalLBResponse> RegisterTargetsWithClassicalLBOutcome;
                typedef std::future<RegisterTargetsWithClassicalLBOutcome> RegisterTargetsWithClassicalLBOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RegisterTargetsWithClassicalLBRequest&, RegisterTargetsWithClassicalLBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterTargetsWithClassicalLBAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceCertForLoadBalancersResponse> ReplaceCertForLoadBalancersOutcome;
                typedef std::future<ReplaceCertForLoadBalancersOutcome> ReplaceCertForLoadBalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ReplaceCertForLoadBalancersRequest&, ReplaceCertForLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceCertForLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::SetCustomizedConfigForLoadBalancerResponse> SetCustomizedConfigForLoadBalancerOutcome;
                typedef std::future<SetCustomizedConfigForLoadBalancerOutcome> SetCustomizedConfigForLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::SetCustomizedConfigForLoadBalancerRequest&, SetCustomizedConfigForLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetCustomizedConfigForLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::SetLoadBalancerClsLogResponse> SetLoadBalancerClsLogOutcome;
                typedef std::future<SetLoadBalancerClsLogOutcome> SetLoadBalancerClsLogOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::SetLoadBalancerClsLogRequest&, SetLoadBalancerClsLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerClsLogAsyncHandler;
                typedef Outcome<Core::Error, Model::SetLoadBalancerSecurityGroupsResponse> SetLoadBalancerSecurityGroupsOutcome;
                typedef std::future<SetLoadBalancerSecurityGroupsOutcome> SetLoadBalancerSecurityGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::SetLoadBalancerSecurityGroupsRequest&, SetLoadBalancerSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::SetSecurityGroupForLoadbalancersResponse> SetSecurityGroupForLoadbalancersOutcome;
                typedef std::future<SetSecurityGroupForLoadbalancersOutcome> SetSecurityGroupForLoadbalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::SetSecurityGroupForLoadbalancersRequest&, SetSecurityGroupForLoadbalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetSecurityGroupForLoadbalancersAsyncHandler;



                /**
                 *本接口(AssociateTargetGroups)用来将目标组绑定到负载均衡的监听器（四层协议）或转发规则（七层协议）上。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req AssociateTargetGroupsRequest
                 * @return AssociateTargetGroupsOutcome
                 */
                AssociateTargetGroupsOutcome AssociateTargetGroups(const Model::AssociateTargetGroupsRequest &request);
                void AssociateTargetGroupsAsync(const Model::AssociateTargetGroupsRequest& request, const AssociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateTargetGroupsOutcomeCallable AssociateTargetGroupsCallable(const Model::AssociateTargetGroupsRequest& request);

                /**
                 *用户需要先创建出一个HTTPS:443监听器，并在其下创建转发规则。通过调用本接口，系统会自动创建出一个HTTP:80监听器（如果之前不存在），并在其下创建转发规则，与HTTPS:443监听器下的Domains（在入参中指定）对应。创建成功后可以通过HTTP:80地址自动跳转为HTTPS:443地址进行访问。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req AutoRewriteRequest
                 * @return AutoRewriteOutcome
                 */
                AutoRewriteOutcome AutoRewrite(const Model::AutoRewriteRequest &request);
                void AutoRewriteAsync(const Model::AutoRewriteRequest& request, const AutoRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AutoRewriteOutcomeCallable AutoRewriteCallable(const Model::AutoRewriteRequest& request);

                /**
                 *批量解绑四七层后端服务。批量解绑的资源数量上限为500。只支持VPC网络负载均衡。
                 * @param req BatchDeregisterTargetsRequest
                 * @return BatchDeregisterTargetsOutcome
                 */
                BatchDeregisterTargetsOutcome BatchDeregisterTargets(const Model::BatchDeregisterTargetsRequest &request);
                void BatchDeregisterTargetsAsync(const Model::BatchDeregisterTargetsRequest& request, const BatchDeregisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeregisterTargetsOutcomeCallable BatchDeregisterTargetsCallable(const Model::BatchDeregisterTargetsRequest& request);

                /**
                 *BatchModifyTargetWeight 接口用于批量修改负载均衡监听器绑定的后端机器的转发权重。批量修改的资源数量上限为500。本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。<br/>负载均衡的4层和7层监听器支持此接口，传统型负载均衡不支持。

                 * @param req BatchModifyTargetWeightRequest
                 * @return BatchModifyTargetWeightOutcome
                 */
                BatchModifyTargetWeightOutcome BatchModifyTargetWeight(const Model::BatchModifyTargetWeightRequest &request);
                void BatchModifyTargetWeightAsync(const Model::BatchModifyTargetWeightRequest& request, const BatchModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyTargetWeightOutcomeCallable BatchModifyTargetWeightCallable(const Model::BatchModifyTargetWeightRequest& request);

                /**
                 *批量绑定虚拟主机或弹性网卡，支持跨域绑定，支持四层、七层（TCP、UDP、HTTP、HTTPS）协议绑定。批量绑定的资源数量上限为500。只支持VPC网络负载均衡。
                 * @param req BatchRegisterTargetsRequest
                 * @return BatchRegisterTargetsOutcome
                 */
                BatchRegisterTargetsOutcome BatchRegisterTargets(const Model::BatchRegisterTargetsRequest &request);
                void BatchRegisterTargetsAsync(const Model::BatchRegisterTargetsRequest& request, const BatchRegisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchRegisterTargetsOutcomeCallable BatchRegisterTargetsCallable(const Model::BatchRegisterTargetsRequest& request);

                /**
                 *克隆负载均衡实例，根据指定的负载均衡实例，复制出相同规则和绑定关系的负载均衡实例。克隆接口为异步操作，克隆的数据以调用CloneLoadBalancer时为准，如果调用CloneLoadBalancer后克隆CLB发生变化，变化规则不会克隆。

限制说明：
不支持基础网络和传统型负载均衡、IPv6和NAT64
不支持包年包月CLB
不支持监听器为 QUIC、端口段
不支持后端类型为 目标组、SCF云函数
个性化配置、重定向配置、安全组默认放通开关 将不会被克隆，须手工配置

通过接口调用：
BGP带宽包必须传带宽包id
独占集群克隆必须传对应的参数，否则按共享型创建
功能内测中，[申请开通](https://console.cloud.tencent.com/workorder/category?level1_id=6&level2_id=163&source=0&data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20CLB&step=1)。
                 * @param req CloneLoadBalancerRequest
                 * @return CloneLoadBalancerOutcome
                 */
                CloneLoadBalancerOutcome CloneLoadBalancer(const Model::CloneLoadBalancerRequest &request);
                void CloneLoadBalancerAsync(const Model::CloneLoadBalancerRequest& request, const CloneLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneLoadBalancerOutcomeCallable CloneLoadBalancerCallable(const Model::CloneLoadBalancerRequest& request);

                /**
                 *创建CLB专有日志集，此日志集用于存储CLB的日志。
                 * @param req CreateClsLogSetRequest
                 * @return CreateClsLogSetOutcome
                 */
                CreateClsLogSetOutcome CreateClsLogSet(const Model::CreateClsLogSetRequest &request);
                void CreateClsLogSetAsync(const Model::CreateClsLogSetRequest& request, const CreateClsLogSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClsLogSetOutcomeCallable CreateClsLogSetCallable(const Model::CreateClsLogSetRequest& request);

                /**
                 *在一个负载均衡实例下创建监听器。
本接口为异步接口，接口返回成功后，需以返回的 RequestId 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req CreateListenerRequest
                 * @return CreateListenerOutcome
                 */
                CreateListenerOutcome CreateListener(const Model::CreateListenerRequest &request);
                void CreateListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateListenerOutcomeCallable CreateListenerCallable(const Model::CreateListenerRequest& request);

                /**
                 *本接口(CreateLoadBalancer)用来创建负载均衡实例（本接口只支持购买按量计费的负载均衡，包年包月的负载均衡请通过控制台购买）。为了使用负载均衡服务，您必须购买一个或多个负载均衡实例。成功调用该接口后，会返回负载均衡实例的唯一 ID。负载均衡实例的类型分为：公网、内网。详情可参考产品说明中的产品类型。
注意：(1)指定可用区申请负载均衡、跨zone容灾(仅香港支持)【如果您需要体验该功能，请通过 [工单申请](https://console.cloud.tencent.com/workorder/category)】；(2)目前只有北京、上海、广州支持IPv6；(3)一个账号在每个地域的默认购买配额为：公网100个，内网100个。
本接口为异步接口，接口成功返回后，可使用 DescribeLoadBalancers 接口查询负载均衡实例的状态（如创建中、正常），以确定是否创建成功。
                 * @param req CreateLoadBalancerRequest
                 * @return CreateLoadBalancerOutcome
                 */
                CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest &request);
                void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request);

                /**
                 *针对SnatPro负载均衡，这个接口用于添加SnatIp，如果负载均衡没有开启SnatPro，添加SnatIp后会自动开启。
本接口为异步接口，接口返回成功后，需以得到的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req CreateLoadBalancerSnatIpsRequest
                 * @return CreateLoadBalancerSnatIpsOutcome
                 */
                CreateLoadBalancerSnatIpsOutcome CreateLoadBalancerSnatIps(const Model::CreateLoadBalancerSnatIpsRequest &request);
                void CreateLoadBalancerSnatIpsAsync(const Model::CreateLoadBalancerSnatIpsRequest& request, const CreateLoadBalancerSnatIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancerSnatIpsOutcomeCallable CreateLoadBalancerSnatIpsCallable(const Model::CreateLoadBalancerSnatIpsRequest& request);

                /**
                 *CreateRule 接口用于在一个已存在的负载均衡七层监听器下创建转发规则，七层监听器中，后端服务必须绑定到规则上而非监听器上。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *创建目标组。该功能正在内测中，如需使用，请通过[工单申请](https://console.cloud.tencent.com/workorder/category?level1_id=6&level2_id=163&source=0&data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20LB&step=1)。
                 * @param req CreateTargetGroupRequest
                 * @return CreateTargetGroupOutcome
                 */
                CreateTargetGroupOutcome CreateTargetGroup(const Model::CreateTargetGroupRequest &request);
                void CreateTargetGroupAsync(const Model::CreateTargetGroupRequest& request, const CreateTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTargetGroupOutcomeCallable CreateTargetGroupCallable(const Model::CreateTargetGroupRequest& request);

                /**
                 *创建主题，默认开启全文索引和键值索引。如果不存在CLB专有日志集，则创建失败。
                 * @param req CreateTopicRequest
                 * @return CreateTopicOutcome
                 */
                CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest &request);
                void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request);

                /**
                 *本接口用来删除负载均衡实例下的监听器（四层和七层）。
本接口为异步接口，接口返回成功后，需以得到的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req DeleteListenerRequest
                 * @return DeleteListenerOutcome
                 */
                DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest &request);
                void DeleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteListenerOutcomeCallable DeleteListenerCallable(const Model::DeleteListenerRequest& request);

                /**
                 *DeleteLoadBalancer 接口用以删除指定的一个或多个负载均衡实例。成功删除后，会把负载均衡实例下的监听器、转发规则一起删除，并把后端服务解绑。
本接口为异步接口，接口返回成功后，需以返回的 RequestId 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req DeleteLoadBalancerRequest
                 * @return DeleteLoadBalancerOutcome
                 */
                DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest &request);
                void DeleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request);

                /**
                 *该接口支持删除负载均衡的多个监听器。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req DeleteLoadBalancerListenersRequest
                 * @return DeleteLoadBalancerListenersOutcome
                 */
                DeleteLoadBalancerListenersOutcome DeleteLoadBalancerListeners(const Model::DeleteLoadBalancerListenersRequest &request);
                void DeleteLoadBalancerListenersAsync(const Model::DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerListenersOutcomeCallable DeleteLoadBalancerListenersCallable(const Model::DeleteLoadBalancerListenersRequest& request);

                /**
                 *这个接口用于删除SnatPro的负载均衡的SnatIp。
本接口为异步接口，接口返回成功后，需以得到的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req DeleteLoadBalancerSnatIpsRequest
                 * @return DeleteLoadBalancerSnatIpsOutcome
                 */
                DeleteLoadBalancerSnatIpsOutcome DeleteLoadBalancerSnatIps(const Model::DeleteLoadBalancerSnatIpsRequest &request);
                void DeleteLoadBalancerSnatIpsAsync(const Model::DeleteLoadBalancerSnatIpsRequest& request, const DeleteLoadBalancerSnatIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerSnatIpsOutcomeCallable DeleteLoadBalancerSnatIpsCallable(const Model::DeleteLoadBalancerSnatIpsRequest& request);

                /**
                 *DeleteRewrite 接口支持删除指定转发规则之间的重定向关系。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req DeleteRewriteRequest
                 * @return DeleteRewriteOutcome
                 */
                DeleteRewriteOutcome DeleteRewrite(const Model::DeleteRewriteRequest &request);
                void DeleteRewriteAsync(const Model::DeleteRewriteRequest& request, const DeleteRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRewriteOutcomeCallable DeleteRewriteCallable(const Model::DeleteRewriteRequest& request);

                /**
                 *DeleteRule 接口用来删除负载均衡实例七层监听器下的转发规则。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req DeleteRuleRequest
                 * @return DeleteRuleOutcome
                 */
                DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest &request);
                void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request);

                /**
                 *删除目标组
                 * @param req DeleteTargetGroupsRequest
                 * @return DeleteTargetGroupsOutcome
                 */
                DeleteTargetGroupsOutcome DeleteTargetGroups(const Model::DeleteTargetGroupsRequest &request);
                void DeleteTargetGroupsAsync(const Model::DeleteTargetGroupsRequest& request, const DeleteTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTargetGroupsOutcomeCallable DeleteTargetGroupsCallable(const Model::DeleteTargetGroupsRequest& request);

                /**
                 *从目标组中解绑服务器。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req DeregisterTargetGroupInstancesRequest
                 * @return DeregisterTargetGroupInstancesOutcome
                 */
                DeregisterTargetGroupInstancesOutcome DeregisterTargetGroupInstances(const Model::DeregisterTargetGroupInstancesRequest &request);
                void DeregisterTargetGroupInstancesAsync(const Model::DeregisterTargetGroupInstancesRequest& request, const DeregisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterTargetGroupInstancesOutcomeCallable DeregisterTargetGroupInstancesCallable(const Model::DeregisterTargetGroupInstancesRequest& request);

                /**
                 *DeregisterTargets 接口用来将一台或多台后端服务从负载均衡的监听器或转发规则上解绑，对于四层监听器，只需指定监听器ID即可，对于七层监听器，还需通过LocationId或Domain+Url指定转发规则。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req DeregisterTargetsRequest
                 * @return DeregisterTargetsOutcome
                 */
                DeregisterTargetsOutcome DeregisterTargets(const Model::DeregisterTargetsRequest &request);
                void DeregisterTargetsAsync(const Model::DeregisterTargetsRequest& request, const DeregisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterTargetsOutcomeCallable DeregisterTargetsCallable(const Model::DeregisterTargetsRequest& request);

                /**
                 *DeregisterTargetsFromClassicalLB 接口用于解绑负载均衡后端服务。本接口为异步接口，接口返回成功后，需以返回的 RequestId 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req DeregisterTargetsFromClassicalLBRequest
                 * @return DeregisterTargetsFromClassicalLBOutcome
                 */
                DeregisterTargetsFromClassicalLBOutcome DeregisterTargetsFromClassicalLB(const Model::DeregisterTargetsFromClassicalLBRequest &request);
                void DeregisterTargetsFromClassicalLBAsync(const Model::DeregisterTargetsFromClassicalLBRequest& request, const DeregisterTargetsFromClassicalLBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterTargetsFromClassicalLBOutcomeCallable DeregisterTargetsFromClassicalLBCallable(const Model::DeregisterTargetsFromClassicalLBRequest& request);

                /**
                 *查询一个负载均衡所封禁的IP列表（黑名单）。（接口灰度中，如需使用请提工单）
                 * @param req DescribeBlockIPListRequest
                 * @return DescribeBlockIPListOutcome
                 */
                DescribeBlockIPListOutcome DescribeBlockIPList(const Model::DescribeBlockIPListRequest &request);
                void DescribeBlockIPListAsync(const Model::DescribeBlockIPListRequest& request, const DescribeBlockIPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlockIPListOutcomeCallable DescribeBlockIPListCallable(const Model::DescribeBlockIPListRequest& request);

                /**
                 *根据 ModifyBlockIPList 接口返回的异步任务的ID，查询封禁IP（黑名单）异步任务的执行状态。（接口灰度中，如需使用请提工单）
                 * @param req DescribeBlockIPTaskRequest
                 * @return DescribeBlockIPTaskOutcome
                 */
                DescribeBlockIPTaskOutcome DescribeBlockIPTask(const Model::DescribeBlockIPTaskRequest &request);
                void DescribeBlockIPTaskAsync(const Model::DescribeBlockIPTaskRequest& request, const DescribeBlockIPTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlockIPTaskOutcomeCallable DescribeBlockIPTaskCallable(const Model::DescribeBlockIPTaskRequest& request);

                /**
                 *DescribeClassicalLBByInstanceId用于通过后端实例ID获取传统型负载均衡ID列表。
                 * @param req DescribeClassicalLBByInstanceIdRequest
                 * @return DescribeClassicalLBByInstanceIdOutcome
                 */
                DescribeClassicalLBByInstanceIdOutcome DescribeClassicalLBByInstanceId(const Model::DescribeClassicalLBByInstanceIdRequest &request);
                void DescribeClassicalLBByInstanceIdAsync(const Model::DescribeClassicalLBByInstanceIdRequest& request, const DescribeClassicalLBByInstanceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBByInstanceIdOutcomeCallable DescribeClassicalLBByInstanceIdCallable(const Model::DescribeClassicalLBByInstanceIdRequest& request);

                /**
                 *DescribeClassicalLBHealthStatus用于获取传统型负载均衡后端的健康状态
                 * @param req DescribeClassicalLBHealthStatusRequest
                 * @return DescribeClassicalLBHealthStatusOutcome
                 */
                DescribeClassicalLBHealthStatusOutcome DescribeClassicalLBHealthStatus(const Model::DescribeClassicalLBHealthStatusRequest &request);
                void DescribeClassicalLBHealthStatusAsync(const Model::DescribeClassicalLBHealthStatusRequest& request, const DescribeClassicalLBHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBHealthStatusOutcomeCallable DescribeClassicalLBHealthStatusCallable(const Model::DescribeClassicalLBHealthStatusRequest& request);

                /**
                 *DescribeClassicalLBListeners 接口用于获取传统型负载均衡的监听器信息。
                 * @param req DescribeClassicalLBListenersRequest
                 * @return DescribeClassicalLBListenersOutcome
                 */
                DescribeClassicalLBListenersOutcome DescribeClassicalLBListeners(const Model::DescribeClassicalLBListenersRequest &request);
                void DescribeClassicalLBListenersAsync(const Model::DescribeClassicalLBListenersRequest& request, const DescribeClassicalLBListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBListenersOutcomeCallable DescribeClassicalLBListenersCallable(const Model::DescribeClassicalLBListenersRequest& request);

                /**
                 *DescribeClassicalLBTargets用于获取传统型负载均衡绑定的后端服务。
                 * @param req DescribeClassicalLBTargetsRequest
                 * @return DescribeClassicalLBTargetsOutcome
                 */
                DescribeClassicalLBTargetsOutcome DescribeClassicalLBTargets(const Model::DescribeClassicalLBTargetsRequest &request);
                void DescribeClassicalLBTargetsAsync(const Model::DescribeClassicalLBTargetsRequest& request, const DescribeClassicalLBTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBTargetsOutcomeCallable DescribeClassicalLBTargetsCallable(const Model::DescribeClassicalLBTargetsRequest& request);

                /**
                 *获取用户的CLB专有日志集。
                 * @param req DescribeClsLogSetRequest
                 * @return DescribeClsLogSetOutcome
                 */
                DescribeClsLogSetOutcome DescribeClsLogSet(const Model::DescribeClsLogSetRequest &request);
                void DescribeClsLogSetAsync(const Model::DescribeClsLogSetRequest& request, const DescribeClsLogSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClsLogSetOutcomeCallable DescribeClsLogSetCallable(const Model::DescribeClsLogSetRequest& request);

                /**
                 *查询独占集群中的资源列表，支持按集群ID、VIP、负载均衡ID、是否闲置为过滤条件检索。
                 * @param req DescribeClusterResourcesRequest
                 * @return DescribeClusterResourcesOutcome
                 */
                DescribeClusterResourcesOutcome DescribeClusterResources(const Model::DescribeClusterResourcesRequest &request);
                void DescribeClusterResourcesAsync(const Model::DescribeClusterResourcesRequest& request, const DescribeClusterResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterResourcesOutcomeCallable DescribeClusterResourcesCallable(const Model::DescribeClusterResourcesRequest& request);

                /**
                 *查询跨域2.0版本云联网后端子机和网卡信息。
                 * @param req DescribeCrossTargetsRequest
                 * @return DescribeCrossTargetsOutcome
                 */
                DescribeCrossTargetsOutcome DescribeCrossTargets(const Model::DescribeCrossTargetsRequest &request);
                void DescribeCrossTargetsAsync(const Model::DescribeCrossTargetsRequest& request, const DescribeCrossTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrossTargetsOutcomeCallable DescribeCrossTargetsCallable(const Model::DescribeCrossTargetsRequest& request);

                /**
                 *拉取配置绑定的 server 或 location，如果 domain 存在，结果将根据 domain 过滤。或拉取配置绑定的 loadbalancer。
                 * @param req DescribeCustomizedConfigAssociateListRequest
                 * @return DescribeCustomizedConfigAssociateListOutcome
                 */
                DescribeCustomizedConfigAssociateListOutcome DescribeCustomizedConfigAssociateList(const Model::DescribeCustomizedConfigAssociateListRequest &request);
                void DescribeCustomizedConfigAssociateListAsync(const Model::DescribeCustomizedConfigAssociateListRequest& request, const DescribeCustomizedConfigAssociateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomizedConfigAssociateListOutcomeCallable DescribeCustomizedConfigAssociateListCallable(const Model::DescribeCustomizedConfigAssociateListRequest& request);

                /**
                 *拉取个性化配置列表，返回用户 AppId 下指定类型的配置。
                 * @param req DescribeCustomizedConfigListRequest
                 * @return DescribeCustomizedConfigListOutcome
                 */
                DescribeCustomizedConfigListOutcome DescribeCustomizedConfigList(const Model::DescribeCustomizedConfigListRequest &request);
                void DescribeCustomizedConfigListAsync(const Model::DescribeCustomizedConfigListRequest& request, const DescribeCustomizedConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomizedConfigListOutcomeCallable DescribeCustomizedConfigListCallable(const Model::DescribeCustomizedConfigListRequest& request);

                /**
                 *查询集群信息列表，支持以集群类型、集群唯一ID、集群名字、集群标签、集群内vip、集群内负载均衡唯一id、集群网络类型、可用区等条件进行检索
                 * @param req DescribeExclusiveClustersRequest
                 * @return DescribeExclusiveClustersOutcome
                 */
                DescribeExclusiveClustersOutcome DescribeExclusiveClusters(const Model::DescribeExclusiveClustersRequest &request);
                void DescribeExclusiveClustersAsync(const Model::DescribeExclusiveClustersRequest& request, const DescribeExclusiveClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExclusiveClustersOutcomeCallable DescribeExclusiveClustersCallable(const Model::DescribeExclusiveClustersRequest& request);

                /**
                 *查询后端云主机或弹性网卡绑定的负载均衡，支持弹性网卡和cvm查询。
                 * @param req DescribeLBListenersRequest
                 * @return DescribeLBListenersOutcome
                 */
                DescribeLBListenersOutcome DescribeLBListeners(const Model::DescribeLBListenersRequest &request);
                void DescribeLBListenersAsync(const Model::DescribeLBListenersRequest& request, const DescribeLBListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLBListenersOutcomeCallable DescribeLBListenersCallable(const Model::DescribeLBListenersRequest& request);

                /**
                 *DescribeListeners 接口可根据负载均衡器 ID、监听器的协议或端口作为过滤条件获取监听器列表。如果不指定任何过滤条件，则返回该负载均衡实例下的所有监听器。
                 * @param req DescribeListenersRequest
                 * @return DescribeListenersOutcome
                 */
                DescribeListenersOutcome DescribeListeners(const Model::DescribeListenersRequest &request);
                void DescribeListenersAsync(const Model::DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenersOutcomeCallable DescribeListenersCallable(const Model::DescribeListenersRequest& request);

                /**
                 *根据证书ID查询其在一个地域中所关联到负载均衡实例列表
                 * @param req DescribeLoadBalancerListByCertIdRequest
                 * @return DescribeLoadBalancerListByCertIdOutcome
                 */
                DescribeLoadBalancerListByCertIdOutcome DescribeLoadBalancerListByCertId(const Model::DescribeLoadBalancerListByCertIdRequest &request);
                void DescribeLoadBalancerListByCertIdAsync(const Model::DescribeLoadBalancerListByCertIdRequest& request, const DescribeLoadBalancerListByCertIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancerListByCertIdOutcomeCallable DescribeLoadBalancerListByCertIdCallable(const Model::DescribeLoadBalancerListByCertIdRequest& request);

                /**
                 *查询运行中、隔离中、即将到期和负载均衡总数。
                 * @param req DescribeLoadBalancerOverviewRequest
                 * @return DescribeLoadBalancerOverviewOutcome
                 */
                DescribeLoadBalancerOverviewOutcome DescribeLoadBalancerOverview(const Model::DescribeLoadBalancerOverviewRequest &request);
                void DescribeLoadBalancerOverviewAsync(const Model::DescribeLoadBalancerOverviewRequest& request, const DescribeLoadBalancerOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancerOverviewOutcomeCallable DescribeLoadBalancerOverviewCallable(const Model::DescribeLoadBalancerOverviewRequest& request);

                /**
                 *查询账号下的高流量负载均衡，返回前10个负载均衡。如果是子账号登录，只返回子账号有权限的负载均衡。
                 * @param req DescribeLoadBalancerTrafficRequest
                 * @return DescribeLoadBalancerTrafficOutcome
                 */
                DescribeLoadBalancerTrafficOutcome DescribeLoadBalancerTraffic(const Model::DescribeLoadBalancerTrafficRequest &request);
                void DescribeLoadBalancerTrafficAsync(const Model::DescribeLoadBalancerTrafficRequest& request, const DescribeLoadBalancerTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancerTrafficOutcomeCallable DescribeLoadBalancerTrafficCallable(const Model::DescribeLoadBalancerTrafficRequest& request);

                /**
                 *查询一个地域的负载均衡实例列表。

                 * @param req DescribeLoadBalancersRequest
                 * @return DescribeLoadBalancersOutcome
                 */
                DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest &request);
                void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request);

                /**
                 *查询负载均衡的详细信息，包括监听器，规则及后端目标。
                 * @param req DescribeLoadBalancersDetailRequest
                 * @return DescribeLoadBalancersDetailOutcome
                 */
                DescribeLoadBalancersDetailOutcome DescribeLoadBalancersDetail(const Model::DescribeLoadBalancersDetailRequest &request);
                void DescribeLoadBalancersDetailAsync(const Model::DescribeLoadBalancersDetailRequest& request, const DescribeLoadBalancersDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancersDetailOutcomeCallable DescribeLoadBalancersDetailCallable(const Model::DescribeLoadBalancersDetailRequest& request);

                /**
                 *查询用户当前地域下的各项配额
                 * @param req DescribeQuotaRequest
                 * @return DescribeQuotaOutcome
                 */
                DescribeQuotaOutcome DescribeQuota(const Model::DescribeQuotaRequest &request);
                void DescribeQuotaAsync(const Model::DescribeQuotaRequest& request, const DescribeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQuotaOutcomeCallable DescribeQuotaCallable(const Model::DescribeQuotaRequest& request);

                /**
                 *查询用户在当前地域支持可用区列表和资源列表。
                 * @param req DescribeResourcesRequest
                 * @return DescribeResourcesOutcome
                 */
                DescribeResourcesOutcome DescribeResources(const Model::DescribeResourcesRequest &request);
                void DescribeResourcesAsync(const Model::DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcesOutcomeCallable DescribeResourcesCallable(const Model::DescribeResourcesRequest& request);

                /**
                 *DescribeRewrite 接口可根据负载均衡实例ID，查询一个负载均衡实例下转发规则的重定向关系。如果不指定监听器ID或转发规则ID，则返回该负载均衡实例下的所有重定向关系。
                 * @param req DescribeRewriteRequest
                 * @return DescribeRewriteOutcome
                 */
                DescribeRewriteOutcome DescribeRewrite(const Model::DescribeRewriteRequest &request);
                void DescribeRewriteAsync(const Model::DescribeRewriteRequest& request, const DescribeRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRewriteOutcomeCallable DescribeRewriteCallable(const Model::DescribeRewriteRequest& request);

                /**
                 *获取目标组绑定的服务器信息
                 * @param req DescribeTargetGroupInstancesRequest
                 * @return DescribeTargetGroupInstancesOutcome
                 */
                DescribeTargetGroupInstancesOutcome DescribeTargetGroupInstances(const Model::DescribeTargetGroupInstancesRequest &request);
                void DescribeTargetGroupInstancesAsync(const Model::DescribeTargetGroupInstancesRequest& request, const DescribeTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupInstancesOutcomeCallable DescribeTargetGroupInstancesCallable(const Model::DescribeTargetGroupInstancesRequest& request);

                /**
                 *获取目标组列表
                 * @param req DescribeTargetGroupListRequest
                 * @return DescribeTargetGroupListOutcome
                 */
                DescribeTargetGroupListOutcome DescribeTargetGroupList(const Model::DescribeTargetGroupListRequest &request);
                void DescribeTargetGroupListAsync(const Model::DescribeTargetGroupListRequest& request, const DescribeTargetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupListOutcomeCallable DescribeTargetGroupListCallable(const Model::DescribeTargetGroupListRequest& request);

                /**
                 *查询目标组信息
                 * @param req DescribeTargetGroupsRequest
                 * @return DescribeTargetGroupsOutcome
                 */
                DescribeTargetGroupsOutcome DescribeTargetGroups(const Model::DescribeTargetGroupsRequest &request);
                void DescribeTargetGroupsAsync(const Model::DescribeTargetGroupsRequest& request, const DescribeTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupsOutcomeCallable DescribeTargetGroupsCallable(const Model::DescribeTargetGroupsRequest& request);

                /**
                 *DescribeTargetHealth 接口用来获取负载均衡后端服务的健康检查结果，不支持传统型负载均衡。
                 * @param req DescribeTargetHealthRequest
                 * @return DescribeTargetHealthOutcome
                 */
                DescribeTargetHealthOutcome DescribeTargetHealth(const Model::DescribeTargetHealthRequest &request);
                void DescribeTargetHealthAsync(const Model::DescribeTargetHealthRequest& request, const DescribeTargetHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetHealthOutcomeCallable DescribeTargetHealthCallable(const Model::DescribeTargetHealthRequest& request);

                /**
                 *DescribeTargets 接口用来查询负载均衡实例的某些监听器绑定的后端服务列表。
                 * @param req DescribeTargetsRequest
                 * @return DescribeTargetsOutcome
                 */
                DescribeTargetsOutcome DescribeTargets(const Model::DescribeTargetsRequest &request);
                void DescribeTargetsAsync(const Model::DescribeTargetsRequest& request, const DescribeTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetsOutcomeCallable DescribeTargetsCallable(const Model::DescribeTargetsRequest& request);

                /**
                 *本接口用于查询异步任务的执行状态，对于非查询类的接口（创建/删除负载均衡实例、监听器、规则以及绑定或解绑后端服务等），在接口调用成功后，都需要使用本接口查询任务最终是否执行成功。
                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);
                void DescribeTaskStatusAsync(const Model::DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatusOutcomeCallable DescribeTaskStatusCallable(const Model::DescribeTaskStatusRequest& request);

                /**
                 *解除规则的目标组关联关系。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req DisassociateTargetGroupsRequest
                 * @return DisassociateTargetGroupsOutcome
                 */
                DisassociateTargetGroupsOutcome DisassociateTargetGroups(const Model::DisassociateTargetGroupsRequest &request);
                void DisassociateTargetGroupsAsync(const Model::DisassociateTargetGroupsRequest& request, const DisassociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateTargetGroupsOutcomeCallable DisassociateTargetGroupsCallable(const Model::DisassociateTargetGroupsRequest& request);

                /**
                 *用户手动配置原访问地址和重定向地址，系统自动将原访问地址的请求重定向至对应路径的目的地址。同一域名下可以配置多条路径作为重定向策略，实现http/https之间请求的自动跳转。设置重定向时，需满足如下约束条件：若A已经重定向至B，则A不能再重定向至C（除非先删除老的重定向关系，再建立新的重定向关系），B不能重定向至任何其它地址。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req ManualRewriteRequest
                 * @return ManualRewriteOutcome
                 */
                ManualRewriteOutcome ManualRewrite(const Model::ManualRewriteRequest &request);
                void ManualRewriteAsync(const Model::ManualRewriteRequest& request, const ManualRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManualRewriteOutcomeCallable ManualRewriteCallable(const Model::ManualRewriteRequest& request);

                /**
                 *本接口将传统型负载均衡迁移成(原应用型)负载均衡
本接口为异步接口，接口成功返回后，可使用 DescribeLoadBalancers 接口查询负载均衡实例的状态（如创建中、正常），以确定是否创建成功。
                 * @param req MigrateClassicalLoadBalancersRequest
                 * @return MigrateClassicalLoadBalancersOutcome
                 */
                MigrateClassicalLoadBalancersOutcome MigrateClassicalLoadBalancers(const Model::MigrateClassicalLoadBalancersRequest &request);
                void MigrateClassicalLoadBalancersAsync(const Model::MigrateClassicalLoadBalancersRequest& request, const MigrateClassicalLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigrateClassicalLoadBalancersOutcomeCallable MigrateClassicalLoadBalancersCallable(const Model::MigrateClassicalLoadBalancersRequest& request);

                /**
                 *修改负载均衡的IP（client IP）封禁黑名单列表，一个转发规则最多支持封禁 2000000 个IP，及黑名单容量为 2000000。
（接口灰度中，如需使用请提工单）
                 * @param req ModifyBlockIPListRequest
                 * @return ModifyBlockIPListOutcome
                 */
                ModifyBlockIPListOutcome ModifyBlockIPList(const Model::ModifyBlockIPListRequest &request);
                void ModifyBlockIPListAsync(const Model::ModifyBlockIPListRequest& request, const ModifyBlockIPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlockIPListOutcomeCallable ModifyBlockIPListCallable(const Model::ModifyBlockIPListRequest& request);

                /**
                 *ModifyDomain接口用来修改负载均衡七层监听器下的域名。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req ModifyDomainRequest
                 * @return ModifyDomainOutcome
                 */
                ModifyDomainOutcome ModifyDomain(const Model::ModifyDomainRequest &request);
                void ModifyDomainAsync(const Model::ModifyDomainRequest& request, const ModifyDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainOutcomeCallable ModifyDomainCallable(const Model::ModifyDomainRequest& request);

                /**
                 *ModifyDomainAttributes接口用于修改负载均衡7层监听器转发规则的域名级别属性，如修改域名、修改DefaultServer、开启/关闭Http2、修改证书。
本接口为异步接口，本接口返回成功后，需以返回的RequestId为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req ModifyDomainAttributesRequest
                 * @return ModifyDomainAttributesOutcome
                 */
                ModifyDomainAttributesOutcome ModifyDomainAttributes(const Model::ModifyDomainAttributesRequest &request);
                void ModifyDomainAttributesAsync(const Model::ModifyDomainAttributesRequest& request, const ModifyDomainAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainAttributesOutcomeCallable ModifyDomainAttributesCallable(const Model::ModifyDomainAttributesRequest& request);

                /**
                 *ModifyListener接口用来修改负载均衡监听器的属性，包括监听器名称、健康检查参数、证书信息、转发策略等。本接口不支持传统型负载均衡。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req ModifyListenerRequest
                 * @return ModifyListenerOutcome
                 */
                ModifyListenerOutcome ModifyListener(const Model::ModifyListenerRequest &request);
                void ModifyListenerAsync(const Model::ModifyListenerRequest& request, const ModifyListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyListenerOutcomeCallable ModifyListenerCallable(const Model::ModifyListenerRequest& request);

                /**
                 *修改负载均衡实例的属性。支持修改负载均衡实例的名称、设置负载均衡的跨域属性。
本接口为异步接口，接口返回成功后，需以得到的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req ModifyLoadBalancerAttributesRequest
                 * @return ModifyLoadBalancerAttributesOutcome
                 */
                ModifyLoadBalancerAttributesOutcome ModifyLoadBalancerAttributes(const Model::ModifyLoadBalancerAttributesRequest &request);
                void ModifyLoadBalancerAttributesAsync(const Model::ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerAttributesOutcomeCallable ModifyLoadBalancerAttributesCallable(const Model::ModifyLoadBalancerAttributesRequest& request);

                /**
                 *修改IPv6FullChain负载均衡7层监听器支持混绑IPv4/IPv6目标特性。
                 * @param req ModifyLoadBalancerMixIpTargetRequest
                 * @return ModifyLoadBalancerMixIpTargetOutcome
                 */
                ModifyLoadBalancerMixIpTargetOutcome ModifyLoadBalancerMixIpTarget(const Model::ModifyLoadBalancerMixIpTargetRequest &request);
                void ModifyLoadBalancerMixIpTargetAsync(const Model::ModifyLoadBalancerMixIpTargetRequest& request, const ModifyLoadBalancerMixIpTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerMixIpTargetOutcomeCallable ModifyLoadBalancerMixIpTargetCallable(const Model::ModifyLoadBalancerMixIpTargetRequest& request);

                /**
                 *支持共享型clb升级到性能容量型clb（不支持性能保障降级到共享型）。
                 * @param req ModifyLoadBalancerSlaRequest
                 * @return ModifyLoadBalancerSlaOutcome
                 */
                ModifyLoadBalancerSlaOutcome ModifyLoadBalancerSla(const Model::ModifyLoadBalancerSlaRequest &request);
                void ModifyLoadBalancerSlaAsync(const Model::ModifyLoadBalancerSlaRequest& request, const ModifyLoadBalancerSlaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerSlaOutcomeCallable ModifyLoadBalancerSlaCallable(const Model::ModifyLoadBalancerSlaRequest& request);

                /**
                 *ModifyRule 接口用来修改负载均衡七层监听器下的转发规则的各项属性，包括转发路径、健康检查属性、转发策略等。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req ModifyRuleRequest
                 * @return ModifyRuleOutcome
                 */
                ModifyRuleOutcome ModifyRule(const Model::ModifyRuleRequest &request);
                void ModifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleOutcomeCallable ModifyRuleCallable(const Model::ModifyRuleRequest& request);

                /**
                 *修改目标组的名称或者默认端口属性
                 * @param req ModifyTargetGroupAttributeRequest
                 * @return ModifyTargetGroupAttributeOutcome
                 */
                ModifyTargetGroupAttributeOutcome ModifyTargetGroupAttribute(const Model::ModifyTargetGroupAttributeRequest &request);
                void ModifyTargetGroupAttributeAsync(const Model::ModifyTargetGroupAttributeRequest& request, const ModifyTargetGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetGroupAttributeOutcomeCallable ModifyTargetGroupAttributeCallable(const Model::ModifyTargetGroupAttributeRequest& request);

                /**
                 *批量修改目标组服务器端口。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req ModifyTargetGroupInstancesPortRequest
                 * @return ModifyTargetGroupInstancesPortOutcome
                 */
                ModifyTargetGroupInstancesPortOutcome ModifyTargetGroupInstancesPort(const Model::ModifyTargetGroupInstancesPortRequest &request);
                void ModifyTargetGroupInstancesPortAsync(const Model::ModifyTargetGroupInstancesPortRequest& request, const ModifyTargetGroupInstancesPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetGroupInstancesPortOutcomeCallable ModifyTargetGroupInstancesPortCallable(const Model::ModifyTargetGroupInstancesPortRequest& request);

                /**
                 *批量修改目标组的服务器权重。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req ModifyTargetGroupInstancesWeightRequest
                 * @return ModifyTargetGroupInstancesWeightOutcome
                 */
                ModifyTargetGroupInstancesWeightOutcome ModifyTargetGroupInstancesWeight(const Model::ModifyTargetGroupInstancesWeightRequest &request);
                void ModifyTargetGroupInstancesWeightAsync(const Model::ModifyTargetGroupInstancesWeightRequest& request, const ModifyTargetGroupInstancesWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetGroupInstancesWeightOutcomeCallable ModifyTargetGroupInstancesWeightCallable(const Model::ModifyTargetGroupInstancesWeightRequest& request);

                /**
                 *ModifyTargetPort接口用于修改监听器绑定的后端服务的端口。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req ModifyTargetPortRequest
                 * @return ModifyTargetPortOutcome
                 */
                ModifyTargetPortOutcome ModifyTargetPort(const Model::ModifyTargetPortRequest &request);
                void ModifyTargetPortAsync(const Model::ModifyTargetPortRequest& request, const ModifyTargetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetPortOutcomeCallable ModifyTargetPortCallable(const Model::ModifyTargetPortRequest& request);

                /**
                 *ModifyTargetWeight 接口用于修改负载均衡绑定的后端服务的转发权重。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req ModifyTargetWeightRequest
                 * @return ModifyTargetWeightOutcome
                 */
                ModifyTargetWeightOutcome ModifyTargetWeight(const Model::ModifyTargetWeightRequest &request);
                void ModifyTargetWeightAsync(const Model::ModifyTargetWeightRequest& request, const ModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetWeightOutcomeCallable ModifyTargetWeightCallable(const Model::ModifyTargetWeightRequest& request);

                /**
                 *注册服务器到目标组。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req RegisterTargetGroupInstancesRequest
                 * @return RegisterTargetGroupInstancesOutcome
                 */
                RegisterTargetGroupInstancesOutcome RegisterTargetGroupInstances(const Model::RegisterTargetGroupInstancesRequest &request);
                void RegisterTargetGroupInstancesAsync(const Model::RegisterTargetGroupInstancesRequest& request, const RegisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterTargetGroupInstancesOutcomeCallable RegisterTargetGroupInstancesCallable(const Model::RegisterTargetGroupInstancesRequest& request);

                /**
                 *RegisterTargets 接口用来将一台或多台后端服务绑定到负载均衡的监听器（或7层转发规则），在此之前您需要先行创建相关的4层监听器或7层转发规则。对于四层监听器（TCP、UDP），只需指定监听器ID即可，对于七层监听器（HTTP、HTTPS），还需通过LocationId或者Domain+Url指定转发规则。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req RegisterTargetsRequest
                 * @return RegisterTargetsOutcome
                 */
                RegisterTargetsOutcome RegisterTargets(const Model::RegisterTargetsRequest &request);
                void RegisterTargetsAsync(const Model::RegisterTargetsRequest& request, const RegisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterTargetsOutcomeCallable RegisterTargetsCallable(const Model::RegisterTargetsRequest& request);

                /**
                 *RegisterTargetsWithClassicalLB 接口用于绑定后端服务到传统型负载均衡。本接口为异步接口，接口返回成功后，需以返回的 RequestId 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req RegisterTargetsWithClassicalLBRequest
                 * @return RegisterTargetsWithClassicalLBOutcome
                 */
                RegisterTargetsWithClassicalLBOutcome RegisterTargetsWithClassicalLB(const Model::RegisterTargetsWithClassicalLBRequest &request);
                void RegisterTargetsWithClassicalLBAsync(const Model::RegisterTargetsWithClassicalLBRequest& request, const RegisterTargetsWithClassicalLBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterTargetsWithClassicalLBOutcomeCallable RegisterTargetsWithClassicalLBCallable(const Model::RegisterTargetsWithClassicalLBRequest& request);

                /**
                 *ReplaceCertForLoadBalancers 接口用以替换负载均衡实例所关联的证书，对于各个地域的负载均衡，如果指定的老的证书ID与其有关联关系，则会先解除关联，再建立新证书与该负载均衡的关联关系。
此接口支持替换服务端证书或客户端证书。
需要使用的新证书，可以通过传入证书ID来指定，如果不指定证书ID，则必须传入证书内容等相关信息，用以新建证书并绑定至负载均衡。
注：本接口仅可从广州地域调用。
                 * @param req ReplaceCertForLoadBalancersRequest
                 * @return ReplaceCertForLoadBalancersOutcome
                 */
                ReplaceCertForLoadBalancersOutcome ReplaceCertForLoadBalancers(const Model::ReplaceCertForLoadBalancersRequest &request);
                void ReplaceCertForLoadBalancersAsync(const Model::ReplaceCertForLoadBalancersRequest& request, const ReplaceCertForLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceCertForLoadBalancersOutcomeCallable ReplaceCertForLoadBalancersCallable(const Model::ReplaceCertForLoadBalancersRequest& request);

                /**
                 *负载均衡维度的个性化配置相关操作：创建、删除、修改、绑定、解绑
                 * @param req SetCustomizedConfigForLoadBalancerRequest
                 * @return SetCustomizedConfigForLoadBalancerOutcome
                 */
                SetCustomizedConfigForLoadBalancerOutcome SetCustomizedConfigForLoadBalancer(const Model::SetCustomizedConfigForLoadBalancerRequest &request);
                void SetCustomizedConfigForLoadBalancerAsync(const Model::SetCustomizedConfigForLoadBalancerRequest& request, const SetCustomizedConfigForLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetCustomizedConfigForLoadBalancerOutcomeCallable SetCustomizedConfigForLoadBalancerCallable(const Model::SetCustomizedConfigForLoadBalancerRequest& request);

                /**
                 *增加、删除、更新负载均衡的日志服务(CLS)主题。
                 * @param req SetLoadBalancerClsLogRequest
                 * @return SetLoadBalancerClsLogOutcome
                 */
                SetLoadBalancerClsLogOutcome SetLoadBalancerClsLog(const Model::SetLoadBalancerClsLogRequest &request);
                void SetLoadBalancerClsLogAsync(const Model::SetLoadBalancerClsLogRequest& request, const SetLoadBalancerClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLoadBalancerClsLogOutcomeCallable SetLoadBalancerClsLogCallable(const Model::SetLoadBalancerClsLogRequest& request);

                /**
                 *SetLoadBalancerSecurityGroups 接口支持对一个公网负载均衡实例执行设置（绑定、解绑）安全组操作。查询一个负载均衡实例目前已绑定的安全组，可使用 DescribeLoadBalancers 接口。本接口是set语义，
绑定操作时，入参需要传入负载均衡实例要绑定的所有安全组（已绑定的+新增绑定的）。
解绑操作时，入参需要传入负载均衡实例执行解绑后所绑定的所有安全组；如果要解绑所有安全组，可不传此参数，或传入空数组。注意：内网负载均衡不支持绑定安全组。
                 * @param req SetLoadBalancerSecurityGroupsRequest
                 * @return SetLoadBalancerSecurityGroupsOutcome
                 */
                SetLoadBalancerSecurityGroupsOutcome SetLoadBalancerSecurityGroups(const Model::SetLoadBalancerSecurityGroupsRequest &request);
                void SetLoadBalancerSecurityGroupsAsync(const Model::SetLoadBalancerSecurityGroupsRequest& request, const SetLoadBalancerSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLoadBalancerSecurityGroupsOutcomeCallable SetLoadBalancerSecurityGroupsCallable(const Model::SetLoadBalancerSecurityGroupsRequest& request);

                /**
                 *绑定或解绑一个安全组到多个公网负载均衡实例。注意：内网负载均衡不支持绑定安全组。
                 * @param req SetSecurityGroupForLoadbalancersRequest
                 * @return SetSecurityGroupForLoadbalancersOutcome
                 */
                SetSecurityGroupForLoadbalancersOutcome SetSecurityGroupForLoadbalancers(const Model::SetSecurityGroupForLoadbalancersRequest &request);
                void SetSecurityGroupForLoadbalancersAsync(const Model::SetSecurityGroupForLoadbalancersRequest& request, const SetSecurityGroupForLoadbalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetSecurityGroupForLoadbalancersOutcomeCallable SetSecurityGroupForLoadbalancersCallable(const Model::SetSecurityGroupForLoadbalancersRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_CLBCLIENT_H_
