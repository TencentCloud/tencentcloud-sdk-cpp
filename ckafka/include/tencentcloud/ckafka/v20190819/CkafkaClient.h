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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_CKAFKACLIENT_H_
#define TENCENTCLOUD_CKAFKA_V20190819_CKAFKACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ckafka/v20190819/model/AuthorizeTokenRequest.h>
#include <tencentcloud/ckafka/v20190819/model/AuthorizeTokenResponse.h>
#include <tencentcloud/ckafka/v20190819/model/BatchCreateAclRequest.h>
#include <tencentcloud/ckafka/v20190819/model/BatchCreateAclResponse.h>
#include <tencentcloud/ckafka/v20190819/model/BatchModifyGroupOffsetsRequest.h>
#include <tencentcloud/ckafka/v20190819/model/BatchModifyGroupOffsetsResponse.h>
#include <tencentcloud/ckafka/v20190819/model/BatchModifyTopicAttributesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/BatchModifyTopicAttributesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CancelAuthorizationTokenRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CancelAuthorizationTokenResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CheckCdcClusterRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CheckCdcClusterResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateAclRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateAclResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateAclRuleRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateAclRuleResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateCdcClusterRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateCdcClusterResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateConnectResourceRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateConnectResourceResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateConsumerRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateConsumerResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateDatahubTaskRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateDatahubTaskResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateDatahubTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateDatahubTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateInstancePostRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateInstancePostResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateInstancePreRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateInstancePreResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreatePartitionRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreatePartitionResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreatePostPaidInstanceRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreatePostPaidInstanceResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreatePrometheusRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreatePrometheusResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateRouteRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateRouteResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateTokenRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateTokenResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateTopicIpWhiteListRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateTopicIpWhiteListResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateUserRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateUserResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteAclRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteAclResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteAclRuleRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteAclRuleResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteConnectResourceRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteConnectResourceResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteDatahubTaskRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteDatahubTaskResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteDatahubTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteDatahubTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteGroupRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteGroupResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteInstancePostRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteInstancePostResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteInstancePreRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteInstancePreResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteRouteRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteRouteResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteRouteTriggerTimeRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteRouteTriggerTimeResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteTopicIpWhiteListRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteTopicIpWhiteListResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteUserRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteUserResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeACLRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeACLResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeAclRuleRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeAclRuleResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeAppInfoRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeAppInfoResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeCkafkaZoneRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeCkafkaZoneResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeConnectResourceRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeConnectResourceResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeConnectResourcesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeConnectResourcesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeConsumerGroupRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeConsumerGroupResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeCvmInfoRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeCvmInfoResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubGroupOffsetsRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubGroupOffsetsResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTaskRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTaskResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTasksRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTasksResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTopicsRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTopicsResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeGroupRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeGroupResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeGroupInfoRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeGroupInfoResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeGroupOffsetsRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeGroupOffsetsResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeInstanceAttributesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeInstanceAttributesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeInstancesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeInstancesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeInstancesDetailRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeInstancesDetailResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribePrometheusRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribePrometheusResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeRegionRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeRegionResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeRouteRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeRouteResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeSecurityGroupRoutesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeSecurityGroupRoutesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicAttributesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicAttributesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicDetailRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicDetailResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicFlowRankingRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicFlowRankingResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicProduceConnectionRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicProduceConnectionResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicSubscribeGroupRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicSubscribeGroupResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicSyncReplicaRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicSyncReplicaResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTypeInstancesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTypeInstancesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeUserRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeUserResponse.h>
#include <tencentcloud/ckafka/v20190819/model/FetchDatahubMessageByOffsetRequest.h>
#include <tencentcloud/ckafka/v20190819/model/FetchDatahubMessageByOffsetResponse.h>
#include <tencentcloud/ckafka/v20190819/model/FetchLatestDatahubMessageListRequest.h>
#include <tencentcloud/ckafka/v20190819/model/FetchLatestDatahubMessageListResponse.h>
#include <tencentcloud/ckafka/v20190819/model/FetchMessageByOffsetRequest.h>
#include <tencentcloud/ckafka/v20190819/model/FetchMessageByOffsetResponse.h>
#include <tencentcloud/ckafka/v20190819/model/FetchMessageListByOffsetRequest.h>
#include <tencentcloud/ckafka/v20190819/model/FetchMessageListByOffsetResponse.h>
#include <tencentcloud/ckafka/v20190819/model/FetchMessageListByTimestampRequest.h>
#include <tencentcloud/ckafka/v20190819/model/FetchMessageListByTimestampResponse.h>
#include <tencentcloud/ckafka/v20190819/model/InquireCkafkaPriceRequest.h>
#include <tencentcloud/ckafka/v20190819/model/InquireCkafkaPriceResponse.h>
#include <tencentcloud/ckafka/v20190819/model/InstanceScalingDownRequest.h>
#include <tencentcloud/ckafka/v20190819/model/InstanceScalingDownResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyAclRuleRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyAclRuleResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyConnectResourceRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyConnectResourceResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyDatahubTaskRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyDatahubTaskResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyDatahubTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyDatahubTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyGroupOffsetsRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyGroupOffsetsResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyInstanceAttributesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyInstanceAttributesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyInstancePreRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyInstancePreResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyPasswordRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyPasswordResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyRoutineMaintenanceTaskRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyRoutineMaintenanceTaskResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyTopicAttributesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyTopicAttributesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/RenewCkafkaInstanceRequest.h>
#include <tencentcloud/ckafka/v20190819/model/RenewCkafkaInstanceResponse.h>
#include <tencentcloud/ckafka/v20190819/model/SendMessageRequest.h>
#include <tencentcloud/ckafka/v20190819/model/SendMessageResponse.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            class CkafkaClient : public AbstractClient
            {
            public:
                CkafkaClient(const Credential &credential, const std::string &region);
                CkafkaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AuthorizeTokenResponse> AuthorizeTokenOutcome;
                typedef std::future<AuthorizeTokenOutcome> AuthorizeTokenOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::AuthorizeTokenRequest&, AuthorizeTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchCreateAclResponse> BatchCreateAclOutcome;
                typedef std::future<BatchCreateAclOutcome> BatchCreateAclOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::BatchCreateAclRequest&, BatchCreateAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateAclAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyGroupOffsetsResponse> BatchModifyGroupOffsetsOutcome;
                typedef std::future<BatchModifyGroupOffsetsOutcome> BatchModifyGroupOffsetsOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::BatchModifyGroupOffsetsRequest&, BatchModifyGroupOffsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyGroupOffsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyTopicAttributesResponse> BatchModifyTopicAttributesOutcome;
                typedef std::future<BatchModifyTopicAttributesOutcome> BatchModifyTopicAttributesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::BatchModifyTopicAttributesRequest&, BatchModifyTopicAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyTopicAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelAuthorizationTokenResponse> CancelAuthorizationTokenOutcome;
                typedef std::future<CancelAuthorizationTokenOutcome> CancelAuthorizationTokenOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CancelAuthorizationTokenRequest&, CancelAuthorizationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelAuthorizationTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckCdcClusterResponse> CheckCdcClusterOutcome;
                typedef std::future<CheckCdcClusterOutcome> CheckCdcClusterOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CheckCdcClusterRequest&, CheckCdcClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckCdcClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAclResponse> CreateAclOutcome;
                typedef std::future<CreateAclOutcome> CreateAclOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateAclRequest&, CreateAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAclAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAclRuleResponse> CreateAclRuleOutcome;
                typedef std::future<CreateAclRuleOutcome> CreateAclRuleOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateAclRuleRequest&, CreateAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCdcClusterResponse> CreateCdcClusterOutcome;
                typedef std::future<CreateCdcClusterOutcome> CreateCdcClusterOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateCdcClusterRequest&, CreateCdcClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCdcClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConnectResourceResponse> CreateConnectResourceOutcome;
                typedef std::future<CreateConnectResourceOutcome> CreateConnectResourceOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateConnectResourceRequest&, CreateConnectResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConnectResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsumerResponse> CreateConsumerOutcome;
                typedef std::future<CreateConsumerOutcome> CreateConsumerOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateConsumerRequest&, CreateConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatahubTaskResponse> CreateDatahubTaskOutcome;
                typedef std::future<CreateDatahubTaskOutcome> CreateDatahubTaskOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateDatahubTaskRequest&, CreateDatahubTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatahubTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatahubTopicResponse> CreateDatahubTopicOutcome;
                typedef std::future<CreateDatahubTopicOutcome> CreateDatahubTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateDatahubTopicRequest&, CreateDatahubTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatahubTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstancePostResponse> CreateInstancePostOutcome;
                typedef std::future<CreateInstancePostOutcome> CreateInstancePostOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateInstancePostRequest&, CreateInstancePostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancePostAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstancePreResponse> CreateInstancePreOutcome;
                typedef std::future<CreateInstancePreOutcome> CreateInstancePreOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateInstancePreRequest&, CreateInstancePreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancePreAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePartitionResponse> CreatePartitionOutcome;
                typedef std::future<CreatePartitionOutcome> CreatePartitionOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreatePartitionRequest&, CreatePartitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePartitionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePostPaidInstanceResponse> CreatePostPaidInstanceOutcome;
                typedef std::future<CreatePostPaidInstanceOutcome> CreatePostPaidInstanceOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreatePostPaidInstanceRequest&, CreatePostPaidInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePostPaidInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusResponse> CreatePrometheusOutcome;
                typedef std::future<CreatePrometheusOutcome> CreatePrometheusOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreatePrometheusRequest&, CreatePrometheusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRouteResponse> CreateRouteOutcome;
                typedef std::future<CreateRouteOutcome> CreateRouteOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateRouteRequest&, CreateRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTokenResponse> CreateTokenOutcome;
                typedef std::future<CreateTokenOutcome> CreateTokenOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateTokenRequest&, CreateTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicResponse> CreateTopicOutcome;
                typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateTopicRequest&, CreateTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicIpWhiteListResponse> CreateTopicIpWhiteListOutcome;
                typedef std::future<CreateTopicIpWhiteListOutcome> CreateTopicIpWhiteListOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateTopicIpWhiteListRequest&, CreateTopicIpWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicIpWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAclResponse> DeleteAclOutcome;
                typedef std::future<DeleteAclOutcome> DeleteAclOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteAclRequest&, DeleteAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAclAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAclRuleResponse> DeleteAclRuleOutcome;
                typedef std::future<DeleteAclRuleOutcome> DeleteAclRuleOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteAclRuleRequest&, DeleteAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConnectResourceResponse> DeleteConnectResourceOutcome;
                typedef std::future<DeleteConnectResourceOutcome> DeleteConnectResourceOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteConnectResourceRequest&, DeleteConnectResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConnectResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDatahubTaskResponse> DeleteDatahubTaskOutcome;
                typedef std::future<DeleteDatahubTaskOutcome> DeleteDatahubTaskOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteDatahubTaskRequest&, DeleteDatahubTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatahubTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDatahubTopicResponse> DeleteDatahubTopicOutcome;
                typedef std::future<DeleteDatahubTopicOutcome> DeleteDatahubTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteDatahubTopicRequest&, DeleteDatahubTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatahubTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGroupResponse> DeleteGroupOutcome;
                typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteGroupRequest&, DeleteGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstancePostResponse> DeleteInstancePostOutcome;
                typedef std::future<DeleteInstancePostOutcome> DeleteInstancePostOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteInstancePostRequest&, DeleteInstancePostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstancePostAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstancePreResponse> DeleteInstancePreOutcome;
                typedef std::future<DeleteInstancePreOutcome> DeleteInstancePreOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteInstancePreRequest&, DeleteInstancePreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstancePreAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRouteResponse> DeleteRouteOutcome;
                typedef std::future<DeleteRouteOutcome> DeleteRouteOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteRouteRequest&, DeleteRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRouteTriggerTimeResponse> DeleteRouteTriggerTimeOutcome;
                typedef std::future<DeleteRouteTriggerTimeOutcome> DeleteRouteTriggerTimeOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteRouteTriggerTimeRequest&, DeleteRouteTriggerTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteTriggerTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicResponse> DeleteTopicOutcome;
                typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteTopicRequest&, DeleteTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicIpWhiteListResponse> DeleteTopicIpWhiteListOutcome;
                typedef std::future<DeleteTopicIpWhiteListOutcome> DeleteTopicIpWhiteListOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteTopicIpWhiteListRequest&, DeleteTopicIpWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicIpWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeACLResponse> DescribeACLOutcome;
                typedef std::future<DescribeACLOutcome> DescribeACLOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeACLRequest&, DescribeACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeACLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAclRuleResponse> DescribeAclRuleOutcome;
                typedef std::future<DescribeAclRuleOutcome> DescribeAclRuleOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeAclRuleRequest&, DescribeAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppInfoResponse> DescribeAppInfoOutcome;
                typedef std::future<DescribeAppInfoOutcome> DescribeAppInfoOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeAppInfoRequest&, DescribeAppInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCkafkaZoneResponse> DescribeCkafkaZoneOutcome;
                typedef std::future<DescribeCkafkaZoneOutcome> DescribeCkafkaZoneOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeCkafkaZoneRequest&, DescribeCkafkaZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCkafkaZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConnectResourceResponse> DescribeConnectResourceOutcome;
                typedef std::future<DescribeConnectResourceOutcome> DescribeConnectResourceOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeConnectResourceRequest&, DescribeConnectResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConnectResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConnectResourcesResponse> DescribeConnectResourcesOutcome;
                typedef std::future<DescribeConnectResourcesOutcome> DescribeConnectResourcesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeConnectResourcesRequest&, DescribeConnectResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConnectResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerGroupResponse> DescribeConsumerGroupOutcome;
                typedef std::future<DescribeConsumerGroupOutcome> DescribeConsumerGroupOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeConsumerGroupRequest&, DescribeConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCvmInfoResponse> DescribeCvmInfoOutcome;
                typedef std::future<DescribeCvmInfoOutcome> DescribeCvmInfoOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeCvmInfoRequest&, DescribeCvmInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCvmInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatahubGroupOffsetsResponse> DescribeDatahubGroupOffsetsOutcome;
                typedef std::future<DescribeDatahubGroupOffsetsOutcome> DescribeDatahubGroupOffsetsOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeDatahubGroupOffsetsRequest&, DescribeDatahubGroupOffsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatahubGroupOffsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatahubTaskResponse> DescribeDatahubTaskOutcome;
                typedef std::future<DescribeDatahubTaskOutcome> DescribeDatahubTaskOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeDatahubTaskRequest&, DescribeDatahubTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatahubTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatahubTasksResponse> DescribeDatahubTasksOutcome;
                typedef std::future<DescribeDatahubTasksOutcome> DescribeDatahubTasksOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeDatahubTasksRequest&, DescribeDatahubTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatahubTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatahubTopicResponse> DescribeDatahubTopicOutcome;
                typedef std::future<DescribeDatahubTopicOutcome> DescribeDatahubTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeDatahubTopicRequest&, DescribeDatahubTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatahubTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatahubTopicsResponse> DescribeDatahubTopicsOutcome;
                typedef std::future<DescribeDatahubTopicsOutcome> DescribeDatahubTopicsOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeDatahubTopicsRequest&, DescribeDatahubTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatahubTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupResponse> DescribeGroupOutcome;
                typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeGroupRequest&, DescribeGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupInfoResponse> DescribeGroupInfoOutcome;
                typedef std::future<DescribeGroupInfoOutcome> DescribeGroupInfoOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeGroupInfoRequest&, DescribeGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupOffsetsResponse> DescribeGroupOffsetsOutcome;
                typedef std::future<DescribeGroupOffsetsOutcome> DescribeGroupOffsetsOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeGroupOffsetsRequest&, DescribeGroupOffsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupOffsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceAttributesResponse> DescribeInstanceAttributesOutcome;
                typedef std::future<DescribeInstanceAttributesOutcome> DescribeInstanceAttributesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeInstanceAttributesRequest&, DescribeInstanceAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesDetailResponse> DescribeInstancesDetailOutcome;
                typedef std::future<DescribeInstancesDetailOutcome> DescribeInstancesDetailOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeInstancesDetailRequest&, DescribeInstancesDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusResponse> DescribePrometheusOutcome;
                typedef std::future<DescribePrometheusOutcome> DescribePrometheusOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribePrometheusRequest&, DescribePrometheusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionResponse> DescribeRegionOutcome;
                typedef std::future<DescribeRegionOutcome> DescribeRegionOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeRegionRequest&, DescribeRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRouteResponse> DescribeRouteOutcome;
                typedef std::future<DescribeRouteOutcome> DescribeRouteOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeRouteRequest&, DescribeRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupRoutesResponse> DescribeSecurityGroupRoutesOutcome;
                typedef std::future<DescribeSecurityGroupRoutesOutcome> DescribeSecurityGroupRoutesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeSecurityGroupRoutesRequest&, DescribeSecurityGroupRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef std::future<DescribeTaskStatusOutcome> DescribeTaskStatusOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTaskStatusRequest&, DescribeTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicResponse> DescribeTopicOutcome;
                typedef std::future<DescribeTopicOutcome> DescribeTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicRequest&, DescribeTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicAttributesResponse> DescribeTopicAttributesOutcome;
                typedef std::future<DescribeTopicAttributesOutcome> DescribeTopicAttributesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicAttributesRequest&, DescribeTopicAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicDetailResponse> DescribeTopicDetailOutcome;
                typedef std::future<DescribeTopicDetailOutcome> DescribeTopicDetailOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicDetailRequest&, DescribeTopicDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicFlowRankingResponse> DescribeTopicFlowRankingOutcome;
                typedef std::future<DescribeTopicFlowRankingOutcome> DescribeTopicFlowRankingOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicFlowRankingRequest&, DescribeTopicFlowRankingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicFlowRankingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicProduceConnectionResponse> DescribeTopicProduceConnectionOutcome;
                typedef std::future<DescribeTopicProduceConnectionOutcome> DescribeTopicProduceConnectionOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicProduceConnectionRequest&, DescribeTopicProduceConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicProduceConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicSubscribeGroupResponse> DescribeTopicSubscribeGroupOutcome;
                typedef std::future<DescribeTopicSubscribeGroupOutcome> DescribeTopicSubscribeGroupOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicSubscribeGroupRequest&, DescribeTopicSubscribeGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicSubscribeGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicSyncReplicaResponse> DescribeTopicSyncReplicaOutcome;
                typedef std::future<DescribeTopicSyncReplicaOutcome> DescribeTopicSyncReplicaOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicSyncReplicaRequest&, DescribeTopicSyncReplicaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicSyncReplicaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTypeInstancesResponse> DescribeTypeInstancesOutcome;
                typedef std::future<DescribeTypeInstancesOutcome> DescribeTypeInstancesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTypeInstancesRequest&, DescribeTypeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTypeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserResponse> DescribeUserOutcome;
                typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeUserRequest&, DescribeUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserAsyncHandler;
                typedef Outcome<Core::Error, Model::FetchDatahubMessageByOffsetResponse> FetchDatahubMessageByOffsetOutcome;
                typedef std::future<FetchDatahubMessageByOffsetOutcome> FetchDatahubMessageByOffsetOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::FetchDatahubMessageByOffsetRequest&, FetchDatahubMessageByOffsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FetchDatahubMessageByOffsetAsyncHandler;
                typedef Outcome<Core::Error, Model::FetchLatestDatahubMessageListResponse> FetchLatestDatahubMessageListOutcome;
                typedef std::future<FetchLatestDatahubMessageListOutcome> FetchLatestDatahubMessageListOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::FetchLatestDatahubMessageListRequest&, FetchLatestDatahubMessageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FetchLatestDatahubMessageListAsyncHandler;
                typedef Outcome<Core::Error, Model::FetchMessageByOffsetResponse> FetchMessageByOffsetOutcome;
                typedef std::future<FetchMessageByOffsetOutcome> FetchMessageByOffsetOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::FetchMessageByOffsetRequest&, FetchMessageByOffsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FetchMessageByOffsetAsyncHandler;
                typedef Outcome<Core::Error, Model::FetchMessageListByOffsetResponse> FetchMessageListByOffsetOutcome;
                typedef std::future<FetchMessageListByOffsetOutcome> FetchMessageListByOffsetOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::FetchMessageListByOffsetRequest&, FetchMessageListByOffsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FetchMessageListByOffsetAsyncHandler;
                typedef Outcome<Core::Error, Model::FetchMessageListByTimestampResponse> FetchMessageListByTimestampOutcome;
                typedef std::future<FetchMessageListByTimestampOutcome> FetchMessageListByTimestampOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::FetchMessageListByTimestampRequest&, FetchMessageListByTimestampOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FetchMessageListByTimestampAsyncHandler;
                typedef Outcome<Core::Error, Model::InquireCkafkaPriceResponse> InquireCkafkaPriceOutcome;
                typedef std::future<InquireCkafkaPriceOutcome> InquireCkafkaPriceOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::InquireCkafkaPriceRequest&, InquireCkafkaPriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquireCkafkaPriceAsyncHandler;
                typedef Outcome<Core::Error, Model::InstanceScalingDownResponse> InstanceScalingDownOutcome;
                typedef std::future<InstanceScalingDownOutcome> InstanceScalingDownOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::InstanceScalingDownRequest&, InstanceScalingDownOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstanceScalingDownAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAclRuleResponse> ModifyAclRuleOutcome;
                typedef std::future<ModifyAclRuleOutcome> ModifyAclRuleOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyAclRuleRequest&, ModifyAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConnectResourceResponse> ModifyConnectResourceOutcome;
                typedef std::future<ModifyConnectResourceOutcome> ModifyConnectResourceOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyConnectResourceRequest&, ModifyConnectResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConnectResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatahubTaskResponse> ModifyDatahubTaskOutcome;
                typedef std::future<ModifyDatahubTaskOutcome> ModifyDatahubTaskOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyDatahubTaskRequest&, ModifyDatahubTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatahubTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatahubTopicResponse> ModifyDatahubTopicOutcome;
                typedef std::future<ModifyDatahubTopicOutcome> ModifyDatahubTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyDatahubTopicRequest&, ModifyDatahubTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatahubTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGroupOffsetsResponse> ModifyGroupOffsetsOutcome;
                typedef std::future<ModifyGroupOffsetsOutcome> ModifyGroupOffsetsOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyGroupOffsetsRequest&, ModifyGroupOffsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupOffsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceAttributesResponse> ModifyInstanceAttributesOutcome;
                typedef std::future<ModifyInstanceAttributesOutcome> ModifyInstanceAttributesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyInstanceAttributesRequest&, ModifyInstanceAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancePreResponse> ModifyInstancePreOutcome;
                typedef std::future<ModifyInstancePreOutcome> ModifyInstancePreOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyInstancePreRequest&, ModifyInstancePreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancePreAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPasswordResponse> ModifyPasswordOutcome;
                typedef std::future<ModifyPasswordOutcome> ModifyPasswordOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyPasswordRequest&, ModifyPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRoutineMaintenanceTaskResponse> ModifyRoutineMaintenanceTaskOutcome;
                typedef std::future<ModifyRoutineMaintenanceTaskOutcome> ModifyRoutineMaintenanceTaskOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyRoutineMaintenanceTaskRequest&, ModifyRoutineMaintenanceTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoutineMaintenanceTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTopicAttributesResponse> ModifyTopicAttributesOutcome;
                typedef std::future<ModifyTopicAttributesOutcome> ModifyTopicAttributesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyTopicAttributesRequest&, ModifyTopicAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewCkafkaInstanceResponse> RenewCkafkaInstanceOutcome;
                typedef std::future<RenewCkafkaInstanceOutcome> RenewCkafkaInstanceOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::RenewCkafkaInstanceRequest&, RenewCkafkaInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewCkafkaInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::SendMessageResponse> SendMessageOutcome;
                typedef std::future<SendMessageOutcome> SendMessageOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::SendMessageRequest&, SendMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendMessageAsyncHandler;



                /**
                 *给实例授权token
                 * @param req AuthorizeTokenRequest
                 * @return AuthorizeTokenOutcome
                 */
                AuthorizeTokenOutcome AuthorizeToken(const Model::AuthorizeTokenRequest &request);
                void AuthorizeTokenAsync(const Model::AuthorizeTokenRequest& request, const AuthorizeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AuthorizeTokenOutcomeCallable AuthorizeTokenCallable(const Model::AuthorizeTokenRequest& request);

                /**
                 *批量添加ACL策略
                 * @param req BatchCreateAclRequest
                 * @return BatchCreateAclOutcome
                 */
                BatchCreateAclOutcome BatchCreateAcl(const Model::BatchCreateAclRequest &request);
                void BatchCreateAclAsync(const Model::BatchCreateAclRequest& request, const BatchCreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchCreateAclOutcomeCallable BatchCreateAclCallable(const Model::BatchCreateAclRequest& request);

                /**
                 *批量修改消费组offset
                 * @param req BatchModifyGroupOffsetsRequest
                 * @return BatchModifyGroupOffsetsOutcome
                 */
                BatchModifyGroupOffsetsOutcome BatchModifyGroupOffsets(const Model::BatchModifyGroupOffsetsRequest &request);
                void BatchModifyGroupOffsetsAsync(const Model::BatchModifyGroupOffsetsRequest& request, const BatchModifyGroupOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyGroupOffsetsOutcomeCallable BatchModifyGroupOffsetsCallable(const Model::BatchModifyGroupOffsetsRequest& request);

                /**
                 *批量设置主题属性
                 * @param req BatchModifyTopicAttributesRequest
                 * @return BatchModifyTopicAttributesOutcome
                 */
                BatchModifyTopicAttributesOutcome BatchModifyTopicAttributes(const Model::BatchModifyTopicAttributesRequest &request);
                void BatchModifyTopicAttributesAsync(const Model::BatchModifyTopicAttributesRequest& request, const BatchModifyTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyTopicAttributesOutcomeCallable BatchModifyTopicAttributesCallable(const Model::BatchModifyTopicAttributesRequest& request);

                /**
                 *取消授权token
                 * @param req CancelAuthorizationTokenRequest
                 * @return CancelAuthorizationTokenOutcome
                 */
                CancelAuthorizationTokenOutcome CancelAuthorizationToken(const Model::CancelAuthorizationTokenRequest &request);
                void CancelAuthorizationTokenAsync(const Model::CancelAuthorizationTokenRequest& request, const CancelAuthorizationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelAuthorizationTokenOutcomeCallable CancelAuthorizationTokenCallable(const Model::CancelAuthorizationTokenRequest& request);

                /**
                 *用于查询cdc-ckafka任务状态
                 * @param req CheckCdcClusterRequest
                 * @return CheckCdcClusterOutcome
                 */
                CheckCdcClusterOutcome CheckCdcCluster(const Model::CheckCdcClusterRequest &request);
                void CheckCdcClusterAsync(const Model::CheckCdcClusterRequest& request, const CheckCdcClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckCdcClusterOutcomeCallable CheckCdcClusterCallable(const Model::CheckCdcClusterRequest& request);

                /**
                 *添加 ACL 策略
                 * @param req CreateAclRequest
                 * @return CreateAclOutcome
                 */
                CreateAclOutcome CreateAcl(const Model::CreateAclRequest &request);
                void CreateAclAsync(const Model::CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAclOutcomeCallable CreateAclCallable(const Model::CreateAclRequest& request);

                /**
                 *添加 ACL 规则
                 * @param req CreateAclRuleRequest
                 * @return CreateAclRuleOutcome
                 */
                CreateAclRuleOutcome CreateAclRule(const Model::CreateAclRuleRequest &request);
                void CreateAclRuleAsync(const Model::CreateAclRuleRequest& request, const CreateAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAclRuleOutcomeCallable CreateAclRuleCallable(const Model::CreateAclRuleRequest& request);

                /**
                 *用于cdc的专用ckafka集群
                 * @param req CreateCdcClusterRequest
                 * @return CreateCdcClusterOutcome
                 */
                CreateCdcClusterOutcome CreateCdcCluster(const Model::CreateCdcClusterRequest &request);
                void CreateCdcClusterAsync(const Model::CreateCdcClusterRequest& request, const CreateCdcClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCdcClusterOutcomeCallable CreateCdcClusterCallable(const Model::CreateCdcClusterRequest& request);

                /**
                 *创建Datahub连接源
                 * @param req CreateConnectResourceRequest
                 * @return CreateConnectResourceOutcome
                 */
                CreateConnectResourceOutcome CreateConnectResource(const Model::CreateConnectResourceRequest &request);
                void CreateConnectResourceAsync(const Model::CreateConnectResourceRequest& request, const CreateConnectResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConnectResourceOutcomeCallable CreateConnectResourceCallable(const Model::CreateConnectResourceRequest& request);

                /**
                 *创建消费者组
                 * @param req CreateConsumerRequest
                 * @return CreateConsumerOutcome
                 */
                CreateConsumerOutcome CreateConsumer(const Model::CreateConsumerRequest &request);
                void CreateConsumerAsync(const Model::CreateConsumerRequest& request, const CreateConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsumerOutcomeCallable CreateConsumerCallable(const Model::CreateConsumerRequest& request);

                /**
                 *创建DIP转储任务
                 * @param req CreateDatahubTaskRequest
                 * @return CreateDatahubTaskOutcome
                 */
                CreateDatahubTaskOutcome CreateDatahubTask(const Model::CreateDatahubTaskRequest &request);
                void CreateDatahubTaskAsync(const Model::CreateDatahubTaskRequest& request, const CreateDatahubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatahubTaskOutcomeCallable CreateDatahubTaskCallable(const Model::CreateDatahubTaskRequest& request);

                /**
                 *创建DIP主题
                 * @param req CreateDatahubTopicRequest
                 * @return CreateDatahubTopicOutcome
                 */
                CreateDatahubTopicOutcome CreateDatahubTopic(const Model::CreateDatahubTopicRequest &request);
                void CreateDatahubTopicAsync(const Model::CreateDatahubTopicRequest& request, const CreateDatahubTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatahubTopicOutcomeCallable CreateDatahubTopicCallable(const Model::CreateDatahubTopicRequest& request);

                /**
                 *由于出参需要更新，建议用户迁移使用 CreatePostPaidInstance 接口。创建按量计费实例。通常用于 SDK 或云 API 控制台调用接口，创建后付费 CKafka 实例。调用接口与在 CKafka 控制台购买按量付费实例效果相同。
                 * @param req CreateInstancePostRequest
                 * @return CreateInstancePostOutcome
                 */
                CreateInstancePostOutcome CreateInstancePost(const Model::CreateInstancePostRequest &request);
                void CreateInstancePostAsync(const Model::CreateInstancePostRequest& request, const CreateInstancePostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstancePostOutcomeCallable CreateInstancePostCallable(const Model::CreateInstancePostRequest& request);

                /**
                 *创建实例(预付费包年包月),  仅支持创建专业版实例
                 * @param req CreateInstancePreRequest
                 * @return CreateInstancePreOutcome
                 */
                CreateInstancePreOutcome CreateInstancePre(const Model::CreateInstancePreRequest &request);
                void CreateInstancePreAsync(const Model::CreateInstancePreRequest& request, const CreateInstancePreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstancePreOutcomeCallable CreateInstancePreCallable(const Model::CreateInstancePreRequest& request);

                /**
                 *本接口用于增加主题中的分区
                 * @param req CreatePartitionRequest
                 * @return CreatePartitionOutcome
                 */
                CreatePartitionOutcome CreatePartition(const Model::CreatePartitionRequest &request);
                void CreatePartitionAsync(const Model::CreatePartitionRequest& request, const CreatePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePartitionOutcomeCallable CreatePartitionCallable(const Model::CreatePartitionRequest& request);

                /**
                 *当前接口用来替代 CreateInstancePost 接口。创建按量计费实例。通常用于 SDK 或云 API 控制台调用接口，创建后付费 CKafka 实例。调用接口与在 CKafka 控制台购买按量付费实例效果相同。
                 * @param req CreatePostPaidInstanceRequest
                 * @return CreatePostPaidInstanceOutcome
                 */
                CreatePostPaidInstanceOutcome CreatePostPaidInstance(const Model::CreatePostPaidInstanceRequest &request);
                void CreatePostPaidInstanceAsync(const Model::CreatePostPaidInstanceRequest& request, const CreatePostPaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePostPaidInstanceOutcomeCallable CreatePostPaidInstanceCallable(const Model::CreatePostPaidInstanceRequest& request);

                /**
                 *添加普罗米修斯监控1
                 * @param req CreatePrometheusRequest
                 * @return CreatePrometheusOutcome
                 */
                CreatePrometheusOutcome CreatePrometheus(const Model::CreatePrometheusRequest &request);
                void CreatePrometheusAsync(const Model::CreatePrometheusRequest& request, const CreatePrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusOutcomeCallable CreatePrometheusCallable(const Model::CreatePrometheusRequest& request);

                /**
                 *添加实例路由
                 * @param req CreateRouteRequest
                 * @return CreateRouteOutcome
                 */
                CreateRouteOutcome CreateRoute(const Model::CreateRouteRequest &request);
                void CreateRouteAsync(const Model::CreateRouteRequest& request, const CreateRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRouteOutcomeCallable CreateRouteCallable(const Model::CreateRouteRequest& request);

                /**
                 *创建最高权限的token
                 * @param req CreateTokenRequest
                 * @return CreateTokenOutcome
                 */
                CreateTokenOutcome CreateToken(const Model::CreateTokenRequest &request);
                void CreateTokenAsync(const Model::CreateTokenRequest& request, const CreateTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTokenOutcomeCallable CreateTokenCallable(const Model::CreateTokenRequest& request);

                /**
                 *创建ckafka主题
                 * @param req CreateTopicRequest
                 * @return CreateTopicOutcome
                 */
                CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest &request);
                void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request);

                /**
                 *创建主题ip白名单
                 * @param req CreateTopicIpWhiteListRequest
                 * @return CreateTopicIpWhiteListOutcome
                 */
                CreateTopicIpWhiteListOutcome CreateTopicIpWhiteList(const Model::CreateTopicIpWhiteListRequest &request);
                void CreateTopicIpWhiteListAsync(const Model::CreateTopicIpWhiteListRequest& request, const CreateTopicIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicIpWhiteListOutcomeCallable CreateTopicIpWhiteListCallable(const Model::CreateTopicIpWhiteListRequest& request);

                /**
                 *添加用户
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *删除ACL
                 * @param req DeleteAclRequest
                 * @return DeleteAclOutcome
                 */
                DeleteAclOutcome DeleteAcl(const Model::DeleteAclRequest &request);
                void DeleteAclAsync(const Model::DeleteAclRequest& request, const DeleteAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAclOutcomeCallable DeleteAclCallable(const Model::DeleteAclRequest& request);

                /**
                 *删除ACL规则
                 * @param req DeleteAclRuleRequest
                 * @return DeleteAclRuleOutcome
                 */
                DeleteAclRuleOutcome DeleteAclRule(const Model::DeleteAclRuleRequest &request);
                void DeleteAclRuleAsync(const Model::DeleteAclRuleRequest& request, const DeleteAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAclRuleOutcomeCallable DeleteAclRuleCallable(const Model::DeleteAclRuleRequest& request);

                /**
                 *删除Datahub连接源
                 * @param req DeleteConnectResourceRequest
                 * @return DeleteConnectResourceOutcome
                 */
                DeleteConnectResourceOutcome DeleteConnectResource(const Model::DeleteConnectResourceRequest &request);
                void DeleteConnectResourceAsync(const Model::DeleteConnectResourceRequest& request, const DeleteConnectResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConnectResourceOutcomeCallable DeleteConnectResourceCallable(const Model::DeleteConnectResourceRequest& request);

                /**
                 *删除Dip任务
                 * @param req DeleteDatahubTaskRequest
                 * @return DeleteDatahubTaskOutcome
                 */
                DeleteDatahubTaskOutcome DeleteDatahubTask(const Model::DeleteDatahubTaskRequest &request);
                void DeleteDatahubTaskAsync(const Model::DeleteDatahubTaskRequest& request, const DeleteDatahubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDatahubTaskOutcomeCallable DeleteDatahubTaskCallable(const Model::DeleteDatahubTaskRequest& request);

                /**
                 *删除DIP主题
                 * @param req DeleteDatahubTopicRequest
                 * @return DeleteDatahubTopicOutcome
                 */
                DeleteDatahubTopicOutcome DeleteDatahubTopic(const Model::DeleteDatahubTopicRequest &request);
                void DeleteDatahubTopicAsync(const Model::DeleteDatahubTopicRequest& request, const DeleteDatahubTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDatahubTopicOutcomeCallable DeleteDatahubTopicCallable(const Model::DeleteDatahubTopicRequest& request);

                /**
                 *删除消费组
                 * @param req DeleteGroupRequest
                 * @return DeleteGroupOutcome
                 */
                DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest &request);
                void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request);

                /**
                 *删除后付费实例
                 * @param req DeleteInstancePostRequest
                 * @return DeleteInstancePostOutcome
                 */
                DeleteInstancePostOutcome DeleteInstancePost(const Model::DeleteInstancePostRequest &request);
                void DeleteInstancePostAsync(const Model::DeleteInstancePostRequest& request, const DeleteInstancePostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstancePostOutcomeCallable DeleteInstancePostCallable(const Model::DeleteInstancePostRequest& request);

                /**
                 *删除预付费实例，该接口会对实例执行隔离并删除的动作，执行成功后实例会被直接删除销毁
                 * @param req DeleteInstancePreRequest
                 * @return DeleteInstancePreOutcome
                 */
                DeleteInstancePreOutcome DeleteInstancePre(const Model::DeleteInstancePreRequest &request);
                void DeleteInstancePreAsync(const Model::DeleteInstancePreRequest& request, const DeleteInstancePreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstancePreOutcomeCallable DeleteInstancePreCallable(const Model::DeleteInstancePreRequest& request);

                /**
                 *删除路由
                 * @param req DeleteRouteRequest
                 * @return DeleteRouteOutcome
                 */
                DeleteRouteOutcome DeleteRoute(const Model::DeleteRouteRequest &request);
                void DeleteRouteAsync(const Model::DeleteRouteRequest& request, const DeleteRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRouteOutcomeCallable DeleteRouteCallable(const Model::DeleteRouteRequest& request);

                /**
                 *修改删除路由延迟触发时间
                 * @param req DeleteRouteTriggerTimeRequest
                 * @return DeleteRouteTriggerTimeOutcome
                 */
                DeleteRouteTriggerTimeOutcome DeleteRouteTriggerTime(const Model::DeleteRouteTriggerTimeRequest &request);
                void DeleteRouteTriggerTimeAsync(const Model::DeleteRouteTriggerTimeRequest& request, const DeleteRouteTriggerTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRouteTriggerTimeOutcomeCallable DeleteRouteTriggerTimeCallable(const Model::DeleteRouteTriggerTimeRequest& request);

                /**
                 *删除ckafka主题
                 * @param req DeleteTopicRequest
                 * @return DeleteTopicOutcome
                 */
                DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest &request);
                void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request);

                /**
                 *删除主题IP白名单
                 * @param req DeleteTopicIpWhiteListRequest
                 * @return DeleteTopicIpWhiteListOutcome
                 */
                DeleteTopicIpWhiteListOutcome DeleteTopicIpWhiteList(const Model::DeleteTopicIpWhiteListRequest &request);
                void DeleteTopicIpWhiteListAsync(const Model::DeleteTopicIpWhiteListRequest& request, const DeleteTopicIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicIpWhiteListOutcomeCallable DeleteTopicIpWhiteListCallable(const Model::DeleteTopicIpWhiteListRequest& request);

                /**
                 *删除用户
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *枚举ACL
                 * @param req DescribeACLRequest
                 * @return DescribeACLOutcome
                 */
                DescribeACLOutcome DescribeACL(const Model::DescribeACLRequest &request);
                void DescribeACLAsync(const Model::DescribeACLRequest& request, const DescribeACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeACLOutcomeCallable DescribeACLCallable(const Model::DescribeACLRequest& request);

                /**
                 *查询ACL规则列表
                 * @param req DescribeAclRuleRequest
                 * @return DescribeAclRuleOutcome
                 */
                DescribeAclRuleOutcome DescribeAclRule(const Model::DescribeAclRuleRequest &request);
                void DescribeAclRuleAsync(const Model::DescribeAclRuleRequest& request, const DescribeAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAclRuleOutcomeCallable DescribeAclRuleCallable(const Model::DescribeAclRuleRequest& request);

                /**
                 *查询用户列表
                 * @param req DescribeAppInfoRequest
                 * @return DescribeAppInfoOutcome
                 */
                DescribeAppInfoOutcome DescribeAppInfo(const Model::DescribeAppInfoRequest &request);
                void DescribeAppInfoAsync(const Model::DescribeAppInfoRequest& request, const DescribeAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppInfoOutcomeCallable DescribeAppInfoCallable(const Model::DescribeAppInfoRequest& request);

                /**
                 *用于查看ckafka的可用区列表
                 * @param req DescribeCkafkaZoneRequest
                 * @return DescribeCkafkaZoneOutcome
                 */
                DescribeCkafkaZoneOutcome DescribeCkafkaZone(const Model::DescribeCkafkaZoneRequest &request);
                void DescribeCkafkaZoneAsync(const Model::DescribeCkafkaZoneRequest& request, const DescribeCkafkaZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCkafkaZoneOutcomeCallable DescribeCkafkaZoneCallable(const Model::DescribeCkafkaZoneRequest& request);

                /**
                 *查询Datahub连接源
                 * @param req DescribeConnectResourceRequest
                 * @return DescribeConnectResourceOutcome
                 */
                DescribeConnectResourceOutcome DescribeConnectResource(const Model::DescribeConnectResourceRequest &request);
                void DescribeConnectResourceAsync(const Model::DescribeConnectResourceRequest& request, const DescribeConnectResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConnectResourceOutcomeCallable DescribeConnectResourceCallable(const Model::DescribeConnectResourceRequest& request);

                /**
                 *查询Datahub连接源列表
                 * @param req DescribeConnectResourcesRequest
                 * @return DescribeConnectResourcesOutcome
                 */
                DescribeConnectResourcesOutcome DescribeConnectResources(const Model::DescribeConnectResourcesRequest &request);
                void DescribeConnectResourcesAsync(const Model::DescribeConnectResourcesRequest& request, const DescribeConnectResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConnectResourcesOutcomeCallable DescribeConnectResourcesCallable(const Model::DescribeConnectResourcesRequest& request);

                /**
                 *查询消费分组信息
                 * @param req DescribeConsumerGroupRequest
                 * @return DescribeConsumerGroupOutcome
                 */
                DescribeConsumerGroupOutcome DescribeConsumerGroup(const Model::DescribeConsumerGroupRequest &request);
                void DescribeConsumerGroupAsync(const Model::DescribeConsumerGroupRequest& request, const DescribeConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerGroupOutcomeCallable DescribeConsumerGroupCallable(const Model::DescribeConsumerGroupRequest& request);

                /**
                 *本接口用于获取实例对应后端CVM信息，包括cvmId和ip等。用于专业版，标准版返回数据为空
                 * @param req DescribeCvmInfoRequest
                 * @return DescribeCvmInfoOutcome
                 */
                DescribeCvmInfoOutcome DescribeCvmInfo(const Model::DescribeCvmInfoRequest &request);
                void DescribeCvmInfoAsync(const Model::DescribeCvmInfoRequest& request, const DescribeCvmInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCvmInfoOutcomeCallable DescribeCvmInfoCallable(const Model::DescribeCvmInfoRequest& request);

                /**
                 *获取Datahub消费分组offset
                 * @param req DescribeDatahubGroupOffsetsRequest
                 * @return DescribeDatahubGroupOffsetsOutcome
                 */
                DescribeDatahubGroupOffsetsOutcome DescribeDatahubGroupOffsets(const Model::DescribeDatahubGroupOffsetsRequest &request);
                void DescribeDatahubGroupOffsetsAsync(const Model::DescribeDatahubGroupOffsetsRequest& request, const DescribeDatahubGroupOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatahubGroupOffsetsOutcomeCallable DescribeDatahubGroupOffsetsCallable(const Model::DescribeDatahubGroupOffsetsRequest& request);

                /**
                 *查询Datahub任务信息
                 * @param req DescribeDatahubTaskRequest
                 * @return DescribeDatahubTaskOutcome
                 */
                DescribeDatahubTaskOutcome DescribeDatahubTask(const Model::DescribeDatahubTaskRequest &request);
                void DescribeDatahubTaskAsync(const Model::DescribeDatahubTaskRequest& request, const DescribeDatahubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatahubTaskOutcomeCallable DescribeDatahubTaskCallable(const Model::DescribeDatahubTaskRequest& request);

                /**
                 *查询Datahub任务列表
                 * @param req DescribeDatahubTasksRequest
                 * @return DescribeDatahubTasksOutcome
                 */
                DescribeDatahubTasksOutcome DescribeDatahubTasks(const Model::DescribeDatahubTasksRequest &request);
                void DescribeDatahubTasksAsync(const Model::DescribeDatahubTasksRequest& request, const DescribeDatahubTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatahubTasksOutcomeCallable DescribeDatahubTasksCallable(const Model::DescribeDatahubTasksRequest& request);

                /**
                 *获取DIP主题属性
                 * @param req DescribeDatahubTopicRequest
                 * @return DescribeDatahubTopicOutcome
                 */
                DescribeDatahubTopicOutcome DescribeDatahubTopic(const Model::DescribeDatahubTopicRequest &request);
                void DescribeDatahubTopicAsync(const Model::DescribeDatahubTopicRequest& request, const DescribeDatahubTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatahubTopicOutcomeCallable DescribeDatahubTopicCallable(const Model::DescribeDatahubTopicRequest& request);

                /**
                 *查询DIP主题列表
                 * @param req DescribeDatahubTopicsRequest
                 * @return DescribeDatahubTopicsOutcome
                 */
                DescribeDatahubTopicsOutcome DescribeDatahubTopics(const Model::DescribeDatahubTopicsRequest &request);
                void DescribeDatahubTopicsAsync(const Model::DescribeDatahubTopicsRequest& request, const DescribeDatahubTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatahubTopicsOutcomeCallable DescribeDatahubTopicsCallable(const Model::DescribeDatahubTopicsRequest& request);

                /**
                 *枚举消费分组(精简版)
                 * @param req DescribeGroupRequest
                 * @return DescribeGroupOutcome
                 */
                DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest &request);
                void DescribeGroupAsync(const Model::DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupOutcomeCallable DescribeGroupCallable(const Model::DescribeGroupRequest& request);

                /**
                 *获取消费分组信息
                 * @param req DescribeGroupInfoRequest
                 * @return DescribeGroupInfoOutcome
                 */
                DescribeGroupInfoOutcome DescribeGroupInfo(const Model::DescribeGroupInfoRequest &request);
                void DescribeGroupInfoAsync(const Model::DescribeGroupInfoRequest& request, const DescribeGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupInfoOutcomeCallable DescribeGroupInfoCallable(const Model::DescribeGroupInfoRequest& request);

                /**
                 *获取消费分组offset
                 * @param req DescribeGroupOffsetsRequest
                 * @return DescribeGroupOffsetsOutcome
                 */
                DescribeGroupOffsetsOutcome DescribeGroupOffsets(const Model::DescribeGroupOffsetsRequest &request);
                void DescribeGroupOffsetsAsync(const Model::DescribeGroupOffsetsRequest& request, const DescribeGroupOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupOffsetsOutcomeCallable DescribeGroupOffsetsCallable(const Model::DescribeGroupOffsetsRequest& request);

                /**
                 *获取实例属性
                 * @param req DescribeInstanceAttributesRequest
                 * @return DescribeInstanceAttributesOutcome
                 */
                DescribeInstanceAttributesOutcome DescribeInstanceAttributes(const Model::DescribeInstanceAttributesRequest &request);
                void DescribeInstanceAttributesAsync(const Model::DescribeInstanceAttributesRequest& request, const DescribeInstanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceAttributesOutcomeCallable DescribeInstanceAttributesCallable(const Model::DescribeInstanceAttributesRequest& request);

                /**
                 *本接口（DescribeInstance）用于在用户账户下获取消息队列 CKafka 实例列表
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *用户账户下获取实例列表详情
                 * @param req DescribeInstancesDetailRequest
                 * @return DescribeInstancesDetailOutcome
                 */
                DescribeInstancesDetailOutcome DescribeInstancesDetail(const Model::DescribeInstancesDetailRequest &request);
                void DescribeInstancesDetailAsync(const Model::DescribeInstancesDetailRequest& request, const DescribeInstancesDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesDetailOutcomeCallable DescribeInstancesDetailCallable(const Model::DescribeInstancesDetailRequest& request);

                /**
                 *获取实例Prometheus信息
                 * @param req DescribePrometheusRequest
                 * @return DescribePrometheusOutcome
                 */
                DescribePrometheusOutcome DescribePrometheus(const Model::DescribePrometheusRequest &request);
                void DescribePrometheusAsync(const Model::DescribePrometheusRequest& request, const DescribePrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusOutcomeCallable DescribePrometheusCallable(const Model::DescribePrometheusRequest& request);

                /**
                 *枚举地域,只支持广州地域
                 * @param req DescribeRegionRequest
                 * @return DescribeRegionOutcome
                 */
                DescribeRegionOutcome DescribeRegion(const Model::DescribeRegionRequest &request);
                void DescribeRegionAsync(const Model::DescribeRegionRequest& request, const DescribeRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionOutcomeCallable DescribeRegionCallable(const Model::DescribeRegionRequest& request);

                /**
                 *查看路由信息
                 * @param req DescribeRouteRequest
                 * @return DescribeRouteOutcome
                 */
                DescribeRouteOutcome DescribeRoute(const Model::DescribeRouteRequest &request);
                void DescribeRouteAsync(const Model::DescribeRouteRequest& request, const DescribeRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteOutcomeCallable DescribeRouteCallable(const Model::DescribeRouteRequest& request);

                /**
                 *获取安全组路由信息列表
                 * @param req DescribeSecurityGroupRoutesRequest
                 * @return DescribeSecurityGroupRoutesOutcome
                 */
                DescribeSecurityGroupRoutesOutcome DescribeSecurityGroupRoutes(const Model::DescribeSecurityGroupRoutesRequest &request);
                void DescribeSecurityGroupRoutesAsync(const Model::DescribeSecurityGroupRoutesRequest& request, const DescribeSecurityGroupRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupRoutesOutcomeCallable DescribeSecurityGroupRoutesCallable(const Model::DescribeSecurityGroupRoutesRequest& request);

                /**
                 *查询任务状态
                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);
                void DescribeTaskStatusAsync(const Model::DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatusOutcomeCallable DescribeTaskStatusCallable(const Model::DescribeTaskStatusRequest& request);

                /**
                 *接口请求域名：https://ckafka.tencentcloudapi.com
本接口（DescribeTopic）用于在用户获取消息队列 CKafka 实例的主题列表
                 * @param req DescribeTopicRequest
                 * @return DescribeTopicOutcome
                 */
                DescribeTopicOutcome DescribeTopic(const Model::DescribeTopicRequest &request);
                void DescribeTopicAsync(const Model::DescribeTopicRequest& request, const DescribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicOutcomeCallable DescribeTopicCallable(const Model::DescribeTopicRequest& request);

                /**
                 *获取主题属性
                 * @param req DescribeTopicAttributesRequest
                 * @return DescribeTopicAttributesOutcome
                 */
                DescribeTopicAttributesOutcome DescribeTopicAttributes(const Model::DescribeTopicAttributesRequest &request);
                void DescribeTopicAttributesAsync(const Model::DescribeTopicAttributesRequest& request, const DescribeTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicAttributesOutcomeCallable DescribeTopicAttributesCallable(const Model::DescribeTopicAttributesRequest& request);

                /**
                 *获取主题列表详情（仅控制台调用）
                 * @param req DescribeTopicDetailRequest
                 * @return DescribeTopicDetailOutcome
                 */
                DescribeTopicDetailOutcome DescribeTopicDetail(const Model::DescribeTopicDetailRequest &request);
                void DescribeTopicDetailAsync(const Model::DescribeTopicDetailRequest& request, const DescribeTopicDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicDetailOutcomeCallable DescribeTopicDetailCallable(const Model::DescribeTopicDetailRequest& request);

                /**
                 *获取Topic流量排行，消费者流量排行
                 * @param req DescribeTopicFlowRankingRequest
                 * @return DescribeTopicFlowRankingOutcome
                 */
                DescribeTopicFlowRankingOutcome DescribeTopicFlowRanking(const Model::DescribeTopicFlowRankingRequest &request);
                void DescribeTopicFlowRankingAsync(const Model::DescribeTopicFlowRankingRequest& request, const DescribeTopicFlowRankingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicFlowRankingOutcomeCallable DescribeTopicFlowRankingCallable(const Model::DescribeTopicFlowRankingRequest& request);

                /**
                 *查询topic 生产端连接信息
                 * @param req DescribeTopicProduceConnectionRequest
                 * @return DescribeTopicProduceConnectionOutcome
                 */
                DescribeTopicProduceConnectionOutcome DescribeTopicProduceConnection(const Model::DescribeTopicProduceConnectionRequest &request);
                void DescribeTopicProduceConnectionAsync(const Model::DescribeTopicProduceConnectionRequest& request, const DescribeTopicProduceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicProduceConnectionOutcomeCallable DescribeTopicProduceConnectionCallable(const Model::DescribeTopicProduceConnectionRequest& request);

                /**
                 *查询订阅某主题消息分组信息
                 * @param req DescribeTopicSubscribeGroupRequest
                 * @return DescribeTopicSubscribeGroupOutcome
                 */
                DescribeTopicSubscribeGroupOutcome DescribeTopicSubscribeGroup(const Model::DescribeTopicSubscribeGroupRequest &request);
                void DescribeTopicSubscribeGroupAsync(const Model::DescribeTopicSubscribeGroupRequest& request, const DescribeTopicSubscribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicSubscribeGroupOutcomeCallable DescribeTopicSubscribeGroupCallable(const Model::DescribeTopicSubscribeGroupRequest& request);

                /**
                 *获取Topic 副本详情信息
                 * @param req DescribeTopicSyncReplicaRequest
                 * @return DescribeTopicSyncReplicaOutcome
                 */
                DescribeTopicSyncReplicaOutcome DescribeTopicSyncReplica(const Model::DescribeTopicSyncReplicaRequest &request);
                void DescribeTopicSyncReplicaAsync(const Model::DescribeTopicSyncReplicaRequest& request, const DescribeTopicSyncReplicaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicSyncReplicaOutcomeCallable DescribeTopicSyncReplicaCallable(const Model::DescribeTopicSyncReplicaRequest& request);

                /**
                 *本接口（DescribeTypeInstances）用于在用户账户下获取指定类型消息队列 CKafka 实例列表
                 * @param req DescribeTypeInstancesRequest
                 * @return DescribeTypeInstancesOutcome
                 */
                DescribeTypeInstancesOutcome DescribeTypeInstances(const Model::DescribeTypeInstancesRequest &request);
                void DescribeTypeInstancesAsync(const Model::DescribeTypeInstancesRequest& request, const DescribeTypeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTypeInstancesOutcomeCallable DescribeTypeInstancesCallable(const Model::DescribeTypeInstancesRequest& request);

                /**
                 *查询用户信息
                 * @param req DescribeUserRequest
                 * @return DescribeUserOutcome
                 */
                DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest &request);
                void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request);

                /**
                 *根据指定offset位置的消息
                 * @param req FetchDatahubMessageByOffsetRequest
                 * @return FetchDatahubMessageByOffsetOutcome
                 */
                FetchDatahubMessageByOffsetOutcome FetchDatahubMessageByOffset(const Model::FetchDatahubMessageByOffsetRequest &request);
                void FetchDatahubMessageByOffsetAsync(const Model::FetchDatahubMessageByOffsetRequest& request, const FetchDatahubMessageByOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FetchDatahubMessageByOffsetOutcomeCallable FetchDatahubMessageByOffsetCallable(const Model::FetchDatahubMessageByOffsetRequest& request);

                /**
                 *查询最新消息列表
                 * @param req FetchLatestDatahubMessageListRequest
                 * @return FetchLatestDatahubMessageListOutcome
                 */
                FetchLatestDatahubMessageListOutcome FetchLatestDatahubMessageList(const Model::FetchLatestDatahubMessageListRequest &request);
                void FetchLatestDatahubMessageListAsync(const Model::FetchLatestDatahubMessageListRequest& request, const FetchLatestDatahubMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FetchLatestDatahubMessageListOutcomeCallable FetchLatestDatahubMessageListCallable(const Model::FetchLatestDatahubMessageListRequest& request);

                /**
                 *根据指定offset位置的消息
                 * @param req FetchMessageByOffsetRequest
                 * @return FetchMessageByOffsetOutcome
                 */
                FetchMessageByOffsetOutcome FetchMessageByOffset(const Model::FetchMessageByOffsetRequest &request);
                void FetchMessageByOffsetAsync(const Model::FetchMessageByOffsetRequest& request, const FetchMessageByOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FetchMessageByOffsetOutcomeCallable FetchMessageByOffsetCallable(const Model::FetchMessageByOffsetRequest& request);

                /**
                 *根据位点查询消息列表
                 * @param req FetchMessageListByOffsetRequest
                 * @return FetchMessageListByOffsetOutcome
                 */
                FetchMessageListByOffsetOutcome FetchMessageListByOffset(const Model::FetchMessageListByOffsetRequest &request);
                void FetchMessageListByOffsetAsync(const Model::FetchMessageListByOffsetRequest& request, const FetchMessageListByOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FetchMessageListByOffsetOutcomeCallable FetchMessageListByOffsetCallable(const Model::FetchMessageListByOffsetRequest& request);

                /**
                 *根据时间戳查询消息列表
                 * @param req FetchMessageListByTimestampRequest
                 * @return FetchMessageListByTimestampOutcome
                 */
                FetchMessageListByTimestampOutcome FetchMessageListByTimestamp(const Model::FetchMessageListByTimestampRequest &request);
                void FetchMessageListByTimestampAsync(const Model::FetchMessageListByTimestampRequest& request, const FetchMessageListByTimestampAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FetchMessageListByTimestampOutcomeCallable FetchMessageListByTimestampCallable(const Model::FetchMessageListByTimestampRequest& request);

                /**
                 *Ckafka实例购买/续费询价
                 * @param req InquireCkafkaPriceRequest
                 * @return InquireCkafkaPriceOutcome
                 */
                InquireCkafkaPriceOutcome InquireCkafkaPrice(const Model::InquireCkafkaPriceRequest &request);
                void InquireCkafkaPriceAsync(const Model::InquireCkafkaPriceRequest& request, const InquireCkafkaPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquireCkafkaPriceOutcomeCallable InquireCkafkaPriceCallable(const Model::InquireCkafkaPriceRequest& request);

                /**
                 *按量实例缩容
                 * @param req InstanceScalingDownRequest
                 * @return InstanceScalingDownOutcome
                 */
                InstanceScalingDownOutcome InstanceScalingDown(const Model::InstanceScalingDownRequest &request);
                void InstanceScalingDownAsync(const Model::InstanceScalingDownRequest& request, const InstanceScalingDownAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstanceScalingDownOutcomeCallable InstanceScalingDownCallable(const Model::InstanceScalingDownRequest& request);

                /**
                 *修改ACL策略，目前只支持预设规则的是否应用到新增topic这一项的修改
                 * @param req ModifyAclRuleRequest
                 * @return ModifyAclRuleOutcome
                 */
                ModifyAclRuleOutcome ModifyAclRule(const Model::ModifyAclRuleRequest &request);
                void ModifyAclRuleAsync(const Model::ModifyAclRuleRequest& request, const ModifyAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAclRuleOutcomeCallable ModifyAclRuleCallable(const Model::ModifyAclRuleRequest& request);

                /**
                 *编辑Datahub连接源
                 * @param req ModifyConnectResourceRequest
                 * @return ModifyConnectResourceOutcome
                 */
                ModifyConnectResourceOutcome ModifyConnectResource(const Model::ModifyConnectResourceRequest &request);
                void ModifyConnectResourceAsync(const Model::ModifyConnectResourceRequest& request, const ModifyConnectResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConnectResourceOutcomeCallable ModifyConnectResourceCallable(const Model::ModifyConnectResourceRequest& request);

                /**
                 *修改Datahub任务
                 * @param req ModifyDatahubTaskRequest
                 * @return ModifyDatahubTaskOutcome
                 */
                ModifyDatahubTaskOutcome ModifyDatahubTask(const Model::ModifyDatahubTaskRequest &request);
                void ModifyDatahubTaskAsync(const Model::ModifyDatahubTaskRequest& request, const ModifyDatahubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatahubTaskOutcomeCallable ModifyDatahubTaskCallable(const Model::ModifyDatahubTaskRequest& request);

                /**
                 *修改DIP主题属性
                 * @param req ModifyDatahubTopicRequest
                 * @return ModifyDatahubTopicOutcome
                 */
                ModifyDatahubTopicOutcome ModifyDatahubTopic(const Model::ModifyDatahubTopicRequest &request);
                void ModifyDatahubTopicAsync(const Model::ModifyDatahubTopicRequest& request, const ModifyDatahubTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatahubTopicOutcomeCallable ModifyDatahubTopicCallable(const Model::ModifyDatahubTopicRequest& request);

                /**
                 *设置Groups 消费分组offset
                 * @param req ModifyGroupOffsetsRequest
                 * @return ModifyGroupOffsetsOutcome
                 */
                ModifyGroupOffsetsOutcome ModifyGroupOffsets(const Model::ModifyGroupOffsetsRequest &request);
                void ModifyGroupOffsetsAsync(const Model::ModifyGroupOffsetsRequest& request, const ModifyGroupOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGroupOffsetsOutcomeCallable ModifyGroupOffsetsCallable(const Model::ModifyGroupOffsetsRequest& request);

                /**
                 *设置实例属性
                 * @param req ModifyInstanceAttributesRequest
                 * @return ModifyInstanceAttributesOutcome
                 */
                ModifyInstanceAttributesOutcome ModifyInstanceAttributes(const Model::ModifyInstanceAttributesRequest &request);
                void ModifyInstanceAttributesAsync(const Model::ModifyInstanceAttributesRequest& request, const ModifyInstanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceAttributesOutcomeCallable ModifyInstanceAttributesCallable(const Model::ModifyInstanceAttributesRequest& request);

                /**
                 *预付费实例变配接口，调整磁盘，带宽
                 * @param req ModifyInstancePreRequest
                 * @return ModifyInstancePreOutcome
                 */
                ModifyInstancePreOutcome ModifyInstancePre(const Model::ModifyInstancePreRequest &request);
                void ModifyInstancePreAsync(const Model::ModifyInstancePreRequest& request, const ModifyInstancePreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancePreOutcomeCallable ModifyInstancePreCallable(const Model::ModifyInstancePreRequest& request);

                /**
                 *修改密码
                 * @param req ModifyPasswordRequest
                 * @return ModifyPasswordOutcome
                 */
                ModifyPasswordOutcome ModifyPassword(const Model::ModifyPasswordRequest &request);
                void ModifyPasswordAsync(const Model::ModifyPasswordRequest& request, const ModifyPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPasswordOutcomeCallable ModifyPasswordCallable(const Model::ModifyPasswordRequest& request);

                /**
                 *设置自动化运维属性
                 * @param req ModifyRoutineMaintenanceTaskRequest
                 * @return ModifyRoutineMaintenanceTaskOutcome
                 */
                ModifyRoutineMaintenanceTaskOutcome ModifyRoutineMaintenanceTask(const Model::ModifyRoutineMaintenanceTaskRequest &request);
                void ModifyRoutineMaintenanceTaskAsync(const Model::ModifyRoutineMaintenanceTaskRequest& request, const ModifyRoutineMaintenanceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoutineMaintenanceTaskOutcomeCallable ModifyRoutineMaintenanceTaskCallable(const Model::ModifyRoutineMaintenanceTaskRequest& request);

                /**
                 *本接口用于修改主题属性。
                 * @param req ModifyTopicAttributesRequest
                 * @return ModifyTopicAttributesOutcome
                 */
                ModifyTopicAttributesOutcome ModifyTopicAttributes(const Model::ModifyTopicAttributesRequest &request);
                void ModifyTopicAttributesAsync(const Model::ModifyTopicAttributesRequest& request, const ModifyTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicAttributesOutcomeCallable ModifyTopicAttributesCallable(const Model::ModifyTopicAttributesRequest& request);

                /**
                 *续费Ckafka实例, 目前只支持国内站包年包月实例续费
                 * @param req RenewCkafkaInstanceRequest
                 * @return RenewCkafkaInstanceOutcome
                 */
                RenewCkafkaInstanceOutcome RenewCkafkaInstance(const Model::RenewCkafkaInstanceRequest &request);
                void RenewCkafkaInstanceAsync(const Model::RenewCkafkaInstanceRequest& request, const RenewCkafkaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewCkafkaInstanceOutcomeCallable RenewCkafkaInstanceCallable(const Model::RenewCkafkaInstanceRequest& request);

                /**
                 *通过HTTP接入层发送消息
                 * @param req SendMessageRequest
                 * @return SendMessageOutcome
                 */
                SendMessageOutcome SendMessage(const Model::SendMessageRequest &request);
                void SendMessageAsync(const Model::SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendMessageOutcomeCallable SendMessageCallable(const Model::SendMessageRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_CKAFKACLIENT_H_
