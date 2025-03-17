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

#include <tencentcloud/as/v20180419/AsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::As::V20180419;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-19";
    const string ENDPOINT = "as.tencentcloudapi.com";
}

AsClient::AsClient(const Credential &credential, const string &region) :
    AsClient(credential, region, ClientProfile())
{
}

AsClient::AsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AsClient::AttachInstancesOutcome AsClient::AttachInstances(const AttachInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AttachInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachInstancesResponse rsp = AttachInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachInstancesOutcome(rsp);
        else
            return AttachInstancesOutcome(o.GetError());
    }
    else
    {
        return AttachInstancesOutcome(outcome.GetError());
    }
}

void AsClient::AttachInstancesAsync(const AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::AttachInstancesOutcomeCallable AsClient::AttachInstancesCallable(const AttachInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachInstancesOutcome()>>(
        [this, request]()
        {
            return this->AttachInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::AttachLoadBalancersOutcome AsClient::AttachLoadBalancers(const AttachLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "AttachLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachLoadBalancersResponse rsp = AttachLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachLoadBalancersOutcome(rsp);
        else
            return AttachLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return AttachLoadBalancersOutcome(outcome.GetError());
    }
}

void AsClient::AttachLoadBalancersAsync(const AttachLoadBalancersRequest& request, const AttachLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachLoadBalancers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::AttachLoadBalancersOutcomeCallable AsClient::AttachLoadBalancersCallable(const AttachLoadBalancersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachLoadBalancersOutcome()>>(
        [this, request]()
        {
            return this->AttachLoadBalancers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::CancelInstanceRefreshOutcome AsClient::CancelInstanceRefresh(const CancelInstanceRefreshRequest &request)
{
    auto outcome = MakeRequest(request, "CancelInstanceRefresh");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelInstanceRefreshResponse rsp = CancelInstanceRefreshResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelInstanceRefreshOutcome(rsp);
        else
            return CancelInstanceRefreshOutcome(o.GetError());
    }
    else
    {
        return CancelInstanceRefreshOutcome(outcome.GetError());
    }
}

void AsClient::CancelInstanceRefreshAsync(const CancelInstanceRefreshRequest& request, const CancelInstanceRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelInstanceRefresh(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::CancelInstanceRefreshOutcomeCallable AsClient::CancelInstanceRefreshCallable(const CancelInstanceRefreshRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelInstanceRefreshOutcome()>>(
        [this, request]()
        {
            return this->CancelInstanceRefresh(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::ClearLaunchConfigurationAttributesOutcome AsClient::ClearLaunchConfigurationAttributes(const ClearLaunchConfigurationAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ClearLaunchConfigurationAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearLaunchConfigurationAttributesResponse rsp = ClearLaunchConfigurationAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearLaunchConfigurationAttributesOutcome(rsp);
        else
            return ClearLaunchConfigurationAttributesOutcome(o.GetError());
    }
    else
    {
        return ClearLaunchConfigurationAttributesOutcome(outcome.GetError());
    }
}

void AsClient::ClearLaunchConfigurationAttributesAsync(const ClearLaunchConfigurationAttributesRequest& request, const ClearLaunchConfigurationAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ClearLaunchConfigurationAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::ClearLaunchConfigurationAttributesOutcomeCallable AsClient::ClearLaunchConfigurationAttributesCallable(const ClearLaunchConfigurationAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ClearLaunchConfigurationAttributesOutcome()>>(
        [this, request]()
        {
            return this->ClearLaunchConfigurationAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::CompleteLifecycleActionOutcome AsClient::CompleteLifecycleAction(const CompleteLifecycleActionRequest &request)
{
    auto outcome = MakeRequest(request, "CompleteLifecycleAction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompleteLifecycleActionResponse rsp = CompleteLifecycleActionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompleteLifecycleActionOutcome(rsp);
        else
            return CompleteLifecycleActionOutcome(o.GetError());
    }
    else
    {
        return CompleteLifecycleActionOutcome(outcome.GetError());
    }
}

void AsClient::CompleteLifecycleActionAsync(const CompleteLifecycleActionRequest& request, const CompleteLifecycleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CompleteLifecycleAction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::CompleteLifecycleActionOutcomeCallable AsClient::CompleteLifecycleActionCallable(const CompleteLifecycleActionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CompleteLifecycleActionOutcome()>>(
        [this, request]()
        {
            return this->CompleteLifecycleAction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::CreateAutoScalingGroupOutcome AsClient::CreateAutoScalingGroup(const CreateAutoScalingGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAutoScalingGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAutoScalingGroupResponse rsp = CreateAutoScalingGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAutoScalingGroupOutcome(rsp);
        else
            return CreateAutoScalingGroupOutcome(o.GetError());
    }
    else
    {
        return CreateAutoScalingGroupOutcome(outcome.GetError());
    }
}

void AsClient::CreateAutoScalingGroupAsync(const CreateAutoScalingGroupRequest& request, const CreateAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAutoScalingGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::CreateAutoScalingGroupOutcomeCallable AsClient::CreateAutoScalingGroupCallable(const CreateAutoScalingGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAutoScalingGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateAutoScalingGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::CreateAutoScalingGroupFromInstanceOutcome AsClient::CreateAutoScalingGroupFromInstance(const CreateAutoScalingGroupFromInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAutoScalingGroupFromInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAutoScalingGroupFromInstanceResponse rsp = CreateAutoScalingGroupFromInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAutoScalingGroupFromInstanceOutcome(rsp);
        else
            return CreateAutoScalingGroupFromInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateAutoScalingGroupFromInstanceOutcome(outcome.GetError());
    }
}

void AsClient::CreateAutoScalingGroupFromInstanceAsync(const CreateAutoScalingGroupFromInstanceRequest& request, const CreateAutoScalingGroupFromInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAutoScalingGroupFromInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::CreateAutoScalingGroupFromInstanceOutcomeCallable AsClient::CreateAutoScalingGroupFromInstanceCallable(const CreateAutoScalingGroupFromInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAutoScalingGroupFromInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateAutoScalingGroupFromInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::CreateLaunchConfigurationOutcome AsClient::CreateLaunchConfiguration(const CreateLaunchConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLaunchConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLaunchConfigurationResponse rsp = CreateLaunchConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLaunchConfigurationOutcome(rsp);
        else
            return CreateLaunchConfigurationOutcome(o.GetError());
    }
    else
    {
        return CreateLaunchConfigurationOutcome(outcome.GetError());
    }
}

void AsClient::CreateLaunchConfigurationAsync(const CreateLaunchConfigurationRequest& request, const CreateLaunchConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLaunchConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::CreateLaunchConfigurationOutcomeCallable AsClient::CreateLaunchConfigurationCallable(const CreateLaunchConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLaunchConfigurationOutcome()>>(
        [this, request]()
        {
            return this->CreateLaunchConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::CreateLifecycleHookOutcome AsClient::CreateLifecycleHook(const CreateLifecycleHookRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLifecycleHook");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLifecycleHookResponse rsp = CreateLifecycleHookResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLifecycleHookOutcome(rsp);
        else
            return CreateLifecycleHookOutcome(o.GetError());
    }
    else
    {
        return CreateLifecycleHookOutcome(outcome.GetError());
    }
}

void AsClient::CreateLifecycleHookAsync(const CreateLifecycleHookRequest& request, const CreateLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLifecycleHook(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::CreateLifecycleHookOutcomeCallable AsClient::CreateLifecycleHookCallable(const CreateLifecycleHookRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLifecycleHookOutcome()>>(
        [this, request]()
        {
            return this->CreateLifecycleHook(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::CreateNotificationConfigurationOutcome AsClient::CreateNotificationConfiguration(const CreateNotificationConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNotificationConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNotificationConfigurationResponse rsp = CreateNotificationConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNotificationConfigurationOutcome(rsp);
        else
            return CreateNotificationConfigurationOutcome(o.GetError());
    }
    else
    {
        return CreateNotificationConfigurationOutcome(outcome.GetError());
    }
}

void AsClient::CreateNotificationConfigurationAsync(const CreateNotificationConfigurationRequest& request, const CreateNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNotificationConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::CreateNotificationConfigurationOutcomeCallable AsClient::CreateNotificationConfigurationCallable(const CreateNotificationConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNotificationConfigurationOutcome()>>(
        [this, request]()
        {
            return this->CreateNotificationConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::CreateScalingPolicyOutcome AsClient::CreateScalingPolicy(const CreateScalingPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScalingPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScalingPolicyResponse rsp = CreateScalingPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScalingPolicyOutcome(rsp);
        else
            return CreateScalingPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateScalingPolicyOutcome(outcome.GetError());
    }
}

void AsClient::CreateScalingPolicyAsync(const CreateScalingPolicyRequest& request, const CreateScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateScalingPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::CreateScalingPolicyOutcomeCallable AsClient::CreateScalingPolicyCallable(const CreateScalingPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScalingPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateScalingPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::CreateScheduledActionOutcome AsClient::CreateScheduledAction(const CreateScheduledActionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScheduledAction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScheduledActionResponse rsp = CreateScheduledActionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScheduledActionOutcome(rsp);
        else
            return CreateScheduledActionOutcome(o.GetError());
    }
    else
    {
        return CreateScheduledActionOutcome(outcome.GetError());
    }
}

void AsClient::CreateScheduledActionAsync(const CreateScheduledActionRequest& request, const CreateScheduledActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateScheduledAction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::CreateScheduledActionOutcomeCallable AsClient::CreateScheduledActionCallable(const CreateScheduledActionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScheduledActionOutcome()>>(
        [this, request]()
        {
            return this->CreateScheduledAction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DeleteAutoScalingGroupOutcome AsClient::DeleteAutoScalingGroup(const DeleteAutoScalingGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAutoScalingGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAutoScalingGroupResponse rsp = DeleteAutoScalingGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAutoScalingGroupOutcome(rsp);
        else
            return DeleteAutoScalingGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteAutoScalingGroupOutcome(outcome.GetError());
    }
}

void AsClient::DeleteAutoScalingGroupAsync(const DeleteAutoScalingGroupRequest& request, const DeleteAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAutoScalingGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DeleteAutoScalingGroupOutcomeCallable AsClient::DeleteAutoScalingGroupCallable(const DeleteAutoScalingGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAutoScalingGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteAutoScalingGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DeleteLaunchConfigurationOutcome AsClient::DeleteLaunchConfiguration(const DeleteLaunchConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLaunchConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLaunchConfigurationResponse rsp = DeleteLaunchConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLaunchConfigurationOutcome(rsp);
        else
            return DeleteLaunchConfigurationOutcome(o.GetError());
    }
    else
    {
        return DeleteLaunchConfigurationOutcome(outcome.GetError());
    }
}

void AsClient::DeleteLaunchConfigurationAsync(const DeleteLaunchConfigurationRequest& request, const DeleteLaunchConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLaunchConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DeleteLaunchConfigurationOutcomeCallable AsClient::DeleteLaunchConfigurationCallable(const DeleteLaunchConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLaunchConfigurationOutcome()>>(
        [this, request]()
        {
            return this->DeleteLaunchConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DeleteLifecycleHookOutcome AsClient::DeleteLifecycleHook(const DeleteLifecycleHookRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLifecycleHook");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLifecycleHookResponse rsp = DeleteLifecycleHookResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLifecycleHookOutcome(rsp);
        else
            return DeleteLifecycleHookOutcome(o.GetError());
    }
    else
    {
        return DeleteLifecycleHookOutcome(outcome.GetError());
    }
}

void AsClient::DeleteLifecycleHookAsync(const DeleteLifecycleHookRequest& request, const DeleteLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLifecycleHook(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DeleteLifecycleHookOutcomeCallable AsClient::DeleteLifecycleHookCallable(const DeleteLifecycleHookRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLifecycleHookOutcome()>>(
        [this, request]()
        {
            return this->DeleteLifecycleHook(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DeleteNotificationConfigurationOutcome AsClient::DeleteNotificationConfiguration(const DeleteNotificationConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNotificationConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNotificationConfigurationResponse rsp = DeleteNotificationConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNotificationConfigurationOutcome(rsp);
        else
            return DeleteNotificationConfigurationOutcome(o.GetError());
    }
    else
    {
        return DeleteNotificationConfigurationOutcome(outcome.GetError());
    }
}

void AsClient::DeleteNotificationConfigurationAsync(const DeleteNotificationConfigurationRequest& request, const DeleteNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNotificationConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DeleteNotificationConfigurationOutcomeCallable AsClient::DeleteNotificationConfigurationCallable(const DeleteNotificationConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNotificationConfigurationOutcome()>>(
        [this, request]()
        {
            return this->DeleteNotificationConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DeleteScalingPolicyOutcome AsClient::DeleteScalingPolicy(const DeleteScalingPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScalingPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScalingPolicyResponse rsp = DeleteScalingPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScalingPolicyOutcome(rsp);
        else
            return DeleteScalingPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteScalingPolicyOutcome(outcome.GetError());
    }
}

void AsClient::DeleteScalingPolicyAsync(const DeleteScalingPolicyRequest& request, const DeleteScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteScalingPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DeleteScalingPolicyOutcomeCallable AsClient::DeleteScalingPolicyCallable(const DeleteScalingPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteScalingPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteScalingPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DeleteScheduledActionOutcome AsClient::DeleteScheduledAction(const DeleteScheduledActionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScheduledAction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScheduledActionResponse rsp = DeleteScheduledActionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScheduledActionOutcome(rsp);
        else
            return DeleteScheduledActionOutcome(o.GetError());
    }
    else
    {
        return DeleteScheduledActionOutcome(outcome.GetError());
    }
}

void AsClient::DeleteScheduledActionAsync(const DeleteScheduledActionRequest& request, const DeleteScheduledActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteScheduledAction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DeleteScheduledActionOutcomeCallable AsClient::DeleteScheduledActionCallable(const DeleteScheduledActionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteScheduledActionOutcome()>>(
        [this, request]()
        {
            return this->DeleteScheduledAction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DescribeAccountLimitsOutcome AsClient::DescribeAccountLimits(const DescribeAccountLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountLimitsResponse rsp = DescribeAccountLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountLimitsOutcome(rsp);
        else
            return DescribeAccountLimitsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountLimitsOutcome(outcome.GetError());
    }
}

void AsClient::DescribeAccountLimitsAsync(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountLimits(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DescribeAccountLimitsOutcomeCallable AsClient::DescribeAccountLimitsCallable(const DescribeAccountLimitsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountLimitsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccountLimits(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DescribeAutoScalingActivitiesOutcome AsClient::DescribeAutoScalingActivities(const DescribeAutoScalingActivitiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScalingActivities");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScalingActivitiesResponse rsp = DescribeAutoScalingActivitiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScalingActivitiesOutcome(rsp);
        else
            return DescribeAutoScalingActivitiesOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScalingActivitiesOutcome(outcome.GetError());
    }
}

void AsClient::DescribeAutoScalingActivitiesAsync(const DescribeAutoScalingActivitiesRequest& request, const DescribeAutoScalingActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoScalingActivities(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DescribeAutoScalingActivitiesOutcomeCallable AsClient::DescribeAutoScalingActivitiesCallable(const DescribeAutoScalingActivitiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoScalingActivitiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoScalingActivities(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DescribeAutoScalingAdvicesOutcome AsClient::DescribeAutoScalingAdvices(const DescribeAutoScalingAdvicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScalingAdvices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScalingAdvicesResponse rsp = DescribeAutoScalingAdvicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScalingAdvicesOutcome(rsp);
        else
            return DescribeAutoScalingAdvicesOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScalingAdvicesOutcome(outcome.GetError());
    }
}

void AsClient::DescribeAutoScalingAdvicesAsync(const DescribeAutoScalingAdvicesRequest& request, const DescribeAutoScalingAdvicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoScalingAdvices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DescribeAutoScalingAdvicesOutcomeCallable AsClient::DescribeAutoScalingAdvicesCallable(const DescribeAutoScalingAdvicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoScalingAdvicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoScalingAdvices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DescribeAutoScalingGroupLastActivitiesOutcome AsClient::DescribeAutoScalingGroupLastActivities(const DescribeAutoScalingGroupLastActivitiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScalingGroupLastActivities");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScalingGroupLastActivitiesResponse rsp = DescribeAutoScalingGroupLastActivitiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScalingGroupLastActivitiesOutcome(rsp);
        else
            return DescribeAutoScalingGroupLastActivitiesOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScalingGroupLastActivitiesOutcome(outcome.GetError());
    }
}

void AsClient::DescribeAutoScalingGroupLastActivitiesAsync(const DescribeAutoScalingGroupLastActivitiesRequest& request, const DescribeAutoScalingGroupLastActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoScalingGroupLastActivities(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DescribeAutoScalingGroupLastActivitiesOutcomeCallable AsClient::DescribeAutoScalingGroupLastActivitiesCallable(const DescribeAutoScalingGroupLastActivitiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoScalingGroupLastActivitiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoScalingGroupLastActivities(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DescribeAutoScalingGroupsOutcome AsClient::DescribeAutoScalingGroups(const DescribeAutoScalingGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScalingGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScalingGroupsResponse rsp = DescribeAutoScalingGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScalingGroupsOutcome(rsp);
        else
            return DescribeAutoScalingGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScalingGroupsOutcome(outcome.GetError());
    }
}

void AsClient::DescribeAutoScalingGroupsAsync(const DescribeAutoScalingGroupsRequest& request, const DescribeAutoScalingGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoScalingGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DescribeAutoScalingGroupsOutcomeCallable AsClient::DescribeAutoScalingGroupsCallable(const DescribeAutoScalingGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoScalingGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoScalingGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DescribeAutoScalingInstancesOutcome AsClient::DescribeAutoScalingInstances(const DescribeAutoScalingInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScalingInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScalingInstancesResponse rsp = DescribeAutoScalingInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScalingInstancesOutcome(rsp);
        else
            return DescribeAutoScalingInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScalingInstancesOutcome(outcome.GetError());
    }
}

void AsClient::DescribeAutoScalingInstancesAsync(const DescribeAutoScalingInstancesRequest& request, const DescribeAutoScalingInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoScalingInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DescribeAutoScalingInstancesOutcomeCallable AsClient::DescribeAutoScalingInstancesCallable(const DescribeAutoScalingInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoScalingInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoScalingInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DescribeLaunchConfigurationsOutcome AsClient::DescribeLaunchConfigurations(const DescribeLaunchConfigurationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLaunchConfigurations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLaunchConfigurationsResponse rsp = DescribeLaunchConfigurationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLaunchConfigurationsOutcome(rsp);
        else
            return DescribeLaunchConfigurationsOutcome(o.GetError());
    }
    else
    {
        return DescribeLaunchConfigurationsOutcome(outcome.GetError());
    }
}

void AsClient::DescribeLaunchConfigurationsAsync(const DescribeLaunchConfigurationsRequest& request, const DescribeLaunchConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLaunchConfigurations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DescribeLaunchConfigurationsOutcomeCallable AsClient::DescribeLaunchConfigurationsCallable(const DescribeLaunchConfigurationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLaunchConfigurationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLaunchConfigurations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DescribeLifecycleHooksOutcome AsClient::DescribeLifecycleHooks(const DescribeLifecycleHooksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLifecycleHooks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLifecycleHooksResponse rsp = DescribeLifecycleHooksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLifecycleHooksOutcome(rsp);
        else
            return DescribeLifecycleHooksOutcome(o.GetError());
    }
    else
    {
        return DescribeLifecycleHooksOutcome(outcome.GetError());
    }
}

void AsClient::DescribeLifecycleHooksAsync(const DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLifecycleHooks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DescribeLifecycleHooksOutcomeCallable AsClient::DescribeLifecycleHooksCallable(const DescribeLifecycleHooksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLifecycleHooksOutcome()>>(
        [this, request]()
        {
            return this->DescribeLifecycleHooks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DescribeNotificationConfigurationsOutcome AsClient::DescribeNotificationConfigurations(const DescribeNotificationConfigurationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotificationConfigurations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotificationConfigurationsResponse rsp = DescribeNotificationConfigurationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotificationConfigurationsOutcome(rsp);
        else
            return DescribeNotificationConfigurationsOutcome(o.GetError());
    }
    else
    {
        return DescribeNotificationConfigurationsOutcome(outcome.GetError());
    }
}

void AsClient::DescribeNotificationConfigurationsAsync(const DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNotificationConfigurations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DescribeNotificationConfigurationsOutcomeCallable AsClient::DescribeNotificationConfigurationsCallable(const DescribeNotificationConfigurationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNotificationConfigurationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeNotificationConfigurations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DescribeRefreshActivitiesOutcome AsClient::DescribeRefreshActivities(const DescribeRefreshActivitiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRefreshActivities");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRefreshActivitiesResponse rsp = DescribeRefreshActivitiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRefreshActivitiesOutcome(rsp);
        else
            return DescribeRefreshActivitiesOutcome(o.GetError());
    }
    else
    {
        return DescribeRefreshActivitiesOutcome(outcome.GetError());
    }
}

void AsClient::DescribeRefreshActivitiesAsync(const DescribeRefreshActivitiesRequest& request, const DescribeRefreshActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRefreshActivities(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DescribeRefreshActivitiesOutcomeCallable AsClient::DescribeRefreshActivitiesCallable(const DescribeRefreshActivitiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRefreshActivitiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRefreshActivities(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DescribeScalingPoliciesOutcome AsClient::DescribeScalingPolicies(const DescribeScalingPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScalingPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScalingPoliciesResponse rsp = DescribeScalingPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScalingPoliciesOutcome(rsp);
        else
            return DescribeScalingPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeScalingPoliciesOutcome(outcome.GetError());
    }
}

void AsClient::DescribeScalingPoliciesAsync(const DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScalingPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DescribeScalingPoliciesOutcomeCallable AsClient::DescribeScalingPoliciesCallable(const DescribeScalingPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScalingPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeScalingPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DescribeScheduledActionsOutcome AsClient::DescribeScheduledActions(const DescribeScheduledActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScheduledActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScheduledActionsResponse rsp = DescribeScheduledActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScheduledActionsOutcome(rsp);
        else
            return DescribeScheduledActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeScheduledActionsOutcome(outcome.GetError());
    }
}

void AsClient::DescribeScheduledActionsAsync(const DescribeScheduledActionsRequest& request, const DescribeScheduledActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScheduledActions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DescribeScheduledActionsOutcomeCallable AsClient::DescribeScheduledActionsCallable(const DescribeScheduledActionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScheduledActionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeScheduledActions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DetachInstancesOutcome AsClient::DetachInstances(const DetachInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DetachInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachInstancesResponse rsp = DetachInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachInstancesOutcome(rsp);
        else
            return DetachInstancesOutcome(o.GetError());
    }
    else
    {
        return DetachInstancesOutcome(outcome.GetError());
    }
}

void AsClient::DetachInstancesAsync(const DetachInstancesRequest& request, const DetachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DetachInstancesOutcomeCallable AsClient::DetachInstancesCallable(const DetachInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachInstancesOutcome()>>(
        [this, request]()
        {
            return this->DetachInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DetachLoadBalancersOutcome AsClient::DetachLoadBalancers(const DetachLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "DetachLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachLoadBalancersResponse rsp = DetachLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachLoadBalancersOutcome(rsp);
        else
            return DetachLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return DetachLoadBalancersOutcome(outcome.GetError());
    }
}

void AsClient::DetachLoadBalancersAsync(const DetachLoadBalancersRequest& request, const DetachLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachLoadBalancers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DetachLoadBalancersOutcomeCallable AsClient::DetachLoadBalancersCallable(const DetachLoadBalancersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachLoadBalancersOutcome()>>(
        [this, request]()
        {
            return this->DetachLoadBalancers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::DisableAutoScalingGroupOutcome AsClient::DisableAutoScalingGroup(const DisableAutoScalingGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DisableAutoScalingGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableAutoScalingGroupResponse rsp = DisableAutoScalingGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableAutoScalingGroupOutcome(rsp);
        else
            return DisableAutoScalingGroupOutcome(o.GetError());
    }
    else
    {
        return DisableAutoScalingGroupOutcome(outcome.GetError());
    }
}

void AsClient::DisableAutoScalingGroupAsync(const DisableAutoScalingGroupRequest& request, const DisableAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableAutoScalingGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::DisableAutoScalingGroupOutcomeCallable AsClient::DisableAutoScalingGroupCallable(const DisableAutoScalingGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableAutoScalingGroupOutcome()>>(
        [this, request]()
        {
            return this->DisableAutoScalingGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::EnableAutoScalingGroupOutcome AsClient::EnableAutoScalingGroup(const EnableAutoScalingGroupRequest &request)
{
    auto outcome = MakeRequest(request, "EnableAutoScalingGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableAutoScalingGroupResponse rsp = EnableAutoScalingGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableAutoScalingGroupOutcome(rsp);
        else
            return EnableAutoScalingGroupOutcome(o.GetError());
    }
    else
    {
        return EnableAutoScalingGroupOutcome(outcome.GetError());
    }
}

void AsClient::EnableAutoScalingGroupAsync(const EnableAutoScalingGroupRequest& request, const EnableAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableAutoScalingGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::EnableAutoScalingGroupOutcomeCallable AsClient::EnableAutoScalingGroupCallable(const EnableAutoScalingGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableAutoScalingGroupOutcome()>>(
        [this, request]()
        {
            return this->EnableAutoScalingGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::EnterStandbyOutcome AsClient::EnterStandby(const EnterStandbyRequest &request)
{
    auto outcome = MakeRequest(request, "EnterStandby");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnterStandbyResponse rsp = EnterStandbyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnterStandbyOutcome(rsp);
        else
            return EnterStandbyOutcome(o.GetError());
    }
    else
    {
        return EnterStandbyOutcome(outcome.GetError());
    }
}

void AsClient::EnterStandbyAsync(const EnterStandbyRequest& request, const EnterStandbyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnterStandby(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::EnterStandbyOutcomeCallable AsClient::EnterStandbyCallable(const EnterStandbyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnterStandbyOutcome()>>(
        [this, request]()
        {
            return this->EnterStandby(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::ExecuteScalingPolicyOutcome AsClient::ExecuteScalingPolicy(const ExecuteScalingPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ExecuteScalingPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExecuteScalingPolicyResponse rsp = ExecuteScalingPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExecuteScalingPolicyOutcome(rsp);
        else
            return ExecuteScalingPolicyOutcome(o.GetError());
    }
    else
    {
        return ExecuteScalingPolicyOutcome(outcome.GetError());
    }
}

void AsClient::ExecuteScalingPolicyAsync(const ExecuteScalingPolicyRequest& request, const ExecuteScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExecuteScalingPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::ExecuteScalingPolicyOutcomeCallable AsClient::ExecuteScalingPolicyCallable(const ExecuteScalingPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExecuteScalingPolicyOutcome()>>(
        [this, request]()
        {
            return this->ExecuteScalingPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::ExitStandbyOutcome AsClient::ExitStandby(const ExitStandbyRequest &request)
{
    auto outcome = MakeRequest(request, "ExitStandby");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExitStandbyResponse rsp = ExitStandbyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExitStandbyOutcome(rsp);
        else
            return ExitStandbyOutcome(o.GetError());
    }
    else
    {
        return ExitStandbyOutcome(outcome.GetError());
    }
}

void AsClient::ExitStandbyAsync(const ExitStandbyRequest& request, const ExitStandbyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExitStandby(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::ExitStandbyOutcomeCallable AsClient::ExitStandbyCallable(const ExitStandbyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExitStandbyOutcome()>>(
        [this, request]()
        {
            return this->ExitStandby(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::ModifyAutoScalingGroupOutcome AsClient::ModifyAutoScalingGroup(const ModifyAutoScalingGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoScalingGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoScalingGroupResponse rsp = ModifyAutoScalingGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoScalingGroupOutcome(rsp);
        else
            return ModifyAutoScalingGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoScalingGroupOutcome(outcome.GetError());
    }
}

void AsClient::ModifyAutoScalingGroupAsync(const ModifyAutoScalingGroupRequest& request, const ModifyAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAutoScalingGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::ModifyAutoScalingGroupOutcomeCallable AsClient::ModifyAutoScalingGroupCallable(const ModifyAutoScalingGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAutoScalingGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyAutoScalingGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::ModifyDesiredCapacityOutcome AsClient::ModifyDesiredCapacity(const ModifyDesiredCapacityRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDesiredCapacity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDesiredCapacityResponse rsp = ModifyDesiredCapacityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDesiredCapacityOutcome(rsp);
        else
            return ModifyDesiredCapacityOutcome(o.GetError());
    }
    else
    {
        return ModifyDesiredCapacityOutcome(outcome.GetError());
    }
}

void AsClient::ModifyDesiredCapacityAsync(const ModifyDesiredCapacityRequest& request, const ModifyDesiredCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDesiredCapacity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::ModifyDesiredCapacityOutcomeCallable AsClient::ModifyDesiredCapacityCallable(const ModifyDesiredCapacityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDesiredCapacityOutcome()>>(
        [this, request]()
        {
            return this->ModifyDesiredCapacity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::ModifyLaunchConfigurationAttributesOutcome AsClient::ModifyLaunchConfigurationAttributes(const ModifyLaunchConfigurationAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLaunchConfigurationAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLaunchConfigurationAttributesResponse rsp = ModifyLaunchConfigurationAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLaunchConfigurationAttributesOutcome(rsp);
        else
            return ModifyLaunchConfigurationAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyLaunchConfigurationAttributesOutcome(outcome.GetError());
    }
}

void AsClient::ModifyLaunchConfigurationAttributesAsync(const ModifyLaunchConfigurationAttributesRequest& request, const ModifyLaunchConfigurationAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLaunchConfigurationAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::ModifyLaunchConfigurationAttributesOutcomeCallable AsClient::ModifyLaunchConfigurationAttributesCallable(const ModifyLaunchConfigurationAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLaunchConfigurationAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyLaunchConfigurationAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::ModifyLifecycleHookOutcome AsClient::ModifyLifecycleHook(const ModifyLifecycleHookRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLifecycleHook");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLifecycleHookResponse rsp = ModifyLifecycleHookResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLifecycleHookOutcome(rsp);
        else
            return ModifyLifecycleHookOutcome(o.GetError());
    }
    else
    {
        return ModifyLifecycleHookOutcome(outcome.GetError());
    }
}

void AsClient::ModifyLifecycleHookAsync(const ModifyLifecycleHookRequest& request, const ModifyLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLifecycleHook(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::ModifyLifecycleHookOutcomeCallable AsClient::ModifyLifecycleHookCallable(const ModifyLifecycleHookRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLifecycleHookOutcome()>>(
        [this, request]()
        {
            return this->ModifyLifecycleHook(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::ModifyLoadBalancerTargetAttributesOutcome AsClient::ModifyLoadBalancerTargetAttributes(const ModifyLoadBalancerTargetAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancerTargetAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancerTargetAttributesResponse rsp = ModifyLoadBalancerTargetAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancerTargetAttributesOutcome(rsp);
        else
            return ModifyLoadBalancerTargetAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancerTargetAttributesOutcome(outcome.GetError());
    }
}

void AsClient::ModifyLoadBalancerTargetAttributesAsync(const ModifyLoadBalancerTargetAttributesRequest& request, const ModifyLoadBalancerTargetAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoadBalancerTargetAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::ModifyLoadBalancerTargetAttributesOutcomeCallable AsClient::ModifyLoadBalancerTargetAttributesCallable(const ModifyLoadBalancerTargetAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoadBalancerTargetAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoadBalancerTargetAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::ModifyLoadBalancersOutcome AsClient::ModifyLoadBalancers(const ModifyLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancersResponse rsp = ModifyLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancersOutcome(rsp);
        else
            return ModifyLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancersOutcome(outcome.GetError());
    }
}

void AsClient::ModifyLoadBalancersAsync(const ModifyLoadBalancersRequest& request, const ModifyLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoadBalancers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::ModifyLoadBalancersOutcomeCallable AsClient::ModifyLoadBalancersCallable(const ModifyLoadBalancersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoadBalancersOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoadBalancers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::ModifyNotificationConfigurationOutcome AsClient::ModifyNotificationConfiguration(const ModifyNotificationConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNotificationConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNotificationConfigurationResponse rsp = ModifyNotificationConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNotificationConfigurationOutcome(rsp);
        else
            return ModifyNotificationConfigurationOutcome(o.GetError());
    }
    else
    {
        return ModifyNotificationConfigurationOutcome(outcome.GetError());
    }
}

void AsClient::ModifyNotificationConfigurationAsync(const ModifyNotificationConfigurationRequest& request, const ModifyNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNotificationConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::ModifyNotificationConfigurationOutcomeCallable AsClient::ModifyNotificationConfigurationCallable(const ModifyNotificationConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNotificationConfigurationOutcome()>>(
        [this, request]()
        {
            return this->ModifyNotificationConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::ModifyScalingPolicyOutcome AsClient::ModifyScalingPolicy(const ModifyScalingPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyScalingPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyScalingPolicyResponse rsp = ModifyScalingPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyScalingPolicyOutcome(rsp);
        else
            return ModifyScalingPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyScalingPolicyOutcome(outcome.GetError());
    }
}

void AsClient::ModifyScalingPolicyAsync(const ModifyScalingPolicyRequest& request, const ModifyScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyScalingPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::ModifyScalingPolicyOutcomeCallable AsClient::ModifyScalingPolicyCallable(const ModifyScalingPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyScalingPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyScalingPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::ModifyScheduledActionOutcome AsClient::ModifyScheduledAction(const ModifyScheduledActionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyScheduledAction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyScheduledActionResponse rsp = ModifyScheduledActionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyScheduledActionOutcome(rsp);
        else
            return ModifyScheduledActionOutcome(o.GetError());
    }
    else
    {
        return ModifyScheduledActionOutcome(outcome.GetError());
    }
}

void AsClient::ModifyScheduledActionAsync(const ModifyScheduledActionRequest& request, const ModifyScheduledActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyScheduledAction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::ModifyScheduledActionOutcomeCallable AsClient::ModifyScheduledActionCallable(const ModifyScheduledActionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyScheduledActionOutcome()>>(
        [this, request]()
        {
            return this->ModifyScheduledAction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::RemoveInstancesOutcome AsClient::RemoveInstances(const RemoveInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveInstancesResponse rsp = RemoveInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveInstancesOutcome(rsp);
        else
            return RemoveInstancesOutcome(o.GetError());
    }
    else
    {
        return RemoveInstancesOutcome(outcome.GetError());
    }
}

void AsClient::RemoveInstancesAsync(const RemoveInstancesRequest& request, const RemoveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::RemoveInstancesOutcomeCallable AsClient::RemoveInstancesCallable(const RemoveInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveInstancesOutcome()>>(
        [this, request]()
        {
            return this->RemoveInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::ResumeInstanceRefreshOutcome AsClient::ResumeInstanceRefresh(const ResumeInstanceRefreshRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeInstanceRefresh");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeInstanceRefreshResponse rsp = ResumeInstanceRefreshResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeInstanceRefreshOutcome(rsp);
        else
            return ResumeInstanceRefreshOutcome(o.GetError());
    }
    else
    {
        return ResumeInstanceRefreshOutcome(outcome.GetError());
    }
}

void AsClient::ResumeInstanceRefreshAsync(const ResumeInstanceRefreshRequest& request, const ResumeInstanceRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeInstanceRefresh(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::ResumeInstanceRefreshOutcomeCallable AsClient::ResumeInstanceRefreshCallable(const ResumeInstanceRefreshRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeInstanceRefreshOutcome()>>(
        [this, request]()
        {
            return this->ResumeInstanceRefresh(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::RollbackInstanceRefreshOutcome AsClient::RollbackInstanceRefresh(const RollbackInstanceRefreshRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackInstanceRefresh");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackInstanceRefreshResponse rsp = RollbackInstanceRefreshResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackInstanceRefreshOutcome(rsp);
        else
            return RollbackInstanceRefreshOutcome(o.GetError());
    }
    else
    {
        return RollbackInstanceRefreshOutcome(outcome.GetError());
    }
}

void AsClient::RollbackInstanceRefreshAsync(const RollbackInstanceRefreshRequest& request, const RollbackInstanceRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollbackInstanceRefresh(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::RollbackInstanceRefreshOutcomeCallable AsClient::RollbackInstanceRefreshCallable(const RollbackInstanceRefreshRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollbackInstanceRefreshOutcome()>>(
        [this, request]()
        {
            return this->RollbackInstanceRefresh(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::ScaleInInstancesOutcome AsClient::ScaleInInstances(const ScaleInInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleInInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleInInstancesResponse rsp = ScaleInInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleInInstancesOutcome(rsp);
        else
            return ScaleInInstancesOutcome(o.GetError());
    }
    else
    {
        return ScaleInInstancesOutcome(outcome.GetError());
    }
}

void AsClient::ScaleInInstancesAsync(const ScaleInInstancesRequest& request, const ScaleInInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleInInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::ScaleInInstancesOutcomeCallable AsClient::ScaleInInstancesCallable(const ScaleInInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleInInstancesOutcome()>>(
        [this, request]()
        {
            return this->ScaleInInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::ScaleOutInstancesOutcome AsClient::ScaleOutInstances(const ScaleOutInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleOutInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleOutInstancesResponse rsp = ScaleOutInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleOutInstancesOutcome(rsp);
        else
            return ScaleOutInstancesOutcome(o.GetError());
    }
    else
    {
        return ScaleOutInstancesOutcome(outcome.GetError());
    }
}

void AsClient::ScaleOutInstancesAsync(const ScaleOutInstancesRequest& request, const ScaleOutInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleOutInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::ScaleOutInstancesOutcomeCallable AsClient::ScaleOutInstancesCallable(const ScaleOutInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleOutInstancesOutcome()>>(
        [this, request]()
        {
            return this->ScaleOutInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::SetInstancesProtectionOutcome AsClient::SetInstancesProtection(const SetInstancesProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "SetInstancesProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetInstancesProtectionResponse rsp = SetInstancesProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetInstancesProtectionOutcome(rsp);
        else
            return SetInstancesProtectionOutcome(o.GetError());
    }
    else
    {
        return SetInstancesProtectionOutcome(outcome.GetError());
    }
}

void AsClient::SetInstancesProtectionAsync(const SetInstancesProtectionRequest& request, const SetInstancesProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetInstancesProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::SetInstancesProtectionOutcomeCallable AsClient::SetInstancesProtectionCallable(const SetInstancesProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetInstancesProtectionOutcome()>>(
        [this, request]()
        {
            return this->SetInstancesProtection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::StartAutoScalingInstancesOutcome AsClient::StartAutoScalingInstances(const StartAutoScalingInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StartAutoScalingInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartAutoScalingInstancesResponse rsp = StartAutoScalingInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartAutoScalingInstancesOutcome(rsp);
        else
            return StartAutoScalingInstancesOutcome(o.GetError());
    }
    else
    {
        return StartAutoScalingInstancesOutcome(outcome.GetError());
    }
}

void AsClient::StartAutoScalingInstancesAsync(const StartAutoScalingInstancesRequest& request, const StartAutoScalingInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartAutoScalingInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::StartAutoScalingInstancesOutcomeCallable AsClient::StartAutoScalingInstancesCallable(const StartAutoScalingInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartAutoScalingInstancesOutcome()>>(
        [this, request]()
        {
            return this->StartAutoScalingInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::StartInstanceRefreshOutcome AsClient::StartInstanceRefresh(const StartInstanceRefreshRequest &request)
{
    auto outcome = MakeRequest(request, "StartInstanceRefresh");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartInstanceRefreshResponse rsp = StartInstanceRefreshResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartInstanceRefreshOutcome(rsp);
        else
            return StartInstanceRefreshOutcome(o.GetError());
    }
    else
    {
        return StartInstanceRefreshOutcome(outcome.GetError());
    }
}

void AsClient::StartInstanceRefreshAsync(const StartInstanceRefreshRequest& request, const StartInstanceRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartInstanceRefresh(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::StartInstanceRefreshOutcomeCallable AsClient::StartInstanceRefreshCallable(const StartInstanceRefreshRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartInstanceRefreshOutcome()>>(
        [this, request]()
        {
            return this->StartInstanceRefresh(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::StopAutoScalingInstancesOutcome AsClient::StopAutoScalingInstances(const StopAutoScalingInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StopAutoScalingInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopAutoScalingInstancesResponse rsp = StopAutoScalingInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopAutoScalingInstancesOutcome(rsp);
        else
            return StopAutoScalingInstancesOutcome(o.GetError());
    }
    else
    {
        return StopAutoScalingInstancesOutcome(outcome.GetError());
    }
}

void AsClient::StopAutoScalingInstancesAsync(const StopAutoScalingInstancesRequest& request, const StopAutoScalingInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopAutoScalingInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::StopAutoScalingInstancesOutcomeCallable AsClient::StopAutoScalingInstancesCallable(const StopAutoScalingInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopAutoScalingInstancesOutcome()>>(
        [this, request]()
        {
            return this->StopAutoScalingInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::StopInstanceRefreshOutcome AsClient::StopInstanceRefresh(const StopInstanceRefreshRequest &request)
{
    auto outcome = MakeRequest(request, "StopInstanceRefresh");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopInstanceRefreshResponse rsp = StopInstanceRefreshResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopInstanceRefreshOutcome(rsp);
        else
            return StopInstanceRefreshOutcome(o.GetError());
    }
    else
    {
        return StopInstanceRefreshOutcome(outcome.GetError());
    }
}

void AsClient::StopInstanceRefreshAsync(const StopInstanceRefreshRequest& request, const StopInstanceRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopInstanceRefresh(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::StopInstanceRefreshOutcomeCallable AsClient::StopInstanceRefreshCallable(const StopInstanceRefreshRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopInstanceRefreshOutcome()>>(
        [this, request]()
        {
            return this->StopInstanceRefresh(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::UpgradeLaunchConfigurationOutcome AsClient::UpgradeLaunchConfiguration(const UpgradeLaunchConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeLaunchConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeLaunchConfigurationResponse rsp = UpgradeLaunchConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeLaunchConfigurationOutcome(rsp);
        else
            return UpgradeLaunchConfigurationOutcome(o.GetError());
    }
    else
    {
        return UpgradeLaunchConfigurationOutcome(outcome.GetError());
    }
}

void AsClient::UpgradeLaunchConfigurationAsync(const UpgradeLaunchConfigurationRequest& request, const UpgradeLaunchConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeLaunchConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::UpgradeLaunchConfigurationOutcomeCallable AsClient::UpgradeLaunchConfigurationCallable(const UpgradeLaunchConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeLaunchConfigurationOutcome()>>(
        [this, request]()
        {
            return this->UpgradeLaunchConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsClient::UpgradeLifecycleHookOutcome AsClient::UpgradeLifecycleHook(const UpgradeLifecycleHookRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeLifecycleHook");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeLifecycleHookResponse rsp = UpgradeLifecycleHookResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeLifecycleHookOutcome(rsp);
        else
            return UpgradeLifecycleHookOutcome(o.GetError());
    }
    else
    {
        return UpgradeLifecycleHookOutcome(outcome.GetError());
    }
}

void AsClient::UpgradeLifecycleHookAsync(const UpgradeLifecycleHookRequest& request, const UpgradeLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeLifecycleHook(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsClient::UpgradeLifecycleHookOutcomeCallable AsClient::UpgradeLifecycleHookCallable(const UpgradeLifecycleHookRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeLifecycleHookOutcome()>>(
        [this, request]()
        {
            return this->UpgradeLifecycleHook(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

