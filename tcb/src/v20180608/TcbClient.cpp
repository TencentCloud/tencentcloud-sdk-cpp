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

#include <tencentcloud/tcb/v20180608/TcbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcb::V20180608;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-06-08";
    const string ENDPOINT = "tcb.tencentcloudapi.com";
}

TcbClient::TcbClient(const Credential &credential, const string &region) :
    TcbClient(credential, region, ClientProfile())
{
}

TcbClient::TcbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcbClient::AddProviderOutcome TcbClient::AddProvider(const AddProviderRequest &request)
{
    auto outcome = MakeRequest(request, "AddProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddProviderResponse rsp = AddProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddProviderOutcome(rsp);
        else
            return AddProviderOutcome(o.GetError());
    }
    else
    {
        return AddProviderOutcome(outcome.GetError());
    }
}

void TcbClient::AddProviderAsync(const AddProviderRequest& request, const AddProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddProviderRequest&;
    using Resp = AddProviderResponse;

    DoRequestAsync<Req, Resp>(
        "AddProvider", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::AddProviderOutcomeCallable TcbClient::AddProviderCallable(const AddProviderRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddProviderOutcome>>();
    AddProviderAsync(
    request,
    [prom](
        const TcbClient*,
        const AddProviderRequest&,
        AddProviderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CheckTcbServiceOutcome TcbClient::CheckTcbService(const CheckTcbServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CheckTcbService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckTcbServiceResponse rsp = CheckTcbServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckTcbServiceOutcome(rsp);
        else
            return CheckTcbServiceOutcome(o.GetError());
    }
    else
    {
        return CheckTcbServiceOutcome(outcome.GetError());
    }
}

void TcbClient::CheckTcbServiceAsync(const CheckTcbServiceRequest& request, const CheckTcbServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckTcbServiceRequest&;
    using Resp = CheckTcbServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CheckTcbService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CheckTcbServiceOutcomeCallable TcbClient::CheckTcbServiceCallable(const CheckTcbServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckTcbServiceOutcome>>();
    CheckTcbServiceAsync(
    request,
    [prom](
        const TcbClient*,
        const CheckTcbServiceRequest&,
        CheckTcbServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateApiKeyOutcome TcbClient::CreateApiKey(const CreateApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApiKeyResponse rsp = CreateApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApiKeyOutcome(rsp);
        else
            return CreateApiKeyOutcome(o.GetError());
    }
    else
    {
        return CreateApiKeyOutcome(outcome.GetError());
    }
}

void TcbClient::CreateApiKeyAsync(const CreateApiKeyRequest& request, const CreateApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApiKeyRequest&;
    using Resp = CreateApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateApiKeyOutcomeCallable TcbClient::CreateApiKeyCallable(const CreateApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApiKeyOutcome>>();
    CreateApiKeyAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateApiKeyRequest&,
        CreateApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateAuthDomainOutcome TcbClient::CreateAuthDomain(const CreateAuthDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuthDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuthDomainResponse rsp = CreateAuthDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuthDomainOutcome(rsp);
        else
            return CreateAuthDomainOutcome(o.GetError());
    }
    else
    {
        return CreateAuthDomainOutcome(outcome.GetError());
    }
}

void TcbClient::CreateAuthDomainAsync(const CreateAuthDomainRequest& request, const CreateAuthDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAuthDomainRequest&;
    using Resp = CreateAuthDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAuthDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateAuthDomainOutcomeCallable TcbClient::CreateAuthDomainCallable(const CreateAuthDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAuthDomainOutcome>>();
    CreateAuthDomainAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateAuthDomainRequest&,
        CreateAuthDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateBillDealOutcome TcbClient::CreateBillDeal(const CreateBillDealRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBillDeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBillDealResponse rsp = CreateBillDealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBillDealOutcome(rsp);
        else
            return CreateBillDealOutcome(o.GetError());
    }
    else
    {
        return CreateBillDealOutcome(outcome.GetError());
    }
}

void TcbClient::CreateBillDealAsync(const CreateBillDealRequest& request, const CreateBillDealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBillDealRequest&;
    using Resp = CreateBillDealResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBillDeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateBillDealOutcomeCallable TcbClient::CreateBillDealCallable(const CreateBillDealRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBillDealOutcome>>();
    CreateBillDealAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateBillDealRequest&,
        CreateBillDealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateCustomLoginKeyOutcome TcbClient::CreateCustomLoginKey(const CreateCustomLoginKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomLoginKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomLoginKeyResponse rsp = CreateCustomLoginKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomLoginKeyOutcome(rsp);
        else
            return CreateCustomLoginKeyOutcome(o.GetError());
    }
    else
    {
        return CreateCustomLoginKeyOutcome(outcome.GetError());
    }
}

void TcbClient::CreateCustomLoginKeyAsync(const CreateCustomLoginKeyRequest& request, const CreateCustomLoginKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomLoginKeyRequest&;
    using Resp = CreateCustomLoginKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomLoginKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateCustomLoginKeyOutcomeCallable TcbClient::CreateCustomLoginKeyCallable(const CreateCustomLoginKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomLoginKeyOutcome>>();
    CreateCustomLoginKeyAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateCustomLoginKeyRequest&,
        CreateCustomLoginKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateEnvOutcome TcbClient::CreateEnv(const CreateEnvRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEnvResponse rsp = CreateEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEnvOutcome(rsp);
        else
            return CreateEnvOutcome(o.GetError());
    }
    else
    {
        return CreateEnvOutcome(outcome.GetError());
    }
}

void TcbClient::CreateEnvAsync(const CreateEnvRequest& request, const CreateEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEnvRequest&;
    using Resp = CreateEnvResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEnv", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateEnvOutcomeCallable TcbClient::CreateEnvCallable(const CreateEnvRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEnvOutcome>>();
    CreateEnvAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateEnvRequest&,
        CreateEnvOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateEnvResourceOutcome TcbClient::CreateEnvResource(const CreateEnvResourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEnvResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEnvResourceResponse rsp = CreateEnvResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEnvResourceOutcome(rsp);
        else
            return CreateEnvResourceOutcome(o.GetError());
    }
    else
    {
        return CreateEnvResourceOutcome(outcome.GetError());
    }
}

void TcbClient::CreateEnvResourceAsync(const CreateEnvResourceRequest& request, const CreateEnvResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEnvResourceRequest&;
    using Resp = CreateEnvResourceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEnvResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateEnvResourceOutcomeCallable TcbClient::CreateEnvResourceCallable(const CreateEnvResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEnvResourceOutcome>>();
    CreateEnvResourceAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateEnvResourceRequest&,
        CreateEnvResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateHTTPServiceRouteOutcome TcbClient::CreateHTTPServiceRoute(const CreateHTTPServiceRouteRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHTTPServiceRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHTTPServiceRouteResponse rsp = CreateHTTPServiceRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHTTPServiceRouteOutcome(rsp);
        else
            return CreateHTTPServiceRouteOutcome(o.GetError());
    }
    else
    {
        return CreateHTTPServiceRouteOutcome(outcome.GetError());
    }
}

void TcbClient::CreateHTTPServiceRouteAsync(const CreateHTTPServiceRouteRequest& request, const CreateHTTPServiceRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHTTPServiceRouteRequest&;
    using Resp = CreateHTTPServiceRouteResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHTTPServiceRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateHTTPServiceRouteOutcomeCallable TcbClient::CreateHTTPServiceRouteCallable(const CreateHTTPServiceRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHTTPServiceRouteOutcome>>();
    CreateHTTPServiceRouteAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateHTTPServiceRouteRequest&,
        CreateHTTPServiceRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateHostingDomainOutcome TcbClient::CreateHostingDomain(const CreateHostingDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHostingDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHostingDomainResponse rsp = CreateHostingDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHostingDomainOutcome(rsp);
        else
            return CreateHostingDomainOutcome(o.GetError());
    }
    else
    {
        return CreateHostingDomainOutcome(outcome.GetError());
    }
}

void TcbClient::CreateHostingDomainAsync(const CreateHostingDomainRequest& request, const CreateHostingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHostingDomainRequest&;
    using Resp = CreateHostingDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHostingDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateHostingDomainOutcomeCallable TcbClient::CreateHostingDomainCallable(const CreateHostingDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHostingDomainOutcome>>();
    CreateHostingDomainAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateHostingDomainRequest&,
        CreateHostingDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateMySQLOutcome TcbClient::CreateMySQL(const CreateMySQLRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMySQL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMySQLResponse rsp = CreateMySQLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMySQLOutcome(rsp);
        else
            return CreateMySQLOutcome(o.GetError());
    }
    else
    {
        return CreateMySQLOutcome(outcome.GetError());
    }
}

void TcbClient::CreateMySQLAsync(const CreateMySQLRequest& request, const CreateMySQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMySQLRequest&;
    using Resp = CreateMySQLResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMySQL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateMySQLOutcomeCallable TcbClient::CreateMySQLCallable(const CreateMySQLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMySQLOutcome>>();
    CreateMySQLAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateMySQLRequest&,
        CreateMySQLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateStaticStoreOutcome TcbClient::CreateStaticStore(const CreateStaticStoreRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStaticStore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStaticStoreResponse rsp = CreateStaticStoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStaticStoreOutcome(rsp);
        else
            return CreateStaticStoreOutcome(o.GetError());
    }
    else
    {
        return CreateStaticStoreOutcome(outcome.GetError());
    }
}

void TcbClient::CreateStaticStoreAsync(const CreateStaticStoreRequest& request, const CreateStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStaticStoreRequest&;
    using Resp = CreateStaticStoreResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStaticStore", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateStaticStoreOutcomeCallable TcbClient::CreateStaticStoreCallable(const CreateStaticStoreRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStaticStoreOutcome>>();
    CreateStaticStoreAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateStaticStoreRequest&,
        CreateStaticStoreOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateTableOutcome TcbClient::CreateTable(const CreateTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTableResponse rsp = CreateTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTableOutcome(rsp);
        else
            return CreateTableOutcome(o.GetError());
    }
    else
    {
        return CreateTableOutcome(outcome.GetError());
    }
}

void TcbClient::CreateTableAsync(const CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTableRequest&;
    using Resp = CreateTableResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateTableOutcomeCallable TcbClient::CreateTableCallable(const CreateTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTableOutcome>>();
    CreateTableAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateTableRequest&,
        CreateTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateUserOutcome TcbClient::CreateUser(const CreateUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserResponse rsp = CreateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserOutcome(rsp);
        else
            return CreateUserOutcome(o.GetError());
    }
    else
    {
        return CreateUserOutcome(outcome.GetError());
    }
}

void TcbClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserRequest&;
    using Resp = CreateUserResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateUserOutcomeCallable TcbClient::CreateUserCallable(const CreateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserOutcome>>();
    CreateUserAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateUserRequest&,
        CreateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateVmInstanceOutcome TcbClient::CreateVmInstance(const CreateVmInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVmInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVmInstanceResponse rsp = CreateVmInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVmInstanceOutcome(rsp);
        else
            return CreateVmInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateVmInstanceOutcome(outcome.GetError());
    }
}

void TcbClient::CreateVmInstanceAsync(const CreateVmInstanceRequest& request, const CreateVmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVmInstanceRequest&;
    using Resp = CreateVmInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVmInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateVmInstanceOutcomeCallable TcbClient::CreateVmInstanceCallable(const CreateVmInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVmInstanceOutcome>>();
    CreateVmInstanceAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateVmInstanceRequest&,
        CreateVmInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DeleteApiKeyOutcome TcbClient::DeleteApiKey(const DeleteApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApiKeyResponse rsp = DeleteApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApiKeyOutcome(rsp);
        else
            return DeleteApiKeyOutcome(o.GetError());
    }
    else
    {
        return DeleteApiKeyOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteApiKeyAsync(const DeleteApiKeyRequest& request, const DeleteApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApiKeyRequest&;
    using Resp = DeleteApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DeleteApiKeyOutcomeCallable TcbClient::DeleteApiKeyCallable(const DeleteApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApiKeyOutcome>>();
    DeleteApiKeyAsync(
    request,
    [prom](
        const TcbClient*,
        const DeleteApiKeyRequest&,
        DeleteApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DeleteAuthDomainOutcome TcbClient::DeleteAuthDomain(const DeleteAuthDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuthDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuthDomainResponse rsp = DeleteAuthDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuthDomainOutcome(rsp);
        else
            return DeleteAuthDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteAuthDomainOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteAuthDomainAsync(const DeleteAuthDomainRequest& request, const DeleteAuthDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAuthDomainRequest&;
    using Resp = DeleteAuthDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAuthDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DeleteAuthDomainOutcomeCallable TcbClient::DeleteAuthDomainCallable(const DeleteAuthDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAuthDomainOutcome>>();
    DeleteAuthDomainAsync(
    request,
    [prom](
        const TcbClient*,
        const DeleteAuthDomainRequest&,
        DeleteAuthDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DeleteHTTPServiceRouteOutcome TcbClient::DeleteHTTPServiceRoute(const DeleteHTTPServiceRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHTTPServiceRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHTTPServiceRouteResponse rsp = DeleteHTTPServiceRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHTTPServiceRouteOutcome(rsp);
        else
            return DeleteHTTPServiceRouteOutcome(o.GetError());
    }
    else
    {
        return DeleteHTTPServiceRouteOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteHTTPServiceRouteAsync(const DeleteHTTPServiceRouteRequest& request, const DeleteHTTPServiceRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteHTTPServiceRouteRequest&;
    using Resp = DeleteHTTPServiceRouteResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteHTTPServiceRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DeleteHTTPServiceRouteOutcomeCallable TcbClient::DeleteHTTPServiceRouteCallable(const DeleteHTTPServiceRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteHTTPServiceRouteOutcome>>();
    DeleteHTTPServiceRouteAsync(
    request,
    [prom](
        const TcbClient*,
        const DeleteHTTPServiceRouteRequest&,
        DeleteHTTPServiceRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DeleteProviderOutcome TcbClient::DeleteProvider(const DeleteProviderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProviderResponse rsp = DeleteProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProviderOutcome(rsp);
        else
            return DeleteProviderOutcome(o.GetError());
    }
    else
    {
        return DeleteProviderOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteProviderAsync(const DeleteProviderRequest& request, const DeleteProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProviderRequest&;
    using Resp = DeleteProviderResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProvider", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DeleteProviderOutcomeCallable TcbClient::DeleteProviderCallable(const DeleteProviderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProviderOutcome>>();
    DeleteProviderAsync(
    request,
    [prom](
        const TcbClient*,
        const DeleteProviderRequest&,
        DeleteProviderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DeleteTableOutcome TcbClient::DeleteTable(const DeleteTableRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTableResponse rsp = DeleteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTableOutcome(rsp);
        else
            return DeleteTableOutcome(o.GetError());
    }
    else
    {
        return DeleteTableOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteTableAsync(const DeleteTableRequest& request, const DeleteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTableRequest&;
    using Resp = DeleteTableResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DeleteTableOutcomeCallable TcbClient::DeleteTableCallable(const DeleteTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTableOutcome>>();
    DeleteTableAsync(
    request,
    [prom](
        const TcbClient*,
        const DeleteTableRequest&,
        DeleteTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DeleteUsersOutcome TcbClient::DeleteUsers(const DeleteUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUsersResponse rsp = DeleteUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUsersOutcome(rsp);
        else
            return DeleteUsersOutcome(o.GetError());
    }
    else
    {
        return DeleteUsersOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteUsersAsync(const DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUsersRequest&;
    using Resp = DeleteUsersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DeleteUsersOutcomeCallable TcbClient::DeleteUsersCallable(const DeleteUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUsersOutcome>>();
    DeleteUsersAsync(
    request,
    [prom](
        const TcbClient*,
        const DeleteUsersRequest&,
        DeleteUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DeleteVmInstanceOutcome TcbClient::DeleteVmInstance(const DeleteVmInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVmInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVmInstanceResponse rsp = DeleteVmInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVmInstanceOutcome(rsp);
        else
            return DeleteVmInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteVmInstanceOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteVmInstanceAsync(const DeleteVmInstanceRequest& request, const DeleteVmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVmInstanceRequest&;
    using Resp = DeleteVmInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVmInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DeleteVmInstanceOutcomeCallable TcbClient::DeleteVmInstanceCallable(const DeleteVmInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVmInstanceOutcome>>();
    DeleteVmInstanceAsync(
    request,
    [prom](
        const TcbClient*,
        const DeleteVmInstanceRequest&,
        DeleteVmInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeApiKeyListOutcome TcbClient::DescribeApiKeyList(const DescribeApiKeyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiKeyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiKeyListResponse rsp = DescribeApiKeyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiKeyListOutcome(rsp);
        else
            return DescribeApiKeyListOutcome(o.GetError());
    }
    else
    {
        return DescribeApiKeyListOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeApiKeyListAsync(const DescribeApiKeyListRequest& request, const DescribeApiKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiKeyListRequest&;
    using Resp = DescribeApiKeyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiKeyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeApiKeyListOutcomeCallable TcbClient::DescribeApiKeyListCallable(const DescribeApiKeyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiKeyListOutcome>>();
    DescribeApiKeyListAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeApiKeyListRequest&,
        DescribeApiKeyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeAuthDomainsOutcome TcbClient::DescribeAuthDomains(const DescribeAuthDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuthDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuthDomainsResponse rsp = DescribeAuthDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuthDomainsOutcome(rsp);
        else
            return DescribeAuthDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeAuthDomainsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeAuthDomainsAsync(const DescribeAuthDomainsRequest& request, const DescribeAuthDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuthDomainsRequest&;
    using Resp = DescribeAuthDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuthDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeAuthDomainsOutcomeCallable TcbClient::DescribeAuthDomainsCallable(const DescribeAuthDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuthDomainsOutcome>>();
    DescribeAuthDomainsAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeAuthDomainsRequest&,
        DescribeAuthDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeBaasPackageListOutcome TcbClient::DescribeBaasPackageList(const DescribeBaasPackageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaasPackageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaasPackageListResponse rsp = DescribeBaasPackageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaasPackageListOutcome(rsp);
        else
            return DescribeBaasPackageListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaasPackageListOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeBaasPackageListAsync(const DescribeBaasPackageListRequest& request, const DescribeBaasPackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaasPackageListRequest&;
    using Resp = DescribeBaasPackageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaasPackageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeBaasPackageListOutcomeCallable TcbClient::DescribeBaasPackageListCallable(const DescribeBaasPackageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaasPackageListOutcome>>();
    DescribeBaasPackageListAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeBaasPackageListRequest&,
        DescribeBaasPackageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeBillingInfoOutcome TcbClient::DescribeBillingInfo(const DescribeBillingInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingInfoResponse rsp = DescribeBillingInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingInfoOutcome(rsp);
        else
            return DescribeBillingInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingInfoOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeBillingInfoAsync(const DescribeBillingInfoRequest& request, const DescribeBillingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillingInfoRequest&;
    using Resp = DescribeBillingInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillingInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeBillingInfoOutcomeCallable TcbClient::DescribeBillingInfoCallable(const DescribeBillingInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillingInfoOutcome>>();
    DescribeBillingInfoAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeBillingInfoRequest&,
        DescribeBillingInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeClientOutcome TcbClient::DescribeClient(const DescribeClientRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClient");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientResponse rsp = DescribeClientResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientOutcome(rsp);
        else
            return DescribeClientOutcome(o.GetError());
    }
    else
    {
        return DescribeClientOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeClientAsync(const DescribeClientRequest& request, const DescribeClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClientRequest&;
    using Resp = DescribeClientResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClient", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeClientOutcomeCallable TcbClient::DescribeClientCallable(const DescribeClientRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClientOutcome>>();
    DescribeClientAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeClientRequest&,
        DescribeClientOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseBuildServiceOutcome TcbClient::DescribeCloudBaseBuildService(const DescribeCloudBaseBuildServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseBuildService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseBuildServiceResponse rsp = DescribeCloudBaseBuildServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseBuildServiceOutcome(rsp);
        else
            return DescribeCloudBaseBuildServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseBuildServiceOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseBuildServiceAsync(const DescribeCloudBaseBuildServiceRequest& request, const DescribeCloudBaseBuildServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseBuildServiceRequest&;
    using Resp = DescribeCloudBaseBuildServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseBuildService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseBuildServiceOutcomeCallable TcbClient::DescribeCloudBaseBuildServiceCallable(const DescribeCloudBaseBuildServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseBuildServiceOutcome>>();
    DescribeCloudBaseBuildServiceAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseBuildServiceRequest&,
        DescribeCloudBaseBuildServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseRunServerVersionOutcome TcbClient::DescribeCloudBaseRunServerVersion(const DescribeCloudBaseRunServerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunServerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunServerVersionResponse rsp = DescribeCloudBaseRunServerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunServerVersionOutcome(rsp);
        else
            return DescribeCloudBaseRunServerVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunServerVersionOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunServerVersionAsync(const DescribeCloudBaseRunServerVersionRequest& request, const DescribeCloudBaseRunServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseRunServerVersionRequest&;
    using Resp = DescribeCloudBaseRunServerVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseRunServerVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseRunServerVersionOutcomeCallable TcbClient::DescribeCloudBaseRunServerVersionCallable(const DescribeCloudBaseRunServerVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseRunServerVersionOutcome>>();
    DescribeCloudBaseRunServerVersionAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseRunServerVersionRequest&,
        DescribeCloudBaseRunServerVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCreateMySQLResultOutcome TcbClient::DescribeCreateMySQLResult(const DescribeCreateMySQLResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCreateMySQLResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCreateMySQLResultResponse rsp = DescribeCreateMySQLResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCreateMySQLResultOutcome(rsp);
        else
            return DescribeCreateMySQLResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCreateMySQLResultOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCreateMySQLResultAsync(const DescribeCreateMySQLResultRequest& request, const DescribeCreateMySQLResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCreateMySQLResultRequest&;
    using Resp = DescribeCreateMySQLResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCreateMySQLResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCreateMySQLResultOutcomeCallable TcbClient::DescribeCreateMySQLResultCallable(const DescribeCreateMySQLResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCreateMySQLResultOutcome>>();
    DescribeCreateMySQLResultAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCreateMySQLResultRequest&,
        DescribeCreateMySQLResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCurveDataOutcome TcbClient::DescribeCurveData(const DescribeCurveDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCurveData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCurveDataResponse rsp = DescribeCurveDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCurveDataOutcome(rsp);
        else
            return DescribeCurveDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCurveDataOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCurveDataAsync(const DescribeCurveDataRequest& request, const DescribeCurveDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCurveDataRequest&;
    using Resp = DescribeCurveDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCurveData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCurveDataOutcomeCallable TcbClient::DescribeCurveDataCallable(const DescribeCurveDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCurveDataOutcome>>();
    DescribeCurveDataAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCurveDataRequest&,
        DescribeCurveDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeDatabaseACLOutcome TcbClient::DescribeDatabaseACL(const DescribeDatabaseACLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseACLResponse rsp = DescribeDatabaseACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseACLOutcome(rsp);
        else
            return DescribeDatabaseACLOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseACLOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeDatabaseACLAsync(const DescribeDatabaseACLRequest& request, const DescribeDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatabaseACLRequest&;
    using Resp = DescribeDatabaseACLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatabaseACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeDatabaseACLOutcomeCallable TcbClient::DescribeDatabaseACLCallable(const DescribeDatabaseACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabaseACLOutcome>>();
    DescribeDatabaseACLAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeDatabaseACLRequest&,
        DescribeDatabaseACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeEnvAccountCircleOutcome TcbClient::DescribeEnvAccountCircle(const DescribeEnvAccountCircleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvAccountCircle");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvAccountCircleResponse rsp = DescribeEnvAccountCircleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvAccountCircleOutcome(rsp);
        else
            return DescribeEnvAccountCircleOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvAccountCircleOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvAccountCircleAsync(const DescribeEnvAccountCircleRequest& request, const DescribeEnvAccountCircleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvAccountCircleRequest&;
    using Resp = DescribeEnvAccountCircleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvAccountCircle", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeEnvAccountCircleOutcomeCallable TcbClient::DescribeEnvAccountCircleCallable(const DescribeEnvAccountCircleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvAccountCircleOutcome>>();
    DescribeEnvAccountCircleAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeEnvAccountCircleRequest&,
        DescribeEnvAccountCircleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeEnvLimitOutcome TcbClient::DescribeEnvLimit(const DescribeEnvLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvLimitResponse rsp = DescribeEnvLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvLimitOutcome(rsp);
        else
            return DescribeEnvLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvLimitOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvLimitAsync(const DescribeEnvLimitRequest& request, const DescribeEnvLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvLimitRequest&;
    using Resp = DescribeEnvLimitResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeEnvLimitOutcomeCallable TcbClient::DescribeEnvLimitCallable(const DescribeEnvLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvLimitOutcome>>();
    DescribeEnvLimitAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeEnvLimitRequest&,
        DescribeEnvLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeEnvsOutcome TcbClient::DescribeEnvs(const DescribeEnvsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvsResponse rsp = DescribeEnvsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvsOutcome(rsp);
        else
            return DescribeEnvsOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvsAsync(const DescribeEnvsRequest& request, const DescribeEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvsRequest&;
    using Resp = DescribeEnvsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeEnvsOutcomeCallable TcbClient::DescribeEnvsCallable(const DescribeEnvsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvsOutcome>>();
    DescribeEnvsAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeEnvsRequest&,
        DescribeEnvsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeGatewayVersionsOutcome TcbClient::DescribeGatewayVersions(const DescribeGatewayVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayVersionsResponse rsp = DescribeGatewayVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayVersionsOutcome(rsp);
        else
            return DescribeGatewayVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayVersionsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeGatewayVersionsAsync(const DescribeGatewayVersionsRequest& request, const DescribeGatewayVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayVersionsRequest&;
    using Resp = DescribeGatewayVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeGatewayVersionsOutcomeCallable TcbClient::DescribeGatewayVersionsCallable(const DescribeGatewayVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayVersionsOutcome>>();
    DescribeGatewayVersionsAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeGatewayVersionsRequest&,
        DescribeGatewayVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeHTTPServiceRouteOutcome TcbClient::DescribeHTTPServiceRoute(const DescribeHTTPServiceRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHTTPServiceRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHTTPServiceRouteResponse rsp = DescribeHTTPServiceRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHTTPServiceRouteOutcome(rsp);
        else
            return DescribeHTTPServiceRouteOutcome(o.GetError());
    }
    else
    {
        return DescribeHTTPServiceRouteOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeHTTPServiceRouteAsync(const DescribeHTTPServiceRouteRequest& request, const DescribeHTTPServiceRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHTTPServiceRouteRequest&;
    using Resp = DescribeHTTPServiceRouteResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHTTPServiceRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeHTTPServiceRouteOutcomeCallable TcbClient::DescribeHTTPServiceRouteCallable(const DescribeHTTPServiceRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHTTPServiceRouteOutcome>>();
    DescribeHTTPServiceRouteAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeHTTPServiceRouteRequest&,
        DescribeHTTPServiceRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeHostingDomainTaskOutcome TcbClient::DescribeHostingDomainTask(const DescribeHostingDomainTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostingDomainTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostingDomainTaskResponse rsp = DescribeHostingDomainTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostingDomainTaskOutcome(rsp);
        else
            return DescribeHostingDomainTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeHostingDomainTaskOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeHostingDomainTaskAsync(const DescribeHostingDomainTaskRequest& request, const DescribeHostingDomainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostingDomainTaskRequest&;
    using Resp = DescribeHostingDomainTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostingDomainTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeHostingDomainTaskOutcomeCallable TcbClient::DescribeHostingDomainTaskCallable(const DescribeHostingDomainTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostingDomainTaskOutcome>>();
    DescribeHostingDomainTaskAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeHostingDomainTaskRequest&,
        DescribeHostingDomainTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeLoginConfigOutcome TcbClient::DescribeLoginConfig(const DescribeLoginConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoginConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoginConfigResponse rsp = DescribeLoginConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoginConfigOutcome(rsp);
        else
            return DescribeLoginConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeLoginConfigOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeLoginConfigAsync(const DescribeLoginConfigRequest& request, const DescribeLoginConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoginConfigRequest&;
    using Resp = DescribeLoginConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoginConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeLoginConfigOutcomeCallable TcbClient::DescribeLoginConfigCallable(const DescribeLoginConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoginConfigOutcome>>();
    DescribeLoginConfigAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeLoginConfigRequest&,
        DescribeLoginConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeMySQLClusterDetailOutcome TcbClient::DescribeMySQLClusterDetail(const DescribeMySQLClusterDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMySQLClusterDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMySQLClusterDetailResponse rsp = DescribeMySQLClusterDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMySQLClusterDetailOutcome(rsp);
        else
            return DescribeMySQLClusterDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMySQLClusterDetailOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeMySQLClusterDetailAsync(const DescribeMySQLClusterDetailRequest& request, const DescribeMySQLClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMySQLClusterDetailRequest&;
    using Resp = DescribeMySQLClusterDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMySQLClusterDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeMySQLClusterDetailOutcomeCallable TcbClient::DescribeMySQLClusterDetailCallable(const DescribeMySQLClusterDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMySQLClusterDetailOutcome>>();
    DescribeMySQLClusterDetailAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeMySQLClusterDetailRequest&,
        DescribeMySQLClusterDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeMySQLTaskStatusOutcome TcbClient::DescribeMySQLTaskStatus(const DescribeMySQLTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMySQLTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMySQLTaskStatusResponse rsp = DescribeMySQLTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMySQLTaskStatusOutcome(rsp);
        else
            return DescribeMySQLTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeMySQLTaskStatusOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeMySQLTaskStatusAsync(const DescribeMySQLTaskStatusRequest& request, const DescribeMySQLTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMySQLTaskStatusRequest&;
    using Resp = DescribeMySQLTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMySQLTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeMySQLTaskStatusOutcomeCallable TcbClient::DescribeMySQLTaskStatusCallable(const DescribeMySQLTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMySQLTaskStatusOutcome>>();
    DescribeMySQLTaskStatusAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeMySQLTaskStatusRequest&,
        DescribeMySQLTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeQuotaDataOutcome TcbClient::DescribeQuotaData(const DescribeQuotaDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQuotaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQuotaDataResponse rsp = DescribeQuotaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQuotaDataOutcome(rsp);
        else
            return DescribeQuotaDataOutcome(o.GetError());
    }
    else
    {
        return DescribeQuotaDataOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeQuotaDataAsync(const DescribeQuotaDataRequest& request, const DescribeQuotaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQuotaDataRequest&;
    using Resp = DescribeQuotaDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQuotaData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeQuotaDataOutcomeCallable TcbClient::DescribeQuotaDataCallable(const DescribeQuotaDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQuotaDataOutcome>>();
    DescribeQuotaDataAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeQuotaDataRequest&,
        DescribeQuotaDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeSafeRuleOutcome TcbClient::DescribeSafeRule(const DescribeSafeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSafeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSafeRuleResponse rsp = DescribeSafeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSafeRuleOutcome(rsp);
        else
            return DescribeSafeRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeSafeRuleOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeSafeRuleAsync(const DescribeSafeRuleRequest& request, const DescribeSafeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSafeRuleRequest&;
    using Resp = DescribeSafeRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSafeRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeSafeRuleOutcomeCallable TcbClient::DescribeSafeRuleCallable(const DescribeSafeRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSafeRuleOutcome>>();
    DescribeSafeRuleAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeSafeRuleRequest&,
        DescribeSafeRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeStaticStoreOutcome TcbClient::DescribeStaticStore(const DescribeStaticStoreRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStaticStore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStaticStoreResponse rsp = DescribeStaticStoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStaticStoreOutcome(rsp);
        else
            return DescribeStaticStoreOutcome(o.GetError());
    }
    else
    {
        return DescribeStaticStoreOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeStaticStoreAsync(const DescribeStaticStoreRequest& request, const DescribeStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStaticStoreRequest&;
    using Resp = DescribeStaticStoreResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStaticStore", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeStaticStoreOutcomeCallable TcbClient::DescribeStaticStoreCallable(const DescribeStaticStoreRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStaticStoreOutcome>>();
    DescribeStaticStoreAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeStaticStoreRequest&,
        DescribeStaticStoreOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeTableOutcome TcbClient::DescribeTable(const DescribeTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableResponse rsp = DescribeTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableOutcome(rsp);
        else
            return DescribeTableOutcome(o.GetError());
    }
    else
    {
        return DescribeTableOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeTableAsync(const DescribeTableRequest& request, const DescribeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableRequest&;
    using Resp = DescribeTableResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeTableOutcomeCallable TcbClient::DescribeTableCallable(const DescribeTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableOutcome>>();
    DescribeTableAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeTableRequest&,
        DescribeTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeTablesOutcome TcbClient::DescribeTables(const DescribeTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablesResponse rsp = DescribeTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablesOutcome(rsp);
        else
            return DescribeTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeTablesOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTablesRequest&;
    using Resp = DescribeTablesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeTablesOutcomeCallable TcbClient::DescribeTablesCallable(const DescribeTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTablesOutcome>>();
    DescribeTablesAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeTablesRequest&,
        DescribeTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeUserListOutcome TcbClient::DescribeUserList(const DescribeUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserListResponse rsp = DescribeUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserListOutcome(rsp);
        else
            return DescribeUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserListOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeUserListAsync(const DescribeUserListRequest& request, const DescribeUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserListRequest&;
    using Resp = DescribeUserListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeUserListOutcomeCallable TcbClient::DescribeUserListCallable(const DescribeUserListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserListOutcome>>();
    DescribeUserListAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeUserListRequest&,
        DescribeUserListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeVmInstancesOutcome TcbClient::DescribeVmInstances(const DescribeVmInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVmInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVmInstancesResponse rsp = DescribeVmInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVmInstancesOutcome(rsp);
        else
            return DescribeVmInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeVmInstancesOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeVmInstancesAsync(const DescribeVmInstancesRequest& request, const DescribeVmInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVmInstancesRequest&;
    using Resp = DescribeVmInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVmInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeVmInstancesOutcomeCallable TcbClient::DescribeVmInstancesCallable(const DescribeVmInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVmInstancesOutcome>>();
    DescribeVmInstancesAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeVmInstancesRequest&,
        DescribeVmInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeVmSpecOutcome TcbClient::DescribeVmSpec(const DescribeVmSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVmSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVmSpecResponse rsp = DescribeVmSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVmSpecOutcome(rsp);
        else
            return DescribeVmSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeVmSpecOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeVmSpecAsync(const DescribeVmSpecRequest& request, const DescribeVmSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVmSpecRequest&;
    using Resp = DescribeVmSpecResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVmSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeVmSpecOutcomeCallable TcbClient::DescribeVmSpecCallable(const DescribeVmSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVmSpecOutcome>>();
    DescribeVmSpecAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeVmSpecRequest&,
        DescribeVmSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DestroyEnvOutcome TcbClient::DestroyEnv(const DestroyEnvRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyEnvResponse rsp = DestroyEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyEnvOutcome(rsp);
        else
            return DestroyEnvOutcome(o.GetError());
    }
    else
    {
        return DestroyEnvOutcome(outcome.GetError());
    }
}

void TcbClient::DestroyEnvAsync(const DestroyEnvRequest& request, const DestroyEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyEnvRequest&;
    using Resp = DestroyEnvResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyEnv", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DestroyEnvOutcomeCallable TcbClient::DestroyEnvCallable(const DestroyEnvRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyEnvOutcome>>();
    DestroyEnvAsync(
    request,
    [prom](
        const TcbClient*,
        const DestroyEnvRequest&,
        DestroyEnvOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DestroyMySQLOutcome TcbClient::DestroyMySQL(const DestroyMySQLRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyMySQL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyMySQLResponse rsp = DestroyMySQLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyMySQLOutcome(rsp);
        else
            return DestroyMySQLOutcome(o.GetError());
    }
    else
    {
        return DestroyMySQLOutcome(outcome.GetError());
    }
}

void TcbClient::DestroyMySQLAsync(const DestroyMySQLRequest& request, const DestroyMySQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyMySQLRequest&;
    using Resp = DestroyMySQLResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyMySQL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DestroyMySQLOutcomeCallable TcbClient::DestroyMySQLCallable(const DestroyMySQLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyMySQLOutcome>>();
    DestroyMySQLAsync(
    request,
    [prom](
        const TcbClient*,
        const DestroyMySQLRequest&,
        DestroyMySQLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DestroyStaticStoreOutcome TcbClient::DestroyStaticStore(const DestroyStaticStoreRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyStaticStore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyStaticStoreResponse rsp = DestroyStaticStoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyStaticStoreOutcome(rsp);
        else
            return DestroyStaticStoreOutcome(o.GetError());
    }
    else
    {
        return DestroyStaticStoreOutcome(outcome.GetError());
    }
}

void TcbClient::DestroyStaticStoreAsync(const DestroyStaticStoreRequest& request, const DestroyStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyStaticStoreRequest&;
    using Resp = DestroyStaticStoreResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyStaticStore", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DestroyStaticStoreOutcomeCallable TcbClient::DestroyStaticStoreCallable(const DestroyStaticStoreRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyStaticStoreOutcome>>();
    DestroyStaticStoreAsync(
    request,
    [prom](
        const TcbClient*,
        const DestroyStaticStoreRequest&,
        DestroyStaticStoreOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::EditAuthConfigOutcome TcbClient::EditAuthConfig(const EditAuthConfigRequest &request)
{
    auto outcome = MakeRequest(request, "EditAuthConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditAuthConfigResponse rsp = EditAuthConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditAuthConfigOutcome(rsp);
        else
            return EditAuthConfigOutcome(o.GetError());
    }
    else
    {
        return EditAuthConfigOutcome(outcome.GetError());
    }
}

void TcbClient::EditAuthConfigAsync(const EditAuthConfigRequest& request, const EditAuthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EditAuthConfigRequest&;
    using Resp = EditAuthConfigResponse;

    DoRequestAsync<Req, Resp>(
        "EditAuthConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::EditAuthConfigOutcomeCallable TcbClient::EditAuthConfigCallable(const EditAuthConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<EditAuthConfigOutcome>>();
    EditAuthConfigAsync(
    request,
    [prom](
        const TcbClient*,
        const EditAuthConfigRequest&,
        EditAuthConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::GetProvidersOutcome TcbClient::GetProviders(const GetProvidersRequest &request)
{
    auto outcome = MakeRequest(request, "GetProviders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetProvidersResponse rsp = GetProvidersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetProvidersOutcome(rsp);
        else
            return GetProvidersOutcome(o.GetError());
    }
    else
    {
        return GetProvidersOutcome(outcome.GetError());
    }
}

void TcbClient::GetProvidersAsync(const GetProvidersRequest& request, const GetProvidersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetProvidersRequest&;
    using Resp = GetProvidersResponse;

    DoRequestAsync<Req, Resp>(
        "GetProviders", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::GetProvidersOutcomeCallable TcbClient::GetProvidersCallable(const GetProvidersRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetProvidersOutcome>>();
    GetProvidersAsync(
    request,
    [prom](
        const TcbClient*,
        const GetProvidersRequest&,
        GetProvidersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::InquireVmPriceOutcome TcbClient::InquireVmPrice(const InquireVmPriceRequest &request)
{
    auto outcome = MakeRequest(request, "InquireVmPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquireVmPriceResponse rsp = InquireVmPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquireVmPriceOutcome(rsp);
        else
            return InquireVmPriceOutcome(o.GetError());
    }
    else
    {
        return InquireVmPriceOutcome(outcome.GetError());
    }
}

void TcbClient::InquireVmPriceAsync(const InquireVmPriceRequest& request, const InquireVmPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquireVmPriceRequest&;
    using Resp = InquireVmPriceResponse;

    DoRequestAsync<Req, Resp>(
        "InquireVmPrice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::InquireVmPriceOutcomeCallable TcbClient::InquireVmPriceCallable(const InquireVmPriceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquireVmPriceOutcome>>();
    InquireVmPriceAsync(
    request,
    [prom](
        const TcbClient*,
        const InquireVmPriceRequest&,
        InquireVmPriceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ListTablesOutcome TcbClient::ListTables(const ListTablesRequest &request)
{
    auto outcome = MakeRequest(request, "ListTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTablesResponse rsp = ListTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTablesOutcome(rsp);
        else
            return ListTablesOutcome(o.GetError());
    }
    else
    {
        return ListTablesOutcome(outcome.GetError());
    }
}

void TcbClient::ListTablesAsync(const ListTablesRequest& request, const ListTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTablesRequest&;
    using Resp = ListTablesResponse;

    DoRequestAsync<Req, Resp>(
        "ListTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ListTablesOutcomeCallable TcbClient::ListTablesCallable(const ListTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTablesOutcome>>();
    ListTablesAsync(
    request,
    [prom](
        const TcbClient*,
        const ListTablesRequest&,
        ListTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifyClientOutcome TcbClient::ModifyClient(const ModifyClientRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClient");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClientResponse rsp = ModifyClientResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClientOutcome(rsp);
        else
            return ModifyClientOutcome(o.GetError());
    }
    else
    {
        return ModifyClientOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyClientAsync(const ModifyClientRequest& request, const ModifyClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClientRequest&;
    using Resp = ModifyClientResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClient", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifyClientOutcomeCallable TcbClient::ModifyClientCallable(const ModifyClientRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClientOutcome>>();
    ModifyClientAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifyClientRequest&,
        ModifyClientOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifyClsTopicOutcome TcbClient::ModifyClsTopic(const ModifyClsTopicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClsTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClsTopicResponse rsp = ModifyClsTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClsTopicOutcome(rsp);
        else
            return ModifyClsTopicOutcome(o.GetError());
    }
    else
    {
        return ModifyClsTopicOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyClsTopicAsync(const ModifyClsTopicRequest& request, const ModifyClsTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClsTopicRequest&;
    using Resp = ModifyClsTopicResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClsTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifyClsTopicOutcomeCallable TcbClient::ModifyClsTopicCallable(const ModifyClsTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClsTopicOutcome>>();
    ModifyClsTopicAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifyClsTopicRequest&,
        ModifyClsTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifyDatabaseACLOutcome TcbClient::ModifyDatabaseACL(const ModifyDatabaseACLRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabaseACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabaseACLResponse rsp = ModifyDatabaseACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabaseACLOutcome(rsp);
        else
            return ModifyDatabaseACLOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabaseACLOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyDatabaseACLAsync(const ModifyDatabaseACLRequest& request, const ModifyDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDatabaseACLRequest&;
    using Resp = ModifyDatabaseACLResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDatabaseACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifyDatabaseACLOutcomeCallable TcbClient::ModifyDatabaseACLCallable(const ModifyDatabaseACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDatabaseACLOutcome>>();
    ModifyDatabaseACLAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifyDatabaseACLRequest&,
        ModifyDatabaseACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifyEnvOutcome TcbClient::ModifyEnv(const ModifyEnvRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnvResponse rsp = ModifyEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnvOutcome(rsp);
        else
            return ModifyEnvOutcome(o.GetError());
    }
    else
    {
        return ModifyEnvOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyEnvAsync(const ModifyEnvRequest& request, const ModifyEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEnvRequest&;
    using Resp = ModifyEnvResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEnv", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifyEnvOutcomeCallable TcbClient::ModifyEnvCallable(const ModifyEnvRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEnvOutcome>>();
    ModifyEnvAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifyEnvRequest&,
        ModifyEnvOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifyEnvPlanOutcome TcbClient::ModifyEnvPlan(const ModifyEnvPlanRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnvPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnvPlanResponse rsp = ModifyEnvPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnvPlanOutcome(rsp);
        else
            return ModifyEnvPlanOutcome(o.GetError());
    }
    else
    {
        return ModifyEnvPlanOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyEnvPlanAsync(const ModifyEnvPlanRequest& request, const ModifyEnvPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEnvPlanRequest&;
    using Resp = ModifyEnvPlanResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEnvPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifyEnvPlanOutcomeCallable TcbClient::ModifyEnvPlanCallable(const ModifyEnvPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEnvPlanOutcome>>();
    ModifyEnvPlanAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifyEnvPlanRequest&,
        ModifyEnvPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifyHTTPServiceRouteOutcome TcbClient::ModifyHTTPServiceRoute(const ModifyHTTPServiceRouteRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHTTPServiceRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHTTPServiceRouteResponse rsp = ModifyHTTPServiceRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHTTPServiceRouteOutcome(rsp);
        else
            return ModifyHTTPServiceRouteOutcome(o.GetError());
    }
    else
    {
        return ModifyHTTPServiceRouteOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyHTTPServiceRouteAsync(const ModifyHTTPServiceRouteRequest& request, const ModifyHTTPServiceRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyHTTPServiceRouteRequest&;
    using Resp = ModifyHTTPServiceRouteResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHTTPServiceRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifyHTTPServiceRouteOutcomeCallable TcbClient::ModifyHTTPServiceRouteCallable(const ModifyHTTPServiceRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHTTPServiceRouteOutcome>>();
    ModifyHTTPServiceRouteAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifyHTTPServiceRouteRequest&,
        ModifyHTTPServiceRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifyLoginConfigOutcome TcbClient::ModifyLoginConfig(const ModifyLoginConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoginConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoginConfigResponse rsp = ModifyLoginConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoginConfigOutcome(rsp);
        else
            return ModifyLoginConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyLoginConfigOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyLoginConfigAsync(const ModifyLoginConfigRequest& request, const ModifyLoginConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLoginConfigRequest&;
    using Resp = ModifyLoginConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoginConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifyLoginConfigOutcomeCallable TcbClient::ModifyLoginConfigCallable(const ModifyLoginConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoginConfigOutcome>>();
    ModifyLoginConfigAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifyLoginConfigRequest&,
        ModifyLoginConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifyProviderOutcome TcbClient::ModifyProvider(const ModifyProviderRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProviderResponse rsp = ModifyProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProviderOutcome(rsp);
        else
            return ModifyProviderOutcome(o.GetError());
    }
    else
    {
        return ModifyProviderOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyProviderAsync(const ModifyProviderRequest& request, const ModifyProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProviderRequest&;
    using Resp = ModifyProviderResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProvider", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifyProviderOutcomeCallable TcbClient::ModifyProviderCallable(const ModifyProviderRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProviderOutcome>>();
    ModifyProviderAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifyProviderRequest&,
        ModifyProviderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifySafeRuleOutcome TcbClient::ModifySafeRule(const ModifySafeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySafeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySafeRuleResponse rsp = ModifySafeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySafeRuleOutcome(rsp);
        else
            return ModifySafeRuleOutcome(o.GetError());
    }
    else
    {
        return ModifySafeRuleOutcome(outcome.GetError());
    }
}

void TcbClient::ModifySafeRuleAsync(const ModifySafeRuleRequest& request, const ModifySafeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySafeRuleRequest&;
    using Resp = ModifySafeRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySafeRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifySafeRuleOutcomeCallable TcbClient::ModifySafeRuleCallable(const ModifySafeRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySafeRuleOutcome>>();
    ModifySafeRuleAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifySafeRuleRequest&,
        ModifySafeRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifyUserOutcome TcbClient::ModifyUser(const ModifyUserRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserResponse rsp = ModifyUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserOutcome(rsp);
        else
            return ModifyUserOutcome(o.GetError());
    }
    else
    {
        return ModifyUserOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserRequest&;
    using Resp = ModifyUserResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifyUserOutcomeCallable TcbClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserOutcome>>();
    ModifyUserAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifyUserRequest&,
        ModifyUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ReinstateEnvOutcome TcbClient::ReinstateEnv(const ReinstateEnvRequest &request)
{
    auto outcome = MakeRequest(request, "ReinstateEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReinstateEnvResponse rsp = ReinstateEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReinstateEnvOutcome(rsp);
        else
            return ReinstateEnvOutcome(o.GetError());
    }
    else
    {
        return ReinstateEnvOutcome(outcome.GetError());
    }
}

void TcbClient::ReinstateEnvAsync(const ReinstateEnvRequest& request, const ReinstateEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReinstateEnvRequest&;
    using Resp = ReinstateEnvResponse;

    DoRequestAsync<Req, Resp>(
        "ReinstateEnv", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ReinstateEnvOutcomeCallable TcbClient::ReinstateEnvCallable(const ReinstateEnvRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReinstateEnvOutcome>>();
    ReinstateEnvAsync(
    request,
    [prom](
        const TcbClient*,
        const ReinstateEnvRequest&,
        ReinstateEnvOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::RenewEnvOutcome TcbClient::RenewEnv(const RenewEnvRequest &request)
{
    auto outcome = MakeRequest(request, "RenewEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewEnvResponse rsp = RenewEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewEnvOutcome(rsp);
        else
            return RenewEnvOutcome(o.GetError());
    }
    else
    {
        return RenewEnvOutcome(outcome.GetError());
    }
}

void TcbClient::RenewEnvAsync(const RenewEnvRequest& request, const RenewEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewEnvRequest&;
    using Resp = RenewEnvResponse;

    DoRequestAsync<Req, Resp>(
        "RenewEnv", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::RenewEnvOutcomeCallable TcbClient::RenewEnvCallable(const RenewEnvRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewEnvOutcome>>();
    RenewEnvAsync(
    request,
    [prom](
        const TcbClient*,
        const RenewEnvRequest&,
        RenewEnvOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::RunCommandsOutcome TcbClient::RunCommands(const RunCommandsRequest &request)
{
    auto outcome = MakeRequest(request, "RunCommands");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunCommandsResponse rsp = RunCommandsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunCommandsOutcome(rsp);
        else
            return RunCommandsOutcome(o.GetError());
    }
    else
    {
        return RunCommandsOutcome(outcome.GetError());
    }
}

void TcbClient::RunCommandsAsync(const RunCommandsRequest& request, const RunCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunCommandsRequest&;
    using Resp = RunCommandsResponse;

    DoRequestAsync<Req, Resp>(
        "RunCommands", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::RunCommandsOutcomeCallable TcbClient::RunCommandsCallable(const RunCommandsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunCommandsOutcome>>();
    RunCommandsAsync(
    request,
    [prom](
        const TcbClient*,
        const RunCommandsRequest&,
        RunCommandsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::RunSqlOutcome TcbClient::RunSql(const RunSqlRequest &request)
{
    auto outcome = MakeRequest(request, "RunSql");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunSqlResponse rsp = RunSqlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunSqlOutcome(rsp);
        else
            return RunSqlOutcome(o.GetError());
    }
    else
    {
        return RunSqlOutcome(outcome.GetError());
    }
}

void TcbClient::RunSqlAsync(const RunSqlRequest& request, const RunSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunSqlRequest&;
    using Resp = RunSqlResponse;

    DoRequestAsync<Req, Resp>(
        "RunSql", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::RunSqlOutcomeCallable TcbClient::RunSqlCallable(const RunSqlRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunSqlOutcome>>();
    RunSqlAsync(
    request,
    [prom](
        const TcbClient*,
        const RunSqlRequest&,
        RunSqlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::SearchClsLogOutcome TcbClient::SearchClsLog(const SearchClsLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchClsLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchClsLogResponse rsp = SearchClsLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchClsLogOutcome(rsp);
        else
            return SearchClsLogOutcome(o.GetError());
    }
    else
    {
        return SearchClsLogOutcome(outcome.GetError());
    }
}

void TcbClient::SearchClsLogAsync(const SearchClsLogRequest& request, const SearchClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchClsLogRequest&;
    using Resp = SearchClsLogResponse;

    DoRequestAsync<Req, Resp>(
        "SearchClsLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::SearchClsLogOutcomeCallable TcbClient::SearchClsLogCallable(const SearchClsLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchClsLogOutcome>>();
    SearchClsLogAsync(
    request,
    [prom](
        const TcbClient*,
        const SearchClsLogRequest&,
        SearchClsLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::UpdateTableOutcome TcbClient::UpdateTable(const UpdateTableRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTableResponse rsp = UpdateTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTableOutcome(rsp);
        else
            return UpdateTableOutcome(o.GetError());
    }
    else
    {
        return UpdateTableOutcome(outcome.GetError());
    }
}

void TcbClient::UpdateTableAsync(const UpdateTableRequest& request, const UpdateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTableRequest&;
    using Resp = UpdateTableResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::UpdateTableOutcomeCallable TcbClient::UpdateTableCallable(const UpdateTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTableOutcome>>();
    UpdateTableAsync(
    request,
    [prom](
        const TcbClient*,
        const UpdateTableRequest&,
        UpdateTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

