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

#include <tencentcloud/apis/v20240801/ApisClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Apis::V20240801;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-08-01";
    const string ENDPOINT = "apis.tencentcloudapi.com";
}

ApisClient::ApisClient(const Credential &credential, const string &region) :
    ApisClient(credential, region, ClientProfile())
{
}

ApisClient::ApisClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ApisClient::CreateAgentAppOutcome ApisClient::CreateAgentApp(const CreateAgentAppRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAgentApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAgentAppResponse rsp = CreateAgentAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAgentAppOutcome(rsp);
        else
            return CreateAgentAppOutcome(o.GetError());
    }
    else
    {
        return CreateAgentAppOutcome(outcome.GetError());
    }
}

void ApisClient::CreateAgentAppAsync(const CreateAgentAppRequest& request, const CreateAgentAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAgentAppRequest&;
    using Resp = CreateAgentAppResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAgentApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::CreateAgentAppOutcomeCallable ApisClient::CreateAgentAppCallable(const CreateAgentAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAgentAppOutcome>>();
    CreateAgentAppAsync(
    request,
    [prom](
        const ApisClient*,
        const CreateAgentAppRequest&,
        CreateAgentAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::CreateAgentAppMcpServersOutcome ApisClient::CreateAgentAppMcpServers(const CreateAgentAppMcpServersRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAgentAppMcpServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAgentAppMcpServersResponse rsp = CreateAgentAppMcpServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAgentAppMcpServersOutcome(rsp);
        else
            return CreateAgentAppMcpServersOutcome(o.GetError());
    }
    else
    {
        return CreateAgentAppMcpServersOutcome(outcome.GetError());
    }
}

void ApisClient::CreateAgentAppMcpServersAsync(const CreateAgentAppMcpServersRequest& request, const CreateAgentAppMcpServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAgentAppMcpServersRequest&;
    using Resp = CreateAgentAppMcpServersResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAgentAppMcpServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::CreateAgentAppMcpServersOutcomeCallable ApisClient::CreateAgentAppMcpServersCallable(const CreateAgentAppMcpServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAgentAppMcpServersOutcome>>();
    CreateAgentAppMcpServersAsync(
    request,
    [prom](
        const ApisClient*,
        const CreateAgentAppMcpServersRequest&,
        CreateAgentAppMcpServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::CreateAgentAppModelServicesOutcome ApisClient::CreateAgentAppModelServices(const CreateAgentAppModelServicesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAgentAppModelServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAgentAppModelServicesResponse rsp = CreateAgentAppModelServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAgentAppModelServicesOutcome(rsp);
        else
            return CreateAgentAppModelServicesOutcome(o.GetError());
    }
    else
    {
        return CreateAgentAppModelServicesOutcome(outcome.GetError());
    }
}

void ApisClient::CreateAgentAppModelServicesAsync(const CreateAgentAppModelServicesRequest& request, const CreateAgentAppModelServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAgentAppModelServicesRequest&;
    using Resp = CreateAgentAppModelServicesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAgentAppModelServices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::CreateAgentAppModelServicesOutcomeCallable ApisClient::CreateAgentAppModelServicesCallable(const CreateAgentAppModelServicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAgentAppModelServicesOutcome>>();
    CreateAgentAppModelServicesAsync(
    request,
    [prom](
        const ApisClient*,
        const CreateAgentAppModelServicesRequest&,
        CreateAgentAppModelServicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::CreateAgentCredentialOutcome ApisClient::CreateAgentCredential(const CreateAgentCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAgentCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAgentCredentialResponse rsp = CreateAgentCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAgentCredentialOutcome(rsp);
        else
            return CreateAgentCredentialOutcome(o.GetError());
    }
    else
    {
        return CreateAgentCredentialOutcome(outcome.GetError());
    }
}

void ApisClient::CreateAgentCredentialAsync(const CreateAgentCredentialRequest& request, const CreateAgentCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAgentCredentialRequest&;
    using Resp = CreateAgentCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAgentCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::CreateAgentCredentialOutcomeCallable ApisClient::CreateAgentCredentialCallable(const CreateAgentCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAgentCredentialOutcome>>();
    CreateAgentCredentialAsync(
    request,
    [prom](
        const ApisClient*,
        const CreateAgentCredentialRequest&,
        CreateAgentCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::CreateMcpServerOutcome ApisClient::CreateMcpServer(const CreateMcpServerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMcpServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMcpServerResponse rsp = CreateMcpServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMcpServerOutcome(rsp);
        else
            return CreateMcpServerOutcome(o.GetError());
    }
    else
    {
        return CreateMcpServerOutcome(outcome.GetError());
    }
}

void ApisClient::CreateMcpServerAsync(const CreateMcpServerRequest& request, const CreateMcpServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMcpServerRequest&;
    using Resp = CreateMcpServerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMcpServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::CreateMcpServerOutcomeCallable ApisClient::CreateMcpServerCallable(const CreateMcpServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMcpServerOutcome>>();
    CreateMcpServerAsync(
    request,
    [prom](
        const ApisClient*,
        const CreateMcpServerRequest&,
        CreateMcpServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::CreateModelOutcome ApisClient::CreateModel(const CreateModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModelResponse rsp = CreateModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModelOutcome(rsp);
        else
            return CreateModelOutcome(o.GetError());
    }
    else
    {
        return CreateModelOutcome(outcome.GetError());
    }
}

void ApisClient::CreateModelAsync(const CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateModelRequest&;
    using Resp = CreateModelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::CreateModelOutcomeCallable ApisClient::CreateModelCallable(const CreateModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateModelOutcome>>();
    CreateModelAsync(
    request,
    [prom](
        const ApisClient*,
        const CreateModelRequest&,
        CreateModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::CreateModelServiceOutcome ApisClient::CreateModelService(const CreateModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModelServiceResponse rsp = CreateModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModelServiceOutcome(rsp);
        else
            return CreateModelServiceOutcome(o.GetError());
    }
    else
    {
        return CreateModelServiceOutcome(outcome.GetError());
    }
}

void ApisClient::CreateModelServiceAsync(const CreateModelServiceRequest& request, const CreateModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateModelServiceRequest&;
    using Resp = CreateModelServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateModelService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::CreateModelServiceOutcomeCallable ApisClient::CreateModelServiceCallable(const CreateModelServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateModelServiceOutcome>>();
    CreateModelServiceAsync(
    request,
    [prom](
        const ApisClient*,
        const CreateModelServiceRequest&,
        CreateModelServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DeleteAgentAppOutcome ApisClient::DeleteAgentApp(const DeleteAgentAppRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAgentApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAgentAppResponse rsp = DeleteAgentAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAgentAppOutcome(rsp);
        else
            return DeleteAgentAppOutcome(o.GetError());
    }
    else
    {
        return DeleteAgentAppOutcome(outcome.GetError());
    }
}

void ApisClient::DeleteAgentAppAsync(const DeleteAgentAppRequest& request, const DeleteAgentAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAgentAppRequest&;
    using Resp = DeleteAgentAppResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAgentApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DeleteAgentAppOutcomeCallable ApisClient::DeleteAgentAppCallable(const DeleteAgentAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAgentAppOutcome>>();
    DeleteAgentAppAsync(
    request,
    [prom](
        const ApisClient*,
        const DeleteAgentAppRequest&,
        DeleteAgentAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DeleteAgentAppMcpServersOutcome ApisClient::DeleteAgentAppMcpServers(const DeleteAgentAppMcpServersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAgentAppMcpServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAgentAppMcpServersResponse rsp = DeleteAgentAppMcpServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAgentAppMcpServersOutcome(rsp);
        else
            return DeleteAgentAppMcpServersOutcome(o.GetError());
    }
    else
    {
        return DeleteAgentAppMcpServersOutcome(outcome.GetError());
    }
}

void ApisClient::DeleteAgentAppMcpServersAsync(const DeleteAgentAppMcpServersRequest& request, const DeleteAgentAppMcpServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAgentAppMcpServersRequest&;
    using Resp = DeleteAgentAppMcpServersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAgentAppMcpServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DeleteAgentAppMcpServersOutcomeCallable ApisClient::DeleteAgentAppMcpServersCallable(const DeleteAgentAppMcpServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAgentAppMcpServersOutcome>>();
    DeleteAgentAppMcpServersAsync(
    request,
    [prom](
        const ApisClient*,
        const DeleteAgentAppMcpServersRequest&,
        DeleteAgentAppMcpServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DeleteAgentAppModelServicesOutcome ApisClient::DeleteAgentAppModelServices(const DeleteAgentAppModelServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAgentAppModelServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAgentAppModelServicesResponse rsp = DeleteAgentAppModelServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAgentAppModelServicesOutcome(rsp);
        else
            return DeleteAgentAppModelServicesOutcome(o.GetError());
    }
    else
    {
        return DeleteAgentAppModelServicesOutcome(outcome.GetError());
    }
}

void ApisClient::DeleteAgentAppModelServicesAsync(const DeleteAgentAppModelServicesRequest& request, const DeleteAgentAppModelServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAgentAppModelServicesRequest&;
    using Resp = DeleteAgentAppModelServicesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAgentAppModelServices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DeleteAgentAppModelServicesOutcomeCallable ApisClient::DeleteAgentAppModelServicesCallable(const DeleteAgentAppModelServicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAgentAppModelServicesOutcome>>();
    DeleteAgentAppModelServicesAsync(
    request,
    [prom](
        const ApisClient*,
        const DeleteAgentAppModelServicesRequest&,
        DeleteAgentAppModelServicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DeleteAgentCredentialOutcome ApisClient::DeleteAgentCredential(const DeleteAgentCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAgentCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAgentCredentialResponse rsp = DeleteAgentCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAgentCredentialOutcome(rsp);
        else
            return DeleteAgentCredentialOutcome(o.GetError());
    }
    else
    {
        return DeleteAgentCredentialOutcome(outcome.GetError());
    }
}

void ApisClient::DeleteAgentCredentialAsync(const DeleteAgentCredentialRequest& request, const DeleteAgentCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAgentCredentialRequest&;
    using Resp = DeleteAgentCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAgentCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DeleteAgentCredentialOutcomeCallable ApisClient::DeleteAgentCredentialCallable(const DeleteAgentCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAgentCredentialOutcome>>();
    DeleteAgentCredentialAsync(
    request,
    [prom](
        const ApisClient*,
        const DeleteAgentCredentialRequest&,
        DeleteAgentCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DeleteMcpServerOutcome ApisClient::DeleteMcpServer(const DeleteMcpServerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMcpServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMcpServerResponse rsp = DeleteMcpServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMcpServerOutcome(rsp);
        else
            return DeleteMcpServerOutcome(o.GetError());
    }
    else
    {
        return DeleteMcpServerOutcome(outcome.GetError());
    }
}

void ApisClient::DeleteMcpServerAsync(const DeleteMcpServerRequest& request, const DeleteMcpServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMcpServerRequest&;
    using Resp = DeleteMcpServerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMcpServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DeleteMcpServerOutcomeCallable ApisClient::DeleteMcpServerCallable(const DeleteMcpServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMcpServerOutcome>>();
    DeleteMcpServerAsync(
    request,
    [prom](
        const ApisClient*,
        const DeleteMcpServerRequest&,
        DeleteMcpServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DeleteModelOutcome ApisClient::DeleteModel(const DeleteModelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModelResponse rsp = DeleteModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModelOutcome(rsp);
        else
            return DeleteModelOutcome(o.GetError());
    }
    else
    {
        return DeleteModelOutcome(outcome.GetError());
    }
}

void ApisClient::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteModelRequest&;
    using Resp = DeleteModelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DeleteModelOutcomeCallable ApisClient::DeleteModelCallable(const DeleteModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteModelOutcome>>();
    DeleteModelAsync(
    request,
    [prom](
        const ApisClient*,
        const DeleteModelRequest&,
        DeleteModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DeleteModelServiceOutcome ApisClient::DeleteModelService(const DeleteModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModelServiceResponse rsp = DeleteModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModelServiceOutcome(rsp);
        else
            return DeleteModelServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteModelServiceOutcome(outcome.GetError());
    }
}

void ApisClient::DeleteModelServiceAsync(const DeleteModelServiceRequest& request, const DeleteModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteModelServiceRequest&;
    using Resp = DeleteModelServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteModelService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DeleteModelServiceOutcomeCallable ApisClient::DeleteModelServiceCallable(const DeleteModelServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteModelServiceOutcome>>();
    DeleteModelServiceAsync(
    request,
    [prom](
        const ApisClient*,
        const DeleteModelServiceRequest&,
        DeleteModelServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DescribeAgentAppOutcome ApisClient::DescribeAgentApp(const DescribeAgentAppRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentAppResponse rsp = DescribeAgentAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentAppOutcome(rsp);
        else
            return DescribeAgentAppOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentAppOutcome(outcome.GetError());
    }
}

void ApisClient::DescribeAgentAppAsync(const DescribeAgentAppRequest& request, const DescribeAgentAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentAppRequest&;
    using Resp = DescribeAgentAppResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DescribeAgentAppOutcomeCallable ApisClient::DescribeAgentAppCallable(const DescribeAgentAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentAppOutcome>>();
    DescribeAgentAppAsync(
    request,
    [prom](
        const ApisClient*,
        const DescribeAgentAppRequest&,
        DescribeAgentAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DescribeAgentAppMcpServersOutcome ApisClient::DescribeAgentAppMcpServers(const DescribeAgentAppMcpServersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentAppMcpServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentAppMcpServersResponse rsp = DescribeAgentAppMcpServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentAppMcpServersOutcome(rsp);
        else
            return DescribeAgentAppMcpServersOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentAppMcpServersOutcome(outcome.GetError());
    }
}

void ApisClient::DescribeAgentAppMcpServersAsync(const DescribeAgentAppMcpServersRequest& request, const DescribeAgentAppMcpServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentAppMcpServersRequest&;
    using Resp = DescribeAgentAppMcpServersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentAppMcpServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DescribeAgentAppMcpServersOutcomeCallable ApisClient::DescribeAgentAppMcpServersCallable(const DescribeAgentAppMcpServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentAppMcpServersOutcome>>();
    DescribeAgentAppMcpServersAsync(
    request,
    [prom](
        const ApisClient*,
        const DescribeAgentAppMcpServersRequest&,
        DescribeAgentAppMcpServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DescribeAgentAppModelServicesOutcome ApisClient::DescribeAgentAppModelServices(const DescribeAgentAppModelServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentAppModelServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentAppModelServicesResponse rsp = DescribeAgentAppModelServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentAppModelServicesOutcome(rsp);
        else
            return DescribeAgentAppModelServicesOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentAppModelServicesOutcome(outcome.GetError());
    }
}

void ApisClient::DescribeAgentAppModelServicesAsync(const DescribeAgentAppModelServicesRequest& request, const DescribeAgentAppModelServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentAppModelServicesRequest&;
    using Resp = DescribeAgentAppModelServicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentAppModelServices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DescribeAgentAppModelServicesOutcomeCallable ApisClient::DescribeAgentAppModelServicesCallable(const DescribeAgentAppModelServicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentAppModelServicesOutcome>>();
    DescribeAgentAppModelServicesAsync(
    request,
    [prom](
        const ApisClient*,
        const DescribeAgentAppModelServicesRequest&,
        DescribeAgentAppModelServicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DescribeAgentAppsOutcome ApisClient::DescribeAgentApps(const DescribeAgentAppsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentApps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentAppsResponse rsp = DescribeAgentAppsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentAppsOutcome(rsp);
        else
            return DescribeAgentAppsOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentAppsOutcome(outcome.GetError());
    }
}

void ApisClient::DescribeAgentAppsAsync(const DescribeAgentAppsRequest& request, const DescribeAgentAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentAppsRequest&;
    using Resp = DescribeAgentAppsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentApps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DescribeAgentAppsOutcomeCallable ApisClient::DescribeAgentAppsCallable(const DescribeAgentAppsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentAppsOutcome>>();
    DescribeAgentAppsAsync(
    request,
    [prom](
        const ApisClient*,
        const DescribeAgentAppsRequest&,
        DescribeAgentAppsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DescribeAgentCredentialOutcome ApisClient::DescribeAgentCredential(const DescribeAgentCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentCredentialResponse rsp = DescribeAgentCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentCredentialOutcome(rsp);
        else
            return DescribeAgentCredentialOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentCredentialOutcome(outcome.GetError());
    }
}

void ApisClient::DescribeAgentCredentialAsync(const DescribeAgentCredentialRequest& request, const DescribeAgentCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentCredentialRequest&;
    using Resp = DescribeAgentCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DescribeAgentCredentialOutcomeCallable ApisClient::DescribeAgentCredentialCallable(const DescribeAgentCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentCredentialOutcome>>();
    DescribeAgentCredentialAsync(
    request,
    [prom](
        const ApisClient*,
        const DescribeAgentCredentialRequest&,
        DescribeAgentCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DescribeAgentCredentialsOutcome ApisClient::DescribeAgentCredentials(const DescribeAgentCredentialsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentCredentials");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentCredentialsResponse rsp = DescribeAgentCredentialsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentCredentialsOutcome(rsp);
        else
            return DescribeAgentCredentialsOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentCredentialsOutcome(outcome.GetError());
    }
}

void ApisClient::DescribeAgentCredentialsAsync(const DescribeAgentCredentialsRequest& request, const DescribeAgentCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentCredentialsRequest&;
    using Resp = DescribeAgentCredentialsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentCredentials", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DescribeAgentCredentialsOutcomeCallable ApisClient::DescribeAgentCredentialsCallable(const DescribeAgentCredentialsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentCredentialsOutcome>>();
    DescribeAgentCredentialsAsync(
    request,
    [prom](
        const ApisClient*,
        const DescribeAgentCredentialsRequest&,
        DescribeAgentCredentialsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DescribeMcpServerOutcome ApisClient::DescribeMcpServer(const DescribeMcpServerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMcpServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMcpServerResponse rsp = DescribeMcpServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMcpServerOutcome(rsp);
        else
            return DescribeMcpServerOutcome(o.GetError());
    }
    else
    {
        return DescribeMcpServerOutcome(outcome.GetError());
    }
}

void ApisClient::DescribeMcpServerAsync(const DescribeMcpServerRequest& request, const DescribeMcpServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMcpServerRequest&;
    using Resp = DescribeMcpServerResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMcpServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DescribeMcpServerOutcomeCallable ApisClient::DescribeMcpServerCallable(const DescribeMcpServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMcpServerOutcome>>();
    DescribeMcpServerAsync(
    request,
    [prom](
        const ApisClient*,
        const DescribeMcpServerRequest&,
        DescribeMcpServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DescribeMcpServersOutcome ApisClient::DescribeMcpServers(const DescribeMcpServersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMcpServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMcpServersResponse rsp = DescribeMcpServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMcpServersOutcome(rsp);
        else
            return DescribeMcpServersOutcome(o.GetError());
    }
    else
    {
        return DescribeMcpServersOutcome(outcome.GetError());
    }
}

void ApisClient::DescribeMcpServersAsync(const DescribeMcpServersRequest& request, const DescribeMcpServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMcpServersRequest&;
    using Resp = DescribeMcpServersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMcpServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DescribeMcpServersOutcomeCallable ApisClient::DescribeMcpServersCallable(const DescribeMcpServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMcpServersOutcome>>();
    DescribeMcpServersAsync(
    request,
    [prom](
        const ApisClient*,
        const DescribeMcpServersRequest&,
        DescribeMcpServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DescribeModelOutcome ApisClient::DescribeModel(const DescribeModelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelResponse rsp = DescribeModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelOutcome(rsp);
        else
            return DescribeModelOutcome(o.GetError());
    }
    else
    {
        return DescribeModelOutcome(outcome.GetError());
    }
}

void ApisClient::DescribeModelAsync(const DescribeModelRequest& request, const DescribeModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelRequest&;
    using Resp = DescribeModelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DescribeModelOutcomeCallable ApisClient::DescribeModelCallable(const DescribeModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelOutcome>>();
    DescribeModelAsync(
    request,
    [prom](
        const ApisClient*,
        const DescribeModelRequest&,
        DescribeModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DescribeModelServiceOutcome ApisClient::DescribeModelService(const DescribeModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServiceResponse rsp = DescribeModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServiceOutcome(rsp);
        else
            return DescribeModelServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServiceOutcome(outcome.GetError());
    }
}

void ApisClient::DescribeModelServiceAsync(const DescribeModelServiceRequest& request, const DescribeModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelServiceRequest&;
    using Resp = DescribeModelServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DescribeModelServiceOutcomeCallable ApisClient::DescribeModelServiceCallable(const DescribeModelServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelServiceOutcome>>();
    DescribeModelServiceAsync(
    request,
    [prom](
        const ApisClient*,
        const DescribeModelServiceRequest&,
        DescribeModelServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DescribeModelServicesOutcome ApisClient::DescribeModelServices(const DescribeModelServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServicesResponse rsp = DescribeModelServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServicesOutcome(rsp);
        else
            return DescribeModelServicesOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServicesOutcome(outcome.GetError());
    }
}

void ApisClient::DescribeModelServicesAsync(const DescribeModelServicesRequest& request, const DescribeModelServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelServicesRequest&;
    using Resp = DescribeModelServicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelServices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DescribeModelServicesOutcomeCallable ApisClient::DescribeModelServicesCallable(const DescribeModelServicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelServicesOutcome>>();
    DescribeModelServicesAsync(
    request,
    [prom](
        const ApisClient*,
        const DescribeModelServicesRequest&,
        DescribeModelServicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::DescribeModelsOutcome ApisClient::DescribeModels(const DescribeModelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelsResponse rsp = DescribeModelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelsOutcome(rsp);
        else
            return DescribeModelsOutcome(o.GetError());
    }
    else
    {
        return DescribeModelsOutcome(outcome.GetError());
    }
}

void ApisClient::DescribeModelsAsync(const DescribeModelsRequest& request, const DescribeModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelsRequest&;
    using Resp = DescribeModelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::DescribeModelsOutcomeCallable ApisClient::DescribeModelsCallable(const DescribeModelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelsOutcome>>();
    DescribeModelsAsync(
    request,
    [prom](
        const ApisClient*,
        const DescribeModelsRequest&,
        DescribeModelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::ModifyAgentAppOutcome ApisClient::ModifyAgentApp(const ModifyAgentAppRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAgentApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAgentAppResponse rsp = ModifyAgentAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAgentAppOutcome(rsp);
        else
            return ModifyAgentAppOutcome(o.GetError());
    }
    else
    {
        return ModifyAgentAppOutcome(outcome.GetError());
    }
}

void ApisClient::ModifyAgentAppAsync(const ModifyAgentAppRequest& request, const ModifyAgentAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAgentAppRequest&;
    using Resp = ModifyAgentAppResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAgentApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::ModifyAgentAppOutcomeCallable ApisClient::ModifyAgentAppCallable(const ModifyAgentAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAgentAppOutcome>>();
    ModifyAgentAppAsync(
    request,
    [prom](
        const ApisClient*,
        const ModifyAgentAppRequest&,
        ModifyAgentAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::ModifyAgentAppModelServicesOutcome ApisClient::ModifyAgentAppModelServices(const ModifyAgentAppModelServicesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAgentAppModelServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAgentAppModelServicesResponse rsp = ModifyAgentAppModelServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAgentAppModelServicesOutcome(rsp);
        else
            return ModifyAgentAppModelServicesOutcome(o.GetError());
    }
    else
    {
        return ModifyAgentAppModelServicesOutcome(outcome.GetError());
    }
}

void ApisClient::ModifyAgentAppModelServicesAsync(const ModifyAgentAppModelServicesRequest& request, const ModifyAgentAppModelServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAgentAppModelServicesRequest&;
    using Resp = ModifyAgentAppModelServicesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAgentAppModelServices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::ModifyAgentAppModelServicesOutcomeCallable ApisClient::ModifyAgentAppModelServicesCallable(const ModifyAgentAppModelServicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAgentAppModelServicesOutcome>>();
    ModifyAgentAppModelServicesAsync(
    request,
    [prom](
        const ApisClient*,
        const ModifyAgentAppModelServicesRequest&,
        ModifyAgentAppModelServicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::ModifyAgentCredentialOutcome ApisClient::ModifyAgentCredential(const ModifyAgentCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAgentCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAgentCredentialResponse rsp = ModifyAgentCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAgentCredentialOutcome(rsp);
        else
            return ModifyAgentCredentialOutcome(o.GetError());
    }
    else
    {
        return ModifyAgentCredentialOutcome(outcome.GetError());
    }
}

void ApisClient::ModifyAgentCredentialAsync(const ModifyAgentCredentialRequest& request, const ModifyAgentCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAgentCredentialRequest&;
    using Resp = ModifyAgentCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAgentCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::ModifyAgentCredentialOutcomeCallable ApisClient::ModifyAgentCredentialCallable(const ModifyAgentCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAgentCredentialOutcome>>();
    ModifyAgentCredentialAsync(
    request,
    [prom](
        const ApisClient*,
        const ModifyAgentCredentialRequest&,
        ModifyAgentCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::ModifyMcpServerOutcome ApisClient::ModifyMcpServer(const ModifyMcpServerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMcpServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMcpServerResponse rsp = ModifyMcpServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMcpServerOutcome(rsp);
        else
            return ModifyMcpServerOutcome(o.GetError());
    }
    else
    {
        return ModifyMcpServerOutcome(outcome.GetError());
    }
}

void ApisClient::ModifyMcpServerAsync(const ModifyMcpServerRequest& request, const ModifyMcpServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMcpServerRequest&;
    using Resp = ModifyMcpServerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMcpServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::ModifyMcpServerOutcomeCallable ApisClient::ModifyMcpServerCallable(const ModifyMcpServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMcpServerOutcome>>();
    ModifyMcpServerAsync(
    request,
    [prom](
        const ApisClient*,
        const ModifyMcpServerRequest&,
        ModifyMcpServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::ModifyModelOutcome ApisClient::ModifyModel(const ModifyModelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModelResponse rsp = ModifyModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModelOutcome(rsp);
        else
            return ModifyModelOutcome(o.GetError());
    }
    else
    {
        return ModifyModelOutcome(outcome.GetError());
    }
}

void ApisClient::ModifyModelAsync(const ModifyModelRequest& request, const ModifyModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyModelRequest&;
    using Resp = ModifyModelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::ModifyModelOutcomeCallable ApisClient::ModifyModelCallable(const ModifyModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyModelOutcome>>();
    ModifyModelAsync(
    request,
    [prom](
        const ApisClient*,
        const ModifyModelRequest&,
        ModifyModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApisClient::ModifyModelServiceOutcome ApisClient::ModifyModelService(const ModifyModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModelServiceResponse rsp = ModifyModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModelServiceOutcome(rsp);
        else
            return ModifyModelServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyModelServiceOutcome(outcome.GetError());
    }
}

void ApisClient::ModifyModelServiceAsync(const ModifyModelServiceRequest& request, const ModifyModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyModelServiceRequest&;
    using Resp = ModifyModelServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyModelService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApisClient::ModifyModelServiceOutcomeCallable ApisClient::ModifyModelServiceCallable(const ModifyModelServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyModelServiceOutcome>>();
    ModifyModelServiceAsync(
    request,
    [prom](
        const ApisClient*,
        const ModifyModelServiceRequest&,
        ModifyModelServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

