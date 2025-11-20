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

#include <tencentcloud/trp/v20210515/TrpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Trp::V20210515;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-15";
    const string ENDPOINT = "trp.tencentcloudapi.com";
}

TrpClient::TrpClient(const Credential &credential, const string &region) :
    TrpClient(credential, region, ClientProfile())
{
}

TrpClient::TrpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TrpClient::AuthorizedTransferOutcome TrpClient::AuthorizedTransfer(const AuthorizedTransferRequest &request)
{
    auto outcome = MakeRequest(request, "AuthorizedTransfer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AuthorizedTransferResponse rsp = AuthorizedTransferResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AuthorizedTransferOutcome(rsp);
        else
            return AuthorizedTransferOutcome(o.GetError());
    }
    else
    {
        return AuthorizedTransferOutcome(outcome.GetError());
    }
}

void TrpClient::AuthorizedTransferAsync(const AuthorizedTransferRequest& request, const AuthorizedTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AuthorizedTransferRequest&;
    using Resp = AuthorizedTransferResponse;

    DoRequestAsync<Req, Resp>(
        "AuthorizedTransfer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::AuthorizedTransferOutcomeCallable TrpClient::AuthorizedTransferCallable(const AuthorizedTransferRequest &request)
{
    const auto prom = std::make_shared<std::promise<AuthorizedTransferOutcome>>();
    AuthorizedTransferAsync(
    request,
    [prom](
        const TrpClient*,
        const AuthorizedTransferRequest&,
        AuthorizedTransferOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::CreateChainBatchOutcome TrpClient::CreateChainBatch(const CreateChainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChainBatchResponse rsp = CreateChainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChainBatchOutcome(rsp);
        else
            return CreateChainBatchOutcome(o.GetError());
    }
    else
    {
        return CreateChainBatchOutcome(outcome.GetError());
    }
}

void TrpClient::CreateChainBatchAsync(const CreateChainBatchRequest& request, const CreateChainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateChainBatchRequest&;
    using Resp = CreateChainBatchResponse;

    DoRequestAsync<Req, Resp>(
        "CreateChainBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::CreateChainBatchOutcomeCallable TrpClient::CreateChainBatchCallable(const CreateChainBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateChainBatchOutcome>>();
    CreateChainBatchAsync(
    request,
    [prom](
        const TrpClient*,
        const CreateChainBatchRequest&,
        CreateChainBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::CreateCodeBatchOutcome TrpClient::CreateCodeBatch(const CreateCodeBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCodeBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCodeBatchResponse rsp = CreateCodeBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCodeBatchOutcome(rsp);
        else
            return CreateCodeBatchOutcome(o.GetError());
    }
    else
    {
        return CreateCodeBatchOutcome(outcome.GetError());
    }
}

void TrpClient::CreateCodeBatchAsync(const CreateCodeBatchRequest& request, const CreateCodeBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCodeBatchRequest&;
    using Resp = CreateCodeBatchResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCodeBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::CreateCodeBatchOutcomeCallable TrpClient::CreateCodeBatchCallable(const CreateCodeBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCodeBatchOutcome>>();
    CreateCodeBatchAsync(
    request,
    [prom](
        const TrpClient*,
        const CreateCodeBatchRequest&,
        CreateCodeBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::CreateCodePackOutcome TrpClient::CreateCodePack(const CreateCodePackRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCodePack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCodePackResponse rsp = CreateCodePackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCodePackOutcome(rsp);
        else
            return CreateCodePackOutcome(o.GetError());
    }
    else
    {
        return CreateCodePackOutcome(outcome.GetError());
    }
}

void TrpClient::CreateCodePackAsync(const CreateCodePackRequest& request, const CreateCodePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCodePackRequest&;
    using Resp = CreateCodePackResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCodePack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::CreateCodePackOutcomeCallable TrpClient::CreateCodePackCallable(const CreateCodePackRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCodePackOutcome>>();
    CreateCodePackAsync(
    request,
    [prom](
        const TrpClient*,
        const CreateCodePackRequest&,
        CreateCodePackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::CreateCorporationOrderOutcome TrpClient::CreateCorporationOrder(const CreateCorporationOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCorporationOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCorporationOrderResponse rsp = CreateCorporationOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCorporationOrderOutcome(rsp);
        else
            return CreateCorporationOrderOutcome(o.GetError());
    }
    else
    {
        return CreateCorporationOrderOutcome(outcome.GetError());
    }
}

void TrpClient::CreateCorporationOrderAsync(const CreateCorporationOrderRequest& request, const CreateCorporationOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCorporationOrderRequest&;
    using Resp = CreateCorporationOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCorporationOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::CreateCorporationOrderOutcomeCallable TrpClient::CreateCorporationOrderCallable(const CreateCorporationOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCorporationOrderOutcome>>();
    CreateCorporationOrderAsync(
    request,
    [prom](
        const TrpClient*,
        const CreateCorporationOrderRequest&,
        CreateCorporationOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::CreateCustomPackOutcome TrpClient::CreateCustomPack(const CreateCustomPackRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomPack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomPackResponse rsp = CreateCustomPackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomPackOutcome(rsp);
        else
            return CreateCustomPackOutcome(o.GetError());
    }
    else
    {
        return CreateCustomPackOutcome(outcome.GetError());
    }
}

void TrpClient::CreateCustomPackAsync(const CreateCustomPackRequest& request, const CreateCustomPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomPackRequest&;
    using Resp = CreateCustomPackResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomPack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::CreateCustomPackOutcomeCallable TrpClient::CreateCustomPackCallable(const CreateCustomPackRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomPackOutcome>>();
    CreateCustomPackAsync(
    request,
    [prom](
        const TrpClient*,
        const CreateCustomPackRequest&,
        CreateCustomPackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::CreateCustomRuleOutcome TrpClient::CreateCustomRule(const CreateCustomRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomRuleResponse rsp = CreateCustomRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomRuleOutcome(rsp);
        else
            return CreateCustomRuleOutcome(o.GetError());
    }
    else
    {
        return CreateCustomRuleOutcome(outcome.GetError());
    }
}

void TrpClient::CreateCustomRuleAsync(const CreateCustomRuleRequest& request, const CreateCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomRuleRequest&;
    using Resp = CreateCustomRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::CreateCustomRuleOutcomeCallable TrpClient::CreateCustomRuleCallable(const CreateCustomRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomRuleOutcome>>();
    CreateCustomRuleAsync(
    request,
    [prom](
        const TrpClient*,
        const CreateCustomRuleRequest&,
        CreateCustomRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::CreateMerchantOutcome TrpClient::CreateMerchant(const CreateMerchantRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMerchant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMerchantResponse rsp = CreateMerchantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMerchantOutcome(rsp);
        else
            return CreateMerchantOutcome(o.GetError());
    }
    else
    {
        return CreateMerchantOutcome(outcome.GetError());
    }
}

void TrpClient::CreateMerchantAsync(const CreateMerchantRequest& request, const CreateMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMerchantRequest&;
    using Resp = CreateMerchantResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMerchant", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::CreateMerchantOutcomeCallable TrpClient::CreateMerchantCallable(const CreateMerchantRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMerchantOutcome>>();
    CreateMerchantAsync(
    request,
    [prom](
        const TrpClient*,
        const CreateMerchantRequest&,
        CreateMerchantOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::CreateProductOutcome TrpClient::CreateProduct(const CreateProductRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProductResponse rsp = CreateProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProductOutcome(rsp);
        else
            return CreateProductOutcome(o.GetError());
    }
    else
    {
        return CreateProductOutcome(outcome.GetError());
    }
}

void TrpClient::CreateProductAsync(const CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProductRequest&;
    using Resp = CreateProductResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::CreateProductOutcomeCallable TrpClient::CreateProductCallable(const CreateProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProductOutcome>>();
    CreateProductAsync(
    request,
    [prom](
        const TrpClient*,
        const CreateProductRequest&,
        CreateProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::CreateTraceChainOutcome TrpClient::CreateTraceChain(const CreateTraceChainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTraceChain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTraceChainResponse rsp = CreateTraceChainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTraceChainOutcome(rsp);
        else
            return CreateTraceChainOutcome(o.GetError());
    }
    else
    {
        return CreateTraceChainOutcome(outcome.GetError());
    }
}

void TrpClient::CreateTraceChainAsync(const CreateTraceChainRequest& request, const CreateTraceChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTraceChainRequest&;
    using Resp = CreateTraceChainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTraceChain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::CreateTraceChainOutcomeCallable TrpClient::CreateTraceChainCallable(const CreateTraceChainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTraceChainOutcome>>();
    CreateTraceChainAsync(
    request,
    [prom](
        const TrpClient*,
        const CreateTraceChainRequest&,
        CreateTraceChainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::CreateTraceCodesOutcome TrpClient::CreateTraceCodes(const CreateTraceCodesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTraceCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTraceCodesResponse rsp = CreateTraceCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTraceCodesOutcome(rsp);
        else
            return CreateTraceCodesOutcome(o.GetError());
    }
    else
    {
        return CreateTraceCodesOutcome(outcome.GetError());
    }
}

void TrpClient::CreateTraceCodesAsync(const CreateTraceCodesRequest& request, const CreateTraceCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTraceCodesRequest&;
    using Resp = CreateTraceCodesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTraceCodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::CreateTraceCodesOutcomeCallable TrpClient::CreateTraceCodesCallable(const CreateTraceCodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTraceCodesOutcome>>();
    CreateTraceCodesAsync(
    request,
    [prom](
        const TrpClient*,
        const CreateTraceCodesRequest&,
        CreateTraceCodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::CreateTraceCodesAsyncOutcome TrpClient::CreateTraceCodesAsync(const CreateTraceCodesAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTraceCodesAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTraceCodesAsyncResponse rsp = CreateTraceCodesAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTraceCodesAsyncOutcome(rsp);
        else
            return CreateTraceCodesAsyncOutcome(o.GetError());
    }
    else
    {
        return CreateTraceCodesAsyncOutcome(outcome.GetError());
    }
}

void TrpClient::CreateTraceCodesAsyncAsync(const CreateTraceCodesAsyncRequest& request, const CreateTraceCodesAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTraceCodesAsyncRequest&;
    using Resp = CreateTraceCodesAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTraceCodesAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::CreateTraceCodesAsyncOutcomeCallable TrpClient::CreateTraceCodesAsyncCallable(const CreateTraceCodesAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTraceCodesAsyncOutcome>>();
    CreateTraceCodesAsyncAsync(
    request,
    [prom](
        const TrpClient*,
        const CreateTraceCodesAsyncRequest&,
        CreateTraceCodesAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::CreateTraceDataOutcome TrpClient::CreateTraceData(const CreateTraceDataRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTraceData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTraceDataResponse rsp = CreateTraceDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTraceDataOutcome(rsp);
        else
            return CreateTraceDataOutcome(o.GetError());
    }
    else
    {
        return CreateTraceDataOutcome(outcome.GetError());
    }
}

void TrpClient::CreateTraceDataAsync(const CreateTraceDataRequest& request, const CreateTraceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTraceDataRequest&;
    using Resp = CreateTraceDataResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTraceData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::CreateTraceDataOutcomeCallable TrpClient::CreateTraceDataCallable(const CreateTraceDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTraceDataOutcome>>();
    CreateTraceDataAsync(
    request,
    [prom](
        const TrpClient*,
        const CreateTraceDataRequest&,
        CreateTraceDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DeleteCodeBatchOutcome TrpClient::DeleteCodeBatch(const DeleteCodeBatchRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCodeBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCodeBatchResponse rsp = DeleteCodeBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCodeBatchOutcome(rsp);
        else
            return DeleteCodeBatchOutcome(o.GetError());
    }
    else
    {
        return DeleteCodeBatchOutcome(outcome.GetError());
    }
}

void TrpClient::DeleteCodeBatchAsync(const DeleteCodeBatchRequest& request, const DeleteCodeBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCodeBatchRequest&;
    using Resp = DeleteCodeBatchResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCodeBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DeleteCodeBatchOutcomeCallable TrpClient::DeleteCodeBatchCallable(const DeleteCodeBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCodeBatchOutcome>>();
    DeleteCodeBatchAsync(
    request,
    [prom](
        const TrpClient*,
        const DeleteCodeBatchRequest&,
        DeleteCodeBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DeleteMerchantOutcome TrpClient::DeleteMerchant(const DeleteMerchantRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMerchant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMerchantResponse rsp = DeleteMerchantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMerchantOutcome(rsp);
        else
            return DeleteMerchantOutcome(o.GetError());
    }
    else
    {
        return DeleteMerchantOutcome(outcome.GetError());
    }
}

void TrpClient::DeleteMerchantAsync(const DeleteMerchantRequest& request, const DeleteMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMerchantRequest&;
    using Resp = DeleteMerchantResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMerchant", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DeleteMerchantOutcomeCallable TrpClient::DeleteMerchantCallable(const DeleteMerchantRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMerchantOutcome>>();
    DeleteMerchantAsync(
    request,
    [prom](
        const TrpClient*,
        const DeleteMerchantRequest&,
        DeleteMerchantOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DeleteProductOutcome TrpClient::DeleteProduct(const DeleteProductRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProductResponse rsp = DeleteProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProductOutcome(rsp);
        else
            return DeleteProductOutcome(o.GetError());
    }
    else
    {
        return DeleteProductOutcome(outcome.GetError());
    }
}

void TrpClient::DeleteProductAsync(const DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProductRequest&;
    using Resp = DeleteProductResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DeleteProductOutcomeCallable TrpClient::DeleteProductCallable(const DeleteProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProductOutcome>>();
    DeleteProductAsync(
    request,
    [prom](
        const TrpClient*,
        const DeleteProductRequest&,
        DeleteProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DeleteTraceDataOutcome TrpClient::DeleteTraceData(const DeleteTraceDataRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTraceData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTraceDataResponse rsp = DeleteTraceDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTraceDataOutcome(rsp);
        else
            return DeleteTraceDataOutcome(o.GetError());
    }
    else
    {
        return DeleteTraceDataOutcome(outcome.GetError());
    }
}

void TrpClient::DeleteTraceDataAsync(const DeleteTraceDataRequest& request, const DeleteTraceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTraceDataRequest&;
    using Resp = DeleteTraceDataResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTraceData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DeleteTraceDataOutcomeCallable TrpClient::DeleteTraceDataCallable(const DeleteTraceDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTraceDataOutcome>>();
    DeleteTraceDataAsync(
    request,
    [prom](
        const TrpClient*,
        const DeleteTraceDataRequest&,
        DeleteTraceDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeAgentCorpsOutcome TrpClient::DescribeAgentCorps(const DescribeAgentCorpsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentCorps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentCorpsResponse rsp = DescribeAgentCorpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentCorpsOutcome(rsp);
        else
            return DescribeAgentCorpsOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentCorpsOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeAgentCorpsAsync(const DescribeAgentCorpsRequest& request, const DescribeAgentCorpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentCorpsRequest&;
    using Resp = DescribeAgentCorpsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentCorps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeAgentCorpsOutcomeCallable TrpClient::DescribeAgentCorpsCallable(const DescribeAgentCorpsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentCorpsOutcome>>();
    DescribeAgentCorpsAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeAgentCorpsRequest&,
        DescribeAgentCorpsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeCodeBatchByIdOutcome TrpClient::DescribeCodeBatchById(const DescribeCodeBatchByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeBatchById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeBatchByIdResponse rsp = DescribeCodeBatchByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeBatchByIdOutcome(rsp);
        else
            return DescribeCodeBatchByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeCodeBatchByIdOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeCodeBatchByIdAsync(const DescribeCodeBatchByIdRequest& request, const DescribeCodeBatchByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCodeBatchByIdRequest&;
    using Resp = DescribeCodeBatchByIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCodeBatchById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeCodeBatchByIdOutcomeCallable TrpClient::DescribeCodeBatchByIdCallable(const DescribeCodeBatchByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCodeBatchByIdOutcome>>();
    DescribeCodeBatchByIdAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeCodeBatchByIdRequest&,
        DescribeCodeBatchByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeCodeBatchesOutcome TrpClient::DescribeCodeBatches(const DescribeCodeBatchesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeBatches");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeBatchesResponse rsp = DescribeCodeBatchesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeBatchesOutcome(rsp);
        else
            return DescribeCodeBatchesOutcome(o.GetError());
    }
    else
    {
        return DescribeCodeBatchesOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeCodeBatchesAsync(const DescribeCodeBatchesRequest& request, const DescribeCodeBatchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCodeBatchesRequest&;
    using Resp = DescribeCodeBatchesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCodeBatches", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeCodeBatchesOutcomeCallable TrpClient::DescribeCodeBatchesCallable(const DescribeCodeBatchesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCodeBatchesOutcome>>();
    DescribeCodeBatchesAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeCodeBatchesRequest&,
        DescribeCodeBatchesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeCodeBatchsOutcome TrpClient::DescribeCodeBatchs(const DescribeCodeBatchsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeBatchs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeBatchsResponse rsp = DescribeCodeBatchsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeBatchsOutcome(rsp);
        else
            return DescribeCodeBatchsOutcome(o.GetError());
    }
    else
    {
        return DescribeCodeBatchsOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeCodeBatchsAsync(const DescribeCodeBatchsRequest& request, const DescribeCodeBatchsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCodeBatchsRequest&;
    using Resp = DescribeCodeBatchsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCodeBatchs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeCodeBatchsOutcomeCallable TrpClient::DescribeCodeBatchsCallable(const DescribeCodeBatchsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCodeBatchsOutcome>>();
    DescribeCodeBatchsAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeCodeBatchsRequest&,
        DescribeCodeBatchsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeCodePackStatusOutcome TrpClient::DescribeCodePackStatus(const DescribeCodePackStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodePackStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodePackStatusResponse rsp = DescribeCodePackStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodePackStatusOutcome(rsp);
        else
            return DescribeCodePackStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeCodePackStatusOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeCodePackStatusAsync(const DescribeCodePackStatusRequest& request, const DescribeCodePackStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCodePackStatusRequest&;
    using Resp = DescribeCodePackStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCodePackStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeCodePackStatusOutcomeCallable TrpClient::DescribeCodePackStatusCallable(const DescribeCodePackStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCodePackStatusOutcome>>();
    DescribeCodePackStatusAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeCodePackStatusRequest&,
        DescribeCodePackStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeCodePackUrlOutcome TrpClient::DescribeCodePackUrl(const DescribeCodePackUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodePackUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodePackUrlResponse rsp = DescribeCodePackUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodePackUrlOutcome(rsp);
        else
            return DescribeCodePackUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeCodePackUrlOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeCodePackUrlAsync(const DescribeCodePackUrlRequest& request, const DescribeCodePackUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCodePackUrlRequest&;
    using Resp = DescribeCodePackUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCodePackUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeCodePackUrlOutcomeCallable TrpClient::DescribeCodePackUrlCallable(const DescribeCodePackUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCodePackUrlOutcome>>();
    DescribeCodePackUrlAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeCodePackUrlRequest&,
        DescribeCodePackUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeCodePacksOutcome TrpClient::DescribeCodePacks(const DescribeCodePacksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodePacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodePacksResponse rsp = DescribeCodePacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodePacksOutcome(rsp);
        else
            return DescribeCodePacksOutcome(o.GetError());
    }
    else
    {
        return DescribeCodePacksOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeCodePacksAsync(const DescribeCodePacksRequest& request, const DescribeCodePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCodePacksRequest&;
    using Resp = DescribeCodePacksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCodePacks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeCodePacksOutcomeCallable TrpClient::DescribeCodePacksCallable(const DescribeCodePacksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCodePacksOutcome>>();
    DescribeCodePacksAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeCodePacksRequest&,
        DescribeCodePacksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeCodesByPackOutcome TrpClient::DescribeCodesByPack(const DescribeCodesByPackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodesByPack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodesByPackResponse rsp = DescribeCodesByPackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodesByPackOutcome(rsp);
        else
            return DescribeCodesByPackOutcome(o.GetError());
    }
    else
    {
        return DescribeCodesByPackOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeCodesByPackAsync(const DescribeCodesByPackRequest& request, const DescribeCodesByPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCodesByPackRequest&;
    using Resp = DescribeCodesByPackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCodesByPack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeCodesByPackOutcomeCallable TrpClient::DescribeCodesByPackCallable(const DescribeCodesByPackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCodesByPackOutcome>>();
    DescribeCodesByPackAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeCodesByPackRequest&,
        DescribeCodesByPackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeCorpQuotasOutcome TrpClient::DescribeCorpQuotas(const DescribeCorpQuotasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCorpQuotas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCorpQuotasResponse rsp = DescribeCorpQuotasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCorpQuotasOutcome(rsp);
        else
            return DescribeCorpQuotasOutcome(o.GetError());
    }
    else
    {
        return DescribeCorpQuotasOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeCorpQuotasAsync(const DescribeCorpQuotasRequest& request, const DescribeCorpQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCorpQuotasRequest&;
    using Resp = DescribeCorpQuotasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCorpQuotas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeCorpQuotasOutcomeCallable TrpClient::DescribeCorpQuotasCallable(const DescribeCorpQuotasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCorpQuotasOutcome>>();
    DescribeCorpQuotasAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeCorpQuotasRequest&,
        DescribeCorpQuotasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeCustomRuleByIdOutcome TrpClient::DescribeCustomRuleById(const DescribeCustomRuleByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomRuleById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomRuleByIdResponse rsp = DescribeCustomRuleByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomRuleByIdOutcome(rsp);
        else
            return DescribeCustomRuleByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomRuleByIdOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeCustomRuleByIdAsync(const DescribeCustomRuleByIdRequest& request, const DescribeCustomRuleByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomRuleByIdRequest&;
    using Resp = DescribeCustomRuleByIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomRuleById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeCustomRuleByIdOutcomeCallable TrpClient::DescribeCustomRuleByIdCallable(const DescribeCustomRuleByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomRuleByIdOutcome>>();
    DescribeCustomRuleByIdAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeCustomRuleByIdRequest&,
        DescribeCustomRuleByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeCustomRulesOutcome TrpClient::DescribeCustomRules(const DescribeCustomRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomRulesResponse rsp = DescribeCustomRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomRulesOutcome(rsp);
        else
            return DescribeCustomRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomRulesOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeCustomRulesAsync(const DescribeCustomRulesRequest& request, const DescribeCustomRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomRulesRequest&;
    using Resp = DescribeCustomRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeCustomRulesOutcomeCallable TrpClient::DescribeCustomRulesCallable(const DescribeCustomRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomRulesOutcome>>();
    DescribeCustomRulesAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeCustomRulesRequest&,
        DescribeCustomRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeJobFileUrlOutcome TrpClient::DescribeJobFileUrl(const DescribeJobFileUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobFileUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobFileUrlResponse rsp = DescribeJobFileUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobFileUrlOutcome(rsp);
        else
            return DescribeJobFileUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeJobFileUrlOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeJobFileUrlAsync(const DescribeJobFileUrlRequest& request, const DescribeJobFileUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobFileUrlRequest&;
    using Resp = DescribeJobFileUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobFileUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeJobFileUrlOutcomeCallable TrpClient::DescribeJobFileUrlCallable(const DescribeJobFileUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobFileUrlOutcome>>();
    DescribeJobFileUrlAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeJobFileUrlRequest&,
        DescribeJobFileUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeMerchantByIdOutcome TrpClient::DescribeMerchantById(const DescribeMerchantByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMerchantById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMerchantByIdResponse rsp = DescribeMerchantByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMerchantByIdOutcome(rsp);
        else
            return DescribeMerchantByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeMerchantByIdOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeMerchantByIdAsync(const DescribeMerchantByIdRequest& request, const DescribeMerchantByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMerchantByIdRequest&;
    using Resp = DescribeMerchantByIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMerchantById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeMerchantByIdOutcomeCallable TrpClient::DescribeMerchantByIdCallable(const DescribeMerchantByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMerchantByIdOutcome>>();
    DescribeMerchantByIdAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeMerchantByIdRequest&,
        DescribeMerchantByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeMerchantsOutcome TrpClient::DescribeMerchants(const DescribeMerchantsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMerchants");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMerchantsResponse rsp = DescribeMerchantsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMerchantsOutcome(rsp);
        else
            return DescribeMerchantsOutcome(o.GetError());
    }
    else
    {
        return DescribeMerchantsOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeMerchantsAsync(const DescribeMerchantsRequest& request, const DescribeMerchantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMerchantsRequest&;
    using Resp = DescribeMerchantsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMerchants", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeMerchantsOutcomeCallable TrpClient::DescribeMerchantsCallable(const DescribeMerchantsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMerchantsOutcome>>();
    DescribeMerchantsAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeMerchantsRequest&,
        DescribeMerchantsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribePlanQRCodeScanRecordsOutcome TrpClient::DescribePlanQRCodeScanRecords(const DescribePlanQRCodeScanRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlanQRCodeScanRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlanQRCodeScanRecordsResponse rsp = DescribePlanQRCodeScanRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlanQRCodeScanRecordsOutcome(rsp);
        else
            return DescribePlanQRCodeScanRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribePlanQRCodeScanRecordsOutcome(outcome.GetError());
    }
}

void TrpClient::DescribePlanQRCodeScanRecordsAsync(const DescribePlanQRCodeScanRecordsRequest& request, const DescribePlanQRCodeScanRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePlanQRCodeScanRecordsRequest&;
    using Resp = DescribePlanQRCodeScanRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePlanQRCodeScanRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribePlanQRCodeScanRecordsOutcomeCallable TrpClient::DescribePlanQRCodeScanRecordsCallable(const DescribePlanQRCodeScanRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePlanQRCodeScanRecordsOutcome>>();
    DescribePlanQRCodeScanRecordsAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribePlanQRCodeScanRecordsRequest&,
        DescribePlanQRCodeScanRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribePlanQRCodesOutcome TrpClient::DescribePlanQRCodes(const DescribePlanQRCodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlanQRCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlanQRCodesResponse rsp = DescribePlanQRCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlanQRCodesOutcome(rsp);
        else
            return DescribePlanQRCodesOutcome(o.GetError());
    }
    else
    {
        return DescribePlanQRCodesOutcome(outcome.GetError());
    }
}

void TrpClient::DescribePlanQRCodesAsync(const DescribePlanQRCodesRequest& request, const DescribePlanQRCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePlanQRCodesRequest&;
    using Resp = DescribePlanQRCodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePlanQRCodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribePlanQRCodesOutcomeCallable TrpClient::DescribePlanQRCodesCallable(const DescribePlanQRCodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePlanQRCodesOutcome>>();
    DescribePlanQRCodesAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribePlanQRCodesRequest&,
        DescribePlanQRCodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeProductByIdOutcome TrpClient::DescribeProductById(const DescribeProductByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductByIdResponse rsp = DescribeProductByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductByIdOutcome(rsp);
        else
            return DescribeProductByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeProductByIdOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeProductByIdAsync(const DescribeProductByIdRequest& request, const DescribeProductByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductByIdRequest&;
    using Resp = DescribeProductByIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeProductByIdOutcomeCallable TrpClient::DescribeProductByIdCallable(const DescribeProductByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductByIdOutcome>>();
    DescribeProductByIdAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeProductByIdRequest&,
        DescribeProductByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeProductsOutcome TrpClient::DescribeProducts(const DescribeProductsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductsResponse rsp = DescribeProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductsOutcome(rsp);
        else
            return DescribeProductsOutcome(o.GetError());
    }
    else
    {
        return DescribeProductsOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeProductsAsync(const DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductsRequest&;
    using Resp = DescribeProductsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProducts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeProductsOutcomeCallable TrpClient::DescribeProductsCallable(const DescribeProductsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductsOutcome>>();
    DescribeProductsAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeProductsRequest&,
        DescribeProductsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeRawScanLogsOutcome TrpClient::DescribeRawScanLogs(const DescribeRawScanLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRawScanLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRawScanLogsResponse rsp = DescribeRawScanLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRawScanLogsOutcome(rsp);
        else
            return DescribeRawScanLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeRawScanLogsOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeRawScanLogsAsync(const DescribeRawScanLogsRequest& request, const DescribeRawScanLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRawScanLogsRequest&;
    using Resp = DescribeRawScanLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRawScanLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeRawScanLogsOutcomeCallable TrpClient::DescribeRawScanLogsCallable(const DescribeRawScanLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRawScanLogsOutcome>>();
    DescribeRawScanLogsAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeRawScanLogsRequest&,
        DescribeRawScanLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeScanLogsOutcome TrpClient::DescribeScanLogs(const DescribeScanLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanLogsResponse rsp = DescribeScanLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanLogsOutcome(rsp);
        else
            return DescribeScanLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeScanLogsOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeScanLogsAsync(const DescribeScanLogsRequest& request, const DescribeScanLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanLogsRequest&;
    using Resp = DescribeScanLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeScanLogsOutcomeCallable TrpClient::DescribeScanLogsCallable(const DescribeScanLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanLogsOutcome>>();
    DescribeScanLogsAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeScanLogsRequest&,
        DescribeScanLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeScanStatsOutcome TrpClient::DescribeScanStats(const DescribeScanStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanStatsResponse rsp = DescribeScanStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanStatsOutcome(rsp);
        else
            return DescribeScanStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeScanStatsOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeScanStatsAsync(const DescribeScanStatsRequest& request, const DescribeScanStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanStatsRequest&;
    using Resp = DescribeScanStatsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanStats", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeScanStatsOutcomeCallable TrpClient::DescribeScanStatsCallable(const DescribeScanStatsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanStatsOutcome>>();
    DescribeScanStatsAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeScanStatsRequest&,
        DescribeScanStatsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeTmpTokenOutcome TrpClient::DescribeTmpToken(const DescribeTmpTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTmpToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTmpTokenResponse rsp = DescribeTmpTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTmpTokenOutcome(rsp);
        else
            return DescribeTmpTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeTmpTokenOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeTmpTokenAsync(const DescribeTmpTokenRequest& request, const DescribeTmpTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTmpTokenRequest&;
    using Resp = DescribeTmpTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTmpToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeTmpTokenOutcomeCallable TrpClient::DescribeTmpTokenCallable(const DescribeTmpTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTmpTokenOutcome>>();
    DescribeTmpTokenAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeTmpTokenRequest&,
        DescribeTmpTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeTraceCodeByIdOutcome TrpClient::DescribeTraceCodeById(const DescribeTraceCodeByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTraceCodeById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTraceCodeByIdResponse rsp = DescribeTraceCodeByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTraceCodeByIdOutcome(rsp);
        else
            return DescribeTraceCodeByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeTraceCodeByIdOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeTraceCodeByIdAsync(const DescribeTraceCodeByIdRequest& request, const DescribeTraceCodeByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTraceCodeByIdRequest&;
    using Resp = DescribeTraceCodeByIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTraceCodeById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeTraceCodeByIdOutcomeCallable TrpClient::DescribeTraceCodeByIdCallable(const DescribeTraceCodeByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTraceCodeByIdOutcome>>();
    DescribeTraceCodeByIdAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeTraceCodeByIdRequest&,
        DescribeTraceCodeByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeTraceCodesOutcome TrpClient::DescribeTraceCodes(const DescribeTraceCodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTraceCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTraceCodesResponse rsp = DescribeTraceCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTraceCodesOutcome(rsp);
        else
            return DescribeTraceCodesOutcome(o.GetError());
    }
    else
    {
        return DescribeTraceCodesOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeTraceCodesAsync(const DescribeTraceCodesRequest& request, const DescribeTraceCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTraceCodesRequest&;
    using Resp = DescribeTraceCodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTraceCodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeTraceCodesOutcomeCallable TrpClient::DescribeTraceCodesCallable(const DescribeTraceCodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTraceCodesOutcome>>();
    DescribeTraceCodesAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeTraceCodesRequest&,
        DescribeTraceCodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeTraceDataByIdOutcome TrpClient::DescribeTraceDataById(const DescribeTraceDataByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTraceDataById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTraceDataByIdResponse rsp = DescribeTraceDataByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTraceDataByIdOutcome(rsp);
        else
            return DescribeTraceDataByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeTraceDataByIdOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeTraceDataByIdAsync(const DescribeTraceDataByIdRequest& request, const DescribeTraceDataByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTraceDataByIdRequest&;
    using Resp = DescribeTraceDataByIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTraceDataById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeTraceDataByIdOutcomeCallable TrpClient::DescribeTraceDataByIdCallable(const DescribeTraceDataByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTraceDataByIdOutcome>>();
    DescribeTraceDataByIdAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeTraceDataByIdRequest&,
        DescribeTraceDataByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::DescribeTraceDataListOutcome TrpClient::DescribeTraceDataList(const DescribeTraceDataListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTraceDataList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTraceDataListResponse rsp = DescribeTraceDataListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTraceDataListOutcome(rsp);
        else
            return DescribeTraceDataListOutcome(o.GetError());
    }
    else
    {
        return DescribeTraceDataListOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeTraceDataListAsync(const DescribeTraceDataListRequest& request, const DescribeTraceDataListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTraceDataListRequest&;
    using Resp = DescribeTraceDataListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTraceDataList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::DescribeTraceDataListOutcomeCallable TrpClient::DescribeTraceDataListCallable(const DescribeTraceDataListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTraceDataListOutcome>>();
    DescribeTraceDataListAsync(
    request,
    [prom](
        const TrpClient*,
        const DescribeTraceDataListRequest&,
        DescribeTraceDataListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::EffectFeedbackOutcome TrpClient::EffectFeedback(const EffectFeedbackRequest &request)
{
    auto outcome = MakeRequest(request, "EffectFeedback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EffectFeedbackResponse rsp = EffectFeedbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EffectFeedbackOutcome(rsp);
        else
            return EffectFeedbackOutcome(o.GetError());
    }
    else
    {
        return EffectFeedbackOutcome(outcome.GetError());
    }
}

void TrpClient::EffectFeedbackAsync(const EffectFeedbackRequest& request, const EffectFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EffectFeedbackRequest&;
    using Resp = EffectFeedbackResponse;

    DoRequestAsync<Req, Resp>(
        "EffectFeedback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::EffectFeedbackOutcomeCallable TrpClient::EffectFeedbackCallable(const EffectFeedbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<EffectFeedbackOutcome>>();
    EffectFeedbackAsync(
    request,
    [prom](
        const TrpClient*,
        const EffectFeedbackRequest&,
        EffectFeedbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::ModifyCodeBatchOutcome TrpClient::ModifyCodeBatch(const ModifyCodeBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCodeBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCodeBatchResponse rsp = ModifyCodeBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCodeBatchOutcome(rsp);
        else
            return ModifyCodeBatchOutcome(o.GetError());
    }
    else
    {
        return ModifyCodeBatchOutcome(outcome.GetError());
    }
}

void TrpClient::ModifyCodeBatchAsync(const ModifyCodeBatchRequest& request, const ModifyCodeBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCodeBatchRequest&;
    using Resp = ModifyCodeBatchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCodeBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::ModifyCodeBatchOutcomeCallable TrpClient::ModifyCodeBatchCallable(const ModifyCodeBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCodeBatchOutcome>>();
    ModifyCodeBatchAsync(
    request,
    [prom](
        const TrpClient*,
        const ModifyCodeBatchRequest&,
        ModifyCodeBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::ModifyCustomRuleOutcome TrpClient::ModifyCustomRule(const ModifyCustomRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomRuleResponse rsp = ModifyCustomRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomRuleOutcome(rsp);
        else
            return ModifyCustomRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomRuleOutcome(outcome.GetError());
    }
}

void TrpClient::ModifyCustomRuleAsync(const ModifyCustomRuleRequest& request, const ModifyCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCustomRuleRequest&;
    using Resp = ModifyCustomRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::ModifyCustomRuleOutcomeCallable TrpClient::ModifyCustomRuleCallable(const ModifyCustomRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomRuleOutcome>>();
    ModifyCustomRuleAsync(
    request,
    [prom](
        const TrpClient*,
        const ModifyCustomRuleRequest&,
        ModifyCustomRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::ModifyCustomRuleStatusOutcome TrpClient::ModifyCustomRuleStatus(const ModifyCustomRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomRuleStatusResponse rsp = ModifyCustomRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomRuleStatusOutcome(rsp);
        else
            return ModifyCustomRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomRuleStatusOutcome(outcome.GetError());
    }
}

void TrpClient::ModifyCustomRuleStatusAsync(const ModifyCustomRuleStatusRequest& request, const ModifyCustomRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCustomRuleStatusRequest&;
    using Resp = ModifyCustomRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::ModifyCustomRuleStatusOutcomeCallable TrpClient::ModifyCustomRuleStatusCallable(const ModifyCustomRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomRuleStatusOutcome>>();
    ModifyCustomRuleStatusAsync(
    request,
    [prom](
        const TrpClient*,
        const ModifyCustomRuleStatusRequest&,
        ModifyCustomRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::ModifyMerchantOutcome TrpClient::ModifyMerchant(const ModifyMerchantRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMerchant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMerchantResponse rsp = ModifyMerchantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMerchantOutcome(rsp);
        else
            return ModifyMerchantOutcome(o.GetError());
    }
    else
    {
        return ModifyMerchantOutcome(outcome.GetError());
    }
}

void TrpClient::ModifyMerchantAsync(const ModifyMerchantRequest& request, const ModifyMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMerchantRequest&;
    using Resp = ModifyMerchantResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMerchant", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::ModifyMerchantOutcomeCallable TrpClient::ModifyMerchantCallable(const ModifyMerchantRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMerchantOutcome>>();
    ModifyMerchantAsync(
    request,
    [prom](
        const TrpClient*,
        const ModifyMerchantRequest&,
        ModifyMerchantOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::ModifyProductOutcome TrpClient::ModifyProduct(const ModifyProductRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProductResponse rsp = ModifyProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProductOutcome(rsp);
        else
            return ModifyProductOutcome(o.GetError());
    }
    else
    {
        return ModifyProductOutcome(outcome.GetError());
    }
}

void TrpClient::ModifyProductAsync(const ModifyProductRequest& request, const ModifyProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProductRequest&;
    using Resp = ModifyProductResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::ModifyProductOutcomeCallable TrpClient::ModifyProductCallable(const ModifyProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProductOutcome>>();
    ModifyProductAsync(
    request,
    [prom](
        const TrpClient*,
        const ModifyProductRequest&,
        ModifyProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::ModifyTraceCodeOutcome TrpClient::ModifyTraceCode(const ModifyTraceCodeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTraceCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTraceCodeResponse rsp = ModifyTraceCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTraceCodeOutcome(rsp);
        else
            return ModifyTraceCodeOutcome(o.GetError());
    }
    else
    {
        return ModifyTraceCodeOutcome(outcome.GetError());
    }
}

void TrpClient::ModifyTraceCodeAsync(const ModifyTraceCodeRequest& request, const ModifyTraceCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTraceCodeRequest&;
    using Resp = ModifyTraceCodeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTraceCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::ModifyTraceCodeOutcomeCallable TrpClient::ModifyTraceCodeCallable(const ModifyTraceCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTraceCodeOutcome>>();
    ModifyTraceCodeAsync(
    request,
    [prom](
        const TrpClient*,
        const ModifyTraceCodeRequest&,
        ModifyTraceCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::ModifyTraceCodeUnlinkOutcome TrpClient::ModifyTraceCodeUnlink(const ModifyTraceCodeUnlinkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTraceCodeUnlink");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTraceCodeUnlinkResponse rsp = ModifyTraceCodeUnlinkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTraceCodeUnlinkOutcome(rsp);
        else
            return ModifyTraceCodeUnlinkOutcome(o.GetError());
    }
    else
    {
        return ModifyTraceCodeUnlinkOutcome(outcome.GetError());
    }
}

void TrpClient::ModifyTraceCodeUnlinkAsync(const ModifyTraceCodeUnlinkRequest& request, const ModifyTraceCodeUnlinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTraceCodeUnlinkRequest&;
    using Resp = ModifyTraceCodeUnlinkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTraceCodeUnlink", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::ModifyTraceCodeUnlinkOutcomeCallable TrpClient::ModifyTraceCodeUnlinkCallable(const ModifyTraceCodeUnlinkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTraceCodeUnlinkOutcome>>();
    ModifyTraceCodeUnlinkAsync(
    request,
    [prom](
        const TrpClient*,
        const ModifyTraceCodeUnlinkRequest&,
        ModifyTraceCodeUnlinkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::ModifyTraceDataOutcome TrpClient::ModifyTraceData(const ModifyTraceDataRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTraceData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTraceDataResponse rsp = ModifyTraceDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTraceDataOutcome(rsp);
        else
            return ModifyTraceDataOutcome(o.GetError());
    }
    else
    {
        return ModifyTraceDataOutcome(outcome.GetError());
    }
}

void TrpClient::ModifyTraceDataAsync(const ModifyTraceDataRequest& request, const ModifyTraceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTraceDataRequest&;
    using Resp = ModifyTraceDataResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTraceData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::ModifyTraceDataOutcomeCallable TrpClient::ModifyTraceDataCallable(const ModifyTraceDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTraceDataOutcome>>();
    ModifyTraceDataAsync(
    request,
    [prom](
        const TrpClient*,
        const ModifyTraceDataRequest&,
        ModifyTraceDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::ModifyTraceDataRanksOutcome TrpClient::ModifyTraceDataRanks(const ModifyTraceDataRanksRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTraceDataRanks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTraceDataRanksResponse rsp = ModifyTraceDataRanksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTraceDataRanksOutcome(rsp);
        else
            return ModifyTraceDataRanksOutcome(o.GetError());
    }
    else
    {
        return ModifyTraceDataRanksOutcome(outcome.GetError());
    }
}

void TrpClient::ModifyTraceDataRanksAsync(const ModifyTraceDataRanksRequest& request, const ModifyTraceDataRanksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTraceDataRanksRequest&;
    using Resp = ModifyTraceDataRanksResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTraceDataRanks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::ModifyTraceDataRanksOutcomeCallable TrpClient::ModifyTraceDataRanksCallable(const ModifyTraceDataRanksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTraceDataRanksOutcome>>();
    ModifyTraceDataRanksAsync(
    request,
    [prom](
        const TrpClient*,
        const ModifyTraceDataRanksRequest&,
        ModifyTraceDataRanksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrpClient::ReportBatchCallbackStatusOutcome TrpClient::ReportBatchCallbackStatus(const ReportBatchCallbackStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ReportBatchCallbackStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportBatchCallbackStatusResponse rsp = ReportBatchCallbackStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportBatchCallbackStatusOutcome(rsp);
        else
            return ReportBatchCallbackStatusOutcome(o.GetError());
    }
    else
    {
        return ReportBatchCallbackStatusOutcome(outcome.GetError());
    }
}

void TrpClient::ReportBatchCallbackStatusAsync(const ReportBatchCallbackStatusRequest& request, const ReportBatchCallbackStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReportBatchCallbackStatusRequest&;
    using Resp = ReportBatchCallbackStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ReportBatchCallbackStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrpClient::ReportBatchCallbackStatusOutcomeCallable TrpClient::ReportBatchCallbackStatusCallable(const ReportBatchCallbackStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportBatchCallbackStatusOutcome>>();
    ReportBatchCallbackStatusAsync(
    request,
    [prom](
        const TrpClient*,
        const ReportBatchCallbackStatusRequest&,
        ReportBatchCallbackStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

