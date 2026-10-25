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

#include <tencentcloud/rum/v20210622/RumClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Rum::V20210622;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-06-22";
    const string ENDPOINT = "rum.tencentcloudapi.com";
}

RumClient::RumClient(const Credential &credential, const string &region) :
    RumClient(credential, region, ClientProfile())
{
}

RumClient::RumClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


RumClient::CreateFieldTransformRuleOutcome RumClient::CreateFieldTransformRule(const CreateFieldTransformRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFieldTransformRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFieldTransformRuleResponse rsp = CreateFieldTransformRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFieldTransformRuleOutcome(rsp);
        else
            return CreateFieldTransformRuleOutcome(o.GetError());
    }
    else
    {
        return CreateFieldTransformRuleOutcome(outcome.GetError());
    }
}

void RumClient::CreateFieldTransformRuleAsync(const CreateFieldTransformRuleRequest& request, const CreateFieldTransformRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFieldTransformRuleRequest&;
    using Resp = CreateFieldTransformRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFieldTransformRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::CreateFieldTransformRuleOutcomeCallable RumClient::CreateFieldTransformRuleCallable(const CreateFieldTransformRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFieldTransformRuleOutcome>>();
    CreateFieldTransformRuleAsync(
    request,
    [prom](
        const RumClient*,
        const CreateFieldTransformRuleRequest&,
        CreateFieldTransformRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::CreateReleaseFileOutcome RumClient::CreateReleaseFile(const CreateReleaseFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReleaseFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReleaseFileResponse rsp = CreateReleaseFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReleaseFileOutcome(rsp);
        else
            return CreateReleaseFileOutcome(o.GetError());
    }
    else
    {
        return CreateReleaseFileOutcome(outcome.GetError());
    }
}

void RumClient::CreateReleaseFileAsync(const CreateReleaseFileRequest& request, const CreateReleaseFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateReleaseFileRequest&;
    using Resp = CreateReleaseFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReleaseFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::CreateReleaseFileOutcomeCallable RumClient::CreateReleaseFileCallable(const CreateReleaseFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReleaseFileOutcome>>();
    CreateReleaseFileAsync(
    request,
    [prom](
        const RumClient*,
        const CreateReleaseFileRequest&,
        CreateReleaseFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::CreateStarProjectOutcome RumClient::CreateStarProject(const CreateStarProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStarProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStarProjectResponse rsp = CreateStarProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStarProjectOutcome(rsp);
        else
            return CreateStarProjectOutcome(o.GetError());
    }
    else
    {
        return CreateStarProjectOutcome(outcome.GetError());
    }
}

void RumClient::CreateStarProjectAsync(const CreateStarProjectRequest& request, const CreateStarProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStarProjectRequest&;
    using Resp = CreateStarProjectResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStarProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::CreateStarProjectOutcomeCallable RumClient::CreateStarProjectCallable(const CreateStarProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStarProjectOutcome>>();
    CreateStarProjectAsync(
    request,
    [prom](
        const RumClient*,
        const CreateStarProjectRequest&,
        CreateStarProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::CreateTDEMApplicationOutcome RumClient::CreateTDEMApplication(const CreateTDEMApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDEMApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDEMApplicationResponse rsp = CreateTDEMApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDEMApplicationOutcome(rsp);
        else
            return CreateTDEMApplicationOutcome(o.GetError());
    }
    else
    {
        return CreateTDEMApplicationOutcome(outcome.GetError());
    }
}

void RumClient::CreateTDEMApplicationAsync(const CreateTDEMApplicationRequest& request, const CreateTDEMApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTDEMApplicationRequest&;
    using Resp = CreateTDEMApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTDEMApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::CreateTDEMApplicationOutcomeCallable RumClient::CreateTDEMApplicationCallable(const CreateTDEMApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTDEMApplicationOutcome>>();
    CreateTDEMApplicationAsync(
    request,
    [prom](
        const RumClient*,
        const CreateTDEMApplicationRequest&,
        CreateTDEMApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::CreateTDEMBusinessSystemOutcome RumClient::CreateTDEMBusinessSystem(const CreateTDEMBusinessSystemRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDEMBusinessSystem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDEMBusinessSystemResponse rsp = CreateTDEMBusinessSystemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDEMBusinessSystemOutcome(rsp);
        else
            return CreateTDEMBusinessSystemOutcome(o.GetError());
    }
    else
    {
        return CreateTDEMBusinessSystemOutcome(outcome.GetError());
    }
}

void RumClient::CreateTDEMBusinessSystemAsync(const CreateTDEMBusinessSystemRequest& request, const CreateTDEMBusinessSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTDEMBusinessSystemRequest&;
    using Resp = CreateTDEMBusinessSystemResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTDEMBusinessSystem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::CreateTDEMBusinessSystemOutcomeCallable RumClient::CreateTDEMBusinessSystemCallable(const CreateTDEMBusinessSystemRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTDEMBusinessSystemOutcome>>();
    CreateTDEMBusinessSystemAsync(
    request,
    [prom](
        const RumClient*,
        const CreateTDEMBusinessSystemRequest&,
        CreateTDEMBusinessSystemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::CreateTDEMDialTaskOutcome RumClient::CreateTDEMDialTask(const CreateTDEMDialTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDEMDialTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDEMDialTaskResponse rsp = CreateTDEMDialTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDEMDialTaskOutcome(rsp);
        else
            return CreateTDEMDialTaskOutcome(o.GetError());
    }
    else
    {
        return CreateTDEMDialTaskOutcome(outcome.GetError());
    }
}

void RumClient::CreateTDEMDialTaskAsync(const CreateTDEMDialTaskRequest& request, const CreateTDEMDialTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTDEMDialTaskRequest&;
    using Resp = CreateTDEMDialTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTDEMDialTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::CreateTDEMDialTaskOutcomeCallable RumClient::CreateTDEMDialTaskCallable(const CreateTDEMDialTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTDEMDialTaskOutcome>>();
    CreateTDEMDialTaskAsync(
    request,
    [prom](
        const RumClient*,
        const CreateTDEMDialTaskRequest&,
        CreateTDEMDialTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::CreateTDEMFieldTransformRuleOutcome RumClient::CreateTDEMFieldTransformRule(const CreateTDEMFieldTransformRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDEMFieldTransformRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDEMFieldTransformRuleResponse rsp = CreateTDEMFieldTransformRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDEMFieldTransformRuleOutcome(rsp);
        else
            return CreateTDEMFieldTransformRuleOutcome(o.GetError());
    }
    else
    {
        return CreateTDEMFieldTransformRuleOutcome(outcome.GetError());
    }
}

void RumClient::CreateTDEMFieldTransformRuleAsync(const CreateTDEMFieldTransformRuleRequest& request, const CreateTDEMFieldTransformRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTDEMFieldTransformRuleRequest&;
    using Resp = CreateTDEMFieldTransformRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTDEMFieldTransformRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::CreateTDEMFieldTransformRuleOutcomeCallable RumClient::CreateTDEMFieldTransformRuleCallable(const CreateTDEMFieldTransformRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTDEMFieldTransformRuleOutcome>>();
    CreateTDEMFieldTransformRuleAsync(
    request,
    [prom](
        const RumClient*,
        const CreateTDEMFieldTransformRuleRequest&,
        CreateTDEMFieldTransformRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::CreateTDEMFunnelOutcome RumClient::CreateTDEMFunnel(const CreateTDEMFunnelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDEMFunnel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDEMFunnelResponse rsp = CreateTDEMFunnelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDEMFunnelOutcome(rsp);
        else
            return CreateTDEMFunnelOutcome(o.GetError());
    }
    else
    {
        return CreateTDEMFunnelOutcome(outcome.GetError());
    }
}

void RumClient::CreateTDEMFunnelAsync(const CreateTDEMFunnelRequest& request, const CreateTDEMFunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTDEMFunnelRequest&;
    using Resp = CreateTDEMFunnelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTDEMFunnel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::CreateTDEMFunnelOutcomeCallable RumClient::CreateTDEMFunnelCallable(const CreateTDEMFunnelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTDEMFunnelOutcome>>();
    CreateTDEMFunnelAsync(
    request,
    [prom](
        const RumClient*,
        const CreateTDEMFunnelRequest&,
        CreateTDEMFunnelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::CreateWhitelistOutcome RumClient::CreateWhitelist(const CreateWhitelistRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWhitelist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWhitelistResponse rsp = CreateWhitelistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWhitelistOutcome(rsp);
        else
            return CreateWhitelistOutcome(o.GetError());
    }
    else
    {
        return CreateWhitelistOutcome(outcome.GetError());
    }
}

void RumClient::CreateWhitelistAsync(const CreateWhitelistRequest& request, const CreateWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWhitelistRequest&;
    using Resp = CreateWhitelistResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWhitelist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::CreateWhitelistOutcomeCallable RumClient::CreateWhitelistCallable(const CreateWhitelistRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWhitelistOutcome>>();
    CreateWhitelistAsync(
    request,
    [prom](
        const RumClient*,
        const CreateWhitelistRequest&,
        CreateWhitelistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteFieldTransformRuleOutcome RumClient::DeleteFieldTransformRule(const DeleteFieldTransformRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFieldTransformRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFieldTransformRuleResponse rsp = DeleteFieldTransformRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFieldTransformRuleOutcome(rsp);
        else
            return DeleteFieldTransformRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteFieldTransformRuleOutcome(outcome.GetError());
    }
}

void RumClient::DeleteFieldTransformRuleAsync(const DeleteFieldTransformRuleRequest& request, const DeleteFieldTransformRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFieldTransformRuleRequest&;
    using Resp = DeleteFieldTransformRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFieldTransformRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteFieldTransformRuleOutcomeCallable RumClient::DeleteFieldTransformRuleCallable(const DeleteFieldTransformRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFieldTransformRuleOutcome>>();
    DeleteFieldTransformRuleAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteFieldTransformRuleRequest&,
        DeleteFieldTransformRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteInstanceOutcome RumClient::DeleteInstance(const DeleteInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceResponse rsp = DeleteInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceOutcome(rsp);
        else
            return DeleteInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceOutcome(outcome.GetError());
    }
}

void RumClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteInstanceRequest&;
    using Resp = DeleteInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteInstanceOutcomeCallable RumClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInstanceOutcome>>();
    DeleteInstanceAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteInstanceRequest&,
        DeleteInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteMiniProgramReplayPackOutcome RumClient::DeleteMiniProgramReplayPack(const DeleteMiniProgramReplayPackRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMiniProgramReplayPack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMiniProgramReplayPackResponse rsp = DeleteMiniProgramReplayPackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMiniProgramReplayPackOutcome(rsp);
        else
            return DeleteMiniProgramReplayPackOutcome(o.GetError());
    }
    else
    {
        return DeleteMiniProgramReplayPackOutcome(outcome.GetError());
    }
}

void RumClient::DeleteMiniProgramReplayPackAsync(const DeleteMiniProgramReplayPackRequest& request, const DeleteMiniProgramReplayPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMiniProgramReplayPackRequest&;
    using Resp = DeleteMiniProgramReplayPackResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMiniProgramReplayPack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteMiniProgramReplayPackOutcomeCallable RumClient::DeleteMiniProgramReplayPackCallable(const DeleteMiniProgramReplayPackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMiniProgramReplayPackOutcome>>();
    DeleteMiniProgramReplayPackAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteMiniProgramReplayPackRequest&,
        DeleteMiniProgramReplayPackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteProjectOutcome RumClient::DeleteProject(const DeleteProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectResponse rsp = DeleteProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectOutcome(rsp);
        else
            return DeleteProjectOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectOutcome(outcome.GetError());
    }
}

void RumClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProjectRequest&;
    using Resp = DeleteProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteProjectOutcomeCallable RumClient::DeleteProjectCallable(const DeleteProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProjectOutcome>>();
    DeleteProjectAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteProjectRequest&,
        DeleteProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteReleaseFileOutcome RumClient::DeleteReleaseFile(const DeleteReleaseFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReleaseFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReleaseFileResponse rsp = DeleteReleaseFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReleaseFileOutcome(rsp);
        else
            return DeleteReleaseFileOutcome(o.GetError());
    }
    else
    {
        return DeleteReleaseFileOutcome(outcome.GetError());
    }
}

void RumClient::DeleteReleaseFileAsync(const DeleteReleaseFileRequest& request, const DeleteReleaseFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReleaseFileRequest&;
    using Resp = DeleteReleaseFileResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReleaseFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteReleaseFileOutcomeCallable RumClient::DeleteReleaseFileCallable(const DeleteReleaseFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReleaseFileOutcome>>();
    DeleteReleaseFileAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteReleaseFileRequest&,
        DeleteReleaseFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteStarProjectOutcome RumClient::DeleteStarProject(const DeleteStarProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStarProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStarProjectResponse rsp = DeleteStarProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStarProjectOutcome(rsp);
        else
            return DeleteStarProjectOutcome(o.GetError());
    }
    else
    {
        return DeleteStarProjectOutcome(outcome.GetError());
    }
}

void RumClient::DeleteStarProjectAsync(const DeleteStarProjectRequest& request, const DeleteStarProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStarProjectRequest&;
    using Resp = DeleteStarProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStarProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteStarProjectOutcomeCallable RumClient::DeleteStarProjectCallable(const DeleteStarProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStarProjectOutcome>>();
    DeleteStarProjectAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteStarProjectRequest&,
        DeleteStarProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteSymbolArtifactOutcome RumClient::DeleteSymbolArtifact(const DeleteSymbolArtifactRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSymbolArtifact");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSymbolArtifactResponse rsp = DeleteSymbolArtifactResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSymbolArtifactOutcome(rsp);
        else
            return DeleteSymbolArtifactOutcome(o.GetError());
    }
    else
    {
        return DeleteSymbolArtifactOutcome(outcome.GetError());
    }
}

void RumClient::DeleteSymbolArtifactAsync(const DeleteSymbolArtifactRequest& request, const DeleteSymbolArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSymbolArtifactRequest&;
    using Resp = DeleteSymbolArtifactResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSymbolArtifact", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteSymbolArtifactOutcomeCallable RumClient::DeleteSymbolArtifactCallable(const DeleteSymbolArtifactRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSymbolArtifactOutcome>>();
    DeleteSymbolArtifactAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteSymbolArtifactRequest&,
        DeleteSymbolArtifactOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteTDEMApplicationOutcome RumClient::DeleteTDEMApplication(const DeleteTDEMApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTDEMApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTDEMApplicationResponse rsp = DeleteTDEMApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTDEMApplicationOutcome(rsp);
        else
            return DeleteTDEMApplicationOutcome(o.GetError());
    }
    else
    {
        return DeleteTDEMApplicationOutcome(outcome.GetError());
    }
}

void RumClient::DeleteTDEMApplicationAsync(const DeleteTDEMApplicationRequest& request, const DeleteTDEMApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTDEMApplicationRequest&;
    using Resp = DeleteTDEMApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTDEMApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteTDEMApplicationOutcomeCallable RumClient::DeleteTDEMApplicationCallable(const DeleteTDEMApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTDEMApplicationOutcome>>();
    DeleteTDEMApplicationAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteTDEMApplicationRequest&,
        DeleteTDEMApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteTDEMBusinessSystemOutcome RumClient::DeleteTDEMBusinessSystem(const DeleteTDEMBusinessSystemRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTDEMBusinessSystem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTDEMBusinessSystemResponse rsp = DeleteTDEMBusinessSystemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTDEMBusinessSystemOutcome(rsp);
        else
            return DeleteTDEMBusinessSystemOutcome(o.GetError());
    }
    else
    {
        return DeleteTDEMBusinessSystemOutcome(outcome.GetError());
    }
}

void RumClient::DeleteTDEMBusinessSystemAsync(const DeleteTDEMBusinessSystemRequest& request, const DeleteTDEMBusinessSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTDEMBusinessSystemRequest&;
    using Resp = DeleteTDEMBusinessSystemResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTDEMBusinessSystem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteTDEMBusinessSystemOutcomeCallable RumClient::DeleteTDEMBusinessSystemCallable(const DeleteTDEMBusinessSystemRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTDEMBusinessSystemOutcome>>();
    DeleteTDEMBusinessSystemAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteTDEMBusinessSystemRequest&,
        DeleteTDEMBusinessSystemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteTDEMDialTaskOutcome RumClient::DeleteTDEMDialTask(const DeleteTDEMDialTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTDEMDialTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTDEMDialTaskResponse rsp = DeleteTDEMDialTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTDEMDialTaskOutcome(rsp);
        else
            return DeleteTDEMDialTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteTDEMDialTaskOutcome(outcome.GetError());
    }
}

void RumClient::DeleteTDEMDialTaskAsync(const DeleteTDEMDialTaskRequest& request, const DeleteTDEMDialTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTDEMDialTaskRequest&;
    using Resp = DeleteTDEMDialTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTDEMDialTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteTDEMDialTaskOutcomeCallable RumClient::DeleteTDEMDialTaskCallable(const DeleteTDEMDialTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTDEMDialTaskOutcome>>();
    DeleteTDEMDialTaskAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteTDEMDialTaskRequest&,
        DeleteTDEMDialTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteTDEMFieldTransformRuleOutcome RumClient::DeleteTDEMFieldTransformRule(const DeleteTDEMFieldTransformRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTDEMFieldTransformRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTDEMFieldTransformRuleResponse rsp = DeleteTDEMFieldTransformRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTDEMFieldTransformRuleOutcome(rsp);
        else
            return DeleteTDEMFieldTransformRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteTDEMFieldTransformRuleOutcome(outcome.GetError());
    }
}

void RumClient::DeleteTDEMFieldTransformRuleAsync(const DeleteTDEMFieldTransformRuleRequest& request, const DeleteTDEMFieldTransformRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTDEMFieldTransformRuleRequest&;
    using Resp = DeleteTDEMFieldTransformRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTDEMFieldTransformRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteTDEMFieldTransformRuleOutcomeCallable RumClient::DeleteTDEMFieldTransformRuleCallable(const DeleteTDEMFieldTransformRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTDEMFieldTransformRuleOutcome>>();
    DeleteTDEMFieldTransformRuleAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteTDEMFieldTransformRuleRequest&,
        DeleteTDEMFieldTransformRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteTDEMFunnelOutcome RumClient::DeleteTDEMFunnel(const DeleteTDEMFunnelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTDEMFunnel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTDEMFunnelResponse rsp = DeleteTDEMFunnelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTDEMFunnelOutcome(rsp);
        else
            return DeleteTDEMFunnelOutcome(o.GetError());
    }
    else
    {
        return DeleteTDEMFunnelOutcome(outcome.GetError());
    }
}

void RumClient::DeleteTDEMFunnelAsync(const DeleteTDEMFunnelRequest& request, const DeleteTDEMFunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTDEMFunnelRequest&;
    using Resp = DeleteTDEMFunnelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTDEMFunnel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteTDEMFunnelOutcomeCallable RumClient::DeleteTDEMFunnelCallable(const DeleteTDEMFunnelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTDEMFunnelOutcome>>();
    DeleteTDEMFunnelAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteTDEMFunnelRequest&,
        DeleteTDEMFunnelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DeleteWhitelistOutcome RumClient::DeleteWhitelist(const DeleteWhitelistRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWhitelist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWhitelistResponse rsp = DeleteWhitelistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWhitelistOutcome(rsp);
        else
            return DeleteWhitelistOutcome(o.GetError());
    }
    else
    {
        return DeleteWhitelistOutcome(outcome.GetError());
    }
}

void RumClient::DeleteWhitelistAsync(const DeleteWhitelistRequest& request, const DeleteWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWhitelistRequest&;
    using Resp = DeleteWhitelistResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWhitelist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DeleteWhitelistOutcomeCallable RumClient::DeleteWhitelistCallable(const DeleteWhitelistRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWhitelistOutcome>>();
    DeleteWhitelistAsync(
    request,
    [prom](
        const RumClient*,
        const DeleteWhitelistRequest&,
        DeleteWhitelistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeAppDimensionMetricsOutcome RumClient::DescribeAppDimensionMetrics(const DescribeAppDimensionMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppDimensionMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppDimensionMetricsResponse rsp = DescribeAppDimensionMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppDimensionMetricsOutcome(rsp);
        else
            return DescribeAppDimensionMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeAppDimensionMetricsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeAppDimensionMetricsAsync(const DescribeAppDimensionMetricsRequest& request, const DescribeAppDimensionMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppDimensionMetricsRequest&;
    using Resp = DescribeAppDimensionMetricsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppDimensionMetrics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeAppDimensionMetricsOutcomeCallable RumClient::DescribeAppDimensionMetricsCallable(const DescribeAppDimensionMetricsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppDimensionMetricsOutcome>>();
    DescribeAppDimensionMetricsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeAppDimensionMetricsRequest&,
        DescribeAppDimensionMetricsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeAppMetricsDataOutcome RumClient::DescribeAppMetricsData(const DescribeAppMetricsDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppMetricsData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppMetricsDataResponse rsp = DescribeAppMetricsDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppMetricsDataOutcome(rsp);
        else
            return DescribeAppMetricsDataOutcome(o.GetError());
    }
    else
    {
        return DescribeAppMetricsDataOutcome(outcome.GetError());
    }
}

void RumClient::DescribeAppMetricsDataAsync(const DescribeAppMetricsDataRequest& request, const DescribeAppMetricsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppMetricsDataRequest&;
    using Resp = DescribeAppMetricsDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppMetricsData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeAppMetricsDataOutcomeCallable RumClient::DescribeAppMetricsDataCallable(const DescribeAppMetricsDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppMetricsDataOutcome>>();
    DescribeAppMetricsDataAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeAppMetricsDataRequest&,
        DescribeAppMetricsDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeAppSingleCaseDetailListOutcome RumClient::DescribeAppSingleCaseDetailList(const DescribeAppSingleCaseDetailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppSingleCaseDetailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppSingleCaseDetailListResponse rsp = DescribeAppSingleCaseDetailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppSingleCaseDetailListOutcome(rsp);
        else
            return DescribeAppSingleCaseDetailListOutcome(o.GetError());
    }
    else
    {
        return DescribeAppSingleCaseDetailListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeAppSingleCaseDetailListAsync(const DescribeAppSingleCaseDetailListRequest& request, const DescribeAppSingleCaseDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppSingleCaseDetailListRequest&;
    using Resp = DescribeAppSingleCaseDetailListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppSingleCaseDetailList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeAppSingleCaseDetailListOutcomeCallable RumClient::DescribeAppSingleCaseDetailListCallable(const DescribeAppSingleCaseDetailListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppSingleCaseDetailListOutcome>>();
    DescribeAppSingleCaseDetailListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeAppSingleCaseDetailListRequest&,
        DescribeAppSingleCaseDetailListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeAppSingleCaseListOutcome RumClient::DescribeAppSingleCaseList(const DescribeAppSingleCaseListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppSingleCaseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppSingleCaseListResponse rsp = DescribeAppSingleCaseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppSingleCaseListOutcome(rsp);
        else
            return DescribeAppSingleCaseListOutcome(o.GetError());
    }
    else
    {
        return DescribeAppSingleCaseListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeAppSingleCaseListAsync(const DescribeAppSingleCaseListRequest& request, const DescribeAppSingleCaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppSingleCaseListRequest&;
    using Resp = DescribeAppSingleCaseListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppSingleCaseList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeAppSingleCaseListOutcomeCallable RumClient::DescribeAppSingleCaseListCallable(const DescribeAppSingleCaseListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppSingleCaseListOutcome>>();
    DescribeAppSingleCaseListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeAppSingleCaseListRequest&,
        DescribeAppSingleCaseListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeApplicationExitReportDetailOutcome RumClient::DescribeApplicationExitReportDetail(const DescribeApplicationExitReportDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationExitReportDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationExitReportDetailResponse rsp = DescribeApplicationExitReportDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationExitReportDetailOutcome(rsp);
        else
            return DescribeApplicationExitReportDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationExitReportDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeApplicationExitReportDetailAsync(const DescribeApplicationExitReportDetailRequest& request, const DescribeApplicationExitReportDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationExitReportDetailRequest&;
    using Resp = DescribeApplicationExitReportDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationExitReportDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeApplicationExitReportDetailOutcomeCallable RumClient::DescribeApplicationExitReportDetailCallable(const DescribeApplicationExitReportDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationExitReportDetailOutcome>>();
    DescribeApplicationExitReportDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeApplicationExitReportDetailRequest&,
        DescribeApplicationExitReportDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeApplicationExitReportListOutcome RumClient::DescribeApplicationExitReportList(const DescribeApplicationExitReportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationExitReportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationExitReportListResponse rsp = DescribeApplicationExitReportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationExitReportListOutcome(rsp);
        else
            return DescribeApplicationExitReportListOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationExitReportListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeApplicationExitReportListAsync(const DescribeApplicationExitReportListRequest& request, const DescribeApplicationExitReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationExitReportListRequest&;
    using Resp = DescribeApplicationExitReportListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationExitReportList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeApplicationExitReportListOutcomeCallable RumClient::DescribeApplicationExitReportListCallable(const DescribeApplicationExitReportListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationExitReportListOutcome>>();
    DescribeApplicationExitReportListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeApplicationExitReportListRequest&,
        DescribeApplicationExitReportListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataOutcome RumClient::DescribeData(const DescribeDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataResponse rsp = DescribeDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataOutcome(rsp);
        else
            return DescribeDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDataOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataAsync(const DescribeDataRequest& request, const DescribeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataRequest&;
    using Resp = DescribeDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataOutcomeCallable RumClient::DescribeDataCallable(const DescribeDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataOutcome>>();
    DescribeDataAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataRequest&,
        DescribeDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataBridgeUrlV2Outcome RumClient::DescribeDataBridgeUrlV2(const DescribeDataBridgeUrlV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataBridgeUrlV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataBridgeUrlV2Response rsp = DescribeDataBridgeUrlV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataBridgeUrlV2Outcome(rsp);
        else
            return DescribeDataBridgeUrlV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataBridgeUrlV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataBridgeUrlV2Async(const DescribeDataBridgeUrlV2Request& request, const DescribeDataBridgeUrlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataBridgeUrlV2Request&;
    using Resp = DescribeDataBridgeUrlV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataBridgeUrlV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataBridgeUrlV2OutcomeCallable RumClient::DescribeDataBridgeUrlV2Callable(const DescribeDataBridgeUrlV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataBridgeUrlV2Outcome>>();
    DescribeDataBridgeUrlV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataBridgeUrlV2Request&,
        DescribeDataBridgeUrlV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataCustomUrlOutcome RumClient::DescribeDataCustomUrl(const DescribeDataCustomUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataCustomUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataCustomUrlResponse rsp = DescribeDataCustomUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataCustomUrlOutcome(rsp);
        else
            return DescribeDataCustomUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeDataCustomUrlOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataCustomUrlAsync(const DescribeDataCustomUrlRequest& request, const DescribeDataCustomUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataCustomUrlRequest&;
    using Resp = DescribeDataCustomUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataCustomUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataCustomUrlOutcomeCallable RumClient::DescribeDataCustomUrlCallable(const DescribeDataCustomUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataCustomUrlOutcome>>();
    DescribeDataCustomUrlAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataCustomUrlRequest&,
        DescribeDataCustomUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataCustomUrlV2Outcome RumClient::DescribeDataCustomUrlV2(const DescribeDataCustomUrlV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataCustomUrlV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataCustomUrlV2Response rsp = DescribeDataCustomUrlV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataCustomUrlV2Outcome(rsp);
        else
            return DescribeDataCustomUrlV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataCustomUrlV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataCustomUrlV2Async(const DescribeDataCustomUrlV2Request& request, const DescribeDataCustomUrlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataCustomUrlV2Request&;
    using Resp = DescribeDataCustomUrlV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataCustomUrlV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataCustomUrlV2OutcomeCallable RumClient::DescribeDataCustomUrlV2Callable(const DescribeDataCustomUrlV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataCustomUrlV2Outcome>>();
    DescribeDataCustomUrlV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataCustomUrlV2Request&,
        DescribeDataCustomUrlV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataEventUrlOutcome RumClient::DescribeDataEventUrl(const DescribeDataEventUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEventUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEventUrlResponse rsp = DescribeDataEventUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEventUrlOutcome(rsp);
        else
            return DescribeDataEventUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEventUrlOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataEventUrlAsync(const DescribeDataEventUrlRequest& request, const DescribeDataEventUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataEventUrlRequest&;
    using Resp = DescribeDataEventUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataEventUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataEventUrlOutcomeCallable RumClient::DescribeDataEventUrlCallable(const DescribeDataEventUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataEventUrlOutcome>>();
    DescribeDataEventUrlAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataEventUrlRequest&,
        DescribeDataEventUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataEventUrlV2Outcome RumClient::DescribeDataEventUrlV2(const DescribeDataEventUrlV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEventUrlV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEventUrlV2Response rsp = DescribeDataEventUrlV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEventUrlV2Outcome(rsp);
        else
            return DescribeDataEventUrlV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataEventUrlV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataEventUrlV2Async(const DescribeDataEventUrlV2Request& request, const DescribeDataEventUrlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataEventUrlV2Request&;
    using Resp = DescribeDataEventUrlV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataEventUrlV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataEventUrlV2OutcomeCallable RumClient::DescribeDataEventUrlV2Callable(const DescribeDataEventUrlV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataEventUrlV2Outcome>>();
    DescribeDataEventUrlV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataEventUrlV2Request&,
        DescribeDataEventUrlV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataFetchProjectOutcome RumClient::DescribeDataFetchProject(const DescribeDataFetchProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataFetchProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataFetchProjectResponse rsp = DescribeDataFetchProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataFetchProjectOutcome(rsp);
        else
            return DescribeDataFetchProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeDataFetchProjectOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataFetchProjectAsync(const DescribeDataFetchProjectRequest& request, const DescribeDataFetchProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataFetchProjectRequest&;
    using Resp = DescribeDataFetchProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataFetchProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataFetchProjectOutcomeCallable RumClient::DescribeDataFetchProjectCallable(const DescribeDataFetchProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataFetchProjectOutcome>>();
    DescribeDataFetchProjectAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataFetchProjectRequest&,
        DescribeDataFetchProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataFetchUrlOutcome RumClient::DescribeDataFetchUrl(const DescribeDataFetchUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataFetchUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataFetchUrlResponse rsp = DescribeDataFetchUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataFetchUrlOutcome(rsp);
        else
            return DescribeDataFetchUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeDataFetchUrlOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataFetchUrlAsync(const DescribeDataFetchUrlRequest& request, const DescribeDataFetchUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataFetchUrlRequest&;
    using Resp = DescribeDataFetchUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataFetchUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataFetchUrlOutcomeCallable RumClient::DescribeDataFetchUrlCallable(const DescribeDataFetchUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataFetchUrlOutcome>>();
    DescribeDataFetchUrlAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataFetchUrlRequest&,
        DescribeDataFetchUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataFetchUrlInfoOutcome RumClient::DescribeDataFetchUrlInfo(const DescribeDataFetchUrlInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataFetchUrlInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataFetchUrlInfoResponse rsp = DescribeDataFetchUrlInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataFetchUrlInfoOutcome(rsp);
        else
            return DescribeDataFetchUrlInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDataFetchUrlInfoOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataFetchUrlInfoAsync(const DescribeDataFetchUrlInfoRequest& request, const DescribeDataFetchUrlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataFetchUrlInfoRequest&;
    using Resp = DescribeDataFetchUrlInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataFetchUrlInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataFetchUrlInfoOutcomeCallable RumClient::DescribeDataFetchUrlInfoCallable(const DescribeDataFetchUrlInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataFetchUrlInfoOutcome>>();
    DescribeDataFetchUrlInfoAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataFetchUrlInfoRequest&,
        DescribeDataFetchUrlInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataFetchUrlV2Outcome RumClient::DescribeDataFetchUrlV2(const DescribeDataFetchUrlV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataFetchUrlV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataFetchUrlV2Response rsp = DescribeDataFetchUrlV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataFetchUrlV2Outcome(rsp);
        else
            return DescribeDataFetchUrlV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataFetchUrlV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataFetchUrlV2Async(const DescribeDataFetchUrlV2Request& request, const DescribeDataFetchUrlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataFetchUrlV2Request&;
    using Resp = DescribeDataFetchUrlV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataFetchUrlV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataFetchUrlV2OutcomeCallable RumClient::DescribeDataFetchUrlV2Callable(const DescribeDataFetchUrlV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataFetchUrlV2Outcome>>();
    DescribeDataFetchUrlV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataFetchUrlV2Request&,
        DescribeDataFetchUrlV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataLogUrlInfoOutcome RumClient::DescribeDataLogUrlInfo(const DescribeDataLogUrlInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataLogUrlInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataLogUrlInfoResponse rsp = DescribeDataLogUrlInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataLogUrlInfoOutcome(rsp);
        else
            return DescribeDataLogUrlInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDataLogUrlInfoOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataLogUrlInfoAsync(const DescribeDataLogUrlInfoRequest& request, const DescribeDataLogUrlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataLogUrlInfoRequest&;
    using Resp = DescribeDataLogUrlInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataLogUrlInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataLogUrlInfoOutcomeCallable RumClient::DescribeDataLogUrlInfoCallable(const DescribeDataLogUrlInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataLogUrlInfoOutcome>>();
    DescribeDataLogUrlInfoAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataLogUrlInfoRequest&,
        DescribeDataLogUrlInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataLogUrlStatisticsOutcome RumClient::DescribeDataLogUrlStatistics(const DescribeDataLogUrlStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataLogUrlStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataLogUrlStatisticsResponse rsp = DescribeDataLogUrlStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataLogUrlStatisticsOutcome(rsp);
        else
            return DescribeDataLogUrlStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDataLogUrlStatisticsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataLogUrlStatisticsAsync(const DescribeDataLogUrlStatisticsRequest& request, const DescribeDataLogUrlStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataLogUrlStatisticsRequest&;
    using Resp = DescribeDataLogUrlStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataLogUrlStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataLogUrlStatisticsOutcomeCallable RumClient::DescribeDataLogUrlStatisticsCallable(const DescribeDataLogUrlStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataLogUrlStatisticsOutcome>>();
    DescribeDataLogUrlStatisticsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataLogUrlStatisticsRequest&,
        DescribeDataLogUrlStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataLogUrlStatisticsV2Outcome RumClient::DescribeDataLogUrlStatisticsV2(const DescribeDataLogUrlStatisticsV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataLogUrlStatisticsV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataLogUrlStatisticsV2Response rsp = DescribeDataLogUrlStatisticsV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataLogUrlStatisticsV2Outcome(rsp);
        else
            return DescribeDataLogUrlStatisticsV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataLogUrlStatisticsV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataLogUrlStatisticsV2Async(const DescribeDataLogUrlStatisticsV2Request& request, const DescribeDataLogUrlStatisticsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataLogUrlStatisticsV2Request&;
    using Resp = DescribeDataLogUrlStatisticsV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataLogUrlStatisticsV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataLogUrlStatisticsV2OutcomeCallable RumClient::DescribeDataLogUrlStatisticsV2Callable(const DescribeDataLogUrlStatisticsV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataLogUrlStatisticsV2Outcome>>();
    DescribeDataLogUrlStatisticsV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataLogUrlStatisticsV2Request&,
        DescribeDataLogUrlStatisticsV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataPerformancePageOutcome RumClient::DescribeDataPerformancePage(const DescribeDataPerformancePageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataPerformancePage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataPerformancePageResponse rsp = DescribeDataPerformancePageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataPerformancePageOutcome(rsp);
        else
            return DescribeDataPerformancePageOutcome(o.GetError());
    }
    else
    {
        return DescribeDataPerformancePageOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataPerformancePageAsync(const DescribeDataPerformancePageRequest& request, const DescribeDataPerformancePageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataPerformancePageRequest&;
    using Resp = DescribeDataPerformancePageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataPerformancePage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataPerformancePageOutcomeCallable RumClient::DescribeDataPerformancePageCallable(const DescribeDataPerformancePageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataPerformancePageOutcome>>();
    DescribeDataPerformancePageAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataPerformancePageRequest&,
        DescribeDataPerformancePageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataPerformancePageV2Outcome RumClient::DescribeDataPerformancePageV2(const DescribeDataPerformancePageV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataPerformancePageV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataPerformancePageV2Response rsp = DescribeDataPerformancePageV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataPerformancePageV2Outcome(rsp);
        else
            return DescribeDataPerformancePageV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataPerformancePageV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataPerformancePageV2Async(const DescribeDataPerformancePageV2Request& request, const DescribeDataPerformancePageV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataPerformancePageV2Request&;
    using Resp = DescribeDataPerformancePageV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataPerformancePageV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataPerformancePageV2OutcomeCallable RumClient::DescribeDataPerformancePageV2Callable(const DescribeDataPerformancePageV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataPerformancePageV2Outcome>>();
    DescribeDataPerformancePageV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataPerformancePageV2Request&,
        DescribeDataPerformancePageV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataPvUrlInfoOutcome RumClient::DescribeDataPvUrlInfo(const DescribeDataPvUrlInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataPvUrlInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataPvUrlInfoResponse rsp = DescribeDataPvUrlInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataPvUrlInfoOutcome(rsp);
        else
            return DescribeDataPvUrlInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDataPvUrlInfoOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataPvUrlInfoAsync(const DescribeDataPvUrlInfoRequest& request, const DescribeDataPvUrlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataPvUrlInfoRequest&;
    using Resp = DescribeDataPvUrlInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataPvUrlInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataPvUrlInfoOutcomeCallable RumClient::DescribeDataPvUrlInfoCallable(const DescribeDataPvUrlInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataPvUrlInfoOutcome>>();
    DescribeDataPvUrlInfoAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataPvUrlInfoRequest&,
        DescribeDataPvUrlInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataPvUrlStatisticsOutcome RumClient::DescribeDataPvUrlStatistics(const DescribeDataPvUrlStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataPvUrlStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataPvUrlStatisticsResponse rsp = DescribeDataPvUrlStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataPvUrlStatisticsOutcome(rsp);
        else
            return DescribeDataPvUrlStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDataPvUrlStatisticsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataPvUrlStatisticsAsync(const DescribeDataPvUrlStatisticsRequest& request, const DescribeDataPvUrlStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataPvUrlStatisticsRequest&;
    using Resp = DescribeDataPvUrlStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataPvUrlStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataPvUrlStatisticsOutcomeCallable RumClient::DescribeDataPvUrlStatisticsCallable(const DescribeDataPvUrlStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataPvUrlStatisticsOutcome>>();
    DescribeDataPvUrlStatisticsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataPvUrlStatisticsRequest&,
        DescribeDataPvUrlStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataPvUrlStatisticsV2Outcome RumClient::DescribeDataPvUrlStatisticsV2(const DescribeDataPvUrlStatisticsV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataPvUrlStatisticsV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataPvUrlStatisticsV2Response rsp = DescribeDataPvUrlStatisticsV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataPvUrlStatisticsV2Outcome(rsp);
        else
            return DescribeDataPvUrlStatisticsV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataPvUrlStatisticsV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataPvUrlStatisticsV2Async(const DescribeDataPvUrlStatisticsV2Request& request, const DescribeDataPvUrlStatisticsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataPvUrlStatisticsV2Request&;
    using Resp = DescribeDataPvUrlStatisticsV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataPvUrlStatisticsV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataPvUrlStatisticsV2OutcomeCallable RumClient::DescribeDataPvUrlStatisticsV2Callable(const DescribeDataPvUrlStatisticsV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataPvUrlStatisticsV2Outcome>>();
    DescribeDataPvUrlStatisticsV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataPvUrlStatisticsV2Request&,
        DescribeDataPvUrlStatisticsV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataReportCountOutcome RumClient::DescribeDataReportCount(const DescribeDataReportCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataReportCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataReportCountResponse rsp = DescribeDataReportCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataReportCountOutcome(rsp);
        else
            return DescribeDataReportCountOutcome(o.GetError());
    }
    else
    {
        return DescribeDataReportCountOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataReportCountAsync(const DescribeDataReportCountRequest& request, const DescribeDataReportCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataReportCountRequest&;
    using Resp = DescribeDataReportCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataReportCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataReportCountOutcomeCallable RumClient::DescribeDataReportCountCallable(const DescribeDataReportCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataReportCountOutcome>>();
    DescribeDataReportCountAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataReportCountRequest&,
        DescribeDataReportCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataReportCountV2Outcome RumClient::DescribeDataReportCountV2(const DescribeDataReportCountV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataReportCountV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataReportCountV2Response rsp = DescribeDataReportCountV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataReportCountV2Outcome(rsp);
        else
            return DescribeDataReportCountV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataReportCountV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataReportCountV2Async(const DescribeDataReportCountV2Request& request, const DescribeDataReportCountV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataReportCountV2Request&;
    using Resp = DescribeDataReportCountV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataReportCountV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataReportCountV2OutcomeCallable RumClient::DescribeDataReportCountV2Callable(const DescribeDataReportCountV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataReportCountV2Outcome>>();
    DescribeDataReportCountV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataReportCountV2Request&,
        DescribeDataReportCountV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataSetUrlStatisticsOutcome RumClient::DescribeDataSetUrlStatistics(const DescribeDataSetUrlStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataSetUrlStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataSetUrlStatisticsResponse rsp = DescribeDataSetUrlStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataSetUrlStatisticsOutcome(rsp);
        else
            return DescribeDataSetUrlStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDataSetUrlStatisticsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataSetUrlStatisticsAsync(const DescribeDataSetUrlStatisticsRequest& request, const DescribeDataSetUrlStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataSetUrlStatisticsRequest&;
    using Resp = DescribeDataSetUrlStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataSetUrlStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataSetUrlStatisticsOutcomeCallable RumClient::DescribeDataSetUrlStatisticsCallable(const DescribeDataSetUrlStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataSetUrlStatisticsOutcome>>();
    DescribeDataSetUrlStatisticsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataSetUrlStatisticsRequest&,
        DescribeDataSetUrlStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataSetUrlStatisticsV2Outcome RumClient::DescribeDataSetUrlStatisticsV2(const DescribeDataSetUrlStatisticsV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataSetUrlStatisticsV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataSetUrlStatisticsV2Response rsp = DescribeDataSetUrlStatisticsV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataSetUrlStatisticsV2Outcome(rsp);
        else
            return DescribeDataSetUrlStatisticsV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataSetUrlStatisticsV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataSetUrlStatisticsV2Async(const DescribeDataSetUrlStatisticsV2Request& request, const DescribeDataSetUrlStatisticsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataSetUrlStatisticsV2Request&;
    using Resp = DescribeDataSetUrlStatisticsV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataSetUrlStatisticsV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataSetUrlStatisticsV2OutcomeCallable RumClient::DescribeDataSetUrlStatisticsV2Callable(const DescribeDataSetUrlStatisticsV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataSetUrlStatisticsV2Outcome>>();
    DescribeDataSetUrlStatisticsV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataSetUrlStatisticsV2Request&,
        DescribeDataSetUrlStatisticsV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataStaticProjectOutcome RumClient::DescribeDataStaticProject(const DescribeDataStaticProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataStaticProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataStaticProjectResponse rsp = DescribeDataStaticProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataStaticProjectOutcome(rsp);
        else
            return DescribeDataStaticProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeDataStaticProjectOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataStaticProjectAsync(const DescribeDataStaticProjectRequest& request, const DescribeDataStaticProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataStaticProjectRequest&;
    using Resp = DescribeDataStaticProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataStaticProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataStaticProjectOutcomeCallable RumClient::DescribeDataStaticProjectCallable(const DescribeDataStaticProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataStaticProjectOutcome>>();
    DescribeDataStaticProjectAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataStaticProjectRequest&,
        DescribeDataStaticProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataStaticProjectV2Outcome RumClient::DescribeDataStaticProjectV2(const DescribeDataStaticProjectV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataStaticProjectV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataStaticProjectV2Response rsp = DescribeDataStaticProjectV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataStaticProjectV2Outcome(rsp);
        else
            return DescribeDataStaticProjectV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataStaticProjectV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataStaticProjectV2Async(const DescribeDataStaticProjectV2Request& request, const DescribeDataStaticProjectV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataStaticProjectV2Request&;
    using Resp = DescribeDataStaticProjectV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataStaticProjectV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataStaticProjectV2OutcomeCallable RumClient::DescribeDataStaticProjectV2Callable(const DescribeDataStaticProjectV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataStaticProjectV2Outcome>>();
    DescribeDataStaticProjectV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataStaticProjectV2Request&,
        DescribeDataStaticProjectV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataStaticResourceOutcome RumClient::DescribeDataStaticResource(const DescribeDataStaticResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataStaticResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataStaticResourceResponse rsp = DescribeDataStaticResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataStaticResourceOutcome(rsp);
        else
            return DescribeDataStaticResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeDataStaticResourceOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataStaticResourceAsync(const DescribeDataStaticResourceRequest& request, const DescribeDataStaticResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataStaticResourceRequest&;
    using Resp = DescribeDataStaticResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataStaticResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataStaticResourceOutcomeCallable RumClient::DescribeDataStaticResourceCallable(const DescribeDataStaticResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataStaticResourceOutcome>>();
    DescribeDataStaticResourceAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataStaticResourceRequest&,
        DescribeDataStaticResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataStaticResourceV2Outcome RumClient::DescribeDataStaticResourceV2(const DescribeDataStaticResourceV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataStaticResourceV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataStaticResourceV2Response rsp = DescribeDataStaticResourceV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataStaticResourceV2Outcome(rsp);
        else
            return DescribeDataStaticResourceV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataStaticResourceV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataStaticResourceV2Async(const DescribeDataStaticResourceV2Request& request, const DescribeDataStaticResourceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataStaticResourceV2Request&;
    using Resp = DescribeDataStaticResourceV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataStaticResourceV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataStaticResourceV2OutcomeCallable RumClient::DescribeDataStaticResourceV2Callable(const DescribeDataStaticResourceV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataStaticResourceV2Outcome>>();
    DescribeDataStaticResourceV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataStaticResourceV2Request&,
        DescribeDataStaticResourceV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataStaticUrlOutcome RumClient::DescribeDataStaticUrl(const DescribeDataStaticUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataStaticUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataStaticUrlResponse rsp = DescribeDataStaticUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataStaticUrlOutcome(rsp);
        else
            return DescribeDataStaticUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeDataStaticUrlOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataStaticUrlAsync(const DescribeDataStaticUrlRequest& request, const DescribeDataStaticUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataStaticUrlRequest&;
    using Resp = DescribeDataStaticUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataStaticUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataStaticUrlOutcomeCallable RumClient::DescribeDataStaticUrlCallable(const DescribeDataStaticUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataStaticUrlOutcome>>();
    DescribeDataStaticUrlAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataStaticUrlRequest&,
        DescribeDataStaticUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataStaticUrlV2Outcome RumClient::DescribeDataStaticUrlV2(const DescribeDataStaticUrlV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataStaticUrlV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataStaticUrlV2Response rsp = DescribeDataStaticUrlV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataStaticUrlV2Outcome(rsp);
        else
            return DescribeDataStaticUrlV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataStaticUrlV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataStaticUrlV2Async(const DescribeDataStaticUrlV2Request& request, const DescribeDataStaticUrlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataStaticUrlV2Request&;
    using Resp = DescribeDataStaticUrlV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataStaticUrlV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataStaticUrlV2OutcomeCallable RumClient::DescribeDataStaticUrlV2Callable(const DescribeDataStaticUrlV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataStaticUrlV2Outcome>>();
    DescribeDataStaticUrlV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataStaticUrlV2Request&,
        DescribeDataStaticUrlV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataWebVitalsPageOutcome RumClient::DescribeDataWebVitalsPage(const DescribeDataWebVitalsPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataWebVitalsPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataWebVitalsPageResponse rsp = DescribeDataWebVitalsPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataWebVitalsPageOutcome(rsp);
        else
            return DescribeDataWebVitalsPageOutcome(o.GetError());
    }
    else
    {
        return DescribeDataWebVitalsPageOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataWebVitalsPageAsync(const DescribeDataWebVitalsPageRequest& request, const DescribeDataWebVitalsPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataWebVitalsPageRequest&;
    using Resp = DescribeDataWebVitalsPageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataWebVitalsPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataWebVitalsPageOutcomeCallable RumClient::DescribeDataWebVitalsPageCallable(const DescribeDataWebVitalsPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataWebVitalsPageOutcome>>();
    DescribeDataWebVitalsPageAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeDataWebVitalsPageRequest&,
        DescribeDataWebVitalsPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeDataWebVitalsPageV2Outcome RumClient::DescribeDataWebVitalsPageV2(const DescribeDataWebVitalsPageV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeDataWebVitalsPageV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataWebVitalsPageV2Response rsp = DescribeDataWebVitalsPageV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataWebVitalsPageV2Outcome(rsp);
        else
            return DescribeDataWebVitalsPageV2Outcome(o.GetError());
    }
    else
    {
        return DescribeDataWebVitalsPageV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeDataWebVitalsPageV2Async(const DescribeDataWebVitalsPageV2Request& request, const DescribeDataWebVitalsPageV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataWebVitalsPageV2Request&;
    using Resp = DescribeDataWebVitalsPageV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeDataWebVitalsPageV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeDataWebVitalsPageV2OutcomeCallable RumClient::DescribeDataWebVitalsPageV2Callable(const DescribeDataWebVitalsPageV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataWebVitalsPageV2Outcome>>();
    DescribeDataWebVitalsPageV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeDataWebVitalsPageV2Request&,
        DescribeDataWebVitalsPageV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeErrorOutcome RumClient::DescribeError(const DescribeErrorRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeError");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeErrorResponse rsp = DescribeErrorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeErrorOutcome(rsp);
        else
            return DescribeErrorOutcome(o.GetError());
    }
    else
    {
        return DescribeErrorOutcome(outcome.GetError());
    }
}

void RumClient::DescribeErrorAsync(const DescribeErrorRequest& request, const DescribeErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeErrorRequest&;
    using Resp = DescribeErrorResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeError", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeErrorOutcomeCallable RumClient::DescribeErrorCallable(const DescribeErrorRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeErrorOutcome>>();
    DescribeErrorAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeErrorRequest&,
        DescribeErrorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeExceptionDetailOutcome RumClient::DescribeExceptionDetail(const DescribeExceptionDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExceptionDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExceptionDetailResponse rsp = DescribeExceptionDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExceptionDetailOutcome(rsp);
        else
            return DescribeExceptionDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeExceptionDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeExceptionDetailAsync(const DescribeExceptionDetailRequest& request, const DescribeExceptionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExceptionDetailRequest&;
    using Resp = DescribeExceptionDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExceptionDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeExceptionDetailOutcomeCallable RumClient::DescribeExceptionDetailCallable(const DescribeExceptionDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExceptionDetailOutcome>>();
    DescribeExceptionDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeExceptionDetailRequest&,
        DescribeExceptionDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeExceptionReportListOutcome RumClient::DescribeExceptionReportList(const DescribeExceptionReportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExceptionReportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExceptionReportListResponse rsp = DescribeExceptionReportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExceptionReportListOutcome(rsp);
        else
            return DescribeExceptionReportListOutcome(o.GetError());
    }
    else
    {
        return DescribeExceptionReportListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeExceptionReportListAsync(const DescribeExceptionReportListRequest& request, const DescribeExceptionReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExceptionReportListRequest&;
    using Resp = DescribeExceptionReportListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExceptionReportList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeExceptionReportListOutcomeCallable RumClient::DescribeExceptionReportListCallable(const DescribeExceptionReportListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExceptionReportListOutcome>>();
    DescribeExceptionReportListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeExceptionReportListRequest&,
        DescribeExceptionReportListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeFOOMMallocProblemDetailOutcome RumClient::DescribeFOOMMallocProblemDetail(const DescribeFOOMMallocProblemDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFOOMMallocProblemDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFOOMMallocProblemDetailResponse rsp = DescribeFOOMMallocProblemDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFOOMMallocProblemDetailOutcome(rsp);
        else
            return DescribeFOOMMallocProblemDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeFOOMMallocProblemDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeFOOMMallocProblemDetailAsync(const DescribeFOOMMallocProblemDetailRequest& request, const DescribeFOOMMallocProblemDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFOOMMallocProblemDetailRequest&;
    using Resp = DescribeFOOMMallocProblemDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFOOMMallocProblemDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeFOOMMallocProblemDetailOutcomeCallable RumClient::DescribeFOOMMallocProblemDetailCallable(const DescribeFOOMMallocProblemDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFOOMMallocProblemDetailOutcome>>();
    DescribeFOOMMallocProblemDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeFOOMMallocProblemDetailRequest&,
        DescribeFOOMMallocProblemDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeFOOMMallocProblemListOutcome RumClient::DescribeFOOMMallocProblemList(const DescribeFOOMMallocProblemListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFOOMMallocProblemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFOOMMallocProblemListResponse rsp = DescribeFOOMMallocProblemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFOOMMallocProblemListOutcome(rsp);
        else
            return DescribeFOOMMallocProblemListOutcome(o.GetError());
    }
    else
    {
        return DescribeFOOMMallocProblemListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeFOOMMallocProblemListAsync(const DescribeFOOMMallocProblemListRequest& request, const DescribeFOOMMallocProblemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFOOMMallocProblemListRequest&;
    using Resp = DescribeFOOMMallocProblemListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFOOMMallocProblemList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeFOOMMallocProblemListOutcomeCallable RumClient::DescribeFOOMMallocProblemListCallable(const DescribeFOOMMallocProblemListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFOOMMallocProblemListOutcome>>();
    DescribeFOOMMallocProblemListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeFOOMMallocProblemListRequest&,
        DescribeFOOMMallocProblemListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeFOOMMallocReportListOutcome RumClient::DescribeFOOMMallocReportList(const DescribeFOOMMallocReportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFOOMMallocReportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFOOMMallocReportListResponse rsp = DescribeFOOMMallocReportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFOOMMallocReportListOutcome(rsp);
        else
            return DescribeFOOMMallocReportListOutcome(o.GetError());
    }
    else
    {
        return DescribeFOOMMallocReportListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeFOOMMallocReportListAsync(const DescribeFOOMMallocReportListRequest& request, const DescribeFOOMMallocReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFOOMMallocReportListRequest&;
    using Resp = DescribeFOOMMallocReportListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFOOMMallocReportList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeFOOMMallocReportListOutcomeCallable RumClient::DescribeFOOMMallocReportListCallable(const DescribeFOOMMallocReportListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFOOMMallocReportListOutcome>>();
    DescribeFOOMMallocReportListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeFOOMMallocReportListRequest&,
        DescribeFOOMMallocReportListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeFOOMProblemDetailOutcome RumClient::DescribeFOOMProblemDetail(const DescribeFOOMProblemDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFOOMProblemDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFOOMProblemDetailResponse rsp = DescribeFOOMProblemDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFOOMProblemDetailOutcome(rsp);
        else
            return DescribeFOOMProblemDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeFOOMProblemDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeFOOMProblemDetailAsync(const DescribeFOOMProblemDetailRequest& request, const DescribeFOOMProblemDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFOOMProblemDetailRequest&;
    using Resp = DescribeFOOMProblemDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFOOMProblemDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeFOOMProblemDetailOutcomeCallable RumClient::DescribeFOOMProblemDetailCallable(const DescribeFOOMProblemDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFOOMProblemDetailOutcome>>();
    DescribeFOOMProblemDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeFOOMProblemDetailRequest&,
        DescribeFOOMProblemDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeFOOMProblemListOutcome RumClient::DescribeFOOMProblemList(const DescribeFOOMProblemListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFOOMProblemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFOOMProblemListResponse rsp = DescribeFOOMProblemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFOOMProblemListOutcome(rsp);
        else
            return DescribeFOOMProblemListOutcome(o.GetError());
    }
    else
    {
        return DescribeFOOMProblemListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeFOOMProblemListAsync(const DescribeFOOMProblemListRequest& request, const DescribeFOOMProblemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFOOMProblemListRequest&;
    using Resp = DescribeFOOMProblemListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFOOMProblemList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeFOOMProblemListOutcomeCallable RumClient::DescribeFOOMProblemListCallable(const DescribeFOOMProblemListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFOOMProblemListOutcome>>();
    DescribeFOOMProblemListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeFOOMProblemListRequest&,
        DescribeFOOMProblemListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeFOOMReportListOutcome RumClient::DescribeFOOMReportList(const DescribeFOOMReportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFOOMReportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFOOMReportListResponse rsp = DescribeFOOMReportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFOOMReportListOutcome(rsp);
        else
            return DescribeFOOMReportListOutcome(o.GetError());
    }
    else
    {
        return DescribeFOOMReportListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeFOOMReportListAsync(const DescribeFOOMReportListRequest& request, const DescribeFOOMReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFOOMReportListRequest&;
    using Resp = DescribeFOOMReportListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFOOMReportList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeFOOMReportListOutcomeCallable RumClient::DescribeFOOMReportListCallable(const DescribeFOOMReportListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFOOMReportListOutcome>>();
    DescribeFOOMReportListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeFOOMReportListRequest&,
        DescribeFOOMReportListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeFieldTransformRulesOutcome RumClient::DescribeFieldTransformRules(const DescribeFieldTransformRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFieldTransformRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFieldTransformRulesResponse rsp = DescribeFieldTransformRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFieldTransformRulesOutcome(rsp);
        else
            return DescribeFieldTransformRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeFieldTransformRulesOutcome(outcome.GetError());
    }
}

void RumClient::DescribeFieldTransformRulesAsync(const DescribeFieldTransformRulesRequest& request, const DescribeFieldTransformRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFieldTransformRulesRequest&;
    using Resp = DescribeFieldTransformRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFieldTransformRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeFieldTransformRulesOutcomeCallable RumClient::DescribeFieldTransformRulesCallable(const DescribeFieldTransformRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFieldTransformRulesOutcome>>();
    DescribeFieldTransformRulesAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeFieldTransformRulesRequest&,
        DescribeFieldTransformRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeFieldValuesOutcome RumClient::DescribeFieldValues(const DescribeFieldValuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFieldValues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFieldValuesResponse rsp = DescribeFieldValuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFieldValuesOutcome(rsp);
        else
            return DescribeFieldValuesOutcome(o.GetError());
    }
    else
    {
        return DescribeFieldValuesOutcome(outcome.GetError());
    }
}

void RumClient::DescribeFieldValuesAsync(const DescribeFieldValuesRequest& request, const DescribeFieldValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFieldValuesRequest&;
    using Resp = DescribeFieldValuesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFieldValues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeFieldValuesOutcomeCallable RumClient::DescribeFieldValuesCallable(const DescribeFieldValuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFieldValuesOutcome>>();
    DescribeFieldValuesAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeFieldValuesRequest&,
        DescribeFieldValuesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeFileCertificateOutcome RumClient::DescribeFileCertificate(const DescribeFileCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileCertificateResponse rsp = DescribeFileCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileCertificateOutcome(rsp);
        else
            return DescribeFileCertificateOutcome(o.GetError());
    }
    else
    {
        return DescribeFileCertificateOutcome(outcome.GetError());
    }
}

void RumClient::DescribeFileCertificateAsync(const DescribeFileCertificateRequest& request, const DescribeFileCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileCertificateRequest&;
    using Resp = DescribeFileCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeFileCertificateOutcomeCallable RumClient::DescribeFileCertificateCallable(const DescribeFileCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileCertificateOutcome>>();
    DescribeFileCertificateAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeFileCertificateRequest&,
        DescribeFileCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeIssueAffectedUsersOutcome RumClient::DescribeIssueAffectedUsers(const DescribeIssueAffectedUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIssueAffectedUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIssueAffectedUsersResponse rsp = DescribeIssueAffectedUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIssueAffectedUsersOutcome(rsp);
        else
            return DescribeIssueAffectedUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeIssueAffectedUsersOutcome(outcome.GetError());
    }
}

void RumClient::DescribeIssueAffectedUsersAsync(const DescribeIssueAffectedUsersRequest& request, const DescribeIssueAffectedUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIssueAffectedUsersRequest&;
    using Resp = DescribeIssueAffectedUsersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIssueAffectedUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeIssueAffectedUsersOutcomeCallable RumClient::DescribeIssueAffectedUsersCallable(const DescribeIssueAffectedUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIssueAffectedUsersOutcome>>();
    DescribeIssueAffectedUsersAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeIssueAffectedUsersRequest&,
        DescribeIssueAffectedUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeIssueBreadcrumbsOutcome RumClient::DescribeIssueBreadcrumbs(const DescribeIssueBreadcrumbsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIssueBreadcrumbs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIssueBreadcrumbsResponse rsp = DescribeIssueBreadcrumbsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIssueBreadcrumbsOutcome(rsp);
        else
            return DescribeIssueBreadcrumbsOutcome(o.GetError());
    }
    else
    {
        return DescribeIssueBreadcrumbsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeIssueBreadcrumbsAsync(const DescribeIssueBreadcrumbsRequest& request, const DescribeIssueBreadcrumbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIssueBreadcrumbsRequest&;
    using Resp = DescribeIssueBreadcrumbsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIssueBreadcrumbs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeIssueBreadcrumbsOutcomeCallable RumClient::DescribeIssueBreadcrumbsCallable(const DescribeIssueBreadcrumbsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIssueBreadcrumbsOutcome>>();
    DescribeIssueBreadcrumbsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeIssueBreadcrumbsRequest&,
        DescribeIssueBreadcrumbsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeIssueCrashLogDownloadURLOutcome RumClient::DescribeIssueCrashLogDownloadURL(const DescribeIssueCrashLogDownloadURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIssueCrashLogDownloadURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIssueCrashLogDownloadURLResponse rsp = DescribeIssueCrashLogDownloadURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIssueCrashLogDownloadURLOutcome(rsp);
        else
            return DescribeIssueCrashLogDownloadURLOutcome(o.GetError());
    }
    else
    {
        return DescribeIssueCrashLogDownloadURLOutcome(outcome.GetError());
    }
}

void RumClient::DescribeIssueCrashLogDownloadURLAsync(const DescribeIssueCrashLogDownloadURLRequest& request, const DescribeIssueCrashLogDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIssueCrashLogDownloadURLRequest&;
    using Resp = DescribeIssueCrashLogDownloadURLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIssueCrashLogDownloadURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeIssueCrashLogDownloadURLOutcomeCallable RumClient::DescribeIssueCrashLogDownloadURLCallable(const DescribeIssueCrashLogDownloadURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIssueCrashLogDownloadURLOutcome>>();
    DescribeIssueCrashLogDownloadURLAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeIssueCrashLogDownloadURLRequest&,
        DescribeIssueCrashLogDownloadURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeIssueDetailOutcome RumClient::DescribeIssueDetail(const DescribeIssueDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIssueDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIssueDetailResponse rsp = DescribeIssueDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIssueDetailOutcome(rsp);
        else
            return DescribeIssueDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeIssueDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeIssueDetailAsync(const DescribeIssueDetailRequest& request, const DescribeIssueDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIssueDetailRequest&;
    using Resp = DescribeIssueDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIssueDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeIssueDetailOutcomeCallable RumClient::DescribeIssueDetailCallable(const DescribeIssueDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIssueDetailOutcome>>();
    DescribeIssueDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeIssueDetailRequest&,
        DescribeIssueDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeIssueEventDetailOutcome RumClient::DescribeIssueEventDetail(const DescribeIssueEventDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIssueEventDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIssueEventDetailResponse rsp = DescribeIssueEventDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIssueEventDetailOutcome(rsp);
        else
            return DescribeIssueEventDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeIssueEventDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeIssueEventDetailAsync(const DescribeIssueEventDetailRequest& request, const DescribeIssueEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIssueEventDetailRequest&;
    using Resp = DescribeIssueEventDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIssueEventDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeIssueEventDetailOutcomeCallable RumClient::DescribeIssueEventDetailCallable(const DescribeIssueEventDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIssueEventDetailOutcome>>();
    DescribeIssueEventDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeIssueEventDetailRequest&,
        DescribeIssueEventDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeIssueEventsOutcome RumClient::DescribeIssueEvents(const DescribeIssueEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIssueEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIssueEventsResponse rsp = DescribeIssueEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIssueEventsOutcome(rsp);
        else
            return DescribeIssueEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeIssueEventsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeIssueEventsAsync(const DescribeIssueEventsRequest& request, const DescribeIssueEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIssueEventsRequest&;
    using Resp = DescribeIssueEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIssueEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeIssueEventsOutcomeCallable RumClient::DescribeIssueEventsCallable(const DescribeIssueEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIssueEventsOutcome>>();
    DescribeIssueEventsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeIssueEventsRequest&,
        DescribeIssueEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeIssueTrendOutcome RumClient::DescribeIssueTrend(const DescribeIssueTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIssueTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIssueTrendResponse rsp = DescribeIssueTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIssueTrendOutcome(rsp);
        else
            return DescribeIssueTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeIssueTrendOutcome(outcome.GetError());
    }
}

void RumClient::DescribeIssueTrendAsync(const DescribeIssueTrendRequest& request, const DescribeIssueTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIssueTrendRequest&;
    using Resp = DescribeIssueTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIssueTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeIssueTrendOutcomeCallable RumClient::DescribeIssueTrendCallable(const DescribeIssueTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIssueTrendOutcome>>();
    DescribeIssueTrendAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeIssueTrendRequest&,
        DescribeIssueTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeIssuesOutcome RumClient::DescribeIssues(const DescribeIssuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIssues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIssuesResponse rsp = DescribeIssuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIssuesOutcome(rsp);
        else
            return DescribeIssuesOutcome(o.GetError());
    }
    else
    {
        return DescribeIssuesOutcome(outcome.GetError());
    }
}

void RumClient::DescribeIssuesAsync(const DescribeIssuesRequest& request, const DescribeIssuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIssuesRequest&;
    using Resp = DescribeIssuesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIssues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeIssuesOutcomeCallable RumClient::DescribeIssuesCallable(const DescribeIssuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIssuesOutcome>>();
    DescribeIssuesAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeIssuesRequest&,
        DescribeIssuesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeIssuesDistributionOutcome RumClient::DescribeIssuesDistribution(const DescribeIssuesDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIssuesDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIssuesDistributionResponse rsp = DescribeIssuesDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIssuesDistributionOutcome(rsp);
        else
            return DescribeIssuesDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeIssuesDistributionOutcome(outcome.GetError());
    }
}

void RumClient::DescribeIssuesDistributionAsync(const DescribeIssuesDistributionRequest& request, const DescribeIssuesDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIssuesDistributionRequest&;
    using Resp = DescribeIssuesDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIssuesDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeIssuesDistributionOutcomeCallable RumClient::DescribeIssuesDistributionCallable(const DescribeIssuesDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIssuesDistributionOutcome>>();
    DescribeIssuesDistributionAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeIssuesDistributionRequest&,
        DescribeIssuesDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeIssuesListOutcome RumClient::DescribeIssuesList(const DescribeIssuesListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIssuesList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIssuesListResponse rsp = DescribeIssuesListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIssuesListOutcome(rsp);
        else
            return DescribeIssuesListOutcome(o.GetError());
    }
    else
    {
        return DescribeIssuesListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeIssuesListAsync(const DescribeIssuesListRequest& request, const DescribeIssuesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIssuesListRequest&;
    using Resp = DescribeIssuesListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIssuesList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeIssuesListOutcomeCallable RumClient::DescribeIssuesListCallable(const DescribeIssuesListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIssuesListOutcome>>();
    DescribeIssuesListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeIssuesListRequest&,
        DescribeIssuesListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeIssuesStatisticsTrendOutcome RumClient::DescribeIssuesStatisticsTrend(const DescribeIssuesStatisticsTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIssuesStatisticsTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIssuesStatisticsTrendResponse rsp = DescribeIssuesStatisticsTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIssuesStatisticsTrendOutcome(rsp);
        else
            return DescribeIssuesStatisticsTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeIssuesStatisticsTrendOutcome(outcome.GetError());
    }
}

void RumClient::DescribeIssuesStatisticsTrendAsync(const DescribeIssuesStatisticsTrendRequest& request, const DescribeIssuesStatisticsTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIssuesStatisticsTrendRequest&;
    using Resp = DescribeIssuesStatisticsTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIssuesStatisticsTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeIssuesStatisticsTrendOutcomeCallable RumClient::DescribeIssuesStatisticsTrendCallable(const DescribeIssuesStatisticsTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIssuesStatisticsTrendOutcome>>();
    DescribeIssuesStatisticsTrendAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeIssuesStatisticsTrendRequest&,
        DescribeIssuesStatisticsTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeLagANRProblemAccountDetailOutcome RumClient::DescribeLagANRProblemAccountDetail(const DescribeLagANRProblemAccountDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLagANRProblemAccountDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLagANRProblemAccountDetailResponse rsp = DescribeLagANRProblemAccountDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLagANRProblemAccountDetailOutcome(rsp);
        else
            return DescribeLagANRProblemAccountDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeLagANRProblemAccountDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeLagANRProblemAccountDetailAsync(const DescribeLagANRProblemAccountDetailRequest& request, const DescribeLagANRProblemAccountDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLagANRProblemAccountDetailRequest&;
    using Resp = DescribeLagANRProblemAccountDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLagANRProblemAccountDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeLagANRProblemAccountDetailOutcomeCallable RumClient::DescribeLagANRProblemAccountDetailCallable(const DescribeLagANRProblemAccountDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLagANRProblemAccountDetailOutcome>>();
    DescribeLagANRProblemAccountDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeLagANRProblemAccountDetailRequest&,
        DescribeLagANRProblemAccountDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeLagANRProblemFeatureAccountsOutcome RumClient::DescribeLagANRProblemFeatureAccounts(const DescribeLagANRProblemFeatureAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLagANRProblemFeatureAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLagANRProblemFeatureAccountsResponse rsp = DescribeLagANRProblemFeatureAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLagANRProblemFeatureAccountsOutcome(rsp);
        else
            return DescribeLagANRProblemFeatureAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeLagANRProblemFeatureAccountsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeLagANRProblemFeatureAccountsAsync(const DescribeLagANRProblemFeatureAccountsRequest& request, const DescribeLagANRProblemFeatureAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLagANRProblemFeatureAccountsRequest&;
    using Resp = DescribeLagANRProblemFeatureAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLagANRProblemFeatureAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeLagANRProblemFeatureAccountsOutcomeCallable RumClient::DescribeLagANRProblemFeatureAccountsCallable(const DescribeLagANRProblemFeatureAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLagANRProblemFeatureAccountsOutcome>>();
    DescribeLagANRProblemFeatureAccountsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeLagANRProblemFeatureAccountsRequest&,
        DescribeLagANRProblemFeatureAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeLagANRProblemListOutcome RumClient::DescribeLagANRProblemList(const DescribeLagANRProblemListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLagANRProblemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLagANRProblemListResponse rsp = DescribeLagANRProblemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLagANRProblemListOutcome(rsp);
        else
            return DescribeLagANRProblemListOutcome(o.GetError());
    }
    else
    {
        return DescribeLagANRProblemListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeLagANRProblemListAsync(const DescribeLagANRProblemListRequest& request, const DescribeLagANRProblemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLagANRProblemListRequest&;
    using Resp = DescribeLagANRProblemListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLagANRProblemList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeLagANRProblemListOutcomeCallable RumClient::DescribeLagANRProblemListCallable(const DescribeLagANRProblemListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLagANRProblemListOutcome>>();
    DescribeLagANRProblemListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeLagANRProblemListRequest&,
        DescribeLagANRProblemListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeMiniProgramReplayPackOutcome RumClient::DescribeMiniProgramReplayPack(const DescribeMiniProgramReplayPackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMiniProgramReplayPack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMiniProgramReplayPackResponse rsp = DescribeMiniProgramReplayPackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMiniProgramReplayPackOutcome(rsp);
        else
            return DescribeMiniProgramReplayPackOutcome(o.GetError());
    }
    else
    {
        return DescribeMiniProgramReplayPackOutcome(outcome.GetError());
    }
}

void RumClient::DescribeMiniProgramReplayPackAsync(const DescribeMiniProgramReplayPackRequest& request, const DescribeMiniProgramReplayPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMiniProgramReplayPackRequest&;
    using Resp = DescribeMiniProgramReplayPackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMiniProgramReplayPack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeMiniProgramReplayPackOutcomeCallable RumClient::DescribeMiniProgramReplayPackCallable(const DescribeMiniProgramReplayPackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMiniProgramReplayPackOutcome>>();
    DescribeMiniProgramReplayPackAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeMiniProgramReplayPackRequest&,
        DescribeMiniProgramReplayPackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeMiniProgramReplayPacksOutcome RumClient::DescribeMiniProgramReplayPacks(const DescribeMiniProgramReplayPacksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMiniProgramReplayPacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMiniProgramReplayPacksResponse rsp = DescribeMiniProgramReplayPacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMiniProgramReplayPacksOutcome(rsp);
        else
            return DescribeMiniProgramReplayPacksOutcome(o.GetError());
    }
    else
    {
        return DescribeMiniProgramReplayPacksOutcome(outcome.GetError());
    }
}

void RumClient::DescribeMiniProgramReplayPacksAsync(const DescribeMiniProgramReplayPacksRequest& request, const DescribeMiniProgramReplayPacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMiniProgramReplayPacksRequest&;
    using Resp = DescribeMiniProgramReplayPacksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMiniProgramReplayPacks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeMiniProgramReplayPacksOutcomeCallable RumClient::DescribeMiniProgramReplayPacksCallable(const DescribeMiniProgramReplayPacksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMiniProgramReplayPacksOutcome>>();
    DescribeMiniProgramReplayPacksAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeMiniProgramReplayPacksRequest&,
        DescribeMiniProgramReplayPacksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribePerformanceMetricsOutcome RumClient::DescribePerformanceMetrics(const DescribePerformanceMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePerformanceMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePerformanceMetricsResponse rsp = DescribePerformanceMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePerformanceMetricsOutcome(rsp);
        else
            return DescribePerformanceMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribePerformanceMetricsOutcome(outcome.GetError());
    }
}

void RumClient::DescribePerformanceMetricsAsync(const DescribePerformanceMetricsRequest& request, const DescribePerformanceMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePerformanceMetricsRequest&;
    using Resp = DescribePerformanceMetricsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePerformanceMetrics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribePerformanceMetricsOutcomeCallable RumClient::DescribePerformanceMetricsCallable(const DescribePerformanceMetricsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePerformanceMetricsOutcome>>();
    DescribePerformanceMetricsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribePerformanceMetricsRequest&,
        DescribePerformanceMetricsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeProjectLimitsOutcome RumClient::DescribeProjectLimits(const DescribeProjectLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectLimitsResponse rsp = DescribeProjectLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectLimitsOutcome(rsp);
        else
            return DescribeProjectLimitsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectLimitsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeProjectLimitsAsync(const DescribeProjectLimitsRequest& request, const DescribeProjectLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectLimitsRequest&;
    using Resp = DescribeProjectLimitsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjectLimits", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeProjectLimitsOutcomeCallable RumClient::DescribeProjectLimitsCallable(const DescribeProjectLimitsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectLimitsOutcome>>();
    DescribeProjectLimitsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeProjectLimitsRequest&,
        DescribeProjectLimitsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeProjectsOutcome RumClient::DescribeProjects(const DescribeProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectsResponse rsp = DescribeProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectsOutcome(rsp);
        else
            return DescribeProjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectsRequest&;
    using Resp = DescribeProjectsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeProjectsOutcomeCallable RumClient::DescribeProjectsCallable(const DescribeProjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectsOutcome>>();
    DescribeProjectsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeProjectsRequest&,
        DescribeProjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribePvListOutcome RumClient::DescribePvList(const DescribePvListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePvList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePvListResponse rsp = DescribePvListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePvListOutcome(rsp);
        else
            return DescribePvListOutcome(o.GetError());
    }
    else
    {
        return DescribePvListOutcome(outcome.GetError());
    }
}

void RumClient::DescribePvListAsync(const DescribePvListRequest& request, const DescribePvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePvListRequest&;
    using Resp = DescribePvListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePvList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribePvListOutcomeCallable RumClient::DescribePvListCallable(const DescribePvListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePvListOutcome>>();
    DescribePvListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribePvListRequest&,
        DescribePvListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeReleaseFileSignOutcome RumClient::DescribeReleaseFileSign(const DescribeReleaseFileSignRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReleaseFileSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleaseFileSignResponse rsp = DescribeReleaseFileSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleaseFileSignOutcome(rsp);
        else
            return DescribeReleaseFileSignOutcome(o.GetError());
    }
    else
    {
        return DescribeReleaseFileSignOutcome(outcome.GetError());
    }
}

void RumClient::DescribeReleaseFileSignAsync(const DescribeReleaseFileSignRequest& request, const DescribeReleaseFileSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReleaseFileSignRequest&;
    using Resp = DescribeReleaseFileSignResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReleaseFileSign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeReleaseFileSignOutcomeCallable RumClient::DescribeReleaseFileSignCallable(const DescribeReleaseFileSignRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReleaseFileSignOutcome>>();
    DescribeReleaseFileSignAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeReleaseFileSignRequest&,
        DescribeReleaseFileSignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeReleaseFilesOutcome RumClient::DescribeReleaseFiles(const DescribeReleaseFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReleaseFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleaseFilesResponse rsp = DescribeReleaseFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleaseFilesOutcome(rsp);
        else
            return DescribeReleaseFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeReleaseFilesOutcome(outcome.GetError());
    }
}

void RumClient::DescribeReleaseFilesAsync(const DescribeReleaseFilesRequest& request, const DescribeReleaseFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReleaseFilesRequest&;
    using Resp = DescribeReleaseFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReleaseFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeReleaseFilesOutcomeCallable RumClient::DescribeReleaseFilesCallable(const DescribeReleaseFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReleaseFilesOutcome>>();
    DescribeReleaseFilesAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeReleaseFilesRequest&,
        DescribeReleaseFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeReplayDataOutcome RumClient::DescribeReplayData(const DescribeReplayDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReplayData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReplayDataResponse rsp = DescribeReplayDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReplayDataOutcome(rsp);
        else
            return DescribeReplayDataOutcome(o.GetError());
    }
    else
    {
        return DescribeReplayDataOutcome(outcome.GetError());
    }
}

void RumClient::DescribeReplayDataAsync(const DescribeReplayDataRequest& request, const DescribeReplayDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReplayDataRequest&;
    using Resp = DescribeReplayDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReplayData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeReplayDataOutcomeCallable RumClient::DescribeReplayDataCallable(const DescribeReplayDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReplayDataOutcome>>();
    DescribeReplayDataAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeReplayDataRequest&,
        DescribeReplayDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeReplayDetailsOutcome RumClient::DescribeReplayDetails(const DescribeReplayDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReplayDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReplayDetailsResponse rsp = DescribeReplayDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReplayDetailsOutcome(rsp);
        else
            return DescribeReplayDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeReplayDetailsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeReplayDetailsAsync(const DescribeReplayDetailsRequest& request, const DescribeReplayDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReplayDetailsRequest&;
    using Resp = DescribeReplayDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReplayDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeReplayDetailsOutcomeCallable RumClient::DescribeReplayDetailsCallable(const DescribeReplayDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReplayDetailsOutcome>>();
    DescribeReplayDetailsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeReplayDetailsRequest&,
        DescribeReplayDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeReplayMetaOutcome RumClient::DescribeReplayMeta(const DescribeReplayMetaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReplayMeta");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReplayMetaResponse rsp = DescribeReplayMetaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReplayMetaOutcome(rsp);
        else
            return DescribeReplayMetaOutcome(o.GetError());
    }
    else
    {
        return DescribeReplayMetaOutcome(outcome.GetError());
    }
}

void RumClient::DescribeReplayMetaAsync(const DescribeReplayMetaRequest& request, const DescribeReplayMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReplayMetaRequest&;
    using Resp = DescribeReplayMetaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReplayMeta", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeReplayMetaOutcomeCallable RumClient::DescribeReplayMetaCallable(const DescribeReplayMetaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReplayMetaOutcome>>();
    DescribeReplayMetaAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeReplayMetaRequest&,
        DescribeReplayMetaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumGroupLogOutcome RumClient::DescribeRumGroupLog(const DescribeRumGroupLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRumGroupLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumGroupLogResponse rsp = DescribeRumGroupLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumGroupLogOutcome(rsp);
        else
            return DescribeRumGroupLogOutcome(o.GetError());
    }
    else
    {
        return DescribeRumGroupLogOutcome(outcome.GetError());
    }
}

void RumClient::DescribeRumGroupLogAsync(const DescribeRumGroupLogRequest& request, const DescribeRumGroupLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumGroupLogRequest&;
    using Resp = DescribeRumGroupLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRumGroupLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumGroupLogOutcomeCallable RumClient::DescribeRumGroupLogCallable(const DescribeRumGroupLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumGroupLogOutcome>>();
    DescribeRumGroupLogAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeRumGroupLogRequest&,
        DescribeRumGroupLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumGroupLogV2Outcome RumClient::DescribeRumGroupLogV2(const DescribeRumGroupLogV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeRumGroupLogV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumGroupLogV2Response rsp = DescribeRumGroupLogV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumGroupLogV2Outcome(rsp);
        else
            return DescribeRumGroupLogV2Outcome(o.GetError());
    }
    else
    {
        return DescribeRumGroupLogV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeRumGroupLogV2Async(const DescribeRumGroupLogV2Request& request, const DescribeRumGroupLogV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumGroupLogV2Request&;
    using Resp = DescribeRumGroupLogV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeRumGroupLogV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumGroupLogV2OutcomeCallable RumClient::DescribeRumGroupLogV2Callable(const DescribeRumGroupLogV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumGroupLogV2Outcome>>();
    DescribeRumGroupLogV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeRumGroupLogV2Request&,
        DescribeRumGroupLogV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumLogDetailsV2Outcome RumClient::DescribeRumLogDetailsV2(const DescribeRumLogDetailsV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeRumLogDetailsV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumLogDetailsV2Response rsp = DescribeRumLogDetailsV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumLogDetailsV2Outcome(rsp);
        else
            return DescribeRumLogDetailsV2Outcome(o.GetError());
    }
    else
    {
        return DescribeRumLogDetailsV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeRumLogDetailsV2Async(const DescribeRumLogDetailsV2Request& request, const DescribeRumLogDetailsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumLogDetailsV2Request&;
    using Resp = DescribeRumLogDetailsV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeRumLogDetailsV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumLogDetailsV2OutcomeCallable RumClient::DescribeRumLogDetailsV2Callable(const DescribeRumLogDetailsV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumLogDetailsV2Outcome>>();
    DescribeRumLogDetailsV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeRumLogDetailsV2Request&,
        DescribeRumLogDetailsV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumLogExportOutcome RumClient::DescribeRumLogExport(const DescribeRumLogExportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRumLogExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumLogExportResponse rsp = DescribeRumLogExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumLogExportOutcome(rsp);
        else
            return DescribeRumLogExportOutcome(o.GetError());
    }
    else
    {
        return DescribeRumLogExportOutcome(outcome.GetError());
    }
}

void RumClient::DescribeRumLogExportAsync(const DescribeRumLogExportRequest& request, const DescribeRumLogExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumLogExportRequest&;
    using Resp = DescribeRumLogExportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRumLogExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumLogExportOutcomeCallable RumClient::DescribeRumLogExportCallable(const DescribeRumLogExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumLogExportOutcome>>();
    DescribeRumLogExportAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeRumLogExportRequest&,
        DescribeRumLogExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumLogExportV2Outcome RumClient::DescribeRumLogExportV2(const DescribeRumLogExportV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeRumLogExportV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumLogExportV2Response rsp = DescribeRumLogExportV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumLogExportV2Outcome(rsp);
        else
            return DescribeRumLogExportV2Outcome(o.GetError());
    }
    else
    {
        return DescribeRumLogExportV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeRumLogExportV2Async(const DescribeRumLogExportV2Request& request, const DescribeRumLogExportV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumLogExportV2Request&;
    using Resp = DescribeRumLogExportV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeRumLogExportV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumLogExportV2OutcomeCallable RumClient::DescribeRumLogExportV2Callable(const DescribeRumLogExportV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumLogExportV2Outcome>>();
    DescribeRumLogExportV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeRumLogExportV2Request&,
        DescribeRumLogExportV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumLogExportsOutcome RumClient::DescribeRumLogExports(const DescribeRumLogExportsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRumLogExports");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumLogExportsResponse rsp = DescribeRumLogExportsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumLogExportsOutcome(rsp);
        else
            return DescribeRumLogExportsOutcome(o.GetError());
    }
    else
    {
        return DescribeRumLogExportsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeRumLogExportsAsync(const DescribeRumLogExportsRequest& request, const DescribeRumLogExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumLogExportsRequest&;
    using Resp = DescribeRumLogExportsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRumLogExports", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumLogExportsOutcomeCallable RumClient::DescribeRumLogExportsCallable(const DescribeRumLogExportsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumLogExportsOutcome>>();
    DescribeRumLogExportsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeRumLogExportsRequest&,
        DescribeRumLogExportsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumLogExportsV2Outcome RumClient::DescribeRumLogExportsV2(const DescribeRumLogExportsV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeRumLogExportsV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumLogExportsV2Response rsp = DescribeRumLogExportsV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumLogExportsV2Outcome(rsp);
        else
            return DescribeRumLogExportsV2Outcome(o.GetError());
    }
    else
    {
        return DescribeRumLogExportsV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeRumLogExportsV2Async(const DescribeRumLogExportsV2Request& request, const DescribeRumLogExportsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumLogExportsV2Request&;
    using Resp = DescribeRumLogExportsV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeRumLogExportsV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumLogExportsV2OutcomeCallable RumClient::DescribeRumLogExportsV2Callable(const DescribeRumLogExportsV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumLogExportsV2Outcome>>();
    DescribeRumLogExportsV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeRumLogExportsV2Request&,
        DescribeRumLogExportsV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumLogListOutcome RumClient::DescribeRumLogList(const DescribeRumLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRumLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumLogListResponse rsp = DescribeRumLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumLogListOutcome(rsp);
        else
            return DescribeRumLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeRumLogListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeRumLogListAsync(const DescribeRumLogListRequest& request, const DescribeRumLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumLogListRequest&;
    using Resp = DescribeRumLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRumLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumLogListOutcomeCallable RumClient::DescribeRumLogListCallable(const DescribeRumLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumLogListOutcome>>();
    DescribeRumLogListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeRumLogListRequest&,
        DescribeRumLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumLogTotalV2Outcome RumClient::DescribeRumLogTotalV2(const DescribeRumLogTotalV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeRumLogTotalV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumLogTotalV2Response rsp = DescribeRumLogTotalV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumLogTotalV2Outcome(rsp);
        else
            return DescribeRumLogTotalV2Outcome(o.GetError());
    }
    else
    {
        return DescribeRumLogTotalV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeRumLogTotalV2Async(const DescribeRumLogTotalV2Request& request, const DescribeRumLogTotalV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumLogTotalV2Request&;
    using Resp = DescribeRumLogTotalV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeRumLogTotalV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumLogTotalV2OutcomeCallable RumClient::DescribeRumLogTotalV2Callable(const DescribeRumLogTotalV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumLogTotalV2Outcome>>();
    DescribeRumLogTotalV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeRumLogTotalV2Request&,
        DescribeRumLogTotalV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumStatsLogListOutcome RumClient::DescribeRumStatsLogList(const DescribeRumStatsLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRumStatsLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumStatsLogListResponse rsp = DescribeRumStatsLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumStatsLogListOutcome(rsp);
        else
            return DescribeRumStatsLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeRumStatsLogListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeRumStatsLogListAsync(const DescribeRumStatsLogListRequest& request, const DescribeRumStatsLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumStatsLogListRequest&;
    using Resp = DescribeRumStatsLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRumStatsLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumStatsLogListOutcomeCallable RumClient::DescribeRumStatsLogListCallable(const DescribeRumStatsLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumStatsLogListOutcome>>();
    DescribeRumStatsLogListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeRumStatsLogListRequest&,
        DescribeRumStatsLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeRumStatsLogListV2Outcome RumClient::DescribeRumStatsLogListV2(const DescribeRumStatsLogListV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeRumStatsLogListV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRumStatsLogListV2Response rsp = DescribeRumStatsLogListV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRumStatsLogListV2Outcome(rsp);
        else
            return DescribeRumStatsLogListV2Outcome(o.GetError());
    }
    else
    {
        return DescribeRumStatsLogListV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeRumStatsLogListV2Async(const DescribeRumStatsLogListV2Request& request, const DescribeRumStatsLogListV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRumStatsLogListV2Request&;
    using Resp = DescribeRumStatsLogListV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeRumStatsLogListV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeRumStatsLogListV2OutcomeCallable RumClient::DescribeRumStatsLogListV2Callable(const DescribeRumStatsLogListV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRumStatsLogListV2Outcome>>();
    DescribeRumStatsLogListV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeRumStatsLogListV2Request&,
        DescribeRumStatsLogListV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeSampleRateOutcome RumClient::DescribeSampleRate(const DescribeSampleRateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSampleRate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSampleRateResponse rsp = DescribeSampleRateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSampleRateOutcome(rsp);
        else
            return DescribeSampleRateOutcome(o.GetError());
    }
    else
    {
        return DescribeSampleRateOutcome(outcome.GetError());
    }
}

void RumClient::DescribeSampleRateAsync(const DescribeSampleRateRequest& request, const DescribeSampleRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSampleRateRequest&;
    using Resp = DescribeSampleRateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSampleRate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeSampleRateOutcomeCallable RumClient::DescribeSampleRateCallable(const DescribeSampleRateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSampleRateOutcome>>();
    DescribeSampleRateAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeSampleRateRequest&,
        DescribeSampleRateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeScoresOutcome RumClient::DescribeScores(const DescribeScoresRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScores");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScoresResponse rsp = DescribeScoresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScoresOutcome(rsp);
        else
            return DescribeScoresOutcome(o.GetError());
    }
    else
    {
        return DescribeScoresOutcome(outcome.GetError());
    }
}

void RumClient::DescribeScoresAsync(const DescribeScoresRequest& request, const DescribeScoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScoresRequest&;
    using Resp = DescribeScoresResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScores", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeScoresOutcomeCallable RumClient::DescribeScoresCallable(const DescribeScoresRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScoresOutcome>>();
    DescribeScoresAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeScoresRequest&,
        DescribeScoresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeScoresV2Outcome RumClient::DescribeScoresV2(const DescribeScoresV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeScoresV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScoresV2Response rsp = DescribeScoresV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScoresV2Outcome(rsp);
        else
            return DescribeScoresV2Outcome(o.GetError());
    }
    else
    {
        return DescribeScoresV2Outcome(outcome.GetError());
    }
}

void RumClient::DescribeScoresV2Async(const DescribeScoresV2Request& request, const DescribeScoresV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScoresV2Request&;
    using Resp = DescribeScoresV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeScoresV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeScoresV2OutcomeCallable RumClient::DescribeScoresV2Callable(const DescribeScoresV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScoresV2Outcome>>();
    DescribeScoresV2Async(
    request,
    [prom](
        const RumClient*,
        const DescribeScoresV2Request&,
        DescribeScoresV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeSessionListOutcome RumClient::DescribeSessionList(const DescribeSessionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSessionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSessionListResponse rsp = DescribeSessionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSessionListOutcome(rsp);
        else
            return DescribeSessionListOutcome(o.GetError());
    }
    else
    {
        return DescribeSessionListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeSessionListAsync(const DescribeSessionListRequest& request, const DescribeSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSessionListRequest&;
    using Resp = DescribeSessionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSessionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeSessionListOutcomeCallable RumClient::DescribeSessionListCallable(const DescribeSessionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSessionListOutcome>>();
    DescribeSessionListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeSessionListRequest&,
        DescribeSessionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeStruggleDistributionOutcome RumClient::DescribeStruggleDistribution(const DescribeStruggleDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStruggleDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStruggleDistributionResponse rsp = DescribeStruggleDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStruggleDistributionOutcome(rsp);
        else
            return DescribeStruggleDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeStruggleDistributionOutcome(outcome.GetError());
    }
}

void RumClient::DescribeStruggleDistributionAsync(const DescribeStruggleDistributionRequest& request, const DescribeStruggleDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStruggleDistributionRequest&;
    using Resp = DescribeStruggleDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStruggleDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeStruggleDistributionOutcomeCallable RumClient::DescribeStruggleDistributionCallable(const DescribeStruggleDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStruggleDistributionOutcome>>();
    DescribeStruggleDistributionAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeStruggleDistributionRequest&,
        DescribeStruggleDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeSymbolArtifactUploadCredentialOutcome RumClient::DescribeSymbolArtifactUploadCredential(const DescribeSymbolArtifactUploadCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSymbolArtifactUploadCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSymbolArtifactUploadCredentialResponse rsp = DescribeSymbolArtifactUploadCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSymbolArtifactUploadCredentialOutcome(rsp);
        else
            return DescribeSymbolArtifactUploadCredentialOutcome(o.GetError());
    }
    else
    {
        return DescribeSymbolArtifactUploadCredentialOutcome(outcome.GetError());
    }
}

void RumClient::DescribeSymbolArtifactUploadCredentialAsync(const DescribeSymbolArtifactUploadCredentialRequest& request, const DescribeSymbolArtifactUploadCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSymbolArtifactUploadCredentialRequest&;
    using Resp = DescribeSymbolArtifactUploadCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSymbolArtifactUploadCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeSymbolArtifactUploadCredentialOutcomeCallable RumClient::DescribeSymbolArtifactUploadCredentialCallable(const DescribeSymbolArtifactUploadCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSymbolArtifactUploadCredentialOutcome>>();
    DescribeSymbolArtifactUploadCredentialAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeSymbolArtifactUploadCredentialRequest&,
        DescribeSymbolArtifactUploadCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeSymbolArtifactsOutcome RumClient::DescribeSymbolArtifacts(const DescribeSymbolArtifactsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSymbolArtifacts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSymbolArtifactsResponse rsp = DescribeSymbolArtifactsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSymbolArtifactsOutcome(rsp);
        else
            return DescribeSymbolArtifactsOutcome(o.GetError());
    }
    else
    {
        return DescribeSymbolArtifactsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeSymbolArtifactsAsync(const DescribeSymbolArtifactsRequest& request, const DescribeSymbolArtifactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSymbolArtifactsRequest&;
    using Resp = DescribeSymbolArtifactsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSymbolArtifacts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeSymbolArtifactsOutcomeCallable RumClient::DescribeSymbolArtifactsCallable(const DescribeSymbolArtifactsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSymbolArtifactsOutcome>>();
    DescribeSymbolArtifactsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeSymbolArtifactsRequest&,
        DescribeSymbolArtifactsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMApplicationsOutcome RumClient::DescribeTDEMApplications(const DescribeTDEMApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMApplicationsResponse rsp = DescribeTDEMApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMApplicationsOutcome(rsp);
        else
            return DescribeTDEMApplicationsOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMApplicationsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMApplicationsAsync(const DescribeTDEMApplicationsRequest& request, const DescribeTDEMApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMApplicationsRequest&;
    using Resp = DescribeTDEMApplicationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMApplications", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMApplicationsOutcomeCallable RumClient::DescribeTDEMApplicationsCallable(const DescribeTDEMApplicationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMApplicationsOutcome>>();
    DescribeTDEMApplicationsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMApplicationsRequest&,
        DescribeTDEMApplicationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMBusinessSystemsOutcome RumClient::DescribeTDEMBusinessSystems(const DescribeTDEMBusinessSystemsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMBusinessSystems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMBusinessSystemsResponse rsp = DescribeTDEMBusinessSystemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMBusinessSystemsOutcome(rsp);
        else
            return DescribeTDEMBusinessSystemsOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMBusinessSystemsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMBusinessSystemsAsync(const DescribeTDEMBusinessSystemsRequest& request, const DescribeTDEMBusinessSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMBusinessSystemsRequest&;
    using Resp = DescribeTDEMBusinessSystemsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMBusinessSystems", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMBusinessSystemsOutcomeCallable RumClient::DescribeTDEMBusinessSystemsCallable(const DescribeTDEMBusinessSystemsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMBusinessSystemsOutcome>>();
    DescribeTDEMBusinessSystemsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMBusinessSystemsRequest&,
        DescribeTDEMBusinessSystemsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMDialDimensionsOutcome RumClient::DescribeTDEMDialDimensions(const DescribeTDEMDialDimensionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMDialDimensions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMDialDimensionsResponse rsp = DescribeTDEMDialDimensionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMDialDimensionsOutcome(rsp);
        else
            return DescribeTDEMDialDimensionsOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMDialDimensionsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMDialDimensionsAsync(const DescribeTDEMDialDimensionsRequest& request, const DescribeTDEMDialDimensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMDialDimensionsRequest&;
    using Resp = DescribeTDEMDialDimensionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMDialDimensions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMDialDimensionsOutcomeCallable RumClient::DescribeTDEMDialDimensionsCallable(const DescribeTDEMDialDimensionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMDialDimensionsOutcome>>();
    DescribeTDEMDialDimensionsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMDialDimensionsRequest&,
        DescribeTDEMDialDimensionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMDialExecutionDetailOutcome RumClient::DescribeTDEMDialExecutionDetail(const DescribeTDEMDialExecutionDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMDialExecutionDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMDialExecutionDetailResponse rsp = DescribeTDEMDialExecutionDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMDialExecutionDetailOutcome(rsp);
        else
            return DescribeTDEMDialExecutionDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMDialExecutionDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMDialExecutionDetailAsync(const DescribeTDEMDialExecutionDetailRequest& request, const DescribeTDEMDialExecutionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMDialExecutionDetailRequest&;
    using Resp = DescribeTDEMDialExecutionDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMDialExecutionDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMDialExecutionDetailOutcomeCallable RumClient::DescribeTDEMDialExecutionDetailCallable(const DescribeTDEMDialExecutionDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMDialExecutionDetailOutcome>>();
    DescribeTDEMDialExecutionDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMDialExecutionDetailRequest&,
        DescribeTDEMDialExecutionDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMDialExecutionListOutcome RumClient::DescribeTDEMDialExecutionList(const DescribeTDEMDialExecutionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMDialExecutionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMDialExecutionListResponse rsp = DescribeTDEMDialExecutionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMDialExecutionListOutcome(rsp);
        else
            return DescribeTDEMDialExecutionListOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMDialExecutionListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMDialExecutionListAsync(const DescribeTDEMDialExecutionListRequest& request, const DescribeTDEMDialExecutionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMDialExecutionListRequest&;
    using Resp = DescribeTDEMDialExecutionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMDialExecutionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMDialExecutionListOutcomeCallable RumClient::DescribeTDEMDialExecutionListCallable(const DescribeTDEMDialExecutionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMDialExecutionListOutcome>>();
    DescribeTDEMDialExecutionListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMDialExecutionListRequest&,
        DescribeTDEMDialExecutionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMDialOverviewOutcome RumClient::DescribeTDEMDialOverview(const DescribeTDEMDialOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMDialOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMDialOverviewResponse rsp = DescribeTDEMDialOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMDialOverviewOutcome(rsp);
        else
            return DescribeTDEMDialOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMDialOverviewOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMDialOverviewAsync(const DescribeTDEMDialOverviewRequest& request, const DescribeTDEMDialOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMDialOverviewRequest&;
    using Resp = DescribeTDEMDialOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMDialOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMDialOverviewOutcomeCallable RumClient::DescribeTDEMDialOverviewCallable(const DescribeTDEMDialOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMDialOverviewOutcome>>();
    DescribeTDEMDialOverviewAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMDialOverviewRequest&,
        DescribeTDEMDialOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMDialTasksOutcome RumClient::DescribeTDEMDialTasks(const DescribeTDEMDialTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMDialTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMDialTasksResponse rsp = DescribeTDEMDialTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMDialTasksOutcome(rsp);
        else
            return DescribeTDEMDialTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMDialTasksOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMDialTasksAsync(const DescribeTDEMDialTasksRequest& request, const DescribeTDEMDialTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMDialTasksRequest&;
    using Resp = DescribeTDEMDialTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMDialTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMDialTasksOutcomeCallable RumClient::DescribeTDEMDialTasksCallable(const DescribeTDEMDialTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMDialTasksOutcome>>();
    DescribeTDEMDialTasksAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMDialTasksRequest&,
        DescribeTDEMDialTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMDialTrendOutcome RumClient::DescribeTDEMDialTrend(const DescribeTDEMDialTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMDialTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMDialTrendResponse rsp = DescribeTDEMDialTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMDialTrendOutcome(rsp);
        else
            return DescribeTDEMDialTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMDialTrendOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMDialTrendAsync(const DescribeTDEMDialTrendRequest& request, const DescribeTDEMDialTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMDialTrendRequest&;
    using Resp = DescribeTDEMDialTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMDialTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMDialTrendOutcomeCallable RumClient::DescribeTDEMDialTrendCallable(const DescribeTDEMDialTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMDialTrendOutcome>>();
    DescribeTDEMDialTrendAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMDialTrendRequest&,
        DescribeTDEMDialTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMEventDetailOutcome RumClient::DescribeTDEMEventDetail(const DescribeTDEMEventDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMEventDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMEventDetailResponse rsp = DescribeTDEMEventDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMEventDetailOutcome(rsp);
        else
            return DescribeTDEMEventDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMEventDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMEventDetailAsync(const DescribeTDEMEventDetailRequest& request, const DescribeTDEMEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMEventDetailRequest&;
    using Resp = DescribeTDEMEventDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMEventDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMEventDetailOutcomeCallable RumClient::DescribeTDEMEventDetailCallable(const DescribeTDEMEventDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMEventDetailOutcome>>();
    DescribeTDEMEventDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMEventDetailRequest&,
        DescribeTDEMEventDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMEventRankOutcome RumClient::DescribeTDEMEventRank(const DescribeTDEMEventRankRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMEventRank");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMEventRankResponse rsp = DescribeTDEMEventRankResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMEventRankOutcome(rsp);
        else
            return DescribeTDEMEventRankOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMEventRankOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMEventRankAsync(const DescribeTDEMEventRankRequest& request, const DescribeTDEMEventRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMEventRankRequest&;
    using Resp = DescribeTDEMEventRankResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMEventRank", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMEventRankOutcomeCallable RumClient::DescribeTDEMEventRankCallable(const DescribeTDEMEventRankRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMEventRankOutcome>>();
    DescribeTDEMEventRankAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMEventRankRequest&,
        DescribeTDEMEventRankOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMEventSearchOutcome RumClient::DescribeTDEMEventSearch(const DescribeTDEMEventSearchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMEventSearch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMEventSearchResponse rsp = DescribeTDEMEventSearchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMEventSearchOutcome(rsp);
        else
            return DescribeTDEMEventSearchOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMEventSearchOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMEventSearchAsync(const DescribeTDEMEventSearchRequest& request, const DescribeTDEMEventSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMEventSearchRequest&;
    using Resp = DescribeTDEMEventSearchResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMEventSearch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMEventSearchOutcomeCallable RumClient::DescribeTDEMEventSearchCallable(const DescribeTDEMEventSearchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMEventSearchOutcome>>();
    DescribeTDEMEventSearchAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMEventSearchRequest&,
        DescribeTDEMEventSearchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMEventSearchSummaryOutcome RumClient::DescribeTDEMEventSearchSummary(const DescribeTDEMEventSearchSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMEventSearchSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMEventSearchSummaryResponse rsp = DescribeTDEMEventSearchSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMEventSearchSummaryOutcome(rsp);
        else
            return DescribeTDEMEventSearchSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMEventSearchSummaryOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMEventSearchSummaryAsync(const DescribeTDEMEventSearchSummaryRequest& request, const DescribeTDEMEventSearchSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMEventSearchSummaryRequest&;
    using Resp = DescribeTDEMEventSearchSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMEventSearchSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMEventSearchSummaryOutcomeCallable RumClient::DescribeTDEMEventSearchSummaryCallable(const DescribeTDEMEventSearchSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMEventSearchSummaryOutcome>>();
    DescribeTDEMEventSearchSummaryAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMEventSearchSummaryRequest&,
        DescribeTDEMEventSearchSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMFieldTransformRulesOutcome RumClient::DescribeTDEMFieldTransformRules(const DescribeTDEMFieldTransformRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMFieldTransformRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMFieldTransformRulesResponse rsp = DescribeTDEMFieldTransformRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMFieldTransformRulesOutcome(rsp);
        else
            return DescribeTDEMFieldTransformRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMFieldTransformRulesOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMFieldTransformRulesAsync(const DescribeTDEMFieldTransformRulesRequest& request, const DescribeTDEMFieldTransformRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMFieldTransformRulesRequest&;
    using Resp = DescribeTDEMFieldTransformRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMFieldTransformRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMFieldTransformRulesOutcomeCallable RumClient::DescribeTDEMFieldTransformRulesCallable(const DescribeTDEMFieldTransformRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMFieldTransformRulesOutcome>>();
    DescribeTDEMFieldTransformRulesAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMFieldTransformRulesRequest&,
        DescribeTDEMFieldTransformRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMFunnelDetailOutcome RumClient::DescribeTDEMFunnelDetail(const DescribeTDEMFunnelDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMFunnelDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMFunnelDetailResponse rsp = DescribeTDEMFunnelDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMFunnelDetailOutcome(rsp);
        else
            return DescribeTDEMFunnelDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMFunnelDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMFunnelDetailAsync(const DescribeTDEMFunnelDetailRequest& request, const DescribeTDEMFunnelDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMFunnelDetailRequest&;
    using Resp = DescribeTDEMFunnelDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMFunnelDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMFunnelDetailOutcomeCallable RumClient::DescribeTDEMFunnelDetailCallable(const DescribeTDEMFunnelDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMFunnelDetailOutcome>>();
    DescribeTDEMFunnelDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMFunnelDetailRequest&,
        DescribeTDEMFunnelDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMFunnelDimensionsOutcome RumClient::DescribeTDEMFunnelDimensions(const DescribeTDEMFunnelDimensionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMFunnelDimensions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMFunnelDimensionsResponse rsp = DescribeTDEMFunnelDimensionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMFunnelDimensionsOutcome(rsp);
        else
            return DescribeTDEMFunnelDimensionsOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMFunnelDimensionsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMFunnelDimensionsAsync(const DescribeTDEMFunnelDimensionsRequest& request, const DescribeTDEMFunnelDimensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMFunnelDimensionsRequest&;
    using Resp = DescribeTDEMFunnelDimensionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMFunnelDimensions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMFunnelDimensionsOutcomeCallable RumClient::DescribeTDEMFunnelDimensionsCallable(const DescribeTDEMFunnelDimensionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMFunnelDimensionsOutcome>>();
    DescribeTDEMFunnelDimensionsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMFunnelDimensionsRequest&,
        DescribeTDEMFunnelDimensionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMFunnelListOutcome RumClient::DescribeTDEMFunnelList(const DescribeTDEMFunnelListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMFunnelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMFunnelListResponse rsp = DescribeTDEMFunnelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMFunnelListOutcome(rsp);
        else
            return DescribeTDEMFunnelListOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMFunnelListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMFunnelListAsync(const DescribeTDEMFunnelListRequest& request, const DescribeTDEMFunnelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMFunnelListRequest&;
    using Resp = DescribeTDEMFunnelListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMFunnelList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMFunnelListOutcomeCallable RumClient::DescribeTDEMFunnelListCallable(const DescribeTDEMFunnelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMFunnelListOutcome>>();
    DescribeTDEMFunnelListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMFunnelListRequest&,
        DescribeTDEMFunnelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMFunnelReportOutcome RumClient::DescribeTDEMFunnelReport(const DescribeTDEMFunnelReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMFunnelReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMFunnelReportResponse rsp = DescribeTDEMFunnelReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMFunnelReportOutcome(rsp);
        else
            return DescribeTDEMFunnelReportOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMFunnelReportOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMFunnelReportAsync(const DescribeTDEMFunnelReportRequest& request, const DescribeTDEMFunnelReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMFunnelReportRequest&;
    using Resp = DescribeTDEMFunnelReportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMFunnelReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMFunnelReportOutcomeCallable RumClient::DescribeTDEMFunnelReportCallable(const DescribeTDEMFunnelReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMFunnelReportOutcome>>();
    DescribeTDEMFunnelReportAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMFunnelReportRequest&,
        DescribeTDEMFunnelReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMFunnelStepSessionListOutcome RumClient::DescribeTDEMFunnelStepSessionList(const DescribeTDEMFunnelStepSessionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMFunnelStepSessionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMFunnelStepSessionListResponse rsp = DescribeTDEMFunnelStepSessionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMFunnelStepSessionListOutcome(rsp);
        else
            return DescribeTDEMFunnelStepSessionListOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMFunnelStepSessionListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMFunnelStepSessionListAsync(const DescribeTDEMFunnelStepSessionListRequest& request, const DescribeTDEMFunnelStepSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMFunnelStepSessionListRequest&;
    using Resp = DescribeTDEMFunnelStepSessionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMFunnelStepSessionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMFunnelStepSessionListOutcomeCallable RumClient::DescribeTDEMFunnelStepSessionListCallable(const DescribeTDEMFunnelStepSessionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMFunnelStepSessionListOutcome>>();
    DescribeTDEMFunnelStepSessionListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMFunnelStepSessionListRequest&,
        DescribeTDEMFunnelStepSessionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMFunnelTrendOutcome RumClient::DescribeTDEMFunnelTrend(const DescribeTDEMFunnelTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMFunnelTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMFunnelTrendResponse rsp = DescribeTDEMFunnelTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMFunnelTrendOutcome(rsp);
        else
            return DescribeTDEMFunnelTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMFunnelTrendOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMFunnelTrendAsync(const DescribeTDEMFunnelTrendRequest& request, const DescribeTDEMFunnelTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMFunnelTrendRequest&;
    using Resp = DescribeTDEMFunnelTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMFunnelTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMFunnelTrendOutcomeCallable RumClient::DescribeTDEMFunnelTrendCallable(const DescribeTDEMFunnelTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMFunnelTrendOutcome>>();
    DescribeTDEMFunnelTrendAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMFunnelTrendRequest&,
        DescribeTDEMFunnelTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMMetricDistributionOutcome RumClient::DescribeTDEMMetricDistribution(const DescribeTDEMMetricDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMMetricDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMMetricDistributionResponse rsp = DescribeTDEMMetricDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMMetricDistributionOutcome(rsp);
        else
            return DescribeTDEMMetricDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMMetricDistributionOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMMetricDistributionAsync(const DescribeTDEMMetricDistributionRequest& request, const DescribeTDEMMetricDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMMetricDistributionRequest&;
    using Resp = DescribeTDEMMetricDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMMetricDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMMetricDistributionOutcomeCallable RumClient::DescribeTDEMMetricDistributionCallable(const DescribeTDEMMetricDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMMetricDistributionOutcome>>();
    DescribeTDEMMetricDistributionAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMMetricDistributionRequest&,
        DescribeTDEMMetricDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMMetricSummaryOutcome RumClient::DescribeTDEMMetricSummary(const DescribeTDEMMetricSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMMetricSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMMetricSummaryResponse rsp = DescribeTDEMMetricSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMMetricSummaryOutcome(rsp);
        else
            return DescribeTDEMMetricSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMMetricSummaryOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMMetricSummaryAsync(const DescribeTDEMMetricSummaryRequest& request, const DescribeTDEMMetricSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMMetricSummaryRequest&;
    using Resp = DescribeTDEMMetricSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMMetricSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMMetricSummaryOutcomeCallable RumClient::DescribeTDEMMetricSummaryCallable(const DescribeTDEMMetricSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMMetricSummaryOutcome>>();
    DescribeTDEMMetricSummaryAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMMetricSummaryRequest&,
        DescribeTDEMMetricSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMMetricTrendOutcome RumClient::DescribeTDEMMetricTrend(const DescribeTDEMMetricTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMMetricTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMMetricTrendResponse rsp = DescribeTDEMMetricTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMMetricTrendOutcome(rsp);
        else
            return DescribeTDEMMetricTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMMetricTrendOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMMetricTrendAsync(const DescribeTDEMMetricTrendRequest& request, const DescribeTDEMMetricTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMMetricTrendRequest&;
    using Resp = DescribeTDEMMetricTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMMetricTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMMetricTrendOutcomeCallable RumClient::DescribeTDEMMetricTrendCallable(const DescribeTDEMMetricTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMMetricTrendOutcome>>();
    DescribeTDEMMetricTrendAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMMetricTrendRequest&,
        DescribeTDEMMetricTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMOverviewScoresOutcome RumClient::DescribeTDEMOverviewScores(const DescribeTDEMOverviewScoresRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMOverviewScores");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMOverviewScoresResponse rsp = DescribeTDEMOverviewScoresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMOverviewScoresOutcome(rsp);
        else
            return DescribeTDEMOverviewScoresOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMOverviewScoresOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMOverviewScoresAsync(const DescribeTDEMOverviewScoresRequest& request, const DescribeTDEMOverviewScoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMOverviewScoresRequest&;
    using Resp = DescribeTDEMOverviewScoresResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMOverviewScores", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMOverviewScoresOutcomeCallable RumClient::DescribeTDEMOverviewScoresCallable(const DescribeTDEMOverviewScoresRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMOverviewScoresOutcome>>();
    DescribeTDEMOverviewScoresAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMOverviewScoresRequest&,
        DescribeTDEMOverviewScoresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMRelatedEventsOutcome RumClient::DescribeTDEMRelatedEvents(const DescribeTDEMRelatedEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMRelatedEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMRelatedEventsResponse rsp = DescribeTDEMRelatedEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMRelatedEventsOutcome(rsp);
        else
            return DescribeTDEMRelatedEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMRelatedEventsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMRelatedEventsAsync(const DescribeTDEMRelatedEventsRequest& request, const DescribeTDEMRelatedEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMRelatedEventsRequest&;
    using Resp = DescribeTDEMRelatedEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMRelatedEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMRelatedEventsOutcomeCallable RumClient::DescribeTDEMRelatedEventsCallable(const DescribeTDEMRelatedEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMRelatedEventsOutcome>>();
    DescribeTDEMRelatedEventsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMRelatedEventsRequest&,
        DescribeTDEMRelatedEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMSSEDimensionsOutcome RumClient::DescribeTDEMSSEDimensions(const DescribeTDEMSSEDimensionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMSSEDimensions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMSSEDimensionsResponse rsp = DescribeTDEMSSEDimensionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMSSEDimensionsOutcome(rsp);
        else
            return DescribeTDEMSSEDimensionsOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMSSEDimensionsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMSSEDimensionsAsync(const DescribeTDEMSSEDimensionsRequest& request, const DescribeTDEMSSEDimensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMSSEDimensionsRequest&;
    using Resp = DescribeTDEMSSEDimensionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMSSEDimensions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMSSEDimensionsOutcomeCallable RumClient::DescribeTDEMSSEDimensionsCallable(const DescribeTDEMSSEDimensionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMSSEDimensionsOutcome>>();
    DescribeTDEMSSEDimensionsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMSSEDimensionsRequest&,
        DescribeTDEMSSEDimensionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMSSEDistributionOutcome RumClient::DescribeTDEMSSEDistribution(const DescribeTDEMSSEDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMSSEDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMSSEDistributionResponse rsp = DescribeTDEMSSEDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMSSEDistributionOutcome(rsp);
        else
            return DescribeTDEMSSEDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMSSEDistributionOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMSSEDistributionAsync(const DescribeTDEMSSEDistributionRequest& request, const DescribeTDEMSSEDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMSSEDistributionRequest&;
    using Resp = DescribeTDEMSSEDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMSSEDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMSSEDistributionOutcomeCallable RumClient::DescribeTDEMSSEDistributionCallable(const DescribeTDEMSSEDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMSSEDistributionOutcome>>();
    DescribeTDEMSSEDistributionAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMSSEDistributionRequest&,
        DescribeTDEMSSEDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMSSEPercentileOutcome RumClient::DescribeTDEMSSEPercentile(const DescribeTDEMSSEPercentileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMSSEPercentile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMSSEPercentileResponse rsp = DescribeTDEMSSEPercentileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMSSEPercentileOutcome(rsp);
        else
            return DescribeTDEMSSEPercentileOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMSSEPercentileOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMSSEPercentileAsync(const DescribeTDEMSSEPercentileRequest& request, const DescribeTDEMSSEPercentileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMSSEPercentileRequest&;
    using Resp = DescribeTDEMSSEPercentileResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMSSEPercentile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMSSEPercentileOutcomeCallable RumClient::DescribeTDEMSSEPercentileCallable(const DescribeTDEMSSEPercentileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMSSEPercentileOutcome>>();
    DescribeTDEMSSEPercentileAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMSSEPercentileRequest&,
        DescribeTDEMSSEPercentileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMSSESummaryOutcome RumClient::DescribeTDEMSSESummary(const DescribeTDEMSSESummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMSSESummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMSSESummaryResponse rsp = DescribeTDEMSSESummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMSSESummaryOutcome(rsp);
        else
            return DescribeTDEMSSESummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMSSESummaryOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMSSESummaryAsync(const DescribeTDEMSSESummaryRequest& request, const DescribeTDEMSSESummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMSSESummaryRequest&;
    using Resp = DescribeTDEMSSESummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMSSESummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMSSESummaryOutcomeCallable RumClient::DescribeTDEMSSESummaryCallable(const DescribeTDEMSSESummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMSSESummaryOutcome>>();
    DescribeTDEMSSESummaryAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMSSESummaryRequest&,
        DescribeTDEMSSESummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMSSETrendOutcome RumClient::DescribeTDEMSSETrend(const DescribeTDEMSSETrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMSSETrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMSSETrendResponse rsp = DescribeTDEMSSETrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMSSETrendOutcome(rsp);
        else
            return DescribeTDEMSSETrendOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMSSETrendOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMSSETrendAsync(const DescribeTDEMSSETrendRequest& request, const DescribeTDEMSSETrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMSSETrendRequest&;
    using Resp = DescribeTDEMSSETrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMSSETrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMSSETrendOutcomeCallable RumClient::DescribeTDEMSSETrendCallable(const DescribeTDEMSSETrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMSSETrendOutcome>>();
    DescribeTDEMSSETrendAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMSSETrendRequest&,
        DescribeTDEMSSETrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMSampleConfigOutcome RumClient::DescribeTDEMSampleConfig(const DescribeTDEMSampleConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMSampleConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMSampleConfigResponse rsp = DescribeTDEMSampleConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMSampleConfigOutcome(rsp);
        else
            return DescribeTDEMSampleConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMSampleConfigOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMSampleConfigAsync(const DescribeTDEMSampleConfigRequest& request, const DescribeTDEMSampleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMSampleConfigRequest&;
    using Resp = DescribeTDEMSampleConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMSampleConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMSampleConfigOutcomeCallable RumClient::DescribeTDEMSampleConfigCallable(const DescribeTDEMSampleConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMSampleConfigOutcome>>();
    DescribeTDEMSampleConfigAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMSampleConfigRequest&,
        DescribeTDEMSampleConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMSampleRateOutcome RumClient::DescribeTDEMSampleRate(const DescribeTDEMSampleRateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMSampleRate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMSampleRateResponse rsp = DescribeTDEMSampleRateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMSampleRateOutcome(rsp);
        else
            return DescribeTDEMSampleRateOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMSampleRateOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMSampleRateAsync(const DescribeTDEMSampleRateRequest& request, const DescribeTDEMSampleRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMSampleRateRequest&;
    using Resp = DescribeTDEMSampleRateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMSampleRate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMSampleRateOutcomeCallable RumClient::DescribeTDEMSampleRateCallable(const DescribeTDEMSampleRateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMSampleRateOutcome>>();
    DescribeTDEMSampleRateAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMSampleRateRequest&,
        DescribeTDEMSampleRateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMSessionReplayTimelineOutcome RumClient::DescribeTDEMSessionReplayTimeline(const DescribeTDEMSessionReplayTimelineRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMSessionReplayTimeline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMSessionReplayTimelineResponse rsp = DescribeTDEMSessionReplayTimelineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMSessionReplayTimelineOutcome(rsp);
        else
            return DescribeTDEMSessionReplayTimelineOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMSessionReplayTimelineOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMSessionReplayTimelineAsync(const DescribeTDEMSessionReplayTimelineRequest& request, const DescribeTDEMSessionReplayTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMSessionReplayTimelineRequest&;
    using Resp = DescribeTDEMSessionReplayTimelineResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMSessionReplayTimeline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMSessionReplayTimelineOutcomeCallable RumClient::DescribeTDEMSessionReplayTimelineCallable(const DescribeTDEMSessionReplayTimelineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMSessionReplayTimelineOutcome>>();
    DescribeTDEMSessionReplayTimelineAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMSessionReplayTimelineRequest&,
        DescribeTDEMSessionReplayTimelineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMUsageDetailOutcome RumClient::DescribeTDEMUsageDetail(const DescribeTDEMUsageDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMUsageDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMUsageDetailResponse rsp = DescribeTDEMUsageDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMUsageDetailOutcome(rsp);
        else
            return DescribeTDEMUsageDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMUsageDetailOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMUsageDetailAsync(const DescribeTDEMUsageDetailRequest& request, const DescribeTDEMUsageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMUsageDetailRequest&;
    using Resp = DescribeTDEMUsageDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMUsageDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMUsageDetailOutcomeCallable RumClient::DescribeTDEMUsageDetailCallable(const DescribeTDEMUsageDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMUsageDetailOutcome>>();
    DescribeTDEMUsageDetailAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMUsageDetailRequest&,
        DescribeTDEMUsageDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTDEMUsageSummaryOutcome RumClient::DescribeTDEMUsageSummary(const DescribeTDEMUsageSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTDEMUsageSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTDEMUsageSummaryResponse rsp = DescribeTDEMUsageSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTDEMUsageSummaryOutcome(rsp);
        else
            return DescribeTDEMUsageSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeTDEMUsageSummaryOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTDEMUsageSummaryAsync(const DescribeTDEMUsageSummaryRequest& request, const DescribeTDEMUsageSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTDEMUsageSummaryRequest&;
    using Resp = DescribeTDEMUsageSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTDEMUsageSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTDEMUsageSummaryOutcomeCallable RumClient::DescribeTDEMUsageSummaryCallable(const DescribeTDEMUsageSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTDEMUsageSummaryOutcome>>();
    DescribeTDEMUsageSummaryAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTDEMUsageSummaryRequest&,
        DescribeTDEMUsageSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTawAreasOutcome RumClient::DescribeTawAreas(const DescribeTawAreasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTawAreas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTawAreasResponse rsp = DescribeTawAreasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTawAreasOutcome(rsp);
        else
            return DescribeTawAreasOutcome(o.GetError());
    }
    else
    {
        return DescribeTawAreasOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTawAreasAsync(const DescribeTawAreasRequest& request, const DescribeTawAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTawAreasRequest&;
    using Resp = DescribeTawAreasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTawAreas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTawAreasOutcomeCallable RumClient::DescribeTawAreasCallable(const DescribeTawAreasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTawAreasOutcome>>();
    DescribeTawAreasAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTawAreasRequest&,
        DescribeTawAreasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTawInstancesOutcome RumClient::DescribeTawInstances(const DescribeTawInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTawInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTawInstancesResponse rsp = DescribeTawInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTawInstancesOutcome(rsp);
        else
            return DescribeTawInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeTawInstancesOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTawInstancesAsync(const DescribeTawInstancesRequest& request, const DescribeTawInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTawInstancesRequest&;
    using Resp = DescribeTawInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTawInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTawInstancesOutcomeCallable RumClient::DescribeTawInstancesCallable(const DescribeTawInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTawInstancesOutcome>>();
    DescribeTawInstancesAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTawInstancesRequest&,
        DescribeTawInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTokenOutcome RumClient::DescribeToken(const DescribeTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenResponse rsp = DescribeTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenOutcome(rsp);
        else
            return DescribeTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTokenAsync(const DescribeTokenRequest& request, const DescribeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTokenRequest&;
    using Resp = DescribeTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTokenOutcomeCallable RumClient::DescribeTokenCallable(const DescribeTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTokenOutcome>>();
    DescribeTokenAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTokenRequest&,
        DescribeTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeTopIssuesOutcome RumClient::DescribeTopIssues(const DescribeTopIssuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopIssues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopIssuesResponse rsp = DescribeTopIssuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopIssuesOutcome(rsp);
        else
            return DescribeTopIssuesOutcome(o.GetError());
    }
    else
    {
        return DescribeTopIssuesOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTopIssuesAsync(const DescribeTopIssuesRequest& request, const DescribeTopIssuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopIssuesRequest&;
    using Resp = DescribeTopIssuesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopIssues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeTopIssuesOutcomeCallable RumClient::DescribeTopIssuesCallable(const DescribeTopIssuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopIssuesOutcome>>();
    DescribeTopIssuesAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeTopIssuesRequest&,
        DescribeTopIssuesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeUserJourneySanKeyOutcome RumClient::DescribeUserJourneySanKey(const DescribeUserJourneySanKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserJourneySanKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserJourneySanKeyResponse rsp = DescribeUserJourneySanKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserJourneySanKeyOutcome(rsp);
        else
            return DescribeUserJourneySanKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeUserJourneySanKeyOutcome(outcome.GetError());
    }
}

void RumClient::DescribeUserJourneySanKeyAsync(const DescribeUserJourneySanKeyRequest& request, const DescribeUserJourneySanKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserJourneySanKeyRequest&;
    using Resp = DescribeUserJourneySanKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserJourneySanKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeUserJourneySanKeyOutcomeCallable RumClient::DescribeUserJourneySanKeyCallable(const DescribeUserJourneySanKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserJourneySanKeyOutcome>>();
    DescribeUserJourneySanKeyAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeUserJourneySanKeyRequest&,
        DescribeUserJourneySanKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeUvListOutcome RumClient::DescribeUvList(const DescribeUvListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUvList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUvListResponse rsp = DescribeUvListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUvListOutcome(rsp);
        else
            return DescribeUvListOutcome(o.GetError());
    }
    else
    {
        return DescribeUvListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeUvListAsync(const DescribeUvListRequest& request, const DescribeUvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUvListRequest&;
    using Resp = DescribeUvListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUvList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeUvListOutcomeCallable RumClient::DescribeUvListCallable(const DescribeUvListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUvListOutcome>>();
    DescribeUvListAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeUvListRequest&,
        DescribeUvListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::DescribeWhitelistsOutcome RumClient::DescribeWhitelists(const DescribeWhitelistsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhitelists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhitelistsResponse rsp = DescribeWhitelistsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhitelistsOutcome(rsp);
        else
            return DescribeWhitelistsOutcome(o.GetError());
    }
    else
    {
        return DescribeWhitelistsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeWhitelistsAsync(const DescribeWhitelistsRequest& request, const DescribeWhitelistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWhitelistsRequest&;
    using Resp = DescribeWhitelistsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWhitelists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::DescribeWhitelistsOutcomeCallable RumClient::DescribeWhitelistsCallable(const DescribeWhitelistsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWhitelistsOutcome>>();
    DescribeWhitelistsAsync(
    request,
    [prom](
        const RumClient*,
        const DescribeWhitelistsRequest&,
        DescribeWhitelistsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyFieldTransformRuleOutcome RumClient::ModifyFieldTransformRule(const ModifyFieldTransformRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFieldTransformRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFieldTransformRuleResponse rsp = ModifyFieldTransformRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFieldTransformRuleOutcome(rsp);
        else
            return ModifyFieldTransformRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyFieldTransformRuleOutcome(outcome.GetError());
    }
}

void RumClient::ModifyFieldTransformRuleAsync(const ModifyFieldTransformRuleRequest& request, const ModifyFieldTransformRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFieldTransformRuleRequest&;
    using Resp = ModifyFieldTransformRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFieldTransformRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifyFieldTransformRuleOutcomeCallable RumClient::ModifyFieldTransformRuleCallable(const ModifyFieldTransformRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFieldTransformRuleOutcome>>();
    ModifyFieldTransformRuleAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyFieldTransformRuleRequest&,
        ModifyFieldTransformRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyInstanceOutcome RumClient::ModifyInstance(const ModifyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceResponse rsp = ModifyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceOutcome(rsp);
        else
            return ModifyInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceOutcome(outcome.GetError());
    }
}

void RumClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceRequest&;
    using Resp = ModifyInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifyInstanceOutcomeCallable RumClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceOutcome>>();
    ModifyInstanceAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyInstanceRequest&,
        ModifyInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyIssueStatusOutcome RumClient::ModifyIssueStatus(const ModifyIssueStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIssueStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIssueStatusResponse rsp = ModifyIssueStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIssueStatusOutcome(rsp);
        else
            return ModifyIssueStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyIssueStatusOutcome(outcome.GetError());
    }
}

void RumClient::ModifyIssueStatusAsync(const ModifyIssueStatusRequest& request, const ModifyIssueStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIssueStatusRequest&;
    using Resp = ModifyIssueStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIssueStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifyIssueStatusOutcomeCallable RumClient::ModifyIssueStatusCallable(const ModifyIssueStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIssueStatusOutcome>>();
    ModifyIssueStatusAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyIssueStatusRequest&,
        ModifyIssueStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyMiniProgramReplayPackOutcome RumClient::ModifyMiniProgramReplayPack(const ModifyMiniProgramReplayPackRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMiniProgramReplayPack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMiniProgramReplayPackResponse rsp = ModifyMiniProgramReplayPackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMiniProgramReplayPackOutcome(rsp);
        else
            return ModifyMiniProgramReplayPackOutcome(o.GetError());
    }
    else
    {
        return ModifyMiniProgramReplayPackOutcome(outcome.GetError());
    }
}

void RumClient::ModifyMiniProgramReplayPackAsync(const ModifyMiniProgramReplayPackRequest& request, const ModifyMiniProgramReplayPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMiniProgramReplayPackRequest&;
    using Resp = ModifyMiniProgramReplayPackResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMiniProgramReplayPack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifyMiniProgramReplayPackOutcomeCallable RumClient::ModifyMiniProgramReplayPackCallable(const ModifyMiniProgramReplayPackRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMiniProgramReplayPackOutcome>>();
    ModifyMiniProgramReplayPackAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyMiniProgramReplayPackRequest&,
        ModifyMiniProgramReplayPackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyProjectOutcome RumClient::ModifyProject(const ModifyProjectRequest &request)
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

void RumClient::ModifyProjectAsync(const ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

RumClient::ModifyProjectOutcomeCallable RumClient::ModifyProjectCallable(const ModifyProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProjectOutcome>>();
    ModifyProjectAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyProjectRequest&,
        ModifyProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyProjectLimitOutcome RumClient::ModifyProjectLimit(const ModifyProjectLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProjectLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProjectLimitResponse rsp = ModifyProjectLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProjectLimitOutcome(rsp);
        else
            return ModifyProjectLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyProjectLimitOutcome(outcome.GetError());
    }
}

void RumClient::ModifyProjectLimitAsync(const ModifyProjectLimitRequest& request, const ModifyProjectLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProjectLimitRequest&;
    using Resp = ModifyProjectLimitResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProjectLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifyProjectLimitOutcomeCallable RumClient::ModifyProjectLimitCallable(const ModifyProjectLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProjectLimitOutcome>>();
    ModifyProjectLimitAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyProjectLimitRequest&,
        ModifyProjectLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifySampleRateOutcome RumClient::ModifySampleRate(const ModifySampleRateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySampleRate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySampleRateResponse rsp = ModifySampleRateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySampleRateOutcome(rsp);
        else
            return ModifySampleRateOutcome(o.GetError());
    }
    else
    {
        return ModifySampleRateOutcome(outcome.GetError());
    }
}

void RumClient::ModifySampleRateAsync(const ModifySampleRateRequest& request, const ModifySampleRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySampleRateRequest&;
    using Resp = ModifySampleRateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySampleRate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifySampleRateOutcomeCallable RumClient::ModifySampleRateCallable(const ModifySampleRateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySampleRateOutcome>>();
    ModifySampleRateAsync(
    request,
    [prom](
        const RumClient*,
        const ModifySampleRateRequest&,
        ModifySampleRateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyTDEMApplicationOutcome RumClient::ModifyTDEMApplication(const ModifyTDEMApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTDEMApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTDEMApplicationResponse rsp = ModifyTDEMApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTDEMApplicationOutcome(rsp);
        else
            return ModifyTDEMApplicationOutcome(o.GetError());
    }
    else
    {
        return ModifyTDEMApplicationOutcome(outcome.GetError());
    }
}

void RumClient::ModifyTDEMApplicationAsync(const ModifyTDEMApplicationRequest& request, const ModifyTDEMApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTDEMApplicationRequest&;
    using Resp = ModifyTDEMApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTDEMApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifyTDEMApplicationOutcomeCallable RumClient::ModifyTDEMApplicationCallable(const ModifyTDEMApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTDEMApplicationOutcome>>();
    ModifyTDEMApplicationAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyTDEMApplicationRequest&,
        ModifyTDEMApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyTDEMBusinessSystemOutcome RumClient::ModifyTDEMBusinessSystem(const ModifyTDEMBusinessSystemRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTDEMBusinessSystem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTDEMBusinessSystemResponse rsp = ModifyTDEMBusinessSystemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTDEMBusinessSystemOutcome(rsp);
        else
            return ModifyTDEMBusinessSystemOutcome(o.GetError());
    }
    else
    {
        return ModifyTDEMBusinessSystemOutcome(outcome.GetError());
    }
}

void RumClient::ModifyTDEMBusinessSystemAsync(const ModifyTDEMBusinessSystemRequest& request, const ModifyTDEMBusinessSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTDEMBusinessSystemRequest&;
    using Resp = ModifyTDEMBusinessSystemResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTDEMBusinessSystem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifyTDEMBusinessSystemOutcomeCallable RumClient::ModifyTDEMBusinessSystemCallable(const ModifyTDEMBusinessSystemRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTDEMBusinessSystemOutcome>>();
    ModifyTDEMBusinessSystemAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyTDEMBusinessSystemRequest&,
        ModifyTDEMBusinessSystemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyTDEMDialTaskOutcome RumClient::ModifyTDEMDialTask(const ModifyTDEMDialTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTDEMDialTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTDEMDialTaskResponse rsp = ModifyTDEMDialTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTDEMDialTaskOutcome(rsp);
        else
            return ModifyTDEMDialTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyTDEMDialTaskOutcome(outcome.GetError());
    }
}

void RumClient::ModifyTDEMDialTaskAsync(const ModifyTDEMDialTaskRequest& request, const ModifyTDEMDialTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTDEMDialTaskRequest&;
    using Resp = ModifyTDEMDialTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTDEMDialTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifyTDEMDialTaskOutcomeCallable RumClient::ModifyTDEMDialTaskCallable(const ModifyTDEMDialTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTDEMDialTaskOutcome>>();
    ModifyTDEMDialTaskAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyTDEMDialTaskRequest&,
        ModifyTDEMDialTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyTDEMFieldTransformRuleOutcome RumClient::ModifyTDEMFieldTransformRule(const ModifyTDEMFieldTransformRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTDEMFieldTransformRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTDEMFieldTransformRuleResponse rsp = ModifyTDEMFieldTransformRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTDEMFieldTransformRuleOutcome(rsp);
        else
            return ModifyTDEMFieldTransformRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyTDEMFieldTransformRuleOutcome(outcome.GetError());
    }
}

void RumClient::ModifyTDEMFieldTransformRuleAsync(const ModifyTDEMFieldTransformRuleRequest& request, const ModifyTDEMFieldTransformRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTDEMFieldTransformRuleRequest&;
    using Resp = ModifyTDEMFieldTransformRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTDEMFieldTransformRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifyTDEMFieldTransformRuleOutcomeCallable RumClient::ModifyTDEMFieldTransformRuleCallable(const ModifyTDEMFieldTransformRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTDEMFieldTransformRuleOutcome>>();
    ModifyTDEMFieldTransformRuleAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyTDEMFieldTransformRuleRequest&,
        ModifyTDEMFieldTransformRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyTDEMFunnelOutcome RumClient::ModifyTDEMFunnel(const ModifyTDEMFunnelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTDEMFunnel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTDEMFunnelResponse rsp = ModifyTDEMFunnelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTDEMFunnelOutcome(rsp);
        else
            return ModifyTDEMFunnelOutcome(o.GetError());
    }
    else
    {
        return ModifyTDEMFunnelOutcome(outcome.GetError());
    }
}

void RumClient::ModifyTDEMFunnelAsync(const ModifyTDEMFunnelRequest& request, const ModifyTDEMFunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTDEMFunnelRequest&;
    using Resp = ModifyTDEMFunnelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTDEMFunnel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifyTDEMFunnelOutcomeCallable RumClient::ModifyTDEMFunnelCallable(const ModifyTDEMFunnelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTDEMFunnelOutcome>>();
    ModifyTDEMFunnelAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyTDEMFunnelRequest&,
        ModifyTDEMFunnelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyTDEMSampleConfigOutcome RumClient::ModifyTDEMSampleConfig(const ModifyTDEMSampleConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTDEMSampleConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTDEMSampleConfigResponse rsp = ModifyTDEMSampleConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTDEMSampleConfigOutcome(rsp);
        else
            return ModifyTDEMSampleConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyTDEMSampleConfigOutcome(outcome.GetError());
    }
}

void RumClient::ModifyTDEMSampleConfigAsync(const ModifyTDEMSampleConfigRequest& request, const ModifyTDEMSampleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTDEMSampleConfigRequest&;
    using Resp = ModifyTDEMSampleConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTDEMSampleConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifyTDEMSampleConfigOutcomeCallable RumClient::ModifyTDEMSampleConfigCallable(const ModifyTDEMSampleConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTDEMSampleConfigOutcome>>();
    ModifyTDEMSampleConfigAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyTDEMSampleConfigRequest&,
        ModifyTDEMSampleConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ModifyTDEMSampleRateOutcome RumClient::ModifyTDEMSampleRate(const ModifyTDEMSampleRateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTDEMSampleRate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTDEMSampleRateResponse rsp = ModifyTDEMSampleRateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTDEMSampleRateOutcome(rsp);
        else
            return ModifyTDEMSampleRateOutcome(o.GetError());
    }
    else
    {
        return ModifyTDEMSampleRateOutcome(outcome.GetError());
    }
}

void RumClient::ModifyTDEMSampleRateAsync(const ModifyTDEMSampleRateRequest& request, const ModifyTDEMSampleRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTDEMSampleRateRequest&;
    using Resp = ModifyTDEMSampleRateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTDEMSampleRate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ModifyTDEMSampleRateOutcomeCallable RumClient::ModifyTDEMSampleRateCallable(const ModifyTDEMSampleRateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTDEMSampleRateOutcome>>();
    ModifyTDEMSampleRateAsync(
    request,
    [prom](
        const RumClient*,
        const ModifyTDEMSampleRateRequest&,
        ModifyTDEMSampleRateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::PreviewTDEMFunnelReportOutcome RumClient::PreviewTDEMFunnelReport(const PreviewTDEMFunnelReportRequest &request)
{
    auto outcome = MakeRequest(request, "PreviewTDEMFunnelReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PreviewTDEMFunnelReportResponse rsp = PreviewTDEMFunnelReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PreviewTDEMFunnelReportOutcome(rsp);
        else
            return PreviewTDEMFunnelReportOutcome(o.GetError());
    }
    else
    {
        return PreviewTDEMFunnelReportOutcome(outcome.GetError());
    }
}

void RumClient::PreviewTDEMFunnelReportAsync(const PreviewTDEMFunnelReportRequest& request, const PreviewTDEMFunnelReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PreviewTDEMFunnelReportRequest&;
    using Resp = PreviewTDEMFunnelReportResponse;

    DoRequestAsync<Req, Resp>(
        "PreviewTDEMFunnelReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::PreviewTDEMFunnelReportOutcomeCallable RumClient::PreviewTDEMFunnelReportCallable(const PreviewTDEMFunnelReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<PreviewTDEMFunnelReportOutcome>>();
    PreviewTDEMFunnelReportAsync(
    request,
    [prom](
        const RumClient*,
        const PreviewTDEMFunnelReportRequest&,
        PreviewTDEMFunnelReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ResumeInstanceOutcome RumClient::ResumeInstance(const ResumeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeInstanceResponse rsp = ResumeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeInstanceOutcome(rsp);
        else
            return ResumeInstanceOutcome(o.GetError());
    }
    else
    {
        return ResumeInstanceOutcome(outcome.GetError());
    }
}

void RumClient::ResumeInstanceAsync(const ResumeInstanceRequest& request, const ResumeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeInstanceRequest&;
    using Resp = ResumeInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ResumeInstanceOutcomeCallable RumClient::ResumeInstanceCallable(const ResumeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeInstanceOutcome>>();
    ResumeInstanceAsync(
    request,
    [prom](
        const RumClient*,
        const ResumeInstanceRequest&,
        ResumeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ResumeProjectOutcome RumClient::ResumeProject(const ResumeProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeProjectResponse rsp = ResumeProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeProjectOutcome(rsp);
        else
            return ResumeProjectOutcome(o.GetError());
    }
    else
    {
        return ResumeProjectOutcome(outcome.GetError());
    }
}

void RumClient::ResumeProjectAsync(const ResumeProjectRequest& request, const ResumeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeProjectRequest&;
    using Resp = ResumeProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ResumeProjectOutcomeCallable RumClient::ResumeProjectCallable(const ResumeProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeProjectOutcome>>();
    ResumeProjectAsync(
    request,
    [prom](
        const RumClient*,
        const ResumeProjectRequest&,
        ResumeProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::ResumeTDEMApplicationOutcome RumClient::ResumeTDEMApplication(const ResumeTDEMApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeTDEMApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeTDEMApplicationResponse rsp = ResumeTDEMApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeTDEMApplicationOutcome(rsp);
        else
            return ResumeTDEMApplicationOutcome(o.GetError());
    }
    else
    {
        return ResumeTDEMApplicationOutcome(outcome.GetError());
    }
}

void RumClient::ResumeTDEMApplicationAsync(const ResumeTDEMApplicationRequest& request, const ResumeTDEMApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeTDEMApplicationRequest&;
    using Resp = ResumeTDEMApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeTDEMApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::ResumeTDEMApplicationOutcomeCallable RumClient::ResumeTDEMApplicationCallable(const ResumeTDEMApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeTDEMApplicationOutcome>>();
    ResumeTDEMApplicationAsync(
    request,
    [prom](
        const RumClient*,
        const ResumeTDEMApplicationRequest&,
        ResumeTDEMApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::StopInstanceOutcome RumClient::StopInstance(const StopInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StopInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopInstanceResponse rsp = StopInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopInstanceOutcome(rsp);
        else
            return StopInstanceOutcome(o.GetError());
    }
    else
    {
        return StopInstanceOutcome(outcome.GetError());
    }
}

void RumClient::StopInstanceAsync(const StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopInstanceRequest&;
    using Resp = StopInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "StopInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::StopInstanceOutcomeCallable RumClient::StopInstanceCallable(const StopInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopInstanceOutcome>>();
    StopInstanceAsync(
    request,
    [prom](
        const RumClient*,
        const StopInstanceRequest&,
        StopInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::StopProjectOutcome RumClient::StopProject(const StopProjectRequest &request)
{
    auto outcome = MakeRequest(request, "StopProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopProjectResponse rsp = StopProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopProjectOutcome(rsp);
        else
            return StopProjectOutcome(o.GetError());
    }
    else
    {
        return StopProjectOutcome(outcome.GetError());
    }
}

void RumClient::StopProjectAsync(const StopProjectRequest& request, const StopProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopProjectRequest&;
    using Resp = StopProjectResponse;

    DoRequestAsync<Req, Resp>(
        "StopProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::StopProjectOutcomeCallable RumClient::StopProjectCallable(const StopProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopProjectOutcome>>();
    StopProjectAsync(
    request,
    [prom](
        const RumClient*,
        const StopProjectRequest&,
        StopProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::StopTDEMApplicationOutcome RumClient::StopTDEMApplication(const StopTDEMApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "StopTDEMApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopTDEMApplicationResponse rsp = StopTDEMApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopTDEMApplicationOutcome(rsp);
        else
            return StopTDEMApplicationOutcome(o.GetError());
    }
    else
    {
        return StopTDEMApplicationOutcome(outcome.GetError());
    }
}

void RumClient::StopTDEMApplicationAsync(const StopTDEMApplicationRequest& request, const StopTDEMApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopTDEMApplicationRequest&;
    using Resp = StopTDEMApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "StopTDEMApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::StopTDEMApplicationOutcomeCallable RumClient::StopTDEMApplicationCallable(const StopTDEMApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopTDEMApplicationOutcome>>();
    StopTDEMApplicationAsync(
    request,
    [prom](
        const RumClient*,
        const StopTDEMApplicationRequest&,
        StopTDEMApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::UploadMiniProgramSourceOutcome RumClient::UploadMiniProgramSource(const UploadMiniProgramSourceRequest &request)
{
    auto outcome = MakeRequest(request, "UploadMiniProgramSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadMiniProgramSourceResponse rsp = UploadMiniProgramSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadMiniProgramSourceOutcome(rsp);
        else
            return UploadMiniProgramSourceOutcome(o.GetError());
    }
    else
    {
        return UploadMiniProgramSourceOutcome(outcome.GetError());
    }
}

void RumClient::UploadMiniProgramSourceAsync(const UploadMiniProgramSourceRequest& request, const UploadMiniProgramSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadMiniProgramSourceRequest&;
    using Resp = UploadMiniProgramSourceResponse;

    DoRequestAsync<Req, Resp>(
        "UploadMiniProgramSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::UploadMiniProgramSourceOutcomeCallable RumClient::UploadMiniProgramSourceCallable(const UploadMiniProgramSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadMiniProgramSourceOutcome>>();
    UploadMiniProgramSourceAsync(
    request,
    [prom](
        const RumClient*,
        const UploadMiniProgramSourceRequest&,
        UploadMiniProgramSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RumClient::UploadSymbolArtifactOutcome RumClient::UploadSymbolArtifact(const UploadSymbolArtifactRequest &request)
{
    auto outcome = MakeRequest(request, "UploadSymbolArtifact");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadSymbolArtifactResponse rsp = UploadSymbolArtifactResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadSymbolArtifactOutcome(rsp);
        else
            return UploadSymbolArtifactOutcome(o.GetError());
    }
    else
    {
        return UploadSymbolArtifactOutcome(outcome.GetError());
    }
}

void RumClient::UploadSymbolArtifactAsync(const UploadSymbolArtifactRequest& request, const UploadSymbolArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadSymbolArtifactRequest&;
    using Resp = UploadSymbolArtifactResponse;

    DoRequestAsync<Req, Resp>(
        "UploadSymbolArtifact", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RumClient::UploadSymbolArtifactOutcomeCallable RumClient::UploadSymbolArtifactCallable(const UploadSymbolArtifactRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadSymbolArtifactOutcome>>();
    UploadSymbolArtifactAsync(
    request,
    [prom](
        const RumClient*,
        const UploadSymbolArtifactRequest&,
        UploadSymbolArtifactOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

