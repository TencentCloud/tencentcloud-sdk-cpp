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

#ifndef TENCENTCLOUD_TROCKET_V20230308_TROCKETCLIENT_H_
#define TENCENTCLOUD_TROCKET_V20230308_TROCKETCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/trocket/v20230308/model/ChangeMigratingTopicToNextStageRequest.h>
#include <tencentcloud/trocket/v20230308/model/ChangeMigratingTopicToNextStageResponse.h>
#include <tencentcloud/trocket/v20230308/model/CreateConsumerGroupRequest.h>
#include <tencentcloud/trocket/v20230308/model/CreateConsumerGroupResponse.h>
#include <tencentcloud/trocket/v20230308/model/CreateInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/CreateInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/CreateMQTTInsPublicEndpointRequest.h>
#include <tencentcloud/trocket/v20230308/model/CreateMQTTInsPublicEndpointResponse.h>
#include <tencentcloud/trocket/v20230308/model/CreateMQTTInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/CreateMQTTInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/CreateMQTTTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/CreateMQTTTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/CreateMQTTUserRequest.h>
#include <tencentcloud/trocket/v20230308/model/CreateMQTTUserResponse.h>
#include <tencentcloud/trocket/v20230308/model/CreateRoleRequest.h>
#include <tencentcloud/trocket/v20230308/model/CreateRoleResponse.h>
#include <tencentcloud/trocket/v20230308/model/CreateTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/CreateTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteConsumerGroupRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteConsumerGroupResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteMQTTInsPublicEndpointRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteMQTTInsPublicEndpointResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteMQTTInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteMQTTInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteMQTTTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteMQTTTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteMQTTUserRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteMQTTUserResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteRoleRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteRoleResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteSmoothMigrationTaskRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteSmoothMigrationTaskResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerClientRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerClientResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerGroupRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerGroupResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerGroupListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerGroupListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerLagRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerLagResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeFusionInstanceListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeFusionInstanceListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeInstanceListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeInstanceListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTClientRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTClientResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTInsPublicEndpointsRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTInsPublicEndpointsResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTInsVPCEndpointsRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTInsVPCEndpointsResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTInstanceCertRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTInstanceCertResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTInstanceListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTInstanceListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTMessageRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTMessageResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTMessageListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTMessageListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTProductSKUListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTProductSKUListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTTopicListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTTopicListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTUserListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMQTTUserListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMessageRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMessageResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMessageListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMessageListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMessageTraceRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMessageTraceResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigratingGroupStatsRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigratingGroupStatsResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigratingTopicListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigratingTopicListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigratingTopicStatsRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigratingTopicStatsResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigrationTaskListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigrationTaskListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeProductSKUsRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeProductSKUsResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeRoleListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeRoleListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeSmoothMigrationTaskListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeSmoothMigrationTaskListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeSourceClusterGroupListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeSourceClusterGroupListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeTopicListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeTopicListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeTopicListByGroupRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeTopicListByGroupResponse.h>
#include <tencentcloud/trocket/v20230308/model/DoHealthCheckOnMigratingTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/DoHealthCheckOnMigratingTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/ImportSourceClusterConsumerGroupsRequest.h>
#include <tencentcloud/trocket/v20230308/model/ImportSourceClusterConsumerGroupsResponse.h>
#include <tencentcloud/trocket/v20230308/model/ImportSourceClusterTopicsRequest.h>
#include <tencentcloud/trocket/v20230308/model/ImportSourceClusterTopicsResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyConsumerGroupRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyConsumerGroupResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyInstanceEndpointRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyInstanceEndpointResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyMQTTInsPublicEndpointRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyMQTTInsPublicEndpointResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyMQTTInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyMQTTInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyMQTTInstanceCertBindingRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyMQTTInstanceCertBindingResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyMQTTTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyMQTTTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyMQTTUserRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyMQTTUserResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyRoleRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyRoleResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/RemoveMigratingTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/RemoveMigratingTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/ResendDeadLetterMessageRequest.h>
#include <tencentcloud/trocket/v20230308/model/ResendDeadLetterMessageResponse.h>
#include <tencentcloud/trocket/v20230308/model/ResetConsumerGroupOffsetRequest.h>
#include <tencentcloud/trocket/v20230308/model/ResetConsumerGroupOffsetResponse.h>
#include <tencentcloud/trocket/v20230308/model/RollbackMigratingTopicStageRequest.h>
#include <tencentcloud/trocket/v20230308/model/RollbackMigratingTopicStageResponse.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            class TrocketClient : public AbstractClient
            {
            public:
                TrocketClient(const Credential &credential, const std::string &region);
                TrocketClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ChangeMigratingTopicToNextStageResponse> ChangeMigratingTopicToNextStageOutcome;
                typedef std::future<ChangeMigratingTopicToNextStageOutcome> ChangeMigratingTopicToNextStageOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ChangeMigratingTopicToNextStageRequest&, ChangeMigratingTopicToNextStageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeMigratingTopicToNextStageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsumerGroupResponse> CreateConsumerGroupOutcome;
                typedef std::future<CreateConsumerGroupOutcome> CreateConsumerGroupOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::CreateConsumerGroupRequest&, CreateConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMQTTInsPublicEndpointResponse> CreateMQTTInsPublicEndpointOutcome;
                typedef std::future<CreateMQTTInsPublicEndpointOutcome> CreateMQTTInsPublicEndpointOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::CreateMQTTInsPublicEndpointRequest&, CreateMQTTInsPublicEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMQTTInsPublicEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMQTTInstanceResponse> CreateMQTTInstanceOutcome;
                typedef std::future<CreateMQTTInstanceOutcome> CreateMQTTInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::CreateMQTTInstanceRequest&, CreateMQTTInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMQTTInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMQTTTopicResponse> CreateMQTTTopicOutcome;
                typedef std::future<CreateMQTTTopicOutcome> CreateMQTTTopicOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::CreateMQTTTopicRequest&, CreateMQTTTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMQTTTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMQTTUserResponse> CreateMQTTUserOutcome;
                typedef std::future<CreateMQTTUserOutcome> CreateMQTTUserOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::CreateMQTTUserRequest&, CreateMQTTUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMQTTUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoleResponse> CreateRoleOutcome;
                typedef std::future<CreateRoleOutcome> CreateRoleOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::CreateRoleRequest&, CreateRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicResponse> CreateTopicOutcome;
                typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::CreateTopicRequest&, CreateTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConsumerGroupResponse> DeleteConsumerGroupOutcome;
                typedef std::future<DeleteConsumerGroupOutcome> DeleteConsumerGroupOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DeleteConsumerGroupRequest&, DeleteConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceResponse> DeleteInstanceOutcome;
                typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DeleteInstanceRequest&, DeleteInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMQTTInsPublicEndpointResponse> DeleteMQTTInsPublicEndpointOutcome;
                typedef std::future<DeleteMQTTInsPublicEndpointOutcome> DeleteMQTTInsPublicEndpointOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DeleteMQTTInsPublicEndpointRequest&, DeleteMQTTInsPublicEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMQTTInsPublicEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMQTTInstanceResponse> DeleteMQTTInstanceOutcome;
                typedef std::future<DeleteMQTTInstanceOutcome> DeleteMQTTInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DeleteMQTTInstanceRequest&, DeleteMQTTInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMQTTInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMQTTTopicResponse> DeleteMQTTTopicOutcome;
                typedef std::future<DeleteMQTTTopicOutcome> DeleteMQTTTopicOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DeleteMQTTTopicRequest&, DeleteMQTTTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMQTTTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMQTTUserResponse> DeleteMQTTUserOutcome;
                typedef std::future<DeleteMQTTUserOutcome> DeleteMQTTUserOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DeleteMQTTUserRequest&, DeleteMQTTUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMQTTUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoleResponse> DeleteRoleOutcome;
                typedef std::future<DeleteRoleOutcome> DeleteRoleOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DeleteRoleRequest&, DeleteRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSmoothMigrationTaskResponse> DeleteSmoothMigrationTaskOutcome;
                typedef std::future<DeleteSmoothMigrationTaskOutcome> DeleteSmoothMigrationTaskOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DeleteSmoothMigrationTaskRequest&, DeleteSmoothMigrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmoothMigrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicResponse> DeleteTopicOutcome;
                typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DeleteTopicRequest&, DeleteTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerClientResponse> DescribeConsumerClientOutcome;
                typedef std::future<DescribeConsumerClientOutcome> DescribeConsumerClientOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeConsumerClientRequest&, DescribeConsumerClientOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerClientAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerGroupResponse> DescribeConsumerGroupOutcome;
                typedef std::future<DescribeConsumerGroupOutcome> DescribeConsumerGroupOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeConsumerGroupRequest&, DescribeConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerGroupListResponse> DescribeConsumerGroupListOutcome;
                typedef std::future<DescribeConsumerGroupListOutcome> DescribeConsumerGroupListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeConsumerGroupListRequest&, DescribeConsumerGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerLagResponse> DescribeConsumerLagOutcome;
                typedef std::future<DescribeConsumerLagOutcome> DescribeConsumerLagOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeConsumerLagRequest&, DescribeConsumerLagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerLagAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFusionInstanceListResponse> DescribeFusionInstanceListOutcome;
                typedef std::future<DescribeFusionInstanceListOutcome> DescribeFusionInstanceListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeFusionInstanceListRequest&, DescribeFusionInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFusionInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceResponse> DescribeInstanceOutcome;
                typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeInstanceRequest&, DescribeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceListResponse> DescribeInstanceListOutcome;
                typedef std::future<DescribeInstanceListOutcome> DescribeInstanceListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeInstanceListRequest&, DescribeInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMQTTClientResponse> DescribeMQTTClientOutcome;
                typedef std::future<DescribeMQTTClientOutcome> DescribeMQTTClientOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMQTTClientRequest&, DescribeMQTTClientOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMQTTClientAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMQTTInsPublicEndpointsResponse> DescribeMQTTInsPublicEndpointsOutcome;
                typedef std::future<DescribeMQTTInsPublicEndpointsOutcome> DescribeMQTTInsPublicEndpointsOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMQTTInsPublicEndpointsRequest&, DescribeMQTTInsPublicEndpointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMQTTInsPublicEndpointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMQTTInsVPCEndpointsResponse> DescribeMQTTInsVPCEndpointsOutcome;
                typedef std::future<DescribeMQTTInsVPCEndpointsOutcome> DescribeMQTTInsVPCEndpointsOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMQTTInsVPCEndpointsRequest&, DescribeMQTTInsVPCEndpointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMQTTInsVPCEndpointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMQTTInstanceResponse> DescribeMQTTInstanceOutcome;
                typedef std::future<DescribeMQTTInstanceOutcome> DescribeMQTTInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMQTTInstanceRequest&, DescribeMQTTInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMQTTInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMQTTInstanceCertResponse> DescribeMQTTInstanceCertOutcome;
                typedef std::future<DescribeMQTTInstanceCertOutcome> DescribeMQTTInstanceCertOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMQTTInstanceCertRequest&, DescribeMQTTInstanceCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMQTTInstanceCertAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMQTTInstanceListResponse> DescribeMQTTInstanceListOutcome;
                typedef std::future<DescribeMQTTInstanceListOutcome> DescribeMQTTInstanceListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMQTTInstanceListRequest&, DescribeMQTTInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMQTTInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMQTTMessageResponse> DescribeMQTTMessageOutcome;
                typedef std::future<DescribeMQTTMessageOutcome> DescribeMQTTMessageOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMQTTMessageRequest&, DescribeMQTTMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMQTTMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMQTTMessageListResponse> DescribeMQTTMessageListOutcome;
                typedef std::future<DescribeMQTTMessageListOutcome> DescribeMQTTMessageListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMQTTMessageListRequest&, DescribeMQTTMessageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMQTTMessageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMQTTProductSKUListResponse> DescribeMQTTProductSKUListOutcome;
                typedef std::future<DescribeMQTTProductSKUListOutcome> DescribeMQTTProductSKUListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMQTTProductSKUListRequest&, DescribeMQTTProductSKUListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMQTTProductSKUListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMQTTTopicResponse> DescribeMQTTTopicOutcome;
                typedef std::future<DescribeMQTTTopicOutcome> DescribeMQTTTopicOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMQTTTopicRequest&, DescribeMQTTTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMQTTTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMQTTTopicListResponse> DescribeMQTTTopicListOutcome;
                typedef std::future<DescribeMQTTTopicListOutcome> DescribeMQTTTopicListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMQTTTopicListRequest&, DescribeMQTTTopicListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMQTTTopicListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMQTTUserListResponse> DescribeMQTTUserListOutcome;
                typedef std::future<DescribeMQTTUserListOutcome> DescribeMQTTUserListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMQTTUserListRequest&, DescribeMQTTUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMQTTUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageResponse> DescribeMessageOutcome;
                typedef std::future<DescribeMessageOutcome> DescribeMessageOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMessageRequest&, DescribeMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageListResponse> DescribeMessageListOutcome;
                typedef std::future<DescribeMessageListOutcome> DescribeMessageListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMessageListRequest&, DescribeMessageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageTraceResponse> DescribeMessageTraceOutcome;
                typedef std::future<DescribeMessageTraceOutcome> DescribeMessageTraceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMessageTraceRequest&, DescribeMessageTraceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageTraceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigratingGroupStatsResponse> DescribeMigratingGroupStatsOutcome;
                typedef std::future<DescribeMigratingGroupStatsOutcome> DescribeMigratingGroupStatsOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMigratingGroupStatsRequest&, DescribeMigratingGroupStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigratingGroupStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigratingTopicListResponse> DescribeMigratingTopicListOutcome;
                typedef std::future<DescribeMigratingTopicListOutcome> DescribeMigratingTopicListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMigratingTopicListRequest&, DescribeMigratingTopicListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigratingTopicListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigratingTopicStatsResponse> DescribeMigratingTopicStatsOutcome;
                typedef std::future<DescribeMigratingTopicStatsOutcome> DescribeMigratingTopicStatsOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMigratingTopicStatsRequest&, DescribeMigratingTopicStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigratingTopicStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationTaskListResponse> DescribeMigrationTaskListOutcome;
                typedef std::future<DescribeMigrationTaskListOutcome> DescribeMigrationTaskListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMigrationTaskListRequest&, DescribeMigrationTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductSKUsResponse> DescribeProductSKUsOutcome;
                typedef std::future<DescribeProductSKUsOutcome> DescribeProductSKUsOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeProductSKUsRequest&, DescribeProductSKUsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductSKUsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoleListResponse> DescribeRoleListOutcome;
                typedef std::future<DescribeRoleListOutcome> DescribeRoleListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeRoleListRequest&, DescribeRoleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSmoothMigrationTaskListResponse> DescribeSmoothMigrationTaskListOutcome;
                typedef std::future<DescribeSmoothMigrationTaskListOutcome> DescribeSmoothMigrationTaskListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeSmoothMigrationTaskListRequest&, DescribeSmoothMigrationTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmoothMigrationTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSourceClusterGroupListResponse> DescribeSourceClusterGroupListOutcome;
                typedef std::future<DescribeSourceClusterGroupListOutcome> DescribeSourceClusterGroupListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeSourceClusterGroupListRequest&, DescribeSourceClusterGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSourceClusterGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicResponse> DescribeTopicOutcome;
                typedef std::future<DescribeTopicOutcome> DescribeTopicOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeTopicRequest&, DescribeTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicListResponse> DescribeTopicListOutcome;
                typedef std::future<DescribeTopicListOutcome> DescribeTopicListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeTopicListRequest&, DescribeTopicListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicListByGroupResponse> DescribeTopicListByGroupOutcome;
                typedef std::future<DescribeTopicListByGroupOutcome> DescribeTopicListByGroupOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeTopicListByGroupRequest&, DescribeTopicListByGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicListByGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DoHealthCheckOnMigratingTopicResponse> DoHealthCheckOnMigratingTopicOutcome;
                typedef std::future<DoHealthCheckOnMigratingTopicOutcome> DoHealthCheckOnMigratingTopicOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DoHealthCheckOnMigratingTopicRequest&, DoHealthCheckOnMigratingTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DoHealthCheckOnMigratingTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportSourceClusterConsumerGroupsResponse> ImportSourceClusterConsumerGroupsOutcome;
                typedef std::future<ImportSourceClusterConsumerGroupsOutcome> ImportSourceClusterConsumerGroupsOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ImportSourceClusterConsumerGroupsRequest&, ImportSourceClusterConsumerGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportSourceClusterConsumerGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportSourceClusterTopicsResponse> ImportSourceClusterTopicsOutcome;
                typedef std::future<ImportSourceClusterTopicsOutcome> ImportSourceClusterTopicsOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ImportSourceClusterTopicsRequest&, ImportSourceClusterTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportSourceClusterTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConsumerGroupResponse> ModifyConsumerGroupOutcome;
                typedef std::future<ModifyConsumerGroupOutcome> ModifyConsumerGroupOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyConsumerGroupRequest&, ModifyConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceEndpointResponse> ModifyInstanceEndpointOutcome;
                typedef std::future<ModifyInstanceEndpointOutcome> ModifyInstanceEndpointOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyInstanceEndpointRequest&, ModifyInstanceEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMQTTInsPublicEndpointResponse> ModifyMQTTInsPublicEndpointOutcome;
                typedef std::future<ModifyMQTTInsPublicEndpointOutcome> ModifyMQTTInsPublicEndpointOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyMQTTInsPublicEndpointRequest&, ModifyMQTTInsPublicEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMQTTInsPublicEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMQTTInstanceResponse> ModifyMQTTInstanceOutcome;
                typedef std::future<ModifyMQTTInstanceOutcome> ModifyMQTTInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyMQTTInstanceRequest&, ModifyMQTTInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMQTTInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMQTTInstanceCertBindingResponse> ModifyMQTTInstanceCertBindingOutcome;
                typedef std::future<ModifyMQTTInstanceCertBindingOutcome> ModifyMQTTInstanceCertBindingOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyMQTTInstanceCertBindingRequest&, ModifyMQTTInstanceCertBindingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMQTTInstanceCertBindingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMQTTTopicResponse> ModifyMQTTTopicOutcome;
                typedef std::future<ModifyMQTTTopicOutcome> ModifyMQTTTopicOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyMQTTTopicRequest&, ModifyMQTTTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMQTTTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMQTTUserResponse> ModifyMQTTUserOutcome;
                typedef std::future<ModifyMQTTUserOutcome> ModifyMQTTUserOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyMQTTUserRequest&, ModifyMQTTUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMQTTUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRoleResponse> ModifyRoleOutcome;
                typedef std::future<ModifyRoleOutcome> ModifyRoleOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyRoleRequest&, ModifyRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTopicResponse> ModifyTopicOutcome;
                typedef std::future<ModifyTopicOutcome> ModifyTopicOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyTopicRequest&, ModifyTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveMigratingTopicResponse> RemoveMigratingTopicOutcome;
                typedef std::future<RemoveMigratingTopicOutcome> RemoveMigratingTopicOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::RemoveMigratingTopicRequest&, RemoveMigratingTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveMigratingTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::ResendDeadLetterMessageResponse> ResendDeadLetterMessageOutcome;
                typedef std::future<ResendDeadLetterMessageOutcome> ResendDeadLetterMessageOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ResendDeadLetterMessageRequest&, ResendDeadLetterMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResendDeadLetterMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetConsumerGroupOffsetResponse> ResetConsumerGroupOffsetOutcome;
                typedef std::future<ResetConsumerGroupOffsetOutcome> ResetConsumerGroupOffsetOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ResetConsumerGroupOffsetRequest&, ResetConsumerGroupOffsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetConsumerGroupOffsetAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackMigratingTopicStageResponse> RollbackMigratingTopicStageOutcome;
                typedef std::future<RollbackMigratingTopicStageOutcome> RollbackMigratingTopicStageOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::RollbackMigratingTopicStageRequest&, RollbackMigratingTopicStageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackMigratingTopicStageAsyncHandler;



                /**
                 *修改迁移中的Topic状态进入下一步
                 * @param req ChangeMigratingTopicToNextStageRequest
                 * @return ChangeMigratingTopicToNextStageOutcome
                 */
                ChangeMigratingTopicToNextStageOutcome ChangeMigratingTopicToNextStage(const Model::ChangeMigratingTopicToNextStageRequest &request);
                void ChangeMigratingTopicToNextStageAsync(const Model::ChangeMigratingTopicToNextStageRequest& request, const ChangeMigratingTopicToNextStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeMigratingTopicToNextStageOutcomeCallable ChangeMigratingTopicToNextStageCallable(const Model::ChangeMigratingTopicToNextStageRequest& request);

                /**
                 *创建消费组
                 * @param req CreateConsumerGroupRequest
                 * @return CreateConsumerGroupOutcome
                 */
                CreateConsumerGroupOutcome CreateConsumerGroup(const Model::CreateConsumerGroupRequest &request);
                void CreateConsumerGroupAsync(const Model::CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsumerGroupOutcomeCallable CreateConsumerGroupCallable(const Model::CreateConsumerGroupRequest& request);

                /**
                 *创建 RocketMQ 5.x 集群
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *为MQTT实例创建公网接入点
                 * @param req CreateMQTTInsPublicEndpointRequest
                 * @return CreateMQTTInsPublicEndpointOutcome
                 */
                CreateMQTTInsPublicEndpointOutcome CreateMQTTInsPublicEndpoint(const Model::CreateMQTTInsPublicEndpointRequest &request);
                void CreateMQTTInsPublicEndpointAsync(const Model::CreateMQTTInsPublicEndpointRequest& request, const CreateMQTTInsPublicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMQTTInsPublicEndpointOutcomeCallable CreateMQTTInsPublicEndpointCallable(const Model::CreateMQTTInsPublicEndpointRequest& request);

                /**
                 *购买新的MQTT实例
                 * @param req CreateMQTTInstanceRequest
                 * @return CreateMQTTInstanceOutcome
                 */
                CreateMQTTInstanceOutcome CreateMQTTInstance(const Model::CreateMQTTInstanceRequest &request);
                void CreateMQTTInstanceAsync(const Model::CreateMQTTInstanceRequest& request, const CreateMQTTInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMQTTInstanceOutcomeCallable CreateMQTTInstanceCallable(const Model::CreateMQTTInstanceRequest& request);

                /**
                 *创建主题
                 * @param req CreateMQTTTopicRequest
                 * @return CreateMQTTTopicOutcome
                 */
                CreateMQTTTopicOutcome CreateMQTTTopic(const Model::CreateMQTTTopicRequest &request);
                void CreateMQTTTopicAsync(const Model::CreateMQTTTopicRequest& request, const CreateMQTTTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMQTTTopicOutcomeCallable CreateMQTTTopicCallable(const Model::CreateMQTTTopicRequest& request);

                /**
                 *添加mqtt角色
                 * @param req CreateMQTTUserRequest
                 * @return CreateMQTTUserOutcome
                 */
                CreateMQTTUserOutcome CreateMQTTUser(const Model::CreateMQTTUserRequest &request);
                void CreateMQTTUserAsync(const Model::CreateMQTTUserRequest& request, const CreateMQTTUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMQTTUserOutcomeCallable CreateMQTTUserCallable(const Model::CreateMQTTUserRequest& request);

                /**
                 *添加角色
                 * @param req CreateRoleRequest
                 * @return CreateRoleOutcome
                 */
                CreateRoleOutcome CreateRole(const Model::CreateRoleRequest &request);
                void CreateRoleAsync(const Model::CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoleOutcomeCallable CreateRoleCallable(const Model::CreateRoleRequest& request);

                /**
                 *创建主题
                 * @param req CreateTopicRequest
                 * @return CreateTopicOutcome
                 */
                CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest &request);
                void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request);

                /**
                 *删除消费组
                 * @param req DeleteConsumerGroupRequest
                 * @return DeleteConsumerGroupOutcome
                 */
                DeleteConsumerGroupOutcome DeleteConsumerGroup(const Model::DeleteConsumerGroupRequest &request);
                void DeleteConsumerGroupAsync(const Model::DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConsumerGroupOutcomeCallable DeleteConsumerGroupCallable(const Model::DeleteConsumerGroupRequest& request);

                /**
                 *删除 RocketMQ 5.x 集群。
                 * @param req DeleteInstanceRequest
                 * @return DeleteInstanceOutcome
                 */
                DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest &request);
                void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request);

                /**
                 *删除MQTT实例的公网接入点
                 * @param req DeleteMQTTInsPublicEndpointRequest
                 * @return DeleteMQTTInsPublicEndpointOutcome
                 */
                DeleteMQTTInsPublicEndpointOutcome DeleteMQTTInsPublicEndpoint(const Model::DeleteMQTTInsPublicEndpointRequest &request);
                void DeleteMQTTInsPublicEndpointAsync(const Model::DeleteMQTTInsPublicEndpointRequest& request, const DeleteMQTTInsPublicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMQTTInsPublicEndpointOutcomeCallable DeleteMQTTInsPublicEndpointCallable(const Model::DeleteMQTTInsPublicEndpointRequest& request);

                /**
                 *删除MQTT实例
                 * @param req DeleteMQTTInstanceRequest
                 * @return DeleteMQTTInstanceOutcome
                 */
                DeleteMQTTInstanceOutcome DeleteMQTTInstance(const Model::DeleteMQTTInstanceRequest &request);
                void DeleteMQTTInstanceAsync(const Model::DeleteMQTTInstanceRequest& request, const DeleteMQTTInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMQTTInstanceOutcomeCallable DeleteMQTTInstanceCallable(const Model::DeleteMQTTInstanceRequest& request);

                /**
                 *删除MQTT主题
                 * @param req DeleteMQTTTopicRequest
                 * @return DeleteMQTTTopicOutcome
                 */
                DeleteMQTTTopicOutcome DeleteMQTTTopic(const Model::DeleteMQTTTopicRequest &request);
                void DeleteMQTTTopicAsync(const Model::DeleteMQTTTopicRequest& request, const DeleteMQTTTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMQTTTopicOutcomeCallable DeleteMQTTTopicCallable(const Model::DeleteMQTTTopicRequest& request);

                /**
                 *删除MQTT访问用户
                 * @param req DeleteMQTTUserRequest
                 * @return DeleteMQTTUserOutcome
                 */
                DeleteMQTTUserOutcome DeleteMQTTUser(const Model::DeleteMQTTUserRequest &request);
                void DeleteMQTTUserAsync(const Model::DeleteMQTTUserRequest& request, const DeleteMQTTUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMQTTUserOutcomeCallable DeleteMQTTUserCallable(const Model::DeleteMQTTUserRequest& request);

                /**
                 *删除角色
                 * @param req DeleteRoleRequest
                 * @return DeleteRoleOutcome
                 */
                DeleteRoleOutcome DeleteRole(const Model::DeleteRoleRequest &request);
                void DeleteRoleAsync(const Model::DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoleOutcomeCallable DeleteRoleCallable(const Model::DeleteRoleRequest& request);

                /**
                 *删除平滑迁移任务，只有被取消的任务才可删除
                 * @param req DeleteSmoothMigrationTaskRequest
                 * @return DeleteSmoothMigrationTaskOutcome
                 */
                DeleteSmoothMigrationTaskOutcome DeleteSmoothMigrationTask(const Model::DeleteSmoothMigrationTaskRequest &request);
                void DeleteSmoothMigrationTaskAsync(const Model::DeleteSmoothMigrationTaskRequest& request, const DeleteSmoothMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSmoothMigrationTaskOutcomeCallable DeleteSmoothMigrationTaskCallable(const Model::DeleteSmoothMigrationTaskRequest& request);

                /**
                 *删除主题
                 * @param req DeleteTopicRequest
                 * @return DeleteTopicOutcome
                 */
                DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest &request);
                void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request);

                /**
                 *查询消费者客户端详情
                 * @param req DescribeConsumerClientRequest
                 * @return DescribeConsumerClientOutcome
                 */
                DescribeConsumerClientOutcome DescribeConsumerClient(const Model::DescribeConsumerClientRequest &request);
                void DescribeConsumerClientAsync(const Model::DescribeConsumerClientRequest& request, const DescribeConsumerClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerClientOutcomeCallable DescribeConsumerClientCallable(const Model::DescribeConsumerClientRequest& request);

                /**
                 *查询消费组详情
                 * @param req DescribeConsumerGroupRequest
                 * @return DescribeConsumerGroupOutcome
                 */
                DescribeConsumerGroupOutcome DescribeConsumerGroup(const Model::DescribeConsumerGroupRequest &request);
                void DescribeConsumerGroupAsync(const Model::DescribeConsumerGroupRequest& request, const DescribeConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerGroupOutcomeCallable DescribeConsumerGroupCallable(const Model::DescribeConsumerGroupRequest& request);

                /**
                 *获取消费组列表，Filter参数使用说明如下：

1. ConsumerGroupName，名称模糊查询
2. ConsumeMessageOrderly，投递顺序性。"true":顺序投递；"false":并发投递
                 * @param req DescribeConsumerGroupListRequest
                 * @return DescribeConsumerGroupListOutcome
                 */
                DescribeConsumerGroupListOutcome DescribeConsumerGroupList(const Model::DescribeConsumerGroupListRequest &request);
                void DescribeConsumerGroupListAsync(const Model::DescribeConsumerGroupListRequest& request, const DescribeConsumerGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerGroupListOutcomeCallable DescribeConsumerGroupListCallable(const Model::DescribeConsumerGroupListRequest& request);

                /**
                 *查询指定消费组堆积数。
                 * @param req DescribeConsumerLagRequest
                 * @return DescribeConsumerLagOutcome
                 */
                DescribeConsumerLagOutcome DescribeConsumerLag(const Model::DescribeConsumerLagRequest &request);
                void DescribeConsumerLagAsync(const Model::DescribeConsumerLagRequest& request, const DescribeConsumerLagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerLagOutcomeCallable DescribeConsumerLagCallable(const Model::DescribeConsumerLagRequest& request);

                /**
                 *查询集群列表，支持 4.x 和 5.x 集群，其中 Filters 参数使用说明如下：
1. InstanceName, 名称模糊查询
2. InstanceId，集群ID查询
3. InstanceType, 集群类型查询，支持多选
4. Version，集群版本查询
                 * @param req DescribeFusionInstanceListRequest
                 * @return DescribeFusionInstanceListOutcome
                 */
                DescribeFusionInstanceListOutcome DescribeFusionInstanceList(const Model::DescribeFusionInstanceListRequest &request);
                void DescribeFusionInstanceListAsync(const Model::DescribeFusionInstanceListRequest& request, const DescribeFusionInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFusionInstanceListOutcomeCallable DescribeFusionInstanceListCallable(const Model::DescribeFusionInstanceListRequest& request);

                /**
                 *查询 RocketMQ 5.x 集群信息。
                 * @param req DescribeInstanceRequest
                 * @return DescribeInstanceOutcome
                 */
                DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest &request);
                void DescribeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOutcomeCallable DescribeInstanceCallable(const Model::DescribeInstanceRequest& request);

                /**
                 *查询集群列表，仅支持 5.x 集群。Filters参数使用说明如下：
1. InstanceName, 名称模糊查询
2. InstanceId，集群ID查询
3. InstanceType, 集群类型查询，支持多选
3. InstanceStatus，集群状态查询，支持多选

当使用TagFilters查询时，Filters参数失效。
                 * @param req DescribeInstanceListRequest
                 * @return DescribeInstanceListOutcome
                 */
                DescribeInstanceListOutcome DescribeInstanceList(const Model::DescribeInstanceListRequest &request);
                void DescribeInstanceListAsync(const Model::DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceListOutcomeCallable DescribeInstanceListCallable(const Model::DescribeInstanceListRequest& request);

                /**
                 *查询 MQTT 客户端详情
                 * @param req DescribeMQTTClientRequest
                 * @return DescribeMQTTClientOutcome
                 */
                DescribeMQTTClientOutcome DescribeMQTTClient(const Model::DescribeMQTTClientRequest &request);
                void DescribeMQTTClientAsync(const Model::DescribeMQTTClientRequest& request, const DescribeMQTTClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMQTTClientOutcomeCallable DescribeMQTTClientCallable(const Model::DescribeMQTTClientRequest& request);

                /**
                 *查询MQTT实例公网接入点
                 * @param req DescribeMQTTInsPublicEndpointsRequest
                 * @return DescribeMQTTInsPublicEndpointsOutcome
                 */
                DescribeMQTTInsPublicEndpointsOutcome DescribeMQTTInsPublicEndpoints(const Model::DescribeMQTTInsPublicEndpointsRequest &request);
                void DescribeMQTTInsPublicEndpointsAsync(const Model::DescribeMQTTInsPublicEndpointsRequest& request, const DescribeMQTTInsPublicEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMQTTInsPublicEndpointsOutcomeCallable DescribeMQTTInsPublicEndpointsCallable(const Model::DescribeMQTTInsPublicEndpointsRequest& request);

                /**
                 *查询MQTT实例公网接入点
                 * @param req DescribeMQTTInsVPCEndpointsRequest
                 * @return DescribeMQTTInsVPCEndpointsOutcome
                 */
                DescribeMQTTInsVPCEndpointsOutcome DescribeMQTTInsVPCEndpoints(const Model::DescribeMQTTInsVPCEndpointsRequest &request);
                void DescribeMQTTInsVPCEndpointsAsync(const Model::DescribeMQTTInsVPCEndpointsRequest& request, const DescribeMQTTInsVPCEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMQTTInsVPCEndpointsOutcomeCallable DescribeMQTTInsVPCEndpointsCallable(const Model::DescribeMQTTInsVPCEndpointsRequest& request);

                /**
                 *查询实例信息
                 * @param req DescribeMQTTInstanceRequest
                 * @return DescribeMQTTInstanceOutcome
                 */
                DescribeMQTTInstanceOutcome DescribeMQTTInstance(const Model::DescribeMQTTInstanceRequest &request);
                void DescribeMQTTInstanceAsync(const Model::DescribeMQTTInstanceRequest& request, const DescribeMQTTInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMQTTInstanceOutcomeCallable DescribeMQTTInstanceCallable(const Model::DescribeMQTTInstanceRequest& request);

                /**
                 *查询MQTT集群证书列表
                 * @param req DescribeMQTTInstanceCertRequest
                 * @return DescribeMQTTInstanceCertOutcome
                 */
                DescribeMQTTInstanceCertOutcome DescribeMQTTInstanceCert(const Model::DescribeMQTTInstanceCertRequest &request);
                void DescribeMQTTInstanceCertAsync(const Model::DescribeMQTTInstanceCertRequest& request, const DescribeMQTTInstanceCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMQTTInstanceCertOutcomeCallable DescribeMQTTInstanceCertCallable(const Model::DescribeMQTTInstanceCertRequest& request);

                /**
                 *获取实例列表，Filters参数使用说明如下：
1. InstanceName, 名称模糊查询
2. InstanceId，实例ID查询
3. InstanceType, 实例类型查询，支持多选
3. InstanceStatus，实例状态查询，支持多选

当使用TagFilters查询时，Filters参数失效。
                 * @param req DescribeMQTTInstanceListRequest
                 * @return DescribeMQTTInstanceListOutcome
                 */
                DescribeMQTTInstanceListOutcome DescribeMQTTInstanceList(const Model::DescribeMQTTInstanceListRequest &request);
                void DescribeMQTTInstanceListAsync(const Model::DescribeMQTTInstanceListRequest& request, const DescribeMQTTInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMQTTInstanceListOutcomeCallable DescribeMQTTInstanceListCallable(const Model::DescribeMQTTInstanceListRequest& request);

                /**
                 *查询MQTT消息详情
                 * @param req DescribeMQTTMessageRequest
                 * @return DescribeMQTTMessageOutcome
                 */
                DescribeMQTTMessageOutcome DescribeMQTTMessage(const Model::DescribeMQTTMessageRequest &request);
                void DescribeMQTTMessageAsync(const Model::DescribeMQTTMessageRequest& request, const DescribeMQTTMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMQTTMessageOutcomeCallable DescribeMQTTMessageCallable(const Model::DescribeMQTTMessageRequest& request);

                /**
                 *查询消息列表，如查询死信，请设置ConsumerGroup参数
                 * @param req DescribeMQTTMessageListRequest
                 * @return DescribeMQTTMessageListOutcome
                 */
                DescribeMQTTMessageListOutcome DescribeMQTTMessageList(const Model::DescribeMQTTMessageListRequest &request);
                void DescribeMQTTMessageListAsync(const Model::DescribeMQTTMessageListRequest& request, const DescribeMQTTMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMQTTMessageListOutcomeCallable DescribeMQTTMessageListCallable(const Model::DescribeMQTTMessageListRequest& request);

                /**
                 *获取产品售卖规格
                 * @param req DescribeMQTTProductSKUListRequest
                 * @return DescribeMQTTProductSKUListOutcome
                 */
                DescribeMQTTProductSKUListOutcome DescribeMQTTProductSKUList(const Model::DescribeMQTTProductSKUListRequest &request);
                void DescribeMQTTProductSKUListAsync(const Model::DescribeMQTTProductSKUListRequest& request, const DescribeMQTTProductSKUListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMQTTProductSKUListOutcomeCallable DescribeMQTTProductSKUListCallable(const Model::DescribeMQTTProductSKUListRequest& request);

                /**
                 *查询mqtt主题详情
                 * @param req DescribeMQTTTopicRequest
                 * @return DescribeMQTTTopicOutcome
                 */
                DescribeMQTTTopicOutcome DescribeMQTTTopic(const Model::DescribeMQTTTopicRequest &request);
                void DescribeMQTTTopicAsync(const Model::DescribeMQTTTopicRequest& request, const DescribeMQTTTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMQTTTopicOutcomeCallable DescribeMQTTTopicCallable(const Model::DescribeMQTTTopicRequest& request);

                /**
                 *获取主题列表，Filter参数使用说明如下：

1. TopicName，主题名称模糊搜索
2. TopicType，主题类型查询，支持多选，可选值：Normal,Order,Transaction,DelayScheduled
                 * @param req DescribeMQTTTopicListRequest
                 * @return DescribeMQTTTopicListOutcome
                 */
                DescribeMQTTTopicListOutcome DescribeMQTTTopicList(const Model::DescribeMQTTTopicListRequest &request);
                void DescribeMQTTTopicListAsync(const Model::DescribeMQTTTopicListRequest& request, const DescribeMQTTTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMQTTTopicListOutcomeCallable DescribeMQTTTopicListCallable(const Model::DescribeMQTTTopicListRequest& request);

                /**
                 *查询用户列表，Filter参数使用说明如下：

1. Username，用户名称模糊搜索
                 * @param req DescribeMQTTUserListRequest
                 * @return DescribeMQTTUserListOutcome
                 */
                DescribeMQTTUserListOutcome DescribeMQTTUserList(const Model::DescribeMQTTUserListRequest &request);
                void DescribeMQTTUserListAsync(const Model::DescribeMQTTUserListRequest& request, const DescribeMQTTUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMQTTUserListOutcomeCallable DescribeMQTTUserListCallable(const Model::DescribeMQTTUserListRequest& request);

                /**
                 *查询消息详情
                 * @param req DescribeMessageRequest
                 * @return DescribeMessageOutcome
                 */
                DescribeMessageOutcome DescribeMessage(const Model::DescribeMessageRequest &request);
                void DescribeMessageAsync(const Model::DescribeMessageRequest& request, const DescribeMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageOutcomeCallable DescribeMessageCallable(const Model::DescribeMessageRequest& request);

                /**
                 *查询消息列表。如果查询死信消息，请设置ConsumerGroup参数。
                 * @param req DescribeMessageListRequest
                 * @return DescribeMessageListOutcome
                 */
                DescribeMessageListOutcome DescribeMessageList(const Model::DescribeMessageListRequest &request);
                void DescribeMessageListAsync(const Model::DescribeMessageListRequest& request, const DescribeMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageListOutcomeCallable DescribeMessageListCallable(const Model::DescribeMessageListRequest& request);

                /**
                 *根据消息 ID 查询消息轨迹。
                 * @param req DescribeMessageTraceRequest
                 * @return DescribeMessageTraceOutcome
                 */
                DescribeMessageTraceOutcome DescribeMessageTrace(const Model::DescribeMessageTraceRequest &request);
                void DescribeMessageTraceAsync(const Model::DescribeMessageTraceRequest& request, const DescribeMessageTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageTraceOutcomeCallable DescribeMessageTraceCallable(const Model::DescribeMessageTraceRequest& request);

                /**
                 *查看迁移消费组的实时信息
                 * @param req DescribeMigratingGroupStatsRequest
                 * @return DescribeMigratingGroupStatsOutcome
                 */
                DescribeMigratingGroupStatsOutcome DescribeMigratingGroupStats(const Model::DescribeMigratingGroupStatsRequest &request);
                void DescribeMigratingGroupStatsAsync(const Model::DescribeMigratingGroupStatsRequest& request, const DescribeMigratingGroupStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigratingGroupStatsOutcomeCallable DescribeMigratingGroupStatsCallable(const Model::DescribeMigratingGroupStatsRequest& request);

                /**
                 *查询Topic迁移状态列表

Filters字段为查询过滤器，支持以下条件：
TopicName 主题名称，支持模糊查询，
MigrationStatus 迁移状态，可参考MigratingTopic数据结构，
Namespace 命名空间，仅4.x集群有效，
                 * @param req DescribeMigratingTopicListRequest
                 * @return DescribeMigratingTopicListOutcome
                 */
                DescribeMigratingTopicListOutcome DescribeMigratingTopicList(const Model::DescribeMigratingTopicListRequest &request);
                void DescribeMigratingTopicListAsync(const Model::DescribeMigratingTopicListRequest& request, const DescribeMigratingTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigratingTopicListOutcomeCallable DescribeMigratingTopicListCallable(const Model::DescribeMigratingTopicListRequest& request);

                /**
                 *用于查询迁移主题的实时数据
                 * @param req DescribeMigratingTopicStatsRequest
                 * @return DescribeMigratingTopicStatsOutcome
                 */
                DescribeMigratingTopicStatsOutcome DescribeMigratingTopicStats(const Model::DescribeMigratingTopicStatsRequest &request);
                void DescribeMigratingTopicStatsAsync(const Model::DescribeMigratingTopicStatsRequest& request, const DescribeMigratingTopicStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigratingTopicStatsOutcomeCallable DescribeMigratingTopicStatsCallable(const Model::DescribeMigratingTopicStatsRequest& request);

                /**
                 *获取数据迁移任务列表，Filter参数使用说明如下：

TaskId，根据任务ID精确查找
InstanceId，根据实例ID精确查找
Type，根据任务类型精确查找
                 * @param req DescribeMigrationTaskListRequest
                 * @return DescribeMigrationTaskListOutcome
                 */
                DescribeMigrationTaskListOutcome DescribeMigrationTaskList(const Model::DescribeMigrationTaskListRequest &request);
                void DescribeMigrationTaskListAsync(const Model::DescribeMigrationTaskListRequest& request, const DescribeMigrationTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationTaskListOutcomeCallable DescribeMigrationTaskListCallable(const Model::DescribeMigrationTaskListRequest& request);

                /**
                 *查询产品售卖规格，针对 RocketMQ 5.x 集群。
                 * @param req DescribeProductSKUsRequest
                 * @return DescribeProductSKUsOutcome
                 */
                DescribeProductSKUsOutcome DescribeProductSKUs(const Model::DescribeProductSKUsRequest &request);
                void DescribeProductSKUsAsync(const Model::DescribeProductSKUsRequest& request, const DescribeProductSKUsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductSKUsOutcomeCallable DescribeProductSKUsCallable(const Model::DescribeProductSKUsRequest& request);

                /**
                 *查询角色列表，Filter参数使用说明如下：

1. RoleName，角色名称模糊搜索
2. AccessKey，AccessKey模糊搜索
                 * @param req DescribeRoleListRequest
                 * @return DescribeRoleListOutcome
                 */
                DescribeRoleListOutcome DescribeRoleList(const Model::DescribeRoleListRequest &request);
                void DescribeRoleListAsync(const Model::DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoleListOutcomeCallable DescribeRoleListCallable(const Model::DescribeRoleListRequest& request);

                /**
                 *用于查询平滑迁移任务列表

查询参数Filters， 支持的字段如下：
TaskStatus, 任务状态，支持多选 
ConnectionType，网络连接类型，支持多选 
InstanceId，实例ID，精确搜索 
TaskName，任务名称，支持模糊搜索
                 * @param req DescribeSmoothMigrationTaskListRequest
                 * @return DescribeSmoothMigrationTaskListOutcome
                 */
                DescribeSmoothMigrationTaskListOutcome DescribeSmoothMigrationTaskList(const Model::DescribeSmoothMigrationTaskListRequest &request);
                void DescribeSmoothMigrationTaskListAsync(const Model::DescribeSmoothMigrationTaskListRequest& request, const DescribeSmoothMigrationTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmoothMigrationTaskListOutcomeCallable DescribeSmoothMigrationTaskListCallable(const Model::DescribeSmoothMigrationTaskListRequest& request);

                /**
                 *平滑迁移过程获取源集群group列表接口

Filters字段为查询过滤器，支持以下字段：
GroupName，消费组名称模糊搜索
Imported，是否已导入
ImportStatus，导入状态
Namespace，命名空间
                 * @param req DescribeSourceClusterGroupListRequest
                 * @return DescribeSourceClusterGroupListOutcome
                 */
                DescribeSourceClusterGroupListOutcome DescribeSourceClusterGroupList(const Model::DescribeSourceClusterGroupListRequest &request);
                void DescribeSourceClusterGroupListAsync(const Model::DescribeSourceClusterGroupListRequest& request, const DescribeSourceClusterGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSourceClusterGroupListOutcomeCallable DescribeSourceClusterGroupListCallable(const Model::DescribeSourceClusterGroupListRequest& request);

                /**
                 *查询主题详情，Offset和Limit参数是指订阅该主题的消费组查询分页参数，Filter参数使用说明如下：

ConsumerGroup，消费组名称过滤
                 * @param req DescribeTopicRequest
                 * @return DescribeTopicOutcome
                 */
                DescribeTopicOutcome DescribeTopic(const Model::DescribeTopicRequest &request);
                void DescribeTopicAsync(const Model::DescribeTopicRequest& request, const DescribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicOutcomeCallable DescribeTopicCallable(const Model::DescribeTopicRequest& request);

                /**
                 *获取主题列表，Filter参数使用说明如下：

1. TopicName，主题名称模糊搜索
2. TopicType，主题类型查询，支持多选，可选值：Normal,Order,Transaction,DelayScheduled
                 * @param req DescribeTopicListRequest
                 * @return DescribeTopicListOutcome
                 */
                DescribeTopicListOutcome DescribeTopicList(const Model::DescribeTopicListRequest &request);
                void DescribeTopicListAsync(const Model::DescribeTopicListRequest& request, const DescribeTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicListOutcomeCallable DescribeTopicListCallable(const Model::DescribeTopicListRequest& request);

                /**
                 *根据消费组获取主题列表，Filter参数使用说明如下：

TopicName，主题名称过滤
                 * @param req DescribeTopicListByGroupRequest
                 * @return DescribeTopicListByGroupOutcome
                 */
                DescribeTopicListByGroupOutcome DescribeTopicListByGroup(const Model::DescribeTopicListByGroupRequest &request);
                void DescribeTopicListByGroupAsync(const Model::DescribeTopicListByGroupRequest& request, const DescribeTopicListByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicListByGroupOutcomeCallable DescribeTopicListByGroupCallable(const Model::DescribeTopicListByGroupRequest& request);

                /**
                 *检查迁移中的主题是否处于正常状态，只有处于正常状态的主题，才可以进入下一个迁移阶段
                 * @param req DoHealthCheckOnMigratingTopicRequest
                 * @return DoHealthCheckOnMigratingTopicOutcome
                 */
                DoHealthCheckOnMigratingTopicOutcome DoHealthCheckOnMigratingTopic(const Model::DoHealthCheckOnMigratingTopicRequest &request);
                void DoHealthCheckOnMigratingTopicAsync(const Model::DoHealthCheckOnMigratingTopicRequest& request, const DoHealthCheckOnMigratingTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DoHealthCheckOnMigratingTopicOutcomeCallable DoHealthCheckOnMigratingTopicCallable(const Model::DoHealthCheckOnMigratingTopicRequest& request);

                /**
                 *导入消费者组列表
                 * @param req ImportSourceClusterConsumerGroupsRequest
                 * @return ImportSourceClusterConsumerGroupsOutcome
                 */
                ImportSourceClusterConsumerGroupsOutcome ImportSourceClusterConsumerGroups(const Model::ImportSourceClusterConsumerGroupsRequest &request);
                void ImportSourceClusterConsumerGroupsAsync(const Model::ImportSourceClusterConsumerGroupsRequest& request, const ImportSourceClusterConsumerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportSourceClusterConsumerGroupsOutcomeCallable ImportSourceClusterConsumerGroupsCallable(const Model::ImportSourceClusterConsumerGroupsRequest& request);

                /**
                 *导入topic列表
                 * @param req ImportSourceClusterTopicsRequest
                 * @return ImportSourceClusterTopicsOutcome
                 */
                ImportSourceClusterTopicsOutcome ImportSourceClusterTopics(const Model::ImportSourceClusterTopicsRequest &request);
                void ImportSourceClusterTopicsAsync(const Model::ImportSourceClusterTopicsRequest& request, const ImportSourceClusterTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportSourceClusterTopicsOutcomeCallable ImportSourceClusterTopicsCallable(const Model::ImportSourceClusterTopicsRequest& request);

                /**
                 *修改消费组属性
                 * @param req ModifyConsumerGroupRequest
                 * @return ModifyConsumerGroupOutcome
                 */
                ModifyConsumerGroupOutcome ModifyConsumerGroup(const Model::ModifyConsumerGroupRequest &request);
                void ModifyConsumerGroupAsync(const Model::ModifyConsumerGroupRequest& request, const ModifyConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConsumerGroupOutcomeCallable ModifyConsumerGroupCallable(const Model::ModifyConsumerGroupRequest& request);

                /**
                 *修改 RocketMQ 5.x 集群属性。
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

                /**
                 *修改 RocketMQ 5.x 集群接入点。
                 * @param req ModifyInstanceEndpointRequest
                 * @return ModifyInstanceEndpointOutcome
                 */
                ModifyInstanceEndpointOutcome ModifyInstanceEndpoint(const Model::ModifyInstanceEndpointRequest &request);
                void ModifyInstanceEndpointAsync(const Model::ModifyInstanceEndpointRequest& request, const ModifyInstanceEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceEndpointOutcomeCallable ModifyInstanceEndpointCallable(const Model::ModifyInstanceEndpointRequest& request);

                /**
                 *更新MQTT实例公网接入点
                 * @param req ModifyMQTTInsPublicEndpointRequest
                 * @return ModifyMQTTInsPublicEndpointOutcome
                 */
                ModifyMQTTInsPublicEndpointOutcome ModifyMQTTInsPublicEndpoint(const Model::ModifyMQTTInsPublicEndpointRequest &request);
                void ModifyMQTTInsPublicEndpointAsync(const Model::ModifyMQTTInsPublicEndpointRequest& request, const ModifyMQTTInsPublicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMQTTInsPublicEndpointOutcomeCallable ModifyMQTTInsPublicEndpointCallable(const Model::ModifyMQTTInsPublicEndpointRequest& request);

                /**
                 *修改实例属性
                 * @param req ModifyMQTTInstanceRequest
                 * @return ModifyMQTTInstanceOutcome
                 */
                ModifyMQTTInstanceOutcome ModifyMQTTInstance(const Model::ModifyMQTTInstanceRequest &request);
                void ModifyMQTTInstanceAsync(const Model::ModifyMQTTInstanceRequest& request, const ModifyMQTTInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMQTTInstanceOutcomeCallable ModifyMQTTInstanceCallable(const Model::ModifyMQTTInstanceRequest& request);

                /**
                 *更新MQTT集群绑定证书
参数传空，则为删除证书
                 * @param req ModifyMQTTInstanceCertBindingRequest
                 * @return ModifyMQTTInstanceCertBindingOutcome
                 */
                ModifyMQTTInstanceCertBindingOutcome ModifyMQTTInstanceCertBinding(const Model::ModifyMQTTInstanceCertBindingRequest &request);
                void ModifyMQTTInstanceCertBindingAsync(const Model::ModifyMQTTInstanceCertBindingRequest& request, const ModifyMQTTInstanceCertBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMQTTInstanceCertBindingOutcomeCallable ModifyMQTTInstanceCertBindingCallable(const Model::ModifyMQTTInstanceCertBindingRequest& request);

                /**
                 *修改主题属性
                 * @param req ModifyMQTTTopicRequest
                 * @return ModifyMQTTTopicOutcome
                 */
                ModifyMQTTTopicOutcome ModifyMQTTTopic(const Model::ModifyMQTTTopicRequest &request);
                void ModifyMQTTTopicAsync(const Model::ModifyMQTTTopicRequest& request, const ModifyMQTTTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMQTTTopicOutcomeCallable ModifyMQTTTopicCallable(const Model::ModifyMQTTTopicRequest& request);

                /**
                 *修改MQTT角色
                 * @param req ModifyMQTTUserRequest
                 * @return ModifyMQTTUserOutcome
                 */
                ModifyMQTTUserOutcome ModifyMQTTUser(const Model::ModifyMQTTUserRequest &request);
                void ModifyMQTTUserAsync(const Model::ModifyMQTTUserRequest& request, const ModifyMQTTUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMQTTUserOutcomeCallable ModifyMQTTUserCallable(const Model::ModifyMQTTUserRequest& request);

                /**
                 *修改角色
                 * @param req ModifyRoleRequest
                 * @return ModifyRoleOutcome
                 */
                ModifyRoleOutcome ModifyRole(const Model::ModifyRoleRequest &request);
                void ModifyRoleAsync(const Model::ModifyRoleRequest& request, const ModifyRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoleOutcomeCallable ModifyRoleCallable(const Model::ModifyRoleRequest& request);

                /**
                 *修改主题属性
                 * @param req ModifyTopicRequest
                 * @return ModifyTopicOutcome
                 */
                ModifyTopicOutcome ModifyTopic(const Model::ModifyTopicRequest &request);
                void ModifyTopicAsync(const Model::ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicOutcomeCallable ModifyTopicCallable(const Model::ModifyTopicRequest& request);

                /**
                 *从迁移列表中移除主题，仅当主题处于初始状态时有效
                 * @param req RemoveMigratingTopicRequest
                 * @return RemoveMigratingTopicOutcome
                 */
                RemoveMigratingTopicOutcome RemoveMigratingTopic(const Model::RemoveMigratingTopicRequest &request);
                void RemoveMigratingTopicAsync(const Model::RemoveMigratingTopicRequest& request, const RemoveMigratingTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveMigratingTopicOutcomeCallable RemoveMigratingTopicCallable(const Model::RemoveMigratingTopicRequest& request);

                /**
                 *重新发送死信消息
                 * @param req ResendDeadLetterMessageRequest
                 * @return ResendDeadLetterMessageOutcome
                 */
                ResendDeadLetterMessageOutcome ResendDeadLetterMessage(const Model::ResendDeadLetterMessageRequest &request);
                void ResendDeadLetterMessageAsync(const Model::ResendDeadLetterMessageRequest& request, const ResendDeadLetterMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResendDeadLetterMessageOutcomeCallable ResendDeadLetterMessageCallable(const Model::ResendDeadLetterMessageRequest& request);

                /**
                 *重置消费位点
                 * @param req ResetConsumerGroupOffsetRequest
                 * @return ResetConsumerGroupOffsetOutcome
                 */
                ResetConsumerGroupOffsetOutcome ResetConsumerGroupOffset(const Model::ResetConsumerGroupOffsetRequest &request);
                void ResetConsumerGroupOffsetAsync(const Model::ResetConsumerGroupOffsetRequest& request, const ResetConsumerGroupOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetConsumerGroupOffsetOutcomeCallable ResetConsumerGroupOffsetCallable(const Model::ResetConsumerGroupOffsetRequest& request);

                /**
                 *回滚正在迁移的主题至前一个阶段
                 * @param req RollbackMigratingTopicStageRequest
                 * @return RollbackMigratingTopicStageOutcome
                 */
                RollbackMigratingTopicStageOutcome RollbackMigratingTopicStage(const Model::RollbackMigratingTopicStageRequest &request);
                void RollbackMigratingTopicStageAsync(const Model::RollbackMigratingTopicStageRequest& request, const RollbackMigratingTopicStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackMigratingTopicStageOutcomeCallable RollbackMigratingTopicStageCallable(const Model::RollbackMigratingTopicStageRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_TROCKETCLIENT_H_
