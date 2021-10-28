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

#ifndef TENCENTCLOUD_TDMQ_V20200217_TDMQCLIENT_H_
#define TENCENTCLOUD_TDMQ_V20200217_TDMQCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tdmq/v20200217/model/AcknowledgeMessageRequest.h>
#include <tencentcloud/tdmq/v20200217/model/AcknowledgeMessageResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ClearCmqQueueRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ClearCmqQueueResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ClearCmqSubscriptionFilterTagsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ClearCmqSubscriptionFilterTagsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateClusterRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateClusterResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateCmqQueueRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateCmqQueueResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateCmqSubscribeRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateCmqSubscribeResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateCmqTopicRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateCmqTopicResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateEnvironmentRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateEnvironmentResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateEnvironmentRoleRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateEnvironmentRoleResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQClusterRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQClusterResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQGroupRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQGroupResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQNamespaceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQNamespaceResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQTopicRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQTopicResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRoleRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRoleResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateSubscriptionRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateSubscriptionResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateTopicRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateTopicResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteClusterRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteClusterResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteCmqQueueRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteCmqQueueResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteCmqSubscribeRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteCmqSubscribeResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteCmqTopicRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteCmqTopicResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteEnvironmentRolesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteEnvironmentRolesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteEnvironmentsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteEnvironmentsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQClusterRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQClusterResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQGroupRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQGroupResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQNamespaceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQNamespaceResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQTopicRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQTopicResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRolesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRolesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteSubscriptionsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteSubscriptionsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteTopicsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteTopicsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeBindClustersRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeBindClustersResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeBindVpcsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeBindVpcsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeClusterDetailRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeClusterDetailResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeClustersRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeClustersResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeCmqDeadLetterSourceQueuesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeCmqDeadLetterSourceQueuesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeCmqQueueDetailRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeCmqQueueDetailResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeCmqQueuesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeCmqQueuesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeCmqSubscriptionDetailRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeCmqSubscriptionDetailResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeCmqTopicDetailRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeCmqTopicDetailResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeCmqTopicsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeCmqTopicsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeEnvironmentAttributesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeEnvironmentAttributesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeEnvironmentRolesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeEnvironmentRolesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeEnvironmentsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeEnvironmentsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeNamespaceBundlesOptRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeNamespaceBundlesOptResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeNodeHealthOptRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeNodeHealthOptResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeProducersRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeProducersResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQClusterRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQClusterResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQClustersRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQClustersResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQGroupsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQGroupsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQNamespacesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQNamespacesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopicsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopicsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRolesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRolesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeSubscriptionsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeSubscriptionsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeTopicsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeTopicsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyClusterRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyClusterResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyCmqQueueAttributeRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyCmqQueueAttributeResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyCmqSubscriptionAttributeRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyCmqSubscriptionAttributeResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyCmqTopicAttributeRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyCmqTopicAttributeResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyEnvironmentAttributesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyEnvironmentAttributesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyEnvironmentRoleRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyEnvironmentRoleResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQClusterRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQClusterResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQGroupRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQGroupResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQNamespaceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQNamespaceResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQTopicRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQTopicResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRoleRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRoleResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyTopicRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyTopicResponse.h>
#include <tencentcloud/tdmq/v20200217/model/PublishCmqMsgRequest.h>
#include <tencentcloud/tdmq/v20200217/model/PublishCmqMsgResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ReceiveMessageRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ReceiveMessageResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ResetMsgSubOffsetByTimestampRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ResetMsgSubOffsetByTimestampResponse.h>
#include <tencentcloud/tdmq/v20200217/model/RewindCmqQueueRequest.h>
#include <tencentcloud/tdmq/v20200217/model/RewindCmqQueueResponse.h>
#include <tencentcloud/tdmq/v20200217/model/SendBatchMessagesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/SendBatchMessagesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/SendCmqMsgRequest.h>
#include <tencentcloud/tdmq/v20200217/model/SendCmqMsgResponse.h>
#include <tencentcloud/tdmq/v20200217/model/SendMessagesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/SendMessagesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/SendMsgRequest.h>
#include <tencentcloud/tdmq/v20200217/model/SendMsgResponse.h>
#include <tencentcloud/tdmq/v20200217/model/UnbindCmqDeadLetterRequest.h>
#include <tencentcloud/tdmq/v20200217/model/UnbindCmqDeadLetterResponse.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            class TdmqClient : public AbstractClient
            {
            public:
                TdmqClient(const Credential &credential, const std::string &region);
                TdmqClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AcknowledgeMessageResponse> AcknowledgeMessageOutcome;
                typedef std::future<AcknowledgeMessageOutcome> AcknowledgeMessageOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::AcknowledgeMessageRequest&, AcknowledgeMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcknowledgeMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::ClearCmqQueueResponse> ClearCmqQueueOutcome;
                typedef std::future<ClearCmqQueueOutcome> ClearCmqQueueOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ClearCmqQueueRequest&, ClearCmqQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearCmqQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::ClearCmqSubscriptionFilterTagsResponse> ClearCmqSubscriptionFilterTagsOutcome;
                typedef std::future<ClearCmqSubscriptionFilterTagsOutcome> ClearCmqSubscriptionFilterTagsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ClearCmqSubscriptionFilterTagsRequest&, ClearCmqSubscriptionFilterTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearCmqSubscriptionFilterTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCmqQueueResponse> CreateCmqQueueOutcome;
                typedef std::future<CreateCmqQueueOutcome> CreateCmqQueueOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateCmqQueueRequest&, CreateCmqQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCmqQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCmqSubscribeResponse> CreateCmqSubscribeOutcome;
                typedef std::future<CreateCmqSubscribeOutcome> CreateCmqSubscribeOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateCmqSubscribeRequest&, CreateCmqSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCmqSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCmqTopicResponse> CreateCmqTopicOutcome;
                typedef std::future<CreateCmqTopicOutcome> CreateCmqTopicOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateCmqTopicRequest&, CreateCmqTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCmqTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEnvironmentResponse> CreateEnvironmentOutcome;
                typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateEnvironmentRequest&, CreateEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEnvironmentRoleResponse> CreateEnvironmentRoleOutcome;
                typedef std::future<CreateEnvironmentRoleOutcome> CreateEnvironmentRoleOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateEnvironmentRoleRequest&, CreateEnvironmentRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvironmentRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRocketMQClusterResponse> CreateRocketMQClusterOutcome;
                typedef std::future<CreateRocketMQClusterOutcome> CreateRocketMQClusterOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRocketMQClusterRequest&, CreateRocketMQClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRocketMQClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRocketMQGroupResponse> CreateRocketMQGroupOutcome;
                typedef std::future<CreateRocketMQGroupOutcome> CreateRocketMQGroupOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRocketMQGroupRequest&, CreateRocketMQGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRocketMQGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRocketMQNamespaceResponse> CreateRocketMQNamespaceOutcome;
                typedef std::future<CreateRocketMQNamespaceOutcome> CreateRocketMQNamespaceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRocketMQNamespaceRequest&, CreateRocketMQNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRocketMQNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRocketMQTopicResponse> CreateRocketMQTopicOutcome;
                typedef std::future<CreateRocketMQTopicOutcome> CreateRocketMQTopicOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRocketMQTopicRequest&, CreateRocketMQTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRocketMQTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoleResponse> CreateRoleOutcome;
                typedef std::future<CreateRoleOutcome> CreateRoleOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRoleRequest&, CreateRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubscriptionResponse> CreateSubscriptionOutcome;
                typedef std::future<CreateSubscriptionOutcome> CreateSubscriptionOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateSubscriptionRequest&, CreateSubscriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubscriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicResponse> CreateTopicOutcome;
                typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateTopicRequest&, CreateTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterResponse> DeleteClusterOutcome;
                typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteClusterRequest&, DeleteClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCmqQueueResponse> DeleteCmqQueueOutcome;
                typedef std::future<DeleteCmqQueueOutcome> DeleteCmqQueueOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteCmqQueueRequest&, DeleteCmqQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCmqQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCmqSubscribeResponse> DeleteCmqSubscribeOutcome;
                typedef std::future<DeleteCmqSubscribeOutcome> DeleteCmqSubscribeOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteCmqSubscribeRequest&, DeleteCmqSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCmqSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCmqTopicResponse> DeleteCmqTopicOutcome;
                typedef std::future<DeleteCmqTopicOutcome> DeleteCmqTopicOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteCmqTopicRequest&, DeleteCmqTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCmqTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEnvironmentRolesResponse> DeleteEnvironmentRolesOutcome;
                typedef std::future<DeleteEnvironmentRolesOutcome> DeleteEnvironmentRolesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteEnvironmentRolesRequest&, DeleteEnvironmentRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnvironmentRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEnvironmentsResponse> DeleteEnvironmentsOutcome;
                typedef std::future<DeleteEnvironmentsOutcome> DeleteEnvironmentsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteEnvironmentsRequest&, DeleteEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRocketMQClusterResponse> DeleteRocketMQClusterOutcome;
                typedef std::future<DeleteRocketMQClusterOutcome> DeleteRocketMQClusterOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRocketMQClusterRequest&, DeleteRocketMQClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRocketMQClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRocketMQGroupResponse> DeleteRocketMQGroupOutcome;
                typedef std::future<DeleteRocketMQGroupOutcome> DeleteRocketMQGroupOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRocketMQGroupRequest&, DeleteRocketMQGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRocketMQGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRocketMQNamespaceResponse> DeleteRocketMQNamespaceOutcome;
                typedef std::future<DeleteRocketMQNamespaceOutcome> DeleteRocketMQNamespaceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRocketMQNamespaceRequest&, DeleteRocketMQNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRocketMQNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRocketMQTopicResponse> DeleteRocketMQTopicOutcome;
                typedef std::future<DeleteRocketMQTopicOutcome> DeleteRocketMQTopicOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRocketMQTopicRequest&, DeleteRocketMQTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRocketMQTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRolesResponse> DeleteRolesOutcome;
                typedef std::future<DeleteRolesOutcome> DeleteRolesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRolesRequest&, DeleteRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSubscriptionsResponse> DeleteSubscriptionsOutcome;
                typedef std::future<DeleteSubscriptionsOutcome> DeleteSubscriptionsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteSubscriptionsRequest&, DeleteSubscriptionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubscriptionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicsResponse> DeleteTopicsOutcome;
                typedef std::future<DeleteTopicsOutcome> DeleteTopicsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteTopicsRequest&, DeleteTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBindClustersResponse> DescribeBindClustersOutcome;
                typedef std::future<DescribeBindClustersOutcome> DescribeBindClustersOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeBindClustersRequest&, DescribeBindClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBindVpcsResponse> DescribeBindVpcsOutcome;
                typedef std::future<DescribeBindVpcsOutcome> DescribeBindVpcsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeBindVpcsRequest&, DescribeBindVpcsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindVpcsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterDetailResponse> DescribeClusterDetailOutcome;
                typedef std::future<DescribeClusterDetailOutcome> DescribeClusterDetailOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeClusterDetailRequest&, DescribeClusterDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCmqDeadLetterSourceQueuesResponse> DescribeCmqDeadLetterSourceQueuesOutcome;
                typedef std::future<DescribeCmqDeadLetterSourceQueuesOutcome> DescribeCmqDeadLetterSourceQueuesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeCmqDeadLetterSourceQueuesRequest&, DescribeCmqDeadLetterSourceQueuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCmqDeadLetterSourceQueuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCmqQueueDetailResponse> DescribeCmqQueueDetailOutcome;
                typedef std::future<DescribeCmqQueueDetailOutcome> DescribeCmqQueueDetailOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeCmqQueueDetailRequest&, DescribeCmqQueueDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCmqQueueDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCmqQueuesResponse> DescribeCmqQueuesOutcome;
                typedef std::future<DescribeCmqQueuesOutcome> DescribeCmqQueuesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeCmqQueuesRequest&, DescribeCmqQueuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCmqQueuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCmqSubscriptionDetailResponse> DescribeCmqSubscriptionDetailOutcome;
                typedef std::future<DescribeCmqSubscriptionDetailOutcome> DescribeCmqSubscriptionDetailOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeCmqSubscriptionDetailRequest&, DescribeCmqSubscriptionDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCmqSubscriptionDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCmqTopicDetailResponse> DescribeCmqTopicDetailOutcome;
                typedef std::future<DescribeCmqTopicDetailOutcome> DescribeCmqTopicDetailOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeCmqTopicDetailRequest&, DescribeCmqTopicDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCmqTopicDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCmqTopicsResponse> DescribeCmqTopicsOutcome;
                typedef std::future<DescribeCmqTopicsOutcome> DescribeCmqTopicsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeCmqTopicsRequest&, DescribeCmqTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCmqTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvironmentAttributesResponse> DescribeEnvironmentAttributesOutcome;
                typedef std::future<DescribeEnvironmentAttributesOutcome> DescribeEnvironmentAttributesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeEnvironmentAttributesRequest&, DescribeEnvironmentAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvironmentRolesResponse> DescribeEnvironmentRolesOutcome;
                typedef std::future<DescribeEnvironmentRolesOutcome> DescribeEnvironmentRolesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeEnvironmentRolesRequest&, DescribeEnvironmentRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvironmentsResponse> DescribeEnvironmentsOutcome;
                typedef std::future<DescribeEnvironmentsOutcome> DescribeEnvironmentsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeEnvironmentsRequest&, DescribeEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNamespaceBundlesOptResponse> DescribeNamespaceBundlesOptOutcome;
                typedef std::future<DescribeNamespaceBundlesOptOutcome> DescribeNamespaceBundlesOptOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeNamespaceBundlesOptRequest&, DescribeNamespaceBundlesOptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespaceBundlesOptAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNodeHealthOptResponse> DescribeNodeHealthOptOutcome;
                typedef std::future<DescribeNodeHealthOptOutcome> DescribeNodeHealthOptOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeNodeHealthOptRequest&, DescribeNodeHealthOptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeHealthOptAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProducersResponse> DescribeProducersOutcome;
                typedef std::future<DescribeProducersOutcome> DescribeProducersOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeProducersRequest&, DescribeProducersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProducersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQClusterResponse> DescribeRocketMQClusterOutcome;
                typedef std::future<DescribeRocketMQClusterOutcome> DescribeRocketMQClusterOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQClusterRequest&, DescribeRocketMQClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQClustersResponse> DescribeRocketMQClustersOutcome;
                typedef std::future<DescribeRocketMQClustersOutcome> DescribeRocketMQClustersOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQClustersRequest&, DescribeRocketMQClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQGroupsResponse> DescribeRocketMQGroupsOutcome;
                typedef std::future<DescribeRocketMQGroupsOutcome> DescribeRocketMQGroupsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQGroupsRequest&, DescribeRocketMQGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQNamespacesResponse> DescribeRocketMQNamespacesOutcome;
                typedef std::future<DescribeRocketMQNamespacesOutcome> DescribeRocketMQNamespacesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQNamespacesRequest&, DescribeRocketMQNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQTopicsResponse> DescribeRocketMQTopicsOutcome;
                typedef std::future<DescribeRocketMQTopicsOutcome> DescribeRocketMQTopicsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQTopicsRequest&, DescribeRocketMQTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRolesResponse> DescribeRolesOutcome;
                typedef std::future<DescribeRolesOutcome> DescribeRolesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRolesRequest&, DescribeRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubscriptionsResponse> DescribeSubscriptionsOutcome;
                typedef std::future<DescribeSubscriptionsOutcome> DescribeSubscriptionsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeSubscriptionsRequest&, DescribeSubscriptionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscriptionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicsResponse> DescribeTopicsOutcome;
                typedef std::future<DescribeTopicsOutcome> DescribeTopicsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeTopicsRequest&, DescribeTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterResponse> ModifyClusterOutcome;
                typedef std::future<ModifyClusterOutcome> ModifyClusterOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyClusterRequest&, ModifyClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCmqQueueAttributeResponse> ModifyCmqQueueAttributeOutcome;
                typedef std::future<ModifyCmqQueueAttributeOutcome> ModifyCmqQueueAttributeOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyCmqQueueAttributeRequest&, ModifyCmqQueueAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCmqQueueAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCmqSubscriptionAttributeResponse> ModifyCmqSubscriptionAttributeOutcome;
                typedef std::future<ModifyCmqSubscriptionAttributeOutcome> ModifyCmqSubscriptionAttributeOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyCmqSubscriptionAttributeRequest&, ModifyCmqSubscriptionAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCmqSubscriptionAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCmqTopicAttributeResponse> ModifyCmqTopicAttributeOutcome;
                typedef std::future<ModifyCmqTopicAttributeOutcome> ModifyCmqTopicAttributeOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyCmqTopicAttributeRequest&, ModifyCmqTopicAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCmqTopicAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEnvironmentAttributesResponse> ModifyEnvironmentAttributesOutcome;
                typedef std::future<ModifyEnvironmentAttributesOutcome> ModifyEnvironmentAttributesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyEnvironmentAttributesRequest&, ModifyEnvironmentAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnvironmentAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEnvironmentRoleResponse> ModifyEnvironmentRoleOutcome;
                typedef std::future<ModifyEnvironmentRoleOutcome> ModifyEnvironmentRoleOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyEnvironmentRoleRequest&, ModifyEnvironmentRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnvironmentRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRocketMQClusterResponse> ModifyRocketMQClusterOutcome;
                typedef std::future<ModifyRocketMQClusterOutcome> ModifyRocketMQClusterOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRocketMQClusterRequest&, ModifyRocketMQClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRocketMQClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRocketMQGroupResponse> ModifyRocketMQGroupOutcome;
                typedef std::future<ModifyRocketMQGroupOutcome> ModifyRocketMQGroupOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRocketMQGroupRequest&, ModifyRocketMQGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRocketMQGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRocketMQNamespaceResponse> ModifyRocketMQNamespaceOutcome;
                typedef std::future<ModifyRocketMQNamespaceOutcome> ModifyRocketMQNamespaceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRocketMQNamespaceRequest&, ModifyRocketMQNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRocketMQNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRocketMQTopicResponse> ModifyRocketMQTopicOutcome;
                typedef std::future<ModifyRocketMQTopicOutcome> ModifyRocketMQTopicOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRocketMQTopicRequest&, ModifyRocketMQTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRocketMQTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRoleResponse> ModifyRoleOutcome;
                typedef std::future<ModifyRoleOutcome> ModifyRoleOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRoleRequest&, ModifyRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTopicResponse> ModifyTopicOutcome;
                typedef std::future<ModifyTopicOutcome> ModifyTopicOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyTopicRequest&, ModifyTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishCmqMsgResponse> PublishCmqMsgOutcome;
                typedef std::future<PublishCmqMsgOutcome> PublishCmqMsgOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::PublishCmqMsgRequest&, PublishCmqMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishCmqMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::ReceiveMessageResponse> ReceiveMessageOutcome;
                typedef std::future<ReceiveMessageOutcome> ReceiveMessageOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ReceiveMessageRequest&, ReceiveMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReceiveMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetMsgSubOffsetByTimestampResponse> ResetMsgSubOffsetByTimestampOutcome;
                typedef std::future<ResetMsgSubOffsetByTimestampOutcome> ResetMsgSubOffsetByTimestampOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ResetMsgSubOffsetByTimestampRequest&, ResetMsgSubOffsetByTimestampOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetMsgSubOffsetByTimestampAsyncHandler;
                typedef Outcome<Core::Error, Model::RewindCmqQueueResponse> RewindCmqQueueOutcome;
                typedef std::future<RewindCmqQueueOutcome> RewindCmqQueueOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::RewindCmqQueueRequest&, RewindCmqQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RewindCmqQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::SendBatchMessagesResponse> SendBatchMessagesOutcome;
                typedef std::future<SendBatchMessagesOutcome> SendBatchMessagesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::SendBatchMessagesRequest&, SendBatchMessagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendBatchMessagesAsyncHandler;
                typedef Outcome<Core::Error, Model::SendCmqMsgResponse> SendCmqMsgOutcome;
                typedef std::future<SendCmqMsgOutcome> SendCmqMsgOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::SendCmqMsgRequest&, SendCmqMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendCmqMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::SendMessagesResponse> SendMessagesOutcome;
                typedef std::future<SendMessagesOutcome> SendMessagesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::SendMessagesRequest&, SendMessagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendMessagesAsyncHandler;
                typedef Outcome<Core::Error, Model::SendMsgResponse> SendMsgOutcome;
                typedef std::future<SendMsgOutcome> SendMsgOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::SendMsgRequest&, SendMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindCmqDeadLetterResponse> UnbindCmqDeadLetterOutcome;
                typedef std::future<UnbindCmqDeadLetterOutcome> UnbindCmqDeadLetterOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::UnbindCmqDeadLetterRequest&, UnbindCmqDeadLetterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindCmqDeadLetterAsyncHandler;



                /**
                 *根据提供的 MessageID 确认指定 topic 中的消息
                 * @param req AcknowledgeMessageRequest
                 * @return AcknowledgeMessageOutcome
                 */
                AcknowledgeMessageOutcome AcknowledgeMessage(const Model::AcknowledgeMessageRequest &request);
                void AcknowledgeMessageAsync(const Model::AcknowledgeMessageRequest& request, const AcknowledgeMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcknowledgeMessageOutcomeCallable AcknowledgeMessageCallable(const Model::AcknowledgeMessageRequest& request);

                /**
                 *清空cmq消息队列中的消息
                 * @param req ClearCmqQueueRequest
                 * @return ClearCmqQueueOutcome
                 */
                ClearCmqQueueOutcome ClearCmqQueue(const Model::ClearCmqQueueRequest &request);
                void ClearCmqQueueAsync(const Model::ClearCmqQueueRequest& request, const ClearCmqQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearCmqQueueOutcomeCallable ClearCmqQueueCallable(const Model::ClearCmqQueueRequest& request);

                /**
                 *清空订阅者消息标签
                 * @param req ClearCmqSubscriptionFilterTagsRequest
                 * @return ClearCmqSubscriptionFilterTagsOutcome
                 */
                ClearCmqSubscriptionFilterTagsOutcome ClearCmqSubscriptionFilterTags(const Model::ClearCmqSubscriptionFilterTagsRequest &request);
                void ClearCmqSubscriptionFilterTagsAsync(const Model::ClearCmqSubscriptionFilterTagsRequest& request, const ClearCmqSubscriptionFilterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearCmqSubscriptionFilterTagsOutcomeCallable ClearCmqSubscriptionFilterTagsCallable(const Model::ClearCmqSubscriptionFilterTagsRequest& request);

                /**
                 *创建用户的集群
                 * @param req CreateClusterRequest
                 * @return CreateClusterOutcome
                 */
                CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest &request);
                void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request);

                /**
                 *创建cmq队列接口
                 * @param req CreateCmqQueueRequest
                 * @return CreateCmqQueueOutcome
                 */
                CreateCmqQueueOutcome CreateCmqQueue(const Model::CreateCmqQueueRequest &request);
                void CreateCmqQueueAsync(const Model::CreateCmqQueueRequest& request, const CreateCmqQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCmqQueueOutcomeCallable CreateCmqQueueCallable(const Model::CreateCmqQueueRequest& request);

                /**
                 *创建cmq订阅接口
                 * @param req CreateCmqSubscribeRequest
                 * @return CreateCmqSubscribeOutcome
                 */
                CreateCmqSubscribeOutcome CreateCmqSubscribe(const Model::CreateCmqSubscribeRequest &request);
                void CreateCmqSubscribeAsync(const Model::CreateCmqSubscribeRequest& request, const CreateCmqSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCmqSubscribeOutcomeCallable CreateCmqSubscribeCallable(const Model::CreateCmqSubscribeRequest& request);

                /**
                 *创建cmq主题
                 * @param req CreateCmqTopicRequest
                 * @return CreateCmqTopicOutcome
                 */
                CreateCmqTopicOutcome CreateCmqTopic(const Model::CreateCmqTopicRequest &request);
                void CreateCmqTopicAsync(const Model::CreateCmqTopicRequest& request, const CreateCmqTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCmqTopicOutcomeCallable CreateCmqTopicCallable(const Model::CreateCmqTopicRequest& request);

                /**
                 *用于在用户账户下创建消息队列 Tdmq 命名空间
                 * @param req CreateEnvironmentRequest
                 * @return CreateEnvironmentOutcome
                 */
                CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest &request);
                void CreateEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const Model::CreateEnvironmentRequest& request);

                /**
                 *创建环境角色授权
                 * @param req CreateEnvironmentRoleRequest
                 * @return CreateEnvironmentRoleOutcome
                 */
                CreateEnvironmentRoleOutcome CreateEnvironmentRole(const Model::CreateEnvironmentRoleRequest &request);
                void CreateEnvironmentRoleAsync(const Model::CreateEnvironmentRoleRequest& request, const CreateEnvironmentRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEnvironmentRoleOutcomeCallable CreateEnvironmentRoleCallable(const Model::CreateEnvironmentRoleRequest& request);

                /**
                 *此接口用于创建一个RocketMQ集群
                 * @param req CreateRocketMQClusterRequest
                 * @return CreateRocketMQClusterOutcome
                 */
                CreateRocketMQClusterOutcome CreateRocketMQCluster(const Model::CreateRocketMQClusterRequest &request);
                void CreateRocketMQClusterAsync(const Model::CreateRocketMQClusterRequest& request, const CreateRocketMQClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRocketMQClusterOutcomeCallable CreateRocketMQClusterCallable(const Model::CreateRocketMQClusterRequest& request);

                /**
                 *创建RocketMQ消费组
                 * @param req CreateRocketMQGroupRequest
                 * @return CreateRocketMQGroupOutcome
                 */
                CreateRocketMQGroupOutcome CreateRocketMQGroup(const Model::CreateRocketMQGroupRequest &request);
                void CreateRocketMQGroupAsync(const Model::CreateRocketMQGroupRequest& request, const CreateRocketMQGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRocketMQGroupOutcomeCallable CreateRocketMQGroupCallable(const Model::CreateRocketMQGroupRequest& request);

                /**
                 *创建RocketMQ命名空间
                 * @param req CreateRocketMQNamespaceRequest
                 * @return CreateRocketMQNamespaceOutcome
                 */
                CreateRocketMQNamespaceOutcome CreateRocketMQNamespace(const Model::CreateRocketMQNamespaceRequest &request);
                void CreateRocketMQNamespaceAsync(const Model::CreateRocketMQNamespaceRequest& request, const CreateRocketMQNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRocketMQNamespaceOutcomeCallable CreateRocketMQNamespaceCallable(const Model::CreateRocketMQNamespaceRequest& request);

                /**
                 *创建RocketMQ主题
                 * @param req CreateRocketMQTopicRequest
                 * @return CreateRocketMQTopicOutcome
                 */
                CreateRocketMQTopicOutcome CreateRocketMQTopic(const Model::CreateRocketMQTopicRequest &request);
                void CreateRocketMQTopicAsync(const Model::CreateRocketMQTopicRequest& request, const CreateRocketMQTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRocketMQTopicOutcomeCallable CreateRocketMQTopicCallable(const Model::CreateRocketMQTopicRequest& request);

                /**
                 *创建角色
                 * @param req CreateRoleRequest
                 * @return CreateRoleOutcome
                 */
                CreateRoleOutcome CreateRole(const Model::CreateRoleRequest &request);
                void CreateRoleAsync(const Model::CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoleOutcomeCallable CreateRoleCallable(const Model::CreateRoleRequest& request);

                /**
                 *创建一个主题的订阅关系
                 * @param req CreateSubscriptionRequest
                 * @return CreateSubscriptionOutcome
                 */
                CreateSubscriptionOutcome CreateSubscription(const Model::CreateSubscriptionRequest &request);
                void CreateSubscriptionAsync(const Model::CreateSubscriptionRequest& request, const CreateSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubscriptionOutcomeCallable CreateSubscriptionCallable(const Model::CreateSubscriptionRequest& request);

                /**
                 *新增指定分区、类型的消息主题
                 * @param req CreateTopicRequest
                 * @return CreateTopicOutcome
                 */
                CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest &request);
                void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request);

                /**
                 *删除集群
                 * @param req DeleteClusterRequest
                 * @return DeleteClusterOutcome
                 */
                DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest &request);
                void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request);

                /**
                 *删除cmq队列
                 * @param req DeleteCmqQueueRequest
                 * @return DeleteCmqQueueOutcome
                 */
                DeleteCmqQueueOutcome DeleteCmqQueue(const Model::DeleteCmqQueueRequest &request);
                void DeleteCmqQueueAsync(const Model::DeleteCmqQueueRequest& request, const DeleteCmqQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCmqQueueOutcomeCallable DeleteCmqQueueCallable(const Model::DeleteCmqQueueRequest& request);

                /**
                 *删除cmq订阅
                 * @param req DeleteCmqSubscribeRequest
                 * @return DeleteCmqSubscribeOutcome
                 */
                DeleteCmqSubscribeOutcome DeleteCmqSubscribe(const Model::DeleteCmqSubscribeRequest &request);
                void DeleteCmqSubscribeAsync(const Model::DeleteCmqSubscribeRequest& request, const DeleteCmqSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCmqSubscribeOutcomeCallable DeleteCmqSubscribeCallable(const Model::DeleteCmqSubscribeRequest& request);

                /**
                 *删除cmq主题
                 * @param req DeleteCmqTopicRequest
                 * @return DeleteCmqTopicOutcome
                 */
                DeleteCmqTopicOutcome DeleteCmqTopic(const Model::DeleteCmqTopicRequest &request);
                void DeleteCmqTopicAsync(const Model::DeleteCmqTopicRequest& request, const DeleteCmqTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCmqTopicOutcomeCallable DeleteCmqTopicCallable(const Model::DeleteCmqTopicRequest& request);

                /**
                 *删除环境角色授权。
                 * @param req DeleteEnvironmentRolesRequest
                 * @return DeleteEnvironmentRolesOutcome
                 */
                DeleteEnvironmentRolesOutcome DeleteEnvironmentRoles(const Model::DeleteEnvironmentRolesRequest &request);
                void DeleteEnvironmentRolesAsync(const Model::DeleteEnvironmentRolesRequest& request, const DeleteEnvironmentRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEnvironmentRolesOutcomeCallable DeleteEnvironmentRolesCallable(const Model::DeleteEnvironmentRolesRequest& request);

                /**
                 *批量删除租户下的命名空间
                 * @param req DeleteEnvironmentsRequest
                 * @return DeleteEnvironmentsOutcome
                 */
                DeleteEnvironmentsOutcome DeleteEnvironments(const Model::DeleteEnvironmentsRequest &request);
                void DeleteEnvironmentsAsync(const Model::DeleteEnvironmentsRequest& request, const DeleteEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEnvironmentsOutcomeCallable DeleteEnvironmentsCallable(const Model::DeleteEnvironmentsRequest& request);

                /**
                 *删除RocketMQ集群
                 * @param req DeleteRocketMQClusterRequest
                 * @return DeleteRocketMQClusterOutcome
                 */
                DeleteRocketMQClusterOutcome DeleteRocketMQCluster(const Model::DeleteRocketMQClusterRequest &request);
                void DeleteRocketMQClusterAsync(const Model::DeleteRocketMQClusterRequest& request, const DeleteRocketMQClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRocketMQClusterOutcomeCallable DeleteRocketMQClusterCallable(const Model::DeleteRocketMQClusterRequest& request);

                /**
                 *删除RocketMQ消费组
                 * @param req DeleteRocketMQGroupRequest
                 * @return DeleteRocketMQGroupOutcome
                 */
                DeleteRocketMQGroupOutcome DeleteRocketMQGroup(const Model::DeleteRocketMQGroupRequest &request);
                void DeleteRocketMQGroupAsync(const Model::DeleteRocketMQGroupRequest& request, const DeleteRocketMQGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRocketMQGroupOutcomeCallable DeleteRocketMQGroupCallable(const Model::DeleteRocketMQGroupRequest& request);

                /**
                 *删除RocketMQ命名空间
                 * @param req DeleteRocketMQNamespaceRequest
                 * @return DeleteRocketMQNamespaceOutcome
                 */
                DeleteRocketMQNamespaceOutcome DeleteRocketMQNamespace(const Model::DeleteRocketMQNamespaceRequest &request);
                void DeleteRocketMQNamespaceAsync(const Model::DeleteRocketMQNamespaceRequest& request, const DeleteRocketMQNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRocketMQNamespaceOutcomeCallable DeleteRocketMQNamespaceCallable(const Model::DeleteRocketMQNamespaceRequest& request);

                /**
                 *删除RocketMQ主题
                 * @param req DeleteRocketMQTopicRequest
                 * @return DeleteRocketMQTopicOutcome
                 */
                DeleteRocketMQTopicOutcome DeleteRocketMQTopic(const Model::DeleteRocketMQTopicRequest &request);
                void DeleteRocketMQTopicAsync(const Model::DeleteRocketMQTopicRequest& request, const DeleteRocketMQTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRocketMQTopicOutcomeCallable DeleteRocketMQTopicCallable(const Model::DeleteRocketMQTopicRequest& request);

                /**
                 *删除角色，支持批量。
                 * @param req DeleteRolesRequest
                 * @return DeleteRolesOutcome
                 */
                DeleteRolesOutcome DeleteRoles(const Model::DeleteRolesRequest &request);
                void DeleteRolesAsync(const Model::DeleteRolesRequest& request, const DeleteRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRolesOutcomeCallable DeleteRolesCallable(const Model::DeleteRolesRequest& request);

                /**
                 *删除订阅关系
                 * @param req DeleteSubscriptionsRequest
                 * @return DeleteSubscriptionsOutcome
                 */
                DeleteSubscriptionsOutcome DeleteSubscriptions(const Model::DeleteSubscriptionsRequest &request);
                void DeleteSubscriptionsAsync(const Model::DeleteSubscriptionsRequest& request, const DeleteSubscriptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSubscriptionsOutcomeCallable DeleteSubscriptionsCallable(const Model::DeleteSubscriptionsRequest& request);

                /**
                 *批量删除topics
                 * @param req DeleteTopicsRequest
                 * @return DeleteTopicsOutcome
                 */
                DeleteTopicsOutcome DeleteTopics(const Model::DeleteTopicsRequest &request);
                void DeleteTopicsAsync(const Model::DeleteTopicsRequest& request, const DeleteTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicsOutcomeCallable DeleteTopicsCallable(const Model::DeleteTopicsRequest& request);

                /**
                 *获取用户绑定的专享集群列表
                 * @param req DescribeBindClustersRequest
                 * @return DescribeBindClustersOutcome
                 */
                DescribeBindClustersOutcome DescribeBindClusters(const Model::DescribeBindClustersRequest &request);
                void DescribeBindClustersAsync(const Model::DescribeBindClustersRequest& request, const DescribeBindClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBindClustersOutcomeCallable DescribeBindClustersCallable(const Model::DescribeBindClustersRequest& request);

                /**
                 *获取租户VPC绑定关系
                 * @param req DescribeBindVpcsRequest
                 * @return DescribeBindVpcsOutcome
                 */
                DescribeBindVpcsOutcome DescribeBindVpcs(const Model::DescribeBindVpcsRequest &request);
                void DescribeBindVpcsAsync(const Model::DescribeBindVpcsRequest& request, const DescribeBindVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBindVpcsOutcomeCallable DescribeBindVpcsCallable(const Model::DescribeBindVpcsRequest& request);

                /**
                 *获取集群的详细信息
                 * @param req DescribeClusterDetailRequest
                 * @return DescribeClusterDetailOutcome
                 */
                DescribeClusterDetailOutcome DescribeClusterDetail(const Model::DescribeClusterDetailRequest &request);
                void DescribeClusterDetailAsync(const Model::DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterDetailOutcomeCallable DescribeClusterDetailCallable(const Model::DescribeClusterDetailRequest& request);

                /**
                 *获取集群列表
                 * @param req DescribeClustersRequest
                 * @return DescribeClustersOutcome
                 */
                DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest &request);
                void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request);

                /**
                 *枚举cmq死信队列源队列
                 * @param req DescribeCmqDeadLetterSourceQueuesRequest
                 * @return DescribeCmqDeadLetterSourceQueuesOutcome
                 */
                DescribeCmqDeadLetterSourceQueuesOutcome DescribeCmqDeadLetterSourceQueues(const Model::DescribeCmqDeadLetterSourceQueuesRequest &request);
                void DescribeCmqDeadLetterSourceQueuesAsync(const Model::DescribeCmqDeadLetterSourceQueuesRequest& request, const DescribeCmqDeadLetterSourceQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCmqDeadLetterSourceQueuesOutcomeCallable DescribeCmqDeadLetterSourceQueuesCallable(const Model::DescribeCmqDeadLetterSourceQueuesRequest& request);

                /**
                 *查询cmq队列详情
                 * @param req DescribeCmqQueueDetailRequest
                 * @return DescribeCmqQueueDetailOutcome
                 */
                DescribeCmqQueueDetailOutcome DescribeCmqQueueDetail(const Model::DescribeCmqQueueDetailRequest &request);
                void DescribeCmqQueueDetailAsync(const Model::DescribeCmqQueueDetailRequest& request, const DescribeCmqQueueDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCmqQueueDetailOutcomeCallable DescribeCmqQueueDetailCallable(const Model::DescribeCmqQueueDetailRequest& request);

                /**
                 *查询cmq全量队列
                 * @param req DescribeCmqQueuesRequest
                 * @return DescribeCmqQueuesOutcome
                 */
                DescribeCmqQueuesOutcome DescribeCmqQueues(const Model::DescribeCmqQueuesRequest &request);
                void DescribeCmqQueuesAsync(const Model::DescribeCmqQueuesRequest& request, const DescribeCmqQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCmqQueuesOutcomeCallable DescribeCmqQueuesCallable(const Model::DescribeCmqQueuesRequest& request);

                /**
                 *查询cmq订阅详情
                 * @param req DescribeCmqSubscriptionDetailRequest
                 * @return DescribeCmqSubscriptionDetailOutcome
                 */
                DescribeCmqSubscriptionDetailOutcome DescribeCmqSubscriptionDetail(const Model::DescribeCmqSubscriptionDetailRequest &request);
                void DescribeCmqSubscriptionDetailAsync(const Model::DescribeCmqSubscriptionDetailRequest& request, const DescribeCmqSubscriptionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCmqSubscriptionDetailOutcomeCallable DescribeCmqSubscriptionDetailCallable(const Model::DescribeCmqSubscriptionDetailRequest& request);

                /**
                 *查询cmq主题详情
                 * @param req DescribeCmqTopicDetailRequest
                 * @return DescribeCmqTopicDetailOutcome
                 */
                DescribeCmqTopicDetailOutcome DescribeCmqTopicDetail(const Model::DescribeCmqTopicDetailRequest &request);
                void DescribeCmqTopicDetailAsync(const Model::DescribeCmqTopicDetailRequest& request, const DescribeCmqTopicDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCmqTopicDetailOutcomeCallable DescribeCmqTopicDetailCallable(const Model::DescribeCmqTopicDetailRequest& request);

                /**
                 *枚举cmq全量主题
                 * @param req DescribeCmqTopicsRequest
                 * @return DescribeCmqTopicsOutcome
                 */
                DescribeCmqTopicsOutcome DescribeCmqTopics(const Model::DescribeCmqTopicsRequest &request);
                void DescribeCmqTopicsAsync(const Model::DescribeCmqTopicsRequest& request, const DescribeCmqTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCmqTopicsOutcomeCallable DescribeCmqTopicsCallable(const Model::DescribeCmqTopicsRequest& request);

                /**
                 *获取指定命名空间的属性
                 * @param req DescribeEnvironmentAttributesRequest
                 * @return DescribeEnvironmentAttributesOutcome
                 */
                DescribeEnvironmentAttributesOutcome DescribeEnvironmentAttributes(const Model::DescribeEnvironmentAttributesRequest &request);
                void DescribeEnvironmentAttributesAsync(const Model::DescribeEnvironmentAttributesRequest& request, const DescribeEnvironmentAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvironmentAttributesOutcomeCallable DescribeEnvironmentAttributesCallable(const Model::DescribeEnvironmentAttributesRequest& request);

                /**
                 *获取命名空间角色列表
                 * @param req DescribeEnvironmentRolesRequest
                 * @return DescribeEnvironmentRolesOutcome
                 */
                DescribeEnvironmentRolesOutcome DescribeEnvironmentRoles(const Model::DescribeEnvironmentRolesRequest &request);
                void DescribeEnvironmentRolesAsync(const Model::DescribeEnvironmentRolesRequest& request, const DescribeEnvironmentRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvironmentRolesOutcomeCallable DescribeEnvironmentRolesCallable(const Model::DescribeEnvironmentRolesRequest& request);

                /**
                 *获取租户下命名空间列表
                 * @param req DescribeEnvironmentsRequest
                 * @return DescribeEnvironmentsOutcome
                 */
                DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest &request);
                void DescribeEnvironmentsAsync(const Model::DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvironmentsOutcomeCallable DescribeEnvironmentsCallable(const Model::DescribeEnvironmentsRequest& request);

                /**
                 *运营端获取命名空间bundle列表
                 * @param req DescribeNamespaceBundlesOptRequest
                 * @return DescribeNamespaceBundlesOptOutcome
                 */
                DescribeNamespaceBundlesOptOutcome DescribeNamespaceBundlesOpt(const Model::DescribeNamespaceBundlesOptRequest &request);
                void DescribeNamespaceBundlesOptAsync(const Model::DescribeNamespaceBundlesOptRequest& request, const DescribeNamespaceBundlesOptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNamespaceBundlesOptOutcomeCallable DescribeNamespaceBundlesOptCallable(const Model::DescribeNamespaceBundlesOptRequest& request);

                /**
                 *运营端获节点健康状态
                 * @param req DescribeNodeHealthOptRequest
                 * @return DescribeNodeHealthOptOutcome
                 */
                DescribeNodeHealthOptOutcome DescribeNodeHealthOpt(const Model::DescribeNodeHealthOptRequest &request);
                void DescribeNodeHealthOptAsync(const Model::DescribeNodeHealthOptRequest& request, const DescribeNodeHealthOptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodeHealthOptOutcomeCallable DescribeNodeHealthOptCallable(const Model::DescribeNodeHealthOptRequest& request);

                /**
                 *获取生产者列表，仅显示在线的生产者
                 * @param req DescribeProducersRequest
                 * @return DescribeProducersOutcome
                 */
                DescribeProducersOutcome DescribeProducers(const Model::DescribeProducersRequest &request);
                void DescribeProducersAsync(const Model::DescribeProducersRequest& request, const DescribeProducersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProducersOutcomeCallable DescribeProducersCallable(const Model::DescribeProducersRequest& request);

                /**
                 *获取单个RocketMQ集群信息
                 * @param req DescribeRocketMQClusterRequest
                 * @return DescribeRocketMQClusterOutcome
                 */
                DescribeRocketMQClusterOutcome DescribeRocketMQCluster(const Model::DescribeRocketMQClusterRequest &request);
                void DescribeRocketMQClusterAsync(const Model::DescribeRocketMQClusterRequest& request, const DescribeRocketMQClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQClusterOutcomeCallable DescribeRocketMQClusterCallable(const Model::DescribeRocketMQClusterRequest& request);

                /**
                 *获取RocketMQ集群列表
                 * @param req DescribeRocketMQClustersRequest
                 * @return DescribeRocketMQClustersOutcome
                 */
                DescribeRocketMQClustersOutcome DescribeRocketMQClusters(const Model::DescribeRocketMQClustersRequest &request);
                void DescribeRocketMQClustersAsync(const Model::DescribeRocketMQClustersRequest& request, const DescribeRocketMQClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQClustersOutcomeCallable DescribeRocketMQClustersCallable(const Model::DescribeRocketMQClustersRequest& request);

                /**
                 *获取RocketMQ消费组列表
                 * @param req DescribeRocketMQGroupsRequest
                 * @return DescribeRocketMQGroupsOutcome
                 */
                DescribeRocketMQGroupsOutcome DescribeRocketMQGroups(const Model::DescribeRocketMQGroupsRequest &request);
                void DescribeRocketMQGroupsAsync(const Model::DescribeRocketMQGroupsRequest& request, const DescribeRocketMQGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQGroupsOutcomeCallable DescribeRocketMQGroupsCallable(const Model::DescribeRocketMQGroupsRequest& request);

                /**
                 *获取RocketMQ命名空间列表
                 * @param req DescribeRocketMQNamespacesRequest
                 * @return DescribeRocketMQNamespacesOutcome
                 */
                DescribeRocketMQNamespacesOutcome DescribeRocketMQNamespaces(const Model::DescribeRocketMQNamespacesRequest &request);
                void DescribeRocketMQNamespacesAsync(const Model::DescribeRocketMQNamespacesRequest& request, const DescribeRocketMQNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQNamespacesOutcomeCallable DescribeRocketMQNamespacesCallable(const Model::DescribeRocketMQNamespacesRequest& request);

                /**
                 *获取RocketMQ主题列表
                 * @param req DescribeRocketMQTopicsRequest
                 * @return DescribeRocketMQTopicsOutcome
                 */
                DescribeRocketMQTopicsOutcome DescribeRocketMQTopics(const Model::DescribeRocketMQTopicsRequest &request);
                void DescribeRocketMQTopicsAsync(const Model::DescribeRocketMQTopicsRequest& request, const DescribeRocketMQTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQTopicsOutcomeCallable DescribeRocketMQTopicsCallable(const Model::DescribeRocketMQTopicsRequest& request);

                /**
                 *获取角色列表
                 * @param req DescribeRolesRequest
                 * @return DescribeRolesOutcome
                 */
                DescribeRolesOutcome DescribeRoles(const Model::DescribeRolesRequest &request);
                void DescribeRolesAsync(const Model::DescribeRolesRequest& request, const DescribeRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRolesOutcomeCallable DescribeRolesCallable(const Model::DescribeRolesRequest& request);

                /**
                 *查询指定环境和主题下的订阅者列表
                 * @param req DescribeSubscriptionsRequest
                 * @return DescribeSubscriptionsOutcome
                 */
                DescribeSubscriptionsOutcome DescribeSubscriptions(const Model::DescribeSubscriptionsRequest &request);
                void DescribeSubscriptionsAsync(const Model::DescribeSubscriptionsRequest& request, const DescribeSubscriptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubscriptionsOutcomeCallable DescribeSubscriptionsCallable(const Model::DescribeSubscriptionsRequest& request);

                /**
                 *获取环境下主题列表
                 * @param req DescribeTopicsRequest
                 * @return DescribeTopicsOutcome
                 */
                DescribeTopicsOutcome DescribeTopics(const Model::DescribeTopicsRequest &request);
                void DescribeTopicsAsync(const Model::DescribeTopicsRequest& request, const DescribeTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicsOutcomeCallable DescribeTopicsCallable(const Model::DescribeTopicsRequest& request);

                /**
                 *更新集群信息
                 * @param req ModifyClusterRequest
                 * @return ModifyClusterOutcome
                 */
                ModifyClusterOutcome ModifyCluster(const Model::ModifyClusterRequest &request);
                void ModifyClusterAsync(const Model::ModifyClusterRequest& request, const ModifyClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterOutcomeCallable ModifyClusterCallable(const Model::ModifyClusterRequest& request);

                /**
                 *修改cmq队列属性
                 * @param req ModifyCmqQueueAttributeRequest
                 * @return ModifyCmqQueueAttributeOutcome
                 */
                ModifyCmqQueueAttributeOutcome ModifyCmqQueueAttribute(const Model::ModifyCmqQueueAttributeRequest &request);
                void ModifyCmqQueueAttributeAsync(const Model::ModifyCmqQueueAttributeRequest& request, const ModifyCmqQueueAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCmqQueueAttributeOutcomeCallable ModifyCmqQueueAttributeCallable(const Model::ModifyCmqQueueAttributeRequest& request);

                /**
                 *修改cmq订阅属性
                 * @param req ModifyCmqSubscriptionAttributeRequest
                 * @return ModifyCmqSubscriptionAttributeOutcome
                 */
                ModifyCmqSubscriptionAttributeOutcome ModifyCmqSubscriptionAttribute(const Model::ModifyCmqSubscriptionAttributeRequest &request);
                void ModifyCmqSubscriptionAttributeAsync(const Model::ModifyCmqSubscriptionAttributeRequest& request, const ModifyCmqSubscriptionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCmqSubscriptionAttributeOutcomeCallable ModifyCmqSubscriptionAttributeCallable(const Model::ModifyCmqSubscriptionAttributeRequest& request);

                /**
                 *修改cmq主题属性
                 * @param req ModifyCmqTopicAttributeRequest
                 * @return ModifyCmqTopicAttributeOutcome
                 */
                ModifyCmqTopicAttributeOutcome ModifyCmqTopicAttribute(const Model::ModifyCmqTopicAttributeRequest &request);
                void ModifyCmqTopicAttributeAsync(const Model::ModifyCmqTopicAttributeRequest& request, const ModifyCmqTopicAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCmqTopicAttributeOutcomeCallable ModifyCmqTopicAttributeCallable(const Model::ModifyCmqTopicAttributeRequest& request);

                /**
                 *修改指定命名空间的属性值
                 * @param req ModifyEnvironmentAttributesRequest
                 * @return ModifyEnvironmentAttributesOutcome
                 */
                ModifyEnvironmentAttributesOutcome ModifyEnvironmentAttributes(const Model::ModifyEnvironmentAttributesRequest &request);
                void ModifyEnvironmentAttributesAsync(const Model::ModifyEnvironmentAttributesRequest& request, const ModifyEnvironmentAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEnvironmentAttributesOutcomeCallable ModifyEnvironmentAttributesCallable(const Model::ModifyEnvironmentAttributesRequest& request);

                /**
                 *修改环境角色授权。
                 * @param req ModifyEnvironmentRoleRequest
                 * @return ModifyEnvironmentRoleOutcome
                 */
                ModifyEnvironmentRoleOutcome ModifyEnvironmentRole(const Model::ModifyEnvironmentRoleRequest &request);
                void ModifyEnvironmentRoleAsync(const Model::ModifyEnvironmentRoleRequest& request, const ModifyEnvironmentRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEnvironmentRoleOutcomeCallable ModifyEnvironmentRoleCallable(const Model::ModifyEnvironmentRoleRequest& request);

                /**
                 *更新RocketMQ集群信息
                 * @param req ModifyRocketMQClusterRequest
                 * @return ModifyRocketMQClusterOutcome
                 */
                ModifyRocketMQClusterOutcome ModifyRocketMQCluster(const Model::ModifyRocketMQClusterRequest &request);
                void ModifyRocketMQClusterAsync(const Model::ModifyRocketMQClusterRequest& request, const ModifyRocketMQClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRocketMQClusterOutcomeCallable ModifyRocketMQClusterCallable(const Model::ModifyRocketMQClusterRequest& request);

                /**
                 *更新RocketMQ消费组信息
                 * @param req ModifyRocketMQGroupRequest
                 * @return ModifyRocketMQGroupOutcome
                 */
                ModifyRocketMQGroupOutcome ModifyRocketMQGroup(const Model::ModifyRocketMQGroupRequest &request);
                void ModifyRocketMQGroupAsync(const Model::ModifyRocketMQGroupRequest& request, const ModifyRocketMQGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRocketMQGroupOutcomeCallable ModifyRocketMQGroupCallable(const Model::ModifyRocketMQGroupRequest& request);

                /**
                 *更新RocketMQ命名空间
                 * @param req ModifyRocketMQNamespaceRequest
                 * @return ModifyRocketMQNamespaceOutcome
                 */
                ModifyRocketMQNamespaceOutcome ModifyRocketMQNamespace(const Model::ModifyRocketMQNamespaceRequest &request);
                void ModifyRocketMQNamespaceAsync(const Model::ModifyRocketMQNamespaceRequest& request, const ModifyRocketMQNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRocketMQNamespaceOutcomeCallable ModifyRocketMQNamespaceCallable(const Model::ModifyRocketMQNamespaceRequest& request);

                /**
                 *更新RocketMQ主题信息
                 * @param req ModifyRocketMQTopicRequest
                 * @return ModifyRocketMQTopicOutcome
                 */
                ModifyRocketMQTopicOutcome ModifyRocketMQTopic(const Model::ModifyRocketMQTopicRequest &request);
                void ModifyRocketMQTopicAsync(const Model::ModifyRocketMQTopicRequest& request, const ModifyRocketMQTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRocketMQTopicOutcomeCallable ModifyRocketMQTopicCallable(const Model::ModifyRocketMQTopicRequest& request);

                /**
                 *角色修改
                 * @param req ModifyRoleRequest
                 * @return ModifyRoleOutcome
                 */
                ModifyRoleOutcome ModifyRole(const Model::ModifyRoleRequest &request);
                void ModifyRoleAsync(const Model::ModifyRoleRequest& request, const ModifyRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoleOutcomeCallable ModifyRoleCallable(const Model::ModifyRoleRequest& request);

                /**
                 *修改主题备注和分区数
                 * @param req ModifyTopicRequest
                 * @return ModifyTopicOutcome
                 */
                ModifyTopicOutcome ModifyTopic(const Model::ModifyTopicRequest &request);
                void ModifyTopicAsync(const Model::ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicOutcomeCallable ModifyTopicCallable(const Model::ModifyTopicRequest& request);

                /**
                 *发送cmq主题消息
                 * @param req PublishCmqMsgRequest
                 * @return PublishCmqMsgOutcome
                 */
                PublishCmqMsgOutcome PublishCmqMsg(const Model::PublishCmqMsgRequest &request);
                void PublishCmqMsgAsync(const Model::PublishCmqMsgRequest& request, const PublishCmqMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishCmqMsgOutcomeCallable PublishCmqMsgCallable(const Model::PublishCmqMsgRequest& request);

                /**
                 *接收发送到指定 topic 中的消息
                 * @param req ReceiveMessageRequest
                 * @return ReceiveMessageOutcome
                 */
                ReceiveMessageOutcome ReceiveMessage(const Model::ReceiveMessageRequest &request);
                void ReceiveMessageAsync(const Model::ReceiveMessageRequest& request, const ReceiveMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReceiveMessageOutcomeCallable ReceiveMessageCallable(const Model::ReceiveMessageRequest& request);

                /**
                 *根据时间戳进行消息回溯，精确到毫秒
                 * @param req ResetMsgSubOffsetByTimestampRequest
                 * @return ResetMsgSubOffsetByTimestampOutcome
                 */
                ResetMsgSubOffsetByTimestampOutcome ResetMsgSubOffsetByTimestamp(const Model::ResetMsgSubOffsetByTimestampRequest &request);
                void ResetMsgSubOffsetByTimestampAsync(const Model::ResetMsgSubOffsetByTimestampRequest& request, const ResetMsgSubOffsetByTimestampAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetMsgSubOffsetByTimestampOutcomeCallable ResetMsgSubOffsetByTimestampCallable(const Model::ResetMsgSubOffsetByTimestampRequest& request);

                /**
                 *回溯cmq队列
                 * @param req RewindCmqQueueRequest
                 * @return RewindCmqQueueOutcome
                 */
                RewindCmqQueueOutcome RewindCmqQueue(const Model::RewindCmqQueueRequest &request);
                void RewindCmqQueueAsync(const Model::RewindCmqQueueRequest& request, const RewindCmqQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RewindCmqQueueOutcomeCallable RewindCmqQueueCallable(const Model::RewindCmqQueueRequest& request);

                /**
                 *批量发送消息
                 * @param req SendBatchMessagesRequest
                 * @return SendBatchMessagesOutcome
                 */
                SendBatchMessagesOutcome SendBatchMessages(const Model::SendBatchMessagesRequest &request);
                void SendBatchMessagesAsync(const Model::SendBatchMessagesRequest& request, const SendBatchMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendBatchMessagesOutcomeCallable SendBatchMessagesCallable(const Model::SendBatchMessagesRequest& request);

                /**
                 *发送cmq消息
                 * @param req SendCmqMsgRequest
                 * @return SendCmqMsgOutcome
                 */
                SendCmqMsgOutcome SendCmqMsg(const Model::SendCmqMsgRequest &request);
                void SendCmqMsgAsync(const Model::SendCmqMsgRequest& request, const SendCmqMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendCmqMsgOutcomeCallable SendCmqMsgCallable(const Model::SendCmqMsgRequest& request);

                /**
                 *发送单条消息
                 * @param req SendMessagesRequest
                 * @return SendMessagesOutcome
                 */
                SendMessagesOutcome SendMessages(const Model::SendMessagesRequest &request);
                void SendMessagesAsync(const Model::SendMessagesRequest& request, const SendMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendMessagesOutcomeCallable SendMessagesCallable(const Model::SendMessagesRequest& request);

                /**
                 *此接口仅用于测试发生消息，不能作为现网正式生产使用
                 * @param req SendMsgRequest
                 * @return SendMsgOutcome
                 */
                SendMsgOutcome SendMsg(const Model::SendMsgRequest &request);
                void SendMsgAsync(const Model::SendMsgRequest& request, const SendMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendMsgOutcomeCallable SendMsgCallable(const Model::SendMsgRequest& request);

                /**
                 *解绑cmq死信队列
                 * @param req UnbindCmqDeadLetterRequest
                 * @return UnbindCmqDeadLetterOutcome
                 */
                UnbindCmqDeadLetterOutcome UnbindCmqDeadLetter(const Model::UnbindCmqDeadLetterRequest &request);
                void UnbindCmqDeadLetterAsync(const Model::UnbindCmqDeadLetterRequest& request, const UnbindCmqDeadLetterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindCmqDeadLetterOutcomeCallable UnbindCmqDeadLetterCallable(const Model::UnbindCmqDeadLetterRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_TDMQCLIENT_H_
