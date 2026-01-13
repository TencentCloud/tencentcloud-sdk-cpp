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

