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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_TRABBITCLIENT_H_
#define TENCENTCLOUD_TRABBIT_V20230418_TRABBITCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessBindingRequest.h>
#include <tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessBindingResponse.h>
#include <tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessExchangeRequest.h>
#include <tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessExchangeResponse.h>
#include <tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessQueueRequest.h>
#include <tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessQueueResponse.h>
#include <tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessUserRequest.h>
#include <tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessUserResponse.h>
#include <tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessVirtualHostRequest.h>
#include <tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessVirtualHostResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessBindingRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessBindingResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessExchangeRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessExchangeResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessPermissionRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessPermissionResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessQueueRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessQueueResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessUserRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessUserResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessVirtualHostRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessVirtualHostResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessBindingsRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessBindingsResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessConnectionRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessConnectionResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessConsumersRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessConsumersResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessExchangeDetailRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessExchangeDetailResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessExchangesRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessExchangesResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessInstanceRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessInstanceResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessPermissionRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessPermissionResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessQueueDetailRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessQueueDetailResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessQueuesRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessQueuesResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessUserRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessUserResponse.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessVirtualHostRequest.h>
#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessVirtualHostResponse.h>
#include <tencentcloud/trabbit/v20230418/model/ListRabbitMQServerlessInstancesRequest.h>
#include <tencentcloud/trabbit/v20230418/model/ListRabbitMQServerlessInstancesResponse.h>
#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessExchangeRequest.h>
#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessExchangeResponse.h>
#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessInstanceRequest.h>
#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessInstanceResponse.h>
#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessPermissionRequest.h>
#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessPermissionResponse.h>
#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessQueueRequest.h>
#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessQueueResponse.h>
#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessUserRequest.h>
#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessUserResponse.h>
#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessVirtualHostRequest.h>
#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessVirtualHostResponse.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            class TrabbitClient : public AbstractClient
            {
            public:
                TrabbitClient(const Credential &credential, const std::string &region);
                TrabbitClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateRabbitMQServerlessBindingResponse> CreateRabbitMQServerlessBindingOutcome;
                typedef std::future<CreateRabbitMQServerlessBindingOutcome> CreateRabbitMQServerlessBindingOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::CreateRabbitMQServerlessBindingRequest&, CreateRabbitMQServerlessBindingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRabbitMQServerlessBindingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRabbitMQServerlessExchangeResponse> CreateRabbitMQServerlessExchangeOutcome;
                typedef std::future<CreateRabbitMQServerlessExchangeOutcome> CreateRabbitMQServerlessExchangeOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::CreateRabbitMQServerlessExchangeRequest&, CreateRabbitMQServerlessExchangeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRabbitMQServerlessExchangeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRabbitMQServerlessQueueResponse> CreateRabbitMQServerlessQueueOutcome;
                typedef std::future<CreateRabbitMQServerlessQueueOutcome> CreateRabbitMQServerlessQueueOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::CreateRabbitMQServerlessQueueRequest&, CreateRabbitMQServerlessQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRabbitMQServerlessQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRabbitMQServerlessUserResponse> CreateRabbitMQServerlessUserOutcome;
                typedef std::future<CreateRabbitMQServerlessUserOutcome> CreateRabbitMQServerlessUserOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::CreateRabbitMQServerlessUserRequest&, CreateRabbitMQServerlessUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRabbitMQServerlessUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRabbitMQServerlessVirtualHostResponse> CreateRabbitMQServerlessVirtualHostOutcome;
                typedef std::future<CreateRabbitMQServerlessVirtualHostOutcome> CreateRabbitMQServerlessVirtualHostOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::CreateRabbitMQServerlessVirtualHostRequest&, CreateRabbitMQServerlessVirtualHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRabbitMQServerlessVirtualHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRabbitMQServerlessBindingResponse> DeleteRabbitMQServerlessBindingOutcome;
                typedef std::future<DeleteRabbitMQServerlessBindingOutcome> DeleteRabbitMQServerlessBindingOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DeleteRabbitMQServerlessBindingRequest&, DeleteRabbitMQServerlessBindingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRabbitMQServerlessBindingAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRabbitMQServerlessExchangeResponse> DeleteRabbitMQServerlessExchangeOutcome;
                typedef std::future<DeleteRabbitMQServerlessExchangeOutcome> DeleteRabbitMQServerlessExchangeOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DeleteRabbitMQServerlessExchangeRequest&, DeleteRabbitMQServerlessExchangeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRabbitMQServerlessExchangeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRabbitMQServerlessPermissionResponse> DeleteRabbitMQServerlessPermissionOutcome;
                typedef std::future<DeleteRabbitMQServerlessPermissionOutcome> DeleteRabbitMQServerlessPermissionOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DeleteRabbitMQServerlessPermissionRequest&, DeleteRabbitMQServerlessPermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRabbitMQServerlessPermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRabbitMQServerlessQueueResponse> DeleteRabbitMQServerlessQueueOutcome;
                typedef std::future<DeleteRabbitMQServerlessQueueOutcome> DeleteRabbitMQServerlessQueueOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DeleteRabbitMQServerlessQueueRequest&, DeleteRabbitMQServerlessQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRabbitMQServerlessQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRabbitMQServerlessUserResponse> DeleteRabbitMQServerlessUserOutcome;
                typedef std::future<DeleteRabbitMQServerlessUserOutcome> DeleteRabbitMQServerlessUserOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DeleteRabbitMQServerlessUserRequest&, DeleteRabbitMQServerlessUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRabbitMQServerlessUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRabbitMQServerlessVirtualHostResponse> DeleteRabbitMQServerlessVirtualHostOutcome;
                typedef std::future<DeleteRabbitMQServerlessVirtualHostOutcome> DeleteRabbitMQServerlessVirtualHostOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DeleteRabbitMQServerlessVirtualHostRequest&, DeleteRabbitMQServerlessVirtualHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRabbitMQServerlessVirtualHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQServerlessBindingsResponse> DescribeRabbitMQServerlessBindingsOutcome;
                typedef std::future<DescribeRabbitMQServerlessBindingsOutcome> DescribeRabbitMQServerlessBindingsOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DescribeRabbitMQServerlessBindingsRequest&, DescribeRabbitMQServerlessBindingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQServerlessBindingsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQServerlessConnectionResponse> DescribeRabbitMQServerlessConnectionOutcome;
                typedef std::future<DescribeRabbitMQServerlessConnectionOutcome> DescribeRabbitMQServerlessConnectionOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DescribeRabbitMQServerlessConnectionRequest&, DescribeRabbitMQServerlessConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQServerlessConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQServerlessConsumersResponse> DescribeRabbitMQServerlessConsumersOutcome;
                typedef std::future<DescribeRabbitMQServerlessConsumersOutcome> DescribeRabbitMQServerlessConsumersOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DescribeRabbitMQServerlessConsumersRequest&, DescribeRabbitMQServerlessConsumersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQServerlessConsumersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQServerlessExchangeDetailResponse> DescribeRabbitMQServerlessExchangeDetailOutcome;
                typedef std::future<DescribeRabbitMQServerlessExchangeDetailOutcome> DescribeRabbitMQServerlessExchangeDetailOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DescribeRabbitMQServerlessExchangeDetailRequest&, DescribeRabbitMQServerlessExchangeDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQServerlessExchangeDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQServerlessExchangesResponse> DescribeRabbitMQServerlessExchangesOutcome;
                typedef std::future<DescribeRabbitMQServerlessExchangesOutcome> DescribeRabbitMQServerlessExchangesOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DescribeRabbitMQServerlessExchangesRequest&, DescribeRabbitMQServerlessExchangesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQServerlessExchangesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQServerlessInstanceResponse> DescribeRabbitMQServerlessInstanceOutcome;
                typedef std::future<DescribeRabbitMQServerlessInstanceOutcome> DescribeRabbitMQServerlessInstanceOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DescribeRabbitMQServerlessInstanceRequest&, DescribeRabbitMQServerlessInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQServerlessInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQServerlessPermissionResponse> DescribeRabbitMQServerlessPermissionOutcome;
                typedef std::future<DescribeRabbitMQServerlessPermissionOutcome> DescribeRabbitMQServerlessPermissionOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DescribeRabbitMQServerlessPermissionRequest&, DescribeRabbitMQServerlessPermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQServerlessPermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQServerlessQueueDetailResponse> DescribeRabbitMQServerlessQueueDetailOutcome;
                typedef std::future<DescribeRabbitMQServerlessQueueDetailOutcome> DescribeRabbitMQServerlessQueueDetailOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DescribeRabbitMQServerlessQueueDetailRequest&, DescribeRabbitMQServerlessQueueDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQServerlessQueueDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQServerlessQueuesResponse> DescribeRabbitMQServerlessQueuesOutcome;
                typedef std::future<DescribeRabbitMQServerlessQueuesOutcome> DescribeRabbitMQServerlessQueuesOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DescribeRabbitMQServerlessQueuesRequest&, DescribeRabbitMQServerlessQueuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQServerlessQueuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQServerlessUserResponse> DescribeRabbitMQServerlessUserOutcome;
                typedef std::future<DescribeRabbitMQServerlessUserOutcome> DescribeRabbitMQServerlessUserOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DescribeRabbitMQServerlessUserRequest&, DescribeRabbitMQServerlessUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQServerlessUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRabbitMQServerlessVirtualHostResponse> DescribeRabbitMQServerlessVirtualHostOutcome;
                typedef std::future<DescribeRabbitMQServerlessVirtualHostOutcome> DescribeRabbitMQServerlessVirtualHostOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::DescribeRabbitMQServerlessVirtualHostRequest&, DescribeRabbitMQServerlessVirtualHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRabbitMQServerlessVirtualHostAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRabbitMQServerlessInstancesResponse> ListRabbitMQServerlessInstancesOutcome;
                typedef std::future<ListRabbitMQServerlessInstancesOutcome> ListRabbitMQServerlessInstancesOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::ListRabbitMQServerlessInstancesRequest&, ListRabbitMQServerlessInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRabbitMQServerlessInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRabbitMQServerlessExchangeResponse> ModifyRabbitMQServerlessExchangeOutcome;
                typedef std::future<ModifyRabbitMQServerlessExchangeOutcome> ModifyRabbitMQServerlessExchangeOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::ModifyRabbitMQServerlessExchangeRequest&, ModifyRabbitMQServerlessExchangeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRabbitMQServerlessExchangeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRabbitMQServerlessInstanceResponse> ModifyRabbitMQServerlessInstanceOutcome;
                typedef std::future<ModifyRabbitMQServerlessInstanceOutcome> ModifyRabbitMQServerlessInstanceOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::ModifyRabbitMQServerlessInstanceRequest&, ModifyRabbitMQServerlessInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRabbitMQServerlessInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRabbitMQServerlessPermissionResponse> ModifyRabbitMQServerlessPermissionOutcome;
                typedef std::future<ModifyRabbitMQServerlessPermissionOutcome> ModifyRabbitMQServerlessPermissionOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::ModifyRabbitMQServerlessPermissionRequest&, ModifyRabbitMQServerlessPermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRabbitMQServerlessPermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRabbitMQServerlessQueueResponse> ModifyRabbitMQServerlessQueueOutcome;
                typedef std::future<ModifyRabbitMQServerlessQueueOutcome> ModifyRabbitMQServerlessQueueOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::ModifyRabbitMQServerlessQueueRequest&, ModifyRabbitMQServerlessQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRabbitMQServerlessQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRabbitMQServerlessUserResponse> ModifyRabbitMQServerlessUserOutcome;
                typedef std::future<ModifyRabbitMQServerlessUserOutcome> ModifyRabbitMQServerlessUserOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::ModifyRabbitMQServerlessUserRequest&, ModifyRabbitMQServerlessUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRabbitMQServerlessUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRabbitMQServerlessVirtualHostResponse> ModifyRabbitMQServerlessVirtualHostOutcome;
                typedef std::future<ModifyRabbitMQServerlessVirtualHostOutcome> ModifyRabbitMQServerlessVirtualHostOutcomeCallable;
                typedef std::function<void(const TrabbitClient*, const Model::ModifyRabbitMQServerlessVirtualHostRequest&, ModifyRabbitMQServerlessVirtualHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRabbitMQServerlessVirtualHostAsyncHandler;



                /**
                 *创建RabbitMQ路由关系
                 * @param req CreateRabbitMQServerlessBindingRequest
                 * @return CreateRabbitMQServerlessBindingOutcome
                 */
                CreateRabbitMQServerlessBindingOutcome CreateRabbitMQServerlessBinding(const Model::CreateRabbitMQServerlessBindingRequest &request);
                void CreateRabbitMQServerlessBindingAsync(const Model::CreateRabbitMQServerlessBindingRequest& request, const CreateRabbitMQServerlessBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRabbitMQServerlessBindingOutcomeCallable CreateRabbitMQServerlessBindingCallable(const Model::CreateRabbitMQServerlessBindingRequest& request);

                /**
                 *创建RabbitMQ exchange
                 * @param req CreateRabbitMQServerlessExchangeRequest
                 * @return CreateRabbitMQServerlessExchangeOutcome
                 */
                CreateRabbitMQServerlessExchangeOutcome CreateRabbitMQServerlessExchange(const Model::CreateRabbitMQServerlessExchangeRequest &request);
                void CreateRabbitMQServerlessExchangeAsync(const Model::CreateRabbitMQServerlessExchangeRequest& request, const CreateRabbitMQServerlessExchangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRabbitMQServerlessExchangeOutcomeCallable CreateRabbitMQServerlessExchangeCallable(const Model::CreateRabbitMQServerlessExchangeRequest& request);

                /**
                 *创建RabbitMQ队列
                 * @param req CreateRabbitMQServerlessQueueRequest
                 * @return CreateRabbitMQServerlessQueueOutcome
                 */
                CreateRabbitMQServerlessQueueOutcome CreateRabbitMQServerlessQueue(const Model::CreateRabbitMQServerlessQueueRequest &request);
                void CreateRabbitMQServerlessQueueAsync(const Model::CreateRabbitMQServerlessQueueRequest& request, const CreateRabbitMQServerlessQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRabbitMQServerlessQueueOutcomeCallable CreateRabbitMQServerlessQueueCallable(const Model::CreateRabbitMQServerlessQueueRequest& request);

                /**
                 *创建RabbitMQ的用户
                 * @param req CreateRabbitMQServerlessUserRequest
                 * @return CreateRabbitMQServerlessUserOutcome
                 */
                CreateRabbitMQServerlessUserOutcome CreateRabbitMQServerlessUser(const Model::CreateRabbitMQServerlessUserRequest &request);
                void CreateRabbitMQServerlessUserAsync(const Model::CreateRabbitMQServerlessUserRequest& request, const CreateRabbitMQServerlessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRabbitMQServerlessUserOutcomeCallable CreateRabbitMQServerlessUserCallable(const Model::CreateRabbitMQServerlessUserRequest& request);

                /**
                 *创建RabbitMQ的vhost
                 * @param req CreateRabbitMQServerlessVirtualHostRequest
                 * @return CreateRabbitMQServerlessVirtualHostOutcome
                 */
                CreateRabbitMQServerlessVirtualHostOutcome CreateRabbitMQServerlessVirtualHost(const Model::CreateRabbitMQServerlessVirtualHostRequest &request);
                void CreateRabbitMQServerlessVirtualHostAsync(const Model::CreateRabbitMQServerlessVirtualHostRequest& request, const CreateRabbitMQServerlessVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRabbitMQServerlessVirtualHostOutcomeCallable CreateRabbitMQServerlessVirtualHostCallable(const Model::CreateRabbitMQServerlessVirtualHostRequest& request);

                /**
                 *解绑RabbitMQ路由关系
                 * @param req DeleteRabbitMQServerlessBindingRequest
                 * @return DeleteRabbitMQServerlessBindingOutcome
                 */
                DeleteRabbitMQServerlessBindingOutcome DeleteRabbitMQServerlessBinding(const Model::DeleteRabbitMQServerlessBindingRequest &request);
                void DeleteRabbitMQServerlessBindingAsync(const Model::DeleteRabbitMQServerlessBindingRequest& request, const DeleteRabbitMQServerlessBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRabbitMQServerlessBindingOutcomeCallable DeleteRabbitMQServerlessBindingCallable(const Model::DeleteRabbitMQServerlessBindingRequest& request);

                /**
                 *删除RabbitMQ exchange
                 * @param req DeleteRabbitMQServerlessExchangeRequest
                 * @return DeleteRabbitMQServerlessExchangeOutcome
                 */
                DeleteRabbitMQServerlessExchangeOutcome DeleteRabbitMQServerlessExchange(const Model::DeleteRabbitMQServerlessExchangeRequest &request);
                void DeleteRabbitMQServerlessExchangeAsync(const Model::DeleteRabbitMQServerlessExchangeRequest& request, const DeleteRabbitMQServerlessExchangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRabbitMQServerlessExchangeOutcomeCallable DeleteRabbitMQServerlessExchangeCallable(const Model::DeleteRabbitMQServerlessExchangeRequest& request);

                /**
                 *删除RabbitMQ的权限
                 * @param req DeleteRabbitMQServerlessPermissionRequest
                 * @return DeleteRabbitMQServerlessPermissionOutcome
                 */
                DeleteRabbitMQServerlessPermissionOutcome DeleteRabbitMQServerlessPermission(const Model::DeleteRabbitMQServerlessPermissionRequest &request);
                void DeleteRabbitMQServerlessPermissionAsync(const Model::DeleteRabbitMQServerlessPermissionRequest& request, const DeleteRabbitMQServerlessPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRabbitMQServerlessPermissionOutcomeCallable DeleteRabbitMQServerlessPermissionCallable(const Model::DeleteRabbitMQServerlessPermissionRequest& request);

                /**
                 *删除RabbitMQ队列
                 * @param req DeleteRabbitMQServerlessQueueRequest
                 * @return DeleteRabbitMQServerlessQueueOutcome
                 */
                DeleteRabbitMQServerlessQueueOutcome DeleteRabbitMQServerlessQueue(const Model::DeleteRabbitMQServerlessQueueRequest &request);
                void DeleteRabbitMQServerlessQueueAsync(const Model::DeleteRabbitMQServerlessQueueRequest& request, const DeleteRabbitMQServerlessQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRabbitMQServerlessQueueOutcomeCallable DeleteRabbitMQServerlessQueueCallable(const Model::DeleteRabbitMQServerlessQueueRequest& request);

                /**
                 *删除RabbitMQ的用户
                 * @param req DeleteRabbitMQServerlessUserRequest
                 * @return DeleteRabbitMQServerlessUserOutcome
                 */
                DeleteRabbitMQServerlessUserOutcome DeleteRabbitMQServerlessUser(const Model::DeleteRabbitMQServerlessUserRequest &request);
                void DeleteRabbitMQServerlessUserAsync(const Model::DeleteRabbitMQServerlessUserRequest& request, const DeleteRabbitMQServerlessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRabbitMQServerlessUserOutcomeCallable DeleteRabbitMQServerlessUserCallable(const Model::DeleteRabbitMQServerlessUserRequest& request);

                /**
                 *删除RabbitMQ的vhost
                 * @param req DeleteRabbitMQServerlessVirtualHostRequest
                 * @return DeleteRabbitMQServerlessVirtualHostOutcome
                 */
                DeleteRabbitMQServerlessVirtualHostOutcome DeleteRabbitMQServerlessVirtualHost(const Model::DeleteRabbitMQServerlessVirtualHostRequest &request);
                void DeleteRabbitMQServerlessVirtualHostAsync(const Model::DeleteRabbitMQServerlessVirtualHostRequest& request, const DeleteRabbitMQServerlessVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRabbitMQServerlessVirtualHostOutcomeCallable DeleteRabbitMQServerlessVirtualHostCallable(const Model::DeleteRabbitMQServerlessVirtualHostRequest& request);

                /**
                 *获取路由关系列表
                 * @param req DescribeRabbitMQServerlessBindingsRequest
                 * @return DescribeRabbitMQServerlessBindingsOutcome
                 */
                DescribeRabbitMQServerlessBindingsOutcome DescribeRabbitMQServerlessBindings(const Model::DescribeRabbitMQServerlessBindingsRequest &request);
                void DescribeRabbitMQServerlessBindingsAsync(const Model::DescribeRabbitMQServerlessBindingsRequest& request, const DescribeRabbitMQServerlessBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQServerlessBindingsOutcomeCallable DescribeRabbitMQServerlessBindingsCallable(const Model::DescribeRabbitMQServerlessBindingsRequest& request);

                /**
                 *查询RabbitMQ连接列表
                 * @param req DescribeRabbitMQServerlessConnectionRequest
                 * @return DescribeRabbitMQServerlessConnectionOutcome
                 */
                DescribeRabbitMQServerlessConnectionOutcome DescribeRabbitMQServerlessConnection(const Model::DescribeRabbitMQServerlessConnectionRequest &request);
                void DescribeRabbitMQServerlessConnectionAsync(const Model::DescribeRabbitMQServerlessConnectionRequest& request, const DescribeRabbitMQServerlessConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQServerlessConnectionOutcomeCallable DescribeRabbitMQServerlessConnectionCallable(const Model::DescribeRabbitMQServerlessConnectionRequest& request);

                /**
                 *查询RabbitMQ队列消费者列表
                 * @param req DescribeRabbitMQServerlessConsumersRequest
                 * @return DescribeRabbitMQServerlessConsumersOutcome
                 */
                DescribeRabbitMQServerlessConsumersOutcome DescribeRabbitMQServerlessConsumers(const Model::DescribeRabbitMQServerlessConsumersRequest &request);
                void DescribeRabbitMQServerlessConsumersAsync(const Model::DescribeRabbitMQServerlessConsumersRequest& request, const DescribeRabbitMQServerlessConsumersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQServerlessConsumersOutcomeCallable DescribeRabbitMQServerlessConsumersCallable(const Model::DescribeRabbitMQServerlessConsumersRequest& request);

                /**
                 *查询RabbitMQ exchange 详情
                 * @param req DescribeRabbitMQServerlessExchangeDetailRequest
                 * @return DescribeRabbitMQServerlessExchangeDetailOutcome
                 */
                DescribeRabbitMQServerlessExchangeDetailOutcome DescribeRabbitMQServerlessExchangeDetail(const Model::DescribeRabbitMQServerlessExchangeDetailRequest &request);
                void DescribeRabbitMQServerlessExchangeDetailAsync(const Model::DescribeRabbitMQServerlessExchangeDetailRequest& request, const DescribeRabbitMQServerlessExchangeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQServerlessExchangeDetailOutcomeCallable DescribeRabbitMQServerlessExchangeDetailCallable(const Model::DescribeRabbitMQServerlessExchangeDetailRequest& request);

                /**
                 *查询RabbitMQ exchange 列表
                 * @param req DescribeRabbitMQServerlessExchangesRequest
                 * @return DescribeRabbitMQServerlessExchangesOutcome
                 */
                DescribeRabbitMQServerlessExchangesOutcome DescribeRabbitMQServerlessExchanges(const Model::DescribeRabbitMQServerlessExchangesRequest &request);
                void DescribeRabbitMQServerlessExchangesAsync(const Model::DescribeRabbitMQServerlessExchangesRequest& request, const DescribeRabbitMQServerlessExchangesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQServerlessExchangesOutcomeCallable DescribeRabbitMQServerlessExchangesCallable(const Model::DescribeRabbitMQServerlessExchangesRequest& request);

                /**
                 *获取单个RabbitMQ专享实例信息
                 * @param req DescribeRabbitMQServerlessInstanceRequest
                 * @return DescribeRabbitMQServerlessInstanceOutcome
                 */
                DescribeRabbitMQServerlessInstanceOutcome DescribeRabbitMQServerlessInstance(const Model::DescribeRabbitMQServerlessInstanceRequest &request);
                void DescribeRabbitMQServerlessInstanceAsync(const Model::DescribeRabbitMQServerlessInstanceRequest& request, const DescribeRabbitMQServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQServerlessInstanceOutcomeCallable DescribeRabbitMQServerlessInstanceCallable(const Model::DescribeRabbitMQServerlessInstanceRequest& request);

                /**
                 *查询RabbitMQ权限列表
                 * @param req DescribeRabbitMQServerlessPermissionRequest
                 * @return DescribeRabbitMQServerlessPermissionOutcome
                 */
                DescribeRabbitMQServerlessPermissionOutcome DescribeRabbitMQServerlessPermission(const Model::DescribeRabbitMQServerlessPermissionRequest &request);
                void DescribeRabbitMQServerlessPermissionAsync(const Model::DescribeRabbitMQServerlessPermissionRequest& request, const DescribeRabbitMQServerlessPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQServerlessPermissionOutcomeCallable DescribeRabbitMQServerlessPermissionCallable(const Model::DescribeRabbitMQServerlessPermissionRequest& request);

                /**
                 *查询RabbitMQ队列详情
                 * @param req DescribeRabbitMQServerlessQueueDetailRequest
                 * @return DescribeRabbitMQServerlessQueueDetailOutcome
                 */
                DescribeRabbitMQServerlessQueueDetailOutcome DescribeRabbitMQServerlessQueueDetail(const Model::DescribeRabbitMQServerlessQueueDetailRequest &request);
                void DescribeRabbitMQServerlessQueueDetailAsync(const Model::DescribeRabbitMQServerlessQueueDetailRequest& request, const DescribeRabbitMQServerlessQueueDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQServerlessQueueDetailOutcomeCallable DescribeRabbitMQServerlessQueueDetailCallable(const Model::DescribeRabbitMQServerlessQueueDetailRequest& request);

                /**
                 *查询RabbitMQ队列列表
                 * @param req DescribeRabbitMQServerlessQueuesRequest
                 * @return DescribeRabbitMQServerlessQueuesOutcome
                 */
                DescribeRabbitMQServerlessQueuesOutcome DescribeRabbitMQServerlessQueues(const Model::DescribeRabbitMQServerlessQueuesRequest &request);
                void DescribeRabbitMQServerlessQueuesAsync(const Model::DescribeRabbitMQServerlessQueuesRequest& request, const DescribeRabbitMQServerlessQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQServerlessQueuesOutcomeCallable DescribeRabbitMQServerlessQueuesCallable(const Model::DescribeRabbitMQServerlessQueuesRequest& request);

                /**
                 *查询RabbitMQ用户列表
                 * @param req DescribeRabbitMQServerlessUserRequest
                 * @return DescribeRabbitMQServerlessUserOutcome
                 */
                DescribeRabbitMQServerlessUserOutcome DescribeRabbitMQServerlessUser(const Model::DescribeRabbitMQServerlessUserRequest &request);
                void DescribeRabbitMQServerlessUserAsync(const Model::DescribeRabbitMQServerlessUserRequest& request, const DescribeRabbitMQServerlessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQServerlessUserOutcomeCallable DescribeRabbitMQServerlessUserCallable(const Model::DescribeRabbitMQServerlessUserRequest& request);

                /**
                 *查询RabbitMQ vhost列表
                 * @param req DescribeRabbitMQServerlessVirtualHostRequest
                 * @return DescribeRabbitMQServerlessVirtualHostOutcome
                 */
                DescribeRabbitMQServerlessVirtualHostOutcome DescribeRabbitMQServerlessVirtualHost(const Model::DescribeRabbitMQServerlessVirtualHostRequest &request);
                void DescribeRabbitMQServerlessVirtualHostAsync(const Model::DescribeRabbitMQServerlessVirtualHostRequest& request, const DescribeRabbitMQServerlessVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRabbitMQServerlessVirtualHostOutcomeCallable DescribeRabbitMQServerlessVirtualHostCallable(const Model::DescribeRabbitMQServerlessVirtualHostRequest& request);

                /**
                 *获取实例列表
                 * @param req ListRabbitMQServerlessInstancesRequest
                 * @return ListRabbitMQServerlessInstancesOutcome
                 */
                ListRabbitMQServerlessInstancesOutcome ListRabbitMQServerlessInstances(const Model::ListRabbitMQServerlessInstancesRequest &request);
                void ListRabbitMQServerlessInstancesAsync(const Model::ListRabbitMQServerlessInstancesRequest& request, const ListRabbitMQServerlessInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRabbitMQServerlessInstancesOutcomeCallable ListRabbitMQServerlessInstancesCallable(const Model::ListRabbitMQServerlessInstancesRequest& request);

                /**
                 *修改RabbitMQ exchange
                 * @param req ModifyRabbitMQServerlessExchangeRequest
                 * @return ModifyRabbitMQServerlessExchangeOutcome
                 */
                ModifyRabbitMQServerlessExchangeOutcome ModifyRabbitMQServerlessExchange(const Model::ModifyRabbitMQServerlessExchangeRequest &request);
                void ModifyRabbitMQServerlessExchangeAsync(const Model::ModifyRabbitMQServerlessExchangeRequest& request, const ModifyRabbitMQServerlessExchangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRabbitMQServerlessExchangeOutcomeCallable ModifyRabbitMQServerlessExchangeCallable(const Model::ModifyRabbitMQServerlessExchangeRequest& request);

                /**
                 *修改集群信息
                 * @param req ModifyRabbitMQServerlessInstanceRequest
                 * @return ModifyRabbitMQServerlessInstanceOutcome
                 */
                ModifyRabbitMQServerlessInstanceOutcome ModifyRabbitMQServerlessInstance(const Model::ModifyRabbitMQServerlessInstanceRequest &request);
                void ModifyRabbitMQServerlessInstanceAsync(const Model::ModifyRabbitMQServerlessInstanceRequest& request, const ModifyRabbitMQServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRabbitMQServerlessInstanceOutcomeCallable ModifyRabbitMQServerlessInstanceCallable(const Model::ModifyRabbitMQServerlessInstanceRequest& request);

                /**
                 *修改RabbitMQ的权限
                 * @param req ModifyRabbitMQServerlessPermissionRequest
                 * @return ModifyRabbitMQServerlessPermissionOutcome
                 */
                ModifyRabbitMQServerlessPermissionOutcome ModifyRabbitMQServerlessPermission(const Model::ModifyRabbitMQServerlessPermissionRequest &request);
                void ModifyRabbitMQServerlessPermissionAsync(const Model::ModifyRabbitMQServerlessPermissionRequest& request, const ModifyRabbitMQServerlessPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRabbitMQServerlessPermissionOutcomeCallable ModifyRabbitMQServerlessPermissionCallable(const Model::ModifyRabbitMQServerlessPermissionRequest& request);

                /**
                 *修改RabbitMQ队列
                 * @param req ModifyRabbitMQServerlessQueueRequest
                 * @return ModifyRabbitMQServerlessQueueOutcome
                 */
                ModifyRabbitMQServerlessQueueOutcome ModifyRabbitMQServerlessQueue(const Model::ModifyRabbitMQServerlessQueueRequest &request);
                void ModifyRabbitMQServerlessQueueAsync(const Model::ModifyRabbitMQServerlessQueueRequest& request, const ModifyRabbitMQServerlessQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRabbitMQServerlessQueueOutcomeCallable ModifyRabbitMQServerlessQueueCallable(const Model::ModifyRabbitMQServerlessQueueRequest& request);

                /**
                 *修改RabbitMQ的用户
                 * @param req ModifyRabbitMQServerlessUserRequest
                 * @return ModifyRabbitMQServerlessUserOutcome
                 */
                ModifyRabbitMQServerlessUserOutcome ModifyRabbitMQServerlessUser(const Model::ModifyRabbitMQServerlessUserRequest &request);
                void ModifyRabbitMQServerlessUserAsync(const Model::ModifyRabbitMQServerlessUserRequest& request, const ModifyRabbitMQServerlessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRabbitMQServerlessUserOutcomeCallable ModifyRabbitMQServerlessUserCallable(const Model::ModifyRabbitMQServerlessUserRequest& request);

                /**
                 *修改RabbitMQ的vhost
                 * @param req ModifyRabbitMQServerlessVirtualHostRequest
                 * @return ModifyRabbitMQServerlessVirtualHostOutcome
                 */
                ModifyRabbitMQServerlessVirtualHostOutcome ModifyRabbitMQServerlessVirtualHost(const Model::ModifyRabbitMQServerlessVirtualHostRequest &request);
                void ModifyRabbitMQServerlessVirtualHostAsync(const Model::ModifyRabbitMQServerlessVirtualHostRequest& request, const ModifyRabbitMQServerlessVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRabbitMQServerlessVirtualHostOutcomeCallable ModifyRabbitMQServerlessVirtualHostCallable(const Model::ModifyRabbitMQServerlessVirtualHostRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_TRABBITCLIENT_H_
