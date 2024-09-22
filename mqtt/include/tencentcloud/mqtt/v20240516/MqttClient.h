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

#ifndef TENCENTCLOUD_MQTT_V20240516_MQTTCLIENT_H_
#define TENCENTCLOUD_MQTT_V20240516_MQTTCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mqtt/v20240516/model/CreateAuthorizationPolicyRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateAuthorizationPolicyResponse.h>
#include <tencentcloud/mqtt/v20240516/model/CreateJWKSAuthenticatorRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateJWKSAuthenticatorResponse.h>
#include <tencentcloud/mqtt/v20240516/model/CreateJWTAuthenticatorRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateJWTAuthenticatorResponse.h>
#include <tencentcloud/mqtt/v20240516/model/CreateTopicRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateTopicResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteAuthenticatorRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteAuthenticatorResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteAuthorizationPolicyRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteAuthorizationPolicyResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteTopicRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteTopicResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeAuthenticatorRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeAuthenticatorResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeAuthorizationPoliciesRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeAuthorizationPoliciesResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeInstanceRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeInstanceResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeInstanceListRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeInstanceListResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeTopicRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeTopicResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeTopicListRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeTopicListResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyAuthorizationPolicyRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyAuthorizationPolicyResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyJWKSAuthenticatorRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyJWKSAuthenticatorResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyJWTAuthenticatorRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyJWTAuthenticatorResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyTopicRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyTopicResponse.h>
#include <tencentcloud/mqtt/v20240516/model/RegisterDeviceCertificateRequest.h>
#include <tencentcloud/mqtt/v20240516/model/RegisterDeviceCertificateResponse.h>
#include <tencentcloud/mqtt/v20240516/model/UpdateAuthorizationPolicyPriorityRequest.h>
#include <tencentcloud/mqtt/v20240516/model/UpdateAuthorizationPolicyPriorityResponse.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            class MqttClient : public AbstractClient
            {
            public:
                MqttClient(const Credential &credential, const std::string &region);
                MqttClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAuthorizationPolicyResponse> CreateAuthorizationPolicyOutcome;
                typedef std::future<CreateAuthorizationPolicyOutcome> CreateAuthorizationPolicyOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateAuthorizationPolicyRequest&, CreateAuthorizationPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuthorizationPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateJWKSAuthenticatorResponse> CreateJWKSAuthenticatorOutcome;
                typedef std::future<CreateJWKSAuthenticatorOutcome> CreateJWKSAuthenticatorOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateJWKSAuthenticatorRequest&, CreateJWKSAuthenticatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateJWKSAuthenticatorAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateJWTAuthenticatorResponse> CreateJWTAuthenticatorOutcome;
                typedef std::future<CreateJWTAuthenticatorOutcome> CreateJWTAuthenticatorOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateJWTAuthenticatorRequest&, CreateJWTAuthenticatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateJWTAuthenticatorAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicResponse> CreateTopicOutcome;
                typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateTopicRequest&, CreateTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuthenticatorResponse> DeleteAuthenticatorOutcome;
                typedef std::future<DeleteAuthenticatorOutcome> DeleteAuthenticatorOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteAuthenticatorRequest&, DeleteAuthenticatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuthenticatorAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuthorizationPolicyResponse> DeleteAuthorizationPolicyOutcome;
                typedef std::future<DeleteAuthorizationPolicyOutcome> DeleteAuthorizationPolicyOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteAuthorizationPolicyRequest&, DeleteAuthorizationPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuthorizationPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicResponse> DeleteTopicOutcome;
                typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteTopicRequest&, DeleteTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuthenticatorResponse> DescribeAuthenticatorOutcome;
                typedef std::future<DescribeAuthenticatorOutcome> DescribeAuthenticatorOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeAuthenticatorRequest&, DescribeAuthenticatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthenticatorAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuthorizationPoliciesResponse> DescribeAuthorizationPoliciesOutcome;
                typedef std::future<DescribeAuthorizationPoliciesOutcome> DescribeAuthorizationPoliciesOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeAuthorizationPoliciesRequest&, DescribeAuthorizationPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthorizationPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceResponse> DescribeInstanceOutcome;
                typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeInstanceRequest&, DescribeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceListResponse> DescribeInstanceListOutcome;
                typedef std::future<DescribeInstanceListOutcome> DescribeInstanceListOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeInstanceListRequest&, DescribeInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicResponse> DescribeTopicOutcome;
                typedef std::future<DescribeTopicOutcome> DescribeTopicOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeTopicRequest&, DescribeTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicListResponse> DescribeTopicListOutcome;
                typedef std::future<DescribeTopicListOutcome> DescribeTopicListOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeTopicListRequest&, DescribeTopicListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAuthorizationPolicyResponse> ModifyAuthorizationPolicyOutcome;
                typedef std::future<ModifyAuthorizationPolicyOutcome> ModifyAuthorizationPolicyOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyAuthorizationPolicyRequest&, ModifyAuthorizationPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuthorizationPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyJWKSAuthenticatorResponse> ModifyJWKSAuthenticatorOutcome;
                typedef std::future<ModifyJWKSAuthenticatorOutcome> ModifyJWKSAuthenticatorOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyJWKSAuthenticatorRequest&, ModifyJWKSAuthenticatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJWKSAuthenticatorAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyJWTAuthenticatorResponse> ModifyJWTAuthenticatorOutcome;
                typedef std::future<ModifyJWTAuthenticatorOutcome> ModifyJWTAuthenticatorOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyJWTAuthenticatorRequest&, ModifyJWTAuthenticatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJWTAuthenticatorAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTopicResponse> ModifyTopicOutcome;
                typedef std::future<ModifyTopicOutcome> ModifyTopicOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyTopicRequest&, ModifyTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterDeviceCertificateResponse> RegisterDeviceCertificateOutcome;
                typedef std::future<RegisterDeviceCertificateOutcome> RegisterDeviceCertificateOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::RegisterDeviceCertificateRequest&, RegisterDeviceCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDeviceCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAuthorizationPolicyPriorityResponse> UpdateAuthorizationPolicyPriorityOutcome;
                typedef std::future<UpdateAuthorizationPolicyPriorityOutcome> UpdateAuthorizationPolicyPriorityOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::UpdateAuthorizationPolicyPriorityRequest&, UpdateAuthorizationPolicyPriorityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAuthorizationPolicyPriorityAsyncHandler;



                /**
                 *创建MQTT实例的性能测试任务
                 * @param req CreateAuthorizationPolicyRequest
                 * @return CreateAuthorizationPolicyOutcome
                 */
                CreateAuthorizationPolicyOutcome CreateAuthorizationPolicy(const Model::CreateAuthorizationPolicyRequest &request);
                void CreateAuthorizationPolicyAsync(const Model::CreateAuthorizationPolicyRequest& request, const CreateAuthorizationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuthorizationPolicyOutcomeCallable CreateAuthorizationPolicyCallable(const Model::CreateAuthorizationPolicyRequest& request);

                /**
                 *创建一个jwks的认证
                 * @param req CreateJWKSAuthenticatorRequest
                 * @return CreateJWKSAuthenticatorOutcome
                 */
                CreateJWKSAuthenticatorOutcome CreateJWKSAuthenticator(const Model::CreateJWKSAuthenticatorRequest &request);
                void CreateJWKSAuthenticatorAsync(const Model::CreateJWKSAuthenticatorRequest& request, const CreateJWKSAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateJWKSAuthenticatorOutcomeCallable CreateJWKSAuthenticatorCallable(const Model::CreateJWKSAuthenticatorRequest& request);

                /**
                 *创建一个jwks的认证
                 * @param req CreateJWTAuthenticatorRequest
                 * @return CreateJWTAuthenticatorOutcome
                 */
                CreateJWTAuthenticatorOutcome CreateJWTAuthenticator(const Model::CreateJWTAuthenticatorRequest &request);
                void CreateJWTAuthenticatorAsync(const Model::CreateJWTAuthenticatorRequest& request, const CreateJWTAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateJWTAuthenticatorOutcomeCallable CreateJWTAuthenticatorCallable(const Model::CreateJWTAuthenticatorRequest& request);

                /**
                 *创建主题
                 * @param req CreateTopicRequest
                 * @return CreateTopicOutcome
                 */
                CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest &request);
                void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request);

                /**
                 *根据认证器类型删除一个MQTT认证器
                 * @param req DeleteAuthenticatorRequest
                 * @return DeleteAuthenticatorOutcome
                 */
                DeleteAuthenticatorOutcome DeleteAuthenticator(const Model::DeleteAuthenticatorRequest &request);
                void DeleteAuthenticatorAsync(const Model::DeleteAuthenticatorRequest& request, const DeleteAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAuthenticatorOutcomeCallable DeleteAuthenticatorCallable(const Model::DeleteAuthenticatorRequest& request);

                /**
                 *删除策略规则
                 * @param req DeleteAuthorizationPolicyRequest
                 * @return DeleteAuthorizationPolicyOutcome
                 */
                DeleteAuthorizationPolicyOutcome DeleteAuthorizationPolicy(const Model::DeleteAuthorizationPolicyRequest &request);
                void DeleteAuthorizationPolicyAsync(const Model::DeleteAuthorizationPolicyRequest& request, const DeleteAuthorizationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAuthorizationPolicyOutcomeCallable DeleteAuthorizationPolicyCallable(const Model::DeleteAuthorizationPolicyRequest& request);

                /**
                 *删除MQTT主题
                 * @param req DeleteTopicRequest
                 * @return DeleteTopicOutcome
                 */
                DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest &request);
                void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request);

                /**
                 *查询MQTT认证器
                 * @param req DescribeAuthenticatorRequest
                 * @return DescribeAuthenticatorOutcome
                 */
                DescribeAuthenticatorOutcome DescribeAuthenticator(const Model::DescribeAuthenticatorRequest &request);
                void DescribeAuthenticatorAsync(const Model::DescribeAuthenticatorRequest& request, const DescribeAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuthenticatorOutcomeCallable DescribeAuthenticatorCallable(const Model::DescribeAuthenticatorRequest& request);

                /**
                 *查询授权规则
                 * @param req DescribeAuthorizationPoliciesRequest
                 * @return DescribeAuthorizationPoliciesOutcome
                 */
                DescribeAuthorizationPoliciesOutcome DescribeAuthorizationPolicies(const Model::DescribeAuthorizationPoliciesRequest &request);
                void DescribeAuthorizationPoliciesAsync(const Model::DescribeAuthorizationPoliciesRequest& request, const DescribeAuthorizationPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuthorizationPoliciesOutcomeCallable DescribeAuthorizationPoliciesCallable(const Model::DescribeAuthorizationPoliciesRequest& request);

                /**
                 *查询实例信息
                 * @param req DescribeInstanceRequest
                 * @return DescribeInstanceOutcome
                 */
                DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest &request);
                void DescribeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOutcomeCallable DescribeInstanceCallable(const Model::DescribeInstanceRequest& request);

                /**
                 *获取实例列表，Filters参数使用说明如下：
1. InstanceName, 名称模糊查询
2. InstanceId，实例ID查询
3. InstanceType, 实例类型查询，支持多选
3. InstanceStatus，实例状态查询，支持多选

当使用TagFilters查询时，Filters参数失效。
                 * @param req DescribeInstanceListRequest
                 * @return DescribeInstanceListOutcome
                 */
                DescribeInstanceListOutcome DescribeInstanceList(const Model::DescribeInstanceListRequest &request);
                void DescribeInstanceListAsync(const Model::DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceListOutcomeCallable DescribeInstanceListCallable(const Model::DescribeInstanceListRequest& request);

                /**
                 *查询mqtt主题详情
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
                 *修改策略规则
                 * @param req ModifyAuthorizationPolicyRequest
                 * @return ModifyAuthorizationPolicyOutcome
                 */
                ModifyAuthorizationPolicyOutcome ModifyAuthorizationPolicy(const Model::ModifyAuthorizationPolicyRequest &request);
                void ModifyAuthorizationPolicyAsync(const Model::ModifyAuthorizationPolicyRequest& request, const ModifyAuthorizationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAuthorizationPolicyOutcomeCallable ModifyAuthorizationPolicyCallable(const Model::ModifyAuthorizationPolicyRequest& request);

                /**
                 *修改MQTT JWKS 认证器
                 * @param req ModifyJWKSAuthenticatorRequest
                 * @return ModifyJWKSAuthenticatorOutcome
                 */
                ModifyJWKSAuthenticatorOutcome ModifyJWKSAuthenticator(const Model::ModifyJWKSAuthenticatorRequest &request);
                void ModifyJWKSAuthenticatorAsync(const Model::ModifyJWKSAuthenticatorRequest& request, const ModifyJWKSAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyJWKSAuthenticatorOutcomeCallable ModifyJWKSAuthenticatorCallable(const Model::ModifyJWKSAuthenticatorRequest& request);

                /**
                 *修改MQTT JWKS 认证器
                 * @param req ModifyJWTAuthenticatorRequest
                 * @return ModifyJWTAuthenticatorOutcome
                 */
                ModifyJWTAuthenticatorOutcome ModifyJWTAuthenticator(const Model::ModifyJWTAuthenticatorRequest &request);
                void ModifyJWTAuthenticatorAsync(const Model::ModifyJWTAuthenticatorRequest& request, const ModifyJWTAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyJWTAuthenticatorOutcomeCallable ModifyJWTAuthenticatorCallable(const Model::ModifyJWTAuthenticatorRequest& request);

                /**
                 *修改主题属性
                 * @param req ModifyTopicRequest
                 * @return ModifyTopicOutcome
                 */
                ModifyTopicOutcome ModifyTopic(const Model::ModifyTopicRequest &request);
                void ModifyTopicAsync(const Model::ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicOutcomeCallable ModifyTopicCallable(const Model::ModifyTopicRequest& request);

                /**
                 *注册设备证书
                 * @param req RegisterDeviceCertificateRequest
                 * @return RegisterDeviceCertificateOutcome
                 */
                RegisterDeviceCertificateOutcome RegisterDeviceCertificate(const Model::RegisterDeviceCertificateRequest &request);
                void RegisterDeviceCertificateAsync(const Model::RegisterDeviceCertificateRequest& request, const RegisterDeviceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterDeviceCertificateOutcomeCallable RegisterDeviceCertificateCallable(const Model::RegisterDeviceCertificateRequest& request);

                /**
                 *修改策略规则优先级
                 * @param req UpdateAuthorizationPolicyPriorityRequest
                 * @return UpdateAuthorizationPolicyPriorityOutcome
                 */
                UpdateAuthorizationPolicyPriorityOutcome UpdateAuthorizationPolicyPriority(const Model::UpdateAuthorizationPolicyPriorityRequest &request);
                void UpdateAuthorizationPolicyPriorityAsync(const Model::UpdateAuthorizationPolicyPriorityRequest& request, const UpdateAuthorizationPolicyPriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAuthorizationPolicyPriorityOutcomeCallable UpdateAuthorizationPolicyPriorityCallable(const Model::UpdateAuthorizationPolicyPriorityRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MQTTCLIENT_H_
