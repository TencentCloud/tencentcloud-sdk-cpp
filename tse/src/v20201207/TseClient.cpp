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

#include <tencentcloud/tse/v20201207/TseClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tse::V20201207;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-07";
    const string ENDPOINT = "tse.tencentcloudapi.com";
}

TseClient::TseClient(const Credential &credential, const string &region) :
    TseClient(credential, region, ClientProfile())
{
}

TseClient::TseClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TseClient::BindAutoScalerResourceStrategyToGroupsOutcome TseClient::BindAutoScalerResourceStrategyToGroups(const BindAutoScalerResourceStrategyToGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "BindAutoScalerResourceStrategyToGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindAutoScalerResourceStrategyToGroupsResponse rsp = BindAutoScalerResourceStrategyToGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindAutoScalerResourceStrategyToGroupsOutcome(rsp);
        else
            return BindAutoScalerResourceStrategyToGroupsOutcome(o.GetError());
    }
    else
    {
        return BindAutoScalerResourceStrategyToGroupsOutcome(outcome.GetError());
    }
}

void TseClient::BindAutoScalerResourceStrategyToGroupsAsync(const BindAutoScalerResourceStrategyToGroupsRequest& request, const BindAutoScalerResourceStrategyToGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindAutoScalerResourceStrategyToGroupsRequest&;
    using Resp = BindAutoScalerResourceStrategyToGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "BindAutoScalerResourceStrategyToGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::BindAutoScalerResourceStrategyToGroupsOutcomeCallable TseClient::BindAutoScalerResourceStrategyToGroupsCallable(const BindAutoScalerResourceStrategyToGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindAutoScalerResourceStrategyToGroupsOutcome>>();
    BindAutoScalerResourceStrategyToGroupsAsync(
    request,
    [prom](
        const TseClient*,
        const BindAutoScalerResourceStrategyToGroupsRequest&,
        BindAutoScalerResourceStrategyToGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CloseWafProtectionOutcome TseClient::CloseWafProtection(const CloseWafProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "CloseWafProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseWafProtectionResponse rsp = CloseWafProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseWafProtectionOutcome(rsp);
        else
            return CloseWafProtectionOutcome(o.GetError());
    }
    else
    {
        return CloseWafProtectionOutcome(outcome.GetError());
    }
}

void TseClient::CloseWafProtectionAsync(const CloseWafProtectionRequest& request, const CloseWafProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseWafProtectionRequest&;
    using Resp = CloseWafProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "CloseWafProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CloseWafProtectionOutcomeCallable TseClient::CloseWafProtectionCallable(const CloseWafProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseWafProtectionOutcome>>();
    CloseWafProtectionAsync(
    request,
    [prom](
        const TseClient*,
        const CloseWafProtectionRequest&,
        CloseWafProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateAutoScalerResourceStrategyOutcome TseClient::CreateAutoScalerResourceStrategy(const CreateAutoScalerResourceStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAutoScalerResourceStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAutoScalerResourceStrategyResponse rsp = CreateAutoScalerResourceStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAutoScalerResourceStrategyOutcome(rsp);
        else
            return CreateAutoScalerResourceStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateAutoScalerResourceStrategyOutcome(outcome.GetError());
    }
}

void TseClient::CreateAutoScalerResourceStrategyAsync(const CreateAutoScalerResourceStrategyRequest& request, const CreateAutoScalerResourceStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAutoScalerResourceStrategyRequest&;
    using Resp = CreateAutoScalerResourceStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAutoScalerResourceStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateAutoScalerResourceStrategyOutcomeCallable TseClient::CreateAutoScalerResourceStrategyCallable(const CreateAutoScalerResourceStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAutoScalerResourceStrategyOutcome>>();
    CreateAutoScalerResourceStrategyAsync(
    request,
    [prom](
        const TseClient*,
        const CreateAutoScalerResourceStrategyRequest&,
        CreateAutoScalerResourceStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayOutcome TseClient::CreateCloudNativeAPIGateway(const CreateCloudNativeAPIGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayResponse rsp = CreateCloudNativeAPIGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayAsync(const CreateCloudNativeAPIGatewayRequest& request, const CreateCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayRequest&;
    using Resp = CreateCloudNativeAPIGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayOutcomeCallable TseClient::CreateCloudNativeAPIGatewayCallable(const CreateCloudNativeAPIGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayOutcome>>();
    CreateCloudNativeAPIGatewayAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayRequest&,
        CreateCloudNativeAPIGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayCanaryRuleOutcome TseClient::CreateCloudNativeAPIGatewayCanaryRule(const CreateCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayCanaryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayCanaryRuleResponse rsp = CreateCloudNativeAPIGatewayCanaryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayCanaryRuleOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayCanaryRuleOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayCanaryRuleOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayCanaryRuleAsync(const CreateCloudNativeAPIGatewayCanaryRuleRequest& request, const CreateCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayCanaryRuleRequest&;
    using Resp = CreateCloudNativeAPIGatewayCanaryRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayCanaryRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayCanaryRuleOutcomeCallable TseClient::CreateCloudNativeAPIGatewayCanaryRuleCallable(const CreateCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayCanaryRuleOutcome>>();
    CreateCloudNativeAPIGatewayCanaryRuleAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayCanaryRuleRequest&,
        CreateCloudNativeAPIGatewayCanaryRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayCertificateOutcome TseClient::CreateCloudNativeAPIGatewayCertificate(const CreateCloudNativeAPIGatewayCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayCertificateResponse rsp = CreateCloudNativeAPIGatewayCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayCertificateOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayCertificateOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayCertificateOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayCertificateAsync(const CreateCloudNativeAPIGatewayCertificateRequest& request, const CreateCloudNativeAPIGatewayCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayCertificateRequest&;
    using Resp = CreateCloudNativeAPIGatewayCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayCertificateOutcomeCallable TseClient::CreateCloudNativeAPIGatewayCertificateCallable(const CreateCloudNativeAPIGatewayCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayCertificateOutcome>>();
    CreateCloudNativeAPIGatewayCertificateAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayCertificateRequest&,
        CreateCloudNativeAPIGatewayCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayPublicNetworkOutcome TseClient::CreateCloudNativeAPIGatewayPublicNetwork(const CreateCloudNativeAPIGatewayPublicNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayPublicNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayPublicNetworkResponse rsp = CreateCloudNativeAPIGatewayPublicNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayPublicNetworkOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayPublicNetworkOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayPublicNetworkOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayPublicNetworkAsync(const CreateCloudNativeAPIGatewayPublicNetworkRequest& request, const CreateCloudNativeAPIGatewayPublicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayPublicNetworkRequest&;
    using Resp = CreateCloudNativeAPIGatewayPublicNetworkResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayPublicNetwork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayPublicNetworkOutcomeCallable TseClient::CreateCloudNativeAPIGatewayPublicNetworkCallable(const CreateCloudNativeAPIGatewayPublicNetworkRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayPublicNetworkOutcome>>();
    CreateCloudNativeAPIGatewayPublicNetworkAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayPublicNetworkRequest&,
        CreateCloudNativeAPIGatewayPublicNetworkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayRouteOutcome TseClient::CreateCloudNativeAPIGatewayRoute(const CreateCloudNativeAPIGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayRouteResponse rsp = CreateCloudNativeAPIGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayRouteOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayRouteOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayRouteAsync(const CreateCloudNativeAPIGatewayRouteRequest& request, const CreateCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayRouteRequest&;
    using Resp = CreateCloudNativeAPIGatewayRouteResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayRouteOutcomeCallable TseClient::CreateCloudNativeAPIGatewayRouteCallable(const CreateCloudNativeAPIGatewayRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayRouteOutcome>>();
    CreateCloudNativeAPIGatewayRouteAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayRouteRequest&,
        CreateCloudNativeAPIGatewayRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::CreateCloudNativeAPIGatewayRouteRateLimit(const CreateCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayRouteRateLimitResponse rsp = CreateCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayRouteRateLimitAsync(const CreateCloudNativeAPIGatewayRouteRateLimitRequest& request, const CreateCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayRouteRateLimitRequest&;
    using Resp = CreateCloudNativeAPIGatewayRouteRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayRouteRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::CreateCloudNativeAPIGatewayRouteRateLimitCallable(const CreateCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayRouteRateLimitOutcome>>();
    CreateCloudNativeAPIGatewayRouteRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayRouteRateLimitRequest&,
        CreateCloudNativeAPIGatewayRouteRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayServiceOutcome TseClient::CreateCloudNativeAPIGatewayService(const CreateCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayServiceResponse rsp = CreateCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayServiceAsync(const CreateCloudNativeAPIGatewayServiceRequest& request, const CreateCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayServiceRequest&;
    using Resp = CreateCloudNativeAPIGatewayServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayServiceOutcomeCallable TseClient::CreateCloudNativeAPIGatewayServiceCallable(const CreateCloudNativeAPIGatewayServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayServiceOutcome>>();
    CreateCloudNativeAPIGatewayServiceAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayServiceRequest&,
        CreateCloudNativeAPIGatewayServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::CreateCloudNativeAPIGatewayServiceRateLimit(const CreateCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayServiceRateLimitResponse rsp = CreateCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayServiceRateLimitAsync(const CreateCloudNativeAPIGatewayServiceRateLimitRequest& request, const CreateCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayServiceRateLimitRequest&;
    using Resp = CreateCloudNativeAPIGatewayServiceRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayServiceRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::CreateCloudNativeAPIGatewayServiceRateLimitCallable(const CreateCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayServiceRateLimitOutcome>>();
    CreateCloudNativeAPIGatewayServiceRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayServiceRateLimitRequest&,
        CreateCloudNativeAPIGatewayServiceRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateConfigFileOutcome TseClient::CreateConfigFile(const CreateConfigFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfigFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigFileResponse rsp = CreateConfigFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigFileOutcome(rsp);
        else
            return CreateConfigFileOutcome(o.GetError());
    }
    else
    {
        return CreateConfigFileOutcome(outcome.GetError());
    }
}

void TseClient::CreateConfigFileAsync(const CreateConfigFileRequest& request, const CreateConfigFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConfigFileRequest&;
    using Resp = CreateConfigFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConfigFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateConfigFileOutcomeCallable TseClient::CreateConfigFileCallable(const CreateConfigFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConfigFileOutcome>>();
    CreateConfigFileAsync(
    request,
    [prom](
        const TseClient*,
        const CreateConfigFileRequest&,
        CreateConfigFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateConfigFileGroupOutcome TseClient::CreateConfigFileGroup(const CreateConfigFileGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfigFileGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigFileGroupResponse rsp = CreateConfigFileGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigFileGroupOutcome(rsp);
        else
            return CreateConfigFileGroupOutcome(o.GetError());
    }
    else
    {
        return CreateConfigFileGroupOutcome(outcome.GetError());
    }
}

void TseClient::CreateConfigFileGroupAsync(const CreateConfigFileGroupRequest& request, const CreateConfigFileGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConfigFileGroupRequest&;
    using Resp = CreateConfigFileGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConfigFileGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateConfigFileGroupOutcomeCallable TseClient::CreateConfigFileGroupCallable(const CreateConfigFileGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConfigFileGroupOutcome>>();
    CreateConfigFileGroupAsync(
    request,
    [prom](
        const TseClient*,
        const CreateConfigFileGroupRequest&,
        CreateConfigFileGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateEngineOutcome TseClient::CreateEngine(const CreateEngineRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEngineResponse rsp = CreateEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEngineOutcome(rsp);
        else
            return CreateEngineOutcome(o.GetError());
    }
    else
    {
        return CreateEngineOutcome(outcome.GetError());
    }
}

void TseClient::CreateEngineAsync(const CreateEngineRequest& request, const CreateEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEngineRequest&;
    using Resp = CreateEngineResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateEngineOutcomeCallable TseClient::CreateEngineCallable(const CreateEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEngineOutcome>>();
    CreateEngineAsync(
    request,
    [prom](
        const TseClient*,
        const CreateEngineRequest&,
        CreateEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateGovernanceAliasOutcome TseClient::CreateGovernanceAlias(const CreateGovernanceAliasRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGovernanceAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGovernanceAliasResponse rsp = CreateGovernanceAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGovernanceAliasOutcome(rsp);
        else
            return CreateGovernanceAliasOutcome(o.GetError());
    }
    else
    {
        return CreateGovernanceAliasOutcome(outcome.GetError());
    }
}

void TseClient::CreateGovernanceAliasAsync(const CreateGovernanceAliasRequest& request, const CreateGovernanceAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGovernanceAliasRequest&;
    using Resp = CreateGovernanceAliasResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGovernanceAlias", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateGovernanceAliasOutcomeCallable TseClient::CreateGovernanceAliasCallable(const CreateGovernanceAliasRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGovernanceAliasOutcome>>();
    CreateGovernanceAliasAsync(
    request,
    [prom](
        const TseClient*,
        const CreateGovernanceAliasRequest&,
        CreateGovernanceAliasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateGovernanceInstancesOutcome TseClient::CreateGovernanceInstances(const CreateGovernanceInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGovernanceInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGovernanceInstancesResponse rsp = CreateGovernanceInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGovernanceInstancesOutcome(rsp);
        else
            return CreateGovernanceInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateGovernanceInstancesOutcome(outcome.GetError());
    }
}

void TseClient::CreateGovernanceInstancesAsync(const CreateGovernanceInstancesRequest& request, const CreateGovernanceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGovernanceInstancesRequest&;
    using Resp = CreateGovernanceInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGovernanceInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateGovernanceInstancesOutcomeCallable TseClient::CreateGovernanceInstancesCallable(const CreateGovernanceInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGovernanceInstancesOutcome>>();
    CreateGovernanceInstancesAsync(
    request,
    [prom](
        const TseClient*,
        const CreateGovernanceInstancesRequest&,
        CreateGovernanceInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateGovernanceNamespacesOutcome TseClient::CreateGovernanceNamespaces(const CreateGovernanceNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGovernanceNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGovernanceNamespacesResponse rsp = CreateGovernanceNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGovernanceNamespacesOutcome(rsp);
        else
            return CreateGovernanceNamespacesOutcome(o.GetError());
    }
    else
    {
        return CreateGovernanceNamespacesOutcome(outcome.GetError());
    }
}

void TseClient::CreateGovernanceNamespacesAsync(const CreateGovernanceNamespacesRequest& request, const CreateGovernanceNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGovernanceNamespacesRequest&;
    using Resp = CreateGovernanceNamespacesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGovernanceNamespaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateGovernanceNamespacesOutcomeCallable TseClient::CreateGovernanceNamespacesCallable(const CreateGovernanceNamespacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGovernanceNamespacesOutcome>>();
    CreateGovernanceNamespacesAsync(
    request,
    [prom](
        const TseClient*,
        const CreateGovernanceNamespacesRequest&,
        CreateGovernanceNamespacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateGovernanceServicesOutcome TseClient::CreateGovernanceServices(const CreateGovernanceServicesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGovernanceServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGovernanceServicesResponse rsp = CreateGovernanceServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGovernanceServicesOutcome(rsp);
        else
            return CreateGovernanceServicesOutcome(o.GetError());
    }
    else
    {
        return CreateGovernanceServicesOutcome(outcome.GetError());
    }
}

void TseClient::CreateGovernanceServicesAsync(const CreateGovernanceServicesRequest& request, const CreateGovernanceServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGovernanceServicesRequest&;
    using Resp = CreateGovernanceServicesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGovernanceServices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateGovernanceServicesOutcomeCallable TseClient::CreateGovernanceServicesCallable(const CreateGovernanceServicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGovernanceServicesOutcome>>();
    CreateGovernanceServicesAsync(
    request,
    [prom](
        const TseClient*,
        const CreateGovernanceServicesRequest&,
        CreateGovernanceServicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateNativeGatewayServerGroupOutcome TseClient::CreateNativeGatewayServerGroup(const CreateNativeGatewayServerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNativeGatewayServerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNativeGatewayServerGroupResponse rsp = CreateNativeGatewayServerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNativeGatewayServerGroupOutcome(rsp);
        else
            return CreateNativeGatewayServerGroupOutcome(o.GetError());
    }
    else
    {
        return CreateNativeGatewayServerGroupOutcome(outcome.GetError());
    }
}

void TseClient::CreateNativeGatewayServerGroupAsync(const CreateNativeGatewayServerGroupRequest& request, const CreateNativeGatewayServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNativeGatewayServerGroupRequest&;
    using Resp = CreateNativeGatewayServerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNativeGatewayServerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateNativeGatewayServerGroupOutcomeCallable TseClient::CreateNativeGatewayServerGroupCallable(const CreateNativeGatewayServerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNativeGatewayServerGroupOutcome>>();
    CreateNativeGatewayServerGroupAsync(
    request,
    [prom](
        const TseClient*,
        const CreateNativeGatewayServerGroupRequest&,
        CreateNativeGatewayServerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateNativeGatewayServiceSourceOutcome TseClient::CreateNativeGatewayServiceSource(const CreateNativeGatewayServiceSourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNativeGatewayServiceSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNativeGatewayServiceSourceResponse rsp = CreateNativeGatewayServiceSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNativeGatewayServiceSourceOutcome(rsp);
        else
            return CreateNativeGatewayServiceSourceOutcome(o.GetError());
    }
    else
    {
        return CreateNativeGatewayServiceSourceOutcome(outcome.GetError());
    }
}

void TseClient::CreateNativeGatewayServiceSourceAsync(const CreateNativeGatewayServiceSourceRequest& request, const CreateNativeGatewayServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNativeGatewayServiceSourceRequest&;
    using Resp = CreateNativeGatewayServiceSourceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNativeGatewayServiceSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateNativeGatewayServiceSourceOutcomeCallable TseClient::CreateNativeGatewayServiceSourceCallable(const CreateNativeGatewayServiceSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNativeGatewayServiceSourceOutcome>>();
    CreateNativeGatewayServiceSourceAsync(
    request,
    [prom](
        const TseClient*,
        const CreateNativeGatewayServiceSourceRequest&,
        CreateNativeGatewayServiceSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateOrModifyCloudNativeAPIGatewayIPRestrictionOutcome TseClient::CreateOrModifyCloudNativeAPIGatewayIPRestriction(const CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrModifyCloudNativeAPIGatewayIPRestriction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrModifyCloudNativeAPIGatewayIPRestrictionResponse rsp = CreateOrModifyCloudNativeAPIGatewayIPRestrictionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrModifyCloudNativeAPIGatewayIPRestrictionOutcome(rsp);
        else
            return CreateOrModifyCloudNativeAPIGatewayIPRestrictionOutcome(o.GetError());
    }
    else
    {
        return CreateOrModifyCloudNativeAPIGatewayIPRestrictionOutcome(outcome.GetError());
    }
}

void TseClient::CreateOrModifyCloudNativeAPIGatewayIPRestrictionAsync(const CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest& request, const CreateOrModifyCloudNativeAPIGatewayIPRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest&;
    using Resp = CreateOrModifyCloudNativeAPIGatewayIPRestrictionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrModifyCloudNativeAPIGatewayIPRestriction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateOrModifyCloudNativeAPIGatewayIPRestrictionOutcomeCallable TseClient::CreateOrModifyCloudNativeAPIGatewayIPRestrictionCallable(const CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrModifyCloudNativeAPIGatewayIPRestrictionOutcome>>();
    CreateOrModifyCloudNativeAPIGatewayIPRestrictionAsync(
    request,
    [prom](
        const TseClient*,
        const CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest&,
        CreateOrModifyCloudNativeAPIGatewayIPRestrictionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateOrUpdateConfigFileAndReleaseOutcome TseClient::CreateOrUpdateConfigFileAndRelease(const CreateOrUpdateConfigFileAndReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrUpdateConfigFileAndRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrUpdateConfigFileAndReleaseResponse rsp = CreateOrUpdateConfigFileAndReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrUpdateConfigFileAndReleaseOutcome(rsp);
        else
            return CreateOrUpdateConfigFileAndReleaseOutcome(o.GetError());
    }
    else
    {
        return CreateOrUpdateConfigFileAndReleaseOutcome(outcome.GetError());
    }
}

void TseClient::CreateOrUpdateConfigFileAndReleaseAsync(const CreateOrUpdateConfigFileAndReleaseRequest& request, const CreateOrUpdateConfigFileAndReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOrUpdateConfigFileAndReleaseRequest&;
    using Resp = CreateOrUpdateConfigFileAndReleaseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrUpdateConfigFileAndRelease", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateOrUpdateConfigFileAndReleaseOutcomeCallable TseClient::CreateOrUpdateConfigFileAndReleaseCallable(const CreateOrUpdateConfigFileAndReleaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrUpdateConfigFileAndReleaseOutcome>>();
    CreateOrUpdateConfigFileAndReleaseAsync(
    request,
    [prom](
        const TseClient*,
        const CreateOrUpdateConfigFileAndReleaseRequest&,
        CreateOrUpdateConfigFileAndReleaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateWafDomainsOutcome TseClient::CreateWafDomains(const CreateWafDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWafDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWafDomainsResponse rsp = CreateWafDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWafDomainsOutcome(rsp);
        else
            return CreateWafDomainsOutcome(o.GetError());
    }
    else
    {
        return CreateWafDomainsOutcome(outcome.GetError());
    }
}

void TseClient::CreateWafDomainsAsync(const CreateWafDomainsRequest& request, const CreateWafDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWafDomainsRequest&;
    using Resp = CreateWafDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWafDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateWafDomainsOutcomeCallable TseClient::CreateWafDomainsCallable(const CreateWafDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWafDomainsOutcome>>();
    CreateWafDomainsAsync(
    request,
    [prom](
        const TseClient*,
        const CreateWafDomainsRequest&,
        CreateWafDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteAutoScalerResourceStrategyOutcome TseClient::DeleteAutoScalerResourceStrategy(const DeleteAutoScalerResourceStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAutoScalerResourceStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAutoScalerResourceStrategyResponse rsp = DeleteAutoScalerResourceStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAutoScalerResourceStrategyOutcome(rsp);
        else
            return DeleteAutoScalerResourceStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteAutoScalerResourceStrategyOutcome(outcome.GetError());
    }
}

void TseClient::DeleteAutoScalerResourceStrategyAsync(const DeleteAutoScalerResourceStrategyRequest& request, const DeleteAutoScalerResourceStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAutoScalerResourceStrategyRequest&;
    using Resp = DeleteAutoScalerResourceStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAutoScalerResourceStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteAutoScalerResourceStrategyOutcomeCallable TseClient::DeleteAutoScalerResourceStrategyCallable(const DeleteAutoScalerResourceStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAutoScalerResourceStrategyOutcome>>();
    DeleteAutoScalerResourceStrategyAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteAutoScalerResourceStrategyRequest&,
        DeleteAutoScalerResourceStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayOutcome TseClient::DeleteCloudNativeAPIGateway(const DeleteCloudNativeAPIGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayResponse rsp = DeleteCloudNativeAPIGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayAsync(const DeleteCloudNativeAPIGatewayRequest& request, const DeleteCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayRequest&;
    using Resp = DeleteCloudNativeAPIGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayCallable(const DeleteCloudNativeAPIGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayOutcome>>();
    DeleteCloudNativeAPIGatewayAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayRequest&,
        DeleteCloudNativeAPIGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayCanaryRuleOutcome TseClient::DeleteCloudNativeAPIGatewayCanaryRule(const DeleteCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayCanaryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayCanaryRuleResponse rsp = DeleteCloudNativeAPIGatewayCanaryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayCanaryRuleOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayCanaryRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayCanaryRuleOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayCanaryRuleAsync(const DeleteCloudNativeAPIGatewayCanaryRuleRequest& request, const DeleteCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayCanaryRuleRequest&;
    using Resp = DeleteCloudNativeAPIGatewayCanaryRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayCanaryRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayCanaryRuleOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayCanaryRuleCallable(const DeleteCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayCanaryRuleOutcome>>();
    DeleteCloudNativeAPIGatewayCanaryRuleAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayCanaryRuleRequest&,
        DeleteCloudNativeAPIGatewayCanaryRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayCertificateOutcome TseClient::DeleteCloudNativeAPIGatewayCertificate(const DeleteCloudNativeAPIGatewayCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayCertificateResponse rsp = DeleteCloudNativeAPIGatewayCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayCertificateOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayCertificateOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayCertificateOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayCertificateAsync(const DeleteCloudNativeAPIGatewayCertificateRequest& request, const DeleteCloudNativeAPIGatewayCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayCertificateRequest&;
    using Resp = DeleteCloudNativeAPIGatewayCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayCertificateOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayCertificateCallable(const DeleteCloudNativeAPIGatewayCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayCertificateOutcome>>();
    DeleteCloudNativeAPIGatewayCertificateAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayCertificateRequest&,
        DeleteCloudNativeAPIGatewayCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayIPRestrictionOutcome TseClient::DeleteCloudNativeAPIGatewayIPRestriction(const DeleteCloudNativeAPIGatewayIPRestrictionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayIPRestriction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayIPRestrictionResponse rsp = DeleteCloudNativeAPIGatewayIPRestrictionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayIPRestrictionOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayIPRestrictionOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayIPRestrictionOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayIPRestrictionAsync(const DeleteCloudNativeAPIGatewayIPRestrictionRequest& request, const DeleteCloudNativeAPIGatewayIPRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayIPRestrictionRequest&;
    using Resp = DeleteCloudNativeAPIGatewayIPRestrictionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayIPRestriction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayIPRestrictionOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayIPRestrictionCallable(const DeleteCloudNativeAPIGatewayIPRestrictionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayIPRestrictionOutcome>>();
    DeleteCloudNativeAPIGatewayIPRestrictionAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayIPRestrictionRequest&,
        DeleteCloudNativeAPIGatewayIPRestrictionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayPublicNetworkOutcome TseClient::DeleteCloudNativeAPIGatewayPublicNetwork(const DeleteCloudNativeAPIGatewayPublicNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayPublicNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayPublicNetworkResponse rsp = DeleteCloudNativeAPIGatewayPublicNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayPublicNetworkOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayPublicNetworkOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayPublicNetworkOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayPublicNetworkAsync(const DeleteCloudNativeAPIGatewayPublicNetworkRequest& request, const DeleteCloudNativeAPIGatewayPublicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayPublicNetworkRequest&;
    using Resp = DeleteCloudNativeAPIGatewayPublicNetworkResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayPublicNetwork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayPublicNetworkOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayPublicNetworkCallable(const DeleteCloudNativeAPIGatewayPublicNetworkRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayPublicNetworkOutcome>>();
    DeleteCloudNativeAPIGatewayPublicNetworkAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayPublicNetworkRequest&,
        DeleteCloudNativeAPIGatewayPublicNetworkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayRouteOutcome TseClient::DeleteCloudNativeAPIGatewayRoute(const DeleteCloudNativeAPIGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayRouteResponse rsp = DeleteCloudNativeAPIGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayRouteOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayRouteOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayRouteAsync(const DeleteCloudNativeAPIGatewayRouteRequest& request, const DeleteCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayRouteRequest&;
    using Resp = DeleteCloudNativeAPIGatewayRouteResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayRouteOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayRouteCallable(const DeleteCloudNativeAPIGatewayRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayRouteOutcome>>();
    DeleteCloudNativeAPIGatewayRouteAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayRouteRequest&,
        DeleteCloudNativeAPIGatewayRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::DeleteCloudNativeAPIGatewayRouteRateLimit(const DeleteCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayRouteRateLimitResponse rsp = DeleteCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitAsync(const DeleteCloudNativeAPIGatewayRouteRateLimitRequest& request, const DeleteCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayRouteRateLimitRequest&;
    using Resp = DeleteCloudNativeAPIGatewayRouteRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayRouteRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitCallable(const DeleteCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayRouteRateLimitOutcome>>();
    DeleteCloudNativeAPIGatewayRouteRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayRouteRateLimitRequest&,
        DeleteCloudNativeAPIGatewayRouteRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayServiceOutcome TseClient::DeleteCloudNativeAPIGatewayService(const DeleteCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayServiceResponse rsp = DeleteCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayServiceAsync(const DeleteCloudNativeAPIGatewayServiceRequest& request, const DeleteCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayServiceRequest&;
    using Resp = DeleteCloudNativeAPIGatewayServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayServiceOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayServiceCallable(const DeleteCloudNativeAPIGatewayServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayServiceOutcome>>();
    DeleteCloudNativeAPIGatewayServiceAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayServiceRequest&,
        DeleteCloudNativeAPIGatewayServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::DeleteCloudNativeAPIGatewayServiceRateLimit(const DeleteCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayServiceRateLimitResponse rsp = DeleteCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitAsync(const DeleteCloudNativeAPIGatewayServiceRateLimitRequest& request, const DeleteCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayServiceRateLimitRequest&;
    using Resp = DeleteCloudNativeAPIGatewayServiceRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayServiceRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitCallable(const DeleteCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayServiceRateLimitOutcome>>();
    DeleteCloudNativeAPIGatewayServiceRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayServiceRateLimitRequest&,
        DeleteCloudNativeAPIGatewayServiceRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteConfigFileGroupOutcome TseClient::DeleteConfigFileGroup(const DeleteConfigFileGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfigFileGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigFileGroupResponse rsp = DeleteConfigFileGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigFileGroupOutcome(rsp);
        else
            return DeleteConfigFileGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigFileGroupOutcome(outcome.GetError());
    }
}

void TseClient::DeleteConfigFileGroupAsync(const DeleteConfigFileGroupRequest& request, const DeleteConfigFileGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConfigFileGroupRequest&;
    using Resp = DeleteConfigFileGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConfigFileGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteConfigFileGroupOutcomeCallable TseClient::DeleteConfigFileGroupCallable(const DeleteConfigFileGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConfigFileGroupOutcome>>();
    DeleteConfigFileGroupAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteConfigFileGroupRequest&,
        DeleteConfigFileGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteConfigFileReleasesOutcome TseClient::DeleteConfigFileReleases(const DeleteConfigFileReleasesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfigFileReleases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigFileReleasesResponse rsp = DeleteConfigFileReleasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigFileReleasesOutcome(rsp);
        else
            return DeleteConfigFileReleasesOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigFileReleasesOutcome(outcome.GetError());
    }
}

void TseClient::DeleteConfigFileReleasesAsync(const DeleteConfigFileReleasesRequest& request, const DeleteConfigFileReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConfigFileReleasesRequest&;
    using Resp = DeleteConfigFileReleasesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConfigFileReleases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteConfigFileReleasesOutcomeCallable TseClient::DeleteConfigFileReleasesCallable(const DeleteConfigFileReleasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConfigFileReleasesOutcome>>();
    DeleteConfigFileReleasesAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteConfigFileReleasesRequest&,
        DeleteConfigFileReleasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteConfigFilesOutcome TseClient::DeleteConfigFiles(const DeleteConfigFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfigFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigFilesResponse rsp = DeleteConfigFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigFilesOutcome(rsp);
        else
            return DeleteConfigFilesOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigFilesOutcome(outcome.GetError());
    }
}

void TseClient::DeleteConfigFilesAsync(const DeleteConfigFilesRequest& request, const DeleteConfigFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConfigFilesRequest&;
    using Resp = DeleteConfigFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConfigFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteConfigFilesOutcomeCallable TseClient::DeleteConfigFilesCallable(const DeleteConfigFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConfigFilesOutcome>>();
    DeleteConfigFilesAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteConfigFilesRequest&,
        DeleteConfigFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteEngineOutcome TseClient::DeleteEngine(const DeleteEngineRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEngineResponse rsp = DeleteEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEngineOutcome(rsp);
        else
            return DeleteEngineOutcome(o.GetError());
    }
    else
    {
        return DeleteEngineOutcome(outcome.GetError());
    }
}

void TseClient::DeleteEngineAsync(const DeleteEngineRequest& request, const DeleteEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEngineRequest&;
    using Resp = DeleteEngineResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteEngineOutcomeCallable TseClient::DeleteEngineCallable(const DeleteEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEngineOutcome>>();
    DeleteEngineAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteEngineRequest&,
        DeleteEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteGovernanceAliasesOutcome TseClient::DeleteGovernanceAliases(const DeleteGovernanceAliasesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGovernanceAliases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGovernanceAliasesResponse rsp = DeleteGovernanceAliasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGovernanceAliasesOutcome(rsp);
        else
            return DeleteGovernanceAliasesOutcome(o.GetError());
    }
    else
    {
        return DeleteGovernanceAliasesOutcome(outcome.GetError());
    }
}

void TseClient::DeleteGovernanceAliasesAsync(const DeleteGovernanceAliasesRequest& request, const DeleteGovernanceAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGovernanceAliasesRequest&;
    using Resp = DeleteGovernanceAliasesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGovernanceAliases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteGovernanceAliasesOutcomeCallable TseClient::DeleteGovernanceAliasesCallable(const DeleteGovernanceAliasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGovernanceAliasesOutcome>>();
    DeleteGovernanceAliasesAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteGovernanceAliasesRequest&,
        DeleteGovernanceAliasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteGovernanceInstancesOutcome TseClient::DeleteGovernanceInstances(const DeleteGovernanceInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGovernanceInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGovernanceInstancesResponse rsp = DeleteGovernanceInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGovernanceInstancesOutcome(rsp);
        else
            return DeleteGovernanceInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteGovernanceInstancesOutcome(outcome.GetError());
    }
}

void TseClient::DeleteGovernanceInstancesAsync(const DeleteGovernanceInstancesRequest& request, const DeleteGovernanceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGovernanceInstancesRequest&;
    using Resp = DeleteGovernanceInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGovernanceInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteGovernanceInstancesOutcomeCallable TseClient::DeleteGovernanceInstancesCallable(const DeleteGovernanceInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGovernanceInstancesOutcome>>();
    DeleteGovernanceInstancesAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteGovernanceInstancesRequest&,
        DeleteGovernanceInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteGovernanceInstancesByHostOutcome TseClient::DeleteGovernanceInstancesByHost(const DeleteGovernanceInstancesByHostRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGovernanceInstancesByHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGovernanceInstancesByHostResponse rsp = DeleteGovernanceInstancesByHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGovernanceInstancesByHostOutcome(rsp);
        else
            return DeleteGovernanceInstancesByHostOutcome(o.GetError());
    }
    else
    {
        return DeleteGovernanceInstancesByHostOutcome(outcome.GetError());
    }
}

void TseClient::DeleteGovernanceInstancesByHostAsync(const DeleteGovernanceInstancesByHostRequest& request, const DeleteGovernanceInstancesByHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGovernanceInstancesByHostRequest&;
    using Resp = DeleteGovernanceInstancesByHostResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGovernanceInstancesByHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteGovernanceInstancesByHostOutcomeCallable TseClient::DeleteGovernanceInstancesByHostCallable(const DeleteGovernanceInstancesByHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGovernanceInstancesByHostOutcome>>();
    DeleteGovernanceInstancesByHostAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteGovernanceInstancesByHostRequest&,
        DeleteGovernanceInstancesByHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteGovernanceNamespacesOutcome TseClient::DeleteGovernanceNamespaces(const DeleteGovernanceNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGovernanceNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGovernanceNamespacesResponse rsp = DeleteGovernanceNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGovernanceNamespacesOutcome(rsp);
        else
            return DeleteGovernanceNamespacesOutcome(o.GetError());
    }
    else
    {
        return DeleteGovernanceNamespacesOutcome(outcome.GetError());
    }
}

void TseClient::DeleteGovernanceNamespacesAsync(const DeleteGovernanceNamespacesRequest& request, const DeleteGovernanceNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGovernanceNamespacesRequest&;
    using Resp = DeleteGovernanceNamespacesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGovernanceNamespaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteGovernanceNamespacesOutcomeCallable TseClient::DeleteGovernanceNamespacesCallable(const DeleteGovernanceNamespacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGovernanceNamespacesOutcome>>();
    DeleteGovernanceNamespacesAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteGovernanceNamespacesRequest&,
        DeleteGovernanceNamespacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteGovernanceServicesOutcome TseClient::DeleteGovernanceServices(const DeleteGovernanceServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGovernanceServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGovernanceServicesResponse rsp = DeleteGovernanceServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGovernanceServicesOutcome(rsp);
        else
            return DeleteGovernanceServicesOutcome(o.GetError());
    }
    else
    {
        return DeleteGovernanceServicesOutcome(outcome.GetError());
    }
}

void TseClient::DeleteGovernanceServicesAsync(const DeleteGovernanceServicesRequest& request, const DeleteGovernanceServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGovernanceServicesRequest&;
    using Resp = DeleteGovernanceServicesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGovernanceServices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteGovernanceServicesOutcomeCallable TseClient::DeleteGovernanceServicesCallable(const DeleteGovernanceServicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGovernanceServicesOutcome>>();
    DeleteGovernanceServicesAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteGovernanceServicesRequest&,
        DeleteGovernanceServicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteNativeGatewayServerGroupOutcome TseClient::DeleteNativeGatewayServerGroup(const DeleteNativeGatewayServerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNativeGatewayServerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNativeGatewayServerGroupResponse rsp = DeleteNativeGatewayServerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNativeGatewayServerGroupOutcome(rsp);
        else
            return DeleteNativeGatewayServerGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteNativeGatewayServerGroupOutcome(outcome.GetError());
    }
}

void TseClient::DeleteNativeGatewayServerGroupAsync(const DeleteNativeGatewayServerGroupRequest& request, const DeleteNativeGatewayServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNativeGatewayServerGroupRequest&;
    using Resp = DeleteNativeGatewayServerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNativeGatewayServerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteNativeGatewayServerGroupOutcomeCallable TseClient::DeleteNativeGatewayServerGroupCallable(const DeleteNativeGatewayServerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNativeGatewayServerGroupOutcome>>();
    DeleteNativeGatewayServerGroupAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteNativeGatewayServerGroupRequest&,
        DeleteNativeGatewayServerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteNativeGatewayServiceSourceOutcome TseClient::DeleteNativeGatewayServiceSource(const DeleteNativeGatewayServiceSourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNativeGatewayServiceSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNativeGatewayServiceSourceResponse rsp = DeleteNativeGatewayServiceSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNativeGatewayServiceSourceOutcome(rsp);
        else
            return DeleteNativeGatewayServiceSourceOutcome(o.GetError());
    }
    else
    {
        return DeleteNativeGatewayServiceSourceOutcome(outcome.GetError());
    }
}

void TseClient::DeleteNativeGatewayServiceSourceAsync(const DeleteNativeGatewayServiceSourceRequest& request, const DeleteNativeGatewayServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNativeGatewayServiceSourceRequest&;
    using Resp = DeleteNativeGatewayServiceSourceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNativeGatewayServiceSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteNativeGatewayServiceSourceOutcomeCallable TseClient::DeleteNativeGatewayServiceSourceCallable(const DeleteNativeGatewayServiceSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNativeGatewayServiceSourceOutcome>>();
    DeleteNativeGatewayServiceSourceAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteNativeGatewayServiceSourceRequest&,
        DeleteNativeGatewayServiceSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteWafDomainsOutcome TseClient::DeleteWafDomains(const DeleteWafDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWafDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWafDomainsResponse rsp = DeleteWafDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWafDomainsOutcome(rsp);
        else
            return DeleteWafDomainsOutcome(o.GetError());
    }
    else
    {
        return DeleteWafDomainsOutcome(outcome.GetError());
    }
}

void TseClient::DeleteWafDomainsAsync(const DeleteWafDomainsRequest& request, const DeleteWafDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWafDomainsRequest&;
    using Resp = DeleteWafDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWafDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteWafDomainsOutcomeCallable TseClient::DeleteWafDomainsCallable(const DeleteWafDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWafDomainsOutcome>>();
    DeleteWafDomainsAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteWafDomainsRequest&,
        DeleteWafDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeAllConfigFileTemplatesOutcome TseClient::DescribeAllConfigFileTemplates(const DescribeAllConfigFileTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllConfigFileTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllConfigFileTemplatesResponse rsp = DescribeAllConfigFileTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllConfigFileTemplatesOutcome(rsp);
        else
            return DescribeAllConfigFileTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeAllConfigFileTemplatesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeAllConfigFileTemplatesAsync(const DescribeAllConfigFileTemplatesRequest& request, const DescribeAllConfigFileTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllConfigFileTemplatesRequest&;
    using Resp = DescribeAllConfigFileTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllConfigFileTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeAllConfigFileTemplatesOutcomeCallable TseClient::DescribeAllConfigFileTemplatesCallable(const DescribeAllConfigFileTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllConfigFileTemplatesOutcome>>();
    DescribeAllConfigFileTemplatesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeAllConfigFileTemplatesRequest&,
        DescribeAllConfigFileTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeAutoScalerResourceStrategiesOutcome TseClient::DescribeAutoScalerResourceStrategies(const DescribeAutoScalerResourceStrategiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScalerResourceStrategies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScalerResourceStrategiesResponse rsp = DescribeAutoScalerResourceStrategiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScalerResourceStrategiesOutcome(rsp);
        else
            return DescribeAutoScalerResourceStrategiesOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScalerResourceStrategiesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeAutoScalerResourceStrategiesAsync(const DescribeAutoScalerResourceStrategiesRequest& request, const DescribeAutoScalerResourceStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAutoScalerResourceStrategiesRequest&;
    using Resp = DescribeAutoScalerResourceStrategiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoScalerResourceStrategies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeAutoScalerResourceStrategiesOutcomeCallable TseClient::DescribeAutoScalerResourceStrategiesCallable(const DescribeAutoScalerResourceStrategiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoScalerResourceStrategiesOutcome>>();
    DescribeAutoScalerResourceStrategiesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeAutoScalerResourceStrategiesRequest&,
        DescribeAutoScalerResourceStrategiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeAutoScalerResourceStrategyBindingGroupsOutcome TseClient::DescribeAutoScalerResourceStrategyBindingGroups(const DescribeAutoScalerResourceStrategyBindingGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScalerResourceStrategyBindingGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScalerResourceStrategyBindingGroupsResponse rsp = DescribeAutoScalerResourceStrategyBindingGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScalerResourceStrategyBindingGroupsOutcome(rsp);
        else
            return DescribeAutoScalerResourceStrategyBindingGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScalerResourceStrategyBindingGroupsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeAutoScalerResourceStrategyBindingGroupsAsync(const DescribeAutoScalerResourceStrategyBindingGroupsRequest& request, const DescribeAutoScalerResourceStrategyBindingGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAutoScalerResourceStrategyBindingGroupsRequest&;
    using Resp = DescribeAutoScalerResourceStrategyBindingGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoScalerResourceStrategyBindingGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeAutoScalerResourceStrategyBindingGroupsOutcomeCallable TseClient::DescribeAutoScalerResourceStrategyBindingGroupsCallable(const DescribeAutoScalerResourceStrategyBindingGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoScalerResourceStrategyBindingGroupsOutcome>>();
    DescribeAutoScalerResourceStrategyBindingGroupsAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeAutoScalerResourceStrategyBindingGroupsRequest&,
        DescribeAutoScalerResourceStrategyBindingGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayOutcome TseClient::DescribeCloudNativeAPIGateway(const DescribeCloudNativeAPIGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayResponse rsp = DescribeCloudNativeAPIGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayAsync(const DescribeCloudNativeAPIGatewayRequest& request, const DescribeCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayRequest&;
    using Resp = DescribeCloudNativeAPIGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayCallable(const DescribeCloudNativeAPIGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayOutcome>>();
    DescribeCloudNativeAPIGatewayAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayRequest&,
        DescribeCloudNativeAPIGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayCanaryRulesOutcome TseClient::DescribeCloudNativeAPIGatewayCanaryRules(const DescribeCloudNativeAPIGatewayCanaryRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayCanaryRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayCanaryRulesResponse rsp = DescribeCloudNativeAPIGatewayCanaryRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayCanaryRulesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayCanaryRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayCanaryRulesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayCanaryRulesAsync(const DescribeCloudNativeAPIGatewayCanaryRulesRequest& request, const DescribeCloudNativeAPIGatewayCanaryRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayCanaryRulesRequest&;
    using Resp = DescribeCloudNativeAPIGatewayCanaryRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayCanaryRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayCanaryRulesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayCanaryRulesCallable(const DescribeCloudNativeAPIGatewayCanaryRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayCanaryRulesOutcome>>();
    DescribeCloudNativeAPIGatewayCanaryRulesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayCanaryRulesRequest&,
        DescribeCloudNativeAPIGatewayCanaryRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayCertificateDetailsOutcome TseClient::DescribeCloudNativeAPIGatewayCertificateDetails(const DescribeCloudNativeAPIGatewayCertificateDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayCertificateDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayCertificateDetailsResponse rsp = DescribeCloudNativeAPIGatewayCertificateDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayCertificateDetailsOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayCertificateDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayCertificateDetailsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayCertificateDetailsAsync(const DescribeCloudNativeAPIGatewayCertificateDetailsRequest& request, const DescribeCloudNativeAPIGatewayCertificateDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayCertificateDetailsRequest&;
    using Resp = DescribeCloudNativeAPIGatewayCertificateDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayCertificateDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayCertificateDetailsOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayCertificateDetailsCallable(const DescribeCloudNativeAPIGatewayCertificateDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayCertificateDetailsOutcome>>();
    DescribeCloudNativeAPIGatewayCertificateDetailsAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayCertificateDetailsRequest&,
        DescribeCloudNativeAPIGatewayCertificateDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayCertificatesOutcome TseClient::DescribeCloudNativeAPIGatewayCertificates(const DescribeCloudNativeAPIGatewayCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayCertificatesResponse rsp = DescribeCloudNativeAPIGatewayCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayCertificatesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayCertificatesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayCertificatesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayCertificatesAsync(const DescribeCloudNativeAPIGatewayCertificatesRequest& request, const DescribeCloudNativeAPIGatewayCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayCertificatesRequest&;
    using Resp = DescribeCloudNativeAPIGatewayCertificatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayCertificates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayCertificatesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayCertificatesCallable(const DescribeCloudNativeAPIGatewayCertificatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayCertificatesOutcome>>();
    DescribeCloudNativeAPIGatewayCertificatesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayCertificatesRequest&,
        DescribeCloudNativeAPIGatewayCertificatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayConfigOutcome TseClient::DescribeCloudNativeAPIGatewayConfig(const DescribeCloudNativeAPIGatewayConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayConfigResponse rsp = DescribeCloudNativeAPIGatewayConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayConfigOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayConfigOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayConfigAsync(const DescribeCloudNativeAPIGatewayConfigRequest& request, const DescribeCloudNativeAPIGatewayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayConfigRequest&;
    using Resp = DescribeCloudNativeAPIGatewayConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayConfigOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayConfigCallable(const DescribeCloudNativeAPIGatewayConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayConfigOutcome>>();
    DescribeCloudNativeAPIGatewayConfigAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayConfigRequest&,
        DescribeCloudNativeAPIGatewayConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayIPRestrictionOutcome TseClient::DescribeCloudNativeAPIGatewayIPRestriction(const DescribeCloudNativeAPIGatewayIPRestrictionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayIPRestriction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayIPRestrictionResponse rsp = DescribeCloudNativeAPIGatewayIPRestrictionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayIPRestrictionOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayIPRestrictionOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayIPRestrictionOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayIPRestrictionAsync(const DescribeCloudNativeAPIGatewayIPRestrictionRequest& request, const DescribeCloudNativeAPIGatewayIPRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayIPRestrictionRequest&;
    using Resp = DescribeCloudNativeAPIGatewayIPRestrictionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayIPRestriction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayIPRestrictionOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayIPRestrictionCallable(const DescribeCloudNativeAPIGatewayIPRestrictionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayIPRestrictionOutcome>>();
    DescribeCloudNativeAPIGatewayIPRestrictionAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayIPRestrictionRequest&,
        DescribeCloudNativeAPIGatewayIPRestrictionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayInfoByIpOutcome TseClient::DescribeCloudNativeAPIGatewayInfoByIp(const DescribeCloudNativeAPIGatewayInfoByIpRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayInfoByIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayInfoByIpResponse rsp = DescribeCloudNativeAPIGatewayInfoByIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayInfoByIpOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayInfoByIpOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayInfoByIpOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayInfoByIpAsync(const DescribeCloudNativeAPIGatewayInfoByIpRequest& request, const DescribeCloudNativeAPIGatewayInfoByIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayInfoByIpRequest&;
    using Resp = DescribeCloudNativeAPIGatewayInfoByIpResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayInfoByIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayInfoByIpOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayInfoByIpCallable(const DescribeCloudNativeAPIGatewayInfoByIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayInfoByIpOutcome>>();
    DescribeCloudNativeAPIGatewayInfoByIpAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayInfoByIpRequest&,
        DescribeCloudNativeAPIGatewayInfoByIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayNodesOutcome TseClient::DescribeCloudNativeAPIGatewayNodes(const DescribeCloudNativeAPIGatewayNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayNodesResponse rsp = DescribeCloudNativeAPIGatewayNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayNodesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayNodesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayNodesAsync(const DescribeCloudNativeAPIGatewayNodesRequest& request, const DescribeCloudNativeAPIGatewayNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayNodesRequest&;
    using Resp = DescribeCloudNativeAPIGatewayNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayNodesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayNodesCallable(const DescribeCloudNativeAPIGatewayNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayNodesOutcome>>();
    DescribeCloudNativeAPIGatewayNodesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayNodesRequest&,
        DescribeCloudNativeAPIGatewayNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayPortsOutcome TseClient::DescribeCloudNativeAPIGatewayPorts(const DescribeCloudNativeAPIGatewayPortsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayPorts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayPortsResponse rsp = DescribeCloudNativeAPIGatewayPortsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayPortsOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayPortsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayPortsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayPortsAsync(const DescribeCloudNativeAPIGatewayPortsRequest& request, const DescribeCloudNativeAPIGatewayPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayPortsRequest&;
    using Resp = DescribeCloudNativeAPIGatewayPortsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayPorts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayPortsOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayPortsCallable(const DescribeCloudNativeAPIGatewayPortsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayPortsOutcome>>();
    DescribeCloudNativeAPIGatewayPortsAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayPortsRequest&,
        DescribeCloudNativeAPIGatewayPortsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::DescribeCloudNativeAPIGatewayRouteRateLimit(const DescribeCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayRouteRateLimitResponse rsp = DescribeCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitAsync(const DescribeCloudNativeAPIGatewayRouteRateLimitRequest& request, const DescribeCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayRouteRateLimitRequest&;
    using Resp = DescribeCloudNativeAPIGatewayRouteRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayRouteRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitCallable(const DescribeCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayRouteRateLimitOutcome>>();
    DescribeCloudNativeAPIGatewayRouteRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayRouteRateLimitRequest&,
        DescribeCloudNativeAPIGatewayRouteRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayRoutesOutcome TseClient::DescribeCloudNativeAPIGatewayRoutes(const DescribeCloudNativeAPIGatewayRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayRoutesResponse rsp = DescribeCloudNativeAPIGatewayRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayRoutesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayRoutesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayRoutesAsync(const DescribeCloudNativeAPIGatewayRoutesRequest& request, const DescribeCloudNativeAPIGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayRoutesRequest&;
    using Resp = DescribeCloudNativeAPIGatewayRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayRoutesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayRoutesCallable(const DescribeCloudNativeAPIGatewayRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayRoutesOutcome>>();
    DescribeCloudNativeAPIGatewayRoutesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayRoutesRequest&,
        DescribeCloudNativeAPIGatewayRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::DescribeCloudNativeAPIGatewayServiceRateLimit(const DescribeCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayServiceRateLimitResponse rsp = DescribeCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitAsync(const DescribeCloudNativeAPIGatewayServiceRateLimitRequest& request, const DescribeCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayServiceRateLimitRequest&;
    using Resp = DescribeCloudNativeAPIGatewayServiceRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayServiceRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitCallable(const DescribeCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayServiceRateLimitOutcome>>();
    DescribeCloudNativeAPIGatewayServiceRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayServiceRateLimitRequest&,
        DescribeCloudNativeAPIGatewayServiceRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayServicesOutcome TseClient::DescribeCloudNativeAPIGatewayServices(const DescribeCloudNativeAPIGatewayServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayServicesResponse rsp = DescribeCloudNativeAPIGatewayServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayServicesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayServicesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayServicesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayServicesAsync(const DescribeCloudNativeAPIGatewayServicesRequest& request, const DescribeCloudNativeAPIGatewayServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayServicesRequest&;
    using Resp = DescribeCloudNativeAPIGatewayServicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayServices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayServicesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayServicesCallable(const DescribeCloudNativeAPIGatewayServicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayServicesOutcome>>();
    DescribeCloudNativeAPIGatewayServicesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayServicesRequest&,
        DescribeCloudNativeAPIGatewayServicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayServicesLightOutcome TseClient::DescribeCloudNativeAPIGatewayServicesLight(const DescribeCloudNativeAPIGatewayServicesLightRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayServicesLight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayServicesLightResponse rsp = DescribeCloudNativeAPIGatewayServicesLightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayServicesLightOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayServicesLightOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayServicesLightOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayServicesLightAsync(const DescribeCloudNativeAPIGatewayServicesLightRequest& request, const DescribeCloudNativeAPIGatewayServicesLightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayServicesLightRequest&;
    using Resp = DescribeCloudNativeAPIGatewayServicesLightResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayServicesLight", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayServicesLightOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayServicesLightCallable(const DescribeCloudNativeAPIGatewayServicesLightRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayServicesLightOutcome>>();
    DescribeCloudNativeAPIGatewayServicesLightAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayServicesLightRequest&,
        DescribeCloudNativeAPIGatewayServicesLightOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayUpstreamOutcome TseClient::DescribeCloudNativeAPIGatewayUpstream(const DescribeCloudNativeAPIGatewayUpstreamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayUpstream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayUpstreamResponse rsp = DescribeCloudNativeAPIGatewayUpstreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayUpstreamOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayUpstreamOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayUpstreamOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayUpstreamAsync(const DescribeCloudNativeAPIGatewayUpstreamRequest& request, const DescribeCloudNativeAPIGatewayUpstreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayUpstreamRequest&;
    using Resp = DescribeCloudNativeAPIGatewayUpstreamResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayUpstream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayUpstreamOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayUpstreamCallable(const DescribeCloudNativeAPIGatewayUpstreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayUpstreamOutcome>>();
    DescribeCloudNativeAPIGatewayUpstreamAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayUpstreamRequest&,
        DescribeCloudNativeAPIGatewayUpstreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewaysOutcome TseClient::DescribeCloudNativeAPIGateways(const DescribeCloudNativeAPIGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewaysResponse rsp = DescribeCloudNativeAPIGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewaysOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewaysOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewaysAsync(const DescribeCloudNativeAPIGatewaysRequest& request, const DescribeCloudNativeAPIGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewaysRequest&;
    using Resp = DescribeCloudNativeAPIGatewaysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGateways", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewaysOutcomeCallable TseClient::DescribeCloudNativeAPIGatewaysCallable(const DescribeCloudNativeAPIGatewaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewaysOutcome>>();
    DescribeCloudNativeAPIGatewaysAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewaysRequest&,
        DescribeCloudNativeAPIGatewaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeConfigFileOutcome TseClient::DescribeConfigFile(const DescribeConfigFileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFileResponse rsp = DescribeConfigFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFileOutcome(rsp);
        else
            return DescribeConfigFileOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFileOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFileAsync(const DescribeConfigFileRequest& request, const DescribeConfigFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigFileRequest&;
    using Resp = DescribeConfigFileResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeConfigFileOutcomeCallable TseClient::DescribeConfigFileCallable(const DescribeConfigFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigFileOutcome>>();
    DescribeConfigFileAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeConfigFileRequest&,
        DescribeConfigFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeConfigFileGroupsOutcome TseClient::DescribeConfigFileGroups(const DescribeConfigFileGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFileGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFileGroupsResponse rsp = DescribeConfigFileGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFileGroupsOutcome(rsp);
        else
            return DescribeConfigFileGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFileGroupsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFileGroupsAsync(const DescribeConfigFileGroupsRequest& request, const DescribeConfigFileGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigFileGroupsRequest&;
    using Resp = DescribeConfigFileGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigFileGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeConfigFileGroupsOutcomeCallable TseClient::DescribeConfigFileGroupsCallable(const DescribeConfigFileGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigFileGroupsOutcome>>();
    DescribeConfigFileGroupsAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeConfigFileGroupsRequest&,
        DescribeConfigFileGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeConfigFileReleaseOutcome TseClient::DescribeConfigFileRelease(const DescribeConfigFileReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFileRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFileReleaseResponse rsp = DescribeConfigFileReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFileReleaseOutcome(rsp);
        else
            return DescribeConfigFileReleaseOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFileReleaseOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFileReleaseAsync(const DescribeConfigFileReleaseRequest& request, const DescribeConfigFileReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigFileReleaseRequest&;
    using Resp = DescribeConfigFileReleaseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigFileRelease", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeConfigFileReleaseOutcomeCallable TseClient::DescribeConfigFileReleaseCallable(const DescribeConfigFileReleaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigFileReleaseOutcome>>();
    DescribeConfigFileReleaseAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeConfigFileReleaseRequest&,
        DescribeConfigFileReleaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeConfigFileReleaseHistoriesOutcome TseClient::DescribeConfigFileReleaseHistories(const DescribeConfigFileReleaseHistoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFileReleaseHistories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFileReleaseHistoriesResponse rsp = DescribeConfigFileReleaseHistoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFileReleaseHistoriesOutcome(rsp);
        else
            return DescribeConfigFileReleaseHistoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFileReleaseHistoriesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFileReleaseHistoriesAsync(const DescribeConfigFileReleaseHistoriesRequest& request, const DescribeConfigFileReleaseHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigFileReleaseHistoriesRequest&;
    using Resp = DescribeConfigFileReleaseHistoriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigFileReleaseHistories", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeConfigFileReleaseHistoriesOutcomeCallable TseClient::DescribeConfigFileReleaseHistoriesCallable(const DescribeConfigFileReleaseHistoriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigFileReleaseHistoriesOutcome>>();
    DescribeConfigFileReleaseHistoriesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeConfigFileReleaseHistoriesRequest&,
        DescribeConfigFileReleaseHistoriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeConfigFileReleaseVersionsOutcome TseClient::DescribeConfigFileReleaseVersions(const DescribeConfigFileReleaseVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFileReleaseVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFileReleaseVersionsResponse rsp = DescribeConfigFileReleaseVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFileReleaseVersionsOutcome(rsp);
        else
            return DescribeConfigFileReleaseVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFileReleaseVersionsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFileReleaseVersionsAsync(const DescribeConfigFileReleaseVersionsRequest& request, const DescribeConfigFileReleaseVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigFileReleaseVersionsRequest&;
    using Resp = DescribeConfigFileReleaseVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigFileReleaseVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeConfigFileReleaseVersionsOutcomeCallable TseClient::DescribeConfigFileReleaseVersionsCallable(const DescribeConfigFileReleaseVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigFileReleaseVersionsOutcome>>();
    DescribeConfigFileReleaseVersionsAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeConfigFileReleaseVersionsRequest&,
        DescribeConfigFileReleaseVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeConfigFileReleasesOutcome TseClient::DescribeConfigFileReleases(const DescribeConfigFileReleasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFileReleases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFileReleasesResponse rsp = DescribeConfigFileReleasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFileReleasesOutcome(rsp);
        else
            return DescribeConfigFileReleasesOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFileReleasesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFileReleasesAsync(const DescribeConfigFileReleasesRequest& request, const DescribeConfigFileReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigFileReleasesRequest&;
    using Resp = DescribeConfigFileReleasesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigFileReleases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeConfigFileReleasesOutcomeCallable TseClient::DescribeConfigFileReleasesCallable(const DescribeConfigFileReleasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigFileReleasesOutcome>>();
    DescribeConfigFileReleasesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeConfigFileReleasesRequest&,
        DescribeConfigFileReleasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeConfigFilesOutcome TseClient::DescribeConfigFiles(const DescribeConfigFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFilesResponse rsp = DescribeConfigFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFilesOutcome(rsp);
        else
            return DescribeConfigFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFilesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFilesAsync(const DescribeConfigFilesRequest& request, const DescribeConfigFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigFilesRequest&;
    using Resp = DescribeConfigFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeConfigFilesOutcomeCallable TseClient::DescribeConfigFilesCallable(const DescribeConfigFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigFilesOutcome>>();
    DescribeConfigFilesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeConfigFilesRequest&,
        DescribeConfigFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeConfigFilesByGroupOutcome TseClient::DescribeConfigFilesByGroup(const DescribeConfigFilesByGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigFilesByGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigFilesByGroupResponse rsp = DescribeConfigFilesByGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigFilesByGroupOutcome(rsp);
        else
            return DescribeConfigFilesByGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigFilesByGroupOutcome(outcome.GetError());
    }
}

void TseClient::DescribeConfigFilesByGroupAsync(const DescribeConfigFilesByGroupRequest& request, const DescribeConfigFilesByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigFilesByGroupRequest&;
    using Resp = DescribeConfigFilesByGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigFilesByGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeConfigFilesByGroupOutcomeCallable TseClient::DescribeConfigFilesByGroupCallable(const DescribeConfigFilesByGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigFilesByGroupOutcome>>();
    DescribeConfigFilesByGroupAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeConfigFilesByGroupRequest&,
        DescribeConfigFilesByGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeGovernanceAliasesOutcome TseClient::DescribeGovernanceAliases(const DescribeGovernanceAliasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGovernanceAliases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGovernanceAliasesResponse rsp = DescribeGovernanceAliasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGovernanceAliasesOutcome(rsp);
        else
            return DescribeGovernanceAliasesOutcome(o.GetError());
    }
    else
    {
        return DescribeGovernanceAliasesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeGovernanceAliasesAsync(const DescribeGovernanceAliasesRequest& request, const DescribeGovernanceAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGovernanceAliasesRequest&;
    using Resp = DescribeGovernanceAliasesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGovernanceAliases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeGovernanceAliasesOutcomeCallable TseClient::DescribeGovernanceAliasesCallable(const DescribeGovernanceAliasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGovernanceAliasesOutcome>>();
    DescribeGovernanceAliasesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeGovernanceAliasesRequest&,
        DescribeGovernanceAliasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeGovernanceInstancesOutcome TseClient::DescribeGovernanceInstances(const DescribeGovernanceInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGovernanceInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGovernanceInstancesResponse rsp = DescribeGovernanceInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGovernanceInstancesOutcome(rsp);
        else
            return DescribeGovernanceInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeGovernanceInstancesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeGovernanceInstancesAsync(const DescribeGovernanceInstancesRequest& request, const DescribeGovernanceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGovernanceInstancesRequest&;
    using Resp = DescribeGovernanceInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGovernanceInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeGovernanceInstancesOutcomeCallable TseClient::DescribeGovernanceInstancesCallable(const DescribeGovernanceInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGovernanceInstancesOutcome>>();
    DescribeGovernanceInstancesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeGovernanceInstancesRequest&,
        DescribeGovernanceInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeGovernanceNamespacesOutcome TseClient::DescribeGovernanceNamespaces(const DescribeGovernanceNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGovernanceNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGovernanceNamespacesResponse rsp = DescribeGovernanceNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGovernanceNamespacesOutcome(rsp);
        else
            return DescribeGovernanceNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeGovernanceNamespacesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeGovernanceNamespacesAsync(const DescribeGovernanceNamespacesRequest& request, const DescribeGovernanceNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGovernanceNamespacesRequest&;
    using Resp = DescribeGovernanceNamespacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGovernanceNamespaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeGovernanceNamespacesOutcomeCallable TseClient::DescribeGovernanceNamespacesCallable(const DescribeGovernanceNamespacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGovernanceNamespacesOutcome>>();
    DescribeGovernanceNamespacesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeGovernanceNamespacesRequest&,
        DescribeGovernanceNamespacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeGovernanceServiceContractVersionsOutcome TseClient::DescribeGovernanceServiceContractVersions(const DescribeGovernanceServiceContractVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGovernanceServiceContractVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGovernanceServiceContractVersionsResponse rsp = DescribeGovernanceServiceContractVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGovernanceServiceContractVersionsOutcome(rsp);
        else
            return DescribeGovernanceServiceContractVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeGovernanceServiceContractVersionsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeGovernanceServiceContractVersionsAsync(const DescribeGovernanceServiceContractVersionsRequest& request, const DescribeGovernanceServiceContractVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGovernanceServiceContractVersionsRequest&;
    using Resp = DescribeGovernanceServiceContractVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGovernanceServiceContractVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeGovernanceServiceContractVersionsOutcomeCallable TseClient::DescribeGovernanceServiceContractVersionsCallable(const DescribeGovernanceServiceContractVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGovernanceServiceContractVersionsOutcome>>();
    DescribeGovernanceServiceContractVersionsAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeGovernanceServiceContractVersionsRequest&,
        DescribeGovernanceServiceContractVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeGovernanceServiceContractsOutcome TseClient::DescribeGovernanceServiceContracts(const DescribeGovernanceServiceContractsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGovernanceServiceContracts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGovernanceServiceContractsResponse rsp = DescribeGovernanceServiceContractsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGovernanceServiceContractsOutcome(rsp);
        else
            return DescribeGovernanceServiceContractsOutcome(o.GetError());
    }
    else
    {
        return DescribeGovernanceServiceContractsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeGovernanceServiceContractsAsync(const DescribeGovernanceServiceContractsRequest& request, const DescribeGovernanceServiceContractsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGovernanceServiceContractsRequest&;
    using Resp = DescribeGovernanceServiceContractsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGovernanceServiceContracts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeGovernanceServiceContractsOutcomeCallable TseClient::DescribeGovernanceServiceContractsCallable(const DescribeGovernanceServiceContractsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGovernanceServiceContractsOutcome>>();
    DescribeGovernanceServiceContractsAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeGovernanceServiceContractsRequest&,
        DescribeGovernanceServiceContractsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeGovernanceServicesOutcome TseClient::DescribeGovernanceServices(const DescribeGovernanceServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGovernanceServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGovernanceServicesResponse rsp = DescribeGovernanceServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGovernanceServicesOutcome(rsp);
        else
            return DescribeGovernanceServicesOutcome(o.GetError());
    }
    else
    {
        return DescribeGovernanceServicesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeGovernanceServicesAsync(const DescribeGovernanceServicesRequest& request, const DescribeGovernanceServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGovernanceServicesRequest&;
    using Resp = DescribeGovernanceServicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGovernanceServices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeGovernanceServicesOutcomeCallable TseClient::DescribeGovernanceServicesCallable(const DescribeGovernanceServicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGovernanceServicesOutcome>>();
    DescribeGovernanceServicesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeGovernanceServicesRequest&,
        DescribeGovernanceServicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeInstanceTagInfosOutcome TseClient::DescribeInstanceTagInfos(const DescribeInstanceTagInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceTagInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTagInfosResponse rsp = DescribeInstanceTagInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTagInfosOutcome(rsp);
        else
            return DescribeInstanceTagInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTagInfosOutcome(outcome.GetError());
    }
}

void TseClient::DescribeInstanceTagInfosAsync(const DescribeInstanceTagInfosRequest& request, const DescribeInstanceTagInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceTagInfosRequest&;
    using Resp = DescribeInstanceTagInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceTagInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeInstanceTagInfosOutcomeCallable TseClient::DescribeInstanceTagInfosCallable(const DescribeInstanceTagInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceTagInfosOutcome>>();
    DescribeInstanceTagInfosAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeInstanceTagInfosRequest&,
        DescribeInstanceTagInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeNacosReplicasOutcome TseClient::DescribeNacosReplicas(const DescribeNacosReplicasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNacosReplicas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNacosReplicasResponse rsp = DescribeNacosReplicasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNacosReplicasOutcome(rsp);
        else
            return DescribeNacosReplicasOutcome(o.GetError());
    }
    else
    {
        return DescribeNacosReplicasOutcome(outcome.GetError());
    }
}

void TseClient::DescribeNacosReplicasAsync(const DescribeNacosReplicasRequest& request, const DescribeNacosReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNacosReplicasRequest&;
    using Resp = DescribeNacosReplicasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNacosReplicas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeNacosReplicasOutcomeCallable TseClient::DescribeNacosReplicasCallable(const DescribeNacosReplicasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNacosReplicasOutcome>>();
    DescribeNacosReplicasAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeNacosReplicasRequest&,
        DescribeNacosReplicasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeNacosServerInterfacesOutcome TseClient::DescribeNacosServerInterfaces(const DescribeNacosServerInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNacosServerInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNacosServerInterfacesResponse rsp = DescribeNacosServerInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNacosServerInterfacesOutcome(rsp);
        else
            return DescribeNacosServerInterfacesOutcome(o.GetError());
    }
    else
    {
        return DescribeNacosServerInterfacesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeNacosServerInterfacesAsync(const DescribeNacosServerInterfacesRequest& request, const DescribeNacosServerInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNacosServerInterfacesRequest&;
    using Resp = DescribeNacosServerInterfacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNacosServerInterfaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeNacosServerInterfacesOutcomeCallable TseClient::DescribeNacosServerInterfacesCallable(const DescribeNacosServerInterfacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNacosServerInterfacesOutcome>>();
    DescribeNacosServerInterfacesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeNacosServerInterfacesRequest&,
        DescribeNacosServerInterfacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeNativeGatewayServerGroupsOutcome TseClient::DescribeNativeGatewayServerGroups(const DescribeNativeGatewayServerGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNativeGatewayServerGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNativeGatewayServerGroupsResponse rsp = DescribeNativeGatewayServerGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNativeGatewayServerGroupsOutcome(rsp);
        else
            return DescribeNativeGatewayServerGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeNativeGatewayServerGroupsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeNativeGatewayServerGroupsAsync(const DescribeNativeGatewayServerGroupsRequest& request, const DescribeNativeGatewayServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNativeGatewayServerGroupsRequest&;
    using Resp = DescribeNativeGatewayServerGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNativeGatewayServerGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeNativeGatewayServerGroupsOutcomeCallable TseClient::DescribeNativeGatewayServerGroupsCallable(const DescribeNativeGatewayServerGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNativeGatewayServerGroupsOutcome>>();
    DescribeNativeGatewayServerGroupsAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeNativeGatewayServerGroupsRequest&,
        DescribeNativeGatewayServerGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeNativeGatewayServiceSourcesOutcome TseClient::DescribeNativeGatewayServiceSources(const DescribeNativeGatewayServiceSourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNativeGatewayServiceSources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNativeGatewayServiceSourcesResponse rsp = DescribeNativeGatewayServiceSourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNativeGatewayServiceSourcesOutcome(rsp);
        else
            return DescribeNativeGatewayServiceSourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeNativeGatewayServiceSourcesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeNativeGatewayServiceSourcesAsync(const DescribeNativeGatewayServiceSourcesRequest& request, const DescribeNativeGatewayServiceSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNativeGatewayServiceSourcesRequest&;
    using Resp = DescribeNativeGatewayServiceSourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNativeGatewayServiceSources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeNativeGatewayServiceSourcesOutcomeCallable TseClient::DescribeNativeGatewayServiceSourcesCallable(const DescribeNativeGatewayServiceSourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNativeGatewayServiceSourcesOutcome>>();
    DescribeNativeGatewayServiceSourcesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeNativeGatewayServiceSourcesRequest&,
        DescribeNativeGatewayServiceSourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeOneCloudNativeAPIGatewayServiceOutcome TseClient::DescribeOneCloudNativeAPIGatewayService(const DescribeOneCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOneCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOneCloudNativeAPIGatewayServiceResponse rsp = DescribeOneCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOneCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return DescribeOneCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeOneCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::DescribeOneCloudNativeAPIGatewayServiceAsync(const DescribeOneCloudNativeAPIGatewayServiceRequest& request, const DescribeOneCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOneCloudNativeAPIGatewayServiceRequest&;
    using Resp = DescribeOneCloudNativeAPIGatewayServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOneCloudNativeAPIGatewayService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeOneCloudNativeAPIGatewayServiceOutcomeCallable TseClient::DescribeOneCloudNativeAPIGatewayServiceCallable(const DescribeOneCloudNativeAPIGatewayServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOneCloudNativeAPIGatewayServiceOutcome>>();
    DescribeOneCloudNativeAPIGatewayServiceAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeOneCloudNativeAPIGatewayServiceRequest&,
        DescribeOneCloudNativeAPIGatewayServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribePublicAddressConfigOutcome TseClient::DescribePublicAddressConfig(const DescribePublicAddressConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicAddressConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicAddressConfigResponse rsp = DescribePublicAddressConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicAddressConfigOutcome(rsp);
        else
            return DescribePublicAddressConfigOutcome(o.GetError());
    }
    else
    {
        return DescribePublicAddressConfigOutcome(outcome.GetError());
    }
}

void TseClient::DescribePublicAddressConfigAsync(const DescribePublicAddressConfigRequest& request, const DescribePublicAddressConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicAddressConfigRequest&;
    using Resp = DescribePublicAddressConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicAddressConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribePublicAddressConfigOutcomeCallable TseClient::DescribePublicAddressConfigCallable(const DescribePublicAddressConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicAddressConfigOutcome>>();
    DescribePublicAddressConfigAsync(
    request,
    [prom](
        const TseClient*,
        const DescribePublicAddressConfigRequest&,
        DescribePublicAddressConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribePublicNetworkOutcome TseClient::DescribePublicNetwork(const DescribePublicNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicNetworkResponse rsp = DescribePublicNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicNetworkOutcome(rsp);
        else
            return DescribePublicNetworkOutcome(o.GetError());
    }
    else
    {
        return DescribePublicNetworkOutcome(outcome.GetError());
    }
}

void TseClient::DescribePublicNetworkAsync(const DescribePublicNetworkRequest& request, const DescribePublicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicNetworkRequest&;
    using Resp = DescribePublicNetworkResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicNetwork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribePublicNetworkOutcomeCallable TseClient::DescribePublicNetworkCallable(const DescribePublicNetworkRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicNetworkOutcome>>();
    DescribePublicNetworkAsync(
    request,
    [prom](
        const TseClient*,
        const DescribePublicNetworkRequest&,
        DescribePublicNetworkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeSREInstanceAccessAddressOutcome TseClient::DescribeSREInstanceAccessAddress(const DescribeSREInstanceAccessAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSREInstanceAccessAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSREInstanceAccessAddressResponse rsp = DescribeSREInstanceAccessAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSREInstanceAccessAddressOutcome(rsp);
        else
            return DescribeSREInstanceAccessAddressOutcome(o.GetError());
    }
    else
    {
        return DescribeSREInstanceAccessAddressOutcome(outcome.GetError());
    }
}

void TseClient::DescribeSREInstanceAccessAddressAsync(const DescribeSREInstanceAccessAddressRequest& request, const DescribeSREInstanceAccessAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSREInstanceAccessAddressRequest&;
    using Resp = DescribeSREInstanceAccessAddressResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSREInstanceAccessAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeSREInstanceAccessAddressOutcomeCallable TseClient::DescribeSREInstanceAccessAddressCallable(const DescribeSREInstanceAccessAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSREInstanceAccessAddressOutcome>>();
    DescribeSREInstanceAccessAddressAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeSREInstanceAccessAddressRequest&,
        DescribeSREInstanceAccessAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeSREInstancesOutcome TseClient::DescribeSREInstances(const DescribeSREInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSREInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSREInstancesResponse rsp = DescribeSREInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSREInstancesOutcome(rsp);
        else
            return DescribeSREInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeSREInstancesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeSREInstancesAsync(const DescribeSREInstancesRequest& request, const DescribeSREInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSREInstancesRequest&;
    using Resp = DescribeSREInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSREInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeSREInstancesOutcomeCallable TseClient::DescribeSREInstancesCallable(const DescribeSREInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSREInstancesOutcome>>();
    DescribeSREInstancesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeSREInstancesRequest&,
        DescribeSREInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeUpstreamHealthCheckConfigOutcome TseClient::DescribeUpstreamHealthCheckConfig(const DescribeUpstreamHealthCheckConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpstreamHealthCheckConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpstreamHealthCheckConfigResponse rsp = DescribeUpstreamHealthCheckConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpstreamHealthCheckConfigOutcome(rsp);
        else
            return DescribeUpstreamHealthCheckConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeUpstreamHealthCheckConfigOutcome(outcome.GetError());
    }
}

void TseClient::DescribeUpstreamHealthCheckConfigAsync(const DescribeUpstreamHealthCheckConfigRequest& request, const DescribeUpstreamHealthCheckConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUpstreamHealthCheckConfigRequest&;
    using Resp = DescribeUpstreamHealthCheckConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUpstreamHealthCheckConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeUpstreamHealthCheckConfigOutcomeCallable TseClient::DescribeUpstreamHealthCheckConfigCallable(const DescribeUpstreamHealthCheckConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUpstreamHealthCheckConfigOutcome>>();
    DescribeUpstreamHealthCheckConfigAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeUpstreamHealthCheckConfigRequest&,
        DescribeUpstreamHealthCheckConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeWafDomainsOutcome TseClient::DescribeWafDomains(const DescribeWafDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWafDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWafDomainsResponse rsp = DescribeWafDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWafDomainsOutcome(rsp);
        else
            return DescribeWafDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeWafDomainsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeWafDomainsAsync(const DescribeWafDomainsRequest& request, const DescribeWafDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWafDomainsRequest&;
    using Resp = DescribeWafDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWafDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeWafDomainsOutcomeCallable TseClient::DescribeWafDomainsCallable(const DescribeWafDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWafDomainsOutcome>>();
    DescribeWafDomainsAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeWafDomainsRequest&,
        DescribeWafDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeWafProtectionOutcome TseClient::DescribeWafProtection(const DescribeWafProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWafProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWafProtectionResponse rsp = DescribeWafProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWafProtectionOutcome(rsp);
        else
            return DescribeWafProtectionOutcome(o.GetError());
    }
    else
    {
        return DescribeWafProtectionOutcome(outcome.GetError());
    }
}

void TseClient::DescribeWafProtectionAsync(const DescribeWafProtectionRequest& request, const DescribeWafProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWafProtectionRequest&;
    using Resp = DescribeWafProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWafProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeWafProtectionOutcomeCallable TseClient::DescribeWafProtectionCallable(const DescribeWafProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWafProtectionOutcome>>();
    DescribeWafProtectionAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeWafProtectionRequest&,
        DescribeWafProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeZookeeperReplicasOutcome TseClient::DescribeZookeeperReplicas(const DescribeZookeeperReplicasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZookeeperReplicas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZookeeperReplicasResponse rsp = DescribeZookeeperReplicasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZookeeperReplicasOutcome(rsp);
        else
            return DescribeZookeeperReplicasOutcome(o.GetError());
    }
    else
    {
        return DescribeZookeeperReplicasOutcome(outcome.GetError());
    }
}

void TseClient::DescribeZookeeperReplicasAsync(const DescribeZookeeperReplicasRequest& request, const DescribeZookeeperReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeZookeeperReplicasRequest&;
    using Resp = DescribeZookeeperReplicasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZookeeperReplicas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeZookeeperReplicasOutcomeCallable TseClient::DescribeZookeeperReplicasCallable(const DescribeZookeeperReplicasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZookeeperReplicasOutcome>>();
    DescribeZookeeperReplicasAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeZookeeperReplicasRequest&,
        DescribeZookeeperReplicasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeZookeeperServerInterfacesOutcome TseClient::DescribeZookeeperServerInterfaces(const DescribeZookeeperServerInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZookeeperServerInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZookeeperServerInterfacesResponse rsp = DescribeZookeeperServerInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZookeeperServerInterfacesOutcome(rsp);
        else
            return DescribeZookeeperServerInterfacesOutcome(o.GetError());
    }
    else
    {
        return DescribeZookeeperServerInterfacesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeZookeeperServerInterfacesAsync(const DescribeZookeeperServerInterfacesRequest& request, const DescribeZookeeperServerInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeZookeeperServerInterfacesRequest&;
    using Resp = DescribeZookeeperServerInterfacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZookeeperServerInterfaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeZookeeperServerInterfacesOutcomeCallable TseClient::DescribeZookeeperServerInterfacesCallable(const DescribeZookeeperServerInterfacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZookeeperServerInterfacesOutcome>>();
    DescribeZookeeperServerInterfacesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeZookeeperServerInterfacesRequest&,
        DescribeZookeeperServerInterfacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyAutoScalerResourceStrategyOutcome TseClient::ModifyAutoScalerResourceStrategy(const ModifyAutoScalerResourceStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoScalerResourceStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoScalerResourceStrategyResponse rsp = ModifyAutoScalerResourceStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoScalerResourceStrategyOutcome(rsp);
        else
            return ModifyAutoScalerResourceStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoScalerResourceStrategyOutcome(outcome.GetError());
    }
}

void TseClient::ModifyAutoScalerResourceStrategyAsync(const ModifyAutoScalerResourceStrategyRequest& request, const ModifyAutoScalerResourceStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAutoScalerResourceStrategyRequest&;
    using Resp = ModifyAutoScalerResourceStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoScalerResourceStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyAutoScalerResourceStrategyOutcomeCallable TseClient::ModifyAutoScalerResourceStrategyCallable(const ModifyAutoScalerResourceStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoScalerResourceStrategyOutcome>>();
    ModifyAutoScalerResourceStrategyAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyAutoScalerResourceStrategyRequest&,
        ModifyAutoScalerResourceStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayOutcome TseClient::ModifyCloudNativeAPIGateway(const ModifyCloudNativeAPIGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayResponse rsp = ModifyCloudNativeAPIGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayAsync(const ModifyCloudNativeAPIGatewayRequest& request, const ModifyCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayRequest&;
    using Resp = ModifyCloudNativeAPIGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyCloudNativeAPIGatewayOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayCallable(const ModifyCloudNativeAPIGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayOutcome>>();
    ModifyCloudNativeAPIGatewayAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyCloudNativeAPIGatewayRequest&,
        ModifyCloudNativeAPIGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayCanaryRuleOutcome TseClient::ModifyCloudNativeAPIGatewayCanaryRule(const ModifyCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayCanaryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayCanaryRuleResponse rsp = ModifyCloudNativeAPIGatewayCanaryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayCanaryRuleOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayCanaryRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayCanaryRuleOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayCanaryRuleAsync(const ModifyCloudNativeAPIGatewayCanaryRuleRequest& request, const ModifyCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayCanaryRuleRequest&;
    using Resp = ModifyCloudNativeAPIGatewayCanaryRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayCanaryRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyCloudNativeAPIGatewayCanaryRuleOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayCanaryRuleCallable(const ModifyCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayCanaryRuleOutcome>>();
    ModifyCloudNativeAPIGatewayCanaryRuleAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyCloudNativeAPIGatewayCanaryRuleRequest&,
        ModifyCloudNativeAPIGatewayCanaryRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayCertificateOutcome TseClient::ModifyCloudNativeAPIGatewayCertificate(const ModifyCloudNativeAPIGatewayCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayCertificateResponse rsp = ModifyCloudNativeAPIGatewayCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayCertificateOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayCertificateOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayCertificateOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayCertificateAsync(const ModifyCloudNativeAPIGatewayCertificateRequest& request, const ModifyCloudNativeAPIGatewayCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayCertificateRequest&;
    using Resp = ModifyCloudNativeAPIGatewayCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyCloudNativeAPIGatewayCertificateOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayCertificateCallable(const ModifyCloudNativeAPIGatewayCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayCertificateOutcome>>();
    ModifyCloudNativeAPIGatewayCertificateAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyCloudNativeAPIGatewayCertificateRequest&,
        ModifyCloudNativeAPIGatewayCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayRouteOutcome TseClient::ModifyCloudNativeAPIGatewayRoute(const ModifyCloudNativeAPIGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayRouteResponse rsp = ModifyCloudNativeAPIGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayRouteOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayRouteOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayRouteAsync(const ModifyCloudNativeAPIGatewayRouteRequest& request, const ModifyCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayRouteRequest&;
    using Resp = ModifyCloudNativeAPIGatewayRouteResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyCloudNativeAPIGatewayRouteOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayRouteCallable(const ModifyCloudNativeAPIGatewayRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayRouteOutcome>>();
    ModifyCloudNativeAPIGatewayRouteAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyCloudNativeAPIGatewayRouteRequest&,
        ModifyCloudNativeAPIGatewayRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::ModifyCloudNativeAPIGatewayRouteRateLimit(const ModifyCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayRouteRateLimitResponse rsp = ModifyCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitAsync(const ModifyCloudNativeAPIGatewayRouteRateLimitRequest& request, const ModifyCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayRouteRateLimitRequest&;
    using Resp = ModifyCloudNativeAPIGatewayRouteRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayRouteRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitCallable(const ModifyCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayRouteRateLimitOutcome>>();
    ModifyCloudNativeAPIGatewayRouteRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyCloudNativeAPIGatewayRouteRateLimitRequest&,
        ModifyCloudNativeAPIGatewayRouteRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayServiceOutcome TseClient::ModifyCloudNativeAPIGatewayService(const ModifyCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayServiceResponse rsp = ModifyCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayServiceAsync(const ModifyCloudNativeAPIGatewayServiceRequest& request, const ModifyCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayServiceRequest&;
    using Resp = ModifyCloudNativeAPIGatewayServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyCloudNativeAPIGatewayServiceOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayServiceCallable(const ModifyCloudNativeAPIGatewayServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayServiceOutcome>>();
    ModifyCloudNativeAPIGatewayServiceAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyCloudNativeAPIGatewayServiceRequest&,
        ModifyCloudNativeAPIGatewayServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::ModifyCloudNativeAPIGatewayServiceRateLimit(const ModifyCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayServiceRateLimitResponse rsp = ModifyCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitAsync(const ModifyCloudNativeAPIGatewayServiceRateLimitRequest& request, const ModifyCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayServiceRateLimitRequest&;
    using Resp = ModifyCloudNativeAPIGatewayServiceRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayServiceRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitCallable(const ModifyCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayServiceRateLimitOutcome>>();
    ModifyCloudNativeAPIGatewayServiceRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyCloudNativeAPIGatewayServiceRateLimitRequest&,
        ModifyCloudNativeAPIGatewayServiceRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyConfigFileGroupOutcome TseClient::ModifyConfigFileGroup(const ModifyConfigFileGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConfigFileGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConfigFileGroupResponse rsp = ModifyConfigFileGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConfigFileGroupOutcome(rsp);
        else
            return ModifyConfigFileGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyConfigFileGroupOutcome(outcome.GetError());
    }
}

void TseClient::ModifyConfigFileGroupAsync(const ModifyConfigFileGroupRequest& request, const ModifyConfigFileGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConfigFileGroupRequest&;
    using Resp = ModifyConfigFileGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConfigFileGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyConfigFileGroupOutcomeCallable TseClient::ModifyConfigFileGroupCallable(const ModifyConfigFileGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConfigFileGroupOutcome>>();
    ModifyConfigFileGroupAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyConfigFileGroupRequest&,
        ModifyConfigFileGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyConfigFilesOutcome TseClient::ModifyConfigFiles(const ModifyConfigFilesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConfigFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConfigFilesResponse rsp = ModifyConfigFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConfigFilesOutcome(rsp);
        else
            return ModifyConfigFilesOutcome(o.GetError());
    }
    else
    {
        return ModifyConfigFilesOutcome(outcome.GetError());
    }
}

void TseClient::ModifyConfigFilesAsync(const ModifyConfigFilesRequest& request, const ModifyConfigFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConfigFilesRequest&;
    using Resp = ModifyConfigFilesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConfigFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyConfigFilesOutcomeCallable TseClient::ModifyConfigFilesCallable(const ModifyConfigFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConfigFilesOutcome>>();
    ModifyConfigFilesAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyConfigFilesRequest&,
        ModifyConfigFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyConsoleNetworkOutcome TseClient::ModifyConsoleNetwork(const ModifyConsoleNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConsoleNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConsoleNetworkResponse rsp = ModifyConsoleNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConsoleNetworkOutcome(rsp);
        else
            return ModifyConsoleNetworkOutcome(o.GetError());
    }
    else
    {
        return ModifyConsoleNetworkOutcome(outcome.GetError());
    }
}

void TseClient::ModifyConsoleNetworkAsync(const ModifyConsoleNetworkRequest& request, const ModifyConsoleNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConsoleNetworkRequest&;
    using Resp = ModifyConsoleNetworkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConsoleNetwork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyConsoleNetworkOutcomeCallable TseClient::ModifyConsoleNetworkCallable(const ModifyConsoleNetworkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConsoleNetworkOutcome>>();
    ModifyConsoleNetworkAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyConsoleNetworkRequest&,
        ModifyConsoleNetworkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyGovernanceAliasOutcome TseClient::ModifyGovernanceAlias(const ModifyGovernanceAliasRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGovernanceAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGovernanceAliasResponse rsp = ModifyGovernanceAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGovernanceAliasOutcome(rsp);
        else
            return ModifyGovernanceAliasOutcome(o.GetError());
    }
    else
    {
        return ModifyGovernanceAliasOutcome(outcome.GetError());
    }
}

void TseClient::ModifyGovernanceAliasAsync(const ModifyGovernanceAliasRequest& request, const ModifyGovernanceAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGovernanceAliasRequest&;
    using Resp = ModifyGovernanceAliasResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGovernanceAlias", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyGovernanceAliasOutcomeCallable TseClient::ModifyGovernanceAliasCallable(const ModifyGovernanceAliasRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGovernanceAliasOutcome>>();
    ModifyGovernanceAliasAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyGovernanceAliasRequest&,
        ModifyGovernanceAliasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyGovernanceInstancesOutcome TseClient::ModifyGovernanceInstances(const ModifyGovernanceInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGovernanceInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGovernanceInstancesResponse rsp = ModifyGovernanceInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGovernanceInstancesOutcome(rsp);
        else
            return ModifyGovernanceInstancesOutcome(o.GetError());
    }
    else
    {
        return ModifyGovernanceInstancesOutcome(outcome.GetError());
    }
}

void TseClient::ModifyGovernanceInstancesAsync(const ModifyGovernanceInstancesRequest& request, const ModifyGovernanceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGovernanceInstancesRequest&;
    using Resp = ModifyGovernanceInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGovernanceInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyGovernanceInstancesOutcomeCallable TseClient::ModifyGovernanceInstancesCallable(const ModifyGovernanceInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGovernanceInstancesOutcome>>();
    ModifyGovernanceInstancesAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyGovernanceInstancesRequest&,
        ModifyGovernanceInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyGovernanceNamespacesOutcome TseClient::ModifyGovernanceNamespaces(const ModifyGovernanceNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGovernanceNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGovernanceNamespacesResponse rsp = ModifyGovernanceNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGovernanceNamespacesOutcome(rsp);
        else
            return ModifyGovernanceNamespacesOutcome(o.GetError());
    }
    else
    {
        return ModifyGovernanceNamespacesOutcome(outcome.GetError());
    }
}

void TseClient::ModifyGovernanceNamespacesAsync(const ModifyGovernanceNamespacesRequest& request, const ModifyGovernanceNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGovernanceNamespacesRequest&;
    using Resp = ModifyGovernanceNamespacesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGovernanceNamespaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyGovernanceNamespacesOutcomeCallable TseClient::ModifyGovernanceNamespacesCallable(const ModifyGovernanceNamespacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGovernanceNamespacesOutcome>>();
    ModifyGovernanceNamespacesAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyGovernanceNamespacesRequest&,
        ModifyGovernanceNamespacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyGovernanceServicesOutcome TseClient::ModifyGovernanceServices(const ModifyGovernanceServicesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGovernanceServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGovernanceServicesResponse rsp = ModifyGovernanceServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGovernanceServicesOutcome(rsp);
        else
            return ModifyGovernanceServicesOutcome(o.GetError());
    }
    else
    {
        return ModifyGovernanceServicesOutcome(outcome.GetError());
    }
}

void TseClient::ModifyGovernanceServicesAsync(const ModifyGovernanceServicesRequest& request, const ModifyGovernanceServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGovernanceServicesRequest&;
    using Resp = ModifyGovernanceServicesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGovernanceServices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyGovernanceServicesOutcomeCallable TseClient::ModifyGovernanceServicesCallable(const ModifyGovernanceServicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGovernanceServicesOutcome>>();
    ModifyGovernanceServicesAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyGovernanceServicesRequest&,
        ModifyGovernanceServicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyNativeGatewayServerGroupOutcome TseClient::ModifyNativeGatewayServerGroup(const ModifyNativeGatewayServerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNativeGatewayServerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNativeGatewayServerGroupResponse rsp = ModifyNativeGatewayServerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNativeGatewayServerGroupOutcome(rsp);
        else
            return ModifyNativeGatewayServerGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyNativeGatewayServerGroupOutcome(outcome.GetError());
    }
}

void TseClient::ModifyNativeGatewayServerGroupAsync(const ModifyNativeGatewayServerGroupRequest& request, const ModifyNativeGatewayServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNativeGatewayServerGroupRequest&;
    using Resp = ModifyNativeGatewayServerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNativeGatewayServerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyNativeGatewayServerGroupOutcomeCallable TseClient::ModifyNativeGatewayServerGroupCallable(const ModifyNativeGatewayServerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNativeGatewayServerGroupOutcome>>();
    ModifyNativeGatewayServerGroupAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyNativeGatewayServerGroupRequest&,
        ModifyNativeGatewayServerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyNativeGatewayServiceSourceOutcome TseClient::ModifyNativeGatewayServiceSource(const ModifyNativeGatewayServiceSourceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNativeGatewayServiceSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNativeGatewayServiceSourceResponse rsp = ModifyNativeGatewayServiceSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNativeGatewayServiceSourceOutcome(rsp);
        else
            return ModifyNativeGatewayServiceSourceOutcome(o.GetError());
    }
    else
    {
        return ModifyNativeGatewayServiceSourceOutcome(outcome.GetError());
    }
}

void TseClient::ModifyNativeGatewayServiceSourceAsync(const ModifyNativeGatewayServiceSourceRequest& request, const ModifyNativeGatewayServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNativeGatewayServiceSourceRequest&;
    using Resp = ModifyNativeGatewayServiceSourceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNativeGatewayServiceSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyNativeGatewayServiceSourceOutcomeCallable TseClient::ModifyNativeGatewayServiceSourceCallable(const ModifyNativeGatewayServiceSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNativeGatewayServiceSourceOutcome>>();
    ModifyNativeGatewayServiceSourceAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyNativeGatewayServiceSourceRequest&,
        ModifyNativeGatewayServiceSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyNetworkAccessStrategyOutcome TseClient::ModifyNetworkAccessStrategy(const ModifyNetworkAccessStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkAccessStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkAccessStrategyResponse rsp = ModifyNetworkAccessStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkAccessStrategyOutcome(rsp);
        else
            return ModifyNetworkAccessStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkAccessStrategyOutcome(outcome.GetError());
    }
}

void TseClient::ModifyNetworkAccessStrategyAsync(const ModifyNetworkAccessStrategyRequest& request, const ModifyNetworkAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNetworkAccessStrategyRequest&;
    using Resp = ModifyNetworkAccessStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNetworkAccessStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyNetworkAccessStrategyOutcomeCallable TseClient::ModifyNetworkAccessStrategyCallable(const ModifyNetworkAccessStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNetworkAccessStrategyOutcome>>();
    ModifyNetworkAccessStrategyAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyNetworkAccessStrategyRequest&,
        ModifyNetworkAccessStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyNetworkBasicInfoOutcome TseClient::ModifyNetworkBasicInfo(const ModifyNetworkBasicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkBasicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkBasicInfoResponse rsp = ModifyNetworkBasicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkBasicInfoOutcome(rsp);
        else
            return ModifyNetworkBasicInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkBasicInfoOutcome(outcome.GetError());
    }
}

void TseClient::ModifyNetworkBasicInfoAsync(const ModifyNetworkBasicInfoRequest& request, const ModifyNetworkBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNetworkBasicInfoRequest&;
    using Resp = ModifyNetworkBasicInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNetworkBasicInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyNetworkBasicInfoOutcomeCallable TseClient::ModifyNetworkBasicInfoCallable(const ModifyNetworkBasicInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNetworkBasicInfoOutcome>>();
    ModifyNetworkBasicInfoAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyNetworkBasicInfoRequest&,
        ModifyNetworkBasicInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyUpstreamNodeStatusOutcome TseClient::ModifyUpstreamNodeStatus(const ModifyUpstreamNodeStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUpstreamNodeStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUpstreamNodeStatusResponse rsp = ModifyUpstreamNodeStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUpstreamNodeStatusOutcome(rsp);
        else
            return ModifyUpstreamNodeStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyUpstreamNodeStatusOutcome(outcome.GetError());
    }
}

void TseClient::ModifyUpstreamNodeStatusAsync(const ModifyUpstreamNodeStatusRequest& request, const ModifyUpstreamNodeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUpstreamNodeStatusRequest&;
    using Resp = ModifyUpstreamNodeStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUpstreamNodeStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyUpstreamNodeStatusOutcomeCallable TseClient::ModifyUpstreamNodeStatusCallable(const ModifyUpstreamNodeStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUpstreamNodeStatusOutcome>>();
    ModifyUpstreamNodeStatusAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyUpstreamNodeStatusRequest&,
        ModifyUpstreamNodeStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::OpenWafProtectionOutcome TseClient::OpenWafProtection(const OpenWafProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "OpenWafProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenWafProtectionResponse rsp = OpenWafProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenWafProtectionOutcome(rsp);
        else
            return OpenWafProtectionOutcome(o.GetError());
    }
    else
    {
        return OpenWafProtectionOutcome(outcome.GetError());
    }
}

void TseClient::OpenWafProtectionAsync(const OpenWafProtectionRequest& request, const OpenWafProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenWafProtectionRequest&;
    using Resp = OpenWafProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "OpenWafProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::OpenWafProtectionOutcomeCallable TseClient::OpenWafProtectionCallable(const OpenWafProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenWafProtectionOutcome>>();
    OpenWafProtectionAsync(
    request,
    [prom](
        const TseClient*,
        const OpenWafProtectionRequest&,
        OpenWafProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::PublishConfigFilesOutcome TseClient::PublishConfigFiles(const PublishConfigFilesRequest &request)
{
    auto outcome = MakeRequest(request, "PublishConfigFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishConfigFilesResponse rsp = PublishConfigFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishConfigFilesOutcome(rsp);
        else
            return PublishConfigFilesOutcome(o.GetError());
    }
    else
    {
        return PublishConfigFilesOutcome(outcome.GetError());
    }
}

void TseClient::PublishConfigFilesAsync(const PublishConfigFilesRequest& request, const PublishConfigFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PublishConfigFilesRequest&;
    using Resp = PublishConfigFilesResponse;

    DoRequestAsync<Req, Resp>(
        "PublishConfigFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::PublishConfigFilesOutcomeCallable TseClient::PublishConfigFilesCallable(const PublishConfigFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<PublishConfigFilesOutcome>>();
    PublishConfigFilesAsync(
    request,
    [prom](
        const TseClient*,
        const PublishConfigFilesRequest&,
        PublishConfigFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::RestartSREInstanceOutcome TseClient::RestartSREInstance(const RestartSREInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartSREInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartSREInstanceResponse rsp = RestartSREInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartSREInstanceOutcome(rsp);
        else
            return RestartSREInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartSREInstanceOutcome(outcome.GetError());
    }
}

void TseClient::RestartSREInstanceAsync(const RestartSREInstanceRequest& request, const RestartSREInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartSREInstanceRequest&;
    using Resp = RestartSREInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RestartSREInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::RestartSREInstanceOutcomeCallable TseClient::RestartSREInstanceCallable(const RestartSREInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartSREInstanceOutcome>>();
    RestartSREInstanceAsync(
    request,
    [prom](
        const TseClient*,
        const RestartSREInstanceRequest&,
        RestartSREInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::RollbackConfigFileReleasesOutcome TseClient::RollbackConfigFileReleases(const RollbackConfigFileReleasesRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackConfigFileReleases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackConfigFileReleasesResponse rsp = RollbackConfigFileReleasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackConfigFileReleasesOutcome(rsp);
        else
            return RollbackConfigFileReleasesOutcome(o.GetError());
    }
    else
    {
        return RollbackConfigFileReleasesOutcome(outcome.GetError());
    }
}

void TseClient::RollbackConfigFileReleasesAsync(const RollbackConfigFileReleasesRequest& request, const RollbackConfigFileReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RollbackConfigFileReleasesRequest&;
    using Resp = RollbackConfigFileReleasesResponse;

    DoRequestAsync<Req, Resp>(
        "RollbackConfigFileReleases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::RollbackConfigFileReleasesOutcomeCallable TseClient::RollbackConfigFileReleasesCallable(const RollbackConfigFileReleasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollbackConfigFileReleasesOutcome>>();
    RollbackConfigFileReleasesAsync(
    request,
    [prom](
        const TseClient*,
        const RollbackConfigFileReleasesRequest&,
        RollbackConfigFileReleasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::UnbindAutoScalerResourceStrategyFromGroupsOutcome TseClient::UnbindAutoScalerResourceStrategyFromGroups(const UnbindAutoScalerResourceStrategyFromGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindAutoScalerResourceStrategyFromGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindAutoScalerResourceStrategyFromGroupsResponse rsp = UnbindAutoScalerResourceStrategyFromGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindAutoScalerResourceStrategyFromGroupsOutcome(rsp);
        else
            return UnbindAutoScalerResourceStrategyFromGroupsOutcome(o.GetError());
    }
    else
    {
        return UnbindAutoScalerResourceStrategyFromGroupsOutcome(outcome.GetError());
    }
}

void TseClient::UnbindAutoScalerResourceStrategyFromGroupsAsync(const UnbindAutoScalerResourceStrategyFromGroupsRequest& request, const UnbindAutoScalerResourceStrategyFromGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindAutoScalerResourceStrategyFromGroupsRequest&;
    using Resp = UnbindAutoScalerResourceStrategyFromGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindAutoScalerResourceStrategyFromGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::UnbindAutoScalerResourceStrategyFromGroupsOutcomeCallable TseClient::UnbindAutoScalerResourceStrategyFromGroupsCallable(const UnbindAutoScalerResourceStrategyFromGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindAutoScalerResourceStrategyFromGroupsOutcome>>();
    UnbindAutoScalerResourceStrategyFromGroupsAsync(
    request,
    [prom](
        const TseClient*,
        const UnbindAutoScalerResourceStrategyFromGroupsRequest&,
        UnbindAutoScalerResourceStrategyFromGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::UpdateCloudNativeAPIGatewayCertificateInfoOutcome TseClient::UpdateCloudNativeAPIGatewayCertificateInfo(const UpdateCloudNativeAPIGatewayCertificateInfoRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCloudNativeAPIGatewayCertificateInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCloudNativeAPIGatewayCertificateInfoResponse rsp = UpdateCloudNativeAPIGatewayCertificateInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCloudNativeAPIGatewayCertificateInfoOutcome(rsp);
        else
            return UpdateCloudNativeAPIGatewayCertificateInfoOutcome(o.GetError());
    }
    else
    {
        return UpdateCloudNativeAPIGatewayCertificateInfoOutcome(outcome.GetError());
    }
}

void TseClient::UpdateCloudNativeAPIGatewayCertificateInfoAsync(const UpdateCloudNativeAPIGatewayCertificateInfoRequest& request, const UpdateCloudNativeAPIGatewayCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCloudNativeAPIGatewayCertificateInfoRequest&;
    using Resp = UpdateCloudNativeAPIGatewayCertificateInfoResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCloudNativeAPIGatewayCertificateInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::UpdateCloudNativeAPIGatewayCertificateInfoOutcomeCallable TseClient::UpdateCloudNativeAPIGatewayCertificateInfoCallable(const UpdateCloudNativeAPIGatewayCertificateInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCloudNativeAPIGatewayCertificateInfoOutcome>>();
    UpdateCloudNativeAPIGatewayCertificateInfoAsync(
    request,
    [prom](
        const TseClient*,
        const UpdateCloudNativeAPIGatewayCertificateInfoRequest&,
        UpdateCloudNativeAPIGatewayCertificateInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::UpdateCloudNativeAPIGatewaySpecOutcome TseClient::UpdateCloudNativeAPIGatewaySpec(const UpdateCloudNativeAPIGatewaySpecRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCloudNativeAPIGatewaySpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCloudNativeAPIGatewaySpecResponse rsp = UpdateCloudNativeAPIGatewaySpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCloudNativeAPIGatewaySpecOutcome(rsp);
        else
            return UpdateCloudNativeAPIGatewaySpecOutcome(o.GetError());
    }
    else
    {
        return UpdateCloudNativeAPIGatewaySpecOutcome(outcome.GetError());
    }
}

void TseClient::UpdateCloudNativeAPIGatewaySpecAsync(const UpdateCloudNativeAPIGatewaySpecRequest& request, const UpdateCloudNativeAPIGatewaySpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCloudNativeAPIGatewaySpecRequest&;
    using Resp = UpdateCloudNativeAPIGatewaySpecResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCloudNativeAPIGatewaySpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::UpdateCloudNativeAPIGatewaySpecOutcomeCallable TseClient::UpdateCloudNativeAPIGatewaySpecCallable(const UpdateCloudNativeAPIGatewaySpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCloudNativeAPIGatewaySpecOutcome>>();
    UpdateCloudNativeAPIGatewaySpecAsync(
    request,
    [prom](
        const TseClient*,
        const UpdateCloudNativeAPIGatewaySpecRequest&,
        UpdateCloudNativeAPIGatewaySpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::UpdateEngineInternetAccessOutcome TseClient::UpdateEngineInternetAccess(const UpdateEngineInternetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEngineInternetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEngineInternetAccessResponse rsp = UpdateEngineInternetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEngineInternetAccessOutcome(rsp);
        else
            return UpdateEngineInternetAccessOutcome(o.GetError());
    }
    else
    {
        return UpdateEngineInternetAccessOutcome(outcome.GetError());
    }
}

void TseClient::UpdateEngineInternetAccessAsync(const UpdateEngineInternetAccessRequest& request, const UpdateEngineInternetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateEngineInternetAccessRequest&;
    using Resp = UpdateEngineInternetAccessResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateEngineInternetAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::UpdateEngineInternetAccessOutcomeCallable TseClient::UpdateEngineInternetAccessCallable(const UpdateEngineInternetAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateEngineInternetAccessOutcome>>();
    UpdateEngineInternetAccessAsync(
    request,
    [prom](
        const TseClient*,
        const UpdateEngineInternetAccessRequest&,
        UpdateEngineInternetAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::UpdateUpstreamHealthCheckConfigOutcome TseClient::UpdateUpstreamHealthCheckConfig(const UpdateUpstreamHealthCheckConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUpstreamHealthCheckConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUpstreamHealthCheckConfigResponse rsp = UpdateUpstreamHealthCheckConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUpstreamHealthCheckConfigOutcome(rsp);
        else
            return UpdateUpstreamHealthCheckConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateUpstreamHealthCheckConfigOutcome(outcome.GetError());
    }
}

void TseClient::UpdateUpstreamHealthCheckConfigAsync(const UpdateUpstreamHealthCheckConfigRequest& request, const UpdateUpstreamHealthCheckConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateUpstreamHealthCheckConfigRequest&;
    using Resp = UpdateUpstreamHealthCheckConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateUpstreamHealthCheckConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::UpdateUpstreamHealthCheckConfigOutcomeCallable TseClient::UpdateUpstreamHealthCheckConfigCallable(const UpdateUpstreamHealthCheckConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateUpstreamHealthCheckConfigOutcome>>();
    UpdateUpstreamHealthCheckConfigAsync(
    request,
    [prom](
        const TseClient*,
        const UpdateUpstreamHealthCheckConfigRequest&,
        UpdateUpstreamHealthCheckConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::UpdateUpstreamTargetsOutcome TseClient::UpdateUpstreamTargets(const UpdateUpstreamTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUpstreamTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUpstreamTargetsResponse rsp = UpdateUpstreamTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUpstreamTargetsOutcome(rsp);
        else
            return UpdateUpstreamTargetsOutcome(o.GetError());
    }
    else
    {
        return UpdateUpstreamTargetsOutcome(outcome.GetError());
    }
}

void TseClient::UpdateUpstreamTargetsAsync(const UpdateUpstreamTargetsRequest& request, const UpdateUpstreamTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateUpstreamTargetsRequest&;
    using Resp = UpdateUpstreamTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateUpstreamTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::UpdateUpstreamTargetsOutcomeCallable TseClient::UpdateUpstreamTargetsCallable(const UpdateUpstreamTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateUpstreamTargetsOutcome>>();
    UpdateUpstreamTargetsAsync(
    request,
    [prom](
        const TseClient*,
        const UpdateUpstreamTargetsRequest&,
        UpdateUpstreamTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

