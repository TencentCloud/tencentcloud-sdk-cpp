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

#include <tencentcloud/yunjing/v20180228/YunjingClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Yunjing::V20180228;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-02-28";
    const string ENDPOINT = "yunjing.tencentcloudapi.com";
}

YunjingClient::YunjingClient(const Credential &credential, const string &region) :
    YunjingClient(credential, region, ClientProfile())
{
}

YunjingClient::YunjingClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


YunjingClient::AddLoginWhiteListOutcome YunjingClient::AddLoginWhiteList(const AddLoginWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "AddLoginWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddLoginWhiteListResponse rsp = AddLoginWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddLoginWhiteListOutcome(rsp);
        else
            return AddLoginWhiteListOutcome(o.GetError());
    }
    else
    {
        return AddLoginWhiteListOutcome(outcome.GetError());
    }
}

void YunjingClient::AddLoginWhiteListAsync(const AddLoginWhiteListRequest& request, const AddLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddLoginWhiteListRequest&;
    using Resp = AddLoginWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "AddLoginWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::AddLoginWhiteListOutcomeCallable YunjingClient::AddLoginWhiteListCallable(const AddLoginWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddLoginWhiteListOutcome>>();
    AddLoginWhiteListAsync(
    request,
    [prom](
        const YunjingClient*,
        const AddLoginWhiteListRequest&,
        AddLoginWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::AddMachineTagOutcome YunjingClient::AddMachineTag(const AddMachineTagRequest &request)
{
    auto outcome = MakeRequest(request, "AddMachineTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddMachineTagResponse rsp = AddMachineTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddMachineTagOutcome(rsp);
        else
            return AddMachineTagOutcome(o.GetError());
    }
    else
    {
        return AddMachineTagOutcome(outcome.GetError());
    }
}

void YunjingClient::AddMachineTagAsync(const AddMachineTagRequest& request, const AddMachineTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddMachineTagRequest&;
    using Resp = AddMachineTagResponse;

    DoRequestAsync<Req, Resp>(
        "AddMachineTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::AddMachineTagOutcomeCallable YunjingClient::AddMachineTagCallable(const AddMachineTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddMachineTagOutcome>>();
    AddMachineTagAsync(
    request,
    [prom](
        const YunjingClient*,
        const AddMachineTagRequest&,
        AddMachineTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::CloseProVersionOutcome YunjingClient::CloseProVersion(const CloseProVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CloseProVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseProVersionResponse rsp = CloseProVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseProVersionOutcome(rsp);
        else
            return CloseProVersionOutcome(o.GetError());
    }
    else
    {
        return CloseProVersionOutcome(outcome.GetError());
    }
}

void YunjingClient::CloseProVersionAsync(const CloseProVersionRequest& request, const CloseProVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseProVersionRequest&;
    using Resp = CloseProVersionResponse;

    DoRequestAsync<Req, Resp>(
        "CloseProVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::CloseProVersionOutcomeCallable YunjingClient::CloseProVersionCallable(const CloseProVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseProVersionOutcome>>();
    CloseProVersionAsync(
    request,
    [prom](
        const YunjingClient*,
        const CloseProVersionRequest&,
        CloseProVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::CreateBaselineStrategyOutcome YunjingClient::CreateBaselineStrategy(const CreateBaselineStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBaselineStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBaselineStrategyResponse rsp = CreateBaselineStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBaselineStrategyOutcome(rsp);
        else
            return CreateBaselineStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateBaselineStrategyOutcome(outcome.GetError());
    }
}

void YunjingClient::CreateBaselineStrategyAsync(const CreateBaselineStrategyRequest& request, const CreateBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBaselineStrategyRequest&;
    using Resp = CreateBaselineStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBaselineStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::CreateBaselineStrategyOutcomeCallable YunjingClient::CreateBaselineStrategyCallable(const CreateBaselineStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBaselineStrategyOutcome>>();
    CreateBaselineStrategyAsync(
    request,
    [prom](
        const YunjingClient*,
        const CreateBaselineStrategyRequest&,
        CreateBaselineStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::CreateOpenPortTaskOutcome YunjingClient::CreateOpenPortTask(const CreateOpenPortTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpenPortTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpenPortTaskResponse rsp = CreateOpenPortTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpenPortTaskOutcome(rsp);
        else
            return CreateOpenPortTaskOutcome(o.GetError());
    }
    else
    {
        return CreateOpenPortTaskOutcome(outcome.GetError());
    }
}

void YunjingClient::CreateOpenPortTaskAsync(const CreateOpenPortTaskRequest& request, const CreateOpenPortTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOpenPortTaskRequest&;
    using Resp = CreateOpenPortTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOpenPortTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::CreateOpenPortTaskOutcomeCallable YunjingClient::CreateOpenPortTaskCallable(const CreateOpenPortTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOpenPortTaskOutcome>>();
    CreateOpenPortTaskAsync(
    request,
    [prom](
        const YunjingClient*,
        const CreateOpenPortTaskRequest&,
        CreateOpenPortTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::CreateProcessTaskOutcome YunjingClient::CreateProcessTask(const CreateProcessTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProcessTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProcessTaskResponse rsp = CreateProcessTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProcessTaskOutcome(rsp);
        else
            return CreateProcessTaskOutcome(o.GetError());
    }
    else
    {
        return CreateProcessTaskOutcome(outcome.GetError());
    }
}

void YunjingClient::CreateProcessTaskAsync(const CreateProcessTaskRequest& request, const CreateProcessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProcessTaskRequest&;
    using Resp = CreateProcessTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProcessTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::CreateProcessTaskOutcomeCallable YunjingClient::CreateProcessTaskCallable(const CreateProcessTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProcessTaskOutcome>>();
    CreateProcessTaskAsync(
    request,
    [prom](
        const YunjingClient*,
        const CreateProcessTaskRequest&,
        CreateProcessTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::CreateUsualLoginPlacesOutcome YunjingClient::CreateUsualLoginPlaces(const CreateUsualLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUsualLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUsualLoginPlacesResponse rsp = CreateUsualLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUsualLoginPlacesOutcome(rsp);
        else
            return CreateUsualLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return CreateUsualLoginPlacesOutcome(outcome.GetError());
    }
}

void YunjingClient::CreateUsualLoginPlacesAsync(const CreateUsualLoginPlacesRequest& request, const CreateUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUsualLoginPlacesRequest&;
    using Resp = CreateUsualLoginPlacesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUsualLoginPlaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::CreateUsualLoginPlacesOutcomeCallable YunjingClient::CreateUsualLoginPlacesCallable(const CreateUsualLoginPlacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUsualLoginPlacesOutcome>>();
    CreateUsualLoginPlacesAsync(
    request,
    [prom](
        const YunjingClient*,
        const CreateUsualLoginPlacesRequest&,
        CreateUsualLoginPlacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeleteAttackLogsOutcome YunjingClient::DeleteAttackLogs(const DeleteAttackLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAttackLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAttackLogsResponse rsp = DeleteAttackLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAttackLogsOutcome(rsp);
        else
            return DeleteAttackLogsOutcome(o.GetError());
    }
    else
    {
        return DeleteAttackLogsOutcome(outcome.GetError());
    }
}

void YunjingClient::DeleteAttackLogsAsync(const DeleteAttackLogsRequest& request, const DeleteAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAttackLogsRequest&;
    using Resp = DeleteAttackLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAttackLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeleteAttackLogsOutcomeCallable YunjingClient::DeleteAttackLogsCallable(const DeleteAttackLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAttackLogsOutcome>>();
    DeleteAttackLogsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeleteAttackLogsRequest&,
        DeleteAttackLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeleteBashEventsOutcome YunjingClient::DeleteBashEvents(const DeleteBashEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBashEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBashEventsResponse rsp = DeleteBashEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBashEventsOutcome(rsp);
        else
            return DeleteBashEventsOutcome(o.GetError());
    }
    else
    {
        return DeleteBashEventsOutcome(outcome.GetError());
    }
}

void YunjingClient::DeleteBashEventsAsync(const DeleteBashEventsRequest& request, const DeleteBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBashEventsRequest&;
    using Resp = DeleteBashEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBashEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeleteBashEventsOutcomeCallable YunjingClient::DeleteBashEventsCallable(const DeleteBashEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBashEventsOutcome>>();
    DeleteBashEventsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeleteBashEventsRequest&,
        DeleteBashEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeleteBashRulesOutcome YunjingClient::DeleteBashRules(const DeleteBashRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBashRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBashRulesResponse rsp = DeleteBashRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBashRulesOutcome(rsp);
        else
            return DeleteBashRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteBashRulesOutcome(outcome.GetError());
    }
}

void YunjingClient::DeleteBashRulesAsync(const DeleteBashRulesRequest& request, const DeleteBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBashRulesRequest&;
    using Resp = DeleteBashRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBashRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeleteBashRulesOutcomeCallable YunjingClient::DeleteBashRulesCallable(const DeleteBashRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBashRulesOutcome>>();
    DeleteBashRulesAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeleteBashRulesRequest&,
        DeleteBashRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeleteBruteAttacksOutcome YunjingClient::DeleteBruteAttacks(const DeleteBruteAttacksRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBruteAttacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBruteAttacksResponse rsp = DeleteBruteAttacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBruteAttacksOutcome(rsp);
        else
            return DeleteBruteAttacksOutcome(o.GetError());
    }
    else
    {
        return DeleteBruteAttacksOutcome(outcome.GetError());
    }
}

void YunjingClient::DeleteBruteAttacksAsync(const DeleteBruteAttacksRequest& request, const DeleteBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBruteAttacksRequest&;
    using Resp = DeleteBruteAttacksResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBruteAttacks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeleteBruteAttacksOutcomeCallable YunjingClient::DeleteBruteAttacksCallable(const DeleteBruteAttacksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBruteAttacksOutcome>>();
    DeleteBruteAttacksAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeleteBruteAttacksRequest&,
        DeleteBruteAttacksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeleteLoginWhiteListOutcome YunjingClient::DeleteLoginWhiteList(const DeleteLoginWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoginWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoginWhiteListResponse rsp = DeleteLoginWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoginWhiteListOutcome(rsp);
        else
            return DeleteLoginWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteLoginWhiteListOutcome(outcome.GetError());
    }
}

void YunjingClient::DeleteLoginWhiteListAsync(const DeleteLoginWhiteListRequest& request, const DeleteLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLoginWhiteListRequest&;
    using Resp = DeleteLoginWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLoginWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeleteLoginWhiteListOutcomeCallable YunjingClient::DeleteLoginWhiteListCallable(const DeleteLoginWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLoginWhiteListOutcome>>();
    DeleteLoginWhiteListAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeleteLoginWhiteListRequest&,
        DeleteLoginWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeleteMachineOutcome YunjingClient::DeleteMachine(const DeleteMachineRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMachine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMachineResponse rsp = DeleteMachineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMachineOutcome(rsp);
        else
            return DeleteMachineOutcome(o.GetError());
    }
    else
    {
        return DeleteMachineOutcome(outcome.GetError());
    }
}

void YunjingClient::DeleteMachineAsync(const DeleteMachineRequest& request, const DeleteMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMachineRequest&;
    using Resp = DeleteMachineResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMachine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeleteMachineOutcomeCallable YunjingClient::DeleteMachineCallable(const DeleteMachineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMachineOutcome>>();
    DeleteMachineAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeleteMachineRequest&,
        DeleteMachineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeleteMachineTagOutcome YunjingClient::DeleteMachineTag(const DeleteMachineTagRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMachineTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMachineTagResponse rsp = DeleteMachineTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMachineTagOutcome(rsp);
        else
            return DeleteMachineTagOutcome(o.GetError());
    }
    else
    {
        return DeleteMachineTagOutcome(outcome.GetError());
    }
}

void YunjingClient::DeleteMachineTagAsync(const DeleteMachineTagRequest& request, const DeleteMachineTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMachineTagRequest&;
    using Resp = DeleteMachineTagResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMachineTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeleteMachineTagOutcomeCallable YunjingClient::DeleteMachineTagCallable(const DeleteMachineTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMachineTagOutcome>>();
    DeleteMachineTagAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeleteMachineTagRequest&,
        DeleteMachineTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeleteMaliciousRequestsOutcome YunjingClient::DeleteMaliciousRequests(const DeleteMaliciousRequestsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMaliciousRequests");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMaliciousRequestsResponse rsp = DeleteMaliciousRequestsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMaliciousRequestsOutcome(rsp);
        else
            return DeleteMaliciousRequestsOutcome(o.GetError());
    }
    else
    {
        return DeleteMaliciousRequestsOutcome(outcome.GetError());
    }
}

void YunjingClient::DeleteMaliciousRequestsAsync(const DeleteMaliciousRequestsRequest& request, const DeleteMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMaliciousRequestsRequest&;
    using Resp = DeleteMaliciousRequestsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMaliciousRequests", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeleteMaliciousRequestsOutcomeCallable YunjingClient::DeleteMaliciousRequestsCallable(const DeleteMaliciousRequestsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMaliciousRequestsOutcome>>();
    DeleteMaliciousRequestsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeleteMaliciousRequestsRequest&,
        DeleteMaliciousRequestsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeleteMalwaresOutcome YunjingClient::DeleteMalwares(const DeleteMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMalwaresResponse rsp = DeleteMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMalwaresOutcome(rsp);
        else
            return DeleteMalwaresOutcome(o.GetError());
    }
    else
    {
        return DeleteMalwaresOutcome(outcome.GetError());
    }
}

void YunjingClient::DeleteMalwaresAsync(const DeleteMalwaresRequest& request, const DeleteMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMalwaresRequest&;
    using Resp = DeleteMalwaresResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMalwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeleteMalwaresOutcomeCallable YunjingClient::DeleteMalwaresCallable(const DeleteMalwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMalwaresOutcome>>();
    DeleteMalwaresAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeleteMalwaresRequest&,
        DeleteMalwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeleteNonlocalLoginPlacesOutcome YunjingClient::DeleteNonlocalLoginPlaces(const DeleteNonlocalLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNonlocalLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNonlocalLoginPlacesResponse rsp = DeleteNonlocalLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNonlocalLoginPlacesOutcome(rsp);
        else
            return DeleteNonlocalLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return DeleteNonlocalLoginPlacesOutcome(outcome.GetError());
    }
}

void YunjingClient::DeleteNonlocalLoginPlacesAsync(const DeleteNonlocalLoginPlacesRequest& request, const DeleteNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNonlocalLoginPlacesRequest&;
    using Resp = DeleteNonlocalLoginPlacesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNonlocalLoginPlaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeleteNonlocalLoginPlacesOutcomeCallable YunjingClient::DeleteNonlocalLoginPlacesCallable(const DeleteNonlocalLoginPlacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNonlocalLoginPlacesOutcome>>();
    DeleteNonlocalLoginPlacesAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeleteNonlocalLoginPlacesRequest&,
        DeleteNonlocalLoginPlacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeletePrivilegeEventsOutcome YunjingClient::DeletePrivilegeEvents(const DeletePrivilegeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrivilegeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrivilegeEventsResponse rsp = DeletePrivilegeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrivilegeEventsOutcome(rsp);
        else
            return DeletePrivilegeEventsOutcome(o.GetError());
    }
    else
    {
        return DeletePrivilegeEventsOutcome(outcome.GetError());
    }
}

void YunjingClient::DeletePrivilegeEventsAsync(const DeletePrivilegeEventsRequest& request, const DeletePrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrivilegeEventsRequest&;
    using Resp = DeletePrivilegeEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrivilegeEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeletePrivilegeEventsOutcomeCallable YunjingClient::DeletePrivilegeEventsCallable(const DeletePrivilegeEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrivilegeEventsOutcome>>();
    DeletePrivilegeEventsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeletePrivilegeEventsRequest&,
        DeletePrivilegeEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeletePrivilegeRulesOutcome YunjingClient::DeletePrivilegeRules(const DeletePrivilegeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrivilegeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrivilegeRulesResponse rsp = DeletePrivilegeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrivilegeRulesOutcome(rsp);
        else
            return DeletePrivilegeRulesOutcome(o.GetError());
    }
    else
    {
        return DeletePrivilegeRulesOutcome(outcome.GetError());
    }
}

void YunjingClient::DeletePrivilegeRulesAsync(const DeletePrivilegeRulesRequest& request, const DeletePrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrivilegeRulesRequest&;
    using Resp = DeletePrivilegeRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrivilegeRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeletePrivilegeRulesOutcomeCallable YunjingClient::DeletePrivilegeRulesCallable(const DeletePrivilegeRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrivilegeRulesOutcome>>();
    DeletePrivilegeRulesAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeletePrivilegeRulesRequest&,
        DeletePrivilegeRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeleteReverseShellEventsOutcome YunjingClient::DeleteReverseShellEvents(const DeleteReverseShellEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReverseShellEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReverseShellEventsResponse rsp = DeleteReverseShellEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReverseShellEventsOutcome(rsp);
        else
            return DeleteReverseShellEventsOutcome(o.GetError());
    }
    else
    {
        return DeleteReverseShellEventsOutcome(outcome.GetError());
    }
}

void YunjingClient::DeleteReverseShellEventsAsync(const DeleteReverseShellEventsRequest& request, const DeleteReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReverseShellEventsRequest&;
    using Resp = DeleteReverseShellEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReverseShellEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeleteReverseShellEventsOutcomeCallable YunjingClient::DeleteReverseShellEventsCallable(const DeleteReverseShellEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReverseShellEventsOutcome>>();
    DeleteReverseShellEventsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeleteReverseShellEventsRequest&,
        DeleteReverseShellEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeleteReverseShellRulesOutcome YunjingClient::DeleteReverseShellRules(const DeleteReverseShellRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReverseShellRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReverseShellRulesResponse rsp = DeleteReverseShellRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReverseShellRulesOutcome(rsp);
        else
            return DeleteReverseShellRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteReverseShellRulesOutcome(outcome.GetError());
    }
}

void YunjingClient::DeleteReverseShellRulesAsync(const DeleteReverseShellRulesRequest& request, const DeleteReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReverseShellRulesRequest&;
    using Resp = DeleteReverseShellRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReverseShellRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeleteReverseShellRulesOutcomeCallable YunjingClient::DeleteReverseShellRulesCallable(const DeleteReverseShellRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReverseShellRulesOutcome>>();
    DeleteReverseShellRulesAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeleteReverseShellRulesRequest&,
        DeleteReverseShellRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeleteTagsOutcome YunjingClient::DeleteTags(const DeleteTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTagsResponse rsp = DeleteTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTagsOutcome(rsp);
        else
            return DeleteTagsOutcome(o.GetError());
    }
    else
    {
        return DeleteTagsOutcome(outcome.GetError());
    }
}

void YunjingClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTagsRequest&;
    using Resp = DeleteTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeleteTagsOutcomeCallable YunjingClient::DeleteTagsCallable(const DeleteTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTagsOutcome>>();
    DeleteTagsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeleteTagsRequest&,
        DeleteTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DeleteUsualLoginPlacesOutcome YunjingClient::DeleteUsualLoginPlaces(const DeleteUsualLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUsualLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUsualLoginPlacesResponse rsp = DeleteUsualLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUsualLoginPlacesOutcome(rsp);
        else
            return DeleteUsualLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return DeleteUsualLoginPlacesOutcome(outcome.GetError());
    }
}

void YunjingClient::DeleteUsualLoginPlacesAsync(const DeleteUsualLoginPlacesRequest& request, const DeleteUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUsualLoginPlacesRequest&;
    using Resp = DeleteUsualLoginPlacesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUsualLoginPlaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DeleteUsualLoginPlacesOutcomeCallable YunjingClient::DeleteUsualLoginPlacesCallable(const DeleteUsualLoginPlacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUsualLoginPlacesOutcome>>();
    DeleteUsualLoginPlacesAsync(
    request,
    [prom](
        const YunjingClient*,
        const DeleteUsualLoginPlacesRequest&,
        DeleteUsualLoginPlacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeAccountStatisticsOutcome YunjingClient::DescribeAccountStatistics(const DescribeAccountStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountStatisticsResponse rsp = DescribeAccountStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountStatisticsOutcome(rsp);
        else
            return DescribeAccountStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountStatisticsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeAccountStatisticsAsync(const DescribeAccountStatisticsRequest& request, const DescribeAccountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountStatisticsRequest&;
    using Resp = DescribeAccountStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeAccountStatisticsOutcomeCallable YunjingClient::DescribeAccountStatisticsCallable(const DescribeAccountStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountStatisticsOutcome>>();
    DescribeAccountStatisticsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeAccountStatisticsRequest&,
        DescribeAccountStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeAccountsOutcome YunjingClient::DescribeAccounts(const DescribeAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountsResponse rsp = DescribeAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountsOutcome(rsp);
        else
            return DescribeAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountsRequest&;
    using Resp = DescribeAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeAccountsOutcomeCallable YunjingClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountsOutcome>>();
    DescribeAccountsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeAccountsRequest&,
        DescribeAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeAgentVulsOutcome YunjingClient::DescribeAgentVuls(const DescribeAgentVulsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentVuls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentVulsResponse rsp = DescribeAgentVulsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentVulsOutcome(rsp);
        else
            return DescribeAgentVulsOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentVulsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeAgentVulsAsync(const DescribeAgentVulsRequest& request, const DescribeAgentVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentVulsRequest&;
    using Resp = DescribeAgentVulsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentVuls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeAgentVulsOutcomeCallable YunjingClient::DescribeAgentVulsCallable(const DescribeAgentVulsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentVulsOutcome>>();
    DescribeAgentVulsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeAgentVulsRequest&,
        DescribeAgentVulsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeAlarmAttributeOutcome YunjingClient::DescribeAlarmAttribute(const DescribeAlarmAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmAttributeResponse rsp = DescribeAlarmAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmAttributeOutcome(rsp);
        else
            return DescribeAlarmAttributeOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmAttributeOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeAlarmAttributeAsync(const DescribeAlarmAttributeRequest& request, const DescribeAlarmAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmAttributeRequest&;
    using Resp = DescribeAlarmAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeAlarmAttributeOutcomeCallable YunjingClient::DescribeAlarmAttributeCallable(const DescribeAlarmAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmAttributeOutcome>>();
    DescribeAlarmAttributeAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeAlarmAttributeRequest&,
        DescribeAlarmAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeAttackLogInfoOutcome YunjingClient::DescribeAttackLogInfo(const DescribeAttackLogInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackLogInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackLogInfoResponse rsp = DescribeAttackLogInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackLogInfoOutcome(rsp);
        else
            return DescribeAttackLogInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackLogInfoOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeAttackLogInfoAsync(const DescribeAttackLogInfoRequest& request, const DescribeAttackLogInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAttackLogInfoRequest&;
    using Resp = DescribeAttackLogInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAttackLogInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeAttackLogInfoOutcomeCallable YunjingClient::DescribeAttackLogInfoCallable(const DescribeAttackLogInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAttackLogInfoOutcome>>();
    DescribeAttackLogInfoAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeAttackLogInfoRequest&,
        DescribeAttackLogInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeAttackLogsOutcome YunjingClient::DescribeAttackLogs(const DescribeAttackLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackLogsResponse rsp = DescribeAttackLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackLogsOutcome(rsp);
        else
            return DescribeAttackLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackLogsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeAttackLogsAsync(const DescribeAttackLogsRequest& request, const DescribeAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAttackLogsRequest&;
    using Resp = DescribeAttackLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAttackLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeAttackLogsOutcomeCallable YunjingClient::DescribeAttackLogsCallable(const DescribeAttackLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAttackLogsOutcome>>();
    DescribeAttackLogsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeAttackLogsRequest&,
        DescribeAttackLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeBashEventsOutcome YunjingClient::DescribeBashEvents(const DescribeBashEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBashEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBashEventsResponse rsp = DescribeBashEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBashEventsOutcome(rsp);
        else
            return DescribeBashEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeBashEventsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeBashEventsAsync(const DescribeBashEventsRequest& request, const DescribeBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBashEventsRequest&;
    using Resp = DescribeBashEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBashEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeBashEventsOutcomeCallable YunjingClient::DescribeBashEventsCallable(const DescribeBashEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBashEventsOutcome>>();
    DescribeBashEventsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeBashEventsRequest&,
        DescribeBashEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeBashRulesOutcome YunjingClient::DescribeBashRules(const DescribeBashRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBashRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBashRulesResponse rsp = DescribeBashRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBashRulesOutcome(rsp);
        else
            return DescribeBashRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeBashRulesOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeBashRulesAsync(const DescribeBashRulesRequest& request, const DescribeBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBashRulesRequest&;
    using Resp = DescribeBashRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBashRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeBashRulesOutcomeCallable YunjingClient::DescribeBashRulesCallable(const DescribeBashRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBashRulesOutcome>>();
    DescribeBashRulesAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeBashRulesRequest&,
        DescribeBashRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeBruteAttacksOutcome YunjingClient::DescribeBruteAttacks(const DescribeBruteAttacksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBruteAttacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBruteAttacksResponse rsp = DescribeBruteAttacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBruteAttacksOutcome(rsp);
        else
            return DescribeBruteAttacksOutcome(o.GetError());
    }
    else
    {
        return DescribeBruteAttacksOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeBruteAttacksAsync(const DescribeBruteAttacksRequest& request, const DescribeBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBruteAttacksRequest&;
    using Resp = DescribeBruteAttacksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBruteAttacks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeBruteAttacksOutcomeCallable YunjingClient::DescribeBruteAttacksCallable(const DescribeBruteAttacksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBruteAttacksOutcome>>();
    DescribeBruteAttacksAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeBruteAttacksRequest&,
        DescribeBruteAttacksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeComponentInfoOutcome YunjingClient::DescribeComponentInfo(const DescribeComponentInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComponentInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComponentInfoResponse rsp = DescribeComponentInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComponentInfoOutcome(rsp);
        else
            return DescribeComponentInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeComponentInfoOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeComponentInfoAsync(const DescribeComponentInfoRequest& request, const DescribeComponentInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComponentInfoRequest&;
    using Resp = DescribeComponentInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComponentInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeComponentInfoOutcomeCallable YunjingClient::DescribeComponentInfoCallable(const DescribeComponentInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComponentInfoOutcome>>();
    DescribeComponentInfoAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeComponentInfoRequest&,
        DescribeComponentInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeComponentStatisticsOutcome YunjingClient::DescribeComponentStatistics(const DescribeComponentStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComponentStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComponentStatisticsResponse rsp = DescribeComponentStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComponentStatisticsOutcome(rsp);
        else
            return DescribeComponentStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeComponentStatisticsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeComponentStatisticsAsync(const DescribeComponentStatisticsRequest& request, const DescribeComponentStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComponentStatisticsRequest&;
    using Resp = DescribeComponentStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComponentStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeComponentStatisticsOutcomeCallable YunjingClient::DescribeComponentStatisticsCallable(const DescribeComponentStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComponentStatisticsOutcome>>();
    DescribeComponentStatisticsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeComponentStatisticsRequest&,
        DescribeComponentStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeComponentsOutcome YunjingClient::DescribeComponents(const DescribeComponentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComponents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComponentsResponse rsp = DescribeComponentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComponentsOutcome(rsp);
        else
            return DescribeComponentsOutcome(o.GetError());
    }
    else
    {
        return DescribeComponentsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeComponentsAsync(const DescribeComponentsRequest& request, const DescribeComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComponentsRequest&;
    using Resp = DescribeComponentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComponents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeComponentsOutcomeCallable YunjingClient::DescribeComponentsCallable(const DescribeComponentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComponentsOutcome>>();
    DescribeComponentsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeComponentsRequest&,
        DescribeComponentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeHistoryAccountsOutcome YunjingClient::DescribeHistoryAccounts(const DescribeHistoryAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHistoryAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHistoryAccountsResponse rsp = DescribeHistoryAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHistoryAccountsOutcome(rsp);
        else
            return DescribeHistoryAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeHistoryAccountsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeHistoryAccountsAsync(const DescribeHistoryAccountsRequest& request, const DescribeHistoryAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHistoryAccountsRequest&;
    using Resp = DescribeHistoryAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHistoryAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeHistoryAccountsOutcomeCallable YunjingClient::DescribeHistoryAccountsCallable(const DescribeHistoryAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHistoryAccountsOutcome>>();
    DescribeHistoryAccountsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeHistoryAccountsRequest&,
        DescribeHistoryAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeImpactedHostsOutcome YunjingClient::DescribeImpactedHosts(const DescribeImpactedHostsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImpactedHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImpactedHostsResponse rsp = DescribeImpactedHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImpactedHostsOutcome(rsp);
        else
            return DescribeImpactedHostsOutcome(o.GetError());
    }
    else
    {
        return DescribeImpactedHostsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeImpactedHostsAsync(const DescribeImpactedHostsRequest& request, const DescribeImpactedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImpactedHostsRequest&;
    using Resp = DescribeImpactedHostsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImpactedHosts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeImpactedHostsOutcomeCallable YunjingClient::DescribeImpactedHostsCallable(const DescribeImpactedHostsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImpactedHostsOutcome>>();
    DescribeImpactedHostsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeImpactedHostsRequest&,
        DescribeImpactedHostsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeLoginWhiteListOutcome YunjingClient::DescribeLoginWhiteList(const DescribeLoginWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoginWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoginWhiteListResponse rsp = DescribeLoginWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoginWhiteListOutcome(rsp);
        else
            return DescribeLoginWhiteListOutcome(o.GetError());
    }
    else
    {
        return DescribeLoginWhiteListOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeLoginWhiteListAsync(const DescribeLoginWhiteListRequest& request, const DescribeLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoginWhiteListRequest&;
    using Resp = DescribeLoginWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoginWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeLoginWhiteListOutcomeCallable YunjingClient::DescribeLoginWhiteListCallable(const DescribeLoginWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoginWhiteListOutcome>>();
    DescribeLoginWhiteListAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeLoginWhiteListRequest&,
        DescribeLoginWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeMachineInfoOutcome YunjingClient::DescribeMachineInfo(const DescribeMachineInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineInfoResponse rsp = DescribeMachineInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineInfoOutcome(rsp);
        else
            return DescribeMachineInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineInfoOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeMachineInfoAsync(const DescribeMachineInfoRequest& request, const DescribeMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineInfoRequest&;
    using Resp = DescribeMachineInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeMachineInfoOutcomeCallable YunjingClient::DescribeMachineInfoCallable(const DescribeMachineInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineInfoOutcome>>();
    DescribeMachineInfoAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeMachineInfoRequest&,
        DescribeMachineInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeMachinesOutcome YunjingClient::DescribeMachines(const DescribeMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachinesResponse rsp = DescribeMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachinesOutcome(rsp);
        else
            return DescribeMachinesOutcome(o.GetError());
    }
    else
    {
        return DescribeMachinesOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeMachinesAsync(const DescribeMachinesRequest& request, const DescribeMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachinesRequest&;
    using Resp = DescribeMachinesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeMachinesOutcomeCallable YunjingClient::DescribeMachinesCallable(const DescribeMachinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachinesOutcome>>();
    DescribeMachinesAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeMachinesRequest&,
        DescribeMachinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeMaliciousRequestsOutcome YunjingClient::DescribeMaliciousRequests(const DescribeMaliciousRequestsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaliciousRequests");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaliciousRequestsResponse rsp = DescribeMaliciousRequestsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaliciousRequestsOutcome(rsp);
        else
            return DescribeMaliciousRequestsOutcome(o.GetError());
    }
    else
    {
        return DescribeMaliciousRequestsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeMaliciousRequestsAsync(const DescribeMaliciousRequestsRequest& request, const DescribeMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMaliciousRequestsRequest&;
    using Resp = DescribeMaliciousRequestsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMaliciousRequests", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeMaliciousRequestsOutcomeCallable YunjingClient::DescribeMaliciousRequestsCallable(const DescribeMaliciousRequestsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMaliciousRequestsOutcome>>();
    DescribeMaliciousRequestsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeMaliciousRequestsRequest&,
        DescribeMaliciousRequestsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeMalwaresOutcome YunjingClient::DescribeMalwares(const DescribeMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwaresResponse rsp = DescribeMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwaresOutcome(rsp);
        else
            return DescribeMalwaresOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwaresOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeMalwaresAsync(const DescribeMalwaresRequest& request, const DescribeMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMalwaresRequest&;
    using Resp = DescribeMalwaresResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMalwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeMalwaresOutcomeCallable YunjingClient::DescribeMalwaresCallable(const DescribeMalwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMalwaresOutcome>>();
    DescribeMalwaresAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeMalwaresRequest&,
        DescribeMalwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeNonlocalLoginPlacesOutcome YunjingClient::DescribeNonlocalLoginPlaces(const DescribeNonlocalLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNonlocalLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNonlocalLoginPlacesResponse rsp = DescribeNonlocalLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNonlocalLoginPlacesOutcome(rsp);
        else
            return DescribeNonlocalLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return DescribeNonlocalLoginPlacesOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeNonlocalLoginPlacesAsync(const DescribeNonlocalLoginPlacesRequest& request, const DescribeNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNonlocalLoginPlacesRequest&;
    using Resp = DescribeNonlocalLoginPlacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNonlocalLoginPlaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeNonlocalLoginPlacesOutcomeCallable YunjingClient::DescribeNonlocalLoginPlacesCallable(const DescribeNonlocalLoginPlacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNonlocalLoginPlacesOutcome>>();
    DescribeNonlocalLoginPlacesAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeNonlocalLoginPlacesRequest&,
        DescribeNonlocalLoginPlacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeOpenPortStatisticsOutcome YunjingClient::DescribeOpenPortStatistics(const DescribeOpenPortStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpenPortStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpenPortStatisticsResponse rsp = DescribeOpenPortStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpenPortStatisticsOutcome(rsp);
        else
            return DescribeOpenPortStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeOpenPortStatisticsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeOpenPortStatisticsAsync(const DescribeOpenPortStatisticsRequest& request, const DescribeOpenPortStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOpenPortStatisticsRequest&;
    using Resp = DescribeOpenPortStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOpenPortStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeOpenPortStatisticsOutcomeCallable YunjingClient::DescribeOpenPortStatisticsCallable(const DescribeOpenPortStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOpenPortStatisticsOutcome>>();
    DescribeOpenPortStatisticsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeOpenPortStatisticsRequest&,
        DescribeOpenPortStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeOpenPortTaskStatusOutcome YunjingClient::DescribeOpenPortTaskStatus(const DescribeOpenPortTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpenPortTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpenPortTaskStatusResponse rsp = DescribeOpenPortTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpenPortTaskStatusOutcome(rsp);
        else
            return DescribeOpenPortTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeOpenPortTaskStatusOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeOpenPortTaskStatusAsync(const DescribeOpenPortTaskStatusRequest& request, const DescribeOpenPortTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOpenPortTaskStatusRequest&;
    using Resp = DescribeOpenPortTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOpenPortTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeOpenPortTaskStatusOutcomeCallable YunjingClient::DescribeOpenPortTaskStatusCallable(const DescribeOpenPortTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOpenPortTaskStatusOutcome>>();
    DescribeOpenPortTaskStatusAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeOpenPortTaskStatusRequest&,
        DescribeOpenPortTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeOpenPortsOutcome YunjingClient::DescribeOpenPorts(const DescribeOpenPortsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpenPorts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpenPortsResponse rsp = DescribeOpenPortsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpenPortsOutcome(rsp);
        else
            return DescribeOpenPortsOutcome(o.GetError());
    }
    else
    {
        return DescribeOpenPortsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeOpenPortsAsync(const DescribeOpenPortsRequest& request, const DescribeOpenPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOpenPortsRequest&;
    using Resp = DescribeOpenPortsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOpenPorts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeOpenPortsOutcomeCallable YunjingClient::DescribeOpenPortsCallable(const DescribeOpenPortsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOpenPortsOutcome>>();
    DescribeOpenPortsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeOpenPortsRequest&,
        DescribeOpenPortsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeOverviewStatisticsOutcome YunjingClient::DescribeOverviewStatistics(const DescribeOverviewStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewStatisticsResponse rsp = DescribeOverviewStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewStatisticsOutcome(rsp);
        else
            return DescribeOverviewStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewStatisticsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeOverviewStatisticsAsync(const DescribeOverviewStatisticsRequest& request, const DescribeOverviewStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOverviewStatisticsRequest&;
    using Resp = DescribeOverviewStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOverviewStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeOverviewStatisticsOutcomeCallable YunjingClient::DescribeOverviewStatisticsCallable(const DescribeOverviewStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOverviewStatisticsOutcome>>();
    DescribeOverviewStatisticsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeOverviewStatisticsRequest&,
        DescribeOverviewStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribePrivilegeEventsOutcome YunjingClient::DescribePrivilegeEvents(const DescribePrivilegeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivilegeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivilegeEventsResponse rsp = DescribePrivilegeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivilegeEventsOutcome(rsp);
        else
            return DescribePrivilegeEventsOutcome(o.GetError());
    }
    else
    {
        return DescribePrivilegeEventsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribePrivilegeEventsAsync(const DescribePrivilegeEventsRequest& request, const DescribePrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivilegeEventsRequest&;
    using Resp = DescribePrivilegeEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivilegeEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribePrivilegeEventsOutcomeCallable YunjingClient::DescribePrivilegeEventsCallable(const DescribePrivilegeEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivilegeEventsOutcome>>();
    DescribePrivilegeEventsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribePrivilegeEventsRequest&,
        DescribePrivilegeEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribePrivilegeRulesOutcome YunjingClient::DescribePrivilegeRules(const DescribePrivilegeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivilegeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivilegeRulesResponse rsp = DescribePrivilegeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivilegeRulesOutcome(rsp);
        else
            return DescribePrivilegeRulesOutcome(o.GetError());
    }
    else
    {
        return DescribePrivilegeRulesOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribePrivilegeRulesAsync(const DescribePrivilegeRulesRequest& request, const DescribePrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivilegeRulesRequest&;
    using Resp = DescribePrivilegeRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivilegeRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribePrivilegeRulesOutcomeCallable YunjingClient::DescribePrivilegeRulesCallable(const DescribePrivilegeRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivilegeRulesOutcome>>();
    DescribePrivilegeRulesAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribePrivilegeRulesRequest&,
        DescribePrivilegeRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeProVersionInfoOutcome YunjingClient::DescribeProVersionInfo(const DescribeProVersionInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProVersionInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProVersionInfoResponse rsp = DescribeProVersionInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProVersionInfoOutcome(rsp);
        else
            return DescribeProVersionInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeProVersionInfoOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeProVersionInfoAsync(const DescribeProVersionInfoRequest& request, const DescribeProVersionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProVersionInfoRequest&;
    using Resp = DescribeProVersionInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProVersionInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeProVersionInfoOutcomeCallable YunjingClient::DescribeProVersionInfoCallable(const DescribeProVersionInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProVersionInfoOutcome>>();
    DescribeProVersionInfoAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeProVersionInfoRequest&,
        DescribeProVersionInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeProcessStatisticsOutcome YunjingClient::DescribeProcessStatistics(const DescribeProcessStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProcessStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProcessStatisticsResponse rsp = DescribeProcessStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProcessStatisticsOutcome(rsp);
        else
            return DescribeProcessStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeProcessStatisticsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeProcessStatisticsAsync(const DescribeProcessStatisticsRequest& request, const DescribeProcessStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProcessStatisticsRequest&;
    using Resp = DescribeProcessStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProcessStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeProcessStatisticsOutcomeCallable YunjingClient::DescribeProcessStatisticsCallable(const DescribeProcessStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProcessStatisticsOutcome>>();
    DescribeProcessStatisticsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeProcessStatisticsRequest&,
        DescribeProcessStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeProcessTaskStatusOutcome YunjingClient::DescribeProcessTaskStatus(const DescribeProcessTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProcessTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProcessTaskStatusResponse rsp = DescribeProcessTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProcessTaskStatusOutcome(rsp);
        else
            return DescribeProcessTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeProcessTaskStatusOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeProcessTaskStatusAsync(const DescribeProcessTaskStatusRequest& request, const DescribeProcessTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProcessTaskStatusRequest&;
    using Resp = DescribeProcessTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProcessTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeProcessTaskStatusOutcomeCallable YunjingClient::DescribeProcessTaskStatusCallable(const DescribeProcessTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProcessTaskStatusOutcome>>();
    DescribeProcessTaskStatusAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeProcessTaskStatusRequest&,
        DescribeProcessTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeProcessesOutcome YunjingClient::DescribeProcesses(const DescribeProcessesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProcesses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProcessesResponse rsp = DescribeProcessesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProcessesOutcome(rsp);
        else
            return DescribeProcessesOutcome(o.GetError());
    }
    else
    {
        return DescribeProcessesOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeProcessesAsync(const DescribeProcessesRequest& request, const DescribeProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProcessesRequest&;
    using Resp = DescribeProcessesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProcesses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeProcessesOutcomeCallable YunjingClient::DescribeProcessesCallable(const DescribeProcessesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProcessesOutcome>>();
    DescribeProcessesAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeProcessesRequest&,
        DescribeProcessesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeReverseShellEventsOutcome YunjingClient::DescribeReverseShellEvents(const DescribeReverseShellEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReverseShellEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReverseShellEventsResponse rsp = DescribeReverseShellEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReverseShellEventsOutcome(rsp);
        else
            return DescribeReverseShellEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeReverseShellEventsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeReverseShellEventsAsync(const DescribeReverseShellEventsRequest& request, const DescribeReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReverseShellEventsRequest&;
    using Resp = DescribeReverseShellEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReverseShellEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeReverseShellEventsOutcomeCallable YunjingClient::DescribeReverseShellEventsCallable(const DescribeReverseShellEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReverseShellEventsOutcome>>();
    DescribeReverseShellEventsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeReverseShellEventsRequest&,
        DescribeReverseShellEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeReverseShellRulesOutcome YunjingClient::DescribeReverseShellRules(const DescribeReverseShellRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReverseShellRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReverseShellRulesResponse rsp = DescribeReverseShellRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReverseShellRulesOutcome(rsp);
        else
            return DescribeReverseShellRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeReverseShellRulesOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeReverseShellRulesAsync(const DescribeReverseShellRulesRequest& request, const DescribeReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReverseShellRulesRequest&;
    using Resp = DescribeReverseShellRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReverseShellRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeReverseShellRulesOutcomeCallable YunjingClient::DescribeReverseShellRulesCallable(const DescribeReverseShellRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReverseShellRulesOutcome>>();
    DescribeReverseShellRulesAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeReverseShellRulesRequest&,
        DescribeReverseShellRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeSecurityDynamicsOutcome YunjingClient::DescribeSecurityDynamics(const DescribeSecurityDynamicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityDynamics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityDynamicsResponse rsp = DescribeSecurityDynamicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityDynamicsOutcome(rsp);
        else
            return DescribeSecurityDynamicsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityDynamicsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeSecurityDynamicsAsync(const DescribeSecurityDynamicsRequest& request, const DescribeSecurityDynamicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityDynamicsRequest&;
    using Resp = DescribeSecurityDynamicsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityDynamics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeSecurityDynamicsOutcomeCallable YunjingClient::DescribeSecurityDynamicsCallable(const DescribeSecurityDynamicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityDynamicsOutcome>>();
    DescribeSecurityDynamicsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeSecurityDynamicsRequest&,
        DescribeSecurityDynamicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeSecurityTrendsOutcome YunjingClient::DescribeSecurityTrends(const DescribeSecurityTrendsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityTrends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityTrendsResponse rsp = DescribeSecurityTrendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityTrendsOutcome(rsp);
        else
            return DescribeSecurityTrendsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityTrendsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeSecurityTrendsAsync(const DescribeSecurityTrendsRequest& request, const DescribeSecurityTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityTrendsRequest&;
    using Resp = DescribeSecurityTrendsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityTrends", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeSecurityTrendsOutcomeCallable YunjingClient::DescribeSecurityTrendsCallable(const DescribeSecurityTrendsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityTrendsOutcome>>();
    DescribeSecurityTrendsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeSecurityTrendsRequest&,
        DescribeSecurityTrendsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeTagMachinesOutcome YunjingClient::DescribeTagMachines(const DescribeTagMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagMachinesResponse rsp = DescribeTagMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagMachinesOutcome(rsp);
        else
            return DescribeTagMachinesOutcome(o.GetError());
    }
    else
    {
        return DescribeTagMachinesOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeTagMachinesAsync(const DescribeTagMachinesRequest& request, const DescribeTagMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTagMachinesRequest&;
    using Resp = DescribeTagMachinesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTagMachines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeTagMachinesOutcomeCallable YunjingClient::DescribeTagMachinesCallable(const DescribeTagMachinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagMachinesOutcome>>();
    DescribeTagMachinesAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeTagMachinesRequest&,
        DescribeTagMachinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeTagsOutcome YunjingClient::DescribeTags(const DescribeTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagsResponse rsp = DescribeTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagsOutcome(rsp);
        else
            return DescribeTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeTagsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTagsRequest&;
    using Resp = DescribeTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeTagsOutcomeCallable YunjingClient::DescribeTagsCallable(const DescribeTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagsOutcome>>();
    DescribeTagsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeTagsRequest&,
        DescribeTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeUsualLoginPlacesOutcome YunjingClient::DescribeUsualLoginPlaces(const DescribeUsualLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsualLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsualLoginPlacesResponse rsp = DescribeUsualLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsualLoginPlacesOutcome(rsp);
        else
            return DescribeUsualLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return DescribeUsualLoginPlacesOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeUsualLoginPlacesAsync(const DescribeUsualLoginPlacesRequest& request, const DescribeUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsualLoginPlacesRequest&;
    using Resp = DescribeUsualLoginPlacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsualLoginPlaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeUsualLoginPlacesOutcomeCallable YunjingClient::DescribeUsualLoginPlacesCallable(const DescribeUsualLoginPlacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsualLoginPlacesOutcome>>();
    DescribeUsualLoginPlacesAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeUsualLoginPlacesRequest&,
        DescribeUsualLoginPlacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeVulInfoOutcome YunjingClient::DescribeVulInfo(const DescribeVulInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulInfoResponse rsp = DescribeVulInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulInfoOutcome(rsp);
        else
            return DescribeVulInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeVulInfoOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeVulInfoAsync(const DescribeVulInfoRequest& request, const DescribeVulInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulInfoRequest&;
    using Resp = DescribeVulInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeVulInfoOutcomeCallable YunjingClient::DescribeVulInfoCallable(const DescribeVulInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulInfoOutcome>>();
    DescribeVulInfoAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeVulInfoRequest&,
        DescribeVulInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeVulScanResultOutcome YunjingClient::DescribeVulScanResult(const DescribeVulScanResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulScanResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulScanResultResponse rsp = DescribeVulScanResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulScanResultOutcome(rsp);
        else
            return DescribeVulScanResultOutcome(o.GetError());
    }
    else
    {
        return DescribeVulScanResultOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeVulScanResultAsync(const DescribeVulScanResultRequest& request, const DescribeVulScanResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulScanResultRequest&;
    using Resp = DescribeVulScanResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulScanResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeVulScanResultOutcomeCallable YunjingClient::DescribeVulScanResultCallable(const DescribeVulScanResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulScanResultOutcome>>();
    DescribeVulScanResultAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeVulScanResultRequest&,
        DescribeVulScanResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeVulsOutcome YunjingClient::DescribeVuls(const DescribeVulsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVuls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulsResponse rsp = DescribeVulsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulsOutcome(rsp);
        else
            return DescribeVulsOutcome(o.GetError());
    }
    else
    {
        return DescribeVulsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeVulsAsync(const DescribeVulsRequest& request, const DescribeVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulsRequest&;
    using Resp = DescribeVulsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVuls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeVulsOutcomeCallable YunjingClient::DescribeVulsCallable(const DescribeVulsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulsOutcome>>();
    DescribeVulsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeVulsRequest&,
        DescribeVulsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeWeeklyReportBruteAttacksOutcome YunjingClient::DescribeWeeklyReportBruteAttacks(const DescribeWeeklyReportBruteAttacksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWeeklyReportBruteAttacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWeeklyReportBruteAttacksResponse rsp = DescribeWeeklyReportBruteAttacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWeeklyReportBruteAttacksOutcome(rsp);
        else
            return DescribeWeeklyReportBruteAttacksOutcome(o.GetError());
    }
    else
    {
        return DescribeWeeklyReportBruteAttacksOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeWeeklyReportBruteAttacksAsync(const DescribeWeeklyReportBruteAttacksRequest& request, const DescribeWeeklyReportBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWeeklyReportBruteAttacksRequest&;
    using Resp = DescribeWeeklyReportBruteAttacksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWeeklyReportBruteAttacks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeWeeklyReportBruteAttacksOutcomeCallable YunjingClient::DescribeWeeklyReportBruteAttacksCallable(const DescribeWeeklyReportBruteAttacksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWeeklyReportBruteAttacksOutcome>>();
    DescribeWeeklyReportBruteAttacksAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeWeeklyReportBruteAttacksRequest&,
        DescribeWeeklyReportBruteAttacksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeWeeklyReportInfoOutcome YunjingClient::DescribeWeeklyReportInfo(const DescribeWeeklyReportInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWeeklyReportInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWeeklyReportInfoResponse rsp = DescribeWeeklyReportInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWeeklyReportInfoOutcome(rsp);
        else
            return DescribeWeeklyReportInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeWeeklyReportInfoOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeWeeklyReportInfoAsync(const DescribeWeeklyReportInfoRequest& request, const DescribeWeeklyReportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWeeklyReportInfoRequest&;
    using Resp = DescribeWeeklyReportInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWeeklyReportInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeWeeklyReportInfoOutcomeCallable YunjingClient::DescribeWeeklyReportInfoCallable(const DescribeWeeklyReportInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWeeklyReportInfoOutcome>>();
    DescribeWeeklyReportInfoAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeWeeklyReportInfoRequest&,
        DescribeWeeklyReportInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeWeeklyReportMalwaresOutcome YunjingClient::DescribeWeeklyReportMalwares(const DescribeWeeklyReportMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWeeklyReportMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWeeklyReportMalwaresResponse rsp = DescribeWeeklyReportMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWeeklyReportMalwaresOutcome(rsp);
        else
            return DescribeWeeklyReportMalwaresOutcome(o.GetError());
    }
    else
    {
        return DescribeWeeklyReportMalwaresOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeWeeklyReportMalwaresAsync(const DescribeWeeklyReportMalwaresRequest& request, const DescribeWeeklyReportMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWeeklyReportMalwaresRequest&;
    using Resp = DescribeWeeklyReportMalwaresResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWeeklyReportMalwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeWeeklyReportMalwaresOutcomeCallable YunjingClient::DescribeWeeklyReportMalwaresCallable(const DescribeWeeklyReportMalwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWeeklyReportMalwaresOutcome>>();
    DescribeWeeklyReportMalwaresAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeWeeklyReportMalwaresRequest&,
        DescribeWeeklyReportMalwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeWeeklyReportNonlocalLoginPlacesOutcome YunjingClient::DescribeWeeklyReportNonlocalLoginPlaces(const DescribeWeeklyReportNonlocalLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWeeklyReportNonlocalLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWeeklyReportNonlocalLoginPlacesResponse rsp = DescribeWeeklyReportNonlocalLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWeeklyReportNonlocalLoginPlacesOutcome(rsp);
        else
            return DescribeWeeklyReportNonlocalLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return DescribeWeeklyReportNonlocalLoginPlacesOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeWeeklyReportNonlocalLoginPlacesAsync(const DescribeWeeklyReportNonlocalLoginPlacesRequest& request, const DescribeWeeklyReportNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWeeklyReportNonlocalLoginPlacesRequest&;
    using Resp = DescribeWeeklyReportNonlocalLoginPlacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWeeklyReportNonlocalLoginPlaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeWeeklyReportNonlocalLoginPlacesOutcomeCallable YunjingClient::DescribeWeeklyReportNonlocalLoginPlacesCallable(const DescribeWeeklyReportNonlocalLoginPlacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWeeklyReportNonlocalLoginPlacesOutcome>>();
    DescribeWeeklyReportNonlocalLoginPlacesAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeWeeklyReportNonlocalLoginPlacesRequest&,
        DescribeWeeklyReportNonlocalLoginPlacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeWeeklyReportVulsOutcome YunjingClient::DescribeWeeklyReportVuls(const DescribeWeeklyReportVulsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWeeklyReportVuls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWeeklyReportVulsResponse rsp = DescribeWeeklyReportVulsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWeeklyReportVulsOutcome(rsp);
        else
            return DescribeWeeklyReportVulsOutcome(o.GetError());
    }
    else
    {
        return DescribeWeeklyReportVulsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeWeeklyReportVulsAsync(const DescribeWeeklyReportVulsRequest& request, const DescribeWeeklyReportVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWeeklyReportVulsRequest&;
    using Resp = DescribeWeeklyReportVulsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWeeklyReportVuls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeWeeklyReportVulsOutcomeCallable YunjingClient::DescribeWeeklyReportVulsCallable(const DescribeWeeklyReportVulsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWeeklyReportVulsOutcome>>();
    DescribeWeeklyReportVulsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeWeeklyReportVulsRequest&,
        DescribeWeeklyReportVulsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::DescribeWeeklyReportsOutcome YunjingClient::DescribeWeeklyReports(const DescribeWeeklyReportsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWeeklyReports");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWeeklyReportsResponse rsp = DescribeWeeklyReportsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWeeklyReportsOutcome(rsp);
        else
            return DescribeWeeklyReportsOutcome(o.GetError());
    }
    else
    {
        return DescribeWeeklyReportsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeWeeklyReportsAsync(const DescribeWeeklyReportsRequest& request, const DescribeWeeklyReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWeeklyReportsRequest&;
    using Resp = DescribeWeeklyReportsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWeeklyReports", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::DescribeWeeklyReportsOutcomeCallable YunjingClient::DescribeWeeklyReportsCallable(const DescribeWeeklyReportsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWeeklyReportsOutcome>>();
    DescribeWeeklyReportsAsync(
    request,
    [prom](
        const YunjingClient*,
        const DescribeWeeklyReportsRequest&,
        DescribeWeeklyReportsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::EditBashRuleOutcome YunjingClient::EditBashRule(const EditBashRuleRequest &request)
{
    auto outcome = MakeRequest(request, "EditBashRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditBashRuleResponse rsp = EditBashRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditBashRuleOutcome(rsp);
        else
            return EditBashRuleOutcome(o.GetError());
    }
    else
    {
        return EditBashRuleOutcome(outcome.GetError());
    }
}

void YunjingClient::EditBashRuleAsync(const EditBashRuleRequest& request, const EditBashRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EditBashRuleRequest&;
    using Resp = EditBashRuleResponse;

    DoRequestAsync<Req, Resp>(
        "EditBashRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::EditBashRuleOutcomeCallable YunjingClient::EditBashRuleCallable(const EditBashRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<EditBashRuleOutcome>>();
    EditBashRuleAsync(
    request,
    [prom](
        const YunjingClient*,
        const EditBashRuleRequest&,
        EditBashRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::EditPrivilegeRuleOutcome YunjingClient::EditPrivilegeRule(const EditPrivilegeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "EditPrivilegeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditPrivilegeRuleResponse rsp = EditPrivilegeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditPrivilegeRuleOutcome(rsp);
        else
            return EditPrivilegeRuleOutcome(o.GetError());
    }
    else
    {
        return EditPrivilegeRuleOutcome(outcome.GetError());
    }
}

void YunjingClient::EditPrivilegeRuleAsync(const EditPrivilegeRuleRequest& request, const EditPrivilegeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EditPrivilegeRuleRequest&;
    using Resp = EditPrivilegeRuleResponse;

    DoRequestAsync<Req, Resp>(
        "EditPrivilegeRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::EditPrivilegeRuleOutcomeCallable YunjingClient::EditPrivilegeRuleCallable(const EditPrivilegeRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<EditPrivilegeRuleOutcome>>();
    EditPrivilegeRuleAsync(
    request,
    [prom](
        const YunjingClient*,
        const EditPrivilegeRuleRequest&,
        EditPrivilegeRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::EditReverseShellRuleOutcome YunjingClient::EditReverseShellRule(const EditReverseShellRuleRequest &request)
{
    auto outcome = MakeRequest(request, "EditReverseShellRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditReverseShellRuleResponse rsp = EditReverseShellRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditReverseShellRuleOutcome(rsp);
        else
            return EditReverseShellRuleOutcome(o.GetError());
    }
    else
    {
        return EditReverseShellRuleOutcome(outcome.GetError());
    }
}

void YunjingClient::EditReverseShellRuleAsync(const EditReverseShellRuleRequest& request, const EditReverseShellRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EditReverseShellRuleRequest&;
    using Resp = EditReverseShellRuleResponse;

    DoRequestAsync<Req, Resp>(
        "EditReverseShellRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::EditReverseShellRuleOutcomeCallable YunjingClient::EditReverseShellRuleCallable(const EditReverseShellRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<EditReverseShellRuleOutcome>>();
    EditReverseShellRuleAsync(
    request,
    [prom](
        const YunjingClient*,
        const EditReverseShellRuleRequest&,
        EditReverseShellRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::EditTagsOutcome YunjingClient::EditTags(const EditTagsRequest &request)
{
    auto outcome = MakeRequest(request, "EditTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditTagsResponse rsp = EditTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditTagsOutcome(rsp);
        else
            return EditTagsOutcome(o.GetError());
    }
    else
    {
        return EditTagsOutcome(outcome.GetError());
    }
}

void YunjingClient::EditTagsAsync(const EditTagsRequest& request, const EditTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EditTagsRequest&;
    using Resp = EditTagsResponse;

    DoRequestAsync<Req, Resp>(
        "EditTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::EditTagsOutcomeCallable YunjingClient::EditTagsCallable(const EditTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<EditTagsOutcome>>();
    EditTagsAsync(
    request,
    [prom](
        const YunjingClient*,
        const EditTagsRequest&,
        EditTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::ExportAttackLogsOutcome YunjingClient::ExportAttackLogs(const ExportAttackLogsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAttackLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAttackLogsResponse rsp = ExportAttackLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAttackLogsOutcome(rsp);
        else
            return ExportAttackLogsOutcome(o.GetError());
    }
    else
    {
        return ExportAttackLogsOutcome(outcome.GetError());
    }
}

void YunjingClient::ExportAttackLogsAsync(const ExportAttackLogsRequest& request, const ExportAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAttackLogsRequest&;
    using Resp = ExportAttackLogsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAttackLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::ExportAttackLogsOutcomeCallable YunjingClient::ExportAttackLogsCallable(const ExportAttackLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAttackLogsOutcome>>();
    ExportAttackLogsAsync(
    request,
    [prom](
        const YunjingClient*,
        const ExportAttackLogsRequest&,
        ExportAttackLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::ExportBashEventsOutcome YunjingClient::ExportBashEvents(const ExportBashEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBashEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBashEventsResponse rsp = ExportBashEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBashEventsOutcome(rsp);
        else
            return ExportBashEventsOutcome(o.GetError());
    }
    else
    {
        return ExportBashEventsOutcome(outcome.GetError());
    }
}

void YunjingClient::ExportBashEventsAsync(const ExportBashEventsRequest& request, const ExportBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportBashEventsRequest&;
    using Resp = ExportBashEventsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportBashEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::ExportBashEventsOutcomeCallable YunjingClient::ExportBashEventsCallable(const ExportBashEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportBashEventsOutcome>>();
    ExportBashEventsAsync(
    request,
    [prom](
        const YunjingClient*,
        const ExportBashEventsRequest&,
        ExportBashEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::ExportBruteAttacksOutcome YunjingClient::ExportBruteAttacks(const ExportBruteAttacksRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBruteAttacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBruteAttacksResponse rsp = ExportBruteAttacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBruteAttacksOutcome(rsp);
        else
            return ExportBruteAttacksOutcome(o.GetError());
    }
    else
    {
        return ExportBruteAttacksOutcome(outcome.GetError());
    }
}

void YunjingClient::ExportBruteAttacksAsync(const ExportBruteAttacksRequest& request, const ExportBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportBruteAttacksRequest&;
    using Resp = ExportBruteAttacksResponse;

    DoRequestAsync<Req, Resp>(
        "ExportBruteAttacks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::ExportBruteAttacksOutcomeCallable YunjingClient::ExportBruteAttacksCallable(const ExportBruteAttacksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportBruteAttacksOutcome>>();
    ExportBruteAttacksAsync(
    request,
    [prom](
        const YunjingClient*,
        const ExportBruteAttacksRequest&,
        ExportBruteAttacksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::ExportMaliciousRequestsOutcome YunjingClient::ExportMaliciousRequests(const ExportMaliciousRequestsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportMaliciousRequests");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportMaliciousRequestsResponse rsp = ExportMaliciousRequestsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportMaliciousRequestsOutcome(rsp);
        else
            return ExportMaliciousRequestsOutcome(o.GetError());
    }
    else
    {
        return ExportMaliciousRequestsOutcome(outcome.GetError());
    }
}

void YunjingClient::ExportMaliciousRequestsAsync(const ExportMaliciousRequestsRequest& request, const ExportMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportMaliciousRequestsRequest&;
    using Resp = ExportMaliciousRequestsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportMaliciousRequests", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::ExportMaliciousRequestsOutcomeCallable YunjingClient::ExportMaliciousRequestsCallable(const ExportMaliciousRequestsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportMaliciousRequestsOutcome>>();
    ExportMaliciousRequestsAsync(
    request,
    [prom](
        const YunjingClient*,
        const ExportMaliciousRequestsRequest&,
        ExportMaliciousRequestsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::ExportMalwaresOutcome YunjingClient::ExportMalwares(const ExportMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "ExportMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportMalwaresResponse rsp = ExportMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportMalwaresOutcome(rsp);
        else
            return ExportMalwaresOutcome(o.GetError());
    }
    else
    {
        return ExportMalwaresOutcome(outcome.GetError());
    }
}

void YunjingClient::ExportMalwaresAsync(const ExportMalwaresRequest& request, const ExportMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportMalwaresRequest&;
    using Resp = ExportMalwaresResponse;

    DoRequestAsync<Req, Resp>(
        "ExportMalwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::ExportMalwaresOutcomeCallable YunjingClient::ExportMalwaresCallable(const ExportMalwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportMalwaresOutcome>>();
    ExportMalwaresAsync(
    request,
    [prom](
        const YunjingClient*,
        const ExportMalwaresRequest&,
        ExportMalwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::ExportNonlocalLoginPlacesOutcome YunjingClient::ExportNonlocalLoginPlaces(const ExportNonlocalLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "ExportNonlocalLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportNonlocalLoginPlacesResponse rsp = ExportNonlocalLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportNonlocalLoginPlacesOutcome(rsp);
        else
            return ExportNonlocalLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return ExportNonlocalLoginPlacesOutcome(outcome.GetError());
    }
}

void YunjingClient::ExportNonlocalLoginPlacesAsync(const ExportNonlocalLoginPlacesRequest& request, const ExportNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportNonlocalLoginPlacesRequest&;
    using Resp = ExportNonlocalLoginPlacesResponse;

    DoRequestAsync<Req, Resp>(
        "ExportNonlocalLoginPlaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::ExportNonlocalLoginPlacesOutcomeCallable YunjingClient::ExportNonlocalLoginPlacesCallable(const ExportNonlocalLoginPlacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportNonlocalLoginPlacesOutcome>>();
    ExportNonlocalLoginPlacesAsync(
    request,
    [prom](
        const YunjingClient*,
        const ExportNonlocalLoginPlacesRequest&,
        ExportNonlocalLoginPlacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::ExportPrivilegeEventsOutcome YunjingClient::ExportPrivilegeEvents(const ExportPrivilegeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportPrivilegeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportPrivilegeEventsResponse rsp = ExportPrivilegeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportPrivilegeEventsOutcome(rsp);
        else
            return ExportPrivilegeEventsOutcome(o.GetError());
    }
    else
    {
        return ExportPrivilegeEventsOutcome(outcome.GetError());
    }
}

void YunjingClient::ExportPrivilegeEventsAsync(const ExportPrivilegeEventsRequest& request, const ExportPrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportPrivilegeEventsRequest&;
    using Resp = ExportPrivilegeEventsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportPrivilegeEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::ExportPrivilegeEventsOutcomeCallable YunjingClient::ExportPrivilegeEventsCallable(const ExportPrivilegeEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportPrivilegeEventsOutcome>>();
    ExportPrivilegeEventsAsync(
    request,
    [prom](
        const YunjingClient*,
        const ExportPrivilegeEventsRequest&,
        ExportPrivilegeEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::ExportReverseShellEventsOutcome YunjingClient::ExportReverseShellEvents(const ExportReverseShellEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportReverseShellEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportReverseShellEventsResponse rsp = ExportReverseShellEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportReverseShellEventsOutcome(rsp);
        else
            return ExportReverseShellEventsOutcome(o.GetError());
    }
    else
    {
        return ExportReverseShellEventsOutcome(outcome.GetError());
    }
}

void YunjingClient::ExportReverseShellEventsAsync(const ExportReverseShellEventsRequest& request, const ExportReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportReverseShellEventsRequest&;
    using Resp = ExportReverseShellEventsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportReverseShellEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::ExportReverseShellEventsOutcomeCallable YunjingClient::ExportReverseShellEventsCallable(const ExportReverseShellEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportReverseShellEventsOutcome>>();
    ExportReverseShellEventsAsync(
    request,
    [prom](
        const YunjingClient*,
        const ExportReverseShellEventsRequest&,
        ExportReverseShellEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::IgnoreImpactedHostsOutcome YunjingClient::IgnoreImpactedHosts(const IgnoreImpactedHostsRequest &request)
{
    auto outcome = MakeRequest(request, "IgnoreImpactedHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IgnoreImpactedHostsResponse rsp = IgnoreImpactedHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IgnoreImpactedHostsOutcome(rsp);
        else
            return IgnoreImpactedHostsOutcome(o.GetError());
    }
    else
    {
        return IgnoreImpactedHostsOutcome(outcome.GetError());
    }
}

void YunjingClient::IgnoreImpactedHostsAsync(const IgnoreImpactedHostsRequest& request, const IgnoreImpactedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IgnoreImpactedHostsRequest&;
    using Resp = IgnoreImpactedHostsResponse;

    DoRequestAsync<Req, Resp>(
        "IgnoreImpactedHosts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::IgnoreImpactedHostsOutcomeCallable YunjingClient::IgnoreImpactedHostsCallable(const IgnoreImpactedHostsRequest &request)
{
    const auto prom = std::make_shared<std::promise<IgnoreImpactedHostsOutcome>>();
    IgnoreImpactedHostsAsync(
    request,
    [prom](
        const YunjingClient*,
        const IgnoreImpactedHostsRequest&,
        IgnoreImpactedHostsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::InquiryPriceOpenProVersionPrepaidOutcome YunjingClient::InquiryPriceOpenProVersionPrepaid(const InquiryPriceOpenProVersionPrepaidRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceOpenProVersionPrepaid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceOpenProVersionPrepaidResponse rsp = InquiryPriceOpenProVersionPrepaidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceOpenProVersionPrepaidOutcome(rsp);
        else
            return InquiryPriceOpenProVersionPrepaidOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceOpenProVersionPrepaidOutcome(outcome.GetError());
    }
}

void YunjingClient::InquiryPriceOpenProVersionPrepaidAsync(const InquiryPriceOpenProVersionPrepaidRequest& request, const InquiryPriceOpenProVersionPrepaidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceOpenProVersionPrepaidRequest&;
    using Resp = InquiryPriceOpenProVersionPrepaidResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceOpenProVersionPrepaid", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::InquiryPriceOpenProVersionPrepaidOutcomeCallable YunjingClient::InquiryPriceOpenProVersionPrepaidCallable(const InquiryPriceOpenProVersionPrepaidRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceOpenProVersionPrepaidOutcome>>();
    InquiryPriceOpenProVersionPrepaidAsync(
    request,
    [prom](
        const YunjingClient*,
        const InquiryPriceOpenProVersionPrepaidRequest&,
        InquiryPriceOpenProVersionPrepaidOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::MisAlarmNonlocalLoginPlacesOutcome YunjingClient::MisAlarmNonlocalLoginPlaces(const MisAlarmNonlocalLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "MisAlarmNonlocalLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MisAlarmNonlocalLoginPlacesResponse rsp = MisAlarmNonlocalLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MisAlarmNonlocalLoginPlacesOutcome(rsp);
        else
            return MisAlarmNonlocalLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return MisAlarmNonlocalLoginPlacesOutcome(outcome.GetError());
    }
}

void YunjingClient::MisAlarmNonlocalLoginPlacesAsync(const MisAlarmNonlocalLoginPlacesRequest& request, const MisAlarmNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MisAlarmNonlocalLoginPlacesRequest&;
    using Resp = MisAlarmNonlocalLoginPlacesResponse;

    DoRequestAsync<Req, Resp>(
        "MisAlarmNonlocalLoginPlaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::MisAlarmNonlocalLoginPlacesOutcomeCallable YunjingClient::MisAlarmNonlocalLoginPlacesCallable(const MisAlarmNonlocalLoginPlacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<MisAlarmNonlocalLoginPlacesOutcome>>();
    MisAlarmNonlocalLoginPlacesAsync(
    request,
    [prom](
        const YunjingClient*,
        const MisAlarmNonlocalLoginPlacesRequest&,
        MisAlarmNonlocalLoginPlacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::ModifyAlarmAttributeOutcome YunjingClient::ModifyAlarmAttribute(const ModifyAlarmAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmAttributeResponse rsp = ModifyAlarmAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmAttributeOutcome(rsp);
        else
            return ModifyAlarmAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmAttributeOutcome(outcome.GetError());
    }
}

void YunjingClient::ModifyAlarmAttributeAsync(const ModifyAlarmAttributeRequest& request, const ModifyAlarmAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAlarmAttributeRequest&;
    using Resp = ModifyAlarmAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAlarmAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::ModifyAlarmAttributeOutcomeCallable YunjingClient::ModifyAlarmAttributeCallable(const ModifyAlarmAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAlarmAttributeOutcome>>();
    ModifyAlarmAttributeAsync(
    request,
    [prom](
        const YunjingClient*,
        const ModifyAlarmAttributeRequest&,
        ModifyAlarmAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::ModifyAutoOpenProVersionConfigOutcome YunjingClient::ModifyAutoOpenProVersionConfig(const ModifyAutoOpenProVersionConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoOpenProVersionConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoOpenProVersionConfigResponse rsp = ModifyAutoOpenProVersionConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoOpenProVersionConfigOutcome(rsp);
        else
            return ModifyAutoOpenProVersionConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoOpenProVersionConfigOutcome(outcome.GetError());
    }
}

void YunjingClient::ModifyAutoOpenProVersionConfigAsync(const ModifyAutoOpenProVersionConfigRequest& request, const ModifyAutoOpenProVersionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAutoOpenProVersionConfigRequest&;
    using Resp = ModifyAutoOpenProVersionConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoOpenProVersionConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::ModifyAutoOpenProVersionConfigOutcomeCallable YunjingClient::ModifyAutoOpenProVersionConfigCallable(const ModifyAutoOpenProVersionConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoOpenProVersionConfigOutcome>>();
    ModifyAutoOpenProVersionConfigAsync(
    request,
    [prom](
        const YunjingClient*,
        const ModifyAutoOpenProVersionConfigRequest&,
        ModifyAutoOpenProVersionConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::ModifyLoginWhiteListOutcome YunjingClient::ModifyLoginWhiteList(const ModifyLoginWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoginWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoginWhiteListResponse rsp = ModifyLoginWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoginWhiteListOutcome(rsp);
        else
            return ModifyLoginWhiteListOutcome(o.GetError());
    }
    else
    {
        return ModifyLoginWhiteListOutcome(outcome.GetError());
    }
}

void YunjingClient::ModifyLoginWhiteListAsync(const ModifyLoginWhiteListRequest& request, const ModifyLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLoginWhiteListRequest&;
    using Resp = ModifyLoginWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoginWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::ModifyLoginWhiteListOutcomeCallable YunjingClient::ModifyLoginWhiteListCallable(const ModifyLoginWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoginWhiteListOutcome>>();
    ModifyLoginWhiteListAsync(
    request,
    [prom](
        const YunjingClient*,
        const ModifyLoginWhiteListRequest&,
        ModifyLoginWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::ModifyProVersionRenewFlagOutcome YunjingClient::ModifyProVersionRenewFlag(const ModifyProVersionRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProVersionRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProVersionRenewFlagResponse rsp = ModifyProVersionRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProVersionRenewFlagOutcome(rsp);
        else
            return ModifyProVersionRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyProVersionRenewFlagOutcome(outcome.GetError());
    }
}

void YunjingClient::ModifyProVersionRenewFlagAsync(const ModifyProVersionRenewFlagRequest& request, const ModifyProVersionRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProVersionRenewFlagRequest&;
    using Resp = ModifyProVersionRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProVersionRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::ModifyProVersionRenewFlagOutcomeCallable YunjingClient::ModifyProVersionRenewFlagCallable(const ModifyProVersionRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProVersionRenewFlagOutcome>>();
    ModifyProVersionRenewFlagAsync(
    request,
    [prom](
        const YunjingClient*,
        const ModifyProVersionRenewFlagRequest&,
        ModifyProVersionRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::OpenProVersionOutcome YunjingClient::OpenProVersion(const OpenProVersionRequest &request)
{
    auto outcome = MakeRequest(request, "OpenProVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenProVersionResponse rsp = OpenProVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenProVersionOutcome(rsp);
        else
            return OpenProVersionOutcome(o.GetError());
    }
    else
    {
        return OpenProVersionOutcome(outcome.GetError());
    }
}

void YunjingClient::OpenProVersionAsync(const OpenProVersionRequest& request, const OpenProVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenProVersionRequest&;
    using Resp = OpenProVersionResponse;

    DoRequestAsync<Req, Resp>(
        "OpenProVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::OpenProVersionOutcomeCallable YunjingClient::OpenProVersionCallable(const OpenProVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenProVersionOutcome>>();
    OpenProVersionAsync(
    request,
    [prom](
        const YunjingClient*,
        const OpenProVersionRequest&,
        OpenProVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::OpenProVersionPrepaidOutcome YunjingClient::OpenProVersionPrepaid(const OpenProVersionPrepaidRequest &request)
{
    auto outcome = MakeRequest(request, "OpenProVersionPrepaid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenProVersionPrepaidResponse rsp = OpenProVersionPrepaidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenProVersionPrepaidOutcome(rsp);
        else
            return OpenProVersionPrepaidOutcome(o.GetError());
    }
    else
    {
        return OpenProVersionPrepaidOutcome(outcome.GetError());
    }
}

void YunjingClient::OpenProVersionPrepaidAsync(const OpenProVersionPrepaidRequest& request, const OpenProVersionPrepaidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenProVersionPrepaidRequest&;
    using Resp = OpenProVersionPrepaidResponse;

    DoRequestAsync<Req, Resp>(
        "OpenProVersionPrepaid", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::OpenProVersionPrepaidOutcomeCallable YunjingClient::OpenProVersionPrepaidCallable(const OpenProVersionPrepaidRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenProVersionPrepaidOutcome>>();
    OpenProVersionPrepaidAsync(
    request,
    [prom](
        const YunjingClient*,
        const OpenProVersionPrepaidRequest&,
        OpenProVersionPrepaidOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::RecoverMalwaresOutcome YunjingClient::RecoverMalwares(const RecoverMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverMalwaresResponse rsp = RecoverMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverMalwaresOutcome(rsp);
        else
            return RecoverMalwaresOutcome(o.GetError());
    }
    else
    {
        return RecoverMalwaresOutcome(outcome.GetError());
    }
}

void YunjingClient::RecoverMalwaresAsync(const RecoverMalwaresRequest& request, const RecoverMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecoverMalwaresRequest&;
    using Resp = RecoverMalwaresResponse;

    DoRequestAsync<Req, Resp>(
        "RecoverMalwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::RecoverMalwaresOutcomeCallable YunjingClient::RecoverMalwaresCallable(const RecoverMalwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecoverMalwaresOutcome>>();
    RecoverMalwaresAsync(
    request,
    [prom](
        const YunjingClient*,
        const RecoverMalwaresRequest&,
        RecoverMalwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::RenewProVersionOutcome YunjingClient::RenewProVersion(const RenewProVersionRequest &request)
{
    auto outcome = MakeRequest(request, "RenewProVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewProVersionResponse rsp = RenewProVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewProVersionOutcome(rsp);
        else
            return RenewProVersionOutcome(o.GetError());
    }
    else
    {
        return RenewProVersionOutcome(outcome.GetError());
    }
}

void YunjingClient::RenewProVersionAsync(const RenewProVersionRequest& request, const RenewProVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewProVersionRequest&;
    using Resp = RenewProVersionResponse;

    DoRequestAsync<Req, Resp>(
        "RenewProVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::RenewProVersionOutcomeCallable YunjingClient::RenewProVersionCallable(const RenewProVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewProVersionOutcome>>();
    RenewProVersionAsync(
    request,
    [prom](
        const YunjingClient*,
        const RenewProVersionRequest&,
        RenewProVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::RescanImpactedHostOutcome YunjingClient::RescanImpactedHost(const RescanImpactedHostRequest &request)
{
    auto outcome = MakeRequest(request, "RescanImpactedHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RescanImpactedHostResponse rsp = RescanImpactedHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RescanImpactedHostOutcome(rsp);
        else
            return RescanImpactedHostOutcome(o.GetError());
    }
    else
    {
        return RescanImpactedHostOutcome(outcome.GetError());
    }
}

void YunjingClient::RescanImpactedHostAsync(const RescanImpactedHostRequest& request, const RescanImpactedHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RescanImpactedHostRequest&;
    using Resp = RescanImpactedHostResponse;

    DoRequestAsync<Req, Resp>(
        "RescanImpactedHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::RescanImpactedHostOutcomeCallable YunjingClient::RescanImpactedHostCallable(const RescanImpactedHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<RescanImpactedHostOutcome>>();
    RescanImpactedHostAsync(
    request,
    [prom](
        const YunjingClient*,
        const RescanImpactedHostRequest&,
        RescanImpactedHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::SeparateMalwaresOutcome YunjingClient::SeparateMalwares(const SeparateMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "SeparateMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SeparateMalwaresResponse rsp = SeparateMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SeparateMalwaresOutcome(rsp);
        else
            return SeparateMalwaresOutcome(o.GetError());
    }
    else
    {
        return SeparateMalwaresOutcome(outcome.GetError());
    }
}

void YunjingClient::SeparateMalwaresAsync(const SeparateMalwaresRequest& request, const SeparateMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SeparateMalwaresRequest&;
    using Resp = SeparateMalwaresResponse;

    DoRequestAsync<Req, Resp>(
        "SeparateMalwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::SeparateMalwaresOutcomeCallable YunjingClient::SeparateMalwaresCallable(const SeparateMalwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<SeparateMalwaresOutcome>>();
    SeparateMalwaresAsync(
    request,
    [prom](
        const YunjingClient*,
        const SeparateMalwaresRequest&,
        SeparateMalwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::SetBashEventsStatusOutcome YunjingClient::SetBashEventsStatus(const SetBashEventsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "SetBashEventsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetBashEventsStatusResponse rsp = SetBashEventsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetBashEventsStatusOutcome(rsp);
        else
            return SetBashEventsStatusOutcome(o.GetError());
    }
    else
    {
        return SetBashEventsStatusOutcome(outcome.GetError());
    }
}

void YunjingClient::SetBashEventsStatusAsync(const SetBashEventsStatusRequest& request, const SetBashEventsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetBashEventsStatusRequest&;
    using Resp = SetBashEventsStatusResponse;

    DoRequestAsync<Req, Resp>(
        "SetBashEventsStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::SetBashEventsStatusOutcomeCallable YunjingClient::SetBashEventsStatusCallable(const SetBashEventsStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetBashEventsStatusOutcome>>();
    SetBashEventsStatusAsync(
    request,
    [prom](
        const YunjingClient*,
        const SetBashEventsStatusRequest&,
        SetBashEventsStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::SwitchBashRulesOutcome YunjingClient::SwitchBashRules(const SwitchBashRulesRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchBashRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchBashRulesResponse rsp = SwitchBashRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchBashRulesOutcome(rsp);
        else
            return SwitchBashRulesOutcome(o.GetError());
    }
    else
    {
        return SwitchBashRulesOutcome(outcome.GetError());
    }
}

void YunjingClient::SwitchBashRulesAsync(const SwitchBashRulesRequest& request, const SwitchBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchBashRulesRequest&;
    using Resp = SwitchBashRulesResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchBashRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::SwitchBashRulesOutcomeCallable YunjingClient::SwitchBashRulesCallable(const SwitchBashRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchBashRulesOutcome>>();
    SwitchBashRulesAsync(
    request,
    [prom](
        const YunjingClient*,
        const SwitchBashRulesRequest&,
        SwitchBashRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::TrustMaliciousRequestOutcome YunjingClient::TrustMaliciousRequest(const TrustMaliciousRequestRequest &request)
{
    auto outcome = MakeRequest(request, "TrustMaliciousRequest");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TrustMaliciousRequestResponse rsp = TrustMaliciousRequestResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TrustMaliciousRequestOutcome(rsp);
        else
            return TrustMaliciousRequestOutcome(o.GetError());
    }
    else
    {
        return TrustMaliciousRequestOutcome(outcome.GetError());
    }
}

void YunjingClient::TrustMaliciousRequestAsync(const TrustMaliciousRequestRequest& request, const TrustMaliciousRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TrustMaliciousRequestRequest&;
    using Resp = TrustMaliciousRequestResponse;

    DoRequestAsync<Req, Resp>(
        "TrustMaliciousRequest", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::TrustMaliciousRequestOutcomeCallable YunjingClient::TrustMaliciousRequestCallable(const TrustMaliciousRequestRequest &request)
{
    const auto prom = std::make_shared<std::promise<TrustMaliciousRequestOutcome>>();
    TrustMaliciousRequestAsync(
    request,
    [prom](
        const YunjingClient*,
        const TrustMaliciousRequestRequest&,
        TrustMaliciousRequestOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::TrustMalwaresOutcome YunjingClient::TrustMalwares(const TrustMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "TrustMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TrustMalwaresResponse rsp = TrustMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TrustMalwaresOutcome(rsp);
        else
            return TrustMalwaresOutcome(o.GetError());
    }
    else
    {
        return TrustMalwaresOutcome(outcome.GetError());
    }
}

void YunjingClient::TrustMalwaresAsync(const TrustMalwaresRequest& request, const TrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TrustMalwaresRequest&;
    using Resp = TrustMalwaresResponse;

    DoRequestAsync<Req, Resp>(
        "TrustMalwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::TrustMalwaresOutcomeCallable YunjingClient::TrustMalwaresCallable(const TrustMalwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<TrustMalwaresOutcome>>();
    TrustMalwaresAsync(
    request,
    [prom](
        const YunjingClient*,
        const TrustMalwaresRequest&,
        TrustMalwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::UntrustMaliciousRequestOutcome YunjingClient::UntrustMaliciousRequest(const UntrustMaliciousRequestRequest &request)
{
    auto outcome = MakeRequest(request, "UntrustMaliciousRequest");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UntrustMaliciousRequestResponse rsp = UntrustMaliciousRequestResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UntrustMaliciousRequestOutcome(rsp);
        else
            return UntrustMaliciousRequestOutcome(o.GetError());
    }
    else
    {
        return UntrustMaliciousRequestOutcome(outcome.GetError());
    }
}

void YunjingClient::UntrustMaliciousRequestAsync(const UntrustMaliciousRequestRequest& request, const UntrustMaliciousRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UntrustMaliciousRequestRequest&;
    using Resp = UntrustMaliciousRequestResponse;

    DoRequestAsync<Req, Resp>(
        "UntrustMaliciousRequest", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::UntrustMaliciousRequestOutcomeCallable YunjingClient::UntrustMaliciousRequestCallable(const UntrustMaliciousRequestRequest &request)
{
    const auto prom = std::make_shared<std::promise<UntrustMaliciousRequestOutcome>>();
    UntrustMaliciousRequestAsync(
    request,
    [prom](
        const YunjingClient*,
        const UntrustMaliciousRequestRequest&,
        UntrustMaliciousRequestOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunjingClient::UntrustMalwaresOutcome YunjingClient::UntrustMalwares(const UntrustMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "UntrustMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UntrustMalwaresResponse rsp = UntrustMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UntrustMalwaresOutcome(rsp);
        else
            return UntrustMalwaresOutcome(o.GetError());
    }
    else
    {
        return UntrustMalwaresOutcome(outcome.GetError());
    }
}

void YunjingClient::UntrustMalwaresAsync(const UntrustMalwaresRequest& request, const UntrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UntrustMalwaresRequest&;
    using Resp = UntrustMalwaresResponse;

    DoRequestAsync<Req, Resp>(
        "UntrustMalwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunjingClient::UntrustMalwaresOutcomeCallable YunjingClient::UntrustMalwaresCallable(const UntrustMalwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<UntrustMalwaresOutcome>>();
    UntrustMalwaresAsync(
    request,
    [prom](
        const YunjingClient*,
        const UntrustMalwaresRequest&,
        UntrustMalwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

