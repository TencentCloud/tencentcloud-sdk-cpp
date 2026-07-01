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

#include <tencentcloud/adp/v20260520/AdpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Adp::V20260520;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

namespace
{
    const string VERSION = "2026-05-20";
    const string ENDPOINT = "adp.tencentcloudapi.com";
}

AdpClient::AdpClient(const Credential &credential, const string &region) :
    AdpClient(credential, region, ClientProfile())
{
}

AdpClient::AdpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AdpClient::CopyAgentFromAppOutcome AdpClient::CopyAgentFromApp(const CopyAgentFromAppRequest &request)
{
    auto outcome = MakeRequest(request, "CopyAgentFromApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyAgentFromAppResponse rsp = CopyAgentFromAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyAgentFromAppOutcome(rsp);
        else
            return CopyAgentFromAppOutcome(o.GetError());
    }
    else
    {
        return CopyAgentFromAppOutcome(outcome.GetError());
    }
}

void AdpClient::CopyAgentFromAppAsync(const CopyAgentFromAppRequest& request, const CopyAgentFromAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyAgentFromAppRequest&;
    using Resp = CopyAgentFromAppResponse;

    DoRequestAsync<Req, Resp>(
        "CopyAgentFromApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CopyAgentFromAppOutcomeCallable AdpClient::CopyAgentFromAppCallable(const CopyAgentFromAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyAgentFromAppOutcome>>();
    CopyAgentFromAppAsync(
    request,
    [prom](
        const AdpClient*,
        const CopyAgentFromAppRequest&,
        CopyAgentFromAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CopyAppOutcome AdpClient::CopyApp(const CopyAppRequest &request)
{
    auto outcome = MakeRequest(request, "CopyApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyAppResponse rsp = CopyAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyAppOutcome(rsp);
        else
            return CopyAppOutcome(o.GetError());
    }
    else
    {
        return CopyAppOutcome(outcome.GetError());
    }
}

void AdpClient::CopyAppAsync(const CopyAppRequest& request, const CopyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyAppRequest&;
    using Resp = CopyAppResponse;

    DoRequestAsync<Req, Resp>(
        "CopyApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CopyAppOutcomeCallable AdpClient::CopyAppCallable(const CopyAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyAppOutcome>>();
    CopyAppAsync(
    request,
    [prom](
        const AdpClient*,
        const CopyAppRequest&,
        CopyAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateAgentOutcome AdpClient::CreateAgent(const CreateAgentRequest &request)
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

void AdpClient::CreateAgentAsync(const CreateAgentRequest& request, const CreateAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AdpClient::CreateAgentOutcomeCallable AdpClient::CreateAgentCallable(const CreateAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAgentOutcome>>();
    CreateAgentAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateAgentRequest&,
        CreateAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateAppOutcome AdpClient::CreateApp(const CreateAppRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppResponse rsp = CreateAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppOutcome(rsp);
        else
            return CreateAppOutcome(o.GetError());
    }
    else
    {
        return CreateAppOutcome(outcome.GetError());
    }
}

void AdpClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAppRequest&;
    using Resp = CreateAppResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateAppOutcomeCallable AdpClient::CreateAppCallable(const CreateAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAppOutcome>>();
    CreateAppAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateAppRequest&,
        CreateAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateConversationOutcome AdpClient::CreateConversation(const CreateConversationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConversationResponse rsp = CreateConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConversationOutcome(rsp);
        else
            return CreateConversationOutcome(o.GetError());
    }
    else
    {
        return CreateConversationOutcome(outcome.GetError());
    }
}

void AdpClient::CreateConversationAsync(const CreateConversationRequest& request, const CreateConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConversationRequest&;
    using Resp = CreateConversationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateConversationOutcomeCallable AdpClient::CreateConversationCallable(const CreateConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConversationOutcome>>();
    CreateConversationAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateConversationRequest&,
        CreateConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateReleaseOutcome AdpClient::CreateRelease(const CreateReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReleaseResponse rsp = CreateReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReleaseOutcome(rsp);
        else
            return CreateReleaseOutcome(o.GetError());
    }
    else
    {
        return CreateReleaseOutcome(outcome.GetError());
    }
}

void AdpClient::CreateReleaseAsync(const CreateReleaseRequest& request, const CreateReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateReleaseRequest&;
    using Resp = CreateReleaseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRelease", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateReleaseOutcomeCallable AdpClient::CreateReleaseCallable(const CreateReleaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReleaseOutcome>>();
    CreateReleaseAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateReleaseRequest&,
        CreateReleaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateSpaceOutcome AdpClient::CreateSpace(const CreateSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSpaceResponse rsp = CreateSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSpaceOutcome(rsp);
        else
            return CreateSpaceOutcome(o.GetError());
    }
    else
    {
        return CreateSpaceOutcome(outcome.GetError());
    }
}

void AdpClient::CreateSpaceAsync(const CreateSpaceRequest& request, const CreateSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSpaceRequest&;
    using Resp = CreateSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateSpaceOutcomeCallable AdpClient::CreateSpaceCallable(const CreateSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSpaceOutcome>>();
    CreateSpaceAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateSpaceRequest&,
        CreateSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateVariableOutcome AdpClient::CreateVariable(const CreateVariableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVariable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVariableResponse rsp = CreateVariableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVariableOutcome(rsp);
        else
            return CreateVariableOutcome(o.GetError());
    }
    else
    {
        return CreateVariableOutcome(outcome.GetError());
    }
}

void AdpClient::CreateVariableAsync(const CreateVariableRequest& request, const CreateVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVariableRequest&;
    using Resp = CreateVariableResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVariable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateVariableOutcomeCallable AdpClient::CreateVariableCallable(const CreateVariableRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVariableOutcome>>();
    CreateVariableAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateVariableRequest&,
        CreateVariableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateWebSocketTokenOutcome AdpClient::CreateWebSocketToken(const CreateWebSocketTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWebSocketToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWebSocketTokenResponse rsp = CreateWebSocketTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWebSocketTokenOutcome(rsp);
        else
            return CreateWebSocketTokenOutcome(o.GetError());
    }
    else
    {
        return CreateWebSocketTokenOutcome(outcome.GetError());
    }
}

void AdpClient::CreateWebSocketTokenAsync(const CreateWebSocketTokenRequest& request, const CreateWebSocketTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWebSocketTokenRequest&;
    using Resp = CreateWebSocketTokenResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWebSocketToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateWebSocketTokenOutcomeCallable AdpClient::CreateWebSocketTokenCallable(const CreateWebSocketTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWebSocketTokenOutcome>>();
    CreateWebSocketTokenAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateWebSocketTokenRequest&,
        CreateWebSocketTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateWorkspaceCredentialOutcome AdpClient::CreateWorkspaceCredential(const CreateWorkspaceCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkspaceCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkspaceCredentialResponse rsp = CreateWorkspaceCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkspaceCredentialOutcome(rsp);
        else
            return CreateWorkspaceCredentialOutcome(o.GetError());
    }
    else
    {
        return CreateWorkspaceCredentialOutcome(outcome.GetError());
    }
}

void AdpClient::CreateWorkspaceCredentialAsync(const CreateWorkspaceCredentialRequest& request, const CreateWorkspaceCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWorkspaceCredentialRequest&;
    using Resp = CreateWorkspaceCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkspaceCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateWorkspaceCredentialOutcomeCallable AdpClient::CreateWorkspaceCredentialCallable(const CreateWorkspaceCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkspaceCredentialOutcome>>();
    CreateWorkspaceCredentialAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateWorkspaceCredentialRequest&,
        CreateWorkspaceCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DeleteAppOutcome AdpClient::DeleteApp(const DeleteAppRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAppResponse rsp = DeleteAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAppOutcome(rsp);
        else
            return DeleteAppOutcome(o.GetError());
    }
    else
    {
        return DeleteAppOutcome(outcome.GetError());
    }
}

void AdpClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAppRequest&;
    using Resp = DeleteAppResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DeleteAppOutcomeCallable AdpClient::DeleteAppCallable(const DeleteAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAppOutcome>>();
    DeleteAppAsync(
    request,
    [prom](
        const AdpClient*,
        const DeleteAppRequest&,
        DeleteAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DeleteConversationOutcome AdpClient::DeleteConversation(const DeleteConversationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConversationResponse rsp = DeleteConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConversationOutcome(rsp);
        else
            return DeleteConversationOutcome(o.GetError());
    }
    else
    {
        return DeleteConversationOutcome(outcome.GetError());
    }
}

void AdpClient::DeleteConversationAsync(const DeleteConversationRequest& request, const DeleteConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConversationRequest&;
    using Resp = DeleteConversationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DeleteConversationOutcomeCallable AdpClient::DeleteConversationCallable(const DeleteConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConversationOutcome>>();
    DeleteConversationAsync(
    request,
    [prom](
        const AdpClient*,
        const DeleteConversationRequest&,
        DeleteConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DeleteSpaceOutcome AdpClient::DeleteSpace(const DeleteSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSpaceResponse rsp = DeleteSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSpaceOutcome(rsp);
        else
            return DeleteSpaceOutcome(o.GetError());
    }
    else
    {
        return DeleteSpaceOutcome(outcome.GetError());
    }
}

void AdpClient::DeleteSpaceAsync(const DeleteSpaceRequest& request, const DeleteSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSpaceRequest&;
    using Resp = DeleteSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DeleteSpaceOutcomeCallable AdpClient::DeleteSpaceCallable(const DeleteSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSpaceOutcome>>();
    DeleteSpaceAsync(
    request,
    [prom](
        const AdpClient*,
        const DeleteSpaceRequest&,
        DeleteSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DeleteVariableOutcome AdpClient::DeleteVariable(const DeleteVariableRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVariable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVariableResponse rsp = DeleteVariableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVariableOutcome(rsp);
        else
            return DeleteVariableOutcome(o.GetError());
    }
    else
    {
        return DeleteVariableOutcome(outcome.GetError());
    }
}

void AdpClient::DeleteVariableAsync(const DeleteVariableRequest& request, const DeleteVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVariableRequest&;
    using Resp = DeleteVariableResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVariable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DeleteVariableOutcomeCallable AdpClient::DeleteVariableCallable(const DeleteVariableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVariableOutcome>>();
    DeleteVariableAsync(
    request,
    [prom](
        const AdpClient*,
        const DeleteVariableRequest&,
        DeleteVariableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeAgentDetailOutcome AdpClient::DescribeAgentDetail(const DescribeAgentDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentDetailResponse rsp = DescribeAgentDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentDetailOutcome(rsp);
        else
            return DescribeAgentDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentDetailOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeAgentDetailAsync(const DescribeAgentDetailRequest& request, const DescribeAgentDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentDetailRequest&;
    using Resp = DescribeAgentDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeAgentDetailOutcomeCallable AdpClient::DescribeAgentDetailCallable(const DescribeAgentDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentDetailOutcome>>();
    DescribeAgentDetailAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeAgentDetailRequest&,
        DescribeAgentDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeAgentReleasePreviewListOutcome AdpClient::DescribeAgentReleasePreviewList(const DescribeAgentReleasePreviewListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentReleasePreviewList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentReleasePreviewListResponse rsp = DescribeAgentReleasePreviewListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentReleasePreviewListOutcome(rsp);
        else
            return DescribeAgentReleasePreviewListOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentReleasePreviewListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeAgentReleasePreviewListAsync(const DescribeAgentReleasePreviewListRequest& request, const DescribeAgentReleasePreviewListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentReleasePreviewListRequest&;
    using Resp = DescribeAgentReleasePreviewListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentReleasePreviewList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeAgentReleasePreviewListOutcomeCallable AdpClient::DescribeAgentReleasePreviewListCallable(const DescribeAgentReleasePreviewListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentReleasePreviewListOutcome>>();
    DescribeAgentReleasePreviewListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeAgentReleasePreviewListRequest&,
        DescribeAgentReleasePreviewListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeAppOutcome AdpClient::DescribeApp(const DescribeAppRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppResponse rsp = DescribeAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppOutcome(rsp);
        else
            return DescribeAppOutcome(o.GetError());
    }
    else
    {
        return DescribeAppOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeAppAsync(const DescribeAppRequest& request, const DescribeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppRequest&;
    using Resp = DescribeAppResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeAppOutcomeCallable AdpClient::DescribeAppCallable(const DescribeAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppOutcome>>();
    DescribeAppAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeAppRequest&,
        DescribeAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeAppSummaryListOutcome AdpClient::DescribeAppSummaryList(const DescribeAppSummaryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppSummaryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppSummaryListResponse rsp = DescribeAppSummaryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppSummaryListOutcome(rsp);
        else
            return DescribeAppSummaryListOutcome(o.GetError());
    }
    else
    {
        return DescribeAppSummaryListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeAppSummaryListAsync(const DescribeAppSummaryListRequest& request, const DescribeAppSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppSummaryListRequest&;
    using Resp = DescribeAppSummaryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppSummaryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeAppSummaryListOutcomeCallable AdpClient::DescribeAppSummaryListCallable(const DescribeAppSummaryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppSummaryListOutcome>>();
    DescribeAppSummaryListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeAppSummaryListRequest&,
        DescribeAppSummaryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeConversationOutcome AdpClient::DescribeConversation(const DescribeConversationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConversationResponse rsp = DescribeConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConversationOutcome(rsp);
        else
            return DescribeConversationOutcome(o.GetError());
    }
    else
    {
        return DescribeConversationOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeConversationAsync(const DescribeConversationRequest& request, const DescribeConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConversationRequest&;
    using Resp = DescribeConversationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeConversationOutcomeCallable AdpClient::DescribeConversationCallable(const DescribeConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConversationOutcome>>();
    DescribeConversationAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeConversationRequest&,
        DescribeConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeConversationListOutcome AdpClient::DescribeConversationList(const DescribeConversationListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConversationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConversationListResponse rsp = DescribeConversationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConversationListOutcome(rsp);
        else
            return DescribeConversationListOutcome(o.GetError());
    }
    else
    {
        return DescribeConversationListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeConversationListAsync(const DescribeConversationListRequest& request, const DescribeConversationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConversationListRequest&;
    using Resp = DescribeConversationListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConversationList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeConversationListOutcomeCallable AdpClient::DescribeConversationListCallable(const DescribeConversationListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConversationListOutcome>>();
    DescribeConversationListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeConversationListRequest&,
        DescribeConversationListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeConversationMessageListOutcome AdpClient::DescribeConversationMessageList(const DescribeConversationMessageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConversationMessageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConversationMessageListResponse rsp = DescribeConversationMessageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConversationMessageListOutcome(rsp);
        else
            return DescribeConversationMessageListOutcome(o.GetError());
    }
    else
    {
        return DescribeConversationMessageListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeConversationMessageListAsync(const DescribeConversationMessageListRequest& request, const DescribeConversationMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConversationMessageListRequest&;
    using Resp = DescribeConversationMessageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConversationMessageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeConversationMessageListOutcomeCallable AdpClient::DescribeConversationMessageListCallable(const DescribeConversationMessageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConversationMessageListOutcome>>();
    DescribeConversationMessageListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeConversationMessageListRequest&,
        DescribeConversationMessageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeLatestReleaseOutcome AdpClient::DescribeLatestRelease(const DescribeLatestReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLatestRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLatestReleaseResponse rsp = DescribeLatestReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLatestReleaseOutcome(rsp);
        else
            return DescribeLatestReleaseOutcome(o.GetError());
    }
    else
    {
        return DescribeLatestReleaseOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeLatestReleaseAsync(const DescribeLatestReleaseRequest& request, const DescribeLatestReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLatestReleaseRequest&;
    using Resp = DescribeLatestReleaseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLatestRelease", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeLatestReleaseOutcomeCallable AdpClient::DescribeLatestReleaseCallable(const DescribeLatestReleaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLatestReleaseOutcome>>();
    DescribeLatestReleaseAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeLatestReleaseRequest&,
        DescribeLatestReleaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeModelListOutcome AdpClient::DescribeModelList(const DescribeModelListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelListResponse rsp = DescribeModelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelListOutcome(rsp);
        else
            return DescribeModelListOutcome(o.GetError());
    }
    else
    {
        return DescribeModelListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeModelListAsync(const DescribeModelListRequest& request, const DescribeModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelListRequest&;
    using Resp = DescribeModelListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeModelListOutcomeCallable AdpClient::DescribeModelListCallable(const DescribeModelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelListOutcome>>();
    DescribeModelListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeModelListRequest&,
        DescribeModelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribePluginOutcome AdpClient::DescribePlugin(const DescribePluginRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePluginResponse rsp = DescribePluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePluginOutcome(rsp);
        else
            return DescribePluginOutcome(o.GetError());
    }
    else
    {
        return DescribePluginOutcome(outcome.GetError());
    }
}

void AdpClient::DescribePluginAsync(const DescribePluginRequest& request, const DescribePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePluginRequest&;
    using Resp = DescribePluginResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePlugin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribePluginOutcomeCallable AdpClient::DescribePluginCallable(const DescribePluginRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePluginOutcome>>();
    DescribePluginAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribePluginRequest&,
        DescribePluginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribePluginSummaryListOutcome AdpClient::DescribePluginSummaryList(const DescribePluginSummaryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePluginSummaryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePluginSummaryListResponse rsp = DescribePluginSummaryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePluginSummaryListOutcome(rsp);
        else
            return DescribePluginSummaryListOutcome(o.GetError());
    }
    else
    {
        return DescribePluginSummaryListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribePluginSummaryListAsync(const DescribePluginSummaryListRequest& request, const DescribePluginSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePluginSummaryListRequest&;
    using Resp = DescribePluginSummaryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePluginSummaryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribePluginSummaryListOutcomeCallable AdpClient::DescribePluginSummaryListCallable(const DescribePluginSummaryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePluginSummaryListOutcome>>();
    DescribePluginSummaryListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribePluginSummaryListRequest&,
        DescribePluginSummaryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeReleaseListOutcome AdpClient::DescribeReleaseList(const DescribeReleaseListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReleaseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleaseListResponse rsp = DescribeReleaseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleaseListOutcome(rsp);
        else
            return DescribeReleaseListOutcome(o.GetError());
    }
    else
    {
        return DescribeReleaseListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeReleaseListAsync(const DescribeReleaseListRequest& request, const DescribeReleaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReleaseListRequest&;
    using Resp = DescribeReleaseListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReleaseList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeReleaseListOutcomeCallable AdpClient::DescribeReleaseListCallable(const DescribeReleaseListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReleaseListOutcome>>();
    DescribeReleaseListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeReleaseListRequest&,
        DescribeReleaseListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeReleaseSummaryOutcome AdpClient::DescribeReleaseSummary(const DescribeReleaseSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReleaseSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleaseSummaryResponse rsp = DescribeReleaseSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleaseSummaryOutcome(rsp);
        else
            return DescribeReleaseSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeReleaseSummaryOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeReleaseSummaryAsync(const DescribeReleaseSummaryRequest& request, const DescribeReleaseSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReleaseSummaryRequest&;
    using Resp = DescribeReleaseSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReleaseSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeReleaseSummaryOutcomeCallable AdpClient::DescribeReleaseSummaryCallable(const DescribeReleaseSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReleaseSummaryOutcome>>();
    DescribeReleaseSummaryAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeReleaseSummaryRequest&,
        DescribeReleaseSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeSkillCategoryListOutcome AdpClient::DescribeSkillCategoryList(const DescribeSkillCategoryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSkillCategoryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSkillCategoryListResponse rsp = DescribeSkillCategoryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSkillCategoryListOutcome(rsp);
        else
            return DescribeSkillCategoryListOutcome(o.GetError());
    }
    else
    {
        return DescribeSkillCategoryListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeSkillCategoryListAsync(const DescribeSkillCategoryListRequest& request, const DescribeSkillCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSkillCategoryListRequest&;
    using Resp = DescribeSkillCategoryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSkillCategoryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeSkillCategoryListOutcomeCallable AdpClient::DescribeSkillCategoryListCallable(const DescribeSkillCategoryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSkillCategoryListOutcome>>();
    DescribeSkillCategoryListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeSkillCategoryListRequest&,
        DescribeSkillCategoryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeSkillSummaryListOutcome AdpClient::DescribeSkillSummaryList(const DescribeSkillSummaryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSkillSummaryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSkillSummaryListResponse rsp = DescribeSkillSummaryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSkillSummaryListOutcome(rsp);
        else
            return DescribeSkillSummaryListOutcome(o.GetError());
    }
    else
    {
        return DescribeSkillSummaryListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeSkillSummaryListAsync(const DescribeSkillSummaryListRequest& request, const DescribeSkillSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSkillSummaryListRequest&;
    using Resp = DescribeSkillSummaryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSkillSummaryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeSkillSummaryListOutcomeCallable AdpClient::DescribeSkillSummaryListCallable(const DescribeSkillSummaryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSkillSummaryListOutcome>>();
    DescribeSkillSummaryListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeSkillSummaryListRequest&,
        DescribeSkillSummaryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeSpaceListOutcome AdpClient::DescribeSpaceList(const DescribeSpaceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpaceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpaceListResponse rsp = DescribeSpaceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpaceListOutcome(rsp);
        else
            return DescribeSpaceListOutcome(o.GetError());
    }
    else
    {
        return DescribeSpaceListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeSpaceListAsync(const DescribeSpaceListRequest& request, const DescribeSpaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpaceListRequest&;
    using Resp = DescribeSpaceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpaceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeSpaceListOutcomeCallable AdpClient::DescribeSpaceListCallable(const DescribeSpaceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpaceListOutcome>>();
    DescribeSpaceListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeSpaceListRequest&,
        DescribeSpaceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeSystemVariableListOutcome AdpClient::DescribeSystemVariableList(const DescribeSystemVariableListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSystemVariableList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSystemVariableListResponse rsp = DescribeSystemVariableListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSystemVariableListOutcome(rsp);
        else
            return DescribeSystemVariableListOutcome(o.GetError());
    }
    else
    {
        return DescribeSystemVariableListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeSystemVariableListAsync(const DescribeSystemVariableListRequest& request, const DescribeSystemVariableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSystemVariableListRequest&;
    using Resp = DescribeSystemVariableListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSystemVariableList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeSystemVariableListOutcomeCallable AdpClient::DescribeSystemVariableListCallable(const DescribeSystemVariableListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSystemVariableListOutcome>>();
    DescribeSystemVariableListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeSystemVariableListRequest&,
        DescribeSystemVariableListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeVariableOutcome AdpClient::DescribeVariable(const DescribeVariableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVariable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVariableResponse rsp = DescribeVariableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVariableOutcome(rsp);
        else
            return DescribeVariableOutcome(o.GetError());
    }
    else
    {
        return DescribeVariableOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeVariableAsync(const DescribeVariableRequest& request, const DescribeVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVariableRequest&;
    using Resp = DescribeVariableResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVariable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeVariableOutcomeCallable AdpClient::DescribeVariableCallable(const DescribeVariableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVariableOutcome>>();
    DescribeVariableAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeVariableRequest&,
        DescribeVariableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeVariableListOutcome AdpClient::DescribeVariableList(const DescribeVariableListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVariableList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVariableListResponse rsp = DescribeVariableListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVariableListOutcome(rsp);
        else
            return DescribeVariableListOutcome(o.GetError());
    }
    else
    {
        return DescribeVariableListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeVariableListAsync(const DescribeVariableListRequest& request, const DescribeVariableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVariableListRequest&;
    using Resp = DescribeVariableListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVariableList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeVariableListOutcomeCallable AdpClient::DescribeVariableListCallable(const DescribeVariableListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVariableListOutcome>>();
    DescribeVariableListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeVariableListRequest&,
        DescribeVariableListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifyAgentOutcome AdpClient::ModifyAgent(const ModifyAgentRequest &request)
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

void AdpClient::ModifyAgentAsync(const ModifyAgentRequest& request, const ModifyAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AdpClient::ModifyAgentOutcomeCallable AdpClient::ModifyAgentCallable(const ModifyAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAgentOutcome>>();
    ModifyAgentAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyAgentRequest&,
        ModifyAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifyAppOutcome AdpClient::ModifyApp(const ModifyAppRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAppResponse rsp = ModifyAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAppOutcome(rsp);
        else
            return ModifyAppOutcome(o.GetError());
    }
    else
    {
        return ModifyAppOutcome(outcome.GetError());
    }
}

void AdpClient::ModifyAppAsync(const ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAppRequest&;
    using Resp = ModifyAppResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ModifyAppOutcomeCallable AdpClient::ModifyAppCallable(const ModifyAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAppOutcome>>();
    ModifyAppAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyAppRequest&,
        ModifyAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifyConversationOutcome AdpClient::ModifyConversation(const ModifyConversationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConversationResponse rsp = ModifyConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConversationOutcome(rsp);
        else
            return ModifyConversationOutcome(o.GetError());
    }
    else
    {
        return ModifyConversationOutcome(outcome.GetError());
    }
}

void AdpClient::ModifyConversationAsync(const ModifyConversationRequest& request, const ModifyConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConversationRequest&;
    using Resp = ModifyConversationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ModifyConversationOutcomeCallable AdpClient::ModifyConversationCallable(const ModifyConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConversationOutcome>>();
    ModifyConversationAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyConversationRequest&,
        ModifyConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifySpaceOutcome AdpClient::ModifySpace(const ModifySpaceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySpaceResponse rsp = ModifySpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySpaceOutcome(rsp);
        else
            return ModifySpaceOutcome(o.GetError());
    }
    else
    {
        return ModifySpaceOutcome(outcome.GetError());
    }
}

void AdpClient::ModifySpaceAsync(const ModifySpaceRequest& request, const ModifySpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySpaceRequest&;
    using Resp = ModifySpaceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ModifySpaceOutcomeCallable AdpClient::ModifySpaceCallable(const ModifySpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySpaceOutcome>>();
    ModifySpaceAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifySpaceRequest&,
        ModifySpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifyVariableOutcome AdpClient::ModifyVariable(const ModifyVariableRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVariable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVariableResponse rsp = ModifyVariableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVariableOutcome(rsp);
        else
            return ModifyVariableOutcome(o.GetError());
    }
    else
    {
        return ModifyVariableOutcome(outcome.GetError());
    }
}

void AdpClient::ModifyVariableAsync(const ModifyVariableRequest& request, const ModifyVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVariableRequest&;
    using Resp = ModifyVariableResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVariable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ModifyVariableOutcomeCallable AdpClient::ModifyVariableCallable(const ModifyVariableRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVariableOutcome>>();
    ModifyVariableAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyVariableRequest&,
        ModifyVariableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ResetConversationOutcome AdpClient::ResetConversation(const ResetConversationRequest &request)
{
    auto outcome = MakeRequest(request, "ResetConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetConversationResponse rsp = ResetConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetConversationOutcome(rsp);
        else
            return ResetConversationOutcome(o.GetError());
    }
    else
    {
        return ResetConversationOutcome(outcome.GetError());
    }
}

void AdpClient::ResetConversationAsync(const ResetConversationRequest& request, const ResetConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetConversationRequest&;
    using Resp = ResetConversationResponse;

    DoRequestAsync<Req, Resp>(
        "ResetConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ResetConversationOutcomeCallable AdpClient::ResetConversationCallable(const ResetConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetConversationOutcome>>();
    ResetConversationAsync(
    request,
    [prom](
        const AdpClient*,
        const ResetConversationRequest&,
        ResetConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::RetryReleaseOutcome AdpClient::RetryRelease(const RetryReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "RetryRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryReleaseResponse rsp = RetryReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryReleaseOutcome(rsp);
        else
            return RetryReleaseOutcome(o.GetError());
    }
    else
    {
        return RetryReleaseOutcome(outcome.GetError());
    }
}

void AdpClient::RetryReleaseAsync(const RetryReleaseRequest& request, const RetryReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RetryReleaseRequest&;
    using Resp = RetryReleaseResponse;

    DoRequestAsync<Req, Resp>(
        "RetryRelease", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::RetryReleaseOutcomeCallable AdpClient::RetryReleaseCallable(const RetryReleaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<RetryReleaseOutcome>>();
    RetryReleaseAsync(
    request,
    [prom](
        const AdpClient*,
        const RetryReleaseRequest&,
        RetryReleaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::RollbackReleaseOutcome AdpClient::RollbackRelease(const RollbackReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackReleaseResponse rsp = RollbackReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackReleaseOutcome(rsp);
        else
            return RollbackReleaseOutcome(o.GetError());
    }
    else
    {
        return RollbackReleaseOutcome(outcome.GetError());
    }
}

void AdpClient::RollbackReleaseAsync(const RollbackReleaseRequest& request, const RollbackReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RollbackReleaseRequest&;
    using Resp = RollbackReleaseResponse;

    DoRequestAsync<Req, Resp>(
        "RollbackRelease", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::RollbackReleaseOutcomeCallable AdpClient::RollbackReleaseCallable(const RollbackReleaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollbackReleaseOutcome>>();
    RollbackReleaseAsync(
    request,
    [prom](
        const AdpClient*,
        const RollbackReleaseRequest&,
        RollbackReleaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

