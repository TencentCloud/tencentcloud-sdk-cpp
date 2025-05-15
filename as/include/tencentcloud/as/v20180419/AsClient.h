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
#include <tencentcloud/as/v20180419/model/AttachLoadBalancersRequest.h>
#include <tencentcloud/as/v20180419/model/AttachLoadBalancersResponse.h>
#include <tencentcloud/as/v20180419/model/CancelInstanceRefreshRequest.h>
#include <tencentcloud/as/v20180419/model/CancelInstanceRefreshResponse.h>
#include <tencentcloud/as/v20180419/model/ClearLaunchConfigurationAttributesRequest.h>
#include <tencentcloud/as/v20180419/model/ClearLaunchConfigurationAttributesResponse.h>
#include <tencentcloud/as/v20180419/model/CompleteLifecycleActionRequest.h>
#include <tencentcloud/as/v20180419/model/CompleteLifecycleActionResponse.h>
#include <tencentcloud/as/v20180419/model/CreateAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/CreateAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/CreateAutoScalingGroupFromInstanceRequest.h>
#include <tencentcloud/as/v20180419/model/CreateAutoScalingGroupFromInstanceResponse.h>
#include <tencentcloud/as/v20180419/model/CreateLaunchConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/CreateLaunchConfigurationResponse.h>
#include <tencentcloud/as/v20180419/model/CreateLifecycleHookRequest.h>
#include <tencentcloud/as/v20180419/model/CreateLifecycleHookResponse.h>
#include <tencentcloud/as/v20180419/model/CreateNotificationConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/CreateNotificationConfigurationResponse.h>
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
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingAdvicesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingAdvicesResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingGroupLastActivitiesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeAutoScalingGroupLastActivitiesResponse.h>
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
#include <tencentcloud/as/v20180419/model/DescribeRefreshActivitiesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeRefreshActivitiesResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeScalingPoliciesRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeScalingPoliciesResponse.h>
#include <tencentcloud/as/v20180419/model/DescribeScheduledActionsRequest.h>
#include <tencentcloud/as/v20180419/model/DescribeScheduledActionsResponse.h>
#include <tencentcloud/as/v20180419/model/DetachInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/DetachInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/DetachLoadBalancersRequest.h>
#include <tencentcloud/as/v20180419/model/DetachLoadBalancersResponse.h>
#include <tencentcloud/as/v20180419/model/DisableAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/DisableAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/EnableAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/EnableAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/EnterStandbyRequest.h>
#include <tencentcloud/as/v20180419/model/EnterStandbyResponse.h>
#include <tencentcloud/as/v20180419/model/ExecuteScalingPolicyRequest.h>
#include <tencentcloud/as/v20180419/model/ExecuteScalingPolicyResponse.h>
#include <tencentcloud/as/v20180419/model/ExitStandbyRequest.h>
#include <tencentcloud/as/v20180419/model/ExitStandbyResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyAutoScalingGroupRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyAutoScalingGroupResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyDesiredCapacityRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyDesiredCapacityResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyLaunchConfigurationAttributesRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyLaunchConfigurationAttributesResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyLifecycleHookRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyLifecycleHookResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyLoadBalancerTargetAttributesRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyLoadBalancerTargetAttributesResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyLoadBalancersRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyLoadBalancersResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyNotificationConfigurationRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyNotificationConfigurationResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyScalingPolicyRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyScalingPolicyResponse.h>
#include <tencentcloud/as/v20180419/model/ModifyScheduledActionRequest.h>
#include <tencentcloud/as/v20180419/model/ModifyScheduledActionResponse.h>
#include <tencentcloud/as/v20180419/model/RemoveInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/RemoveInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/ResumeInstanceRefreshRequest.h>
#include <tencentcloud/as/v20180419/model/ResumeInstanceRefreshResponse.h>
#include <tencentcloud/as/v20180419/model/RollbackInstanceRefreshRequest.h>
#include <tencentcloud/as/v20180419/model/RollbackInstanceRefreshResponse.h>
#include <tencentcloud/as/v20180419/model/ScaleInInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/ScaleInInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/ScaleOutInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/ScaleOutInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/SetInstancesProtectionRequest.h>
#include <tencentcloud/as/v20180419/model/SetInstancesProtectionResponse.h>
#include <tencentcloud/as/v20180419/model/StartAutoScalingInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/StartAutoScalingInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/StartInstanceRefreshRequest.h>
#include <tencentcloud/as/v20180419/model/StartInstanceRefreshResponse.h>
#include <tencentcloud/as/v20180419/model/StopAutoScalingInstancesRequest.h>
#include <tencentcloud/as/v20180419/model/StopAutoScalingInstancesResponse.h>
#include <tencentcloud/as/v20180419/model/StopInstanceRefreshRequest.h>
#include <tencentcloud/as/v20180419/model/StopInstanceRefreshResponse.h>
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

                typedef Outcome<Core::Error, Model::AttachInstancesResponse> AttachInstancesOutcome;
                typedef std::future<AttachInstancesOutcome> AttachInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::AttachInstancesRequest&, AttachInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachLoadBalancersResponse> AttachLoadBalancersOutcome;
                typedef std::future<AttachLoadBalancersOutcome> AttachLoadBalancersOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::AttachLoadBalancersRequest&, AttachLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelInstanceRefreshResponse> CancelInstanceRefreshOutcome;
                typedef std::future<CancelInstanceRefreshOutcome> CancelInstanceRefreshOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CancelInstanceRefreshRequest&, CancelInstanceRefreshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelInstanceRefreshAsyncHandler;
                typedef Outcome<Core::Error, Model::ClearLaunchConfigurationAttributesResponse> ClearLaunchConfigurationAttributesOutcome;
                typedef std::future<ClearLaunchConfigurationAttributesOutcome> ClearLaunchConfigurationAttributesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ClearLaunchConfigurationAttributesRequest&, ClearLaunchConfigurationAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearLaunchConfigurationAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::CompleteLifecycleActionResponse> CompleteLifecycleActionOutcome;
                typedef std::future<CompleteLifecycleActionOutcome> CompleteLifecycleActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CompleteLifecycleActionRequest&, CompleteLifecycleActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompleteLifecycleActionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAutoScalingGroupResponse> CreateAutoScalingGroupOutcome;
                typedef std::future<CreateAutoScalingGroupOutcome> CreateAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateAutoScalingGroupRequest&, CreateAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoScalingGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAutoScalingGroupFromInstanceResponse> CreateAutoScalingGroupFromInstanceOutcome;
                typedef std::future<CreateAutoScalingGroupFromInstanceOutcome> CreateAutoScalingGroupFromInstanceOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateAutoScalingGroupFromInstanceRequest&, CreateAutoScalingGroupFromInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoScalingGroupFromInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLaunchConfigurationResponse> CreateLaunchConfigurationOutcome;
                typedef std::future<CreateLaunchConfigurationOutcome> CreateLaunchConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateLaunchConfigurationRequest&, CreateLaunchConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLaunchConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLifecycleHookResponse> CreateLifecycleHookOutcome;
                typedef std::future<CreateLifecycleHookOutcome> CreateLifecycleHookOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateLifecycleHookRequest&, CreateLifecycleHookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLifecycleHookAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNotificationConfigurationResponse> CreateNotificationConfigurationOutcome;
                typedef std::future<CreateNotificationConfigurationOutcome> CreateNotificationConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateNotificationConfigurationRequest&, CreateNotificationConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotificationConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScalingPolicyResponse> CreateScalingPolicyOutcome;
                typedef std::future<CreateScalingPolicyOutcome> CreateScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateScalingPolicyRequest&, CreateScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScheduledActionResponse> CreateScheduledActionOutcome;
                typedef std::future<CreateScheduledActionOutcome> CreateScheduledActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::CreateScheduledActionRequest&, CreateScheduledActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScheduledActionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAutoScalingGroupResponse> DeleteAutoScalingGroupOutcome;
                typedef std::future<DeleteAutoScalingGroupOutcome> DeleteAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteAutoScalingGroupRequest&, DeleteAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoScalingGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLaunchConfigurationResponse> DeleteLaunchConfigurationOutcome;
                typedef std::future<DeleteLaunchConfigurationOutcome> DeleteLaunchConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteLaunchConfigurationRequest&, DeleteLaunchConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLaunchConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLifecycleHookResponse> DeleteLifecycleHookOutcome;
                typedef std::future<DeleteLifecycleHookOutcome> DeleteLifecycleHookOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteLifecycleHookRequest&, DeleteLifecycleHookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLifecycleHookAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNotificationConfigurationResponse> DeleteNotificationConfigurationOutcome;
                typedef std::future<DeleteNotificationConfigurationOutcome> DeleteNotificationConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteNotificationConfigurationRequest&, DeleteNotificationConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNotificationConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScalingPolicyResponse> DeleteScalingPolicyOutcome;
                typedef std::future<DeleteScalingPolicyOutcome> DeleteScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteScalingPolicyRequest&, DeleteScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScheduledActionResponse> DeleteScheduledActionOutcome;
                typedef std::future<DeleteScheduledActionOutcome> DeleteScheduledActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DeleteScheduledActionRequest&, DeleteScheduledActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScheduledActionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountLimitsResponse> DescribeAccountLimitsOutcome;
                typedef std::future<DescribeAccountLimitsOutcome> DescribeAccountLimitsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAccountLimitsRequest&, DescribeAccountLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScalingActivitiesResponse> DescribeAutoScalingActivitiesOutcome;
                typedef std::future<DescribeAutoScalingActivitiesOutcome> DescribeAutoScalingActivitiesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingActivitiesRequest&, DescribeAutoScalingActivitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingActivitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScalingAdvicesResponse> DescribeAutoScalingAdvicesOutcome;
                typedef std::future<DescribeAutoScalingAdvicesOutcome> DescribeAutoScalingAdvicesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingAdvicesRequest&, DescribeAutoScalingAdvicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingAdvicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScalingGroupLastActivitiesResponse> DescribeAutoScalingGroupLastActivitiesOutcome;
                typedef std::future<DescribeAutoScalingGroupLastActivitiesOutcome> DescribeAutoScalingGroupLastActivitiesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingGroupLastActivitiesRequest&, DescribeAutoScalingGroupLastActivitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingGroupLastActivitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScalingGroupsResponse> DescribeAutoScalingGroupsOutcome;
                typedef std::future<DescribeAutoScalingGroupsOutcome> DescribeAutoScalingGroupsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingGroupsRequest&, DescribeAutoScalingGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScalingInstancesResponse> DescribeAutoScalingInstancesOutcome;
                typedef std::future<DescribeAutoScalingInstancesOutcome> DescribeAutoScalingInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeAutoScalingInstancesRequest&, DescribeAutoScalingInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLaunchConfigurationsResponse> DescribeLaunchConfigurationsOutcome;
                typedef std::future<DescribeLaunchConfigurationsOutcome> DescribeLaunchConfigurationsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeLaunchConfigurationsRequest&, DescribeLaunchConfigurationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLaunchConfigurationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLifecycleHooksResponse> DescribeLifecycleHooksOutcome;
                typedef std::future<DescribeLifecycleHooksOutcome> DescribeLifecycleHooksOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeLifecycleHooksRequest&, DescribeLifecycleHooksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLifecycleHooksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotificationConfigurationsResponse> DescribeNotificationConfigurationsOutcome;
                typedef std::future<DescribeNotificationConfigurationsOutcome> DescribeNotificationConfigurationsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeNotificationConfigurationsRequest&, DescribeNotificationConfigurationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotificationConfigurationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRefreshActivitiesResponse> DescribeRefreshActivitiesOutcome;
                typedef std::future<DescribeRefreshActivitiesOutcome> DescribeRefreshActivitiesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeRefreshActivitiesRequest&, DescribeRefreshActivitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRefreshActivitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScalingPoliciesResponse> DescribeScalingPoliciesOutcome;
                typedef std::future<DescribeScalingPoliciesOutcome> DescribeScalingPoliciesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeScalingPoliciesRequest&, DescribeScalingPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScheduledActionsResponse> DescribeScheduledActionsOutcome;
                typedef std::future<DescribeScheduledActionsOutcome> DescribeScheduledActionsOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DescribeScheduledActionsRequest&, DescribeScheduledActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScheduledActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachInstancesResponse> DetachInstancesOutcome;
                typedef std::future<DetachInstancesOutcome> DetachInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DetachInstancesRequest&, DetachInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachLoadBalancersResponse> DetachLoadBalancersOutcome;
                typedef std::future<DetachLoadBalancersOutcome> DetachLoadBalancersOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DetachLoadBalancersRequest&, DetachLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableAutoScalingGroupResponse> DisableAutoScalingGroupOutcome;
                typedef std::future<DisableAutoScalingGroupOutcome> DisableAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::DisableAutoScalingGroupRequest&, DisableAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableAutoScalingGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableAutoScalingGroupResponse> EnableAutoScalingGroupOutcome;
                typedef std::future<EnableAutoScalingGroupOutcome> EnableAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::EnableAutoScalingGroupRequest&, EnableAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableAutoScalingGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::EnterStandbyResponse> EnterStandbyOutcome;
                typedef std::future<EnterStandbyOutcome> EnterStandbyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::EnterStandbyRequest&, EnterStandbyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnterStandbyAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteScalingPolicyResponse> ExecuteScalingPolicyOutcome;
                typedef std::future<ExecuteScalingPolicyOutcome> ExecuteScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ExecuteScalingPolicyRequest&, ExecuteScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteScalingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ExitStandbyResponse> ExitStandbyOutcome;
                typedef std::future<ExitStandbyOutcome> ExitStandbyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ExitStandbyRequest&, ExitStandbyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExitStandbyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoScalingGroupResponse> ModifyAutoScalingGroupOutcome;
                typedef std::future<ModifyAutoScalingGroupOutcome> ModifyAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyAutoScalingGroupRequest&, ModifyAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoScalingGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDesiredCapacityResponse> ModifyDesiredCapacityOutcome;
                typedef std::future<ModifyDesiredCapacityOutcome> ModifyDesiredCapacityOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyDesiredCapacityRequest&, ModifyDesiredCapacityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDesiredCapacityAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLaunchConfigurationAttributesResponse> ModifyLaunchConfigurationAttributesOutcome;
                typedef std::future<ModifyLaunchConfigurationAttributesOutcome> ModifyLaunchConfigurationAttributesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyLaunchConfigurationAttributesRequest&, ModifyLaunchConfigurationAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLaunchConfigurationAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLifecycleHookResponse> ModifyLifecycleHookOutcome;
                typedef std::future<ModifyLifecycleHookOutcome> ModifyLifecycleHookOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyLifecycleHookRequest&, ModifyLifecycleHookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLifecycleHookAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerTargetAttributesResponse> ModifyLoadBalancerTargetAttributesOutcome;
                typedef std::future<ModifyLoadBalancerTargetAttributesOutcome> ModifyLoadBalancerTargetAttributesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyLoadBalancerTargetAttributesRequest&, ModifyLoadBalancerTargetAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerTargetAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancersResponse> ModifyLoadBalancersOutcome;
                typedef std::future<ModifyLoadBalancersOutcome> ModifyLoadBalancersOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyLoadBalancersRequest&, ModifyLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotificationConfigurationResponse> ModifyNotificationConfigurationOutcome;
                typedef std::future<ModifyNotificationConfigurationOutcome> ModifyNotificationConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyNotificationConfigurationRequest&, ModifyNotificationConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotificationConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyScalingPolicyResponse> ModifyScalingPolicyOutcome;
                typedef std::future<ModifyScalingPolicyOutcome> ModifyScalingPolicyOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyScalingPolicyRequest&, ModifyScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyScheduledActionResponse> ModifyScheduledActionOutcome;
                typedef std::future<ModifyScheduledActionOutcome> ModifyScheduledActionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ModifyScheduledActionRequest&, ModifyScheduledActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScheduledActionAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveInstancesResponse> RemoveInstancesOutcome;
                typedef std::future<RemoveInstancesOutcome> RemoveInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::RemoveInstancesRequest&, RemoveInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeInstanceRefreshResponse> ResumeInstanceRefreshOutcome;
                typedef std::future<ResumeInstanceRefreshOutcome> ResumeInstanceRefreshOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ResumeInstanceRefreshRequest&, ResumeInstanceRefreshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeInstanceRefreshAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackInstanceRefreshResponse> RollbackInstanceRefreshOutcome;
                typedef std::future<RollbackInstanceRefreshOutcome> RollbackInstanceRefreshOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::RollbackInstanceRefreshRequest&, RollbackInstanceRefreshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackInstanceRefreshAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleInInstancesResponse> ScaleInInstancesOutcome;
                typedef std::future<ScaleInInstancesOutcome> ScaleInInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ScaleInInstancesRequest&, ScaleInInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleInInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleOutInstancesResponse> ScaleOutInstancesOutcome;
                typedef std::future<ScaleOutInstancesOutcome> ScaleOutInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::ScaleOutInstancesRequest&, ScaleOutInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::SetInstancesProtectionResponse> SetInstancesProtectionOutcome;
                typedef std::future<SetInstancesProtectionOutcome> SetInstancesProtectionOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::SetInstancesProtectionRequest&, SetInstancesProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetInstancesProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::StartAutoScalingInstancesResponse> StartAutoScalingInstancesOutcome;
                typedef std::future<StartAutoScalingInstancesOutcome> StartAutoScalingInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::StartAutoScalingInstancesRequest&, StartAutoScalingInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartAutoScalingInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StartInstanceRefreshResponse> StartInstanceRefreshOutcome;
                typedef std::future<StartInstanceRefreshOutcome> StartInstanceRefreshOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::StartInstanceRefreshRequest&, StartInstanceRefreshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartInstanceRefreshAsyncHandler;
                typedef Outcome<Core::Error, Model::StopAutoScalingInstancesResponse> StopAutoScalingInstancesOutcome;
                typedef std::future<StopAutoScalingInstancesOutcome> StopAutoScalingInstancesOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::StopAutoScalingInstancesRequest&, StopAutoScalingInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopAutoScalingInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StopInstanceRefreshResponse> StopInstanceRefreshOutcome;
                typedef std::future<StopInstanceRefreshOutcome> StopInstanceRefreshOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::StopInstanceRefreshRequest&, StopInstanceRefreshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceRefreshAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeLaunchConfigurationResponse> UpgradeLaunchConfigurationOutcome;
                typedef std::future<UpgradeLaunchConfigurationOutcome> UpgradeLaunchConfigurationOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::UpgradeLaunchConfigurationRequest&, UpgradeLaunchConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeLaunchConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeLifecycleHookResponse> UpgradeLifecycleHookOutcome;
                typedef std::future<UpgradeLifecycleHookOutcome> UpgradeLifecycleHookOutcomeCallable;
                typedef std::function<void(const AsClient*, const Model::UpgradeLifecycleHookRequest&, UpgradeLifecycleHookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeLifecycleHookAsyncHandler;



                /**
                 *本接口（AttachInstances）用于将 CVM 实例添加到伸缩组。
* 仅支持添加处于`RUNNING`（运行中）或`STOPPED`（已关机）状态的 CVM 实例
* 添加的 CVM 实例需要和伸缩组 VPC 网络一致
                 * @param req AttachInstancesRequest
                 * @return AttachInstancesOutcome
                 */
                AttachInstancesOutcome AttachInstances(const Model::AttachInstancesRequest &request);
                void AttachInstancesAsync(const Model::AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachInstancesOutcomeCallable AttachInstancesCallable(const Model::AttachInstancesRequest& request);

                /**
                 *此接口（AttachLoadBalancers）用于将负载均衡器添加到伸缩组。
                 * @param req AttachLoadBalancersRequest
                 * @return AttachLoadBalancersOutcome
                 */
                AttachLoadBalancersOutcome AttachLoadBalancers(const Model::AttachLoadBalancersRequest &request);
                void AttachLoadBalancersAsync(const Model::AttachLoadBalancersRequest& request, const AttachLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachLoadBalancersOutcomeCallable AttachLoadBalancersCallable(const Model::AttachLoadBalancersRequest& request);

                /**
                 *取消伸缩组的实例刷新活动。
* 已刷新的批次不受影响，待刷新批次被取消
* 如存在正在刷新的批次，不允许取消；可先暂停活动，等待当前批次结束后再取消
* 刷新失败的实例保持备用中状态，需用户手动处理后尝试退出备用中状态或销毁
* 取消后不允许回滚操作，也不支持恢复操作
* 因 maxSurge 参数而临时扩容的实例在取消后会自动销毁
* 进行缩容时，所有实例都已经更新完成，此时无法取消
                 * @param req CancelInstanceRefreshRequest
                 * @return CancelInstanceRefreshOutcome
                 */
                CancelInstanceRefreshOutcome CancelInstanceRefresh(const Model::CancelInstanceRefreshRequest &request);
                void CancelInstanceRefreshAsync(const Model::CancelInstanceRefreshRequest& request, const CancelInstanceRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelInstanceRefreshOutcomeCallable CancelInstanceRefreshCallable(const Model::CancelInstanceRefreshRequest& request);

                /**
                 *本接口（ClearLaunchConfigurationAttributes）用于将启动配置内的特定属性完全清空。
                 * @param req ClearLaunchConfigurationAttributesRequest
                 * @return ClearLaunchConfigurationAttributesOutcome
                 */
                ClearLaunchConfigurationAttributesOutcome ClearLaunchConfigurationAttributes(const Model::ClearLaunchConfigurationAttributesRequest &request);
                void ClearLaunchConfigurationAttributesAsync(const Model::ClearLaunchConfigurationAttributesRequest& request, const ClearLaunchConfigurationAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearLaunchConfigurationAttributesOutcomeCallable ClearLaunchConfigurationAttributesCallable(const Model::ClearLaunchConfigurationAttributesRequest& request);

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
                 *本接口（CreateAutoScalingGroupFromInstance）用于根据实例创建启动配置及伸缩组。

说明：根据按包年包月计费的实例所创建的伸缩组，其扩容的实例为按量计费实例。
                 * @param req CreateAutoScalingGroupFromInstanceRequest
                 * @return CreateAutoScalingGroupFromInstanceOutcome
                 */
                CreateAutoScalingGroupFromInstanceOutcome CreateAutoScalingGroupFromInstance(const Model::CreateAutoScalingGroupFromInstanceRequest &request);
                void CreateAutoScalingGroupFromInstanceAsync(const Model::CreateAutoScalingGroupFromInstanceRequest& request, const CreateAutoScalingGroupFromInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAutoScalingGroupFromInstanceOutcomeCallable CreateAutoScalingGroupFromInstanceCallable(const Model::CreateAutoScalingGroupFromInstanceRequest& request);

                /**
                 *本接口（CreateLaunchConfiguration）用于创建新的启动配置。

* 启动配置，可以通过 [ModifyLaunchConfigurationAttributes](https://cloud.tencent.com/document/api/377/31298) 修改少量字段。如需使用新的启动配置，建议重新创建启动配置。

* 每个地域默认只能创建50个启动配置，详见[使用限制](https://cloud.tencent.com/document/product/377/3120)。
                 * @param req CreateLaunchConfigurationRequest
                 * @return CreateLaunchConfigurationOutcome
                 */
                CreateLaunchConfigurationOutcome CreateLaunchConfiguration(const Model::CreateLaunchConfigurationRequest &request);
                void CreateLaunchConfigurationAsync(const Model::CreateLaunchConfigurationRequest& request, const CreateLaunchConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLaunchConfigurationOutcomeCallable CreateLaunchConfigurationCallable(const Model::CreateLaunchConfigurationRequest& request);

                /**
                 *本接口（CreateLifecycleHook）用于创建生命周期挂钩。

* 您可以为生命周期挂钩配置消息通知或执行自动化助手命令。

如果您配置了通知消息，弹性伸缩会通知您的TDMQ消息队列，通知内容形如：

```
{
	"Service": "Tencent Cloud Auto Scaling",
	"Time": "2019-03-14T10:15:11Z",
	"AppId": "1251783334",
	"ActivityId": "asa-fznnvrja",
	"AutoScalingGroupId": "asg-ft6y7u8n",
	"LifecycleHookId": "ash-p9i7y6t5",
	"LifecycleHookName": "my-hook",
	"LifecycleActionToken": "3080e1c9-0efe-4dd7-ad3b-90cd6618298f",
	"InstanceId": "ins-y6dr5e43",
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
通知到 CMQ 主题或队列时，消息内容如下：
```
{
    "Service": "Tencent Cloud Auto Scaling",
    "CreatedTime": "2021-10-11T10:15:11Z", // 活动创建时间
    "AppId": "100000000",
    "ActivityId": "asa-fznnvrja", // 伸缩活动ID
    "AutoScalingGroupId": "asg-pc2oqu2z", // 伸缩组ID
    "ActivityType": "SCALE_OUT",  // 伸缩活动类型
    "StatusCode": "SUCCESSFUL",   // 伸缩活动结果
    "Description": "Activity was launched in response to a difference between desired capacity and actual capacity,
    scale out 1 instance(s).", // 伸缩活动描述
    "StartTime": "2021-10-11T10:15:11Z",  // 活动开始时间
    "EndTime": "2021-10-11T10:15:32Z",    // 活动结束时间
    "DetailedStatusMessageSet": [ // 活动内部错误集合（非空不代表活动失败）
        {
            "Code": "InvalidInstanceType",
            "Zone": "ap-guangzhou-2",
            "InstanceId": "",
            "InstanceChargeType": "POSTPAID_BY_HOUR",
            "SubnetId": "subnet-4t5mgeuu",
            "Message": "The specified instance type `S5.LARGE8` is invalid in `subnet-4t5mgeuu`, `ap-guangzhou-2`.",
            "InstanceType": "S5.LARGE8"
        }
    ]
}
```
                 * @param req CreateNotificationConfigurationRequest
                 * @return CreateNotificationConfigurationOutcome
                 */
                CreateNotificationConfigurationOutcome CreateNotificationConfiguration(const Model::CreateNotificationConfigurationRequest &request);
                void CreateNotificationConfigurationAsync(const Model::CreateNotificationConfigurationRequest& request, const CreateNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNotificationConfigurationOutcomeCallable CreateNotificationConfigurationCallable(const Model::CreateNotificationConfigurationRequest& request);

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
                 *本接口（DeleteAutoScalingGroup）用于删除指定伸缩组，删除前提是伸缩组内无运行中（IN_SERVICE）状态的实例且当前未在执行伸缩活动。删除伸缩组后，创建失败（CREATION_FAILED）、中止失败（TERMINATION_FAILED）、解绑失败（DETACH_FAILED）等非运行中状态的实例不会被销毁。
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
                 *此接口用于查询伸缩组配置建议。
                 * @param req DescribeAutoScalingAdvicesRequest
                 * @return DescribeAutoScalingAdvicesOutcome
                 */
                DescribeAutoScalingAdvicesOutcome DescribeAutoScalingAdvices(const Model::DescribeAutoScalingAdvicesRequest &request);
                void DescribeAutoScalingAdvicesAsync(const Model::DescribeAutoScalingAdvicesRequest& request, const DescribeAutoScalingAdvicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScalingAdvicesOutcomeCallable DescribeAutoScalingAdvicesCallable(const Model::DescribeAutoScalingAdvicesRequest& request);

                /**
                 *本接口（DescribeAutoScalingGroupLastActivities）用于查询伸缩组的最新一次伸缩活动记录。
                 * @param req DescribeAutoScalingGroupLastActivitiesRequest
                 * @return DescribeAutoScalingGroupLastActivitiesOutcome
                 */
                DescribeAutoScalingGroupLastActivitiesOutcome DescribeAutoScalingGroupLastActivities(const Model::DescribeAutoScalingGroupLastActivitiesRequest &request);
                void DescribeAutoScalingGroupLastActivitiesAsync(const Model::DescribeAutoScalingGroupLastActivitiesRequest& request, const DescribeAutoScalingGroupLastActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScalingGroupLastActivitiesOutcomeCallable DescribeAutoScalingGroupLastActivitiesCallable(const Model::DescribeAutoScalingGroupLastActivitiesRequest& request);

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
                 *本接口（DescribeRefreshActivities）用于查询伸缩组的实例刷新活动记录。
                 * @param req DescribeRefreshActivitiesRequest
                 * @return DescribeRefreshActivitiesOutcome
                 */
                DescribeRefreshActivitiesOutcome DescribeRefreshActivities(const Model::DescribeRefreshActivitiesRequest &request);
                void DescribeRefreshActivitiesAsync(const Model::DescribeRefreshActivitiesRequest& request, const DescribeRefreshActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRefreshActivitiesOutcomeCallable DescribeRefreshActivitiesCallable(const Model::DescribeRefreshActivitiesRequest& request);

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
* 如果移出指定实例后，伸缩组内处于`IN_SERVICE`状态的实例数量小于伸缩组最小值，接口将报错
* 如果伸缩组处于`DISABLED`状态，移出操作不校验`IN_SERVICE`实例数量和最小值的关系
* 对于伸缩组配置的 CLB，实例在离开伸缩组时，AS 会进行解挂载动作
                 * @param req DetachInstancesRequest
                 * @return DetachInstancesOutcome
                 */
                DetachInstancesOutcome DetachInstances(const Model::DetachInstancesRequest &request);
                void DetachInstancesAsync(const Model::DetachInstancesRequest& request, const DetachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachInstancesOutcomeCallable DetachInstancesCallable(const Model::DetachInstancesRequest& request);

                /**
                 *本接口（DetachLoadBalancers）用于从伸缩组移出负载均衡器，本接口不会销毁负载均衡器。
                 * @param req DetachLoadBalancersRequest
                 * @return DetachLoadBalancersOutcome
                 */
                DetachLoadBalancersOutcome DetachLoadBalancers(const Model::DetachLoadBalancersRequest &request);
                void DetachLoadBalancersAsync(const Model::DetachLoadBalancersRequest& request, const DetachLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachLoadBalancersOutcomeCallable DetachLoadBalancersCallable(const Model::DetachLoadBalancersRequest& request);

                /**
                 *本接口（DisableAutoScalingGroup）用于停用指定伸缩组。
* 停用伸缩组后，自动触发的伸缩活动不再进行，包括：
    - 告警策略触发的伸缩活动
    - 匹配期望实例数的伸缩活动
    - 不健康实例替换活动
    - 定时任务
* 停用伸缩组后，手动触发的伸缩活动允许进行，包括：
    - 指定数量扩容实例（ScaleOutInstances）
    - 指定数量缩容实例（ScaleInInstances）
    - 从伸缩组中移出 CVM 实例（DetachInstances）
    - 从伸缩组中删除 CVM 实例（RemoveInstances）
    - 添加 CVM 实例到伸缩组（AttachInstances）
    - 关闭伸缩组内 CVM 实例（StopAutoScalingInstances）
    - 开启伸缩组内 CVM 实例（StartAutoScalingInstances）
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
                 *伸缩组内实例进入备用中状态。
* 备用中状态实例的 CLB 权重值为 0，不会被自动缩容、不健康替换、实例刷新操作选中
* 调用弹性伸缩开关机接口会使得备用中状态发生变化，而云服务器开关机接口不会影响
* 实例进入备用中状态后，伸缩组会尝试下调期望实例数，新期望数不会小于最小值
                 * @param req EnterStandbyRequest
                 * @return EnterStandbyOutcome
                 */
                EnterStandbyOutcome EnterStandby(const Model::EnterStandbyRequest &request);
                void EnterStandbyAsync(const Model::EnterStandbyRequest& request, const EnterStandbyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnterStandbyOutcomeCallable EnterStandbyCallable(const Model::EnterStandbyRequest& request);

                /**
                 *本接口（ExecuteScalingPolicy）用于执行伸缩策略。

* 可以根据伸缩策略ID执行伸缩策略。
* 伸缩策略所属伸缩组处于伸缩活动时，会拒绝执行伸缩策略。
* 本接口不支持执行目标追踪策略。
                 * @param req ExecuteScalingPolicyRequest
                 * @return ExecuteScalingPolicyOutcome
                 */
                ExecuteScalingPolicyOutcome ExecuteScalingPolicy(const Model::ExecuteScalingPolicyRequest &request);
                void ExecuteScalingPolicyAsync(const Model::ExecuteScalingPolicyRequest& request, const ExecuteScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteScalingPolicyOutcomeCallable ExecuteScalingPolicyCallable(const Model::ExecuteScalingPolicyRequest& request);

                /**
                 *伸缩组内实例退出备用中状态。
* 退出备用中状态后，实例会进入运行中状态，CLB 权重值恢复为预设值
* 调用弹性伸缩开关机接口会使得备用中状态发生变化，而云服务器开关机接口不会影响
* 实例退出备用中状态后，伸缩组会上调期望实例数，新期望数不能大于最大值
                 * @param req ExitStandbyRequest
                 * @return ExitStandbyOutcome
                 */
                ExitStandbyOutcome ExitStandby(const Model::ExitStandbyRequest &request);
                void ExitStandbyAsync(const Model::ExitStandbyRequest& request, const ExitStandbyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExitStandbyOutcomeCallable ExitStandbyCallable(const Model::ExitStandbyRequest& request);

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
                 * @param req ModifyLaunchConfigurationAttributesRequest
                 * @return ModifyLaunchConfigurationAttributesOutcome
                 */
                ModifyLaunchConfigurationAttributesOutcome ModifyLaunchConfigurationAttributes(const Model::ModifyLaunchConfigurationAttributesRequest &request);
                void ModifyLaunchConfigurationAttributesAsync(const Model::ModifyLaunchConfigurationAttributesRequest& request, const ModifyLaunchConfigurationAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLaunchConfigurationAttributesOutcomeCallable ModifyLaunchConfigurationAttributesCallable(const Model::ModifyLaunchConfigurationAttributesRequest& request);

                /**
                 *此接口用于修改生命周期挂钩。
                 * @param req ModifyLifecycleHookRequest
                 * @return ModifyLifecycleHookOutcome
                 */
                ModifyLifecycleHookOutcome ModifyLifecycleHook(const Model::ModifyLifecycleHookRequest &request);
                void ModifyLifecycleHookAsync(const Model::ModifyLifecycleHookRequest& request, const ModifyLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLifecycleHookOutcomeCallable ModifyLifecycleHookCallable(const Model::ModifyLifecycleHookRequest& request);

                /**
                 *本接口（ModifyLoadBalancerTargetAttributes）用于修改伸缩组内负载均衡器的目标规则属性。
                 * @param req ModifyLoadBalancerTargetAttributesRequest
                 * @return ModifyLoadBalancerTargetAttributesOutcome
                 */
                ModifyLoadBalancerTargetAttributesOutcome ModifyLoadBalancerTargetAttributes(const Model::ModifyLoadBalancerTargetAttributesRequest &request);
                void ModifyLoadBalancerTargetAttributesAsync(const Model::ModifyLoadBalancerTargetAttributesRequest& request, const ModifyLoadBalancerTargetAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerTargetAttributesOutcomeCallable ModifyLoadBalancerTargetAttributesCallable(const Model::ModifyLoadBalancerTargetAttributesRequest& request);

                /**
                 *本接口（ModifyLoadBalancers）用于修改伸缩组的负载均衡器。

* 本接口用于为伸缩组指定新的负载均衡器配置，采用`完全覆盖`风格，无论之前配置如何，`统一按照接口参数配置为新的负载均衡器`。
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
* 通知的接收端类型不支持修改。
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
                 *本接口（RemoveInstances）用于从伸缩组删除 CVM 实例。根据当前的产品逻辑，如果实例由弹性伸缩自动创建，则实例会被销毁；如果实例系创建后加入伸缩组的，则会从伸缩组中移除，保留实例。
* 如果删除指定实例后，伸缩组内处于`IN_SERVICE`状态的实例数量小于伸缩组最小值，接口将报错
* 如果伸缩组处于`DISABLED`状态，删除操作不校验`IN_SERVICE`实例数量和最小值的关系
* 对于伸缩组配置的 CLB，实例在离开伸缩组时，AS 会进行解挂载动作
                 * @param req RemoveInstancesRequest
                 * @return RemoveInstancesOutcome
                 */
                RemoveInstancesOutcome RemoveInstances(const Model::RemoveInstancesRequest &request);
                void RemoveInstancesAsync(const Model::RemoveInstancesRequest& request, const RemoveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveInstancesOutcomeCallable RemoveInstancesCallable(const Model::RemoveInstancesRequest& request);

                /**
                 *恢复暂停状态的实例刷新活动，使其重试当前批次刷新失败实例或继续刷新后续批次，非暂停状态下调用该接口无效。

- 使用 MaxSurge 参数时活动可能会处于扩容或缩容失败导致的暂停状态，也可以使用该接口重试扩缩容。
                 * @param req ResumeInstanceRefreshRequest
                 * @return ResumeInstanceRefreshOutcome
                 */
                ResumeInstanceRefreshOutcome ResumeInstanceRefresh(const Model::ResumeInstanceRefreshRequest &request);
                void ResumeInstanceRefreshAsync(const Model::ResumeInstanceRefreshRequest& request, const ResumeInstanceRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeInstanceRefreshOutcomeCallable ResumeInstanceRefreshCallable(const Model::ResumeInstanceRefreshRequest& request);

                /**
                 *回滚操作会生成一个新的实例刷新活动，该活动也支持分批次刷新以及暂停、恢复、取消操作，接口返回回滚活动的 RefreshActivityId。
* 原活动中待刷新实例变更为已取消，忽略不存在实例，其他状态实例进入回滚流程
* 原活动中正在刷新的实例不会立刻终止，刷新结束后再执行回滚活动
* 暂停状态或最近一次成功的刷新活动支持回滚，其他状态不支持回滚
* 原活动刷新方式为重装实例时，对于 ImageId参数，会自动恢复到回滚前镜像 ID；对于 UserData、EnhancedService、LoginSettings、 HostName 参数，依然会从启动配置中读取，需用户在回滚前自行修改启动配置
* 回滚活动暂不支持 MaxSurge 参数
                 * @param req RollbackInstanceRefreshRequest
                 * @return RollbackInstanceRefreshOutcome
                 */
                RollbackInstanceRefreshOutcome RollbackInstanceRefresh(const Model::RollbackInstanceRefreshRequest &request);
                void RollbackInstanceRefreshAsync(const Model::RollbackInstanceRefreshRequest& request, const RollbackInstanceRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackInstanceRefreshOutcomeCallable RollbackInstanceRefreshCallable(const Model::RollbackInstanceRefreshRequest& request);

                /**
                 *为伸缩组指定数量缩容实例，返回缩容活动的 ActivityId。
* 伸缩组需要未处于活动中
* 伸缩组处于停用状态时，该接口也会生效，可参考[停用伸缩组](https://cloud.tencent.com/document/api/377/20435)文档查看伸缩组停用状态的影响范围
* 根据伸缩组的`TerminationPolicies`策略，选择被缩容的实例，可参考[缩容处理](https://cloud.tencent.com/document/product/377/8563)
* 接口只会选择`IN_SERVICE`实例缩容，如果需要缩容其他状态实例，可以使用 [DetachInstances](https://cloud.tencent.com/document/api/377/20436) 或 [RemoveInstances](https://cloud.tencent.com/document/api/377/20431) 接口
* 接口会减少期望实例数，新的期望实例数需要大于等于最小实例数
* 缩容如果失败或者部分成功，最后期望实例数只会扣减实际缩容成功的实例数量
                 * @param req ScaleInInstancesRequest
                 * @return ScaleInInstancesOutcome
                 */
                ScaleInInstancesOutcome ScaleInInstances(const Model::ScaleInInstancesRequest &request);
                void ScaleInInstancesAsync(const Model::ScaleInInstancesRequest& request, const ScaleInInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleInInstancesOutcomeCallable ScaleInInstancesCallable(const Model::ScaleInInstancesRequest& request);

                /**
                 *为伸缩组指定数量扩容实例，返回扩容活动的 ActivityId。
* 伸缩组需要未处于活动中
* 伸缩组处于停用状态时，该接口也会生效，可参考[停用伸缩组](https://cloud.tencent.com/document/api/377/20435)文档查看伸缩组停用状态的影响范围
* 接口会增加期望实例数，新的期望实例数需要小于等于最大实例数
* 扩容如果失败或者部分成功，最后期望实例数只会增加实际成功的实例数量
* 竞价混合模式中一次扩容可能触发多个伸缩活动，该接口仅返回第一个伸缩活动的 ActivityId
                 * @param req ScaleOutInstancesRequest
                 * @return ScaleOutInstancesOutcome
                 */
                ScaleOutInstancesOutcome ScaleOutInstances(const Model::ScaleOutInstancesRequest &request);
                void ScaleOutInstancesAsync(const Model::ScaleOutInstancesRequest& request, const ScaleOutInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleOutInstancesOutcomeCallable ScaleOutInstancesCallable(const Model::ScaleOutInstancesRequest& request);

                /**
                 *本接口（SetInstancesProtection）用于设置实例保护。
实例设置保护之后，当发生不健康替换、报警策略、期望值变更等触发缩容时，将不对此实例缩容操作。
                 * @param req SetInstancesProtectionRequest
                 * @return SetInstancesProtectionOutcome
                 */
                SetInstancesProtectionOutcome SetInstancesProtection(const Model::SetInstancesProtectionRequest &request);
                void SetInstancesProtectionAsync(const Model::SetInstancesProtectionRequest& request, const SetInstancesProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetInstancesProtectionOutcomeCallable SetInstancesProtectionCallable(const Model::SetInstancesProtectionRequest& request);

                /**
                 *本接口（StartAutoScalingInstances）用于开启伸缩组内 CVM 实例。
* 开机成功，实例转为`IN_SERVICE`状态后，会增加期望实例数，期望实例数不可超过设置的最大值
* 本接口支持批量操作，每次请求开机实例的上限为100
                 * @param req StartAutoScalingInstancesRequest
                 * @return StartAutoScalingInstancesOutcome
                 */
                StartAutoScalingInstancesOutcome StartAutoScalingInstances(const Model::StartAutoScalingInstancesRequest &request);
                void StartAutoScalingInstancesAsync(const Model::StartAutoScalingInstancesRequest& request, const StartAutoScalingInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartAutoScalingInstancesOutcomeCallable StartAutoScalingInstancesCallable(const Model::StartAutoScalingInstancesRequest& request);

                /**
                 *根据启动配置中参数，刷新伸缩组内运行中状态 CVM 实例，返回实例刷新活动的 RefreshActivityId。
* 对于重装实例的刷新方式（目前仅支持重装），重装时仅会从启动配置中获取 ImageId、UserData、EnhancedService、 HostName、LoginSettings 参数进行刷新，实例的其他参数不会刷新
* 实例刷新期间（包括暂停状态），伸缩组会被停用。不建议刷新期间修改关联启动配置，否则会影响刷新参数，造成实例配置不一致
* 滚动更新模式会分成多批次进行刷新实例，单批次中若存在刷新失败实例，活动会进入失败暂停状态
* 若待刷新实例被移出或销毁，会被标记为 NOT_FOUND 状态，不阻塞实例刷新活动
* 运行中状态实例与最新启动配置参数一致，实例也会再次刷新
                 * @param req StartInstanceRefreshRequest
                 * @return StartInstanceRefreshOutcome
                 */
                StartInstanceRefreshOutcome StartInstanceRefresh(const Model::StartInstanceRefreshRequest &request);
                void StartInstanceRefreshAsync(const Model::StartInstanceRefreshRequest& request, const StartInstanceRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartInstanceRefreshOutcomeCallable StartInstanceRefreshCallable(const Model::StartInstanceRefreshRequest& request);

                /**
                 *本接口（StopAutoScalingInstances）用于关闭伸缩组内 CVM 实例。
* 关机方式采用`SOFT_FIRST`方式，表示在正常关闭失败后进行强制关闭
* 关闭`IN_SERVICE`状态的实例，会减少期望实例数，期望实例数不可低于设置的最小值
* 使用`STOP_CHARGING`选项关机，待关机的实例需要满足[关机不收费条件](https://cloud.tencent.com/document/product/213/19918)
* 本接口支持批量操作，每次请求关机实例的上限为100
                 * @param req StopAutoScalingInstancesRequest
                 * @return StopAutoScalingInstancesOutcome
                 */
                StopAutoScalingInstancesOutcome StopAutoScalingInstances(const Model::StopAutoScalingInstancesRequest &request);
                void StopAutoScalingInstancesAsync(const Model::StopAutoScalingInstancesRequest& request, const StopAutoScalingInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopAutoScalingInstancesOutcomeCallable StopAutoScalingInstancesCallable(const Model::StopAutoScalingInstancesRequest& request);

                /**
                 *暂停正在执行的实例刷新活动。
* 暂停状态下，伸缩组也会处于停用中状态
* 当前正在更新或扩容的实例不会暂停，待更新的实例会暂停更新
* 进行缩容时，所有实例都已经更新完成，此时无法暂停
                 * @param req StopInstanceRefreshRequest
                 * @return StopInstanceRefreshOutcome
                 */
                StopInstanceRefreshOutcome StopInstanceRefresh(const Model::StopInstanceRefreshRequest &request);
                void StopInstanceRefreshAsync(const Model::StopInstanceRefreshRequest& request, const StopInstanceRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopInstanceRefreshOutcomeCallable StopInstanceRefreshCallable(const Model::StopInstanceRefreshRequest& request);

                /**
                 *已有替代接口ModifyLaunchConfiguration。该接口存在覆盖参数风险，目前官网已隐藏

本接口（UpgradeLaunchConfiguration）用于升级启动配置。

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
