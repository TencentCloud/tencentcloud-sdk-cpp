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


AdpClient::CheckLabelOutcome AdpClient::CheckLabel(const CheckLabelRequest &request)
{
    auto outcome = MakeRequest(request, "CheckLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckLabelResponse rsp = CheckLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckLabelOutcome(rsp);
        else
            return CheckLabelOutcome(o.GetError());
    }
    else
    {
        return CheckLabelOutcome(outcome.GetError());
    }
}

void AdpClient::CheckLabelAsync(const CheckLabelRequest& request, const CheckLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckLabelRequest&;
    using Resp = CheckLabelResponse;

    DoRequestAsync<Req, Resp>(
        "CheckLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CheckLabelOutcomeCallable AdpClient::CheckLabelCallable(const CheckLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckLabelOutcome>>();
    CheckLabelAsync(
    request,
    [prom](
        const AdpClient*,
        const CheckLabelRequest&,
        CheckLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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

AdpClient::CreateAppTriggerOutcome AdpClient::CreateAppTrigger(const CreateAppTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAppTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppTriggerResponse rsp = CreateAppTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppTriggerOutcome(rsp);
        else
            return CreateAppTriggerOutcome(o.GetError());
    }
    else
    {
        return CreateAppTriggerOutcome(outcome.GetError());
    }
}

void AdpClient::CreateAppTriggerAsync(const CreateAppTriggerRequest& request, const CreateAppTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAppTriggerRequest&;
    using Resp = CreateAppTriggerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAppTrigger", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateAppTriggerOutcomeCallable AdpClient::CreateAppTriggerCallable(const CreateAppTriggerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAppTriggerOutcome>>();
    CreateAppTriggerAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateAppTriggerRequest&,
        CreateAppTriggerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateCategoryOutcome AdpClient::CreateCategory(const CreateCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCategoryResponse rsp = CreateCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCategoryOutcome(rsp);
        else
            return CreateCategoryOutcome(o.GetError());
    }
    else
    {
        return CreateCategoryOutcome(outcome.GetError());
    }
}

void AdpClient::CreateCategoryAsync(const CreateCategoryRequest& request, const CreateCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCategoryRequest&;
    using Resp = CreateCategoryResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateCategoryOutcomeCallable AdpClient::CreateCategoryCallable(const CreateCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCategoryOutcome>>();
    CreateCategoryAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateCategoryRequest&,
        CreateCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateChannelOutcome AdpClient::CreateChannel(const CreateChannelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChannelResponse rsp = CreateChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChannelOutcome(rsp);
        else
            return CreateChannelOutcome(o.GetError());
    }
    else
    {
        return CreateChannelOutcome(outcome.GetError());
    }
}

void AdpClient::CreateChannelAsync(const CreateChannelRequest& request, const CreateChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateChannelRequest&;
    using Resp = CreateChannelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateChannelOutcomeCallable AdpClient::CreateChannelCallable(const CreateChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateChannelOutcome>>();
    CreateChannelAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateChannelRequest&,
        CreateChannelOutcome resp,
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

AdpClient::CreateKBOutcome AdpClient::CreateKB(const CreateKBRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKBResponse rsp = CreateKBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKBOutcome(rsp);
        else
            return CreateKBOutcome(o.GetError());
    }
    else
    {
        return CreateKBOutcome(outcome.GetError());
    }
}

void AdpClient::CreateKBAsync(const CreateKBRequest& request, const CreateKBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateKBRequest&;
    using Resp = CreateKBResponse;

    DoRequestAsync<Req, Resp>(
        "CreateKB", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateKBOutcomeCallable AdpClient::CreateKBCallable(const CreateKBRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateKBOutcome>>();
    CreateKBAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateKBRequest&,
        CreateKBOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateLabelOutcome AdpClient::CreateLabel(const CreateLabelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLabelResponse rsp = CreateLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLabelOutcome(rsp);
        else
            return CreateLabelOutcome(o.GetError());
    }
    else
    {
        return CreateLabelOutcome(outcome.GetError());
    }
}

void AdpClient::CreateLabelAsync(const CreateLabelRequest& request, const CreateLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLabelRequest&;
    using Resp = CreateLabelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateLabelOutcomeCallable AdpClient::CreateLabelCallable(const CreateLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLabelOutcome>>();
    CreateLabelAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateLabelRequest&,
        CreateLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateMsgRecordCategoryOutcome AdpClient::CreateMsgRecordCategory(const CreateMsgRecordCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMsgRecordCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMsgRecordCategoryResponse rsp = CreateMsgRecordCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMsgRecordCategoryOutcome(rsp);
        else
            return CreateMsgRecordCategoryOutcome(o.GetError());
    }
    else
    {
        return CreateMsgRecordCategoryOutcome(outcome.GetError());
    }
}

void AdpClient::CreateMsgRecordCategoryAsync(const CreateMsgRecordCategoryRequest& request, const CreateMsgRecordCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMsgRecordCategoryRequest&;
    using Resp = CreateMsgRecordCategoryResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMsgRecordCategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateMsgRecordCategoryOutcomeCallable AdpClient::CreateMsgRecordCategoryCallable(const CreateMsgRecordCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMsgRecordCategoryOutcome>>();
    CreateMsgRecordCategoryAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateMsgRecordCategoryRequest&,
        CreateMsgRecordCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreatePluginOutcome AdpClient::CreatePlugin(const CreatePluginRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePluginResponse rsp = CreatePluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePluginOutcome(rsp);
        else
            return CreatePluginOutcome(o.GetError());
    }
    else
    {
        return CreatePluginOutcome(outcome.GetError());
    }
}

void AdpClient::CreatePluginAsync(const CreatePluginRequest& request, const CreatePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePluginRequest&;
    using Resp = CreatePluginResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePlugin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreatePluginOutcomeCallable AdpClient::CreatePluginCallable(const CreatePluginRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePluginOutcome>>();
    CreatePluginAsync(
    request,
    [prom](
        const AdpClient*,
        const CreatePluginRequest&,
        CreatePluginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateQAGenerationTaskOutcome AdpClient::CreateQAGenerationTask(const CreateQAGenerationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateQAGenerationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQAGenerationTaskResponse rsp = CreateQAGenerationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQAGenerationTaskOutcome(rsp);
        else
            return CreateQAGenerationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateQAGenerationTaskOutcome(outcome.GetError());
    }
}

void AdpClient::CreateQAGenerationTaskAsync(const CreateQAGenerationTaskRequest& request, const CreateQAGenerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateQAGenerationTaskRequest&;
    using Resp = CreateQAGenerationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateQAGenerationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateQAGenerationTaskOutcomeCallable AdpClient::CreateQAGenerationTaskCallable(const CreateQAGenerationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateQAGenerationTaskOutcome>>();
    CreateQAGenerationTaskAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateQAGenerationTaskRequest&,
        CreateQAGenerationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateQAListOutcome AdpClient::CreateQAList(const CreateQAListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateQAList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQAListResponse rsp = CreateQAListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQAListOutcome(rsp);
        else
            return CreateQAListOutcome(o.GetError());
    }
    else
    {
        return CreateQAListOutcome(outcome.GetError());
    }
}

void AdpClient::CreateQAListAsync(const CreateQAListRequest& request, const CreateQAListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateQAListRequest&;
    using Resp = CreateQAListResponse;

    DoRequestAsync<Req, Resp>(
        "CreateQAList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateQAListOutcomeCallable AdpClient::CreateQAListCallable(const CreateQAListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateQAListOutcome>>();
    CreateQAListAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateQAListRequest&,
        CreateQAListOutcome resp,
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

AdpClient::CreateSimilarQuestionOutcome AdpClient::CreateSimilarQuestion(const CreateSimilarQuestionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSimilarQuestion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSimilarQuestionResponse rsp = CreateSimilarQuestionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSimilarQuestionOutcome(rsp);
        else
            return CreateSimilarQuestionOutcome(o.GetError());
    }
    else
    {
        return CreateSimilarQuestionOutcome(outcome.GetError());
    }
}

void AdpClient::CreateSimilarQuestionAsync(const CreateSimilarQuestionRequest& request, const CreateSimilarQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSimilarQuestionRequest&;
    using Resp = CreateSimilarQuestionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSimilarQuestion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateSimilarQuestionOutcomeCallable AdpClient::CreateSimilarQuestionCallable(const CreateSimilarQuestionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSimilarQuestionOutcome>>();
    CreateSimilarQuestionAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateSimilarQuestionRequest&,
        CreateSimilarQuestionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateSkillOutcome AdpClient::CreateSkill(const CreateSkillRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSkill");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSkillResponse rsp = CreateSkillResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSkillOutcome(rsp);
        else
            return CreateSkillOutcome(o.GetError());
    }
    else
    {
        return CreateSkillOutcome(outcome.GetError());
    }
}

void AdpClient::CreateSkillAsync(const CreateSkillRequest& request, const CreateSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSkillRequest&;
    using Resp = CreateSkillResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSkill", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateSkillOutcomeCallable AdpClient::CreateSkillCallable(const CreateSkillRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSkillOutcome>>();
    CreateSkillAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateSkillRequest&,
        CreateSkillOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::CreateSkillShareOutcome AdpClient::CreateSkillShare(const CreateSkillShareRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSkillShare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSkillShareResponse rsp = CreateSkillShareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSkillShareOutcome(rsp);
        else
            return CreateSkillShareOutcome(o.GetError());
    }
    else
    {
        return CreateSkillShareOutcome(outcome.GetError());
    }
}

void AdpClient::CreateSkillShareAsync(const CreateSkillShareRequest& request, const CreateSkillShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSkillShareRequest&;
    using Resp = CreateSkillShareResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSkillShare", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::CreateSkillShareOutcomeCallable AdpClient::CreateSkillShareCallable(const CreateSkillShareRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSkillShareOutcome>>();
    CreateSkillShareAsync(
    request,
    [prom](
        const AdpClient*,
        const CreateSkillShareRequest&,
        CreateSkillShareOutcome resp,
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

AdpClient::DeleteAgentOutcome AdpClient::DeleteAgent(const DeleteAgentRequest &request)
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

void AdpClient::DeleteAgentAsync(const DeleteAgentRequest& request, const DeleteAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AdpClient::DeleteAgentOutcomeCallable AdpClient::DeleteAgentCallable(const DeleteAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAgentOutcome>>();
    DeleteAgentAsync(
    request,
    [prom](
        const AdpClient*,
        const DeleteAgentRequest&,
        DeleteAgentOutcome resp,
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

AdpClient::DeleteAppTriggerOutcome AdpClient::DeleteAppTrigger(const DeleteAppTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAppTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAppTriggerResponse rsp = DeleteAppTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAppTriggerOutcome(rsp);
        else
            return DeleteAppTriggerOutcome(o.GetError());
    }
    else
    {
        return DeleteAppTriggerOutcome(outcome.GetError());
    }
}

void AdpClient::DeleteAppTriggerAsync(const DeleteAppTriggerRequest& request, const DeleteAppTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAppTriggerRequest&;
    using Resp = DeleteAppTriggerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAppTrigger", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DeleteAppTriggerOutcomeCallable AdpClient::DeleteAppTriggerCallable(const DeleteAppTriggerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAppTriggerOutcome>>();
    DeleteAppTriggerAsync(
    request,
    [prom](
        const AdpClient*,
        const DeleteAppTriggerRequest&,
        DeleteAppTriggerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DeleteCategoryOutcome AdpClient::DeleteCategory(const DeleteCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCategoryResponse rsp = DeleteCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCategoryOutcome(rsp);
        else
            return DeleteCategoryOutcome(o.GetError());
    }
    else
    {
        return DeleteCategoryOutcome(outcome.GetError());
    }
}

void AdpClient::DeleteCategoryAsync(const DeleteCategoryRequest& request, const DeleteCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCategoryRequest&;
    using Resp = DeleteCategoryResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DeleteCategoryOutcomeCallable AdpClient::DeleteCategoryCallable(const DeleteCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCategoryOutcome>>();
    DeleteCategoryAsync(
    request,
    [prom](
        const AdpClient*,
        const DeleteCategoryRequest&,
        DeleteCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DeleteChannelOutcome AdpClient::DeleteChannel(const DeleteChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteChannelResponse rsp = DeleteChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteChannelOutcome(rsp);
        else
            return DeleteChannelOutcome(o.GetError());
    }
    else
    {
        return DeleteChannelOutcome(outcome.GetError());
    }
}

void AdpClient::DeleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteChannelRequest&;
    using Resp = DeleteChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DeleteChannelOutcomeCallable AdpClient::DeleteChannelCallable(const DeleteChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteChannelOutcome>>();
    DeleteChannelAsync(
    request,
    [prom](
        const AdpClient*,
        const DeleteChannelRequest&,
        DeleteChannelOutcome resp,
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

AdpClient::DeleteDocListOutcome AdpClient::DeleteDocList(const DeleteDocListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDocList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDocListResponse rsp = DeleteDocListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDocListOutcome(rsp);
        else
            return DeleteDocListOutcome(o.GetError());
    }
    else
    {
        return DeleteDocListOutcome(outcome.GetError());
    }
}

void AdpClient::DeleteDocListAsync(const DeleteDocListRequest& request, const DeleteDocListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDocListRequest&;
    using Resp = DeleteDocListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDocList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DeleteDocListOutcomeCallable AdpClient::DeleteDocListCallable(const DeleteDocListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDocListOutcome>>();
    DeleteDocListAsync(
    request,
    [prom](
        const AdpClient*,
        const DeleteDocListRequest&,
        DeleteDocListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DeleteKBOutcome AdpClient::DeleteKB(const DeleteKBRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteKB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteKBResponse rsp = DeleteKBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteKBOutcome(rsp);
        else
            return DeleteKBOutcome(o.GetError());
    }
    else
    {
        return DeleteKBOutcome(outcome.GetError());
    }
}

void AdpClient::DeleteKBAsync(const DeleteKBRequest& request, const DeleteKBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteKBRequest&;
    using Resp = DeleteKBResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteKB", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DeleteKBOutcomeCallable AdpClient::DeleteKBCallable(const DeleteKBRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteKBOutcome>>();
    DeleteKBAsync(
    request,
    [prom](
        const AdpClient*,
        const DeleteKBRequest&,
        DeleteKBOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DeleteLabelListOutcome AdpClient::DeleteLabelList(const DeleteLabelListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLabelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLabelListResponse rsp = DeleteLabelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLabelListOutcome(rsp);
        else
            return DeleteLabelListOutcome(o.GetError());
    }
    else
    {
        return DeleteLabelListOutcome(outcome.GetError());
    }
}

void AdpClient::DeleteLabelListAsync(const DeleteLabelListRequest& request, const DeleteLabelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLabelListRequest&;
    using Resp = DeleteLabelListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLabelList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DeleteLabelListOutcomeCallable AdpClient::DeleteLabelListCallable(const DeleteLabelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLabelListOutcome>>();
    DeleteLabelListAsync(
    request,
    [prom](
        const AdpClient*,
        const DeleteLabelListRequest&,
        DeleteLabelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DeleteMsgRecordCategoryOutcome AdpClient::DeleteMsgRecordCategory(const DeleteMsgRecordCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMsgRecordCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMsgRecordCategoryResponse rsp = DeleteMsgRecordCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMsgRecordCategoryOutcome(rsp);
        else
            return DeleteMsgRecordCategoryOutcome(o.GetError());
    }
    else
    {
        return DeleteMsgRecordCategoryOutcome(outcome.GetError());
    }
}

void AdpClient::DeleteMsgRecordCategoryAsync(const DeleteMsgRecordCategoryRequest& request, const DeleteMsgRecordCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMsgRecordCategoryRequest&;
    using Resp = DeleteMsgRecordCategoryResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMsgRecordCategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DeleteMsgRecordCategoryOutcomeCallable AdpClient::DeleteMsgRecordCategoryCallable(const DeleteMsgRecordCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMsgRecordCategoryOutcome>>();
    DeleteMsgRecordCategoryAsync(
    request,
    [prom](
        const AdpClient*,
        const DeleteMsgRecordCategoryRequest&,
        DeleteMsgRecordCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DeletePluginOutcome AdpClient::DeletePlugin(const DeletePluginRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePluginResponse rsp = DeletePluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePluginOutcome(rsp);
        else
            return DeletePluginOutcome(o.GetError());
    }
    else
    {
        return DeletePluginOutcome(outcome.GetError());
    }
}

void AdpClient::DeletePluginAsync(const DeletePluginRequest& request, const DeletePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePluginRequest&;
    using Resp = DeletePluginResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePlugin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DeletePluginOutcomeCallable AdpClient::DeletePluginCallable(const DeletePluginRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePluginOutcome>>();
    DeletePluginAsync(
    request,
    [prom](
        const AdpClient*,
        const DeletePluginRequest&,
        DeletePluginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DeleteQAListOutcome AdpClient::DeleteQAList(const DeleteQAListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQAList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQAListResponse rsp = DeleteQAListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQAListOutcome(rsp);
        else
            return DeleteQAListOutcome(o.GetError());
    }
    else
    {
        return DeleteQAListOutcome(outcome.GetError());
    }
}

void AdpClient::DeleteQAListAsync(const DeleteQAListRequest& request, const DeleteQAListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteQAListRequest&;
    using Resp = DeleteQAListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteQAList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DeleteQAListOutcomeCallable AdpClient::DeleteQAListCallable(const DeleteQAListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteQAListOutcome>>();
    DeleteQAListAsync(
    request,
    [prom](
        const AdpClient*,
        const DeleteQAListRequest&,
        DeleteQAListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DeleteSkillOutcome AdpClient::DeleteSkill(const DeleteSkillRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSkill");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSkillResponse rsp = DeleteSkillResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSkillOutcome(rsp);
        else
            return DeleteSkillOutcome(o.GetError());
    }
    else
    {
        return DeleteSkillOutcome(outcome.GetError());
    }
}

void AdpClient::DeleteSkillAsync(const DeleteSkillRequest& request, const DeleteSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSkillRequest&;
    using Resp = DeleteSkillResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSkill", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DeleteSkillOutcomeCallable AdpClient::DeleteSkillCallable(const DeleteSkillRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSkillOutcome>>();
    DeleteSkillAsync(
    request,
    [prom](
        const AdpClient*,
        const DeleteSkillRequest&,
        DeleteSkillOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DeleteSkillShareOutcome AdpClient::DeleteSkillShare(const DeleteSkillShareRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSkillShare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSkillShareResponse rsp = DeleteSkillShareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSkillShareOutcome(rsp);
        else
            return DeleteSkillShareOutcome(o.GetError());
    }
    else
    {
        return DeleteSkillShareOutcome(outcome.GetError());
    }
}

void AdpClient::DeleteSkillShareAsync(const DeleteSkillShareRequest& request, const DeleteSkillShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSkillShareRequest&;
    using Resp = DeleteSkillShareResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSkillShare", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DeleteSkillShareOutcomeCallable AdpClient::DeleteSkillShareCallable(const DeleteSkillShareRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSkillShareOutcome>>();
    DeleteSkillShareAsync(
    request,
    [prom](
        const AdpClient*,
        const DeleteSkillShareRequest&,
        DeleteSkillShareOutcome resp,
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

AdpClient::DescribeAccountListOutcome AdpClient::DescribeAccountList(const DescribeAccountListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountListResponse rsp = DescribeAccountListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountListOutcome(rsp);
        else
            return DescribeAccountListOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeAccountListAsync(const DescribeAccountListRequest& request, const DescribeAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountListRequest&;
    using Resp = DescribeAccountListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeAccountListOutcomeCallable AdpClient::DescribeAccountListCallable(const DescribeAccountListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountListOutcome>>();
    DescribeAccountListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeAccountListRequest&,
        DescribeAccountListOutcome resp,
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

AdpClient::DescribeAgentSummaryListOutcome AdpClient::DescribeAgentSummaryList(const DescribeAgentSummaryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentSummaryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentSummaryListResponse rsp = DescribeAgentSummaryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentSummaryListOutcome(rsp);
        else
            return DescribeAgentSummaryListOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentSummaryListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeAgentSummaryListAsync(const DescribeAgentSummaryListRequest& request, const DescribeAgentSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentSummaryListRequest&;
    using Resp = DescribeAgentSummaryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentSummaryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeAgentSummaryListOutcomeCallable AdpClient::DescribeAgentSummaryListCallable(const DescribeAgentSummaryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentSummaryListOutcome>>();
    DescribeAgentSummaryListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeAgentSummaryListRequest&,
        DescribeAgentSummaryListOutcome resp,
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

AdpClient::DescribeAppTriggerOutcome AdpClient::DescribeAppTrigger(const DescribeAppTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppTriggerResponse rsp = DescribeAppTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppTriggerOutcome(rsp);
        else
            return DescribeAppTriggerOutcome(o.GetError());
    }
    else
    {
        return DescribeAppTriggerOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeAppTriggerAsync(const DescribeAppTriggerRequest& request, const DescribeAppTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppTriggerRequest&;
    using Resp = DescribeAppTriggerResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppTrigger", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeAppTriggerOutcomeCallable AdpClient::DescribeAppTriggerCallable(const DescribeAppTriggerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppTriggerOutcome>>();
    DescribeAppTriggerAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeAppTriggerRequest&,
        DescribeAppTriggerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeAppTriggerInstanceOutcome AdpClient::DescribeAppTriggerInstance(const DescribeAppTriggerInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppTriggerInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppTriggerInstanceResponse rsp = DescribeAppTriggerInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppTriggerInstanceOutcome(rsp);
        else
            return DescribeAppTriggerInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeAppTriggerInstanceOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeAppTriggerInstanceAsync(const DescribeAppTriggerInstanceRequest& request, const DescribeAppTriggerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppTriggerInstanceRequest&;
    using Resp = DescribeAppTriggerInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppTriggerInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeAppTriggerInstanceOutcomeCallable AdpClient::DescribeAppTriggerInstanceCallable(const DescribeAppTriggerInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppTriggerInstanceOutcome>>();
    DescribeAppTriggerInstanceAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeAppTriggerInstanceRequest&,
        DescribeAppTriggerInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeAppTriggerRunLogListOutcome AdpClient::DescribeAppTriggerRunLogList(const DescribeAppTriggerRunLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppTriggerRunLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppTriggerRunLogListResponse rsp = DescribeAppTriggerRunLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppTriggerRunLogListOutcome(rsp);
        else
            return DescribeAppTriggerRunLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeAppTriggerRunLogListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeAppTriggerRunLogListAsync(const DescribeAppTriggerRunLogListRequest& request, const DescribeAppTriggerRunLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppTriggerRunLogListRequest&;
    using Resp = DescribeAppTriggerRunLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppTriggerRunLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeAppTriggerRunLogListOutcomeCallable AdpClient::DescribeAppTriggerRunLogListCallable(const DescribeAppTriggerRunLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppTriggerRunLogListOutcome>>();
    DescribeAppTriggerRunLogListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeAppTriggerRunLogListRequest&,
        DescribeAppTriggerRunLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeAppTriggerSummaryListOutcome AdpClient::DescribeAppTriggerSummaryList(const DescribeAppTriggerSummaryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppTriggerSummaryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppTriggerSummaryListResponse rsp = DescribeAppTriggerSummaryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppTriggerSummaryListOutcome(rsp);
        else
            return DescribeAppTriggerSummaryListOutcome(o.GetError());
    }
    else
    {
        return DescribeAppTriggerSummaryListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeAppTriggerSummaryListAsync(const DescribeAppTriggerSummaryListRequest& request, const DescribeAppTriggerSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppTriggerSummaryListRequest&;
    using Resp = DescribeAppTriggerSummaryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppTriggerSummaryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeAppTriggerSummaryListOutcomeCallable AdpClient::DescribeAppTriggerSummaryListCallable(const DescribeAppTriggerSummaryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppTriggerSummaryListOutcome>>();
    DescribeAppTriggerSummaryListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeAppTriggerSummaryListRequest&,
        DescribeAppTriggerSummaryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeAuditLogListOutcome AdpClient::DescribeAuditLogList(const DescribeAuditLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditLogListResponse rsp = DescribeAuditLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditLogListOutcome(rsp);
        else
            return DescribeAuditLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditLogListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeAuditLogListAsync(const DescribeAuditLogListRequest& request, const DescribeAuditLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditLogListRequest&;
    using Resp = DescribeAuditLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeAuditLogListOutcomeCallable AdpClient::DescribeAuditLogListCallable(const DescribeAuditLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditLogListOutcome>>();
    DescribeAuditLogListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeAuditLogListRequest&,
        DescribeAuditLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeAuditLogMetaOutcome AdpClient::DescribeAuditLogMeta(const DescribeAuditLogMetaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditLogMeta");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditLogMetaResponse rsp = DescribeAuditLogMetaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditLogMetaOutcome(rsp);
        else
            return DescribeAuditLogMetaOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditLogMetaOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeAuditLogMetaAsync(const DescribeAuditLogMetaRequest& request, const DescribeAuditLogMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditLogMetaRequest&;
    using Resp = DescribeAuditLogMetaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditLogMeta", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeAuditLogMetaOutcomeCallable AdpClient::DescribeAuditLogMetaCallable(const DescribeAuditLogMetaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditLogMetaOutcome>>();
    DescribeAuditLogMetaAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeAuditLogMetaRequest&,
        DescribeAuditLogMetaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeCategoryListOutcome AdpClient::DescribeCategoryList(const DescribeCategoryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCategoryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCategoryListResponse rsp = DescribeCategoryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCategoryListOutcome(rsp);
        else
            return DescribeCategoryListOutcome(o.GetError());
    }
    else
    {
        return DescribeCategoryListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeCategoryListAsync(const DescribeCategoryListRequest& request, const DescribeCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCategoryListRequest&;
    using Resp = DescribeCategoryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCategoryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeCategoryListOutcomeCallable AdpClient::DescribeCategoryListCallable(const DescribeCategoryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCategoryListOutcome>>();
    DescribeCategoryListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeCategoryListRequest&,
        DescribeCategoryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeChannelOutcome AdpClient::DescribeChannel(const DescribeChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChannelResponse rsp = DescribeChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChannelOutcome(rsp);
        else
            return DescribeChannelOutcome(o.GetError());
    }
    else
    {
        return DescribeChannelOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeChannelAsync(const DescribeChannelRequest& request, const DescribeChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChannelRequest&;
    using Resp = DescribeChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeChannelOutcomeCallable AdpClient::DescribeChannelCallable(const DescribeChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChannelOutcome>>();
    DescribeChannelAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeChannelRequest&,
        DescribeChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeChannelListOutcome AdpClient::DescribeChannelList(const DescribeChannelListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChannelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChannelListResponse rsp = DescribeChannelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChannelListOutcome(rsp);
        else
            return DescribeChannelListOutcome(o.GetError());
    }
    else
    {
        return DescribeChannelListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeChannelListAsync(const DescribeChannelListRequest& request, const DescribeChannelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChannelListRequest&;
    using Resp = DescribeChannelListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChannelList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeChannelListOutcomeCallable AdpClient::DescribeChannelListCallable(const DescribeChannelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChannelListOutcome>>();
    DescribeChannelListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeChannelListRequest&,
        DescribeChannelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeConcurrencyLimitDetailListOutcome AdpClient::DescribeConcurrencyLimitDetailList(const DescribeConcurrencyLimitDetailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConcurrencyLimitDetailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConcurrencyLimitDetailListResponse rsp = DescribeConcurrencyLimitDetailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConcurrencyLimitDetailListOutcome(rsp);
        else
            return DescribeConcurrencyLimitDetailListOutcome(o.GetError());
    }
    else
    {
        return DescribeConcurrencyLimitDetailListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeConcurrencyLimitDetailListAsync(const DescribeConcurrencyLimitDetailListRequest& request, const DescribeConcurrencyLimitDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConcurrencyLimitDetailListRequest&;
    using Resp = DescribeConcurrencyLimitDetailListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConcurrencyLimitDetailList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeConcurrencyLimitDetailListOutcomeCallable AdpClient::DescribeConcurrencyLimitDetailListCallable(const DescribeConcurrencyLimitDetailListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConcurrencyLimitDetailListOutcome>>();
    DescribeConcurrencyLimitDetailListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeConcurrencyLimitDetailListRequest&,
        DescribeConcurrencyLimitDetailListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeConflictQAOutcome AdpClient::DescribeConflictQA(const DescribeConflictQARequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConflictQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConflictQAResponse rsp = DescribeConflictQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConflictQAOutcome(rsp);
        else
            return DescribeConflictQAOutcome(o.GetError());
    }
    else
    {
        return DescribeConflictQAOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeConflictQAAsync(const DescribeConflictQARequest& request, const DescribeConflictQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConflictQARequest&;
    using Resp = DescribeConflictQAResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConflictQA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeConflictQAOutcomeCallable AdpClient::DescribeConflictQACallable(const DescribeConflictQARequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConflictQAOutcome>>();
    DescribeConflictQAAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeConflictQARequest&,
        DescribeConflictQAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeConflictQASummaryListOutcome AdpClient::DescribeConflictQASummaryList(const DescribeConflictQASummaryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConflictQASummaryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConflictQASummaryListResponse rsp = DescribeConflictQASummaryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConflictQASummaryListOutcome(rsp);
        else
            return DescribeConflictQASummaryListOutcome(o.GetError());
    }
    else
    {
        return DescribeConflictQASummaryListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeConflictQASummaryListAsync(const DescribeConflictQASummaryListRequest& request, const DescribeConflictQASummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConflictQASummaryListRequest&;
    using Resp = DescribeConflictQASummaryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConflictQASummaryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeConflictQASummaryListOutcomeCallable AdpClient::DescribeConflictQASummaryListCallable(const DescribeConflictQASummaryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConflictQASummaryListOutcome>>();
    DescribeConflictQASummaryListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeConflictQASummaryListRequest&,
        DescribeConflictQASummaryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeConsumptionDetailListOutcome AdpClient::DescribeConsumptionDetailList(const DescribeConsumptionDetailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumptionDetailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumptionDetailListResponse rsp = DescribeConsumptionDetailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumptionDetailListOutcome(rsp);
        else
            return DescribeConsumptionDetailListOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumptionDetailListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeConsumptionDetailListAsync(const DescribeConsumptionDetailListRequest& request, const DescribeConsumptionDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConsumptionDetailListRequest&;
    using Resp = DescribeConsumptionDetailListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConsumptionDetailList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeConsumptionDetailListOutcomeCallable AdpClient::DescribeConsumptionDetailListCallable(const DescribeConsumptionDetailListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConsumptionDetailListOutcome>>();
    DescribeConsumptionDetailListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeConsumptionDetailListRequest&,
        DescribeConsumptionDetailListOutcome resp,
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

AdpClient::DescribeDocOutcome AdpClient::DescribeDoc(const DescribeDocRequest &request)
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

void AdpClient::DescribeDocAsync(const DescribeDocRequest& request, const DescribeDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AdpClient::DescribeDocOutcomeCallable AdpClient::DescribeDocCallable(const DescribeDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDocOutcome>>();
    DescribeDocAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeDocRequest&,
        DescribeDocOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeDocSummaryListOutcome AdpClient::DescribeDocSummaryList(const DescribeDocSummaryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDocSummaryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDocSummaryListResponse rsp = DescribeDocSummaryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDocSummaryListOutcome(rsp);
        else
            return DescribeDocSummaryListOutcome(o.GetError());
    }
    else
    {
        return DescribeDocSummaryListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeDocSummaryListAsync(const DescribeDocSummaryListRequest& request, const DescribeDocSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDocSummaryListRequest&;
    using Resp = DescribeDocSummaryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDocSummaryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeDocSummaryListOutcomeCallable AdpClient::DescribeDocSummaryListCallable(const DescribeDocSummaryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDocSummaryListOutcome>>();
    DescribeDocSummaryListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeDocSummaryListRequest&,
        DescribeDocSummaryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeKBOutcome AdpClient::DescribeKB(const DescribeKBRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKBResponse rsp = DescribeKBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKBOutcome(rsp);
        else
            return DescribeKBOutcome(o.GetError());
    }
    else
    {
        return DescribeKBOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeKBAsync(const DescribeKBRequest& request, const DescribeKBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKBRequest&;
    using Resp = DescribeKBResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKB", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeKBOutcomeCallable AdpClient::DescribeKBCallable(const DescribeKBRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKBOutcome>>();
    DescribeKBAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeKBRequest&,
        DescribeKBOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeKBSummaryListOutcome AdpClient::DescribeKBSummaryList(const DescribeKBSummaryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKBSummaryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKBSummaryListResponse rsp = DescribeKBSummaryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKBSummaryListOutcome(rsp);
        else
            return DescribeKBSummaryListOutcome(o.GetError());
    }
    else
    {
        return DescribeKBSummaryListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeKBSummaryListAsync(const DescribeKBSummaryListRequest& request, const DescribeKBSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKBSummaryListRequest&;
    using Resp = DescribeKBSummaryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKBSummaryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeKBSummaryListOutcomeCallable AdpClient::DescribeKBSummaryListCallable(const DescribeKBSummaryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKBSummaryListOutcome>>();
    DescribeKBSummaryListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeKBSummaryListRequest&,
        DescribeKBSummaryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeLabelOutcome AdpClient::DescribeLabel(const DescribeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLabelResponse rsp = DescribeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLabelOutcome(rsp);
        else
            return DescribeLabelOutcome(o.GetError());
    }
    else
    {
        return DescribeLabelOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeLabelAsync(const DescribeLabelRequest& request, const DescribeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLabelRequest&;
    using Resp = DescribeLabelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeLabelOutcomeCallable AdpClient::DescribeLabelCallable(const DescribeLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLabelOutcome>>();
    DescribeLabelAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeLabelRequest&,
        DescribeLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeLabelSummaryListOutcome AdpClient::DescribeLabelSummaryList(const DescribeLabelSummaryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLabelSummaryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLabelSummaryListResponse rsp = DescribeLabelSummaryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLabelSummaryListOutcome(rsp);
        else
            return DescribeLabelSummaryListOutcome(o.GetError());
    }
    else
    {
        return DescribeLabelSummaryListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeLabelSummaryListAsync(const DescribeLabelSummaryListRequest& request, const DescribeLabelSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLabelSummaryListRequest&;
    using Resp = DescribeLabelSummaryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLabelSummaryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeLabelSummaryListOutcomeCallable AdpClient::DescribeLabelSummaryListCallable(const DescribeLabelSummaryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLabelSummaryListOutcome>>();
    DescribeLabelSummaryListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeLabelSummaryListRequest&,
        DescribeLabelSummaryListOutcome resp,
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

AdpClient::DescribeMetricOverviewListOutcome AdpClient::DescribeMetricOverviewList(const DescribeMetricOverviewListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMetricOverviewList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMetricOverviewListResponse rsp = DescribeMetricOverviewListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMetricOverviewListOutcome(rsp);
        else
            return DescribeMetricOverviewListOutcome(o.GetError());
    }
    else
    {
        return DescribeMetricOverviewListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeMetricOverviewListAsync(const DescribeMetricOverviewListRequest& request, const DescribeMetricOverviewListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMetricOverviewListRequest&;
    using Resp = DescribeMetricOverviewListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMetricOverviewList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeMetricOverviewListOutcomeCallable AdpClient::DescribeMetricOverviewListCallable(const DescribeMetricOverviewListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMetricOverviewListOutcome>>();
    DescribeMetricOverviewListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeMetricOverviewListRequest&,
        DescribeMetricOverviewListOutcome resp,
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

AdpClient::DescribeMsgRecordCategoryListOutcome AdpClient::DescribeMsgRecordCategoryList(const DescribeMsgRecordCategoryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMsgRecordCategoryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMsgRecordCategoryListResponse rsp = DescribeMsgRecordCategoryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMsgRecordCategoryListOutcome(rsp);
        else
            return DescribeMsgRecordCategoryListOutcome(o.GetError());
    }
    else
    {
        return DescribeMsgRecordCategoryListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeMsgRecordCategoryListAsync(const DescribeMsgRecordCategoryListRequest& request, const DescribeMsgRecordCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMsgRecordCategoryListRequest&;
    using Resp = DescribeMsgRecordCategoryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMsgRecordCategoryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeMsgRecordCategoryListOutcomeCallable AdpClient::DescribeMsgRecordCategoryListCallable(const DescribeMsgRecordCategoryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMsgRecordCategoryListOutcome>>();
    DescribeMsgRecordCategoryListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeMsgRecordCategoryListRequest&,
        DescribeMsgRecordCategoryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeMsgRecordListOutcome AdpClient::DescribeMsgRecordList(const DescribeMsgRecordListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMsgRecordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMsgRecordListResponse rsp = DescribeMsgRecordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMsgRecordListOutcome(rsp);
        else
            return DescribeMsgRecordListOutcome(o.GetError());
    }
    else
    {
        return DescribeMsgRecordListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeMsgRecordListAsync(const DescribeMsgRecordListRequest& request, const DescribeMsgRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMsgRecordListRequest&;
    using Resp = DescribeMsgRecordListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMsgRecordList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeMsgRecordListOutcomeCallable AdpClient::DescribeMsgRecordListCallable(const DescribeMsgRecordListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMsgRecordListOutcome>>();
    DescribeMsgRecordListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeMsgRecordListRequest&,
        DescribeMsgRecordListOutcome resp,
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

AdpClient::DescribeQAOutcome AdpClient::DescribeQA(const DescribeQARequest &request)
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

void AdpClient::DescribeQAAsync(const DescribeQARequest& request, const DescribeQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AdpClient::DescribeQAOutcomeCallable AdpClient::DescribeQACallable(const DescribeQARequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQAOutcome>>();
    DescribeQAAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeQARequest&,
        DescribeQAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeQASummaryListOutcome AdpClient::DescribeQASummaryList(const DescribeQASummaryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQASummaryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQASummaryListResponse rsp = DescribeQASummaryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQASummaryListOutcome(rsp);
        else
            return DescribeQASummaryListOutcome(o.GetError());
    }
    else
    {
        return DescribeQASummaryListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeQASummaryListAsync(const DescribeQASummaryListRequest& request, const DescribeQASummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQASummaryListRequest&;
    using Resp = DescribeQASummaryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQASummaryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeQASummaryListOutcomeCallable AdpClient::DescribeQASummaryListCallable(const DescribeQASummaryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQASummaryListOutcome>>();
    DescribeQASummaryListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeQASummaryListRequest&,
        DescribeQASummaryListOutcome resp,
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

AdpClient::DescribeResourceSummaryOutcome AdpClient::DescribeResourceSummary(const DescribeResourceSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceSummaryResponse rsp = DescribeResourceSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceSummaryOutcome(rsp);
        else
            return DescribeResourceSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceSummaryOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeResourceSummaryAsync(const DescribeResourceSummaryRequest& request, const DescribeResourceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceSummaryRequest&;
    using Resp = DescribeResourceSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeResourceSummaryOutcomeCallable AdpClient::DescribeResourceSummaryCallable(const DescribeResourceSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceSummaryOutcome>>();
    DescribeResourceSummaryAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeResourceSummaryRequest&,
        DescribeResourceSummaryOutcome resp,
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

AdpClient::DescribeSkillDetailOutcome AdpClient::DescribeSkillDetail(const DescribeSkillDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSkillDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSkillDetailResponse rsp = DescribeSkillDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSkillDetailOutcome(rsp);
        else
            return DescribeSkillDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeSkillDetailOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeSkillDetailAsync(const DescribeSkillDetailRequest& request, const DescribeSkillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSkillDetailRequest&;
    using Resp = DescribeSkillDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSkillDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeSkillDetailOutcomeCallable AdpClient::DescribeSkillDetailCallable(const DescribeSkillDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSkillDetailOutcome>>();
    DescribeSkillDetailAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeSkillDetailRequest&,
        DescribeSkillDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeSkillReferenceListOutcome AdpClient::DescribeSkillReferenceList(const DescribeSkillReferenceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSkillReferenceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSkillReferenceListResponse rsp = DescribeSkillReferenceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSkillReferenceListOutcome(rsp);
        else
            return DescribeSkillReferenceListOutcome(o.GetError());
    }
    else
    {
        return DescribeSkillReferenceListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeSkillReferenceListAsync(const DescribeSkillReferenceListRequest& request, const DescribeSkillReferenceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSkillReferenceListRequest&;
    using Resp = DescribeSkillReferenceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSkillReferenceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeSkillReferenceListOutcomeCallable AdpClient::DescribeSkillReferenceListCallable(const DescribeSkillReferenceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSkillReferenceListOutcome>>();
    DescribeSkillReferenceListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeSkillReferenceListRequest&,
        DescribeSkillReferenceListOutcome resp,
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

AdpClient::DescribeUsageDetailListOutcome AdpClient::DescribeUsageDetailList(const DescribeUsageDetailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsageDetailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsageDetailListResponse rsp = DescribeUsageDetailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsageDetailListOutcome(rsp);
        else
            return DescribeUsageDetailListOutcome(o.GetError());
    }
    else
    {
        return DescribeUsageDetailListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeUsageDetailListAsync(const DescribeUsageDetailListRequest& request, const DescribeUsageDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsageDetailListRequest&;
    using Resp = DescribeUsageDetailListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsageDetailList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeUsageDetailListOutcomeCallable AdpClient::DescribeUsageDetailListCallable(const DescribeUsageDetailListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsageDetailListOutcome>>();
    DescribeUsageDetailListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeUsageDetailListRequest&,
        DescribeUsageDetailListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::DescribeUsageSummaryListOutcome AdpClient::DescribeUsageSummaryList(const DescribeUsageSummaryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsageSummaryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsageSummaryListResponse rsp = DescribeUsageSummaryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsageSummaryListOutcome(rsp);
        else
            return DescribeUsageSummaryListOutcome(o.GetError());
    }
    else
    {
        return DescribeUsageSummaryListOutcome(outcome.GetError());
    }
}

void AdpClient::DescribeUsageSummaryListAsync(const DescribeUsageSummaryListRequest& request, const DescribeUsageSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsageSummaryListRequest&;
    using Resp = DescribeUsageSummaryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsageSummaryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::DescribeUsageSummaryListOutcomeCallable AdpClient::DescribeUsageSummaryListCallable(const DescribeUsageSummaryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsageSummaryListOutcome>>();
    DescribeUsageSummaryListAsync(
    request,
    [prom](
        const AdpClient*,
        const DescribeUsageSummaryListRequest&,
        DescribeUsageSummaryListOutcome resp,
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

AdpClient::ExportQAOutcome AdpClient::ExportQA(const ExportQARequest &request)
{
    auto outcome = MakeRequest(request, "ExportQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportQAResponse rsp = ExportQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportQAOutcome(rsp);
        else
            return ExportQAOutcome(o.GetError());
    }
    else
    {
        return ExportQAOutcome(outcome.GetError());
    }
}

void AdpClient::ExportQAAsync(const ExportQARequest& request, const ExportQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportQARequest&;
    using Resp = ExportQAResponse;

    DoRequestAsync<Req, Resp>(
        "ExportQA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ExportQAOutcomeCallable AdpClient::ExportQACallable(const ExportQARequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportQAOutcome>>();
    ExportQAAsync(
    request,
    [prom](
        const AdpClient*,
        const ExportQARequest&,
        ExportQAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::FavoritePluginOutcome AdpClient::FavoritePlugin(const FavoritePluginRequest &request)
{
    auto outcome = MakeRequest(request, "FavoritePlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FavoritePluginResponse rsp = FavoritePluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FavoritePluginOutcome(rsp);
        else
            return FavoritePluginOutcome(o.GetError());
    }
    else
    {
        return FavoritePluginOutcome(outcome.GetError());
    }
}

void AdpClient::FavoritePluginAsync(const FavoritePluginRequest& request, const FavoritePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FavoritePluginRequest&;
    using Resp = FavoritePluginResponse;

    DoRequestAsync<Req, Resp>(
        "FavoritePlugin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::FavoritePluginOutcomeCallable AdpClient::FavoritePluginCallable(const FavoritePluginRequest &request)
{
    const auto prom = std::make_shared<std::promise<FavoritePluginOutcome>>();
    FavoritePluginAsync(
    request,
    [prom](
        const AdpClient*,
        const FavoritePluginRequest&,
        FavoritePluginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::FavoriteSkillOutcome AdpClient::FavoriteSkill(const FavoriteSkillRequest &request)
{
    auto outcome = MakeRequest(request, "FavoriteSkill");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FavoriteSkillResponse rsp = FavoriteSkillResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FavoriteSkillOutcome(rsp);
        else
            return FavoriteSkillOutcome(o.GetError());
    }
    else
    {
        return FavoriteSkillOutcome(outcome.GetError());
    }
}

void AdpClient::FavoriteSkillAsync(const FavoriteSkillRequest& request, const FavoriteSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FavoriteSkillRequest&;
    using Resp = FavoriteSkillResponse;

    DoRequestAsync<Req, Resp>(
        "FavoriteSkill", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::FavoriteSkillOutcomeCallable AdpClient::FavoriteSkillCallable(const FavoriteSkillRequest &request)
{
    const auto prom = std::make_shared<std::promise<FavoriteSkillOutcome>>();
    FavoriteSkillAsync(
    request,
    [prom](
        const AdpClient*,
        const FavoriteSkillRequest&,
        FavoriteSkillOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ImportDocListOutcome AdpClient::ImportDocList(const ImportDocListRequest &request)
{
    auto outcome = MakeRequest(request, "ImportDocList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportDocListResponse rsp = ImportDocListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportDocListOutcome(rsp);
        else
            return ImportDocListOutcome(o.GetError());
    }
    else
    {
        return ImportDocListOutcome(outcome.GetError());
    }
}

void AdpClient::ImportDocListAsync(const ImportDocListRequest& request, const ImportDocListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportDocListRequest&;
    using Resp = ImportDocListResponse;

    DoRequestAsync<Req, Resp>(
        "ImportDocList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ImportDocListOutcomeCallable AdpClient::ImportDocListCallable(const ImportDocListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportDocListOutcome>>();
    ImportDocListAsync(
    request,
    [prom](
        const AdpClient*,
        const ImportDocListRequest&,
        ImportDocListOutcome resp,
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

AdpClient::ModifyAppTriggerOutcome AdpClient::ModifyAppTrigger(const ModifyAppTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAppTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAppTriggerResponse rsp = ModifyAppTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAppTriggerOutcome(rsp);
        else
            return ModifyAppTriggerOutcome(o.GetError());
    }
    else
    {
        return ModifyAppTriggerOutcome(outcome.GetError());
    }
}

void AdpClient::ModifyAppTriggerAsync(const ModifyAppTriggerRequest& request, const ModifyAppTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAppTriggerRequest&;
    using Resp = ModifyAppTriggerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAppTrigger", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ModifyAppTriggerOutcomeCallable AdpClient::ModifyAppTriggerCallable(const ModifyAppTriggerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAppTriggerOutcome>>();
    ModifyAppTriggerAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyAppTriggerRequest&,
        ModifyAppTriggerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifyCategoryOutcome AdpClient::ModifyCategory(const ModifyCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCategoryResponse rsp = ModifyCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCategoryOutcome(rsp);
        else
            return ModifyCategoryOutcome(o.GetError());
    }
    else
    {
        return ModifyCategoryOutcome(outcome.GetError());
    }
}

void AdpClient::ModifyCategoryAsync(const ModifyCategoryRequest& request, const ModifyCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCategoryRequest&;
    using Resp = ModifyCategoryResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ModifyCategoryOutcomeCallable AdpClient::ModifyCategoryCallable(const ModifyCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCategoryOutcome>>();
    ModifyCategoryAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyCategoryRequest&,
        ModifyCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifyChannelOutcome AdpClient::ModifyChannel(const ModifyChannelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyChannelResponse rsp = ModifyChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyChannelOutcome(rsp);
        else
            return ModifyChannelOutcome(o.GetError());
    }
    else
    {
        return ModifyChannelOutcome(outcome.GetError());
    }
}

void AdpClient::ModifyChannelAsync(const ModifyChannelRequest& request, const ModifyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyChannelRequest&;
    using Resp = ModifyChannelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ModifyChannelOutcomeCallable AdpClient::ModifyChannelCallable(const ModifyChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyChannelOutcome>>();
    ModifyChannelAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyChannelRequest&,
        ModifyChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifyConflictQAOutcome AdpClient::ModifyConflictQA(const ModifyConflictQARequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConflictQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConflictQAResponse rsp = ModifyConflictQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConflictQAOutcome(rsp);
        else
            return ModifyConflictQAOutcome(o.GetError());
    }
    else
    {
        return ModifyConflictQAOutcome(outcome.GetError());
    }
}

void AdpClient::ModifyConflictQAAsync(const ModifyConflictQARequest& request, const ModifyConflictQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConflictQARequest&;
    using Resp = ModifyConflictQAResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConflictQA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ModifyConflictQAOutcomeCallable AdpClient::ModifyConflictQACallable(const ModifyConflictQARequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConflictQAOutcome>>();
    ModifyConflictQAAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyConflictQARequest&,
        ModifyConflictQAOutcome resp,
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

AdpClient::ModifyDocOutcome AdpClient::ModifyDoc(const ModifyDocRequest &request)
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

void AdpClient::ModifyDocAsync(const ModifyDocRequest& request, const ModifyDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AdpClient::ModifyDocOutcomeCallable AdpClient::ModifyDocCallable(const ModifyDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDocOutcome>>();
    ModifyDocAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyDocRequest&,
        ModifyDocOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifyDocListOutcome AdpClient::ModifyDocList(const ModifyDocListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDocList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDocListResponse rsp = ModifyDocListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDocListOutcome(rsp);
        else
            return ModifyDocListOutcome(o.GetError());
    }
    else
    {
        return ModifyDocListOutcome(outcome.GetError());
    }
}

void AdpClient::ModifyDocListAsync(const ModifyDocListRequest& request, const ModifyDocListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDocListRequest&;
    using Resp = ModifyDocListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDocList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ModifyDocListOutcomeCallable AdpClient::ModifyDocListCallable(const ModifyDocListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDocListOutcome>>();
    ModifyDocListAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyDocListRequest&,
        ModifyDocListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifyKBOutcome AdpClient::ModifyKB(const ModifyKBRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyKB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyKBResponse rsp = ModifyKBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyKBOutcome(rsp);
        else
            return ModifyKBOutcome(o.GetError());
    }
    else
    {
        return ModifyKBOutcome(outcome.GetError());
    }
}

void AdpClient::ModifyKBAsync(const ModifyKBRequest& request, const ModifyKBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyKBRequest&;
    using Resp = ModifyKBResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyKB", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ModifyKBOutcomeCallable AdpClient::ModifyKBCallable(const ModifyKBRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyKBOutcome>>();
    ModifyKBAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyKBRequest&,
        ModifyKBOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifyLabelOutcome AdpClient::ModifyLabel(const ModifyLabelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLabelResponse rsp = ModifyLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLabelOutcome(rsp);
        else
            return ModifyLabelOutcome(o.GetError());
    }
    else
    {
        return ModifyLabelOutcome(outcome.GetError());
    }
}

void AdpClient::ModifyLabelAsync(const ModifyLabelRequest& request, const ModifyLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLabelRequest&;
    using Resp = ModifyLabelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ModifyLabelOutcomeCallable AdpClient::ModifyLabelCallable(const ModifyLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLabelOutcome>>();
    ModifyLabelAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyLabelRequest&,
        ModifyLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifyMsgRecordCategoryOutcome AdpClient::ModifyMsgRecordCategory(const ModifyMsgRecordCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMsgRecordCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMsgRecordCategoryResponse rsp = ModifyMsgRecordCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMsgRecordCategoryOutcome(rsp);
        else
            return ModifyMsgRecordCategoryOutcome(o.GetError());
    }
    else
    {
        return ModifyMsgRecordCategoryOutcome(outcome.GetError());
    }
}

void AdpClient::ModifyMsgRecordCategoryAsync(const ModifyMsgRecordCategoryRequest& request, const ModifyMsgRecordCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMsgRecordCategoryRequest&;
    using Resp = ModifyMsgRecordCategoryResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMsgRecordCategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ModifyMsgRecordCategoryOutcomeCallable AdpClient::ModifyMsgRecordCategoryCallable(const ModifyMsgRecordCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMsgRecordCategoryOutcome>>();
    ModifyMsgRecordCategoryAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyMsgRecordCategoryRequest&,
        ModifyMsgRecordCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifyPluginOutcome AdpClient::ModifyPlugin(const ModifyPluginRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPluginResponse rsp = ModifyPluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPluginOutcome(rsp);
        else
            return ModifyPluginOutcome(o.GetError());
    }
    else
    {
        return ModifyPluginOutcome(outcome.GetError());
    }
}

void AdpClient::ModifyPluginAsync(const ModifyPluginRequest& request, const ModifyPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPluginRequest&;
    using Resp = ModifyPluginResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPlugin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ModifyPluginOutcomeCallable AdpClient::ModifyPluginCallable(const ModifyPluginRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPluginOutcome>>();
    ModifyPluginAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyPluginRequest&,
        ModifyPluginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifyQAOutcome AdpClient::ModifyQA(const ModifyQARequest &request)
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

void AdpClient::ModifyQAAsync(const ModifyQARequest& request, const ModifyQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AdpClient::ModifyQAOutcomeCallable AdpClient::ModifyQACallable(const ModifyQARequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyQAOutcome>>();
    ModifyQAAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyQARequest&,
        ModifyQAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifyQAListOutcome AdpClient::ModifyQAList(const ModifyQAListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQAList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQAListResponse rsp = ModifyQAListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQAListOutcome(rsp);
        else
            return ModifyQAListOutcome(o.GetError());
    }
    else
    {
        return ModifyQAListOutcome(outcome.GetError());
    }
}

void AdpClient::ModifyQAListAsync(const ModifyQAListRequest& request, const ModifyQAListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyQAListRequest&;
    using Resp = ModifyQAListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyQAList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ModifyQAListOutcomeCallable AdpClient::ModifyQAListCallable(const ModifyQAListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyQAListOutcome>>();
    ModifyQAListAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifyQAListRequest&,
        ModifyQAListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ModifySkillOutcome AdpClient::ModifySkill(const ModifySkillRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySkill");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySkillResponse rsp = ModifySkillResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySkillOutcome(rsp);
        else
            return ModifySkillOutcome(o.GetError());
    }
    else
    {
        return ModifySkillOutcome(outcome.GetError());
    }
}

void AdpClient::ModifySkillAsync(const ModifySkillRequest& request, const ModifySkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySkillRequest&;
    using Resp = ModifySkillResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySkill", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ModifySkillOutcomeCallable AdpClient::ModifySkillCallable(const ModifySkillRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySkillOutcome>>();
    ModifySkillAsync(
    request,
    [prom](
        const AdpClient*,
        const ModifySkillRequest&,
        ModifySkillOutcome resp,
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

AdpClient::PauseAppTriggerOutcome AdpClient::PauseAppTrigger(const PauseAppTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "PauseAppTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseAppTriggerResponse rsp = PauseAppTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseAppTriggerOutcome(rsp);
        else
            return PauseAppTriggerOutcome(o.GetError());
    }
    else
    {
        return PauseAppTriggerOutcome(outcome.GetError());
    }
}

void AdpClient::PauseAppTriggerAsync(const PauseAppTriggerRequest& request, const PauseAppTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PauseAppTriggerRequest&;
    using Resp = PauseAppTriggerResponse;

    DoRequestAsync<Req, Resp>(
        "PauseAppTrigger", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::PauseAppTriggerOutcomeCallable AdpClient::PauseAppTriggerCallable(const PauseAppTriggerRequest &request)
{
    const auto prom = std::make_shared<std::promise<PauseAppTriggerOutcome>>();
    PauseAppTriggerAsync(
    request,
    [prom](
        const AdpClient*,
        const PauseAppTriggerRequest&,
        PauseAppTriggerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::ReleaseSkillOutcome AdpClient::ReleaseSkill(const ReleaseSkillRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseSkill");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseSkillResponse rsp = ReleaseSkillResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseSkillOutcome(rsp);
        else
            return ReleaseSkillOutcome(o.GetError());
    }
    else
    {
        return ReleaseSkillOutcome(outcome.GetError());
    }
}

void AdpClient::ReleaseSkillAsync(const ReleaseSkillRequest& request, const ReleaseSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseSkillRequest&;
    using Resp = ReleaseSkillResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseSkill", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ReleaseSkillOutcomeCallable AdpClient::ReleaseSkillCallable(const ReleaseSkillRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseSkillOutcome>>();
    ReleaseSkillAsync(
    request,
    [prom](
        const AdpClient*,
        const ReleaseSkillRequest&,
        ReleaseSkillOutcome resp,
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

AdpClient::ResumeAppTriggerOutcome AdpClient::ResumeAppTrigger(const ResumeAppTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeAppTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeAppTriggerResponse rsp = ResumeAppTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeAppTriggerOutcome(rsp);
        else
            return ResumeAppTriggerOutcome(o.GetError());
    }
    else
    {
        return ResumeAppTriggerOutcome(outcome.GetError());
    }
}

void AdpClient::ResumeAppTriggerAsync(const ResumeAppTriggerRequest& request, const ResumeAppTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeAppTriggerRequest&;
    using Resp = ResumeAppTriggerResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeAppTrigger", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::ResumeAppTriggerOutcomeCallable AdpClient::ResumeAppTriggerCallable(const ResumeAppTriggerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeAppTriggerOutcome>>();
    ResumeAppTriggerAsync(
    request,
    [prom](
        const AdpClient*,
        const ResumeAppTriggerRequest&,
        ResumeAppTriggerOutcome resp,
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

AdpClient::RunAppTriggerNowOutcome AdpClient::RunAppTriggerNow(const RunAppTriggerNowRequest &request)
{
    auto outcome = MakeRequest(request, "RunAppTriggerNow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunAppTriggerNowResponse rsp = RunAppTriggerNowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunAppTriggerNowOutcome(rsp);
        else
            return RunAppTriggerNowOutcome(o.GetError());
    }
    else
    {
        return RunAppTriggerNowOutcome(outcome.GetError());
    }
}

void AdpClient::RunAppTriggerNowAsync(const RunAppTriggerNowRequest& request, const RunAppTriggerNowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunAppTriggerNowRequest&;
    using Resp = RunAppTriggerNowResponse;

    DoRequestAsync<Req, Resp>(
        "RunAppTriggerNow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::RunAppTriggerNowOutcomeCallable AdpClient::RunAppTriggerNowCallable(const RunAppTriggerNowRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunAppTriggerNowOutcome>>();
    RunAppTriggerNowAsync(
    request,
    [prom](
        const AdpClient*,
        const RunAppTriggerNowRequest&,
        RunAppTriggerNowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::SearchKnowledgeOutcome AdpClient::SearchKnowledge(const SearchKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "SearchKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchKnowledgeResponse rsp = SearchKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchKnowledgeOutcome(rsp);
        else
            return SearchKnowledgeOutcome(o.GetError());
    }
    else
    {
        return SearchKnowledgeOutcome(outcome.GetError());
    }
}

void AdpClient::SearchKnowledgeAsync(const SearchKnowledgeRequest& request, const SearchKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchKnowledgeRequest&;
    using Resp = SearchKnowledgeResponse;

    DoRequestAsync<Req, Resp>(
        "SearchKnowledge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::SearchKnowledgeOutcomeCallable AdpClient::SearchKnowledgeCallable(const SearchKnowledgeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchKnowledgeOutcome>>();
    SearchKnowledgeAsync(
    request,
    [prom](
        const AdpClient*,
        const SearchKnowledgeRequest&,
        SearchKnowledgeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::UnfavoritePluginOutcome AdpClient::UnfavoritePlugin(const UnfavoritePluginRequest &request)
{
    auto outcome = MakeRequest(request, "UnfavoritePlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnfavoritePluginResponse rsp = UnfavoritePluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnfavoritePluginOutcome(rsp);
        else
            return UnfavoritePluginOutcome(o.GetError());
    }
    else
    {
        return UnfavoritePluginOutcome(outcome.GetError());
    }
}

void AdpClient::UnfavoritePluginAsync(const UnfavoritePluginRequest& request, const UnfavoritePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnfavoritePluginRequest&;
    using Resp = UnfavoritePluginResponse;

    DoRequestAsync<Req, Resp>(
        "UnfavoritePlugin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::UnfavoritePluginOutcomeCallable AdpClient::UnfavoritePluginCallable(const UnfavoritePluginRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnfavoritePluginOutcome>>();
    UnfavoritePluginAsync(
    request,
    [prom](
        const AdpClient*,
        const UnfavoritePluginRequest&,
        UnfavoritePluginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdpClient::UnfavoriteSkillOutcome AdpClient::UnfavoriteSkill(const UnfavoriteSkillRequest &request)
{
    auto outcome = MakeRequest(request, "UnfavoriteSkill");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnfavoriteSkillResponse rsp = UnfavoriteSkillResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnfavoriteSkillOutcome(rsp);
        else
            return UnfavoriteSkillOutcome(o.GetError());
    }
    else
    {
        return UnfavoriteSkillOutcome(outcome.GetError());
    }
}

void AdpClient::UnfavoriteSkillAsync(const UnfavoriteSkillRequest& request, const UnfavoriteSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnfavoriteSkillRequest&;
    using Resp = UnfavoriteSkillResponse;

    DoRequestAsync<Req, Resp>(
        "UnfavoriteSkill", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::UnfavoriteSkillOutcomeCallable AdpClient::UnfavoriteSkillCallable(const UnfavoriteSkillRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnfavoriteSkillOutcome>>();
    UnfavoriteSkillAsync(
    request,
    [prom](
        const AdpClient*,
        const UnfavoriteSkillRequest&,
        UnfavoriteSkillOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

