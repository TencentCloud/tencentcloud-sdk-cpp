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
#include <tencentcloud/trocket/v20230308/model/CreateMigrationTaskRequest.h>
#include <tencentcloud/trocket/v20230308/model/CreateMigrationTaskResponse.h>
#include <tencentcloud/trocket/v20230308/model/CreateRoleRequest.h>
#include <tencentcloud/trocket/v20230308/model/CreateRoleResponse.h>
#include <tencentcloud/trocket/v20230308/model/CreateTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/CreateTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteConsumerGroupRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteConsumerGroupResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteRoleRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteRoleResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteSmoothMigrationTaskRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteSmoothMigrationTaskResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerClientRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerClientResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerClientListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerClientListResponse.h>
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
#include <tencentcloud/trocket/v20230308/model/DescribeProducerListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeProducerListResponse.h>
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
#include <tencentcloud/trocket/v20230308/model/SendMessageRequest.h>
#include <tencentcloud/trocket/v20230308/model/SendMessageResponse.h>
#include <tencentcloud/trocket/v20230308/model/VerifyMessageConsumptionRequest.h>
#include <tencentcloud/trocket/v20230308/model/VerifyMessageConsumptionResponse.h>


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
                typedef Outcome<Core::Error, Model::CreateMigrationTaskResponse> CreateMigrationTaskOutcome;
                typedef std::future<CreateMigrationTaskOutcome> CreateMigrationTaskOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::CreateMigrationTaskRequest&, CreateMigrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrationTaskAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeConsumerClientListResponse> DescribeConsumerClientListOutcome;
                typedef std::future<DescribeConsumerClientListOutcome> DescribeConsumerClientListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeConsumerClientListRequest&, DescribeConsumerClientListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerClientListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeProducerListResponse> DescribeProducerListOutcome;
                typedef std::future<DescribeProducerListOutcome> DescribeProducerListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeProducerListRequest&, DescribeProducerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProducerListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::SendMessageResponse> SendMessageOutcome;
                typedef std::future<SendMessageOutcome> SendMessageOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::SendMessageRequest&, SendMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyMessageConsumptionResponse> VerifyMessageConsumptionOutcome;
                typedef std::future<VerifyMessageConsumptionOutcome> VerifyMessageConsumptionOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::VerifyMessageConsumptionRequest&, VerifyMessageConsumptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyMessageConsumptionAsyncHandler;



                /**
                 *修改迁移中的Topic状态进入下一步
                 * @param req ChangeMigratingTopicToNextStageRequest
                 * @return ChangeMigratingTopicToNextStageOutcome
                 */
                ChangeMigratingTopicToNextStageOutcome ChangeMigratingTopicToNextStage(const Model::ChangeMigratingTopicToNextStageRequest &request);
                void ChangeMigratingTopicToNextStageAsync(const Model::ChangeMigratingTopicToNextStageRequest& request, const ChangeMigratingTopicToNextStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeMigratingTopicToNextStageOutcomeCallable ChangeMigratingTopicToNextStageCallable(const Model::ChangeMigratingTopicToNextStageRequest& request);

                /**
                 *创建消费组。
当前 API 适用集群：5.x 集群。4.x 集群的创建消费组接口文档见 [CreateRocketMQGroup](https://cloud.tencent.com/document/api/1179/63428)。
                 * @param req CreateConsumerGroupRequest
                 * @return CreateConsumerGroupOutcome
                 */
                CreateConsumerGroupOutcome CreateConsumerGroup(const Model::CreateConsumerGroupRequest &request);
                void CreateConsumerGroupAsync(const Model::CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsumerGroupOutcomeCallable CreateConsumerGroupCallable(const Model::CreateConsumerGroupRequest& request);

                /**
                 *创建 RocketMQ 5.x 集群。
当前 API 适用集群：5.x 集群。创建 4.x 专享/通用集群的接口文档见 [CreateRocketMQVipInstance](https://cloud.tencent.com/document/product/1179/95721)。
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *创建元数据迁移上云任务
                 * @param req CreateMigrationTaskRequest
                 * @return CreateMigrationTaskOutcome
                 */
                CreateMigrationTaskOutcome CreateMigrationTask(const Model::CreateMigrationTaskRequest &request);
                void CreateMigrationTaskAsync(const Model::CreateMigrationTaskRequest& request, const CreateMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMigrationTaskOutcomeCallable CreateMigrationTaskCallable(const Model::CreateMigrationTaskRequest& request);

                /**
                 *添加角色。
当前 API 适用集群：5.x 集群。4.x 集群的创建角色接口文档见 [CreateRocketMQRole](https://cloud.tencent.com/document/product/1179/107538)，给角色授权接口文档见 [CreateRocketMQEnvironmentRole](https://cloud.tencent.com/document/product/1179/107539)。
                 * @param req CreateRoleRequest
                 * @return CreateRoleOutcome
                 */
                CreateRoleOutcome CreateRole(const Model::CreateRoleRequest &request);
                void CreateRoleAsync(const Model::CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoleOutcomeCallable CreateRoleCallable(const Model::CreateRoleRequest& request);

                /**
                 *创建 RocketMQ 主题。
当前 API 适用集群：5.x 集群。4.x 集群的创建主题接口文档见 [CreateRocketMQTopic](https://cloud.tencent.com/document/api/1179/63426)
                 * @param req CreateTopicRequest
                 * @return CreateTopicOutcome
                 */
                CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest &request);
                void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request);

                /**
                 *删除消费组。消费者组删除后，消费者组的所有配置和相关数据都会被清空，且无法找回。删除后，在线的消费者客户端会出现报错，建议您提前下线客户端。
当前 API 适用集群：5.x 集群。4.x 集群的删除消费组接口文档见 [DeleteRocketMQGroup](https://cloud.tencent.com/document/api/1179/63424)。
                 * @param req DeleteConsumerGroupRequest
                 * @return DeleteConsumerGroupOutcome
                 */
                DeleteConsumerGroupOutcome DeleteConsumerGroup(const Model::DeleteConsumerGroupRequest &request);
                void DeleteConsumerGroupAsync(const Model::DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConsumerGroupOutcomeCallable DeleteConsumerGroupCallable(const Model::DeleteConsumerGroupRequest& request);

                /**
                 *删除 RocketMQ 5.x 集群，删除前请先删除正在使用的主题、消费组和角色信息。
当前 API 适用集群：5.x 集群。删除 4.x 集群接口文档见 [DeleteRocketMQVipInstance](https://cloud.tencent.com/document/product/1179/95802)。
                 * @param req DeleteInstanceRequest
                 * @return DeleteInstanceOutcome
                 */
                DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest &request);
                void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request);

                /**
                 *删除角色。请确保该角色相关信息不在当前代码中被使用。删除角色后，原先使用该角色进行生产或消费消息的密钥（AccessKey 和 SecretKey）将立即失效。
当前 API 适用集群：5.x 集群。4.x 集群的删除角色接口文档见 [DeleteRocketMQRoles](https://cloud.tencent.com/document/product/1179/107536)，删除角色授权接口文档见 [DeleteRocketMQEnvironmentRoles](https://cloud.tencent.com/document/product/1179/107537)。
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
                 *删除主题。主题删除后，主题的所有配置和相关数据都会被清空，且无法找回。
当前 API 适用集群：5.x 集群。4.x 集群的删除主题接口文档见 [DeleteRocketMQTopic](https://cloud.tencent.com/document/api/1179/63423)。
                 * @param req DeleteTopicRequest
                 * @return DeleteTopicOutcome
                 */
                DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest &request);
                void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request);

                /**
                 *查询消费者客户端详情。
当前 API 适用集群：5.x 集群。4.x 集群的查询消费者客户端详情接口文档见 [DescribeRocketMQConsumerConnectionDetail](https://cloud.tencent.com/document/product/1179/102490)。
                 * @param req DescribeConsumerClientRequest
                 * @return DescribeConsumerClientOutcome
                 */
                DescribeConsumerClientOutcome DescribeConsumerClient(const Model::DescribeConsumerClientRequest &request);
                void DescribeConsumerClientAsync(const Model::DescribeConsumerClientRequest& request, const DescribeConsumerClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerClientOutcomeCallable DescribeConsumerClientCallable(const Model::DescribeConsumerClientRequest& request);

                /**
                 *查询消费组下的客户端连接列表。
当前 API 适用集群：5.x 集群。4.x 集群的查询消费组下的客户端列表接口文档见 [DescribeRocketMQConsumerConnections](https://cloud.tencent.com/document/product/1179/100460)。
                 * @param req DescribeConsumerClientListRequest
                 * @return DescribeConsumerClientListOutcome
                 */
                DescribeConsumerClientListOutcome DescribeConsumerClientList(const Model::DescribeConsumerClientListRequest &request);
                void DescribeConsumerClientListAsync(const Model::DescribeConsumerClientListRequest& request, const DescribeConsumerClientListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerClientListOutcomeCallable DescribeConsumerClientListCallable(const Model::DescribeConsumerClientListRequest& request);

                /**
                 *查询消费组详情。
当前 API 适用集群：5.x 集群。4.x 集群的查询消费组详情接口文档见 [DescribeRocketMQConsumerConnections](https://cloud.tencent.com/document/product/1179/100460)。
                 * @param req DescribeConsumerGroupRequest
                 * @return DescribeConsumerGroupOutcome
                 */
                DescribeConsumerGroupOutcome DescribeConsumerGroup(const Model::DescribeConsumerGroupRequest &request);
                void DescribeConsumerGroupAsync(const Model::DescribeConsumerGroupRequest& request, const DescribeConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerGroupOutcomeCallable DescribeConsumerGroupCallable(const Model::DescribeConsumerGroupRequest& request);

                /**
                 *获取消费组列表，Filter参数使用说明如下：

- ConsumerGroupName 消费组名称，支持模糊查询，从 [DescribeConsumerGroupList](https://cloud.tencent.com/document/api/1493/101535) 接口返回的 [ConsumeGroupItem](https://cloud.tencent.com/document/api/1493/96031#ConsumeGroupItem) 或控制台获得。
- ConsumeMessageOrderly，投递顺序性，枚举值如下：
    - true 顺序投递
    - false 并发投递
- RetryPolicy，重试策略，枚举值如下：
    - EXPONENTIAL：固定间隔
    - CUSTOMIZED：阶梯退避

Filters示例： 
[{ "Name": "ConsumeMessageOrderly", "Values": ["true"] }]
当前 API 适用集群：5.x 集群。4.x 集群的获取消费组列表接口文档见 [DescribeRocketMQGroups](https://cloud.tencent.com/document/api/1179/63420)。
                 * @param req DescribeConsumerGroupListRequest
                 * @return DescribeConsumerGroupListOutcome
                 */
                DescribeConsumerGroupListOutcome DescribeConsumerGroupList(const Model::DescribeConsumerGroupListRequest &request);
                void DescribeConsumerGroupListAsync(const Model::DescribeConsumerGroupListRequest& request, const DescribeConsumerGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerGroupListOutcomeCallable DescribeConsumerGroupListCallable(const Model::DescribeConsumerGroupListRequest& request);

                /**
                 *查询指定消费组堆积数。
当前 API 适用集群：4.x 集群和 5.x 集群。
                 * @param req DescribeConsumerLagRequest
                 * @return DescribeConsumerLagOutcome
                 */
                DescribeConsumerLagOutcome DescribeConsumerLag(const Model::DescribeConsumerLagRequest &request);
                void DescribeConsumerLagAsync(const Model::DescribeConsumerLagRequest& request, const DescribeConsumerLagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerLagOutcomeCallable DescribeConsumerLagCallable(const Model::DescribeConsumerLagRequest& request);

                /**
                 *查询集群列表，支持 4.x 和 5.x 集群，其中 Filters 参数使用说明如下：

- InstanceName: 集群名称，支持模糊查询，从本接口返回值或控制台获得
- InstanceId: 集群ID，精确查询，从当前接口或控制台获得
- InstanceType: 集群类型，可参考 [InstanceItem](https://cloud.tencent.com/document/api/1493/96031#InstanceItem) 数据结构，支持多选
- Version: 集群版本，枚举值如下：
    - 4 RocketMQ 4.x 集群
    - 5 RocketMQ 5.x 集群
-  InstanceStatus: 集群状态筛选条件，支持多选，枚举值如下：
    - RUNNING：运行中
    - ABNORMAL：异常
    - OVERDUE：隔离中
    - DESTROYED：已销毁
    - CREATING：创建中
    - MODIFYING：变配中
    - CREATE_FAILURE：创建失败
    - MODIFY_FAILURE：变配失败
    - DELETING：删除中

Filters示例：
 [{ "Name": "InstanceId", "Values": ["rmq-72mo3a9o"] }]
                 * @param req DescribeFusionInstanceListRequest
                 * @return DescribeFusionInstanceListOutcome
                 */
                DescribeFusionInstanceListOutcome DescribeFusionInstanceList(const Model::DescribeFusionInstanceListRequest &request);
                void DescribeFusionInstanceListAsync(const Model::DescribeFusionInstanceListRequest& request, const DescribeFusionInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFusionInstanceListOutcomeCallable DescribeFusionInstanceListCallable(const Model::DescribeFusionInstanceListRequest& request);

                /**
                 *查询 RocketMQ 5.x 集群信息。
当前 API 适用集群：5.x 集群。查询 4.x 专享/通用集群信息的接口文档见 [DescribeRocketMQVipInstanceDetail](https://cloud.tencent.com/document/product/1179/86725)。
                 * @param req DescribeInstanceRequest
                 * @return DescribeInstanceOutcome
                 */
                DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest &request);
                void DescribeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOutcomeCallable DescribeInstanceCallable(const Model::DescribeInstanceRequest& request);

                /**
                 *查询集群列表，仅支持 5.x 集群。Filters参数使用说明如下：

- InstanceName 集群名称，支持模糊搜索
- InstanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得
- InstanceType 集群类型，可参考 [InstanceItem](https://cloud.tencent.com/document/api/1493/96031#InstanceItem) 数据结构，支持多选
- InstanceStatus 集群状态，可参考 [InstanceItem](https://cloud.tencent.com/document/api/1493/96031#InstanceItem) 数据结构，支持多选

Filters示例：
[{
    "Name": "InstanceId",
    "Values": ["rmq-72mo3a9o"]
}]
                 * @param req DescribeInstanceListRequest
                 * @return DescribeInstanceListOutcome
                 */
                DescribeInstanceListOutcome DescribeInstanceList(const Model::DescribeInstanceListRequest &request);
                void DescribeInstanceListAsync(const Model::DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceListOutcomeCallable DescribeInstanceListCallable(const Model::DescribeInstanceListRequest& request);

                /**
                 *查询消息详情。
当前 API 适用集群：5.x 集群。4.x 集群的查询消息详情接口文档见 [DescribeRocketMQMsg](https://cloud.tencent.com/document/product/1179/91055)。
                 * @param req DescribeMessageRequest
                 * @return DescribeMessageOutcome
                 */
                DescribeMessageOutcome DescribeMessage(const Model::DescribeMessageRequest &request);
                void DescribeMessageAsync(const Model::DescribeMessageRequest& request, const DescribeMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageOutcomeCallable DescribeMessageCallable(const Model::DescribeMessageRequest& request);

                /**
                 *查询消息列表。如果查询死信消息，请设置ConsumerGroup参数。
当前 API 适用集群：5.x 集群。4.x 集群的查询消息列表接口文档见 [DescribeRocketMQTopicMsgs](https://cloud.tencent.com/document/product/1179/97761)。
                 * @param req DescribeMessageListRequest
                 * @return DescribeMessageListOutcome
                 */
                DescribeMessageListOutcome DescribeMessageList(const Model::DescribeMessageListRequest &request);
                void DescribeMessageListAsync(const Model::DescribeMessageListRequest& request, const DescribeMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageListOutcomeCallable DescribeMessageListCallable(const Model::DescribeMessageListRequest& request);

                /**
                 *根据消息 ID 查询消息轨迹。
当前 API 适用集群：5.x 集群。4.x 集群查询消息轨迹接口文档见 [DescribeRocketMQMsgTrace](https://cloud.tencent.com/document/product/1179/97760)。
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
                 *查询Topic迁移状态列表。

Filters字段为查询过滤器，支持以下条件：
* TopicName 主题名称，支持模糊查询
* MigrationStatus 迁移状态，可参考[MigratingTopic](https://cloud.tencent.com/document/api/1493/96031#MigratingTopic)数据结构
* Namespace 命名空间，仅4.x集群有效

Filters示例：
[{
    "Name": "TopicName",
    "Values": ["topic-a"]
}]
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
                 *查询主题关联的生产者列表信息，Filters支持以下筛选条件：
- ClientIP，客户端IP
- ClientID，客户端ID
当前 API 适用集群：5.x 集群。4.x 集群的查询生产者客户端列表接口文档见 [DescribeRocketMQProducers](https://cloud.tencent.com/document/api/1179/122749)。
                 * @param req DescribeProducerListRequest
                 * @return DescribeProducerListOutcome
                 */
                DescribeProducerListOutcome DescribeProducerList(const Model::DescribeProducerListRequest &request);
                void DescribeProducerListAsync(const Model::DescribeProducerListRequest& request, const DescribeProducerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProducerListOutcomeCallable DescribeProducerListCallable(const Model::DescribeProducerListRequest& request);

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

- RoleName 角色名称，支持模糊搜索，从本接口返回值或控制台获得
- AccessKey AccessKey，支持模糊搜索，从本接口返回值或控制台获得

Filters示例： 
[{ "Name": "RoleName", "Values": ["test_role"] }]
当前 API 适用集群：5.x 集群。4.x 集群的查询角色列表接口文档见 [DescribeRocketMQRoles](https://cloud.tencent.com/document/product/1179/107534)，查询角色授权列表接口文档见 [DescribeRocketMQEnvironmentRoles](https://cloud.tencent.com/document/product/1179/107535)。
                 * @param req DescribeRoleListRequest
                 * @return DescribeRoleListOutcome
                 */
                DescribeRoleListOutcome DescribeRoleList(const Model::DescribeRoleListRequest &request);
                void DescribeRoleListAsync(const Model::DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoleListOutcomeCallable DescribeRoleListCallable(const Model::DescribeRoleListRequest& request);

                /**
                 *用于查询平滑迁移任务列表。

查询参数Filters， 支持的字段如下：
* TaskStatus, 任务状态，支持多选 
* ConnectionType，网络连接类型，支持多选，参考[SmoothMigrationTaskItem](https://cloud.tencent.com/document/api/1493/96031#SmoothMigrationTaskItem)的说明
* InstanceId，实例ID，精确搜索 
* TaskName，任务名称，支持模糊搜索

Filters示例：
[{
    "Name": "InstanceId",
    "Values": ["rmq-1gzecldfg"]
}]
                 * @param req DescribeSmoothMigrationTaskListRequest
                 * @return DescribeSmoothMigrationTaskListOutcome
                 */
                DescribeSmoothMigrationTaskListOutcome DescribeSmoothMigrationTaskList(const Model::DescribeSmoothMigrationTaskListRequest &request);
                void DescribeSmoothMigrationTaskListAsync(const Model::DescribeSmoothMigrationTaskListRequest& request, const DescribeSmoothMigrationTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmoothMigrationTaskListOutcomeCallable DescribeSmoothMigrationTaskListCallable(const Model::DescribeSmoothMigrationTaskListRequest& request);

                /**
                 *平滑迁移过程获取源集群group列表接口。

Filters字段为查询过滤器，支持以下字段：
* GroupName，消费组名称，支持模糊搜索
* Imported，是否已导入
* ImportStatus，导入状态，参考[SourceClusterGroupConfig](https://cloud.tencent.com/document/api/1493/96031#SourceClusterGroupConfig)的说明
* Namespace，命名空间，仅4.x集群有效

Filters示例：
[{
    "Name": "GroupName",
    "Values": ["group-a"]
}]
                 * @param req DescribeSourceClusterGroupListRequest
                 * @return DescribeSourceClusterGroupListOutcome
                 */
                DescribeSourceClusterGroupListOutcome DescribeSourceClusterGroupList(const Model::DescribeSourceClusterGroupListRequest &request);
                void DescribeSourceClusterGroupListAsync(const Model::DescribeSourceClusterGroupListRequest& request, const DescribeSourceClusterGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSourceClusterGroupListOutcomeCallable DescribeSourceClusterGroupListCallable(const Model::DescribeSourceClusterGroupListRequest& request);

                /**
                 *查询主题详情，Offset和Limit参数是指订阅该主题的消费组查询分页参数，Filter参数使用说明如下：

- ConsumerGroup 消费组名称，从 [DescribeConsumerGroupList](https://cloud.tencent.com/document/api/1493/101535) 接口返回的 [ConsumeGroupItem](https://cloud.tencent.com/document/api/1493/96031#ConsumeGroupItem) 或控制台获得。

Filters示例： 
[{ "Name": "ConsumerGroup", "Values": ["test_group"] }]
                 * @param req DescribeTopicRequest
                 * @return DescribeTopicOutcome
                 */
                DescribeTopicOutcome DescribeTopic(const Model::DescribeTopicRequest &request);
                void DescribeTopicAsync(const Model::DescribeTopicRequest& request, const DescribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicOutcomeCallable DescribeTopicCallable(const Model::DescribeTopicRequest& request);

                /**
                 *获取主题列表，Filter参数使用说明如下：

- TopicName 主题名称，支持模糊搜索，从 [DescribeTopicList](https://cloud.tencent.com/document/api/1493/96030) 接口返回的 [TopicItem](https://cloud.tencent.com/document/api/1493/96031#TopicItem) 或控制台获得
- TopicType 主题类型查询，支持多选，参考 [DescribeTopic](https://cloud.tencent.com/document/api/1493/97945) 接口 TopicType 字段

Filters示例：
 [{ "Name": "TopicName", "Values": ["test_topic"] }]
当前 API 适用集群：5.x 集群。4.x 集群的获取主题列表接口文档见 [DescribeRocketMQTopics](https://cloud.tencent.com/document/api/1179/63418)。
                 * @param req DescribeTopicListRequest
                 * @return DescribeTopicListOutcome
                 */
                DescribeTopicListOutcome DescribeTopicList(const Model::DescribeTopicListRequest &request);
                void DescribeTopicListAsync(const Model::DescribeTopicListRequest& request, const DescribeTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicListOutcomeCallable DescribeTopicListCallable(const Model::DescribeTopicListRequest& request);

                /**
                 *查询消费组订阅的主题列表，Filter参数使用说明如下：

- TopicName 主题名称，从 [DescribeTopicList](https://cloud.tencent.com/document/api/1493/96030) 接口返回的 [TopicItem](https://cloud.tencent.com/document/api/1493/96031#TopicItem) 或控制台获得。

Filters示例： 
[{ "Name": "TopicName", "Values": ["test_topic"] }]
当前 API 适用集群：5.x 集群。4.x 集群的查询消费组订阅的主题列表接口文档见 [DescribeRocketMQTopicsByGroup](https://cloud.tencent.com/document/product/1179/108863)。
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
                 *修改消费组属性。
当前 API 适用集群：5.x 集群。4.x 集群的修改消费组属性接口文档见 [ModifyRocketMQGroup](https://cloud.tencent.com/document/api/1179/63416)。
                 * @param req ModifyConsumerGroupRequest
                 * @return ModifyConsumerGroupOutcome
                 */
                ModifyConsumerGroupOutcome ModifyConsumerGroup(const Model::ModifyConsumerGroupRequest &request);
                void ModifyConsumerGroupAsync(const Model::ModifyConsumerGroupRequest& request, const ModifyConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConsumerGroupOutcomeCallable ModifyConsumerGroupCallable(const Model::ModifyConsumerGroupRequest& request);

                /**
                 *修改 RocketMQ 5.x 集群属性，仅支持修改运行中的集群。
当前 API 适用集群：5.x 集群。修改 4.x 集群属性的接口文档见 [ModifyRocketMQInstance](https://cloud.tencent.com/document/product/1179/108862)。
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

                /**
                 *修改 RocketMQ 5.x 集群接入点，操作前请先确认接入点已存在。
                 * @param req ModifyInstanceEndpointRequest
                 * @return ModifyInstanceEndpointOutcome
                 */
                ModifyInstanceEndpointOutcome ModifyInstanceEndpoint(const Model::ModifyInstanceEndpointRequest &request);
                void ModifyInstanceEndpointAsync(const Model::ModifyInstanceEndpointRequest& request, const ModifyInstanceEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceEndpointOutcomeCallable ModifyInstanceEndpointCallable(const Model::ModifyInstanceEndpointRequest& request);

                /**
                 *修改角色。
当前 API 适用集群：5.x 集群。4.x 集群的修改角色接口文档见 [ModifyRocketMQRole](https://cloud.tencent.com/document/product/1179/107532)，修改角色的授权接口文档见 [ModifyRocketMQEnvironmentRole](https://cloud.tencent.com/document/product/1179/107533)。
                 * @param req ModifyRoleRequest
                 * @return ModifyRoleOutcome
                 */
                ModifyRoleOutcome ModifyRole(const Model::ModifyRoleRequest &request);
                void ModifyRoleAsync(const Model::ModifyRoleRequest& request, const ModifyRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoleOutcomeCallable ModifyRoleCallable(const Model::ModifyRoleRequest& request);

                /**
                 *修改主题属性。
当前 API 适用集群：5.x 集群。4.x 集群的修改主题属性接口文档见 [ModifyRocketMQTopic](https://cloud.tencent.com/document/api/1179/63414)。
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
                 *重新发送死信消息。
当前 API 适用集群：5.x集群。4.x 集群的重发死信消息接口文档见 [RetryRocketMQDlqMessage](https://cloud.tencent.com/document/api/1179/114595)。
                 * @param req ResendDeadLetterMessageRequest
                 * @return ResendDeadLetterMessageOutcome
                 */
                ResendDeadLetterMessageOutcome ResendDeadLetterMessage(const Model::ResendDeadLetterMessageRequest &request);
                void ResendDeadLetterMessageAsync(const Model::ResendDeadLetterMessageRequest& request, const ResendDeadLetterMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResendDeadLetterMessageOutcomeCallable ResendDeadLetterMessageCallable(const Model::ResendDeadLetterMessageRequest& request);

                /**
                 *重置消费位点。
当前 API 适用集群：5.x 集群。4.x 集群的重置消费位点接口文档见 [ResetRocketMQConsumerOffSet](https://cloud.tencent.com/document/api/1179/71662)。
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

                /**
                 *发送 RocketMQ 消息，该接口仅用于控制台发送少量测试消息，不保证 SLA，且云 API 存在限流，在真实业务场景下，请使用 RocketMQ SDK 发送消息。
当前 API 适用集群：5.x 集群。4.x 集群的发送消息接口文档见 [SendRocketMQMessage](https://cloud.tencent.com/document/api/1179/94179)。
                 * @param req SendMessageRequest
                 * @return SendMessageOutcome
                 */
                SendMessageOutcome SendMessage(const Model::SendMessageRequest &request);
                void SendMessageAsync(const Model::SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendMessageOutcomeCallable SendMessageCallable(const Model::SendMessageRequest& request);

                /**
                 *消息消费验证。
当前 API 适用集群：5.x 集群。4.x 集群的消息消费验证接口文档见 [VerifyRocketMQConsume](https://cloud.tencent.com/document/api/1179/101061)。
                 * @param req VerifyMessageConsumptionRequest
                 * @return VerifyMessageConsumptionOutcome
                 */
                VerifyMessageConsumptionOutcome VerifyMessageConsumption(const Model::VerifyMessageConsumptionRequest &request);
                void VerifyMessageConsumptionAsync(const Model::VerifyMessageConsumptionRequest& request, const VerifyMessageConsumptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyMessageConsumptionOutcomeCallable VerifyMessageConsumptionCallable(const Model::VerifyMessageConsumptionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_TROCKETCLIENT_H_
