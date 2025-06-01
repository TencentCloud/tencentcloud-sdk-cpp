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
#include <tencentcloud/mqtt/v20240516/model/ActivateCaCertificateRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ActivateCaCertificateResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ActivateDeviceCertificateRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ActivateDeviceCertificateResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ApplyRegistrationCodeRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ApplyRegistrationCodeResponse.h>
#include <tencentcloud/mqtt/v20240516/model/CreateAuthorizationPolicyRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateAuthorizationPolicyResponse.h>
#include <tencentcloud/mqtt/v20240516/model/CreateHttpAuthenticatorRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateHttpAuthenticatorResponse.h>
#include <tencentcloud/mqtt/v20240516/model/CreateInsPublicEndpointRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateInsPublicEndpointResponse.h>
#include <tencentcloud/mqtt/v20240516/model/CreateInstanceRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateInstanceResponse.h>
#include <tencentcloud/mqtt/v20240516/model/CreateJWKSAuthenticatorRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateJWKSAuthenticatorResponse.h>
#include <tencentcloud/mqtt/v20240516/model/CreateJWTAuthenticatorRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateJWTAuthenticatorResponse.h>
#include <tencentcloud/mqtt/v20240516/model/CreateTopicRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateTopicResponse.h>
#include <tencentcloud/mqtt/v20240516/model/CreateUserRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateUserResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeactivateCaCertificateRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeactivateCaCertificateResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeactivateDeviceCertificateRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeactivateDeviceCertificateResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteAuthenticatorRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteAuthenticatorResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteAuthorizationPolicyRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteAuthorizationPolicyResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteCaCertificateRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteCaCertificateResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteDeviceCertificateRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteDeviceCertificateResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteInsPublicEndpointRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteInsPublicEndpointResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteInstanceRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteInstanceResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteTopicRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteTopicResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteUserRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteUserResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeAuthenticatorRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeAuthenticatorResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeAuthorizationPoliciesRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeAuthorizationPoliciesResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeCaCertificateRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeCaCertificateResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeCaCertificatesRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeCaCertificatesResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeClientListRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeClientListResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeDeviceCertificateRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeDeviceCertificateResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeDeviceCertificatesRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeDeviceCertificatesResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeInsPublicEndpointsRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeInsPublicEndpointsResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeInsVPCEndpointsRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeInsVPCEndpointsResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeInstanceRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeInstanceResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeInstanceListRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeInstanceListResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeMessageByTopicRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeMessageByTopicResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeMessageListRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeMessageListResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeProductSKUListRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeProductSKUListResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeSharedSubscriptionLagRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeSharedSubscriptionLagResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeTopicRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeTopicResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeTopicListRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeTopicListResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeUserListRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeUserListResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyAuthorizationPolicyRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyAuthorizationPolicyResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyHttpAuthenticatorRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyHttpAuthenticatorResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyInsPublicEndpointRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyInsPublicEndpointResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyInstanceRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyInstanceResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyInstanceCertBindingRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyInstanceCertBindingResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyJWKSAuthenticatorRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyJWKSAuthenticatorResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyJWTAuthenticatorRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyJWTAuthenticatorResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyTopicRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyTopicResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyUserRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyUserResponse.h>
#include <tencentcloud/mqtt/v20240516/model/PublishMessageRequest.h>
#include <tencentcloud/mqtt/v20240516/model/PublishMessageResponse.h>
#include <tencentcloud/mqtt/v20240516/model/RegisterCaCertificateRequest.h>
#include <tencentcloud/mqtt/v20240516/model/RegisterCaCertificateResponse.h>
#include <tencentcloud/mqtt/v20240516/model/RegisterDeviceCertificateRequest.h>
#include <tencentcloud/mqtt/v20240516/model/RegisterDeviceCertificateResponse.h>
#include <tencentcloud/mqtt/v20240516/model/RevokedDeviceCertificateRequest.h>
#include <tencentcloud/mqtt/v20240516/model/RevokedDeviceCertificateResponse.h>
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

                typedef Outcome<Core::Error, Model::ActivateCaCertificateResponse> ActivateCaCertificateOutcome;
                typedef std::future<ActivateCaCertificateOutcome> ActivateCaCertificateOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ActivateCaCertificateRequest&, ActivateCaCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActivateCaCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ActivateDeviceCertificateResponse> ActivateDeviceCertificateOutcome;
                typedef std::future<ActivateDeviceCertificateOutcome> ActivateDeviceCertificateOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ActivateDeviceCertificateRequest&, ActivateDeviceCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActivateDeviceCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyRegistrationCodeResponse> ApplyRegistrationCodeOutcome;
                typedef std::future<ApplyRegistrationCodeOutcome> ApplyRegistrationCodeOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ApplyRegistrationCodeRequest&, ApplyRegistrationCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyRegistrationCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAuthorizationPolicyResponse> CreateAuthorizationPolicyOutcome;
                typedef std::future<CreateAuthorizationPolicyOutcome> CreateAuthorizationPolicyOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateAuthorizationPolicyRequest&, CreateAuthorizationPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuthorizationPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHttpAuthenticatorResponse> CreateHttpAuthenticatorOutcome;
                typedef std::future<CreateHttpAuthenticatorOutcome> CreateHttpAuthenticatorOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateHttpAuthenticatorRequest&, CreateHttpAuthenticatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHttpAuthenticatorAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInsPublicEndpointResponse> CreateInsPublicEndpointOutcome;
                typedef std::future<CreateInsPublicEndpointOutcome> CreateInsPublicEndpointOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateInsPublicEndpointRequest&, CreateInsPublicEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInsPublicEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateJWKSAuthenticatorResponse> CreateJWKSAuthenticatorOutcome;
                typedef std::future<CreateJWKSAuthenticatorOutcome> CreateJWKSAuthenticatorOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateJWKSAuthenticatorRequest&, CreateJWKSAuthenticatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateJWKSAuthenticatorAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateJWTAuthenticatorResponse> CreateJWTAuthenticatorOutcome;
                typedef std::future<CreateJWTAuthenticatorOutcome> CreateJWTAuthenticatorOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateJWTAuthenticatorRequest&, CreateJWTAuthenticatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateJWTAuthenticatorAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicResponse> CreateTopicOutcome;
                typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateTopicRequest&, CreateTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeactivateCaCertificateResponse> DeactivateCaCertificateOutcome;
                typedef std::future<DeactivateCaCertificateOutcome> DeactivateCaCertificateOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeactivateCaCertificateRequest&, DeactivateCaCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeactivateCaCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeactivateDeviceCertificateResponse> DeactivateDeviceCertificateOutcome;
                typedef std::future<DeactivateDeviceCertificateOutcome> DeactivateDeviceCertificateOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeactivateDeviceCertificateRequest&, DeactivateDeviceCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeactivateDeviceCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuthenticatorResponse> DeleteAuthenticatorOutcome;
                typedef std::future<DeleteAuthenticatorOutcome> DeleteAuthenticatorOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteAuthenticatorRequest&, DeleteAuthenticatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuthenticatorAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuthorizationPolicyResponse> DeleteAuthorizationPolicyOutcome;
                typedef std::future<DeleteAuthorizationPolicyOutcome> DeleteAuthorizationPolicyOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteAuthorizationPolicyRequest&, DeleteAuthorizationPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuthorizationPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCaCertificateResponse> DeleteCaCertificateOutcome;
                typedef std::future<DeleteCaCertificateOutcome> DeleteCaCertificateOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteCaCertificateRequest&, DeleteCaCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCaCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceCertificateResponse> DeleteDeviceCertificateOutcome;
                typedef std::future<DeleteDeviceCertificateOutcome> DeleteDeviceCertificateOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteDeviceCertificateRequest&, DeleteDeviceCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInsPublicEndpointResponse> DeleteInsPublicEndpointOutcome;
                typedef std::future<DeleteInsPublicEndpointOutcome> DeleteInsPublicEndpointOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteInsPublicEndpointRequest&, DeleteInsPublicEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInsPublicEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceResponse> DeleteInstanceOutcome;
                typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteInstanceRequest&, DeleteInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicResponse> DeleteTopicOutcome;
                typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteTopicRequest&, DeleteTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuthenticatorResponse> DescribeAuthenticatorOutcome;
                typedef std::future<DescribeAuthenticatorOutcome> DescribeAuthenticatorOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeAuthenticatorRequest&, DescribeAuthenticatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthenticatorAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuthorizationPoliciesResponse> DescribeAuthorizationPoliciesOutcome;
                typedef std::future<DescribeAuthorizationPoliciesOutcome> DescribeAuthorizationPoliciesOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeAuthorizationPoliciesRequest&, DescribeAuthorizationPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthorizationPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCaCertificateResponse> DescribeCaCertificateOutcome;
                typedef std::future<DescribeCaCertificateOutcome> DescribeCaCertificateOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeCaCertificateRequest&, DescribeCaCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCaCertificatesResponse> DescribeCaCertificatesOutcome;
                typedef std::future<DescribeCaCertificatesOutcome> DescribeCaCertificatesOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeCaCertificatesRequest&, DescribeCaCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClientListResponse> DescribeClientListOutcome;
                typedef std::future<DescribeClientListOutcome> DescribeClientListOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeClientListRequest&, DescribeClientListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceCertificateResponse> DescribeDeviceCertificateOutcome;
                typedef std::future<DescribeDeviceCertificateOutcome> DescribeDeviceCertificateOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeDeviceCertificateRequest&, DescribeDeviceCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceCertificatesResponse> DescribeDeviceCertificatesOutcome;
                typedef std::future<DescribeDeviceCertificatesOutcome> DescribeDeviceCertificatesOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeDeviceCertificatesRequest&, DescribeDeviceCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInsPublicEndpointsResponse> DescribeInsPublicEndpointsOutcome;
                typedef std::future<DescribeInsPublicEndpointsOutcome> DescribeInsPublicEndpointsOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeInsPublicEndpointsRequest&, DescribeInsPublicEndpointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInsPublicEndpointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInsVPCEndpointsResponse> DescribeInsVPCEndpointsOutcome;
                typedef std::future<DescribeInsVPCEndpointsOutcome> DescribeInsVPCEndpointsOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeInsVPCEndpointsRequest&, DescribeInsVPCEndpointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInsVPCEndpointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceResponse> DescribeInstanceOutcome;
                typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeInstanceRequest&, DescribeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceListResponse> DescribeInstanceListOutcome;
                typedef std::future<DescribeInstanceListOutcome> DescribeInstanceListOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeInstanceListRequest&, DescribeInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageByTopicResponse> DescribeMessageByTopicOutcome;
                typedef std::future<DescribeMessageByTopicOutcome> DescribeMessageByTopicOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeMessageByTopicRequest&, DescribeMessageByTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageByTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageListResponse> DescribeMessageListOutcome;
                typedef std::future<DescribeMessageListOutcome> DescribeMessageListOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeMessageListRequest&, DescribeMessageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductSKUListResponse> DescribeProductSKUListOutcome;
                typedef std::future<DescribeProductSKUListOutcome> DescribeProductSKUListOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeProductSKUListRequest&, DescribeProductSKUListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductSKUListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSharedSubscriptionLagResponse> DescribeSharedSubscriptionLagOutcome;
                typedef std::future<DescribeSharedSubscriptionLagOutcome> DescribeSharedSubscriptionLagOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeSharedSubscriptionLagRequest&, DescribeSharedSubscriptionLagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSharedSubscriptionLagAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicResponse> DescribeTopicOutcome;
                typedef std::future<DescribeTopicOutcome> DescribeTopicOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeTopicRequest&, DescribeTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicListResponse> DescribeTopicListOutcome;
                typedef std::future<DescribeTopicListOutcome> DescribeTopicListOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeTopicListRequest&, DescribeTopicListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserListResponse> DescribeUserListOutcome;
                typedef std::future<DescribeUserListOutcome> DescribeUserListOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeUserListRequest&, DescribeUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAuthorizationPolicyResponse> ModifyAuthorizationPolicyOutcome;
                typedef std::future<ModifyAuthorizationPolicyOutcome> ModifyAuthorizationPolicyOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyAuthorizationPolicyRequest&, ModifyAuthorizationPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuthorizationPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHttpAuthenticatorResponse> ModifyHttpAuthenticatorOutcome;
                typedef std::future<ModifyHttpAuthenticatorOutcome> ModifyHttpAuthenticatorOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyHttpAuthenticatorRequest&, ModifyHttpAuthenticatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHttpAuthenticatorAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInsPublicEndpointResponse> ModifyInsPublicEndpointOutcome;
                typedef std::future<ModifyInsPublicEndpointOutcome> ModifyInsPublicEndpointOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyInsPublicEndpointRequest&, ModifyInsPublicEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInsPublicEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceCertBindingResponse> ModifyInstanceCertBindingOutcome;
                typedef std::future<ModifyInstanceCertBindingOutcome> ModifyInstanceCertBindingOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyInstanceCertBindingRequest&, ModifyInstanceCertBindingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceCertBindingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyJWKSAuthenticatorResponse> ModifyJWKSAuthenticatorOutcome;
                typedef std::future<ModifyJWKSAuthenticatorOutcome> ModifyJWKSAuthenticatorOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyJWKSAuthenticatorRequest&, ModifyJWKSAuthenticatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJWKSAuthenticatorAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyJWTAuthenticatorResponse> ModifyJWTAuthenticatorOutcome;
                typedef std::future<ModifyJWTAuthenticatorOutcome> ModifyJWTAuthenticatorOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyJWTAuthenticatorRequest&, ModifyJWTAuthenticatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJWTAuthenticatorAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTopicResponse> ModifyTopicOutcome;
                typedef std::future<ModifyTopicOutcome> ModifyTopicOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyTopicRequest&, ModifyTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserResponse> ModifyUserOutcome;
                typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyUserRequest&, ModifyUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishMessageResponse> PublishMessageOutcome;
                typedef std::future<PublishMessageOutcome> PublishMessageOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::PublishMessageRequest&, PublishMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterCaCertificateResponse> RegisterCaCertificateOutcome;
                typedef std::future<RegisterCaCertificateOutcome> RegisterCaCertificateOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::RegisterCaCertificateRequest&, RegisterCaCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterCaCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterDeviceCertificateResponse> RegisterDeviceCertificateOutcome;
                typedef std::future<RegisterDeviceCertificateOutcome> RegisterDeviceCertificateOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::RegisterDeviceCertificateRequest&, RegisterDeviceCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDeviceCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::RevokedDeviceCertificateResponse> RevokedDeviceCertificateOutcome;
                typedef std::future<RevokedDeviceCertificateOutcome> RevokedDeviceCertificateOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::RevokedDeviceCertificateRequest&, RevokedDeviceCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevokedDeviceCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAuthorizationPolicyPriorityResponse> UpdateAuthorizationPolicyPriorityOutcome;
                typedef std::future<UpdateAuthorizationPolicyPriorityOutcome> UpdateAuthorizationPolicyPriorityOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::UpdateAuthorizationPolicyPriorityRequest&, UpdateAuthorizationPolicyPriorityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAuthorizationPolicyPriorityAsyncHandler;



                /**
                 *激活Ca证书
                 * @param req ActivateCaCertificateRequest
                 * @return ActivateCaCertificateOutcome
                 */
                ActivateCaCertificateOutcome ActivateCaCertificate(const Model::ActivateCaCertificateRequest &request);
                void ActivateCaCertificateAsync(const Model::ActivateCaCertificateRequest& request, const ActivateCaCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActivateCaCertificateOutcomeCallable ActivateCaCertificateCallable(const Model::ActivateCaCertificateRequest& request);

                /**
                 *生效设备证书
                 * @param req ActivateDeviceCertificateRequest
                 * @return ActivateDeviceCertificateOutcome
                 */
                ActivateDeviceCertificateOutcome ActivateDeviceCertificate(const Model::ActivateDeviceCertificateRequest &request);
                void ActivateDeviceCertificateAsync(const Model::ActivateDeviceCertificateRequest& request, const ActivateDeviceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActivateDeviceCertificateOutcomeCallable ActivateDeviceCertificateCallable(const Model::ActivateDeviceCertificateRequest& request);

                /**
                 *申请ca注册码
                 * @param req ApplyRegistrationCodeRequest
                 * @return ApplyRegistrationCodeOutcome
                 */
                ApplyRegistrationCodeOutcome ApplyRegistrationCode(const Model::ApplyRegistrationCodeRequest &request);
                void ApplyRegistrationCodeAsync(const Model::ApplyRegistrationCodeRequest& request, const ApplyRegistrationCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyRegistrationCodeOutcomeCallable ApplyRegistrationCodeCallable(const Model::ApplyRegistrationCodeRequest& request);

                /**
                 *创建MQTT实例的性能测试任务
                 * @param req CreateAuthorizationPolicyRequest
                 * @return CreateAuthorizationPolicyOutcome
                 */
                CreateAuthorizationPolicyOutcome CreateAuthorizationPolicy(const Model::CreateAuthorizationPolicyRequest &request);
                void CreateAuthorizationPolicyAsync(const Model::CreateAuthorizationPolicyRequest& request, const CreateAuthorizationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuthorizationPolicyOutcomeCallable CreateAuthorizationPolicyCallable(const Model::CreateAuthorizationPolicyRequest& request);

                /**
                 *创建一个HTTP的认证器
                 * @param req CreateHttpAuthenticatorRequest
                 * @return CreateHttpAuthenticatorOutcome
                 */
                CreateHttpAuthenticatorOutcome CreateHttpAuthenticator(const Model::CreateHttpAuthenticatorRequest &request);
                void CreateHttpAuthenticatorAsync(const Model::CreateHttpAuthenticatorRequest& request, const CreateHttpAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHttpAuthenticatorOutcomeCallable CreateHttpAuthenticatorCallable(const Model::CreateHttpAuthenticatorRequest& request);

                /**
                 *为MQTT实例创建公网接入点，未开启公网的集群可调用。
                 * @param req CreateInsPublicEndpointRequest
                 * @return CreateInsPublicEndpointOutcome
                 */
                CreateInsPublicEndpointOutcome CreateInsPublicEndpoint(const Model::CreateInsPublicEndpointRequest &request);
                void CreateInsPublicEndpointAsync(const Model::CreateInsPublicEndpointRequest& request, const CreateInsPublicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInsPublicEndpointOutcomeCallable CreateInsPublicEndpointCallable(const Model::CreateInsPublicEndpointRequest& request);

                /**
                 *购买新的MQTT实例
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

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
                 *添加mqtt角色
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *失效Ca证书
                 * @param req DeactivateCaCertificateRequest
                 * @return DeactivateCaCertificateOutcome
                 */
                DeactivateCaCertificateOutcome DeactivateCaCertificate(const Model::DeactivateCaCertificateRequest &request);
                void DeactivateCaCertificateAsync(const Model::DeactivateCaCertificateRequest& request, const DeactivateCaCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeactivateCaCertificateOutcomeCallable DeactivateCaCertificateCallable(const Model::DeactivateCaCertificateRequest& request);

                /**
                 *失效Ca证书
                 * @param req DeactivateDeviceCertificateRequest
                 * @return DeactivateDeviceCertificateOutcome
                 */
                DeactivateDeviceCertificateOutcome DeactivateDeviceCertificate(const Model::DeactivateDeviceCertificateRequest &request);
                void DeactivateDeviceCertificateAsync(const Model::DeactivateDeviceCertificateRequest& request, const DeactivateDeviceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeactivateDeviceCertificateOutcomeCallable DeactivateDeviceCertificateCallable(const Model::DeactivateDeviceCertificateRequest& request);

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
                 *删除Ca证书
                 * @param req DeleteCaCertificateRequest
                 * @return DeleteCaCertificateOutcome
                 */
                DeleteCaCertificateOutcome DeleteCaCertificate(const Model::DeleteCaCertificateRequest &request);
                void DeleteCaCertificateAsync(const Model::DeleteCaCertificateRequest& request, const DeleteCaCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCaCertificateOutcomeCallable DeleteCaCertificateCallable(const Model::DeleteCaCertificateRequest& request);

                /**
                 *删除设备证书
                 * @param req DeleteDeviceCertificateRequest
                 * @return DeleteDeviceCertificateOutcome
                 */
                DeleteDeviceCertificateOutcome DeleteDeviceCertificate(const Model::DeleteDeviceCertificateRequest &request);
                void DeleteDeviceCertificateAsync(const Model::DeleteDeviceCertificateRequest& request, const DeleteDeviceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceCertificateOutcomeCallable DeleteDeviceCertificateCallable(const Model::DeleteDeviceCertificateRequest& request);

                /**
                 *删除MQTT实例的公网接入点
                 * @param req DeleteInsPublicEndpointRequest
                 * @return DeleteInsPublicEndpointOutcome
                 */
                DeleteInsPublicEndpointOutcome DeleteInsPublicEndpoint(const Model::DeleteInsPublicEndpointRequest &request);
                void DeleteInsPublicEndpointAsync(const Model::DeleteInsPublicEndpointRequest& request, const DeleteInsPublicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInsPublicEndpointOutcomeCallable DeleteInsPublicEndpointCallable(const Model::DeleteInsPublicEndpointRequest& request);

                /**
                 *删除MQTT实例
                 * @param req DeleteInstanceRequest
                 * @return DeleteInstanceOutcome
                 */
                DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest &request);
                void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request);

                /**
                 *删除MQTT主题
                 * @param req DeleteTopicRequest
                 * @return DeleteTopicOutcome
                 */
                DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest &request);
                void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request);

                /**
                 *删除MQTT访问用户
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

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
                 *查询Ca证书详情接口
                 * @param req DescribeCaCertificateRequest
                 * @return DescribeCaCertificateOutcome
                 */
                DescribeCaCertificateOutcome DescribeCaCertificate(const Model::DescribeCaCertificateRequest &request);
                void DescribeCaCertificateAsync(const Model::DescribeCaCertificateRequest& request, const DescribeCaCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCaCertificateOutcomeCallable DescribeCaCertificateCallable(const Model::DescribeCaCertificateRequest& request);

                /**
                 *查询集群下的ca证书信息
                 * @param req DescribeCaCertificatesRequest
                 * @return DescribeCaCertificatesOutcome
                 */
                DescribeCaCertificatesOutcome DescribeCaCertificates(const Model::DescribeCaCertificatesRequest &request);
                void DescribeCaCertificatesAsync(const Model::DescribeCaCertificatesRequest& request, const DescribeCaCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCaCertificatesOutcomeCallable DescribeCaCertificatesCallable(const Model::DescribeCaCertificatesRequest& request);

                /**
                 *查询 MQTT 客户端详情
                 * @param req DescribeClientListRequest
                 * @return DescribeClientListOutcome
                 */
                DescribeClientListOutcome DescribeClientList(const Model::DescribeClientListRequest &request);
                void DescribeClientListAsync(const Model::DescribeClientListRequest& request, const DescribeClientListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientListOutcomeCallable DescribeClientListCallable(const Model::DescribeClientListRequest& request);

                /**
                 *查询设备证书详情接口
                 * @param req DescribeDeviceCertificateRequest
                 * @return DescribeDeviceCertificateOutcome
                 */
                DescribeDeviceCertificateOutcome DescribeDeviceCertificate(const Model::DescribeDeviceCertificateRequest &request);
                void DescribeDeviceCertificateAsync(const Model::DescribeDeviceCertificateRequest& request, const DescribeDeviceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceCertificateOutcomeCallable DescribeDeviceCertificateCallable(const Model::DescribeDeviceCertificateRequest& request);

                /**
                 *分页查询设备证书
                 * @param req DescribeDeviceCertificatesRequest
                 * @return DescribeDeviceCertificatesOutcome
                 */
                DescribeDeviceCertificatesOutcome DescribeDeviceCertificates(const Model::DescribeDeviceCertificatesRequest &request);
                void DescribeDeviceCertificatesAsync(const Model::DescribeDeviceCertificatesRequest& request, const DescribeDeviceCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceCertificatesOutcomeCallable DescribeDeviceCertificatesCallable(const Model::DescribeDeviceCertificatesRequest& request);

                /**
                 *查询MQTT实例公网接入点
                 * @param req DescribeInsPublicEndpointsRequest
                 * @return DescribeInsPublicEndpointsOutcome
                 */
                DescribeInsPublicEndpointsOutcome DescribeInsPublicEndpoints(const Model::DescribeInsPublicEndpointsRequest &request);
                void DescribeInsPublicEndpointsAsync(const Model::DescribeInsPublicEndpointsRequest& request, const DescribeInsPublicEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInsPublicEndpointsOutcomeCallable DescribeInsPublicEndpointsCallable(const Model::DescribeInsPublicEndpointsRequest& request);

                /**
                 *查询MQTT实例公网接入点
                 * @param req DescribeInsVPCEndpointsRequest
                 * @return DescribeInsVPCEndpointsOutcome
                 */
                DescribeInsVPCEndpointsOutcome DescribeInsVPCEndpoints(const Model::DescribeInsVPCEndpointsRequest &request);
                void DescribeInsVPCEndpointsAsync(const Model::DescribeInsVPCEndpointsRequest& request, const DescribeInsVPCEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInsVPCEndpointsOutcomeCallable DescribeInsVPCEndpointsCallable(const Model::DescribeInsVPCEndpointsRequest& request);

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
3. InstanceStatus，实例状态查询，支持多选

当使用TagFilters查询时，Filters参数失效。
                 * @param req DescribeInstanceListRequest
                 * @return DescribeInstanceListOutcome
                 */
                DescribeInstanceListOutcome DescribeInstanceList(const Model::DescribeInstanceListRequest &request);
                void DescribeInstanceListAsync(const Model::DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceListOutcomeCallable DescribeInstanceListCallable(const Model::DescribeInstanceListRequest& request);

                /**
                 *根据订阅查询消息
                 * @param req DescribeMessageByTopicRequest
                 * @return DescribeMessageByTopicOutcome
                 */
                DescribeMessageByTopicOutcome DescribeMessageByTopic(const Model::DescribeMessageByTopicRequest &request);
                void DescribeMessageByTopicAsync(const Model::DescribeMessageByTopicRequest& request, const DescribeMessageByTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageByTopicOutcomeCallable DescribeMessageByTopicCallable(const Model::DescribeMessageByTopicRequest& request);

                /**
                 *根据一级Topic查询消息列表
                 * @param req DescribeMessageListRequest
                 * @return DescribeMessageListOutcome
                 */
                DescribeMessageListOutcome DescribeMessageList(const Model::DescribeMessageListRequest &request);
                void DescribeMessageListAsync(const Model::DescribeMessageListRequest& request, const DescribeMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageListOutcomeCallable DescribeMessageListCallable(const Model::DescribeMessageListRequest& request);

                /**
                 *获取产品售卖规格
                 * @param req DescribeProductSKUListRequest
                 * @return DescribeProductSKUListOutcome
                 */
                DescribeProductSKUListOutcome DescribeProductSKUList(const Model::DescribeProductSKUListRequest &request);
                void DescribeProductSKUListAsync(const Model::DescribeProductSKUListRequest& request, const DescribeProductSKUListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductSKUListOutcomeCallable DescribeProductSKUListCallable(const Model::DescribeProductSKUListRequest& request);

                /**
                 *查询共享订阅消息堆积量
                 * @param req DescribeSharedSubscriptionLagRequest
                 * @return DescribeSharedSubscriptionLagOutcome
                 */
                DescribeSharedSubscriptionLagOutcome DescribeSharedSubscriptionLag(const Model::DescribeSharedSubscriptionLagRequest &request);
                void DescribeSharedSubscriptionLagAsync(const Model::DescribeSharedSubscriptionLagRequest& request, const DescribeSharedSubscriptionLagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSharedSubscriptionLagOutcomeCallable DescribeSharedSubscriptionLagCallable(const Model::DescribeSharedSubscriptionLagRequest& request);

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
                 *查询用户列表，Filter参数使用说明如下：

1. Username，用户名称模糊搜索
                 * @param req DescribeUserListRequest
                 * @return DescribeUserListOutcome
                 */
                DescribeUserListOutcome DescribeUserList(const Model::DescribeUserListRequest &request);
                void DescribeUserListAsync(const Model::DescribeUserListRequest& request, const DescribeUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserListOutcomeCallable DescribeUserListCallable(const Model::DescribeUserListRequest& request);

                /**
                 *修改策略规则，可参考 [数据面授权策略说明](https://cloud.tencent.com/document/product/1778/109715)
                 * @param req ModifyAuthorizationPolicyRequest
                 * @return ModifyAuthorizationPolicyOutcome
                 */
                ModifyAuthorizationPolicyOutcome ModifyAuthorizationPolicy(const Model::ModifyAuthorizationPolicyRequest &request);
                void ModifyAuthorizationPolicyAsync(const Model::ModifyAuthorizationPolicyRequest& request, const ModifyAuthorizationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAuthorizationPolicyOutcomeCallable ModifyAuthorizationPolicyCallable(const Model::ModifyAuthorizationPolicyRequest& request);

                /**
                 *修改MQTT HTTP 认证器
                 * @param req ModifyHttpAuthenticatorRequest
                 * @return ModifyHttpAuthenticatorOutcome
                 */
                ModifyHttpAuthenticatorOutcome ModifyHttpAuthenticator(const Model::ModifyHttpAuthenticatorRequest &request);
                void ModifyHttpAuthenticatorAsync(const Model::ModifyHttpAuthenticatorRequest& request, const ModifyHttpAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHttpAuthenticatorOutcomeCallable ModifyHttpAuthenticatorCallable(const Model::ModifyHttpAuthenticatorRequest& request);

                /**
                 *更新MQTT实例公网接入点
                 * @param req ModifyInsPublicEndpointRequest
                 * @return ModifyInsPublicEndpointOutcome
                 */
                ModifyInsPublicEndpointOutcome ModifyInsPublicEndpoint(const Model::ModifyInsPublicEndpointRequest &request);
                void ModifyInsPublicEndpointAsync(const Model::ModifyInsPublicEndpointRequest& request, const ModifyInsPublicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInsPublicEndpointOutcomeCallable ModifyInsPublicEndpointCallable(const Model::ModifyInsPublicEndpointRequest& request);

                /**
                 *修改实例属性，只有运行中的集群可以调用该接口进行变更配置。
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

                /**
                 *更新MQTT集群绑定证书
参数传空，则为删除证书
                 * @param req ModifyInstanceCertBindingRequest
                 * @return ModifyInstanceCertBindingOutcome
                 */
                ModifyInstanceCertBindingOutcome ModifyInstanceCertBinding(const Model::ModifyInstanceCertBindingRequest &request);
                void ModifyInstanceCertBindingAsync(const Model::ModifyInstanceCertBindingRequest& request, const ModifyInstanceCertBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceCertBindingOutcomeCallable ModifyInstanceCertBindingCallable(const Model::ModifyInstanceCertBindingRequest& request);

                /**
                 *修改MQTT JWKS 认证器，全量配置修改，需要提交完整的修改后配置。
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
                 *修改MQTT角色
                 * @param req ModifyUserRequest
                 * @return ModifyUserOutcome
                 */
                ModifyUserOutcome ModifyUser(const Model::ModifyUserRequest &request);
                void ModifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserOutcomeCallable ModifyUserCallable(const Model::ModifyUserRequest& request);

                /**
                 *发布 MQTT 消息到消息主题或客户端
                 * @param req PublishMessageRequest
                 * @return PublishMessageOutcome
                 */
                PublishMessageOutcome PublishMessage(const Model::PublishMessageRequest &request);
                void PublishMessageAsync(const Model::PublishMessageRequest& request, const PublishMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishMessageOutcomeCallable PublishMessageCallable(const Model::PublishMessageRequest& request);

                /**
                 *注册CA证书（仅一机一证场景支持），可参考 [自定义 X.509 证书实现 “一机一证”](https://cloud.tencent.com/document/product/1778/114817)
                 * @param req RegisterCaCertificateRequest
                 * @return RegisterCaCertificateOutcome
                 */
                RegisterCaCertificateOutcome RegisterCaCertificate(const Model::RegisterCaCertificateRequest &request);
                void RegisterCaCertificateAsync(const Model::RegisterCaCertificateRequest& request, const RegisterCaCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterCaCertificateOutcomeCallable RegisterCaCertificateCallable(const Model::RegisterCaCertificateRequest& request);

                /**
                 *注册设备证书（仅一机一证场景生效），可参考 [自定义 X.509 证书实现 “一机一证”](https://cloud.tencent.com/document/product/1778/114817#6cb39d46-efad-4220-8f11-2e7fab207bc8)
                 * @param req RegisterDeviceCertificateRequest
                 * @return RegisterDeviceCertificateOutcome
                 */
                RegisterDeviceCertificateOutcome RegisterDeviceCertificate(const Model::RegisterDeviceCertificateRequest &request);
                void RegisterDeviceCertificateAsync(const Model::RegisterDeviceCertificateRequest& request, const RegisterDeviceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterDeviceCertificateOutcomeCallable RegisterDeviceCertificateCallable(const Model::RegisterDeviceCertificateRequest& request);

                /**
                 *吊销设备证书
                 * @param req RevokedDeviceCertificateRequest
                 * @return RevokedDeviceCertificateOutcome
                 */
                RevokedDeviceCertificateOutcome RevokedDeviceCertificate(const Model::RevokedDeviceCertificateRequest &request);
                void RevokedDeviceCertificateAsync(const Model::RevokedDeviceCertificateRequest& request, const RevokedDeviceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevokedDeviceCertificateOutcomeCallable RevokedDeviceCertificateCallable(const Model::RevokedDeviceCertificateRequest& request);

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
