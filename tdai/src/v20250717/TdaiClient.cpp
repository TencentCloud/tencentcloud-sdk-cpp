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

TdaiClient::CreateMemoryPlusSpaceOutcome TdaiClient::CreateMemoryPlusSpace(const CreateMemoryPlusSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMemoryPlusSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMemoryPlusSpaceResponse rsp = CreateMemoryPlusSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMemoryPlusSpaceOutcome(rsp);
        else
            return CreateMemoryPlusSpaceOutcome(o.GetError());
    }
    else
    {
        return CreateMemoryPlusSpaceOutcome(outcome.GetError());
    }
}

void TdaiClient::CreateMemoryPlusSpaceAsync(const CreateMemoryPlusSpaceRequest& request, const CreateMemoryPlusSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMemoryPlusSpaceRequest&;
    using Resp = CreateMemoryPlusSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMemoryPlusSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::CreateMemoryPlusSpaceOutcomeCallable TdaiClient::CreateMemoryPlusSpaceCallable(const CreateMemoryPlusSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMemoryPlusSpaceOutcome>>();
    CreateMemoryPlusSpaceAsync(
    request,
    [prom](
        const TdaiClient*,
        const CreateMemoryPlusSpaceRequest&,
        CreateMemoryPlusSpaceOutcome resp,
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

TdaiClient::DescribeMemoryPlusRecordOutcome TdaiClient::DescribeMemoryPlusRecord(const DescribeMemoryPlusRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMemoryPlusRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMemoryPlusRecordResponse rsp = DescribeMemoryPlusRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMemoryPlusRecordOutcome(rsp);
        else
            return DescribeMemoryPlusRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeMemoryPlusRecordOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeMemoryPlusRecordAsync(const DescribeMemoryPlusRecordRequest& request, const DescribeMemoryPlusRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMemoryPlusRecordRequest&;
    using Resp = DescribeMemoryPlusRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMemoryPlusRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::DescribeMemoryPlusRecordOutcomeCallable TdaiClient::DescribeMemoryPlusRecordCallable(const DescribeMemoryPlusRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMemoryPlusRecordOutcome>>();
    DescribeMemoryPlusRecordAsync(
    request,
    [prom](
        const TdaiClient*,
        const DescribeMemoryPlusRecordRequest&,
        DescribeMemoryPlusRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::DescribeMemoryPlusSpaceOutcome TdaiClient::DescribeMemoryPlusSpace(const DescribeMemoryPlusSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMemoryPlusSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMemoryPlusSpaceResponse rsp = DescribeMemoryPlusSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMemoryPlusSpaceOutcome(rsp);
        else
            return DescribeMemoryPlusSpaceOutcome(o.GetError());
    }
    else
    {
        return DescribeMemoryPlusSpaceOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeMemoryPlusSpaceAsync(const DescribeMemoryPlusSpaceRequest& request, const DescribeMemoryPlusSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMemoryPlusSpaceRequest&;
    using Resp = DescribeMemoryPlusSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMemoryPlusSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::DescribeMemoryPlusSpaceOutcomeCallable TdaiClient::DescribeMemoryPlusSpaceCallable(const DescribeMemoryPlusSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMemoryPlusSpaceOutcome>>();
    DescribeMemoryPlusSpaceAsync(
    request,
    [prom](
        const TdaiClient*,
        const DescribeMemoryPlusSpaceRequest&,
        DescribeMemoryPlusSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::DescribeMemoryPlusSpacesOutcome TdaiClient::DescribeMemoryPlusSpaces(const DescribeMemoryPlusSpacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMemoryPlusSpaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMemoryPlusSpacesResponse rsp = DescribeMemoryPlusSpacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMemoryPlusSpacesOutcome(rsp);
        else
            return DescribeMemoryPlusSpacesOutcome(o.GetError());
    }
    else
    {
        return DescribeMemoryPlusSpacesOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeMemoryPlusSpacesAsync(const DescribeMemoryPlusSpacesRequest& request, const DescribeMemoryPlusSpacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMemoryPlusSpacesRequest&;
    using Resp = DescribeMemoryPlusSpacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMemoryPlusSpaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::DescribeMemoryPlusSpacesOutcomeCallable TdaiClient::DescribeMemoryPlusSpacesCallable(const DescribeMemoryPlusSpacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMemoryPlusSpacesOutcome>>();
    DescribeMemoryPlusSpacesAsync(
    request,
    [prom](
        const TdaiClient*,
        const DescribeMemoryPlusSpacesRequest&,
        DescribeMemoryPlusSpacesOutcome resp,
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

TdaiClient::DescribeServiceAccessKeyOutcome TdaiClient::DescribeServiceAccessKey(const DescribeServiceAccessKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceAccessKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceAccessKeyResponse rsp = DescribeServiceAccessKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceAccessKeyOutcome(rsp);
        else
            return DescribeServiceAccessKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceAccessKeyOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeServiceAccessKeyAsync(const DescribeServiceAccessKeyRequest& request, const DescribeServiceAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceAccessKeyRequest&;
    using Resp = DescribeServiceAccessKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceAccessKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::DescribeServiceAccessKeyOutcomeCallable TdaiClient::DescribeServiceAccessKeyCallable(const DescribeServiceAccessKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceAccessKeyOutcome>>();
    DescribeServiceAccessKeyAsync(
    request,
    [prom](
        const TdaiClient*,
        const DescribeServiceAccessKeyRequest&,
        DescribeServiceAccessKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdaiClient::DestroyMemoryPlusSpaceOutcome TdaiClient::DestroyMemoryPlusSpace(const DestroyMemoryPlusSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyMemoryPlusSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyMemoryPlusSpaceResponse rsp = DestroyMemoryPlusSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyMemoryPlusSpaceOutcome(rsp);
        else
            return DestroyMemoryPlusSpaceOutcome(o.GetError());
    }
    else
    {
        return DestroyMemoryPlusSpaceOutcome(outcome.GetError());
    }
}

void TdaiClient::DestroyMemoryPlusSpaceAsync(const DestroyMemoryPlusSpaceRequest& request, const DestroyMemoryPlusSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyMemoryPlusSpaceRequest&;
    using Resp = DestroyMemoryPlusSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyMemoryPlusSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::DestroyMemoryPlusSpaceOutcomeCallable TdaiClient::DestroyMemoryPlusSpaceCallable(const DestroyMemoryPlusSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyMemoryPlusSpaceOutcome>>();
    DestroyMemoryPlusSpaceAsync(
    request,
    [prom](
        const TdaiClient*,
        const DestroyMemoryPlusSpaceRequest&,
        DestroyMemoryPlusSpaceOutcome resp,
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

TdaiClient::IsolateMemoryPlusSpaceOutcome TdaiClient::IsolateMemoryPlusSpace(const IsolateMemoryPlusSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateMemoryPlusSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateMemoryPlusSpaceResponse rsp = IsolateMemoryPlusSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateMemoryPlusSpaceOutcome(rsp);
        else
            return IsolateMemoryPlusSpaceOutcome(o.GetError());
    }
    else
    {
        return IsolateMemoryPlusSpaceOutcome(outcome.GetError());
    }
}

void TdaiClient::IsolateMemoryPlusSpaceAsync(const IsolateMemoryPlusSpaceRequest& request, const IsolateMemoryPlusSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateMemoryPlusSpaceRequest&;
    using Resp = IsolateMemoryPlusSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateMemoryPlusSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::IsolateMemoryPlusSpaceOutcomeCallable TdaiClient::IsolateMemoryPlusSpaceCallable(const IsolateMemoryPlusSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateMemoryPlusSpaceOutcome>>();
    IsolateMemoryPlusSpaceAsync(
    request,
    [prom](
        const TdaiClient*,
        const IsolateMemoryPlusSpaceRequest&,
        IsolateMemoryPlusSpaceOutcome resp,
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

TdaiClient::ModifyMemoryPlusSpaceOutcome TdaiClient::ModifyMemoryPlusSpace(const ModifyMemoryPlusSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMemoryPlusSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMemoryPlusSpaceResponse rsp = ModifyMemoryPlusSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMemoryPlusSpaceOutcome(rsp);
        else
            return ModifyMemoryPlusSpaceOutcome(o.GetError());
    }
    else
    {
        return ModifyMemoryPlusSpaceOutcome(outcome.GetError());
    }
}

void TdaiClient::ModifyMemoryPlusSpaceAsync(const ModifyMemoryPlusSpaceRequest& request, const ModifyMemoryPlusSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMemoryPlusSpaceRequest&;
    using Resp = ModifyMemoryPlusSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMemoryPlusSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::ModifyMemoryPlusSpaceOutcomeCallable TdaiClient::ModifyMemoryPlusSpaceCallable(const ModifyMemoryPlusSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMemoryPlusSpaceOutcome>>();
    ModifyMemoryPlusSpaceAsync(
    request,
    [prom](
        const TdaiClient*,
        const ModifyMemoryPlusSpaceRequest&,
        ModifyMemoryPlusSpaceOutcome resp,
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

TdaiClient::RecoverMemoryPlusSpaceOutcome TdaiClient::RecoverMemoryPlusSpace(const RecoverMemoryPlusSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverMemoryPlusSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverMemoryPlusSpaceResponse rsp = RecoverMemoryPlusSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverMemoryPlusSpaceOutcome(rsp);
        else
            return RecoverMemoryPlusSpaceOutcome(o.GetError());
    }
    else
    {
        return RecoverMemoryPlusSpaceOutcome(outcome.GetError());
    }
}

void TdaiClient::RecoverMemoryPlusSpaceAsync(const RecoverMemoryPlusSpaceRequest& request, const RecoverMemoryPlusSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecoverMemoryPlusSpaceRequest&;
    using Resp = RecoverMemoryPlusSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "RecoverMemoryPlusSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdaiClient::RecoverMemoryPlusSpaceOutcomeCallable TdaiClient::RecoverMemoryPlusSpaceCallable(const RecoverMemoryPlusSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecoverMemoryPlusSpaceOutcome>>();
    RecoverMemoryPlusSpaceAsync(
    request,
    [prom](
        const TdaiClient*,
        const RecoverMemoryPlusSpaceRequest&,
        RecoverMemoryPlusSpaceOutcome resp,
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

