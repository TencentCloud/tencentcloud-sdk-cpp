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

#include <tencentcloud/bsca/v20210811/BscaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bsca::V20210811;
using namespace TencentCloud::Bsca::V20210811::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-08-11";
    const string ENDPOINT = "bsca.tencentcloudapi.com";
}

BscaClient::BscaClient(const Credential &credential, const string &region) :
    BscaClient(credential, region, ClientProfile())
{
}

BscaClient::BscaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BscaClient::DescribeKBComponentOutcome BscaClient::DescribeKBComponent(const DescribeKBComponentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKBComponent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKBComponentResponse rsp = DescribeKBComponentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKBComponentOutcome(rsp);
        else
            return DescribeKBComponentOutcome(o.GetError());
    }
    else
    {
        return DescribeKBComponentOutcome(outcome.GetError());
    }
}

void BscaClient::DescribeKBComponentAsync(const DescribeKBComponentRequest& request, const DescribeKBComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKBComponentRequest&;
    using Resp = DescribeKBComponentResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKBComponent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BscaClient::DescribeKBComponentOutcomeCallable BscaClient::DescribeKBComponentCallable(const DescribeKBComponentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKBComponentOutcome>>();
    DescribeKBComponentAsync(
    request,
    [prom](
        const BscaClient*,
        const DescribeKBComponentRequest&,
        DescribeKBComponentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BscaClient::DescribeKBComponentVersionListOutcome BscaClient::DescribeKBComponentVersionList(const DescribeKBComponentVersionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKBComponentVersionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKBComponentVersionListResponse rsp = DescribeKBComponentVersionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKBComponentVersionListOutcome(rsp);
        else
            return DescribeKBComponentVersionListOutcome(o.GetError());
    }
    else
    {
        return DescribeKBComponentVersionListOutcome(outcome.GetError());
    }
}

void BscaClient::DescribeKBComponentVersionListAsync(const DescribeKBComponentVersionListRequest& request, const DescribeKBComponentVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKBComponentVersionListRequest&;
    using Resp = DescribeKBComponentVersionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKBComponentVersionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BscaClient::DescribeKBComponentVersionListOutcomeCallable BscaClient::DescribeKBComponentVersionListCallable(const DescribeKBComponentVersionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKBComponentVersionListOutcome>>();
    DescribeKBComponentVersionListAsync(
    request,
    [prom](
        const BscaClient*,
        const DescribeKBComponentVersionListRequest&,
        DescribeKBComponentVersionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BscaClient::DescribeKBComponentVulnerabilityOutcome BscaClient::DescribeKBComponentVulnerability(const DescribeKBComponentVulnerabilityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKBComponentVulnerability");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKBComponentVulnerabilityResponse rsp = DescribeKBComponentVulnerabilityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKBComponentVulnerabilityOutcome(rsp);
        else
            return DescribeKBComponentVulnerabilityOutcome(o.GetError());
    }
    else
    {
        return DescribeKBComponentVulnerabilityOutcome(outcome.GetError());
    }
}

void BscaClient::DescribeKBComponentVulnerabilityAsync(const DescribeKBComponentVulnerabilityRequest& request, const DescribeKBComponentVulnerabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKBComponentVulnerabilityRequest&;
    using Resp = DescribeKBComponentVulnerabilityResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKBComponentVulnerability", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BscaClient::DescribeKBComponentVulnerabilityOutcomeCallable BscaClient::DescribeKBComponentVulnerabilityCallable(const DescribeKBComponentVulnerabilityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKBComponentVulnerabilityOutcome>>();
    DescribeKBComponentVulnerabilityAsync(
    request,
    [prom](
        const BscaClient*,
        const DescribeKBComponentVulnerabilityRequest&,
        DescribeKBComponentVulnerabilityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BscaClient::DescribeKBLicenseOutcome BscaClient::DescribeKBLicense(const DescribeKBLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKBLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKBLicenseResponse rsp = DescribeKBLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKBLicenseOutcome(rsp);
        else
            return DescribeKBLicenseOutcome(o.GetError());
    }
    else
    {
        return DescribeKBLicenseOutcome(outcome.GetError());
    }
}

void BscaClient::DescribeKBLicenseAsync(const DescribeKBLicenseRequest& request, const DescribeKBLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKBLicenseRequest&;
    using Resp = DescribeKBLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKBLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BscaClient::DescribeKBLicenseOutcomeCallable BscaClient::DescribeKBLicenseCallable(const DescribeKBLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKBLicenseOutcome>>();
    DescribeKBLicenseAsync(
    request,
    [prom](
        const BscaClient*,
        const DescribeKBLicenseRequest&,
        DescribeKBLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BscaClient::DescribeKBVulnerabilityOutcome BscaClient::DescribeKBVulnerability(const DescribeKBVulnerabilityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKBVulnerability");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKBVulnerabilityResponse rsp = DescribeKBVulnerabilityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKBVulnerabilityOutcome(rsp);
        else
            return DescribeKBVulnerabilityOutcome(o.GetError());
    }
    else
    {
        return DescribeKBVulnerabilityOutcome(outcome.GetError());
    }
}

void BscaClient::DescribeKBVulnerabilityAsync(const DescribeKBVulnerabilityRequest& request, const DescribeKBVulnerabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKBVulnerabilityRequest&;
    using Resp = DescribeKBVulnerabilityResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKBVulnerability", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BscaClient::DescribeKBVulnerabilityOutcomeCallable BscaClient::DescribeKBVulnerabilityCallable(const DescribeKBVulnerabilityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKBVulnerabilityOutcome>>();
    DescribeKBVulnerabilityAsync(
    request,
    [prom](
        const BscaClient*,
        const DescribeKBVulnerabilityRequest&,
        DescribeKBVulnerabilityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BscaClient::MatchKBPURLListOutcome BscaClient::MatchKBPURLList(const MatchKBPURLListRequest &request)
{
    auto outcome = MakeRequest(request, "MatchKBPURLList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MatchKBPURLListResponse rsp = MatchKBPURLListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MatchKBPURLListOutcome(rsp);
        else
            return MatchKBPURLListOutcome(o.GetError());
    }
    else
    {
        return MatchKBPURLListOutcome(outcome.GetError());
    }
}

void BscaClient::MatchKBPURLListAsync(const MatchKBPURLListRequest& request, const MatchKBPURLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MatchKBPURLListRequest&;
    using Resp = MatchKBPURLListResponse;

    DoRequestAsync<Req, Resp>(
        "MatchKBPURLList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BscaClient::MatchKBPURLListOutcomeCallable BscaClient::MatchKBPURLListCallable(const MatchKBPURLListRequest &request)
{
    const auto prom = std::make_shared<std::promise<MatchKBPURLListOutcome>>();
    MatchKBPURLListAsync(
    request,
    [prom](
        const BscaClient*,
        const MatchKBPURLListRequest&,
        MatchKBPURLListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BscaClient::SearchKBComponentOutcome BscaClient::SearchKBComponent(const SearchKBComponentRequest &request)
{
    auto outcome = MakeRequest(request, "SearchKBComponent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchKBComponentResponse rsp = SearchKBComponentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchKBComponentOutcome(rsp);
        else
            return SearchKBComponentOutcome(o.GetError());
    }
    else
    {
        return SearchKBComponentOutcome(outcome.GetError());
    }
}

void BscaClient::SearchKBComponentAsync(const SearchKBComponentRequest& request, const SearchKBComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchKBComponentRequest&;
    using Resp = SearchKBComponentResponse;

    DoRequestAsync<Req, Resp>(
        "SearchKBComponent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BscaClient::SearchKBComponentOutcomeCallable BscaClient::SearchKBComponentCallable(const SearchKBComponentRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchKBComponentOutcome>>();
    SearchKBComponentAsync(
    request,
    [prom](
        const BscaClient*,
        const SearchKBComponentRequest&,
        SearchKBComponentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

