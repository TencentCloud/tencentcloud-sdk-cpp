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

#include <tencentcloud/scf/v20180416/ScfClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Scf::V20180416;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-16";
    const string ENDPOINT = "scf.tencentcloudapi.com";
}

ScfClient::ScfClient(const Credential &credential, const string &region) :
    ScfClient(credential, region, ClientProfile())
{
}

ScfClient::ScfClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ScfClient::CopyFunctionOutcome ScfClient::CopyFunction(const CopyFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "CopyFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyFunctionResponse rsp = CopyFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyFunctionOutcome(rsp);
        else
            return CopyFunctionOutcome(o.GetError());
    }
    else
    {
        return CopyFunctionOutcome(outcome.GetError());
    }
}

void ScfClient::CopyFunctionAsync(const CopyFunctionRequest& request, const CopyFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyFunctionRequest&;
    using Resp = CopyFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "CopyFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::CopyFunctionOutcomeCallable ScfClient::CopyFunctionCallable(const CopyFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyFunctionOutcome>>();
    CopyFunctionAsync(
    request,
    [prom](
        const ScfClient*,
        const CopyFunctionRequest&,
        CopyFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::CreateAliasOutcome ScfClient::CreateAlias(const CreateAliasRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAliasResponse rsp = CreateAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAliasOutcome(rsp);
        else
            return CreateAliasOutcome(o.GetError());
    }
    else
    {
        return CreateAliasOutcome(outcome.GetError());
    }
}

void ScfClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAliasRequest&;
    using Resp = CreateAliasResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAlias", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::CreateAliasOutcomeCallable ScfClient::CreateAliasCallable(const CreateAliasRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAliasOutcome>>();
    CreateAliasAsync(
    request,
    [prom](
        const ScfClient*,
        const CreateAliasRequest&,
        CreateAliasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::CreateCustomDomainOutcome ScfClient::CreateCustomDomain(const CreateCustomDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomDomainResponse rsp = CreateCustomDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomDomainOutcome(rsp);
        else
            return CreateCustomDomainOutcome(o.GetError());
    }
    else
    {
        return CreateCustomDomainOutcome(outcome.GetError());
    }
}

void ScfClient::CreateCustomDomainAsync(const CreateCustomDomainRequest& request, const CreateCustomDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomDomainRequest&;
    using Resp = CreateCustomDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::CreateCustomDomainOutcomeCallable ScfClient::CreateCustomDomainCallable(const CreateCustomDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomDomainOutcome>>();
    CreateCustomDomainAsync(
    request,
    [prom](
        const ScfClient*,
        const CreateCustomDomainRequest&,
        CreateCustomDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::CreateFunctionOutcome ScfClient::CreateFunction(const CreateFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFunctionResponse rsp = CreateFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFunctionOutcome(rsp);
        else
            return CreateFunctionOutcome(o.GetError());
    }
    else
    {
        return CreateFunctionOutcome(outcome.GetError());
    }
}

void ScfClient::CreateFunctionAsync(const CreateFunctionRequest& request, const CreateFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFunctionRequest&;
    using Resp = CreateFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::CreateFunctionOutcomeCallable ScfClient::CreateFunctionCallable(const CreateFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFunctionOutcome>>();
    CreateFunctionAsync(
    request,
    [prom](
        const ScfClient*,
        const CreateFunctionRequest&,
        CreateFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::CreateNamespaceOutcome ScfClient::CreateNamespace(const CreateNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNamespaceResponse rsp = CreateNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNamespaceOutcome(rsp);
        else
            return CreateNamespaceOutcome(o.GetError());
    }
    else
    {
        return CreateNamespaceOutcome(outcome.GetError());
    }
}

void ScfClient::CreateNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNamespaceRequest&;
    using Resp = CreateNamespaceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNamespace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::CreateNamespaceOutcomeCallable ScfClient::CreateNamespaceCallable(const CreateNamespaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNamespaceOutcome>>();
    CreateNamespaceAsync(
    request,
    [prom](
        const ScfClient*,
        const CreateNamespaceRequest&,
        CreateNamespaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::CreateTriggerOutcome ScfClient::CreateTrigger(const CreateTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTriggerResponse rsp = CreateTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTriggerOutcome(rsp);
        else
            return CreateTriggerOutcome(o.GetError());
    }
    else
    {
        return CreateTriggerOutcome(outcome.GetError());
    }
}

void ScfClient::CreateTriggerAsync(const CreateTriggerRequest& request, const CreateTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTriggerRequest&;
    using Resp = CreateTriggerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTrigger", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::CreateTriggerOutcomeCallable ScfClient::CreateTriggerCallable(const CreateTriggerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTriggerOutcome>>();
    CreateTriggerAsync(
    request,
    [prom](
        const ScfClient*,
        const CreateTriggerRequest&,
        CreateTriggerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::DeleteAliasOutcome ScfClient::DeleteAlias(const DeleteAliasRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAliasResponse rsp = DeleteAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAliasOutcome(rsp);
        else
            return DeleteAliasOutcome(o.GetError());
    }
    else
    {
        return DeleteAliasOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAliasRequest&;
    using Resp = DeleteAliasResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAlias", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::DeleteAliasOutcomeCallable ScfClient::DeleteAliasCallable(const DeleteAliasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAliasOutcome>>();
    DeleteAliasAsync(
    request,
    [prom](
        const ScfClient*,
        const DeleteAliasRequest&,
        DeleteAliasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::DeleteCustomDomainOutcome ScfClient::DeleteCustomDomain(const DeleteCustomDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomDomainResponse rsp = DeleteCustomDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomDomainOutcome(rsp);
        else
            return DeleteCustomDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomDomainOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteCustomDomainAsync(const DeleteCustomDomainRequest& request, const DeleteCustomDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCustomDomainRequest&;
    using Resp = DeleteCustomDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCustomDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::DeleteCustomDomainOutcomeCallable ScfClient::DeleteCustomDomainCallable(const DeleteCustomDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCustomDomainOutcome>>();
    DeleteCustomDomainAsync(
    request,
    [prom](
        const ScfClient*,
        const DeleteCustomDomainRequest&,
        DeleteCustomDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::DeleteFunctionOutcome ScfClient::DeleteFunction(const DeleteFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFunctionResponse rsp = DeleteFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFunctionOutcome(rsp);
        else
            return DeleteFunctionOutcome(o.GetError());
    }
    else
    {
        return DeleteFunctionOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteFunctionAsync(const DeleteFunctionRequest& request, const DeleteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFunctionRequest&;
    using Resp = DeleteFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::DeleteFunctionOutcomeCallable ScfClient::DeleteFunctionCallable(const DeleteFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFunctionOutcome>>();
    DeleteFunctionAsync(
    request,
    [prom](
        const ScfClient*,
        const DeleteFunctionRequest&,
        DeleteFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::DeleteFunctionVersionOutcome ScfClient::DeleteFunctionVersion(const DeleteFunctionVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFunctionVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFunctionVersionResponse rsp = DeleteFunctionVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFunctionVersionOutcome(rsp);
        else
            return DeleteFunctionVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteFunctionVersionOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteFunctionVersionAsync(const DeleteFunctionVersionRequest& request, const DeleteFunctionVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFunctionVersionRequest&;
    using Resp = DeleteFunctionVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFunctionVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::DeleteFunctionVersionOutcomeCallable ScfClient::DeleteFunctionVersionCallable(const DeleteFunctionVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFunctionVersionOutcome>>();
    DeleteFunctionVersionAsync(
    request,
    [prom](
        const ScfClient*,
        const DeleteFunctionVersionRequest&,
        DeleteFunctionVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::DeleteLayerVersionOutcome ScfClient::DeleteLayerVersion(const DeleteLayerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLayerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLayerVersionResponse rsp = DeleteLayerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLayerVersionOutcome(rsp);
        else
            return DeleteLayerVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteLayerVersionOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteLayerVersionAsync(const DeleteLayerVersionRequest& request, const DeleteLayerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLayerVersionRequest&;
    using Resp = DeleteLayerVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLayerVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::DeleteLayerVersionOutcomeCallable ScfClient::DeleteLayerVersionCallable(const DeleteLayerVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLayerVersionOutcome>>();
    DeleteLayerVersionAsync(
    request,
    [prom](
        const ScfClient*,
        const DeleteLayerVersionRequest&,
        DeleteLayerVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::DeleteNamespaceOutcome ScfClient::DeleteNamespace(const DeleteNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNamespaceResponse rsp = DeleteNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNamespaceOutcome(rsp);
        else
            return DeleteNamespaceOutcome(o.GetError());
    }
    else
    {
        return DeleteNamespaceOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNamespaceRequest&;
    using Resp = DeleteNamespaceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNamespace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::DeleteNamespaceOutcomeCallable ScfClient::DeleteNamespaceCallable(const DeleteNamespaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNamespaceOutcome>>();
    DeleteNamespaceAsync(
    request,
    [prom](
        const ScfClient*,
        const DeleteNamespaceRequest&,
        DeleteNamespaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::DeleteProvisionedConcurrencyConfigOutcome ScfClient::DeleteProvisionedConcurrencyConfig(const DeleteProvisionedConcurrencyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProvisionedConcurrencyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProvisionedConcurrencyConfigResponse rsp = DeleteProvisionedConcurrencyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProvisionedConcurrencyConfigOutcome(rsp);
        else
            return DeleteProvisionedConcurrencyConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteProvisionedConcurrencyConfigOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteProvisionedConcurrencyConfigAsync(const DeleteProvisionedConcurrencyConfigRequest& request, const DeleteProvisionedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProvisionedConcurrencyConfigRequest&;
    using Resp = DeleteProvisionedConcurrencyConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProvisionedConcurrencyConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::DeleteProvisionedConcurrencyConfigOutcomeCallable ScfClient::DeleteProvisionedConcurrencyConfigCallable(const DeleteProvisionedConcurrencyConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProvisionedConcurrencyConfigOutcome>>();
    DeleteProvisionedConcurrencyConfigAsync(
    request,
    [prom](
        const ScfClient*,
        const DeleteProvisionedConcurrencyConfigRequest&,
        DeleteProvisionedConcurrencyConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::DeleteReservedConcurrencyConfigOutcome ScfClient::DeleteReservedConcurrencyConfig(const DeleteReservedConcurrencyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReservedConcurrencyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReservedConcurrencyConfigResponse rsp = DeleteReservedConcurrencyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReservedConcurrencyConfigOutcome(rsp);
        else
            return DeleteReservedConcurrencyConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteReservedConcurrencyConfigOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteReservedConcurrencyConfigAsync(const DeleteReservedConcurrencyConfigRequest& request, const DeleteReservedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReservedConcurrencyConfigRequest&;
    using Resp = DeleteReservedConcurrencyConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReservedConcurrencyConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::DeleteReservedConcurrencyConfigOutcomeCallable ScfClient::DeleteReservedConcurrencyConfigCallable(const DeleteReservedConcurrencyConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReservedConcurrencyConfigOutcome>>();
    DeleteReservedConcurrencyConfigAsync(
    request,
    [prom](
        const ScfClient*,
        const DeleteReservedConcurrencyConfigRequest&,
        DeleteReservedConcurrencyConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::DeleteTriggerOutcome ScfClient::DeleteTrigger(const DeleteTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTriggerResponse rsp = DeleteTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTriggerOutcome(rsp);
        else
            return DeleteTriggerOutcome(o.GetError());
    }
    else
    {
        return DeleteTriggerOutcome(outcome.GetError());
    }
}

void ScfClient::DeleteTriggerAsync(const DeleteTriggerRequest& request, const DeleteTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTriggerRequest&;
    using Resp = DeleteTriggerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTrigger", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::DeleteTriggerOutcomeCallable ScfClient::DeleteTriggerCallable(const DeleteTriggerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTriggerOutcome>>();
    DeleteTriggerAsync(
    request,
    [prom](
        const ScfClient*,
        const DeleteTriggerRequest&,
        DeleteTriggerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::GetAccountOutcome ScfClient::GetAccount(const GetAccountRequest &request)
{
    auto outcome = MakeRequest(request, "GetAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAccountResponse rsp = GetAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAccountOutcome(rsp);
        else
            return GetAccountOutcome(o.GetError());
    }
    else
    {
        return GetAccountOutcome(outcome.GetError());
    }
}

void ScfClient::GetAccountAsync(const GetAccountRequest& request, const GetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAccountRequest&;
    using Resp = GetAccountResponse;

    DoRequestAsync<Req, Resp>(
        "GetAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::GetAccountOutcomeCallable ScfClient::GetAccountCallable(const GetAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAccountOutcome>>();
    GetAccountAsync(
    request,
    [prom](
        const ScfClient*,
        const GetAccountRequest&,
        GetAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::GetAliasOutcome ScfClient::GetAlias(const GetAliasRequest &request)
{
    auto outcome = MakeRequest(request, "GetAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAliasResponse rsp = GetAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAliasOutcome(rsp);
        else
            return GetAliasOutcome(o.GetError());
    }
    else
    {
        return GetAliasOutcome(outcome.GetError());
    }
}

void ScfClient::GetAliasAsync(const GetAliasRequest& request, const GetAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAliasRequest&;
    using Resp = GetAliasResponse;

    DoRequestAsync<Req, Resp>(
        "GetAlias", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::GetAliasOutcomeCallable ScfClient::GetAliasCallable(const GetAliasRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAliasOutcome>>();
    GetAliasAsync(
    request,
    [prom](
        const ScfClient*,
        const GetAliasRequest&,
        GetAliasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::GetAsyncEventStatusOutcome ScfClient::GetAsyncEventStatus(const GetAsyncEventStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetAsyncEventStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAsyncEventStatusResponse rsp = GetAsyncEventStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAsyncEventStatusOutcome(rsp);
        else
            return GetAsyncEventStatusOutcome(o.GetError());
    }
    else
    {
        return GetAsyncEventStatusOutcome(outcome.GetError());
    }
}

void ScfClient::GetAsyncEventStatusAsync(const GetAsyncEventStatusRequest& request, const GetAsyncEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAsyncEventStatusRequest&;
    using Resp = GetAsyncEventStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetAsyncEventStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::GetAsyncEventStatusOutcomeCallable ScfClient::GetAsyncEventStatusCallable(const GetAsyncEventStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAsyncEventStatusOutcome>>();
    GetAsyncEventStatusAsync(
    request,
    [prom](
        const ScfClient*,
        const GetAsyncEventStatusRequest&,
        GetAsyncEventStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::GetCustomDomainOutcome ScfClient::GetCustomDomain(const GetCustomDomainRequest &request)
{
    auto outcome = MakeRequest(request, "GetCustomDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCustomDomainResponse rsp = GetCustomDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCustomDomainOutcome(rsp);
        else
            return GetCustomDomainOutcome(o.GetError());
    }
    else
    {
        return GetCustomDomainOutcome(outcome.GetError());
    }
}

void ScfClient::GetCustomDomainAsync(const GetCustomDomainRequest& request, const GetCustomDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCustomDomainRequest&;
    using Resp = GetCustomDomainResponse;

    DoRequestAsync<Req, Resp>(
        "GetCustomDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::GetCustomDomainOutcomeCallable ScfClient::GetCustomDomainCallable(const GetCustomDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCustomDomainOutcome>>();
    GetCustomDomainAsync(
    request,
    [prom](
        const ScfClient*,
        const GetCustomDomainRequest&,
        GetCustomDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::GetFunctionOutcome ScfClient::GetFunction(const GetFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "GetFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFunctionResponse rsp = GetFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFunctionOutcome(rsp);
        else
            return GetFunctionOutcome(o.GetError());
    }
    else
    {
        return GetFunctionOutcome(outcome.GetError());
    }
}

void ScfClient::GetFunctionAsync(const GetFunctionRequest& request, const GetFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFunctionRequest&;
    using Resp = GetFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "GetFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::GetFunctionOutcomeCallable ScfClient::GetFunctionCallable(const GetFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFunctionOutcome>>();
    GetFunctionAsync(
    request,
    [prom](
        const ScfClient*,
        const GetFunctionRequest&,
        GetFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::GetFunctionAddressOutcome ScfClient::GetFunctionAddress(const GetFunctionAddressRequest &request)
{
    auto outcome = MakeRequest(request, "GetFunctionAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFunctionAddressResponse rsp = GetFunctionAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFunctionAddressOutcome(rsp);
        else
            return GetFunctionAddressOutcome(o.GetError());
    }
    else
    {
        return GetFunctionAddressOutcome(outcome.GetError());
    }
}

void ScfClient::GetFunctionAddressAsync(const GetFunctionAddressRequest& request, const GetFunctionAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFunctionAddressRequest&;
    using Resp = GetFunctionAddressResponse;

    DoRequestAsync<Req, Resp>(
        "GetFunctionAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::GetFunctionAddressOutcomeCallable ScfClient::GetFunctionAddressCallable(const GetFunctionAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFunctionAddressOutcome>>();
    GetFunctionAddressAsync(
    request,
    [prom](
        const ScfClient*,
        const GetFunctionAddressRequest&,
        GetFunctionAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::GetFunctionEventInvokeConfigOutcome ScfClient::GetFunctionEventInvokeConfig(const GetFunctionEventInvokeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "GetFunctionEventInvokeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFunctionEventInvokeConfigResponse rsp = GetFunctionEventInvokeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFunctionEventInvokeConfigOutcome(rsp);
        else
            return GetFunctionEventInvokeConfigOutcome(o.GetError());
    }
    else
    {
        return GetFunctionEventInvokeConfigOutcome(outcome.GetError());
    }
}

void ScfClient::GetFunctionEventInvokeConfigAsync(const GetFunctionEventInvokeConfigRequest& request, const GetFunctionEventInvokeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFunctionEventInvokeConfigRequest&;
    using Resp = GetFunctionEventInvokeConfigResponse;

    DoRequestAsync<Req, Resp>(
        "GetFunctionEventInvokeConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::GetFunctionEventInvokeConfigOutcomeCallable ScfClient::GetFunctionEventInvokeConfigCallable(const GetFunctionEventInvokeConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFunctionEventInvokeConfigOutcome>>();
    GetFunctionEventInvokeConfigAsync(
    request,
    [prom](
        const ScfClient*,
        const GetFunctionEventInvokeConfigRequest&,
        GetFunctionEventInvokeConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::GetFunctionLogsOutcome ScfClient::GetFunctionLogs(const GetFunctionLogsRequest &request)
{
    auto outcome = MakeRequest(request, "GetFunctionLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFunctionLogsResponse rsp = GetFunctionLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFunctionLogsOutcome(rsp);
        else
            return GetFunctionLogsOutcome(o.GetError());
    }
    else
    {
        return GetFunctionLogsOutcome(outcome.GetError());
    }
}

void ScfClient::GetFunctionLogsAsync(const GetFunctionLogsRequest& request, const GetFunctionLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFunctionLogsRequest&;
    using Resp = GetFunctionLogsResponse;

    DoRequestAsync<Req, Resp>(
        "GetFunctionLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::GetFunctionLogsOutcomeCallable ScfClient::GetFunctionLogsCallable(const GetFunctionLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFunctionLogsOutcome>>();
    GetFunctionLogsAsync(
    request,
    [prom](
        const ScfClient*,
        const GetFunctionLogsRequest&,
        GetFunctionLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::GetLayerVersionOutcome ScfClient::GetLayerVersion(const GetLayerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "GetLayerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLayerVersionResponse rsp = GetLayerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLayerVersionOutcome(rsp);
        else
            return GetLayerVersionOutcome(o.GetError());
    }
    else
    {
        return GetLayerVersionOutcome(outcome.GetError());
    }
}

void ScfClient::GetLayerVersionAsync(const GetLayerVersionRequest& request, const GetLayerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLayerVersionRequest&;
    using Resp = GetLayerVersionResponse;

    DoRequestAsync<Req, Resp>(
        "GetLayerVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::GetLayerVersionOutcomeCallable ScfClient::GetLayerVersionCallable(const GetLayerVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLayerVersionOutcome>>();
    GetLayerVersionAsync(
    request,
    [prom](
        const ScfClient*,
        const GetLayerVersionRequest&,
        GetLayerVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::GetProvisionedConcurrencyConfigOutcome ScfClient::GetProvisionedConcurrencyConfig(const GetProvisionedConcurrencyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "GetProvisionedConcurrencyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetProvisionedConcurrencyConfigResponse rsp = GetProvisionedConcurrencyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetProvisionedConcurrencyConfigOutcome(rsp);
        else
            return GetProvisionedConcurrencyConfigOutcome(o.GetError());
    }
    else
    {
        return GetProvisionedConcurrencyConfigOutcome(outcome.GetError());
    }
}

void ScfClient::GetProvisionedConcurrencyConfigAsync(const GetProvisionedConcurrencyConfigRequest& request, const GetProvisionedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetProvisionedConcurrencyConfigRequest&;
    using Resp = GetProvisionedConcurrencyConfigResponse;

    DoRequestAsync<Req, Resp>(
        "GetProvisionedConcurrencyConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::GetProvisionedConcurrencyConfigOutcomeCallable ScfClient::GetProvisionedConcurrencyConfigCallable(const GetProvisionedConcurrencyConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetProvisionedConcurrencyConfigOutcome>>();
    GetProvisionedConcurrencyConfigAsync(
    request,
    [prom](
        const ScfClient*,
        const GetProvisionedConcurrencyConfigRequest&,
        GetProvisionedConcurrencyConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::GetRequestStatusOutcome ScfClient::GetRequestStatus(const GetRequestStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetRequestStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRequestStatusResponse rsp = GetRequestStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRequestStatusOutcome(rsp);
        else
            return GetRequestStatusOutcome(o.GetError());
    }
    else
    {
        return GetRequestStatusOutcome(outcome.GetError());
    }
}

void ScfClient::GetRequestStatusAsync(const GetRequestStatusRequest& request, const GetRequestStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRequestStatusRequest&;
    using Resp = GetRequestStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetRequestStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::GetRequestStatusOutcomeCallable ScfClient::GetRequestStatusCallable(const GetRequestStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRequestStatusOutcome>>();
    GetRequestStatusAsync(
    request,
    [prom](
        const ScfClient*,
        const GetRequestStatusRequest&,
        GetRequestStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::GetReservedConcurrencyConfigOutcome ScfClient::GetReservedConcurrencyConfig(const GetReservedConcurrencyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "GetReservedConcurrencyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetReservedConcurrencyConfigResponse rsp = GetReservedConcurrencyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetReservedConcurrencyConfigOutcome(rsp);
        else
            return GetReservedConcurrencyConfigOutcome(o.GetError());
    }
    else
    {
        return GetReservedConcurrencyConfigOutcome(outcome.GetError());
    }
}

void ScfClient::GetReservedConcurrencyConfigAsync(const GetReservedConcurrencyConfigRequest& request, const GetReservedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetReservedConcurrencyConfigRequest&;
    using Resp = GetReservedConcurrencyConfigResponse;

    DoRequestAsync<Req, Resp>(
        "GetReservedConcurrencyConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::GetReservedConcurrencyConfigOutcomeCallable ScfClient::GetReservedConcurrencyConfigCallable(const GetReservedConcurrencyConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetReservedConcurrencyConfigOutcome>>();
    GetReservedConcurrencyConfigAsync(
    request,
    [prom](
        const ScfClient*,
        const GetReservedConcurrencyConfigRequest&,
        GetReservedConcurrencyConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::InvokeOutcome ScfClient::Invoke(const InvokeRequest &request)
{
    auto outcome = MakeRequest(request, "Invoke");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeResponse rsp = InvokeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeOutcome(rsp);
        else
            return InvokeOutcome(o.GetError());
    }
    else
    {
        return InvokeOutcome(outcome.GetError());
    }
}

void ScfClient::InvokeAsync(const InvokeRequest& request, const InvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InvokeRequest&;
    using Resp = InvokeResponse;

    DoRequestAsync<Req, Resp>(
        "Invoke", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::InvokeOutcomeCallable ScfClient::InvokeCallable(const InvokeRequest &request)
{
    const auto prom = std::make_shared<std::promise<InvokeOutcome>>();
    InvokeAsync(
    request,
    [prom](
        const ScfClient*,
        const InvokeRequest&,
        InvokeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::InvokeFunctionOutcome ScfClient::InvokeFunction(const InvokeFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeFunctionResponse rsp = InvokeFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeFunctionOutcome(rsp);
        else
            return InvokeFunctionOutcome(o.GetError());
    }
    else
    {
        return InvokeFunctionOutcome(outcome.GetError());
    }
}

void ScfClient::InvokeFunctionAsync(const InvokeFunctionRequest& request, const InvokeFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InvokeFunctionRequest&;
    using Resp = InvokeFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "InvokeFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::InvokeFunctionOutcomeCallable ScfClient::InvokeFunctionCallable(const InvokeFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<InvokeFunctionOutcome>>();
    InvokeFunctionAsync(
    request,
    [prom](
        const ScfClient*,
        const InvokeFunctionRequest&,
        InvokeFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::ListAliasesOutcome ScfClient::ListAliases(const ListAliasesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAliases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAliasesResponse rsp = ListAliasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAliasesOutcome(rsp);
        else
            return ListAliasesOutcome(o.GetError());
    }
    else
    {
        return ListAliasesOutcome(outcome.GetError());
    }
}

void ScfClient::ListAliasesAsync(const ListAliasesRequest& request, const ListAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAliasesRequest&;
    using Resp = ListAliasesResponse;

    DoRequestAsync<Req, Resp>(
        "ListAliases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::ListAliasesOutcomeCallable ScfClient::ListAliasesCallable(const ListAliasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAliasesOutcome>>();
    ListAliasesAsync(
    request,
    [prom](
        const ScfClient*,
        const ListAliasesRequest&,
        ListAliasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::ListAsyncEventsOutcome ScfClient::ListAsyncEvents(const ListAsyncEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAsyncEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAsyncEventsResponse rsp = ListAsyncEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAsyncEventsOutcome(rsp);
        else
            return ListAsyncEventsOutcome(o.GetError());
    }
    else
    {
        return ListAsyncEventsOutcome(outcome.GetError());
    }
}

void ScfClient::ListAsyncEventsAsync(const ListAsyncEventsRequest& request, const ListAsyncEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAsyncEventsRequest&;
    using Resp = ListAsyncEventsResponse;

    DoRequestAsync<Req, Resp>(
        "ListAsyncEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::ListAsyncEventsOutcomeCallable ScfClient::ListAsyncEventsCallable(const ListAsyncEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAsyncEventsOutcome>>();
    ListAsyncEventsAsync(
    request,
    [prom](
        const ScfClient*,
        const ListAsyncEventsRequest&,
        ListAsyncEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::ListCustomDomainsOutcome ScfClient::ListCustomDomains(const ListCustomDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "ListCustomDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListCustomDomainsResponse rsp = ListCustomDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListCustomDomainsOutcome(rsp);
        else
            return ListCustomDomainsOutcome(o.GetError());
    }
    else
    {
        return ListCustomDomainsOutcome(outcome.GetError());
    }
}

void ScfClient::ListCustomDomainsAsync(const ListCustomDomainsRequest& request, const ListCustomDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListCustomDomainsRequest&;
    using Resp = ListCustomDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "ListCustomDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::ListCustomDomainsOutcomeCallable ScfClient::ListCustomDomainsCallable(const ListCustomDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListCustomDomainsOutcome>>();
    ListCustomDomainsAsync(
    request,
    [prom](
        const ScfClient*,
        const ListCustomDomainsRequest&,
        ListCustomDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::ListFunctionsOutcome ScfClient::ListFunctions(const ListFunctionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListFunctions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListFunctionsResponse rsp = ListFunctionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListFunctionsOutcome(rsp);
        else
            return ListFunctionsOutcome(o.GetError());
    }
    else
    {
        return ListFunctionsOutcome(outcome.GetError());
    }
}

void ScfClient::ListFunctionsAsync(const ListFunctionsRequest& request, const ListFunctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListFunctionsRequest&;
    using Resp = ListFunctionsResponse;

    DoRequestAsync<Req, Resp>(
        "ListFunctions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::ListFunctionsOutcomeCallable ScfClient::ListFunctionsCallable(const ListFunctionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListFunctionsOutcome>>();
    ListFunctionsAsync(
    request,
    [prom](
        const ScfClient*,
        const ListFunctionsRequest&,
        ListFunctionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::ListLayerVersionsOutcome ScfClient::ListLayerVersions(const ListLayerVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListLayerVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListLayerVersionsResponse rsp = ListLayerVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListLayerVersionsOutcome(rsp);
        else
            return ListLayerVersionsOutcome(o.GetError());
    }
    else
    {
        return ListLayerVersionsOutcome(outcome.GetError());
    }
}

void ScfClient::ListLayerVersionsAsync(const ListLayerVersionsRequest& request, const ListLayerVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListLayerVersionsRequest&;
    using Resp = ListLayerVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "ListLayerVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::ListLayerVersionsOutcomeCallable ScfClient::ListLayerVersionsCallable(const ListLayerVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListLayerVersionsOutcome>>();
    ListLayerVersionsAsync(
    request,
    [prom](
        const ScfClient*,
        const ListLayerVersionsRequest&,
        ListLayerVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::ListLayersOutcome ScfClient::ListLayers(const ListLayersRequest &request)
{
    auto outcome = MakeRequest(request, "ListLayers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListLayersResponse rsp = ListLayersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListLayersOutcome(rsp);
        else
            return ListLayersOutcome(o.GetError());
    }
    else
    {
        return ListLayersOutcome(outcome.GetError());
    }
}

void ScfClient::ListLayersAsync(const ListLayersRequest& request, const ListLayersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListLayersRequest&;
    using Resp = ListLayersResponse;

    DoRequestAsync<Req, Resp>(
        "ListLayers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::ListLayersOutcomeCallable ScfClient::ListLayersCallable(const ListLayersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListLayersOutcome>>();
    ListLayersAsync(
    request,
    [prom](
        const ScfClient*,
        const ListLayersRequest&,
        ListLayersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::ListNamespacesOutcome ScfClient::ListNamespaces(const ListNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "ListNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListNamespacesResponse rsp = ListNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListNamespacesOutcome(rsp);
        else
            return ListNamespacesOutcome(o.GetError());
    }
    else
    {
        return ListNamespacesOutcome(outcome.GetError());
    }
}

void ScfClient::ListNamespacesAsync(const ListNamespacesRequest& request, const ListNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListNamespacesRequest&;
    using Resp = ListNamespacesResponse;

    DoRequestAsync<Req, Resp>(
        "ListNamespaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::ListNamespacesOutcomeCallable ScfClient::ListNamespacesCallable(const ListNamespacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListNamespacesOutcome>>();
    ListNamespacesAsync(
    request,
    [prom](
        const ScfClient*,
        const ListNamespacesRequest&,
        ListNamespacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::ListTriggersOutcome ScfClient::ListTriggers(const ListTriggersRequest &request)
{
    auto outcome = MakeRequest(request, "ListTriggers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTriggersResponse rsp = ListTriggersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTriggersOutcome(rsp);
        else
            return ListTriggersOutcome(o.GetError());
    }
    else
    {
        return ListTriggersOutcome(outcome.GetError());
    }
}

void ScfClient::ListTriggersAsync(const ListTriggersRequest& request, const ListTriggersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTriggersRequest&;
    using Resp = ListTriggersResponse;

    DoRequestAsync<Req, Resp>(
        "ListTriggers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::ListTriggersOutcomeCallable ScfClient::ListTriggersCallable(const ListTriggersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTriggersOutcome>>();
    ListTriggersAsync(
    request,
    [prom](
        const ScfClient*,
        const ListTriggersRequest&,
        ListTriggersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::ListVersionByFunctionOutcome ScfClient::ListVersionByFunction(const ListVersionByFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "ListVersionByFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListVersionByFunctionResponse rsp = ListVersionByFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListVersionByFunctionOutcome(rsp);
        else
            return ListVersionByFunctionOutcome(o.GetError());
    }
    else
    {
        return ListVersionByFunctionOutcome(outcome.GetError());
    }
}

void ScfClient::ListVersionByFunctionAsync(const ListVersionByFunctionRequest& request, const ListVersionByFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListVersionByFunctionRequest&;
    using Resp = ListVersionByFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "ListVersionByFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::ListVersionByFunctionOutcomeCallable ScfClient::ListVersionByFunctionCallable(const ListVersionByFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListVersionByFunctionOutcome>>();
    ListVersionByFunctionAsync(
    request,
    [prom](
        const ScfClient*,
        const ListVersionByFunctionRequest&,
        ListVersionByFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::PublishLayerVersionOutcome ScfClient::PublishLayerVersion(const PublishLayerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "PublishLayerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishLayerVersionResponse rsp = PublishLayerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishLayerVersionOutcome(rsp);
        else
            return PublishLayerVersionOutcome(o.GetError());
    }
    else
    {
        return PublishLayerVersionOutcome(outcome.GetError());
    }
}

void ScfClient::PublishLayerVersionAsync(const PublishLayerVersionRequest& request, const PublishLayerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PublishLayerVersionRequest&;
    using Resp = PublishLayerVersionResponse;

    DoRequestAsync<Req, Resp>(
        "PublishLayerVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::PublishLayerVersionOutcomeCallable ScfClient::PublishLayerVersionCallable(const PublishLayerVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<PublishLayerVersionOutcome>>();
    PublishLayerVersionAsync(
    request,
    [prom](
        const ScfClient*,
        const PublishLayerVersionRequest&,
        PublishLayerVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::PublishVersionOutcome ScfClient::PublishVersion(const PublishVersionRequest &request)
{
    auto outcome = MakeRequest(request, "PublishVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishVersionResponse rsp = PublishVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishVersionOutcome(rsp);
        else
            return PublishVersionOutcome(o.GetError());
    }
    else
    {
        return PublishVersionOutcome(outcome.GetError());
    }
}

void ScfClient::PublishVersionAsync(const PublishVersionRequest& request, const PublishVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PublishVersionRequest&;
    using Resp = PublishVersionResponse;

    DoRequestAsync<Req, Resp>(
        "PublishVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::PublishVersionOutcomeCallable ScfClient::PublishVersionCallable(const PublishVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<PublishVersionOutcome>>();
    PublishVersionAsync(
    request,
    [prom](
        const ScfClient*,
        const PublishVersionRequest&,
        PublishVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::PutProvisionedConcurrencyConfigOutcome ScfClient::PutProvisionedConcurrencyConfig(const PutProvisionedConcurrencyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "PutProvisionedConcurrencyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutProvisionedConcurrencyConfigResponse rsp = PutProvisionedConcurrencyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutProvisionedConcurrencyConfigOutcome(rsp);
        else
            return PutProvisionedConcurrencyConfigOutcome(o.GetError());
    }
    else
    {
        return PutProvisionedConcurrencyConfigOutcome(outcome.GetError());
    }
}

void ScfClient::PutProvisionedConcurrencyConfigAsync(const PutProvisionedConcurrencyConfigRequest& request, const PutProvisionedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PutProvisionedConcurrencyConfigRequest&;
    using Resp = PutProvisionedConcurrencyConfigResponse;

    DoRequestAsync<Req, Resp>(
        "PutProvisionedConcurrencyConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::PutProvisionedConcurrencyConfigOutcomeCallable ScfClient::PutProvisionedConcurrencyConfigCallable(const PutProvisionedConcurrencyConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<PutProvisionedConcurrencyConfigOutcome>>();
    PutProvisionedConcurrencyConfigAsync(
    request,
    [prom](
        const ScfClient*,
        const PutProvisionedConcurrencyConfigRequest&,
        PutProvisionedConcurrencyConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::PutReservedConcurrencyConfigOutcome ScfClient::PutReservedConcurrencyConfig(const PutReservedConcurrencyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "PutReservedConcurrencyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutReservedConcurrencyConfigResponse rsp = PutReservedConcurrencyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutReservedConcurrencyConfigOutcome(rsp);
        else
            return PutReservedConcurrencyConfigOutcome(o.GetError());
    }
    else
    {
        return PutReservedConcurrencyConfigOutcome(outcome.GetError());
    }
}

void ScfClient::PutReservedConcurrencyConfigAsync(const PutReservedConcurrencyConfigRequest& request, const PutReservedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PutReservedConcurrencyConfigRequest&;
    using Resp = PutReservedConcurrencyConfigResponse;

    DoRequestAsync<Req, Resp>(
        "PutReservedConcurrencyConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::PutReservedConcurrencyConfigOutcomeCallable ScfClient::PutReservedConcurrencyConfigCallable(const PutReservedConcurrencyConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<PutReservedConcurrencyConfigOutcome>>();
    PutReservedConcurrencyConfigAsync(
    request,
    [prom](
        const ScfClient*,
        const PutReservedConcurrencyConfigRequest&,
        PutReservedConcurrencyConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::PutTotalConcurrencyConfigOutcome ScfClient::PutTotalConcurrencyConfig(const PutTotalConcurrencyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "PutTotalConcurrencyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutTotalConcurrencyConfigResponse rsp = PutTotalConcurrencyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutTotalConcurrencyConfigOutcome(rsp);
        else
            return PutTotalConcurrencyConfigOutcome(o.GetError());
    }
    else
    {
        return PutTotalConcurrencyConfigOutcome(outcome.GetError());
    }
}

void ScfClient::PutTotalConcurrencyConfigAsync(const PutTotalConcurrencyConfigRequest& request, const PutTotalConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PutTotalConcurrencyConfigRequest&;
    using Resp = PutTotalConcurrencyConfigResponse;

    DoRequestAsync<Req, Resp>(
        "PutTotalConcurrencyConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::PutTotalConcurrencyConfigOutcomeCallable ScfClient::PutTotalConcurrencyConfigCallable(const PutTotalConcurrencyConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<PutTotalConcurrencyConfigOutcome>>();
    PutTotalConcurrencyConfigAsync(
    request,
    [prom](
        const ScfClient*,
        const PutTotalConcurrencyConfigRequest&,
        PutTotalConcurrencyConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::TerminateAsyncEventOutcome ScfClient::TerminateAsyncEvent(const TerminateAsyncEventRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateAsyncEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateAsyncEventResponse rsp = TerminateAsyncEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateAsyncEventOutcome(rsp);
        else
            return TerminateAsyncEventOutcome(o.GetError());
    }
    else
    {
        return TerminateAsyncEventOutcome(outcome.GetError());
    }
}

void ScfClient::TerminateAsyncEventAsync(const TerminateAsyncEventRequest& request, const TerminateAsyncEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateAsyncEventRequest&;
    using Resp = TerminateAsyncEventResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateAsyncEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::TerminateAsyncEventOutcomeCallable ScfClient::TerminateAsyncEventCallable(const TerminateAsyncEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateAsyncEventOutcome>>();
    TerminateAsyncEventAsync(
    request,
    [prom](
        const ScfClient*,
        const TerminateAsyncEventRequest&,
        TerminateAsyncEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::UpdateAliasOutcome ScfClient::UpdateAlias(const UpdateAliasRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAliasResponse rsp = UpdateAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAliasOutcome(rsp);
        else
            return UpdateAliasOutcome(o.GetError());
    }
    else
    {
        return UpdateAliasOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateAliasAsync(const UpdateAliasRequest& request, const UpdateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAliasRequest&;
    using Resp = UpdateAliasResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAlias", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::UpdateAliasOutcomeCallable ScfClient::UpdateAliasCallable(const UpdateAliasRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAliasOutcome>>();
    UpdateAliasAsync(
    request,
    [prom](
        const ScfClient*,
        const UpdateAliasRequest&,
        UpdateAliasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::UpdateCustomDomainOutcome ScfClient::UpdateCustomDomain(const UpdateCustomDomainRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCustomDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCustomDomainResponse rsp = UpdateCustomDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCustomDomainOutcome(rsp);
        else
            return UpdateCustomDomainOutcome(o.GetError());
    }
    else
    {
        return UpdateCustomDomainOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateCustomDomainAsync(const UpdateCustomDomainRequest& request, const UpdateCustomDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCustomDomainRequest&;
    using Resp = UpdateCustomDomainResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCustomDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::UpdateCustomDomainOutcomeCallable ScfClient::UpdateCustomDomainCallable(const UpdateCustomDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCustomDomainOutcome>>();
    UpdateCustomDomainAsync(
    request,
    [prom](
        const ScfClient*,
        const UpdateCustomDomainRequest&,
        UpdateCustomDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::UpdateFunctionCodeOutcome ScfClient::UpdateFunctionCode(const UpdateFunctionCodeRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFunctionCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFunctionCodeResponse rsp = UpdateFunctionCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFunctionCodeOutcome(rsp);
        else
            return UpdateFunctionCodeOutcome(o.GetError());
    }
    else
    {
        return UpdateFunctionCodeOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateFunctionCodeAsync(const UpdateFunctionCodeRequest& request, const UpdateFunctionCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateFunctionCodeRequest&;
    using Resp = UpdateFunctionCodeResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateFunctionCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::UpdateFunctionCodeOutcomeCallable ScfClient::UpdateFunctionCodeCallable(const UpdateFunctionCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateFunctionCodeOutcome>>();
    UpdateFunctionCodeAsync(
    request,
    [prom](
        const ScfClient*,
        const UpdateFunctionCodeRequest&,
        UpdateFunctionCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::UpdateFunctionConfigurationOutcome ScfClient::UpdateFunctionConfiguration(const UpdateFunctionConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFunctionConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFunctionConfigurationResponse rsp = UpdateFunctionConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFunctionConfigurationOutcome(rsp);
        else
            return UpdateFunctionConfigurationOutcome(o.GetError());
    }
    else
    {
        return UpdateFunctionConfigurationOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateFunctionConfigurationAsync(const UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateFunctionConfigurationRequest&;
    using Resp = UpdateFunctionConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateFunctionConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::UpdateFunctionConfigurationOutcomeCallable ScfClient::UpdateFunctionConfigurationCallable(const UpdateFunctionConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateFunctionConfigurationOutcome>>();
    UpdateFunctionConfigurationAsync(
    request,
    [prom](
        const ScfClient*,
        const UpdateFunctionConfigurationRequest&,
        UpdateFunctionConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::UpdateFunctionEventInvokeConfigOutcome ScfClient::UpdateFunctionEventInvokeConfig(const UpdateFunctionEventInvokeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFunctionEventInvokeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFunctionEventInvokeConfigResponse rsp = UpdateFunctionEventInvokeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFunctionEventInvokeConfigOutcome(rsp);
        else
            return UpdateFunctionEventInvokeConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateFunctionEventInvokeConfigOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateFunctionEventInvokeConfigAsync(const UpdateFunctionEventInvokeConfigRequest& request, const UpdateFunctionEventInvokeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateFunctionEventInvokeConfigRequest&;
    using Resp = UpdateFunctionEventInvokeConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateFunctionEventInvokeConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::UpdateFunctionEventInvokeConfigOutcomeCallable ScfClient::UpdateFunctionEventInvokeConfigCallable(const UpdateFunctionEventInvokeConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateFunctionEventInvokeConfigOutcome>>();
    UpdateFunctionEventInvokeConfigAsync(
    request,
    [prom](
        const ScfClient*,
        const UpdateFunctionEventInvokeConfigRequest&,
        UpdateFunctionEventInvokeConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::UpdateNamespaceOutcome ScfClient::UpdateNamespace(const UpdateNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateNamespaceResponse rsp = UpdateNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateNamespaceOutcome(rsp);
        else
            return UpdateNamespaceOutcome(o.GetError());
    }
    else
    {
        return UpdateNamespaceOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateNamespaceAsync(const UpdateNamespaceRequest& request, const UpdateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateNamespaceRequest&;
    using Resp = UpdateNamespaceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateNamespace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::UpdateNamespaceOutcomeCallable ScfClient::UpdateNamespaceCallable(const UpdateNamespaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateNamespaceOutcome>>();
    UpdateNamespaceAsync(
    request,
    [prom](
        const ScfClient*,
        const UpdateNamespaceRequest&,
        UpdateNamespaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::UpdateTriggerOutcome ScfClient::UpdateTrigger(const UpdateTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTriggerResponse rsp = UpdateTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTriggerOutcome(rsp);
        else
            return UpdateTriggerOutcome(o.GetError());
    }
    else
    {
        return UpdateTriggerOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateTriggerAsync(const UpdateTriggerRequest& request, const UpdateTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTriggerRequest&;
    using Resp = UpdateTriggerResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTrigger", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::UpdateTriggerOutcomeCallable ScfClient::UpdateTriggerCallable(const UpdateTriggerRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTriggerOutcome>>();
    UpdateTriggerAsync(
    request,
    [prom](
        const ScfClient*,
        const UpdateTriggerRequest&,
        UpdateTriggerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ScfClient::UpdateTriggerStatusOutcome ScfClient::UpdateTriggerStatus(const UpdateTriggerStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTriggerStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTriggerStatusResponse rsp = UpdateTriggerStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTriggerStatusOutcome(rsp);
        else
            return UpdateTriggerStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateTriggerStatusOutcome(outcome.GetError());
    }
}

void ScfClient::UpdateTriggerStatusAsync(const UpdateTriggerStatusRequest& request, const UpdateTriggerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTriggerStatusRequest&;
    using Resp = UpdateTriggerStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTriggerStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ScfClient::UpdateTriggerStatusOutcomeCallable ScfClient::UpdateTriggerStatusCallable(const UpdateTriggerStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTriggerStatusOutcome>>();
    UpdateTriggerStatusAsync(
    request,
    [prom](
        const ScfClient*,
        const UpdateTriggerStatusRequest&,
        UpdateTriggerStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

