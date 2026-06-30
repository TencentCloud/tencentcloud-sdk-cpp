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

#include <tencentcloud/cngw/v20230418/CngwClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cngw::V20230418;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-04-18";
    const string ENDPOINT = "cngw.tencentcloudapi.com";
}

CngwClient::CngwClient(const Credential &credential, const string &region) :
    CngwClient(credential, region, ClientProfile())
{
}

CngwClient::CngwClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CngwClient::AddCloudNativeAPIGatewayConsumerGroupAuthOutcome CngwClient::AddCloudNativeAPIGatewayConsumerGroupAuth(const AddCloudNativeAPIGatewayConsumerGroupAuthRequest &request)
{
    auto outcome = MakeRequest(request, "AddCloudNativeAPIGatewayConsumerGroupAuth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCloudNativeAPIGatewayConsumerGroupAuthResponse rsp = AddCloudNativeAPIGatewayConsumerGroupAuthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCloudNativeAPIGatewayConsumerGroupAuthOutcome(rsp);
        else
            return AddCloudNativeAPIGatewayConsumerGroupAuthOutcome(o.GetError());
    }
    else
    {
        return AddCloudNativeAPIGatewayConsumerGroupAuthOutcome(outcome.GetError());
    }
}

void CngwClient::AddCloudNativeAPIGatewayConsumerGroupAuthAsync(const AddCloudNativeAPIGatewayConsumerGroupAuthRequest& request, const AddCloudNativeAPIGatewayConsumerGroupAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCloudNativeAPIGatewayConsumerGroupAuthRequest&;
    using Resp = AddCloudNativeAPIGatewayConsumerGroupAuthResponse;

    DoRequestAsync<Req, Resp>(
        "AddCloudNativeAPIGatewayConsumerGroupAuth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::AddCloudNativeAPIGatewayConsumerGroupAuthOutcomeCallable CngwClient::AddCloudNativeAPIGatewayConsumerGroupAuthCallable(const AddCloudNativeAPIGatewayConsumerGroupAuthRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCloudNativeAPIGatewayConsumerGroupAuthOutcome>>();
    AddCloudNativeAPIGatewayConsumerGroupAuthAsync(
    request,
    [prom](
        const CngwClient*,
        const AddCloudNativeAPIGatewayConsumerGroupAuthRequest&,
        AddCloudNativeAPIGatewayConsumerGroupAuthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::AddCloudNativeAPIGatewayConsumerInGroupOutcome CngwClient::AddCloudNativeAPIGatewayConsumerInGroup(const AddCloudNativeAPIGatewayConsumerInGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AddCloudNativeAPIGatewayConsumerInGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCloudNativeAPIGatewayConsumerInGroupResponse rsp = AddCloudNativeAPIGatewayConsumerInGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCloudNativeAPIGatewayConsumerInGroupOutcome(rsp);
        else
            return AddCloudNativeAPIGatewayConsumerInGroupOutcome(o.GetError());
    }
    else
    {
        return AddCloudNativeAPIGatewayConsumerInGroupOutcome(outcome.GetError());
    }
}

void CngwClient::AddCloudNativeAPIGatewayConsumerInGroupAsync(const AddCloudNativeAPIGatewayConsumerInGroupRequest& request, const AddCloudNativeAPIGatewayConsumerInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCloudNativeAPIGatewayConsumerInGroupRequest&;
    using Resp = AddCloudNativeAPIGatewayConsumerInGroupResponse;

    DoRequestAsync<Req, Resp>(
        "AddCloudNativeAPIGatewayConsumerInGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::AddCloudNativeAPIGatewayConsumerInGroupOutcomeCallable CngwClient::AddCloudNativeAPIGatewayConsumerInGroupCallable(const AddCloudNativeAPIGatewayConsumerInGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCloudNativeAPIGatewayConsumerInGroupOutcome>>();
    AddCloudNativeAPIGatewayConsumerInGroupAsync(
    request,
    [prom](
        const CngwClient*,
        const AddCloudNativeAPIGatewayConsumerInGroupRequest&,
        AddCloudNativeAPIGatewayConsumerInGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::BindCloudNativeAPIGatewaySecretKeyOutcome CngwClient::BindCloudNativeAPIGatewaySecretKey(const BindCloudNativeAPIGatewaySecretKeyRequest &request)
{
    auto outcome = MakeRequest(request, "BindCloudNativeAPIGatewaySecretKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindCloudNativeAPIGatewaySecretKeyResponse rsp = BindCloudNativeAPIGatewaySecretKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindCloudNativeAPIGatewaySecretKeyOutcome(rsp);
        else
            return BindCloudNativeAPIGatewaySecretKeyOutcome(o.GetError());
    }
    else
    {
        return BindCloudNativeAPIGatewaySecretKeyOutcome(outcome.GetError());
    }
}

void CngwClient::BindCloudNativeAPIGatewaySecretKeyAsync(const BindCloudNativeAPIGatewaySecretKeyRequest& request, const BindCloudNativeAPIGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindCloudNativeAPIGatewaySecretKeyRequest&;
    using Resp = BindCloudNativeAPIGatewaySecretKeyResponse;

    DoRequestAsync<Req, Resp>(
        "BindCloudNativeAPIGatewaySecretKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::BindCloudNativeAPIGatewaySecretKeyOutcomeCallable CngwClient::BindCloudNativeAPIGatewaySecretKeyCallable(const BindCloudNativeAPIGatewaySecretKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindCloudNativeAPIGatewaySecretKeyOutcome>>();
    BindCloudNativeAPIGatewaySecretKeyAsync(
    request,
    [prom](
        const CngwClient*,
        const BindCloudNativeAPIGatewaySecretKeyRequest&,
        BindCloudNativeAPIGatewaySecretKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::CreateCloudNativeAPIGatewayConsumerOutcome CngwClient::CreateCloudNativeAPIGatewayConsumer(const CreateCloudNativeAPIGatewayConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayConsumerResponse rsp = CreateCloudNativeAPIGatewayConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayConsumerOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayConsumerOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayConsumerOutcome(outcome.GetError());
    }
}

void CngwClient::CreateCloudNativeAPIGatewayConsumerAsync(const CreateCloudNativeAPIGatewayConsumerRequest& request, const CreateCloudNativeAPIGatewayConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayConsumerRequest&;
    using Resp = CreateCloudNativeAPIGatewayConsumerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayConsumer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::CreateCloudNativeAPIGatewayConsumerOutcomeCallable CngwClient::CreateCloudNativeAPIGatewayConsumerCallable(const CreateCloudNativeAPIGatewayConsumerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayConsumerOutcome>>();
    CreateCloudNativeAPIGatewayConsumerAsync(
    request,
    [prom](
        const CngwClient*,
        const CreateCloudNativeAPIGatewayConsumerRequest&,
        CreateCloudNativeAPIGatewayConsumerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::CreateCloudNativeAPIGatewayConsumerGroupOutcome CngwClient::CreateCloudNativeAPIGatewayConsumerGroup(const CreateCloudNativeAPIGatewayConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayConsumerGroupResponse rsp = CreateCloudNativeAPIGatewayConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayConsumerGroupOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayConsumerGroupOutcome(outcome.GetError());
    }
}

void CngwClient::CreateCloudNativeAPIGatewayConsumerGroupAsync(const CreateCloudNativeAPIGatewayConsumerGroupRequest& request, const CreateCloudNativeAPIGatewayConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayConsumerGroupRequest&;
    using Resp = CreateCloudNativeAPIGatewayConsumerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayConsumerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::CreateCloudNativeAPIGatewayConsumerGroupOutcomeCallable CngwClient::CreateCloudNativeAPIGatewayConsumerGroupCallable(const CreateCloudNativeAPIGatewayConsumerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayConsumerGroupOutcome>>();
    CreateCloudNativeAPIGatewayConsumerGroupAsync(
    request,
    [prom](
        const CngwClient*,
        const CreateCloudNativeAPIGatewayConsumerGroupRequest&,
        CreateCloudNativeAPIGatewayConsumerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::CreateCloudNativeAPIGatewayLLMModelAPIOutcome CngwClient::CreateCloudNativeAPIGatewayLLMModelAPI(const CreateCloudNativeAPIGatewayLLMModelAPIRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayLLMModelAPI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayLLMModelAPIResponse rsp = CreateCloudNativeAPIGatewayLLMModelAPIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayLLMModelAPIOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayLLMModelAPIOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayLLMModelAPIOutcome(outcome.GetError());
    }
}

void CngwClient::CreateCloudNativeAPIGatewayLLMModelAPIAsync(const CreateCloudNativeAPIGatewayLLMModelAPIRequest& request, const CreateCloudNativeAPIGatewayLLMModelAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayLLMModelAPIRequest&;
    using Resp = CreateCloudNativeAPIGatewayLLMModelAPIResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayLLMModelAPI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::CreateCloudNativeAPIGatewayLLMModelAPIOutcomeCallable CngwClient::CreateCloudNativeAPIGatewayLLMModelAPICallable(const CreateCloudNativeAPIGatewayLLMModelAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayLLMModelAPIOutcome>>();
    CreateCloudNativeAPIGatewayLLMModelAPIAsync(
    request,
    [prom](
        const CngwClient*,
        const CreateCloudNativeAPIGatewayLLMModelAPIRequest&,
        CreateCloudNativeAPIGatewayLLMModelAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::CreateCloudNativeAPIGatewayLLMModelServiceOutcome CngwClient::CreateCloudNativeAPIGatewayLLMModelService(const CreateCloudNativeAPIGatewayLLMModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayLLMModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayLLMModelServiceResponse rsp = CreateCloudNativeAPIGatewayLLMModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayLLMModelServiceOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayLLMModelServiceOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayLLMModelServiceOutcome(outcome.GetError());
    }
}

void CngwClient::CreateCloudNativeAPIGatewayLLMModelServiceAsync(const CreateCloudNativeAPIGatewayLLMModelServiceRequest& request, const CreateCloudNativeAPIGatewayLLMModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayLLMModelServiceRequest&;
    using Resp = CreateCloudNativeAPIGatewayLLMModelServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayLLMModelService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::CreateCloudNativeAPIGatewayLLMModelServiceOutcomeCallable CngwClient::CreateCloudNativeAPIGatewayLLMModelServiceCallable(const CreateCloudNativeAPIGatewayLLMModelServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayLLMModelServiceOutcome>>();
    CreateCloudNativeAPIGatewayLLMModelServiceAsync(
    request,
    [prom](
        const CngwClient*,
        const CreateCloudNativeAPIGatewayLLMModelServiceRequest&,
        CreateCloudNativeAPIGatewayLLMModelServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::CreateCloudNativeAPIGatewayMCPServerOutcome CngwClient::CreateCloudNativeAPIGatewayMCPServer(const CreateCloudNativeAPIGatewayMCPServerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayMCPServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayMCPServerResponse rsp = CreateCloudNativeAPIGatewayMCPServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayMCPServerOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayMCPServerOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayMCPServerOutcome(outcome.GetError());
    }
}

void CngwClient::CreateCloudNativeAPIGatewayMCPServerAsync(const CreateCloudNativeAPIGatewayMCPServerRequest& request, const CreateCloudNativeAPIGatewayMCPServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayMCPServerRequest&;
    using Resp = CreateCloudNativeAPIGatewayMCPServerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayMCPServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::CreateCloudNativeAPIGatewayMCPServerOutcomeCallable CngwClient::CreateCloudNativeAPIGatewayMCPServerCallable(const CreateCloudNativeAPIGatewayMCPServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayMCPServerOutcome>>();
    CreateCloudNativeAPIGatewayMCPServerAsync(
    request,
    [prom](
        const CngwClient*,
        const CreateCloudNativeAPIGatewayMCPServerRequest&,
        CreateCloudNativeAPIGatewayMCPServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::CreateCloudNativeAPIGatewayMCPToolOutcome CngwClient::CreateCloudNativeAPIGatewayMCPTool(const CreateCloudNativeAPIGatewayMCPToolRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayMCPTool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayMCPToolResponse rsp = CreateCloudNativeAPIGatewayMCPToolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayMCPToolOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayMCPToolOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayMCPToolOutcome(outcome.GetError());
    }
}

void CngwClient::CreateCloudNativeAPIGatewayMCPToolAsync(const CreateCloudNativeAPIGatewayMCPToolRequest& request, const CreateCloudNativeAPIGatewayMCPToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayMCPToolRequest&;
    using Resp = CreateCloudNativeAPIGatewayMCPToolResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayMCPTool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::CreateCloudNativeAPIGatewayMCPToolOutcomeCallable CngwClient::CreateCloudNativeAPIGatewayMCPToolCallable(const CreateCloudNativeAPIGatewayMCPToolRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayMCPToolOutcome>>();
    CreateCloudNativeAPIGatewayMCPToolAsync(
    request,
    [prom](
        const CngwClient*,
        const CreateCloudNativeAPIGatewayMCPToolRequest&,
        CreateCloudNativeAPIGatewayMCPToolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::CreateCloudNativeAPIGatewaySecretKeyOutcome CngwClient::CreateCloudNativeAPIGatewaySecretKey(const CreateCloudNativeAPIGatewaySecretKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewaySecretKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewaySecretKeyResponse rsp = CreateCloudNativeAPIGatewaySecretKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewaySecretKeyOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewaySecretKeyOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewaySecretKeyOutcome(outcome.GetError());
    }
}

void CngwClient::CreateCloudNativeAPIGatewaySecretKeyAsync(const CreateCloudNativeAPIGatewaySecretKeyRequest& request, const CreateCloudNativeAPIGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewaySecretKeyRequest&;
    using Resp = CreateCloudNativeAPIGatewaySecretKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewaySecretKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::CreateCloudNativeAPIGatewaySecretKeyOutcomeCallable CngwClient::CreateCloudNativeAPIGatewaySecretKeyCallable(const CreateCloudNativeAPIGatewaySecretKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewaySecretKeyOutcome>>();
    CreateCloudNativeAPIGatewaySecretKeyAsync(
    request,
    [prom](
        const CngwClient*,
        const CreateCloudNativeAPIGatewaySecretKeyRequest&,
        CreateCloudNativeAPIGatewaySecretKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DeleteCloudNativeAPIGatewayConsumerOutcome CngwClient::DeleteCloudNativeAPIGatewayConsumer(const DeleteCloudNativeAPIGatewayConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayConsumerResponse rsp = DeleteCloudNativeAPIGatewayConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayConsumerOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayConsumerOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayConsumerOutcome(outcome.GetError());
    }
}

void CngwClient::DeleteCloudNativeAPIGatewayConsumerAsync(const DeleteCloudNativeAPIGatewayConsumerRequest& request, const DeleteCloudNativeAPIGatewayConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayConsumerRequest&;
    using Resp = DeleteCloudNativeAPIGatewayConsumerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayConsumer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DeleteCloudNativeAPIGatewayConsumerOutcomeCallable CngwClient::DeleteCloudNativeAPIGatewayConsumerCallable(const DeleteCloudNativeAPIGatewayConsumerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayConsumerOutcome>>();
    DeleteCloudNativeAPIGatewayConsumerAsync(
    request,
    [prom](
        const CngwClient*,
        const DeleteCloudNativeAPIGatewayConsumerRequest&,
        DeleteCloudNativeAPIGatewayConsumerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DeleteCloudNativeAPIGatewayConsumerGroupOutcome CngwClient::DeleteCloudNativeAPIGatewayConsumerGroup(const DeleteCloudNativeAPIGatewayConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayConsumerGroupResponse rsp = DeleteCloudNativeAPIGatewayConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayConsumerGroupOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayConsumerGroupOutcome(outcome.GetError());
    }
}

void CngwClient::DeleteCloudNativeAPIGatewayConsumerGroupAsync(const DeleteCloudNativeAPIGatewayConsumerGroupRequest& request, const DeleteCloudNativeAPIGatewayConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayConsumerGroupRequest&;
    using Resp = DeleteCloudNativeAPIGatewayConsumerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayConsumerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DeleteCloudNativeAPIGatewayConsumerGroupOutcomeCallable CngwClient::DeleteCloudNativeAPIGatewayConsumerGroupCallable(const DeleteCloudNativeAPIGatewayConsumerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayConsumerGroupOutcome>>();
    DeleteCloudNativeAPIGatewayConsumerGroupAsync(
    request,
    [prom](
        const CngwClient*,
        const DeleteCloudNativeAPIGatewayConsumerGroupRequest&,
        DeleteCloudNativeAPIGatewayConsumerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DeleteCloudNativeAPIGatewayLLMModelAPIOutcome CngwClient::DeleteCloudNativeAPIGatewayLLMModelAPI(const DeleteCloudNativeAPIGatewayLLMModelAPIRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayLLMModelAPI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayLLMModelAPIResponse rsp = DeleteCloudNativeAPIGatewayLLMModelAPIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayLLMModelAPIOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayLLMModelAPIOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayLLMModelAPIOutcome(outcome.GetError());
    }
}

void CngwClient::DeleteCloudNativeAPIGatewayLLMModelAPIAsync(const DeleteCloudNativeAPIGatewayLLMModelAPIRequest& request, const DeleteCloudNativeAPIGatewayLLMModelAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayLLMModelAPIRequest&;
    using Resp = DeleteCloudNativeAPIGatewayLLMModelAPIResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayLLMModelAPI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DeleteCloudNativeAPIGatewayLLMModelAPIOutcomeCallable CngwClient::DeleteCloudNativeAPIGatewayLLMModelAPICallable(const DeleteCloudNativeAPIGatewayLLMModelAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayLLMModelAPIOutcome>>();
    DeleteCloudNativeAPIGatewayLLMModelAPIAsync(
    request,
    [prom](
        const CngwClient*,
        const DeleteCloudNativeAPIGatewayLLMModelAPIRequest&,
        DeleteCloudNativeAPIGatewayLLMModelAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DeleteCloudNativeAPIGatewayLLMModelServiceOutcome CngwClient::DeleteCloudNativeAPIGatewayLLMModelService(const DeleteCloudNativeAPIGatewayLLMModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayLLMModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayLLMModelServiceResponse rsp = DeleteCloudNativeAPIGatewayLLMModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayLLMModelServiceOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayLLMModelServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayLLMModelServiceOutcome(outcome.GetError());
    }
}

void CngwClient::DeleteCloudNativeAPIGatewayLLMModelServiceAsync(const DeleteCloudNativeAPIGatewayLLMModelServiceRequest& request, const DeleteCloudNativeAPIGatewayLLMModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayLLMModelServiceRequest&;
    using Resp = DeleteCloudNativeAPIGatewayLLMModelServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayLLMModelService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DeleteCloudNativeAPIGatewayLLMModelServiceOutcomeCallable CngwClient::DeleteCloudNativeAPIGatewayLLMModelServiceCallable(const DeleteCloudNativeAPIGatewayLLMModelServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayLLMModelServiceOutcome>>();
    DeleteCloudNativeAPIGatewayLLMModelServiceAsync(
    request,
    [prom](
        const CngwClient*,
        const DeleteCloudNativeAPIGatewayLLMModelServiceRequest&,
        DeleteCloudNativeAPIGatewayLLMModelServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DeleteCloudNativeAPIGatewayMCPServerOutcome CngwClient::DeleteCloudNativeAPIGatewayMCPServer(const DeleteCloudNativeAPIGatewayMCPServerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayMCPServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayMCPServerResponse rsp = DeleteCloudNativeAPIGatewayMCPServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayMCPServerOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayMCPServerOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayMCPServerOutcome(outcome.GetError());
    }
}

void CngwClient::DeleteCloudNativeAPIGatewayMCPServerAsync(const DeleteCloudNativeAPIGatewayMCPServerRequest& request, const DeleteCloudNativeAPIGatewayMCPServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayMCPServerRequest&;
    using Resp = DeleteCloudNativeAPIGatewayMCPServerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayMCPServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DeleteCloudNativeAPIGatewayMCPServerOutcomeCallable CngwClient::DeleteCloudNativeAPIGatewayMCPServerCallable(const DeleteCloudNativeAPIGatewayMCPServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayMCPServerOutcome>>();
    DeleteCloudNativeAPIGatewayMCPServerAsync(
    request,
    [prom](
        const CngwClient*,
        const DeleteCloudNativeAPIGatewayMCPServerRequest&,
        DeleteCloudNativeAPIGatewayMCPServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DeleteCloudNativeAPIGatewayMCPToolOutcome CngwClient::DeleteCloudNativeAPIGatewayMCPTool(const DeleteCloudNativeAPIGatewayMCPToolRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayMCPTool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayMCPToolResponse rsp = DeleteCloudNativeAPIGatewayMCPToolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayMCPToolOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayMCPToolOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayMCPToolOutcome(outcome.GetError());
    }
}

void CngwClient::DeleteCloudNativeAPIGatewayMCPToolAsync(const DeleteCloudNativeAPIGatewayMCPToolRequest& request, const DeleteCloudNativeAPIGatewayMCPToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayMCPToolRequest&;
    using Resp = DeleteCloudNativeAPIGatewayMCPToolResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayMCPTool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DeleteCloudNativeAPIGatewayMCPToolOutcomeCallable CngwClient::DeleteCloudNativeAPIGatewayMCPToolCallable(const DeleteCloudNativeAPIGatewayMCPToolRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayMCPToolOutcome>>();
    DeleteCloudNativeAPIGatewayMCPToolAsync(
    request,
    [prom](
        const CngwClient*,
        const DeleteCloudNativeAPIGatewayMCPToolRequest&,
        DeleteCloudNativeAPIGatewayMCPToolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DeleteCloudNativeAPIGatewaySecretKeyOutcome CngwClient::DeleteCloudNativeAPIGatewaySecretKey(const DeleteCloudNativeAPIGatewaySecretKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewaySecretKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewaySecretKeyResponse rsp = DeleteCloudNativeAPIGatewaySecretKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewaySecretKeyOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewaySecretKeyOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewaySecretKeyOutcome(outcome.GetError());
    }
}

void CngwClient::DeleteCloudNativeAPIGatewaySecretKeyAsync(const DeleteCloudNativeAPIGatewaySecretKeyRequest& request, const DeleteCloudNativeAPIGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewaySecretKeyRequest&;
    using Resp = DeleteCloudNativeAPIGatewaySecretKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewaySecretKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DeleteCloudNativeAPIGatewaySecretKeyOutcomeCallable CngwClient::DeleteCloudNativeAPIGatewaySecretKeyCallable(const DeleteCloudNativeAPIGatewaySecretKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewaySecretKeyOutcome>>();
    DeleteCloudNativeAPIGatewaySecretKeyAsync(
    request,
    [prom](
        const CngwClient*,
        const DeleteCloudNativeAPIGatewaySecretKeyRequest&,
        DeleteCloudNativeAPIGatewaySecretKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewayConsumerOutcome CngwClient::DescribeCloudNativeAPIGatewayConsumer(const DescribeCloudNativeAPIGatewayConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayConsumerResponse rsp = DescribeCloudNativeAPIGatewayConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayConsumerOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayConsumerOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayConsumerOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewayConsumerAsync(const DescribeCloudNativeAPIGatewayConsumerRequest& request, const DescribeCloudNativeAPIGatewayConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayConsumerRequest&;
    using Resp = DescribeCloudNativeAPIGatewayConsumerResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayConsumer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewayConsumerOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewayConsumerCallable(const DescribeCloudNativeAPIGatewayConsumerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayConsumerOutcome>>();
    DescribeCloudNativeAPIGatewayConsumerAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewayConsumerRequest&,
        DescribeCloudNativeAPIGatewayConsumerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewayConsumerGroupOutcome CngwClient::DescribeCloudNativeAPIGatewayConsumerGroup(const DescribeCloudNativeAPIGatewayConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayConsumerGroupResponse rsp = DescribeCloudNativeAPIGatewayConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayConsumerGroupOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayConsumerGroupOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewayConsumerGroupAsync(const DescribeCloudNativeAPIGatewayConsumerGroupRequest& request, const DescribeCloudNativeAPIGatewayConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayConsumerGroupRequest&;
    using Resp = DescribeCloudNativeAPIGatewayConsumerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayConsumerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewayConsumerGroupOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewayConsumerGroupCallable(const DescribeCloudNativeAPIGatewayConsumerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayConsumerGroupOutcome>>();
    DescribeCloudNativeAPIGatewayConsumerGroupAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewayConsumerGroupRequest&,
        DescribeCloudNativeAPIGatewayConsumerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewayLLMModelAPIOutcome CngwClient::DescribeCloudNativeAPIGatewayLLMModelAPI(const DescribeCloudNativeAPIGatewayLLMModelAPIRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayLLMModelAPI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayLLMModelAPIResponse rsp = DescribeCloudNativeAPIGatewayLLMModelAPIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayLLMModelAPIOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayLLMModelAPIOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayLLMModelAPIOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewayLLMModelAPIAsync(const DescribeCloudNativeAPIGatewayLLMModelAPIRequest& request, const DescribeCloudNativeAPIGatewayLLMModelAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayLLMModelAPIRequest&;
    using Resp = DescribeCloudNativeAPIGatewayLLMModelAPIResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayLLMModelAPI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewayLLMModelAPIOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewayLLMModelAPICallable(const DescribeCloudNativeAPIGatewayLLMModelAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayLLMModelAPIOutcome>>();
    DescribeCloudNativeAPIGatewayLLMModelAPIAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewayLLMModelAPIRequest&,
        DescribeCloudNativeAPIGatewayLLMModelAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewayLLMModelAPIsOutcome CngwClient::DescribeCloudNativeAPIGatewayLLMModelAPIs(const DescribeCloudNativeAPIGatewayLLMModelAPIsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayLLMModelAPIs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayLLMModelAPIsResponse rsp = DescribeCloudNativeAPIGatewayLLMModelAPIsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayLLMModelAPIsOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayLLMModelAPIsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayLLMModelAPIsOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewayLLMModelAPIsAsync(const DescribeCloudNativeAPIGatewayLLMModelAPIsRequest& request, const DescribeCloudNativeAPIGatewayLLMModelAPIsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayLLMModelAPIsRequest&;
    using Resp = DescribeCloudNativeAPIGatewayLLMModelAPIsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayLLMModelAPIs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewayLLMModelAPIsOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewayLLMModelAPIsCallable(const DescribeCloudNativeAPIGatewayLLMModelAPIsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayLLMModelAPIsOutcome>>();
    DescribeCloudNativeAPIGatewayLLMModelAPIsAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewayLLMModelAPIsRequest&,
        DescribeCloudNativeAPIGatewayLLMModelAPIsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewayLLMModelServiceOutcome CngwClient::DescribeCloudNativeAPIGatewayLLMModelService(const DescribeCloudNativeAPIGatewayLLMModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayLLMModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayLLMModelServiceResponse rsp = DescribeCloudNativeAPIGatewayLLMModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayLLMModelServiceOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayLLMModelServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayLLMModelServiceOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewayLLMModelServiceAsync(const DescribeCloudNativeAPIGatewayLLMModelServiceRequest& request, const DescribeCloudNativeAPIGatewayLLMModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayLLMModelServiceRequest&;
    using Resp = DescribeCloudNativeAPIGatewayLLMModelServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayLLMModelService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewayLLMModelServiceOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewayLLMModelServiceCallable(const DescribeCloudNativeAPIGatewayLLMModelServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayLLMModelServiceOutcome>>();
    DescribeCloudNativeAPIGatewayLLMModelServiceAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewayLLMModelServiceRequest&,
        DescribeCloudNativeAPIGatewayLLMModelServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewayLLMModelServicesOutcome CngwClient::DescribeCloudNativeAPIGatewayLLMModelServices(const DescribeCloudNativeAPIGatewayLLMModelServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayLLMModelServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayLLMModelServicesResponse rsp = DescribeCloudNativeAPIGatewayLLMModelServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayLLMModelServicesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayLLMModelServicesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayLLMModelServicesOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewayLLMModelServicesAsync(const DescribeCloudNativeAPIGatewayLLMModelServicesRequest& request, const DescribeCloudNativeAPIGatewayLLMModelServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayLLMModelServicesRequest&;
    using Resp = DescribeCloudNativeAPIGatewayLLMModelServicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayLLMModelServices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewayLLMModelServicesOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewayLLMModelServicesCallable(const DescribeCloudNativeAPIGatewayLLMModelServicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayLLMModelServicesOutcome>>();
    DescribeCloudNativeAPIGatewayLLMModelServicesAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewayLLMModelServicesRequest&,
        DescribeCloudNativeAPIGatewayLLMModelServicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewayLLMTokenUsageListOutcome CngwClient::DescribeCloudNativeAPIGatewayLLMTokenUsageList(const DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayLLMTokenUsageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayLLMTokenUsageListResponse rsp = DescribeCloudNativeAPIGatewayLLMTokenUsageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayLLMTokenUsageListOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayLLMTokenUsageListOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayLLMTokenUsageListOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewayLLMTokenUsageListAsync(const DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest& request, const DescribeCloudNativeAPIGatewayLLMTokenUsageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest&;
    using Resp = DescribeCloudNativeAPIGatewayLLMTokenUsageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayLLMTokenUsageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewayLLMTokenUsageListOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewayLLMTokenUsageListCallable(const DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayLLMTokenUsageListOutcome>>();
    DescribeCloudNativeAPIGatewayLLMTokenUsageListAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest&,
        DescribeCloudNativeAPIGatewayLLMTokenUsageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsOutcome CngwClient::DescribeCloudNativeAPIGatewayLLMTokenUsageStatistics(const DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayLLMTokenUsageStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsResponse rsp = DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsAsync(const DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest& request, const DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest&;
    using Resp = DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayLLMTokenUsageStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsCallable(const DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsOutcome>>();
    DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest&,
        DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewayMCPServerOutcome CngwClient::DescribeCloudNativeAPIGatewayMCPServer(const DescribeCloudNativeAPIGatewayMCPServerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayMCPServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayMCPServerResponse rsp = DescribeCloudNativeAPIGatewayMCPServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayMCPServerOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayMCPServerOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayMCPServerOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewayMCPServerAsync(const DescribeCloudNativeAPIGatewayMCPServerRequest& request, const DescribeCloudNativeAPIGatewayMCPServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayMCPServerRequest&;
    using Resp = DescribeCloudNativeAPIGatewayMCPServerResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayMCPServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewayMCPServerOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewayMCPServerCallable(const DescribeCloudNativeAPIGatewayMCPServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayMCPServerOutcome>>();
    DescribeCloudNativeAPIGatewayMCPServerAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewayMCPServerRequest&,
        DescribeCloudNativeAPIGatewayMCPServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewayMCPServerACLOutcome CngwClient::DescribeCloudNativeAPIGatewayMCPServerACL(const DescribeCloudNativeAPIGatewayMCPServerACLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayMCPServerACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayMCPServerACLResponse rsp = DescribeCloudNativeAPIGatewayMCPServerACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayMCPServerACLOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayMCPServerACLOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayMCPServerACLOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewayMCPServerACLAsync(const DescribeCloudNativeAPIGatewayMCPServerACLRequest& request, const DescribeCloudNativeAPIGatewayMCPServerACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayMCPServerACLRequest&;
    using Resp = DescribeCloudNativeAPIGatewayMCPServerACLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayMCPServerACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewayMCPServerACLOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewayMCPServerACLCallable(const DescribeCloudNativeAPIGatewayMCPServerACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayMCPServerACLOutcome>>();
    DescribeCloudNativeAPIGatewayMCPServerACLAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewayMCPServerACLRequest&,
        DescribeCloudNativeAPIGatewayMCPServerACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewayMCPServerAuthOutcome CngwClient::DescribeCloudNativeAPIGatewayMCPServerAuth(const DescribeCloudNativeAPIGatewayMCPServerAuthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayMCPServerAuth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayMCPServerAuthResponse rsp = DescribeCloudNativeAPIGatewayMCPServerAuthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayMCPServerAuthOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayMCPServerAuthOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayMCPServerAuthOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewayMCPServerAuthAsync(const DescribeCloudNativeAPIGatewayMCPServerAuthRequest& request, const DescribeCloudNativeAPIGatewayMCPServerAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayMCPServerAuthRequest&;
    using Resp = DescribeCloudNativeAPIGatewayMCPServerAuthResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayMCPServerAuth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewayMCPServerAuthOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewayMCPServerAuthCallable(const DescribeCloudNativeAPIGatewayMCPServerAuthRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayMCPServerAuthOutcome>>();
    DescribeCloudNativeAPIGatewayMCPServerAuthAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewayMCPServerAuthRequest&,
        DescribeCloudNativeAPIGatewayMCPServerAuthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewayMCPServerListOutcome CngwClient::DescribeCloudNativeAPIGatewayMCPServerList(const DescribeCloudNativeAPIGatewayMCPServerListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayMCPServerList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayMCPServerListResponse rsp = DescribeCloudNativeAPIGatewayMCPServerListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayMCPServerListOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayMCPServerListOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayMCPServerListOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewayMCPServerListAsync(const DescribeCloudNativeAPIGatewayMCPServerListRequest& request, const DescribeCloudNativeAPIGatewayMCPServerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayMCPServerListRequest&;
    using Resp = DescribeCloudNativeAPIGatewayMCPServerListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayMCPServerList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewayMCPServerListOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewayMCPServerListCallable(const DescribeCloudNativeAPIGatewayMCPServerListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayMCPServerListOutcome>>();
    DescribeCloudNativeAPIGatewayMCPServerListAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewayMCPServerListRequest&,
        DescribeCloudNativeAPIGatewayMCPServerListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewayMCPToolOutcome CngwClient::DescribeCloudNativeAPIGatewayMCPTool(const DescribeCloudNativeAPIGatewayMCPToolRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayMCPTool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayMCPToolResponse rsp = DescribeCloudNativeAPIGatewayMCPToolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayMCPToolOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayMCPToolOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayMCPToolOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewayMCPToolAsync(const DescribeCloudNativeAPIGatewayMCPToolRequest& request, const DescribeCloudNativeAPIGatewayMCPToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayMCPToolRequest&;
    using Resp = DescribeCloudNativeAPIGatewayMCPToolResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayMCPTool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewayMCPToolOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewayMCPToolCallable(const DescribeCloudNativeAPIGatewayMCPToolRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayMCPToolOutcome>>();
    DescribeCloudNativeAPIGatewayMCPToolAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewayMCPToolRequest&,
        DescribeCloudNativeAPIGatewayMCPToolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewayMCPToolACLListOutcome CngwClient::DescribeCloudNativeAPIGatewayMCPToolACLList(const DescribeCloudNativeAPIGatewayMCPToolACLListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayMCPToolACLList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayMCPToolACLListResponse rsp = DescribeCloudNativeAPIGatewayMCPToolACLListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayMCPToolACLListOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayMCPToolACLListOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayMCPToolACLListOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewayMCPToolACLListAsync(const DescribeCloudNativeAPIGatewayMCPToolACLListRequest& request, const DescribeCloudNativeAPIGatewayMCPToolACLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayMCPToolACLListRequest&;
    using Resp = DescribeCloudNativeAPIGatewayMCPToolACLListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayMCPToolACLList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewayMCPToolACLListOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewayMCPToolACLListCallable(const DescribeCloudNativeAPIGatewayMCPToolACLListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayMCPToolACLListOutcome>>();
    DescribeCloudNativeAPIGatewayMCPToolACLListAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewayMCPToolACLListRequest&,
        DescribeCloudNativeAPIGatewayMCPToolACLListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewayMCPToolListOutcome CngwClient::DescribeCloudNativeAPIGatewayMCPToolList(const DescribeCloudNativeAPIGatewayMCPToolListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayMCPToolList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayMCPToolListResponse rsp = DescribeCloudNativeAPIGatewayMCPToolListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayMCPToolListOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayMCPToolListOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayMCPToolListOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewayMCPToolListAsync(const DescribeCloudNativeAPIGatewayMCPToolListRequest& request, const DescribeCloudNativeAPIGatewayMCPToolListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayMCPToolListRequest&;
    using Resp = DescribeCloudNativeAPIGatewayMCPToolListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayMCPToolList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewayMCPToolListOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewayMCPToolListCallable(const DescribeCloudNativeAPIGatewayMCPToolListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayMCPToolListOutcome>>();
    DescribeCloudNativeAPIGatewayMCPToolListAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewayMCPToolListRequest&,
        DescribeCloudNativeAPIGatewayMCPToolListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewaySecretKeyOutcome CngwClient::DescribeCloudNativeAPIGatewaySecretKey(const DescribeCloudNativeAPIGatewaySecretKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewaySecretKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewaySecretKeyResponse rsp = DescribeCloudNativeAPIGatewaySecretKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewaySecretKeyOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewaySecretKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewaySecretKeyOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewaySecretKeyAsync(const DescribeCloudNativeAPIGatewaySecretKeyRequest& request, const DescribeCloudNativeAPIGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewaySecretKeyRequest&;
    using Resp = DescribeCloudNativeAPIGatewaySecretKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewaySecretKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewaySecretKeyOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewaySecretKeyCallable(const DescribeCloudNativeAPIGatewaySecretKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewaySecretKeyOutcome>>();
    DescribeCloudNativeAPIGatewaySecretKeyAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewaySecretKeyRequest&,
        DescribeCloudNativeAPIGatewaySecretKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::DescribeCloudNativeAPIGatewaySecretKeyValueOutcome CngwClient::DescribeCloudNativeAPIGatewaySecretKeyValue(const DescribeCloudNativeAPIGatewaySecretKeyValueRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewaySecretKeyValue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewaySecretKeyValueResponse rsp = DescribeCloudNativeAPIGatewaySecretKeyValueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewaySecretKeyValueOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewaySecretKeyValueOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewaySecretKeyValueOutcome(outcome.GetError());
    }
}

void CngwClient::DescribeCloudNativeAPIGatewaySecretKeyValueAsync(const DescribeCloudNativeAPIGatewaySecretKeyValueRequest& request, const DescribeCloudNativeAPIGatewaySecretKeyValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewaySecretKeyValueRequest&;
    using Resp = DescribeCloudNativeAPIGatewaySecretKeyValueResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewaySecretKeyValue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::DescribeCloudNativeAPIGatewaySecretKeyValueOutcomeCallable CngwClient::DescribeCloudNativeAPIGatewaySecretKeyValueCallable(const DescribeCloudNativeAPIGatewaySecretKeyValueRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewaySecretKeyValueOutcome>>();
    DescribeCloudNativeAPIGatewaySecretKeyValueAsync(
    request,
    [prom](
        const CngwClient*,
        const DescribeCloudNativeAPIGatewaySecretKeyValueRequest&,
        DescribeCloudNativeAPIGatewaySecretKeyValueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::ModifyCloudNativeAPIGatewayConsumerOutcome CngwClient::ModifyCloudNativeAPIGatewayConsumer(const ModifyCloudNativeAPIGatewayConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayConsumerResponse rsp = ModifyCloudNativeAPIGatewayConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayConsumerOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayConsumerOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayConsumerOutcome(outcome.GetError());
    }
}

void CngwClient::ModifyCloudNativeAPIGatewayConsumerAsync(const ModifyCloudNativeAPIGatewayConsumerRequest& request, const ModifyCloudNativeAPIGatewayConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayConsumerRequest&;
    using Resp = ModifyCloudNativeAPIGatewayConsumerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayConsumer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::ModifyCloudNativeAPIGatewayConsumerOutcomeCallable CngwClient::ModifyCloudNativeAPIGatewayConsumerCallable(const ModifyCloudNativeAPIGatewayConsumerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayConsumerOutcome>>();
    ModifyCloudNativeAPIGatewayConsumerAsync(
    request,
    [prom](
        const CngwClient*,
        const ModifyCloudNativeAPIGatewayConsumerRequest&,
        ModifyCloudNativeAPIGatewayConsumerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::ModifyCloudNativeAPIGatewayConsumerGroupOutcome CngwClient::ModifyCloudNativeAPIGatewayConsumerGroup(const ModifyCloudNativeAPIGatewayConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayConsumerGroupResponse rsp = ModifyCloudNativeAPIGatewayConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayConsumerGroupOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayConsumerGroupOutcome(outcome.GetError());
    }
}

void CngwClient::ModifyCloudNativeAPIGatewayConsumerGroupAsync(const ModifyCloudNativeAPIGatewayConsumerGroupRequest& request, const ModifyCloudNativeAPIGatewayConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayConsumerGroupRequest&;
    using Resp = ModifyCloudNativeAPIGatewayConsumerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayConsumerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::ModifyCloudNativeAPIGatewayConsumerGroupOutcomeCallable CngwClient::ModifyCloudNativeAPIGatewayConsumerGroupCallable(const ModifyCloudNativeAPIGatewayConsumerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayConsumerGroupOutcome>>();
    ModifyCloudNativeAPIGatewayConsumerGroupAsync(
    request,
    [prom](
        const CngwClient*,
        const ModifyCloudNativeAPIGatewayConsumerGroupRequest&,
        ModifyCloudNativeAPIGatewayConsumerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::ModifyCloudNativeAPIGatewayLLMModelAPIOutcome CngwClient::ModifyCloudNativeAPIGatewayLLMModelAPI(const ModifyCloudNativeAPIGatewayLLMModelAPIRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayLLMModelAPI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayLLMModelAPIResponse rsp = ModifyCloudNativeAPIGatewayLLMModelAPIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayLLMModelAPIOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayLLMModelAPIOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayLLMModelAPIOutcome(outcome.GetError());
    }
}

void CngwClient::ModifyCloudNativeAPIGatewayLLMModelAPIAsync(const ModifyCloudNativeAPIGatewayLLMModelAPIRequest& request, const ModifyCloudNativeAPIGatewayLLMModelAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayLLMModelAPIRequest&;
    using Resp = ModifyCloudNativeAPIGatewayLLMModelAPIResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayLLMModelAPI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::ModifyCloudNativeAPIGatewayLLMModelAPIOutcomeCallable CngwClient::ModifyCloudNativeAPIGatewayLLMModelAPICallable(const ModifyCloudNativeAPIGatewayLLMModelAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayLLMModelAPIOutcome>>();
    ModifyCloudNativeAPIGatewayLLMModelAPIAsync(
    request,
    [prom](
        const CngwClient*,
        const ModifyCloudNativeAPIGatewayLLMModelAPIRequest&,
        ModifyCloudNativeAPIGatewayLLMModelAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::ModifyCloudNativeAPIGatewayLLMModelServiceOutcome CngwClient::ModifyCloudNativeAPIGatewayLLMModelService(const ModifyCloudNativeAPIGatewayLLMModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayLLMModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayLLMModelServiceResponse rsp = ModifyCloudNativeAPIGatewayLLMModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayLLMModelServiceOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayLLMModelServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayLLMModelServiceOutcome(outcome.GetError());
    }
}

void CngwClient::ModifyCloudNativeAPIGatewayLLMModelServiceAsync(const ModifyCloudNativeAPIGatewayLLMModelServiceRequest& request, const ModifyCloudNativeAPIGatewayLLMModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayLLMModelServiceRequest&;
    using Resp = ModifyCloudNativeAPIGatewayLLMModelServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayLLMModelService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::ModifyCloudNativeAPIGatewayLLMModelServiceOutcomeCallable CngwClient::ModifyCloudNativeAPIGatewayLLMModelServiceCallable(const ModifyCloudNativeAPIGatewayLLMModelServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayLLMModelServiceOutcome>>();
    ModifyCloudNativeAPIGatewayLLMModelServiceAsync(
    request,
    [prom](
        const CngwClient*,
        const ModifyCloudNativeAPIGatewayLLMModelServiceRequest&,
        ModifyCloudNativeAPIGatewayLLMModelServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::ModifyCloudNativeAPIGatewayMCPServerOutcome CngwClient::ModifyCloudNativeAPIGatewayMCPServer(const ModifyCloudNativeAPIGatewayMCPServerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayMCPServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayMCPServerResponse rsp = ModifyCloudNativeAPIGatewayMCPServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayMCPServerOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayMCPServerOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayMCPServerOutcome(outcome.GetError());
    }
}

void CngwClient::ModifyCloudNativeAPIGatewayMCPServerAsync(const ModifyCloudNativeAPIGatewayMCPServerRequest& request, const ModifyCloudNativeAPIGatewayMCPServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayMCPServerRequest&;
    using Resp = ModifyCloudNativeAPIGatewayMCPServerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayMCPServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::ModifyCloudNativeAPIGatewayMCPServerOutcomeCallable CngwClient::ModifyCloudNativeAPIGatewayMCPServerCallable(const ModifyCloudNativeAPIGatewayMCPServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayMCPServerOutcome>>();
    ModifyCloudNativeAPIGatewayMCPServerAsync(
    request,
    [prom](
        const CngwClient*,
        const ModifyCloudNativeAPIGatewayMCPServerRequest&,
        ModifyCloudNativeAPIGatewayMCPServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::ModifyCloudNativeAPIGatewayMCPServerACLOutcome CngwClient::ModifyCloudNativeAPIGatewayMCPServerACL(const ModifyCloudNativeAPIGatewayMCPServerACLRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayMCPServerACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayMCPServerACLResponse rsp = ModifyCloudNativeAPIGatewayMCPServerACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayMCPServerACLOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayMCPServerACLOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayMCPServerACLOutcome(outcome.GetError());
    }
}

void CngwClient::ModifyCloudNativeAPIGatewayMCPServerACLAsync(const ModifyCloudNativeAPIGatewayMCPServerACLRequest& request, const ModifyCloudNativeAPIGatewayMCPServerACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayMCPServerACLRequest&;
    using Resp = ModifyCloudNativeAPIGatewayMCPServerACLResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayMCPServerACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::ModifyCloudNativeAPIGatewayMCPServerACLOutcomeCallable CngwClient::ModifyCloudNativeAPIGatewayMCPServerACLCallable(const ModifyCloudNativeAPIGatewayMCPServerACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayMCPServerACLOutcome>>();
    ModifyCloudNativeAPIGatewayMCPServerACLAsync(
    request,
    [prom](
        const CngwClient*,
        const ModifyCloudNativeAPIGatewayMCPServerACLRequest&,
        ModifyCloudNativeAPIGatewayMCPServerACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::ModifyCloudNativeAPIGatewayMCPServerAuthOutcome CngwClient::ModifyCloudNativeAPIGatewayMCPServerAuth(const ModifyCloudNativeAPIGatewayMCPServerAuthRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayMCPServerAuth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayMCPServerAuthResponse rsp = ModifyCloudNativeAPIGatewayMCPServerAuthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayMCPServerAuthOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayMCPServerAuthOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayMCPServerAuthOutcome(outcome.GetError());
    }
}

void CngwClient::ModifyCloudNativeAPIGatewayMCPServerAuthAsync(const ModifyCloudNativeAPIGatewayMCPServerAuthRequest& request, const ModifyCloudNativeAPIGatewayMCPServerAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayMCPServerAuthRequest&;
    using Resp = ModifyCloudNativeAPIGatewayMCPServerAuthResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayMCPServerAuth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::ModifyCloudNativeAPIGatewayMCPServerAuthOutcomeCallable CngwClient::ModifyCloudNativeAPIGatewayMCPServerAuthCallable(const ModifyCloudNativeAPIGatewayMCPServerAuthRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayMCPServerAuthOutcome>>();
    ModifyCloudNativeAPIGatewayMCPServerAuthAsync(
    request,
    [prom](
        const CngwClient*,
        const ModifyCloudNativeAPIGatewayMCPServerAuthRequest&,
        ModifyCloudNativeAPIGatewayMCPServerAuthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::ModifyCloudNativeAPIGatewayMCPServerStatusOutcome CngwClient::ModifyCloudNativeAPIGatewayMCPServerStatus(const ModifyCloudNativeAPIGatewayMCPServerStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayMCPServerStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayMCPServerStatusResponse rsp = ModifyCloudNativeAPIGatewayMCPServerStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayMCPServerStatusOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayMCPServerStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayMCPServerStatusOutcome(outcome.GetError());
    }
}

void CngwClient::ModifyCloudNativeAPIGatewayMCPServerStatusAsync(const ModifyCloudNativeAPIGatewayMCPServerStatusRequest& request, const ModifyCloudNativeAPIGatewayMCPServerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayMCPServerStatusRequest&;
    using Resp = ModifyCloudNativeAPIGatewayMCPServerStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayMCPServerStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::ModifyCloudNativeAPIGatewayMCPServerStatusOutcomeCallable CngwClient::ModifyCloudNativeAPIGatewayMCPServerStatusCallable(const ModifyCloudNativeAPIGatewayMCPServerStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayMCPServerStatusOutcome>>();
    ModifyCloudNativeAPIGatewayMCPServerStatusAsync(
    request,
    [prom](
        const CngwClient*,
        const ModifyCloudNativeAPIGatewayMCPServerStatusRequest&,
        ModifyCloudNativeAPIGatewayMCPServerStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::ModifyCloudNativeAPIGatewayMCPToolOutcome CngwClient::ModifyCloudNativeAPIGatewayMCPTool(const ModifyCloudNativeAPIGatewayMCPToolRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayMCPTool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayMCPToolResponse rsp = ModifyCloudNativeAPIGatewayMCPToolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayMCPToolOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayMCPToolOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayMCPToolOutcome(outcome.GetError());
    }
}

void CngwClient::ModifyCloudNativeAPIGatewayMCPToolAsync(const ModifyCloudNativeAPIGatewayMCPToolRequest& request, const ModifyCloudNativeAPIGatewayMCPToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayMCPToolRequest&;
    using Resp = ModifyCloudNativeAPIGatewayMCPToolResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayMCPTool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::ModifyCloudNativeAPIGatewayMCPToolOutcomeCallable CngwClient::ModifyCloudNativeAPIGatewayMCPToolCallable(const ModifyCloudNativeAPIGatewayMCPToolRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayMCPToolOutcome>>();
    ModifyCloudNativeAPIGatewayMCPToolAsync(
    request,
    [prom](
        const CngwClient*,
        const ModifyCloudNativeAPIGatewayMCPToolRequest&,
        ModifyCloudNativeAPIGatewayMCPToolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::ModifyCloudNativeAPIGatewayMCPToolACLOutcome CngwClient::ModifyCloudNativeAPIGatewayMCPToolACL(const ModifyCloudNativeAPIGatewayMCPToolACLRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayMCPToolACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayMCPToolACLResponse rsp = ModifyCloudNativeAPIGatewayMCPToolACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayMCPToolACLOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayMCPToolACLOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayMCPToolACLOutcome(outcome.GetError());
    }
}

void CngwClient::ModifyCloudNativeAPIGatewayMCPToolACLAsync(const ModifyCloudNativeAPIGatewayMCPToolACLRequest& request, const ModifyCloudNativeAPIGatewayMCPToolACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayMCPToolACLRequest&;
    using Resp = ModifyCloudNativeAPIGatewayMCPToolACLResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayMCPToolACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::ModifyCloudNativeAPIGatewayMCPToolACLOutcomeCallable CngwClient::ModifyCloudNativeAPIGatewayMCPToolACLCallable(const ModifyCloudNativeAPIGatewayMCPToolACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayMCPToolACLOutcome>>();
    ModifyCloudNativeAPIGatewayMCPToolACLAsync(
    request,
    [prom](
        const CngwClient*,
        const ModifyCloudNativeAPIGatewayMCPToolACLRequest&,
        ModifyCloudNativeAPIGatewayMCPToolACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::ModifyCloudNativeAPIGatewayMCPToolStatusOutcome CngwClient::ModifyCloudNativeAPIGatewayMCPToolStatus(const ModifyCloudNativeAPIGatewayMCPToolStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayMCPToolStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayMCPToolStatusResponse rsp = ModifyCloudNativeAPIGatewayMCPToolStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayMCPToolStatusOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayMCPToolStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayMCPToolStatusOutcome(outcome.GetError());
    }
}

void CngwClient::ModifyCloudNativeAPIGatewayMCPToolStatusAsync(const ModifyCloudNativeAPIGatewayMCPToolStatusRequest& request, const ModifyCloudNativeAPIGatewayMCPToolStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayMCPToolStatusRequest&;
    using Resp = ModifyCloudNativeAPIGatewayMCPToolStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayMCPToolStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::ModifyCloudNativeAPIGatewayMCPToolStatusOutcomeCallable CngwClient::ModifyCloudNativeAPIGatewayMCPToolStatusCallable(const ModifyCloudNativeAPIGatewayMCPToolStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayMCPToolStatusOutcome>>();
    ModifyCloudNativeAPIGatewayMCPToolStatusAsync(
    request,
    [prom](
        const CngwClient*,
        const ModifyCloudNativeAPIGatewayMCPToolStatusRequest&,
        ModifyCloudNativeAPIGatewayMCPToolStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::ModifyCloudNativeAPIGatewaySecretKeyOutcome CngwClient::ModifyCloudNativeAPIGatewaySecretKey(const ModifyCloudNativeAPIGatewaySecretKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewaySecretKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewaySecretKeyResponse rsp = ModifyCloudNativeAPIGatewaySecretKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewaySecretKeyOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewaySecretKeyOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewaySecretKeyOutcome(outcome.GetError());
    }
}

void CngwClient::ModifyCloudNativeAPIGatewaySecretKeyAsync(const ModifyCloudNativeAPIGatewaySecretKeyRequest& request, const ModifyCloudNativeAPIGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewaySecretKeyRequest&;
    using Resp = ModifyCloudNativeAPIGatewaySecretKeyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewaySecretKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::ModifyCloudNativeAPIGatewaySecretKeyOutcomeCallable CngwClient::ModifyCloudNativeAPIGatewaySecretKeyCallable(const ModifyCloudNativeAPIGatewaySecretKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewaySecretKeyOutcome>>();
    ModifyCloudNativeAPIGatewaySecretKeyAsync(
    request,
    [prom](
        const CngwClient*,
        const ModifyCloudNativeAPIGatewaySecretKeyRequest&,
        ModifyCloudNativeAPIGatewaySecretKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::RemoveCloudNativeAPIGatewayConsumerGroupAuthOutcome CngwClient::RemoveCloudNativeAPIGatewayConsumerGroupAuth(const RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveCloudNativeAPIGatewayConsumerGroupAuth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveCloudNativeAPIGatewayConsumerGroupAuthResponse rsp = RemoveCloudNativeAPIGatewayConsumerGroupAuthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveCloudNativeAPIGatewayConsumerGroupAuthOutcome(rsp);
        else
            return RemoveCloudNativeAPIGatewayConsumerGroupAuthOutcome(o.GetError());
    }
    else
    {
        return RemoveCloudNativeAPIGatewayConsumerGroupAuthOutcome(outcome.GetError());
    }
}

void CngwClient::RemoveCloudNativeAPIGatewayConsumerGroupAuthAsync(const RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest& request, const RemoveCloudNativeAPIGatewayConsumerGroupAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest&;
    using Resp = RemoveCloudNativeAPIGatewayConsumerGroupAuthResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveCloudNativeAPIGatewayConsumerGroupAuth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::RemoveCloudNativeAPIGatewayConsumerGroupAuthOutcomeCallable CngwClient::RemoveCloudNativeAPIGatewayConsumerGroupAuthCallable(const RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveCloudNativeAPIGatewayConsumerGroupAuthOutcome>>();
    RemoveCloudNativeAPIGatewayConsumerGroupAuthAsync(
    request,
    [prom](
        const CngwClient*,
        const RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest&,
        RemoveCloudNativeAPIGatewayConsumerGroupAuthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::RemoveCloudNativeAPIGatewayConsumerInGroupOutcome CngwClient::RemoveCloudNativeAPIGatewayConsumerInGroup(const RemoveCloudNativeAPIGatewayConsumerInGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveCloudNativeAPIGatewayConsumerInGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveCloudNativeAPIGatewayConsumerInGroupResponse rsp = RemoveCloudNativeAPIGatewayConsumerInGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveCloudNativeAPIGatewayConsumerInGroupOutcome(rsp);
        else
            return RemoveCloudNativeAPIGatewayConsumerInGroupOutcome(o.GetError());
    }
    else
    {
        return RemoveCloudNativeAPIGatewayConsumerInGroupOutcome(outcome.GetError());
    }
}

void CngwClient::RemoveCloudNativeAPIGatewayConsumerInGroupAsync(const RemoveCloudNativeAPIGatewayConsumerInGroupRequest& request, const RemoveCloudNativeAPIGatewayConsumerInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveCloudNativeAPIGatewayConsumerInGroupRequest&;
    using Resp = RemoveCloudNativeAPIGatewayConsumerInGroupResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveCloudNativeAPIGatewayConsumerInGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::RemoveCloudNativeAPIGatewayConsumerInGroupOutcomeCallable CngwClient::RemoveCloudNativeAPIGatewayConsumerInGroupCallable(const RemoveCloudNativeAPIGatewayConsumerInGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveCloudNativeAPIGatewayConsumerInGroupOutcome>>();
    RemoveCloudNativeAPIGatewayConsumerInGroupAsync(
    request,
    [prom](
        const CngwClient*,
        const RemoveCloudNativeAPIGatewayConsumerInGroupRequest&,
        RemoveCloudNativeAPIGatewayConsumerInGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CngwClient::UnbindCloudNativeAPIGatewaySecretKeyOutcome CngwClient::UnbindCloudNativeAPIGatewaySecretKey(const UnbindCloudNativeAPIGatewaySecretKeyRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindCloudNativeAPIGatewaySecretKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindCloudNativeAPIGatewaySecretKeyResponse rsp = UnbindCloudNativeAPIGatewaySecretKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindCloudNativeAPIGatewaySecretKeyOutcome(rsp);
        else
            return UnbindCloudNativeAPIGatewaySecretKeyOutcome(o.GetError());
    }
    else
    {
        return UnbindCloudNativeAPIGatewaySecretKeyOutcome(outcome.GetError());
    }
}

void CngwClient::UnbindCloudNativeAPIGatewaySecretKeyAsync(const UnbindCloudNativeAPIGatewaySecretKeyRequest& request, const UnbindCloudNativeAPIGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindCloudNativeAPIGatewaySecretKeyRequest&;
    using Resp = UnbindCloudNativeAPIGatewaySecretKeyResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindCloudNativeAPIGatewaySecretKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CngwClient::UnbindCloudNativeAPIGatewaySecretKeyOutcomeCallable CngwClient::UnbindCloudNativeAPIGatewaySecretKeyCallable(const UnbindCloudNativeAPIGatewaySecretKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindCloudNativeAPIGatewaySecretKeyOutcome>>();
    UnbindCloudNativeAPIGatewaySecretKeyAsync(
    request,
    [prom](
        const CngwClient*,
        const UnbindCloudNativeAPIGatewaySecretKeyRequest&,
        UnbindCloudNativeAPIGatewaySecretKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

