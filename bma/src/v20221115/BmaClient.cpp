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

#include <tencentcloud/bma/v20221115/BmaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bma::V20221115;
using namespace TencentCloud::Bma::V20221115::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-11-15";
    const string ENDPOINT = "bma.tencentcloudapi.com";
}

BmaClient::BmaClient(const Credential &credential, const string &region) :
    BmaClient(credential, region, ClientProfile())
{
}

BmaClient::BmaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BmaClient::CreateBPBrandOutcome BmaClient::CreateBPBrand(const CreateBPBrandRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPBrand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPBrandResponse rsp = CreateBPBrandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPBrandOutcome(rsp);
        else
            return CreateBPBrandOutcome(o.GetError());
    }
    else
    {
        return CreateBPBrandOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPBrandAsync(const CreateBPBrandRequest& request, const CreateBPBrandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBPBrandRequest&;
    using Resp = CreateBPBrandResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBPBrand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateBPBrandOutcomeCallable BmaClient::CreateBPBrandCallable(const CreateBPBrandRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBPBrandOutcome>>();
    CreateBPBrandAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateBPBrandRequest&,
        CreateBPBrandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateBPFakeAPPOutcome BmaClient::CreateBPFakeAPP(const CreateBPFakeAPPRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPFakeAPP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPFakeAPPResponse rsp = CreateBPFakeAPPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPFakeAPPOutcome(rsp);
        else
            return CreateBPFakeAPPOutcome(o.GetError());
    }
    else
    {
        return CreateBPFakeAPPOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPFakeAPPAsync(const CreateBPFakeAPPRequest& request, const CreateBPFakeAPPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBPFakeAPPRequest&;
    using Resp = CreateBPFakeAPPResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBPFakeAPP", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateBPFakeAPPOutcomeCallable BmaClient::CreateBPFakeAPPCallable(const CreateBPFakeAPPRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBPFakeAPPOutcome>>();
    CreateBPFakeAPPAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateBPFakeAPPRequest&,
        CreateBPFakeAPPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateBPFakeAPPListOutcome BmaClient::CreateBPFakeAPPList(const CreateBPFakeAPPListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPFakeAPPList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPFakeAPPListResponse rsp = CreateBPFakeAPPListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPFakeAPPListOutcome(rsp);
        else
            return CreateBPFakeAPPListOutcome(o.GetError());
    }
    else
    {
        return CreateBPFakeAPPListOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPFakeAPPListAsync(const CreateBPFakeAPPListRequest& request, const CreateBPFakeAPPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBPFakeAPPListRequest&;
    using Resp = CreateBPFakeAPPListResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBPFakeAPPList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateBPFakeAPPListOutcomeCallable BmaClient::CreateBPFakeAPPListCallable(const CreateBPFakeAPPListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBPFakeAPPListOutcome>>();
    CreateBPFakeAPPListAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateBPFakeAPPListRequest&,
        CreateBPFakeAPPListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateBPFakeURLOutcome BmaClient::CreateBPFakeURL(const CreateBPFakeURLRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPFakeURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPFakeURLResponse rsp = CreateBPFakeURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPFakeURLOutcome(rsp);
        else
            return CreateBPFakeURLOutcome(o.GetError());
    }
    else
    {
        return CreateBPFakeURLOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPFakeURLAsync(const CreateBPFakeURLRequest& request, const CreateBPFakeURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBPFakeURLRequest&;
    using Resp = CreateBPFakeURLResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBPFakeURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateBPFakeURLOutcomeCallable BmaClient::CreateBPFakeURLCallable(const CreateBPFakeURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBPFakeURLOutcome>>();
    CreateBPFakeURLAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateBPFakeURLRequest&,
        CreateBPFakeURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateBPFakeURLsOutcome BmaClient::CreateBPFakeURLs(const CreateBPFakeURLsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPFakeURLs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPFakeURLsResponse rsp = CreateBPFakeURLsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPFakeURLsOutcome(rsp);
        else
            return CreateBPFakeURLsOutcome(o.GetError());
    }
    else
    {
        return CreateBPFakeURLsOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPFakeURLsAsync(const CreateBPFakeURLsRequest& request, const CreateBPFakeURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBPFakeURLsRequest&;
    using Resp = CreateBPFakeURLsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBPFakeURLs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateBPFakeURLsOutcomeCallable BmaClient::CreateBPFakeURLsCallable(const CreateBPFakeURLsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBPFakeURLsOutcome>>();
    CreateBPFakeURLsAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateBPFakeURLsRequest&,
        CreateBPFakeURLsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::CreateBPWhiteListOutcome BmaClient::CreateBPWhiteList(const CreateBPWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPWhiteListResponse rsp = CreateBPWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPWhiteListOutcome(rsp);
        else
            return CreateBPWhiteListOutcome(o.GetError());
    }
    else
    {
        return CreateBPWhiteListOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPWhiteListAsync(const CreateBPWhiteListRequest& request, const CreateBPWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBPWhiteListRequest&;
    using Resp = CreateBPWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBPWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::CreateBPWhiteListOutcomeCallable BmaClient::CreateBPWhiteListCallable(const CreateBPWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBPWhiteListOutcome>>();
    CreateBPWhiteListAsync(
    request,
    [prom](
        const BmaClient*,
        const CreateBPWhiteListRequest&,
        CreateBPWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::DeleteBPWhiteListOutcome BmaClient::DeleteBPWhiteList(const DeleteBPWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBPWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBPWhiteListResponse rsp = DeleteBPWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBPWhiteListOutcome(rsp);
        else
            return DeleteBPWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteBPWhiteListOutcome(outcome.GetError());
    }
}

void BmaClient::DeleteBPWhiteListAsync(const DeleteBPWhiteListRequest& request, const DeleteBPWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBPWhiteListRequest&;
    using Resp = DeleteBPWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBPWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::DeleteBPWhiteListOutcomeCallable BmaClient::DeleteBPWhiteListCallable(const DeleteBPWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBPWhiteListOutcome>>();
    DeleteBPWhiteListAsync(
    request,
    [prom](
        const BmaClient*,
        const DeleteBPWhiteListRequest&,
        DeleteBPWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::DescribeBPBrandsOutcome BmaClient::DescribeBPBrands(const DescribeBPBrandsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPBrands");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPBrandsResponse rsp = DescribeBPBrandsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPBrandsOutcome(rsp);
        else
            return DescribeBPBrandsOutcome(o.GetError());
    }
    else
    {
        return DescribeBPBrandsOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPBrandsAsync(const DescribeBPBrandsRequest& request, const DescribeBPBrandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBPBrandsRequest&;
    using Resp = DescribeBPBrandsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBPBrands", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::DescribeBPBrandsOutcomeCallable BmaClient::DescribeBPBrandsCallable(const DescribeBPBrandsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBPBrandsOutcome>>();
    DescribeBPBrandsAsync(
    request,
    [prom](
        const BmaClient*,
        const DescribeBPBrandsRequest&,
        DescribeBPBrandsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::DescribeBPFakeAPPListOutcome BmaClient::DescribeBPFakeAPPList(const DescribeBPFakeAPPListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPFakeAPPList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPFakeAPPListResponse rsp = DescribeBPFakeAPPListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPFakeAPPListOutcome(rsp);
        else
            return DescribeBPFakeAPPListOutcome(o.GetError());
    }
    else
    {
        return DescribeBPFakeAPPListOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPFakeAPPListAsync(const DescribeBPFakeAPPListRequest& request, const DescribeBPFakeAPPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBPFakeAPPListRequest&;
    using Resp = DescribeBPFakeAPPListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBPFakeAPPList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::DescribeBPFakeAPPListOutcomeCallable BmaClient::DescribeBPFakeAPPListCallable(const DescribeBPFakeAPPListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBPFakeAPPListOutcome>>();
    DescribeBPFakeAPPListAsync(
    request,
    [prom](
        const BmaClient*,
        const DescribeBPFakeAPPListRequest&,
        DescribeBPFakeAPPListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::DescribeBPFakeURLsOutcome BmaClient::DescribeBPFakeURLs(const DescribeBPFakeURLsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPFakeURLs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPFakeURLsResponse rsp = DescribeBPFakeURLsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPFakeURLsOutcome(rsp);
        else
            return DescribeBPFakeURLsOutcome(o.GetError());
    }
    else
    {
        return DescribeBPFakeURLsOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPFakeURLsAsync(const DescribeBPFakeURLsRequest& request, const DescribeBPFakeURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBPFakeURLsRequest&;
    using Resp = DescribeBPFakeURLsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBPFakeURLs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::DescribeBPFakeURLsOutcomeCallable BmaClient::DescribeBPFakeURLsCallable(const DescribeBPFakeURLsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBPFakeURLsOutcome>>();
    DescribeBPFakeURLsAsync(
    request,
    [prom](
        const BmaClient*,
        const DescribeBPFakeURLsRequest&,
        DescribeBPFakeURLsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmaClient::DescribeBPWhiteListsOutcome BmaClient::DescribeBPWhiteLists(const DescribeBPWhiteListsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPWhiteLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPWhiteListsResponse rsp = DescribeBPWhiteListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPWhiteListsOutcome(rsp);
        else
            return DescribeBPWhiteListsOutcome(o.GetError());
    }
    else
    {
        return DescribeBPWhiteListsOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPWhiteListsAsync(const DescribeBPWhiteListsRequest& request, const DescribeBPWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBPWhiteListsRequest&;
    using Resp = DescribeBPWhiteListsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBPWhiteLists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmaClient::DescribeBPWhiteListsOutcomeCallable BmaClient::DescribeBPWhiteListsCallable(const DescribeBPWhiteListsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBPWhiteListsOutcome>>();
    DescribeBPWhiteListsAsync(
    request,
    [prom](
        const BmaClient*,
        const DescribeBPWhiteListsRequest&,
        DescribeBPWhiteListsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

