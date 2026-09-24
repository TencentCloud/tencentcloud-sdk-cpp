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

#include <tencentcloud/workbuddyenterprise/v20260709/WorkbuddyenterpriseClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Workbuddyenterprise::V20260709;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

namespace
{
    const string VERSION = "2026-07-09";
    const string ENDPOINT = "workbuddyenterprise.tencentcloudapi.com";
}

WorkbuddyenterpriseClient::WorkbuddyenterpriseClient(const Credential &credential, const string &region) :
    WorkbuddyenterpriseClient(credential, region, ClientProfile())
{
}

WorkbuddyenterpriseClient::WorkbuddyenterpriseClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WorkbuddyenterpriseClient::BindExternalAgentOutcome WorkbuddyenterpriseClient::BindExternalAgent(const BindExternalAgentRequest &request)
{
    auto outcome = MakeRequest(request, "BindExternalAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindExternalAgentResponse rsp = BindExternalAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindExternalAgentOutcome(rsp);
        else
            return BindExternalAgentOutcome(o.GetError());
    }
    else
    {
        return BindExternalAgentOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::BindExternalAgentAsync(const BindExternalAgentRequest& request, const BindExternalAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindExternalAgentRequest&;
    using Resp = BindExternalAgentResponse;

    DoRequestAsync<Req, Resp>(
        "BindExternalAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::BindExternalAgentOutcomeCallable WorkbuddyenterpriseClient::BindExternalAgentCallable(const BindExternalAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindExternalAgentOutcome>>();
    BindExternalAgentAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const BindExternalAgentRequest&,
        BindExternalAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::CreateAgentOutcome WorkbuddyenterpriseClient::CreateAgent(const CreateAgentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAgentResponse rsp = CreateAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAgentOutcome(rsp);
        else
            return CreateAgentOutcome(o.GetError());
    }
    else
    {
        return CreateAgentOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::CreateAgentAsync(const CreateAgentRequest& request, const CreateAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAgentRequest&;
    using Resp = CreateAgentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::CreateAgentOutcomeCallable WorkbuddyenterpriseClient::CreateAgentCallable(const CreateAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAgentOutcome>>();
    CreateAgentAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const CreateAgentRequest&,
        CreateAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::CreateAgentSessionOutcome WorkbuddyenterpriseClient::CreateAgentSession(const CreateAgentSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAgentSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAgentSessionResponse rsp = CreateAgentSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAgentSessionOutcome(rsp);
        else
            return CreateAgentSessionOutcome(o.GetError());
    }
    else
    {
        return CreateAgentSessionOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::CreateAgentSessionAsync(const CreateAgentSessionRequest& request, const CreateAgentSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAgentSessionRequest&;
    using Resp = CreateAgentSessionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAgentSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::CreateAgentSessionOutcomeCallable WorkbuddyenterpriseClient::CreateAgentSessionCallable(const CreateAgentSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAgentSessionOutcome>>();
    CreateAgentSessionAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const CreateAgentSessionRequest&,
        CreateAgentSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::CreateAgentVersionOutcome WorkbuddyenterpriseClient::CreateAgentVersion(const CreateAgentVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAgentVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAgentVersionResponse rsp = CreateAgentVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAgentVersionOutcome(rsp);
        else
            return CreateAgentVersionOutcome(o.GetError());
    }
    else
    {
        return CreateAgentVersionOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::CreateAgentVersionAsync(const CreateAgentVersionRequest& request, const CreateAgentVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAgentVersionRequest&;
    using Resp = CreateAgentVersionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAgentVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::CreateAgentVersionOutcomeCallable WorkbuddyenterpriseClient::CreateAgentVersionCallable(const CreateAgentVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAgentVersionOutcome>>();
    CreateAgentVersionAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const CreateAgentVersionRequest&,
        CreateAgentVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::CreateAgentVersionFromSourceOutcome WorkbuddyenterpriseClient::CreateAgentVersionFromSource(const CreateAgentVersionFromSourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAgentVersionFromSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAgentVersionFromSourceResponse rsp = CreateAgentVersionFromSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAgentVersionFromSourceOutcome(rsp);
        else
            return CreateAgentVersionFromSourceOutcome(o.GetError());
    }
    else
    {
        return CreateAgentVersionFromSourceOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::CreateAgentVersionFromSourceAsync(const CreateAgentVersionFromSourceRequest& request, const CreateAgentVersionFromSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAgentVersionFromSourceRequest&;
    using Resp = CreateAgentVersionFromSourceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAgentVersionFromSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::CreateAgentVersionFromSourceOutcomeCallable WorkbuddyenterpriseClient::CreateAgentVersionFromSourceCallable(const CreateAgentVersionFromSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAgentVersionFromSourceOutcome>>();
    CreateAgentVersionFromSourceAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const CreateAgentVersionFromSourceRequest&,
        CreateAgentVersionFromSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::DeleteAgentOutcome WorkbuddyenterpriseClient::DeleteAgent(const DeleteAgentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAgentResponse rsp = DeleteAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAgentOutcome(rsp);
        else
            return DeleteAgentOutcome(o.GetError());
    }
    else
    {
        return DeleteAgentOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::DeleteAgentAsync(const DeleteAgentRequest& request, const DeleteAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAgentRequest&;
    using Resp = DeleteAgentResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::DeleteAgentOutcomeCallable WorkbuddyenterpriseClient::DeleteAgentCallable(const DeleteAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAgentOutcome>>();
    DeleteAgentAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const DeleteAgentRequest&,
        DeleteAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::DescribeAgentOutcome WorkbuddyenterpriseClient::DescribeAgent(const DescribeAgentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentResponse rsp = DescribeAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentOutcome(rsp);
        else
            return DescribeAgentOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::DescribeAgentAsync(const DescribeAgentRequest& request, const DescribeAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentRequest&;
    using Resp = DescribeAgentResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::DescribeAgentOutcomeCallable WorkbuddyenterpriseClient::DescribeAgentCallable(const DescribeAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentOutcome>>();
    DescribeAgentAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const DescribeAgentRequest&,
        DescribeAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::DescribeAgentListOutcome WorkbuddyenterpriseClient::DescribeAgentList(const DescribeAgentListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentListResponse rsp = DescribeAgentListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentListOutcome(rsp);
        else
            return DescribeAgentListOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentListOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::DescribeAgentListAsync(const DescribeAgentListRequest& request, const DescribeAgentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentListRequest&;
    using Resp = DescribeAgentListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::DescribeAgentListOutcomeCallable WorkbuddyenterpriseClient::DescribeAgentListCallable(const DescribeAgentListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentListOutcome>>();
    DescribeAgentListAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const DescribeAgentListRequest&,
        DescribeAgentListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::DescribeAgentSessionOutcome WorkbuddyenterpriseClient::DescribeAgentSession(const DescribeAgentSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentSessionResponse rsp = DescribeAgentSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentSessionOutcome(rsp);
        else
            return DescribeAgentSessionOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentSessionOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::DescribeAgentSessionAsync(const DescribeAgentSessionRequest& request, const DescribeAgentSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentSessionRequest&;
    using Resp = DescribeAgentSessionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::DescribeAgentSessionOutcomeCallable WorkbuddyenterpriseClient::DescribeAgentSessionCallable(const DescribeAgentSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentSessionOutcome>>();
    DescribeAgentSessionAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const DescribeAgentSessionRequest&,
        DescribeAgentSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::DescribeAgentSessionListOutcome WorkbuddyenterpriseClient::DescribeAgentSessionList(const DescribeAgentSessionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentSessionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentSessionListResponse rsp = DescribeAgentSessionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentSessionListOutcome(rsp);
        else
            return DescribeAgentSessionListOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentSessionListOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::DescribeAgentSessionListAsync(const DescribeAgentSessionListRequest& request, const DescribeAgentSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentSessionListRequest&;
    using Resp = DescribeAgentSessionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentSessionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::DescribeAgentSessionListOutcomeCallable WorkbuddyenterpriseClient::DescribeAgentSessionListCallable(const DescribeAgentSessionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentSessionListOutcome>>();
    DescribeAgentSessionListAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const DescribeAgentSessionListRequest&,
        DescribeAgentSessionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::DescribeAgentVersionOutcome WorkbuddyenterpriseClient::DescribeAgentVersion(const DescribeAgentVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentVersionResponse rsp = DescribeAgentVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentVersionOutcome(rsp);
        else
            return DescribeAgentVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentVersionOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::DescribeAgentVersionAsync(const DescribeAgentVersionRequest& request, const DescribeAgentVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentVersionRequest&;
    using Resp = DescribeAgentVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::DescribeAgentVersionOutcomeCallable WorkbuddyenterpriseClient::DescribeAgentVersionCallable(const DescribeAgentVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentVersionOutcome>>();
    DescribeAgentVersionAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const DescribeAgentVersionRequest&,
        DescribeAgentVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::DescribeAgentVersionListOutcome WorkbuddyenterpriseClient::DescribeAgentVersionList(const DescribeAgentVersionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentVersionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentVersionListResponse rsp = DescribeAgentVersionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentVersionListOutcome(rsp);
        else
            return DescribeAgentVersionListOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentVersionListOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::DescribeAgentVersionListAsync(const DescribeAgentVersionListRequest& request, const DescribeAgentVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentVersionListRequest&;
    using Resp = DescribeAgentVersionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentVersionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::DescribeAgentVersionListOutcomeCallable WorkbuddyenterpriseClient::DescribeAgentVersionListCallable(const DescribeAgentVersionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentVersionListOutcome>>();
    DescribeAgentVersionListAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const DescribeAgentVersionListRequest&,
        DescribeAgentVersionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::DescribeBuiltinModelListOutcome WorkbuddyenterpriseClient::DescribeBuiltinModelList(const DescribeBuiltinModelListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBuiltinModelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBuiltinModelListResponse rsp = DescribeBuiltinModelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBuiltinModelListOutcome(rsp);
        else
            return DescribeBuiltinModelListOutcome(o.GetError());
    }
    else
    {
        return DescribeBuiltinModelListOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::DescribeBuiltinModelListAsync(const DescribeBuiltinModelListRequest& request, const DescribeBuiltinModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBuiltinModelListRequest&;
    using Resp = DescribeBuiltinModelListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBuiltinModelList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::DescribeBuiltinModelListOutcomeCallable WorkbuddyenterpriseClient::DescribeBuiltinModelListCallable(const DescribeBuiltinModelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBuiltinModelListOutcome>>();
    DescribeBuiltinModelListAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const DescribeBuiltinModelListRequest&,
        DescribeBuiltinModelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::DescribeConnectorListOutcome WorkbuddyenterpriseClient::DescribeConnectorList(const DescribeConnectorListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConnectorList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConnectorListResponse rsp = DescribeConnectorListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConnectorListOutcome(rsp);
        else
            return DescribeConnectorListOutcome(o.GetError());
    }
    else
    {
        return DescribeConnectorListOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::DescribeConnectorListAsync(const DescribeConnectorListRequest& request, const DescribeConnectorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConnectorListRequest&;
    using Resp = DescribeConnectorListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConnectorList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::DescribeConnectorListOutcomeCallable WorkbuddyenterpriseClient::DescribeConnectorListCallable(const DescribeConnectorListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConnectorListOutcome>>();
    DescribeConnectorListAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const DescribeConnectorListRequest&,
        DescribeConnectorListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::DescribeExpertListOutcome WorkbuddyenterpriseClient::DescribeExpertList(const DescribeExpertListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExpertList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExpertListResponse rsp = DescribeExpertListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExpertListOutcome(rsp);
        else
            return DescribeExpertListOutcome(o.GetError());
    }
    else
    {
        return DescribeExpertListOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::DescribeExpertListAsync(const DescribeExpertListRequest& request, const DescribeExpertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExpertListRequest&;
    using Resp = DescribeExpertListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExpertList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::DescribeExpertListOutcomeCallable WorkbuddyenterpriseClient::DescribeExpertListCallable(const DescribeExpertListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExpertListOutcome>>();
    DescribeExpertListAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const DescribeExpertListRequest&,
        DescribeExpertListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::DescribeExternalAgentOutcome WorkbuddyenterpriseClient::DescribeExternalAgent(const DescribeExternalAgentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExternalAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExternalAgentResponse rsp = DescribeExternalAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExternalAgentOutcome(rsp);
        else
            return DescribeExternalAgentOutcome(o.GetError());
    }
    else
    {
        return DescribeExternalAgentOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::DescribeExternalAgentAsync(const DescribeExternalAgentRequest& request, const DescribeExternalAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExternalAgentRequest&;
    using Resp = DescribeExternalAgentResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExternalAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::DescribeExternalAgentOutcomeCallable WorkbuddyenterpriseClient::DescribeExternalAgentCallable(const DescribeExternalAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExternalAgentOutcome>>();
    DescribeExternalAgentAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const DescribeExternalAgentRequest&,
        DescribeExternalAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::DescribeExternalAgentListOutcome WorkbuddyenterpriseClient::DescribeExternalAgentList(const DescribeExternalAgentListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExternalAgentList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExternalAgentListResponse rsp = DescribeExternalAgentListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExternalAgentListOutcome(rsp);
        else
            return DescribeExternalAgentListOutcome(o.GetError());
    }
    else
    {
        return DescribeExternalAgentListOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::DescribeExternalAgentListAsync(const DescribeExternalAgentListRequest& request, const DescribeExternalAgentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExternalAgentListRequest&;
    using Resp = DescribeExternalAgentListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExternalAgentList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::DescribeExternalAgentListOutcomeCallable WorkbuddyenterpriseClient::DescribeExternalAgentListCallable(const DescribeExternalAgentListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExternalAgentListOutcome>>();
    DescribeExternalAgentListAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const DescribeExternalAgentListRequest&,
        DescribeExternalAgentListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::DescribeMessageEventListOutcome WorkbuddyenterpriseClient::DescribeMessageEventList(const DescribeMessageEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageEventListResponse rsp = DescribeMessageEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageEventListOutcome(rsp);
        else
            return DescribeMessageEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageEventListOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::DescribeMessageEventListAsync(const DescribeMessageEventListRequest& request, const DescribeMessageEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMessageEventListRequest&;
    using Resp = DescribeMessageEventListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMessageEventList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::DescribeMessageEventListOutcomeCallable WorkbuddyenterpriseClient::DescribeMessageEventListCallable(const DescribeMessageEventListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMessageEventListOutcome>>();
    DescribeMessageEventListAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const DescribeMessageEventListRequest&,
        DescribeMessageEventListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::DescribeSkillListOutcome WorkbuddyenterpriseClient::DescribeSkillList(const DescribeSkillListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSkillList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSkillListResponse rsp = DescribeSkillListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSkillListOutcome(rsp);
        else
            return DescribeSkillListOutcome(o.GetError());
    }
    else
    {
        return DescribeSkillListOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::DescribeSkillListAsync(const DescribeSkillListRequest& request, const DescribeSkillListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSkillListRequest&;
    using Resp = DescribeSkillListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSkillList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::DescribeSkillListOutcomeCallable WorkbuddyenterpriseClient::DescribeSkillListCallable(const DescribeSkillListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSkillListOutcome>>();
    DescribeSkillListAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const DescribeSkillListRequest&,
        DescribeSkillListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::DescribeUserAccessTokenOutcome WorkbuddyenterpriseClient::DescribeUserAccessToken(const DescribeUserAccessTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserAccessToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserAccessTokenResponse rsp = DescribeUserAccessTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserAccessTokenOutcome(rsp);
        else
            return DescribeUserAccessTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeUserAccessTokenOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::DescribeUserAccessTokenAsync(const DescribeUserAccessTokenRequest& request, const DescribeUserAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserAccessTokenRequest&;
    using Resp = DescribeUserAccessTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserAccessToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::DescribeUserAccessTokenOutcomeCallable WorkbuddyenterpriseClient::DescribeUserAccessTokenCallable(const DescribeUserAccessTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserAccessTokenOutcome>>();
    DescribeUserAccessTokenAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const DescribeUserAccessTokenRequest&,
        DescribeUserAccessTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::MigrateAgentSessionOutcome WorkbuddyenterpriseClient::MigrateAgentSession(const MigrateAgentSessionRequest &request)
{
    auto outcome = MakeRequest(request, "MigrateAgentSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MigrateAgentSessionResponse rsp = MigrateAgentSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MigrateAgentSessionOutcome(rsp);
        else
            return MigrateAgentSessionOutcome(o.GetError());
    }
    else
    {
        return MigrateAgentSessionOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::MigrateAgentSessionAsync(const MigrateAgentSessionRequest& request, const MigrateAgentSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MigrateAgentSessionRequest&;
    using Resp = MigrateAgentSessionResponse;

    DoRequestAsync<Req, Resp>(
        "MigrateAgentSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::MigrateAgentSessionOutcomeCallable WorkbuddyenterpriseClient::MigrateAgentSessionCallable(const MigrateAgentSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<MigrateAgentSessionOutcome>>();
    MigrateAgentSessionAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const MigrateAgentSessionRequest&,
        MigrateAgentSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::ModifyAgentOutcome WorkbuddyenterpriseClient::ModifyAgent(const ModifyAgentRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAgentResponse rsp = ModifyAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAgentOutcome(rsp);
        else
            return ModifyAgentOutcome(o.GetError());
    }
    else
    {
        return ModifyAgentOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::ModifyAgentAsync(const ModifyAgentRequest& request, const ModifyAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAgentRequest&;
    using Resp = ModifyAgentResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::ModifyAgentOutcomeCallable WorkbuddyenterpriseClient::ModifyAgentCallable(const ModifyAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAgentOutcome>>();
    ModifyAgentAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const ModifyAgentRequest&,
        ModifyAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::ModifyAgentA2AConfigOutcome WorkbuddyenterpriseClient::ModifyAgentA2AConfig(const ModifyAgentA2AConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAgentA2AConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAgentA2AConfigResponse rsp = ModifyAgentA2AConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAgentA2AConfigOutcome(rsp);
        else
            return ModifyAgentA2AConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyAgentA2AConfigOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::ModifyAgentA2AConfigAsync(const ModifyAgentA2AConfigRequest& request, const ModifyAgentA2AConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAgentA2AConfigRequest&;
    using Resp = ModifyAgentA2AConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAgentA2AConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::ModifyAgentA2AConfigOutcomeCallable WorkbuddyenterpriseClient::ModifyAgentA2AConfigCallable(const ModifyAgentA2AConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAgentA2AConfigOutcome>>();
    ModifyAgentA2AConfigAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const ModifyAgentA2AConfigRequest&,
        ModifyAgentA2AConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::ModifyAgentRoutingOutcome WorkbuddyenterpriseClient::ModifyAgentRouting(const ModifyAgentRoutingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAgentRouting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAgentRoutingResponse rsp = ModifyAgentRoutingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAgentRoutingOutcome(rsp);
        else
            return ModifyAgentRoutingOutcome(o.GetError());
    }
    else
    {
        return ModifyAgentRoutingOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::ModifyAgentRoutingAsync(const ModifyAgentRoutingRequest& request, const ModifyAgentRoutingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAgentRoutingRequest&;
    using Resp = ModifyAgentRoutingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAgentRouting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::ModifyAgentRoutingOutcomeCallable WorkbuddyenterpriseClient::ModifyAgentRoutingCallable(const ModifyAgentRoutingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAgentRoutingOutcome>>();
    ModifyAgentRoutingAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const ModifyAgentRoutingRequest&,
        ModifyAgentRoutingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::ModifyAgentVersionOutcome WorkbuddyenterpriseClient::ModifyAgentVersion(const ModifyAgentVersionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAgentVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAgentVersionResponse rsp = ModifyAgentVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAgentVersionOutcome(rsp);
        else
            return ModifyAgentVersionOutcome(o.GetError());
    }
    else
    {
        return ModifyAgentVersionOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::ModifyAgentVersionAsync(const ModifyAgentVersionRequest& request, const ModifyAgentVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAgentVersionRequest&;
    using Resp = ModifyAgentVersionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAgentVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::ModifyAgentVersionOutcomeCallable WorkbuddyenterpriseClient::ModifyAgentVersionCallable(const ModifyAgentVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAgentVersionOutcome>>();
    ModifyAgentVersionAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const ModifyAgentVersionRequest&,
        ModifyAgentVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WorkbuddyenterpriseClient::UnbindExternalAgentOutcome WorkbuddyenterpriseClient::UnbindExternalAgent(const UnbindExternalAgentRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindExternalAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindExternalAgentResponse rsp = UnbindExternalAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindExternalAgentOutcome(rsp);
        else
            return UnbindExternalAgentOutcome(o.GetError());
    }
    else
    {
        return UnbindExternalAgentOutcome(outcome.GetError());
    }
}

void WorkbuddyenterpriseClient::UnbindExternalAgentAsync(const UnbindExternalAgentRequest& request, const UnbindExternalAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindExternalAgentRequest&;
    using Resp = UnbindExternalAgentResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindExternalAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WorkbuddyenterpriseClient::UnbindExternalAgentOutcomeCallable WorkbuddyenterpriseClient::UnbindExternalAgentCallable(const UnbindExternalAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindExternalAgentOutcome>>();
    UnbindExternalAgentAsync(
    request,
    [prom](
        const WorkbuddyenterpriseClient*,
        const UnbindExternalAgentRequest&,
        UnbindExternalAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

