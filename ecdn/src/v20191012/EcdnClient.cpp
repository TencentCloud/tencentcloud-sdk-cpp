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

#include <tencentcloud/ecdn/v20191012/EcdnClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ecdn::V20191012;
using namespace TencentCloud::Ecdn::V20191012::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-10-12";
    const string ENDPOINT = "ecdn.tencentcloudapi.com";
}

EcdnClient::EcdnClient(const Credential &credential, const string &region) :
    EcdnClient(credential, region, ClientProfile())
{
}

EcdnClient::EcdnClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EcdnClient::DescribeDomainsOutcome EcdnClient::DescribeDomains(const DescribeDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainsResponse rsp = DescribeDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainsOutcome(rsp);
        else
            return DescribeDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainsOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainsRequest&;
    using Resp = DescribeDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::DescribeDomainsOutcomeCallable EcdnClient::DescribeDomainsCallable(const DescribeDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainsOutcome>>();
    DescribeDomainsAsync(
    request,
    [prom](
        const EcdnClient*,
        const DescribeDomainsRequest&,
        DescribeDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::DescribeDomainsConfigOutcome EcdnClient::DescribeDomainsConfig(const DescribeDomainsConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainsConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainsConfigResponse rsp = DescribeDomainsConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainsConfigOutcome(rsp);
        else
            return DescribeDomainsConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainsConfigOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeDomainsConfigAsync(const DescribeDomainsConfigRequest& request, const DescribeDomainsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainsConfigRequest&;
    using Resp = DescribeDomainsConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainsConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::DescribeDomainsConfigOutcomeCallable EcdnClient::DescribeDomainsConfigCallable(const DescribeDomainsConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainsConfigOutcome>>();
    DescribeDomainsConfigAsync(
    request,
    [prom](
        const EcdnClient*,
        const DescribeDomainsConfigRequest&,
        DescribeDomainsConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::DescribeEcdnDomainLogsOutcome EcdnClient::DescribeEcdnDomainLogs(const DescribeEcdnDomainLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEcdnDomainLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEcdnDomainLogsResponse rsp = DescribeEcdnDomainLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEcdnDomainLogsOutcome(rsp);
        else
            return DescribeEcdnDomainLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeEcdnDomainLogsOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeEcdnDomainLogsAsync(const DescribeEcdnDomainLogsRequest& request, const DescribeEcdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEcdnDomainLogsRequest&;
    using Resp = DescribeEcdnDomainLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEcdnDomainLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::DescribeEcdnDomainLogsOutcomeCallable EcdnClient::DescribeEcdnDomainLogsCallable(const DescribeEcdnDomainLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEcdnDomainLogsOutcome>>();
    DescribeEcdnDomainLogsAsync(
    request,
    [prom](
        const EcdnClient*,
        const DescribeEcdnDomainLogsRequest&,
        DescribeEcdnDomainLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::DescribeEcdnDomainStatisticsOutcome EcdnClient::DescribeEcdnDomainStatistics(const DescribeEcdnDomainStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEcdnDomainStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEcdnDomainStatisticsResponse rsp = DescribeEcdnDomainStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEcdnDomainStatisticsOutcome(rsp);
        else
            return DescribeEcdnDomainStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeEcdnDomainStatisticsOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeEcdnDomainStatisticsAsync(const DescribeEcdnDomainStatisticsRequest& request, const DescribeEcdnDomainStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEcdnDomainStatisticsRequest&;
    using Resp = DescribeEcdnDomainStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEcdnDomainStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::DescribeEcdnDomainStatisticsOutcomeCallable EcdnClient::DescribeEcdnDomainStatisticsCallable(const DescribeEcdnDomainStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEcdnDomainStatisticsOutcome>>();
    DescribeEcdnDomainStatisticsAsync(
    request,
    [prom](
        const EcdnClient*,
        const DescribeEcdnDomainStatisticsRequest&,
        DescribeEcdnDomainStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::DescribeEcdnStatisticsOutcome EcdnClient::DescribeEcdnStatistics(const DescribeEcdnStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEcdnStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEcdnStatisticsResponse rsp = DescribeEcdnStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEcdnStatisticsOutcome(rsp);
        else
            return DescribeEcdnStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeEcdnStatisticsOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeEcdnStatisticsAsync(const DescribeEcdnStatisticsRequest& request, const DescribeEcdnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEcdnStatisticsRequest&;
    using Resp = DescribeEcdnStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEcdnStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::DescribeEcdnStatisticsOutcomeCallable EcdnClient::DescribeEcdnStatisticsCallable(const DescribeEcdnStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEcdnStatisticsOutcome>>();
    DescribeEcdnStatisticsAsync(
    request,
    [prom](
        const EcdnClient*,
        const DescribeEcdnStatisticsRequest&,
        DescribeEcdnStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::DescribeIpStatusOutcome EcdnClient::DescribeIpStatus(const DescribeIpStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpStatusResponse rsp = DescribeIpStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpStatusOutcome(rsp);
        else
            return DescribeIpStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeIpStatusOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeIpStatusAsync(const DescribeIpStatusRequest& request, const DescribeIpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIpStatusRequest&;
    using Resp = DescribeIpStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIpStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::DescribeIpStatusOutcomeCallable EcdnClient::DescribeIpStatusCallable(const DescribeIpStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIpStatusOutcome>>();
    DescribeIpStatusAsync(
    request,
    [prom](
        const EcdnClient*,
        const DescribeIpStatusRequest&,
        DescribeIpStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

