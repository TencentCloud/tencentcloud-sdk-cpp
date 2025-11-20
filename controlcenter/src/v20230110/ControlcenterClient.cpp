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

#include <tencentcloud/controlcenter/v20230110/ControlcenterClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Controlcenter::V20230110;
using namespace TencentCloud::Controlcenter::V20230110::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-01-10";
    const string ENDPOINT = "controlcenter.tencentcloudapi.com";
}

ControlcenterClient::ControlcenterClient(const Credential &credential, const string &region) :
    ControlcenterClient(credential, region, ClientProfile())
{
}

ControlcenterClient::ControlcenterClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ControlcenterClient::BatchApplyAccountBaselinesOutcome ControlcenterClient::BatchApplyAccountBaselines(const BatchApplyAccountBaselinesRequest &request)
{
    auto outcome = MakeRequest(request, "BatchApplyAccountBaselines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchApplyAccountBaselinesResponse rsp = BatchApplyAccountBaselinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchApplyAccountBaselinesOutcome(rsp);
        else
            return BatchApplyAccountBaselinesOutcome(o.GetError());
    }
    else
    {
        return BatchApplyAccountBaselinesOutcome(outcome.GetError());
    }
}

void ControlcenterClient::BatchApplyAccountBaselinesAsync(const BatchApplyAccountBaselinesRequest& request, const BatchApplyAccountBaselinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchApplyAccountBaselinesRequest&;
    using Resp = BatchApplyAccountBaselinesResponse;

    DoRequestAsync<Req, Resp>(
        "BatchApplyAccountBaselines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ControlcenterClient::BatchApplyAccountBaselinesOutcomeCallable ControlcenterClient::BatchApplyAccountBaselinesCallable(const BatchApplyAccountBaselinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchApplyAccountBaselinesOutcome>>();
    BatchApplyAccountBaselinesAsync(
    request,
    [prom](
        const ControlcenterClient*,
        const BatchApplyAccountBaselinesRequest&,
        BatchApplyAccountBaselinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ControlcenterClient::GetAccountFactoryBaselineOutcome ControlcenterClient::GetAccountFactoryBaseline(const GetAccountFactoryBaselineRequest &request)
{
    auto outcome = MakeRequest(request, "GetAccountFactoryBaseline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAccountFactoryBaselineResponse rsp = GetAccountFactoryBaselineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAccountFactoryBaselineOutcome(rsp);
        else
            return GetAccountFactoryBaselineOutcome(o.GetError());
    }
    else
    {
        return GetAccountFactoryBaselineOutcome(outcome.GetError());
    }
}

void ControlcenterClient::GetAccountFactoryBaselineAsync(const GetAccountFactoryBaselineRequest& request, const GetAccountFactoryBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAccountFactoryBaselineRequest&;
    using Resp = GetAccountFactoryBaselineResponse;

    DoRequestAsync<Req, Resp>(
        "GetAccountFactoryBaseline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ControlcenterClient::GetAccountFactoryBaselineOutcomeCallable ControlcenterClient::GetAccountFactoryBaselineCallable(const GetAccountFactoryBaselineRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAccountFactoryBaselineOutcome>>();
    GetAccountFactoryBaselineAsync(
    request,
    [prom](
        const ControlcenterClient*,
        const GetAccountFactoryBaselineRequest&,
        GetAccountFactoryBaselineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ControlcenterClient::ListAccountFactoryBaselineItemsOutcome ControlcenterClient::ListAccountFactoryBaselineItems(const ListAccountFactoryBaselineItemsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAccountFactoryBaselineItems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAccountFactoryBaselineItemsResponse rsp = ListAccountFactoryBaselineItemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAccountFactoryBaselineItemsOutcome(rsp);
        else
            return ListAccountFactoryBaselineItemsOutcome(o.GetError());
    }
    else
    {
        return ListAccountFactoryBaselineItemsOutcome(outcome.GetError());
    }
}

void ControlcenterClient::ListAccountFactoryBaselineItemsAsync(const ListAccountFactoryBaselineItemsRequest& request, const ListAccountFactoryBaselineItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAccountFactoryBaselineItemsRequest&;
    using Resp = ListAccountFactoryBaselineItemsResponse;

    DoRequestAsync<Req, Resp>(
        "ListAccountFactoryBaselineItems", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ControlcenterClient::ListAccountFactoryBaselineItemsOutcomeCallable ControlcenterClient::ListAccountFactoryBaselineItemsCallable(const ListAccountFactoryBaselineItemsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAccountFactoryBaselineItemsOutcome>>();
    ListAccountFactoryBaselineItemsAsync(
    request,
    [prom](
        const ControlcenterClient*,
        const ListAccountFactoryBaselineItemsRequest&,
        ListAccountFactoryBaselineItemsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ControlcenterClient::ListDeployStepTasksOutcome ControlcenterClient::ListDeployStepTasks(const ListDeployStepTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListDeployStepTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDeployStepTasksResponse rsp = ListDeployStepTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDeployStepTasksOutcome(rsp);
        else
            return ListDeployStepTasksOutcome(o.GetError());
    }
    else
    {
        return ListDeployStepTasksOutcome(outcome.GetError());
    }
}

void ControlcenterClient::ListDeployStepTasksAsync(const ListDeployStepTasksRequest& request, const ListDeployStepTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDeployStepTasksRequest&;
    using Resp = ListDeployStepTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListDeployStepTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ControlcenterClient::ListDeployStepTasksOutcomeCallable ControlcenterClient::ListDeployStepTasksCallable(const ListDeployStepTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDeployStepTasksOutcome>>();
    ListDeployStepTasksAsync(
    request,
    [prom](
        const ControlcenterClient*,
        const ListDeployStepTasksRequest&,
        ListDeployStepTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ControlcenterClient::UpdateAccountFactoryBaselineOutcome ControlcenterClient::UpdateAccountFactoryBaseline(const UpdateAccountFactoryBaselineRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAccountFactoryBaseline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAccountFactoryBaselineResponse rsp = UpdateAccountFactoryBaselineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAccountFactoryBaselineOutcome(rsp);
        else
            return UpdateAccountFactoryBaselineOutcome(o.GetError());
    }
    else
    {
        return UpdateAccountFactoryBaselineOutcome(outcome.GetError());
    }
}

void ControlcenterClient::UpdateAccountFactoryBaselineAsync(const UpdateAccountFactoryBaselineRequest& request, const UpdateAccountFactoryBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAccountFactoryBaselineRequest&;
    using Resp = UpdateAccountFactoryBaselineResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAccountFactoryBaseline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ControlcenterClient::UpdateAccountFactoryBaselineOutcomeCallable ControlcenterClient::UpdateAccountFactoryBaselineCallable(const UpdateAccountFactoryBaselineRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAccountFactoryBaselineOutcome>>();
    UpdateAccountFactoryBaselineAsync(
    request,
    [prom](
        const ControlcenterClient*,
        const UpdateAccountFactoryBaselineRequest&,
        UpdateAccountFactoryBaselineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

