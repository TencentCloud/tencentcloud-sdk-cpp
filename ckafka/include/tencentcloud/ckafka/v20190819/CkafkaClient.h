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
#include <tencentcloud/ckafka/v20190819/model/CreateAclRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateAclResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreatePartitionRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreatePartitionResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateTopicIpWhiteListRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateTopicIpWhiteListResponse.h>
#include <tencentcloud/ckafka/v20190819/model/CreateUserRequest.h>
#include <tencentcloud/ckafka/v20190819/model/CreateUserResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteAclRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteAclResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteTopicIpWhiteListRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteTopicIpWhiteListResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteUserRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DeleteUserResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeACLRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeACLResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeAppInfoRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeAppInfoResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeConsumerGroupRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeConsumerGroupResponse.h>
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
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicAttributesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicAttributesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicDetailRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeTopicDetailResponse.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeUserRequest.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeUserResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyGroupOffsetsRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyGroupOffsetsResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyInstanceAttributesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyInstanceAttributesResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyPasswordRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyPasswordResponse.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyTopicAttributesRequest.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyTopicAttributesResponse.h>


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

                typedef Outcome<Error, Model::CreateAclResponse> CreateAclOutcome;
                typedef std::future<CreateAclOutcome> CreateAclOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateAclRequest&, CreateAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAclAsyncHandler;
                typedef Outcome<Error, Model::CreatePartitionResponse> CreatePartitionOutcome;
                typedef std::future<CreatePartitionOutcome> CreatePartitionOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreatePartitionRequest&, CreatePartitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePartitionAsyncHandler;
                typedef Outcome<Error, Model::CreateTopicResponse> CreateTopicOutcome;
                typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateTopicRequest&, CreateTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
                typedef Outcome<Error, Model::CreateTopicIpWhiteListResponse> CreateTopicIpWhiteListOutcome;
                typedef std::future<CreateTopicIpWhiteListOutcome> CreateTopicIpWhiteListOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateTopicIpWhiteListRequest&, CreateTopicIpWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicIpWhiteListAsyncHandler;
                typedef Outcome<Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Error, Model::DeleteAclResponse> DeleteAclOutcome;
                typedef std::future<DeleteAclOutcome> DeleteAclOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteAclRequest&, DeleteAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAclAsyncHandler;
                typedef Outcome<Error, Model::DeleteTopicResponse> DeleteTopicOutcome;
                typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteTopicRequest&, DeleteTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
                typedef Outcome<Error, Model::DeleteTopicIpWhiteListResponse> DeleteTopicIpWhiteListOutcome;
                typedef std::future<DeleteTopicIpWhiteListOutcome> DeleteTopicIpWhiteListOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteTopicIpWhiteListRequest&, DeleteTopicIpWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicIpWhiteListAsyncHandler;
                typedef Outcome<Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Error, Model::DescribeACLResponse> DescribeACLOutcome;
                typedef std::future<DescribeACLOutcome> DescribeACLOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeACLRequest&, DescribeACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeACLAsyncHandler;
                typedef Outcome<Error, Model::DescribeAppInfoResponse> DescribeAppInfoOutcome;
                typedef std::future<DescribeAppInfoOutcome> DescribeAppInfoOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeAppInfoRequest&, DescribeAppInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeConsumerGroupResponse> DescribeConsumerGroupOutcome;
                typedef std::future<DescribeConsumerGroupOutcome> DescribeConsumerGroupOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeConsumerGroupRequest&, DescribeConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerGroupAsyncHandler;
                typedef Outcome<Error, Model::DescribeGroupResponse> DescribeGroupOutcome;
                typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeGroupRequest&, DescribeGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupAsyncHandler;
                typedef Outcome<Error, Model::DescribeGroupInfoResponse> DescribeGroupInfoOutcome;
                typedef std::future<DescribeGroupInfoOutcome> DescribeGroupInfoOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeGroupInfoRequest&, DescribeGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeGroupOffsetsResponse> DescribeGroupOffsetsOutcome;
                typedef std::future<DescribeGroupOffsetsOutcome> DescribeGroupOffsetsOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeGroupOffsetsRequest&, DescribeGroupOffsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupOffsetsAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstanceAttributesResponse> DescribeInstanceAttributesOutcome;
                typedef std::future<DescribeInstanceAttributesOutcome> DescribeInstanceAttributesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeInstanceAttributesRequest&, DescribeInstanceAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAttributesAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstancesDetailResponse> DescribeInstancesDetailOutcome;
                typedef std::future<DescribeInstancesDetailOutcome> DescribeInstancesDetailOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeInstancesDetailRequest&, DescribeInstancesDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeTopicResponse> DescribeTopicOutcome;
                typedef std::future<DescribeTopicOutcome> DescribeTopicOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicRequest&, DescribeTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicAsyncHandler;
                typedef Outcome<Error, Model::DescribeTopicAttributesResponse> DescribeTopicAttributesOutcome;
                typedef std::future<DescribeTopicAttributesOutcome> DescribeTopicAttributesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicAttributesRequest&, DescribeTopicAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicAttributesAsyncHandler;
                typedef Outcome<Error, Model::DescribeTopicDetailResponse> DescribeTopicDetailOutcome;
                typedef std::future<DescribeTopicDetailOutcome> DescribeTopicDetailOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeTopicDetailRequest&, DescribeTopicDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeUserResponse> DescribeUserOutcome;
                typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::DescribeUserRequest&, DescribeUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserAsyncHandler;
                typedef Outcome<Error, Model::ModifyGroupOffsetsResponse> ModifyGroupOffsetsOutcome;
                typedef std::future<ModifyGroupOffsetsOutcome> ModifyGroupOffsetsOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyGroupOffsetsRequest&, ModifyGroupOffsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupOffsetsAsyncHandler;
                typedef Outcome<Error, Model::ModifyInstanceAttributesResponse> ModifyInstanceAttributesOutcome;
                typedef std::future<ModifyInstanceAttributesOutcome> ModifyInstanceAttributesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyInstanceAttributesRequest&, ModifyInstanceAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAttributesAsyncHandler;
                typedef Outcome<Error, Model::ModifyPasswordResponse> ModifyPasswordOutcome;
                typedef std::future<ModifyPasswordOutcome> ModifyPasswordOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyPasswordRequest&, ModifyPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPasswordAsyncHandler;
                typedef Outcome<Error, Model::ModifyTopicAttributesResponse> ModifyTopicAttributesOutcome;
                typedef std::future<ModifyTopicAttributesOutcome> ModifyTopicAttributesOutcomeCallable;
                typedef std::function<void(const CkafkaClient*, const Model::ModifyTopicAttributesRequest&, ModifyTopicAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicAttributesAsyncHandler;



                /**
                 *添加 ACL 策略
                 * @param req CreateAclRequest
                 * @return CreateAclOutcome
                 */
                CreateAclOutcome CreateAcl(const Model::CreateAclRequest &request);
                void CreateAclAsync(const Model::CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAclOutcomeCallable CreateAclCallable(const Model::CreateAclRequest& request);

                /**
                 *本接口用于增加主题中的分区
                 * @param req CreatePartitionRequest
                 * @return CreatePartitionOutcome
                 */
                CreatePartitionOutcome CreatePartition(const Model::CreatePartitionRequest &request);
                void CreatePartitionAsync(const Model::CreatePartitionRequest& request, const CreatePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePartitionOutcomeCallable CreatePartitionCallable(const Model::CreatePartitionRequest& request);

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
                 *查询用户列表
                 * @param req DescribeAppInfoRequest
                 * @return DescribeAppInfoOutcome
                 */
                DescribeAppInfoOutcome DescribeAppInfo(const Model::DescribeAppInfoRequest &request);
                void DescribeAppInfoAsync(const Model::DescribeAppInfoRequest& request, const DescribeAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppInfoOutcomeCallable DescribeAppInfoCallable(const Model::DescribeAppInfoRequest& request);

                /**
                 *查询消费分组信息
                 * @param req DescribeConsumerGroupRequest
                 * @return DescribeConsumerGroupOutcome
                 */
                DescribeConsumerGroupOutcome DescribeConsumerGroup(const Model::DescribeConsumerGroupRequest &request);
                void DescribeConsumerGroupAsync(const Model::DescribeConsumerGroupRequest& request, const DescribeConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerGroupOutcomeCallable DescribeConsumerGroupCallable(const Model::DescribeConsumerGroupRequest& request);

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
                 *查询用户信息
                 * @param req DescribeUserRequest
                 * @return DescribeUserOutcome
                 */
                DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest &request);
                void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request);

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
                 *修改密码
                 * @param req ModifyPasswordRequest
                 * @return ModifyPasswordOutcome
                 */
                ModifyPasswordOutcome ModifyPassword(const Model::ModifyPasswordRequest &request);
                void ModifyPasswordAsync(const Model::ModifyPasswordRequest& request, const ModifyPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPasswordOutcomeCallable ModifyPasswordCallable(const Model::ModifyPasswordRequest& request);

                /**
                 *本接口用于修改主题属性。
                 * @param req ModifyTopicAttributesRequest
                 * @return ModifyTopicAttributesOutcome
                 */
                ModifyTopicAttributesOutcome ModifyTopicAttributes(const Model::ModifyTopicAttributesRequest &request);
                void ModifyTopicAttributesAsync(const Model::ModifyTopicAttributesRequest& request, const ModifyTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicAttributesOutcomeCallable ModifyTopicAttributesCallable(const Model::ModifyTopicAttributesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_CKAFKACLIENT_H_
