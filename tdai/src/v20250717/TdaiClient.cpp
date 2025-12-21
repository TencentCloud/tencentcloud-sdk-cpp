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

#include <tencentcloud/tdai/v20250717/TdaiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tdai::V20250717;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-07-17";
    const string ENDPOINT = "tdai.tencentcloudapi.com";
}

TdaiClient::TdaiClient(const Credential &credential, const string &region) :
    TdaiClient(credential, region, ClientProfile())
{
}

TdaiClient::TdaiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TdaiClient::ContinueAgentWorkOutcome TdaiClient::ContinueAgentWork(const ContinueAgentWorkRequest &request)
{
    auto outcome = MakeRequest(request, "ContinueAgentWork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ContinueAgentWorkResponse rsp = ContinueAgentWorkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ContinueAgentWorkOutcome(rsp);
        else
            return ContinueAgentWorkOutcome(o.GetError());
    }
    else
    {
        return ContinueAgentWorkOutcome(outcome.GetError());
    }
}

void TdaiClient::ContinueAgentWorkAsync(const ContinueAgentWorkRequest& request, const ContinueAgentWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ContinueAgentWorkRequest&;
    using Resp = ContinueAgentWorkResponse;

    DoRequestAsync<Req, Resp>(
        "ContinueAgentWork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::ContinueAgentWorkOutcomeCallable TdaiClient::ContinueAgentWorkCallable(const ContinueAgentWorkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ContinueAgentWorkOutcome>>();
    ContinueAgentWorkAsync(
    request,
    [prom](
        const TdaiClient*,
        const ContinueAgentWorkRequest&,
        ContinueAgentWorkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::CreateAgentInstanceOutcome TdaiClient::CreateAgentInstance(const CreateAgentInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAgentInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAgentInstanceResponse rsp = CreateAgentInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAgentInstanceOutcome(rsp);
        else
            return CreateAgentInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateAgentInstanceOutcome(outcome.GetError());
    }
}

void TdaiClient::CreateAgentInstanceAsync(const CreateAgentInstanceRequest& request, const CreateAgentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAgentInstanceRequest&;
    using Resp = CreateAgentInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAgentInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::CreateAgentInstanceOutcomeCallable TdaiClient::CreateAgentInstanceCallable(const CreateAgentInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAgentInstanceOutcome>>();
    CreateAgentInstanceAsync(
    request,
    [prom](
        const TdaiClient*,
        const CreateAgentInstanceRequest&,
        CreateAgentInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::CreateChatCompletionOutcome TdaiClient::CreateChatCompletion(const CreateChatCompletionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChatCompletion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChatCompletionResponse rsp = CreateChatCompletionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChatCompletionOutcome(rsp);
        else
            return CreateChatCompletionOutcome(o.GetError());
    }
    else
    {
        return CreateChatCompletionOutcome(outcome.GetError());
    }
}

void TdaiClient::CreateChatCompletionAsync(const CreateChatCompletionRequest& request, const CreateChatCompletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateChatCompletionRequest&;
    using Resp = CreateChatCompletionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateChatCompletion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::CreateChatCompletionOutcomeCallable TdaiClient::CreateChatCompletionCallable(const CreateChatCompletionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateChatCompletionOutcome>>();
    CreateChatCompletionAsync(
    request,
    [prom](
        const TdaiClient*,
        const CreateChatCompletionRequest&,
        CreateChatCompletionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::DescribeAgentDutyTaskDetailOutcome TdaiClient::DescribeAgentDutyTaskDetail(const DescribeAgentDutyTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentDutyTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentDutyTaskDetailResponse rsp = DescribeAgentDutyTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentDutyTaskDetailOutcome(rsp);
        else
            return DescribeAgentDutyTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentDutyTaskDetailOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeAgentDutyTaskDetailAsync(const DescribeAgentDutyTaskDetailRequest& request, const DescribeAgentDutyTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentDutyTaskDetailRequest&;
    using Resp = DescribeAgentDutyTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentDutyTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::DescribeAgentDutyTaskDetailOutcomeCallable TdaiClient::DescribeAgentDutyTaskDetailCallable(const DescribeAgentDutyTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentDutyTaskDetailOutcome>>();
    DescribeAgentDutyTaskDetailAsync(
    request,
    [prom](
        const TdaiClient*,
        const DescribeAgentDutyTaskDetailRequest&,
        DescribeAgentDutyTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::DescribeAgentDutyTasksOutcome TdaiClient::DescribeAgentDutyTasks(const DescribeAgentDutyTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentDutyTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentDutyTasksResponse rsp = DescribeAgentDutyTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentDutyTasksOutcome(rsp);
        else
            return DescribeAgentDutyTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentDutyTasksOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeAgentDutyTasksAsync(const DescribeAgentDutyTasksRequest& request, const DescribeAgentDutyTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentDutyTasksRequest&;
    using Resp = DescribeAgentDutyTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentDutyTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::DescribeAgentDutyTasksOutcomeCallable TdaiClient::DescribeAgentDutyTasksCallable(const DescribeAgentDutyTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentDutyTasksOutcome>>();
    DescribeAgentDutyTasksAsync(
    request,
    [prom](
        const TdaiClient*,
        const DescribeAgentDutyTasksRequest&,
        DescribeAgentDutyTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::DescribeAgentInstanceOutcome TdaiClient::DescribeAgentInstance(const DescribeAgentInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentInstanceResponse rsp = DescribeAgentInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentInstanceOutcome(rsp);
        else
            return DescribeAgentInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentInstanceOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeAgentInstanceAsync(const DescribeAgentInstanceRequest& request, const DescribeAgentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentInstanceRequest&;
    using Resp = DescribeAgentInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::DescribeAgentInstanceOutcomeCallable TdaiClient::DescribeAgentInstanceCallable(const DescribeAgentInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentInstanceOutcome>>();
    DescribeAgentInstanceAsync(
    request,
    [prom](
        const TdaiClient*,
        const DescribeAgentInstanceRequest&,
        DescribeAgentInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::DescribeAgentInstancesOutcome TdaiClient::DescribeAgentInstances(const DescribeAgentInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentInstancesResponse rsp = DescribeAgentInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentInstancesOutcome(rsp);
        else
            return DescribeAgentInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentInstancesOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeAgentInstancesAsync(const DescribeAgentInstancesRequest& request, const DescribeAgentInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentInstancesRequest&;
    using Resp = DescribeAgentInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::DescribeAgentInstancesOutcomeCallable TdaiClient::DescribeAgentInstancesCallable(const DescribeAgentInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentInstancesOutcome>>();
    DescribeAgentInstancesAsync(
    request,
    [prom](
        const TdaiClient*,
        const DescribeAgentInstancesRequest&,
        DescribeAgentInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::DescribeAgentsOutcome TdaiClient::DescribeAgents(const DescribeAgentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentsResponse rsp = DescribeAgentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentsOutcome(rsp);
        else
            return DescribeAgentsOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentsOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeAgentsAsync(const DescribeAgentsRequest& request, const DescribeAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentsRequest&;
    using Resp = DescribeAgentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::DescribeAgentsOutcomeCallable TdaiClient::DescribeAgentsCallable(const DescribeAgentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentsOutcome>>();
    DescribeAgentsAsync(
    request,
    [prom](
        const TdaiClient*,
        const DescribeAgentsRequest&,
        DescribeAgentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::DescribeChatDetailOutcome TdaiClient::DescribeChatDetail(const DescribeChatDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChatDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChatDetailResponse rsp = DescribeChatDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChatDetailOutcome(rsp);
        else
            return DescribeChatDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeChatDetailOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeChatDetailAsync(const DescribeChatDetailRequest& request, const DescribeChatDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChatDetailRequest&;
    using Resp = DescribeChatDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChatDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::DescribeChatDetailOutcomeCallable TdaiClient::DescribeChatDetailCallable(const DescribeChatDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChatDetailOutcome>>();
    DescribeChatDetailAsync(
    request,
    [prom](
        const TdaiClient*,
        const DescribeChatDetailRequest&,
        DescribeChatDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::DescribeChatsOutcome TdaiClient::DescribeChats(const DescribeChatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChatsResponse rsp = DescribeChatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChatsOutcome(rsp);
        else
            return DescribeChatsOutcome(o.GetError());
    }
    else
    {
        return DescribeChatsOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeChatsAsync(const DescribeChatsRequest& request, const DescribeChatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChatsRequest&;
    using Resp = DescribeChatsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChats", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::DescribeChatsOutcomeCallable TdaiClient::DescribeChatsCallable(const DescribeChatsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChatsOutcome>>();
    DescribeChatsAsync(
    request,
    [prom](
        const TdaiClient*,
        const DescribeChatsRequest&,
        DescribeChatsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::DescribeReportUrlOutcome TdaiClient::DescribeReportUrl(const DescribeReportUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReportUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReportUrlResponse rsp = DescribeReportUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReportUrlOutcome(rsp);
        else
            return DescribeReportUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeReportUrlOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeReportUrlAsync(const DescribeReportUrlRequest& request, const DescribeReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReportUrlRequest&;
    using Resp = DescribeReportUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReportUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::DescribeReportUrlOutcomeCallable TdaiClient::DescribeReportUrlCallable(const DescribeReportUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReportUrlOutcome>>();
    DescribeReportUrlAsync(
    request,
    [prom](
        const TdaiClient*,
        const DescribeReportUrlRequest&,
        DescribeReportUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::IsolateAgentInstanceOutcome TdaiClient::IsolateAgentInstance(const IsolateAgentInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateAgentInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateAgentInstanceResponse rsp = IsolateAgentInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateAgentInstanceOutcome(rsp);
        else
            return IsolateAgentInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateAgentInstanceOutcome(outcome.GetError());
    }
}

void TdaiClient::IsolateAgentInstanceAsync(const IsolateAgentInstanceRequest& request, const IsolateAgentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateAgentInstanceRequest&;
    using Resp = IsolateAgentInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateAgentInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::IsolateAgentInstanceOutcomeCallable TdaiClient::IsolateAgentInstanceCallable(const IsolateAgentInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateAgentInstanceOutcome>>();
    IsolateAgentInstanceAsync(
    request,
    [prom](
        const TdaiClient*,
        const IsolateAgentInstanceRequest&,
        IsolateAgentInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::ModifyAgentInstanceParametersOutcome TdaiClient::ModifyAgentInstanceParameters(const ModifyAgentInstanceParametersRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAgentInstanceParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAgentInstanceParametersResponse rsp = ModifyAgentInstanceParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAgentInstanceParametersOutcome(rsp);
        else
            return ModifyAgentInstanceParametersOutcome(o.GetError());
    }
    else
    {
        return ModifyAgentInstanceParametersOutcome(outcome.GetError());
    }
}

void TdaiClient::ModifyAgentInstanceParametersAsync(const ModifyAgentInstanceParametersRequest& request, const ModifyAgentInstanceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAgentInstanceParametersRequest&;
    using Resp = ModifyAgentInstanceParametersResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAgentInstanceParameters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::ModifyAgentInstanceParametersOutcomeCallable TdaiClient::ModifyAgentInstanceParametersCallable(const ModifyAgentInstanceParametersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAgentInstanceParametersOutcome>>();
    ModifyAgentInstanceParametersAsync(
    request,
    [prom](
        const TdaiClient*,
        const ModifyAgentInstanceParametersRequest&,
        ModifyAgentInstanceParametersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::ModifyChatTitleOutcome TdaiClient::ModifyChatTitle(const ModifyChatTitleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyChatTitle");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyChatTitleResponse rsp = ModifyChatTitleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyChatTitleOutcome(rsp);
        else
            return ModifyChatTitleOutcome(o.GetError());
    }
    else
    {
        return ModifyChatTitleOutcome(outcome.GetError());
    }
}

void TdaiClient::ModifyChatTitleAsync(const ModifyChatTitleRequest& request, const ModifyChatTitleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyChatTitleRequest&;
    using Resp = ModifyChatTitleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyChatTitle", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::ModifyChatTitleOutcomeCallable TdaiClient::ModifyChatTitleCallable(const ModifyChatTitleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyChatTitleOutcome>>();
    ModifyChatTitleAsync(
    request,
    [prom](
        const TdaiClient*,
        const ModifyChatTitleRequest&,
        ModifyChatTitleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::PauseAgentWorkOutcome TdaiClient::PauseAgentWork(const PauseAgentWorkRequest &request)
{
    auto outcome = MakeRequest(request, "PauseAgentWork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseAgentWorkResponse rsp = PauseAgentWorkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseAgentWorkOutcome(rsp);
        else
            return PauseAgentWorkOutcome(o.GetError());
    }
    else
    {
        return PauseAgentWorkOutcome(outcome.GetError());
    }
}

void TdaiClient::PauseAgentWorkAsync(const PauseAgentWorkRequest& request, const PauseAgentWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PauseAgentWorkRequest&;
    using Resp = PauseAgentWorkResponse;

    DoRequestAsync<Req, Resp>(
        "PauseAgentWork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::PauseAgentWorkOutcomeCallable TdaiClient::PauseAgentWorkCallable(const PauseAgentWorkRequest &request)
{
    const auto prom = std::make_shared<std::promise<PauseAgentWorkOutcome>>();
    PauseAgentWorkAsync(
    request,
    [prom](
        const TdaiClient*,
        const PauseAgentWorkRequest&,
        PauseAgentWorkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::RecoverAgentInstanceOutcome TdaiClient::RecoverAgentInstance(const RecoverAgentInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverAgentInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverAgentInstanceResponse rsp = RecoverAgentInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverAgentInstanceOutcome(rsp);
        else
            return RecoverAgentInstanceOutcome(o.GetError());
    }
    else
    {
        return RecoverAgentInstanceOutcome(outcome.GetError());
    }
}

void TdaiClient::RecoverAgentInstanceAsync(const RecoverAgentInstanceRequest& request, const RecoverAgentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecoverAgentInstanceRequest&;
    using Resp = RecoverAgentInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RecoverAgentInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::RecoverAgentInstanceOutcomeCallable TdaiClient::RecoverAgentInstanceCallable(const RecoverAgentInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecoverAgentInstanceOutcome>>();
    RecoverAgentInstanceAsync(
    request,
    [prom](
        const TdaiClient*,
        const RecoverAgentInstanceRequest&,
        RecoverAgentInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::RemoveChatOutcome TdaiClient::RemoveChat(const RemoveChatRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveChat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveChatResponse rsp = RemoveChatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveChatOutcome(rsp);
        else
            return RemoveChatOutcome(o.GetError());
    }
    else
    {
        return RemoveChatOutcome(outcome.GetError());
    }
}

void TdaiClient::RemoveChatAsync(const RemoveChatRequest& request, const RemoveChatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveChatRequest&;
    using Resp = RemoveChatResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveChat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::RemoveChatOutcomeCallable TdaiClient::RemoveChatCallable(const RemoveChatRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveChatOutcome>>();
    RemoveChatAsync(
    request,
    [prom](
        const TdaiClient*,
        const RemoveChatRequest&,
        RemoveChatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::StartAgentTaskOutcome TdaiClient::StartAgentTask(const StartAgentTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StartAgentTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartAgentTaskResponse rsp = StartAgentTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartAgentTaskOutcome(rsp);
        else
            return StartAgentTaskOutcome(o.GetError());
    }
    else
    {
        return StartAgentTaskOutcome(outcome.GetError());
    }
}

void TdaiClient::StartAgentTaskAsync(const StartAgentTaskRequest& request, const StartAgentTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartAgentTaskRequest&;
    using Resp = StartAgentTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StartAgentTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::StartAgentTaskOutcomeCallable TdaiClient::StartAgentTaskCallable(const StartAgentTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartAgentTaskOutcome>>();
    StartAgentTaskAsync(
    request,
    [prom](
        const TdaiClient*,
        const StartAgentTaskRequest&,
        StartAgentTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::TerminateAgentInstanceOutcome TdaiClient::TerminateAgentInstance(const TerminateAgentInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateAgentInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateAgentInstanceResponse rsp = TerminateAgentInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateAgentInstanceOutcome(rsp);
        else
            return TerminateAgentInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateAgentInstanceOutcome(outcome.GetError());
    }
}

void TdaiClient::TerminateAgentInstanceAsync(const TerminateAgentInstanceRequest& request, const TerminateAgentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateAgentInstanceRequest&;
    using Resp = TerminateAgentInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateAgentInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::TerminateAgentInstanceOutcomeCallable TdaiClient::TerminateAgentInstanceCallable(const TerminateAgentInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateAgentInstanceOutcome>>();
    TerminateAgentInstanceAsync(
    request,
    [prom](
        const TdaiClient*,
        const TerminateAgentInstanceRequest&,
        TerminateAgentInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

