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
    using Req = const AttachInstancesRequest&;
    using Resp = AttachInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "AttachInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::AttachInstancesOutcomeCallable AsClient::AttachInstancesCallable(const AttachInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachInstancesOutcome>>();
    AttachInstancesAsync(
    request,
    [prom](
        const AsClient*,
        const AttachInstancesRequest&,
        AttachInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AttachLoadBalancersRequest&;
    using Resp = AttachLoadBalancersResponse;

    DoRequestAsync<Req, Resp>(
        "AttachLoadBalancers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::AttachLoadBalancersOutcomeCallable AsClient::AttachLoadBalancersCallable(const AttachLoadBalancersRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachLoadBalancersOutcome>>();
    AttachLoadBalancersAsync(
    request,
    [prom](
        const AsClient*,
        const AttachLoadBalancersRequest&,
        AttachLoadBalancersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CancelInstanceRefreshRequest&;
    using Resp = CancelInstanceRefreshResponse;

    DoRequestAsync<Req, Resp>(
        "CancelInstanceRefresh", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::CancelInstanceRefreshOutcomeCallable AsClient::CancelInstanceRefreshCallable(const CancelInstanceRefreshRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelInstanceRefreshOutcome>>();
    CancelInstanceRefreshAsync(
    request,
    [prom](
        const AsClient*,
        const CancelInstanceRefreshRequest&,
        CancelInstanceRefreshOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ClearLaunchConfigurationAttributesRequest&;
    using Resp = ClearLaunchConfigurationAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ClearLaunchConfigurationAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::ClearLaunchConfigurationAttributesOutcomeCallable AsClient::ClearLaunchConfigurationAttributesCallable(const ClearLaunchConfigurationAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ClearLaunchConfigurationAttributesOutcome>>();
    ClearLaunchConfigurationAttributesAsync(
    request,
    [prom](
        const AsClient*,
        const ClearLaunchConfigurationAttributesRequest&,
        ClearLaunchConfigurationAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CompleteLifecycleActionRequest&;
    using Resp = CompleteLifecycleActionResponse;

    DoRequestAsync<Req, Resp>(
        "CompleteLifecycleAction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::CompleteLifecycleActionOutcomeCallable AsClient::CompleteLifecycleActionCallable(const CompleteLifecycleActionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CompleteLifecycleActionOutcome>>();
    CompleteLifecycleActionAsync(
    request,
    [prom](
        const AsClient*,
        const CompleteLifecycleActionRequest&,
        CompleteLifecycleActionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAutoScalingGroupRequest&;
    using Resp = CreateAutoScalingGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAutoScalingGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::CreateAutoScalingGroupOutcomeCallable AsClient::CreateAutoScalingGroupCallable(const CreateAutoScalingGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAutoScalingGroupOutcome>>();
    CreateAutoScalingGroupAsync(
    request,
    [prom](
        const AsClient*,
        const CreateAutoScalingGroupRequest&,
        CreateAutoScalingGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAutoScalingGroupFromInstanceRequest&;
    using Resp = CreateAutoScalingGroupFromInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAutoScalingGroupFromInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::CreateAutoScalingGroupFromInstanceOutcomeCallable AsClient::CreateAutoScalingGroupFromInstanceCallable(const CreateAutoScalingGroupFromInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAutoScalingGroupFromInstanceOutcome>>();
    CreateAutoScalingGroupFromInstanceAsync(
    request,
    [prom](
        const AsClient*,
        const CreateAutoScalingGroupFromInstanceRequest&,
        CreateAutoScalingGroupFromInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateLaunchConfigurationRequest&;
    using Resp = CreateLaunchConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLaunchConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::CreateLaunchConfigurationOutcomeCallable AsClient::CreateLaunchConfigurationCallable(const CreateLaunchConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLaunchConfigurationOutcome>>();
    CreateLaunchConfigurationAsync(
    request,
    [prom](
        const AsClient*,
        const CreateLaunchConfigurationRequest&,
        CreateLaunchConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateLifecycleHookRequest&;
    using Resp = CreateLifecycleHookResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLifecycleHook", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::CreateLifecycleHookOutcomeCallable AsClient::CreateLifecycleHookCallable(const CreateLifecycleHookRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLifecycleHookOutcome>>();
    CreateLifecycleHookAsync(
    request,
    [prom](
        const AsClient*,
        const CreateLifecycleHookRequest&,
        CreateLifecycleHookOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateNotificationConfigurationRequest&;
    using Resp = CreateNotificationConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNotificationConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::CreateNotificationConfigurationOutcomeCallable AsClient::CreateNotificationConfigurationCallable(const CreateNotificationConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNotificationConfigurationOutcome>>();
    CreateNotificationConfigurationAsync(
    request,
    [prom](
        const AsClient*,
        const CreateNotificationConfigurationRequest&,
        CreateNotificationConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateScalingPolicyRequest&;
    using Resp = CreateScalingPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateScalingPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::CreateScalingPolicyOutcomeCallable AsClient::CreateScalingPolicyCallable(const CreateScalingPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateScalingPolicyOutcome>>();
    CreateScalingPolicyAsync(
    request,
    [prom](
        const AsClient*,
        const CreateScalingPolicyRequest&,
        CreateScalingPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateScheduledActionRequest&;
    using Resp = CreateScheduledActionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateScheduledAction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::CreateScheduledActionOutcomeCallable AsClient::CreateScheduledActionCallable(const CreateScheduledActionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateScheduledActionOutcome>>();
    CreateScheduledActionAsync(
    request,
    [prom](
        const AsClient*,
        const CreateScheduledActionRequest&,
        CreateScheduledActionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAutoScalingGroupRequest&;
    using Resp = DeleteAutoScalingGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAutoScalingGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DeleteAutoScalingGroupOutcomeCallable AsClient::DeleteAutoScalingGroupCallable(const DeleteAutoScalingGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAutoScalingGroupOutcome>>();
    DeleteAutoScalingGroupAsync(
    request,
    [prom](
        const AsClient*,
        const DeleteAutoScalingGroupRequest&,
        DeleteAutoScalingGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteLaunchConfigurationRequest&;
    using Resp = DeleteLaunchConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLaunchConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DeleteLaunchConfigurationOutcomeCallable AsClient::DeleteLaunchConfigurationCallable(const DeleteLaunchConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLaunchConfigurationOutcome>>();
    DeleteLaunchConfigurationAsync(
    request,
    [prom](
        const AsClient*,
        const DeleteLaunchConfigurationRequest&,
        DeleteLaunchConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteLifecycleHookRequest&;
    using Resp = DeleteLifecycleHookResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLifecycleHook", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DeleteLifecycleHookOutcomeCallable AsClient::DeleteLifecycleHookCallable(const DeleteLifecycleHookRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLifecycleHookOutcome>>();
    DeleteLifecycleHookAsync(
    request,
    [prom](
        const AsClient*,
        const DeleteLifecycleHookRequest&,
        DeleteLifecycleHookOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteNotificationConfigurationRequest&;
    using Resp = DeleteNotificationConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNotificationConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DeleteNotificationConfigurationOutcomeCallable AsClient::DeleteNotificationConfigurationCallable(const DeleteNotificationConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNotificationConfigurationOutcome>>();
    DeleteNotificationConfigurationAsync(
    request,
    [prom](
        const AsClient*,
        const DeleteNotificationConfigurationRequest&,
        DeleteNotificationConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteScalingPolicyRequest&;
    using Resp = DeleteScalingPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteScalingPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DeleteScalingPolicyOutcomeCallable AsClient::DeleteScalingPolicyCallable(const DeleteScalingPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteScalingPolicyOutcome>>();
    DeleteScalingPolicyAsync(
    request,
    [prom](
        const AsClient*,
        const DeleteScalingPolicyRequest&,
        DeleteScalingPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteScheduledActionRequest&;
    using Resp = DeleteScheduledActionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteScheduledAction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DeleteScheduledActionOutcomeCallable AsClient::DeleteScheduledActionCallable(const DeleteScheduledActionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteScheduledActionOutcome>>();
    DeleteScheduledActionAsync(
    request,
    [prom](
        const AsClient*,
        const DeleteScheduledActionRequest&,
        DeleteScheduledActionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAccountLimitsRequest&;
    using Resp = DescribeAccountLimitsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountLimits", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DescribeAccountLimitsOutcomeCallable AsClient::DescribeAccountLimitsCallable(const DescribeAccountLimitsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountLimitsOutcome>>();
    DescribeAccountLimitsAsync(
    request,
    [prom](
        const AsClient*,
        const DescribeAccountLimitsRequest&,
        DescribeAccountLimitsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAutoScalingActivitiesRequest&;
    using Resp = DescribeAutoScalingActivitiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoScalingActivities", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DescribeAutoScalingActivitiesOutcomeCallable AsClient::DescribeAutoScalingActivitiesCallable(const DescribeAutoScalingActivitiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoScalingActivitiesOutcome>>();
    DescribeAutoScalingActivitiesAsync(
    request,
    [prom](
        const AsClient*,
        const DescribeAutoScalingActivitiesRequest&,
        DescribeAutoScalingActivitiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAutoScalingAdvicesRequest&;
    using Resp = DescribeAutoScalingAdvicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoScalingAdvices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DescribeAutoScalingAdvicesOutcomeCallable AsClient::DescribeAutoScalingAdvicesCallable(const DescribeAutoScalingAdvicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoScalingAdvicesOutcome>>();
    DescribeAutoScalingAdvicesAsync(
    request,
    [prom](
        const AsClient*,
        const DescribeAutoScalingAdvicesRequest&,
        DescribeAutoScalingAdvicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAutoScalingGroupLastActivitiesRequest&;
    using Resp = DescribeAutoScalingGroupLastActivitiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoScalingGroupLastActivities", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DescribeAutoScalingGroupLastActivitiesOutcomeCallable AsClient::DescribeAutoScalingGroupLastActivitiesCallable(const DescribeAutoScalingGroupLastActivitiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoScalingGroupLastActivitiesOutcome>>();
    DescribeAutoScalingGroupLastActivitiesAsync(
    request,
    [prom](
        const AsClient*,
        const DescribeAutoScalingGroupLastActivitiesRequest&,
        DescribeAutoScalingGroupLastActivitiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAutoScalingGroupsRequest&;
    using Resp = DescribeAutoScalingGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoScalingGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DescribeAutoScalingGroupsOutcomeCallable AsClient::DescribeAutoScalingGroupsCallable(const DescribeAutoScalingGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoScalingGroupsOutcome>>();
    DescribeAutoScalingGroupsAsync(
    request,
    [prom](
        const AsClient*,
        const DescribeAutoScalingGroupsRequest&,
        DescribeAutoScalingGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAutoScalingInstancesRequest&;
    using Resp = DescribeAutoScalingInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoScalingInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DescribeAutoScalingInstancesOutcomeCallable AsClient::DescribeAutoScalingInstancesCallable(const DescribeAutoScalingInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoScalingInstancesOutcome>>();
    DescribeAutoScalingInstancesAsync(
    request,
    [prom](
        const AsClient*,
        const DescribeAutoScalingInstancesRequest&,
        DescribeAutoScalingInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeLaunchConfigurationsRequest&;
    using Resp = DescribeLaunchConfigurationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLaunchConfigurations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DescribeLaunchConfigurationsOutcomeCallable AsClient::DescribeLaunchConfigurationsCallable(const DescribeLaunchConfigurationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLaunchConfigurationsOutcome>>();
    DescribeLaunchConfigurationsAsync(
    request,
    [prom](
        const AsClient*,
        const DescribeLaunchConfigurationsRequest&,
        DescribeLaunchConfigurationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeLifecycleHooksRequest&;
    using Resp = DescribeLifecycleHooksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLifecycleHooks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DescribeLifecycleHooksOutcomeCallable AsClient::DescribeLifecycleHooksCallable(const DescribeLifecycleHooksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLifecycleHooksOutcome>>();
    DescribeLifecycleHooksAsync(
    request,
    [prom](
        const AsClient*,
        const DescribeLifecycleHooksRequest&,
        DescribeLifecycleHooksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeNotificationConfigurationsRequest&;
    using Resp = DescribeNotificationConfigurationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotificationConfigurations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DescribeNotificationConfigurationsOutcomeCallable AsClient::DescribeNotificationConfigurationsCallable(const DescribeNotificationConfigurationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotificationConfigurationsOutcome>>();
    DescribeNotificationConfigurationsAsync(
    request,
    [prom](
        const AsClient*,
        const DescribeNotificationConfigurationsRequest&,
        DescribeNotificationConfigurationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRefreshActivitiesRequest&;
    using Resp = DescribeRefreshActivitiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRefreshActivities", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DescribeRefreshActivitiesOutcomeCallable AsClient::DescribeRefreshActivitiesCallable(const DescribeRefreshActivitiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRefreshActivitiesOutcome>>();
    DescribeRefreshActivitiesAsync(
    request,
    [prom](
        const AsClient*,
        const DescribeRefreshActivitiesRequest&,
        DescribeRefreshActivitiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeScalingPoliciesRequest&;
    using Resp = DescribeScalingPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScalingPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DescribeScalingPoliciesOutcomeCallable AsClient::DescribeScalingPoliciesCallable(const DescribeScalingPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScalingPoliciesOutcome>>();
    DescribeScalingPoliciesAsync(
    request,
    [prom](
        const AsClient*,
        const DescribeScalingPoliciesRequest&,
        DescribeScalingPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeScheduledActionsRequest&;
    using Resp = DescribeScheduledActionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScheduledActions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DescribeScheduledActionsOutcomeCallable AsClient::DescribeScheduledActionsCallable(const DescribeScheduledActionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScheduledActionsOutcome>>();
    DescribeScheduledActionsAsync(
    request,
    [prom](
        const AsClient*,
        const DescribeScheduledActionsRequest&,
        DescribeScheduledActionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DetachInstancesRequest&;
    using Resp = DetachInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DetachInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DetachInstancesOutcomeCallable AsClient::DetachInstancesCallable(const DetachInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachInstancesOutcome>>();
    DetachInstancesAsync(
    request,
    [prom](
        const AsClient*,
        const DetachInstancesRequest&,
        DetachInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DetachLoadBalancersRequest&;
    using Resp = DetachLoadBalancersResponse;

    DoRequestAsync<Req, Resp>(
        "DetachLoadBalancers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DetachLoadBalancersOutcomeCallable AsClient::DetachLoadBalancersCallable(const DetachLoadBalancersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachLoadBalancersOutcome>>();
    DetachLoadBalancersAsync(
    request,
    [prom](
        const AsClient*,
        const DetachLoadBalancersRequest&,
        DetachLoadBalancersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DisableAutoScalingGroupRequest&;
    using Resp = DisableAutoScalingGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DisableAutoScalingGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::DisableAutoScalingGroupOutcomeCallable AsClient::DisableAutoScalingGroupCallable(const DisableAutoScalingGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableAutoScalingGroupOutcome>>();
    DisableAutoScalingGroupAsync(
    request,
    [prom](
        const AsClient*,
        const DisableAutoScalingGroupRequest&,
        DisableAutoScalingGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const EnableAutoScalingGroupRequest&;
    using Resp = EnableAutoScalingGroupResponse;

    DoRequestAsync<Req, Resp>(
        "EnableAutoScalingGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::EnableAutoScalingGroupOutcomeCallable AsClient::EnableAutoScalingGroupCallable(const EnableAutoScalingGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableAutoScalingGroupOutcome>>();
    EnableAutoScalingGroupAsync(
    request,
    [prom](
        const AsClient*,
        const EnableAutoScalingGroupRequest&,
        EnableAutoScalingGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const EnterStandbyRequest&;
    using Resp = EnterStandbyResponse;

    DoRequestAsync<Req, Resp>(
        "EnterStandby", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::EnterStandbyOutcomeCallable AsClient::EnterStandbyCallable(const EnterStandbyRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnterStandbyOutcome>>();
    EnterStandbyAsync(
    request,
    [prom](
        const AsClient*,
        const EnterStandbyRequest&,
        EnterStandbyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ExecuteScalingPolicyRequest&;
    using Resp = ExecuteScalingPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ExecuteScalingPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::ExecuteScalingPolicyOutcomeCallable AsClient::ExecuteScalingPolicyCallable(const ExecuteScalingPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExecuteScalingPolicyOutcome>>();
    ExecuteScalingPolicyAsync(
    request,
    [prom](
        const AsClient*,
        const ExecuteScalingPolicyRequest&,
        ExecuteScalingPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ExitStandbyRequest&;
    using Resp = ExitStandbyResponse;

    DoRequestAsync<Req, Resp>(
        "ExitStandby", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::ExitStandbyOutcomeCallable AsClient::ExitStandbyCallable(const ExitStandbyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExitStandbyOutcome>>();
    ExitStandbyAsync(
    request,
    [prom](
        const AsClient*,
        const ExitStandbyRequest&,
        ExitStandbyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAutoScalingGroupRequest&;
    using Resp = ModifyAutoScalingGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoScalingGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::ModifyAutoScalingGroupOutcomeCallable AsClient::ModifyAutoScalingGroupCallable(const ModifyAutoScalingGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoScalingGroupOutcome>>();
    ModifyAutoScalingGroupAsync(
    request,
    [prom](
        const AsClient*,
        const ModifyAutoScalingGroupRequest&,
        ModifyAutoScalingGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDesiredCapacityRequest&;
    using Resp = ModifyDesiredCapacityResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDesiredCapacity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::ModifyDesiredCapacityOutcomeCallable AsClient::ModifyDesiredCapacityCallable(const ModifyDesiredCapacityRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDesiredCapacityOutcome>>();
    ModifyDesiredCapacityAsync(
    request,
    [prom](
        const AsClient*,
        const ModifyDesiredCapacityRequest&,
        ModifyDesiredCapacityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyLaunchConfigurationAttributesRequest&;
    using Resp = ModifyLaunchConfigurationAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLaunchConfigurationAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::ModifyLaunchConfigurationAttributesOutcomeCallable AsClient::ModifyLaunchConfigurationAttributesCallable(const ModifyLaunchConfigurationAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLaunchConfigurationAttributesOutcome>>();
    ModifyLaunchConfigurationAttributesAsync(
    request,
    [prom](
        const AsClient*,
        const ModifyLaunchConfigurationAttributesRequest&,
        ModifyLaunchConfigurationAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyLifecycleHookRequest&;
    using Resp = ModifyLifecycleHookResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLifecycleHook", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::ModifyLifecycleHookOutcomeCallable AsClient::ModifyLifecycleHookCallable(const ModifyLifecycleHookRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLifecycleHookOutcome>>();
    ModifyLifecycleHookAsync(
    request,
    [prom](
        const AsClient*,
        const ModifyLifecycleHookRequest&,
        ModifyLifecycleHookOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyLoadBalancerTargetAttributesRequest&;
    using Resp = ModifyLoadBalancerTargetAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoadBalancerTargetAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::ModifyLoadBalancerTargetAttributesOutcomeCallable AsClient::ModifyLoadBalancerTargetAttributesCallable(const ModifyLoadBalancerTargetAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoadBalancerTargetAttributesOutcome>>();
    ModifyLoadBalancerTargetAttributesAsync(
    request,
    [prom](
        const AsClient*,
        const ModifyLoadBalancerTargetAttributesRequest&,
        ModifyLoadBalancerTargetAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyLoadBalancersRequest&;
    using Resp = ModifyLoadBalancersResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoadBalancers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::ModifyLoadBalancersOutcomeCallable AsClient::ModifyLoadBalancersCallable(const ModifyLoadBalancersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoadBalancersOutcome>>();
    ModifyLoadBalancersAsync(
    request,
    [prom](
        const AsClient*,
        const ModifyLoadBalancersRequest&,
        ModifyLoadBalancersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyNotificationConfigurationRequest&;
    using Resp = ModifyNotificationConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNotificationConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::ModifyNotificationConfigurationOutcomeCallable AsClient::ModifyNotificationConfigurationCallable(const ModifyNotificationConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNotificationConfigurationOutcome>>();
    ModifyNotificationConfigurationAsync(
    request,
    [prom](
        const AsClient*,
        const ModifyNotificationConfigurationRequest&,
        ModifyNotificationConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyScalingPolicyRequest&;
    using Resp = ModifyScalingPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyScalingPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::ModifyScalingPolicyOutcomeCallable AsClient::ModifyScalingPolicyCallable(const ModifyScalingPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyScalingPolicyOutcome>>();
    ModifyScalingPolicyAsync(
    request,
    [prom](
        const AsClient*,
        const ModifyScalingPolicyRequest&,
        ModifyScalingPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyScheduledActionRequest&;
    using Resp = ModifyScheduledActionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyScheduledAction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::ModifyScheduledActionOutcomeCallable AsClient::ModifyScheduledActionCallable(const ModifyScheduledActionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyScheduledActionOutcome>>();
    ModifyScheduledActionAsync(
    request,
    [prom](
        const AsClient*,
        const ModifyScheduledActionRequest&,
        ModifyScheduledActionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RemoveInstancesRequest&;
    using Resp = RemoveInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::RemoveInstancesOutcomeCallable AsClient::RemoveInstancesCallable(const RemoveInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveInstancesOutcome>>();
    RemoveInstancesAsync(
    request,
    [prom](
        const AsClient*,
        const RemoveInstancesRequest&,
        RemoveInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ResumeInstanceRefreshRequest&;
    using Resp = ResumeInstanceRefreshResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeInstanceRefresh", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::ResumeInstanceRefreshOutcomeCallable AsClient::ResumeInstanceRefreshCallable(const ResumeInstanceRefreshRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeInstanceRefreshOutcome>>();
    ResumeInstanceRefreshAsync(
    request,
    [prom](
        const AsClient*,
        const ResumeInstanceRefreshRequest&,
        ResumeInstanceRefreshOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RollbackInstanceRefreshRequest&;
    using Resp = RollbackInstanceRefreshResponse;

    DoRequestAsync<Req, Resp>(
        "RollbackInstanceRefresh", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::RollbackInstanceRefreshOutcomeCallable AsClient::RollbackInstanceRefreshCallable(const RollbackInstanceRefreshRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollbackInstanceRefreshOutcome>>();
    RollbackInstanceRefreshAsync(
    request,
    [prom](
        const AsClient*,
        const RollbackInstanceRefreshRequest&,
        RollbackInstanceRefreshOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ScaleInInstancesRequest&;
    using Resp = ScaleInInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ScaleInInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::ScaleInInstancesOutcomeCallable AsClient::ScaleInInstancesCallable(const ScaleInInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScaleInInstancesOutcome>>();
    ScaleInInstancesAsync(
    request,
    [prom](
        const AsClient*,
        const ScaleInInstancesRequest&,
        ScaleInInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ScaleOutInstancesRequest&;
    using Resp = ScaleOutInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ScaleOutInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::ScaleOutInstancesOutcomeCallable AsClient::ScaleOutInstancesCallable(const ScaleOutInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScaleOutInstancesOutcome>>();
    ScaleOutInstancesAsync(
    request,
    [prom](
        const AsClient*,
        const ScaleOutInstancesRequest&,
        ScaleOutInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SetInstancesProtectionRequest&;
    using Resp = SetInstancesProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "SetInstancesProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::SetInstancesProtectionOutcomeCallable AsClient::SetInstancesProtectionCallable(const SetInstancesProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetInstancesProtectionOutcome>>();
    SetInstancesProtectionAsync(
    request,
    [prom](
        const AsClient*,
        const SetInstancesProtectionRequest&,
        SetInstancesProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const StartAutoScalingInstancesRequest&;
    using Resp = StartAutoScalingInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "StartAutoScalingInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::StartAutoScalingInstancesOutcomeCallable AsClient::StartAutoScalingInstancesCallable(const StartAutoScalingInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartAutoScalingInstancesOutcome>>();
    StartAutoScalingInstancesAsync(
    request,
    [prom](
        const AsClient*,
        const StartAutoScalingInstancesRequest&,
        StartAutoScalingInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const StartInstanceRefreshRequest&;
    using Resp = StartInstanceRefreshResponse;

    DoRequestAsync<Req, Resp>(
        "StartInstanceRefresh", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::StartInstanceRefreshOutcomeCallable AsClient::StartInstanceRefreshCallable(const StartInstanceRefreshRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartInstanceRefreshOutcome>>();
    StartInstanceRefreshAsync(
    request,
    [prom](
        const AsClient*,
        const StartInstanceRefreshRequest&,
        StartInstanceRefreshOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const StopAutoScalingInstancesRequest&;
    using Resp = StopAutoScalingInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "StopAutoScalingInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::StopAutoScalingInstancesOutcomeCallable AsClient::StopAutoScalingInstancesCallable(const StopAutoScalingInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopAutoScalingInstancesOutcome>>();
    StopAutoScalingInstancesAsync(
    request,
    [prom](
        const AsClient*,
        const StopAutoScalingInstancesRequest&,
        StopAutoScalingInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const StopInstanceRefreshRequest&;
    using Resp = StopInstanceRefreshResponse;

    DoRequestAsync<Req, Resp>(
        "StopInstanceRefresh", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::StopInstanceRefreshOutcomeCallable AsClient::StopInstanceRefreshCallable(const StopInstanceRefreshRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopInstanceRefreshOutcome>>();
    StopInstanceRefreshAsync(
    request,
    [prom](
        const AsClient*,
        const StopInstanceRefreshRequest&,
        StopInstanceRefreshOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpgradeLaunchConfigurationRequest&;
    using Resp = UpgradeLaunchConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeLaunchConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::UpgradeLaunchConfigurationOutcomeCallable AsClient::UpgradeLaunchConfigurationCallable(const UpgradeLaunchConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeLaunchConfigurationOutcome>>();
    UpgradeLaunchConfigurationAsync(
    request,
    [prom](
        const AsClient*,
        const UpgradeLaunchConfigurationRequest&,
        UpgradeLaunchConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpgradeLifecycleHookRequest&;
    using Resp = UpgradeLifecycleHookResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeLifecycleHook", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsClient::UpgradeLifecycleHookOutcomeCallable AsClient::UpgradeLifecycleHookCallable(const UpgradeLifecycleHookRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeLifecycleHookOutcome>>();
    UpgradeLifecycleHookAsync(
    request,
    [prom](
        const AsClient*,
        const UpgradeLifecycleHookRequest&,
        UpgradeLifecycleHookOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

