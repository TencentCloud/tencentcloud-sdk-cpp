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

#include <tencentcloud/ags/v20250920/AgsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ags::V20250920;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-09-20";
    const string ENDPOINT = "ags.tencentcloudapi.com";
}

AgsClient::AgsClient(const Credential &credential, const string &region) :
    AgsClient(credential, region, ClientProfile())
{
}

AgsClient::AgsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AgsClient::AcquireDeploymentTokenOutcome AgsClient::AcquireDeploymentToken(const AcquireDeploymentTokenRequest &request)
{
    auto outcome = MakeRequest(request, "AcquireDeploymentToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcquireDeploymentTokenResponse rsp = AcquireDeploymentTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcquireDeploymentTokenOutcome(rsp);
        else
            return AcquireDeploymentTokenOutcome(o.GetError());
    }
    else
    {
        return AcquireDeploymentTokenOutcome(outcome.GetError());
    }
}

void AgsClient::AcquireDeploymentTokenAsync(const AcquireDeploymentTokenRequest& request, const AcquireDeploymentTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AcquireDeploymentTokenRequest&;
    using Resp = AcquireDeploymentTokenResponse;

    DoRequestAsync<Req, Resp>(
        "AcquireDeploymentToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::AcquireDeploymentTokenOutcomeCallable AgsClient::AcquireDeploymentTokenCallable(const AcquireDeploymentTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<AcquireDeploymentTokenOutcome>>();
    AcquireDeploymentTokenAsync(
    request,
    [prom](
        const AgsClient*,
        const AcquireDeploymentTokenRequest&,
        AcquireDeploymentTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::AcquireSandboxInstanceTokenOutcome AgsClient::AcquireSandboxInstanceToken(const AcquireSandboxInstanceTokenRequest &request)
{
    auto outcome = MakeRequest(request, "AcquireSandboxInstanceToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcquireSandboxInstanceTokenResponse rsp = AcquireSandboxInstanceTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcquireSandboxInstanceTokenOutcome(rsp);
        else
            return AcquireSandboxInstanceTokenOutcome(o.GetError());
    }
    else
    {
        return AcquireSandboxInstanceTokenOutcome(outcome.GetError());
    }
}

void AgsClient::AcquireSandboxInstanceTokenAsync(const AcquireSandboxInstanceTokenRequest& request, const AcquireSandboxInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AcquireSandboxInstanceTokenRequest&;
    using Resp = AcquireSandboxInstanceTokenResponse;

    DoRequestAsync<Req, Resp>(
        "AcquireSandboxInstanceToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::AcquireSandboxInstanceTokenOutcomeCallable AgsClient::AcquireSandboxInstanceTokenCallable(const AcquireSandboxInstanceTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<AcquireSandboxInstanceTokenOutcome>>();
    AcquireSandboxInstanceTokenAsync(
    request,
    [prom](
        const AgsClient*,
        const AcquireSandboxInstanceTokenRequest&,
        AcquireSandboxInstanceTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::AppendEventOutcome AgsClient::AppendEvent(const AppendEventRequest &request)
{
    auto outcome = MakeRequest(request, "AppendEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AppendEventResponse rsp = AppendEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AppendEventOutcome(rsp);
        else
            return AppendEventOutcome(o.GetError());
    }
    else
    {
        return AppendEventOutcome(outcome.GetError());
    }
}

void AgsClient::AppendEventAsync(const AppendEventRequest& request, const AppendEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AppendEventRequest&;
    using Resp = AppendEventResponse;

    DoRequestAsync<Req, Resp>(
        "AppendEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::AppendEventOutcomeCallable AgsClient::AppendEventCallable(const AppendEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<AppendEventOutcome>>();
    AppendEventAsync(
    request,
    [prom](
        const AgsClient*,
        const AppendEventRequest&,
        AppendEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::ApproveRegistryRecordOutcome AgsClient::ApproveRegistryRecord(const ApproveRegistryRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ApproveRegistryRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApproveRegistryRecordResponse rsp = ApproveRegistryRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApproveRegistryRecordOutcome(rsp);
        else
            return ApproveRegistryRecordOutcome(o.GetError());
    }
    else
    {
        return ApproveRegistryRecordOutcome(outcome.GetError());
    }
}

void AgsClient::ApproveRegistryRecordAsync(const ApproveRegistryRecordRequest& request, const ApproveRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApproveRegistryRecordRequest&;
    using Resp = ApproveRegistryRecordResponse;

    DoRequestAsync<Req, Resp>(
        "ApproveRegistryRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::ApproveRegistryRecordOutcomeCallable AgsClient::ApproveRegistryRecordCallable(const ApproveRegistryRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApproveRegistryRecordOutcome>>();
    ApproveRegistryRecordAsync(
    request,
    [prom](
        const AgsClient*,
        const ApproveRegistryRecordRequest&,
        ApproveRegistryRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::CancelRegistryRecordOutcome AgsClient::CancelRegistryRecord(const CancelRegistryRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CancelRegistryRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelRegistryRecordResponse rsp = CancelRegistryRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelRegistryRecordOutcome(rsp);
        else
            return CancelRegistryRecordOutcome(o.GetError());
    }
    else
    {
        return CancelRegistryRecordOutcome(outcome.GetError());
    }
}

void AgsClient::CancelRegistryRecordAsync(const CancelRegistryRecordRequest& request, const CancelRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelRegistryRecordRequest&;
    using Resp = CancelRegistryRecordResponse;

    DoRequestAsync<Req, Resp>(
        "CancelRegistryRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::CancelRegistryRecordOutcomeCallable AgsClient::CancelRegistryRecordCallable(const CancelRegistryRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelRegistryRecordOutcome>>();
    CancelRegistryRecordAsync(
    request,
    [prom](
        const AgsClient*,
        const CancelRegistryRecordRequest&,
        CancelRegistryRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::CreateAPIKeyOutcome AgsClient::CreateAPIKey(const CreateAPIKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAPIKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAPIKeyResponse rsp = CreateAPIKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAPIKeyOutcome(rsp);
        else
            return CreateAPIKeyOutcome(o.GetError());
    }
    else
    {
        return CreateAPIKeyOutcome(outcome.GetError());
    }
}

void AgsClient::CreateAPIKeyAsync(const CreateAPIKeyRequest& request, const CreateAPIKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAPIKeyRequest&;
    using Resp = CreateAPIKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAPIKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::CreateAPIKeyOutcomeCallable AgsClient::CreateAPIKeyCallable(const CreateAPIKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAPIKeyOutcome>>();
    CreateAPIKeyAsync(
    request,
    [prom](
        const AgsClient*,
        const CreateAPIKeyRequest&,
        CreateAPIKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::CreateDeploymentOutcome AgsClient::CreateDeployment(const CreateDeploymentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeployment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeploymentResponse rsp = CreateDeploymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeploymentOutcome(rsp);
        else
            return CreateDeploymentOutcome(o.GetError());
    }
    else
    {
        return CreateDeploymentOutcome(outcome.GetError());
    }
}

void AgsClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeploymentRequest&;
    using Resp = CreateDeploymentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeployment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::CreateDeploymentOutcomeCallable AgsClient::CreateDeploymentCallable(const CreateDeploymentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeploymentOutcome>>();
    CreateDeploymentAsync(
    request,
    [prom](
        const AgsClient*,
        const CreateDeploymentRequest&,
        CreateDeploymentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::CreatePreCacheImageTaskOutcome AgsClient::CreatePreCacheImageTask(const CreatePreCacheImageTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePreCacheImageTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePreCacheImageTaskResponse rsp = CreatePreCacheImageTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePreCacheImageTaskOutcome(rsp);
        else
            return CreatePreCacheImageTaskOutcome(o.GetError());
    }
    else
    {
        return CreatePreCacheImageTaskOutcome(outcome.GetError());
    }
}

void AgsClient::CreatePreCacheImageTaskAsync(const CreatePreCacheImageTaskRequest& request, const CreatePreCacheImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePreCacheImageTaskRequest&;
    using Resp = CreatePreCacheImageTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePreCacheImageTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::CreatePreCacheImageTaskOutcomeCallable AgsClient::CreatePreCacheImageTaskCallable(const CreatePreCacheImageTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePreCacheImageTaskOutcome>>();
    CreatePreCacheImageTaskAsync(
    request,
    [prom](
        const AgsClient*,
        const CreatePreCacheImageTaskRequest&,
        CreatePreCacheImageTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::CreateRegistryOutcome AgsClient::CreateRegistry(const CreateRegistryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRegistry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRegistryResponse rsp = CreateRegistryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRegistryOutcome(rsp);
        else
            return CreateRegistryOutcome(o.GetError());
    }
    else
    {
        return CreateRegistryOutcome(outcome.GetError());
    }
}

void AgsClient::CreateRegistryAsync(const CreateRegistryRequest& request, const CreateRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRegistryRequest&;
    using Resp = CreateRegistryResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRegistry", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::CreateRegistryOutcomeCallable AgsClient::CreateRegistryCallable(const CreateRegistryRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRegistryOutcome>>();
    CreateRegistryAsync(
    request,
    [prom](
        const AgsClient*,
        const CreateRegistryRequest&,
        CreateRegistryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::CreateRegistryRecordOutcome AgsClient::CreateRegistryRecord(const CreateRegistryRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRegistryRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRegistryRecordResponse rsp = CreateRegistryRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRegistryRecordOutcome(rsp);
        else
            return CreateRegistryRecordOutcome(o.GetError());
    }
    else
    {
        return CreateRegistryRecordOutcome(outcome.GetError());
    }
}

void AgsClient::CreateRegistryRecordAsync(const CreateRegistryRecordRequest& request, const CreateRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRegistryRecordRequest&;
    using Resp = CreateRegistryRecordResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRegistryRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::CreateRegistryRecordOutcomeCallable AgsClient::CreateRegistryRecordCallable(const CreateRegistryRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRegistryRecordOutcome>>();
    CreateRegistryRecordAsync(
    request,
    [prom](
        const AgsClient*,
        const CreateRegistryRecordRequest&,
        CreateRegistryRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::CreateSandboxToolOutcome AgsClient::CreateSandboxTool(const CreateSandboxToolRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSandboxTool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSandboxToolResponse rsp = CreateSandboxToolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSandboxToolOutcome(rsp);
        else
            return CreateSandboxToolOutcome(o.GetError());
    }
    else
    {
        return CreateSandboxToolOutcome(outcome.GetError());
    }
}

void AgsClient::CreateSandboxToolAsync(const CreateSandboxToolRequest& request, const CreateSandboxToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSandboxToolRequest&;
    using Resp = CreateSandboxToolResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSandboxTool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::CreateSandboxToolOutcomeCallable AgsClient::CreateSandboxToolCallable(const CreateSandboxToolRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSandboxToolOutcome>>();
    CreateSandboxToolAsync(
    request,
    [prom](
        const AgsClient*,
        const CreateSandboxToolRequest&,
        CreateSandboxToolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::CreateSessionOutcome AgsClient::CreateSession(const CreateSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSessionResponse rsp = CreateSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSessionOutcome(rsp);
        else
            return CreateSessionOutcome(o.GetError());
    }
    else
    {
        return CreateSessionOutcome(outcome.GetError());
    }
}

void AgsClient::CreateSessionAsync(const CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSessionRequest&;
    using Resp = CreateSessionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::CreateSessionOutcomeCallable AgsClient::CreateSessionCallable(const CreateSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSessionOutcome>>();
    CreateSessionAsync(
    request,
    [prom](
        const AgsClient*,
        const CreateSessionRequest&,
        CreateSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::CreateSessionSpaceOutcome AgsClient::CreateSessionSpace(const CreateSessionSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSessionSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSessionSpaceResponse rsp = CreateSessionSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSessionSpaceOutcome(rsp);
        else
            return CreateSessionSpaceOutcome(o.GetError());
    }
    else
    {
        return CreateSessionSpaceOutcome(outcome.GetError());
    }
}

void AgsClient::CreateSessionSpaceAsync(const CreateSessionSpaceRequest& request, const CreateSessionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSessionSpaceRequest&;
    using Resp = CreateSessionSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSessionSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::CreateSessionSpaceOutcomeCallable AgsClient::CreateSessionSpaceCallable(const CreateSessionSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSessionSpaceOutcome>>();
    CreateSessionSpaceAsync(
    request,
    [prom](
        const AgsClient*,
        const CreateSessionSpaceRequest&,
        CreateSessionSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DeleteAPIKeyOutcome AgsClient::DeleteAPIKey(const DeleteAPIKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAPIKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAPIKeyResponse rsp = DeleteAPIKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAPIKeyOutcome(rsp);
        else
            return DeleteAPIKeyOutcome(o.GetError());
    }
    else
    {
        return DeleteAPIKeyOutcome(outcome.GetError());
    }
}

void AgsClient::DeleteAPIKeyAsync(const DeleteAPIKeyRequest& request, const DeleteAPIKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAPIKeyRequest&;
    using Resp = DeleteAPIKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAPIKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DeleteAPIKeyOutcomeCallable AgsClient::DeleteAPIKeyCallable(const DeleteAPIKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAPIKeyOutcome>>();
    DeleteAPIKeyAsync(
    request,
    [prom](
        const AgsClient*,
        const DeleteAPIKeyRequest&,
        DeleteAPIKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DeleteDeploymentOutcome AgsClient::DeleteDeployment(const DeleteDeploymentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeployment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeploymentResponse rsp = DeleteDeploymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeploymentOutcome(rsp);
        else
            return DeleteDeploymentOutcome(o.GetError());
    }
    else
    {
        return DeleteDeploymentOutcome(outcome.GetError());
    }
}

void AgsClient::DeleteDeploymentAsync(const DeleteDeploymentRequest& request, const DeleteDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDeploymentRequest&;
    using Resp = DeleteDeploymentResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDeployment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DeleteDeploymentOutcomeCallable AgsClient::DeleteDeploymentCallable(const DeleteDeploymentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeploymentOutcome>>();
    DeleteDeploymentAsync(
    request,
    [prom](
        const AgsClient*,
        const DeleteDeploymentRequest&,
        DeleteDeploymentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DeleteRegistryOutcome AgsClient::DeleteRegistry(const DeleteRegistryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRegistry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRegistryResponse rsp = DeleteRegistryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRegistryOutcome(rsp);
        else
            return DeleteRegistryOutcome(o.GetError());
    }
    else
    {
        return DeleteRegistryOutcome(outcome.GetError());
    }
}

void AgsClient::DeleteRegistryAsync(const DeleteRegistryRequest& request, const DeleteRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRegistryRequest&;
    using Resp = DeleteRegistryResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRegistry", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DeleteRegistryOutcomeCallable AgsClient::DeleteRegistryCallable(const DeleteRegistryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRegistryOutcome>>();
    DeleteRegistryAsync(
    request,
    [prom](
        const AgsClient*,
        const DeleteRegistryRequest&,
        DeleteRegistryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DeleteRegistryRecordOutcome AgsClient::DeleteRegistryRecord(const DeleteRegistryRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRegistryRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRegistryRecordResponse rsp = DeleteRegistryRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRegistryRecordOutcome(rsp);
        else
            return DeleteRegistryRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteRegistryRecordOutcome(outcome.GetError());
    }
}

void AgsClient::DeleteRegistryRecordAsync(const DeleteRegistryRecordRequest& request, const DeleteRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRegistryRecordRequest&;
    using Resp = DeleteRegistryRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRegistryRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DeleteRegistryRecordOutcomeCallable AgsClient::DeleteRegistryRecordCallable(const DeleteRegistryRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRegistryRecordOutcome>>();
    DeleteRegistryRecordAsync(
    request,
    [prom](
        const AgsClient*,
        const DeleteRegistryRecordRequest&,
        DeleteRegistryRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DeleteSandboxToolOutcome AgsClient::DeleteSandboxTool(const DeleteSandboxToolRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSandboxTool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSandboxToolResponse rsp = DeleteSandboxToolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSandboxToolOutcome(rsp);
        else
            return DeleteSandboxToolOutcome(o.GetError());
    }
    else
    {
        return DeleteSandboxToolOutcome(outcome.GetError());
    }
}

void AgsClient::DeleteSandboxToolAsync(const DeleteSandboxToolRequest& request, const DeleteSandboxToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSandboxToolRequest&;
    using Resp = DeleteSandboxToolResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSandboxTool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DeleteSandboxToolOutcomeCallable AgsClient::DeleteSandboxToolCallable(const DeleteSandboxToolRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSandboxToolOutcome>>();
    DeleteSandboxToolAsync(
    request,
    [prom](
        const AgsClient*,
        const DeleteSandboxToolRequest&,
        DeleteSandboxToolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DeleteSessionOutcome AgsClient::DeleteSession(const DeleteSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSessionResponse rsp = DeleteSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSessionOutcome(rsp);
        else
            return DeleteSessionOutcome(o.GetError());
    }
    else
    {
        return DeleteSessionOutcome(outcome.GetError());
    }
}

void AgsClient::DeleteSessionAsync(const DeleteSessionRequest& request, const DeleteSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSessionRequest&;
    using Resp = DeleteSessionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DeleteSessionOutcomeCallable AgsClient::DeleteSessionCallable(const DeleteSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSessionOutcome>>();
    DeleteSessionAsync(
    request,
    [prom](
        const AgsClient*,
        const DeleteSessionRequest&,
        DeleteSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DeleteSessionSpaceOutcome AgsClient::DeleteSessionSpace(const DeleteSessionSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSessionSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSessionSpaceResponse rsp = DeleteSessionSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSessionSpaceOutcome(rsp);
        else
            return DeleteSessionSpaceOutcome(o.GetError());
    }
    else
    {
        return DeleteSessionSpaceOutcome(outcome.GetError());
    }
}

void AgsClient::DeleteSessionSpaceAsync(const DeleteSessionSpaceRequest& request, const DeleteSessionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSessionSpaceRequest&;
    using Resp = DeleteSessionSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSessionSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DeleteSessionSpaceOutcomeCallable AgsClient::DeleteSessionSpaceCallable(const DeleteSessionSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSessionSpaceOutcome>>();
    DeleteSessionSpaceAsync(
    request,
    [prom](
        const AgsClient*,
        const DeleteSessionSpaceRequest&,
        DeleteSessionSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeAPIKeyListOutcome AgsClient::DescribeAPIKeyList(const DescribeAPIKeyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAPIKeyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAPIKeyListResponse rsp = DescribeAPIKeyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAPIKeyListOutcome(rsp);
        else
            return DescribeAPIKeyListOutcome(o.GetError());
    }
    else
    {
        return DescribeAPIKeyListOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeAPIKeyListAsync(const DescribeAPIKeyListRequest& request, const DescribeAPIKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAPIKeyListRequest&;
    using Resp = DescribeAPIKeyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAPIKeyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeAPIKeyListOutcomeCallable AgsClient::DescribeAPIKeyListCallable(const DescribeAPIKeyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAPIKeyListOutcome>>();
    DescribeAPIKeyListAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeAPIKeyListRequest&,
        DescribeAPIKeyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeDeploymentOutcome AgsClient::DescribeDeployment(const DescribeDeploymentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeployment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeploymentResponse rsp = DescribeDeploymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeploymentOutcome(rsp);
        else
            return DescribeDeploymentOutcome(o.GetError());
    }
    else
    {
        return DescribeDeploymentOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeDeploymentAsync(const DescribeDeploymentRequest& request, const DescribeDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeploymentRequest&;
    using Resp = DescribeDeploymentResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeployment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeDeploymentOutcomeCallable AgsClient::DescribeDeploymentCallable(const DescribeDeploymentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeploymentOutcome>>();
    DescribeDeploymentAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeDeploymentRequest&,
        DescribeDeploymentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeDeploymentListOutcome AgsClient::DescribeDeploymentList(const DescribeDeploymentListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeploymentList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeploymentListResponse rsp = DescribeDeploymentListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeploymentListOutcome(rsp);
        else
            return DescribeDeploymentListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeploymentListOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeDeploymentListAsync(const DescribeDeploymentListRequest& request, const DescribeDeploymentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeploymentListRequest&;
    using Resp = DescribeDeploymentListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeploymentList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeDeploymentListOutcomeCallable AgsClient::DescribeDeploymentListCallable(const DescribeDeploymentListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeploymentListOutcome>>();
    DescribeDeploymentListAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeDeploymentListRequest&,
        DescribeDeploymentListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeEventsOutcome AgsClient::DescribeEvents(const DescribeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventsResponse rsp = DescribeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventsOutcome(rsp);
        else
            return DescribeEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeEventsOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEventsRequest&;
    using Resp = DescribeEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeEventsOutcomeCallable AgsClient::DescribeEventsCallable(const DescribeEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEventsOutcome>>();
    DescribeEventsAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeEventsRequest&,
        DescribeEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribePreCacheImageTaskOutcome AgsClient::DescribePreCacheImageTask(const DescribePreCacheImageTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePreCacheImageTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePreCacheImageTaskResponse rsp = DescribePreCacheImageTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePreCacheImageTaskOutcome(rsp);
        else
            return DescribePreCacheImageTaskOutcome(o.GetError());
    }
    else
    {
        return DescribePreCacheImageTaskOutcome(outcome.GetError());
    }
}

void AgsClient::DescribePreCacheImageTaskAsync(const DescribePreCacheImageTaskRequest& request, const DescribePreCacheImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePreCacheImageTaskRequest&;
    using Resp = DescribePreCacheImageTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePreCacheImageTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribePreCacheImageTaskOutcomeCallable AgsClient::DescribePreCacheImageTaskCallable(const DescribePreCacheImageTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePreCacheImageTaskOutcome>>();
    DescribePreCacheImageTaskAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribePreCacheImageTaskRequest&,
        DescribePreCacheImageTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeQuotaOverviewOutcome AgsClient::DescribeQuotaOverview(const DescribeQuotaOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQuotaOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQuotaOverviewResponse rsp = DescribeQuotaOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQuotaOverviewOutcome(rsp);
        else
            return DescribeQuotaOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeQuotaOverviewOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeQuotaOverviewAsync(const DescribeQuotaOverviewRequest& request, const DescribeQuotaOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQuotaOverviewRequest&;
    using Resp = DescribeQuotaOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQuotaOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeQuotaOverviewOutcomeCallable AgsClient::DescribeQuotaOverviewCallable(const DescribeQuotaOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQuotaOverviewOutcome>>();
    DescribeQuotaOverviewAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeQuotaOverviewRequest&,
        DescribeQuotaOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeRegistryOutcome AgsClient::DescribeRegistry(const DescribeRegistryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegistry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegistryResponse rsp = DescribeRegistryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegistryOutcome(rsp);
        else
            return DescribeRegistryOutcome(o.GetError());
    }
    else
    {
        return DescribeRegistryOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeRegistryAsync(const DescribeRegistryRequest& request, const DescribeRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRegistryRequest&;
    using Resp = DescribeRegistryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegistry", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeRegistryOutcomeCallable AgsClient::DescribeRegistryCallable(const DescribeRegistryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegistryOutcome>>();
    DescribeRegistryAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeRegistryRequest&,
        DescribeRegistryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeRegistryAuditLogListOutcome AgsClient::DescribeRegistryAuditLogList(const DescribeRegistryAuditLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegistryAuditLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegistryAuditLogListResponse rsp = DescribeRegistryAuditLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegistryAuditLogListOutcome(rsp);
        else
            return DescribeRegistryAuditLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeRegistryAuditLogListOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeRegistryAuditLogListAsync(const DescribeRegistryAuditLogListRequest& request, const DescribeRegistryAuditLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRegistryAuditLogListRequest&;
    using Resp = DescribeRegistryAuditLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegistryAuditLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeRegistryAuditLogListOutcomeCallable AgsClient::DescribeRegistryAuditLogListCallable(const DescribeRegistryAuditLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegistryAuditLogListOutcome>>();
    DescribeRegistryAuditLogListAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeRegistryAuditLogListRequest&,
        DescribeRegistryAuditLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeRegistryListOutcome AgsClient::DescribeRegistryList(const DescribeRegistryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegistryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegistryListResponse rsp = DescribeRegistryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegistryListOutcome(rsp);
        else
            return DescribeRegistryListOutcome(o.GetError());
    }
    else
    {
        return DescribeRegistryListOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeRegistryListAsync(const DescribeRegistryListRequest& request, const DescribeRegistryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRegistryListRequest&;
    using Resp = DescribeRegistryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegistryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeRegistryListOutcomeCallable AgsClient::DescribeRegistryListCallable(const DescribeRegistryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegistryListOutcome>>();
    DescribeRegistryListAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeRegistryListRequest&,
        DescribeRegistryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeRegistryRecordOutcome AgsClient::DescribeRegistryRecord(const DescribeRegistryRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegistryRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegistryRecordResponse rsp = DescribeRegistryRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegistryRecordOutcome(rsp);
        else
            return DescribeRegistryRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeRegistryRecordOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeRegistryRecordAsync(const DescribeRegistryRecordRequest& request, const DescribeRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRegistryRecordRequest&;
    using Resp = DescribeRegistryRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegistryRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeRegistryRecordOutcomeCallable AgsClient::DescribeRegistryRecordCallable(const DescribeRegistryRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegistryRecordOutcome>>();
    DescribeRegistryRecordAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeRegistryRecordRequest&,
        DescribeRegistryRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeRegistryRecordListOutcome AgsClient::DescribeRegistryRecordList(const DescribeRegistryRecordListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegistryRecordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegistryRecordListResponse rsp = DescribeRegistryRecordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegistryRecordListOutcome(rsp);
        else
            return DescribeRegistryRecordListOutcome(o.GetError());
    }
    else
    {
        return DescribeRegistryRecordListOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeRegistryRecordListAsync(const DescribeRegistryRecordListRequest& request, const DescribeRegistryRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRegistryRecordListRequest&;
    using Resp = DescribeRegistryRecordListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegistryRecordList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeRegistryRecordListOutcomeCallable AgsClient::DescribeRegistryRecordListCallable(const DescribeRegistryRecordListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegistryRecordListOutcome>>();
    DescribeRegistryRecordListAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeRegistryRecordListRequest&,
        DescribeRegistryRecordListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeRegistryRecordVersionListOutcome AgsClient::DescribeRegistryRecordVersionList(const DescribeRegistryRecordVersionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegistryRecordVersionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegistryRecordVersionListResponse rsp = DescribeRegistryRecordVersionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegistryRecordVersionListOutcome(rsp);
        else
            return DescribeRegistryRecordVersionListOutcome(o.GetError());
    }
    else
    {
        return DescribeRegistryRecordVersionListOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeRegistryRecordVersionListAsync(const DescribeRegistryRecordVersionListRequest& request, const DescribeRegistryRecordVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRegistryRecordVersionListRequest&;
    using Resp = DescribeRegistryRecordVersionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegistryRecordVersionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeRegistryRecordVersionListOutcomeCallable AgsClient::DescribeRegistryRecordVersionListCallable(const DescribeRegistryRecordVersionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegistryRecordVersionListOutcome>>();
    DescribeRegistryRecordVersionListAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeRegistryRecordVersionListRequest&,
        DescribeRegistryRecordVersionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeSandboxInstanceListOutcome AgsClient::DescribeSandboxInstanceList(const DescribeSandboxInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSandboxInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSandboxInstanceListResponse rsp = DescribeSandboxInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSandboxInstanceListOutcome(rsp);
        else
            return DescribeSandboxInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeSandboxInstanceListOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeSandboxInstanceListAsync(const DescribeSandboxInstanceListRequest& request, const DescribeSandboxInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSandboxInstanceListRequest&;
    using Resp = DescribeSandboxInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSandboxInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeSandboxInstanceListOutcomeCallable AgsClient::DescribeSandboxInstanceListCallable(const DescribeSandboxInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSandboxInstanceListOutcome>>();
    DescribeSandboxInstanceListAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeSandboxInstanceListRequest&,
        DescribeSandboxInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeSandboxToolListOutcome AgsClient::DescribeSandboxToolList(const DescribeSandboxToolListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSandboxToolList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSandboxToolListResponse rsp = DescribeSandboxToolListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSandboxToolListOutcome(rsp);
        else
            return DescribeSandboxToolListOutcome(o.GetError());
    }
    else
    {
        return DescribeSandboxToolListOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeSandboxToolListAsync(const DescribeSandboxToolListRequest& request, const DescribeSandboxToolListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSandboxToolListRequest&;
    using Resp = DescribeSandboxToolListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSandboxToolList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeSandboxToolListOutcomeCallable AgsClient::DescribeSandboxToolListCallable(const DescribeSandboxToolListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSandboxToolListOutcome>>();
    DescribeSandboxToolListAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeSandboxToolListRequest&,
        DescribeSandboxToolListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeSessionOutcome AgsClient::DescribeSession(const DescribeSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSessionResponse rsp = DescribeSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSessionOutcome(rsp);
        else
            return DescribeSessionOutcome(o.GetError());
    }
    else
    {
        return DescribeSessionOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeSessionAsync(const DescribeSessionRequest& request, const DescribeSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSessionRequest&;
    using Resp = DescribeSessionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeSessionOutcomeCallable AgsClient::DescribeSessionCallable(const DescribeSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSessionOutcome>>();
    DescribeSessionAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeSessionRequest&,
        DescribeSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeSessionSpaceOutcome AgsClient::DescribeSessionSpace(const DescribeSessionSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSessionSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSessionSpaceResponse rsp = DescribeSessionSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSessionSpaceOutcome(rsp);
        else
            return DescribeSessionSpaceOutcome(o.GetError());
    }
    else
    {
        return DescribeSessionSpaceOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeSessionSpaceAsync(const DescribeSessionSpaceRequest& request, const DescribeSessionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSessionSpaceRequest&;
    using Resp = DescribeSessionSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSessionSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeSessionSpaceOutcomeCallable AgsClient::DescribeSessionSpaceCallable(const DescribeSessionSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSessionSpaceOutcome>>();
    DescribeSessionSpaceAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeSessionSpaceRequest&,
        DescribeSessionSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeSessionSpacesOutcome AgsClient::DescribeSessionSpaces(const DescribeSessionSpacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSessionSpaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSessionSpacesResponse rsp = DescribeSessionSpacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSessionSpacesOutcome(rsp);
        else
            return DescribeSessionSpacesOutcome(o.GetError());
    }
    else
    {
        return DescribeSessionSpacesOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeSessionSpacesAsync(const DescribeSessionSpacesRequest& request, const DescribeSessionSpacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSessionSpacesRequest&;
    using Resp = DescribeSessionSpacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSessionSpaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeSessionSpacesOutcomeCallable AgsClient::DescribeSessionSpacesCallable(const DescribeSessionSpacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSessionSpacesOutcome>>();
    DescribeSessionSpacesAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeSessionSpacesRequest&,
        DescribeSessionSpacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::DescribeSessionsOutcome AgsClient::DescribeSessions(const DescribeSessionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSessions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSessionsResponse rsp = DescribeSessionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSessionsOutcome(rsp);
        else
            return DescribeSessionsOutcome(o.GetError());
    }
    else
    {
        return DescribeSessionsOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeSessionsAsync(const DescribeSessionsRequest& request, const DescribeSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSessionsRequest&;
    using Resp = DescribeSessionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSessions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::DescribeSessionsOutcomeCallable AgsClient::DescribeSessionsCallable(const DescribeSessionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSessionsOutcome>>();
    DescribeSessionsAsync(
    request,
    [prom](
        const AgsClient*,
        const DescribeSessionsRequest&,
        DescribeSessionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::GetSkillPackageDownloadURLOutcome AgsClient::GetSkillPackageDownloadURL(const GetSkillPackageDownloadURLRequest &request)
{
    auto outcome = MakeRequest(request, "GetSkillPackageDownloadURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSkillPackageDownloadURLResponse rsp = GetSkillPackageDownloadURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSkillPackageDownloadURLOutcome(rsp);
        else
            return GetSkillPackageDownloadURLOutcome(o.GetError());
    }
    else
    {
        return GetSkillPackageDownloadURLOutcome(outcome.GetError());
    }
}

void AgsClient::GetSkillPackageDownloadURLAsync(const GetSkillPackageDownloadURLRequest& request, const GetSkillPackageDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetSkillPackageDownloadURLRequest&;
    using Resp = GetSkillPackageDownloadURLResponse;

    DoRequestAsync<Req, Resp>(
        "GetSkillPackageDownloadURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::GetSkillPackageDownloadURLOutcomeCallable AgsClient::GetSkillPackageDownloadURLCallable(const GetSkillPackageDownloadURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetSkillPackageDownloadURLOutcome>>();
    GetSkillPackageDownloadURLAsync(
    request,
    [prom](
        const AgsClient*,
        const GetSkillPackageDownloadURLRequest&,
        GetSkillPackageDownloadURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::GetSkillPackageUploadURLOutcome AgsClient::GetSkillPackageUploadURL(const GetSkillPackageUploadURLRequest &request)
{
    auto outcome = MakeRequest(request, "GetSkillPackageUploadURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSkillPackageUploadURLResponse rsp = GetSkillPackageUploadURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSkillPackageUploadURLOutcome(rsp);
        else
            return GetSkillPackageUploadURLOutcome(o.GetError());
    }
    else
    {
        return GetSkillPackageUploadURLOutcome(outcome.GetError());
    }
}

void AgsClient::GetSkillPackageUploadURLAsync(const GetSkillPackageUploadURLRequest& request, const GetSkillPackageUploadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetSkillPackageUploadURLRequest&;
    using Resp = GetSkillPackageUploadURLResponse;

    DoRequestAsync<Req, Resp>(
        "GetSkillPackageUploadURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::GetSkillPackageUploadURLOutcomeCallable AgsClient::GetSkillPackageUploadURLCallable(const GetSkillPackageUploadURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetSkillPackageUploadURLOutcome>>();
    GetSkillPackageUploadURLAsync(
    request,
    [prom](
        const AgsClient*,
        const GetSkillPackageUploadURLRequest&,
        GetSkillPackageUploadURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::ModifyDeploymentOutcome AgsClient::ModifyDeployment(const ModifyDeploymentRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeployment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeploymentResponse rsp = ModifyDeploymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeploymentOutcome(rsp);
        else
            return ModifyDeploymentOutcome(o.GetError());
    }
    else
    {
        return ModifyDeploymentOutcome(outcome.GetError());
    }
}

void AgsClient::ModifyDeploymentAsync(const ModifyDeploymentRequest& request, const ModifyDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDeploymentRequest&;
    using Resp = ModifyDeploymentResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDeployment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::ModifyDeploymentOutcomeCallable AgsClient::ModifyDeploymentCallable(const ModifyDeploymentRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeploymentOutcome>>();
    ModifyDeploymentAsync(
    request,
    [prom](
        const AgsClient*,
        const ModifyDeploymentRequest&,
        ModifyDeploymentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::ModifySessionOutcome AgsClient::ModifySession(const ModifySessionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySessionResponse rsp = ModifySessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySessionOutcome(rsp);
        else
            return ModifySessionOutcome(o.GetError());
    }
    else
    {
        return ModifySessionOutcome(outcome.GetError());
    }
}

void AgsClient::ModifySessionAsync(const ModifySessionRequest& request, const ModifySessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySessionRequest&;
    using Resp = ModifySessionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::ModifySessionOutcomeCallable AgsClient::ModifySessionCallable(const ModifySessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySessionOutcome>>();
    ModifySessionAsync(
    request,
    [prom](
        const AgsClient*,
        const ModifySessionRequest&,
        ModifySessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::ModifySessionSpaceOutcome AgsClient::ModifySessionSpace(const ModifySessionSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySessionSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySessionSpaceResponse rsp = ModifySessionSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySessionSpaceOutcome(rsp);
        else
            return ModifySessionSpaceOutcome(o.GetError());
    }
    else
    {
        return ModifySessionSpaceOutcome(outcome.GetError());
    }
}

void AgsClient::ModifySessionSpaceAsync(const ModifySessionSpaceRequest& request, const ModifySessionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySessionSpaceRequest&;
    using Resp = ModifySessionSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySessionSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::ModifySessionSpaceOutcomeCallable AgsClient::ModifySessionSpaceCallable(const ModifySessionSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySessionSpaceOutcome>>();
    ModifySessionSpaceAsync(
    request,
    [prom](
        const AgsClient*,
        const ModifySessionSpaceRequest&,
        ModifySessionSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::PauseSandboxInstanceOutcome AgsClient::PauseSandboxInstance(const PauseSandboxInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "PauseSandboxInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseSandboxInstanceResponse rsp = PauseSandboxInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseSandboxInstanceOutcome(rsp);
        else
            return PauseSandboxInstanceOutcome(o.GetError());
    }
    else
    {
        return PauseSandboxInstanceOutcome(outcome.GetError());
    }
}

void AgsClient::PauseSandboxInstanceAsync(const PauseSandboxInstanceRequest& request, const PauseSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PauseSandboxInstanceRequest&;
    using Resp = PauseSandboxInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "PauseSandboxInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::PauseSandboxInstanceOutcomeCallable AgsClient::PauseSandboxInstanceCallable(const PauseSandboxInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<PauseSandboxInstanceOutcome>>();
    PauseSandboxInstanceAsync(
    request,
    [prom](
        const AgsClient*,
        const PauseSandboxInstanceRequest&,
        PauseSandboxInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::PreviewRegistryRecordOutcome AgsClient::PreviewRegistryRecord(const PreviewRegistryRecordRequest &request)
{
    auto outcome = MakeRequest(request, "PreviewRegistryRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PreviewRegistryRecordResponse rsp = PreviewRegistryRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PreviewRegistryRecordOutcome(rsp);
        else
            return PreviewRegistryRecordOutcome(o.GetError());
    }
    else
    {
        return PreviewRegistryRecordOutcome(outcome.GetError());
    }
}

void AgsClient::PreviewRegistryRecordAsync(const PreviewRegistryRecordRequest& request, const PreviewRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PreviewRegistryRecordRequest&;
    using Resp = PreviewRegistryRecordResponse;

    DoRequestAsync<Req, Resp>(
        "PreviewRegistryRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::PreviewRegistryRecordOutcomeCallable AgsClient::PreviewRegistryRecordCallable(const PreviewRegistryRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<PreviewRegistryRecordOutcome>>();
    PreviewRegistryRecordAsync(
    request,
    [prom](
        const AgsClient*,
        const PreviewRegistryRecordRequest&,
        PreviewRegistryRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::RejectRegistryRecordOutcome AgsClient::RejectRegistryRecord(const RejectRegistryRecordRequest &request)
{
    auto outcome = MakeRequest(request, "RejectRegistryRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RejectRegistryRecordResponse rsp = RejectRegistryRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RejectRegistryRecordOutcome(rsp);
        else
            return RejectRegistryRecordOutcome(o.GetError());
    }
    else
    {
        return RejectRegistryRecordOutcome(outcome.GetError());
    }
}

void AgsClient::RejectRegistryRecordAsync(const RejectRegistryRecordRequest& request, const RejectRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RejectRegistryRecordRequest&;
    using Resp = RejectRegistryRecordResponse;

    DoRequestAsync<Req, Resp>(
        "RejectRegistryRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::RejectRegistryRecordOutcomeCallable AgsClient::RejectRegistryRecordCallable(const RejectRegistryRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<RejectRegistryRecordOutcome>>();
    RejectRegistryRecordAsync(
    request,
    [prom](
        const AgsClient*,
        const RejectRegistryRecordRequest&,
        RejectRegistryRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::ResumeSandboxInstanceOutcome AgsClient::ResumeSandboxInstance(const ResumeSandboxInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeSandboxInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeSandboxInstanceResponse rsp = ResumeSandboxInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeSandboxInstanceOutcome(rsp);
        else
            return ResumeSandboxInstanceOutcome(o.GetError());
    }
    else
    {
        return ResumeSandboxInstanceOutcome(outcome.GetError());
    }
}

void AgsClient::ResumeSandboxInstanceAsync(const ResumeSandboxInstanceRequest& request, const ResumeSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeSandboxInstanceRequest&;
    using Resp = ResumeSandboxInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeSandboxInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::ResumeSandboxInstanceOutcomeCallable AgsClient::ResumeSandboxInstanceCallable(const ResumeSandboxInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeSandboxInstanceOutcome>>();
    ResumeSandboxInstanceAsync(
    request,
    [prom](
        const AgsClient*,
        const ResumeSandboxInstanceRequest&,
        ResumeSandboxInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::StartSandboxInstanceOutcome AgsClient::StartSandboxInstance(const StartSandboxInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StartSandboxInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartSandboxInstanceResponse rsp = StartSandboxInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartSandboxInstanceOutcome(rsp);
        else
            return StartSandboxInstanceOutcome(o.GetError());
    }
    else
    {
        return StartSandboxInstanceOutcome(outcome.GetError());
    }
}

void AgsClient::StartSandboxInstanceAsync(const StartSandboxInstanceRequest& request, const StartSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartSandboxInstanceRequest&;
    using Resp = StartSandboxInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "StartSandboxInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::StartSandboxInstanceOutcomeCallable AgsClient::StartSandboxInstanceCallable(const StartSandboxInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartSandboxInstanceOutcome>>();
    StartSandboxInstanceAsync(
    request,
    [prom](
        const AgsClient*,
        const StartSandboxInstanceRequest&,
        StartSandboxInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::StopSandboxInstanceOutcome AgsClient::StopSandboxInstance(const StopSandboxInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StopSandboxInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopSandboxInstanceResponse rsp = StopSandboxInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopSandboxInstanceOutcome(rsp);
        else
            return StopSandboxInstanceOutcome(o.GetError());
    }
    else
    {
        return StopSandboxInstanceOutcome(outcome.GetError());
    }
}

void AgsClient::StopSandboxInstanceAsync(const StopSandboxInstanceRequest& request, const StopSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopSandboxInstanceRequest&;
    using Resp = StopSandboxInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "StopSandboxInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::StopSandboxInstanceOutcomeCallable AgsClient::StopSandboxInstanceCallable(const StopSandboxInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopSandboxInstanceOutcome>>();
    StopSandboxInstanceAsync(
    request,
    [prom](
        const AgsClient*,
        const StopSandboxInstanceRequest&,
        StopSandboxInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::SyncRegistryRecordOutcome AgsClient::SyncRegistryRecord(const SyncRegistryRecordRequest &request)
{
    auto outcome = MakeRequest(request, "SyncRegistryRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncRegistryRecordResponse rsp = SyncRegistryRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncRegistryRecordOutcome(rsp);
        else
            return SyncRegistryRecordOutcome(o.GetError());
    }
    else
    {
        return SyncRegistryRecordOutcome(outcome.GetError());
    }
}

void AgsClient::SyncRegistryRecordAsync(const SyncRegistryRecordRequest& request, const SyncRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncRegistryRecordRequest&;
    using Resp = SyncRegistryRecordResponse;

    DoRequestAsync<Req, Resp>(
        "SyncRegistryRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::SyncRegistryRecordOutcomeCallable AgsClient::SyncRegistryRecordCallable(const SyncRegistryRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncRegistryRecordOutcome>>();
    SyncRegistryRecordAsync(
    request,
    [prom](
        const AgsClient*,
        const SyncRegistryRecordRequest&,
        SyncRegistryRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::UpdateRegistryOutcome AgsClient::UpdateRegistry(const UpdateRegistryRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRegistry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRegistryResponse rsp = UpdateRegistryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRegistryOutcome(rsp);
        else
            return UpdateRegistryOutcome(o.GetError());
    }
    else
    {
        return UpdateRegistryOutcome(outcome.GetError());
    }
}

void AgsClient::UpdateRegistryAsync(const UpdateRegistryRequest& request, const UpdateRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRegistryRequest&;
    using Resp = UpdateRegistryResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRegistry", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::UpdateRegistryOutcomeCallable AgsClient::UpdateRegistryCallable(const UpdateRegistryRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRegistryOutcome>>();
    UpdateRegistryAsync(
    request,
    [prom](
        const AgsClient*,
        const UpdateRegistryRequest&,
        UpdateRegistryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::UpdateRegistryRecordOutcome AgsClient::UpdateRegistryRecord(const UpdateRegistryRecordRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRegistryRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRegistryRecordResponse rsp = UpdateRegistryRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRegistryRecordOutcome(rsp);
        else
            return UpdateRegistryRecordOutcome(o.GetError());
    }
    else
    {
        return UpdateRegistryRecordOutcome(outcome.GetError());
    }
}

void AgsClient::UpdateRegistryRecordAsync(const UpdateRegistryRecordRequest& request, const UpdateRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRegistryRecordRequest&;
    using Resp = UpdateRegistryRecordResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRegistryRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::UpdateRegistryRecordOutcomeCallable AgsClient::UpdateRegistryRecordCallable(const UpdateRegistryRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRegistryRecordOutcome>>();
    UpdateRegistryRecordAsync(
    request,
    [prom](
        const AgsClient*,
        const UpdateRegistryRecordRequest&,
        UpdateRegistryRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::UpdateSandboxInstanceOutcome AgsClient::UpdateSandboxInstance(const UpdateSandboxInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSandboxInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSandboxInstanceResponse rsp = UpdateSandboxInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSandboxInstanceOutcome(rsp);
        else
            return UpdateSandboxInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateSandboxInstanceOutcome(outcome.GetError());
    }
}

void AgsClient::UpdateSandboxInstanceAsync(const UpdateSandboxInstanceRequest& request, const UpdateSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateSandboxInstanceRequest&;
    using Resp = UpdateSandboxInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateSandboxInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::UpdateSandboxInstanceOutcomeCallable AgsClient::UpdateSandboxInstanceCallable(const UpdateSandboxInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateSandboxInstanceOutcome>>();
    UpdateSandboxInstanceAsync(
    request,
    [prom](
        const AgsClient*,
        const UpdateSandboxInstanceRequest&,
        UpdateSandboxInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AgsClient::UpdateSandboxToolOutcome AgsClient::UpdateSandboxTool(const UpdateSandboxToolRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSandboxTool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSandboxToolResponse rsp = UpdateSandboxToolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSandboxToolOutcome(rsp);
        else
            return UpdateSandboxToolOutcome(o.GetError());
    }
    else
    {
        return UpdateSandboxToolOutcome(outcome.GetError());
    }
}

void AgsClient::UpdateSandboxToolAsync(const UpdateSandboxToolRequest& request, const UpdateSandboxToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateSandboxToolRequest&;
    using Resp = UpdateSandboxToolResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateSandboxTool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AgsClient::UpdateSandboxToolOutcomeCallable AgsClient::UpdateSandboxToolCallable(const UpdateSandboxToolRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateSandboxToolOutcome>>();
    UpdateSandboxToolAsync(
    request,
    [prom](
        const AgsClient*,
        const UpdateSandboxToolRequest&,
        UpdateSandboxToolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

