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

#include <tencentcloud/lke/v20231130/LkeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Lke::V20231130;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-11-30";
    const string ENDPOINT = "lke.tencentcloudapi.com";
}

LkeClient::LkeClient(const Credential &credential, const string &region) :
    LkeClient(credential, region, ClientProfile())
{
}

LkeClient::LkeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LkeClient::CallbackWorkflowToolNodeOutcome LkeClient::CallbackWorkflowToolNode(const CallbackWorkflowToolNodeRequest &request)
{
    auto outcome = MakeRequest(request, "CallbackWorkflowToolNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CallbackWorkflowToolNodeResponse rsp = CallbackWorkflowToolNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CallbackWorkflowToolNodeOutcome(rsp);
        else
            return CallbackWorkflowToolNodeOutcome(o.GetError());
    }
    else
    {
        return CallbackWorkflowToolNodeOutcome(outcome.GetError());
    }
}

void LkeClient::CallbackWorkflowToolNodeAsync(const CallbackWorkflowToolNodeRequest& request, const CallbackWorkflowToolNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CallbackWorkflowToolNodeRequest&;
    using Resp = CallbackWorkflowToolNodeResponse;

    DoRequestAsync<Req, Resp>(
        "CallbackWorkflowToolNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::CallbackWorkflowToolNodeOutcomeCallable LkeClient::CallbackWorkflowToolNodeCallable(const CallbackWorkflowToolNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CallbackWorkflowToolNodeOutcome>>();
    CallbackWorkflowToolNodeAsync(
    request,
    [prom](
        const LkeClient*,
        const CallbackWorkflowToolNodeRequest&,
        CallbackWorkflowToolNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::CheckAttributeLabelExistOutcome LkeClient::CheckAttributeLabelExist(const CheckAttributeLabelExistRequest &request)
{
    auto outcome = MakeRequest(request, "CheckAttributeLabelExist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckAttributeLabelExistResponse rsp = CheckAttributeLabelExistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckAttributeLabelExistOutcome(rsp);
        else
            return CheckAttributeLabelExistOutcome(o.GetError());
    }
    else
    {
        return CheckAttributeLabelExistOutcome(outcome.GetError());
    }
}

void LkeClient::CheckAttributeLabelExistAsync(const CheckAttributeLabelExistRequest& request, const CheckAttributeLabelExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckAttributeLabelExistRequest&;
    using Resp = CheckAttributeLabelExistResponse;

    DoRequestAsync<Req, Resp>(
        "CheckAttributeLabelExist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::CheckAttributeLabelExistOutcomeCallable LkeClient::CheckAttributeLabelExistCallable(const CheckAttributeLabelExistRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckAttributeLabelExistOutcome>>();
    CheckAttributeLabelExistAsync(
    request,
    [prom](
        const LkeClient*,
        const CheckAttributeLabelExistRequest&,
        CheckAttributeLabelExistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::CheckAttributeLabelReferOutcome LkeClient::CheckAttributeLabelRefer(const CheckAttributeLabelReferRequest &request)
{
    auto outcome = MakeRequest(request, "CheckAttributeLabelRefer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckAttributeLabelReferResponse rsp = CheckAttributeLabelReferResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckAttributeLabelReferOutcome(rsp);
        else
            return CheckAttributeLabelReferOutcome(o.GetError());
    }
    else
    {
        return CheckAttributeLabelReferOutcome(outcome.GetError());
    }
}

void LkeClient::CheckAttributeLabelReferAsync(const CheckAttributeLabelReferRequest& request, const CheckAttributeLabelReferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckAttributeLabelReferRequest&;
    using Resp = CheckAttributeLabelReferResponse;

    DoRequestAsync<Req, Resp>(
        "CheckAttributeLabelRefer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::CheckAttributeLabelReferOutcomeCallable LkeClient::CheckAttributeLabelReferCallable(const CheckAttributeLabelReferRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckAttributeLabelReferOutcome>>();
    CheckAttributeLabelReferAsync(
    request,
    [prom](
        const LkeClient*,
        const CheckAttributeLabelReferRequest&,
        CheckAttributeLabelReferOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::CreateAppOutcome LkeClient::CreateApp(const CreateAppRequest &request)
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

void LkeClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LkeClient::CreateAppOutcomeCallable LkeClient::CreateAppCallable(const CreateAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAppOutcome>>();
    CreateAppAsync(
    request,
    [prom](
        const LkeClient*,
        const CreateAppRequest&,
        CreateAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::CreateAttributeLabelOutcome LkeClient::CreateAttributeLabel(const CreateAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAttributeLabelResponse rsp = CreateAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAttributeLabelOutcome(rsp);
        else
            return CreateAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return CreateAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::CreateAttributeLabelAsync(const CreateAttributeLabelRequest& request, const CreateAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAttributeLabelRequest&;
    using Resp = CreateAttributeLabelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAttributeLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::CreateAttributeLabelOutcomeCallable LkeClient::CreateAttributeLabelCallable(const CreateAttributeLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAttributeLabelOutcome>>();
    CreateAttributeLabelAsync(
    request,
    [prom](
        const LkeClient*,
        const CreateAttributeLabelRequest&,
        CreateAttributeLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::CreateDocCateOutcome LkeClient::CreateDocCate(const CreateDocCateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDocCate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDocCateResponse rsp = CreateDocCateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDocCateOutcome(rsp);
        else
            return CreateDocCateOutcome(o.GetError());
    }
    else
    {
        return CreateDocCateOutcome(outcome.GetError());
    }
}

void LkeClient::CreateDocCateAsync(const CreateDocCateRequest& request, const CreateDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDocCateRequest&;
    using Resp = CreateDocCateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDocCate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::CreateDocCateOutcomeCallable LkeClient::CreateDocCateCallable(const CreateDocCateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDocCateOutcome>>();
    CreateDocCateAsync(
    request,
    [prom](
        const LkeClient*,
        const CreateDocCateRequest&,
        CreateDocCateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::CreateQAOutcome LkeClient::CreateQA(const CreateQARequest &request)
{
    auto outcome = MakeRequest(request, "CreateQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQAResponse rsp = CreateQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQAOutcome(rsp);
        else
            return CreateQAOutcome(o.GetError());
    }
    else
    {
        return CreateQAOutcome(outcome.GetError());
    }
}

void LkeClient::CreateQAAsync(const CreateQARequest& request, const CreateQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateQARequest&;
    using Resp = CreateQAResponse;

    DoRequestAsync<Req, Resp>(
        "CreateQA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::CreateQAOutcomeCallable LkeClient::CreateQACallable(const CreateQARequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateQAOutcome>>();
    CreateQAAsync(
    request,
    [prom](
        const LkeClient*,
        const CreateQARequest&,
        CreateQAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::CreateQACateOutcome LkeClient::CreateQACate(const CreateQACateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateQACate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQACateResponse rsp = CreateQACateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQACateOutcome(rsp);
        else
            return CreateQACateOutcome(o.GetError());
    }
    else
    {
        return CreateQACateOutcome(outcome.GetError());
    }
}

void LkeClient::CreateQACateAsync(const CreateQACateRequest& request, const CreateQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateQACateRequest&;
    using Resp = CreateQACateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateQACate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::CreateQACateOutcomeCallable LkeClient::CreateQACateCallable(const CreateQACateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateQACateOutcome>>();
    CreateQACateAsync(
    request,
    [prom](
        const LkeClient*,
        const CreateQACateRequest&,
        CreateQACateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::CreateRejectedQuestionOutcome LkeClient::CreateRejectedQuestion(const CreateRejectedQuestionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRejectedQuestion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRejectedQuestionResponse rsp = CreateRejectedQuestionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRejectedQuestionOutcome(rsp);
        else
            return CreateRejectedQuestionOutcome(o.GetError());
    }
    else
    {
        return CreateRejectedQuestionOutcome(outcome.GetError());
    }
}

void LkeClient::CreateRejectedQuestionAsync(const CreateRejectedQuestionRequest& request, const CreateRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRejectedQuestionRequest&;
    using Resp = CreateRejectedQuestionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRejectedQuestion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::CreateRejectedQuestionOutcomeCallable LkeClient::CreateRejectedQuestionCallable(const CreateRejectedQuestionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRejectedQuestionOutcome>>();
    CreateRejectedQuestionAsync(
    request,
    [prom](
        const LkeClient*,
        const CreateRejectedQuestionRequest&,
        CreateRejectedQuestionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::CreateReleaseOutcome LkeClient::CreateRelease(const CreateReleaseRequest &request)
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

void LkeClient::CreateReleaseAsync(const CreateReleaseRequest& request, const CreateReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LkeClient::CreateReleaseOutcomeCallable LkeClient::CreateReleaseCallable(const CreateReleaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReleaseOutcome>>();
    CreateReleaseAsync(
    request,
    [prom](
        const LkeClient*,
        const CreateReleaseRequest&,
        CreateReleaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::CreateSharedKnowledgeOutcome LkeClient::CreateSharedKnowledge(const CreateSharedKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSharedKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSharedKnowledgeResponse rsp = CreateSharedKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSharedKnowledgeOutcome(rsp);
        else
            return CreateSharedKnowledgeOutcome(o.GetError());
    }
    else
    {
        return CreateSharedKnowledgeOutcome(outcome.GetError());
    }
}

void LkeClient::CreateSharedKnowledgeAsync(const CreateSharedKnowledgeRequest& request, const CreateSharedKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSharedKnowledgeRequest&;
    using Resp = CreateSharedKnowledgeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSharedKnowledge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::CreateSharedKnowledgeOutcomeCallable LkeClient::CreateSharedKnowledgeCallable(const CreateSharedKnowledgeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSharedKnowledgeOutcome>>();
    CreateSharedKnowledgeAsync(
    request,
    [prom](
        const LkeClient*,
        const CreateSharedKnowledgeRequest&,
        CreateSharedKnowledgeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::CreateVarOutcome LkeClient::CreateVar(const CreateVarRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVar");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVarResponse rsp = CreateVarResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVarOutcome(rsp);
        else
            return CreateVarOutcome(o.GetError());
    }
    else
    {
        return CreateVarOutcome(outcome.GetError());
    }
}

void LkeClient::CreateVarAsync(const CreateVarRequest& request, const CreateVarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVarRequest&;
    using Resp = CreateVarResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVar", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::CreateVarOutcomeCallable LkeClient::CreateVarCallable(const CreateVarRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVarOutcome>>();
    CreateVarAsync(
    request,
    [prom](
        const LkeClient*,
        const CreateVarRequest&,
        CreateVarOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::CreateWorkflowRunOutcome LkeClient::CreateWorkflowRun(const CreateWorkflowRunRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkflowRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkflowRunResponse rsp = CreateWorkflowRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkflowRunOutcome(rsp);
        else
            return CreateWorkflowRunOutcome(o.GetError());
    }
    else
    {
        return CreateWorkflowRunOutcome(outcome.GetError());
    }
}

void LkeClient::CreateWorkflowRunAsync(const CreateWorkflowRunRequest& request, const CreateWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWorkflowRunRequest&;
    using Resp = CreateWorkflowRunResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkflowRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::CreateWorkflowRunOutcomeCallable LkeClient::CreateWorkflowRunCallable(const CreateWorkflowRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkflowRunOutcome>>();
    CreateWorkflowRunAsync(
    request,
    [prom](
        const LkeClient*,
        const CreateWorkflowRunRequest&,
        CreateWorkflowRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DeleteAgentOutcome LkeClient::DeleteAgent(const DeleteAgentRequest &request)
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

void LkeClient::DeleteAgentAsync(const DeleteAgentRequest& request, const DeleteAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LkeClient::DeleteAgentOutcomeCallable LkeClient::DeleteAgentCallable(const DeleteAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAgentOutcome>>();
    DeleteAgentAsync(
    request,
    [prom](
        const LkeClient*,
        const DeleteAgentRequest&,
        DeleteAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DeleteAppOutcome LkeClient::DeleteApp(const DeleteAppRequest &request)
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

void LkeClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LkeClient::DeleteAppOutcomeCallable LkeClient::DeleteAppCallable(const DeleteAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAppOutcome>>();
    DeleteAppAsync(
    request,
    [prom](
        const LkeClient*,
        const DeleteAppRequest&,
        DeleteAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DeleteAttributeLabelOutcome LkeClient::DeleteAttributeLabel(const DeleteAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAttributeLabelResponse rsp = DeleteAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAttributeLabelOutcome(rsp);
        else
            return DeleteAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return DeleteAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteAttributeLabelAsync(const DeleteAttributeLabelRequest& request, const DeleteAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAttributeLabelRequest&;
    using Resp = DeleteAttributeLabelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAttributeLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DeleteAttributeLabelOutcomeCallable LkeClient::DeleteAttributeLabelCallable(const DeleteAttributeLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAttributeLabelOutcome>>();
    DeleteAttributeLabelAsync(
    request,
    [prom](
        const LkeClient*,
        const DeleteAttributeLabelRequest&,
        DeleteAttributeLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DeleteDocOutcome LkeClient::DeleteDoc(const DeleteDocRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDocResponse rsp = DeleteDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDocOutcome(rsp);
        else
            return DeleteDocOutcome(o.GetError());
    }
    else
    {
        return DeleteDocOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteDocAsync(const DeleteDocRequest& request, const DeleteDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDocRequest&;
    using Resp = DeleteDocResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDoc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DeleteDocOutcomeCallable LkeClient::DeleteDocCallable(const DeleteDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDocOutcome>>();
    DeleteDocAsync(
    request,
    [prom](
        const LkeClient*,
        const DeleteDocRequest&,
        DeleteDocOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DeleteDocCateOutcome LkeClient::DeleteDocCate(const DeleteDocCateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDocCate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDocCateResponse rsp = DeleteDocCateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDocCateOutcome(rsp);
        else
            return DeleteDocCateOutcome(o.GetError());
    }
    else
    {
        return DeleteDocCateOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteDocCateAsync(const DeleteDocCateRequest& request, const DeleteDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDocCateRequest&;
    using Resp = DeleteDocCateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDocCate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DeleteDocCateOutcomeCallable LkeClient::DeleteDocCateCallable(const DeleteDocCateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDocCateOutcome>>();
    DeleteDocCateAsync(
    request,
    [prom](
        const LkeClient*,
        const DeleteDocCateRequest&,
        DeleteDocCateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DeleteQAOutcome LkeClient::DeleteQA(const DeleteQARequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQAResponse rsp = DeleteQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQAOutcome(rsp);
        else
            return DeleteQAOutcome(o.GetError());
    }
    else
    {
        return DeleteQAOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteQAAsync(const DeleteQARequest& request, const DeleteQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteQARequest&;
    using Resp = DeleteQAResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteQA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DeleteQAOutcomeCallable LkeClient::DeleteQACallable(const DeleteQARequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteQAOutcome>>();
    DeleteQAAsync(
    request,
    [prom](
        const LkeClient*,
        const DeleteQARequest&,
        DeleteQAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DeleteQACateOutcome LkeClient::DeleteQACate(const DeleteQACateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQACate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQACateResponse rsp = DeleteQACateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQACateOutcome(rsp);
        else
            return DeleteQACateOutcome(o.GetError());
    }
    else
    {
        return DeleteQACateOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteQACateAsync(const DeleteQACateRequest& request, const DeleteQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteQACateRequest&;
    using Resp = DeleteQACateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteQACate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DeleteQACateOutcomeCallable LkeClient::DeleteQACateCallable(const DeleteQACateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteQACateOutcome>>();
    DeleteQACateAsync(
    request,
    [prom](
        const LkeClient*,
        const DeleteQACateRequest&,
        DeleteQACateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DeleteRejectedQuestionOutcome LkeClient::DeleteRejectedQuestion(const DeleteRejectedQuestionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRejectedQuestion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRejectedQuestionResponse rsp = DeleteRejectedQuestionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRejectedQuestionOutcome(rsp);
        else
            return DeleteRejectedQuestionOutcome(o.GetError());
    }
    else
    {
        return DeleteRejectedQuestionOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteRejectedQuestionAsync(const DeleteRejectedQuestionRequest& request, const DeleteRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRejectedQuestionRequest&;
    using Resp = DeleteRejectedQuestionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRejectedQuestion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DeleteRejectedQuestionOutcomeCallable LkeClient::DeleteRejectedQuestionCallable(const DeleteRejectedQuestionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRejectedQuestionOutcome>>();
    DeleteRejectedQuestionAsync(
    request,
    [prom](
        const LkeClient*,
        const DeleteRejectedQuestionRequest&,
        DeleteRejectedQuestionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DeleteSharedKnowledgeOutcome LkeClient::DeleteSharedKnowledge(const DeleteSharedKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSharedKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSharedKnowledgeResponse rsp = DeleteSharedKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSharedKnowledgeOutcome(rsp);
        else
            return DeleteSharedKnowledgeOutcome(o.GetError());
    }
    else
    {
        return DeleteSharedKnowledgeOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteSharedKnowledgeAsync(const DeleteSharedKnowledgeRequest& request, const DeleteSharedKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSharedKnowledgeRequest&;
    using Resp = DeleteSharedKnowledgeResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSharedKnowledge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DeleteSharedKnowledgeOutcomeCallable LkeClient::DeleteSharedKnowledgeCallable(const DeleteSharedKnowledgeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSharedKnowledgeOutcome>>();
    DeleteSharedKnowledgeAsync(
    request,
    [prom](
        const LkeClient*,
        const DeleteSharedKnowledgeRequest&,
        DeleteSharedKnowledgeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DeleteVarOutcome LkeClient::DeleteVar(const DeleteVarRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVar");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVarResponse rsp = DeleteVarResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVarOutcome(rsp);
        else
            return DeleteVarOutcome(o.GetError());
    }
    else
    {
        return DeleteVarOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteVarAsync(const DeleteVarRequest& request, const DeleteVarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVarRequest&;
    using Resp = DeleteVarResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVar", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DeleteVarOutcomeCallable LkeClient::DeleteVarCallable(const DeleteVarRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVarOutcome>>();
    DeleteVarAsync(
    request,
    [prom](
        const LkeClient*,
        const DeleteVarRequest&,
        DeleteVarOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeAppOutcome LkeClient::DescribeApp(const DescribeAppRequest &request)
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

void LkeClient::DescribeAppAsync(const DescribeAppRequest& request, const DescribeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LkeClient::DescribeAppOutcomeCallable LkeClient::DescribeAppCallable(const DescribeAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppOutcome>>();
    DescribeAppAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeAppRequest&,
        DescribeAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeAppAgentListOutcome LkeClient::DescribeAppAgentList(const DescribeAppAgentListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppAgentList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppAgentListResponse rsp = DescribeAppAgentListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppAgentListOutcome(rsp);
        else
            return DescribeAppAgentListOutcome(o.GetError());
    }
    else
    {
        return DescribeAppAgentListOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeAppAgentListAsync(const DescribeAppAgentListRequest& request, const DescribeAppAgentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppAgentListRequest&;
    using Resp = DescribeAppAgentListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppAgentList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeAppAgentListOutcomeCallable LkeClient::DescribeAppAgentListCallable(const DescribeAppAgentListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppAgentListOutcome>>();
    DescribeAppAgentListAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeAppAgentListRequest&,
        DescribeAppAgentListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeAttributeLabelOutcome LkeClient::DescribeAttributeLabel(const DescribeAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttributeLabelResponse rsp = DescribeAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttributeLabelOutcome(rsp);
        else
            return DescribeAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return DescribeAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeAttributeLabelAsync(const DescribeAttributeLabelRequest& request, const DescribeAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAttributeLabelRequest&;
    using Resp = DescribeAttributeLabelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAttributeLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeAttributeLabelOutcomeCallable LkeClient::DescribeAttributeLabelCallable(const DescribeAttributeLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAttributeLabelOutcome>>();
    DescribeAttributeLabelAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeAttributeLabelRequest&,
        DescribeAttributeLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeCallStatsGraphOutcome LkeClient::DescribeCallStatsGraph(const DescribeCallStatsGraphRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallStatsGraph");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallStatsGraphResponse rsp = DescribeCallStatsGraphResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallStatsGraphOutcome(rsp);
        else
            return DescribeCallStatsGraphOutcome(o.GetError());
    }
    else
    {
        return DescribeCallStatsGraphOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeCallStatsGraphAsync(const DescribeCallStatsGraphRequest& request, const DescribeCallStatsGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCallStatsGraphRequest&;
    using Resp = DescribeCallStatsGraphResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCallStatsGraph", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeCallStatsGraphOutcomeCallable LkeClient::DescribeCallStatsGraphCallable(const DescribeCallStatsGraphRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCallStatsGraphOutcome>>();
    DescribeCallStatsGraphAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeCallStatsGraphRequest&,
        DescribeCallStatsGraphOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeConcurrencyUsageOutcome LkeClient::DescribeConcurrencyUsage(const DescribeConcurrencyUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConcurrencyUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConcurrencyUsageResponse rsp = DescribeConcurrencyUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConcurrencyUsageOutcome(rsp);
        else
            return DescribeConcurrencyUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeConcurrencyUsageOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeConcurrencyUsageAsync(const DescribeConcurrencyUsageRequest& request, const DescribeConcurrencyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConcurrencyUsageRequest&;
    using Resp = DescribeConcurrencyUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConcurrencyUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeConcurrencyUsageOutcomeCallable LkeClient::DescribeConcurrencyUsageCallable(const DescribeConcurrencyUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConcurrencyUsageOutcome>>();
    DescribeConcurrencyUsageAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeConcurrencyUsageRequest&,
        DescribeConcurrencyUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeConcurrencyUsageGraphOutcome LkeClient::DescribeConcurrencyUsageGraph(const DescribeConcurrencyUsageGraphRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConcurrencyUsageGraph");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConcurrencyUsageGraphResponse rsp = DescribeConcurrencyUsageGraphResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConcurrencyUsageGraphOutcome(rsp);
        else
            return DescribeConcurrencyUsageGraphOutcome(o.GetError());
    }
    else
    {
        return DescribeConcurrencyUsageGraphOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeConcurrencyUsageGraphAsync(const DescribeConcurrencyUsageGraphRequest& request, const DescribeConcurrencyUsageGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConcurrencyUsageGraphRequest&;
    using Resp = DescribeConcurrencyUsageGraphResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConcurrencyUsageGraph", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeConcurrencyUsageGraphOutcomeCallable LkeClient::DescribeConcurrencyUsageGraphCallable(const DescribeConcurrencyUsageGraphRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConcurrencyUsageGraphOutcome>>();
    DescribeConcurrencyUsageGraphAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeConcurrencyUsageGraphRequest&,
        DescribeConcurrencyUsageGraphOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeDocOutcome LkeClient::DescribeDoc(const DescribeDocRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDocResponse rsp = DescribeDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDocOutcome(rsp);
        else
            return DescribeDocOutcome(o.GetError());
    }
    else
    {
        return DescribeDocOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeDocAsync(const DescribeDocRequest& request, const DescribeDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDocRequest&;
    using Resp = DescribeDocResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDoc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeDocOutcomeCallable LkeClient::DescribeDocCallable(const DescribeDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDocOutcome>>();
    DescribeDocAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeDocRequest&,
        DescribeDocOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeKnowledgeUsageOutcome LkeClient::DescribeKnowledgeUsage(const DescribeKnowledgeUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKnowledgeUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKnowledgeUsageResponse rsp = DescribeKnowledgeUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKnowledgeUsageOutcome(rsp);
        else
            return DescribeKnowledgeUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeKnowledgeUsageOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeKnowledgeUsageAsync(const DescribeKnowledgeUsageRequest& request, const DescribeKnowledgeUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKnowledgeUsageRequest&;
    using Resp = DescribeKnowledgeUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKnowledgeUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeKnowledgeUsageOutcomeCallable LkeClient::DescribeKnowledgeUsageCallable(const DescribeKnowledgeUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKnowledgeUsageOutcome>>();
    DescribeKnowledgeUsageAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeKnowledgeUsageRequest&,
        DescribeKnowledgeUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeKnowledgeUsagePieGraphOutcome LkeClient::DescribeKnowledgeUsagePieGraph(const DescribeKnowledgeUsagePieGraphRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKnowledgeUsagePieGraph");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKnowledgeUsagePieGraphResponse rsp = DescribeKnowledgeUsagePieGraphResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKnowledgeUsagePieGraphOutcome(rsp);
        else
            return DescribeKnowledgeUsagePieGraphOutcome(o.GetError());
    }
    else
    {
        return DescribeKnowledgeUsagePieGraphOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeKnowledgeUsagePieGraphAsync(const DescribeKnowledgeUsagePieGraphRequest& request, const DescribeKnowledgeUsagePieGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKnowledgeUsagePieGraphRequest&;
    using Resp = DescribeKnowledgeUsagePieGraphResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKnowledgeUsagePieGraph", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeKnowledgeUsagePieGraphOutcomeCallable LkeClient::DescribeKnowledgeUsagePieGraphCallable(const DescribeKnowledgeUsagePieGraphRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKnowledgeUsagePieGraphOutcome>>();
    DescribeKnowledgeUsagePieGraphAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeKnowledgeUsagePieGraphRequest&,
        DescribeKnowledgeUsagePieGraphOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeNodeRunOutcome LkeClient::DescribeNodeRun(const DescribeNodeRunRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNodeRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodeRunResponse rsp = DescribeNodeRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodeRunOutcome(rsp);
        else
            return DescribeNodeRunOutcome(o.GetError());
    }
    else
    {
        return DescribeNodeRunOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeNodeRunAsync(const DescribeNodeRunRequest& request, const DescribeNodeRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNodeRunRequest&;
    using Resp = DescribeNodeRunResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNodeRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeNodeRunOutcomeCallable LkeClient::DescribeNodeRunCallable(const DescribeNodeRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNodeRunOutcome>>();
    DescribeNodeRunAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeNodeRunRequest&,
        DescribeNodeRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeQAOutcome LkeClient::DescribeQA(const DescribeQARequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQAResponse rsp = DescribeQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQAOutcome(rsp);
        else
            return DescribeQAOutcome(o.GetError());
    }
    else
    {
        return DescribeQAOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeQAAsync(const DescribeQARequest& request, const DescribeQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQARequest&;
    using Resp = DescribeQAResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeQAOutcomeCallable LkeClient::DescribeQACallable(const DescribeQARequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQAOutcome>>();
    DescribeQAAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeQARequest&,
        DescribeQAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeReferOutcome LkeClient::DescribeRefer(const DescribeReferRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRefer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReferResponse rsp = DescribeReferResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReferOutcome(rsp);
        else
            return DescribeReferOutcome(o.GetError());
    }
    else
    {
        return DescribeReferOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeReferAsync(const DescribeReferRequest& request, const DescribeReferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReferRequest&;
    using Resp = DescribeReferResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRefer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeReferOutcomeCallable LkeClient::DescribeReferCallable(const DescribeReferRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReferOutcome>>();
    DescribeReferAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeReferRequest&,
        DescribeReferOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeReleaseOutcome LkeClient::DescribeRelease(const DescribeReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleaseResponse rsp = DescribeReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleaseOutcome(rsp);
        else
            return DescribeReleaseOutcome(o.GetError());
    }
    else
    {
        return DescribeReleaseOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeReleaseAsync(const DescribeReleaseRequest& request, const DescribeReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReleaseRequest&;
    using Resp = DescribeReleaseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRelease", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeReleaseOutcomeCallable LkeClient::DescribeReleaseCallable(const DescribeReleaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReleaseOutcome>>();
    DescribeReleaseAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeReleaseRequest&,
        DescribeReleaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeReleaseInfoOutcome LkeClient::DescribeReleaseInfo(const DescribeReleaseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReleaseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleaseInfoResponse rsp = DescribeReleaseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleaseInfoOutcome(rsp);
        else
            return DescribeReleaseInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeReleaseInfoOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeReleaseInfoAsync(const DescribeReleaseInfoRequest& request, const DescribeReleaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReleaseInfoRequest&;
    using Resp = DescribeReleaseInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReleaseInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeReleaseInfoOutcomeCallable LkeClient::DescribeReleaseInfoCallable(const DescribeReleaseInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReleaseInfoOutcome>>();
    DescribeReleaseInfoAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeReleaseInfoRequest&,
        DescribeReleaseInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeRobotBizIDByAppKeyOutcome LkeClient::DescribeRobotBizIDByAppKey(const DescribeRobotBizIDByAppKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRobotBizIDByAppKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRobotBizIDByAppKeyResponse rsp = DescribeRobotBizIDByAppKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRobotBizIDByAppKeyOutcome(rsp);
        else
            return DescribeRobotBizIDByAppKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeRobotBizIDByAppKeyOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeRobotBizIDByAppKeyAsync(const DescribeRobotBizIDByAppKeyRequest& request, const DescribeRobotBizIDByAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRobotBizIDByAppKeyRequest&;
    using Resp = DescribeRobotBizIDByAppKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRobotBizIDByAppKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeRobotBizIDByAppKeyOutcomeCallable LkeClient::DescribeRobotBizIDByAppKeyCallable(const DescribeRobotBizIDByAppKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRobotBizIDByAppKeyOutcome>>();
    DescribeRobotBizIDByAppKeyAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeRobotBizIDByAppKeyRequest&,
        DescribeRobotBizIDByAppKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeSearchStatsGraphOutcome LkeClient::DescribeSearchStatsGraph(const DescribeSearchStatsGraphRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSearchStatsGraph");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSearchStatsGraphResponse rsp = DescribeSearchStatsGraphResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSearchStatsGraphOutcome(rsp);
        else
            return DescribeSearchStatsGraphOutcome(o.GetError());
    }
    else
    {
        return DescribeSearchStatsGraphOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeSearchStatsGraphAsync(const DescribeSearchStatsGraphRequest& request, const DescribeSearchStatsGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSearchStatsGraphRequest&;
    using Resp = DescribeSearchStatsGraphResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSearchStatsGraph", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeSearchStatsGraphOutcomeCallable LkeClient::DescribeSearchStatsGraphCallable(const DescribeSearchStatsGraphRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSearchStatsGraphOutcome>>();
    DescribeSearchStatsGraphAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeSearchStatsGraphRequest&,
        DescribeSearchStatsGraphOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeSegmentsOutcome LkeClient::DescribeSegments(const DescribeSegmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSegments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSegmentsResponse rsp = DescribeSegmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSegmentsOutcome(rsp);
        else
            return DescribeSegmentsOutcome(o.GetError());
    }
    else
    {
        return DescribeSegmentsOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeSegmentsAsync(const DescribeSegmentsRequest& request, const DescribeSegmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSegmentsRequest&;
    using Resp = DescribeSegmentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSegments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeSegmentsOutcomeCallable LkeClient::DescribeSegmentsCallable(const DescribeSegmentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSegmentsOutcome>>();
    DescribeSegmentsAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeSegmentsRequest&,
        DescribeSegmentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeSharedKnowledgeOutcome LkeClient::DescribeSharedKnowledge(const DescribeSharedKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSharedKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSharedKnowledgeResponse rsp = DescribeSharedKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSharedKnowledgeOutcome(rsp);
        else
            return DescribeSharedKnowledgeOutcome(o.GetError());
    }
    else
    {
        return DescribeSharedKnowledgeOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeSharedKnowledgeAsync(const DescribeSharedKnowledgeRequest& request, const DescribeSharedKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSharedKnowledgeRequest&;
    using Resp = DescribeSharedKnowledgeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSharedKnowledge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeSharedKnowledgeOutcomeCallable LkeClient::DescribeSharedKnowledgeCallable(const DescribeSharedKnowledgeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSharedKnowledgeOutcome>>();
    DescribeSharedKnowledgeAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeSharedKnowledgeRequest&,
        DescribeSharedKnowledgeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeStorageCredentialOutcome LkeClient::DescribeStorageCredential(const DescribeStorageCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStorageCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStorageCredentialResponse rsp = DescribeStorageCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStorageCredentialOutcome(rsp);
        else
            return DescribeStorageCredentialOutcome(o.GetError());
    }
    else
    {
        return DescribeStorageCredentialOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeStorageCredentialAsync(const DescribeStorageCredentialRequest& request, const DescribeStorageCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStorageCredentialRequest&;
    using Resp = DescribeStorageCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStorageCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeStorageCredentialOutcomeCallable LkeClient::DescribeStorageCredentialCallable(const DescribeStorageCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStorageCredentialOutcome>>();
    DescribeStorageCredentialAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeStorageCredentialRequest&,
        DescribeStorageCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeTokenUsageOutcome LkeClient::DescribeTokenUsage(const DescribeTokenUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTokenUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenUsageResponse rsp = DescribeTokenUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenUsageOutcome(rsp);
        else
            return DescribeTokenUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenUsageOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeTokenUsageAsync(const DescribeTokenUsageRequest& request, const DescribeTokenUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTokenUsageRequest&;
    using Resp = DescribeTokenUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTokenUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeTokenUsageOutcomeCallable LkeClient::DescribeTokenUsageCallable(const DescribeTokenUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTokenUsageOutcome>>();
    DescribeTokenUsageAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeTokenUsageRequest&,
        DescribeTokenUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeTokenUsageGraphOutcome LkeClient::DescribeTokenUsageGraph(const DescribeTokenUsageGraphRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTokenUsageGraph");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenUsageGraphResponse rsp = DescribeTokenUsageGraphResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenUsageGraphOutcome(rsp);
        else
            return DescribeTokenUsageGraphOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenUsageGraphOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeTokenUsageGraphAsync(const DescribeTokenUsageGraphRequest& request, const DescribeTokenUsageGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTokenUsageGraphRequest&;
    using Resp = DescribeTokenUsageGraphResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTokenUsageGraph", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeTokenUsageGraphOutcomeCallable LkeClient::DescribeTokenUsageGraphCallable(const DescribeTokenUsageGraphRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTokenUsageGraphOutcome>>();
    DescribeTokenUsageGraphAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeTokenUsageGraphRequest&,
        DescribeTokenUsageGraphOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeUnsatisfiedReplyContextOutcome LkeClient::DescribeUnsatisfiedReplyContext(const DescribeUnsatisfiedReplyContextRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnsatisfiedReplyContext");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnsatisfiedReplyContextResponse rsp = DescribeUnsatisfiedReplyContextResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnsatisfiedReplyContextOutcome(rsp);
        else
            return DescribeUnsatisfiedReplyContextOutcome(o.GetError());
    }
    else
    {
        return DescribeUnsatisfiedReplyContextOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeUnsatisfiedReplyContextAsync(const DescribeUnsatisfiedReplyContextRequest& request, const DescribeUnsatisfiedReplyContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnsatisfiedReplyContextRequest&;
    using Resp = DescribeUnsatisfiedReplyContextResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUnsatisfiedReplyContext", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeUnsatisfiedReplyContextOutcomeCallable LkeClient::DescribeUnsatisfiedReplyContextCallable(const DescribeUnsatisfiedReplyContextRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnsatisfiedReplyContextOutcome>>();
    DescribeUnsatisfiedReplyContextAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeUnsatisfiedReplyContextRequest&,
        DescribeUnsatisfiedReplyContextOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::DescribeWorkflowRunOutcome LkeClient::DescribeWorkflowRun(const DescribeWorkflowRunRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowRunResponse rsp = DescribeWorkflowRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowRunOutcome(rsp);
        else
            return DescribeWorkflowRunOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowRunOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeWorkflowRunAsync(const DescribeWorkflowRunRequest& request, const DescribeWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkflowRunRequest&;
    using Resp = DescribeWorkflowRunResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkflowRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::DescribeWorkflowRunOutcomeCallable LkeClient::DescribeWorkflowRunCallable(const DescribeWorkflowRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkflowRunOutcome>>();
    DescribeWorkflowRunAsync(
    request,
    [prom](
        const LkeClient*,
        const DescribeWorkflowRunRequest&,
        DescribeWorkflowRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ExportAttributeLabelOutcome LkeClient::ExportAttributeLabel(const ExportAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAttributeLabelResponse rsp = ExportAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAttributeLabelOutcome(rsp);
        else
            return ExportAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return ExportAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::ExportAttributeLabelAsync(const ExportAttributeLabelRequest& request, const ExportAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAttributeLabelRequest&;
    using Resp = ExportAttributeLabelResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAttributeLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ExportAttributeLabelOutcomeCallable LkeClient::ExportAttributeLabelCallable(const ExportAttributeLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAttributeLabelOutcome>>();
    ExportAttributeLabelAsync(
    request,
    [prom](
        const LkeClient*,
        const ExportAttributeLabelRequest&,
        ExportAttributeLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ExportQAListOutcome LkeClient::ExportQAList(const ExportQAListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportQAList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportQAListResponse rsp = ExportQAListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportQAListOutcome(rsp);
        else
            return ExportQAListOutcome(o.GetError());
    }
    else
    {
        return ExportQAListOutcome(outcome.GetError());
    }
}

void LkeClient::ExportQAListAsync(const ExportQAListRequest& request, const ExportQAListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportQAListRequest&;
    using Resp = ExportQAListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportQAList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ExportQAListOutcomeCallable LkeClient::ExportQAListCallable(const ExportQAListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportQAListOutcome>>();
    ExportQAListAsync(
    request,
    [prom](
        const LkeClient*,
        const ExportQAListRequest&,
        ExportQAListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ExportUnsatisfiedReplyOutcome LkeClient::ExportUnsatisfiedReply(const ExportUnsatisfiedReplyRequest &request)
{
    auto outcome = MakeRequest(request, "ExportUnsatisfiedReply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportUnsatisfiedReplyResponse rsp = ExportUnsatisfiedReplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportUnsatisfiedReplyOutcome(rsp);
        else
            return ExportUnsatisfiedReplyOutcome(o.GetError());
    }
    else
    {
        return ExportUnsatisfiedReplyOutcome(outcome.GetError());
    }
}

void LkeClient::ExportUnsatisfiedReplyAsync(const ExportUnsatisfiedReplyRequest& request, const ExportUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportUnsatisfiedReplyRequest&;
    using Resp = ExportUnsatisfiedReplyResponse;

    DoRequestAsync<Req, Resp>(
        "ExportUnsatisfiedReply", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ExportUnsatisfiedReplyOutcomeCallable LkeClient::ExportUnsatisfiedReplyCallable(const ExportUnsatisfiedReplyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportUnsatisfiedReplyOutcome>>();
    ExportUnsatisfiedReplyAsync(
    request,
    [prom](
        const LkeClient*,
        const ExportUnsatisfiedReplyRequest&,
        ExportUnsatisfiedReplyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::GenerateQAOutcome LkeClient::GenerateQA(const GenerateQARequest &request)
{
    auto outcome = MakeRequest(request, "GenerateQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateQAResponse rsp = GenerateQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateQAOutcome(rsp);
        else
            return GenerateQAOutcome(o.GetError());
    }
    else
    {
        return GenerateQAOutcome(outcome.GetError());
    }
}

void LkeClient::GenerateQAAsync(const GenerateQARequest& request, const GenerateQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenerateQARequest&;
    using Resp = GenerateQAResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateQA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::GenerateQAOutcomeCallable LkeClient::GenerateQACallable(const GenerateQARequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateQAOutcome>>();
    GenerateQAAsync(
    request,
    [prom](
        const LkeClient*,
        const GenerateQARequest&,
        GenerateQAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::GetAnswerTypeDataCountOutcome LkeClient::GetAnswerTypeDataCount(const GetAnswerTypeDataCountRequest &request)
{
    auto outcome = MakeRequest(request, "GetAnswerTypeDataCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAnswerTypeDataCountResponse rsp = GetAnswerTypeDataCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAnswerTypeDataCountOutcome(rsp);
        else
            return GetAnswerTypeDataCountOutcome(o.GetError());
    }
    else
    {
        return GetAnswerTypeDataCountOutcome(outcome.GetError());
    }
}

void LkeClient::GetAnswerTypeDataCountAsync(const GetAnswerTypeDataCountRequest& request, const GetAnswerTypeDataCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAnswerTypeDataCountRequest&;
    using Resp = GetAnswerTypeDataCountResponse;

    DoRequestAsync<Req, Resp>(
        "GetAnswerTypeDataCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::GetAnswerTypeDataCountOutcomeCallable LkeClient::GetAnswerTypeDataCountCallable(const GetAnswerTypeDataCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAnswerTypeDataCountOutcome>>();
    GetAnswerTypeDataCountAsync(
    request,
    [prom](
        const LkeClient*,
        const GetAnswerTypeDataCountRequest&,
        GetAnswerTypeDataCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::GetAppKnowledgeCountOutcome LkeClient::GetAppKnowledgeCount(const GetAppKnowledgeCountRequest &request)
{
    auto outcome = MakeRequest(request, "GetAppKnowledgeCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAppKnowledgeCountResponse rsp = GetAppKnowledgeCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAppKnowledgeCountOutcome(rsp);
        else
            return GetAppKnowledgeCountOutcome(o.GetError());
    }
    else
    {
        return GetAppKnowledgeCountOutcome(outcome.GetError());
    }
}

void LkeClient::GetAppKnowledgeCountAsync(const GetAppKnowledgeCountRequest& request, const GetAppKnowledgeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAppKnowledgeCountRequest&;
    using Resp = GetAppKnowledgeCountResponse;

    DoRequestAsync<Req, Resp>(
        "GetAppKnowledgeCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::GetAppKnowledgeCountOutcomeCallable LkeClient::GetAppKnowledgeCountCallable(const GetAppKnowledgeCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAppKnowledgeCountOutcome>>();
    GetAppKnowledgeCountAsync(
    request,
    [prom](
        const LkeClient*,
        const GetAppKnowledgeCountRequest&,
        GetAppKnowledgeCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::GetAppSecretOutcome LkeClient::GetAppSecret(const GetAppSecretRequest &request)
{
    auto outcome = MakeRequest(request, "GetAppSecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAppSecretResponse rsp = GetAppSecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAppSecretOutcome(rsp);
        else
            return GetAppSecretOutcome(o.GetError());
    }
    else
    {
        return GetAppSecretOutcome(outcome.GetError());
    }
}

void LkeClient::GetAppSecretAsync(const GetAppSecretRequest& request, const GetAppSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAppSecretRequest&;
    using Resp = GetAppSecretResponse;

    DoRequestAsync<Req, Resp>(
        "GetAppSecret", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::GetAppSecretOutcomeCallable LkeClient::GetAppSecretCallable(const GetAppSecretRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAppSecretOutcome>>();
    GetAppSecretAsync(
    request,
    [prom](
        const LkeClient*,
        const GetAppSecretRequest&,
        GetAppSecretOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::GetDocPreviewOutcome LkeClient::GetDocPreview(const GetDocPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "GetDocPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDocPreviewResponse rsp = GetDocPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDocPreviewOutcome(rsp);
        else
            return GetDocPreviewOutcome(o.GetError());
    }
    else
    {
        return GetDocPreviewOutcome(outcome.GetError());
    }
}

void LkeClient::GetDocPreviewAsync(const GetDocPreviewRequest& request, const GetDocPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDocPreviewRequest&;
    using Resp = GetDocPreviewResponse;

    DoRequestAsync<Req, Resp>(
        "GetDocPreview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::GetDocPreviewOutcomeCallable LkeClient::GetDocPreviewCallable(const GetDocPreviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDocPreviewOutcome>>();
    GetDocPreviewAsync(
    request,
    [prom](
        const LkeClient*,
        const GetDocPreviewRequest&,
        GetDocPreviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::GetLikeDataCountOutcome LkeClient::GetLikeDataCount(const GetLikeDataCountRequest &request)
{
    auto outcome = MakeRequest(request, "GetLikeDataCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLikeDataCountResponse rsp = GetLikeDataCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLikeDataCountOutcome(rsp);
        else
            return GetLikeDataCountOutcome(o.GetError());
    }
    else
    {
        return GetLikeDataCountOutcome(outcome.GetError());
    }
}

void LkeClient::GetLikeDataCountAsync(const GetLikeDataCountRequest& request, const GetLikeDataCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLikeDataCountRequest&;
    using Resp = GetLikeDataCountResponse;

    DoRequestAsync<Req, Resp>(
        "GetLikeDataCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::GetLikeDataCountOutcomeCallable LkeClient::GetLikeDataCountCallable(const GetLikeDataCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLikeDataCountOutcome>>();
    GetLikeDataCountAsync(
    request,
    [prom](
        const LkeClient*,
        const GetLikeDataCountRequest&,
        GetLikeDataCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::GetMsgRecordOutcome LkeClient::GetMsgRecord(const GetMsgRecordRequest &request)
{
    auto outcome = MakeRequest(request, "GetMsgRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetMsgRecordResponse rsp = GetMsgRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetMsgRecordOutcome(rsp);
        else
            return GetMsgRecordOutcome(o.GetError());
    }
    else
    {
        return GetMsgRecordOutcome(outcome.GetError());
    }
}

void LkeClient::GetMsgRecordAsync(const GetMsgRecordRequest& request, const GetMsgRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetMsgRecordRequest&;
    using Resp = GetMsgRecordResponse;

    DoRequestAsync<Req, Resp>(
        "GetMsgRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::GetMsgRecordOutcomeCallable LkeClient::GetMsgRecordCallable(const GetMsgRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetMsgRecordOutcome>>();
    GetMsgRecordAsync(
    request,
    [prom](
        const LkeClient*,
        const GetMsgRecordRequest&,
        GetMsgRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::GetTaskStatusOutcome LkeClient::GetTaskStatus(const GetTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskStatusResponse rsp = GetTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskStatusOutcome(rsp);
        else
            return GetTaskStatusOutcome(o.GetError());
    }
    else
    {
        return GetTaskStatusOutcome(outcome.GetError());
    }
}

void LkeClient::GetTaskStatusAsync(const GetTaskStatusRequest& request, const GetTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTaskStatusRequest&;
    using Resp = GetTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::GetTaskStatusOutcomeCallable LkeClient::GetTaskStatusCallable(const GetTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTaskStatusOutcome>>();
    GetTaskStatusAsync(
    request,
    [prom](
        const LkeClient*,
        const GetTaskStatusRequest&,
        GetTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::GetVarListOutcome LkeClient::GetVarList(const GetVarListRequest &request)
{
    auto outcome = MakeRequest(request, "GetVarList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetVarListResponse rsp = GetVarListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetVarListOutcome(rsp);
        else
            return GetVarListOutcome(o.GetError());
    }
    else
    {
        return GetVarListOutcome(outcome.GetError());
    }
}

void LkeClient::GetVarListAsync(const GetVarListRequest& request, const GetVarListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetVarListRequest&;
    using Resp = GetVarListResponse;

    DoRequestAsync<Req, Resp>(
        "GetVarList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::GetVarListOutcomeCallable LkeClient::GetVarListCallable(const GetVarListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetVarListOutcome>>();
    GetVarListAsync(
    request,
    [prom](
        const LkeClient*,
        const GetVarListRequest&,
        GetVarListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::GetWsTokenOutcome LkeClient::GetWsToken(const GetWsTokenRequest &request)
{
    auto outcome = MakeRequest(request, "GetWsToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWsTokenResponse rsp = GetWsTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWsTokenOutcome(rsp);
        else
            return GetWsTokenOutcome(o.GetError());
    }
    else
    {
        return GetWsTokenOutcome(outcome.GetError());
    }
}

void LkeClient::GetWsTokenAsync(const GetWsTokenRequest& request, const GetWsTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetWsTokenRequest&;
    using Resp = GetWsTokenResponse;

    DoRequestAsync<Req, Resp>(
        "GetWsToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::GetWsTokenOutcomeCallable LkeClient::GetWsTokenCallable(const GetWsTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetWsTokenOutcome>>();
    GetWsTokenAsync(
    request,
    [prom](
        const LkeClient*,
        const GetWsTokenRequest&,
        GetWsTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::GroupDocOutcome LkeClient::GroupDoc(const GroupDocRequest &request)
{
    auto outcome = MakeRequest(request, "GroupDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GroupDocResponse rsp = GroupDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GroupDocOutcome(rsp);
        else
            return GroupDocOutcome(o.GetError());
    }
    else
    {
        return GroupDocOutcome(outcome.GetError());
    }
}

void LkeClient::GroupDocAsync(const GroupDocRequest& request, const GroupDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GroupDocRequest&;
    using Resp = GroupDocResponse;

    DoRequestAsync<Req, Resp>(
        "GroupDoc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::GroupDocOutcomeCallable LkeClient::GroupDocCallable(const GroupDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<GroupDocOutcome>>();
    GroupDocAsync(
    request,
    [prom](
        const LkeClient*,
        const GroupDocRequest&,
        GroupDocOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::GroupQAOutcome LkeClient::GroupQA(const GroupQARequest &request)
{
    auto outcome = MakeRequest(request, "GroupQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GroupQAResponse rsp = GroupQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GroupQAOutcome(rsp);
        else
            return GroupQAOutcome(o.GetError());
    }
    else
    {
        return GroupQAOutcome(outcome.GetError());
    }
}

void LkeClient::GroupQAAsync(const GroupQARequest& request, const GroupQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GroupQARequest&;
    using Resp = GroupQAResponse;

    DoRequestAsync<Req, Resp>(
        "GroupQA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::GroupQAOutcomeCallable LkeClient::GroupQACallable(const GroupQARequest &request)
{
    const auto prom = std::make_shared<std::promise<GroupQAOutcome>>();
    GroupQAAsync(
    request,
    [prom](
        const LkeClient*,
        const GroupQARequest&,
        GroupQAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::IgnoreUnsatisfiedReplyOutcome LkeClient::IgnoreUnsatisfiedReply(const IgnoreUnsatisfiedReplyRequest &request)
{
    auto outcome = MakeRequest(request, "IgnoreUnsatisfiedReply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IgnoreUnsatisfiedReplyResponse rsp = IgnoreUnsatisfiedReplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IgnoreUnsatisfiedReplyOutcome(rsp);
        else
            return IgnoreUnsatisfiedReplyOutcome(o.GetError());
    }
    else
    {
        return IgnoreUnsatisfiedReplyOutcome(outcome.GetError());
    }
}

void LkeClient::IgnoreUnsatisfiedReplyAsync(const IgnoreUnsatisfiedReplyRequest& request, const IgnoreUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IgnoreUnsatisfiedReplyRequest&;
    using Resp = IgnoreUnsatisfiedReplyResponse;

    DoRequestAsync<Req, Resp>(
        "IgnoreUnsatisfiedReply", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::IgnoreUnsatisfiedReplyOutcomeCallable LkeClient::IgnoreUnsatisfiedReplyCallable(const IgnoreUnsatisfiedReplyRequest &request)
{
    const auto prom = std::make_shared<std::promise<IgnoreUnsatisfiedReplyOutcome>>();
    IgnoreUnsatisfiedReplyAsync(
    request,
    [prom](
        const LkeClient*,
        const IgnoreUnsatisfiedReplyRequest&,
        IgnoreUnsatisfiedReplyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::IsTransferIntentOutcome LkeClient::IsTransferIntent(const IsTransferIntentRequest &request)
{
    auto outcome = MakeRequest(request, "IsTransferIntent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsTransferIntentResponse rsp = IsTransferIntentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsTransferIntentOutcome(rsp);
        else
            return IsTransferIntentOutcome(o.GetError());
    }
    else
    {
        return IsTransferIntentOutcome(outcome.GetError());
    }
}

void LkeClient::IsTransferIntentAsync(const IsTransferIntentRequest& request, const IsTransferIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsTransferIntentRequest&;
    using Resp = IsTransferIntentResponse;

    DoRequestAsync<Req, Resp>(
        "IsTransferIntent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::IsTransferIntentOutcomeCallable LkeClient::IsTransferIntentCallable(const IsTransferIntentRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsTransferIntentOutcome>>();
    IsTransferIntentAsync(
    request,
    [prom](
        const LkeClient*,
        const IsTransferIntentRequest&,
        IsTransferIntentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListAppOutcome LkeClient::ListApp(const ListAppRequest &request)
{
    auto outcome = MakeRequest(request, "ListApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAppResponse rsp = ListAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAppOutcome(rsp);
        else
            return ListAppOutcome(o.GetError());
    }
    else
    {
        return ListAppOutcome(outcome.GetError());
    }
}

void LkeClient::ListAppAsync(const ListAppRequest& request, const ListAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAppRequest&;
    using Resp = ListAppResponse;

    DoRequestAsync<Req, Resp>(
        "ListApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListAppOutcomeCallable LkeClient::ListAppCallable(const ListAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAppOutcome>>();
    ListAppAsync(
    request,
    [prom](
        const LkeClient*,
        const ListAppRequest&,
        ListAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListAppKnowledgeDetailOutcome LkeClient::ListAppKnowledgeDetail(const ListAppKnowledgeDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ListAppKnowledgeDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAppKnowledgeDetailResponse rsp = ListAppKnowledgeDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAppKnowledgeDetailOutcome(rsp);
        else
            return ListAppKnowledgeDetailOutcome(o.GetError());
    }
    else
    {
        return ListAppKnowledgeDetailOutcome(outcome.GetError());
    }
}

void LkeClient::ListAppKnowledgeDetailAsync(const ListAppKnowledgeDetailRequest& request, const ListAppKnowledgeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAppKnowledgeDetailRequest&;
    using Resp = ListAppKnowledgeDetailResponse;

    DoRequestAsync<Req, Resp>(
        "ListAppKnowledgeDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListAppKnowledgeDetailOutcomeCallable LkeClient::ListAppKnowledgeDetailCallable(const ListAppKnowledgeDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAppKnowledgeDetailOutcome>>();
    ListAppKnowledgeDetailAsync(
    request,
    [prom](
        const LkeClient*,
        const ListAppKnowledgeDetailRequest&,
        ListAppKnowledgeDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListAttributeLabelOutcome LkeClient::ListAttributeLabel(const ListAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "ListAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAttributeLabelResponse rsp = ListAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAttributeLabelOutcome(rsp);
        else
            return ListAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return ListAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::ListAttributeLabelAsync(const ListAttributeLabelRequest& request, const ListAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAttributeLabelRequest&;
    using Resp = ListAttributeLabelResponse;

    DoRequestAsync<Req, Resp>(
        "ListAttributeLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListAttributeLabelOutcomeCallable LkeClient::ListAttributeLabelCallable(const ListAttributeLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAttributeLabelOutcome>>();
    ListAttributeLabelAsync(
    request,
    [prom](
        const LkeClient*,
        const ListAttributeLabelRequest&,
        ListAttributeLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListChannelOutcome LkeClient::ListChannel(const ListChannelRequest &request)
{
    auto outcome = MakeRequest(request, "ListChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListChannelResponse rsp = ListChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListChannelOutcome(rsp);
        else
            return ListChannelOutcome(o.GetError());
    }
    else
    {
        return ListChannelOutcome(outcome.GetError());
    }
}

void LkeClient::ListChannelAsync(const ListChannelRequest& request, const ListChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListChannelRequest&;
    using Resp = ListChannelResponse;

    DoRequestAsync<Req, Resp>(
        "ListChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListChannelOutcomeCallable LkeClient::ListChannelCallable(const ListChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListChannelOutcome>>();
    ListChannelAsync(
    request,
    [prom](
        const LkeClient*,
        const ListChannelRequest&,
        ListChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListDocOutcome LkeClient::ListDoc(const ListDocRequest &request)
{
    auto outcome = MakeRequest(request, "ListDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDocResponse rsp = ListDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDocOutcome(rsp);
        else
            return ListDocOutcome(o.GetError());
    }
    else
    {
        return ListDocOutcome(outcome.GetError());
    }
}

void LkeClient::ListDocAsync(const ListDocRequest& request, const ListDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDocRequest&;
    using Resp = ListDocResponse;

    DoRequestAsync<Req, Resp>(
        "ListDoc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListDocOutcomeCallable LkeClient::ListDocCallable(const ListDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDocOutcome>>();
    ListDocAsync(
    request,
    [prom](
        const LkeClient*,
        const ListDocRequest&,
        ListDocOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListDocCateOutcome LkeClient::ListDocCate(const ListDocCateRequest &request)
{
    auto outcome = MakeRequest(request, "ListDocCate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDocCateResponse rsp = ListDocCateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDocCateOutcome(rsp);
        else
            return ListDocCateOutcome(o.GetError());
    }
    else
    {
        return ListDocCateOutcome(outcome.GetError());
    }
}

void LkeClient::ListDocCateAsync(const ListDocCateRequest& request, const ListDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDocCateRequest&;
    using Resp = ListDocCateResponse;

    DoRequestAsync<Req, Resp>(
        "ListDocCate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListDocCateOutcomeCallable LkeClient::ListDocCateCallable(const ListDocCateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDocCateOutcome>>();
    ListDocCateAsync(
    request,
    [prom](
        const LkeClient*,
        const ListDocCateRequest&,
        ListDocCateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListModelOutcome LkeClient::ListModel(const ListModelRequest &request)
{
    auto outcome = MakeRequest(request, "ListModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListModelResponse rsp = ListModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListModelOutcome(rsp);
        else
            return ListModelOutcome(o.GetError());
    }
    else
    {
        return ListModelOutcome(outcome.GetError());
    }
}

void LkeClient::ListModelAsync(const ListModelRequest& request, const ListModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListModelRequest&;
    using Resp = ListModelResponse;

    DoRequestAsync<Req, Resp>(
        "ListModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListModelOutcomeCallable LkeClient::ListModelCallable(const ListModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListModelOutcome>>();
    ListModelAsync(
    request,
    [prom](
        const LkeClient*,
        const ListModelRequest&,
        ListModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListQAOutcome LkeClient::ListQA(const ListQARequest &request)
{
    auto outcome = MakeRequest(request, "ListQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListQAResponse rsp = ListQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListQAOutcome(rsp);
        else
            return ListQAOutcome(o.GetError());
    }
    else
    {
        return ListQAOutcome(outcome.GetError());
    }
}

void LkeClient::ListQAAsync(const ListQARequest& request, const ListQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListQARequest&;
    using Resp = ListQAResponse;

    DoRequestAsync<Req, Resp>(
        "ListQA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListQAOutcomeCallable LkeClient::ListQACallable(const ListQARequest &request)
{
    const auto prom = std::make_shared<std::promise<ListQAOutcome>>();
    ListQAAsync(
    request,
    [prom](
        const LkeClient*,
        const ListQARequest&,
        ListQAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListQACateOutcome LkeClient::ListQACate(const ListQACateRequest &request)
{
    auto outcome = MakeRequest(request, "ListQACate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListQACateResponse rsp = ListQACateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListQACateOutcome(rsp);
        else
            return ListQACateOutcome(o.GetError());
    }
    else
    {
        return ListQACateOutcome(outcome.GetError());
    }
}

void LkeClient::ListQACateAsync(const ListQACateRequest& request, const ListQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListQACateRequest&;
    using Resp = ListQACateResponse;

    DoRequestAsync<Req, Resp>(
        "ListQACate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListQACateOutcomeCallable LkeClient::ListQACateCallable(const ListQACateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListQACateOutcome>>();
    ListQACateAsync(
    request,
    [prom](
        const LkeClient*,
        const ListQACateRequest&,
        ListQACateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListReferShareKnowledgeOutcome LkeClient::ListReferShareKnowledge(const ListReferShareKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "ListReferShareKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReferShareKnowledgeResponse rsp = ListReferShareKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReferShareKnowledgeOutcome(rsp);
        else
            return ListReferShareKnowledgeOutcome(o.GetError());
    }
    else
    {
        return ListReferShareKnowledgeOutcome(outcome.GetError());
    }
}

void LkeClient::ListReferShareKnowledgeAsync(const ListReferShareKnowledgeRequest& request, const ListReferShareKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListReferShareKnowledgeRequest&;
    using Resp = ListReferShareKnowledgeResponse;

    DoRequestAsync<Req, Resp>(
        "ListReferShareKnowledge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListReferShareKnowledgeOutcomeCallable LkeClient::ListReferShareKnowledgeCallable(const ListReferShareKnowledgeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListReferShareKnowledgeOutcome>>();
    ListReferShareKnowledgeAsync(
    request,
    [prom](
        const LkeClient*,
        const ListReferShareKnowledgeRequest&,
        ListReferShareKnowledgeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListRejectedQuestionOutcome LkeClient::ListRejectedQuestion(const ListRejectedQuestionRequest &request)
{
    auto outcome = MakeRequest(request, "ListRejectedQuestion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRejectedQuestionResponse rsp = ListRejectedQuestionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRejectedQuestionOutcome(rsp);
        else
            return ListRejectedQuestionOutcome(o.GetError());
    }
    else
    {
        return ListRejectedQuestionOutcome(outcome.GetError());
    }
}

void LkeClient::ListRejectedQuestionAsync(const ListRejectedQuestionRequest& request, const ListRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRejectedQuestionRequest&;
    using Resp = ListRejectedQuestionResponse;

    DoRequestAsync<Req, Resp>(
        "ListRejectedQuestion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListRejectedQuestionOutcomeCallable LkeClient::ListRejectedQuestionCallable(const ListRejectedQuestionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRejectedQuestionOutcome>>();
    ListRejectedQuestionAsync(
    request,
    [prom](
        const LkeClient*,
        const ListRejectedQuestionRequest&,
        ListRejectedQuestionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListRejectedQuestionPreviewOutcome LkeClient::ListRejectedQuestionPreview(const ListRejectedQuestionPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "ListRejectedQuestionPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRejectedQuestionPreviewResponse rsp = ListRejectedQuestionPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRejectedQuestionPreviewOutcome(rsp);
        else
            return ListRejectedQuestionPreviewOutcome(o.GetError());
    }
    else
    {
        return ListRejectedQuestionPreviewOutcome(outcome.GetError());
    }
}

void LkeClient::ListRejectedQuestionPreviewAsync(const ListRejectedQuestionPreviewRequest& request, const ListRejectedQuestionPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRejectedQuestionPreviewRequest&;
    using Resp = ListRejectedQuestionPreviewResponse;

    DoRequestAsync<Req, Resp>(
        "ListRejectedQuestionPreview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListRejectedQuestionPreviewOutcomeCallable LkeClient::ListRejectedQuestionPreviewCallable(const ListRejectedQuestionPreviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRejectedQuestionPreviewOutcome>>();
    ListRejectedQuestionPreviewAsync(
    request,
    [prom](
        const LkeClient*,
        const ListRejectedQuestionPreviewRequest&,
        ListRejectedQuestionPreviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListReleaseOutcome LkeClient::ListRelease(const ListReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "ListRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReleaseResponse rsp = ListReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReleaseOutcome(rsp);
        else
            return ListReleaseOutcome(o.GetError());
    }
    else
    {
        return ListReleaseOutcome(outcome.GetError());
    }
}

void LkeClient::ListReleaseAsync(const ListReleaseRequest& request, const ListReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListReleaseRequest&;
    using Resp = ListReleaseResponse;

    DoRequestAsync<Req, Resp>(
        "ListRelease", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListReleaseOutcomeCallable LkeClient::ListReleaseCallable(const ListReleaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListReleaseOutcome>>();
    ListReleaseAsync(
    request,
    [prom](
        const LkeClient*,
        const ListReleaseRequest&,
        ListReleaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListReleaseConfigPreviewOutcome LkeClient::ListReleaseConfigPreview(const ListReleaseConfigPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "ListReleaseConfigPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReleaseConfigPreviewResponse rsp = ListReleaseConfigPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReleaseConfigPreviewOutcome(rsp);
        else
            return ListReleaseConfigPreviewOutcome(o.GetError());
    }
    else
    {
        return ListReleaseConfigPreviewOutcome(outcome.GetError());
    }
}

void LkeClient::ListReleaseConfigPreviewAsync(const ListReleaseConfigPreviewRequest& request, const ListReleaseConfigPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListReleaseConfigPreviewRequest&;
    using Resp = ListReleaseConfigPreviewResponse;

    DoRequestAsync<Req, Resp>(
        "ListReleaseConfigPreview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListReleaseConfigPreviewOutcomeCallable LkeClient::ListReleaseConfigPreviewCallable(const ListReleaseConfigPreviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListReleaseConfigPreviewOutcome>>();
    ListReleaseConfigPreviewAsync(
    request,
    [prom](
        const LkeClient*,
        const ListReleaseConfigPreviewRequest&,
        ListReleaseConfigPreviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListReleaseDocPreviewOutcome LkeClient::ListReleaseDocPreview(const ListReleaseDocPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "ListReleaseDocPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReleaseDocPreviewResponse rsp = ListReleaseDocPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReleaseDocPreviewOutcome(rsp);
        else
            return ListReleaseDocPreviewOutcome(o.GetError());
    }
    else
    {
        return ListReleaseDocPreviewOutcome(outcome.GetError());
    }
}

void LkeClient::ListReleaseDocPreviewAsync(const ListReleaseDocPreviewRequest& request, const ListReleaseDocPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListReleaseDocPreviewRequest&;
    using Resp = ListReleaseDocPreviewResponse;

    DoRequestAsync<Req, Resp>(
        "ListReleaseDocPreview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListReleaseDocPreviewOutcomeCallable LkeClient::ListReleaseDocPreviewCallable(const ListReleaseDocPreviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListReleaseDocPreviewOutcome>>();
    ListReleaseDocPreviewAsync(
    request,
    [prom](
        const LkeClient*,
        const ListReleaseDocPreviewRequest&,
        ListReleaseDocPreviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListReleaseQAPreviewOutcome LkeClient::ListReleaseQAPreview(const ListReleaseQAPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "ListReleaseQAPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReleaseQAPreviewResponse rsp = ListReleaseQAPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReleaseQAPreviewOutcome(rsp);
        else
            return ListReleaseQAPreviewOutcome(o.GetError());
    }
    else
    {
        return ListReleaseQAPreviewOutcome(outcome.GetError());
    }
}

void LkeClient::ListReleaseQAPreviewAsync(const ListReleaseQAPreviewRequest& request, const ListReleaseQAPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListReleaseQAPreviewRequest&;
    using Resp = ListReleaseQAPreviewResponse;

    DoRequestAsync<Req, Resp>(
        "ListReleaseQAPreview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListReleaseQAPreviewOutcomeCallable LkeClient::ListReleaseQAPreviewCallable(const ListReleaseQAPreviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListReleaseQAPreviewOutcome>>();
    ListReleaseQAPreviewAsync(
    request,
    [prom](
        const LkeClient*,
        const ListReleaseQAPreviewRequest&,
        ListReleaseQAPreviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListSelectDocOutcome LkeClient::ListSelectDoc(const ListSelectDocRequest &request)
{
    auto outcome = MakeRequest(request, "ListSelectDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSelectDocResponse rsp = ListSelectDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSelectDocOutcome(rsp);
        else
            return ListSelectDocOutcome(o.GetError());
    }
    else
    {
        return ListSelectDocOutcome(outcome.GetError());
    }
}

void LkeClient::ListSelectDocAsync(const ListSelectDocRequest& request, const ListSelectDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListSelectDocRequest&;
    using Resp = ListSelectDocResponse;

    DoRequestAsync<Req, Resp>(
        "ListSelectDoc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListSelectDocOutcomeCallable LkeClient::ListSelectDocCallable(const ListSelectDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListSelectDocOutcome>>();
    ListSelectDocAsync(
    request,
    [prom](
        const LkeClient*,
        const ListSelectDocRequest&,
        ListSelectDocOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListSharedKnowledgeOutcome LkeClient::ListSharedKnowledge(const ListSharedKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "ListSharedKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSharedKnowledgeResponse rsp = ListSharedKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSharedKnowledgeOutcome(rsp);
        else
            return ListSharedKnowledgeOutcome(o.GetError());
    }
    else
    {
        return ListSharedKnowledgeOutcome(outcome.GetError());
    }
}

void LkeClient::ListSharedKnowledgeAsync(const ListSharedKnowledgeRequest& request, const ListSharedKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListSharedKnowledgeRequest&;
    using Resp = ListSharedKnowledgeResponse;

    DoRequestAsync<Req, Resp>(
        "ListSharedKnowledge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListSharedKnowledgeOutcomeCallable LkeClient::ListSharedKnowledgeCallable(const ListSharedKnowledgeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListSharedKnowledgeOutcome>>();
    ListSharedKnowledgeAsync(
    request,
    [prom](
        const LkeClient*,
        const ListSharedKnowledgeRequest&,
        ListSharedKnowledgeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListUnsatisfiedReplyOutcome LkeClient::ListUnsatisfiedReply(const ListUnsatisfiedReplyRequest &request)
{
    auto outcome = MakeRequest(request, "ListUnsatisfiedReply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUnsatisfiedReplyResponse rsp = ListUnsatisfiedReplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUnsatisfiedReplyOutcome(rsp);
        else
            return ListUnsatisfiedReplyOutcome(o.GetError());
    }
    else
    {
        return ListUnsatisfiedReplyOutcome(outcome.GetError());
    }
}

void LkeClient::ListUnsatisfiedReplyAsync(const ListUnsatisfiedReplyRequest& request, const ListUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListUnsatisfiedReplyRequest&;
    using Resp = ListUnsatisfiedReplyResponse;

    DoRequestAsync<Req, Resp>(
        "ListUnsatisfiedReply", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListUnsatisfiedReplyOutcomeCallable LkeClient::ListUnsatisfiedReplyCallable(const ListUnsatisfiedReplyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUnsatisfiedReplyOutcome>>();
    ListUnsatisfiedReplyAsync(
    request,
    [prom](
        const LkeClient*,
        const ListUnsatisfiedReplyRequest&,
        ListUnsatisfiedReplyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListUsageCallDetailOutcome LkeClient::ListUsageCallDetail(const ListUsageCallDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ListUsageCallDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUsageCallDetailResponse rsp = ListUsageCallDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUsageCallDetailOutcome(rsp);
        else
            return ListUsageCallDetailOutcome(o.GetError());
    }
    else
    {
        return ListUsageCallDetailOutcome(outcome.GetError());
    }
}

void LkeClient::ListUsageCallDetailAsync(const ListUsageCallDetailRequest& request, const ListUsageCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListUsageCallDetailRequest&;
    using Resp = ListUsageCallDetailResponse;

    DoRequestAsync<Req, Resp>(
        "ListUsageCallDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListUsageCallDetailOutcomeCallable LkeClient::ListUsageCallDetailCallable(const ListUsageCallDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUsageCallDetailOutcome>>();
    ListUsageCallDetailAsync(
    request,
    [prom](
        const LkeClient*,
        const ListUsageCallDetailRequest&,
        ListUsageCallDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ListWorkflowRunsOutcome LkeClient::ListWorkflowRuns(const ListWorkflowRunsRequest &request)
{
    auto outcome = MakeRequest(request, "ListWorkflowRuns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListWorkflowRunsResponse rsp = ListWorkflowRunsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListWorkflowRunsOutcome(rsp);
        else
            return ListWorkflowRunsOutcome(o.GetError());
    }
    else
    {
        return ListWorkflowRunsOutcome(outcome.GetError());
    }
}

void LkeClient::ListWorkflowRunsAsync(const ListWorkflowRunsRequest& request, const ListWorkflowRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListWorkflowRunsRequest&;
    using Resp = ListWorkflowRunsResponse;

    DoRequestAsync<Req, Resp>(
        "ListWorkflowRuns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ListWorkflowRunsOutcomeCallable LkeClient::ListWorkflowRunsCallable(const ListWorkflowRunsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListWorkflowRunsOutcome>>();
    ListWorkflowRunsAsync(
    request,
    [prom](
        const LkeClient*,
        const ListWorkflowRunsRequest&,
        ListWorkflowRunsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ModifyAppOutcome LkeClient::ModifyApp(const ModifyAppRequest &request)
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

void LkeClient::ModifyAppAsync(const ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LkeClient::ModifyAppOutcomeCallable LkeClient::ModifyAppCallable(const ModifyAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAppOutcome>>();
    ModifyAppAsync(
    request,
    [prom](
        const LkeClient*,
        const ModifyAppRequest&,
        ModifyAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ModifyAttributeLabelOutcome LkeClient::ModifyAttributeLabel(const ModifyAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAttributeLabelResponse rsp = ModifyAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAttributeLabelOutcome(rsp);
        else
            return ModifyAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return ModifyAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyAttributeLabelAsync(const ModifyAttributeLabelRequest& request, const ModifyAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAttributeLabelRequest&;
    using Resp = ModifyAttributeLabelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAttributeLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ModifyAttributeLabelOutcomeCallable LkeClient::ModifyAttributeLabelCallable(const ModifyAttributeLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAttributeLabelOutcome>>();
    ModifyAttributeLabelAsync(
    request,
    [prom](
        const LkeClient*,
        const ModifyAttributeLabelRequest&,
        ModifyAttributeLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ModifyDocOutcome LkeClient::ModifyDoc(const ModifyDocRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDocResponse rsp = ModifyDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDocOutcome(rsp);
        else
            return ModifyDocOutcome(o.GetError());
    }
    else
    {
        return ModifyDocOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyDocAsync(const ModifyDocRequest& request, const ModifyDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDocRequest&;
    using Resp = ModifyDocResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDoc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ModifyDocOutcomeCallable LkeClient::ModifyDocCallable(const ModifyDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDocOutcome>>();
    ModifyDocAsync(
    request,
    [prom](
        const LkeClient*,
        const ModifyDocRequest&,
        ModifyDocOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ModifyDocAttrRangeOutcome LkeClient::ModifyDocAttrRange(const ModifyDocAttrRangeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDocAttrRange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDocAttrRangeResponse rsp = ModifyDocAttrRangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDocAttrRangeOutcome(rsp);
        else
            return ModifyDocAttrRangeOutcome(o.GetError());
    }
    else
    {
        return ModifyDocAttrRangeOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyDocAttrRangeAsync(const ModifyDocAttrRangeRequest& request, const ModifyDocAttrRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDocAttrRangeRequest&;
    using Resp = ModifyDocAttrRangeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDocAttrRange", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ModifyDocAttrRangeOutcomeCallable LkeClient::ModifyDocAttrRangeCallable(const ModifyDocAttrRangeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDocAttrRangeOutcome>>();
    ModifyDocAttrRangeAsync(
    request,
    [prom](
        const LkeClient*,
        const ModifyDocAttrRangeRequest&,
        ModifyDocAttrRangeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ModifyDocCateOutcome LkeClient::ModifyDocCate(const ModifyDocCateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDocCate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDocCateResponse rsp = ModifyDocCateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDocCateOutcome(rsp);
        else
            return ModifyDocCateOutcome(o.GetError());
    }
    else
    {
        return ModifyDocCateOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyDocCateAsync(const ModifyDocCateRequest& request, const ModifyDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDocCateRequest&;
    using Resp = ModifyDocCateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDocCate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ModifyDocCateOutcomeCallable LkeClient::ModifyDocCateCallable(const ModifyDocCateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDocCateOutcome>>();
    ModifyDocCateAsync(
    request,
    [prom](
        const LkeClient*,
        const ModifyDocCateRequest&,
        ModifyDocCateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ModifyQAOutcome LkeClient::ModifyQA(const ModifyQARequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQAResponse rsp = ModifyQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQAOutcome(rsp);
        else
            return ModifyQAOutcome(o.GetError());
    }
    else
    {
        return ModifyQAOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyQAAsync(const ModifyQARequest& request, const ModifyQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyQARequest&;
    using Resp = ModifyQAResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyQA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ModifyQAOutcomeCallable LkeClient::ModifyQACallable(const ModifyQARequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyQAOutcome>>();
    ModifyQAAsync(
    request,
    [prom](
        const LkeClient*,
        const ModifyQARequest&,
        ModifyQAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ModifyQAAttrRangeOutcome LkeClient::ModifyQAAttrRange(const ModifyQAAttrRangeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQAAttrRange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQAAttrRangeResponse rsp = ModifyQAAttrRangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQAAttrRangeOutcome(rsp);
        else
            return ModifyQAAttrRangeOutcome(o.GetError());
    }
    else
    {
        return ModifyQAAttrRangeOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyQAAttrRangeAsync(const ModifyQAAttrRangeRequest& request, const ModifyQAAttrRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyQAAttrRangeRequest&;
    using Resp = ModifyQAAttrRangeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyQAAttrRange", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ModifyQAAttrRangeOutcomeCallable LkeClient::ModifyQAAttrRangeCallable(const ModifyQAAttrRangeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyQAAttrRangeOutcome>>();
    ModifyQAAttrRangeAsync(
    request,
    [prom](
        const LkeClient*,
        const ModifyQAAttrRangeRequest&,
        ModifyQAAttrRangeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ModifyQACateOutcome LkeClient::ModifyQACate(const ModifyQACateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQACate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQACateResponse rsp = ModifyQACateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQACateOutcome(rsp);
        else
            return ModifyQACateOutcome(o.GetError());
    }
    else
    {
        return ModifyQACateOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyQACateAsync(const ModifyQACateRequest& request, const ModifyQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyQACateRequest&;
    using Resp = ModifyQACateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyQACate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ModifyQACateOutcomeCallable LkeClient::ModifyQACateCallable(const ModifyQACateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyQACateOutcome>>();
    ModifyQACateAsync(
    request,
    [prom](
        const LkeClient*,
        const ModifyQACateRequest&,
        ModifyQACateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ModifyRejectedQuestionOutcome LkeClient::ModifyRejectedQuestion(const ModifyRejectedQuestionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRejectedQuestion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRejectedQuestionResponse rsp = ModifyRejectedQuestionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRejectedQuestionOutcome(rsp);
        else
            return ModifyRejectedQuestionOutcome(o.GetError());
    }
    else
    {
        return ModifyRejectedQuestionOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyRejectedQuestionAsync(const ModifyRejectedQuestionRequest& request, const ModifyRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRejectedQuestionRequest&;
    using Resp = ModifyRejectedQuestionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRejectedQuestion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ModifyRejectedQuestionOutcomeCallable LkeClient::ModifyRejectedQuestionCallable(const ModifyRejectedQuestionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRejectedQuestionOutcome>>();
    ModifyRejectedQuestionAsync(
    request,
    [prom](
        const LkeClient*,
        const ModifyRejectedQuestionRequest&,
        ModifyRejectedQuestionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::RateMsgRecordOutcome LkeClient::RateMsgRecord(const RateMsgRecordRequest &request)
{
    auto outcome = MakeRequest(request, "RateMsgRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RateMsgRecordResponse rsp = RateMsgRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RateMsgRecordOutcome(rsp);
        else
            return RateMsgRecordOutcome(o.GetError());
    }
    else
    {
        return RateMsgRecordOutcome(outcome.GetError());
    }
}

void LkeClient::RateMsgRecordAsync(const RateMsgRecordRequest& request, const RateMsgRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RateMsgRecordRequest&;
    using Resp = RateMsgRecordResponse;

    DoRequestAsync<Req, Resp>(
        "RateMsgRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::RateMsgRecordOutcomeCallable LkeClient::RateMsgRecordCallable(const RateMsgRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<RateMsgRecordOutcome>>();
    RateMsgRecordAsync(
    request,
    [prom](
        const LkeClient*,
        const RateMsgRecordRequest&,
        RateMsgRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::ReferShareKnowledgeOutcome LkeClient::ReferShareKnowledge(const ReferShareKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "ReferShareKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReferShareKnowledgeResponse rsp = ReferShareKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReferShareKnowledgeOutcome(rsp);
        else
            return ReferShareKnowledgeOutcome(o.GetError());
    }
    else
    {
        return ReferShareKnowledgeOutcome(outcome.GetError());
    }
}

void LkeClient::ReferShareKnowledgeAsync(const ReferShareKnowledgeRequest& request, const ReferShareKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReferShareKnowledgeRequest&;
    using Resp = ReferShareKnowledgeResponse;

    DoRequestAsync<Req, Resp>(
        "ReferShareKnowledge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::ReferShareKnowledgeOutcomeCallable LkeClient::ReferShareKnowledgeCallable(const ReferShareKnowledgeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReferShareKnowledgeOutcome>>();
    ReferShareKnowledgeAsync(
    request,
    [prom](
        const LkeClient*,
        const ReferShareKnowledgeRequest&,
        ReferShareKnowledgeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::RenameDocOutcome LkeClient::RenameDoc(const RenameDocRequest &request)
{
    auto outcome = MakeRequest(request, "RenameDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenameDocResponse rsp = RenameDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenameDocOutcome(rsp);
        else
            return RenameDocOutcome(o.GetError());
    }
    else
    {
        return RenameDocOutcome(outcome.GetError());
    }
}

void LkeClient::RenameDocAsync(const RenameDocRequest& request, const RenameDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenameDocRequest&;
    using Resp = RenameDocResponse;

    DoRequestAsync<Req, Resp>(
        "RenameDoc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::RenameDocOutcomeCallable LkeClient::RenameDocCallable(const RenameDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenameDocOutcome>>();
    RenameDocAsync(
    request,
    [prom](
        const LkeClient*,
        const RenameDocRequest&,
        RenameDocOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::RetryDocAuditOutcome LkeClient::RetryDocAudit(const RetryDocAuditRequest &request)
{
    auto outcome = MakeRequest(request, "RetryDocAudit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryDocAuditResponse rsp = RetryDocAuditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryDocAuditOutcome(rsp);
        else
            return RetryDocAuditOutcome(o.GetError());
    }
    else
    {
        return RetryDocAuditOutcome(outcome.GetError());
    }
}

void LkeClient::RetryDocAuditAsync(const RetryDocAuditRequest& request, const RetryDocAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RetryDocAuditRequest&;
    using Resp = RetryDocAuditResponse;

    DoRequestAsync<Req, Resp>(
        "RetryDocAudit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::RetryDocAuditOutcomeCallable LkeClient::RetryDocAuditCallable(const RetryDocAuditRequest &request)
{
    const auto prom = std::make_shared<std::promise<RetryDocAuditOutcome>>();
    RetryDocAuditAsync(
    request,
    [prom](
        const LkeClient*,
        const RetryDocAuditRequest&,
        RetryDocAuditOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::RetryDocParseOutcome LkeClient::RetryDocParse(const RetryDocParseRequest &request)
{
    auto outcome = MakeRequest(request, "RetryDocParse");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryDocParseResponse rsp = RetryDocParseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryDocParseOutcome(rsp);
        else
            return RetryDocParseOutcome(o.GetError());
    }
    else
    {
        return RetryDocParseOutcome(outcome.GetError());
    }
}

void LkeClient::RetryDocParseAsync(const RetryDocParseRequest& request, const RetryDocParseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RetryDocParseRequest&;
    using Resp = RetryDocParseResponse;

    DoRequestAsync<Req, Resp>(
        "RetryDocParse", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::RetryDocParseOutcomeCallable LkeClient::RetryDocParseCallable(const RetryDocParseRequest &request)
{
    const auto prom = std::make_shared<std::promise<RetryDocParseOutcome>>();
    RetryDocParseAsync(
    request,
    [prom](
        const LkeClient*,
        const RetryDocParseRequest&,
        RetryDocParseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::RetryReleaseOutcome LkeClient::RetryRelease(const RetryReleaseRequest &request)
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

void LkeClient::RetryReleaseAsync(const RetryReleaseRequest& request, const RetryReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LkeClient::RetryReleaseOutcomeCallable LkeClient::RetryReleaseCallable(const RetryReleaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<RetryReleaseOutcome>>();
    RetryReleaseAsync(
    request,
    [prom](
        const LkeClient*,
        const RetryReleaseRequest&,
        RetryReleaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::SaveDocOutcome LkeClient::SaveDoc(const SaveDocRequest &request)
{
    auto outcome = MakeRequest(request, "SaveDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaveDocResponse rsp = SaveDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaveDocOutcome(rsp);
        else
            return SaveDocOutcome(o.GetError());
    }
    else
    {
        return SaveDocOutcome(outcome.GetError());
    }
}

void LkeClient::SaveDocAsync(const SaveDocRequest& request, const SaveDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SaveDocRequest&;
    using Resp = SaveDocResponse;

    DoRequestAsync<Req, Resp>(
        "SaveDoc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::SaveDocOutcomeCallable LkeClient::SaveDocCallable(const SaveDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<SaveDocOutcome>>();
    SaveDocAsync(
    request,
    [prom](
        const LkeClient*,
        const SaveDocRequest&,
        SaveDocOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::StopDocParseOutcome LkeClient::StopDocParse(const StopDocParseRequest &request)
{
    auto outcome = MakeRequest(request, "StopDocParse");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopDocParseResponse rsp = StopDocParseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopDocParseOutcome(rsp);
        else
            return StopDocParseOutcome(o.GetError());
    }
    else
    {
        return StopDocParseOutcome(outcome.GetError());
    }
}

void LkeClient::StopDocParseAsync(const StopDocParseRequest& request, const StopDocParseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopDocParseRequest&;
    using Resp = StopDocParseResponse;

    DoRequestAsync<Req, Resp>(
        "StopDocParse", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::StopDocParseOutcomeCallable LkeClient::StopDocParseCallable(const StopDocParseRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopDocParseOutcome>>();
    StopDocParseAsync(
    request,
    [prom](
        const LkeClient*,
        const StopDocParseRequest&,
        StopDocParseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::StopWorkflowRunOutcome LkeClient::StopWorkflowRun(const StopWorkflowRunRequest &request)
{
    auto outcome = MakeRequest(request, "StopWorkflowRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopWorkflowRunResponse rsp = StopWorkflowRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopWorkflowRunOutcome(rsp);
        else
            return StopWorkflowRunOutcome(o.GetError());
    }
    else
    {
        return StopWorkflowRunOutcome(outcome.GetError());
    }
}

void LkeClient::StopWorkflowRunAsync(const StopWorkflowRunRequest& request, const StopWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopWorkflowRunRequest&;
    using Resp = StopWorkflowRunResponse;

    DoRequestAsync<Req, Resp>(
        "StopWorkflowRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::StopWorkflowRunOutcomeCallable LkeClient::StopWorkflowRunCallable(const StopWorkflowRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopWorkflowRunOutcome>>();
    StopWorkflowRunAsync(
    request,
    [prom](
        const LkeClient*,
        const StopWorkflowRunRequest&,
        StopWorkflowRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::UpdateSharedKnowledgeOutcome LkeClient::UpdateSharedKnowledge(const UpdateSharedKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSharedKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSharedKnowledgeResponse rsp = UpdateSharedKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSharedKnowledgeOutcome(rsp);
        else
            return UpdateSharedKnowledgeOutcome(o.GetError());
    }
    else
    {
        return UpdateSharedKnowledgeOutcome(outcome.GetError());
    }
}

void LkeClient::UpdateSharedKnowledgeAsync(const UpdateSharedKnowledgeRequest& request, const UpdateSharedKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateSharedKnowledgeRequest&;
    using Resp = UpdateSharedKnowledgeResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateSharedKnowledge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::UpdateSharedKnowledgeOutcomeCallable LkeClient::UpdateSharedKnowledgeCallable(const UpdateSharedKnowledgeRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateSharedKnowledgeOutcome>>();
    UpdateSharedKnowledgeAsync(
    request,
    [prom](
        const LkeClient*,
        const UpdateSharedKnowledgeRequest&,
        UpdateSharedKnowledgeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::UpdateVarOutcome LkeClient::UpdateVar(const UpdateVarRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateVar");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateVarResponse rsp = UpdateVarResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateVarOutcome(rsp);
        else
            return UpdateVarOutcome(o.GetError());
    }
    else
    {
        return UpdateVarOutcome(outcome.GetError());
    }
}

void LkeClient::UpdateVarAsync(const UpdateVarRequest& request, const UpdateVarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateVarRequest&;
    using Resp = UpdateVarResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateVar", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::UpdateVarOutcomeCallable LkeClient::UpdateVarCallable(const UpdateVarRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateVarOutcome>>();
    UpdateVarAsync(
    request,
    [prom](
        const LkeClient*,
        const UpdateVarRequest&,
        UpdateVarOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::UploadAttributeLabelOutcome LkeClient::UploadAttributeLabel(const UploadAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "UploadAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadAttributeLabelResponse rsp = UploadAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadAttributeLabelOutcome(rsp);
        else
            return UploadAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return UploadAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::UploadAttributeLabelAsync(const UploadAttributeLabelRequest& request, const UploadAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadAttributeLabelRequest&;
    using Resp = UploadAttributeLabelResponse;

    DoRequestAsync<Req, Resp>(
        "UploadAttributeLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::UploadAttributeLabelOutcomeCallable LkeClient::UploadAttributeLabelCallable(const UploadAttributeLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadAttributeLabelOutcome>>();
    UploadAttributeLabelAsync(
    request,
    [prom](
        const LkeClient*,
        const UploadAttributeLabelRequest&,
        UploadAttributeLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeClient::VerifyQAOutcome LkeClient::VerifyQA(const VerifyQARequest &request)
{
    auto outcome = MakeRequest(request, "VerifyQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyQAResponse rsp = VerifyQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyQAOutcome(rsp);
        else
            return VerifyQAOutcome(o.GetError());
    }
    else
    {
        return VerifyQAOutcome(outcome.GetError());
    }
}

void LkeClient::VerifyQAAsync(const VerifyQARequest& request, const VerifyQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyQARequest&;
    using Resp = VerifyQAResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyQA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeClient::VerifyQAOutcomeCallable LkeClient::VerifyQACallable(const VerifyQARequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyQAOutcome>>();
    VerifyQAAsync(
    request,
    [prom](
        const LkeClient*,
        const VerifyQARequest&,
        VerifyQAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

