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

#ifndef TENCENTCLOUD_AS_V20180419_ASCLIENT_H_
#define TENCENTCLOUD_AS_V20180419_ASCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/as/v20180419/model/AttachInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/AttachInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/CompleteLifecycleActionRequest.h>
#include <tencentcloud/as/v20180419/model/CompleteLifecycleActionResponse.h>
#include <tencentcloud/as/v20180419/model/CreateAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/CreateAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/CreateLaunchConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/CreateLaunchConfigurationResponse.h>
#include <tencentcloud/as/v20180419/model/CreateLifecycleHookRequest.h>
#include <tencentcloud/as/v20180419/model/CreateLifecycleHookResponse.h>
#include <tencentcloud/as/v20180419/model/CreateNotificationConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/CreateNotificationConfigurationResponse.h>
#include <tencentcloud/as/v20180419/model/CreatePaiInstanceRequest.h>
#include <tencentcloud/as/v20180419/model/CreatePaiInstanceResponse.h>
#include <tencentcloud/as/v20180419/model/CreateScalingPolicyRequest.h>
#include <tencentcloud/as/v20180419/model/CreateScalingPolicyResponse.h>
#include <tencentcloud/as/v20180419/model/CreateScheduledActionRequest.h>
#include <tencentcloud/as/v20180419/model/CreateScheduledActionResponse.h>
#include <tencentcloud/as/v20180419/model/DeleteAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/DeleteAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/DeleteLaunchConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/DeleteLaunchConfigurationResponse.h>
#include <tencentcloud/as/v20180419/model/DeleteLifecycleHookRequest.h>
#include <tencentcloud/as/v20180419/model/DeleteLifecycleHookResponse.h>
#include <tencentcloud/as/v20180419/model/DeleteNotificationConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/DeleteNotificationConfigurationResponse.h>
#include <tencentcloud/as/v20180419/model/DeleteScalingPolicyRequest.h>
#include <tencentcloud/as/v20180419/model/DeleteScalingPolicyResponse.h>
#include <tencentcloud/as/v20180419/model/DeleteScheduledActionRequest.h>
#include <tencentcloud/as/v20180419/model/DeleteScheduledActionResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeAccountLimitsRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeAccountLimitsResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingActivitiesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingActivitiesResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingGroupsRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingGroupsResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeLaunchConfigurationsRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeLaunchConfigurationsResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeLifecycleHooksRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeLifecycleHooksResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeNotificationConfigurationsRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeNotificationConfigurationsResponse.h>
#include <tencentcloud/as/v20180419/model/DescribePaiInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribePaiInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeScalingPoliciesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeScalingPoliciesResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeScheduledActionsRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeScheduledActionsResponse.h>
#include <tencentcloud/as/v20180419/model/DetachInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/DetachInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/DisableAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/DisableAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/EnableAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/EnableAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/ExecuteScalingPolicyRequest.h>
#include <tencentcloud/as/v20180419/model/ExecuteScalingPolicyResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyDesiredCapacityRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyDesiredCapacityResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyLaunchConfigurationAttributesRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyLaunchConfigurationAttributesResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyLoadBalancersRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyLoadBalancersResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyNotificationConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyNotificationConfigurationResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyScalingPolicyRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyScalingPolicyResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyScheduledActionRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyScheduledActionResponse.h>
#include <tencentcloud/as/v20180419/model/PreviewPaiDomainNameRequest.h>
#include <tencentcloud/as/v20180419/model/PreviewPaiDomainNameResponse.h>
#include <tencentcloud/as/v20180419/model/RemoveInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/RemoveInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/SetInstancesProtectionRequest.h>
#include <tencentcloud/as/v20180419/model/SetInstancesProtectionResponse.h>
#include <tencentcloud/as/v20180419/model/UpgradeLaunchConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/UpgradeLaunchConfigurationResponse.h>
#include <tencentcloud/as/v20180419/model/UpgradeLifecycleHookRequest.h>
#include <tencentcloud/as/v20180419/model/UpgradeLifecycleHookResponse.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            class AsClient : public AbstractClient
            {
            public:
                AsClient(const Credential &credential, const std::string &region);
                AsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AttachInstancesResponse> AttachInstancesOutcome;
                typedef std::future<AttachInstancesOutcome> AttachInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::AttachInstancesRequest&, AttachInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachInstancesAsyncHandler;
                typedef Outcome<Error, Model::CompleteLifecycleActionResponse> CompleteLifecycleActionOutcome;
                typedef std::future<CompleteLifecycleActionOutcome> CompleteLifecycleActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CompleteLifecycleActionRequest&, CompleteLifecycleActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompleteLifecycleActionAsyncHandler;
                typedef Outcome<Error, Model::CreateAutoScalingGroupResponse> CreateAutoScalingGroupOutcome;
                typedef std::future<CreateAutoScalingGroupOutcome> CreateAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateAutoScalingGroupRequest&, CreateAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoScalingGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateLaunchConfigurationResponse> CreateLaunchConfigurationOutcome;
                typedef std::future<CreateLaunchConfigurationOutcome> CreateLaunchConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateLaunchConfigurationRequest&, CreateLaunchConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLaunchConfigurationAsyncHandler;
                typedef Outcome<Error, Model::CreateLifecycleHookResponse> CreateLifecycleHookOutcome;
                typedef std::future<CreateLifecycleHookOutcome> CreateLifecycleHookOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateLifecycleHookRequest&, CreateLifecycleHookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLifecycleHookAsyncHandler;
                typedef Outcome<Error, Model::CreateNotificationConfigurationResponse> CreateNotificationConfigurationOutcome;
                typedef std::future<CreateNotificationConfigurationOutcome> CreateNotificationConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateNotificationConfigurationRequest&, CreateNotificationConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotificationConfigurationAsyncHandler;
                typedef Outcome<Error, Model::CreatePaiInstanceResponse> CreatePaiInstanceOutcome;
                typedef std::future<CreatePaiInstanceOutcome> CreatePaiInstanceOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreatePaiInstanceRequest&, CreatePaiInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePaiInstanceAsyncHandler;
                typedef Outcome<Error, Model::CreateScalingPolicyResponse> CreateScalingPolicyOutcome;
                typedef std::future<CreateScalingPolicyOutcome> CreateScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateScalingPolicyRequest&, CreateScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingPolicyAsyncHandler;
                typedef Outcome<Error, Model::CreateScheduledActionResponse> CreateScheduledActionOutcome;
                typedef std::future<CreateScheduledActionOutcome> CreateScheduledActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateScheduledActionRequest&, CreateScheduledActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScheduledActionAsyncHandler;
                typedef Outcome<Error, Model::DeleteAutoScalingGroupResponse> DeleteAutoScalingGroupOutcome;
                typedef std::future<DeleteAutoScalingGroupOutcome> DeleteAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteAutoScalingGroupRequest&, DeleteAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoScalingGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteLaunchConfigurationResponse> DeleteLaunchConfigurationOutcome;
                typedef std::future<DeleteLaunchConfigurationOutcome> DeleteLaunchConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteLaunchConfigurationRequest&, DeleteLaunchConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLaunchConfigurationAsyncHandler;
                typedef Outcome<Error, Model::DeleteLifecycleHookResponse> DeleteLifecycleHookOutcome;
                typedef std::future<DeleteLifecycleHookOutcome> DeleteLifecycleHookOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteLifecycleHookRequest&, DeleteLifecycleHookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLifecycleHookAsyncHandler;
                typedef Outcome<Error, Model::DeleteNotificationConfigurationResponse> DeleteNotificationConfigurationOutcome;
                typedef std::future<DeleteNotificationConfigurationOutcome> DeleteNotificationConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteNotificationConfigurationRequest&, DeleteNotificationConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNotificationConfigurationAsyncHandler;
                typedef Outcome<Error, Model::DeleteScalingPolicyResponse> DeleteScalingPolicyOutcome;
                typedef std::future<DeleteScalingPolicyOutcome> DeleteScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteScalingPolicyRequest&, DeleteScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingPolicyAsyncHandler;
                typedef Outcome<Error, Model::DeleteScheduledActionResponse> DeleteScheduledActionOutcome;
                typedef std::future<DeleteScheduledActionOutcome> DeleteScheduledActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteScheduledActionRequest&, DeleteScheduledActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScheduledActionAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccountLimitsResponse> DescribeAccountLimitsOutcome;
                typedef std::future<DescribeAccountLimitsOutcome> DescribeAccountLimitsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAccountLimitsRequest&, DescribeAccountLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountLimitsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAutoScalingActivitiesResponse> DescribeAutoScalingActivitiesOutcome;
                typedef std::future<DescribeAutoScalingActivitiesOutcome> DescribeAutoScalingActivitiesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingActivitiesRequest&, DescribeAutoScalingActivitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingActivitiesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAutoScalingGroupsResponse> DescribeAutoScalingGroupsOutcome;
                typedef std::future<DescribeAutoScalingGroupsOutcome> DescribeAutoScalingGroupsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingGroupsRequest&, DescribeAutoScalingGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAutoScalingInstancesResponse> DescribeAutoScalingInstancesOutcome;
                typedef std::future<DescribeAutoScalingInstancesOutcome> DescribeAutoScalingInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingInstancesRequest&, DescribeAutoScalingInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeLaunchConfigurationsResponse> DescribeLaunchConfigurationsOutcome;
                typedef std::future<DescribeLaunchConfigurationsOutcome> DescribeLaunchConfigurationsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeLaunchConfigurationsRequest&, DescribeLaunchConfigurationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLaunchConfigurationsAsyncHandler;
                typedef Outcome<Error, Model::DescribeLifecycleHooksResponse> DescribeLifecycleHooksOutcome;
                typedef std::future<DescribeLifecycleHooksOutcome> DescribeLifecycleHooksOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeLifecycleHooksRequest&, DescribeLifecycleHooksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLifecycleHooksAsyncHandler;
                typedef Outcome<Error, Model::DescribeNotificationConfigurationsResponse> DescribeNotificationConfigurationsOutcome;
                typedef std::future<DescribeNotificationConfigurationsOutcome> DescribeNotificationConfigurationsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeNotificationConfigurationsRequest&, DescribeNotificationConfigurationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotificationConfigurationsAsyncHandler;
                typedef Outcome<Error, Model::DescribePaiInstancesResponse> DescribePaiInstancesOutcome;
                typedef std::future<DescribePaiInstancesOutcome> DescribePaiInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribePaiInstancesRequest&, DescribePaiInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePaiInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeScalingPoliciesResponse> DescribeScalingPoliciesOutcome;
                typedef std::future<DescribeScalingPoliciesOutcome> DescribeScalingPoliciesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeScalingPoliciesRequest&, DescribeScalingPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingPoliciesAsyncHandler;
                typedef Outcome<Error, Model::DescribeScheduledActionsResponse> DescribeScheduledActionsOutcome;
                typedef std::future<DescribeScheduledActionsOutcome> DescribeScheduledActionsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeScheduledActionsRequest&, DescribeScheduledActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScheduledActionsAsyncHandler;
                typedef Outcome<Error, Model::DetachInstancesResponse> DetachInstancesOutcome;
                typedef std::future<DetachInstancesOutcome> DetachInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DetachInstancesRequest&, DetachInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachInstancesAsyncHandler;
                typedef Outcome<Error, Model::DisableAutoScalingGroupResponse> DisableAutoScalingGroupOutcome;
                typedef std::future<DisableAutoScalingGroupOutcome> DisableAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DisableAutoScalingGroupRequest&, DisableAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableAutoScalingGroupAsyncHandler;
                typedef Outcome<Error, Model::EnableAutoScalingGroupResponse> EnableAutoScalingGroupOutcome;
                typedef std::future<EnableAutoScalingGroupOutcome> EnableAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::EnableAutoScalingGroupRequest&, EnableAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableAutoScalingGroupAsyncHandler;
                typedef Outcome<Error, Model::ExecuteScalingPolicyResponse> ExecuteScalingPolicyOutcome;
                typedef std::future<ExecuteScalingPolicyOutcome> ExecuteScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ExecuteScalingPolicyRequest&, ExecuteScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteScalingPolicyAsyncHandler;
                typedef Outcome<Error, Model::ModifyAutoScalingGroupResponse> ModifyAutoScalingGroupOutcome;
                typedef std::future<ModifyAutoScalingGroupOutcome> ModifyAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyAutoScalingGroupRequest&, ModifyAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoScalingGroupAsyncHandler;
                typedef Outcome<Error, Model::ModifyDesiredCapacityResponse> ModifyDesiredCapacityOutcome;
                typedef std::future<ModifyDesiredCapacityOutcome> ModifyDesiredCapacityOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyDesiredCapacityRequest&, ModifyDesiredCapacityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDesiredCapacityAsyncHandler;
                typedef Outcome<Error, Model::ModifyLaunchConfigurationAttributesResponse> ModifyLaunchConfigurationAttributesOutcome;
                typedef std::future<ModifyLaunchConfigurationAttributesOutcome> ModifyLaunchConfigurationAttributesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyLaunchConfigurationAttributesRequest&, ModifyLaunchConfigurationAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLaunchConfigurationAttributesAsyncHandler;
                typedef Outcome<Error, Model::ModifyLoadBalancersResponse> ModifyLoadBalancersOutcome;
                typedef std::future<ModifyLoadBalancersOutcome> ModifyLoadBalancersOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyLoadBalancersRequest&, ModifyLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancersAsyncHandler;
                typedef Outcome<Error, Model::ModifyNotificationConfigurationResponse> ModifyNotificationConfigurationOutcome;
                typedef std::future<ModifyNotificationConfigurationOutcome> ModifyNotificationConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyNotificationConfigurationRequest&, ModifyNotificationConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotificationConfigurationAsyncHandler;
                typedef Outcome<Error, Model::ModifyScalingPolicyResponse> ModifyScalingPolicyOutcome;
                typedef std::future<ModifyScalingPolicyOutcome> ModifyScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyScalingPolicyRequest&, ModifyScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingPolicyAsyncHandler;
                typedef Outcome<Error, Model::ModifyScheduledActionResponse> ModifyScheduledActionOutcome;
                typedef std::future<ModifyScheduledActionOutcome> ModifyScheduledActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyScheduledActionRequest&, ModifyScheduledActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScheduledActionAsyncHandler;
                typedef Outcome<Error, Model::PreviewPaiDomainNameResponse> PreviewPaiDomainNameOutcome;
                typedef std::future<PreviewPaiDomainNameOutcome> PreviewPaiDomainNameOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::PreviewPaiDomainNameRequest&, PreviewPaiDomainNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PreviewPaiDomainNameAsyncHandler;
                typedef Outcome<Error, Model::RemoveInstancesResponse> RemoveInstancesOutcome;
                typedef std::future<RemoveInstancesOutcome> RemoveInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::RemoveInstancesRequest&, RemoveInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveInstancesAsyncHandler;
                typedef Outcome<Error, Model::SetInstancesProtectionResponse> SetInstancesProtectionOutcome;
                typedef std::future<SetInstancesProtectionOutcome> SetInstancesProtectionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::SetInstancesProtectionRequest&, SetInstancesProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetInstancesProtectionAsyncHandler;
                typedef Outcome<Error, Model::UpgradeLaunchConfigurationResponse> UpgradeLaunchConfigurationOutcome;
                typedef std::future<UpgradeLaunchConfigurationOutcome> UpgradeLaunchConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::UpgradeLaunchConfigurationRequest&, UpgradeLaunchConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeLaunchConfigurationAsyncHandler;
                typedef Outcome<Error, Model::UpgradeLifecycleHookResponse> UpgradeLifecycleHookOutcome;
                typedef std::future<UpgradeLifecycleHookOutcome> UpgradeLifecycleHookOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::UpgradeLifecycleHookRequest&, UpgradeLifecycleHookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeLifecycleHookAsyncHandler;



                /**
                 *本接口（AttachInstances）用于将 CVM 实例添加到伸缩组。

                 * @param req AttachInstancesRequest
                 * @return AttachInstancesOutcome
                 */
                AttachInstancesOutcome AttachInstances(const Model::AttachInstancesRequest &request);
                void AttachInstancesAsync(const Model::AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachInstancesOutcomeCallable AttachInstancesCallable(const Model::AttachInstancesRequest& request);

                /**
                 *本接口（CompleteLifecycleAction）用于完成生命周期动作。

* 用户通过调用本接口，指定一个具体的生命周期挂钩的结果（“CONITNUE”或者“ABANDON”）。如果一直不调用本接口，则生命周期挂钩会在超时后按照“DefaultResult”进行处理。

                 * @param req CompleteLifecycleActionRequest
                 * @return CompleteLifecycleActionOutcome
                 */
                CompleteLifecycleActionOutcome CompleteLifecycleAction(const Model::CompleteLifecycleActionRequest &request);
                void CompleteLifecycleActionAsync(const Model::CompleteLifecycleActionRequest& request, const CompleteLifecycleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompleteLifecycleActionOutcomeCallable CompleteLifecycleActionCallable(const Model::CompleteLifecycleActionRequest& request);

                /**
                 *本接口（CreateAutoScalingGroup）用于创建伸缩组
                 * @param req CreateAutoScalingGroupRequest
                 * @return CreateAutoScalingGroupOutcome
                 */
                CreateAutoScalingGroupOutcome CreateAutoScalingGroup(const Model::CreateAutoScalingGroupRequest &request);
                void CreateAutoScalingGroupAsync(const Model::CreateAutoScalingGroupRequest& request, const CreateAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAutoScalingGroupOutcomeCallable CreateAutoScalingGroupCallable(const Model::CreateAutoScalingGroupRequest& request);

                /**
                 *本接口（CreateLaunchConfiguration）用于创建新的启动配置。

* 启动配置，可以通过 `ModifyLaunchConfigurationAttributes` 修改少量字段。如需使用新的启动配置，建议重新创建启动配置。

* 每个项目最多只能创建20个启动配置，详见[使用限制](https://cloud.tencent.com/document/product/377/3120)。

                 * @param req CreateLaunchConfigurationRequest
                 * @return CreateLaunchConfigurationOutcome
                 */
                CreateLaunchConfigurationOutcome CreateLaunchConfiguration(const Model::CreateLaunchConfigurationRequest &request);
                void CreateLaunchConfigurationAsync(const Model::CreateLaunchConfigurationRequest& request, const CreateLaunchConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLaunchConfigurationOutcomeCallable CreateLaunchConfigurationCallable(const Model::CreateLaunchConfigurationRequest& request);

                /**
                 *本接口（CreateLifecycleHook）用于创建生命周期挂钩。

* 您可以为生命周期挂钩配置消息通知，弹性伸缩会通知您的CMQ消息队列，通知内容形如：

```
{
	"Service": "Tencent Cloud Auto Scaling",
	"Time": "2019-03-14T10:15:11Z",
	"AppId": "1251783334",
	"ActivityId": "asa-fznnvrja",
	"AutoScalingGroupId": "asg-rrrrtttt",
	"LifecycleHookId": "ash-xxxxyyyy",
	"LifecycleHookName": "my-hook",
	"LifecycleActionToken": "3080e1c9-0efe-4dd7-ad3b-90cd6618298f",
	"InstanceId": "ins-aaaabbbb",
	"LifecycleTransition": "INSTANCE_LAUNCHING",
	"NotificationMetadata": ""
}
```
                 * @param req CreateLifecycleHookRequest
                 * @return CreateLifecycleHookOutcome
                 */
                CreateLifecycleHookOutcome CreateLifecycleHook(const Model::CreateLifecycleHookRequest &request);
                void CreateLifecycleHookAsync(const Model::CreateLifecycleHookRequest& request, const CreateLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLifecycleHookOutcomeCallable CreateLifecycleHookCallable(const Model::CreateLifecycleHookRequest& request);

                /**
                 *本接口（CreateNotificationConfiguration）用于创建通知。
                 * @param req CreateNotificationConfigurationRequest
                 * @return CreateNotificationConfigurationOutcome
                 */
                CreateNotificationConfigurationOutcome CreateNotificationConfiguration(const Model::CreateNotificationConfigurationRequest &request);
                void CreateNotificationConfigurationAsync(const Model::CreateNotificationConfigurationRequest& request, const CreateNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNotificationConfigurationOutcomeCallable CreateNotificationConfigurationCallable(const Model::CreateNotificationConfigurationRequest& request);

                /**
                 *本接口 (CreatePaiInstance) 用于创建一个指定配置的PAI实例。
                 * @param req CreatePaiInstanceRequest
                 * @return CreatePaiInstanceOutcome
                 */
                CreatePaiInstanceOutcome CreatePaiInstance(const Model::CreatePaiInstanceRequest &request);
                void CreatePaiInstanceAsync(const Model::CreatePaiInstanceRequest& request, const CreatePaiInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePaiInstanceOutcomeCallable CreatePaiInstanceCallable(const Model::CreatePaiInstanceRequest& request);

                /**
                 *本接口（CreateScalingPolicy）用于创建告警触发策略。
                 * @param req CreateScalingPolicyRequest
                 * @return CreateScalingPolicyOutcome
                 */
                CreateScalingPolicyOutcome CreateScalingPolicy(const Model::CreateScalingPolicyRequest &request);
                void CreateScalingPolicyAsync(const Model::CreateScalingPolicyRequest& request, const CreateScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScalingPolicyOutcomeCallable CreateScalingPolicyCallable(const Model::CreateScalingPolicyRequest& request);

                /**
                 *本接口（CreateScheduledAction）用于创建定时任务。
                 * @param req CreateScheduledActionRequest
                 * @return CreateScheduledActionOutcome
                 */
                CreateScheduledActionOutcome CreateScheduledAction(const Model::CreateScheduledActionRequest &request);
                void CreateScheduledActionAsync(const Model::CreateScheduledActionRequest& request, const CreateScheduledActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScheduledActionOutcomeCallable CreateScheduledActionCallable(const Model::CreateScheduledActionRequest& request);

                /**
                 *本接口（DeleteAutoScalingGroup）用于删除指定伸缩组，删除前提是伸缩组内无实例且当前未在执行伸缩活动。
                 * @param req DeleteAutoScalingGroupRequest
                 * @return DeleteAutoScalingGroupOutcome
                 */
                DeleteAutoScalingGroupOutcome DeleteAutoScalingGroup(const Model::DeleteAutoScalingGroupRequest &request);
                void DeleteAutoScalingGroupAsync(const Model::DeleteAutoScalingGroupRequest& request, const DeleteAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAutoScalingGroupOutcomeCallable DeleteAutoScalingGroupCallable(const Model::DeleteAutoScalingGroupRequest& request);

                /**
                 *本接口（DeleteLaunchConfiguration）用于删除启动配置。

* 若启动配置在伸缩组中属于生效状态，则该启动配置不允许删除。

                 * @param req DeleteLaunchConfigurationRequest
                 * @return DeleteLaunchConfigurationOutcome
                 */
                DeleteLaunchConfigurationOutcome DeleteLaunchConfiguration(const Model::DeleteLaunchConfigurationRequest &request);
                void DeleteLaunchConfigurationAsync(const Model::DeleteLaunchConfigurationRequest& request, const DeleteLaunchConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLaunchConfigurationOutcomeCallable DeleteLaunchConfigurationCallable(const Model::DeleteLaunchConfigurationRequest& request);

                /**
                 *本接口（DeleteLifecycleHook）用于删除生命周期挂钩。
                 * @param req DeleteLifecycleHookRequest
                 * @return DeleteLifecycleHookOutcome
                 */
                DeleteLifecycleHookOutcome DeleteLifecycleHook(const Model::DeleteLifecycleHookRequest &request);
                void DeleteLifecycleHookAsync(const Model::DeleteLifecycleHookRequest& request, const DeleteLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLifecycleHookOutcomeCallable DeleteLifecycleHookCallable(const Model::DeleteLifecycleHookRequest& request);

                /**
                 *本接口（DeleteNotificationConfiguration）用于删除特定的通知。
                 * @param req DeleteNotificationConfigurationRequest
                 * @return DeleteNotificationConfigurationOutcome
                 */
                DeleteNotificationConfigurationOutcome DeleteNotificationConfiguration(const Model::DeleteNotificationConfigurationRequest &request);
                void DeleteNotificationConfigurationAsync(const Model::DeleteNotificationConfigurationRequest& request, const DeleteNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNotificationConfigurationOutcomeCallable DeleteNotificationConfigurationCallable(const Model::DeleteNotificationConfigurationRequest& request);

                /**
                 *本接口（DeleteScalingPolicy）用于删除告警触发策略。
                 * @param req DeleteScalingPolicyRequest
                 * @return DeleteScalingPolicyOutcome
                 */
                DeleteScalingPolicyOutcome DeleteScalingPolicy(const Model::DeleteScalingPolicyRequest &request);
                void DeleteScalingPolicyAsync(const Model::DeleteScalingPolicyRequest& request, const DeleteScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScalingPolicyOutcomeCallable DeleteScalingPolicyCallable(const Model::DeleteScalingPolicyRequest& request);

                /**
                 *本接口（DeleteScheduledAction）用于删除特定的定时任务。
                 * @param req DeleteScheduledActionRequest
                 * @return DeleteScheduledActionOutcome
                 */
                DeleteScheduledActionOutcome DeleteScheduledAction(const Model::DeleteScheduledActionRequest &request);
                void DeleteScheduledActionAsync(const Model::DeleteScheduledActionRequest& request, const DeleteScheduledActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScheduledActionOutcomeCallable DeleteScheduledActionCallable(const Model::DeleteScheduledActionRequest& request);

                /**
                 *本接口（DescribeAccountLimits）用于查询用户账户在弹性伸缩中的资源限制。
                 * @param req DescribeAccountLimitsRequest
                 * @return DescribeAccountLimitsOutcome
                 */
                DescribeAccountLimitsOutcome DescribeAccountLimits(const Model::DescribeAccountLimitsRequest &request);
                void DescribeAccountLimitsAsync(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const Model::DescribeAccountLimitsRequest& request);

                /**
                 *本接口（DescribeAutoScalingActivities）用于查询伸缩组的伸缩活动记录。
                 * @param req DescribeAutoScalingActivitiesRequest
                 * @return DescribeAutoScalingActivitiesOutcome
                 */
                DescribeAutoScalingActivitiesOutcome DescribeAutoScalingActivities(const Model::DescribeAutoScalingActivitiesRequest &request);
                void DescribeAutoScalingActivitiesAsync(const Model::DescribeAutoScalingActivitiesRequest& request, const DescribeAutoScalingActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScalingActivitiesOutcomeCallable DescribeAutoScalingActivitiesCallable(const Model::DescribeAutoScalingActivitiesRequest& request);

                /**
                 *本接口（DescribeAutoScalingGroups）用于查询伸缩组信息。

* 可以根据伸缩组ID、伸缩组名称或者启动配置ID等信息来查询伸缩组的详细信息。过滤信息详细请见过滤器`Filter`。
* 如果参数为空，返回当前用户一定数量（`Limit`所指定的数量，默认为20）的伸缩组。
                 * @param req DescribeAutoScalingGroupsRequest
                 * @return DescribeAutoScalingGroupsOutcome
                 */
                DescribeAutoScalingGroupsOutcome DescribeAutoScalingGroups(const Model::DescribeAutoScalingGroupsRequest &request);
                void DescribeAutoScalingGroupsAsync(const Model::DescribeAutoScalingGroupsRequest& request, const DescribeAutoScalingGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScalingGroupsOutcomeCallable DescribeAutoScalingGroupsCallable(const Model::DescribeAutoScalingGroupsRequest& request);

                /**
                 *本接口（DescribeAutoScalingInstances）用于查询弹性伸缩关联实例的信息。

* 可以根据实例ID、伸缩组ID等信息来查询实例的详细信息。过滤信息详细请见过滤器`Filter`。
* 如果参数为空，返回当前用户一定数量（`Limit`所指定的数量，默认为20）的实例。
                 * @param req DescribeAutoScalingInstancesRequest
                 * @return DescribeAutoScalingInstancesOutcome
                 */
                DescribeAutoScalingInstancesOutcome DescribeAutoScalingInstances(const Model::DescribeAutoScalingInstancesRequest &request);
                void DescribeAutoScalingInstancesAsync(const Model::DescribeAutoScalingInstancesRequest& request, const DescribeAutoScalingInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScalingInstancesOutcomeCallable DescribeAutoScalingInstancesCallable(const Model::DescribeAutoScalingInstancesRequest& request);

                /**
                 *本接口（DescribeLaunchConfigurations）用于查询启动配置的信息。

* 可以根据启动配置ID、启动配置名称等信息来查询启动配置的详细信息。过滤信息详细请见过滤器`Filter`。
* 如果参数为空，返回当前用户一定数量（`Limit`所指定的数量，默认为20）的启动配置。
                 * @param req DescribeLaunchConfigurationsRequest
                 * @return DescribeLaunchConfigurationsOutcome
                 */
                DescribeLaunchConfigurationsOutcome DescribeLaunchConfigurations(const Model::DescribeLaunchConfigurationsRequest &request);
                void DescribeLaunchConfigurationsAsync(const Model::DescribeLaunchConfigurationsRequest& request, const DescribeLaunchConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLaunchConfigurationsOutcomeCallable DescribeLaunchConfigurationsCallable(const Model::DescribeLaunchConfigurationsRequest& request);

                /**
                 *本接口（DescribeLifecycleHooks）用于查询生命周期挂钩信息。

* 可以根据伸缩组ID、生命周期挂钩ID或者生命周期挂钩名称等信息来查询生命周期挂钩的详细信息。过滤信息详细请见过滤器`Filter`。
* 如果参数为空，返回当前用户一定数量（`Limit`所指定的数量，默认为20）的生命周期挂钩。
                 * @param req DescribeLifecycleHooksRequest
                 * @return DescribeLifecycleHooksOutcome
                 */
                DescribeLifecycleHooksOutcome DescribeLifecycleHooks(const Model::DescribeLifecycleHooksRequest &request);
                void DescribeLifecycleHooksAsync(const Model::DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLifecycleHooksOutcomeCallable DescribeLifecycleHooksCallable(const Model::DescribeLifecycleHooksRequest& request);

                /**
                 *本接口 (DescribeNotificationConfigurations) 用于查询一个或多个通知的详细信息。

可以根据通知ID、伸缩组ID等信息来查询通知的详细信息。过滤信息详细请见过滤器`Filter`。
如果参数为空，返回当前用户一定数量（Limit所指定的数量，默认为20）的通知。
                 * @param req DescribeNotificationConfigurationsRequest
                 * @return DescribeNotificationConfigurationsOutcome
                 */
                DescribeNotificationConfigurationsOutcome DescribeNotificationConfigurations(const Model::DescribeNotificationConfigurationsRequest &request);
                void DescribeNotificationConfigurationsAsync(const Model::DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotificationConfigurationsOutcomeCallable DescribeNotificationConfigurationsCallable(const Model::DescribeNotificationConfigurationsRequest& request);

                /**
                 *本接口（DescribePaiInstances）用于查询PAI实例信息。

* 可以根据实例ID、实例域名等信息来查询PAI实例的详细信息。过滤信息详细请见过滤器`Filter`。
* 如果参数为空，返回当前用户一定数量（`Limit`所指定的数量，默认为20）的PAI实例。
                 * @param req DescribePaiInstancesRequest
                 * @return DescribePaiInstancesOutcome
                 */
                DescribePaiInstancesOutcome DescribePaiInstances(const Model::DescribePaiInstancesRequest &request);
                void DescribePaiInstancesAsync(const Model::DescribePaiInstancesRequest& request, const DescribePaiInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePaiInstancesOutcomeCallable DescribePaiInstancesCallable(const Model::DescribePaiInstancesRequest& request);

                /**
                 *本接口（DescribeScalingPolicies）用于查询告警触发策略。
                 * @param req DescribeScalingPoliciesRequest
                 * @return DescribeScalingPoliciesOutcome
                 */
                DescribeScalingPoliciesOutcome DescribeScalingPolicies(const Model::DescribeScalingPoliciesRequest &request);
                void DescribeScalingPoliciesAsync(const Model::DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScalingPoliciesOutcomeCallable DescribeScalingPoliciesCallable(const Model::DescribeScalingPoliciesRequest& request);

                /**
                 *本接口 (DescribeScheduledActions) 用于查询一个或多个定时任务的详细信息。

* 可以根据定时任务ID、定时任务名称或者伸缩组ID等信息来查询定时任务的详细信息。过滤信息详细请见过滤器`Filter`。
* 如果参数为空，返回当前用户一定数量（Limit所指定的数量，默认为20）的定时任务。
                 * @param req DescribeScheduledActionsRequest
                 * @return DescribeScheduledActionsOutcome
                 */
                DescribeScheduledActionsOutcome DescribeScheduledActions(const Model::DescribeScheduledActionsRequest &request);
                void DescribeScheduledActionsAsync(const Model::DescribeScheduledActionsRequest& request, const DescribeScheduledActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScheduledActionsOutcomeCallable DescribeScheduledActionsCallable(const Model::DescribeScheduledActionsRequest& request);

                /**
                 *本接口（DetachInstances）用于从伸缩组移出 CVM 实例，本接口不会销毁实例。
                 * @param req DetachInstancesRequest
                 * @return DetachInstancesOutcome
                 */
                DetachInstancesOutcome DetachInstances(const Model::DetachInstancesRequest &request);
                void DetachInstancesAsync(const Model::DetachInstancesRequest& request, const DetachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachInstancesOutcomeCallable DetachInstancesCallable(const Model::DetachInstancesRequest& request);

                /**
                 *本接口（DisableAutoScalingGroup）用于停用指定伸缩组。
                 * @param req DisableAutoScalingGroupRequest
                 * @return DisableAutoScalingGroupOutcome
                 */
                DisableAutoScalingGroupOutcome DisableAutoScalingGroup(const Model::DisableAutoScalingGroupRequest &request);
                void DisableAutoScalingGroupAsync(const Model::DisableAutoScalingGroupRequest& request, const DisableAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableAutoScalingGroupOutcomeCallable DisableAutoScalingGroupCallable(const Model::DisableAutoScalingGroupRequest& request);

                /**
                 *本接口（EnableAutoScalingGroup）用于启用指定伸缩组。
                 * @param req EnableAutoScalingGroupRequest
                 * @return EnableAutoScalingGroupOutcome
                 */
                EnableAutoScalingGroupOutcome EnableAutoScalingGroup(const Model::EnableAutoScalingGroupRequest &request);
                void EnableAutoScalingGroupAsync(const Model::EnableAutoScalingGroupRequest& request, const EnableAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableAutoScalingGroupOutcomeCallable EnableAutoScalingGroupCallable(const Model::EnableAutoScalingGroupRequest& request);

                /**
                 *本接口（ExecuteScalingPolicy）用于执行伸缩策略。

* 可以根据伸缩策略ID执行伸缩策略。
* 伸缩策略所属伸缩组处于伸缩活动时，会拒绝执行伸缩策略。
                 * @param req ExecuteScalingPolicyRequest
                 * @return ExecuteScalingPolicyOutcome
                 */
                ExecuteScalingPolicyOutcome ExecuteScalingPolicy(const Model::ExecuteScalingPolicyRequest &request);
                void ExecuteScalingPolicyAsync(const Model::ExecuteScalingPolicyRequest& request, const ExecuteScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteScalingPolicyOutcomeCallable ExecuteScalingPolicyCallable(const Model::ExecuteScalingPolicyRequest& request);

                /**
                 *本接口（ModifyAutoScalingGroup）用于修改伸缩组。
                 * @param req ModifyAutoScalingGroupRequest
                 * @return ModifyAutoScalingGroupOutcome
                 */
                ModifyAutoScalingGroupOutcome ModifyAutoScalingGroup(const Model::ModifyAutoScalingGroupRequest &request);
                void ModifyAutoScalingGroupAsync(const Model::ModifyAutoScalingGroupRequest& request, const ModifyAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoScalingGroupOutcomeCallable ModifyAutoScalingGroupCallable(const Model::ModifyAutoScalingGroupRequest& request);

                /**
                 *本接口（ModifyDesiredCapacity）用于修改指定伸缩组的期望实例数
                 * @param req ModifyDesiredCapacityRequest
                 * @return ModifyDesiredCapacityOutcome
                 */
                ModifyDesiredCapacityOutcome ModifyDesiredCapacity(const Model::ModifyDesiredCapacityRequest &request);
                void ModifyDesiredCapacityAsync(const Model::ModifyDesiredCapacityRequest& request, const ModifyDesiredCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDesiredCapacityOutcomeCallable ModifyDesiredCapacityCallable(const Model::ModifyDesiredCapacityRequest& request);

                /**
                 *本接口（ModifyLaunchConfigurationAttributes）用于修改启动配置部分属性。

* 修改启动配置后，已经使用该启动配置扩容的存量实例不会发生变更，此后使用该启动配置的新增实例会按照新的配置进行扩容。
* 本接口支持修改部分简单类型。
                 * @param req ModifyLaunchConfigurationAttributesRequest
                 * @return ModifyLaunchConfigurationAttributesOutcome
                 */
                ModifyLaunchConfigurationAttributesOutcome ModifyLaunchConfigurationAttributes(const Model::ModifyLaunchConfigurationAttributesRequest &request);
                void ModifyLaunchConfigurationAttributesAsync(const Model::ModifyLaunchConfigurationAttributesRequest& request, const ModifyLaunchConfigurationAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLaunchConfigurationAttributesOutcomeCallable ModifyLaunchConfigurationAttributesCallable(const Model::ModifyLaunchConfigurationAttributesRequest& request);

                /**
                 *本接口（ModifyLoadBalancers）用于修改伸缩组的负载均衡器。

* 本接口用于为伸缩组指定新的负载均衡器配置，采用“完全覆盖”风格，无论之前配置如何，统一按照接口参数配置为新的负载均衡器。
* 如果要为伸缩组清空负载均衡器，则在调用本接口时仅指定伸缩组ID，不指定具体负载均衡器。
* 本接口会立即修改伸缩组的负载均衡器，并生成一个伸缩活动，异步修改存量实例的负载均衡器。
                 * @param req ModifyLoadBalancersRequest
                 * @return ModifyLoadBalancersOutcome
                 */
                ModifyLoadBalancersOutcome ModifyLoadBalancers(const Model::ModifyLoadBalancersRequest &request);
                void ModifyLoadBalancersAsync(const Model::ModifyLoadBalancersRequest& request, const ModifyLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancersOutcomeCallable ModifyLoadBalancersCallable(const Model::ModifyLoadBalancersRequest& request);

                /**
                 *本接口（ModifyNotificationConfiguration）用于修改通知。
                 * @param req ModifyNotificationConfigurationRequest
                 * @return ModifyNotificationConfigurationOutcome
                 */
                ModifyNotificationConfigurationOutcome ModifyNotificationConfiguration(const Model::ModifyNotificationConfigurationRequest &request);
                void ModifyNotificationConfigurationAsync(const Model::ModifyNotificationConfigurationRequest& request, const ModifyNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotificationConfigurationOutcomeCallable ModifyNotificationConfigurationCallable(const Model::ModifyNotificationConfigurationRequest& request);

                /**
                 *本接口（ModifyScalingPolicy）用于修改告警触发策略。
                 * @param req ModifyScalingPolicyRequest
                 * @return ModifyScalingPolicyOutcome
                 */
                ModifyScalingPolicyOutcome ModifyScalingPolicy(const Model::ModifyScalingPolicyRequest &request);
                void ModifyScalingPolicyAsync(const Model::ModifyScalingPolicyRequest& request, const ModifyScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyScalingPolicyOutcomeCallable ModifyScalingPolicyCallable(const Model::ModifyScalingPolicyRequest& request);

                /**
                 *本接口（ModifyScheduledAction）用于修改定时任务。
                 * @param req ModifyScheduledActionRequest
                 * @return ModifyScheduledActionOutcome
                 */
                ModifyScheduledActionOutcome ModifyScheduledAction(const Model::ModifyScheduledActionRequest &request);
                void ModifyScheduledActionAsync(const Model::ModifyScheduledActionRequest& request, const ModifyScheduledActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyScheduledActionOutcomeCallable ModifyScheduledActionCallable(const Model::ModifyScheduledActionRequest& request);

                /**
                 *本接口（PreviewPaiDomainName）用于预览PAI实例域名。

                 * @param req PreviewPaiDomainNameRequest
                 * @return PreviewPaiDomainNameOutcome
                 */
                PreviewPaiDomainNameOutcome PreviewPaiDomainName(const Model::PreviewPaiDomainNameRequest &request);
                void PreviewPaiDomainNameAsync(const Model::PreviewPaiDomainNameRequest& request, const PreviewPaiDomainNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PreviewPaiDomainNameOutcomeCallable PreviewPaiDomainNameCallable(const Model::PreviewPaiDomainNameRequest& request);

                /**
                 *本接口（RemoveInstances）用于从伸缩组删除 CVM 实例。根据当前的产品逻辑，如果实例由弹性伸缩自动创建，则实例会被销毁；如果实例系创建后加入伸缩组的，则会从伸缩组中移除，保留实例。
                 * @param req RemoveInstancesRequest
                 * @return RemoveInstancesOutcome
                 */
                RemoveInstancesOutcome RemoveInstances(const Model::RemoveInstancesRequest &request);
                void RemoveInstancesAsync(const Model::RemoveInstancesRequest& request, const RemoveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveInstancesOutcomeCallable RemoveInstancesCallable(const Model::RemoveInstancesRequest& request);

                /**
                 *本接口（SetInstancesProtection）用于设置实例移除保护。
子机设置为移除保护之后，当发生不健康替换、报警策略、期望值变更等触发缩容时，将不对此子机缩容操作。
                 * @param req SetInstancesProtectionRequest
                 * @return SetInstancesProtectionOutcome
                 */
                SetInstancesProtectionOutcome SetInstancesProtection(const Model::SetInstancesProtectionRequest &request);
                void SetInstancesProtectionAsync(const Model::SetInstancesProtectionRequest& request, const SetInstancesProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetInstancesProtectionOutcomeCallable SetInstancesProtectionCallable(const Model::SetInstancesProtectionRequest& request);

                /**
                 *本接口（UpgradeLaunchConfiguration）用于升级启动配置。

* 本接口用于升级启动配置，采用“完全覆盖”风格，无论之前参数如何，统一按照接口参数设置为新的配置。对于非必填字段，不填写则按照默认值赋值。
* 升级修改启动配置后，已经使用该启动配置扩容的存量实例不会发生变更，此后使用该启动配置的新增实例会按照新的配置进行扩容。
                 * @param req UpgradeLaunchConfigurationRequest
                 * @return UpgradeLaunchConfigurationOutcome
                 */
                UpgradeLaunchConfigurationOutcome UpgradeLaunchConfiguration(const Model::UpgradeLaunchConfigurationRequest &request);
                void UpgradeLaunchConfigurationAsync(const Model::UpgradeLaunchConfigurationRequest& request, const UpgradeLaunchConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeLaunchConfigurationOutcomeCallable UpgradeLaunchConfigurationCallable(const Model::UpgradeLaunchConfigurationRequest& request);

                /**
                 *本接口（UpgradeLifecycleHook）用于升级生命周期挂钩。

* 本接口用于升级生命周期挂钩，采用“完全覆盖”风格，无论之前参数如何，统一按照接口参数设置为新的配置。对于非必填字段，不填写则按照默认值赋值。

                 * @param req UpgradeLifecycleHookRequest
                 * @return UpgradeLifecycleHookOutcome
                 */
                UpgradeLifecycleHookOutcome UpgradeLifecycleHook(const Model::UpgradeLifecycleHookRequest &request);
                void UpgradeLifecycleHookAsync(const Model::UpgradeLifecycleHookRequest& request, const UpgradeLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeLifecycleHookOutcomeCallable UpgradeLifecycleHookCallable(const Model::UpgradeLifecycleHookRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_ASCLIENT_H_
