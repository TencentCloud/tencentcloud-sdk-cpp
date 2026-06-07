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

#include <tencentcloud/tokenhub/v20260322/TokenhubClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tokenhub::V20260322;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

namespace
{
    const string VERSION = "2026-03-22";
    const string ENDPOINT = "tokenhub.tencentcloudapi.com";
}

TokenhubClient::TokenhubClient(const Credential &credential, const string &region) :
    TokenhubClient(credential, region, ClientProfile())
{
}

TokenhubClient::TokenhubClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TokenhubClient::CreateTokenPlanApiKeysOutcome TokenhubClient::CreateTokenPlanApiKeys(const CreateTokenPlanApiKeysRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTokenPlanApiKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTokenPlanApiKeysResponse rsp = CreateTokenPlanApiKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTokenPlanApiKeysOutcome(rsp);
        else
            return CreateTokenPlanApiKeysOutcome(o.GetError());
    }
    else
    {
        return CreateTokenPlanApiKeysOutcome(outcome.GetError());
    }
}

void TokenhubClient::CreateTokenPlanApiKeysAsync(const CreateTokenPlanApiKeysRequest& request, const CreateTokenPlanApiKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTokenPlanApiKeysRequest&;
    using Resp = CreateTokenPlanApiKeysResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTokenPlanApiKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::CreateTokenPlanApiKeysOutcomeCallable TokenhubClient::CreateTokenPlanApiKeysCallable(const CreateTokenPlanApiKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTokenPlanApiKeysOutcome>>();
    CreateTokenPlanApiKeysAsync(
    request,
    [prom](
        const TokenhubClient*,
        const CreateTokenPlanApiKeysRequest&,
        CreateTokenPlanApiKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::CreateTokenPlanTeamOrderAndBuyOutcome TokenhubClient::CreateTokenPlanTeamOrderAndBuy(const CreateTokenPlanTeamOrderAndBuyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTokenPlanTeamOrderAndBuy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTokenPlanTeamOrderAndBuyResponse rsp = CreateTokenPlanTeamOrderAndBuyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTokenPlanTeamOrderAndBuyOutcome(rsp);
        else
            return CreateTokenPlanTeamOrderAndBuyOutcome(o.GetError());
    }
    else
    {
        return CreateTokenPlanTeamOrderAndBuyOutcome(outcome.GetError());
    }
}

void TokenhubClient::CreateTokenPlanTeamOrderAndBuyAsync(const CreateTokenPlanTeamOrderAndBuyRequest& request, const CreateTokenPlanTeamOrderAndBuyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTokenPlanTeamOrderAndBuyRequest&;
    using Resp = CreateTokenPlanTeamOrderAndBuyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTokenPlanTeamOrderAndBuy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::CreateTokenPlanTeamOrderAndBuyOutcomeCallable TokenhubClient::CreateTokenPlanTeamOrderAndBuyCallable(const CreateTokenPlanTeamOrderAndBuyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTokenPlanTeamOrderAndBuyOutcome>>();
    CreateTokenPlanTeamOrderAndBuyAsync(
    request,
    [prom](
        const TokenhubClient*,
        const CreateTokenPlanTeamOrderAndBuyRequest&,
        CreateTokenPlanTeamOrderAndBuyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DeleteTokenPlanApiKeyOutcome TokenhubClient::DeleteTokenPlanApiKey(const DeleteTokenPlanApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTokenPlanApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTokenPlanApiKeyResponse rsp = DeleteTokenPlanApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTokenPlanApiKeyOutcome(rsp);
        else
            return DeleteTokenPlanApiKeyOutcome(o.GetError());
    }
    else
    {
        return DeleteTokenPlanApiKeyOutcome(outcome.GetError());
    }
}

void TokenhubClient::DeleteTokenPlanApiKeyAsync(const DeleteTokenPlanApiKeyRequest& request, const DeleteTokenPlanApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTokenPlanApiKeyRequest&;
    using Resp = DeleteTokenPlanApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTokenPlanApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::DeleteTokenPlanApiKeyOutcomeCallable TokenhubClient::DeleteTokenPlanApiKeyCallable(const DeleteTokenPlanApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTokenPlanApiKeyOutcome>>();
    DeleteTokenPlanApiKeyAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DeleteTokenPlanApiKeyRequest&,
        DeleteTokenPlanApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DescribeApiKeyOutcome TokenhubClient::DescribeApiKey(const DescribeApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiKeyResponse rsp = DescribeApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiKeyOutcome(rsp);
        else
            return DescribeApiKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeApiKeyOutcome(outcome.GetError());
    }
}

void TokenhubClient::DescribeApiKeyAsync(const DescribeApiKeyRequest& request, const DescribeApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiKeyRequest&;
    using Resp = DescribeApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::DescribeApiKeyOutcomeCallable TokenhubClient::DescribeApiKeyCallable(const DescribeApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiKeyOutcome>>();
    DescribeApiKeyAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DescribeApiKeyRequest&,
        DescribeApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DescribeApiKeyListOutcome TokenhubClient::DescribeApiKeyList(const DescribeApiKeyListRequest &request)
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

void TokenhubClient::DescribeApiKeyListAsync(const DescribeApiKeyListRequest& request, const DescribeApiKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TokenhubClient::DescribeApiKeyListOutcomeCallable TokenhubClient::DescribeApiKeyListCallable(const DescribeApiKeyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiKeyListOutcome>>();
    DescribeApiKeyListAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DescribeApiKeyListRequest&,
        DescribeApiKeyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DescribeModelListOutcome TokenhubClient::DescribeModelList(const DescribeModelListRequest &request)
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

void TokenhubClient::DescribeModelListAsync(const DescribeModelListRequest& request, const DescribeModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TokenhubClient::DescribeModelListOutcomeCallable TokenhubClient::DescribeModelListCallable(const DescribeModelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelListOutcome>>();
    DescribeModelListAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DescribeModelListRequest&,
        DescribeModelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DescribeTokenPlanOutcome TokenhubClient::DescribeTokenPlan(const DescribeTokenPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTokenPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenPlanResponse rsp = DescribeTokenPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenPlanOutcome(rsp);
        else
            return DescribeTokenPlanOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenPlanOutcome(outcome.GetError());
    }
}

void TokenhubClient::DescribeTokenPlanAsync(const DescribeTokenPlanRequest& request, const DescribeTokenPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTokenPlanRequest&;
    using Resp = DescribeTokenPlanResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTokenPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::DescribeTokenPlanOutcomeCallable TokenhubClient::DescribeTokenPlanCallable(const DescribeTokenPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTokenPlanOutcome>>();
    DescribeTokenPlanAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DescribeTokenPlanRequest&,
        DescribeTokenPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DescribeTokenPlanApiKeyOutcome TokenhubClient::DescribeTokenPlanApiKey(const DescribeTokenPlanApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTokenPlanApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenPlanApiKeyResponse rsp = DescribeTokenPlanApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenPlanApiKeyOutcome(rsp);
        else
            return DescribeTokenPlanApiKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenPlanApiKeyOutcome(outcome.GetError());
    }
}

void TokenhubClient::DescribeTokenPlanApiKeyAsync(const DescribeTokenPlanApiKeyRequest& request, const DescribeTokenPlanApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTokenPlanApiKeyRequest&;
    using Resp = DescribeTokenPlanApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTokenPlanApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::DescribeTokenPlanApiKeyOutcomeCallable TokenhubClient::DescribeTokenPlanApiKeyCallable(const DescribeTokenPlanApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTokenPlanApiKeyOutcome>>();
    DescribeTokenPlanApiKeyAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DescribeTokenPlanApiKeyRequest&,
        DescribeTokenPlanApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DescribeTokenPlanApiKeyListOutcome TokenhubClient::DescribeTokenPlanApiKeyList(const DescribeTokenPlanApiKeyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTokenPlanApiKeyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenPlanApiKeyListResponse rsp = DescribeTokenPlanApiKeyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenPlanApiKeyListOutcome(rsp);
        else
            return DescribeTokenPlanApiKeyListOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenPlanApiKeyListOutcome(outcome.GetError());
    }
}

void TokenhubClient::DescribeTokenPlanApiKeyListAsync(const DescribeTokenPlanApiKeyListRequest& request, const DescribeTokenPlanApiKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTokenPlanApiKeyListRequest&;
    using Resp = DescribeTokenPlanApiKeyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTokenPlanApiKeyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::DescribeTokenPlanApiKeyListOutcomeCallable TokenhubClient::DescribeTokenPlanApiKeyListCallable(const DescribeTokenPlanApiKeyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTokenPlanApiKeyListOutcome>>();
    DescribeTokenPlanApiKeyListAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DescribeTokenPlanApiKeyListRequest&,
        DescribeTokenPlanApiKeyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DescribeTokenPlanApiKeySecretOutcome TokenhubClient::DescribeTokenPlanApiKeySecret(const DescribeTokenPlanApiKeySecretRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTokenPlanApiKeySecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenPlanApiKeySecretResponse rsp = DescribeTokenPlanApiKeySecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenPlanApiKeySecretOutcome(rsp);
        else
            return DescribeTokenPlanApiKeySecretOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenPlanApiKeySecretOutcome(outcome.GetError());
    }
}

void TokenhubClient::DescribeTokenPlanApiKeySecretAsync(const DescribeTokenPlanApiKeySecretRequest& request, const DescribeTokenPlanApiKeySecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTokenPlanApiKeySecretRequest&;
    using Resp = DescribeTokenPlanApiKeySecretResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTokenPlanApiKeySecret", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::DescribeTokenPlanApiKeySecretOutcomeCallable TokenhubClient::DescribeTokenPlanApiKeySecretCallable(const DescribeTokenPlanApiKeySecretRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTokenPlanApiKeySecretOutcome>>();
    DescribeTokenPlanApiKeySecretAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DescribeTokenPlanApiKeySecretRequest&,
        DescribeTokenPlanApiKeySecretOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DescribeTokenPlanApiKeyUsageDetailOutcome TokenhubClient::DescribeTokenPlanApiKeyUsageDetail(const DescribeTokenPlanApiKeyUsageDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTokenPlanApiKeyUsageDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenPlanApiKeyUsageDetailResponse rsp = DescribeTokenPlanApiKeyUsageDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenPlanApiKeyUsageDetailOutcome(rsp);
        else
            return DescribeTokenPlanApiKeyUsageDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenPlanApiKeyUsageDetailOutcome(outcome.GetError());
    }
}

void TokenhubClient::DescribeTokenPlanApiKeyUsageDetailAsync(const DescribeTokenPlanApiKeyUsageDetailRequest& request, const DescribeTokenPlanApiKeyUsageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTokenPlanApiKeyUsageDetailRequest&;
    using Resp = DescribeTokenPlanApiKeyUsageDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTokenPlanApiKeyUsageDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::DescribeTokenPlanApiKeyUsageDetailOutcomeCallable TokenhubClient::DescribeTokenPlanApiKeyUsageDetailCallable(const DescribeTokenPlanApiKeyUsageDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTokenPlanApiKeyUsageDetailOutcome>>();
    DescribeTokenPlanApiKeyUsageDetailAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DescribeTokenPlanApiKeyUsageDetailRequest&,
        DescribeTokenPlanApiKeyUsageDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DescribeTokenPlanListOutcome TokenhubClient::DescribeTokenPlanList(const DescribeTokenPlanListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTokenPlanList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenPlanListResponse rsp = DescribeTokenPlanListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenPlanListOutcome(rsp);
        else
            return DescribeTokenPlanListOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenPlanListOutcome(outcome.GetError());
    }
}

void TokenhubClient::DescribeTokenPlanListAsync(const DescribeTokenPlanListRequest& request, const DescribeTokenPlanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTokenPlanListRequest&;
    using Resp = DescribeTokenPlanListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTokenPlanList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::DescribeTokenPlanListOutcomeCallable TokenhubClient::DescribeTokenPlanListCallable(const DescribeTokenPlanListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTokenPlanListOutcome>>();
    DescribeTokenPlanListAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DescribeTokenPlanListRequest&,
        DescribeTokenPlanListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DescribeUsageRankListOutcome TokenhubClient::DescribeUsageRankList(const DescribeUsageRankListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsageRankList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsageRankListResponse rsp = DescribeUsageRankListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsageRankListOutcome(rsp);
        else
            return DescribeUsageRankListOutcome(o.GetError());
    }
    else
    {
        return DescribeUsageRankListOutcome(outcome.GetError());
    }
}

void TokenhubClient::DescribeUsageRankListAsync(const DescribeUsageRankListRequest& request, const DescribeUsageRankListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsageRankListRequest&;
    using Resp = DescribeUsageRankListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsageRankList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::DescribeUsageRankListOutcomeCallable TokenhubClient::DescribeUsageRankListCallable(const DescribeUsageRankListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsageRankListOutcome>>();
    DescribeUsageRankListAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DescribeUsageRankListRequest&,
        DescribeUsageRankListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::ModifyTokenPlanApiKeyOutcome TokenhubClient::ModifyTokenPlanApiKey(const ModifyTokenPlanApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTokenPlanApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTokenPlanApiKeyResponse rsp = ModifyTokenPlanApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTokenPlanApiKeyOutcome(rsp);
        else
            return ModifyTokenPlanApiKeyOutcome(o.GetError());
    }
    else
    {
        return ModifyTokenPlanApiKeyOutcome(outcome.GetError());
    }
}

void TokenhubClient::ModifyTokenPlanApiKeyAsync(const ModifyTokenPlanApiKeyRequest& request, const ModifyTokenPlanApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTokenPlanApiKeyRequest&;
    using Resp = ModifyTokenPlanApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTokenPlanApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::ModifyTokenPlanApiKeyOutcomeCallable TokenhubClient::ModifyTokenPlanApiKeyCallable(const ModifyTokenPlanApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTokenPlanApiKeyOutcome>>();
    ModifyTokenPlanApiKeyAsync(
    request,
    [prom](
        const TokenhubClient*,
        const ModifyTokenPlanApiKeyRequest&,
        ModifyTokenPlanApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::ModifyTokenPlanApiKeySecretOutcome TokenhubClient::ModifyTokenPlanApiKeySecret(const ModifyTokenPlanApiKeySecretRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTokenPlanApiKeySecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTokenPlanApiKeySecretResponse rsp = ModifyTokenPlanApiKeySecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTokenPlanApiKeySecretOutcome(rsp);
        else
            return ModifyTokenPlanApiKeySecretOutcome(o.GetError());
    }
    else
    {
        return ModifyTokenPlanApiKeySecretOutcome(outcome.GetError());
    }
}

void TokenhubClient::ModifyTokenPlanApiKeySecretAsync(const ModifyTokenPlanApiKeySecretRequest& request, const ModifyTokenPlanApiKeySecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTokenPlanApiKeySecretRequest&;
    using Resp = ModifyTokenPlanApiKeySecretResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTokenPlanApiKeySecret", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::ModifyTokenPlanApiKeySecretOutcomeCallable TokenhubClient::ModifyTokenPlanApiKeySecretCallable(const ModifyTokenPlanApiKeySecretRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTokenPlanApiKeySecretOutcome>>();
    ModifyTokenPlanApiKeySecretAsync(
    request,
    [prom](
        const TokenhubClient*,
        const ModifyTokenPlanApiKeySecretRequest&,
        ModifyTokenPlanApiKeySecretOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::RenewTokenPlanTeamOrderOutcome TokenhubClient::RenewTokenPlanTeamOrder(const RenewTokenPlanTeamOrderRequest &request)
{
    auto outcome = MakeRequest(request, "RenewTokenPlanTeamOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewTokenPlanTeamOrderResponse rsp = RenewTokenPlanTeamOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewTokenPlanTeamOrderOutcome(rsp);
        else
            return RenewTokenPlanTeamOrderOutcome(o.GetError());
    }
    else
    {
        return RenewTokenPlanTeamOrderOutcome(outcome.GetError());
    }
}

void TokenhubClient::RenewTokenPlanTeamOrderAsync(const RenewTokenPlanTeamOrderRequest& request, const RenewTokenPlanTeamOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewTokenPlanTeamOrderRequest&;
    using Resp = RenewTokenPlanTeamOrderResponse;

    DoRequestAsync<Req, Resp>(
        "RenewTokenPlanTeamOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::RenewTokenPlanTeamOrderOutcomeCallable TokenhubClient::RenewTokenPlanTeamOrderCallable(const RenewTokenPlanTeamOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewTokenPlanTeamOrderOutcome>>();
    RenewTokenPlanTeamOrderAsync(
    request,
    [prom](
        const TokenhubClient*,
        const RenewTokenPlanTeamOrderRequest&,
        RenewTokenPlanTeamOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::UpgradeTokenPlanTeamOrderOutcome TokenhubClient::UpgradeTokenPlanTeamOrder(const UpgradeTokenPlanTeamOrderRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeTokenPlanTeamOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeTokenPlanTeamOrderResponse rsp = UpgradeTokenPlanTeamOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeTokenPlanTeamOrderOutcome(rsp);
        else
            return UpgradeTokenPlanTeamOrderOutcome(o.GetError());
    }
    else
    {
        return UpgradeTokenPlanTeamOrderOutcome(outcome.GetError());
    }
}

void TokenhubClient::UpgradeTokenPlanTeamOrderAsync(const UpgradeTokenPlanTeamOrderRequest& request, const UpgradeTokenPlanTeamOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeTokenPlanTeamOrderRequest&;
    using Resp = UpgradeTokenPlanTeamOrderResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeTokenPlanTeamOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::UpgradeTokenPlanTeamOrderOutcomeCallable TokenhubClient::UpgradeTokenPlanTeamOrderCallable(const UpgradeTokenPlanTeamOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeTokenPlanTeamOrderOutcome>>();
    UpgradeTokenPlanTeamOrderAsync(
    request,
    [prom](
        const TokenhubClient*,
        const UpgradeTokenPlanTeamOrderRequest&,
        UpgradeTokenPlanTeamOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

