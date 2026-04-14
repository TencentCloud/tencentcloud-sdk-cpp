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
#include <tencentcloud/tdmq/v20200217/model/CreateProClusterRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateProClusterResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRabbitMQBindingRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRabbitMQBindingResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRabbitMQUserRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRabbitMQUserResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRabbitMQVipInstanceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRabbitMQVipInstanceResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRabbitMQVirtualHostRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRabbitMQVirtualHostResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQClusterRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQClusterResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQEnvironmentRoleRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQEnvironmentRoleResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQGroupRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQGroupResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQGroupV2Request.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQGroupV2Response.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQMigrationTaskRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQMigrationTaskResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQNamespaceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQNamespaceResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQRoleRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQRoleResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQTopicRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQTopicResponse.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQTopicV2Request.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQTopicV2Response.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQVipInstanceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQVipInstanceResponse.h>
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
#include <tencentcloud/tdmq/v20200217/model/DeleteProClusterRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteProClusterResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRabbitMQBindingRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRabbitMQBindingResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRabbitMQPermissionRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRabbitMQPermissionResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRabbitMQUserRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRabbitMQUserResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRabbitMQVipInstanceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRabbitMQVipInstanceResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRabbitMQVirtualHostRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRabbitMQVirtualHostResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQClusterRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQClusterResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQEnvironmentRolesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQEnvironmentRolesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQGroupRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQGroupResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQNamespaceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQNamespaceResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQRolesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQRolesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQTopicRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQTopicResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQVipInstanceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRocketMQVipInstanceResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRolesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteRolesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteSubscriptionsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteSubscriptionsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteTopicsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DeleteTopicsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeAMQPClustersRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeAMQPClustersResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeAllTenantsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeAllTenantsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeBindClustersRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeBindClustersResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeBindVpcsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeBindVpcsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeClusterDetailRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeClusterDetailResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeClustersRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeClustersResponse.h>
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
#include <tencentcloud/tdmq/v20200217/model/DescribeMqMsgTraceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeMqMsgTraceResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeMsgRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeMsgResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeMsgTraceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeMsgTraceResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeNamespaceBundlesOptRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeNamespaceBundlesOptResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeNodeHealthOptRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeNodeHealthOptResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribePublisherSummaryRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribePublisherSummaryResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribePublishersRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribePublishersResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribePulsarProInstanceDetailRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribePulsarProInstanceDetailResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribePulsarProInstancesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribePulsarProInstancesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQBindingsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQBindingsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQExchangesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQExchangesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQNodeListRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQNodeListResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQPermissionRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQPermissionResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQQueueDetailRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQQueueDetailResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQQueuesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQQueuesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQUserRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQUserResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQVipInstanceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQVipInstanceResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQVipInstancesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQVipInstancesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQVirtualHostRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQVirtualHostResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQClusterRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQClusterResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQClustersRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQClustersResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQConsumeStatsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQConsumeStatsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQConsumerConnectionDetailRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQConsumerConnectionDetailResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQConsumerConnectionsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQConsumerConnectionsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQEnvironmentRolesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQEnvironmentRolesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQGeneralSKUsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQGeneralSKUsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQGroupsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQGroupsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQMigratingTopicListRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQMigratingTopicListResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQMsgRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQMsgResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQMsgTraceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQMsgTraceResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQNamespacesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQNamespacesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQProducersRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQProducersResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQPublicAccessMonitorDataRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQPublicAccessMonitorDataResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQPublicAccessPointRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQPublicAccessPointResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQRolesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQRolesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQSmoothMigrationTaskRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQSmoothMigrationTaskResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQSubscriptionsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQSubscriptionsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopUsagesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopUsagesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopicRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopicResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopicMsgsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopicMsgsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopicStatsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopicStatsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopicsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopicsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopicsByGroupRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopicsByGroupResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQVipInstanceDetailRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQVipInstanceDetailResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQVipInstancesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQVipInstancesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRolesRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeRolesResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeSubscriptionsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeSubscriptionsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeTopicMsgsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeTopicMsgsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeTopicsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/DescribeTopicsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ExecuteDisasterRecoveryRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ExecuteDisasterRecoveryResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ExportRocketMQMessageDetailRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ExportRocketMQMessageDetailResponse.h>
#include <tencentcloud/tdmq/v20200217/model/GetTopicListRequest.h>
#include <tencentcloud/tdmq/v20200217/model/GetTopicListResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ImportRocketMQConsumerGroupsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ImportRocketMQConsumerGroupsResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ImportRocketMQTopicsRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ImportRocketMQTopicsResponse.h>
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
#include <tencentcloud/tdmq/v20200217/model/ModifyPublicNetworkSecurityPolicyRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyPublicNetworkSecurityPolicyResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRabbitMQPermissionRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRabbitMQPermissionResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRabbitMQUserRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRabbitMQUserResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRabbitMQVipInstanceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRabbitMQVipInstanceResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRabbitMQVirtualHostRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRabbitMQVirtualHostResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQClusterRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQClusterResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQEnvironmentRoleRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQEnvironmentRoleResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQGroupRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQGroupResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQInstanceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQInstanceResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQInstanceSpecRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQInstanceSpecResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQNamespaceRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQNamespaceResponse.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQRoleRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQRoleResponse.h>
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
#include <tencentcloud/tdmq/v20200217/model/ResetRocketMQConsumerOffSetRequest.h>
#include <tencentcloud/tdmq/v20200217/model/ResetRocketMQConsumerOffSetResponse.h>
#include <tencentcloud/tdmq/v20200217/model/RetryRocketMQDlqMessageRequest.h>
#include <tencentcloud/tdmq/v20200217/model/RetryRocketMQDlqMessageResponse.h>
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
#include <tencentcloud/tdmq/v20200217/model/SendRocketMQMessageRequest.h>
#include <tencentcloud/tdmq/v20200217/model/SendRocketMQMessageResponse.h>
#include <tencentcloud/tdmq/v20200217/model/SetRocketMQPublicAccessPointRequest.h>
#include <tencentcloud/tdmq/v20200217/model/SetRocketMQPublicAccessPointResponse.h>
#include <tencentcloud/tdmq/v20200217/model/UnbindCmqDeadLetterRequest.h>
#include <tencentcloud/tdmq/v20200217/model/UnbindCmqDeadLetterResponse.h>
#include <tencentcloud/tdmq/v20200217/model/VerifyRocketMQConsumeRequest.h>
#include <tencentcloud/tdmq/v20200217/model/VerifyRocketMQConsumeResponse.h>


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
                typedef Outcome<Core::Error, Model::CreateProClusterResponse> CreateProClusterOutcome;
                typedef std::future<CreateProClusterOutcome> CreateProClusterOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateProClusterRequest&, CreateProClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRabbitMQBindingResponse> CreateRabbitMQBindingOutcome;
                typedef std::future<CreateRabbitMQBindingOutcome> CreateRabbitMQBindingOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRabbitMQBindingRequest&, CreateRabbitMQBindingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRabbitMQBindingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRabbitMQUserResponse> CreateRabbitMQUserOutcome;
                typedef std::future<CreateRabbitMQUserOutcome> CreateRabbitMQUserOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRabbitMQUserRequest&, CreateRabbitMQUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRabbitMQUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRabbitMQVipInstanceResponse> CreateRabbitMQVipInstanceOutcome;
                typedef std::future<CreateRabbitMQVipInstanceOutcome> CreateRabbitMQVipInstanceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRabbitMQVipInstanceRequest&, CreateRabbitMQVipInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRabbitMQVipInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRabbitMQVirtualHostResponse> CreateRabbitMQVirtualHostOutcome;
                typedef std::future<CreateRabbitMQVirtualHostOutcome> CreateRabbitMQVirtualHostOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRabbitMQVirtualHostRequest&, CreateRabbitMQVirtualHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRabbitMQVirtualHostAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRocketMQClusterResponse> CreateRocketMQClusterOutcome;
                typedef std::future<CreateRocketMQClusterOutcome> CreateRocketMQClusterOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRocketMQClusterRequest&, CreateRocketMQClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRocketMQClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRocketMQEnvironmentRoleResponse> CreateRocketMQEnvironmentRoleOutcome;
                typedef std::future<CreateRocketMQEnvironmentRoleOutcome> CreateRocketMQEnvironmentRoleOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRocketMQEnvironmentRoleRequest&, CreateRocketMQEnvironmentRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRocketMQEnvironmentRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRocketMQGroupResponse> CreateRocketMQGroupOutcome;
                typedef std::future<CreateRocketMQGroupOutcome> CreateRocketMQGroupOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRocketMQGroupRequest&, CreateRocketMQGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRocketMQGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRocketMQGroupV2Response> CreateRocketMQGroupV2Outcome;
                typedef std::future<CreateRocketMQGroupV2Outcome> CreateRocketMQGroupV2OutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRocketMQGroupV2Request&, CreateRocketMQGroupV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRocketMQGroupV2AsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRocketMQMigrationTaskResponse> CreateRocketMQMigrationTaskOutcome;
                typedef std::future<CreateRocketMQMigrationTaskOutcome> CreateRocketMQMigrationTaskOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRocketMQMigrationTaskRequest&, CreateRocketMQMigrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRocketMQMigrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRocketMQNamespaceResponse> CreateRocketMQNamespaceOutcome;
                typedef std::future<CreateRocketMQNamespaceOutcome> CreateRocketMQNamespaceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRocketMQNamespaceRequest&, CreateRocketMQNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRocketMQNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRocketMQRoleResponse> CreateRocketMQRoleOutcome;
                typedef std::future<CreateRocketMQRoleOutcome> CreateRocketMQRoleOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRocketMQRoleRequest&, CreateRocketMQRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRocketMQRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRocketMQTopicResponse> CreateRocketMQTopicOutcome;
                typedef std::future<CreateRocketMQTopicOutcome> CreateRocketMQTopicOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRocketMQTopicRequest&, CreateRocketMQTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRocketMQTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRocketMQTopicV2Response> CreateRocketMQTopicV2Outcome;
                typedef std::future<CreateRocketMQTopicV2Outcome> CreateRocketMQTopicV2OutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRocketMQTopicV2Request&, CreateRocketMQTopicV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRocketMQTopicV2AsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRocketMQVipInstanceResponse> CreateRocketMQVipInstanceOutcome;
                typedef std::future<CreateRocketMQVipInstanceOutcome> CreateRocketMQVipInstanceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::CreateRocketMQVipInstanceRequest&, CreateRocketMQVipInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRocketMQVipInstanceAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteProClusterResponse> DeleteProClusterOutcome;
                typedef std::future<DeleteProClusterOutcome> DeleteProClusterOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteProClusterRequest&, DeleteProClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRabbitMQBindingResponse> DeleteRabbitMQBindingOutcome;
                typedef std::future<DeleteRabbitMQBindingOutcome> DeleteRabbitMQBindingOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRabbitMQBindingRequest&, DeleteRabbitMQBindingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRabbitMQBindingAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRabbitMQPermissionResponse> DeleteRabbitMQPermissionOutcome;
                typedef std::future<DeleteRabbitMQPermissionOutcome> DeleteRabbitMQPermissionOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRabbitMQPermissionRequest&, DeleteRabbitMQPermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRabbitMQPermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRabbitMQUserResponse> DeleteRabbitMQUserOutcome;
                typedef std::future<DeleteRabbitMQUserOutcome> DeleteRabbitMQUserOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRabbitMQUserRequest&, DeleteRabbitMQUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRabbitMQUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRabbitMQVipInstanceResponse> DeleteRabbitMQVipInstanceOutcome;
                typedef std::future<DeleteRabbitMQVipInstanceOutcome> DeleteRabbitMQVipInstanceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRabbitMQVipInstanceRequest&, DeleteRabbitMQVipInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRabbitMQVipInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRabbitMQVirtualHostResponse> DeleteRabbitMQVirtualHostOutcome;
                typedef std::future<DeleteRabbitMQVirtualHostOutcome> DeleteRabbitMQVirtualHostOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRabbitMQVirtualHostRequest&, DeleteRabbitMQVirtualHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRabbitMQVirtualHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRocketMQClusterResponse> DeleteRocketMQClusterOutcome;
                typedef std::future<DeleteRocketMQClusterOutcome> DeleteRocketMQClusterOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRocketMQClusterRequest&, DeleteRocketMQClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRocketMQClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRocketMQEnvironmentRolesResponse> DeleteRocketMQEnvironmentRolesOutcome;
                typedef std::future<DeleteRocketMQEnvironmentRolesOutcome> DeleteRocketMQEnvironmentRolesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRocketMQEnvironmentRolesRequest&, DeleteRocketMQEnvironmentRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRocketMQEnvironmentRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRocketMQGroupResponse> DeleteRocketMQGroupOutcome;
                typedef std::future<DeleteRocketMQGroupOutcome> DeleteRocketMQGroupOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRocketMQGroupRequest&, DeleteRocketMQGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRocketMQGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRocketMQNamespaceResponse> DeleteRocketMQNamespaceOutcome;
                typedef std::future<DeleteRocketMQNamespaceOutcome> DeleteRocketMQNamespaceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRocketMQNamespaceRequest&, DeleteRocketMQNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRocketMQNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRocketMQRolesResponse> DeleteRocketMQRolesOutcome;
                typedef std::future<DeleteRocketMQRolesOutcome> DeleteRocketMQRolesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRocketMQRolesRequest&, DeleteRocketMQRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRocketMQRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRocketMQTopicResponse> DeleteRocketMQTopicOutcome;
                typedef std::future<DeleteRocketMQTopicOutcome> DeleteRocketMQTopicOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRocketMQTopicRequest&, DeleteRocketMQTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRocketMQTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRocketMQVipInstanceResponse> DeleteRocketMQVipInstanceOutcome;
                typedef std::future<DeleteRocketMQVipInstanceOutcome> DeleteRocketMQVipInstanceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRocketMQVipInstanceRequest&, DeleteRocketMQVipInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRocketMQVipInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRolesResponse> DeleteRolesOutcome;
                typedef std::future<DeleteRolesOutcome> DeleteRolesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteRolesRequest&, DeleteRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSubscriptionsResponse> DeleteSubscriptionsOutcome;
                typedef std::future<DeleteSubscriptionsOutcome> DeleteSubscriptionsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteSubscriptionsRequest&, DeleteSubscriptionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubscriptionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicsResponse> DeleteTopicsOutcome;
                typedef std::future<DeleteTopicsOutcome> DeleteTopicsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DeleteTopicsRequest&, DeleteTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAMQPClustersResponse> DescribeAMQPClustersOutcome;
                typedef std::future<DescribeAMQPClustersOutcome> DescribeAMQPClustersOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeAMQPClustersRequest&, DescribeAMQPClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAMQPClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllTenantsResponse> DescribeAllTenantsOutcome;
                typedef std::future<DescribeAllTenantsOutcome> DescribeAllTenantsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeAllTenantsRequest&, DescribeAllTenantsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllTenantsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeMqMsgTraceResponse> DescribeMqMsgTraceOutcome;
                typedef std::future<DescribeMqMsgTraceOutcome> DescribeMqMsgTraceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeMqMsgTraceRequest&, DescribeMqMsgTraceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMqMsgTraceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMsgResponse> DescribeMsgOutcome;
                typedef std::future<DescribeMsgOutcome> DescribeMsgOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeMsgRequest&, DescribeMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMsgTraceResponse> DescribeMsgTraceOutcome;
                typedef std::future<DescribeMsgTraceOutcome> DescribeMsgTraceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeMsgTraceRequest&, DescribeMsgTraceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMsgTraceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNamespaceBundlesOptResponse> DescribeNamespaceBundlesOptOutcome;
                typedef std::future<DescribeNamespaceBundlesOptOutcome> DescribeNamespaceBundlesOptOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeNamespaceBundlesOptRequest&, DescribeNamespaceBundlesOptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespaceBundlesOptAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNodeHealthOptResponse> DescribeNodeHealthOptOutcome;
                typedef std::future<DescribeNodeHealthOptOutcome> DescribeNodeHealthOptOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeNodeHealthOptRequest&, DescribeNodeHealthOptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeHealthOptAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublisherSummaryResponse> DescribePublisherSummaryOutcome;
                typedef std::future<DescribePublisherSummaryOutcome> DescribePublisherSummaryOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribePublisherSummaryRequest&, DescribePublisherSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublisherSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublishersResponse> DescribePublishersOutcome;
                typedef std::future<DescribePublishersOutcome> DescribePublishersOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribePublishersRequest&, DescribePublishersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublishersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePulsarProInstanceDetailResponse> DescribePulsarProInstanceDetailOutcome;
                typedef std::future<DescribePulsarProInstanceDetailOutcome> DescribePulsarProInstanceDetailOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribePulsarProInstanceDetailRequest&, DescribePulsarProInstanceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePulsarProInstanceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePulsarProInstancesResponse> DescribePulsarProInstancesOutcome;
                typedef std::future<DescribePulsarProInstancesOutcome> DescribePulsarProInstancesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribePulsarProInstancesRequest&, DescribePulsarProInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePulsarProInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQBindingsResponse> DescribeRabbitMQBindingsOutcome;
                typedef std::future<DescribeRabbitMQBindingsOutcome> DescribeRabbitMQBindingsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRabbitMQBindingsRequest&, DescribeRabbitMQBindingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQBindingsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQExchangesResponse> DescribeRabbitMQExchangesOutcome;
                typedef std::future<DescribeRabbitMQExchangesOutcome> DescribeRabbitMQExchangesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRabbitMQExchangesRequest&, DescribeRabbitMQExchangesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQExchangesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQNodeListResponse> DescribeRabbitMQNodeListOutcome;
                typedef std::future<DescribeRabbitMQNodeListOutcome> DescribeRabbitMQNodeListOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRabbitMQNodeListRequest&, DescribeRabbitMQNodeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQNodeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQPermissionResponse> DescribeRabbitMQPermissionOutcome;
                typedef std::future<DescribeRabbitMQPermissionOutcome> DescribeRabbitMQPermissionOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRabbitMQPermissionRequest&, DescribeRabbitMQPermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQPermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQQueueDetailResponse> DescribeRabbitMQQueueDetailOutcome;
                typedef std::future<DescribeRabbitMQQueueDetailOutcome> DescribeRabbitMQQueueDetailOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRabbitMQQueueDetailRequest&, DescribeRabbitMQQueueDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQQueueDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQQueuesResponse> DescribeRabbitMQQueuesOutcome;
                typedef std::future<DescribeRabbitMQQueuesOutcome> DescribeRabbitMQQueuesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRabbitMQQueuesRequest&, DescribeRabbitMQQueuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQQueuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQUserResponse> DescribeRabbitMQUserOutcome;
                typedef std::future<DescribeRabbitMQUserOutcome> DescribeRabbitMQUserOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRabbitMQUserRequest&, DescribeRabbitMQUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQVipInstanceResponse> DescribeRabbitMQVipInstanceOutcome;
                typedef std::future<DescribeRabbitMQVipInstanceOutcome> DescribeRabbitMQVipInstanceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRabbitMQVipInstanceRequest&, DescribeRabbitMQVipInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQVipInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQVipInstancesResponse> DescribeRabbitMQVipInstancesOutcome;
                typedef std::future<DescribeRabbitMQVipInstancesOutcome> DescribeRabbitMQVipInstancesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRabbitMQVipInstancesRequest&, DescribeRabbitMQVipInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQVipInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQVirtualHostResponse> DescribeRabbitMQVirtualHostOutcome;
                typedef std::future<DescribeRabbitMQVirtualHostOutcome> DescribeRabbitMQVirtualHostOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRabbitMQVirtualHostRequest&, DescribeRabbitMQVirtualHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQVirtualHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQClusterResponse> DescribeRocketMQClusterOutcome;
                typedef std::future<DescribeRocketMQClusterOutcome> DescribeRocketMQClusterOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQClusterRequest&, DescribeRocketMQClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQClustersResponse> DescribeRocketMQClustersOutcome;
                typedef std::future<DescribeRocketMQClustersOutcome> DescribeRocketMQClustersOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQClustersRequest&, DescribeRocketMQClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQConsumeStatsResponse> DescribeRocketMQConsumeStatsOutcome;
                typedef std::future<DescribeRocketMQConsumeStatsOutcome> DescribeRocketMQConsumeStatsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQConsumeStatsRequest&, DescribeRocketMQConsumeStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQConsumeStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQConsumerConnectionDetailResponse> DescribeRocketMQConsumerConnectionDetailOutcome;
                typedef std::future<DescribeRocketMQConsumerConnectionDetailOutcome> DescribeRocketMQConsumerConnectionDetailOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQConsumerConnectionDetailRequest&, DescribeRocketMQConsumerConnectionDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQConsumerConnectionDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQConsumerConnectionsResponse> DescribeRocketMQConsumerConnectionsOutcome;
                typedef std::future<DescribeRocketMQConsumerConnectionsOutcome> DescribeRocketMQConsumerConnectionsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQConsumerConnectionsRequest&, DescribeRocketMQConsumerConnectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQConsumerConnectionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQEnvironmentRolesResponse> DescribeRocketMQEnvironmentRolesOutcome;
                typedef std::future<DescribeRocketMQEnvironmentRolesOutcome> DescribeRocketMQEnvironmentRolesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQEnvironmentRolesRequest&, DescribeRocketMQEnvironmentRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQEnvironmentRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQGeneralSKUsResponse> DescribeRocketMQGeneralSKUsOutcome;
                typedef std::future<DescribeRocketMQGeneralSKUsOutcome> DescribeRocketMQGeneralSKUsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQGeneralSKUsRequest&, DescribeRocketMQGeneralSKUsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQGeneralSKUsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQGroupsResponse> DescribeRocketMQGroupsOutcome;
                typedef std::future<DescribeRocketMQGroupsOutcome> DescribeRocketMQGroupsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQGroupsRequest&, DescribeRocketMQGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQMigratingTopicListResponse> DescribeRocketMQMigratingTopicListOutcome;
                typedef std::future<DescribeRocketMQMigratingTopicListOutcome> DescribeRocketMQMigratingTopicListOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQMigratingTopicListRequest&, DescribeRocketMQMigratingTopicListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQMigratingTopicListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQMsgResponse> DescribeRocketMQMsgOutcome;
                typedef std::future<DescribeRocketMQMsgOutcome> DescribeRocketMQMsgOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQMsgRequest&, DescribeRocketMQMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQMsgTraceResponse> DescribeRocketMQMsgTraceOutcome;
                typedef std::future<DescribeRocketMQMsgTraceOutcome> DescribeRocketMQMsgTraceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQMsgTraceRequest&, DescribeRocketMQMsgTraceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQMsgTraceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQNamespacesResponse> DescribeRocketMQNamespacesOutcome;
                typedef std::future<DescribeRocketMQNamespacesOutcome> DescribeRocketMQNamespacesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQNamespacesRequest&, DescribeRocketMQNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQProducersResponse> DescribeRocketMQProducersOutcome;
                typedef std::future<DescribeRocketMQProducersOutcome> DescribeRocketMQProducersOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQProducersRequest&, DescribeRocketMQProducersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQProducersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQPublicAccessMonitorDataResponse> DescribeRocketMQPublicAccessMonitorDataOutcome;
                typedef std::future<DescribeRocketMQPublicAccessMonitorDataOutcome> DescribeRocketMQPublicAccessMonitorDataOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQPublicAccessMonitorDataRequest&, DescribeRocketMQPublicAccessMonitorDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQPublicAccessMonitorDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQPublicAccessPointResponse> DescribeRocketMQPublicAccessPointOutcome;
                typedef std::future<DescribeRocketMQPublicAccessPointOutcome> DescribeRocketMQPublicAccessPointOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQPublicAccessPointRequest&, DescribeRocketMQPublicAccessPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQPublicAccessPointAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQRolesResponse> DescribeRocketMQRolesOutcome;
                typedef std::future<DescribeRocketMQRolesOutcome> DescribeRocketMQRolesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQRolesRequest&, DescribeRocketMQRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQSmoothMigrationTaskResponse> DescribeRocketMQSmoothMigrationTaskOutcome;
                typedef std::future<DescribeRocketMQSmoothMigrationTaskOutcome> DescribeRocketMQSmoothMigrationTaskOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQSmoothMigrationTaskRequest&, DescribeRocketMQSmoothMigrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQSmoothMigrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQSubscriptionsResponse> DescribeRocketMQSubscriptionsOutcome;
                typedef std::future<DescribeRocketMQSubscriptionsOutcome> DescribeRocketMQSubscriptionsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQSubscriptionsRequest&, DescribeRocketMQSubscriptionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQSubscriptionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQTopUsagesResponse> DescribeRocketMQTopUsagesOutcome;
                typedef std::future<DescribeRocketMQTopUsagesOutcome> DescribeRocketMQTopUsagesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQTopUsagesRequest&, DescribeRocketMQTopUsagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQTopUsagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQTopicResponse> DescribeRocketMQTopicOutcome;
                typedef std::future<DescribeRocketMQTopicOutcome> DescribeRocketMQTopicOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQTopicRequest&, DescribeRocketMQTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQTopicMsgsResponse> DescribeRocketMQTopicMsgsOutcome;
                typedef std::future<DescribeRocketMQTopicMsgsOutcome> DescribeRocketMQTopicMsgsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQTopicMsgsRequest&, DescribeRocketMQTopicMsgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQTopicMsgsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQTopicStatsResponse> DescribeRocketMQTopicStatsOutcome;
                typedef std::future<DescribeRocketMQTopicStatsOutcome> DescribeRocketMQTopicStatsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQTopicStatsRequest&, DescribeRocketMQTopicStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQTopicStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQTopicsResponse> DescribeRocketMQTopicsOutcome;
                typedef std::future<DescribeRocketMQTopicsOutcome> DescribeRocketMQTopicsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQTopicsRequest&, DescribeRocketMQTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQTopicsByGroupResponse> DescribeRocketMQTopicsByGroupOutcome;
                typedef std::future<DescribeRocketMQTopicsByGroupOutcome> DescribeRocketMQTopicsByGroupOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQTopicsByGroupRequest&, DescribeRocketMQTopicsByGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQTopicsByGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQVipInstanceDetailResponse> DescribeRocketMQVipInstanceDetailOutcome;
                typedef std::future<DescribeRocketMQVipInstanceDetailOutcome> DescribeRocketMQVipInstanceDetailOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQVipInstanceDetailRequest&, DescribeRocketMQVipInstanceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQVipInstanceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRocketMQVipInstancesResponse> DescribeRocketMQVipInstancesOutcome;
                typedef std::future<DescribeRocketMQVipInstancesOutcome> DescribeRocketMQVipInstancesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRocketMQVipInstancesRequest&, DescribeRocketMQVipInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRocketMQVipInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRolesResponse> DescribeRolesOutcome;
                typedef std::future<DescribeRolesOutcome> DescribeRolesOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeRolesRequest&, DescribeRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubscriptionsResponse> DescribeSubscriptionsOutcome;
                typedef std::future<DescribeSubscriptionsOutcome> DescribeSubscriptionsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeSubscriptionsRequest&, DescribeSubscriptionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscriptionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicMsgsResponse> DescribeTopicMsgsOutcome;
                typedef std::future<DescribeTopicMsgsOutcome> DescribeTopicMsgsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeTopicMsgsRequest&, DescribeTopicMsgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicMsgsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicsResponse> DescribeTopicsOutcome;
                typedef std::future<DescribeTopicsOutcome> DescribeTopicsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::DescribeTopicsRequest&, DescribeTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteDisasterRecoveryResponse> ExecuteDisasterRecoveryOutcome;
                typedef std::future<ExecuteDisasterRecoveryOutcome> ExecuteDisasterRecoveryOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ExecuteDisasterRecoveryRequest&, ExecuteDisasterRecoveryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteDisasterRecoveryAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRocketMQMessageDetailResponse> ExportRocketMQMessageDetailOutcome;
                typedef std::future<ExportRocketMQMessageDetailOutcome> ExportRocketMQMessageDetailOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ExportRocketMQMessageDetailRequest&, ExportRocketMQMessageDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRocketMQMessageDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTopicListResponse> GetTopicListOutcome;
                typedef std::future<GetTopicListOutcome> GetTopicListOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::GetTopicListRequest&, GetTopicListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTopicListAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportRocketMQConsumerGroupsResponse> ImportRocketMQConsumerGroupsOutcome;
                typedef std::future<ImportRocketMQConsumerGroupsOutcome> ImportRocketMQConsumerGroupsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ImportRocketMQConsumerGroupsRequest&, ImportRocketMQConsumerGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportRocketMQConsumerGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportRocketMQTopicsResponse> ImportRocketMQTopicsOutcome;
                typedef std::future<ImportRocketMQTopicsOutcome> ImportRocketMQTopicsOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ImportRocketMQTopicsRequest&, ImportRocketMQTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportRocketMQTopicsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyPublicNetworkSecurityPolicyResponse> ModifyPublicNetworkSecurityPolicyOutcome;
                typedef std::future<ModifyPublicNetworkSecurityPolicyOutcome> ModifyPublicNetworkSecurityPolicyOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyPublicNetworkSecurityPolicyRequest&, ModifyPublicNetworkSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPublicNetworkSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRabbitMQPermissionResponse> ModifyRabbitMQPermissionOutcome;
                typedef std::future<ModifyRabbitMQPermissionOutcome> ModifyRabbitMQPermissionOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRabbitMQPermissionRequest&, ModifyRabbitMQPermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRabbitMQPermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRabbitMQUserResponse> ModifyRabbitMQUserOutcome;
                typedef std::future<ModifyRabbitMQUserOutcome> ModifyRabbitMQUserOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRabbitMQUserRequest&, ModifyRabbitMQUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRabbitMQUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRabbitMQVipInstanceResponse> ModifyRabbitMQVipInstanceOutcome;
                typedef std::future<ModifyRabbitMQVipInstanceOutcome> ModifyRabbitMQVipInstanceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRabbitMQVipInstanceRequest&, ModifyRabbitMQVipInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRabbitMQVipInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRabbitMQVirtualHostResponse> ModifyRabbitMQVirtualHostOutcome;
                typedef std::future<ModifyRabbitMQVirtualHostOutcome> ModifyRabbitMQVirtualHostOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRabbitMQVirtualHostRequest&, ModifyRabbitMQVirtualHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRabbitMQVirtualHostAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRocketMQClusterResponse> ModifyRocketMQClusterOutcome;
                typedef std::future<ModifyRocketMQClusterOutcome> ModifyRocketMQClusterOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRocketMQClusterRequest&, ModifyRocketMQClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRocketMQClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRocketMQEnvironmentRoleResponse> ModifyRocketMQEnvironmentRoleOutcome;
                typedef std::future<ModifyRocketMQEnvironmentRoleOutcome> ModifyRocketMQEnvironmentRoleOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRocketMQEnvironmentRoleRequest&, ModifyRocketMQEnvironmentRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRocketMQEnvironmentRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRocketMQGroupResponse> ModifyRocketMQGroupOutcome;
                typedef std::future<ModifyRocketMQGroupOutcome> ModifyRocketMQGroupOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRocketMQGroupRequest&, ModifyRocketMQGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRocketMQGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRocketMQInstanceResponse> ModifyRocketMQInstanceOutcome;
                typedef std::future<ModifyRocketMQInstanceOutcome> ModifyRocketMQInstanceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRocketMQInstanceRequest&, ModifyRocketMQInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRocketMQInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRocketMQInstanceSpecResponse> ModifyRocketMQInstanceSpecOutcome;
                typedef std::future<ModifyRocketMQInstanceSpecOutcome> ModifyRocketMQInstanceSpecOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRocketMQInstanceSpecRequest&, ModifyRocketMQInstanceSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRocketMQInstanceSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRocketMQNamespaceResponse> ModifyRocketMQNamespaceOutcome;
                typedef std::future<ModifyRocketMQNamespaceOutcome> ModifyRocketMQNamespaceOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRocketMQNamespaceRequest&, ModifyRocketMQNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRocketMQNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRocketMQRoleResponse> ModifyRocketMQRoleOutcome;
                typedef std::future<ModifyRocketMQRoleOutcome> ModifyRocketMQRoleOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ModifyRocketMQRoleRequest&, ModifyRocketMQRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRocketMQRoleAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ResetRocketMQConsumerOffSetResponse> ResetRocketMQConsumerOffSetOutcome;
                typedef std::future<ResetRocketMQConsumerOffSetOutcome> ResetRocketMQConsumerOffSetOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::ResetRocketMQConsumerOffSetRequest&, ResetRocketMQConsumerOffSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetRocketMQConsumerOffSetAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryRocketMQDlqMessageResponse> RetryRocketMQDlqMessageOutcome;
                typedef std::future<RetryRocketMQDlqMessageOutcome> RetryRocketMQDlqMessageOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::RetryRocketMQDlqMessageRequest&, RetryRocketMQDlqMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryRocketMQDlqMessageAsyncHandler;
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
                typedef Outcome<Core::Error, Model::SendRocketMQMessageResponse> SendRocketMQMessageOutcome;
                typedef std::future<SendRocketMQMessageOutcome> SendRocketMQMessageOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::SendRocketMQMessageRequest&, SendRocketMQMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendRocketMQMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::SetRocketMQPublicAccessPointResponse> SetRocketMQPublicAccessPointOutcome;
                typedef std::future<SetRocketMQPublicAccessPointOutcome> SetRocketMQPublicAccessPointOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::SetRocketMQPublicAccessPointRequest&, SetRocketMQPublicAccessPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetRocketMQPublicAccessPointAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindCmqDeadLetterResponse> UnbindCmqDeadLetterOutcome;
                typedef std::future<UnbindCmqDeadLetterOutcome> UnbindCmqDeadLetterOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::UnbindCmqDeadLetterRequest&, UnbindCmqDeadLetterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindCmqDeadLetterAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyRocketMQConsumeResponse> VerifyRocketMQConsumeOutcome;
                typedef std::future<VerifyRocketMQConsumeOutcome> VerifyRocketMQConsumeOutcomeCallable;
                typedef std::function<void(const TdmqClient*, const Model::VerifyRocketMQConsumeRequest&, VerifyRocketMQConsumeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyRocketMQConsumeAsyncHandler;



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
                 *创建专业集群——预付费，仅通过api调用
                 * @param req CreateProClusterRequest
                 * @return CreateProClusterOutcome
                 */
                CreateProClusterOutcome CreateProCluster(const Model::CreateProClusterRequest &request);
                void CreateProClusterAsync(const Model::CreateProClusterRequest& request, const CreateProClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProClusterOutcomeCallable CreateProClusterCallable(const Model::CreateProClusterRequest& request);

                /**
                 *创建RabbitMQ路由关系
                 * @param req CreateRabbitMQBindingRequest
                 * @return CreateRabbitMQBindingOutcome
                 */
                CreateRabbitMQBindingOutcome CreateRabbitMQBinding(const Model::CreateRabbitMQBindingRequest &request);
                void CreateRabbitMQBindingAsync(const Model::CreateRabbitMQBindingRequest& request, const CreateRabbitMQBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRabbitMQBindingOutcomeCallable CreateRabbitMQBindingCallable(const Model::CreateRabbitMQBindingRequest& request);

                /**
                 *创建RabbitMQ的用户
                 * @param req CreateRabbitMQUserRequest
                 * @return CreateRabbitMQUserOutcome
                 */
                CreateRabbitMQUserOutcome CreateRabbitMQUser(const Model::CreateRabbitMQUserRequest &request);
                void CreateRabbitMQUserAsync(const Model::CreateRabbitMQUserRequest& request, const CreateRabbitMQUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRabbitMQUserOutcomeCallable CreateRabbitMQUserCallable(const Model::CreateRabbitMQUserRequest& request);

                /**
                 *创建 RabbitMQ 托管版实例
                 * @param req CreateRabbitMQVipInstanceRequest
                 * @return CreateRabbitMQVipInstanceOutcome
                 */
                CreateRabbitMQVipInstanceOutcome CreateRabbitMQVipInstance(const Model::CreateRabbitMQVipInstanceRequest &request);
                void CreateRabbitMQVipInstanceAsync(const Model::CreateRabbitMQVipInstanceRequest& request, const CreateRabbitMQVipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRabbitMQVipInstanceOutcomeCallable CreateRabbitMQVipInstanceCallable(const Model::CreateRabbitMQVipInstanceRequest& request);

                /**
                 *创建RabbitMQ的vhost
                 * @param req CreateRabbitMQVirtualHostRequest
                 * @return CreateRabbitMQVirtualHostOutcome
                 */
                CreateRabbitMQVirtualHostOutcome CreateRabbitMQVirtualHost(const Model::CreateRabbitMQVirtualHostRequest &request);
                void CreateRabbitMQVirtualHostAsync(const Model::CreateRabbitMQVirtualHostRequest& request, const CreateRabbitMQVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRabbitMQVirtualHostOutcomeCallable CreateRabbitMQVirtualHostCallable(const Model::CreateRabbitMQVirtualHostRequest& request);

                /**
                 *创建 RocketMQ 集群。
当前 API 适用集群：4.x 虚拟集群。创建 4.x 专享或通用集群的接口文档见 [CreateRocketMQVipInstance](https://cloud.tencent.com/document/api/1179/95721)，创建 5.x 集群接口文档见 [CreateInstance](https://cloud.tencent.com/document/api/1493/97868)。
                 * @param req CreateRocketMQClusterRequest
                 * @return CreateRocketMQClusterOutcome
                 */
                CreateRocketMQClusterOutcome CreateRocketMQCluster(const Model::CreateRocketMQClusterRequest &request);
                void CreateRocketMQClusterAsync(const Model::CreateRocketMQClusterRequest& request, const CreateRocketMQClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRocketMQClusterOutcomeCallable CreateRocketMQClusterCallable(const Model::CreateRocketMQClusterRequest& request);

                /**
                 *创建角色授权。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群的创建角色接口文档见 [CreateRole](https://cloud.tencent.com/document/api/1493/98864)。
                 * @param req CreateRocketMQEnvironmentRoleRequest
                 * @return CreateRocketMQEnvironmentRoleOutcome
                 */
                CreateRocketMQEnvironmentRoleOutcome CreateRocketMQEnvironmentRole(const Model::CreateRocketMQEnvironmentRoleRequest &request);
                void CreateRocketMQEnvironmentRoleAsync(const Model::CreateRocketMQEnvironmentRoleRequest& request, const CreateRocketMQEnvironmentRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRocketMQEnvironmentRoleOutcomeCallable CreateRocketMQEnvironmentRoleCallable(const Model::CreateRocketMQEnvironmentRoleRequest& request);

                /**
                 *创建 RocketMQ 消费组。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。创建 5.x 集群消费组的接口文档见 [CreateConsumerGroup](https://cloud.tencent.com/document/api/1493/97943)。
                 * @param req CreateRocketMQGroupRequest
                 * @return CreateRocketMQGroupOutcome
                 */
                CreateRocketMQGroupOutcome CreateRocketMQGroup(const Model::CreateRocketMQGroupRequest &request);
                void CreateRocketMQGroupAsync(const Model::CreateRocketMQGroupRequest& request, const CreateRocketMQGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRocketMQGroupOutcomeCallable CreateRocketMQGroupCallable(const Model::CreateRocketMQGroupRequest& request);

                /**
                 *创建 RocketMQ 消费组。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。创建 5.x 集群消费组的接口文档见 [CreateConsumerGroup](https://cloud.tencent.com/document/api/1493/97943)。
                 * @param req CreateRocketMQGroupV2Request
                 * @return CreateRocketMQGroupV2Outcome
                 */
                CreateRocketMQGroupV2Outcome CreateRocketMQGroupV2(const Model::CreateRocketMQGroupV2Request &request);
                void CreateRocketMQGroupV2Async(const Model::CreateRocketMQGroupV2Request& request, const CreateRocketMQGroupV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRocketMQGroupV2OutcomeCallable CreateRocketMQGroupV2Callable(const Model::CreateRocketMQGroupV2Request& request);

                /**
                 *创建RocketMQ元数据迁移任务，用于批量创建主题和消费组数据
                 * @param req CreateRocketMQMigrationTaskRequest
                 * @return CreateRocketMQMigrationTaskOutcome
                 */
                CreateRocketMQMigrationTaskOutcome CreateRocketMQMigrationTask(const Model::CreateRocketMQMigrationTaskRequest &request);
                void CreateRocketMQMigrationTaskAsync(const Model::CreateRocketMQMigrationTaskRequest& request, const CreateRocketMQMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRocketMQMigrationTaskOutcomeCallable CreateRocketMQMigrationTaskCallable(const Model::CreateRocketMQMigrationTaskRequest& request);

                /**
                 *创建 RocketMQ 命名空间。
当前 API 适用集群：4.x 虚拟集群和 4.x 专享集群，其他集群类型均不支持该功能。
                 * @param req CreateRocketMQNamespaceRequest
                 * @return CreateRocketMQNamespaceOutcome
                 */
                CreateRocketMQNamespaceOutcome CreateRocketMQNamespace(const Model::CreateRocketMQNamespaceRequest &request);
                void CreateRocketMQNamespaceAsync(const Model::CreateRocketMQNamespaceRequest& request, const CreateRocketMQNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRocketMQNamespaceOutcomeCallable CreateRocketMQNamespaceCallable(const Model::CreateRocketMQNamespaceRequest& request);

                /**
                 *创建角色。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群的创建角色接口文档见 [CreateRole](https://cloud.tencent.com/document/api/1493/98864)。
                 * @param req CreateRocketMQRoleRequest
                 * @return CreateRocketMQRoleOutcome
                 */
                CreateRocketMQRoleOutcome CreateRocketMQRole(const Model::CreateRocketMQRoleRequest &request);
                void CreateRocketMQRoleAsync(const Model::CreateRocketMQRoleRequest& request, const CreateRocketMQRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRocketMQRoleOutcomeCallable CreateRocketMQRoleCallable(const Model::CreateRocketMQRoleRequest& request);

                /**
                 *批量创建 RocketMQ 主题。
当前云 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群的创建 Topic 接口文档见 [CreateTopic](https://cloud.tencent.com/document/api/1493/97947)。
                 * @param req CreateRocketMQTopicRequest
                 * @return CreateRocketMQTopicOutcome
                 */
                CreateRocketMQTopicOutcome CreateRocketMQTopic(const Model::CreateRocketMQTopicRequest &request);
                void CreateRocketMQTopicAsync(const Model::CreateRocketMQTopicRequest& request, const CreateRocketMQTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRocketMQTopicOutcomeCallable CreateRocketMQTopicCallable(const Model::CreateRocketMQTopicRequest& request);

                /**
                 *创建 RocketMQ 主题。
当前云 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群的创建 Topic 接口文档见 [CreateTopic](https://cloud.tencent.com/document/api/1493/97947)。
                 * @param req CreateRocketMQTopicV2Request
                 * @return CreateRocketMQTopicV2Outcome
                 */
                CreateRocketMQTopicV2Outcome CreateRocketMQTopicV2(const Model::CreateRocketMQTopicV2Request &request);
                void CreateRocketMQTopicV2Async(const Model::CreateRocketMQTopicV2Request& request, const CreateRocketMQTopicV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRocketMQTopicV2OutcomeCallable CreateRocketMQTopicV2Callable(const Model::CreateRocketMQTopicV2Request& request);

                /**
                 *创建 RocketMQ 4.x 集群。
当前 API 适用集群：4.x 专享集群 和 4.x 通用集群。创建 5.x 集群的接口文档见 [CreateInstance](https://cloud.tencent.com/document/api/1493/97868)。
                 * @param req CreateRocketMQVipInstanceRequest
                 * @return CreateRocketMQVipInstanceOutcome
                 */
                CreateRocketMQVipInstanceOutcome CreateRocketMQVipInstance(const Model::CreateRocketMQVipInstanceRequest &request);
                void CreateRocketMQVipInstanceAsync(const Model::CreateRocketMQVipInstanceRequest& request, const CreateRocketMQVipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRocketMQVipInstanceOutcomeCallable CreateRocketMQVipInstanceCallable(const Model::CreateRocketMQVipInstanceRequest& request);

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
                 *删除专业集群——预付费，仅通过API 调用
                 * @param req DeleteProClusterRequest
                 * @return DeleteProClusterOutcome
                 */
                DeleteProClusterOutcome DeleteProCluster(const Model::DeleteProClusterRequest &request);
                void DeleteProClusterAsync(const Model::DeleteProClusterRequest& request, const DeleteProClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProClusterOutcomeCallable DeleteProClusterCallable(const Model::DeleteProClusterRequest& request);

                /**
                 *解绑RabbitMQ路由关系
                 * @param req DeleteRabbitMQBindingRequest
                 * @return DeleteRabbitMQBindingOutcome
                 */
                DeleteRabbitMQBindingOutcome DeleteRabbitMQBinding(const Model::DeleteRabbitMQBindingRequest &request);
                void DeleteRabbitMQBindingAsync(const Model::DeleteRabbitMQBindingRequest& request, const DeleteRabbitMQBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRabbitMQBindingOutcomeCallable DeleteRabbitMQBindingCallable(const Model::DeleteRabbitMQBindingRequest& request);

                /**
                 *删除RabbitMQ的权限
                 * @param req DeleteRabbitMQPermissionRequest
                 * @return DeleteRabbitMQPermissionOutcome
                 */
                DeleteRabbitMQPermissionOutcome DeleteRabbitMQPermission(const Model::DeleteRabbitMQPermissionRequest &request);
                void DeleteRabbitMQPermissionAsync(const Model::DeleteRabbitMQPermissionRequest& request, const DeleteRabbitMQPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRabbitMQPermissionOutcomeCallable DeleteRabbitMQPermissionCallable(const Model::DeleteRabbitMQPermissionRequest& request);

                /**
                 *删除RabbitMQ的用户
                 * @param req DeleteRabbitMQUserRequest
                 * @return DeleteRabbitMQUserOutcome
                 */
                DeleteRabbitMQUserOutcome DeleteRabbitMQUser(const Model::DeleteRabbitMQUserRequest &request);
                void DeleteRabbitMQUserAsync(const Model::DeleteRabbitMQUserRequest& request, const DeleteRabbitMQUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRabbitMQUserOutcomeCallable DeleteRabbitMQUserCallable(const Model::DeleteRabbitMQUserRequest& request);

                /**
                 *删除 RabbitMQ 托管版实例
                 * @param req DeleteRabbitMQVipInstanceRequest
                 * @return DeleteRabbitMQVipInstanceOutcome
                 */
                DeleteRabbitMQVipInstanceOutcome DeleteRabbitMQVipInstance(const Model::DeleteRabbitMQVipInstanceRequest &request);
                void DeleteRabbitMQVipInstanceAsync(const Model::DeleteRabbitMQVipInstanceRequest& request, const DeleteRabbitMQVipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRabbitMQVipInstanceOutcomeCallable DeleteRabbitMQVipInstanceCallable(const Model::DeleteRabbitMQVipInstanceRequest& request);

                /**
                 *删除RabbitMQ的vhost
                 * @param req DeleteRabbitMQVirtualHostRequest
                 * @return DeleteRabbitMQVirtualHostOutcome
                 */
                DeleteRabbitMQVirtualHostOutcome DeleteRabbitMQVirtualHost(const Model::DeleteRabbitMQVirtualHostRequest &request);
                void DeleteRabbitMQVirtualHostAsync(const Model::DeleteRabbitMQVirtualHostRequest& request, const DeleteRabbitMQVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRabbitMQVirtualHostOutcomeCallable DeleteRabbitMQVirtualHostCallable(const Model::DeleteRabbitMQVirtualHostRequest& request);

                /**
                 *删除 RocketMQ 集群。
当前 API 适用集群：4.x 虚拟集群。删除 4.x 专享或通用集群的接口文档见 [DeleteRocketMQVipInstance](https://cloud.tencent.com/document/api/1179/95802)，删除 5.x 集群的接口文档见 [DeleteInstance](https://cloud.tencent.com/document/product/1493/97867)。
                 * @param req DeleteRocketMQClusterRequest
                 * @return DeleteRocketMQClusterOutcome
                 */
                DeleteRocketMQClusterOutcome DeleteRocketMQCluster(const Model::DeleteRocketMQClusterRequest &request);
                void DeleteRocketMQClusterAsync(const Model::DeleteRocketMQClusterRequest& request, const DeleteRocketMQClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRocketMQClusterOutcomeCallable DeleteRocketMQClusterCallable(const Model::DeleteRocketMQClusterRequest& request);

                /**
                 *批量删除角色授权。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群的删除角色接口文档见 [DeleteRole](https://cloud.tencent.com/document/api/1493/98863)。
                 * @param req DeleteRocketMQEnvironmentRolesRequest
                 * @return DeleteRocketMQEnvironmentRolesOutcome
                 */
                DeleteRocketMQEnvironmentRolesOutcome DeleteRocketMQEnvironmentRoles(const Model::DeleteRocketMQEnvironmentRolesRequest &request);
                void DeleteRocketMQEnvironmentRolesAsync(const Model::DeleteRocketMQEnvironmentRolesRequest& request, const DeleteRocketMQEnvironmentRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRocketMQEnvironmentRolesOutcomeCallable DeleteRocketMQEnvironmentRolesCallable(const Model::DeleteRocketMQEnvironmentRolesRequest& request);

                /**
                 *删除 RocketMQ 消费组。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。删除 5.x 集群消费组的接口文档见 [DeleteConsumerGroup](https://cloud.tencent.com/document/api/1493/97942)。
                 * @param req DeleteRocketMQGroupRequest
                 * @return DeleteRocketMQGroupOutcome
                 */
                DeleteRocketMQGroupOutcome DeleteRocketMQGroup(const Model::DeleteRocketMQGroupRequest &request);
                void DeleteRocketMQGroupAsync(const Model::DeleteRocketMQGroupRequest& request, const DeleteRocketMQGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRocketMQGroupOutcomeCallable DeleteRocketMQGroupCallable(const Model::DeleteRocketMQGroupRequest& request);

                /**
                 *删除 RocketMQ 命名空间。
当前 API 适用集群：4.x 虚拟集群和 4.x 专享集群，其他集群类型均不支持该功能。
                 * @param req DeleteRocketMQNamespaceRequest
                 * @return DeleteRocketMQNamespaceOutcome
                 */
                DeleteRocketMQNamespaceOutcome DeleteRocketMQNamespace(const Model::DeleteRocketMQNamespaceRequest &request);
                void DeleteRocketMQNamespaceAsync(const Model::DeleteRocketMQNamespaceRequest& request, const DeleteRocketMQNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRocketMQNamespaceOutcomeCallable DeleteRocketMQNamespaceCallable(const Model::DeleteRocketMQNamespaceRequest& request);

                /**
                 *批量删除角色。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群的删除角色接口文档见 [DeleteRole](https://cloud.tencent.com/document/api/1493/98863)。
                 * @param req DeleteRocketMQRolesRequest
                 * @return DeleteRocketMQRolesOutcome
                 */
                DeleteRocketMQRolesOutcome DeleteRocketMQRoles(const Model::DeleteRocketMQRolesRequest &request);
                void DeleteRocketMQRolesAsync(const Model::DeleteRocketMQRolesRequest& request, const DeleteRocketMQRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRocketMQRolesOutcomeCallable DeleteRocketMQRolesCallable(const Model::DeleteRocketMQRolesRequest& request);

                /**
                 *删除 RocketMQ 主题。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。删除 5.x 集群主题的接口文档见 [DeleteTopic](https://cloud.tencent.com/document/api/1493/97946)。
                 * @param req DeleteRocketMQTopicRequest
                 * @return DeleteRocketMQTopicOutcome
                 */
                DeleteRocketMQTopicOutcome DeleteRocketMQTopic(const Model::DeleteRocketMQTopicRequest &request);
                void DeleteRocketMQTopicAsync(const Model::DeleteRocketMQTopicRequest& request, const DeleteRocketMQTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRocketMQTopicOutcomeCallable DeleteRocketMQTopicCallable(const Model::DeleteRocketMQTopicRequest& request);

                /**
                 *删除 RocketMQ 专享或通用集群。
当前 API 适用集群：4.x 专享集群 和 4.x 通用集群。删除 5.x 集群的接口文档见 [DeleteInstance](https://cloud.tencent.com/document/api/1493/97867)。
                 * @param req DeleteRocketMQVipInstanceRequest
                 * @return DeleteRocketMQVipInstanceOutcome
                 */
                DeleteRocketMQVipInstanceOutcome DeleteRocketMQVipInstance(const Model::DeleteRocketMQVipInstanceRequest &request);
                void DeleteRocketMQVipInstanceAsync(const Model::DeleteRocketMQVipInstanceRequest& request, const DeleteRocketMQVipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRocketMQVipInstanceOutcomeCallable DeleteRocketMQVipInstanceCallable(const Model::DeleteRocketMQVipInstanceRequest& request);

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
                 *历史原因，该接口位于tdmq-manager，目前rabbitmq产品没有使用该接口，当前使用的是DescribeRabbitMQVipInstances。不过从调用链上看，线网还有请求流程，所以走预下线流程。

获取amqp集群列表
                 * @param req DescribeAMQPClustersRequest
                 * @return DescribeAMQPClustersOutcome
                 */
                DescribeAMQPClustersOutcome DescribeAMQPClusters(const Model::DescribeAMQPClustersRequest &request);
                void DescribeAMQPClustersAsync(const Model::DescribeAMQPClustersRequest& request, const DescribeAMQPClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAMQPClustersOutcomeCallable DescribeAMQPClustersCallable(const Model::DescribeAMQPClustersRequest& request);

                /**
                 *获取某个租户的虚拟集群列表
                 * @param req DescribeAllTenantsRequest
                 * @return DescribeAllTenantsOutcome
                 */
                DescribeAllTenantsOutcome DescribeAllTenants(const Model::DescribeAllTenantsRequest &request);
                void DescribeAllTenantsAsync(const Model::DescribeAllTenantsRequest& request, const DescribeAllTenantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllTenantsOutcomeCallable DescribeAllTenantsCallable(const Model::DescribeAllTenantsRequest& request);

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
                 *查询消息轨迹
                 * @param req DescribeMqMsgTraceRequest
                 * @return DescribeMqMsgTraceOutcome
                 */
                DescribeMqMsgTraceOutcome DescribeMqMsgTrace(const Model::DescribeMqMsgTraceRequest &request);
                void DescribeMqMsgTraceAsync(const Model::DescribeMqMsgTraceRequest& request, const DescribeMqMsgTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMqMsgTraceOutcomeCallable DescribeMqMsgTraceCallable(const Model::DescribeMqMsgTraceRequest& request);

                /**
                 *消息详情
                 * @param req DescribeMsgRequest
                 * @return DescribeMsgOutcome
                 */
                DescribeMsgOutcome DescribeMsg(const Model::DescribeMsgRequest &request);
                void DescribeMsgAsync(const Model::DescribeMsgRequest& request, const DescribeMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMsgOutcomeCallable DescribeMsgCallable(const Model::DescribeMsgRequest& request);

                /**
                 *查询单条消息的消息轨迹
                 * @param req DescribeMsgTraceRequest
                 * @return DescribeMsgTraceOutcome
                 */
                DescribeMsgTraceOutcome DescribeMsgTrace(const Model::DescribeMsgTraceRequest &request);
                void DescribeMsgTraceAsync(const Model::DescribeMsgTraceRequest& request, const DescribeMsgTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMsgTraceOutcomeCallable DescribeMsgTraceCallable(const Model::DescribeMsgTraceRequest& request);

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
                 *获取消息生产概览信息
                 * @param req DescribePublisherSummaryRequest
                 * @return DescribePublisherSummaryOutcome
                 */
                DescribePublisherSummaryOutcome DescribePublisherSummary(const Model::DescribePublisherSummaryRequest &request);
                void DescribePublisherSummaryAsync(const Model::DescribePublisherSummaryRequest& request, const DescribePublisherSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublisherSummaryOutcomeCallable DescribePublisherSummaryCallable(const Model::DescribePublisherSummaryRequest& request);

                /**
                 *获取生产者信息列表
                 * @param req DescribePublishersRequest
                 * @return DescribePublishersOutcome
                 */
                DescribePublishersOutcome DescribePublishers(const Model::DescribePublishersRequest &request);
                void DescribePublishersAsync(const Model::DescribePublishersRequest& request, const DescribePublishersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublishersOutcomeCallable DescribePublishersCallable(const Model::DescribePublishersRequest& request);

                /**
                 *获取Pulsar专业版集群实例信息
                 * @param req DescribePulsarProInstanceDetailRequest
                 * @return DescribePulsarProInstanceDetailOutcome
                 */
                DescribePulsarProInstanceDetailOutcome DescribePulsarProInstanceDetail(const Model::DescribePulsarProInstanceDetailRequest &request);
                void DescribePulsarProInstanceDetailAsync(const Model::DescribePulsarProInstanceDetailRequest& request, const DescribePulsarProInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePulsarProInstanceDetailOutcomeCallable DescribePulsarProInstanceDetailCallable(const Model::DescribePulsarProInstanceDetailRequest& request);

                /**
                 *查询用户已购的Pulsar专业版实例列表
                 * @param req DescribePulsarProInstancesRequest
                 * @return DescribePulsarProInstancesOutcome
                 */
                DescribePulsarProInstancesOutcome DescribePulsarProInstances(const Model::DescribePulsarProInstancesRequest &request);
                void DescribePulsarProInstancesAsync(const Model::DescribePulsarProInstancesRequest& request, const DescribePulsarProInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePulsarProInstancesOutcomeCallable DescribePulsarProInstancesCallable(const Model::DescribePulsarProInstancesRequest& request);

                /**
                 *查询RabbitMQ路由关系列表
                 * @param req DescribeRabbitMQBindingsRequest
                 * @return DescribeRabbitMQBindingsOutcome
                 */
                DescribeRabbitMQBindingsOutcome DescribeRabbitMQBindings(const Model::DescribeRabbitMQBindingsRequest &request);
                void DescribeRabbitMQBindingsAsync(const Model::DescribeRabbitMQBindingsRequest& request, const DescribeRabbitMQBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQBindingsOutcomeCallable DescribeRabbitMQBindingsCallable(const Model::DescribeRabbitMQBindingsRequest& request);

                /**
                 *查询RabbitMQ exchange 列表
                 * @param req DescribeRabbitMQExchangesRequest
                 * @return DescribeRabbitMQExchangesOutcome
                 */
                DescribeRabbitMQExchangesOutcome DescribeRabbitMQExchanges(const Model::DescribeRabbitMQExchangesRequest &request);
                void DescribeRabbitMQExchangesAsync(const Model::DescribeRabbitMQExchangesRequest& request, const DescribeRabbitMQExchangesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQExchangesOutcomeCallable DescribeRabbitMQExchangesCallable(const Model::DescribeRabbitMQExchangesRequest& request);

                /**
                 *查询 RabbitMQ 托管版节点列表
                 * @param req DescribeRabbitMQNodeListRequest
                 * @return DescribeRabbitMQNodeListOutcome
                 */
                DescribeRabbitMQNodeListOutcome DescribeRabbitMQNodeList(const Model::DescribeRabbitMQNodeListRequest &request);
                void DescribeRabbitMQNodeListAsync(const Model::DescribeRabbitMQNodeListRequest& request, const DescribeRabbitMQNodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQNodeListOutcomeCallable DescribeRabbitMQNodeListCallable(const Model::DescribeRabbitMQNodeListRequest& request);

                /**
                 *查询RabbitMQ权限列表
                 * @param req DescribeRabbitMQPermissionRequest
                 * @return DescribeRabbitMQPermissionOutcome
                 */
                DescribeRabbitMQPermissionOutcome DescribeRabbitMQPermission(const Model::DescribeRabbitMQPermissionRequest &request);
                void DescribeRabbitMQPermissionAsync(const Model::DescribeRabbitMQPermissionRequest& request, const DescribeRabbitMQPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQPermissionOutcomeCallable DescribeRabbitMQPermissionCallable(const Model::DescribeRabbitMQPermissionRequest& request);

                /**
                 *查询RabbitMQ队列详情
                 * @param req DescribeRabbitMQQueueDetailRequest
                 * @return DescribeRabbitMQQueueDetailOutcome
                 */
                DescribeRabbitMQQueueDetailOutcome DescribeRabbitMQQueueDetail(const Model::DescribeRabbitMQQueueDetailRequest &request);
                void DescribeRabbitMQQueueDetailAsync(const Model::DescribeRabbitMQQueueDetailRequest& request, const DescribeRabbitMQQueueDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQQueueDetailOutcomeCallable DescribeRabbitMQQueueDetailCallable(const Model::DescribeRabbitMQQueueDetailRequest& request);

                /**
                 *查询RabbitMQ队列列表
                 * @param req DescribeRabbitMQQueuesRequest
                 * @return DescribeRabbitMQQueuesOutcome
                 */
                DescribeRabbitMQQueuesOutcome DescribeRabbitMQQueues(const Model::DescribeRabbitMQQueuesRequest &request);
                void DescribeRabbitMQQueuesAsync(const Model::DescribeRabbitMQQueuesRequest& request, const DescribeRabbitMQQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQQueuesOutcomeCallable DescribeRabbitMQQueuesCallable(const Model::DescribeRabbitMQQueuesRequest& request);

                /**
                 *查询RabbitMQ用户列表
                 * @param req DescribeRabbitMQUserRequest
                 * @return DescribeRabbitMQUserOutcome
                 */
                DescribeRabbitMQUserOutcome DescribeRabbitMQUser(const Model::DescribeRabbitMQUserRequest &request);
                void DescribeRabbitMQUserAsync(const Model::DescribeRabbitMQUserRequest& request, const DescribeRabbitMQUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQUserOutcomeCallable DescribeRabbitMQUserCallable(const Model::DescribeRabbitMQUserRequest& request);

                /**
                 *获取单个 RabbitMQ 托管版实例信息
                 * @param req DescribeRabbitMQVipInstanceRequest
                 * @return DescribeRabbitMQVipInstanceOutcome
                 */
                DescribeRabbitMQVipInstanceOutcome DescribeRabbitMQVipInstance(const Model::DescribeRabbitMQVipInstanceRequest &request);
                void DescribeRabbitMQVipInstanceAsync(const Model::DescribeRabbitMQVipInstanceRequest& request, const DescribeRabbitMQVipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQVipInstanceOutcomeCallable DescribeRabbitMQVipInstanceCallable(const Model::DescribeRabbitMQVipInstanceRequest& request);

                /**
                 *查询用户已购的 RabbitMQ 托管版实例列表
                 * @param req DescribeRabbitMQVipInstancesRequest
                 * @return DescribeRabbitMQVipInstancesOutcome
                 */
                DescribeRabbitMQVipInstancesOutcome DescribeRabbitMQVipInstances(const Model::DescribeRabbitMQVipInstancesRequest &request);
                void DescribeRabbitMQVipInstancesAsync(const Model::DescribeRabbitMQVipInstancesRequest& request, const DescribeRabbitMQVipInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQVipInstancesOutcomeCallable DescribeRabbitMQVipInstancesCallable(const Model::DescribeRabbitMQVipInstancesRequest& request);

                /**
                 *查询RabbitMQ vhost列表
                 * @param req DescribeRabbitMQVirtualHostRequest
                 * @return DescribeRabbitMQVirtualHostOutcome
                 */
                DescribeRabbitMQVirtualHostOutcome DescribeRabbitMQVirtualHost(const Model::DescribeRabbitMQVirtualHostRequest &request);
                void DescribeRabbitMQVirtualHostAsync(const Model::DescribeRabbitMQVirtualHostRequest& request, const DescribeRabbitMQVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQVirtualHostOutcomeCallable DescribeRabbitMQVirtualHostCallable(const Model::DescribeRabbitMQVirtualHostRequest& request);

                /**
                 *查询 RocketMQ 虚拟集群信息。
当前 API 适用集群：4.x 虚拟集群。查询 4.x 专享或通用集群信息的接口文档见 [DescribeRocketMQVipInstanceDetail](https://cloud.tencent.com/document/api/1179/86725)，查询 5.x 集群信息的接口文档见 [DescribeInstance](https://cloud.tencent.com/document/api/1493/97866)。
                 * @param req DescribeRocketMQClusterRequest
                 * @return DescribeRocketMQClusterOutcome
                 */
                DescribeRocketMQClusterOutcome DescribeRocketMQCluster(const Model::DescribeRocketMQClusterRequest &request);
                void DescribeRocketMQClusterAsync(const Model::DescribeRocketMQClusterRequest& request, const DescribeRocketMQClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQClusterOutcomeCallable DescribeRocketMQClusterCallable(const Model::DescribeRocketMQClusterRequest& request);

                /**
                 *查询 RocketMQ 虚拟集群列表。
当前 API 适用集群：4.x 虚拟集群。查询 5.x 集群列表接口文档见 [DescribeInstanceList](https://cloud.tencent.com/document/api/1493/96028)，或者使用 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口适用所有集群类型。
                 * @param req DescribeRocketMQClustersRequest
                 * @return DescribeRocketMQClustersOutcome
                 */
                DescribeRocketMQClustersOutcome DescribeRocketMQClusters(const Model::DescribeRocketMQClustersRequest &request);
                void DescribeRocketMQClustersAsync(const Model::DescribeRocketMQClustersRequest& request, const DescribeRocketMQClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQClustersOutcomeCallable DescribeRocketMQClustersCallable(const Model::DescribeRocketMQClustersRequest& request);

                /**
                 *查询 RocketMQ 消费详情列表。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。查询 5.x 集群消费详情的接口文档见 [DescribeConsumerGroup](https://cloud.tencent.com/document/api/1493/97941)。
                 * @param req DescribeRocketMQConsumeStatsRequest
                 * @return DescribeRocketMQConsumeStatsOutcome
                 */
                DescribeRocketMQConsumeStatsOutcome DescribeRocketMQConsumeStats(const Model::DescribeRocketMQConsumeStatsRequest &request);
                void DescribeRocketMQConsumeStatsAsync(const Model::DescribeRocketMQConsumeStatsRequest& request, const DescribeRocketMQConsumeStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQConsumeStatsOutcomeCallable DescribeRocketMQConsumeStatsCallable(const Model::DescribeRocketMQConsumeStatsRequest& request);

                /**
                 *查询 RocketMQ 消费者客户端详情。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群的查询消费者客户端详情接口文档见 [DescribeConsumerClient](https://cloud.tencent.com/document/api/1493/115240)。
                 * @param req DescribeRocketMQConsumerConnectionDetailRequest
                 * @return DescribeRocketMQConsumerConnectionDetailOutcome
                 */
                DescribeRocketMQConsumerConnectionDetailOutcome DescribeRocketMQConsumerConnectionDetail(const Model::DescribeRocketMQConsumerConnectionDetailRequest &request);
                void DescribeRocketMQConsumerConnectionDetailAsync(const Model::DescribeRocketMQConsumerConnectionDetailRequest& request, const DescribeRocketMQConsumerConnectionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQConsumerConnectionDetailOutcomeCallable DescribeRocketMQConsumerConnectionDetailCallable(const Model::DescribeRocketMQConsumerConnectionDetailRequest& request);

                /**
                 *查询 RocketMQ 消费组下的客户端连接列表。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群查询消费组下的客户端连接列表接口文档见 [DescribeConsumerClientList](https://cloud.tencent.com/document/api/1493/120140)。
                 * @param req DescribeRocketMQConsumerConnectionsRequest
                 * @return DescribeRocketMQConsumerConnectionsOutcome
                 */
                DescribeRocketMQConsumerConnectionsOutcome DescribeRocketMQConsumerConnections(const Model::DescribeRocketMQConsumerConnectionsRequest &request);
                void DescribeRocketMQConsumerConnectionsAsync(const Model::DescribeRocketMQConsumerConnectionsRequest& request, const DescribeRocketMQConsumerConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQConsumerConnectionsOutcomeCallable DescribeRocketMQConsumerConnectionsCallable(const Model::DescribeRocketMQConsumerConnectionsRequest& request);

                /**
                 *查询角色授权列表。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群的查询角色列表接口文档见 [DescribeRoleList](https://cloud.tencent.com/document/api/1493/98862)。
                 * @param req DescribeRocketMQEnvironmentRolesRequest
                 * @return DescribeRocketMQEnvironmentRolesOutcome
                 */
                DescribeRocketMQEnvironmentRolesOutcome DescribeRocketMQEnvironmentRoles(const Model::DescribeRocketMQEnvironmentRolesRequest &request);
                void DescribeRocketMQEnvironmentRolesAsync(const Model::DescribeRocketMQEnvironmentRolesRequest& request, const DescribeRocketMQEnvironmentRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQEnvironmentRolesOutcomeCallable DescribeRocketMQEnvironmentRolesCallable(const Model::DescribeRocketMQEnvironmentRolesRequest& request);

                /**
                 *查询通用集群售卖规格。
当前 API 适用集群：4.x 通用集群。查询 5.x 集群的售卖规格接口文档见 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676)。
                 * @param req DescribeRocketMQGeneralSKUsRequest
                 * @return DescribeRocketMQGeneralSKUsOutcome
                 */
                DescribeRocketMQGeneralSKUsOutcome DescribeRocketMQGeneralSKUs(const Model::DescribeRocketMQGeneralSKUsRequest &request);
                void DescribeRocketMQGeneralSKUsAsync(const Model::DescribeRocketMQGeneralSKUsRequest& request, const DescribeRocketMQGeneralSKUsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQGeneralSKUsOutcomeCallable DescribeRocketMQGeneralSKUsCallable(const Model::DescribeRocketMQGeneralSKUsRequest& request);

                /**
                 *查询 RocketMQ 消费组列表。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。查询 5.x 集群的消费组列表接口文档见 [DescribeConsumerGroupList](https://cloud.tencent.com/document/api/1493/101535)。
                 * @param req DescribeRocketMQGroupsRequest
                 * @return DescribeRocketMQGroupsOutcome
                 */
                DescribeRocketMQGroupsOutcome DescribeRocketMQGroups(const Model::DescribeRocketMQGroupsRequest &request);
                void DescribeRocketMQGroupsAsync(const Model::DescribeRocketMQGroupsRequest& request, const DescribeRocketMQGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQGroupsOutcomeCallable DescribeRocketMQGroupsCallable(const Model::DescribeRocketMQGroupsRequest& request);

                /**
                 *查询Topic迁移状态列表，源集群和目标集群客户端数量信息需要配合DescribeRocketMQSmoothMigrationTaskTopicInsNum接口查询
                 * @param req DescribeRocketMQMigratingTopicListRequest
                 * @return DescribeRocketMQMigratingTopicListOutcome
                 */
                DescribeRocketMQMigratingTopicListOutcome DescribeRocketMQMigratingTopicList(const Model::DescribeRocketMQMigratingTopicListRequest &request);
                void DescribeRocketMQMigratingTopicListAsync(const Model::DescribeRocketMQMigratingTopicListRequest& request, const DescribeRocketMQMigratingTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQMigratingTopicListOutcomeCallable DescribeRocketMQMigratingTopicListCallable(const Model::DescribeRocketMQMigratingTopicListRequest& request);

                /**
                 *查询 RocketMQ 消息详情。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群的查询消息详情接口文档见 [DescribeMessage](https://cloud.tencent.com/document/api/1493/114594)。
                 * @param req DescribeRocketMQMsgRequest
                 * @return DescribeRocketMQMsgOutcome
                 */
                DescribeRocketMQMsgOutcome DescribeRocketMQMsg(const Model::DescribeRocketMQMsgRequest &request);
                void DescribeRocketMQMsgAsync(const Model::DescribeRocketMQMsgRequest& request, const DescribeRocketMQMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQMsgOutcomeCallable DescribeRocketMQMsgCallable(const Model::DescribeRocketMQMsgRequest& request);

                /**
                 *查询消息轨迹。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群查询消息轨迹的接口文档见 [DescribeMessageTrace](https://cloud.tencent.com/document/api/1493/114302)。
                 * @param req DescribeRocketMQMsgTraceRequest
                 * @return DescribeRocketMQMsgTraceOutcome
                 */
                DescribeRocketMQMsgTraceOutcome DescribeRocketMQMsgTrace(const Model::DescribeRocketMQMsgTraceRequest &request);
                void DescribeRocketMQMsgTraceAsync(const Model::DescribeRocketMQMsgTraceRequest& request, const DescribeRocketMQMsgTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQMsgTraceOutcomeCallable DescribeRocketMQMsgTraceCallable(const Model::DescribeRocketMQMsgTraceRequest& request);

                /**
                 *获取 RocketMQ 命名空间列表。
当前 API 适用集群：4.x 虚拟集群和 4.x 专享集群，其他集群类型均不支持该功能。
                 * @param req DescribeRocketMQNamespacesRequest
                 * @return DescribeRocketMQNamespacesOutcome
                 */
                DescribeRocketMQNamespacesOutcome DescribeRocketMQNamespaces(const Model::DescribeRocketMQNamespacesRequest &request);
                void DescribeRocketMQNamespacesAsync(const Model::DescribeRocketMQNamespacesRequest& request, const DescribeRocketMQNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQNamespacesOutcomeCallable DescribeRocketMQNamespacesCallable(const Model::DescribeRocketMQNamespacesRequest& request);

                /**
                 *查询 RocketMQ 指定主题下的生产者客户端列表。
当前 API 适用集群：4.x 专享集群 和 4.x 通用集群。查询 5.x 集群主题下的生产者客户端列表接口文档见 [DescribeProducerList](https://cloud.tencent.com/document/api/1493/122548)。
                 * @param req DescribeRocketMQProducersRequest
                 * @return DescribeRocketMQProducersOutcome
                 */
                DescribeRocketMQProducersOutcome DescribeRocketMQProducers(const Model::DescribeRocketMQProducersRequest &request);
                void DescribeRocketMQProducersAsync(const Model::DescribeRocketMQProducersRequest& request, const DescribeRocketMQProducersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQProducersOutcomeCallable DescribeRocketMQProducersCallable(const Model::DescribeRocketMQProducersRequest& request);

                /**
                 *查询公网指标监控数据，目前仅支持客户端到 LB 的入带宽和出宽带指标。
当前 API 适用集群：4.x 专享集群 和 4.x 通用集群。5.x 集群暂不支持该功能。
                 * @param req DescribeRocketMQPublicAccessMonitorDataRequest
                 * @return DescribeRocketMQPublicAccessMonitorDataOutcome
                 */
                DescribeRocketMQPublicAccessMonitorDataOutcome DescribeRocketMQPublicAccessMonitorData(const Model::DescribeRocketMQPublicAccessMonitorDataRequest &request);
                void DescribeRocketMQPublicAccessMonitorDataAsync(const Model::DescribeRocketMQPublicAccessMonitorDataRequest& request, const DescribeRocketMQPublicAccessMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQPublicAccessMonitorDataOutcomeCallable DescribeRocketMQPublicAccessMonitorDataCallable(const Model::DescribeRocketMQPublicAccessMonitorDataRequest& request);

                /**
                 *查询 RocketMQ 集群的公网接入点信息。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。查询 5.x 集群的公网接入点信息接口文档见 [DescribeInstance](https://cloud.tencent.com/document/api/1493/97866)。
                 * @param req DescribeRocketMQPublicAccessPointRequest
                 * @return DescribeRocketMQPublicAccessPointOutcome
                 */
                DescribeRocketMQPublicAccessPointOutcome DescribeRocketMQPublicAccessPoint(const Model::DescribeRocketMQPublicAccessPointRequest &request);
                void DescribeRocketMQPublicAccessPointAsync(const Model::DescribeRocketMQPublicAccessPointRequest& request, const DescribeRocketMQPublicAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQPublicAccessPointOutcomeCallable DescribeRocketMQPublicAccessPointCallable(const Model::DescribeRocketMQPublicAccessPointRequest& request);

                /**
                 *查询角色列表。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群的查询角色列表接口文档见 [DescribeRoleList](https://cloud.tencent.com/document/api/1493/98862)。
                 * @param req DescribeRocketMQRolesRequest
                 * @return DescribeRocketMQRolesOutcome
                 */
                DescribeRocketMQRolesOutcome DescribeRocketMQRoles(const Model::DescribeRocketMQRolesRequest &request);
                void DescribeRocketMQRolesAsync(const Model::DescribeRocketMQRolesRequest& request, const DescribeRocketMQRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQRolesOutcomeCallable DescribeRocketMQRolesCallable(const Model::DescribeRocketMQRolesRequest& request);

                /**
                 *用于获取RocketMQ平滑迁移任务详情
                 * @param req DescribeRocketMQSmoothMigrationTaskRequest
                 * @return DescribeRocketMQSmoothMigrationTaskOutcome
                 */
                DescribeRocketMQSmoothMigrationTaskOutcome DescribeRocketMQSmoothMigrationTask(const Model::DescribeRocketMQSmoothMigrationTaskRequest &request);
                void DescribeRocketMQSmoothMigrationTaskAsync(const Model::DescribeRocketMQSmoothMigrationTaskRequest& request, const DescribeRocketMQSmoothMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQSmoothMigrationTaskOutcomeCallable DescribeRocketMQSmoothMigrationTaskCallable(const Model::DescribeRocketMQSmoothMigrationTaskRequest& request);

                /**
                 *查询 RocketMQ 消费组订阅关系列表。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群查询消费组订阅的主题列表接口文档见 [DescribeTopicListByGroup](https://cloud.tencent.com/document/api/1493/115314)。
                 * @param req DescribeRocketMQSubscriptionsRequest
                 * @return DescribeRocketMQSubscriptionsOutcome
                 */
                DescribeRocketMQSubscriptionsOutcome DescribeRocketMQSubscriptions(const Model::DescribeRocketMQSubscriptionsRequest &request);
                void DescribeRocketMQSubscriptionsAsync(const Model::DescribeRocketMQSubscriptionsRequest& request, const DescribeRocketMQSubscriptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQSubscriptionsOutcomeCallable DescribeRocketMQSubscriptionsCallable(const Model::DescribeRocketMQSubscriptionsRequest& request);

                /**
                 *用于获取RocketMQ指标排序列表，比如集群实例下占用存储空间最多的主题排序。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群暂不支持该功能。
                 * @param req DescribeRocketMQTopUsagesRequest
                 * @return DescribeRocketMQTopUsagesOutcome
                 */
                DescribeRocketMQTopUsagesOutcome DescribeRocketMQTopUsages(const Model::DescribeRocketMQTopUsagesRequest &request);
                void DescribeRocketMQTopUsagesAsync(const Model::DescribeRocketMQTopUsagesRequest& request, const DescribeRocketMQTopUsagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQTopUsagesOutcomeCallable DescribeRocketMQTopUsagesCallable(const Model::DescribeRocketMQTopUsagesRequest& request);

                /**
                 *获取RocketMQ主题详情
                 * @param req DescribeRocketMQTopicRequest
                 * @return DescribeRocketMQTopicOutcome
                 */
                DescribeRocketMQTopicOutcome DescribeRocketMQTopic(const Model::DescribeRocketMQTopicRequest &request);
                void DescribeRocketMQTopicAsync(const Model::DescribeRocketMQTopicRequest& request, const DescribeRocketMQTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQTopicOutcomeCallable DescribeRocketMQTopicCallable(const Model::DescribeRocketMQTopicRequest& request);

                /**
                 *查询 RocketMQ 消息列表。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群的查询消息列表接口文档见 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593)。
                 * @param req DescribeRocketMQTopicMsgsRequest
                 * @return DescribeRocketMQTopicMsgsOutcome
                 */
                DescribeRocketMQTopicMsgsOutcome DescribeRocketMQTopicMsgs(const Model::DescribeRocketMQTopicMsgsRequest &request);
                void DescribeRocketMQTopicMsgsAsync(const Model::DescribeRocketMQTopicMsgsRequest& request, const DescribeRocketMQTopicMsgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQTopicMsgsOutcomeCallable DescribeRocketMQTopicMsgsCallable(const Model::DescribeRocketMQTopicMsgsRequest& request);

                /**
                 *查询 RocketMQ 主题生产详情列表。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群暂不支持该功能。
                 * @param req DescribeRocketMQTopicStatsRequest
                 * @return DescribeRocketMQTopicStatsOutcome
                 */
                DescribeRocketMQTopicStatsOutcome DescribeRocketMQTopicStats(const Model::DescribeRocketMQTopicStatsRequest &request);
                void DescribeRocketMQTopicStatsAsync(const Model::DescribeRocketMQTopicStatsRequest& request, const DescribeRocketMQTopicStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQTopicStatsOutcomeCallable DescribeRocketMQTopicStatsCallable(const Model::DescribeRocketMQTopicStatsRequest& request);

                /**
                 *查询 RocketMQ 主题列表。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。查询 5.x 集群的主题列表接口文档见 [DescribeTopicList](https://cloud.tencent.com/document/api/1493/96030)。
                 * @param req DescribeRocketMQTopicsRequest
                 * @return DescribeRocketMQTopicsOutcome
                 */
                DescribeRocketMQTopicsOutcome DescribeRocketMQTopics(const Model::DescribeRocketMQTopicsRequest &request);
                void DescribeRocketMQTopicsAsync(const Model::DescribeRocketMQTopicsRequest& request, const DescribeRocketMQTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQTopicsOutcomeCallable DescribeRocketMQTopicsCallable(const Model::DescribeRocketMQTopicsRequest& request);

                /**
                 *查询 RocketMQ 消费组订阅的主题列表。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群查询消费组订阅的主题列表接口文档见 [DescribeTopicListByGroup](https://cloud.tencent.com/document/api/1493/115314)。
                 * @param req DescribeRocketMQTopicsByGroupRequest
                 * @return DescribeRocketMQTopicsByGroupOutcome
                 */
                DescribeRocketMQTopicsByGroupOutcome DescribeRocketMQTopicsByGroup(const Model::DescribeRocketMQTopicsByGroupRequest &request);
                void DescribeRocketMQTopicsByGroupAsync(const Model::DescribeRocketMQTopicsByGroupRequest& request, const DescribeRocketMQTopicsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQTopicsByGroupOutcomeCallable DescribeRocketMQTopicsByGroupCallable(const Model::DescribeRocketMQTopicsByGroupRequest& request);

                /**
                 *查询 RocketMQ 集群信息。
当前 API 适用集群：4.x 专享集群 和 4.x 通用集群。查询 5.x 集群信息的接口文档见 [DescribeInstance](https://cloud.tencent.com/document/api/1493/97866)。
                 * @param req DescribeRocketMQVipInstanceDetailRequest
                 * @return DescribeRocketMQVipInstanceDetailOutcome
                 */
                DescribeRocketMQVipInstanceDetailOutcome DescribeRocketMQVipInstanceDetail(const Model::DescribeRocketMQVipInstanceDetailRequest &request);
                void DescribeRocketMQVipInstanceDetailAsync(const Model::DescribeRocketMQVipInstanceDetailRequest& request, const DescribeRocketMQVipInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQVipInstanceDetailOutcomeCallable DescribeRocketMQVipInstanceDetailCallable(const Model::DescribeRocketMQVipInstanceDetailRequest& request);

                /**
                 *查询 RocketMQ 4.x 集群列表。
当前 API 适用集群：4.x 专享集群 和 4.x 通用集群。查询 5.x 集群列表接口文档见 [DescribeInstanceList](https://cloud.tencent.com/document/api/1493/96028)，或者使用 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口适用所有集群类型。
                 * @param req DescribeRocketMQVipInstancesRequest
                 * @return DescribeRocketMQVipInstancesOutcome
                 */
                DescribeRocketMQVipInstancesOutcome DescribeRocketMQVipInstances(const Model::DescribeRocketMQVipInstancesRequest &request);
                void DescribeRocketMQVipInstancesAsync(const Model::DescribeRocketMQVipInstancesRequest& request, const DescribeRocketMQVipInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRocketMQVipInstancesOutcomeCallable DescribeRocketMQVipInstancesCallable(const Model::DescribeRocketMQVipInstancesRequest& request);

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
                 *消息查询
                 * @param req DescribeTopicMsgsRequest
                 * @return DescribeTopicMsgsOutcome
                 */
                DescribeTopicMsgsOutcome DescribeTopicMsgs(const Model::DescribeTopicMsgsRequest &request);
                void DescribeTopicMsgsAsync(const Model::DescribeTopicMsgsRequest& request, const DescribeTopicMsgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicMsgsOutcomeCallable DescribeTopicMsgsCallable(const Model::DescribeTopicMsgsRequest& request);

                /**
                 *获取环境下主题列表
                 * @param req DescribeTopicsRequest
                 * @return DescribeTopicsOutcome
                 */
                DescribeTopicsOutcome DescribeTopics(const Model::DescribeTopicsRequest &request);
                void DescribeTopicsAsync(const Model::DescribeTopicsRequest& request, const DescribeTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicsOutcomeCallable DescribeTopicsCallable(const Model::DescribeTopicsRequest& request);

                /**
                 *执行域名异地访问切换，域名的访问指向将切换至备份集群。
                 * @param req ExecuteDisasterRecoveryRequest
                 * @return ExecuteDisasterRecoveryOutcome
                 */
                ExecuteDisasterRecoveryOutcome ExecuteDisasterRecovery(const Model::ExecuteDisasterRecoveryRequest &request);
                void ExecuteDisasterRecoveryAsync(const Model::ExecuteDisasterRecoveryRequest& request, const ExecuteDisasterRecoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteDisasterRecoveryOutcomeCallable ExecuteDisasterRecoveryCallable(const Model::ExecuteDisasterRecoveryRequest& request);

                /**
                 *导出RocketMQ消息详情
                 * @param req ExportRocketMQMessageDetailRequest
                 * @return ExportRocketMQMessageDetailOutcome
                 */
                ExportRocketMQMessageDetailOutcome ExportRocketMQMessageDetail(const Model::ExportRocketMQMessageDetailRequest &request);
                void ExportRocketMQMessageDetailAsync(const Model::ExportRocketMQMessageDetailRequest& request, const ExportRocketMQMessageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRocketMQMessageDetailOutcomeCallable ExportRocketMQMessageDetailCallable(const Model::ExportRocketMQMessageDetailRequest& request);

                /**
                 *获取环境下主题列表
                 * @param req GetTopicListRequest
                 * @return GetTopicListOutcome
                 */
                GetTopicListOutcome GetTopicList(const Model::GetTopicListRequest &request);
                void GetTopicListAsync(const Model::GetTopicListRequest& request, const GetTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTopicListOutcomeCallable GetTopicListCallable(const Model::GetTopicListRequest& request);

                /**
                 *输入迁移任务id和要导入的Group，导入后台
                 * @param req ImportRocketMQConsumerGroupsRequest
                 * @return ImportRocketMQConsumerGroupsOutcome
                 */
                ImportRocketMQConsumerGroupsOutcome ImportRocketMQConsumerGroups(const Model::ImportRocketMQConsumerGroupsRequest &request);
                void ImportRocketMQConsumerGroupsAsync(const Model::ImportRocketMQConsumerGroupsRequest& request, const ImportRocketMQConsumerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportRocketMQConsumerGroupsOutcomeCallable ImportRocketMQConsumerGroupsCallable(const Model::ImportRocketMQConsumerGroupsRequest& request);

                /**
                 *导入topic列表
                 * @param req ImportRocketMQTopicsRequest
                 * @return ImportRocketMQTopicsOutcome
                 */
                ImportRocketMQTopicsOutcome ImportRocketMQTopics(const Model::ImportRocketMQTopicsRequest &request);
                void ImportRocketMQTopicsAsync(const Model::ImportRocketMQTopicsRequest& request, const ImportRocketMQTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportRocketMQTopicsOutcomeCallable ImportRocketMQTopicsCallable(const Model::ImportRocketMQTopicsRequest& request);

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
                 *修改pulsar专业版公网安全策略
                 * @param req ModifyPublicNetworkSecurityPolicyRequest
                 * @return ModifyPublicNetworkSecurityPolicyOutcome
                 */
                ModifyPublicNetworkSecurityPolicyOutcome ModifyPublicNetworkSecurityPolicy(const Model::ModifyPublicNetworkSecurityPolicyRequest &request);
                void ModifyPublicNetworkSecurityPolicyAsync(const Model::ModifyPublicNetworkSecurityPolicyRequest& request, const ModifyPublicNetworkSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPublicNetworkSecurityPolicyOutcomeCallable ModifyPublicNetworkSecurityPolicyCallable(const Model::ModifyPublicNetworkSecurityPolicyRequest& request);

                /**
                 *修改RabbitMQ的权限
                 * @param req ModifyRabbitMQPermissionRequest
                 * @return ModifyRabbitMQPermissionOutcome
                 */
                ModifyRabbitMQPermissionOutcome ModifyRabbitMQPermission(const Model::ModifyRabbitMQPermissionRequest &request);
                void ModifyRabbitMQPermissionAsync(const Model::ModifyRabbitMQPermissionRequest& request, const ModifyRabbitMQPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRabbitMQPermissionOutcomeCallable ModifyRabbitMQPermissionCallable(const Model::ModifyRabbitMQPermissionRequest& request);

                /**
                 *修改RabbitMQ的用户
                 * @param req ModifyRabbitMQUserRequest
                 * @return ModifyRabbitMQUserOutcome
                 */
                ModifyRabbitMQUserOutcome ModifyRabbitMQUser(const Model::ModifyRabbitMQUserRequest &request);
                void ModifyRabbitMQUserAsync(const Model::ModifyRabbitMQUserRequest& request, const ModifyRabbitMQUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRabbitMQUserOutcomeCallable ModifyRabbitMQUserCallable(const Model::ModifyRabbitMQUserRequest& request);

                /**
                 *修改RabbitMQ专享版实例
                 * @param req ModifyRabbitMQVipInstanceRequest
                 * @return ModifyRabbitMQVipInstanceOutcome
                 */
                ModifyRabbitMQVipInstanceOutcome ModifyRabbitMQVipInstance(const Model::ModifyRabbitMQVipInstanceRequest &request);
                void ModifyRabbitMQVipInstanceAsync(const Model::ModifyRabbitMQVipInstanceRequest& request, const ModifyRabbitMQVipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRabbitMQVipInstanceOutcomeCallable ModifyRabbitMQVipInstanceCallable(const Model::ModifyRabbitMQVipInstanceRequest& request);

                /**
                 *修改RabbitMQ的vhost
                 * @param req ModifyRabbitMQVirtualHostRequest
                 * @return ModifyRabbitMQVirtualHostOutcome
                 */
                ModifyRabbitMQVirtualHostOutcome ModifyRabbitMQVirtualHost(const Model::ModifyRabbitMQVirtualHostRequest &request);
                void ModifyRabbitMQVirtualHostAsync(const Model::ModifyRabbitMQVirtualHostRequest& request, const ModifyRabbitMQVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRabbitMQVirtualHostOutcomeCallable ModifyRabbitMQVirtualHostCallable(const Model::ModifyRabbitMQVirtualHostRequest& request);

                /**
                 *修改 RocketMQ 集群属性。
当前 API 适用集群：4.x 虚拟集群。修改 4.x 专享或通用集群属性接口文档见 [ModifyRocketMQInstance](https://cloud.tencent.com/document/api/1179/108862)，修改 5.x 集群属性的接口文档见 [ModifyInstance](https://cloud.tencent.com/document/api/1493/97865)。
                 * @param req ModifyRocketMQClusterRequest
                 * @return ModifyRocketMQClusterOutcome
                 */
                ModifyRocketMQClusterOutcome ModifyRocketMQCluster(const Model::ModifyRocketMQClusterRequest &request);
                void ModifyRocketMQClusterAsync(const Model::ModifyRocketMQClusterRequest& request, const ModifyRocketMQClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRocketMQClusterOutcomeCallable ModifyRocketMQClusterCallable(const Model::ModifyRocketMQClusterRequest& request);

                /**
                 *修改角色授权。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群的修改角色接口文档见 [ModifyRole](https://cloud.tencent.com/document/api/1493/98861)。
                 * @param req ModifyRocketMQEnvironmentRoleRequest
                 * @return ModifyRocketMQEnvironmentRoleOutcome
                 */
                ModifyRocketMQEnvironmentRoleOutcome ModifyRocketMQEnvironmentRole(const Model::ModifyRocketMQEnvironmentRoleRequest &request);
                void ModifyRocketMQEnvironmentRoleAsync(const Model::ModifyRocketMQEnvironmentRoleRequest& request, const ModifyRocketMQEnvironmentRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRocketMQEnvironmentRoleOutcomeCallable ModifyRocketMQEnvironmentRoleCallable(const Model::ModifyRocketMQEnvironmentRoleRequest& request);

                /**
                 *修改 RocketMQ 消费组属性。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。修改 5.x 集群消费组属性的接口文档见 [ModifyConsumerGroup](https://cloud.tencent.com/document/api/1493/97940)。
                 * @param req ModifyRocketMQGroupRequest
                 * @return ModifyRocketMQGroupOutcome
                 */
                ModifyRocketMQGroupOutcome ModifyRocketMQGroup(const Model::ModifyRocketMQGroupRequest &request);
                void ModifyRocketMQGroupAsync(const Model::ModifyRocketMQGroupRequest& request, const ModifyRocketMQGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRocketMQGroupOutcomeCallable ModifyRocketMQGroupCallable(const Model::ModifyRocketMQGroupRequest& request);

                /**
                 *修改 RocketMQ 专享或通用集群属性。
当前 API 适用集群：4.x 专享集群 和 4.x 通用集群。修改 5.x 集群属性的接口文档见 [ModifyInstance](https://cloud.tencent.com/document/api/1493/97865)。
                 * @param req ModifyRocketMQInstanceRequest
                 * @return ModifyRocketMQInstanceOutcome
                 */
                ModifyRocketMQInstanceOutcome ModifyRocketMQInstance(const Model::ModifyRocketMQInstanceRequest &request);
                void ModifyRocketMQInstanceAsync(const Model::ModifyRocketMQInstanceRequest& request, const ModifyRocketMQInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRocketMQInstanceOutcomeCallable ModifyRocketMQInstanceCallable(const Model::ModifyRocketMQInstanceRequest& request);

                /**
                 *修改 RocketMQ 专享集群配置，可以支持实例规格、节点数和存储的升配和实例规格的降配。本 API 发起订单并成功支付后进入实例配置变更的流程，可通过 [DescribeRocketMQVipInstances](https://cloud.tencent.com/document/api/1179/80903) 查询实例是否已变更完成。
当前 API 适用集群：4.x 专享集群 和 4.x 通用集群。修改 5.x 集群规格的接口文档见 [ModifyInstance](https://cloud.tencent.com/document/api/1493/97865)。
                 * @param req ModifyRocketMQInstanceSpecRequest
                 * @return ModifyRocketMQInstanceSpecOutcome
                 */
                ModifyRocketMQInstanceSpecOutcome ModifyRocketMQInstanceSpec(const Model::ModifyRocketMQInstanceSpecRequest &request);
                void ModifyRocketMQInstanceSpecAsync(const Model::ModifyRocketMQInstanceSpecRequest& request, const ModifyRocketMQInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRocketMQInstanceSpecOutcomeCallable ModifyRocketMQInstanceSpecCallable(const Model::ModifyRocketMQInstanceSpecRequest& request);

                /**
                 *更新 RocketMQ 命名空间。
当前 API 适用集群：4.x 虚拟集群和 4.x 专享集群，其他集群类型均不支持该功能。
                 * @param req ModifyRocketMQNamespaceRequest
                 * @return ModifyRocketMQNamespaceOutcome
                 */
                ModifyRocketMQNamespaceOutcome ModifyRocketMQNamespace(const Model::ModifyRocketMQNamespaceRequest &request);
                void ModifyRocketMQNamespaceAsync(const Model::ModifyRocketMQNamespaceRequest& request, const ModifyRocketMQNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRocketMQNamespaceOutcomeCallable ModifyRocketMQNamespaceCallable(const Model::ModifyRocketMQNamespaceRequest& request);

                /**
                 *修改角色。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群的修改角色接口文档见 [ModifyRole](https://cloud.tencent.com/document/api/1493/98861)。
                 * @param req ModifyRocketMQRoleRequest
                 * @return ModifyRocketMQRoleOutcome
                 */
                ModifyRocketMQRoleOutcome ModifyRocketMQRole(const Model::ModifyRocketMQRoleRequest &request);
                void ModifyRocketMQRoleAsync(const Model::ModifyRocketMQRoleRequest& request, const ModifyRocketMQRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRocketMQRoleOutcomeCallable ModifyRocketMQRoleCallable(const Model::ModifyRocketMQRoleRequest& request);

                /**
                 *修改 RocketMQ 主题属性。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。修改 5.x 集群主题属性的接口文档见 [ModifyTopic](https://cloud.tencent.com/document/api/1493/97944)。
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
                 *当前 ReceiveMessage 接口只支持 Partitioned 类型的 Topic。该接口用于接收发送到指定 Partitioned Topic 中的消息，当 Partitioned Topic 中没有消息但还去尝试调用该接口时，会抛出 ReceiveTimeout 的异常。

如何使用 BatchReceivePolicy：

BatchReceive 接口提供了如下三个参数：

● MaxNumMessages: 即每次使用 BatchReceive 的时候，最多一次Receive接口返回多少条消息。
● MaxNumBytes：即每次使用 BatchReceive 的时候，最多一次Receive接口返回多大内容的消息，单位是：bytes。
● Timeout：即每次使用 BatchReceive 的时候，最多一次 Receive 接口的超时时间是多久，单位是：MS。

默认如果上述三个参数都不指定，即关闭 BatchReceive 的特性。如果三个参数中的任意一个参数指定的数值大于 0，即开启 BatchReceive。BatchReceive 的结束条件为到达上述三个参数中任意一个指定的阈值。

注意：MaxNumMessages 和 MaxNumBytes 每一次接收的最大消息同时受限于 ReceiveQueueSize 的大小，如果 ReceiveQueueSize 的大小设置为 5，MaxNumMessages 设置为10，那么一次 BatchReceive 接收的最多的消息是 5条，而不是10条。



BatchReceivePolicy 的接口会一次性返回多条消息：

1. 多条消息的内容之间使用特殊字符 '###' 来进行分割，业务侧接收到消息之后，可以利用不同语言提供的 Split 工具分割不同的消息。
2. 多条消息的 MessageID 之间使用特殊字符 '###' 来进行分割，业务侧接收到消息之后，可以利用不同语言提供的 Split 工具分割不同的消息。（用于在调用 AcknowledgeMessage 接口中填入所需要的 MessageID 字段信息）
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
                 *重置消费位点。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群的重置消费位点接口文档见 [ResetConsumerGroupOffset](https://cloud.tencent.com/document/api/1493/116942)。
                 * @param req ResetRocketMQConsumerOffSetRequest
                 * @return ResetRocketMQConsumerOffSetOutcome
                 */
                ResetRocketMQConsumerOffSetOutcome ResetRocketMQConsumerOffSet(const Model::ResetRocketMQConsumerOffSetRequest &request);
                void ResetRocketMQConsumerOffSetAsync(const Model::ResetRocketMQConsumerOffSetRequest& request, const ResetRocketMQConsumerOffSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetRocketMQConsumerOffSetOutcomeCallable ResetRocketMQConsumerOffSetCallable(const Model::ResetRocketMQConsumerOffSetRequest& request);

                /**
                 *重发 RocketMQ 死信消息。
当前 API 适用集群：4.x 虚拟集群，4.x 专享集群 和 4.x 通用集群。5.x 集群的重发死信消息接口文档见 [ResendDeadLetterMessage](https://cloud.tencent.com/document/api/1493/114592)。
                 * @param req RetryRocketMQDlqMessageRequest
                 * @return RetryRocketMQDlqMessageOutcome
                 */
                RetryRocketMQDlqMessageOutcome RetryRocketMQDlqMessage(const Model::RetryRocketMQDlqMessageRequest &request);
                void RetryRocketMQDlqMessageAsync(const Model::RetryRocketMQDlqMessageRequest& request, const RetryRocketMQDlqMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryRocketMQDlqMessageOutcomeCallable RetryRocketMQDlqMessageCallable(const Model::RetryRocketMQDlqMessageRequest& request);

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

注意：TDMQ 批量发送消息的接口是在 TDMQ-HTTP 的服务侧将消息打包为一个 Batch，然后将该 Batch 在服务内部当作一次 TCP 请求发送出去。所以在使用过程中，用户还是按照单条消息发送的逻辑，每一条消息是一个独立的 HTTP 的请求，在 TDMQ-HTTP 的服务内部，会将多个 HTTP 的请求聚合为一个 Batch 发送到服务端。即，批量发送消息在使用上与发送单条消息是一致的，batch 的聚合是在 TDMQ-HTTP 的服务内部完成的。
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
不支持持久topic
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
                 *发送 RocketMQ 消息，该接口仅用于控制台发送少量测试消息，不保证SLA，且云 API 存在限流，在真实业务场景下，请使用 RocketMQ SDK 发送消息。
                 * @param req SendRocketMQMessageRequest
                 * @return SendRocketMQMessageOutcome
                 */
                SendRocketMQMessageOutcome SendRocketMQMessage(const Model::SendRocketMQMessageRequest &request);
                void SendRocketMQMessageAsync(const Model::SendRocketMQMessageRequest& request, const SendRocketMQMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendRocketMQMessageOutcomeCallable SendRocketMQMessageCallable(const Model::SendRocketMQMessageRequest& request);

                /**
                 *开启或关闭公网访问、设置安全访问策略。
当前 API 适用集群：4.x 专享集群 和 4.x 通用集群。设置 5.x 集群的公网接入点接口文档见 [ModifyInstanceEndpoint](https://cloud.tencent.com/document/api/1493/115981)。
                 * @param req SetRocketMQPublicAccessPointRequest
                 * @return SetRocketMQPublicAccessPointOutcome
                 */
                SetRocketMQPublicAccessPointOutcome SetRocketMQPublicAccessPoint(const Model::SetRocketMQPublicAccessPointRequest &request);
                void SetRocketMQPublicAccessPointAsync(const Model::SetRocketMQPublicAccessPointRequest& request, const SetRocketMQPublicAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetRocketMQPublicAccessPointOutcomeCallable SetRocketMQPublicAccessPointCallable(const Model::SetRocketMQPublicAccessPointRequest& request);

                /**
                 *解绑cmq死信队列
                 * @param req UnbindCmqDeadLetterRequest
                 * @return UnbindCmqDeadLetterOutcome
                 */
                UnbindCmqDeadLetterOutcome UnbindCmqDeadLetter(const Model::UnbindCmqDeadLetterRequest &request);
                void UnbindCmqDeadLetterAsync(const Model::UnbindCmqDeadLetterRequest& request, const UnbindCmqDeadLetterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindCmqDeadLetterOutcomeCallable UnbindCmqDeadLetterCallable(const Model::UnbindCmqDeadLetterRequest& request);

                /**
                 *Rocketmq消费验证
                 * @param req VerifyRocketMQConsumeRequest
                 * @return VerifyRocketMQConsumeOutcome
                 */
                VerifyRocketMQConsumeOutcome VerifyRocketMQConsume(const Model::VerifyRocketMQConsumeRequest &request);
                void VerifyRocketMQConsumeAsync(const Model::VerifyRocketMQConsumeRequest& request, const VerifyRocketMQConsumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyRocketMQConsumeOutcomeCallable VerifyRocketMQConsumeCallable(const Model::VerifyRocketMQConsumeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_TDMQCLIENT_H_
