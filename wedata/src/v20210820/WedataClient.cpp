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

#include <tencentcloud/wedata/v20210820/WedataClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Wedata::V20210820;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-08-20";
    const string ENDPOINT = "wedata.tencentcloudapi.com";
}

WedataClient::WedataClient(const Credential &credential, const string &region) :
    WedataClient(credential, region, ClientProfile())
{
}

WedataClient::WedataClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WedataClient::AddProjectUserRoleOutcome WedataClient::AddProjectUserRole(const AddProjectUserRoleRequest &request)
{
    auto outcome = MakeRequest(request, "AddProjectUserRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddProjectUserRoleResponse rsp = AddProjectUserRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddProjectUserRoleOutcome(rsp);
        else
            return AddProjectUserRoleOutcome(o.GetError());
    }
    else
    {
        return AddProjectUserRoleOutcome(outcome.GetError());
    }
}

void WedataClient::AddProjectUserRoleAsync(const AddProjectUserRoleRequest& request, const AddProjectUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddProjectUserRoleRequest&;
    using Resp = AddProjectUserRoleResponse;

    DoRequestAsync<Req, Resp>(
        "AddProjectUserRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::AddProjectUserRoleOutcomeCallable WedataClient::AddProjectUserRoleCallable(const AddProjectUserRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddProjectUserRoleOutcome>>();
    AddProjectUserRoleAsync(
    request,
    [prom](
        const WedataClient*,
        const AddProjectUserRoleRequest&,
        AddProjectUserRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchCreateIntegrationTaskAlarmsOutcome WedataClient::BatchCreateIntegrationTaskAlarms(const BatchCreateIntegrationTaskAlarmsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchCreateIntegrationTaskAlarms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchCreateIntegrationTaskAlarmsResponse rsp = BatchCreateIntegrationTaskAlarmsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchCreateIntegrationTaskAlarmsOutcome(rsp);
        else
            return BatchCreateIntegrationTaskAlarmsOutcome(o.GetError());
    }
    else
    {
        return BatchCreateIntegrationTaskAlarmsOutcome(outcome.GetError());
    }
}

void WedataClient::BatchCreateIntegrationTaskAlarmsAsync(const BatchCreateIntegrationTaskAlarmsRequest& request, const BatchCreateIntegrationTaskAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchCreateIntegrationTaskAlarmsRequest&;
    using Resp = BatchCreateIntegrationTaskAlarmsResponse;

    DoRequestAsync<Req, Resp>(
        "BatchCreateIntegrationTaskAlarms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchCreateIntegrationTaskAlarmsOutcomeCallable WedataClient::BatchCreateIntegrationTaskAlarmsCallable(const BatchCreateIntegrationTaskAlarmsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchCreateIntegrationTaskAlarmsOutcome>>();
    BatchCreateIntegrationTaskAlarmsAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchCreateIntegrationTaskAlarmsRequest&,
        BatchCreateIntegrationTaskAlarmsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchCreateTaskVersionAsyncOutcome WedataClient::BatchCreateTaskVersionAsync(const BatchCreateTaskVersionAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "BatchCreateTaskVersionAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchCreateTaskVersionAsyncResponse rsp = BatchCreateTaskVersionAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchCreateTaskVersionAsyncOutcome(rsp);
        else
            return BatchCreateTaskVersionAsyncOutcome(o.GetError());
    }
    else
    {
        return BatchCreateTaskVersionAsyncOutcome(outcome.GetError());
    }
}

void WedataClient::BatchCreateTaskVersionAsyncAsync(const BatchCreateTaskVersionAsyncRequest& request, const BatchCreateTaskVersionAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchCreateTaskVersionAsyncRequest&;
    using Resp = BatchCreateTaskVersionAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "BatchCreateTaskVersionAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchCreateTaskVersionAsyncOutcomeCallable WedataClient::BatchCreateTaskVersionAsyncCallable(const BatchCreateTaskVersionAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchCreateTaskVersionAsyncOutcome>>();
    BatchCreateTaskVersionAsyncAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchCreateTaskVersionAsyncRequest&,
        BatchCreateTaskVersionAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchDeleteIntegrationTasksOutcome WedataClient::BatchDeleteIntegrationTasks(const BatchDeleteIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteIntegrationTasksResponse rsp = BatchDeleteIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteIntegrationTasksOutcome(rsp);
        else
            return BatchDeleteIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchDeleteIntegrationTasksAsync(const BatchDeleteIntegrationTasksRequest& request, const BatchDeleteIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchDeleteIntegrationTasksRequest&;
    using Resp = BatchDeleteIntegrationTasksResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDeleteIntegrationTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchDeleteIntegrationTasksOutcomeCallable WedataClient::BatchDeleteIntegrationTasksCallable(const BatchDeleteIntegrationTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDeleteIntegrationTasksOutcome>>();
    BatchDeleteIntegrationTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchDeleteIntegrationTasksRequest&,
        BatchDeleteIntegrationTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchDeleteOpsTasksOutcome WedataClient::BatchDeleteOpsTasks(const BatchDeleteOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteOpsTasksResponse rsp = BatchDeleteOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteOpsTasksOutcome(rsp);
        else
            return BatchDeleteOpsTasksOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchDeleteOpsTasksAsync(const BatchDeleteOpsTasksRequest& request, const BatchDeleteOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchDeleteOpsTasksRequest&;
    using Resp = BatchDeleteOpsTasksResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDeleteOpsTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchDeleteOpsTasksOutcomeCallable WedataClient::BatchDeleteOpsTasksCallable(const BatchDeleteOpsTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDeleteOpsTasksOutcome>>();
    BatchDeleteOpsTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchDeleteOpsTasksRequest&,
        BatchDeleteOpsTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchForceSuccessIntegrationTaskInstancesOutcome WedataClient::BatchForceSuccessIntegrationTaskInstances(const BatchForceSuccessIntegrationTaskInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "BatchForceSuccessIntegrationTaskInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchForceSuccessIntegrationTaskInstancesResponse rsp = BatchForceSuccessIntegrationTaskInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchForceSuccessIntegrationTaskInstancesOutcome(rsp);
        else
            return BatchForceSuccessIntegrationTaskInstancesOutcome(o.GetError());
    }
    else
    {
        return BatchForceSuccessIntegrationTaskInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::BatchForceSuccessIntegrationTaskInstancesAsync(const BatchForceSuccessIntegrationTaskInstancesRequest& request, const BatchForceSuccessIntegrationTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchForceSuccessIntegrationTaskInstancesRequest&;
    using Resp = BatchForceSuccessIntegrationTaskInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "BatchForceSuccessIntegrationTaskInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchForceSuccessIntegrationTaskInstancesOutcomeCallable WedataClient::BatchForceSuccessIntegrationTaskInstancesCallable(const BatchForceSuccessIntegrationTaskInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchForceSuccessIntegrationTaskInstancesOutcome>>();
    BatchForceSuccessIntegrationTaskInstancesAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchForceSuccessIntegrationTaskInstancesRequest&,
        BatchForceSuccessIntegrationTaskInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchKillIntegrationTaskInstancesOutcome WedataClient::BatchKillIntegrationTaskInstances(const BatchKillIntegrationTaskInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "BatchKillIntegrationTaskInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchKillIntegrationTaskInstancesResponse rsp = BatchKillIntegrationTaskInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchKillIntegrationTaskInstancesOutcome(rsp);
        else
            return BatchKillIntegrationTaskInstancesOutcome(o.GetError());
    }
    else
    {
        return BatchKillIntegrationTaskInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::BatchKillIntegrationTaskInstancesAsync(const BatchKillIntegrationTaskInstancesRequest& request, const BatchKillIntegrationTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchKillIntegrationTaskInstancesRequest&;
    using Resp = BatchKillIntegrationTaskInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "BatchKillIntegrationTaskInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchKillIntegrationTaskInstancesOutcomeCallable WedataClient::BatchKillIntegrationTaskInstancesCallable(const BatchKillIntegrationTaskInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchKillIntegrationTaskInstancesOutcome>>();
    BatchKillIntegrationTaskInstancesAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchKillIntegrationTaskInstancesRequest&,
        BatchKillIntegrationTaskInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchMakeUpIntegrationTasksOutcome WedataClient::BatchMakeUpIntegrationTasks(const BatchMakeUpIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchMakeUpIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchMakeUpIntegrationTasksResponse rsp = BatchMakeUpIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchMakeUpIntegrationTasksOutcome(rsp);
        else
            return BatchMakeUpIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return BatchMakeUpIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchMakeUpIntegrationTasksAsync(const BatchMakeUpIntegrationTasksRequest& request, const BatchMakeUpIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchMakeUpIntegrationTasksRequest&;
    using Resp = BatchMakeUpIntegrationTasksResponse;

    DoRequestAsync<Req, Resp>(
        "BatchMakeUpIntegrationTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchMakeUpIntegrationTasksOutcomeCallable WedataClient::BatchMakeUpIntegrationTasksCallable(const BatchMakeUpIntegrationTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchMakeUpIntegrationTasksOutcome>>();
    BatchMakeUpIntegrationTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchMakeUpIntegrationTasksRequest&,
        BatchMakeUpIntegrationTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchModifyOpsOwnersOutcome WedataClient::BatchModifyOpsOwners(const BatchModifyOpsOwnersRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyOpsOwners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyOpsOwnersResponse rsp = BatchModifyOpsOwnersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyOpsOwnersOutcome(rsp);
        else
            return BatchModifyOpsOwnersOutcome(o.GetError());
    }
    else
    {
        return BatchModifyOpsOwnersOutcome(outcome.GetError());
    }
}

void WedataClient::BatchModifyOpsOwnersAsync(const BatchModifyOpsOwnersRequest& request, const BatchModifyOpsOwnersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchModifyOpsOwnersRequest&;
    using Resp = BatchModifyOpsOwnersResponse;

    DoRequestAsync<Req, Resp>(
        "BatchModifyOpsOwners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchModifyOpsOwnersOutcomeCallable WedataClient::BatchModifyOpsOwnersCallable(const BatchModifyOpsOwnersRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchModifyOpsOwnersOutcome>>();
    BatchModifyOpsOwnersAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchModifyOpsOwnersRequest&,
        BatchModifyOpsOwnersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchRerunIntegrationTaskInstancesOutcome WedataClient::BatchRerunIntegrationTaskInstances(const BatchRerunIntegrationTaskInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "BatchRerunIntegrationTaskInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchRerunIntegrationTaskInstancesResponse rsp = BatchRerunIntegrationTaskInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchRerunIntegrationTaskInstancesOutcome(rsp);
        else
            return BatchRerunIntegrationTaskInstancesOutcome(o.GetError());
    }
    else
    {
        return BatchRerunIntegrationTaskInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::BatchRerunIntegrationTaskInstancesAsync(const BatchRerunIntegrationTaskInstancesRequest& request, const BatchRerunIntegrationTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchRerunIntegrationTaskInstancesRequest&;
    using Resp = BatchRerunIntegrationTaskInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "BatchRerunIntegrationTaskInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchRerunIntegrationTaskInstancesOutcomeCallable WedataClient::BatchRerunIntegrationTaskInstancesCallable(const BatchRerunIntegrationTaskInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchRerunIntegrationTaskInstancesOutcome>>();
    BatchRerunIntegrationTaskInstancesAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchRerunIntegrationTaskInstancesRequest&,
        BatchRerunIntegrationTaskInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchResumeIntegrationTasksOutcome WedataClient::BatchResumeIntegrationTasks(const BatchResumeIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchResumeIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchResumeIntegrationTasksResponse rsp = BatchResumeIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchResumeIntegrationTasksOutcome(rsp);
        else
            return BatchResumeIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return BatchResumeIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchResumeIntegrationTasksAsync(const BatchResumeIntegrationTasksRequest& request, const BatchResumeIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchResumeIntegrationTasksRequest&;
    using Resp = BatchResumeIntegrationTasksResponse;

    DoRequestAsync<Req, Resp>(
        "BatchResumeIntegrationTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchResumeIntegrationTasksOutcomeCallable WedataClient::BatchResumeIntegrationTasksCallable(const BatchResumeIntegrationTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchResumeIntegrationTasksOutcome>>();
    BatchResumeIntegrationTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchResumeIntegrationTasksRequest&,
        BatchResumeIntegrationTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchRunOpsTaskOutcome WedataClient::BatchRunOpsTask(const BatchRunOpsTaskRequest &request)
{
    auto outcome = MakeRequest(request, "BatchRunOpsTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchRunOpsTaskResponse rsp = BatchRunOpsTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchRunOpsTaskOutcome(rsp);
        else
            return BatchRunOpsTaskOutcome(o.GetError());
    }
    else
    {
        return BatchRunOpsTaskOutcome(outcome.GetError());
    }
}

void WedataClient::BatchRunOpsTaskAsync(const BatchRunOpsTaskRequest& request, const BatchRunOpsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchRunOpsTaskRequest&;
    using Resp = BatchRunOpsTaskResponse;

    DoRequestAsync<Req, Resp>(
        "BatchRunOpsTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchRunOpsTaskOutcomeCallable WedataClient::BatchRunOpsTaskCallable(const BatchRunOpsTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchRunOpsTaskOutcome>>();
    BatchRunOpsTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchRunOpsTaskRequest&,
        BatchRunOpsTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchStartIntegrationTasksOutcome WedataClient::BatchStartIntegrationTasks(const BatchStartIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchStartIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchStartIntegrationTasksResponse rsp = BatchStartIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchStartIntegrationTasksOutcome(rsp);
        else
            return BatchStartIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return BatchStartIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchStartIntegrationTasksAsync(const BatchStartIntegrationTasksRequest& request, const BatchStartIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchStartIntegrationTasksRequest&;
    using Resp = BatchStartIntegrationTasksResponse;

    DoRequestAsync<Req, Resp>(
        "BatchStartIntegrationTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchStartIntegrationTasksOutcomeCallable WedataClient::BatchStartIntegrationTasksCallable(const BatchStartIntegrationTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchStartIntegrationTasksOutcome>>();
    BatchStartIntegrationTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchStartIntegrationTasksRequest&,
        BatchStartIntegrationTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchStopIntegrationTasksOutcome WedataClient::BatchStopIntegrationTasks(const BatchStopIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchStopIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchStopIntegrationTasksResponse rsp = BatchStopIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchStopIntegrationTasksOutcome(rsp);
        else
            return BatchStopIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return BatchStopIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchStopIntegrationTasksAsync(const BatchStopIntegrationTasksRequest& request, const BatchStopIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchStopIntegrationTasksRequest&;
    using Resp = BatchStopIntegrationTasksResponse;

    DoRequestAsync<Req, Resp>(
        "BatchStopIntegrationTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchStopIntegrationTasksOutcomeCallable WedataClient::BatchStopIntegrationTasksCallable(const BatchStopIntegrationTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchStopIntegrationTasksOutcome>>();
    BatchStopIntegrationTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchStopIntegrationTasksRequest&,
        BatchStopIntegrationTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchStopOpsTasksOutcome WedataClient::BatchStopOpsTasks(const BatchStopOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchStopOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchStopOpsTasksResponse rsp = BatchStopOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchStopOpsTasksOutcome(rsp);
        else
            return BatchStopOpsTasksOutcome(o.GetError());
    }
    else
    {
        return BatchStopOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchStopOpsTasksAsync(const BatchStopOpsTasksRequest& request, const BatchStopOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchStopOpsTasksRequest&;
    using Resp = BatchStopOpsTasksResponse;

    DoRequestAsync<Req, Resp>(
        "BatchStopOpsTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchStopOpsTasksOutcomeCallable WedataClient::BatchStopOpsTasksCallable(const BatchStopOpsTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchStopOpsTasksOutcome>>();
    BatchStopOpsTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchStopOpsTasksRequest&,
        BatchStopOpsTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchStopWorkflowsByIdsOutcome WedataClient::BatchStopWorkflowsByIds(const BatchStopWorkflowsByIdsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchStopWorkflowsByIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchStopWorkflowsByIdsResponse rsp = BatchStopWorkflowsByIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchStopWorkflowsByIdsOutcome(rsp);
        else
            return BatchStopWorkflowsByIdsOutcome(o.GetError());
    }
    else
    {
        return BatchStopWorkflowsByIdsOutcome(outcome.GetError());
    }
}

void WedataClient::BatchStopWorkflowsByIdsAsync(const BatchStopWorkflowsByIdsRequest& request, const BatchStopWorkflowsByIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchStopWorkflowsByIdsRequest&;
    using Resp = BatchStopWorkflowsByIdsResponse;

    DoRequestAsync<Req, Resp>(
        "BatchStopWorkflowsByIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchStopWorkflowsByIdsOutcomeCallable WedataClient::BatchStopWorkflowsByIdsCallable(const BatchStopWorkflowsByIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchStopWorkflowsByIdsOutcome>>();
    BatchStopWorkflowsByIdsAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchStopWorkflowsByIdsRequest&,
        BatchStopWorkflowsByIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchSuspendIntegrationTasksOutcome WedataClient::BatchSuspendIntegrationTasks(const BatchSuspendIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchSuspendIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchSuspendIntegrationTasksResponse rsp = BatchSuspendIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchSuspendIntegrationTasksOutcome(rsp);
        else
            return BatchSuspendIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return BatchSuspendIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchSuspendIntegrationTasksAsync(const BatchSuspendIntegrationTasksRequest& request, const BatchSuspendIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchSuspendIntegrationTasksRequest&;
    using Resp = BatchSuspendIntegrationTasksResponse;

    DoRequestAsync<Req, Resp>(
        "BatchSuspendIntegrationTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchSuspendIntegrationTasksOutcomeCallable WedataClient::BatchSuspendIntegrationTasksCallable(const BatchSuspendIntegrationTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchSuspendIntegrationTasksOutcome>>();
    BatchSuspendIntegrationTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchSuspendIntegrationTasksRequest&,
        BatchSuspendIntegrationTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BatchUpdateIntegrationTasksOutcome WedataClient::BatchUpdateIntegrationTasks(const BatchUpdateIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchUpdateIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchUpdateIntegrationTasksResponse rsp = BatchUpdateIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchUpdateIntegrationTasksOutcome(rsp);
        else
            return BatchUpdateIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return BatchUpdateIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchUpdateIntegrationTasksAsync(const BatchUpdateIntegrationTasksRequest& request, const BatchUpdateIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchUpdateIntegrationTasksRequest&;
    using Resp = BatchUpdateIntegrationTasksResponse;

    DoRequestAsync<Req, Resp>(
        "BatchUpdateIntegrationTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BatchUpdateIntegrationTasksOutcomeCallable WedataClient::BatchUpdateIntegrationTasksCallable(const BatchUpdateIntegrationTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchUpdateIntegrationTasksOutcome>>();
    BatchUpdateIntegrationTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const BatchUpdateIntegrationTasksRequest&,
        BatchUpdateIntegrationTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::BindProjectExecutorResourceOutcome WedataClient::BindProjectExecutorResource(const BindProjectExecutorResourceRequest &request)
{
    auto outcome = MakeRequest(request, "BindProjectExecutorResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindProjectExecutorResourceResponse rsp = BindProjectExecutorResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindProjectExecutorResourceOutcome(rsp);
        else
            return BindProjectExecutorResourceOutcome(o.GetError());
    }
    else
    {
        return BindProjectExecutorResourceOutcome(outcome.GetError());
    }
}

void WedataClient::BindProjectExecutorResourceAsync(const BindProjectExecutorResourceRequest& request, const BindProjectExecutorResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindProjectExecutorResourceRequest&;
    using Resp = BindProjectExecutorResourceResponse;

    DoRequestAsync<Req, Resp>(
        "BindProjectExecutorResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::BindProjectExecutorResourceOutcomeCallable WedataClient::BindProjectExecutorResourceCallable(const BindProjectExecutorResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindProjectExecutorResourceOutcome>>();
    BindProjectExecutorResourceAsync(
    request,
    [prom](
        const WedataClient*,
        const BindProjectExecutorResourceRequest&,
        BindProjectExecutorResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CheckAlarmRegularNameExistOutcome WedataClient::CheckAlarmRegularNameExist(const CheckAlarmRegularNameExistRequest &request)
{
    auto outcome = MakeRequest(request, "CheckAlarmRegularNameExist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckAlarmRegularNameExistResponse rsp = CheckAlarmRegularNameExistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckAlarmRegularNameExistOutcome(rsp);
        else
            return CheckAlarmRegularNameExistOutcome(o.GetError());
    }
    else
    {
        return CheckAlarmRegularNameExistOutcome(outcome.GetError());
    }
}

void WedataClient::CheckAlarmRegularNameExistAsync(const CheckAlarmRegularNameExistRequest& request, const CheckAlarmRegularNameExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckAlarmRegularNameExistRequest&;
    using Resp = CheckAlarmRegularNameExistResponse;

    DoRequestAsync<Req, Resp>(
        "CheckAlarmRegularNameExist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CheckAlarmRegularNameExistOutcomeCallable WedataClient::CheckAlarmRegularNameExistCallable(const CheckAlarmRegularNameExistRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckAlarmRegularNameExistOutcome>>();
    CheckAlarmRegularNameExistAsync(
    request,
    [prom](
        const WedataClient*,
        const CheckAlarmRegularNameExistRequest&,
        CheckAlarmRegularNameExistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CheckIntegrationNodeNameExistsOutcome WedataClient::CheckIntegrationNodeNameExists(const CheckIntegrationNodeNameExistsRequest &request)
{
    auto outcome = MakeRequest(request, "CheckIntegrationNodeNameExists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckIntegrationNodeNameExistsResponse rsp = CheckIntegrationNodeNameExistsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckIntegrationNodeNameExistsOutcome(rsp);
        else
            return CheckIntegrationNodeNameExistsOutcome(o.GetError());
    }
    else
    {
        return CheckIntegrationNodeNameExistsOutcome(outcome.GetError());
    }
}

void WedataClient::CheckIntegrationNodeNameExistsAsync(const CheckIntegrationNodeNameExistsRequest& request, const CheckIntegrationNodeNameExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckIntegrationNodeNameExistsRequest&;
    using Resp = CheckIntegrationNodeNameExistsResponse;

    DoRequestAsync<Req, Resp>(
        "CheckIntegrationNodeNameExists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CheckIntegrationNodeNameExistsOutcomeCallable WedataClient::CheckIntegrationNodeNameExistsCallable(const CheckIntegrationNodeNameExistsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckIntegrationNodeNameExistsOutcome>>();
    CheckIntegrationNodeNameExistsAsync(
    request,
    [prom](
        const WedataClient*,
        const CheckIntegrationNodeNameExistsRequest&,
        CheckIntegrationNodeNameExistsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CheckIntegrationTaskNameExistsOutcome WedataClient::CheckIntegrationTaskNameExists(const CheckIntegrationTaskNameExistsRequest &request)
{
    auto outcome = MakeRequest(request, "CheckIntegrationTaskNameExists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckIntegrationTaskNameExistsResponse rsp = CheckIntegrationTaskNameExistsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckIntegrationTaskNameExistsOutcome(rsp);
        else
            return CheckIntegrationTaskNameExistsOutcome(o.GetError());
    }
    else
    {
        return CheckIntegrationTaskNameExistsOutcome(outcome.GetError());
    }
}

void WedataClient::CheckIntegrationTaskNameExistsAsync(const CheckIntegrationTaskNameExistsRequest& request, const CheckIntegrationTaskNameExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckIntegrationTaskNameExistsRequest&;
    using Resp = CheckIntegrationTaskNameExistsResponse;

    DoRequestAsync<Req, Resp>(
        "CheckIntegrationTaskNameExists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CheckIntegrationTaskNameExistsOutcomeCallable WedataClient::CheckIntegrationTaskNameExistsCallable(const CheckIntegrationTaskNameExistsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckIntegrationTaskNameExistsOutcome>>();
    CheckIntegrationTaskNameExistsAsync(
    request,
    [prom](
        const WedataClient*,
        const CheckIntegrationTaskNameExistsRequest&,
        CheckIntegrationTaskNameExistsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CheckTaskNameExistOutcome WedataClient::CheckTaskNameExist(const CheckTaskNameExistRequest &request)
{
    auto outcome = MakeRequest(request, "CheckTaskNameExist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckTaskNameExistResponse rsp = CheckTaskNameExistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckTaskNameExistOutcome(rsp);
        else
            return CheckTaskNameExistOutcome(o.GetError());
    }
    else
    {
        return CheckTaskNameExistOutcome(outcome.GetError());
    }
}

void WedataClient::CheckTaskNameExistAsync(const CheckTaskNameExistRequest& request, const CheckTaskNameExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckTaskNameExistRequest&;
    using Resp = CheckTaskNameExistResponse;

    DoRequestAsync<Req, Resp>(
        "CheckTaskNameExist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CheckTaskNameExistOutcomeCallable WedataClient::CheckTaskNameExistCallable(const CheckTaskNameExistRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckTaskNameExistOutcome>>();
    CheckTaskNameExistAsync(
    request,
    [prom](
        const WedataClient*,
        const CheckTaskNameExistRequest&,
        CheckTaskNameExistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CommitIntegrationTaskOutcome WedataClient::CommitIntegrationTask(const CommitIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CommitIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CommitIntegrationTaskResponse rsp = CommitIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CommitIntegrationTaskOutcome(rsp);
        else
            return CommitIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return CommitIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::CommitIntegrationTaskAsync(const CommitIntegrationTaskRequest& request, const CommitIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CommitIntegrationTaskRequest&;
    using Resp = CommitIntegrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CommitIntegrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CommitIntegrationTaskOutcomeCallable WedataClient::CommitIntegrationTaskCallable(const CommitIntegrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CommitIntegrationTaskOutcome>>();
    CommitIntegrationTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const CommitIntegrationTaskRequest&,
        CommitIntegrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CommitRuleGroupTaskOutcome WedataClient::CommitRuleGroupTask(const CommitRuleGroupTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CommitRuleGroupTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CommitRuleGroupTaskResponse rsp = CommitRuleGroupTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CommitRuleGroupTaskOutcome(rsp);
        else
            return CommitRuleGroupTaskOutcome(o.GetError());
    }
    else
    {
        return CommitRuleGroupTaskOutcome(outcome.GetError());
    }
}

void WedataClient::CommitRuleGroupTaskAsync(const CommitRuleGroupTaskRequest& request, const CommitRuleGroupTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CommitRuleGroupTaskRequest&;
    using Resp = CommitRuleGroupTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CommitRuleGroupTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CommitRuleGroupTaskOutcomeCallable WedataClient::CommitRuleGroupTaskCallable(const CommitRuleGroupTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CommitRuleGroupTaskOutcome>>();
    CommitRuleGroupTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const CommitRuleGroupTaskRequest&,
        CommitRuleGroupTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CountOpsInstanceStateOutcome WedataClient::CountOpsInstanceState(const CountOpsInstanceStateRequest &request)
{
    auto outcome = MakeRequest(request, "CountOpsInstanceState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CountOpsInstanceStateResponse rsp = CountOpsInstanceStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CountOpsInstanceStateOutcome(rsp);
        else
            return CountOpsInstanceStateOutcome(o.GetError());
    }
    else
    {
        return CountOpsInstanceStateOutcome(outcome.GetError());
    }
}

void WedataClient::CountOpsInstanceStateAsync(const CountOpsInstanceStateRequest& request, const CountOpsInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CountOpsInstanceStateRequest&;
    using Resp = CountOpsInstanceStateResponse;

    DoRequestAsync<Req, Resp>(
        "CountOpsInstanceState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CountOpsInstanceStateOutcomeCallable WedataClient::CountOpsInstanceStateCallable(const CountOpsInstanceStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CountOpsInstanceStateOutcome>>();
    CountOpsInstanceStateAsync(
    request,
    [prom](
        const WedataClient*,
        const CountOpsInstanceStateRequest&,
        CountOpsInstanceStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateBaseProjectOutcome WedataClient::CreateBaseProject(const CreateBaseProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBaseProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBaseProjectResponse rsp = CreateBaseProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBaseProjectOutcome(rsp);
        else
            return CreateBaseProjectOutcome(o.GetError());
    }
    else
    {
        return CreateBaseProjectOutcome(outcome.GetError());
    }
}

void WedataClient::CreateBaseProjectAsync(const CreateBaseProjectRequest& request, const CreateBaseProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBaseProjectRequest&;
    using Resp = CreateBaseProjectResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBaseProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateBaseProjectOutcomeCallable WedataClient::CreateBaseProjectCallable(const CreateBaseProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBaseProjectOutcome>>();
    CreateBaseProjectAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateBaseProjectRequest&,
        CreateBaseProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateCodeTemplateOutcome WedataClient::CreateCodeTemplate(const CreateCodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCodeTemplateResponse rsp = CreateCodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCodeTemplateOutcome(rsp);
        else
            return CreateCodeTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateCodeTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::CreateCodeTemplateAsync(const CreateCodeTemplateRequest& request, const CreateCodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCodeTemplateRequest&;
    using Resp = CreateCodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateCodeTemplateOutcomeCallable WedataClient::CreateCodeTemplateCallable(const CreateCodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCodeTemplateOutcome>>();
    CreateCodeTemplateAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateCodeTemplateRequest&,
        CreateCodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateCodeTemplateVersionOutcome WedataClient::CreateCodeTemplateVersion(const CreateCodeTemplateVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCodeTemplateVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCodeTemplateVersionResponse rsp = CreateCodeTemplateVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCodeTemplateVersionOutcome(rsp);
        else
            return CreateCodeTemplateVersionOutcome(o.GetError());
    }
    else
    {
        return CreateCodeTemplateVersionOutcome(outcome.GetError());
    }
}

void WedataClient::CreateCodeTemplateVersionAsync(const CreateCodeTemplateVersionRequest& request, const CreateCodeTemplateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCodeTemplateVersionRequest&;
    using Resp = CreateCodeTemplateVersionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCodeTemplateVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateCodeTemplateVersionOutcomeCallable WedataClient::CreateCodeTemplateVersionCallable(const CreateCodeTemplateVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCodeTemplateVersionOutcome>>();
    CreateCodeTemplateVersionAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateCodeTemplateVersionRequest&,
        CreateCodeTemplateVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateCustomFunctionOutcome WedataClient::CreateCustomFunction(const CreateCustomFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomFunctionResponse rsp = CreateCustomFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomFunctionOutcome(rsp);
        else
            return CreateCustomFunctionOutcome(o.GetError());
    }
    else
    {
        return CreateCustomFunctionOutcome(outcome.GetError());
    }
}

void WedataClient::CreateCustomFunctionAsync(const CreateCustomFunctionRequest& request, const CreateCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomFunctionRequest&;
    using Resp = CreateCustomFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateCustomFunctionOutcomeCallable WedataClient::CreateCustomFunctionCallable(const CreateCustomFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomFunctionOutcome>>();
    CreateCustomFunctionAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateCustomFunctionRequest&,
        CreateCustomFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateDataModelOutcome WedataClient::CreateDataModel(const CreateDataModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataModelResponse rsp = CreateDataModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataModelOutcome(rsp);
        else
            return CreateDataModelOutcome(o.GetError());
    }
    else
    {
        return CreateDataModelOutcome(outcome.GetError());
    }
}

void WedataClient::CreateDataModelAsync(const CreateDataModelRequest& request, const CreateDataModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDataModelRequest&;
    using Resp = CreateDataModelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDataModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateDataModelOutcomeCallable WedataClient::CreateDataModelCallable(const CreateDataModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDataModelOutcome>>();
    CreateDataModelAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateDataModelRequest&,
        CreateDataModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateDataSourceOutcome WedataClient::CreateDataSource(const CreateDataSourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataSourceResponse rsp = CreateDataSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataSourceOutcome(rsp);
        else
            return CreateDataSourceOutcome(o.GetError());
    }
    else
    {
        return CreateDataSourceOutcome(outcome.GetError());
    }
}

void WedataClient::CreateDataSourceAsync(const CreateDataSourceRequest& request, const CreateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDataSourceRequest&;
    using Resp = CreateDataSourceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDataSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateDataSourceOutcomeCallable WedataClient::CreateDataSourceCallable(const CreateDataSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDataSourceOutcome>>();
    CreateDataSourceAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateDataSourceRequest&,
        CreateDataSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateDsFolderOutcome WedataClient::CreateDsFolder(const CreateDsFolderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDsFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDsFolderResponse rsp = CreateDsFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDsFolderOutcome(rsp);
        else
            return CreateDsFolderOutcome(o.GetError());
    }
    else
    {
        return CreateDsFolderOutcome(outcome.GetError());
    }
}

void WedataClient::CreateDsFolderAsync(const CreateDsFolderRequest& request, const CreateDsFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDsFolderRequest&;
    using Resp = CreateDsFolderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDsFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateDsFolderOutcomeCallable WedataClient::CreateDsFolderCallable(const CreateDsFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDsFolderOutcome>>();
    CreateDsFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateDsFolderRequest&,
        CreateDsFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateHiveTableOutcome WedataClient::CreateHiveTable(const CreateHiveTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHiveTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHiveTableResponse rsp = CreateHiveTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHiveTableOutcome(rsp);
        else
            return CreateHiveTableOutcome(o.GetError());
    }
    else
    {
        return CreateHiveTableOutcome(outcome.GetError());
    }
}

void WedataClient::CreateHiveTableAsync(const CreateHiveTableRequest& request, const CreateHiveTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHiveTableRequest&;
    using Resp = CreateHiveTableResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHiveTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateHiveTableOutcomeCallable WedataClient::CreateHiveTableCallable(const CreateHiveTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHiveTableOutcome>>();
    CreateHiveTableAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateHiveTableRequest&,
        CreateHiveTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateHiveTableByDDLOutcome WedataClient::CreateHiveTableByDDL(const CreateHiveTableByDDLRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHiveTableByDDL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHiveTableByDDLResponse rsp = CreateHiveTableByDDLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHiveTableByDDLOutcome(rsp);
        else
            return CreateHiveTableByDDLOutcome(o.GetError());
    }
    else
    {
        return CreateHiveTableByDDLOutcome(outcome.GetError());
    }
}

void WedataClient::CreateHiveTableByDDLAsync(const CreateHiveTableByDDLRequest& request, const CreateHiveTableByDDLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHiveTableByDDLRequest&;
    using Resp = CreateHiveTableByDDLResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHiveTableByDDL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateHiveTableByDDLOutcomeCallable WedataClient::CreateHiveTableByDDLCallable(const CreateHiveTableByDDLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHiveTableByDDLOutcome>>();
    CreateHiveTableByDDLAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateHiveTableByDDLRequest&,
        CreateHiveTableByDDLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateIntegrationNodeOutcome WedataClient::CreateIntegrationNode(const CreateIntegrationNodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrationNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrationNodeResponse rsp = CreateIntegrationNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrationNodeOutcome(rsp);
        else
            return CreateIntegrationNodeOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrationNodeOutcome(outcome.GetError());
    }
}

void WedataClient::CreateIntegrationNodeAsync(const CreateIntegrationNodeRequest& request, const CreateIntegrationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIntegrationNodeRequest&;
    using Resp = CreateIntegrationNodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIntegrationNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateIntegrationNodeOutcomeCallable WedataClient::CreateIntegrationNodeCallable(const CreateIntegrationNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIntegrationNodeOutcome>>();
    CreateIntegrationNodeAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateIntegrationNodeRequest&,
        CreateIntegrationNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateIntegrationTaskOutcome WedataClient::CreateIntegrationTask(const CreateIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrationTaskResponse rsp = CreateIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrationTaskOutcome(rsp);
        else
            return CreateIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::CreateIntegrationTaskAsync(const CreateIntegrationTaskRequest& request, const CreateIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIntegrationTaskRequest&;
    using Resp = CreateIntegrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIntegrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateIntegrationTaskOutcomeCallable WedataClient::CreateIntegrationTaskCallable(const CreateIntegrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIntegrationTaskOutcome>>();
    CreateIntegrationTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateIntegrationTaskRequest&,
        CreateIntegrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateOfflineTaskOutcome WedataClient::CreateOfflineTask(const CreateOfflineTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOfflineTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOfflineTaskResponse rsp = CreateOfflineTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOfflineTaskOutcome(rsp);
        else
            return CreateOfflineTaskOutcome(o.GetError());
    }
    else
    {
        return CreateOfflineTaskOutcome(outcome.GetError());
    }
}

void WedataClient::CreateOfflineTaskAsync(const CreateOfflineTaskRequest& request, const CreateOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOfflineTaskRequest&;
    using Resp = CreateOfflineTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOfflineTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateOfflineTaskOutcomeCallable WedataClient::CreateOfflineTaskCallable(const CreateOfflineTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOfflineTaskOutcome>>();
    CreateOfflineTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateOfflineTaskRequest&,
        CreateOfflineTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateOpsMakePlanOutcome WedataClient::CreateOpsMakePlan(const CreateOpsMakePlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpsMakePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpsMakePlanResponse rsp = CreateOpsMakePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpsMakePlanOutcome(rsp);
        else
            return CreateOpsMakePlanOutcome(o.GetError());
    }
    else
    {
        return CreateOpsMakePlanOutcome(outcome.GetError());
    }
}

void WedataClient::CreateOpsMakePlanAsync(const CreateOpsMakePlanRequest& request, const CreateOpsMakePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOpsMakePlanRequest&;
    using Resp = CreateOpsMakePlanResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOpsMakePlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateOpsMakePlanOutcomeCallable WedataClient::CreateOpsMakePlanCallable(const CreateOpsMakePlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOpsMakePlanOutcome>>();
    CreateOpsMakePlanAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateOpsMakePlanRequest&,
        CreateOpsMakePlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateRuleOutcome WedataClient::CreateRule(const CreateRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRuleResponse rsp = CreateRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRuleOutcome(rsp);
        else
            return CreateRuleOutcome(o.GetError());
    }
    else
    {
        return CreateRuleOutcome(outcome.GetError());
    }
}

void WedataClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRuleRequest&;
    using Resp = CreateRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateRuleOutcomeCallable WedataClient::CreateRuleCallable(const CreateRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRuleOutcome>>();
    CreateRuleAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateRuleRequest&,
        CreateRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateRuleTemplateOutcome WedataClient::CreateRuleTemplate(const CreateRuleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRuleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRuleTemplateResponse rsp = CreateRuleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRuleTemplateOutcome(rsp);
        else
            return CreateRuleTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateRuleTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::CreateRuleTemplateAsync(const CreateRuleTemplateRequest& request, const CreateRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRuleTemplateRequest&;
    using Resp = CreateRuleTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRuleTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateRuleTemplateOutcomeCallable WedataClient::CreateRuleTemplateCallable(const CreateRuleTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRuleTemplateOutcome>>();
    CreateRuleTemplateAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateRuleTemplateRequest&,
        CreateRuleTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateTaskOutcome WedataClient::CreateTask(const CreateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskResponse rsp = CreateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskOutcome(rsp);
        else
            return CreateTaskOutcome(o.GetError());
    }
    else
    {
        return CreateTaskOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTaskRequest&;
    using Resp = CreateTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateTaskOutcomeCallable WedataClient::CreateTaskCallable(const CreateTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTaskOutcome>>();
    CreateTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateTaskRequest&,
        CreateTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateTaskAlarmRegularOutcome WedataClient::CreateTaskAlarmRegular(const CreateTaskAlarmRegularRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskAlarmRegular");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskAlarmRegularResponse rsp = CreateTaskAlarmRegularResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskAlarmRegularOutcome(rsp);
        else
            return CreateTaskAlarmRegularOutcome(o.GetError());
    }
    else
    {
        return CreateTaskAlarmRegularOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskAlarmRegularAsync(const CreateTaskAlarmRegularRequest& request, const CreateTaskAlarmRegularAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTaskAlarmRegularRequest&;
    using Resp = CreateTaskAlarmRegularResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTaskAlarmRegular", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateTaskAlarmRegularOutcomeCallable WedataClient::CreateTaskAlarmRegularCallable(const CreateTaskAlarmRegularRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTaskAlarmRegularOutcome>>();
    CreateTaskAlarmRegularAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateTaskAlarmRegularRequest&,
        CreateTaskAlarmRegularOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateTaskFolderOutcome WedataClient::CreateTaskFolder(const CreateTaskFolderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskFolderResponse rsp = CreateTaskFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskFolderOutcome(rsp);
        else
            return CreateTaskFolderOutcome(o.GetError());
    }
    else
    {
        return CreateTaskFolderOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskFolderAsync(const CreateTaskFolderRequest& request, const CreateTaskFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTaskFolderRequest&;
    using Resp = CreateTaskFolderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTaskFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateTaskFolderOutcomeCallable WedataClient::CreateTaskFolderCallable(const CreateTaskFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTaskFolderOutcome>>();
    CreateTaskFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateTaskFolderRequest&,
        CreateTaskFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateTaskNewOutcome WedataClient::CreateTaskNew(const CreateTaskNewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskNewResponse rsp = CreateTaskNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskNewOutcome(rsp);
        else
            return CreateTaskNewOutcome(o.GetError());
    }
    else
    {
        return CreateTaskNewOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskNewAsync(const CreateTaskNewRequest& request, const CreateTaskNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTaskNewRequest&;
    using Resp = CreateTaskNewResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTaskNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateTaskNewOutcomeCallable WedataClient::CreateTaskNewCallable(const CreateTaskNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTaskNewOutcome>>();
    CreateTaskNewAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateTaskNewRequest&,
        CreateTaskNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateTaskVersionDsOutcome WedataClient::CreateTaskVersionDs(const CreateTaskVersionDsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskVersionDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskVersionDsResponse rsp = CreateTaskVersionDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskVersionDsOutcome(rsp);
        else
            return CreateTaskVersionDsOutcome(o.GetError());
    }
    else
    {
        return CreateTaskVersionDsOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskVersionDsAsync(const CreateTaskVersionDsRequest& request, const CreateTaskVersionDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTaskVersionDsRequest&;
    using Resp = CreateTaskVersionDsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTaskVersionDs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateTaskVersionDsOutcomeCallable WedataClient::CreateTaskVersionDsCallable(const CreateTaskVersionDsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTaskVersionDsOutcome>>();
    CreateTaskVersionDsAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateTaskVersionDsRequest&,
        CreateTaskVersionDsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::CreateWorkflowDsOutcome WedataClient::CreateWorkflowDs(const CreateWorkflowDsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkflowDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkflowDsResponse rsp = CreateWorkflowDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkflowDsOutcome(rsp);
        else
            return CreateWorkflowDsOutcome(o.GetError());
    }
    else
    {
        return CreateWorkflowDsOutcome(outcome.GetError());
    }
}

void WedataClient::CreateWorkflowDsAsync(const CreateWorkflowDsRequest& request, const CreateWorkflowDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWorkflowDsRequest&;
    using Resp = CreateWorkflowDsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkflowDs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::CreateWorkflowDsOutcomeCallable WedataClient::CreateWorkflowDsCallable(const CreateWorkflowDsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkflowDsOutcome>>();
    CreateWorkflowDsAsync(
    request,
    [prom](
        const WedataClient*,
        const CreateWorkflowDsRequest&,
        CreateWorkflowDsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DagInstancesOutcome WedataClient::DagInstances(const DagInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DagInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DagInstancesResponse rsp = DagInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DagInstancesOutcome(rsp);
        else
            return DagInstancesOutcome(o.GetError());
    }
    else
    {
        return DagInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::DagInstancesAsync(const DagInstancesRequest& request, const DagInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DagInstancesRequest&;
    using Resp = DagInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DagInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DagInstancesOutcomeCallable WedataClient::DagInstancesCallable(const DagInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DagInstancesOutcome>>();
    DagInstancesAsync(
    request,
    [prom](
        const WedataClient*,
        const DagInstancesRequest&,
        DagInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteCodeTemplateOutcome WedataClient::DeleteCodeTemplate(const DeleteCodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCodeTemplateResponse rsp = DeleteCodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCodeTemplateOutcome(rsp);
        else
            return DeleteCodeTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteCodeTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteCodeTemplateAsync(const DeleteCodeTemplateRequest& request, const DeleteCodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCodeTemplateRequest&;
    using Resp = DeleteCodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteCodeTemplateOutcomeCallable WedataClient::DeleteCodeTemplateCallable(const DeleteCodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCodeTemplateOutcome>>();
    DeleteCodeTemplateAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteCodeTemplateRequest&,
        DeleteCodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteCustomFunctionOutcome WedataClient::DeleteCustomFunction(const DeleteCustomFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomFunctionResponse rsp = DeleteCustomFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomFunctionOutcome(rsp);
        else
            return DeleteCustomFunctionOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomFunctionOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteCustomFunctionAsync(const DeleteCustomFunctionRequest& request, const DeleteCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCustomFunctionRequest&;
    using Resp = DeleteCustomFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCustomFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteCustomFunctionOutcomeCallable WedataClient::DeleteCustomFunctionCallable(const DeleteCustomFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCustomFunctionOutcome>>();
    DeleteCustomFunctionAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteCustomFunctionRequest&,
        DeleteCustomFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteDataModelOutcome WedataClient::DeleteDataModel(const DeleteDataModelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDataModelResponse rsp = DeleteDataModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDataModelOutcome(rsp);
        else
            return DeleteDataModelOutcome(o.GetError());
    }
    else
    {
        return DeleteDataModelOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteDataModelAsync(const DeleteDataModelRequest& request, const DeleteDataModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDataModelRequest&;
    using Resp = DeleteDataModelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDataModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteDataModelOutcomeCallable WedataClient::DeleteDataModelCallable(const DeleteDataModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDataModelOutcome>>();
    DeleteDataModelAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteDataModelRequest&,
        DeleteDataModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteDataSourcesOutcome WedataClient::DeleteDataSources(const DeleteDataSourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataSources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDataSourcesResponse rsp = DeleteDataSourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDataSourcesOutcome(rsp);
        else
            return DeleteDataSourcesOutcome(o.GetError());
    }
    else
    {
        return DeleteDataSourcesOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteDataSourcesAsync(const DeleteDataSourcesRequest& request, const DeleteDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDataSourcesRequest&;
    using Resp = DeleteDataSourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDataSources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteDataSourcesOutcomeCallable WedataClient::DeleteDataSourcesCallable(const DeleteDataSourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDataSourcesOutcome>>();
    DeleteDataSourcesAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteDataSourcesRequest&,
        DeleteDataSourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteDsFolderOutcome WedataClient::DeleteDsFolder(const DeleteDsFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDsFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDsFolderResponse rsp = DeleteDsFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDsFolderOutcome(rsp);
        else
            return DeleteDsFolderOutcome(o.GetError());
    }
    else
    {
        return DeleteDsFolderOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteDsFolderAsync(const DeleteDsFolderRequest& request, const DeleteDsFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDsFolderRequest&;
    using Resp = DeleteDsFolderResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDsFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteDsFolderOutcomeCallable WedataClient::DeleteDsFolderCallable(const DeleteDsFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDsFolderOutcome>>();
    DeleteDsFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteDsFolderRequest&,
        DeleteDsFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteFileOutcome WedataClient::DeleteFile(const DeleteFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFileResponse rsp = DeleteFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFileOutcome(rsp);
        else
            return DeleteFileOutcome(o.GetError());
    }
    else
    {
        return DeleteFileOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteFileAsync(const DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFileRequest&;
    using Resp = DeleteFileResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteFileOutcomeCallable WedataClient::DeleteFileCallable(const DeleteFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFileOutcome>>();
    DeleteFileAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteFileRequest&,
        DeleteFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteFilePathOutcome WedataClient::DeleteFilePath(const DeleteFilePathRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFilePath");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFilePathResponse rsp = DeleteFilePathResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFilePathOutcome(rsp);
        else
            return DeleteFilePathOutcome(o.GetError());
    }
    else
    {
        return DeleteFilePathOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteFilePathAsync(const DeleteFilePathRequest& request, const DeleteFilePathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFilePathRequest&;
    using Resp = DeleteFilePathResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFilePath", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteFilePathOutcomeCallable WedataClient::DeleteFilePathCallable(const DeleteFilePathRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFilePathOutcome>>();
    DeleteFilePathAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteFilePathRequest&,
        DeleteFilePathOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteIntegrationNodeOutcome WedataClient::DeleteIntegrationNode(const DeleteIntegrationNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIntegrationNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIntegrationNodeResponse rsp = DeleteIntegrationNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIntegrationNodeOutcome(rsp);
        else
            return DeleteIntegrationNodeOutcome(o.GetError());
    }
    else
    {
        return DeleteIntegrationNodeOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteIntegrationNodeAsync(const DeleteIntegrationNodeRequest& request, const DeleteIntegrationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIntegrationNodeRequest&;
    using Resp = DeleteIntegrationNodeResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIntegrationNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteIntegrationNodeOutcomeCallable WedataClient::DeleteIntegrationNodeCallable(const DeleteIntegrationNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIntegrationNodeOutcome>>();
    DeleteIntegrationNodeAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteIntegrationNodeRequest&,
        DeleteIntegrationNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteIntegrationTaskOutcome WedataClient::DeleteIntegrationTask(const DeleteIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIntegrationTaskResponse rsp = DeleteIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIntegrationTaskOutcome(rsp);
        else
            return DeleteIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteIntegrationTaskAsync(const DeleteIntegrationTaskRequest& request, const DeleteIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIntegrationTaskRequest&;
    using Resp = DeleteIntegrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIntegrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteIntegrationTaskOutcomeCallable WedataClient::DeleteIntegrationTaskCallable(const DeleteIntegrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIntegrationTaskOutcome>>();
    DeleteIntegrationTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteIntegrationTaskRequest&,
        DeleteIntegrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteLinkOutcome WedataClient::DeleteLink(const DeleteLinkRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLink");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLinkResponse rsp = DeleteLinkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLinkOutcome(rsp);
        else
            return DeleteLinkOutcome(o.GetError());
    }
    else
    {
        return DeleteLinkOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteLinkAsync(const DeleteLinkRequest& request, const DeleteLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLinkRequest&;
    using Resp = DeleteLinkResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLink", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteLinkOutcomeCallable WedataClient::DeleteLinkCallable(const DeleteLinkRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLinkOutcome>>();
    DeleteLinkAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteLinkRequest&,
        DeleteLinkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteOfflineTaskOutcome WedataClient::DeleteOfflineTask(const DeleteOfflineTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOfflineTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOfflineTaskResponse rsp = DeleteOfflineTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOfflineTaskOutcome(rsp);
        else
            return DeleteOfflineTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteOfflineTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteOfflineTaskAsync(const DeleteOfflineTaskRequest& request, const DeleteOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteOfflineTaskRequest&;
    using Resp = DeleteOfflineTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOfflineTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteOfflineTaskOutcomeCallable WedataClient::DeleteOfflineTaskCallable(const DeleteOfflineTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOfflineTaskOutcome>>();
    DeleteOfflineTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteOfflineTaskRequest&,
        DeleteOfflineTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteProjectParamDsOutcome WedataClient::DeleteProjectParamDs(const DeleteProjectParamDsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProjectParamDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectParamDsResponse rsp = DeleteProjectParamDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectParamDsOutcome(rsp);
        else
            return DeleteProjectParamDsOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectParamDsOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteProjectParamDsAsync(const DeleteProjectParamDsRequest& request, const DeleteProjectParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProjectParamDsRequest&;
    using Resp = DeleteProjectParamDsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProjectParamDs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteProjectParamDsOutcomeCallable WedataClient::DeleteProjectParamDsCallable(const DeleteProjectParamDsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProjectParamDsOutcome>>();
    DeleteProjectParamDsAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteProjectParamDsRequest&,
        DeleteProjectParamDsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteProjectUsersOutcome WedataClient::DeleteProjectUsers(const DeleteProjectUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProjectUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectUsersResponse rsp = DeleteProjectUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectUsersOutcome(rsp);
        else
            return DeleteProjectUsersOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectUsersOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteProjectUsersAsync(const DeleteProjectUsersRequest& request, const DeleteProjectUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProjectUsersRequest&;
    using Resp = DeleteProjectUsersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProjectUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteProjectUsersOutcomeCallable WedataClient::DeleteProjectUsersCallable(const DeleteProjectUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProjectUsersOutcome>>();
    DeleteProjectUsersAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteProjectUsersRequest&,
        DeleteProjectUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteResourceOutcome WedataClient::DeleteResource(const DeleteResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceResponse rsp = DeleteResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceOutcome(rsp);
        else
            return DeleteResourceOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteResourceAsync(const DeleteResourceRequest& request, const DeleteResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteResourceRequest&;
    using Resp = DeleteResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteResourceOutcomeCallable WedataClient::DeleteResourceCallable(const DeleteResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteResourceOutcome>>();
    DeleteResourceAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteResourceRequest&,
        DeleteResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteResourceFileOutcome WedataClient::DeleteResourceFile(const DeleteResourceFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceFileResponse rsp = DeleteResourceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceFileOutcome(rsp);
        else
            return DeleteResourceFileOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceFileOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteResourceFileAsync(const DeleteResourceFileRequest& request, const DeleteResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteResourceFileRequest&;
    using Resp = DeleteResourceFileResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteResourceFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteResourceFileOutcomeCallable WedataClient::DeleteResourceFileCallable(const DeleteResourceFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteResourceFileOutcome>>();
    DeleteResourceFileAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteResourceFileRequest&,
        DeleteResourceFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteResourceFilesOutcome WedataClient::DeleteResourceFiles(const DeleteResourceFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceFilesResponse rsp = DeleteResourceFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceFilesOutcome(rsp);
        else
            return DeleteResourceFilesOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceFilesOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteResourceFilesAsync(const DeleteResourceFilesRequest& request, const DeleteResourceFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteResourceFilesRequest&;
    using Resp = DeleteResourceFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteResourceFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteResourceFilesOutcomeCallable WedataClient::DeleteResourceFilesCallable(const DeleteResourceFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteResourceFilesOutcome>>();
    DeleteResourceFilesAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteResourceFilesRequest&,
        DeleteResourceFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteRuleOutcome WedataClient::DeleteRule(const DeleteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRuleResponse rsp = DeleteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRuleOutcome(rsp);
        else
            return DeleteRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteRuleOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRuleRequest&;
    using Resp = DeleteRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteRuleOutcomeCallable WedataClient::DeleteRuleCallable(const DeleteRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRuleOutcome>>();
    DeleteRuleAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteRuleRequest&,
        DeleteRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteRuleTemplateOutcome WedataClient::DeleteRuleTemplate(const DeleteRuleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRuleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRuleTemplateResponse rsp = DeleteRuleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRuleTemplateOutcome(rsp);
        else
            return DeleteRuleTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteRuleTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteRuleTemplateAsync(const DeleteRuleTemplateRequest& request, const DeleteRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRuleTemplateRequest&;
    using Resp = DeleteRuleTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRuleTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteRuleTemplateOutcomeCallable WedataClient::DeleteRuleTemplateCallable(const DeleteRuleTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRuleTemplateOutcome>>();
    DeleteRuleTemplateAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteRuleTemplateRequest&,
        DeleteRuleTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteTaskAlarmRegularOutcome WedataClient::DeleteTaskAlarmRegular(const DeleteTaskAlarmRegularRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTaskAlarmRegular");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskAlarmRegularResponse rsp = DeleteTaskAlarmRegularResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskAlarmRegularOutcome(rsp);
        else
            return DeleteTaskAlarmRegularOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskAlarmRegularOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteTaskAlarmRegularAsync(const DeleteTaskAlarmRegularRequest& request, const DeleteTaskAlarmRegularAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTaskAlarmRegularRequest&;
    using Resp = DeleteTaskAlarmRegularResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTaskAlarmRegular", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteTaskAlarmRegularOutcomeCallable WedataClient::DeleteTaskAlarmRegularCallable(const DeleteTaskAlarmRegularRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTaskAlarmRegularOutcome>>();
    DeleteTaskAlarmRegularAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteTaskAlarmRegularRequest&,
        DeleteTaskAlarmRegularOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteTaskDsOutcome WedataClient::DeleteTaskDs(const DeleteTaskDsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTaskDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskDsResponse rsp = DeleteTaskDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskDsOutcome(rsp);
        else
            return DeleteTaskDsOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskDsOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteTaskDsAsync(const DeleteTaskDsRequest& request, const DeleteTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTaskDsRequest&;
    using Resp = DeleteTaskDsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTaskDs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteTaskDsOutcomeCallable WedataClient::DeleteTaskDsCallable(const DeleteTaskDsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTaskDsOutcome>>();
    DeleteTaskDsAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteTaskDsRequest&,
        DeleteTaskDsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteTaskLineageOutcome WedataClient::DeleteTaskLineage(const DeleteTaskLineageRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTaskLineage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskLineageResponse rsp = DeleteTaskLineageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskLineageOutcome(rsp);
        else
            return DeleteTaskLineageOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskLineageOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteTaskLineageAsync(const DeleteTaskLineageRequest& request, const DeleteTaskLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTaskLineageRequest&;
    using Resp = DeleteTaskLineageResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTaskLineage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteTaskLineageOutcomeCallable WedataClient::DeleteTaskLineageCallable(const DeleteTaskLineageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTaskLineageOutcome>>();
    DeleteTaskLineageAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteTaskLineageRequest&,
        DeleteTaskLineageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DeleteWorkflowByIdOutcome WedataClient::DeleteWorkflowById(const DeleteWorkflowByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkflowById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkflowByIdResponse rsp = DeleteWorkflowByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkflowByIdOutcome(rsp);
        else
            return DeleteWorkflowByIdOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkflowByIdOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteWorkflowByIdAsync(const DeleteWorkflowByIdRequest& request, const DeleteWorkflowByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWorkflowByIdRequest&;
    using Resp = DeleteWorkflowByIdResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWorkflowById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DeleteWorkflowByIdOutcomeCallable WedataClient::DeleteWorkflowByIdCallable(const DeleteWorkflowByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWorkflowByIdOutcome>>();
    DeleteWorkflowByIdAsync(
    request,
    [prom](
        const WedataClient*,
        const DeleteWorkflowByIdRequest&,
        DeleteWorkflowByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeAlarmEventsOutcome WedataClient::DescribeAlarmEvents(const DescribeAlarmEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmEventsResponse rsp = DescribeAlarmEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmEventsOutcome(rsp);
        else
            return DescribeAlarmEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmEventsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeAlarmEventsAsync(const DescribeAlarmEventsRequest& request, const DescribeAlarmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmEventsRequest&;
    using Resp = DescribeAlarmEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeAlarmEventsOutcomeCallable WedataClient::DescribeAlarmEventsCallable(const DescribeAlarmEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmEventsOutcome>>();
    DescribeAlarmEventsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeAlarmEventsRequest&,
        DescribeAlarmEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeAlarmReceiverOutcome WedataClient::DescribeAlarmReceiver(const DescribeAlarmReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmReceiverResponse rsp = DescribeAlarmReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmReceiverOutcome(rsp);
        else
            return DescribeAlarmReceiverOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmReceiverOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeAlarmReceiverAsync(const DescribeAlarmReceiverRequest& request, const DescribeAlarmReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmReceiverRequest&;
    using Resp = DescribeAlarmReceiverResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmReceiver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeAlarmReceiverOutcomeCallable WedataClient::DescribeAlarmReceiverCallable(const DescribeAlarmReceiverRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmReceiverOutcome>>();
    DescribeAlarmReceiverAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeAlarmReceiverRequest&,
        DescribeAlarmReceiverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeAllByFolderNewOutcome WedataClient::DescribeAllByFolderNew(const DescribeAllByFolderNewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllByFolderNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllByFolderNewResponse rsp = DescribeAllByFolderNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllByFolderNewOutcome(rsp);
        else
            return DescribeAllByFolderNewOutcome(o.GetError());
    }
    else
    {
        return DescribeAllByFolderNewOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeAllByFolderNewAsync(const DescribeAllByFolderNewRequest& request, const DescribeAllByFolderNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllByFolderNewRequest&;
    using Resp = DescribeAllByFolderNewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllByFolderNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeAllByFolderNewOutcomeCallable WedataClient::DescribeAllByFolderNewCallable(const DescribeAllByFolderNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllByFolderNewOutcome>>();
    DescribeAllByFolderNewAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeAllByFolderNewRequest&,
        DescribeAllByFolderNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeApproveListOutcome WedataClient::DescribeApproveList(const DescribeApproveListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApproveList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApproveListResponse rsp = DescribeApproveListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApproveListOutcome(rsp);
        else
            return DescribeApproveListOutcome(o.GetError());
    }
    else
    {
        return DescribeApproveListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeApproveListAsync(const DescribeApproveListRequest& request, const DescribeApproveListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApproveListRequest&;
    using Resp = DescribeApproveListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApproveList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeApproveListOutcomeCallable WedataClient::DescribeApproveListCallable(const DescribeApproveListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApproveListOutcome>>();
    DescribeApproveListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeApproveListRequest&,
        DescribeApproveListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeApproveTypeListOutcome WedataClient::DescribeApproveTypeList(const DescribeApproveTypeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApproveTypeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApproveTypeListResponse rsp = DescribeApproveTypeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApproveTypeListOutcome(rsp);
        else
            return DescribeApproveTypeListOutcome(o.GetError());
    }
    else
    {
        return DescribeApproveTypeListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeApproveTypeListAsync(const DescribeApproveTypeListRequest& request, const DescribeApproveTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApproveTypeListRequest&;
    using Resp = DescribeApproveTypeListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApproveTypeList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeApproveTypeListOutcomeCallable WedataClient::DescribeApproveTypeListCallable(const DescribeApproveTypeListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApproveTypeListOutcome>>();
    DescribeApproveTypeListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeApproveTypeListRequest&,
        DescribeApproveTypeListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeBaseBizCatalogsOutcome WedataClient::DescribeBaseBizCatalogs(const DescribeBaseBizCatalogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaseBizCatalogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaseBizCatalogsResponse rsp = DescribeBaseBizCatalogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaseBizCatalogsOutcome(rsp);
        else
            return DescribeBaseBizCatalogsOutcome(o.GetError());
    }
    else
    {
        return DescribeBaseBizCatalogsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeBaseBizCatalogsAsync(const DescribeBaseBizCatalogsRequest& request, const DescribeBaseBizCatalogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaseBizCatalogsRequest&;
    using Resp = DescribeBaseBizCatalogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaseBizCatalogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeBaseBizCatalogsOutcomeCallable WedataClient::DescribeBaseBizCatalogsCallable(const DescribeBaseBizCatalogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaseBizCatalogsOutcome>>();
    DescribeBaseBizCatalogsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeBaseBizCatalogsRequest&,
        DescribeBaseBizCatalogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeBatchOperateTaskOutcome WedataClient::DescribeBatchOperateTask(const DescribeBatchOperateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchOperateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchOperateTaskResponse rsp = DescribeBatchOperateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchOperateTaskOutcome(rsp);
        else
            return DescribeBatchOperateTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchOperateTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeBatchOperateTaskAsync(const DescribeBatchOperateTaskRequest& request, const DescribeBatchOperateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBatchOperateTaskRequest&;
    using Resp = DescribeBatchOperateTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBatchOperateTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeBatchOperateTaskOutcomeCallable WedataClient::DescribeBatchOperateTaskCallable(const DescribeBatchOperateTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBatchOperateTaskOutcome>>();
    DescribeBatchOperateTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeBatchOperateTaskRequest&,
        DescribeBatchOperateTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeCodeTemplateDetailOutcome WedataClient::DescribeCodeTemplateDetail(const DescribeCodeTemplateDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeTemplateDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeTemplateDetailResponse rsp = DescribeCodeTemplateDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeTemplateDetailOutcome(rsp);
        else
            return DescribeCodeTemplateDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCodeTemplateDetailOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeCodeTemplateDetailAsync(const DescribeCodeTemplateDetailRequest& request, const DescribeCodeTemplateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCodeTemplateDetailRequest&;
    using Resp = DescribeCodeTemplateDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCodeTemplateDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeCodeTemplateDetailOutcomeCallable WedataClient::DescribeCodeTemplateDetailCallable(const DescribeCodeTemplateDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCodeTemplateDetailOutcome>>();
    DescribeCodeTemplateDetailAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeCodeTemplateDetailRequest&,
        DescribeCodeTemplateDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeColumnLineageOutcome WedataClient::DescribeColumnLineage(const DescribeColumnLineageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeColumnLineage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeColumnLineageResponse rsp = DescribeColumnLineageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeColumnLineageOutcome(rsp);
        else
            return DescribeColumnLineageOutcome(o.GetError());
    }
    else
    {
        return DescribeColumnLineageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeColumnLineageAsync(const DescribeColumnLineageRequest& request, const DescribeColumnLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeColumnLineageRequest&;
    using Resp = DescribeColumnLineageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeColumnLineage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeColumnLineageOutcomeCallable WedataClient::DescribeColumnLineageCallable(const DescribeColumnLineageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeColumnLineageOutcome>>();
    DescribeColumnLineageAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeColumnLineageRequest&,
        DescribeColumnLineageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeColumnsMetaOutcome WedataClient::DescribeColumnsMeta(const DescribeColumnsMetaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeColumnsMeta");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeColumnsMetaResponse rsp = DescribeColumnsMetaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeColumnsMetaOutcome(rsp);
        else
            return DescribeColumnsMetaOutcome(o.GetError());
    }
    else
    {
        return DescribeColumnsMetaOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeColumnsMetaAsync(const DescribeColumnsMetaRequest& request, const DescribeColumnsMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeColumnsMetaRequest&;
    using Resp = DescribeColumnsMetaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeColumnsMeta", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeColumnsMetaOutcomeCallable WedataClient::DescribeColumnsMetaCallable(const DescribeColumnsMetaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeColumnsMetaOutcome>>();
    DescribeColumnsMetaAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeColumnsMetaRequest&,
        DescribeColumnsMetaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDataCheckStatOutcome WedataClient::DescribeDataCheckStat(const DescribeDataCheckStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataCheckStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataCheckStatResponse rsp = DescribeDataCheckStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataCheckStatOutcome(rsp);
        else
            return DescribeDataCheckStatOutcome(o.GetError());
    }
    else
    {
        return DescribeDataCheckStatOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataCheckStatAsync(const DescribeDataCheckStatRequest& request, const DescribeDataCheckStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataCheckStatRequest&;
    using Resp = DescribeDataCheckStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataCheckStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDataCheckStatOutcomeCallable WedataClient::DescribeDataCheckStatCallable(const DescribeDataCheckStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataCheckStatOutcome>>();
    DescribeDataCheckStatAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDataCheckStatRequest&,
        DescribeDataCheckStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDataServicePublishedApiDetailOutcome WedataClient::DescribeDataServicePublishedApiDetail(const DescribeDataServicePublishedApiDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataServicePublishedApiDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataServicePublishedApiDetailResponse rsp = DescribeDataServicePublishedApiDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataServicePublishedApiDetailOutcome(rsp);
        else
            return DescribeDataServicePublishedApiDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDataServicePublishedApiDetailOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataServicePublishedApiDetailAsync(const DescribeDataServicePublishedApiDetailRequest& request, const DescribeDataServicePublishedApiDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataServicePublishedApiDetailRequest&;
    using Resp = DescribeDataServicePublishedApiDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataServicePublishedApiDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDataServicePublishedApiDetailOutcomeCallable WedataClient::DescribeDataServicePublishedApiDetailCallable(const DescribeDataServicePublishedApiDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataServicePublishedApiDetailOutcome>>();
    DescribeDataServicePublishedApiDetailAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDataServicePublishedApiDetailRequest&,
        DescribeDataServicePublishedApiDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDataServicePublishedApiListOutcome WedataClient::DescribeDataServicePublishedApiList(const DescribeDataServicePublishedApiListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataServicePublishedApiList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataServicePublishedApiListResponse rsp = DescribeDataServicePublishedApiListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataServicePublishedApiListOutcome(rsp);
        else
            return DescribeDataServicePublishedApiListOutcome(o.GetError());
    }
    else
    {
        return DescribeDataServicePublishedApiListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataServicePublishedApiListAsync(const DescribeDataServicePublishedApiListRequest& request, const DescribeDataServicePublishedApiListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataServicePublishedApiListRequest&;
    using Resp = DescribeDataServicePublishedApiListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataServicePublishedApiList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDataServicePublishedApiListOutcomeCallable WedataClient::DescribeDataServicePublishedApiListCallable(const DescribeDataServicePublishedApiListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataServicePublishedApiListOutcome>>();
    DescribeDataServicePublishedApiListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDataServicePublishedApiListRequest&,
        DescribeDataServicePublishedApiListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDataSourceInfoListOutcome WedataClient::DescribeDataSourceInfoList(const DescribeDataSourceInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataSourceInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataSourceInfoListResponse rsp = DescribeDataSourceInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataSourceInfoListOutcome(rsp);
        else
            return DescribeDataSourceInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeDataSourceInfoListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataSourceInfoListAsync(const DescribeDataSourceInfoListRequest& request, const DescribeDataSourceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataSourceInfoListRequest&;
    using Resp = DescribeDataSourceInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataSourceInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDataSourceInfoListOutcomeCallable WedataClient::DescribeDataSourceInfoListCallable(const DescribeDataSourceInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataSourceInfoListOutcome>>();
    DescribeDataSourceInfoListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDataSourceInfoListRequest&,
        DescribeDataSourceInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDataSourceListOutcome WedataClient::DescribeDataSourceList(const DescribeDataSourceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataSourceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataSourceListResponse rsp = DescribeDataSourceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataSourceListOutcome(rsp);
        else
            return DescribeDataSourceListOutcome(o.GetError());
    }
    else
    {
        return DescribeDataSourceListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataSourceListAsync(const DescribeDataSourceListRequest& request, const DescribeDataSourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataSourceListRequest&;
    using Resp = DescribeDataSourceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataSourceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDataSourceListOutcomeCallable WedataClient::DescribeDataSourceListCallable(const DescribeDataSourceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataSourceListOutcome>>();
    DescribeDataSourceListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDataSourceListRequest&,
        DescribeDataSourceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDatabaseInfoListOutcome WedataClient::DescribeDatabaseInfoList(const DescribeDatabaseInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseInfoListResponse rsp = DescribeDatabaseInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseInfoListOutcome(rsp);
        else
            return DescribeDatabaseInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseInfoListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDatabaseInfoListAsync(const DescribeDatabaseInfoListRequest& request, const DescribeDatabaseInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatabaseInfoListRequest&;
    using Resp = DescribeDatabaseInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatabaseInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDatabaseInfoListOutcomeCallable WedataClient::DescribeDatabaseInfoListCallable(const DescribeDatabaseInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabaseInfoListOutcome>>();
    DescribeDatabaseInfoListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDatabaseInfoListRequest&,
        DescribeDatabaseInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDatabaseMetasOutcome WedataClient::DescribeDatabaseMetas(const DescribeDatabaseMetasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseMetas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseMetasResponse rsp = DescribeDatabaseMetasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseMetasOutcome(rsp);
        else
            return DescribeDatabaseMetasOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseMetasOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDatabaseMetasAsync(const DescribeDatabaseMetasRequest& request, const DescribeDatabaseMetasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatabaseMetasRequest&;
    using Resp = DescribeDatabaseMetasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatabaseMetas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDatabaseMetasOutcomeCallable WedataClient::DescribeDatabaseMetasCallable(const DescribeDatabaseMetasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabaseMetasOutcome>>();
    DescribeDatabaseMetasAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDatabaseMetasRequest&,
        DescribeDatabaseMetasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDatasourceOutcome WedataClient::DescribeDatasource(const DescribeDatasourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatasource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatasourceResponse rsp = DescribeDatasourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatasourceOutcome(rsp);
        else
            return DescribeDatasourceOutcome(o.GetError());
    }
    else
    {
        return DescribeDatasourceOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDatasourceAsync(const DescribeDatasourceRequest& request, const DescribeDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatasourceRequest&;
    using Resp = DescribeDatasourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatasource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDatasourceOutcomeCallable WedataClient::DescribeDatasourceCallable(const DescribeDatasourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatasourceOutcome>>();
    DescribeDatasourceAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDatasourceRequest&,
        DescribeDatasourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDependOpsTasksOutcome WedataClient::DescribeDependOpsTasks(const DescribeDependOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDependOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDependOpsTasksResponse rsp = DescribeDependOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDependOpsTasksOutcome(rsp);
        else
            return DescribeDependOpsTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeDependOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDependOpsTasksAsync(const DescribeDependOpsTasksRequest& request, const DescribeDependOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDependOpsTasksRequest&;
    using Resp = DescribeDependOpsTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDependOpsTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDependOpsTasksOutcomeCallable WedataClient::DescribeDependOpsTasksCallable(const DescribeDependOpsTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDependOpsTasksOutcome>>();
    DescribeDependOpsTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDependOpsTasksRequest&,
        DescribeDependOpsTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDependTaskListsOutcome WedataClient::DescribeDependTaskLists(const DescribeDependTaskListsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDependTaskLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDependTaskListsResponse rsp = DescribeDependTaskListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDependTaskListsOutcome(rsp);
        else
            return DescribeDependTaskListsOutcome(o.GetError());
    }
    else
    {
        return DescribeDependTaskListsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDependTaskListsAsync(const DescribeDependTaskListsRequest& request, const DescribeDependTaskListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDependTaskListsRequest&;
    using Resp = DescribeDependTaskListsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDependTaskLists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDependTaskListsOutcomeCallable WedataClient::DescribeDependTaskListsCallable(const DescribeDependTaskListsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDependTaskListsOutcome>>();
    DescribeDependTaskListsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDependTaskListsRequest&,
        DescribeDependTaskListsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDimensionScoreOutcome WedataClient::DescribeDimensionScore(const DescribeDimensionScoreRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDimensionScore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDimensionScoreResponse rsp = DescribeDimensionScoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDimensionScoreOutcome(rsp);
        else
            return DescribeDimensionScoreOutcome(o.GetError());
    }
    else
    {
        return DescribeDimensionScoreOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDimensionScoreAsync(const DescribeDimensionScoreRequest& request, const DescribeDimensionScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDimensionScoreRequest&;
    using Resp = DescribeDimensionScoreResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDimensionScore", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDimensionScoreOutcomeCallable WedataClient::DescribeDimensionScoreCallable(const DescribeDimensionScoreRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDimensionScoreOutcome>>();
    DescribeDimensionScoreAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDimensionScoreRequest&,
        DescribeDimensionScoreOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDsFolderTreeOutcome WedataClient::DescribeDsFolderTree(const DescribeDsFolderTreeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDsFolderTree");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDsFolderTreeResponse rsp = DescribeDsFolderTreeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDsFolderTreeOutcome(rsp);
        else
            return DescribeDsFolderTreeOutcome(o.GetError());
    }
    else
    {
        return DescribeDsFolderTreeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDsFolderTreeAsync(const DescribeDsFolderTreeRequest& request, const DescribeDsFolderTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDsFolderTreeRequest&;
    using Resp = DescribeDsFolderTreeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDsFolderTree", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDsFolderTreeOutcomeCallable WedataClient::DescribeDsFolderTreeCallable(const DescribeDsFolderTreeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDsFolderTreeOutcome>>();
    DescribeDsFolderTreeAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDsFolderTreeRequest&,
        DescribeDsFolderTreeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDsParentFolderTreeOutcome WedataClient::DescribeDsParentFolderTree(const DescribeDsParentFolderTreeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDsParentFolderTree");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDsParentFolderTreeResponse rsp = DescribeDsParentFolderTreeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDsParentFolderTreeOutcome(rsp);
        else
            return DescribeDsParentFolderTreeOutcome(o.GetError());
    }
    else
    {
        return DescribeDsParentFolderTreeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDsParentFolderTreeAsync(const DescribeDsParentFolderTreeRequest& request, const DescribeDsParentFolderTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDsParentFolderTreeRequest&;
    using Resp = DescribeDsParentFolderTreeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDsParentFolderTree", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDsParentFolderTreeOutcomeCallable WedataClient::DescribeDsParentFolderTreeCallable(const DescribeDsParentFolderTreeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDsParentFolderTreeOutcome>>();
    DescribeDsParentFolderTreeAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDsParentFolderTreeRequest&,
        DescribeDsParentFolderTreeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDsTaskVersionInfoOutcome WedataClient::DescribeDsTaskVersionInfo(const DescribeDsTaskVersionInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDsTaskVersionInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDsTaskVersionInfoResponse rsp = DescribeDsTaskVersionInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDsTaskVersionInfoOutcome(rsp);
        else
            return DescribeDsTaskVersionInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDsTaskVersionInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDsTaskVersionInfoAsync(const DescribeDsTaskVersionInfoRequest& request, const DescribeDsTaskVersionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDsTaskVersionInfoRequest&;
    using Resp = DescribeDsTaskVersionInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDsTaskVersionInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDsTaskVersionInfoOutcomeCallable WedataClient::DescribeDsTaskVersionInfoCallable(const DescribeDsTaskVersionInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDsTaskVersionInfoOutcome>>();
    DescribeDsTaskVersionInfoAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDsTaskVersionInfoRequest&,
        DescribeDsTaskVersionInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDsTaskVersionListOutcome WedataClient::DescribeDsTaskVersionList(const DescribeDsTaskVersionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDsTaskVersionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDsTaskVersionListResponse rsp = DescribeDsTaskVersionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDsTaskVersionListOutcome(rsp);
        else
            return DescribeDsTaskVersionListOutcome(o.GetError());
    }
    else
    {
        return DescribeDsTaskVersionListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDsTaskVersionListAsync(const DescribeDsTaskVersionListRequest& request, const DescribeDsTaskVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDsTaskVersionListRequest&;
    using Resp = DescribeDsTaskVersionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDsTaskVersionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDsTaskVersionListOutcomeCallable WedataClient::DescribeDsTaskVersionListCallable(const DescribeDsTaskVersionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDsTaskVersionListOutcome>>();
    DescribeDsTaskVersionListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDsTaskVersionListRequest&,
        DescribeDsTaskVersionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDutyScheduleDetailsOutcome WedataClient::DescribeDutyScheduleDetails(const DescribeDutyScheduleDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDutyScheduleDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDutyScheduleDetailsResponse rsp = DescribeDutyScheduleDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDutyScheduleDetailsOutcome(rsp);
        else
            return DescribeDutyScheduleDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeDutyScheduleDetailsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDutyScheduleDetailsAsync(const DescribeDutyScheduleDetailsRequest& request, const DescribeDutyScheduleDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDutyScheduleDetailsRequest&;
    using Resp = DescribeDutyScheduleDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDutyScheduleDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDutyScheduleDetailsOutcomeCallable WedataClient::DescribeDutyScheduleDetailsCallable(const DescribeDutyScheduleDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDutyScheduleDetailsOutcome>>();
    DescribeDutyScheduleDetailsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDutyScheduleDetailsRequest&,
        DescribeDutyScheduleDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeDutyScheduleListOutcome WedataClient::DescribeDutyScheduleList(const DescribeDutyScheduleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDutyScheduleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDutyScheduleListResponse rsp = DescribeDutyScheduleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDutyScheduleListOutcome(rsp);
        else
            return DescribeDutyScheduleListOutcome(o.GetError());
    }
    else
    {
        return DescribeDutyScheduleListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDutyScheduleListAsync(const DescribeDutyScheduleListRequest& request, const DescribeDutyScheduleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDutyScheduleListRequest&;
    using Resp = DescribeDutyScheduleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDutyScheduleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeDutyScheduleListOutcomeCallable WedataClient::DescribeDutyScheduleListCallable(const DescribeDutyScheduleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDutyScheduleListOutcome>>();
    DescribeDutyScheduleListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeDutyScheduleListRequest&,
        DescribeDutyScheduleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeEventOutcome WedataClient::DescribeEvent(const DescribeEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventResponse rsp = DescribeEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventOutcome(rsp);
        else
            return DescribeEventOutcome(o.GetError());
    }
    else
    {
        return DescribeEventOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeEventAsync(const DescribeEventRequest& request, const DescribeEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEventRequest&;
    using Resp = DescribeEventResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeEventOutcomeCallable WedataClient::DescribeEventCallable(const DescribeEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEventOutcome>>();
    DescribeEventAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeEventRequest&,
        DescribeEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeEventCasesOutcome WedataClient::DescribeEventCases(const DescribeEventCasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventCases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventCasesResponse rsp = DescribeEventCasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventCasesOutcome(rsp);
        else
            return DescribeEventCasesOutcome(o.GetError());
    }
    else
    {
        return DescribeEventCasesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeEventCasesAsync(const DescribeEventCasesRequest& request, const DescribeEventCasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEventCasesRequest&;
    using Resp = DescribeEventCasesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEventCases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeEventCasesOutcomeCallable WedataClient::DescribeEventCasesCallable(const DescribeEventCasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEventCasesOutcome>>();
    DescribeEventCasesAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeEventCasesRequest&,
        DescribeEventCasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeEventConsumeTasksOutcome WedataClient::DescribeEventConsumeTasks(const DescribeEventConsumeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventConsumeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventConsumeTasksResponse rsp = DescribeEventConsumeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventConsumeTasksOutcome(rsp);
        else
            return DescribeEventConsumeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeEventConsumeTasksOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeEventConsumeTasksAsync(const DescribeEventConsumeTasksRequest& request, const DescribeEventConsumeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEventConsumeTasksRequest&;
    using Resp = DescribeEventConsumeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEventConsumeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeEventConsumeTasksOutcomeCallable WedataClient::DescribeEventConsumeTasksCallable(const DescribeEventConsumeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEventConsumeTasksOutcome>>();
    DescribeEventConsumeTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeEventConsumeTasksRequest&,
        DescribeEventConsumeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeExecStrategyOutcome WedataClient::DescribeExecStrategy(const DescribeExecStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExecStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExecStrategyResponse rsp = DescribeExecStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExecStrategyOutcome(rsp);
        else
            return DescribeExecStrategyOutcome(o.GetError());
    }
    else
    {
        return DescribeExecStrategyOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeExecStrategyAsync(const DescribeExecStrategyRequest& request, const DescribeExecStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExecStrategyRequest&;
    using Resp = DescribeExecStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExecStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeExecStrategyOutcomeCallable WedataClient::DescribeExecStrategyCallable(const DescribeExecStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExecStrategyOutcome>>();
    DescribeExecStrategyAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeExecStrategyRequest&,
        DescribeExecStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeExecutorGroupMetricOutcome WedataClient::DescribeExecutorGroupMetric(const DescribeExecutorGroupMetricRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExecutorGroupMetric");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExecutorGroupMetricResponse rsp = DescribeExecutorGroupMetricResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExecutorGroupMetricOutcome(rsp);
        else
            return DescribeExecutorGroupMetricOutcome(o.GetError());
    }
    else
    {
        return DescribeExecutorGroupMetricOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeExecutorGroupMetricAsync(const DescribeExecutorGroupMetricRequest& request, const DescribeExecutorGroupMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExecutorGroupMetricRequest&;
    using Resp = DescribeExecutorGroupMetricResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExecutorGroupMetric", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeExecutorGroupMetricOutcomeCallable WedataClient::DescribeExecutorGroupMetricCallable(const DescribeExecutorGroupMetricRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExecutorGroupMetricOutcome>>();
    DescribeExecutorGroupMetricAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeExecutorGroupMetricRequest&,
        DescribeExecutorGroupMetricOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeFieldBasicInfoOutcome WedataClient::DescribeFieldBasicInfo(const DescribeFieldBasicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFieldBasicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFieldBasicInfoResponse rsp = DescribeFieldBasicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFieldBasicInfoOutcome(rsp);
        else
            return DescribeFieldBasicInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeFieldBasicInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeFieldBasicInfoAsync(const DescribeFieldBasicInfoRequest& request, const DescribeFieldBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFieldBasicInfoRequest&;
    using Resp = DescribeFieldBasicInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFieldBasicInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeFieldBasicInfoOutcomeCallable WedataClient::DescribeFieldBasicInfoCallable(const DescribeFieldBasicInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFieldBasicInfoOutcome>>();
    DescribeFieldBasicInfoAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeFieldBasicInfoRequest&,
        DescribeFieldBasicInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeFolderWorkflowListOutcome WedataClient::DescribeFolderWorkflowList(const DescribeFolderWorkflowListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFolderWorkflowList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFolderWorkflowListResponse rsp = DescribeFolderWorkflowListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFolderWorkflowListOutcome(rsp);
        else
            return DescribeFolderWorkflowListOutcome(o.GetError());
    }
    else
    {
        return DescribeFolderWorkflowListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeFolderWorkflowListAsync(const DescribeFolderWorkflowListRequest& request, const DescribeFolderWorkflowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFolderWorkflowListRequest&;
    using Resp = DescribeFolderWorkflowListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFolderWorkflowList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeFolderWorkflowListOutcomeCallable WedataClient::DescribeFolderWorkflowListCallable(const DescribeFolderWorkflowListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFolderWorkflowListOutcome>>();
    DescribeFolderWorkflowListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeFolderWorkflowListRequest&,
        DescribeFolderWorkflowListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeFormVersionParamOutcome WedataClient::DescribeFormVersionParam(const DescribeFormVersionParamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFormVersionParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFormVersionParamResponse rsp = DescribeFormVersionParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFormVersionParamOutcome(rsp);
        else
            return DescribeFormVersionParamOutcome(o.GetError());
    }
    else
    {
        return DescribeFormVersionParamOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeFormVersionParamAsync(const DescribeFormVersionParamRequest& request, const DescribeFormVersionParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFormVersionParamRequest&;
    using Resp = DescribeFormVersionParamResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFormVersionParam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeFormVersionParamOutcomeCallable WedataClient::DescribeFormVersionParamCallable(const DescribeFormVersionParamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFormVersionParamOutcome>>();
    DescribeFormVersionParamAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeFormVersionParamRequest&,
        DescribeFormVersionParamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeFunctionKindsOutcome WedataClient::DescribeFunctionKinds(const DescribeFunctionKindsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFunctionKinds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFunctionKindsResponse rsp = DescribeFunctionKindsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFunctionKindsOutcome(rsp);
        else
            return DescribeFunctionKindsOutcome(o.GetError());
    }
    else
    {
        return DescribeFunctionKindsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeFunctionKindsAsync(const DescribeFunctionKindsRequest& request, const DescribeFunctionKindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFunctionKindsRequest&;
    using Resp = DescribeFunctionKindsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFunctionKinds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeFunctionKindsOutcomeCallable WedataClient::DescribeFunctionKindsCallable(const DescribeFunctionKindsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFunctionKindsOutcome>>();
    DescribeFunctionKindsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeFunctionKindsRequest&,
        DescribeFunctionKindsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeFunctionTypesOutcome WedataClient::DescribeFunctionTypes(const DescribeFunctionTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFunctionTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFunctionTypesResponse rsp = DescribeFunctionTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFunctionTypesOutcome(rsp);
        else
            return DescribeFunctionTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeFunctionTypesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeFunctionTypesAsync(const DescribeFunctionTypesRequest& request, const DescribeFunctionTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFunctionTypesRequest&;
    using Resp = DescribeFunctionTypesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFunctionTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeFunctionTypesOutcomeCallable WedataClient::DescribeFunctionTypesCallable(const DescribeFunctionTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFunctionTypesOutcome>>();
    DescribeFunctionTypesAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeFunctionTypesRequest&,
        DescribeFunctionTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeInstanceByCycleOutcome WedataClient::DescribeInstanceByCycle(const DescribeInstanceByCycleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceByCycle");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceByCycleResponse rsp = DescribeInstanceByCycleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceByCycleOutcome(rsp);
        else
            return DescribeInstanceByCycleOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceByCycleOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceByCycleAsync(const DescribeInstanceByCycleRequest& request, const DescribeInstanceByCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceByCycleRequest&;
    using Resp = DescribeInstanceByCycleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceByCycle", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeInstanceByCycleOutcomeCallable WedataClient::DescribeInstanceByCycleCallable(const DescribeInstanceByCycleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceByCycleOutcome>>();
    DescribeInstanceByCycleAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeInstanceByCycleRequest&,
        DescribeInstanceByCycleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeInstanceDetailInfoOutcome WedataClient::DescribeInstanceDetailInfo(const DescribeInstanceDetailInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceDetailInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceDetailInfoResponse rsp = DescribeInstanceDetailInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceDetailInfoOutcome(rsp);
        else
            return DescribeInstanceDetailInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceDetailInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceDetailInfoAsync(const DescribeInstanceDetailInfoRequest& request, const DescribeInstanceDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceDetailInfoRequest&;
    using Resp = DescribeInstanceDetailInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceDetailInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeInstanceDetailInfoOutcomeCallable WedataClient::DescribeInstanceDetailInfoCallable(const DescribeInstanceDetailInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceDetailInfoOutcome>>();
    DescribeInstanceDetailInfoAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeInstanceDetailInfoRequest&,
        DescribeInstanceDetailInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeInstanceLastLogOutcome WedataClient::DescribeInstanceLastLog(const DescribeInstanceLastLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLastLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLastLogResponse rsp = DescribeInstanceLastLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLastLogOutcome(rsp);
        else
            return DescribeInstanceLastLogOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLastLogOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceLastLogAsync(const DescribeInstanceLastLogRequest& request, const DescribeInstanceLastLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceLastLogRequest&;
    using Resp = DescribeInstanceLastLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceLastLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeInstanceLastLogOutcomeCallable WedataClient::DescribeInstanceLastLogCallable(const DescribeInstanceLastLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceLastLogOutcome>>();
    DescribeInstanceLastLogAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeInstanceLastLogRequest&,
        DescribeInstanceLastLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeInstanceListOutcome WedataClient::DescribeInstanceList(const DescribeInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceListResponse rsp = DescribeInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceListOutcome(rsp);
        else
            return DescribeInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceListAsync(const DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceListRequest&;
    using Resp = DescribeInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeInstanceListOutcomeCallable WedataClient::DescribeInstanceListCallable(const DescribeInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceListOutcome>>();
    DescribeInstanceListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeInstanceListRequest&,
        DescribeInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeInstanceLogOutcome WedataClient::DescribeInstanceLog(const DescribeInstanceLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLogResponse rsp = DescribeInstanceLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLogOutcome(rsp);
        else
            return DescribeInstanceLogOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLogOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceLogAsync(const DescribeInstanceLogRequest& request, const DescribeInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceLogRequest&;
    using Resp = DescribeInstanceLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeInstanceLogOutcomeCallable WedataClient::DescribeInstanceLogCallable(const DescribeInstanceLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceLogOutcome>>();
    DescribeInstanceLogAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeInstanceLogRequest&,
        DescribeInstanceLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeInstanceLogDetailOutcome WedataClient::DescribeInstanceLogDetail(const DescribeInstanceLogDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLogDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLogDetailResponse rsp = DescribeInstanceLogDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLogDetailOutcome(rsp);
        else
            return DescribeInstanceLogDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLogDetailOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceLogDetailAsync(const DescribeInstanceLogDetailRequest& request, const DescribeInstanceLogDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceLogDetailRequest&;
    using Resp = DescribeInstanceLogDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceLogDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeInstanceLogDetailOutcomeCallable WedataClient::DescribeInstanceLogDetailCallable(const DescribeInstanceLogDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceLogDetailOutcome>>();
    DescribeInstanceLogDetailAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeInstanceLogDetailRequest&,
        DescribeInstanceLogDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeInstanceLogFileOutcome WedataClient::DescribeInstanceLogFile(const DescribeInstanceLogFileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLogFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLogFileResponse rsp = DescribeInstanceLogFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLogFileOutcome(rsp);
        else
            return DescribeInstanceLogFileOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLogFileOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceLogFileAsync(const DescribeInstanceLogFileRequest& request, const DescribeInstanceLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceLogFileRequest&;
    using Resp = DescribeInstanceLogFileResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceLogFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeInstanceLogFileOutcomeCallable WedataClient::DescribeInstanceLogFileCallable(const DescribeInstanceLogFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceLogFileOutcome>>();
    DescribeInstanceLogFileAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeInstanceLogFileRequest&,
        DescribeInstanceLogFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeInstanceLogListOutcome WedataClient::DescribeInstanceLogList(const DescribeInstanceLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLogListResponse rsp = DescribeInstanceLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLogListOutcome(rsp);
        else
            return DescribeInstanceLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLogListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceLogListAsync(const DescribeInstanceLogListRequest& request, const DescribeInstanceLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceLogListRequest&;
    using Resp = DescribeInstanceLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeInstanceLogListOutcomeCallable WedataClient::DescribeInstanceLogListCallable(const DescribeInstanceLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceLogListOutcome>>();
    DescribeInstanceLogListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeInstanceLogListRequest&,
        DescribeInstanceLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeIntegrationNodeOutcome WedataClient::DescribeIntegrationNode(const DescribeIntegrationNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationNodeResponse rsp = DescribeIntegrationNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationNodeOutcome(rsp);
        else
            return DescribeIntegrationNodeOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationNodeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationNodeAsync(const DescribeIntegrationNodeRequest& request, const DescribeIntegrationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntegrationNodeRequest&;
    using Resp = DescribeIntegrationNodeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntegrationNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeIntegrationNodeOutcomeCallable WedataClient::DescribeIntegrationNodeCallable(const DescribeIntegrationNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntegrationNodeOutcome>>();
    DescribeIntegrationNodeAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeIntegrationNodeRequest&,
        DescribeIntegrationNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeIntegrationStatisticsOutcome WedataClient::DescribeIntegrationStatistics(const DescribeIntegrationStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationStatisticsResponse rsp = DescribeIntegrationStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationStatisticsOutcome(rsp);
        else
            return DescribeIntegrationStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationStatisticsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationStatisticsAsync(const DescribeIntegrationStatisticsRequest& request, const DescribeIntegrationStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntegrationStatisticsRequest&;
    using Resp = DescribeIntegrationStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntegrationStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeIntegrationStatisticsOutcomeCallable WedataClient::DescribeIntegrationStatisticsCallable(const DescribeIntegrationStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntegrationStatisticsOutcome>>();
    DescribeIntegrationStatisticsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeIntegrationStatisticsRequest&,
        DescribeIntegrationStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeIntegrationStatisticsInstanceTrendOutcome WedataClient::DescribeIntegrationStatisticsInstanceTrend(const DescribeIntegrationStatisticsInstanceTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationStatisticsInstanceTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationStatisticsInstanceTrendResponse rsp = DescribeIntegrationStatisticsInstanceTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationStatisticsInstanceTrendOutcome(rsp);
        else
            return DescribeIntegrationStatisticsInstanceTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationStatisticsInstanceTrendOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationStatisticsInstanceTrendAsync(const DescribeIntegrationStatisticsInstanceTrendRequest& request, const DescribeIntegrationStatisticsInstanceTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntegrationStatisticsInstanceTrendRequest&;
    using Resp = DescribeIntegrationStatisticsInstanceTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntegrationStatisticsInstanceTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeIntegrationStatisticsInstanceTrendOutcomeCallable WedataClient::DescribeIntegrationStatisticsInstanceTrendCallable(const DescribeIntegrationStatisticsInstanceTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntegrationStatisticsInstanceTrendOutcome>>();
    DescribeIntegrationStatisticsInstanceTrendAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeIntegrationStatisticsInstanceTrendRequest&,
        DescribeIntegrationStatisticsInstanceTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeIntegrationStatisticsRecordsTrendOutcome WedataClient::DescribeIntegrationStatisticsRecordsTrend(const DescribeIntegrationStatisticsRecordsTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationStatisticsRecordsTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationStatisticsRecordsTrendResponse rsp = DescribeIntegrationStatisticsRecordsTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationStatisticsRecordsTrendOutcome(rsp);
        else
            return DescribeIntegrationStatisticsRecordsTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationStatisticsRecordsTrendOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationStatisticsRecordsTrendAsync(const DescribeIntegrationStatisticsRecordsTrendRequest& request, const DescribeIntegrationStatisticsRecordsTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntegrationStatisticsRecordsTrendRequest&;
    using Resp = DescribeIntegrationStatisticsRecordsTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntegrationStatisticsRecordsTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeIntegrationStatisticsRecordsTrendOutcomeCallable WedataClient::DescribeIntegrationStatisticsRecordsTrendCallable(const DescribeIntegrationStatisticsRecordsTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntegrationStatisticsRecordsTrendOutcome>>();
    DescribeIntegrationStatisticsRecordsTrendAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeIntegrationStatisticsRecordsTrendRequest&,
        DescribeIntegrationStatisticsRecordsTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeIntegrationStatisticsTaskStatusOutcome WedataClient::DescribeIntegrationStatisticsTaskStatus(const DescribeIntegrationStatisticsTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationStatisticsTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationStatisticsTaskStatusResponse rsp = DescribeIntegrationStatisticsTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationStatisticsTaskStatusOutcome(rsp);
        else
            return DescribeIntegrationStatisticsTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationStatisticsTaskStatusOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationStatisticsTaskStatusAsync(const DescribeIntegrationStatisticsTaskStatusRequest& request, const DescribeIntegrationStatisticsTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntegrationStatisticsTaskStatusRequest&;
    using Resp = DescribeIntegrationStatisticsTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntegrationStatisticsTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeIntegrationStatisticsTaskStatusOutcomeCallable WedataClient::DescribeIntegrationStatisticsTaskStatusCallable(const DescribeIntegrationStatisticsTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntegrationStatisticsTaskStatusOutcome>>();
    DescribeIntegrationStatisticsTaskStatusAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeIntegrationStatisticsTaskStatusRequest&,
        DescribeIntegrationStatisticsTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeIntegrationStatisticsTaskStatusTrendOutcome WedataClient::DescribeIntegrationStatisticsTaskStatusTrend(const DescribeIntegrationStatisticsTaskStatusTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationStatisticsTaskStatusTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationStatisticsTaskStatusTrendResponse rsp = DescribeIntegrationStatisticsTaskStatusTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationStatisticsTaskStatusTrendOutcome(rsp);
        else
            return DescribeIntegrationStatisticsTaskStatusTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationStatisticsTaskStatusTrendOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationStatisticsTaskStatusTrendAsync(const DescribeIntegrationStatisticsTaskStatusTrendRequest& request, const DescribeIntegrationStatisticsTaskStatusTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntegrationStatisticsTaskStatusTrendRequest&;
    using Resp = DescribeIntegrationStatisticsTaskStatusTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntegrationStatisticsTaskStatusTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeIntegrationStatisticsTaskStatusTrendOutcomeCallable WedataClient::DescribeIntegrationStatisticsTaskStatusTrendCallable(const DescribeIntegrationStatisticsTaskStatusTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntegrationStatisticsTaskStatusTrendOutcome>>();
    DescribeIntegrationStatisticsTaskStatusTrendAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeIntegrationStatisticsTaskStatusTrendRequest&,
        DescribeIntegrationStatisticsTaskStatusTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeIntegrationTaskOutcome WedataClient::DescribeIntegrationTask(const DescribeIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationTaskResponse rsp = DescribeIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationTaskOutcome(rsp);
        else
            return DescribeIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationTaskAsync(const DescribeIntegrationTaskRequest& request, const DescribeIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntegrationTaskRequest&;
    using Resp = DescribeIntegrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntegrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeIntegrationTaskOutcomeCallable WedataClient::DescribeIntegrationTaskCallable(const DescribeIntegrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntegrationTaskOutcome>>();
    DescribeIntegrationTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeIntegrationTaskRequest&,
        DescribeIntegrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeIntegrationTasksOutcome WedataClient::DescribeIntegrationTasks(const DescribeIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationTasksResponse rsp = DescribeIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationTasksOutcome(rsp);
        else
            return DescribeIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationTasksAsync(const DescribeIntegrationTasksRequest& request, const DescribeIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntegrationTasksRequest&;
    using Resp = DescribeIntegrationTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntegrationTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeIntegrationTasksOutcomeCallable WedataClient::DescribeIntegrationTasksCallable(const DescribeIntegrationTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntegrationTasksOutcome>>();
    DescribeIntegrationTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeIntegrationTasksRequest&,
        DescribeIntegrationTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeIntegrationVersionNodesInfoOutcome WedataClient::DescribeIntegrationVersionNodesInfo(const DescribeIntegrationVersionNodesInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationVersionNodesInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationVersionNodesInfoResponse rsp = DescribeIntegrationVersionNodesInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationVersionNodesInfoOutcome(rsp);
        else
            return DescribeIntegrationVersionNodesInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationVersionNodesInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationVersionNodesInfoAsync(const DescribeIntegrationVersionNodesInfoRequest& request, const DescribeIntegrationVersionNodesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntegrationVersionNodesInfoRequest&;
    using Resp = DescribeIntegrationVersionNodesInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntegrationVersionNodesInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeIntegrationVersionNodesInfoOutcomeCallable WedataClient::DescribeIntegrationVersionNodesInfoCallable(const DescribeIntegrationVersionNodesInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntegrationVersionNodesInfoOutcome>>();
    DescribeIntegrationVersionNodesInfoAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeIntegrationVersionNodesInfoRequest&,
        DescribeIntegrationVersionNodesInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeManualTriggerRecordPageOutcome WedataClient::DescribeManualTriggerRecordPage(const DescribeManualTriggerRecordPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeManualTriggerRecordPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeManualTriggerRecordPageResponse rsp = DescribeManualTriggerRecordPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeManualTriggerRecordPageOutcome(rsp);
        else
            return DescribeManualTriggerRecordPageOutcome(o.GetError());
    }
    else
    {
        return DescribeManualTriggerRecordPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeManualTriggerRecordPageAsync(const DescribeManualTriggerRecordPageRequest& request, const DescribeManualTriggerRecordPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeManualTriggerRecordPageRequest&;
    using Resp = DescribeManualTriggerRecordPageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeManualTriggerRecordPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeManualTriggerRecordPageOutcomeCallable WedataClient::DescribeManualTriggerRecordPageCallable(const DescribeManualTriggerRecordPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeManualTriggerRecordPageOutcome>>();
    DescribeManualTriggerRecordPageAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeManualTriggerRecordPageRequest&,
        DescribeManualTriggerRecordPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeOfflineTaskTokenOutcome WedataClient::DescribeOfflineTaskToken(const DescribeOfflineTaskTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOfflineTaskToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOfflineTaskTokenResponse rsp = DescribeOfflineTaskTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOfflineTaskTokenOutcome(rsp);
        else
            return DescribeOfflineTaskTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeOfflineTaskTokenOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOfflineTaskTokenAsync(const DescribeOfflineTaskTokenRequest& request, const DescribeOfflineTaskTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOfflineTaskTokenRequest&;
    using Resp = DescribeOfflineTaskTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOfflineTaskToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeOfflineTaskTokenOutcomeCallable WedataClient::DescribeOfflineTaskTokenCallable(const DescribeOfflineTaskTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOfflineTaskTokenOutcome>>();
    DescribeOfflineTaskTokenAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeOfflineTaskTokenRequest&,
        DescribeOfflineTaskTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeOperateOpsTasksOutcome WedataClient::DescribeOperateOpsTasks(const DescribeOperateOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOperateOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOperateOpsTasksResponse rsp = DescribeOperateOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOperateOpsTasksOutcome(rsp);
        else
            return DescribeOperateOpsTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeOperateOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOperateOpsTasksAsync(const DescribeOperateOpsTasksRequest& request, const DescribeOperateOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOperateOpsTasksRequest&;
    using Resp = DescribeOperateOpsTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOperateOpsTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeOperateOpsTasksOutcomeCallable WedataClient::DescribeOperateOpsTasksCallable(const DescribeOperateOpsTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOperateOpsTasksOutcome>>();
    DescribeOperateOpsTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeOperateOpsTasksRequest&,
        DescribeOperateOpsTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeOpsInstanceLogListOutcome WedataClient::DescribeOpsInstanceLogList(const DescribeOpsInstanceLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpsInstanceLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpsInstanceLogListResponse rsp = DescribeOpsInstanceLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpsInstanceLogListOutcome(rsp);
        else
            return DescribeOpsInstanceLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeOpsInstanceLogListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOpsInstanceLogListAsync(const DescribeOpsInstanceLogListRequest& request, const DescribeOpsInstanceLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOpsInstanceLogListRequest&;
    using Resp = DescribeOpsInstanceLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOpsInstanceLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeOpsInstanceLogListOutcomeCallable WedataClient::DescribeOpsInstanceLogListCallable(const DescribeOpsInstanceLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOpsInstanceLogListOutcome>>();
    DescribeOpsInstanceLogListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeOpsInstanceLogListRequest&,
        DescribeOpsInstanceLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeOpsMakePlanInstancesOutcome WedataClient::DescribeOpsMakePlanInstances(const DescribeOpsMakePlanInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpsMakePlanInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpsMakePlanInstancesResponse rsp = DescribeOpsMakePlanInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpsMakePlanInstancesOutcome(rsp);
        else
            return DescribeOpsMakePlanInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeOpsMakePlanInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOpsMakePlanInstancesAsync(const DescribeOpsMakePlanInstancesRequest& request, const DescribeOpsMakePlanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOpsMakePlanInstancesRequest&;
    using Resp = DescribeOpsMakePlanInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOpsMakePlanInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeOpsMakePlanInstancesOutcomeCallable WedataClient::DescribeOpsMakePlanInstancesCallable(const DescribeOpsMakePlanInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOpsMakePlanInstancesOutcome>>();
    DescribeOpsMakePlanInstancesAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeOpsMakePlanInstancesRequest&,
        DescribeOpsMakePlanInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeOpsMakePlanTasksOutcome WedataClient::DescribeOpsMakePlanTasks(const DescribeOpsMakePlanTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpsMakePlanTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpsMakePlanTasksResponse rsp = DescribeOpsMakePlanTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpsMakePlanTasksOutcome(rsp);
        else
            return DescribeOpsMakePlanTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeOpsMakePlanTasksOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOpsMakePlanTasksAsync(const DescribeOpsMakePlanTasksRequest& request, const DescribeOpsMakePlanTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOpsMakePlanTasksRequest&;
    using Resp = DescribeOpsMakePlanTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOpsMakePlanTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeOpsMakePlanTasksOutcomeCallable WedataClient::DescribeOpsMakePlanTasksCallable(const DescribeOpsMakePlanTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOpsMakePlanTasksOutcome>>();
    DescribeOpsMakePlanTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeOpsMakePlanTasksRequest&,
        DescribeOpsMakePlanTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeOpsMakePlansOutcome WedataClient::DescribeOpsMakePlans(const DescribeOpsMakePlansRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpsMakePlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpsMakePlansResponse rsp = DescribeOpsMakePlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpsMakePlansOutcome(rsp);
        else
            return DescribeOpsMakePlansOutcome(o.GetError());
    }
    else
    {
        return DescribeOpsMakePlansOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOpsMakePlansAsync(const DescribeOpsMakePlansRequest& request, const DescribeOpsMakePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOpsMakePlansRequest&;
    using Resp = DescribeOpsMakePlansResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOpsMakePlans", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeOpsMakePlansOutcomeCallable WedataClient::DescribeOpsMakePlansCallable(const DescribeOpsMakePlansRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOpsMakePlansOutcome>>();
    DescribeOpsMakePlansAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeOpsMakePlansRequest&,
        DescribeOpsMakePlansOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeOpsWorkflowsOutcome WedataClient::DescribeOpsWorkflows(const DescribeOpsWorkflowsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpsWorkflows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpsWorkflowsResponse rsp = DescribeOpsWorkflowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpsWorkflowsOutcome(rsp);
        else
            return DescribeOpsWorkflowsOutcome(o.GetError());
    }
    else
    {
        return DescribeOpsWorkflowsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOpsWorkflowsAsync(const DescribeOpsWorkflowsRequest& request, const DescribeOpsWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOpsWorkflowsRequest&;
    using Resp = DescribeOpsWorkflowsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOpsWorkflows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeOpsWorkflowsOutcomeCallable WedataClient::DescribeOpsWorkflowsCallable(const DescribeOpsWorkflowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOpsWorkflowsOutcome>>();
    DescribeOpsWorkflowsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeOpsWorkflowsRequest&,
        DescribeOpsWorkflowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeOrganizationalFunctionsOutcome WedataClient::DescribeOrganizationalFunctions(const DescribeOrganizationalFunctionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationalFunctions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationalFunctionsResponse rsp = DescribeOrganizationalFunctionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationalFunctionsOutcome(rsp);
        else
            return DescribeOrganizationalFunctionsOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationalFunctionsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOrganizationalFunctionsAsync(const DescribeOrganizationalFunctionsRequest& request, const DescribeOrganizationalFunctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrganizationalFunctionsRequest&;
    using Resp = DescribeOrganizationalFunctionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationalFunctions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeOrganizationalFunctionsOutcomeCallable WedataClient::DescribeOrganizationalFunctionsCallable(const DescribeOrganizationalFunctionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationalFunctionsOutcome>>();
    DescribeOrganizationalFunctionsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeOrganizationalFunctionsRequest&,
        DescribeOrganizationalFunctionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeParentTaskOutcome WedataClient::DescribeParentTask(const DescribeParentTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParentTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParentTaskResponse rsp = DescribeParentTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParentTaskOutcome(rsp);
        else
            return DescribeParentTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeParentTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeParentTaskAsync(const DescribeParentTaskRequest& request, const DescribeParentTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeParentTaskRequest&;
    using Resp = DescribeParentTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeParentTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeParentTaskOutcomeCallable WedataClient::DescribeParentTaskCallable(const DescribeParentTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeParentTaskOutcome>>();
    DescribeParentTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeParentTaskRequest&,
        DescribeParentTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribePendingSubmitTaskListOutcome WedataClient::DescribePendingSubmitTaskList(const DescribePendingSubmitTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePendingSubmitTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePendingSubmitTaskListResponse rsp = DescribePendingSubmitTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePendingSubmitTaskListOutcome(rsp);
        else
            return DescribePendingSubmitTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribePendingSubmitTaskListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribePendingSubmitTaskListAsync(const DescribePendingSubmitTaskListRequest& request, const DescribePendingSubmitTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePendingSubmitTaskListRequest&;
    using Resp = DescribePendingSubmitTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePendingSubmitTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribePendingSubmitTaskListOutcomeCallable WedataClient::DescribePendingSubmitTaskListCallable(const DescribePendingSubmitTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePendingSubmitTaskListOutcome>>();
    DescribePendingSubmitTaskListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribePendingSubmitTaskListRequest&,
        DescribePendingSubmitTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeProjectOutcome WedataClient::DescribeProject(const DescribeProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectResponse rsp = DescribeProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectOutcome(rsp);
        else
            return DescribeProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectRequest&;
    using Resp = DescribeProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeProjectOutcomeCallable WedataClient::DescribeProjectCallable(const DescribeProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectOutcome>>();
    DescribeProjectAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeProjectRequest&,
        DescribeProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeProjectUsersOutcome WedataClient::DescribeProjectUsers(const DescribeProjectUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectUsersResponse rsp = DescribeProjectUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectUsersOutcome(rsp);
        else
            return DescribeProjectUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectUsersOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeProjectUsersAsync(const DescribeProjectUsersRequest& request, const DescribeProjectUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectUsersRequest&;
    using Resp = DescribeProjectUsersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjectUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeProjectUsersOutcomeCallable WedataClient::DescribeProjectUsersCallable(const DescribeProjectUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectUsersOutcome>>();
    DescribeProjectUsersAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeProjectUsersRequest&,
        DescribeProjectUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeQualityScoreOutcome WedataClient::DescribeQualityScore(const DescribeQualityScoreRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQualityScore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQualityScoreResponse rsp = DescribeQualityScoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQualityScoreOutcome(rsp);
        else
            return DescribeQualityScoreOutcome(o.GetError());
    }
    else
    {
        return DescribeQualityScoreOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeQualityScoreAsync(const DescribeQualityScoreRequest& request, const DescribeQualityScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQualityScoreRequest&;
    using Resp = DescribeQualityScoreResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQualityScore", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeQualityScoreOutcomeCallable WedataClient::DescribeQualityScoreCallable(const DescribeQualityScoreRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQualityScoreOutcome>>();
    DescribeQualityScoreAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeQualityScoreRequest&,
        DescribeQualityScoreOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeQualityScoreTrendOutcome WedataClient::DescribeQualityScoreTrend(const DescribeQualityScoreTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQualityScoreTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQualityScoreTrendResponse rsp = DescribeQualityScoreTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQualityScoreTrendOutcome(rsp);
        else
            return DescribeQualityScoreTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeQualityScoreTrendOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeQualityScoreTrendAsync(const DescribeQualityScoreTrendRequest& request, const DescribeQualityScoreTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQualityScoreTrendRequest&;
    using Resp = DescribeQualityScoreTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQualityScoreTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeQualityScoreTrendOutcomeCallable WedataClient::DescribeQualityScoreTrendCallable(const DescribeQualityScoreTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQualityScoreTrendOutcome>>();
    DescribeQualityScoreTrendAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeQualityScoreTrendRequest&,
        DescribeQualityScoreTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRealTimeTaskInstanceNodeInfoOutcome WedataClient::DescribeRealTimeTaskInstanceNodeInfo(const DescribeRealTimeTaskInstanceNodeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealTimeTaskInstanceNodeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealTimeTaskInstanceNodeInfoResponse rsp = DescribeRealTimeTaskInstanceNodeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealTimeTaskInstanceNodeInfoOutcome(rsp);
        else
            return DescribeRealTimeTaskInstanceNodeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeRealTimeTaskInstanceNodeInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRealTimeTaskInstanceNodeInfoAsync(const DescribeRealTimeTaskInstanceNodeInfoRequest& request, const DescribeRealTimeTaskInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRealTimeTaskInstanceNodeInfoRequest&;
    using Resp = DescribeRealTimeTaskInstanceNodeInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRealTimeTaskInstanceNodeInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRealTimeTaskInstanceNodeInfoOutcomeCallable WedataClient::DescribeRealTimeTaskInstanceNodeInfoCallable(const DescribeRealTimeTaskInstanceNodeInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRealTimeTaskInstanceNodeInfoOutcome>>();
    DescribeRealTimeTaskInstanceNodeInfoAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRealTimeTaskInstanceNodeInfoRequest&,
        DescribeRealTimeTaskInstanceNodeInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRealTimeTaskMetricOverviewOutcome WedataClient::DescribeRealTimeTaskMetricOverview(const DescribeRealTimeTaskMetricOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealTimeTaskMetricOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealTimeTaskMetricOverviewResponse rsp = DescribeRealTimeTaskMetricOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealTimeTaskMetricOverviewOutcome(rsp);
        else
            return DescribeRealTimeTaskMetricOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeRealTimeTaskMetricOverviewOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRealTimeTaskMetricOverviewAsync(const DescribeRealTimeTaskMetricOverviewRequest& request, const DescribeRealTimeTaskMetricOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRealTimeTaskMetricOverviewRequest&;
    using Resp = DescribeRealTimeTaskMetricOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRealTimeTaskMetricOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRealTimeTaskMetricOverviewOutcomeCallable WedataClient::DescribeRealTimeTaskMetricOverviewCallable(const DescribeRealTimeTaskMetricOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRealTimeTaskMetricOverviewOutcome>>();
    DescribeRealTimeTaskMetricOverviewAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRealTimeTaskMetricOverviewRequest&,
        DescribeRealTimeTaskMetricOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRealTimeTaskSpeedOutcome WedataClient::DescribeRealTimeTaskSpeed(const DescribeRealTimeTaskSpeedRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealTimeTaskSpeed");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealTimeTaskSpeedResponse rsp = DescribeRealTimeTaskSpeedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealTimeTaskSpeedOutcome(rsp);
        else
            return DescribeRealTimeTaskSpeedOutcome(o.GetError());
    }
    else
    {
        return DescribeRealTimeTaskSpeedOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRealTimeTaskSpeedAsync(const DescribeRealTimeTaskSpeedRequest& request, const DescribeRealTimeTaskSpeedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRealTimeTaskSpeedRequest&;
    using Resp = DescribeRealTimeTaskSpeedResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRealTimeTaskSpeed", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRealTimeTaskSpeedOutcomeCallable WedataClient::DescribeRealTimeTaskSpeedCallable(const DescribeRealTimeTaskSpeedRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRealTimeTaskSpeedOutcome>>();
    DescribeRealTimeTaskSpeedAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRealTimeTaskSpeedRequest&,
        DescribeRealTimeTaskSpeedOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRealViewSchemaPageOutcome WedataClient::DescribeRealViewSchemaPage(const DescribeRealViewSchemaPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealViewSchemaPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealViewSchemaPageResponse rsp = DescribeRealViewSchemaPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealViewSchemaPageOutcome(rsp);
        else
            return DescribeRealViewSchemaPageOutcome(o.GetError());
    }
    else
    {
        return DescribeRealViewSchemaPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRealViewSchemaPageAsync(const DescribeRealViewSchemaPageRequest& request, const DescribeRealViewSchemaPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRealViewSchemaPageRequest&;
    using Resp = DescribeRealViewSchemaPageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRealViewSchemaPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRealViewSchemaPageOutcomeCallable WedataClient::DescribeRealViewSchemaPageCallable(const DescribeRealViewSchemaPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRealViewSchemaPageOutcome>>();
    DescribeRealViewSchemaPageAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRealViewSchemaPageRequest&,
        DescribeRealViewSchemaPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRelatedTasksByTaskIdOutcome WedataClient::DescribeRelatedTasksByTaskId(const DescribeRelatedTasksByTaskIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRelatedTasksByTaskId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRelatedTasksByTaskIdResponse rsp = DescribeRelatedTasksByTaskIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRelatedTasksByTaskIdOutcome(rsp);
        else
            return DescribeRelatedTasksByTaskIdOutcome(o.GetError());
    }
    else
    {
        return DescribeRelatedTasksByTaskIdOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRelatedTasksByTaskIdAsync(const DescribeRelatedTasksByTaskIdRequest& request, const DescribeRelatedTasksByTaskIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRelatedTasksByTaskIdRequest&;
    using Resp = DescribeRelatedTasksByTaskIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRelatedTasksByTaskId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRelatedTasksByTaskIdOutcomeCallable WedataClient::DescribeRelatedTasksByTaskIdCallable(const DescribeRelatedTasksByTaskIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRelatedTasksByTaskIdOutcome>>();
    DescribeRelatedTasksByTaskIdAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRelatedTasksByTaskIdRequest&,
        DescribeRelatedTasksByTaskIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeReportTaskDetailOutcome WedataClient::DescribeReportTaskDetail(const DescribeReportTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReportTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReportTaskDetailResponse rsp = DescribeReportTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReportTaskDetailOutcome(rsp);
        else
            return DescribeReportTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeReportTaskDetailOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeReportTaskDetailAsync(const DescribeReportTaskDetailRequest& request, const DescribeReportTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReportTaskDetailRequest&;
    using Resp = DescribeReportTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReportTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeReportTaskDetailOutcomeCallable WedataClient::DescribeReportTaskDetailCallable(const DescribeReportTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReportTaskDetailOutcome>>();
    DescribeReportTaskDetailAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeReportTaskDetailRequest&,
        DescribeReportTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeReportTaskListOutcome WedataClient::DescribeReportTaskList(const DescribeReportTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReportTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReportTaskListResponse rsp = DescribeReportTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReportTaskListOutcome(rsp);
        else
            return DescribeReportTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeReportTaskListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeReportTaskListAsync(const DescribeReportTaskListRequest& request, const DescribeReportTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReportTaskListRequest&;
    using Resp = DescribeReportTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReportTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeReportTaskListOutcomeCallable WedataClient::DescribeReportTaskListCallable(const DescribeReportTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReportTaskListOutcome>>();
    DescribeReportTaskListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeReportTaskListRequest&,
        DescribeReportTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeResourceManagePathTreesOutcome WedataClient::DescribeResourceManagePathTrees(const DescribeResourceManagePathTreesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceManagePathTrees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceManagePathTreesResponse rsp = DescribeResourceManagePathTreesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceManagePathTreesOutcome(rsp);
        else
            return DescribeResourceManagePathTreesOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceManagePathTreesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeResourceManagePathTreesAsync(const DescribeResourceManagePathTreesRequest& request, const DescribeResourceManagePathTreesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceManagePathTreesRequest&;
    using Resp = DescribeResourceManagePathTreesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceManagePathTrees", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeResourceManagePathTreesOutcomeCallable WedataClient::DescribeResourceManagePathTreesCallable(const DescribeResourceManagePathTreesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceManagePathTreesOutcome>>();
    DescribeResourceManagePathTreesAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeResourceManagePathTreesRequest&,
        DescribeResourceManagePathTreesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRoleListOutcome WedataClient::DescribeRoleList(const DescribeRoleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoleListResponse rsp = DescribeRoleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoleListOutcome(rsp);
        else
            return DescribeRoleListOutcome(o.GetError());
    }
    else
    {
        return DescribeRoleListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRoleListAsync(const DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRoleListRequest&;
    using Resp = DescribeRoleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRoleListOutcomeCallable WedataClient::DescribeRoleListCallable(const DescribeRoleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoleListOutcome>>();
    DescribeRoleListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRoleListRequest&,
        DescribeRoleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRuleOutcome WedataClient::DescribeRule(const DescribeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleResponse rsp = DescribeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleOutcome(rsp);
        else
            return DescribeRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleAsync(const DescribeRuleRequest& request, const DescribeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleRequest&;
    using Resp = DescribeRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRuleOutcomeCallable WedataClient::DescribeRuleCallable(const DescribeRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleOutcome>>();
    DescribeRuleAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRuleRequest&,
        DescribeRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRuleDimStatOutcome WedataClient::DescribeRuleDimStat(const DescribeRuleDimStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleDimStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleDimStatResponse rsp = DescribeRuleDimStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleDimStatOutcome(rsp);
        else
            return DescribeRuleDimStatOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleDimStatOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleDimStatAsync(const DescribeRuleDimStatRequest& request, const DescribeRuleDimStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleDimStatRequest&;
    using Resp = DescribeRuleDimStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleDimStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRuleDimStatOutcomeCallable WedataClient::DescribeRuleDimStatCallable(const DescribeRuleDimStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleDimStatOutcome>>();
    DescribeRuleDimStatAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRuleDimStatRequest&,
        DescribeRuleDimStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRuleExecDetailOutcome WedataClient::DescribeRuleExecDetail(const DescribeRuleExecDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleExecDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleExecDetailResponse rsp = DescribeRuleExecDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleExecDetailOutcome(rsp);
        else
            return DescribeRuleExecDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleExecDetailOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleExecDetailAsync(const DescribeRuleExecDetailRequest& request, const DescribeRuleExecDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleExecDetailRequest&;
    using Resp = DescribeRuleExecDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleExecDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRuleExecDetailOutcomeCallable WedataClient::DescribeRuleExecDetailCallable(const DescribeRuleExecDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleExecDetailOutcome>>();
    DescribeRuleExecDetailAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRuleExecDetailRequest&,
        DescribeRuleExecDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRuleExecLogOutcome WedataClient::DescribeRuleExecLog(const DescribeRuleExecLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleExecLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleExecLogResponse rsp = DescribeRuleExecLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleExecLogOutcome(rsp);
        else
            return DescribeRuleExecLogOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleExecLogOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleExecLogAsync(const DescribeRuleExecLogRequest& request, const DescribeRuleExecLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleExecLogRequest&;
    using Resp = DescribeRuleExecLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleExecLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRuleExecLogOutcomeCallable WedataClient::DescribeRuleExecLogCallable(const DescribeRuleExecLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleExecLogOutcome>>();
    DescribeRuleExecLogAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRuleExecLogRequest&,
        DescribeRuleExecLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRuleExecResultsOutcome WedataClient::DescribeRuleExecResults(const DescribeRuleExecResultsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleExecResults");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleExecResultsResponse rsp = DescribeRuleExecResultsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleExecResultsOutcome(rsp);
        else
            return DescribeRuleExecResultsOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleExecResultsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleExecResultsAsync(const DescribeRuleExecResultsRequest& request, const DescribeRuleExecResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleExecResultsRequest&;
    using Resp = DescribeRuleExecResultsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleExecResults", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRuleExecResultsOutcomeCallable WedataClient::DescribeRuleExecResultsCallable(const DescribeRuleExecResultsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleExecResultsOutcome>>();
    DescribeRuleExecResultsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRuleExecResultsRequest&,
        DescribeRuleExecResultsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRuleExecStatOutcome WedataClient::DescribeRuleExecStat(const DescribeRuleExecStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleExecStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleExecStatResponse rsp = DescribeRuleExecStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleExecStatOutcome(rsp);
        else
            return DescribeRuleExecStatOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleExecStatOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleExecStatAsync(const DescribeRuleExecStatRequest& request, const DescribeRuleExecStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleExecStatRequest&;
    using Resp = DescribeRuleExecStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleExecStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRuleExecStatOutcomeCallable WedataClient::DescribeRuleExecStatCallable(const DescribeRuleExecStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleExecStatOutcome>>();
    DescribeRuleExecStatAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRuleExecStatRequest&,
        DescribeRuleExecStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRuleGroupOutcome WedataClient::DescribeRuleGroup(const DescribeRuleGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleGroupResponse rsp = DescribeRuleGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleGroupOutcome(rsp);
        else
            return DescribeRuleGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleGroupOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleGroupAsync(const DescribeRuleGroupRequest& request, const DescribeRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleGroupRequest&;
    using Resp = DescribeRuleGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRuleGroupOutcomeCallable WedataClient::DescribeRuleGroupCallable(const DescribeRuleGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleGroupOutcome>>();
    DescribeRuleGroupAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRuleGroupRequest&,
        DescribeRuleGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRuleGroupExecResultsByPageOutcome WedataClient::DescribeRuleGroupExecResultsByPage(const DescribeRuleGroupExecResultsByPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleGroupExecResultsByPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleGroupExecResultsByPageResponse rsp = DescribeRuleGroupExecResultsByPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleGroupExecResultsByPageOutcome(rsp);
        else
            return DescribeRuleGroupExecResultsByPageOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleGroupExecResultsByPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleGroupExecResultsByPageAsync(const DescribeRuleGroupExecResultsByPageRequest& request, const DescribeRuleGroupExecResultsByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleGroupExecResultsByPageRequest&;
    using Resp = DescribeRuleGroupExecResultsByPageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleGroupExecResultsByPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRuleGroupExecResultsByPageOutcomeCallable WedataClient::DescribeRuleGroupExecResultsByPageCallable(const DescribeRuleGroupExecResultsByPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleGroupExecResultsByPageOutcome>>();
    DescribeRuleGroupExecResultsByPageAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRuleGroupExecResultsByPageRequest&,
        DescribeRuleGroupExecResultsByPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRuleGroupSubscriptionOutcome WedataClient::DescribeRuleGroupSubscription(const DescribeRuleGroupSubscriptionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleGroupSubscription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleGroupSubscriptionResponse rsp = DescribeRuleGroupSubscriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleGroupSubscriptionOutcome(rsp);
        else
            return DescribeRuleGroupSubscriptionOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleGroupSubscriptionOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleGroupSubscriptionAsync(const DescribeRuleGroupSubscriptionRequest& request, const DescribeRuleGroupSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleGroupSubscriptionRequest&;
    using Resp = DescribeRuleGroupSubscriptionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleGroupSubscription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRuleGroupSubscriptionOutcomeCallable WedataClient::DescribeRuleGroupSubscriptionCallable(const DescribeRuleGroupSubscriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleGroupSubscriptionOutcome>>();
    DescribeRuleGroupSubscriptionAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRuleGroupSubscriptionRequest&,
        DescribeRuleGroupSubscriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRuleGroupTableOutcome WedataClient::DescribeRuleGroupTable(const DescribeRuleGroupTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleGroupTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleGroupTableResponse rsp = DescribeRuleGroupTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleGroupTableOutcome(rsp);
        else
            return DescribeRuleGroupTableOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleGroupTableOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleGroupTableAsync(const DescribeRuleGroupTableRequest& request, const DescribeRuleGroupTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleGroupTableRequest&;
    using Resp = DescribeRuleGroupTableResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleGroupTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRuleGroupTableOutcomeCallable WedataClient::DescribeRuleGroupTableCallable(const DescribeRuleGroupTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleGroupTableOutcome>>();
    DescribeRuleGroupTableAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRuleGroupTableRequest&,
        DescribeRuleGroupTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRuleGroupsByPageOutcome WedataClient::DescribeRuleGroupsByPage(const DescribeRuleGroupsByPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleGroupsByPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleGroupsByPageResponse rsp = DescribeRuleGroupsByPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleGroupsByPageOutcome(rsp);
        else
            return DescribeRuleGroupsByPageOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleGroupsByPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleGroupsByPageAsync(const DescribeRuleGroupsByPageRequest& request, const DescribeRuleGroupsByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleGroupsByPageRequest&;
    using Resp = DescribeRuleGroupsByPageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleGroupsByPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRuleGroupsByPageOutcomeCallable WedataClient::DescribeRuleGroupsByPageCallable(const DescribeRuleGroupsByPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleGroupsByPageOutcome>>();
    DescribeRuleGroupsByPageAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRuleGroupsByPageRequest&,
        DescribeRuleGroupsByPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRuleTemplateOutcome WedataClient::DescribeRuleTemplate(const DescribeRuleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleTemplateResponse rsp = DescribeRuleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleTemplateOutcome(rsp);
        else
            return DescribeRuleTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleTemplateAsync(const DescribeRuleTemplateRequest& request, const DescribeRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleTemplateRequest&;
    using Resp = DescribeRuleTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRuleTemplateOutcomeCallable WedataClient::DescribeRuleTemplateCallable(const DescribeRuleTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleTemplateOutcome>>();
    DescribeRuleTemplateAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRuleTemplateRequest&,
        DescribeRuleTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRuleTemplatesOutcome WedataClient::DescribeRuleTemplates(const DescribeRuleTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleTemplatesResponse rsp = DescribeRuleTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleTemplatesOutcome(rsp);
        else
            return DescribeRuleTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleTemplatesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleTemplatesAsync(const DescribeRuleTemplatesRequest& request, const DescribeRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleTemplatesRequest&;
    using Resp = DescribeRuleTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRuleTemplatesOutcomeCallable WedataClient::DescribeRuleTemplatesCallable(const DescribeRuleTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleTemplatesOutcome>>();
    DescribeRuleTemplatesAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRuleTemplatesRequest&,
        DescribeRuleTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRuleTemplatesByPageOutcome WedataClient::DescribeRuleTemplatesByPage(const DescribeRuleTemplatesByPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleTemplatesByPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleTemplatesByPageResponse rsp = DescribeRuleTemplatesByPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleTemplatesByPageOutcome(rsp);
        else
            return DescribeRuleTemplatesByPageOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleTemplatesByPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleTemplatesByPageAsync(const DescribeRuleTemplatesByPageRequest& request, const DescribeRuleTemplatesByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleTemplatesByPageRequest&;
    using Resp = DescribeRuleTemplatesByPageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleTemplatesByPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRuleTemplatesByPageOutcomeCallable WedataClient::DescribeRuleTemplatesByPageCallable(const DescribeRuleTemplatesByPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleTemplatesByPageOutcome>>();
    DescribeRuleTemplatesByPageAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRuleTemplatesByPageRequest&,
        DescribeRuleTemplatesByPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRulesOutcome WedataClient::DescribeRules(const DescribeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRulesResponse rsp = DescribeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRulesOutcome(rsp);
        else
            return DescribeRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeRulesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRulesAsync(const DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRulesRequest&;
    using Resp = DescribeRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRulesOutcomeCallable WedataClient::DescribeRulesCallable(const DescribeRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRulesOutcome>>();
    DescribeRulesAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRulesRequest&,
        DescribeRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeRulesByPageOutcome WedataClient::DescribeRulesByPage(const DescribeRulesByPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRulesByPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRulesByPageResponse rsp = DescribeRulesByPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRulesByPageOutcome(rsp);
        else
            return DescribeRulesByPageOutcome(o.GetError());
    }
    else
    {
        return DescribeRulesByPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRulesByPageAsync(const DescribeRulesByPageRequest& request, const DescribeRulesByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRulesByPageRequest&;
    using Resp = DescribeRulesByPageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRulesByPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeRulesByPageOutcomeCallable WedataClient::DescribeRulesByPageCallable(const DescribeRulesByPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRulesByPageOutcome>>();
    DescribeRulesByPageAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeRulesByPageRequest&,
        DescribeRulesByPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeScheduleInstancesOutcome WedataClient::DescribeScheduleInstances(const DescribeScheduleInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScheduleInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScheduleInstancesResponse rsp = DescribeScheduleInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScheduleInstancesOutcome(rsp);
        else
            return DescribeScheduleInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeScheduleInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeScheduleInstancesAsync(const DescribeScheduleInstancesRequest& request, const DescribeScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScheduleInstancesRequest&;
    using Resp = DescribeScheduleInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScheduleInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeScheduleInstancesOutcomeCallable WedataClient::DescribeScheduleInstancesCallable(const DescribeScheduleInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScheduleInstancesOutcome>>();
    DescribeScheduleInstancesAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeScheduleInstancesRequest&,
        DescribeScheduleInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeSchedulerInstanceStatusOutcome WedataClient::DescribeSchedulerInstanceStatus(const DescribeSchedulerInstanceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSchedulerInstanceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSchedulerInstanceStatusResponse rsp = DescribeSchedulerInstanceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSchedulerInstanceStatusOutcome(rsp);
        else
            return DescribeSchedulerInstanceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeSchedulerInstanceStatusOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeSchedulerInstanceStatusAsync(const DescribeSchedulerInstanceStatusRequest& request, const DescribeSchedulerInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSchedulerInstanceStatusRequest&;
    using Resp = DescribeSchedulerInstanceStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSchedulerInstanceStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeSchedulerInstanceStatusOutcomeCallable WedataClient::DescribeSchedulerInstanceStatusCallable(const DescribeSchedulerInstanceStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSchedulerInstanceStatusOutcome>>();
    DescribeSchedulerInstanceStatusAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeSchedulerInstanceStatusRequest&,
        DescribeSchedulerInstanceStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeSchedulerRunTimeInstanceCntByStatusOutcome WedataClient::DescribeSchedulerRunTimeInstanceCntByStatus(const DescribeSchedulerRunTimeInstanceCntByStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSchedulerRunTimeInstanceCntByStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSchedulerRunTimeInstanceCntByStatusResponse rsp = DescribeSchedulerRunTimeInstanceCntByStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSchedulerRunTimeInstanceCntByStatusOutcome(rsp);
        else
            return DescribeSchedulerRunTimeInstanceCntByStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeSchedulerRunTimeInstanceCntByStatusOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeSchedulerRunTimeInstanceCntByStatusAsync(const DescribeSchedulerRunTimeInstanceCntByStatusRequest& request, const DescribeSchedulerRunTimeInstanceCntByStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSchedulerRunTimeInstanceCntByStatusRequest&;
    using Resp = DescribeSchedulerRunTimeInstanceCntByStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSchedulerRunTimeInstanceCntByStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeSchedulerRunTimeInstanceCntByStatusOutcomeCallable WedataClient::DescribeSchedulerRunTimeInstanceCntByStatusCallable(const DescribeSchedulerRunTimeInstanceCntByStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSchedulerRunTimeInstanceCntByStatusOutcome>>();
    DescribeSchedulerRunTimeInstanceCntByStatusAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeSchedulerRunTimeInstanceCntByStatusRequest&,
        DescribeSchedulerRunTimeInstanceCntByStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeSchedulerTaskCntByStatusOutcome WedataClient::DescribeSchedulerTaskCntByStatus(const DescribeSchedulerTaskCntByStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSchedulerTaskCntByStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSchedulerTaskCntByStatusResponse rsp = DescribeSchedulerTaskCntByStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSchedulerTaskCntByStatusOutcome(rsp);
        else
            return DescribeSchedulerTaskCntByStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeSchedulerTaskCntByStatusOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeSchedulerTaskCntByStatusAsync(const DescribeSchedulerTaskCntByStatusRequest& request, const DescribeSchedulerTaskCntByStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSchedulerTaskCntByStatusRequest&;
    using Resp = DescribeSchedulerTaskCntByStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSchedulerTaskCntByStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeSchedulerTaskCntByStatusOutcomeCallable WedataClient::DescribeSchedulerTaskCntByStatusCallable(const DescribeSchedulerTaskCntByStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSchedulerTaskCntByStatusOutcome>>();
    DescribeSchedulerTaskCntByStatusAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeSchedulerTaskCntByStatusRequest&,
        DescribeSchedulerTaskCntByStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeSchedulerTaskTypeCntOutcome WedataClient::DescribeSchedulerTaskTypeCnt(const DescribeSchedulerTaskTypeCntRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSchedulerTaskTypeCnt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSchedulerTaskTypeCntResponse rsp = DescribeSchedulerTaskTypeCntResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSchedulerTaskTypeCntOutcome(rsp);
        else
            return DescribeSchedulerTaskTypeCntOutcome(o.GetError());
    }
    else
    {
        return DescribeSchedulerTaskTypeCntOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeSchedulerTaskTypeCntAsync(const DescribeSchedulerTaskTypeCntRequest& request, const DescribeSchedulerTaskTypeCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSchedulerTaskTypeCntRequest&;
    using Resp = DescribeSchedulerTaskTypeCntResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSchedulerTaskTypeCnt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeSchedulerTaskTypeCntOutcomeCallable WedataClient::DescribeSchedulerTaskTypeCntCallable(const DescribeSchedulerTaskTypeCntRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSchedulerTaskTypeCntOutcome>>();
    DescribeSchedulerTaskTypeCntAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeSchedulerTaskTypeCntRequest&,
        DescribeSchedulerTaskTypeCntOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeStatisticInstanceStatusTrendOpsOutcome WedataClient::DescribeStatisticInstanceStatusTrendOps(const DescribeStatisticInstanceStatusTrendOpsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStatisticInstanceStatusTrendOps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStatisticInstanceStatusTrendOpsResponse rsp = DescribeStatisticInstanceStatusTrendOpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStatisticInstanceStatusTrendOpsOutcome(rsp);
        else
            return DescribeStatisticInstanceStatusTrendOpsOutcome(o.GetError());
    }
    else
    {
        return DescribeStatisticInstanceStatusTrendOpsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeStatisticInstanceStatusTrendOpsAsync(const DescribeStatisticInstanceStatusTrendOpsRequest& request, const DescribeStatisticInstanceStatusTrendOpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStatisticInstanceStatusTrendOpsRequest&;
    using Resp = DescribeStatisticInstanceStatusTrendOpsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStatisticInstanceStatusTrendOps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeStatisticInstanceStatusTrendOpsOutcomeCallable WedataClient::DescribeStatisticInstanceStatusTrendOpsCallable(const DescribeStatisticInstanceStatusTrendOpsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStatisticInstanceStatusTrendOpsOutcome>>();
    DescribeStatisticInstanceStatusTrendOpsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeStatisticInstanceStatusTrendOpsRequest&,
        DescribeStatisticInstanceStatusTrendOpsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeStreamTaskLogListOutcome WedataClient::DescribeStreamTaskLogList(const DescribeStreamTaskLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamTaskLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamTaskLogListResponse rsp = DescribeStreamTaskLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamTaskLogListOutcome(rsp);
        else
            return DescribeStreamTaskLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamTaskLogListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeStreamTaskLogListAsync(const DescribeStreamTaskLogListRequest& request, const DescribeStreamTaskLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamTaskLogListRequest&;
    using Resp = DescribeStreamTaskLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamTaskLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeStreamTaskLogListOutcomeCallable WedataClient::DescribeStreamTaskLogListCallable(const DescribeStreamTaskLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamTaskLogListOutcome>>();
    DescribeStreamTaskLogListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeStreamTaskLogListRequest&,
        DescribeStreamTaskLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeSuccessorOpsTaskInfosOutcome WedataClient::DescribeSuccessorOpsTaskInfos(const DescribeSuccessorOpsTaskInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSuccessorOpsTaskInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSuccessorOpsTaskInfosResponse rsp = DescribeSuccessorOpsTaskInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSuccessorOpsTaskInfosOutcome(rsp);
        else
            return DescribeSuccessorOpsTaskInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeSuccessorOpsTaskInfosOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeSuccessorOpsTaskInfosAsync(const DescribeSuccessorOpsTaskInfosRequest& request, const DescribeSuccessorOpsTaskInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSuccessorOpsTaskInfosRequest&;
    using Resp = DescribeSuccessorOpsTaskInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSuccessorOpsTaskInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeSuccessorOpsTaskInfosOutcomeCallable WedataClient::DescribeSuccessorOpsTaskInfosCallable(const DescribeSuccessorOpsTaskInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSuccessorOpsTaskInfosOutcome>>();
    DescribeSuccessorOpsTaskInfosAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeSuccessorOpsTaskInfosRequest&,
        DescribeSuccessorOpsTaskInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeSuccessorTaskInfoListOutcome WedataClient::DescribeSuccessorTaskInfoList(const DescribeSuccessorTaskInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSuccessorTaskInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSuccessorTaskInfoListResponse rsp = DescribeSuccessorTaskInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSuccessorTaskInfoListOutcome(rsp);
        else
            return DescribeSuccessorTaskInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeSuccessorTaskInfoListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeSuccessorTaskInfoListAsync(const DescribeSuccessorTaskInfoListRequest& request, const DescribeSuccessorTaskInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSuccessorTaskInfoListRequest&;
    using Resp = DescribeSuccessorTaskInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSuccessorTaskInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeSuccessorTaskInfoListOutcomeCallable WedataClient::DescribeSuccessorTaskInfoListCallable(const DescribeSuccessorTaskInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSuccessorTaskInfoListOutcome>>();
    DescribeSuccessorTaskInfoListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeSuccessorTaskInfoListRequest&,
        DescribeSuccessorTaskInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTableBasicInfoOutcome WedataClient::DescribeTableBasicInfo(const DescribeTableBasicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableBasicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableBasicInfoResponse rsp = DescribeTableBasicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableBasicInfoOutcome(rsp);
        else
            return DescribeTableBasicInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTableBasicInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableBasicInfoAsync(const DescribeTableBasicInfoRequest& request, const DescribeTableBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableBasicInfoRequest&;
    using Resp = DescribeTableBasicInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableBasicInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTableBasicInfoOutcomeCallable WedataClient::DescribeTableBasicInfoCallable(const DescribeTableBasicInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableBasicInfoOutcome>>();
    DescribeTableBasicInfoAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTableBasicInfoRequest&,
        DescribeTableBasicInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTableInfoListOutcome WedataClient::DescribeTableInfoList(const DescribeTableInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableInfoListResponse rsp = DescribeTableInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableInfoListOutcome(rsp);
        else
            return DescribeTableInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeTableInfoListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableInfoListAsync(const DescribeTableInfoListRequest& request, const DescribeTableInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableInfoListRequest&;
    using Resp = DescribeTableInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTableInfoListOutcomeCallable WedataClient::DescribeTableInfoListCallable(const DescribeTableInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableInfoListOutcome>>();
    DescribeTableInfoListAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTableInfoListRequest&,
        DescribeTableInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTableLineageOutcome WedataClient::DescribeTableLineage(const DescribeTableLineageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableLineage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableLineageResponse rsp = DescribeTableLineageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableLineageOutcome(rsp);
        else
            return DescribeTableLineageOutcome(o.GetError());
    }
    else
    {
        return DescribeTableLineageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableLineageAsync(const DescribeTableLineageRequest& request, const DescribeTableLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableLineageRequest&;
    using Resp = DescribeTableLineageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableLineage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTableLineageOutcomeCallable WedataClient::DescribeTableLineageCallable(const DescribeTableLineageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableLineageOutcome>>();
    DescribeTableLineageAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTableLineageRequest&,
        DescribeTableLineageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTableLineageInfoOutcome WedataClient::DescribeTableLineageInfo(const DescribeTableLineageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableLineageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableLineageInfoResponse rsp = DescribeTableLineageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableLineageInfoOutcome(rsp);
        else
            return DescribeTableLineageInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTableLineageInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableLineageInfoAsync(const DescribeTableLineageInfoRequest& request, const DescribeTableLineageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableLineageInfoRequest&;
    using Resp = DescribeTableLineageInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableLineageInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTableLineageInfoOutcomeCallable WedataClient::DescribeTableLineageInfoCallable(const DescribeTableLineageInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableLineageInfoOutcome>>();
    DescribeTableLineageInfoAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTableLineageInfoRequest&,
        DescribeTableLineageInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTableMetaOutcome WedataClient::DescribeTableMeta(const DescribeTableMetaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableMeta");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableMetaResponse rsp = DescribeTableMetaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableMetaOutcome(rsp);
        else
            return DescribeTableMetaOutcome(o.GetError());
    }
    else
    {
        return DescribeTableMetaOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableMetaAsync(const DescribeTableMetaRequest& request, const DescribeTableMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableMetaRequest&;
    using Resp = DescribeTableMetaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableMeta", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTableMetaOutcomeCallable WedataClient::DescribeTableMetaCallable(const DescribeTableMetaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableMetaOutcome>>();
    DescribeTableMetaAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTableMetaRequest&,
        DescribeTableMetaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTableMetasOutcome WedataClient::DescribeTableMetas(const DescribeTableMetasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableMetas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableMetasResponse rsp = DescribeTableMetasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableMetasOutcome(rsp);
        else
            return DescribeTableMetasOutcome(o.GetError());
    }
    else
    {
        return DescribeTableMetasOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableMetasAsync(const DescribeTableMetasRequest& request, const DescribeTableMetasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableMetasRequest&;
    using Resp = DescribeTableMetasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableMetas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTableMetasOutcomeCallable WedataClient::DescribeTableMetasCallable(const DescribeTableMetasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableMetasOutcome>>();
    DescribeTableMetasAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTableMetasRequest&,
        DescribeTableMetasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTablePartitionsOutcome WedataClient::DescribeTablePartitions(const DescribeTablePartitionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTablePartitions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablePartitionsResponse rsp = DescribeTablePartitionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablePartitionsOutcome(rsp);
        else
            return DescribeTablePartitionsOutcome(o.GetError());
    }
    else
    {
        return DescribeTablePartitionsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTablePartitionsAsync(const DescribeTablePartitionsRequest& request, const DescribeTablePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTablePartitionsRequest&;
    using Resp = DescribeTablePartitionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTablePartitions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTablePartitionsOutcomeCallable WedataClient::DescribeTablePartitionsCallable(const DescribeTablePartitionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTablePartitionsOutcome>>();
    DescribeTablePartitionsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTablePartitionsRequest&,
        DescribeTablePartitionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTableQualityDetailsOutcome WedataClient::DescribeTableQualityDetails(const DescribeTableQualityDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableQualityDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableQualityDetailsResponse rsp = DescribeTableQualityDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableQualityDetailsOutcome(rsp);
        else
            return DescribeTableQualityDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeTableQualityDetailsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableQualityDetailsAsync(const DescribeTableQualityDetailsRequest& request, const DescribeTableQualityDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableQualityDetailsRequest&;
    using Resp = DescribeTableQualityDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableQualityDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTableQualityDetailsOutcomeCallable WedataClient::DescribeTableQualityDetailsCallable(const DescribeTableQualityDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableQualityDetailsOutcome>>();
    DescribeTableQualityDetailsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTableQualityDetailsRequest&,
        DescribeTableQualityDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTableSchemaInfoOutcome WedataClient::DescribeTableSchemaInfo(const DescribeTableSchemaInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableSchemaInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableSchemaInfoResponse rsp = DescribeTableSchemaInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableSchemaInfoOutcome(rsp);
        else
            return DescribeTableSchemaInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTableSchemaInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableSchemaInfoAsync(const DescribeTableSchemaInfoRequest& request, const DescribeTableSchemaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableSchemaInfoRequest&;
    using Resp = DescribeTableSchemaInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableSchemaInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTableSchemaInfoOutcomeCallable WedataClient::DescribeTableSchemaInfoCallable(const DescribeTableSchemaInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableSchemaInfoOutcome>>();
    DescribeTableSchemaInfoAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTableSchemaInfoRequest&,
        DescribeTableSchemaInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTableScoreTrendOutcome WedataClient::DescribeTableScoreTrend(const DescribeTableScoreTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableScoreTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableScoreTrendResponse rsp = DescribeTableScoreTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableScoreTrendOutcome(rsp);
        else
            return DescribeTableScoreTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeTableScoreTrendOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableScoreTrendAsync(const DescribeTableScoreTrendRequest& request, const DescribeTableScoreTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableScoreTrendRequest&;
    using Resp = DescribeTableScoreTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableScoreTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTableScoreTrendOutcomeCallable WedataClient::DescribeTableScoreTrendCallable(const DescribeTableScoreTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableScoreTrendOutcome>>();
    DescribeTableScoreTrendAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTableScoreTrendRequest&,
        DescribeTableScoreTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTaskAlarmRegulationsOutcome WedataClient::DescribeTaskAlarmRegulations(const DescribeTaskAlarmRegulationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskAlarmRegulations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskAlarmRegulationsResponse rsp = DescribeTaskAlarmRegulationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskAlarmRegulationsOutcome(rsp);
        else
            return DescribeTaskAlarmRegulationsOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskAlarmRegulationsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskAlarmRegulationsAsync(const DescribeTaskAlarmRegulationsRequest& request, const DescribeTaskAlarmRegulationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskAlarmRegulationsRequest&;
    using Resp = DescribeTaskAlarmRegulationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskAlarmRegulations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTaskAlarmRegulationsOutcomeCallable WedataClient::DescribeTaskAlarmRegulationsCallable(const DescribeTaskAlarmRegulationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskAlarmRegulationsOutcome>>();
    DescribeTaskAlarmRegulationsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTaskAlarmRegulationsRequest&,
        DescribeTaskAlarmRegulationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTaskByCycleOutcome WedataClient::DescribeTaskByCycle(const DescribeTaskByCycleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskByCycle");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskByCycleResponse rsp = DescribeTaskByCycleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskByCycleOutcome(rsp);
        else
            return DescribeTaskByCycleOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskByCycleOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskByCycleAsync(const DescribeTaskByCycleRequest& request, const DescribeTaskByCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskByCycleRequest&;
    using Resp = DescribeTaskByCycleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskByCycle", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTaskByCycleOutcomeCallable WedataClient::DescribeTaskByCycleCallable(const DescribeTaskByCycleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskByCycleOutcome>>();
    DescribeTaskByCycleAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTaskByCycleRequest&,
        DescribeTaskByCycleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTaskByStatusReportOutcome WedataClient::DescribeTaskByStatusReport(const DescribeTaskByStatusReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskByStatusReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskByStatusReportResponse rsp = DescribeTaskByStatusReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskByStatusReportOutcome(rsp);
        else
            return DescribeTaskByStatusReportOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskByStatusReportOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskByStatusReportAsync(const DescribeTaskByStatusReportRequest& request, const DescribeTaskByStatusReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskByStatusReportRequest&;
    using Resp = DescribeTaskByStatusReportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskByStatusReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTaskByStatusReportOutcomeCallable WedataClient::DescribeTaskByStatusReportCallable(const DescribeTaskByStatusReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskByStatusReportOutcome>>();
    DescribeTaskByStatusReportAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTaskByStatusReportRequest&,
        DescribeTaskByStatusReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTaskDetailDsOutcome WedataClient::DescribeTaskDetailDs(const DescribeTaskDetailDsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskDetailDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskDetailDsResponse rsp = DescribeTaskDetailDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskDetailDsOutcome(rsp);
        else
            return DescribeTaskDetailDsOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskDetailDsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskDetailDsAsync(const DescribeTaskDetailDsRequest& request, const DescribeTaskDetailDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskDetailDsRequest&;
    using Resp = DescribeTaskDetailDsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskDetailDs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTaskDetailDsOutcomeCallable WedataClient::DescribeTaskDetailDsCallable(const DescribeTaskDetailDsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskDetailDsOutcome>>();
    DescribeTaskDetailDsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTaskDetailDsRequest&,
        DescribeTaskDetailDsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTaskLineageOutcome WedataClient::DescribeTaskLineage(const DescribeTaskLineageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLineage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLineageResponse rsp = DescribeTaskLineageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLineageOutcome(rsp);
        else
            return DescribeTaskLineageOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLineageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskLineageAsync(const DescribeTaskLineageRequest& request, const DescribeTaskLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskLineageRequest&;
    using Resp = DescribeTaskLineageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskLineage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTaskLineageOutcomeCallable WedataClient::DescribeTaskLineageCallable(const DescribeTaskLineageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskLineageOutcome>>();
    DescribeTaskLineageAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTaskLineageRequest&,
        DescribeTaskLineageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTaskLockStatusOutcome WedataClient::DescribeTaskLockStatus(const DescribeTaskLockStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLockStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLockStatusResponse rsp = DescribeTaskLockStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLockStatusOutcome(rsp);
        else
            return DescribeTaskLockStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLockStatusOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskLockStatusAsync(const DescribeTaskLockStatusRequest& request, const DescribeTaskLockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskLockStatusRequest&;
    using Resp = DescribeTaskLockStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskLockStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTaskLockStatusOutcomeCallable WedataClient::DescribeTaskLockStatusCallable(const DescribeTaskLockStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskLockStatusOutcome>>();
    DescribeTaskLockStatusAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTaskLockStatusRequest&,
        DescribeTaskLockStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTaskParamDsOutcome WedataClient::DescribeTaskParamDs(const DescribeTaskParamDsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskParamDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskParamDsResponse rsp = DescribeTaskParamDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskParamDsOutcome(rsp);
        else
            return DescribeTaskParamDsOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskParamDsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskParamDsAsync(const DescribeTaskParamDsRequest& request, const DescribeTaskParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskParamDsRequest&;
    using Resp = DescribeTaskParamDsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskParamDs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTaskParamDsOutcomeCallable WedataClient::DescribeTaskParamDsCallable(const DescribeTaskParamDsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskParamDsOutcome>>();
    DescribeTaskParamDsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTaskParamDsRequest&,
        DescribeTaskParamDsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTaskRunHistoryOutcome WedataClient::DescribeTaskRunHistory(const DescribeTaskRunHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskRunHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskRunHistoryResponse rsp = DescribeTaskRunHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskRunHistoryOutcome(rsp);
        else
            return DescribeTaskRunHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskRunHistoryOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskRunHistoryAsync(const DescribeTaskRunHistoryRequest& request, const DescribeTaskRunHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskRunHistoryRequest&;
    using Resp = DescribeTaskRunHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskRunHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTaskRunHistoryOutcomeCallable WedataClient::DescribeTaskRunHistoryCallable(const DescribeTaskRunHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskRunHistoryOutcome>>();
    DescribeTaskRunHistoryAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTaskRunHistoryRequest&,
        DescribeTaskRunHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTaskScriptOutcome WedataClient::DescribeTaskScript(const DescribeTaskScriptRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskScriptResponse rsp = DescribeTaskScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskScriptOutcome(rsp);
        else
            return DescribeTaskScriptOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskScriptOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskScriptAsync(const DescribeTaskScriptRequest& request, const DescribeTaskScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskScriptRequest&;
    using Resp = DescribeTaskScriptResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskScript", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTaskScriptOutcomeCallable WedataClient::DescribeTaskScriptCallable(const DescribeTaskScriptRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskScriptOutcome>>();
    DescribeTaskScriptAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTaskScriptRequest&,
        DescribeTaskScriptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTaskTableMetricOverviewOutcome WedataClient::DescribeTaskTableMetricOverview(const DescribeTaskTableMetricOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskTableMetricOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskTableMetricOverviewResponse rsp = DescribeTaskTableMetricOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskTableMetricOverviewOutcome(rsp);
        else
            return DescribeTaskTableMetricOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskTableMetricOverviewOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskTableMetricOverviewAsync(const DescribeTaskTableMetricOverviewRequest& request, const DescribeTaskTableMetricOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskTableMetricOverviewRequest&;
    using Resp = DescribeTaskTableMetricOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskTableMetricOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTaskTableMetricOverviewOutcomeCallable WedataClient::DescribeTaskTableMetricOverviewCallable(const DescribeTaskTableMetricOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskTableMetricOverviewOutcome>>();
    DescribeTaskTableMetricOverviewAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTaskTableMetricOverviewRequest&,
        DescribeTaskTableMetricOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTaskTemplatesOutcome WedataClient::DescribeTaskTemplates(const DescribeTaskTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskTemplatesResponse rsp = DescribeTaskTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskTemplatesOutcome(rsp);
        else
            return DescribeTaskTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskTemplatesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskTemplatesAsync(const DescribeTaskTemplatesRequest& request, const DescribeTaskTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskTemplatesRequest&;
    using Resp = DescribeTaskTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTaskTemplatesOutcomeCallable WedataClient::DescribeTaskTemplatesCallable(const DescribeTaskTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskTemplatesOutcome>>();
    DescribeTaskTemplatesAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTaskTemplatesRequest&,
        DescribeTaskTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTasksForCodeTemplateOutcome WedataClient::DescribeTasksForCodeTemplate(const DescribeTasksForCodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasksForCodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksForCodeTemplateResponse rsp = DescribeTasksForCodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksForCodeTemplateOutcome(rsp);
        else
            return DescribeTasksForCodeTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksForCodeTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTasksForCodeTemplateAsync(const DescribeTasksForCodeTemplateRequest& request, const DescribeTasksForCodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTasksForCodeTemplateRequest&;
    using Resp = DescribeTasksForCodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTasksForCodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTasksForCodeTemplateOutcomeCallable WedataClient::DescribeTasksForCodeTemplateCallable(const DescribeTasksForCodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTasksForCodeTemplateOutcome>>();
    DescribeTasksForCodeTemplateAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTasksForCodeTemplateRequest&,
        DescribeTasksForCodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTemplateDimCountOutcome WedataClient::DescribeTemplateDimCount(const DescribeTemplateDimCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplateDimCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplateDimCountResponse rsp = DescribeTemplateDimCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplateDimCountOutcome(rsp);
        else
            return DescribeTemplateDimCountOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplateDimCountOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTemplateDimCountAsync(const DescribeTemplateDimCountRequest& request, const DescribeTemplateDimCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTemplateDimCountRequest&;
    using Resp = DescribeTemplateDimCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTemplateDimCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTemplateDimCountOutcomeCallable WedataClient::DescribeTemplateDimCountCallable(const DescribeTemplateDimCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTemplateDimCountOutcome>>();
    DescribeTemplateDimCountAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTemplateDimCountRequest&,
        DescribeTemplateDimCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTenantProjectsOutcome WedataClient::DescribeTenantProjects(const DescribeTenantProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTenantProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTenantProjectsResponse rsp = DescribeTenantProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTenantProjectsOutcome(rsp);
        else
            return DescribeTenantProjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeTenantProjectsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTenantProjectsAsync(const DescribeTenantProjectsRequest& request, const DescribeTenantProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTenantProjectsRequest&;
    using Resp = DescribeTenantProjectsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTenantProjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTenantProjectsOutcomeCallable WedataClient::DescribeTenantProjectsCallable(const DescribeTenantProjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTenantProjectsOutcome>>();
    DescribeTenantProjectsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTenantProjectsRequest&,
        DescribeTenantProjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTestRunningRecordOutcome WedataClient::DescribeTestRunningRecord(const DescribeTestRunningRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTestRunningRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTestRunningRecordResponse rsp = DescribeTestRunningRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTestRunningRecordOutcome(rsp);
        else
            return DescribeTestRunningRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeTestRunningRecordOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTestRunningRecordAsync(const DescribeTestRunningRecordRequest& request, const DescribeTestRunningRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTestRunningRecordRequest&;
    using Resp = DescribeTestRunningRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTestRunningRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTestRunningRecordOutcomeCallable WedataClient::DescribeTestRunningRecordCallable(const DescribeTestRunningRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTestRunningRecordOutcome>>();
    DescribeTestRunningRecordAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTestRunningRecordRequest&,
        DescribeTestRunningRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeThirdTaskRunLogOutcome WedataClient::DescribeThirdTaskRunLog(const DescribeThirdTaskRunLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeThirdTaskRunLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeThirdTaskRunLogResponse rsp = DescribeThirdTaskRunLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeThirdTaskRunLogOutcome(rsp);
        else
            return DescribeThirdTaskRunLogOutcome(o.GetError());
    }
    else
    {
        return DescribeThirdTaskRunLogOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeThirdTaskRunLogAsync(const DescribeThirdTaskRunLogRequest& request, const DescribeThirdTaskRunLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeThirdTaskRunLogRequest&;
    using Resp = DescribeThirdTaskRunLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeThirdTaskRunLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeThirdTaskRunLogOutcomeCallable WedataClient::DescribeThirdTaskRunLogCallable(const DescribeThirdTaskRunLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeThirdTaskRunLogOutcome>>();
    DescribeThirdTaskRunLogAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeThirdTaskRunLogRequest&,
        DescribeThirdTaskRunLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTopTableStatOutcome WedataClient::DescribeTopTableStat(const DescribeTopTableStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopTableStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopTableStatResponse rsp = DescribeTopTableStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopTableStatOutcome(rsp);
        else
            return DescribeTopTableStatOutcome(o.GetError());
    }
    else
    {
        return DescribeTopTableStatOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTopTableStatAsync(const DescribeTopTableStatRequest& request, const DescribeTopTableStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopTableStatRequest&;
    using Resp = DescribeTopTableStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopTableStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTopTableStatOutcomeCallable WedataClient::DescribeTopTableStatCallable(const DescribeTopTableStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopTableStatOutcome>>();
    DescribeTopTableStatAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTopTableStatRequest&,
        DescribeTopTableStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeTrendStatOutcome WedataClient::DescribeTrendStat(const DescribeTrendStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrendStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrendStatResponse rsp = DescribeTrendStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrendStatOutcome(rsp);
        else
            return DescribeTrendStatOutcome(o.GetError());
    }
    else
    {
        return DescribeTrendStatOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTrendStatAsync(const DescribeTrendStatRequest& request, const DescribeTrendStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrendStatRequest&;
    using Resp = DescribeTrendStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrendStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeTrendStatOutcomeCallable WedataClient::DescribeTrendStatCallable(const DescribeTrendStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrendStatOutcome>>();
    DescribeTrendStatAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeTrendStatRequest&,
        DescribeTrendStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeWorkflowByFordIdsOutcome WedataClient::DescribeWorkflowByFordIds(const DescribeWorkflowByFordIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowByFordIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowByFordIdsResponse rsp = DescribeWorkflowByFordIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowByFordIdsOutcome(rsp);
        else
            return DescribeWorkflowByFordIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowByFordIdsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowByFordIdsAsync(const DescribeWorkflowByFordIdsRequest& request, const DescribeWorkflowByFordIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkflowByFordIdsRequest&;
    using Resp = DescribeWorkflowByFordIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkflowByFordIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeWorkflowByFordIdsOutcomeCallable WedataClient::DescribeWorkflowByFordIdsCallable(const DescribeWorkflowByFordIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkflowByFordIdsOutcome>>();
    DescribeWorkflowByFordIdsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeWorkflowByFordIdsRequest&,
        DescribeWorkflowByFordIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeWorkflowCanvasInfoOutcome WedataClient::DescribeWorkflowCanvasInfo(const DescribeWorkflowCanvasInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowCanvasInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowCanvasInfoResponse rsp = DescribeWorkflowCanvasInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowCanvasInfoOutcome(rsp);
        else
            return DescribeWorkflowCanvasInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowCanvasInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowCanvasInfoAsync(const DescribeWorkflowCanvasInfoRequest& request, const DescribeWorkflowCanvasInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkflowCanvasInfoRequest&;
    using Resp = DescribeWorkflowCanvasInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkflowCanvasInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeWorkflowCanvasInfoOutcomeCallable WedataClient::DescribeWorkflowCanvasInfoCallable(const DescribeWorkflowCanvasInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkflowCanvasInfoOutcome>>();
    DescribeWorkflowCanvasInfoAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeWorkflowCanvasInfoRequest&,
        DescribeWorkflowCanvasInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeWorkflowExecuteByIdOutcome WedataClient::DescribeWorkflowExecuteById(const DescribeWorkflowExecuteByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowExecuteById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowExecuteByIdResponse rsp = DescribeWorkflowExecuteByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowExecuteByIdOutcome(rsp);
        else
            return DescribeWorkflowExecuteByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowExecuteByIdOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowExecuteByIdAsync(const DescribeWorkflowExecuteByIdRequest& request, const DescribeWorkflowExecuteByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkflowExecuteByIdRequest&;
    using Resp = DescribeWorkflowExecuteByIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkflowExecuteById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeWorkflowExecuteByIdOutcomeCallable WedataClient::DescribeWorkflowExecuteByIdCallable(const DescribeWorkflowExecuteByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkflowExecuteByIdOutcome>>();
    DescribeWorkflowExecuteByIdAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeWorkflowExecuteByIdRequest&,
        DescribeWorkflowExecuteByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeWorkflowInfoByIdOutcome WedataClient::DescribeWorkflowInfoById(const DescribeWorkflowInfoByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowInfoById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowInfoByIdResponse rsp = DescribeWorkflowInfoByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowInfoByIdOutcome(rsp);
        else
            return DescribeWorkflowInfoByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowInfoByIdOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowInfoByIdAsync(const DescribeWorkflowInfoByIdRequest& request, const DescribeWorkflowInfoByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkflowInfoByIdRequest&;
    using Resp = DescribeWorkflowInfoByIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkflowInfoById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeWorkflowInfoByIdOutcomeCallable WedataClient::DescribeWorkflowInfoByIdCallable(const DescribeWorkflowInfoByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkflowInfoByIdOutcome>>();
    DescribeWorkflowInfoByIdAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeWorkflowInfoByIdRequest&,
        DescribeWorkflowInfoByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeWorkflowListByProjectIdOutcome WedataClient::DescribeWorkflowListByProjectId(const DescribeWorkflowListByProjectIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowListByProjectId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowListByProjectIdResponse rsp = DescribeWorkflowListByProjectIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowListByProjectIdOutcome(rsp);
        else
            return DescribeWorkflowListByProjectIdOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowListByProjectIdOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowListByProjectIdAsync(const DescribeWorkflowListByProjectIdRequest& request, const DescribeWorkflowListByProjectIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkflowListByProjectIdRequest&;
    using Resp = DescribeWorkflowListByProjectIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkflowListByProjectId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeWorkflowListByProjectIdOutcomeCallable WedataClient::DescribeWorkflowListByProjectIdCallable(const DescribeWorkflowListByProjectIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkflowListByProjectIdOutcome>>();
    DescribeWorkflowListByProjectIdAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeWorkflowListByProjectIdRequest&,
        DescribeWorkflowListByProjectIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeWorkflowSchedulerInfoDsOutcome WedataClient::DescribeWorkflowSchedulerInfoDs(const DescribeWorkflowSchedulerInfoDsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowSchedulerInfoDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowSchedulerInfoDsResponse rsp = DescribeWorkflowSchedulerInfoDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowSchedulerInfoDsOutcome(rsp);
        else
            return DescribeWorkflowSchedulerInfoDsOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowSchedulerInfoDsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowSchedulerInfoDsAsync(const DescribeWorkflowSchedulerInfoDsRequest& request, const DescribeWorkflowSchedulerInfoDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkflowSchedulerInfoDsRequest&;
    using Resp = DescribeWorkflowSchedulerInfoDsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkflowSchedulerInfoDs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeWorkflowSchedulerInfoDsOutcomeCallable WedataClient::DescribeWorkflowSchedulerInfoDsCallable(const DescribeWorkflowSchedulerInfoDsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkflowSchedulerInfoDsOutcome>>();
    DescribeWorkflowSchedulerInfoDsAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeWorkflowSchedulerInfoDsRequest&,
        DescribeWorkflowSchedulerInfoDsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DescribeWorkflowTaskCountOutcome WedataClient::DescribeWorkflowTaskCount(const DescribeWorkflowTaskCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowTaskCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowTaskCountResponse rsp = DescribeWorkflowTaskCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowTaskCountOutcome(rsp);
        else
            return DescribeWorkflowTaskCountOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowTaskCountOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowTaskCountAsync(const DescribeWorkflowTaskCountRequest& request, const DescribeWorkflowTaskCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkflowTaskCountRequest&;
    using Resp = DescribeWorkflowTaskCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkflowTaskCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DescribeWorkflowTaskCountOutcomeCallable WedataClient::DescribeWorkflowTaskCountCallable(const DescribeWorkflowTaskCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkflowTaskCountOutcome>>();
    DescribeWorkflowTaskCountAsync(
    request,
    [prom](
        const WedataClient*,
        const DescribeWorkflowTaskCountRequest&,
        DescribeWorkflowTaskCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DiagnoseProOutcome WedataClient::DiagnosePro(const DiagnoseProRequest &request)
{
    auto outcome = MakeRequest(request, "DiagnosePro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DiagnoseProResponse rsp = DiagnoseProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DiagnoseProOutcome(rsp);
        else
            return DiagnoseProOutcome(o.GetError());
    }
    else
    {
        return DiagnoseProOutcome(outcome.GetError());
    }
}

void WedataClient::DiagnoseProAsync(const DiagnoseProRequest& request, const DiagnoseProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DiagnoseProRequest&;
    using Resp = DiagnoseProResponse;

    DoRequestAsync<Req, Resp>(
        "DiagnosePro", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DiagnoseProOutcomeCallable WedataClient::DiagnoseProCallable(const DiagnoseProRequest &request)
{
    const auto prom = std::make_shared<std::promise<DiagnoseProOutcome>>();
    DiagnoseProAsync(
    request,
    [prom](
        const WedataClient*,
        const DiagnoseProRequest&,
        DiagnoseProOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DisableProjectOutcome WedataClient::DisableProject(const DisableProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DisableProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableProjectResponse rsp = DisableProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableProjectOutcome(rsp);
        else
            return DisableProjectOutcome(o.GetError());
    }
    else
    {
        return DisableProjectOutcome(outcome.GetError());
    }
}

void WedataClient::DisableProjectAsync(const DisableProjectRequest& request, const DisableProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableProjectRequest&;
    using Resp = DisableProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DisableProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DisableProjectOutcomeCallable WedataClient::DisableProjectCallable(const DisableProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableProjectOutcome>>();
    DisableProjectAsync(
    request,
    [prom](
        const WedataClient*,
        const DisableProjectRequest&,
        DisableProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DownloadLogByLineOutcome WedataClient::DownloadLogByLine(const DownloadLogByLineRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadLogByLine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadLogByLineResponse rsp = DownloadLogByLineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadLogByLineOutcome(rsp);
        else
            return DownloadLogByLineOutcome(o.GetError());
    }
    else
    {
        return DownloadLogByLineOutcome(outcome.GetError());
    }
}

void WedataClient::DownloadLogByLineAsync(const DownloadLogByLineRequest& request, const DownloadLogByLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadLogByLineRequest&;
    using Resp = DownloadLogByLineResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadLogByLine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DownloadLogByLineOutcomeCallable WedataClient::DownloadLogByLineCallable(const DownloadLogByLineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadLogByLineOutcome>>();
    DownloadLogByLineAsync(
    request,
    [prom](
        const WedataClient*,
        const DownloadLogByLineRequest&,
        DownloadLogByLineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::DryRunDIOfflineTaskOutcome WedataClient::DryRunDIOfflineTask(const DryRunDIOfflineTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DryRunDIOfflineTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DryRunDIOfflineTaskResponse rsp = DryRunDIOfflineTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DryRunDIOfflineTaskOutcome(rsp);
        else
            return DryRunDIOfflineTaskOutcome(o.GetError());
    }
    else
    {
        return DryRunDIOfflineTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DryRunDIOfflineTaskAsync(const DryRunDIOfflineTaskRequest& request, const DryRunDIOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DryRunDIOfflineTaskRequest&;
    using Resp = DryRunDIOfflineTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DryRunDIOfflineTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::DryRunDIOfflineTaskOutcomeCallable WedataClient::DryRunDIOfflineTaskCallable(const DryRunDIOfflineTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DryRunDIOfflineTaskOutcome>>();
    DryRunDIOfflineTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const DryRunDIOfflineTaskRequest&,
        DryRunDIOfflineTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::EnableProjectOutcome WedataClient::EnableProject(const EnableProjectRequest &request)
{
    auto outcome = MakeRequest(request, "EnableProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableProjectResponse rsp = EnableProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableProjectOutcome(rsp);
        else
            return EnableProjectOutcome(o.GetError());
    }
    else
    {
        return EnableProjectOutcome(outcome.GetError());
    }
}

void WedataClient::EnableProjectAsync(const EnableProjectRequest& request, const EnableProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableProjectRequest&;
    using Resp = EnableProjectResponse;

    DoRequestAsync<Req, Resp>(
        "EnableProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::EnableProjectOutcomeCallable WedataClient::EnableProjectCallable(const EnableProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableProjectOutcome>>();
    EnableProjectAsync(
    request,
    [prom](
        const WedataClient*,
        const EnableProjectRequest&,
        EnableProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::FindAllFolderOutcome WedataClient::FindAllFolder(const FindAllFolderRequest &request)
{
    auto outcome = MakeRequest(request, "FindAllFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FindAllFolderResponse rsp = FindAllFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FindAllFolderOutcome(rsp);
        else
            return FindAllFolderOutcome(o.GetError());
    }
    else
    {
        return FindAllFolderOutcome(outcome.GetError());
    }
}

void WedataClient::FindAllFolderAsync(const FindAllFolderRequest& request, const FindAllFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FindAllFolderRequest&;
    using Resp = FindAllFolderResponse;

    DoRequestAsync<Req, Resp>(
        "FindAllFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::FindAllFolderOutcomeCallable WedataClient::FindAllFolderCallable(const FindAllFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<FindAllFolderOutcome>>();
    FindAllFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const FindAllFolderRequest&,
        FindAllFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::FreezeOpsTasksOutcome WedataClient::FreezeOpsTasks(const FreezeOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "FreezeOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FreezeOpsTasksResponse rsp = FreezeOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FreezeOpsTasksOutcome(rsp);
        else
            return FreezeOpsTasksOutcome(o.GetError());
    }
    else
    {
        return FreezeOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::FreezeOpsTasksAsync(const FreezeOpsTasksRequest& request, const FreezeOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FreezeOpsTasksRequest&;
    using Resp = FreezeOpsTasksResponse;

    DoRequestAsync<Req, Resp>(
        "FreezeOpsTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::FreezeOpsTasksOutcomeCallable WedataClient::FreezeOpsTasksCallable(const FreezeOpsTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<FreezeOpsTasksOutcome>>();
    FreezeOpsTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const FreezeOpsTasksRequest&,
        FreezeOpsTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::FreezeTasksByWorkflowIdsOutcome WedataClient::FreezeTasksByWorkflowIds(const FreezeTasksByWorkflowIdsRequest &request)
{
    auto outcome = MakeRequest(request, "FreezeTasksByWorkflowIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FreezeTasksByWorkflowIdsResponse rsp = FreezeTasksByWorkflowIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FreezeTasksByWorkflowIdsOutcome(rsp);
        else
            return FreezeTasksByWorkflowIdsOutcome(o.GetError());
    }
    else
    {
        return FreezeTasksByWorkflowIdsOutcome(outcome.GetError());
    }
}

void WedataClient::FreezeTasksByWorkflowIdsAsync(const FreezeTasksByWorkflowIdsRequest& request, const FreezeTasksByWorkflowIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FreezeTasksByWorkflowIdsRequest&;
    using Resp = FreezeTasksByWorkflowIdsResponse;

    DoRequestAsync<Req, Resp>(
        "FreezeTasksByWorkflowIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::FreezeTasksByWorkflowIdsOutcomeCallable WedataClient::FreezeTasksByWorkflowIdsCallable(const FreezeTasksByWorkflowIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<FreezeTasksByWorkflowIdsOutcome>>();
    FreezeTasksByWorkflowIdsAsync(
    request,
    [prom](
        const WedataClient*,
        const FreezeTasksByWorkflowIdsRequest&,
        FreezeTasksByWorkflowIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GenHiveTableDDLSqlOutcome WedataClient::GenHiveTableDDLSql(const GenHiveTableDDLSqlRequest &request)
{
    auto outcome = MakeRequest(request, "GenHiveTableDDLSql");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenHiveTableDDLSqlResponse rsp = GenHiveTableDDLSqlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenHiveTableDDLSqlOutcome(rsp);
        else
            return GenHiveTableDDLSqlOutcome(o.GetError());
    }
    else
    {
        return GenHiveTableDDLSqlOutcome(outcome.GetError());
    }
}

void WedataClient::GenHiveTableDDLSqlAsync(const GenHiveTableDDLSqlRequest& request, const GenHiveTableDDLSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenHiveTableDDLSqlRequest&;
    using Resp = GenHiveTableDDLSqlResponse;

    DoRequestAsync<Req, Resp>(
        "GenHiveTableDDLSql", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GenHiveTableDDLSqlOutcomeCallable WedataClient::GenHiveTableDDLSqlCallable(const GenHiveTableDDLSqlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenHiveTableDDLSqlOutcome>>();
    GenHiveTableDDLSqlAsync(
    request,
    [prom](
        const WedataClient*,
        const GenHiveTableDDLSqlRequest&,
        GenHiveTableDDLSqlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetBatchDetailErrorLogOutcome WedataClient::GetBatchDetailErrorLog(const GetBatchDetailErrorLogRequest &request)
{
    auto outcome = MakeRequest(request, "GetBatchDetailErrorLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetBatchDetailErrorLogResponse rsp = GetBatchDetailErrorLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetBatchDetailErrorLogOutcome(rsp);
        else
            return GetBatchDetailErrorLogOutcome(o.GetError());
    }
    else
    {
        return GetBatchDetailErrorLogOutcome(outcome.GetError());
    }
}

void WedataClient::GetBatchDetailErrorLogAsync(const GetBatchDetailErrorLogRequest& request, const GetBatchDetailErrorLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetBatchDetailErrorLogRequest&;
    using Resp = GetBatchDetailErrorLogResponse;

    DoRequestAsync<Req, Resp>(
        "GetBatchDetailErrorLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetBatchDetailErrorLogOutcomeCallable WedataClient::GetBatchDetailErrorLogCallable(const GetBatchDetailErrorLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetBatchDetailErrorLogOutcome>>();
    GetBatchDetailErrorLogAsync(
    request,
    [prom](
        const WedataClient*,
        const GetBatchDetailErrorLogRequest&,
        GetBatchDetailErrorLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetCosTokenOutcome WedataClient::GetCosToken(const GetCosTokenRequest &request)
{
    auto outcome = MakeRequest(request, "GetCosToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCosTokenResponse rsp = GetCosTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCosTokenOutcome(rsp);
        else
            return GetCosTokenOutcome(o.GetError());
    }
    else
    {
        return GetCosTokenOutcome(outcome.GetError());
    }
}

void WedataClient::GetCosTokenAsync(const GetCosTokenRequest& request, const GetCosTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCosTokenRequest&;
    using Resp = GetCosTokenResponse;

    DoRequestAsync<Req, Resp>(
        "GetCosToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetCosTokenOutcomeCallable WedataClient::GetCosTokenCallable(const GetCosTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCosTokenOutcome>>();
    GetCosTokenAsync(
    request,
    [prom](
        const WedataClient*,
        const GetCosTokenRequest&,
        GetCosTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetFileInfoOutcome WedataClient::GetFileInfo(const GetFileInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetFileInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFileInfoResponse rsp = GetFileInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFileInfoOutcome(rsp);
        else
            return GetFileInfoOutcome(o.GetError());
    }
    else
    {
        return GetFileInfoOutcome(outcome.GetError());
    }
}

void WedataClient::GetFileInfoAsync(const GetFileInfoRequest& request, const GetFileInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFileInfoRequest&;
    using Resp = GetFileInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetFileInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetFileInfoOutcomeCallable WedataClient::GetFileInfoCallable(const GetFileInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFileInfoOutcome>>();
    GetFileInfoAsync(
    request,
    [prom](
        const WedataClient*,
        const GetFileInfoRequest&,
        GetFileInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetInstanceLogOutcome WedataClient::GetInstanceLog(const GetInstanceLogRequest &request)
{
    auto outcome = MakeRequest(request, "GetInstanceLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetInstanceLogResponse rsp = GetInstanceLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetInstanceLogOutcome(rsp);
        else
            return GetInstanceLogOutcome(o.GetError());
    }
    else
    {
        return GetInstanceLogOutcome(outcome.GetError());
    }
}

void WedataClient::GetInstanceLogAsync(const GetInstanceLogRequest& request, const GetInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetInstanceLogRequest&;
    using Resp = GetInstanceLogResponse;

    DoRequestAsync<Req, Resp>(
        "GetInstanceLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetInstanceLogOutcomeCallable WedataClient::GetInstanceLogCallable(const GetInstanceLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetInstanceLogOutcome>>();
    GetInstanceLogAsync(
    request,
    [prom](
        const WedataClient*,
        const GetInstanceLogRequest&,
        GetInstanceLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetIntegrationNodeColumnSchemaOutcome WedataClient::GetIntegrationNodeColumnSchema(const GetIntegrationNodeColumnSchemaRequest &request)
{
    auto outcome = MakeRequest(request, "GetIntegrationNodeColumnSchema");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetIntegrationNodeColumnSchemaResponse rsp = GetIntegrationNodeColumnSchemaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetIntegrationNodeColumnSchemaOutcome(rsp);
        else
            return GetIntegrationNodeColumnSchemaOutcome(o.GetError());
    }
    else
    {
        return GetIntegrationNodeColumnSchemaOutcome(outcome.GetError());
    }
}

void WedataClient::GetIntegrationNodeColumnSchemaAsync(const GetIntegrationNodeColumnSchemaRequest& request, const GetIntegrationNodeColumnSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetIntegrationNodeColumnSchemaRequest&;
    using Resp = GetIntegrationNodeColumnSchemaResponse;

    DoRequestAsync<Req, Resp>(
        "GetIntegrationNodeColumnSchema", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetIntegrationNodeColumnSchemaOutcomeCallable WedataClient::GetIntegrationNodeColumnSchemaCallable(const GetIntegrationNodeColumnSchemaRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetIntegrationNodeColumnSchemaOutcome>>();
    GetIntegrationNodeColumnSchemaAsync(
    request,
    [prom](
        const WedataClient*,
        const GetIntegrationNodeColumnSchemaRequest&,
        GetIntegrationNodeColumnSchemaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetJobStatusOutcome WedataClient::GetJobStatus(const GetJobStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetJobStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetJobStatusResponse rsp = GetJobStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetJobStatusOutcome(rsp);
        else
            return GetJobStatusOutcome(o.GetError());
    }
    else
    {
        return GetJobStatusOutcome(outcome.GetError());
    }
}

void WedataClient::GetJobStatusAsync(const GetJobStatusRequest& request, const GetJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetJobStatusRequest&;
    using Resp = GetJobStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetJobStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetJobStatusOutcomeCallable WedataClient::GetJobStatusCallable(const GetJobStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetJobStatusOutcome>>();
    GetJobStatusAsync(
    request,
    [prom](
        const WedataClient*,
        const GetJobStatusRequest&,
        GetJobStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetOfflineDIInstanceListOutcome WedataClient::GetOfflineDIInstanceList(const GetOfflineDIInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "GetOfflineDIInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOfflineDIInstanceListResponse rsp = GetOfflineDIInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOfflineDIInstanceListOutcome(rsp);
        else
            return GetOfflineDIInstanceListOutcome(o.GetError());
    }
    else
    {
        return GetOfflineDIInstanceListOutcome(outcome.GetError());
    }
}

void WedataClient::GetOfflineDIInstanceListAsync(const GetOfflineDIInstanceListRequest& request, const GetOfflineDIInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetOfflineDIInstanceListRequest&;
    using Resp = GetOfflineDIInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "GetOfflineDIInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetOfflineDIInstanceListOutcomeCallable WedataClient::GetOfflineDIInstanceListCallable(const GetOfflineDIInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetOfflineDIInstanceListOutcome>>();
    GetOfflineDIInstanceListAsync(
    request,
    [prom](
        const WedataClient*,
        const GetOfflineDIInstanceListRequest&,
        GetOfflineDIInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetOfflineInstanceListOutcome WedataClient::GetOfflineInstanceList(const GetOfflineInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "GetOfflineInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOfflineInstanceListResponse rsp = GetOfflineInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOfflineInstanceListOutcome(rsp);
        else
            return GetOfflineInstanceListOutcome(o.GetError());
    }
    else
    {
        return GetOfflineInstanceListOutcome(outcome.GetError());
    }
}

void WedataClient::GetOfflineInstanceListAsync(const GetOfflineInstanceListRequest& request, const GetOfflineInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetOfflineInstanceListRequest&;
    using Resp = GetOfflineInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "GetOfflineInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetOfflineInstanceListOutcomeCallable WedataClient::GetOfflineInstanceListCallable(const GetOfflineInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetOfflineInstanceListOutcome>>();
    GetOfflineInstanceListAsync(
    request,
    [prom](
        const WedataClient*,
        const GetOfflineInstanceListRequest&,
        GetOfflineInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetPaginationTaskScriptOutcome WedataClient::GetPaginationTaskScript(const GetPaginationTaskScriptRequest &request)
{
    auto outcome = MakeRequest(request, "GetPaginationTaskScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPaginationTaskScriptResponse rsp = GetPaginationTaskScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPaginationTaskScriptOutcome(rsp);
        else
            return GetPaginationTaskScriptOutcome(o.GetError());
    }
    else
    {
        return GetPaginationTaskScriptOutcome(outcome.GetError());
    }
}

void WedataClient::GetPaginationTaskScriptAsync(const GetPaginationTaskScriptRequest& request, const GetPaginationTaskScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPaginationTaskScriptRequest&;
    using Resp = GetPaginationTaskScriptResponse;

    DoRequestAsync<Req, Resp>(
        "GetPaginationTaskScript", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetPaginationTaskScriptOutcomeCallable WedataClient::GetPaginationTaskScriptCallable(const GetPaginationTaskScriptRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPaginationTaskScriptOutcome>>();
    GetPaginationTaskScriptAsync(
    request,
    [prom](
        const WedataClient*,
        const GetPaginationTaskScriptRequest&,
        GetPaginationTaskScriptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::GetTaskInstanceOutcome WedataClient::GetTaskInstance(const GetTaskInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskInstanceResponse rsp = GetTaskInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskInstanceOutcome(rsp);
        else
            return GetTaskInstanceOutcome(o.GetError());
    }
    else
    {
        return GetTaskInstanceOutcome(outcome.GetError());
    }
}

void WedataClient::GetTaskInstanceAsync(const GetTaskInstanceRequest& request, const GetTaskInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTaskInstanceRequest&;
    using Resp = GetTaskInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "GetTaskInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::GetTaskInstanceOutcomeCallable WedataClient::GetTaskInstanceCallable(const GetTaskInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTaskInstanceOutcome>>();
    GetTaskInstanceAsync(
    request,
    [prom](
        const WedataClient*,
        const GetTaskInstanceRequest&,
        GetTaskInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::JudgeResourceFileOutcome WedataClient::JudgeResourceFile(const JudgeResourceFileRequest &request)
{
    auto outcome = MakeRequest(request, "JudgeResourceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        JudgeResourceFileResponse rsp = JudgeResourceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return JudgeResourceFileOutcome(rsp);
        else
            return JudgeResourceFileOutcome(o.GetError());
    }
    else
    {
        return JudgeResourceFileOutcome(outcome.GetError());
    }
}

void WedataClient::JudgeResourceFileAsync(const JudgeResourceFileRequest& request, const JudgeResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const JudgeResourceFileRequest&;
    using Resp = JudgeResourceFileResponse;

    DoRequestAsync<Req, Resp>(
        "JudgeResourceFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::JudgeResourceFileOutcomeCallable WedataClient::JudgeResourceFileCallable(const JudgeResourceFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<JudgeResourceFileOutcome>>();
    JudgeResourceFileAsync(
    request,
    [prom](
        const WedataClient*,
        const JudgeResourceFileRequest&,
        JudgeResourceFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::KillOpsMakePlanInstancesOutcome WedataClient::KillOpsMakePlanInstances(const KillOpsMakePlanInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "KillOpsMakePlanInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillOpsMakePlanInstancesResponse rsp = KillOpsMakePlanInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillOpsMakePlanInstancesOutcome(rsp);
        else
            return KillOpsMakePlanInstancesOutcome(o.GetError());
    }
    else
    {
        return KillOpsMakePlanInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::KillOpsMakePlanInstancesAsync(const KillOpsMakePlanInstancesRequest& request, const KillOpsMakePlanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const KillOpsMakePlanInstancesRequest&;
    using Resp = KillOpsMakePlanInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "KillOpsMakePlanInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::KillOpsMakePlanInstancesOutcomeCallable WedataClient::KillOpsMakePlanInstancesCallable(const KillOpsMakePlanInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<KillOpsMakePlanInstancesOutcome>>();
    KillOpsMakePlanInstancesAsync(
    request,
    [prom](
        const WedataClient*,
        const KillOpsMakePlanInstancesRequest&,
        KillOpsMakePlanInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::KillScheduleInstancesOutcome WedataClient::KillScheduleInstances(const KillScheduleInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "KillScheduleInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillScheduleInstancesResponse rsp = KillScheduleInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillScheduleInstancesOutcome(rsp);
        else
            return KillScheduleInstancesOutcome(o.GetError());
    }
    else
    {
        return KillScheduleInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::KillScheduleInstancesAsync(const KillScheduleInstancesRequest& request, const KillScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const KillScheduleInstancesRequest&;
    using Resp = KillScheduleInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "KillScheduleInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::KillScheduleInstancesOutcomeCallable WedataClient::KillScheduleInstancesCallable(const KillScheduleInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<KillScheduleInstancesOutcome>>();
    KillScheduleInstancesAsync(
    request,
    [prom](
        const WedataClient*,
        const KillScheduleInstancesRequest&,
        KillScheduleInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListBatchDetailOutcome WedataClient::ListBatchDetail(const ListBatchDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ListBatchDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListBatchDetailResponse rsp = ListBatchDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListBatchDetailOutcome(rsp);
        else
            return ListBatchDetailOutcome(o.GetError());
    }
    else
    {
        return ListBatchDetailOutcome(outcome.GetError());
    }
}

void WedataClient::ListBatchDetailAsync(const ListBatchDetailRequest& request, const ListBatchDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListBatchDetailRequest&;
    using Resp = ListBatchDetailResponse;

    DoRequestAsync<Req, Resp>(
        "ListBatchDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListBatchDetailOutcomeCallable WedataClient::ListBatchDetailCallable(const ListBatchDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListBatchDetailOutcome>>();
    ListBatchDetailAsync(
    request,
    [prom](
        const WedataClient*,
        const ListBatchDetailRequest&,
        ListBatchDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ListInstancesOutcome WedataClient::ListInstances(const ListInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ListInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListInstancesResponse rsp = ListInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListInstancesOutcome(rsp);
        else
            return ListInstancesOutcome(o.GetError());
    }
    else
    {
        return ListInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::ListInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListInstancesRequest&;
    using Resp = ListInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ListInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ListInstancesOutcomeCallable WedataClient::ListInstancesCallable(const ListInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListInstancesOutcome>>();
    ListInstancesAsync(
    request,
    [prom](
        const WedataClient*,
        const ListInstancesRequest&,
        ListInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::LockIntegrationTaskOutcome WedataClient::LockIntegrationTask(const LockIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "LockIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LockIntegrationTaskResponse rsp = LockIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LockIntegrationTaskOutcome(rsp);
        else
            return LockIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return LockIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::LockIntegrationTaskAsync(const LockIntegrationTaskRequest& request, const LockIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const LockIntegrationTaskRequest&;
    using Resp = LockIntegrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "LockIntegrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::LockIntegrationTaskOutcomeCallable WedataClient::LockIntegrationTaskCallable(const LockIntegrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<LockIntegrationTaskOutcome>>();
    LockIntegrationTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const LockIntegrationTaskRequest&,
        LockIntegrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyApproveStatusOutcome WedataClient::ModifyApproveStatus(const ModifyApproveStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApproveStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApproveStatusResponse rsp = ModifyApproveStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApproveStatusOutcome(rsp);
        else
            return ModifyApproveStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyApproveStatusOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyApproveStatusAsync(const ModifyApproveStatusRequest& request, const ModifyApproveStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApproveStatusRequest&;
    using Resp = ModifyApproveStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApproveStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyApproveStatusOutcomeCallable WedataClient::ModifyApproveStatusCallable(const ModifyApproveStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApproveStatusOutcome>>();
    ModifyApproveStatusAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyApproveStatusRequest&,
        ModifyApproveStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyDataSourceOutcome WedataClient::ModifyDataSource(const ModifyDataSourceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDataSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDataSourceResponse rsp = ModifyDataSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDataSourceOutcome(rsp);
        else
            return ModifyDataSourceOutcome(o.GetError());
    }
    else
    {
        return ModifyDataSourceOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyDataSourceAsync(const ModifyDataSourceRequest& request, const ModifyDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDataSourceRequest&;
    using Resp = ModifyDataSourceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDataSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyDataSourceOutcomeCallable WedataClient::ModifyDataSourceCallable(const ModifyDataSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDataSourceOutcome>>();
    ModifyDataSourceAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyDataSourceRequest&,
        ModifyDataSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyDimensionWeightOutcome WedataClient::ModifyDimensionWeight(const ModifyDimensionWeightRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDimensionWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDimensionWeightResponse rsp = ModifyDimensionWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDimensionWeightOutcome(rsp);
        else
            return ModifyDimensionWeightOutcome(o.GetError());
    }
    else
    {
        return ModifyDimensionWeightOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyDimensionWeightAsync(const ModifyDimensionWeightRequest& request, const ModifyDimensionWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDimensionWeightRequest&;
    using Resp = ModifyDimensionWeightResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDimensionWeight", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyDimensionWeightOutcomeCallable WedataClient::ModifyDimensionWeightCallable(const ModifyDimensionWeightRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDimensionWeightOutcome>>();
    ModifyDimensionWeightAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyDimensionWeightRequest&,
        ModifyDimensionWeightOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyDsFolderOutcome WedataClient::ModifyDsFolder(const ModifyDsFolderRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDsFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDsFolderResponse rsp = ModifyDsFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDsFolderOutcome(rsp);
        else
            return ModifyDsFolderOutcome(o.GetError());
    }
    else
    {
        return ModifyDsFolderOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyDsFolderAsync(const ModifyDsFolderRequest& request, const ModifyDsFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDsFolderRequest&;
    using Resp = ModifyDsFolderResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDsFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyDsFolderOutcomeCallable WedataClient::ModifyDsFolderCallable(const ModifyDsFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDsFolderOutcome>>();
    ModifyDsFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyDsFolderRequest&,
        ModifyDsFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyExecStrategyOutcome WedataClient::ModifyExecStrategy(const ModifyExecStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyExecStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyExecStrategyResponse rsp = ModifyExecStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyExecStrategyOutcome(rsp);
        else
            return ModifyExecStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyExecStrategyOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyExecStrategyAsync(const ModifyExecStrategyRequest& request, const ModifyExecStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyExecStrategyRequest&;
    using Resp = ModifyExecStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyExecStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyExecStrategyOutcomeCallable WedataClient::ModifyExecStrategyCallable(const ModifyExecStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyExecStrategyOutcome>>();
    ModifyExecStrategyAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyExecStrategyRequest&,
        ModifyExecStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyIntegrationNodeOutcome WedataClient::ModifyIntegrationNode(const ModifyIntegrationNodeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIntegrationNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIntegrationNodeResponse rsp = ModifyIntegrationNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIntegrationNodeOutcome(rsp);
        else
            return ModifyIntegrationNodeOutcome(o.GetError());
    }
    else
    {
        return ModifyIntegrationNodeOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyIntegrationNodeAsync(const ModifyIntegrationNodeRequest& request, const ModifyIntegrationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIntegrationNodeRequest&;
    using Resp = ModifyIntegrationNodeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIntegrationNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyIntegrationNodeOutcomeCallable WedataClient::ModifyIntegrationNodeCallable(const ModifyIntegrationNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIntegrationNodeOutcome>>();
    ModifyIntegrationNodeAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyIntegrationNodeRequest&,
        ModifyIntegrationNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyIntegrationTaskOutcome WedataClient::ModifyIntegrationTask(const ModifyIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIntegrationTaskResponse rsp = ModifyIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIntegrationTaskOutcome(rsp);
        else
            return ModifyIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyIntegrationTaskAsync(const ModifyIntegrationTaskRequest& request, const ModifyIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIntegrationTaskRequest&;
    using Resp = ModifyIntegrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIntegrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyIntegrationTaskOutcomeCallable WedataClient::ModifyIntegrationTaskCallable(const ModifyIntegrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIntegrationTaskOutcome>>();
    ModifyIntegrationTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyIntegrationTaskRequest&,
        ModifyIntegrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyMonitorStatusOutcome WedataClient::ModifyMonitorStatus(const ModifyMonitorStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMonitorStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMonitorStatusResponse rsp = ModifyMonitorStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMonitorStatusOutcome(rsp);
        else
            return ModifyMonitorStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyMonitorStatusOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyMonitorStatusAsync(const ModifyMonitorStatusRequest& request, const ModifyMonitorStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMonitorStatusRequest&;
    using Resp = ModifyMonitorStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMonitorStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyMonitorStatusOutcomeCallable WedataClient::ModifyMonitorStatusCallable(const ModifyMonitorStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMonitorStatusOutcome>>();
    ModifyMonitorStatusAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyMonitorStatusRequest&,
        ModifyMonitorStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyProjectOutcome WedataClient::ModifyProject(const ModifyProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProjectResponse rsp = ModifyProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProjectOutcome(rsp);
        else
            return ModifyProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyProjectOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyProjectAsync(const ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProjectRequest&;
    using Resp = ModifyProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyProjectOutcomeCallable WedataClient::ModifyProjectCallable(const ModifyProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProjectOutcome>>();
    ModifyProjectAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyProjectRequest&,
        ModifyProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyRuleOutcome WedataClient::ModifyRule(const ModifyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRuleResponse rsp = ModifyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRuleOutcome(rsp);
        else
            return ModifyRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyRuleOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRuleRequest&;
    using Resp = ModifyRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyRuleOutcomeCallable WedataClient::ModifyRuleCallable(const ModifyRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRuleOutcome>>();
    ModifyRuleAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyRuleRequest&,
        ModifyRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyRuleGroupSubscriptionOutcome WedataClient::ModifyRuleGroupSubscription(const ModifyRuleGroupSubscriptionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRuleGroupSubscription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRuleGroupSubscriptionResponse rsp = ModifyRuleGroupSubscriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRuleGroupSubscriptionOutcome(rsp);
        else
            return ModifyRuleGroupSubscriptionOutcome(o.GetError());
    }
    else
    {
        return ModifyRuleGroupSubscriptionOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyRuleGroupSubscriptionAsync(const ModifyRuleGroupSubscriptionRequest& request, const ModifyRuleGroupSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRuleGroupSubscriptionRequest&;
    using Resp = ModifyRuleGroupSubscriptionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRuleGroupSubscription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyRuleGroupSubscriptionOutcomeCallable WedataClient::ModifyRuleGroupSubscriptionCallable(const ModifyRuleGroupSubscriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRuleGroupSubscriptionOutcome>>();
    ModifyRuleGroupSubscriptionAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyRuleGroupSubscriptionRequest&,
        ModifyRuleGroupSubscriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyRuleTemplateOutcome WedataClient::ModifyRuleTemplate(const ModifyRuleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRuleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRuleTemplateResponse rsp = ModifyRuleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRuleTemplateOutcome(rsp);
        else
            return ModifyRuleTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyRuleTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyRuleTemplateAsync(const ModifyRuleTemplateRequest& request, const ModifyRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRuleTemplateRequest&;
    using Resp = ModifyRuleTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRuleTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyRuleTemplateOutcomeCallable WedataClient::ModifyRuleTemplateCallable(const ModifyRuleTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRuleTemplateOutcome>>();
    ModifyRuleTemplateAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyRuleTemplateRequest&,
        ModifyRuleTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyTaskAlarmRegularOutcome WedataClient::ModifyTaskAlarmRegular(const ModifyTaskAlarmRegularRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskAlarmRegular");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskAlarmRegularResponse rsp = ModifyTaskAlarmRegularResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskAlarmRegularOutcome(rsp);
        else
            return ModifyTaskAlarmRegularOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskAlarmRegularOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskAlarmRegularAsync(const ModifyTaskAlarmRegularRequest& request, const ModifyTaskAlarmRegularAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTaskAlarmRegularRequest&;
    using Resp = ModifyTaskAlarmRegularResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTaskAlarmRegular", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyTaskAlarmRegularOutcomeCallable WedataClient::ModifyTaskAlarmRegularCallable(const ModifyTaskAlarmRegularRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTaskAlarmRegularOutcome>>();
    ModifyTaskAlarmRegularAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyTaskAlarmRegularRequest&,
        ModifyTaskAlarmRegularOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyTaskInfoOutcome WedataClient::ModifyTaskInfo(const ModifyTaskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskInfoResponse rsp = ModifyTaskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskInfoOutcome(rsp);
        else
            return ModifyTaskInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskInfoOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskInfoAsync(const ModifyTaskInfoRequest& request, const ModifyTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTaskInfoRequest&;
    using Resp = ModifyTaskInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTaskInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyTaskInfoOutcomeCallable WedataClient::ModifyTaskInfoCallable(const ModifyTaskInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTaskInfoOutcome>>();
    ModifyTaskInfoAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyTaskInfoRequest&,
        ModifyTaskInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyTaskInfoDsOutcome WedataClient::ModifyTaskInfoDs(const ModifyTaskInfoDsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskInfoDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskInfoDsResponse rsp = ModifyTaskInfoDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskInfoDsOutcome(rsp);
        else
            return ModifyTaskInfoDsOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskInfoDsOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskInfoDsAsync(const ModifyTaskInfoDsRequest& request, const ModifyTaskInfoDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTaskInfoDsRequest&;
    using Resp = ModifyTaskInfoDsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTaskInfoDs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyTaskInfoDsOutcomeCallable WedataClient::ModifyTaskInfoDsCallable(const ModifyTaskInfoDsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTaskInfoDsOutcome>>();
    ModifyTaskInfoDsAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyTaskInfoDsRequest&,
        ModifyTaskInfoDsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyTaskLinksOutcome WedataClient::ModifyTaskLinks(const ModifyTaskLinksRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskLinks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskLinksResponse rsp = ModifyTaskLinksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskLinksOutcome(rsp);
        else
            return ModifyTaskLinksOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskLinksOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskLinksAsync(const ModifyTaskLinksRequest& request, const ModifyTaskLinksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTaskLinksRequest&;
    using Resp = ModifyTaskLinksResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTaskLinks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyTaskLinksOutcomeCallable WedataClient::ModifyTaskLinksCallable(const ModifyTaskLinksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTaskLinksOutcome>>();
    ModifyTaskLinksAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyTaskLinksRequest&,
        ModifyTaskLinksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyTaskLinksDsOutcome WedataClient::ModifyTaskLinksDs(const ModifyTaskLinksDsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskLinksDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskLinksDsResponse rsp = ModifyTaskLinksDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskLinksDsOutcome(rsp);
        else
            return ModifyTaskLinksDsOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskLinksDsOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskLinksDsAsync(const ModifyTaskLinksDsRequest& request, const ModifyTaskLinksDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTaskLinksDsRequest&;
    using Resp = ModifyTaskLinksDsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTaskLinksDs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyTaskLinksDsOutcomeCallable WedataClient::ModifyTaskLinksDsCallable(const ModifyTaskLinksDsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTaskLinksDsOutcome>>();
    ModifyTaskLinksDsAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyTaskLinksDsRequest&,
        ModifyTaskLinksDsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyTaskNameOutcome WedataClient::ModifyTaskName(const ModifyTaskNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskNameResponse rsp = ModifyTaskNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskNameOutcome(rsp);
        else
            return ModifyTaskNameOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskNameOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskNameAsync(const ModifyTaskNameRequest& request, const ModifyTaskNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTaskNameRequest&;
    using Resp = ModifyTaskNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTaskName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyTaskNameOutcomeCallable WedataClient::ModifyTaskNameCallable(const ModifyTaskNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTaskNameOutcome>>();
    ModifyTaskNameAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyTaskNameRequest&,
        ModifyTaskNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyTaskScriptOutcome WedataClient::ModifyTaskScript(const ModifyTaskScriptRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskScriptResponse rsp = ModifyTaskScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskScriptOutcome(rsp);
        else
            return ModifyTaskScriptOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskScriptOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskScriptAsync(const ModifyTaskScriptRequest& request, const ModifyTaskScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTaskScriptRequest&;
    using Resp = ModifyTaskScriptResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTaskScript", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyTaskScriptOutcomeCallable WedataClient::ModifyTaskScriptCallable(const ModifyTaskScriptRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTaskScriptOutcome>>();
    ModifyTaskScriptAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyTaskScriptRequest&,
        ModifyTaskScriptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyWorkflowInfoOutcome WedataClient::ModifyWorkflowInfo(const ModifyWorkflowInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkflowInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkflowInfoResponse rsp = ModifyWorkflowInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkflowInfoOutcome(rsp);
        else
            return ModifyWorkflowInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkflowInfoOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyWorkflowInfoAsync(const ModifyWorkflowInfoRequest& request, const ModifyWorkflowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWorkflowInfoRequest&;
    using Resp = ModifyWorkflowInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWorkflowInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyWorkflowInfoOutcomeCallable WedataClient::ModifyWorkflowInfoCallable(const ModifyWorkflowInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWorkflowInfoOutcome>>();
    ModifyWorkflowInfoAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyWorkflowInfoRequest&,
        ModifyWorkflowInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ModifyWorkflowScheduleOutcome WedataClient::ModifyWorkflowSchedule(const ModifyWorkflowScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkflowSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkflowScheduleResponse rsp = ModifyWorkflowScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkflowScheduleOutcome(rsp);
        else
            return ModifyWorkflowScheduleOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkflowScheduleOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyWorkflowScheduleAsync(const ModifyWorkflowScheduleRequest& request, const ModifyWorkflowScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWorkflowScheduleRequest&;
    using Resp = ModifyWorkflowScheduleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWorkflowSchedule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ModifyWorkflowScheduleOutcomeCallable WedataClient::ModifyWorkflowScheduleCallable(const ModifyWorkflowScheduleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWorkflowScheduleOutcome>>();
    ModifyWorkflowScheduleAsync(
    request,
    [prom](
        const WedataClient*,
        const ModifyWorkflowScheduleRequest&,
        ModifyWorkflowScheduleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::MoveTasksToFolderOutcome WedataClient::MoveTasksToFolder(const MoveTasksToFolderRequest &request)
{
    auto outcome = MakeRequest(request, "MoveTasksToFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MoveTasksToFolderResponse rsp = MoveTasksToFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MoveTasksToFolderOutcome(rsp);
        else
            return MoveTasksToFolderOutcome(o.GetError());
    }
    else
    {
        return MoveTasksToFolderOutcome(outcome.GetError());
    }
}

void WedataClient::MoveTasksToFolderAsync(const MoveTasksToFolderRequest& request, const MoveTasksToFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MoveTasksToFolderRequest&;
    using Resp = MoveTasksToFolderResponse;

    DoRequestAsync<Req, Resp>(
        "MoveTasksToFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::MoveTasksToFolderOutcomeCallable WedataClient::MoveTasksToFolderCallable(const MoveTasksToFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<MoveTasksToFolderOutcome>>();
    MoveTasksToFolderAsync(
    request,
    [prom](
        const WedataClient*,
        const MoveTasksToFolderRequest&,
        MoveTasksToFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RegisterDsEventOutcome WedataClient::RegisterDsEvent(const RegisterDsEventRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterDsEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterDsEventResponse rsp = RegisterDsEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterDsEventOutcome(rsp);
        else
            return RegisterDsEventOutcome(o.GetError());
    }
    else
    {
        return RegisterDsEventOutcome(outcome.GetError());
    }
}

void WedataClient::RegisterDsEventAsync(const RegisterDsEventRequest& request, const RegisterDsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterDsEventRequest&;
    using Resp = RegisterDsEventResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterDsEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RegisterDsEventOutcomeCallable WedataClient::RegisterDsEventCallable(const RegisterDsEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterDsEventOutcome>>();
    RegisterDsEventAsync(
    request,
    [prom](
        const WedataClient*,
        const RegisterDsEventRequest&,
        RegisterDsEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RegisterDsEventListenerOutcome WedataClient::RegisterDsEventListener(const RegisterDsEventListenerRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterDsEventListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterDsEventListenerResponse rsp = RegisterDsEventListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterDsEventListenerOutcome(rsp);
        else
            return RegisterDsEventListenerOutcome(o.GetError());
    }
    else
    {
        return RegisterDsEventListenerOutcome(outcome.GetError());
    }
}

void WedataClient::RegisterDsEventListenerAsync(const RegisterDsEventListenerRequest& request, const RegisterDsEventListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterDsEventListenerRequest&;
    using Resp = RegisterDsEventListenerResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterDsEventListener", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RegisterDsEventListenerOutcomeCallable WedataClient::RegisterDsEventListenerCallable(const RegisterDsEventListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterDsEventListenerOutcome>>();
    RegisterDsEventListenerAsync(
    request,
    [prom](
        const WedataClient*,
        const RegisterDsEventListenerRequest&,
        RegisterDsEventListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RegisterEventOutcome WedataClient::RegisterEvent(const RegisterEventRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterEventResponse rsp = RegisterEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterEventOutcome(rsp);
        else
            return RegisterEventOutcome(o.GetError());
    }
    else
    {
        return RegisterEventOutcome(outcome.GetError());
    }
}

void WedataClient::RegisterEventAsync(const RegisterEventRequest& request, const RegisterEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterEventRequest&;
    using Resp = RegisterEventResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RegisterEventOutcomeCallable WedataClient::RegisterEventCallable(const RegisterEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterEventOutcome>>();
    RegisterEventAsync(
    request,
    [prom](
        const WedataClient*,
        const RegisterEventRequest&,
        RegisterEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RegisterEventListenerOutcome WedataClient::RegisterEventListener(const RegisterEventListenerRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterEventListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterEventListenerResponse rsp = RegisterEventListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterEventListenerOutcome(rsp);
        else
            return RegisterEventListenerOutcome(o.GetError());
    }
    else
    {
        return RegisterEventListenerOutcome(outcome.GetError());
    }
}

void WedataClient::RegisterEventListenerAsync(const RegisterEventListenerRequest& request, const RegisterEventListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterEventListenerRequest&;
    using Resp = RegisterEventListenerResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterEventListener", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RegisterEventListenerOutcomeCallable WedataClient::RegisterEventListenerCallable(const RegisterEventListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterEventListenerOutcome>>();
    RegisterEventListenerAsync(
    request,
    [prom](
        const WedataClient*,
        const RegisterEventListenerRequest&,
        RegisterEventListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RemoveDatabaseOutcome WedataClient::RemoveDatabase(const RemoveDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveDatabaseResponse rsp = RemoveDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveDatabaseOutcome(rsp);
        else
            return RemoveDatabaseOutcome(o.GetError());
    }
    else
    {
        return RemoveDatabaseOutcome(outcome.GetError());
    }
}

void WedataClient::RemoveDatabaseAsync(const RemoveDatabaseRequest& request, const RemoveDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveDatabaseRequest&;
    using Resp = RemoveDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RemoveDatabaseOutcomeCallable WedataClient::RemoveDatabaseCallable(const RemoveDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveDatabaseOutcome>>();
    RemoveDatabaseAsync(
    request,
    [prom](
        const WedataClient*,
        const RemoveDatabaseRequest&,
        RemoveDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RemoveSchemaOutcome WedataClient::RemoveSchema(const RemoveSchemaRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveSchema");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveSchemaResponse rsp = RemoveSchemaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveSchemaOutcome(rsp);
        else
            return RemoveSchemaOutcome(o.GetError());
    }
    else
    {
        return RemoveSchemaOutcome(outcome.GetError());
    }
}

void WedataClient::RemoveSchemaAsync(const RemoveSchemaRequest& request, const RemoveSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveSchemaRequest&;
    using Resp = RemoveSchemaResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveSchema", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RemoveSchemaOutcomeCallable WedataClient::RemoveSchemaCallable(const RemoveSchemaRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveSchemaOutcome>>();
    RemoveSchemaAsync(
    request,
    [prom](
        const WedataClient*,
        const RemoveSchemaRequest&,
        RemoveSchemaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RemoveTableOutcome WedataClient::RemoveTable(const RemoveTableRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveTableResponse rsp = RemoveTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveTableOutcome(rsp);
        else
            return RemoveTableOutcome(o.GetError());
    }
    else
    {
        return RemoveTableOutcome(outcome.GetError());
    }
}

void WedataClient::RemoveTableAsync(const RemoveTableRequest& request, const RemoveTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveTableRequest&;
    using Resp = RemoveTableResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RemoveTableOutcomeCallable WedataClient::RemoveTableCallable(const RemoveTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveTableOutcome>>();
    RemoveTableAsync(
    request,
    [prom](
        const WedataClient*,
        const RemoveTableRequest&,
        RemoveTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RemoveWorkflowDsOutcome WedataClient::RemoveWorkflowDs(const RemoveWorkflowDsRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveWorkflowDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveWorkflowDsResponse rsp = RemoveWorkflowDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveWorkflowDsOutcome(rsp);
        else
            return RemoveWorkflowDsOutcome(o.GetError());
    }
    else
    {
        return RemoveWorkflowDsOutcome(outcome.GetError());
    }
}

void WedataClient::RemoveWorkflowDsAsync(const RemoveWorkflowDsRequest& request, const RemoveWorkflowDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveWorkflowDsRequest&;
    using Resp = RemoveWorkflowDsResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveWorkflowDs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RemoveWorkflowDsOutcomeCallable WedataClient::RemoveWorkflowDsCallable(const RemoveWorkflowDsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveWorkflowDsOutcome>>();
    RemoveWorkflowDsAsync(
    request,
    [prom](
        const WedataClient*,
        const RemoveWorkflowDsRequest&,
        RemoveWorkflowDsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RenewWorkflowOwnerDsOutcome WedataClient::RenewWorkflowOwnerDs(const RenewWorkflowOwnerDsRequest &request)
{
    auto outcome = MakeRequest(request, "RenewWorkflowOwnerDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewWorkflowOwnerDsResponse rsp = RenewWorkflowOwnerDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewWorkflowOwnerDsOutcome(rsp);
        else
            return RenewWorkflowOwnerDsOutcome(o.GetError());
    }
    else
    {
        return RenewWorkflowOwnerDsOutcome(outcome.GetError());
    }
}

void WedataClient::RenewWorkflowOwnerDsAsync(const RenewWorkflowOwnerDsRequest& request, const RenewWorkflowOwnerDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewWorkflowOwnerDsRequest&;
    using Resp = RenewWorkflowOwnerDsResponse;

    DoRequestAsync<Req, Resp>(
        "RenewWorkflowOwnerDs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RenewWorkflowOwnerDsOutcomeCallable WedataClient::RenewWorkflowOwnerDsCallable(const RenewWorkflowOwnerDsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewWorkflowOwnerDsOutcome>>();
    RenewWorkflowOwnerDsAsync(
    request,
    [prom](
        const WedataClient*,
        const RenewWorkflowOwnerDsRequest&,
        RenewWorkflowOwnerDsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RenewWorkflowSchedulerInfoDsOutcome WedataClient::RenewWorkflowSchedulerInfoDs(const RenewWorkflowSchedulerInfoDsRequest &request)
{
    auto outcome = MakeRequest(request, "RenewWorkflowSchedulerInfoDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewWorkflowSchedulerInfoDsResponse rsp = RenewWorkflowSchedulerInfoDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewWorkflowSchedulerInfoDsOutcome(rsp);
        else
            return RenewWorkflowSchedulerInfoDsOutcome(o.GetError());
    }
    else
    {
        return RenewWorkflowSchedulerInfoDsOutcome(outcome.GetError());
    }
}

void WedataClient::RenewWorkflowSchedulerInfoDsAsync(const RenewWorkflowSchedulerInfoDsRequest& request, const RenewWorkflowSchedulerInfoDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewWorkflowSchedulerInfoDsRequest&;
    using Resp = RenewWorkflowSchedulerInfoDsResponse;

    DoRequestAsync<Req, Resp>(
        "RenewWorkflowSchedulerInfoDs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RenewWorkflowSchedulerInfoDsOutcomeCallable WedataClient::RenewWorkflowSchedulerInfoDsCallable(const RenewWorkflowSchedulerInfoDsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewWorkflowSchedulerInfoDsOutcome>>();
    RenewWorkflowSchedulerInfoDsAsync(
    request,
    [prom](
        const WedataClient*,
        const RenewWorkflowSchedulerInfoDsRequest&,
        RenewWorkflowSchedulerInfoDsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ReportDatabaseOutcome WedataClient::ReportDatabase(const ReportDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "ReportDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportDatabaseResponse rsp = ReportDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportDatabaseOutcome(rsp);
        else
            return ReportDatabaseOutcome(o.GetError());
    }
    else
    {
        return ReportDatabaseOutcome(outcome.GetError());
    }
}

void WedataClient::ReportDatabaseAsync(const ReportDatabaseRequest& request, const ReportDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReportDatabaseRequest&;
    using Resp = ReportDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "ReportDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ReportDatabaseOutcomeCallable WedataClient::ReportDatabaseCallable(const ReportDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportDatabaseOutcome>>();
    ReportDatabaseAsync(
    request,
    [prom](
        const WedataClient*,
        const ReportDatabaseRequest&,
        ReportDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ReportSchemaOutcome WedataClient::ReportSchema(const ReportSchemaRequest &request)
{
    auto outcome = MakeRequest(request, "ReportSchema");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportSchemaResponse rsp = ReportSchemaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportSchemaOutcome(rsp);
        else
            return ReportSchemaOutcome(o.GetError());
    }
    else
    {
        return ReportSchemaOutcome(outcome.GetError());
    }
}

void WedataClient::ReportSchemaAsync(const ReportSchemaRequest& request, const ReportSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReportSchemaRequest&;
    using Resp = ReportSchemaResponse;

    DoRequestAsync<Req, Resp>(
        "ReportSchema", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ReportSchemaOutcomeCallable WedataClient::ReportSchemaCallable(const ReportSchemaRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportSchemaOutcome>>();
    ReportSchemaAsync(
    request,
    [prom](
        const WedataClient*,
        const ReportSchemaRequest&,
        ReportSchemaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ReportTableOutcome WedataClient::ReportTable(const ReportTableRequest &request)
{
    auto outcome = MakeRequest(request, "ReportTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportTableResponse rsp = ReportTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportTableOutcome(rsp);
        else
            return ReportTableOutcome(o.GetError());
    }
    else
    {
        return ReportTableOutcome(outcome.GetError());
    }
}

void WedataClient::ReportTableAsync(const ReportTableRequest& request, const ReportTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReportTableRequest&;
    using Resp = ReportTableResponse;

    DoRequestAsync<Req, Resp>(
        "ReportTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ReportTableOutcomeCallable WedataClient::ReportTableCallable(const ReportTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportTableOutcome>>();
    ReportTableAsync(
    request,
    [prom](
        const WedataClient*,
        const ReportTableRequest&,
        ReportTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ReportTaskLineageOutcome WedataClient::ReportTaskLineage(const ReportTaskLineageRequest &request)
{
    auto outcome = MakeRequest(request, "ReportTaskLineage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportTaskLineageResponse rsp = ReportTaskLineageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportTaskLineageOutcome(rsp);
        else
            return ReportTaskLineageOutcome(o.GetError());
    }
    else
    {
        return ReportTaskLineageOutcome(outcome.GetError());
    }
}

void WedataClient::ReportTaskLineageAsync(const ReportTaskLineageRequest& request, const ReportTaskLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReportTaskLineageRequest&;
    using Resp = ReportTaskLineageResponse;

    DoRequestAsync<Req, Resp>(
        "ReportTaskLineage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ReportTaskLineageOutcomeCallable WedataClient::ReportTaskLineageCallable(const ReportTaskLineageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportTaskLineageOutcome>>();
    ReportTaskLineageAsync(
    request,
    [prom](
        const WedataClient*,
        const ReportTaskLineageRequest&,
        ReportTaskLineageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::ResumeIntegrationTaskOutcome WedataClient::ResumeIntegrationTask(const ResumeIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeIntegrationTaskResponse rsp = ResumeIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeIntegrationTaskOutcome(rsp);
        else
            return ResumeIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return ResumeIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::ResumeIntegrationTaskAsync(const ResumeIntegrationTaskRequest& request, const ResumeIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeIntegrationTaskRequest&;
    using Resp = ResumeIntegrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeIntegrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::ResumeIntegrationTaskOutcomeCallable WedataClient::ResumeIntegrationTaskCallable(const ResumeIntegrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeIntegrationTaskOutcome>>();
    ResumeIntegrationTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const ResumeIntegrationTaskRequest&,
        ResumeIntegrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RobAndLockIntegrationTaskOutcome WedataClient::RobAndLockIntegrationTask(const RobAndLockIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RobAndLockIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RobAndLockIntegrationTaskResponse rsp = RobAndLockIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RobAndLockIntegrationTaskOutcome(rsp);
        else
            return RobAndLockIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return RobAndLockIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::RobAndLockIntegrationTaskAsync(const RobAndLockIntegrationTaskRequest& request, const RobAndLockIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RobAndLockIntegrationTaskRequest&;
    using Resp = RobAndLockIntegrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "RobAndLockIntegrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RobAndLockIntegrationTaskOutcomeCallable WedataClient::RobAndLockIntegrationTaskCallable(const RobAndLockIntegrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<RobAndLockIntegrationTaskOutcome>>();
    RobAndLockIntegrationTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const RobAndLockIntegrationTaskRequest&,
        RobAndLockIntegrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RunForceSucScheduleInstancesOutcome WedataClient::RunForceSucScheduleInstances(const RunForceSucScheduleInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RunForceSucScheduleInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunForceSucScheduleInstancesResponse rsp = RunForceSucScheduleInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunForceSucScheduleInstancesOutcome(rsp);
        else
            return RunForceSucScheduleInstancesOutcome(o.GetError());
    }
    else
    {
        return RunForceSucScheduleInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::RunForceSucScheduleInstancesAsync(const RunForceSucScheduleInstancesRequest& request, const RunForceSucScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunForceSucScheduleInstancesRequest&;
    using Resp = RunForceSucScheduleInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RunForceSucScheduleInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RunForceSucScheduleInstancesOutcomeCallable WedataClient::RunForceSucScheduleInstancesCallable(const RunForceSucScheduleInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunForceSucScheduleInstancesOutcome>>();
    RunForceSucScheduleInstancesAsync(
    request,
    [prom](
        const WedataClient*,
        const RunForceSucScheduleInstancesRequest&,
        RunForceSucScheduleInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RunRerunScheduleInstancesOutcome WedataClient::RunRerunScheduleInstances(const RunRerunScheduleInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RunRerunScheduleInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunRerunScheduleInstancesResponse rsp = RunRerunScheduleInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunRerunScheduleInstancesOutcome(rsp);
        else
            return RunRerunScheduleInstancesOutcome(o.GetError());
    }
    else
    {
        return RunRerunScheduleInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::RunRerunScheduleInstancesAsync(const RunRerunScheduleInstancesRequest& request, const RunRerunScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunRerunScheduleInstancesRequest&;
    using Resp = RunRerunScheduleInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RunRerunScheduleInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RunRerunScheduleInstancesOutcomeCallable WedataClient::RunRerunScheduleInstancesCallable(const RunRerunScheduleInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunRerunScheduleInstancesOutcome>>();
    RunRerunScheduleInstancesAsync(
    request,
    [prom](
        const WedataClient*,
        const RunRerunScheduleInstancesRequest&,
        RunRerunScheduleInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::RunTasksByMultiWorkflowOutcome WedataClient::RunTasksByMultiWorkflow(const RunTasksByMultiWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "RunTasksByMultiWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunTasksByMultiWorkflowResponse rsp = RunTasksByMultiWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunTasksByMultiWorkflowOutcome(rsp);
        else
            return RunTasksByMultiWorkflowOutcome(o.GetError());
    }
    else
    {
        return RunTasksByMultiWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::RunTasksByMultiWorkflowAsync(const RunTasksByMultiWorkflowRequest& request, const RunTasksByMultiWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunTasksByMultiWorkflowRequest&;
    using Resp = RunTasksByMultiWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "RunTasksByMultiWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::RunTasksByMultiWorkflowOutcomeCallable WedataClient::RunTasksByMultiWorkflowCallable(const RunTasksByMultiWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunTasksByMultiWorkflowOutcome>>();
    RunTasksByMultiWorkflowAsync(
    request,
    [prom](
        const WedataClient*,
        const RunTasksByMultiWorkflowRequest&,
        RunTasksByMultiWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::SaveCustomFunctionOutcome WedataClient::SaveCustomFunction(const SaveCustomFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "SaveCustomFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaveCustomFunctionResponse rsp = SaveCustomFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaveCustomFunctionOutcome(rsp);
        else
            return SaveCustomFunctionOutcome(o.GetError());
    }
    else
    {
        return SaveCustomFunctionOutcome(outcome.GetError());
    }
}

void WedataClient::SaveCustomFunctionAsync(const SaveCustomFunctionRequest& request, const SaveCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SaveCustomFunctionRequest&;
    using Resp = SaveCustomFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "SaveCustomFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::SaveCustomFunctionOutcomeCallable WedataClient::SaveCustomFunctionCallable(const SaveCustomFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<SaveCustomFunctionOutcome>>();
    SaveCustomFunctionAsync(
    request,
    [prom](
        const WedataClient*,
        const SaveCustomFunctionRequest&,
        SaveCustomFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::SetTaskAlarmNewOutcome WedataClient::SetTaskAlarmNew(const SetTaskAlarmNewRequest &request)
{
    auto outcome = MakeRequest(request, "SetTaskAlarmNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTaskAlarmNewResponse rsp = SetTaskAlarmNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTaskAlarmNewOutcome(rsp);
        else
            return SetTaskAlarmNewOutcome(o.GetError());
    }
    else
    {
        return SetTaskAlarmNewOutcome(outcome.GetError());
    }
}

void WedataClient::SetTaskAlarmNewAsync(const SetTaskAlarmNewRequest& request, const SetTaskAlarmNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetTaskAlarmNewRequest&;
    using Resp = SetTaskAlarmNewResponse;

    DoRequestAsync<Req, Resp>(
        "SetTaskAlarmNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::SetTaskAlarmNewOutcomeCallable WedataClient::SetTaskAlarmNewCallable(const SetTaskAlarmNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetTaskAlarmNewOutcome>>();
    SetTaskAlarmNewAsync(
    request,
    [prom](
        const WedataClient*,
        const SetTaskAlarmNewRequest&,
        SetTaskAlarmNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::StartIntegrationTaskOutcome WedataClient::StartIntegrationTask(const StartIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StartIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartIntegrationTaskResponse rsp = StartIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartIntegrationTaskOutcome(rsp);
        else
            return StartIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return StartIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::StartIntegrationTaskAsync(const StartIntegrationTaskRequest& request, const StartIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartIntegrationTaskRequest&;
    using Resp = StartIntegrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StartIntegrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::StartIntegrationTaskOutcomeCallable WedataClient::StartIntegrationTaskCallable(const StartIntegrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartIntegrationTaskOutcome>>();
    StartIntegrationTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const StartIntegrationTaskRequest&,
        StartIntegrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::StopIntegrationTaskOutcome WedataClient::StopIntegrationTask(const StopIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopIntegrationTaskResponse rsp = StopIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopIntegrationTaskOutcome(rsp);
        else
            return StopIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return StopIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::StopIntegrationTaskAsync(const StopIntegrationTaskRequest& request, const StopIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopIntegrationTaskRequest&;
    using Resp = StopIntegrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StopIntegrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::StopIntegrationTaskOutcomeCallable WedataClient::StopIntegrationTaskCallable(const StopIntegrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopIntegrationTaskOutcome>>();
    StopIntegrationTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const StopIntegrationTaskRequest&,
        StopIntegrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::SubmitCustomFunctionOutcome WedataClient::SubmitCustomFunction(const SubmitCustomFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitCustomFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitCustomFunctionResponse rsp = SubmitCustomFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitCustomFunctionOutcome(rsp);
        else
            return SubmitCustomFunctionOutcome(o.GetError());
    }
    else
    {
        return SubmitCustomFunctionOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitCustomFunctionAsync(const SubmitCustomFunctionRequest& request, const SubmitCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitCustomFunctionRequest&;
    using Resp = SubmitCustomFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitCustomFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::SubmitCustomFunctionOutcomeCallable WedataClient::SubmitCustomFunctionCallable(const SubmitCustomFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitCustomFunctionOutcome>>();
    SubmitCustomFunctionAsync(
    request,
    [prom](
        const WedataClient*,
        const SubmitCustomFunctionRequest&,
        SubmitCustomFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::SubmitSqlTaskOutcome WedataClient::SubmitSqlTask(const SubmitSqlTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitSqlTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitSqlTaskResponse rsp = SubmitSqlTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitSqlTaskOutcome(rsp);
        else
            return SubmitSqlTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitSqlTaskOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitSqlTaskAsync(const SubmitSqlTaskRequest& request, const SubmitSqlTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitSqlTaskRequest&;
    using Resp = SubmitSqlTaskResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitSqlTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::SubmitSqlTaskOutcomeCallable WedataClient::SubmitSqlTaskCallable(const SubmitSqlTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitSqlTaskOutcome>>();
    SubmitSqlTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const SubmitSqlTaskRequest&,
        SubmitSqlTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::SubmitTaskOutcome WedataClient::SubmitTask(const SubmitTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTaskResponse rsp = SubmitTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTaskOutcome(rsp);
        else
            return SubmitTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitTaskOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitTaskAsync(const SubmitTaskRequest& request, const SubmitTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitTaskRequest&;
    using Resp = SubmitTaskResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::SubmitTaskOutcomeCallable WedataClient::SubmitTaskCallable(const SubmitTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitTaskOutcome>>();
    SubmitTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const SubmitTaskRequest&,
        SubmitTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::SubmitTaskTestRunOutcome WedataClient::SubmitTaskTestRun(const SubmitTaskTestRunRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTaskTestRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTaskTestRunResponse rsp = SubmitTaskTestRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTaskTestRunOutcome(rsp);
        else
            return SubmitTaskTestRunOutcome(o.GetError());
    }
    else
    {
        return SubmitTaskTestRunOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitTaskTestRunAsync(const SubmitTaskTestRunRequest& request, const SubmitTaskTestRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitTaskTestRunRequest&;
    using Resp = SubmitTaskTestRunResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitTaskTestRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::SubmitTaskTestRunOutcomeCallable WedataClient::SubmitTaskTestRunCallable(const SubmitTaskTestRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitTaskTestRunOutcome>>();
    SubmitTaskTestRunAsync(
    request,
    [prom](
        const WedataClient*,
        const SubmitTaskTestRunRequest&,
        SubmitTaskTestRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::SubmitWorkflowOutcome WedataClient::SubmitWorkflow(const SubmitWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitWorkflowResponse rsp = SubmitWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitWorkflowOutcome(rsp);
        else
            return SubmitWorkflowOutcome(o.GetError());
    }
    else
    {
        return SubmitWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitWorkflowAsync(const SubmitWorkflowRequest& request, const SubmitWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitWorkflowRequest&;
    using Resp = SubmitWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::SubmitWorkflowOutcomeCallable WedataClient::SubmitWorkflowCallable(const SubmitWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitWorkflowOutcome>>();
    SubmitWorkflowAsync(
    request,
    [prom](
        const WedataClient*,
        const SubmitWorkflowRequest&,
        SubmitWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::SuspendIntegrationTaskOutcome WedataClient::SuspendIntegrationTask(const SuspendIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SuspendIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SuspendIntegrationTaskResponse rsp = SuspendIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SuspendIntegrationTaskOutcome(rsp);
        else
            return SuspendIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return SuspendIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::SuspendIntegrationTaskAsync(const SuspendIntegrationTaskRequest& request, const SuspendIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SuspendIntegrationTaskRequest&;
    using Resp = SuspendIntegrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "SuspendIntegrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::SuspendIntegrationTaskOutcomeCallable WedataClient::SuspendIntegrationTaskCallable(const SuspendIntegrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<SuspendIntegrationTaskOutcome>>();
    SuspendIntegrationTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const SuspendIntegrationTaskRequest&,
        SuspendIntegrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::TaskLogOutcome WedataClient::TaskLog(const TaskLogRequest &request)
{
    auto outcome = MakeRequest(request, "TaskLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TaskLogResponse rsp = TaskLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TaskLogOutcome(rsp);
        else
            return TaskLogOutcome(o.GetError());
    }
    else
    {
        return TaskLogOutcome(outcome.GetError());
    }
}

void WedataClient::TaskLogAsync(const TaskLogRequest& request, const TaskLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TaskLogRequest&;
    using Resp = TaskLogResponse;

    DoRequestAsync<Req, Resp>(
        "TaskLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::TaskLogOutcomeCallable WedataClient::TaskLogCallable(const TaskLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<TaskLogOutcome>>();
    TaskLogAsync(
    request,
    [prom](
        const WedataClient*,
        const TaskLogRequest&,
        TaskLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::TriggerDsEventOutcome WedataClient::TriggerDsEvent(const TriggerDsEventRequest &request)
{
    auto outcome = MakeRequest(request, "TriggerDsEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TriggerDsEventResponse rsp = TriggerDsEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TriggerDsEventOutcome(rsp);
        else
            return TriggerDsEventOutcome(o.GetError());
    }
    else
    {
        return TriggerDsEventOutcome(outcome.GetError());
    }
}

void WedataClient::TriggerDsEventAsync(const TriggerDsEventRequest& request, const TriggerDsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TriggerDsEventRequest&;
    using Resp = TriggerDsEventResponse;

    DoRequestAsync<Req, Resp>(
        "TriggerDsEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::TriggerDsEventOutcomeCallable WedataClient::TriggerDsEventCallable(const TriggerDsEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<TriggerDsEventOutcome>>();
    TriggerDsEventAsync(
    request,
    [prom](
        const WedataClient*,
        const TriggerDsEventRequest&,
        TriggerDsEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::TriggerEventOutcome WedataClient::TriggerEvent(const TriggerEventRequest &request)
{
    auto outcome = MakeRequest(request, "TriggerEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TriggerEventResponse rsp = TriggerEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TriggerEventOutcome(rsp);
        else
            return TriggerEventOutcome(o.GetError());
    }
    else
    {
        return TriggerEventOutcome(outcome.GetError());
    }
}

void WedataClient::TriggerEventAsync(const TriggerEventRequest& request, const TriggerEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TriggerEventRequest&;
    using Resp = TriggerEventResponse;

    DoRequestAsync<Req, Resp>(
        "TriggerEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::TriggerEventOutcomeCallable WedataClient::TriggerEventCallable(const TriggerEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<TriggerEventOutcome>>();
    TriggerEventAsync(
    request,
    [prom](
        const WedataClient*,
        const TriggerEventRequest&,
        TriggerEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::TriggerManualTasksOutcome WedataClient::TriggerManualTasks(const TriggerManualTasksRequest &request)
{
    auto outcome = MakeRequest(request, "TriggerManualTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TriggerManualTasksResponse rsp = TriggerManualTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TriggerManualTasksOutcome(rsp);
        else
            return TriggerManualTasksOutcome(o.GetError());
    }
    else
    {
        return TriggerManualTasksOutcome(outcome.GetError());
    }
}

void WedataClient::TriggerManualTasksAsync(const TriggerManualTasksRequest& request, const TriggerManualTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TriggerManualTasksRequest&;
    using Resp = TriggerManualTasksResponse;

    DoRequestAsync<Req, Resp>(
        "TriggerManualTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::TriggerManualTasksOutcomeCallable WedataClient::TriggerManualTasksCallable(const TriggerManualTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<TriggerManualTasksOutcome>>();
    TriggerManualTasksAsync(
    request,
    [prom](
        const WedataClient*,
        const TriggerManualTasksRequest&,
        TriggerManualTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UnboundProjectExecutorResourceOutcome WedataClient::UnboundProjectExecutorResource(const UnboundProjectExecutorResourceRequest &request)
{
    auto outcome = MakeRequest(request, "UnboundProjectExecutorResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnboundProjectExecutorResourceResponse rsp = UnboundProjectExecutorResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnboundProjectExecutorResourceOutcome(rsp);
        else
            return UnboundProjectExecutorResourceOutcome(o.GetError());
    }
    else
    {
        return UnboundProjectExecutorResourceOutcome(outcome.GetError());
    }
}

void WedataClient::UnboundProjectExecutorResourceAsync(const UnboundProjectExecutorResourceRequest& request, const UnboundProjectExecutorResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnboundProjectExecutorResourceRequest&;
    using Resp = UnboundProjectExecutorResourceResponse;

    DoRequestAsync<Req, Resp>(
        "UnboundProjectExecutorResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UnboundProjectExecutorResourceOutcomeCallable WedataClient::UnboundProjectExecutorResourceCallable(const UnboundProjectExecutorResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnboundProjectExecutorResourceOutcome>>();
    UnboundProjectExecutorResourceAsync(
    request,
    [prom](
        const WedataClient*,
        const UnboundProjectExecutorResourceRequest&,
        UnboundProjectExecutorResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UnlockIntegrationTaskOutcome WedataClient::UnlockIntegrationTask(const UnlockIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "UnlockIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnlockIntegrationTaskResponse rsp = UnlockIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnlockIntegrationTaskOutcome(rsp);
        else
            return UnlockIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return UnlockIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::UnlockIntegrationTaskAsync(const UnlockIntegrationTaskRequest& request, const UnlockIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnlockIntegrationTaskRequest&;
    using Resp = UnlockIntegrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "UnlockIntegrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UnlockIntegrationTaskOutcomeCallable WedataClient::UnlockIntegrationTaskCallable(const UnlockIntegrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnlockIntegrationTaskOutcome>>();
    UnlockIntegrationTaskAsync(
    request,
    [prom](
        const WedataClient*,
        const UnlockIntegrationTaskRequest&,
        UnlockIntegrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateCodeTemplateOutcome WedataClient::UpdateCodeTemplate(const UpdateCodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCodeTemplateResponse rsp = UpdateCodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCodeTemplateOutcome(rsp);
        else
            return UpdateCodeTemplateOutcome(o.GetError());
    }
    else
    {
        return UpdateCodeTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateCodeTemplateAsync(const UpdateCodeTemplateRequest& request, const UpdateCodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCodeTemplateRequest&;
    using Resp = UpdateCodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateCodeTemplateOutcomeCallable WedataClient::UpdateCodeTemplateCallable(const UpdateCodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCodeTemplateOutcome>>();
    UpdateCodeTemplateAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateCodeTemplateRequest&,
        UpdateCodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateDataModelRegistryInfoOutcome WedataClient::UpdateDataModelRegistryInfo(const UpdateDataModelRegistryInfoRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDataModelRegistryInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDataModelRegistryInfoResponse rsp = UpdateDataModelRegistryInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDataModelRegistryInfoOutcome(rsp);
        else
            return UpdateDataModelRegistryInfoOutcome(o.GetError());
    }
    else
    {
        return UpdateDataModelRegistryInfoOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateDataModelRegistryInfoAsync(const UpdateDataModelRegistryInfoRequest& request, const UpdateDataModelRegistryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDataModelRegistryInfoRequest&;
    using Resp = UpdateDataModelRegistryInfoResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDataModelRegistryInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateDataModelRegistryInfoOutcomeCallable WedataClient::UpdateDataModelRegistryInfoCallable(const UpdateDataModelRegistryInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDataModelRegistryInfoOutcome>>();
    UpdateDataModelRegistryInfoAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateDataModelRegistryInfoRequest&,
        UpdateDataModelRegistryInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateProjectUserRoleOutcome WedataClient::UpdateProjectUserRole(const UpdateProjectUserRoleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProjectUserRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProjectUserRoleResponse rsp = UpdateProjectUserRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProjectUserRoleOutcome(rsp);
        else
            return UpdateProjectUserRoleOutcome(o.GetError());
    }
    else
    {
        return UpdateProjectUserRoleOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateProjectUserRoleAsync(const UpdateProjectUserRoleRequest& request, const UpdateProjectUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateProjectUserRoleRequest&;
    using Resp = UpdateProjectUserRoleResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateProjectUserRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateProjectUserRoleOutcomeCallable WedataClient::UpdateProjectUserRoleCallable(const UpdateProjectUserRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateProjectUserRoleOutcome>>();
    UpdateProjectUserRoleAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateProjectUserRoleRequest&,
        UpdateProjectUserRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateWorkflowInfoOutcome WedataClient::UpdateWorkflowInfo(const UpdateWorkflowInfoRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateWorkflowInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateWorkflowInfoResponse rsp = UpdateWorkflowInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateWorkflowInfoOutcome(rsp);
        else
            return UpdateWorkflowInfoOutcome(o.GetError());
    }
    else
    {
        return UpdateWorkflowInfoOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateWorkflowInfoAsync(const UpdateWorkflowInfoRequest& request, const UpdateWorkflowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateWorkflowInfoRequest&;
    using Resp = UpdateWorkflowInfoResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateWorkflowInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateWorkflowInfoOutcomeCallable WedataClient::UpdateWorkflowInfoCallable(const UpdateWorkflowInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateWorkflowInfoOutcome>>();
    UpdateWorkflowInfoAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateWorkflowInfoRequest&,
        UpdateWorkflowInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UpdateWorkflowOwnerOutcome WedataClient::UpdateWorkflowOwner(const UpdateWorkflowOwnerRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateWorkflowOwner");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateWorkflowOwnerResponse rsp = UpdateWorkflowOwnerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateWorkflowOwnerOutcome(rsp);
        else
            return UpdateWorkflowOwnerOutcome(o.GetError());
    }
    else
    {
        return UpdateWorkflowOwnerOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateWorkflowOwnerAsync(const UpdateWorkflowOwnerRequest& request, const UpdateWorkflowOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateWorkflowOwnerRequest&;
    using Resp = UpdateWorkflowOwnerResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateWorkflowOwner", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UpdateWorkflowOwnerOutcomeCallable WedataClient::UpdateWorkflowOwnerCallable(const UpdateWorkflowOwnerRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateWorkflowOwnerOutcome>>();
    UpdateWorkflowOwnerAsync(
    request,
    [prom](
        const WedataClient*,
        const UpdateWorkflowOwnerRequest&,
        UpdateWorkflowOwnerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UploadContentOutcome WedataClient::UploadContent(const UploadContentRequest &request)
{
    auto outcome = MakeRequest(request, "UploadContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadContentResponse rsp = UploadContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadContentOutcome(rsp);
        else
            return UploadContentOutcome(o.GetError());
    }
    else
    {
        return UploadContentOutcome(outcome.GetError());
    }
}

void WedataClient::UploadContentAsync(const UploadContentRequest& request, const UploadContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadContentRequest&;
    using Resp = UploadContentResponse;

    DoRequestAsync<Req, Resp>(
        "UploadContent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UploadContentOutcomeCallable WedataClient::UploadContentCallable(const UploadContentRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadContentOutcome>>();
    UploadContentAsync(
    request,
    [prom](
        const WedataClient*,
        const UploadContentRequest&,
        UploadContentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WedataClient::UploadResourceOutcome WedataClient::UploadResource(const UploadResourceRequest &request)
{
    auto outcome = MakeRequest(request, "UploadResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadResourceResponse rsp = UploadResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadResourceOutcome(rsp);
        else
            return UploadResourceOutcome(o.GetError());
    }
    else
    {
        return UploadResourceOutcome(outcome.GetError());
    }
}

void WedataClient::UploadResourceAsync(const UploadResourceRequest& request, const UploadResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadResourceRequest&;
    using Resp = UploadResourceResponse;

    DoRequestAsync<Req, Resp>(
        "UploadResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WedataClient::UploadResourceOutcomeCallable WedataClient::UploadResourceCallable(const UploadResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadResourceOutcome>>();
    UploadResourceAsync(
    request,
    [prom](
        const WedataClient*,
        const UploadResourceRequest&,
        UploadResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

