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

#include <tencentcloud/tccatalog/v20241024/TccatalogClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tccatalog::V20241024;
using namespace TencentCloud::Tccatalog::V20241024::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-10-24";
    const string ENDPOINT = "tccatalog.tencentcloudapi.com";
}

TccatalogClient::TccatalogClient(const Credential &credential, const string &region) :
    TccatalogClient(credential, region, ClientProfile())
{
}

TccatalogClient::TccatalogClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TccatalogClient::AcceptTccVpcEndPointConnectOutcome TccatalogClient::AcceptTccVpcEndPointConnect(const AcceptTccVpcEndPointConnectRequest &request)
{
    auto outcome = MakeRequest(request, "AcceptTccVpcEndPointConnect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcceptTccVpcEndPointConnectResponse rsp = AcceptTccVpcEndPointConnectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcceptTccVpcEndPointConnectOutcome(rsp);
        else
            return AcceptTccVpcEndPointConnectOutcome(o.GetError());
    }
    else
    {
        return AcceptTccVpcEndPointConnectOutcome(outcome.GetError());
    }
}

void TccatalogClient::AcceptTccVpcEndPointConnectAsync(const AcceptTccVpcEndPointConnectRequest& request, const AcceptTccVpcEndPointConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AcceptTccVpcEndPointConnectRequest&;
    using Resp = AcceptTccVpcEndPointConnectResponse;

    DoRequestAsync<Req, Resp>(
        "AcceptTccVpcEndPointConnect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TccatalogClient::AcceptTccVpcEndPointConnectOutcomeCallable TccatalogClient::AcceptTccVpcEndPointConnectCallable(const AcceptTccVpcEndPointConnectRequest &request)
{
    const auto prom = std::make_shared<std::promise<AcceptTccVpcEndPointConnectOutcome>>();
    AcceptTccVpcEndPointConnectAsync(
    request,
    [prom](
        const TccatalogClient*,
        const AcceptTccVpcEndPointConnectRequest&,
        AcceptTccVpcEndPointConnectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TccatalogClient::BindTccVpcEndPointServiceWhiteListOutcome TccatalogClient::BindTccVpcEndPointServiceWhiteList(const BindTccVpcEndPointServiceWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "BindTccVpcEndPointServiceWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindTccVpcEndPointServiceWhiteListResponse rsp = BindTccVpcEndPointServiceWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindTccVpcEndPointServiceWhiteListOutcome(rsp);
        else
            return BindTccVpcEndPointServiceWhiteListOutcome(o.GetError());
    }
    else
    {
        return BindTccVpcEndPointServiceWhiteListOutcome(outcome.GetError());
    }
}

void TccatalogClient::BindTccVpcEndPointServiceWhiteListAsync(const BindTccVpcEndPointServiceWhiteListRequest& request, const BindTccVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindTccVpcEndPointServiceWhiteListRequest&;
    using Resp = BindTccVpcEndPointServiceWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "BindTccVpcEndPointServiceWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TccatalogClient::BindTccVpcEndPointServiceWhiteListOutcomeCallable TccatalogClient::BindTccVpcEndPointServiceWhiteListCallable(const BindTccVpcEndPointServiceWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindTccVpcEndPointServiceWhiteListOutcome>>();
    BindTccVpcEndPointServiceWhiteListAsync(
    request,
    [prom](
        const TccatalogClient*,
        const BindTccVpcEndPointServiceWhiteListRequest&,
        BindTccVpcEndPointServiceWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TccatalogClient::DescribeTccCatalogOutcome TccatalogClient::DescribeTccCatalog(const DescribeTccCatalogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTccCatalog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTccCatalogResponse rsp = DescribeTccCatalogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTccCatalogOutcome(rsp);
        else
            return DescribeTccCatalogOutcome(o.GetError());
    }
    else
    {
        return DescribeTccCatalogOutcome(outcome.GetError());
    }
}

void TccatalogClient::DescribeTccCatalogAsync(const DescribeTccCatalogRequest& request, const DescribeTccCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTccCatalogRequest&;
    using Resp = DescribeTccCatalogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTccCatalog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TccatalogClient::DescribeTccCatalogOutcomeCallable TccatalogClient::DescribeTccCatalogCallable(const DescribeTccCatalogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTccCatalogOutcome>>();
    DescribeTccCatalogAsync(
    request,
    [prom](
        const TccatalogClient*,
        const DescribeTccCatalogRequest&,
        DescribeTccCatalogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TccatalogClient::DescribeTccCatalogsOutcome TccatalogClient::DescribeTccCatalogs(const DescribeTccCatalogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTccCatalogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTccCatalogsResponse rsp = DescribeTccCatalogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTccCatalogsOutcome(rsp);
        else
            return DescribeTccCatalogsOutcome(o.GetError());
    }
    else
    {
        return DescribeTccCatalogsOutcome(outcome.GetError());
    }
}

void TccatalogClient::DescribeTccCatalogsAsync(const DescribeTccCatalogsRequest& request, const DescribeTccCatalogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTccCatalogsRequest&;
    using Resp = DescribeTccCatalogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTccCatalogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TccatalogClient::DescribeTccCatalogsOutcomeCallable TccatalogClient::DescribeTccCatalogsCallable(const DescribeTccCatalogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTccCatalogsOutcome>>();
    DescribeTccCatalogsAsync(
    request,
    [prom](
        const TccatalogClient*,
        const DescribeTccCatalogsRequest&,
        DescribeTccCatalogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

