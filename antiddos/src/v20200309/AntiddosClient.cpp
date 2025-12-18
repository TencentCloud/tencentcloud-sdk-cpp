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

#include <tencentcloud/antiddos/v20200309/AntiddosClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Antiddos::V20200309;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-03-09";
    const string ENDPOINT = "antiddos.tencentcloudapi.com";
}

AntiddosClient::AntiddosClient(const Credential &credential, const string &region) :
    AntiddosClient(credential, region, ClientProfile())
{
}

AntiddosClient::AntiddosClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AntiddosClient::AssociateDDoSEipAddressOutcome AntiddosClient::AssociateDDoSEipAddress(const AssociateDDoSEipAddressRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateDDoSEipAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateDDoSEipAddressResponse rsp = AssociateDDoSEipAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateDDoSEipAddressOutcome(rsp);
        else
            return AssociateDDoSEipAddressOutcome(o.GetError());
    }
    else
    {
        return AssociateDDoSEipAddressOutcome(outcome.GetError());
    }
}

void AntiddosClient::AssociateDDoSEipAddressAsync(const AssociateDDoSEipAddressRequest& request, const AssociateDDoSEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateDDoSEipAddressRequest&;
    using Resp = AssociateDDoSEipAddressResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateDDoSEipAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::AssociateDDoSEipAddressOutcomeCallable AntiddosClient::AssociateDDoSEipAddressCallable(const AssociateDDoSEipAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateDDoSEipAddressOutcome>>();
    AssociateDDoSEipAddressAsync(
    request,
    [prom](
        const AntiddosClient*,
        const AssociateDDoSEipAddressRequest&,
        AssociateDDoSEipAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::AssociateDDoSEipLoadBalancerOutcome AntiddosClient::AssociateDDoSEipLoadBalancer(const AssociateDDoSEipLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateDDoSEipLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateDDoSEipLoadBalancerResponse rsp = AssociateDDoSEipLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateDDoSEipLoadBalancerOutcome(rsp);
        else
            return AssociateDDoSEipLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return AssociateDDoSEipLoadBalancerOutcome(outcome.GetError());
    }
}

void AntiddosClient::AssociateDDoSEipLoadBalancerAsync(const AssociateDDoSEipLoadBalancerRequest& request, const AssociateDDoSEipLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateDDoSEipLoadBalancerRequest&;
    using Resp = AssociateDDoSEipLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateDDoSEipLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::AssociateDDoSEipLoadBalancerOutcomeCallable AntiddosClient::AssociateDDoSEipLoadBalancerCallable(const AssociateDDoSEipLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateDDoSEipLoadBalancerOutcome>>();
    AssociateDDoSEipLoadBalancerAsync(
    request,
    [prom](
        const AntiddosClient*,
        const AssociateDDoSEipLoadBalancerRequest&,
        AssociateDDoSEipLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateBgpInstanceOutcome AntiddosClient::CreateBgpInstance(const CreateBgpInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBgpInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBgpInstanceResponse rsp = CreateBgpInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBgpInstanceOutcome(rsp);
        else
            return CreateBgpInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateBgpInstanceOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateBgpInstanceAsync(const CreateBgpInstanceRequest& request, const CreateBgpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBgpInstanceRequest&;
    using Resp = CreateBgpInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBgpInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateBgpInstanceOutcomeCallable AntiddosClient::CreateBgpInstanceCallable(const CreateBgpInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBgpInstanceOutcome>>();
    CreateBgpInstanceAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateBgpInstanceRequest&,
        CreateBgpInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateBlackWhiteIpListOutcome AntiddosClient::CreateBlackWhiteIpList(const CreateBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBlackWhiteIpListResponse rsp = CreateBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBlackWhiteIpListOutcome(rsp);
        else
            return CreateBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return CreateBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateBlackWhiteIpListAsync(const CreateBlackWhiteIpListRequest& request, const CreateBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBlackWhiteIpListRequest&;
    using Resp = CreateBlackWhiteIpListResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBlackWhiteIpList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateBlackWhiteIpListOutcomeCallable AntiddosClient::CreateBlackWhiteIpListCallable(const CreateBlackWhiteIpListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBlackWhiteIpListOutcome>>();
    CreateBlackWhiteIpListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateBlackWhiteIpListRequest&,
        CreateBlackWhiteIpListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateBoundIPOutcome AntiddosClient::CreateBoundIP(const CreateBoundIPRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBoundIP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBoundIPResponse rsp = CreateBoundIPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBoundIPOutcome(rsp);
        else
            return CreateBoundIPOutcome(o.GetError());
    }
    else
    {
        return CreateBoundIPOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateBoundIPAsync(const CreateBoundIPRequest& request, const CreateBoundIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBoundIPRequest&;
    using Resp = CreateBoundIPResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBoundIP", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateBoundIPOutcomeCallable AntiddosClient::CreateBoundIPCallable(const CreateBoundIPRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBoundIPOutcome>>();
    CreateBoundIPAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateBoundIPRequest&,
        CreateBoundIPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateCCPrecisionPolicyOutcome AntiddosClient::CreateCCPrecisionPolicy(const CreateCCPrecisionPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCCPrecisionPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCCPrecisionPolicyResponse rsp = CreateCCPrecisionPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCCPrecisionPolicyOutcome(rsp);
        else
            return CreateCCPrecisionPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateCCPrecisionPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateCCPrecisionPolicyAsync(const CreateCCPrecisionPolicyRequest& request, const CreateCCPrecisionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCCPrecisionPolicyRequest&;
    using Resp = CreateCCPrecisionPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCCPrecisionPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateCCPrecisionPolicyOutcomeCallable AntiddosClient::CreateCCPrecisionPolicyCallable(const CreateCCPrecisionPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCCPrecisionPolicyOutcome>>();
    CreateCCPrecisionPolicyAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateCCPrecisionPolicyRequest&,
        CreateCCPrecisionPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateCCReqLimitPolicyOutcome AntiddosClient::CreateCCReqLimitPolicy(const CreateCCReqLimitPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCCReqLimitPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCCReqLimitPolicyResponse rsp = CreateCCReqLimitPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCCReqLimitPolicyOutcome(rsp);
        else
            return CreateCCReqLimitPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateCCReqLimitPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateCCReqLimitPolicyAsync(const CreateCCReqLimitPolicyRequest& request, const CreateCCReqLimitPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCCReqLimitPolicyRequest&;
    using Resp = CreateCCReqLimitPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCCReqLimitPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateCCReqLimitPolicyOutcomeCallable AntiddosClient::CreateCCReqLimitPolicyCallable(const CreateCCReqLimitPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCCReqLimitPolicyOutcome>>();
    CreateCCReqLimitPolicyAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateCCReqLimitPolicyRequest&,
        CreateCCReqLimitPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateCcBlackWhiteIpListOutcome AntiddosClient::CreateCcBlackWhiteIpList(const CreateCcBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCcBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCcBlackWhiteIpListResponse rsp = CreateCcBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCcBlackWhiteIpListOutcome(rsp);
        else
            return CreateCcBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return CreateCcBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateCcBlackWhiteIpListAsync(const CreateCcBlackWhiteIpListRequest& request, const CreateCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCcBlackWhiteIpListRequest&;
    using Resp = CreateCcBlackWhiteIpListResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCcBlackWhiteIpList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateCcBlackWhiteIpListOutcomeCallable AntiddosClient::CreateCcBlackWhiteIpListCallable(const CreateCcBlackWhiteIpListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCcBlackWhiteIpListOutcome>>();
    CreateCcBlackWhiteIpListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateCcBlackWhiteIpListRequest&,
        CreateCcBlackWhiteIpListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateCcGeoIPBlockConfigOutcome AntiddosClient::CreateCcGeoIPBlockConfig(const CreateCcGeoIPBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCcGeoIPBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCcGeoIPBlockConfigResponse rsp = CreateCcGeoIPBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCcGeoIPBlockConfigOutcome(rsp);
        else
            return CreateCcGeoIPBlockConfigOutcome(o.GetError());
    }
    else
    {
        return CreateCcGeoIPBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateCcGeoIPBlockConfigAsync(const CreateCcGeoIPBlockConfigRequest& request, const CreateCcGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCcGeoIPBlockConfigRequest&;
    using Resp = CreateCcGeoIPBlockConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCcGeoIPBlockConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateCcGeoIPBlockConfigOutcomeCallable AntiddosClient::CreateCcGeoIPBlockConfigCallable(const CreateCcGeoIPBlockConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCcGeoIPBlockConfigOutcome>>();
    CreateCcGeoIPBlockConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateCcGeoIPBlockConfigRequest&,
        CreateCcGeoIPBlockConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateDDoSAIOutcome AntiddosClient::CreateDDoSAI(const CreateDDoSAIRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDDoSAI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDDoSAIResponse rsp = CreateDDoSAIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDDoSAIOutcome(rsp);
        else
            return CreateDDoSAIOutcome(o.GetError());
    }
    else
    {
        return CreateDDoSAIOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateDDoSAIAsync(const CreateDDoSAIRequest& request, const CreateDDoSAIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDDoSAIRequest&;
    using Resp = CreateDDoSAIResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDDoSAI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateDDoSAIOutcomeCallable AntiddosClient::CreateDDoSAICallable(const CreateDDoSAIRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDDoSAIOutcome>>();
    CreateDDoSAIAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateDDoSAIRequest&,
        CreateDDoSAIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateDDoSBlackWhiteIpListOutcome AntiddosClient::CreateDDoSBlackWhiteIpList(const CreateDDoSBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDDoSBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDDoSBlackWhiteIpListResponse rsp = CreateDDoSBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDDoSBlackWhiteIpListOutcome(rsp);
        else
            return CreateDDoSBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return CreateDDoSBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateDDoSBlackWhiteIpListAsync(const CreateDDoSBlackWhiteIpListRequest& request, const CreateDDoSBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDDoSBlackWhiteIpListRequest&;
    using Resp = CreateDDoSBlackWhiteIpListResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDDoSBlackWhiteIpList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateDDoSBlackWhiteIpListOutcomeCallable AntiddosClient::CreateDDoSBlackWhiteIpListCallable(const CreateDDoSBlackWhiteIpListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDDoSBlackWhiteIpListOutcome>>();
    CreateDDoSBlackWhiteIpListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateDDoSBlackWhiteIpListRequest&,
        CreateDDoSBlackWhiteIpListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateDDoSConnectLimitOutcome AntiddosClient::CreateDDoSConnectLimit(const CreateDDoSConnectLimitRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDDoSConnectLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDDoSConnectLimitResponse rsp = CreateDDoSConnectLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDDoSConnectLimitOutcome(rsp);
        else
            return CreateDDoSConnectLimitOutcome(o.GetError());
    }
    else
    {
        return CreateDDoSConnectLimitOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateDDoSConnectLimitAsync(const CreateDDoSConnectLimitRequest& request, const CreateDDoSConnectLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDDoSConnectLimitRequest&;
    using Resp = CreateDDoSConnectLimitResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDDoSConnectLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateDDoSConnectLimitOutcomeCallable AntiddosClient::CreateDDoSConnectLimitCallable(const CreateDDoSConnectLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDDoSConnectLimitOutcome>>();
    CreateDDoSConnectLimitAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateDDoSConnectLimitRequest&,
        CreateDDoSConnectLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateDDoSGeoIPBlockConfigOutcome AntiddosClient::CreateDDoSGeoIPBlockConfig(const CreateDDoSGeoIPBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDDoSGeoIPBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDDoSGeoIPBlockConfigResponse rsp = CreateDDoSGeoIPBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDDoSGeoIPBlockConfigOutcome(rsp);
        else
            return CreateDDoSGeoIPBlockConfigOutcome(o.GetError());
    }
    else
    {
        return CreateDDoSGeoIPBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateDDoSGeoIPBlockConfigAsync(const CreateDDoSGeoIPBlockConfigRequest& request, const CreateDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDDoSGeoIPBlockConfigRequest&;
    using Resp = CreateDDoSGeoIPBlockConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDDoSGeoIPBlockConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateDDoSGeoIPBlockConfigOutcomeCallable AntiddosClient::CreateDDoSGeoIPBlockConfigCallable(const CreateDDoSGeoIPBlockConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDDoSGeoIPBlockConfigOutcome>>();
    CreateDDoSGeoIPBlockConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateDDoSGeoIPBlockConfigRequest&,
        CreateDDoSGeoIPBlockConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateDDoSSpeedLimitConfigOutcome AntiddosClient::CreateDDoSSpeedLimitConfig(const CreateDDoSSpeedLimitConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDDoSSpeedLimitConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDDoSSpeedLimitConfigResponse rsp = CreateDDoSSpeedLimitConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDDoSSpeedLimitConfigOutcome(rsp);
        else
            return CreateDDoSSpeedLimitConfigOutcome(o.GetError());
    }
    else
    {
        return CreateDDoSSpeedLimitConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateDDoSSpeedLimitConfigAsync(const CreateDDoSSpeedLimitConfigRequest& request, const CreateDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDDoSSpeedLimitConfigRequest&;
    using Resp = CreateDDoSSpeedLimitConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDDoSSpeedLimitConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateDDoSSpeedLimitConfigOutcomeCallable AntiddosClient::CreateDDoSSpeedLimitConfigCallable(const CreateDDoSSpeedLimitConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDDoSSpeedLimitConfigOutcome>>();
    CreateDDoSSpeedLimitConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateDDoSSpeedLimitConfigRequest&,
        CreateDDoSSpeedLimitConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateDefaultAlarmThresholdOutcome AntiddosClient::CreateDefaultAlarmThreshold(const CreateDefaultAlarmThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDefaultAlarmThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDefaultAlarmThresholdResponse rsp = CreateDefaultAlarmThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDefaultAlarmThresholdOutcome(rsp);
        else
            return CreateDefaultAlarmThresholdOutcome(o.GetError());
    }
    else
    {
        return CreateDefaultAlarmThresholdOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateDefaultAlarmThresholdAsync(const CreateDefaultAlarmThresholdRequest& request, const CreateDefaultAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDefaultAlarmThresholdRequest&;
    using Resp = CreateDefaultAlarmThresholdResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDefaultAlarmThreshold", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateDefaultAlarmThresholdOutcomeCallable AntiddosClient::CreateDefaultAlarmThresholdCallable(const CreateDefaultAlarmThresholdRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDefaultAlarmThresholdOutcome>>();
    CreateDefaultAlarmThresholdAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateDefaultAlarmThresholdRequest&,
        CreateDefaultAlarmThresholdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateIPAlarmThresholdConfigOutcome AntiddosClient::CreateIPAlarmThresholdConfig(const CreateIPAlarmThresholdConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIPAlarmThresholdConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIPAlarmThresholdConfigResponse rsp = CreateIPAlarmThresholdConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIPAlarmThresholdConfigOutcome(rsp);
        else
            return CreateIPAlarmThresholdConfigOutcome(o.GetError());
    }
    else
    {
        return CreateIPAlarmThresholdConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateIPAlarmThresholdConfigAsync(const CreateIPAlarmThresholdConfigRequest& request, const CreateIPAlarmThresholdConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIPAlarmThresholdConfigRequest&;
    using Resp = CreateIPAlarmThresholdConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIPAlarmThresholdConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateIPAlarmThresholdConfigOutcomeCallable AntiddosClient::CreateIPAlarmThresholdConfigCallable(const CreateIPAlarmThresholdConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIPAlarmThresholdConfigOutcome>>();
    CreateIPAlarmThresholdConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateIPAlarmThresholdConfigRequest&,
        CreateIPAlarmThresholdConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateL7RuleCertsOutcome AntiddosClient::CreateL7RuleCerts(const CreateL7RuleCertsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateL7RuleCerts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateL7RuleCertsResponse rsp = CreateL7RuleCertsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateL7RuleCertsOutcome(rsp);
        else
            return CreateL7RuleCertsOutcome(o.GetError());
    }
    else
    {
        return CreateL7RuleCertsOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateL7RuleCertsAsync(const CreateL7RuleCertsRequest& request, const CreateL7RuleCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateL7RuleCertsRequest&;
    using Resp = CreateL7RuleCertsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateL7RuleCerts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateL7RuleCertsOutcomeCallable AntiddosClient::CreateL7RuleCertsCallable(const CreateL7RuleCertsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateL7RuleCertsOutcome>>();
    CreateL7RuleCertsAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateL7RuleCertsRequest&,
        CreateL7RuleCertsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateNewL7RulesOutcome AntiddosClient::CreateNewL7Rules(const CreateNewL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNewL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNewL7RulesResponse rsp = CreateNewL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNewL7RulesOutcome(rsp);
        else
            return CreateNewL7RulesOutcome(o.GetError());
    }
    else
    {
        return CreateNewL7RulesOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateNewL7RulesAsync(const CreateNewL7RulesRequest& request, const CreateNewL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNewL7RulesRequest&;
    using Resp = CreateNewL7RulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNewL7Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateNewL7RulesOutcomeCallable AntiddosClient::CreateNewL7RulesCallable(const CreateNewL7RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNewL7RulesOutcome>>();
    CreateNewL7RulesAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateNewL7RulesRequest&,
        CreateNewL7RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreatePacketFilterConfigOutcome AntiddosClient::CreatePacketFilterConfig(const CreatePacketFilterConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePacketFilterConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePacketFilterConfigResponse rsp = CreatePacketFilterConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePacketFilterConfigOutcome(rsp);
        else
            return CreatePacketFilterConfigOutcome(o.GetError());
    }
    else
    {
        return CreatePacketFilterConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreatePacketFilterConfigAsync(const CreatePacketFilterConfigRequest& request, const CreatePacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePacketFilterConfigRequest&;
    using Resp = CreatePacketFilterConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePacketFilterConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreatePacketFilterConfigOutcomeCallable AntiddosClient::CreatePacketFilterConfigCallable(const CreatePacketFilterConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePacketFilterConfigOutcome>>();
    CreatePacketFilterConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreatePacketFilterConfigRequest&,
        CreatePacketFilterConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreatePortAclConfigOutcome AntiddosClient::CreatePortAclConfig(const CreatePortAclConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePortAclConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePortAclConfigResponse rsp = CreatePortAclConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePortAclConfigOutcome(rsp);
        else
            return CreatePortAclConfigOutcome(o.GetError());
    }
    else
    {
        return CreatePortAclConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreatePortAclConfigAsync(const CreatePortAclConfigRequest& request, const CreatePortAclConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePortAclConfigRequest&;
    using Resp = CreatePortAclConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePortAclConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreatePortAclConfigOutcomeCallable AntiddosClient::CreatePortAclConfigCallable(const CreatePortAclConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePortAclConfigOutcome>>();
    CreatePortAclConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreatePortAclConfigRequest&,
        CreatePortAclConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreatePortAclConfigListOutcome AntiddosClient::CreatePortAclConfigList(const CreatePortAclConfigListRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePortAclConfigList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePortAclConfigListResponse rsp = CreatePortAclConfigListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePortAclConfigListOutcome(rsp);
        else
            return CreatePortAclConfigListOutcome(o.GetError());
    }
    else
    {
        return CreatePortAclConfigListOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreatePortAclConfigListAsync(const CreatePortAclConfigListRequest& request, const CreatePortAclConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePortAclConfigListRequest&;
    using Resp = CreatePortAclConfigListResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePortAclConfigList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreatePortAclConfigListOutcomeCallable AntiddosClient::CreatePortAclConfigListCallable(const CreatePortAclConfigListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePortAclConfigListOutcome>>();
    CreatePortAclConfigListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreatePortAclConfigListRequest&,
        CreatePortAclConfigListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateProtocolBlockConfigOutcome AntiddosClient::CreateProtocolBlockConfig(const CreateProtocolBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProtocolBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProtocolBlockConfigResponse rsp = CreateProtocolBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProtocolBlockConfigOutcome(rsp);
        else
            return CreateProtocolBlockConfigOutcome(o.GetError());
    }
    else
    {
        return CreateProtocolBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateProtocolBlockConfigAsync(const CreateProtocolBlockConfigRequest& request, const CreateProtocolBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProtocolBlockConfigRequest&;
    using Resp = CreateProtocolBlockConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProtocolBlockConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateProtocolBlockConfigOutcomeCallable AntiddosClient::CreateProtocolBlockConfigCallable(const CreateProtocolBlockConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProtocolBlockConfigOutcome>>();
    CreateProtocolBlockConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateProtocolBlockConfigRequest&,
        CreateProtocolBlockConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateSchedulingDomainOutcome AntiddosClient::CreateSchedulingDomain(const CreateSchedulingDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSchedulingDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSchedulingDomainResponse rsp = CreateSchedulingDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSchedulingDomainOutcome(rsp);
        else
            return CreateSchedulingDomainOutcome(o.GetError());
    }
    else
    {
        return CreateSchedulingDomainOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateSchedulingDomainAsync(const CreateSchedulingDomainRequest& request, const CreateSchedulingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSchedulingDomainRequest&;
    using Resp = CreateSchedulingDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSchedulingDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateSchedulingDomainOutcomeCallable AntiddosClient::CreateSchedulingDomainCallable(const CreateSchedulingDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSchedulingDomainOutcome>>();
    CreateSchedulingDomainAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateSchedulingDomainRequest&,
        CreateSchedulingDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateWaterPrintConfigOutcome AntiddosClient::CreateWaterPrintConfig(const CreateWaterPrintConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWaterPrintConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWaterPrintConfigResponse rsp = CreateWaterPrintConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWaterPrintConfigOutcome(rsp);
        else
            return CreateWaterPrintConfigOutcome(o.GetError());
    }
    else
    {
        return CreateWaterPrintConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateWaterPrintConfigAsync(const CreateWaterPrintConfigRequest& request, const CreateWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWaterPrintConfigRequest&;
    using Resp = CreateWaterPrintConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWaterPrintConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateWaterPrintConfigOutcomeCallable AntiddosClient::CreateWaterPrintConfigCallable(const CreateWaterPrintConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWaterPrintConfigOutcome>>();
    CreateWaterPrintConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateWaterPrintConfigRequest&,
        CreateWaterPrintConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::CreateWaterPrintKeyOutcome AntiddosClient::CreateWaterPrintKey(const CreateWaterPrintKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWaterPrintKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWaterPrintKeyResponse rsp = CreateWaterPrintKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWaterPrintKeyOutcome(rsp);
        else
            return CreateWaterPrintKeyOutcome(o.GetError());
    }
    else
    {
        return CreateWaterPrintKeyOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateWaterPrintKeyAsync(const CreateWaterPrintKeyRequest& request, const CreateWaterPrintKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWaterPrintKeyRequest&;
    using Resp = CreateWaterPrintKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWaterPrintKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateWaterPrintKeyOutcomeCallable AntiddosClient::CreateWaterPrintKeyCallable(const CreateWaterPrintKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWaterPrintKeyOutcome>>();
    CreateWaterPrintKeyAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateWaterPrintKeyRequest&,
        CreateWaterPrintKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DeleteCCLevelPolicyOutcome AntiddosClient::DeleteCCLevelPolicy(const DeleteCCLevelPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCCLevelPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCCLevelPolicyResponse rsp = DeleteCCLevelPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCCLevelPolicyOutcome(rsp);
        else
            return DeleteCCLevelPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteCCLevelPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteCCLevelPolicyAsync(const DeleteCCLevelPolicyRequest& request, const DeleteCCLevelPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCCLevelPolicyRequest&;
    using Resp = DeleteCCLevelPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCCLevelPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DeleteCCLevelPolicyOutcomeCallable AntiddosClient::DeleteCCLevelPolicyCallable(const DeleteCCLevelPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCCLevelPolicyOutcome>>();
    DeleteCCLevelPolicyAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DeleteCCLevelPolicyRequest&,
        DeleteCCLevelPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DeleteCCPrecisionPolicyOutcome AntiddosClient::DeleteCCPrecisionPolicy(const DeleteCCPrecisionPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCCPrecisionPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCCPrecisionPolicyResponse rsp = DeleteCCPrecisionPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCCPrecisionPolicyOutcome(rsp);
        else
            return DeleteCCPrecisionPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteCCPrecisionPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteCCPrecisionPolicyAsync(const DeleteCCPrecisionPolicyRequest& request, const DeleteCCPrecisionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCCPrecisionPolicyRequest&;
    using Resp = DeleteCCPrecisionPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCCPrecisionPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DeleteCCPrecisionPolicyOutcomeCallable AntiddosClient::DeleteCCPrecisionPolicyCallable(const DeleteCCPrecisionPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCCPrecisionPolicyOutcome>>();
    DeleteCCPrecisionPolicyAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DeleteCCPrecisionPolicyRequest&,
        DeleteCCPrecisionPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DeleteCCRequestLimitPolicyOutcome AntiddosClient::DeleteCCRequestLimitPolicy(const DeleteCCRequestLimitPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCCRequestLimitPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCCRequestLimitPolicyResponse rsp = DeleteCCRequestLimitPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCCRequestLimitPolicyOutcome(rsp);
        else
            return DeleteCCRequestLimitPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteCCRequestLimitPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteCCRequestLimitPolicyAsync(const DeleteCCRequestLimitPolicyRequest& request, const DeleteCCRequestLimitPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCCRequestLimitPolicyRequest&;
    using Resp = DeleteCCRequestLimitPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCCRequestLimitPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DeleteCCRequestLimitPolicyOutcomeCallable AntiddosClient::DeleteCCRequestLimitPolicyCallable(const DeleteCCRequestLimitPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCCRequestLimitPolicyOutcome>>();
    DeleteCCRequestLimitPolicyAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DeleteCCRequestLimitPolicyRequest&,
        DeleteCCRequestLimitPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DeleteCCThresholdPolicyOutcome AntiddosClient::DeleteCCThresholdPolicy(const DeleteCCThresholdPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCCThresholdPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCCThresholdPolicyResponse rsp = DeleteCCThresholdPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCCThresholdPolicyOutcome(rsp);
        else
            return DeleteCCThresholdPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteCCThresholdPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteCCThresholdPolicyAsync(const DeleteCCThresholdPolicyRequest& request, const DeleteCCThresholdPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCCThresholdPolicyRequest&;
    using Resp = DeleteCCThresholdPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCCThresholdPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DeleteCCThresholdPolicyOutcomeCallable AntiddosClient::DeleteCCThresholdPolicyCallable(const DeleteCCThresholdPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCCThresholdPolicyOutcome>>();
    DeleteCCThresholdPolicyAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DeleteCCThresholdPolicyRequest&,
        DeleteCCThresholdPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DeleteCcBlackWhiteIpListOutcome AntiddosClient::DeleteCcBlackWhiteIpList(const DeleteCcBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCcBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCcBlackWhiteIpListResponse rsp = DeleteCcBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCcBlackWhiteIpListOutcome(rsp);
        else
            return DeleteCcBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return DeleteCcBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteCcBlackWhiteIpListAsync(const DeleteCcBlackWhiteIpListRequest& request, const DeleteCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCcBlackWhiteIpListRequest&;
    using Resp = DeleteCcBlackWhiteIpListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCcBlackWhiteIpList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DeleteCcBlackWhiteIpListOutcomeCallable AntiddosClient::DeleteCcBlackWhiteIpListCallable(const DeleteCcBlackWhiteIpListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCcBlackWhiteIpListOutcome>>();
    DeleteCcBlackWhiteIpListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DeleteCcBlackWhiteIpListRequest&,
        DeleteCcBlackWhiteIpListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DeleteCcGeoIPBlockConfigOutcome AntiddosClient::DeleteCcGeoIPBlockConfig(const DeleteCcGeoIPBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCcGeoIPBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCcGeoIPBlockConfigResponse rsp = DeleteCcGeoIPBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCcGeoIPBlockConfigOutcome(rsp);
        else
            return DeleteCcGeoIPBlockConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteCcGeoIPBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteCcGeoIPBlockConfigAsync(const DeleteCcGeoIPBlockConfigRequest& request, const DeleteCcGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCcGeoIPBlockConfigRequest&;
    using Resp = DeleteCcGeoIPBlockConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCcGeoIPBlockConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DeleteCcGeoIPBlockConfigOutcomeCallable AntiddosClient::DeleteCcGeoIPBlockConfigCallable(const DeleteCcGeoIPBlockConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCcGeoIPBlockConfigOutcome>>();
    DeleteCcGeoIPBlockConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DeleteCcGeoIPBlockConfigRequest&,
        DeleteCcGeoIPBlockConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DeleteDDoSBlackWhiteIpListOutcome AntiddosClient::DeleteDDoSBlackWhiteIpList(const DeleteDDoSBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDDoSBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDDoSBlackWhiteIpListResponse rsp = DeleteDDoSBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDDoSBlackWhiteIpListOutcome(rsp);
        else
            return DeleteDDoSBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return DeleteDDoSBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteDDoSBlackWhiteIpListAsync(const DeleteDDoSBlackWhiteIpListRequest& request, const DeleteDDoSBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDDoSBlackWhiteIpListRequest&;
    using Resp = DeleteDDoSBlackWhiteIpListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDDoSBlackWhiteIpList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DeleteDDoSBlackWhiteIpListOutcomeCallable AntiddosClient::DeleteDDoSBlackWhiteIpListCallable(const DeleteDDoSBlackWhiteIpListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDDoSBlackWhiteIpListOutcome>>();
    DeleteDDoSBlackWhiteIpListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DeleteDDoSBlackWhiteIpListRequest&,
        DeleteDDoSBlackWhiteIpListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DeleteDDoSGeoIPBlockConfigOutcome AntiddosClient::DeleteDDoSGeoIPBlockConfig(const DeleteDDoSGeoIPBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDDoSGeoIPBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDDoSGeoIPBlockConfigResponse rsp = DeleteDDoSGeoIPBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDDoSGeoIPBlockConfigOutcome(rsp);
        else
            return DeleteDDoSGeoIPBlockConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteDDoSGeoIPBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteDDoSGeoIPBlockConfigAsync(const DeleteDDoSGeoIPBlockConfigRequest& request, const DeleteDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDDoSGeoIPBlockConfigRequest&;
    using Resp = DeleteDDoSGeoIPBlockConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDDoSGeoIPBlockConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DeleteDDoSGeoIPBlockConfigOutcomeCallable AntiddosClient::DeleteDDoSGeoIPBlockConfigCallable(const DeleteDDoSGeoIPBlockConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDDoSGeoIPBlockConfigOutcome>>();
    DeleteDDoSGeoIPBlockConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DeleteDDoSGeoIPBlockConfigRequest&,
        DeleteDDoSGeoIPBlockConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DeleteDDoSSpeedLimitConfigOutcome AntiddosClient::DeleteDDoSSpeedLimitConfig(const DeleteDDoSSpeedLimitConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDDoSSpeedLimitConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDDoSSpeedLimitConfigResponse rsp = DeleteDDoSSpeedLimitConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDDoSSpeedLimitConfigOutcome(rsp);
        else
            return DeleteDDoSSpeedLimitConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteDDoSSpeedLimitConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteDDoSSpeedLimitConfigAsync(const DeleteDDoSSpeedLimitConfigRequest& request, const DeleteDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDDoSSpeedLimitConfigRequest&;
    using Resp = DeleteDDoSSpeedLimitConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDDoSSpeedLimitConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DeleteDDoSSpeedLimitConfigOutcomeCallable AntiddosClient::DeleteDDoSSpeedLimitConfigCallable(const DeleteDDoSSpeedLimitConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDDoSSpeedLimitConfigOutcome>>();
    DeleteDDoSSpeedLimitConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DeleteDDoSSpeedLimitConfigRequest&,
        DeleteDDoSSpeedLimitConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DeletePacketFilterConfigOutcome AntiddosClient::DeletePacketFilterConfig(const DeletePacketFilterConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePacketFilterConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePacketFilterConfigResponse rsp = DeletePacketFilterConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePacketFilterConfigOutcome(rsp);
        else
            return DeletePacketFilterConfigOutcome(o.GetError());
    }
    else
    {
        return DeletePacketFilterConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeletePacketFilterConfigAsync(const DeletePacketFilterConfigRequest& request, const DeletePacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePacketFilterConfigRequest&;
    using Resp = DeletePacketFilterConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePacketFilterConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DeletePacketFilterConfigOutcomeCallable AntiddosClient::DeletePacketFilterConfigCallable(const DeletePacketFilterConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePacketFilterConfigOutcome>>();
    DeletePacketFilterConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DeletePacketFilterConfigRequest&,
        DeletePacketFilterConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DeletePortAclConfigOutcome AntiddosClient::DeletePortAclConfig(const DeletePortAclConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePortAclConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePortAclConfigResponse rsp = DeletePortAclConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePortAclConfigOutcome(rsp);
        else
            return DeletePortAclConfigOutcome(o.GetError());
    }
    else
    {
        return DeletePortAclConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeletePortAclConfigAsync(const DeletePortAclConfigRequest& request, const DeletePortAclConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePortAclConfigRequest&;
    using Resp = DeletePortAclConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePortAclConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DeletePortAclConfigOutcomeCallable AntiddosClient::DeletePortAclConfigCallable(const DeletePortAclConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePortAclConfigOutcome>>();
    DeletePortAclConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DeletePortAclConfigRequest&,
        DeletePortAclConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DeleteWaterPrintConfigOutcome AntiddosClient::DeleteWaterPrintConfig(const DeleteWaterPrintConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWaterPrintConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWaterPrintConfigResponse rsp = DeleteWaterPrintConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWaterPrintConfigOutcome(rsp);
        else
            return DeleteWaterPrintConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteWaterPrintConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteWaterPrintConfigAsync(const DeleteWaterPrintConfigRequest& request, const DeleteWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWaterPrintConfigRequest&;
    using Resp = DeleteWaterPrintConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWaterPrintConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DeleteWaterPrintConfigOutcomeCallable AntiddosClient::DeleteWaterPrintConfigCallable(const DeleteWaterPrintConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWaterPrintConfigOutcome>>();
    DeleteWaterPrintConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DeleteWaterPrintConfigRequest&,
        DeleteWaterPrintConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DeleteWaterPrintKeyOutcome AntiddosClient::DeleteWaterPrintKey(const DeleteWaterPrintKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWaterPrintKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWaterPrintKeyResponse rsp = DeleteWaterPrintKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWaterPrintKeyOutcome(rsp);
        else
            return DeleteWaterPrintKeyOutcome(o.GetError());
    }
    else
    {
        return DeleteWaterPrintKeyOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteWaterPrintKeyAsync(const DeleteWaterPrintKeyRequest& request, const DeleteWaterPrintKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWaterPrintKeyRequest&;
    using Resp = DeleteWaterPrintKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWaterPrintKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DeleteWaterPrintKeyOutcomeCallable AntiddosClient::DeleteWaterPrintKeyCallable(const DeleteWaterPrintKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWaterPrintKeyOutcome>>();
    DeleteWaterPrintKeyAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DeleteWaterPrintKeyRequest&,
        DeleteWaterPrintKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeBGPIPL7RulesOutcome AntiddosClient::DescribeBGPIPL7Rules(const DescribeBGPIPL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBGPIPL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBGPIPL7RulesResponse rsp = DescribeBGPIPL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBGPIPL7RulesOutcome(rsp);
        else
            return DescribeBGPIPL7RulesOutcome(o.GetError());
    }
    else
    {
        return DescribeBGPIPL7RulesOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeBGPIPL7RulesAsync(const DescribeBGPIPL7RulesRequest& request, const DescribeBGPIPL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBGPIPL7RulesRequest&;
    using Resp = DescribeBGPIPL7RulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBGPIPL7Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeBGPIPL7RulesOutcomeCallable AntiddosClient::DescribeBGPIPL7RulesCallable(const DescribeBGPIPL7RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBGPIPL7RulesOutcome>>();
    DescribeBGPIPL7RulesAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeBGPIPL7RulesRequest&,
        DescribeBGPIPL7RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeBasicDeviceStatusOutcome AntiddosClient::DescribeBasicDeviceStatus(const DescribeBasicDeviceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBasicDeviceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBasicDeviceStatusResponse rsp = DescribeBasicDeviceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBasicDeviceStatusOutcome(rsp);
        else
            return DescribeBasicDeviceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeBasicDeviceStatusOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeBasicDeviceStatusAsync(const DescribeBasicDeviceStatusRequest& request, const DescribeBasicDeviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBasicDeviceStatusRequest&;
    using Resp = DescribeBasicDeviceStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBasicDeviceStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeBasicDeviceStatusOutcomeCallable AntiddosClient::DescribeBasicDeviceStatusCallable(const DescribeBasicDeviceStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBasicDeviceStatusOutcome>>();
    DescribeBasicDeviceStatusAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeBasicDeviceStatusRequest&,
        DescribeBasicDeviceStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeBgpBizTrendOutcome AntiddosClient::DescribeBgpBizTrend(const DescribeBgpBizTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBgpBizTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBgpBizTrendResponse rsp = DescribeBgpBizTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBgpBizTrendOutcome(rsp);
        else
            return DescribeBgpBizTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeBgpBizTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeBgpBizTrendAsync(const DescribeBgpBizTrendRequest& request, const DescribeBgpBizTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBgpBizTrendRequest&;
    using Resp = DescribeBgpBizTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBgpBizTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeBgpBizTrendOutcomeCallable AntiddosClient::DescribeBgpBizTrendCallable(const DescribeBgpBizTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBgpBizTrendOutcome>>();
    DescribeBgpBizTrendAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeBgpBizTrendRequest&,
        DescribeBgpBizTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeBgpInstancesOutcome AntiddosClient::DescribeBgpInstances(const DescribeBgpInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBgpInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBgpInstancesResponse rsp = DescribeBgpInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBgpInstancesOutcome(rsp);
        else
            return DescribeBgpInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeBgpInstancesOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeBgpInstancesAsync(const DescribeBgpInstancesRequest& request, const DescribeBgpInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBgpInstancesRequest&;
    using Resp = DescribeBgpInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBgpInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeBgpInstancesOutcomeCallable AntiddosClient::DescribeBgpInstancesCallable(const DescribeBgpInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBgpInstancesOutcome>>();
    DescribeBgpInstancesAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeBgpInstancesRequest&,
        DescribeBgpInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeBizHttpStatusOutcome AntiddosClient::DescribeBizHttpStatus(const DescribeBizHttpStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBizHttpStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBizHttpStatusResponse rsp = DescribeBizHttpStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBizHttpStatusOutcome(rsp);
        else
            return DescribeBizHttpStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeBizHttpStatusOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeBizHttpStatusAsync(const DescribeBizHttpStatusRequest& request, const DescribeBizHttpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBizHttpStatusRequest&;
    using Resp = DescribeBizHttpStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBizHttpStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeBizHttpStatusOutcomeCallable AntiddosClient::DescribeBizHttpStatusCallable(const DescribeBizHttpStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBizHttpStatusOutcome>>();
    DescribeBizHttpStatusAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeBizHttpStatusRequest&,
        DescribeBizHttpStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeBizMonitorTrendOutcome AntiddosClient::DescribeBizMonitorTrend(const DescribeBizMonitorTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBizMonitorTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBizMonitorTrendResponse rsp = DescribeBizMonitorTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBizMonitorTrendOutcome(rsp);
        else
            return DescribeBizMonitorTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeBizMonitorTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeBizMonitorTrendAsync(const DescribeBizMonitorTrendRequest& request, const DescribeBizMonitorTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBizMonitorTrendRequest&;
    using Resp = DescribeBizMonitorTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBizMonitorTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeBizMonitorTrendOutcomeCallable AntiddosClient::DescribeBizMonitorTrendCallable(const DescribeBizMonitorTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBizMonitorTrendOutcome>>();
    DescribeBizMonitorTrendAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeBizMonitorTrendRequest&,
        DescribeBizMonitorTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeBizTrendOutcome AntiddosClient::DescribeBizTrend(const DescribeBizTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBizTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBizTrendResponse rsp = DescribeBizTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBizTrendOutcome(rsp);
        else
            return DescribeBizTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeBizTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeBizTrendAsync(const DescribeBizTrendRequest& request, const DescribeBizTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBizTrendRequest&;
    using Resp = DescribeBizTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBizTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeBizTrendOutcomeCallable AntiddosClient::DescribeBizTrendCallable(const DescribeBizTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBizTrendOutcome>>();
    DescribeBizTrendAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeBizTrendRequest&,
        DescribeBizTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeCCLevelListOutcome AntiddosClient::DescribeCCLevelList(const DescribeCCLevelListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCLevelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCLevelListResponse rsp = DescribeCCLevelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCLevelListOutcome(rsp);
        else
            return DescribeCCLevelListOutcome(o.GetError());
    }
    else
    {
        return DescribeCCLevelListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCCLevelListAsync(const DescribeCCLevelListRequest& request, const DescribeCCLevelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCCLevelListRequest&;
    using Resp = DescribeCCLevelListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCLevelList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeCCLevelListOutcomeCallable AntiddosClient::DescribeCCLevelListCallable(const DescribeCCLevelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCLevelListOutcome>>();
    DescribeCCLevelListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeCCLevelListRequest&,
        DescribeCCLevelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeCCLevelPolicyOutcome AntiddosClient::DescribeCCLevelPolicy(const DescribeCCLevelPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCLevelPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCLevelPolicyResponse rsp = DescribeCCLevelPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCLevelPolicyOutcome(rsp);
        else
            return DescribeCCLevelPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeCCLevelPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCCLevelPolicyAsync(const DescribeCCLevelPolicyRequest& request, const DescribeCCLevelPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCCLevelPolicyRequest&;
    using Resp = DescribeCCLevelPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCLevelPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeCCLevelPolicyOutcomeCallable AntiddosClient::DescribeCCLevelPolicyCallable(const DescribeCCLevelPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCLevelPolicyOutcome>>();
    DescribeCCLevelPolicyAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeCCLevelPolicyRequest&,
        DescribeCCLevelPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeCCPrecisionPlyListOutcome AntiddosClient::DescribeCCPrecisionPlyList(const DescribeCCPrecisionPlyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCPrecisionPlyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCPrecisionPlyListResponse rsp = DescribeCCPrecisionPlyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCPrecisionPlyListOutcome(rsp);
        else
            return DescribeCCPrecisionPlyListOutcome(o.GetError());
    }
    else
    {
        return DescribeCCPrecisionPlyListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCCPrecisionPlyListAsync(const DescribeCCPrecisionPlyListRequest& request, const DescribeCCPrecisionPlyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCCPrecisionPlyListRequest&;
    using Resp = DescribeCCPrecisionPlyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCPrecisionPlyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeCCPrecisionPlyListOutcomeCallable AntiddosClient::DescribeCCPrecisionPlyListCallable(const DescribeCCPrecisionPlyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCPrecisionPlyListOutcome>>();
    DescribeCCPrecisionPlyListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeCCPrecisionPlyListRequest&,
        DescribeCCPrecisionPlyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeCCReqLimitPolicyListOutcome AntiddosClient::DescribeCCReqLimitPolicyList(const DescribeCCReqLimitPolicyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCReqLimitPolicyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCReqLimitPolicyListResponse rsp = DescribeCCReqLimitPolicyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCReqLimitPolicyListOutcome(rsp);
        else
            return DescribeCCReqLimitPolicyListOutcome(o.GetError());
    }
    else
    {
        return DescribeCCReqLimitPolicyListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCCReqLimitPolicyListAsync(const DescribeCCReqLimitPolicyListRequest& request, const DescribeCCReqLimitPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCCReqLimitPolicyListRequest&;
    using Resp = DescribeCCReqLimitPolicyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCReqLimitPolicyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeCCReqLimitPolicyListOutcomeCallable AntiddosClient::DescribeCCReqLimitPolicyListCallable(const DescribeCCReqLimitPolicyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCReqLimitPolicyListOutcome>>();
    DescribeCCReqLimitPolicyListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeCCReqLimitPolicyListRequest&,
        DescribeCCReqLimitPolicyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeCCThresholdListOutcome AntiddosClient::DescribeCCThresholdList(const DescribeCCThresholdListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCThresholdList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCThresholdListResponse rsp = DescribeCCThresholdListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCThresholdListOutcome(rsp);
        else
            return DescribeCCThresholdListOutcome(o.GetError());
    }
    else
    {
        return DescribeCCThresholdListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCCThresholdListAsync(const DescribeCCThresholdListRequest& request, const DescribeCCThresholdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCCThresholdListRequest&;
    using Resp = DescribeCCThresholdListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCThresholdList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeCCThresholdListOutcomeCallable AntiddosClient::DescribeCCThresholdListCallable(const DescribeCCThresholdListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCThresholdListOutcome>>();
    DescribeCCThresholdListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeCCThresholdListRequest&,
        DescribeCCThresholdListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeCCTrendOutcome AntiddosClient::DescribeCCTrend(const DescribeCCTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCTrendResponse rsp = DescribeCCTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCTrendOutcome(rsp);
        else
            return DescribeCCTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeCCTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCCTrendAsync(const DescribeCCTrendRequest& request, const DescribeCCTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCCTrendRequest&;
    using Resp = DescribeCCTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeCCTrendOutcomeCallable AntiddosClient::DescribeCCTrendCallable(const DescribeCCTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCTrendOutcome>>();
    DescribeCCTrendAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeCCTrendRequest&,
        DescribeCCTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeCcBlackWhiteIpListOutcome AntiddosClient::DescribeCcBlackWhiteIpList(const DescribeCcBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcBlackWhiteIpListResponse rsp = DescribeCcBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcBlackWhiteIpListOutcome(rsp);
        else
            return DescribeCcBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeCcBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCcBlackWhiteIpListAsync(const DescribeCcBlackWhiteIpListRequest& request, const DescribeCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCcBlackWhiteIpListRequest&;
    using Resp = DescribeCcBlackWhiteIpListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCcBlackWhiteIpList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeCcBlackWhiteIpListOutcomeCallable AntiddosClient::DescribeCcBlackWhiteIpListCallable(const DescribeCcBlackWhiteIpListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCcBlackWhiteIpListOutcome>>();
    DescribeCcBlackWhiteIpListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeCcBlackWhiteIpListRequest&,
        DescribeCcBlackWhiteIpListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeCcGeoIPBlockConfigListOutcome AntiddosClient::DescribeCcGeoIPBlockConfigList(const DescribeCcGeoIPBlockConfigListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcGeoIPBlockConfigList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcGeoIPBlockConfigListResponse rsp = DescribeCcGeoIPBlockConfigListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcGeoIPBlockConfigListOutcome(rsp);
        else
            return DescribeCcGeoIPBlockConfigListOutcome(o.GetError());
    }
    else
    {
        return DescribeCcGeoIPBlockConfigListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeCcGeoIPBlockConfigListAsync(const DescribeCcGeoIPBlockConfigListRequest& request, const DescribeCcGeoIPBlockConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCcGeoIPBlockConfigListRequest&;
    using Resp = DescribeCcGeoIPBlockConfigListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCcGeoIPBlockConfigList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeCcGeoIPBlockConfigListOutcomeCallable AntiddosClient::DescribeCcGeoIPBlockConfigListCallable(const DescribeCcGeoIPBlockConfigListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCcGeoIPBlockConfigListOutcome>>();
    DescribeCcGeoIPBlockConfigListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeCcGeoIPBlockConfigListRequest&,
        DescribeCcGeoIPBlockConfigListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeDDoSBlackWhiteIpListOutcome AntiddosClient::DescribeDDoSBlackWhiteIpList(const DescribeDDoSBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSBlackWhiteIpListResponse rsp = DescribeDDoSBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSBlackWhiteIpListOutcome(rsp);
        else
            return DescribeDDoSBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeDDoSBlackWhiteIpListAsync(const DescribeDDoSBlackWhiteIpListRequest& request, const DescribeDDoSBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSBlackWhiteIpListRequest&;
    using Resp = DescribeDDoSBlackWhiteIpListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSBlackWhiteIpList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeDDoSBlackWhiteIpListOutcomeCallable AntiddosClient::DescribeDDoSBlackWhiteIpListCallable(const DescribeDDoSBlackWhiteIpListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSBlackWhiteIpListOutcome>>();
    DescribeDDoSBlackWhiteIpListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeDDoSBlackWhiteIpListRequest&,
        DescribeDDoSBlackWhiteIpListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeDDoSConnectLimitListOutcome AntiddosClient::DescribeDDoSConnectLimitList(const DescribeDDoSConnectLimitListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSConnectLimitList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSConnectLimitListResponse rsp = DescribeDDoSConnectLimitListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSConnectLimitListOutcome(rsp);
        else
            return DescribeDDoSConnectLimitListOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSConnectLimitListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeDDoSConnectLimitListAsync(const DescribeDDoSConnectLimitListRequest& request, const DescribeDDoSConnectLimitListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSConnectLimitListRequest&;
    using Resp = DescribeDDoSConnectLimitListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSConnectLimitList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeDDoSConnectLimitListOutcomeCallable AntiddosClient::DescribeDDoSConnectLimitListCallable(const DescribeDDoSConnectLimitListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSConnectLimitListOutcome>>();
    DescribeDDoSConnectLimitListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeDDoSConnectLimitListRequest&,
        DescribeDDoSConnectLimitListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeDDoSTrendOutcome AntiddosClient::DescribeDDoSTrend(const DescribeDDoSTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSTrendResponse rsp = DescribeDDoSTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSTrendOutcome(rsp);
        else
            return DescribeDDoSTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeDDoSTrendAsync(const DescribeDDoSTrendRequest& request, const DescribeDDoSTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSTrendRequest&;
    using Resp = DescribeDDoSTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeDDoSTrendOutcomeCallable AntiddosClient::DescribeDDoSTrendCallable(const DescribeDDoSTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSTrendOutcome>>();
    DescribeDDoSTrendAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeDDoSTrendRequest&,
        DescribeDDoSTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeDefaultAlarmThresholdOutcome AntiddosClient::DescribeDefaultAlarmThreshold(const DescribeDefaultAlarmThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefaultAlarmThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefaultAlarmThresholdResponse rsp = DescribeDefaultAlarmThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefaultAlarmThresholdOutcome(rsp);
        else
            return DescribeDefaultAlarmThresholdOutcome(o.GetError());
    }
    else
    {
        return DescribeDefaultAlarmThresholdOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeDefaultAlarmThresholdAsync(const DescribeDefaultAlarmThresholdRequest& request, const DescribeDefaultAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDefaultAlarmThresholdRequest&;
    using Resp = DescribeDefaultAlarmThresholdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDefaultAlarmThreshold", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeDefaultAlarmThresholdOutcomeCallable AntiddosClient::DescribeDefaultAlarmThresholdCallable(const DescribeDefaultAlarmThresholdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDefaultAlarmThresholdOutcome>>();
    DescribeDefaultAlarmThresholdAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeDefaultAlarmThresholdRequest&,
        DescribeDefaultAlarmThresholdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeIpBlockListOutcome AntiddosClient::DescribeIpBlockList(const DescribeIpBlockListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpBlockList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpBlockListResponse rsp = DescribeIpBlockListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpBlockListOutcome(rsp);
        else
            return DescribeIpBlockListOutcome(o.GetError());
    }
    else
    {
        return DescribeIpBlockListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeIpBlockListAsync(const DescribeIpBlockListRequest& request, const DescribeIpBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIpBlockListRequest&;
    using Resp = DescribeIpBlockListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIpBlockList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeIpBlockListOutcomeCallable AntiddosClient::DescribeIpBlockListCallable(const DescribeIpBlockListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIpBlockListOutcome>>();
    DescribeIpBlockListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeIpBlockListRequest&,
        DescribeIpBlockListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeL7RulesBySSLCertIdOutcome AntiddosClient::DescribeL7RulesBySSLCertId(const DescribeL7RulesBySSLCertIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL7RulesBySSLCertId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL7RulesBySSLCertIdResponse rsp = DescribeL7RulesBySSLCertIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL7RulesBySSLCertIdOutcome(rsp);
        else
            return DescribeL7RulesBySSLCertIdOutcome(o.GetError());
    }
    else
    {
        return DescribeL7RulesBySSLCertIdOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeL7RulesBySSLCertIdAsync(const DescribeL7RulesBySSLCertIdRequest& request, const DescribeL7RulesBySSLCertIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeL7RulesBySSLCertIdRequest&;
    using Resp = DescribeL7RulesBySSLCertIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeL7RulesBySSLCertId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeL7RulesBySSLCertIdOutcomeCallable AntiddosClient::DescribeL7RulesBySSLCertIdCallable(const DescribeL7RulesBySSLCertIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeL7RulesBySSLCertIdOutcome>>();
    DescribeL7RulesBySSLCertIdAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeL7RulesBySSLCertIdRequest&,
        DescribeL7RulesBySSLCertIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeListBGPIPInstancesOutcome AntiddosClient::DescribeListBGPIPInstances(const DescribeListBGPIPInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListBGPIPInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListBGPIPInstancesResponse rsp = DescribeListBGPIPInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListBGPIPInstancesOutcome(rsp);
        else
            return DescribeListBGPIPInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeListBGPIPInstancesOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListBGPIPInstancesAsync(const DescribeListBGPIPInstancesRequest& request, const DescribeListBGPIPInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListBGPIPInstancesRequest&;
    using Resp = DescribeListBGPIPInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListBGPIPInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeListBGPIPInstancesOutcomeCallable AntiddosClient::DescribeListBGPIPInstancesCallable(const DescribeListBGPIPInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListBGPIPInstancesOutcome>>();
    DescribeListBGPIPInstancesAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeListBGPIPInstancesRequest&,
        DescribeListBGPIPInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeListBGPInstancesOutcome AntiddosClient::DescribeListBGPInstances(const DescribeListBGPInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListBGPInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListBGPInstancesResponse rsp = DescribeListBGPInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListBGPInstancesOutcome(rsp);
        else
            return DescribeListBGPInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeListBGPInstancesOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListBGPInstancesAsync(const DescribeListBGPInstancesRequest& request, const DescribeListBGPInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListBGPInstancesRequest&;
    using Resp = DescribeListBGPInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListBGPInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeListBGPInstancesOutcomeCallable AntiddosClient::DescribeListBGPInstancesCallable(const DescribeListBGPInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListBGPInstancesOutcome>>();
    DescribeListBGPInstancesAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeListBGPInstancesRequest&,
        DescribeListBGPInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeListBlackWhiteIpListOutcome AntiddosClient::DescribeListBlackWhiteIpList(const DescribeListBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListBlackWhiteIpListResponse rsp = DescribeListBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListBlackWhiteIpListOutcome(rsp);
        else
            return DescribeListBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeListBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListBlackWhiteIpListAsync(const DescribeListBlackWhiteIpListRequest& request, const DescribeListBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListBlackWhiteIpListRequest&;
    using Resp = DescribeListBlackWhiteIpListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListBlackWhiteIpList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeListBlackWhiteIpListOutcomeCallable AntiddosClient::DescribeListBlackWhiteIpListCallable(const DescribeListBlackWhiteIpListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListBlackWhiteIpListOutcome>>();
    DescribeListBlackWhiteIpListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeListBlackWhiteIpListRequest&,
        DescribeListBlackWhiteIpListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeListDDoSAIOutcome AntiddosClient::DescribeListDDoSAI(const DescribeListDDoSAIRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListDDoSAI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListDDoSAIResponse rsp = DescribeListDDoSAIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListDDoSAIOutcome(rsp);
        else
            return DescribeListDDoSAIOutcome(o.GetError());
    }
    else
    {
        return DescribeListDDoSAIOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListDDoSAIAsync(const DescribeListDDoSAIRequest& request, const DescribeListDDoSAIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListDDoSAIRequest&;
    using Resp = DescribeListDDoSAIResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListDDoSAI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeListDDoSAIOutcomeCallable AntiddosClient::DescribeListDDoSAICallable(const DescribeListDDoSAIRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListDDoSAIOutcome>>();
    DescribeListDDoSAIAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeListDDoSAIRequest&,
        DescribeListDDoSAIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeListDDoSGeoIPBlockConfigOutcome AntiddosClient::DescribeListDDoSGeoIPBlockConfig(const DescribeListDDoSGeoIPBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListDDoSGeoIPBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListDDoSGeoIPBlockConfigResponse rsp = DescribeListDDoSGeoIPBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListDDoSGeoIPBlockConfigOutcome(rsp);
        else
            return DescribeListDDoSGeoIPBlockConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeListDDoSGeoIPBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListDDoSGeoIPBlockConfigAsync(const DescribeListDDoSGeoIPBlockConfigRequest& request, const DescribeListDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListDDoSGeoIPBlockConfigRequest&;
    using Resp = DescribeListDDoSGeoIPBlockConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListDDoSGeoIPBlockConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeListDDoSGeoIPBlockConfigOutcomeCallable AntiddosClient::DescribeListDDoSGeoIPBlockConfigCallable(const DescribeListDDoSGeoIPBlockConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListDDoSGeoIPBlockConfigOutcome>>();
    DescribeListDDoSGeoIPBlockConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeListDDoSGeoIPBlockConfigRequest&,
        DescribeListDDoSGeoIPBlockConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeListDDoSSpeedLimitConfigOutcome AntiddosClient::DescribeListDDoSSpeedLimitConfig(const DescribeListDDoSSpeedLimitConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListDDoSSpeedLimitConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListDDoSSpeedLimitConfigResponse rsp = DescribeListDDoSSpeedLimitConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListDDoSSpeedLimitConfigOutcome(rsp);
        else
            return DescribeListDDoSSpeedLimitConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeListDDoSSpeedLimitConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListDDoSSpeedLimitConfigAsync(const DescribeListDDoSSpeedLimitConfigRequest& request, const DescribeListDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListDDoSSpeedLimitConfigRequest&;
    using Resp = DescribeListDDoSSpeedLimitConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListDDoSSpeedLimitConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeListDDoSSpeedLimitConfigOutcomeCallable AntiddosClient::DescribeListDDoSSpeedLimitConfigCallable(const DescribeListDDoSSpeedLimitConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListDDoSSpeedLimitConfigOutcome>>();
    DescribeListDDoSSpeedLimitConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeListDDoSSpeedLimitConfigRequest&,
        DescribeListDDoSSpeedLimitConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeListIPAlarmConfigOutcome AntiddosClient::DescribeListIPAlarmConfig(const DescribeListIPAlarmConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListIPAlarmConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListIPAlarmConfigResponse rsp = DescribeListIPAlarmConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListIPAlarmConfigOutcome(rsp);
        else
            return DescribeListIPAlarmConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeListIPAlarmConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListIPAlarmConfigAsync(const DescribeListIPAlarmConfigRequest& request, const DescribeListIPAlarmConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListIPAlarmConfigRequest&;
    using Resp = DescribeListIPAlarmConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListIPAlarmConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeListIPAlarmConfigOutcomeCallable AntiddosClient::DescribeListIPAlarmConfigCallable(const DescribeListIPAlarmConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListIPAlarmConfigOutcome>>();
    DescribeListIPAlarmConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeListIPAlarmConfigRequest&,
        DescribeListIPAlarmConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeListListenerOutcome AntiddosClient::DescribeListListener(const DescribeListListenerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListListenerResponse rsp = DescribeListListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListListenerOutcome(rsp);
        else
            return DescribeListListenerOutcome(o.GetError());
    }
    else
    {
        return DescribeListListenerOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListListenerAsync(const DescribeListListenerRequest& request, const DescribeListListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListListenerRequest&;
    using Resp = DescribeListListenerResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListListener", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeListListenerOutcomeCallable AntiddosClient::DescribeListListenerCallable(const DescribeListListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListListenerOutcome>>();
    DescribeListListenerAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeListListenerRequest&,
        DescribeListListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeListPacketFilterConfigOutcome AntiddosClient::DescribeListPacketFilterConfig(const DescribeListPacketFilterConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListPacketFilterConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListPacketFilterConfigResponse rsp = DescribeListPacketFilterConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListPacketFilterConfigOutcome(rsp);
        else
            return DescribeListPacketFilterConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeListPacketFilterConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListPacketFilterConfigAsync(const DescribeListPacketFilterConfigRequest& request, const DescribeListPacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListPacketFilterConfigRequest&;
    using Resp = DescribeListPacketFilterConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListPacketFilterConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeListPacketFilterConfigOutcomeCallable AntiddosClient::DescribeListPacketFilterConfigCallable(const DescribeListPacketFilterConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListPacketFilterConfigOutcome>>();
    DescribeListPacketFilterConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeListPacketFilterConfigRequest&,
        DescribeListPacketFilterConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeListPortAclListOutcome AntiddosClient::DescribeListPortAclList(const DescribeListPortAclListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListPortAclList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListPortAclListResponse rsp = DescribeListPortAclListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListPortAclListOutcome(rsp);
        else
            return DescribeListPortAclListOutcome(o.GetError());
    }
    else
    {
        return DescribeListPortAclListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListPortAclListAsync(const DescribeListPortAclListRequest& request, const DescribeListPortAclListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListPortAclListRequest&;
    using Resp = DescribeListPortAclListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListPortAclList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeListPortAclListOutcomeCallable AntiddosClient::DescribeListPortAclListCallable(const DescribeListPortAclListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListPortAclListOutcome>>();
    DescribeListPortAclListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeListPortAclListRequest&,
        DescribeListPortAclListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeListProtocolBlockConfigOutcome AntiddosClient::DescribeListProtocolBlockConfig(const DescribeListProtocolBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListProtocolBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListProtocolBlockConfigResponse rsp = DescribeListProtocolBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListProtocolBlockConfigOutcome(rsp);
        else
            return DescribeListProtocolBlockConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeListProtocolBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListProtocolBlockConfigAsync(const DescribeListProtocolBlockConfigRequest& request, const DescribeListProtocolBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListProtocolBlockConfigRequest&;
    using Resp = DescribeListProtocolBlockConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListProtocolBlockConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeListProtocolBlockConfigOutcomeCallable AntiddosClient::DescribeListProtocolBlockConfigCallable(const DescribeListProtocolBlockConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListProtocolBlockConfigOutcome>>();
    DescribeListProtocolBlockConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeListProtocolBlockConfigRequest&,
        DescribeListProtocolBlockConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeListSchedulingDomainOutcome AntiddosClient::DescribeListSchedulingDomain(const DescribeListSchedulingDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListSchedulingDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListSchedulingDomainResponse rsp = DescribeListSchedulingDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListSchedulingDomainOutcome(rsp);
        else
            return DescribeListSchedulingDomainOutcome(o.GetError());
    }
    else
    {
        return DescribeListSchedulingDomainOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListSchedulingDomainAsync(const DescribeListSchedulingDomainRequest& request, const DescribeListSchedulingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListSchedulingDomainRequest&;
    using Resp = DescribeListSchedulingDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListSchedulingDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeListSchedulingDomainOutcomeCallable AntiddosClient::DescribeListSchedulingDomainCallable(const DescribeListSchedulingDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListSchedulingDomainOutcome>>();
    DescribeListSchedulingDomainAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeListSchedulingDomainRequest&,
        DescribeListSchedulingDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeListWaterPrintConfigOutcome AntiddosClient::DescribeListWaterPrintConfig(const DescribeListWaterPrintConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListWaterPrintConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListWaterPrintConfigResponse rsp = DescribeListWaterPrintConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListWaterPrintConfigOutcome(rsp);
        else
            return DescribeListWaterPrintConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeListWaterPrintConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeListWaterPrintConfigAsync(const DescribeListWaterPrintConfigRequest& request, const DescribeListWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListWaterPrintConfigRequest&;
    using Resp = DescribeListWaterPrintConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListWaterPrintConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeListWaterPrintConfigOutcomeCallable AntiddosClient::DescribeListWaterPrintConfigCallable(const DescribeListWaterPrintConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListWaterPrintConfigOutcome>>();
    DescribeListWaterPrintConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeListWaterPrintConfigRequest&,
        DescribeListWaterPrintConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeNewL7RulesOutcome AntiddosClient::DescribeNewL7Rules(const DescribeNewL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNewL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNewL7RulesResponse rsp = DescribeNewL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNewL7RulesOutcome(rsp);
        else
            return DescribeNewL7RulesOutcome(o.GetError());
    }
    else
    {
        return DescribeNewL7RulesOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeNewL7RulesAsync(const DescribeNewL7RulesRequest& request, const DescribeNewL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNewL7RulesRequest&;
    using Resp = DescribeNewL7RulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNewL7Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeNewL7RulesOutcomeCallable AntiddosClient::DescribeNewL7RulesCallable(const DescribeNewL7RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNewL7RulesOutcome>>();
    DescribeNewL7RulesAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeNewL7RulesRequest&,
        DescribeNewL7RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeNewL7RulesErrHealthOutcome AntiddosClient::DescribeNewL7RulesErrHealth(const DescribeNewL7RulesErrHealthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNewL7RulesErrHealth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNewL7RulesErrHealthResponse rsp = DescribeNewL7RulesErrHealthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNewL7RulesErrHealthOutcome(rsp);
        else
            return DescribeNewL7RulesErrHealthOutcome(o.GetError());
    }
    else
    {
        return DescribeNewL7RulesErrHealthOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeNewL7RulesErrHealthAsync(const DescribeNewL7RulesErrHealthRequest& request, const DescribeNewL7RulesErrHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNewL7RulesErrHealthRequest&;
    using Resp = DescribeNewL7RulesErrHealthResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNewL7RulesErrHealth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeNewL7RulesErrHealthOutcomeCallable AntiddosClient::DescribeNewL7RulesErrHealthCallable(const DescribeNewL7RulesErrHealthRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNewL7RulesErrHealthOutcome>>();
    DescribeNewL7RulesErrHealthAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeNewL7RulesErrHealthRequest&,
        DescribeNewL7RulesErrHealthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeOverviewAttackTrendOutcome AntiddosClient::DescribeOverviewAttackTrend(const DescribeOverviewAttackTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewAttackTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewAttackTrendResponse rsp = DescribeOverviewAttackTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewAttackTrendOutcome(rsp);
        else
            return DescribeOverviewAttackTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewAttackTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeOverviewAttackTrendAsync(const DescribeOverviewAttackTrendRequest& request, const DescribeOverviewAttackTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOverviewAttackTrendRequest&;
    using Resp = DescribeOverviewAttackTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOverviewAttackTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeOverviewAttackTrendOutcomeCallable AntiddosClient::DescribeOverviewAttackTrendCallable(const DescribeOverviewAttackTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOverviewAttackTrendOutcome>>();
    DescribeOverviewAttackTrendAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeOverviewAttackTrendRequest&,
        DescribeOverviewAttackTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeOverviewCCTrendOutcome AntiddosClient::DescribeOverviewCCTrend(const DescribeOverviewCCTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewCCTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewCCTrendResponse rsp = DescribeOverviewCCTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewCCTrendOutcome(rsp);
        else
            return DescribeOverviewCCTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewCCTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeOverviewCCTrendAsync(const DescribeOverviewCCTrendRequest& request, const DescribeOverviewCCTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOverviewCCTrendRequest&;
    using Resp = DescribeOverviewCCTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOverviewCCTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeOverviewCCTrendOutcomeCallable AntiddosClient::DescribeOverviewCCTrendCallable(const DescribeOverviewCCTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOverviewCCTrendOutcome>>();
    DescribeOverviewCCTrendAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeOverviewCCTrendRequest&,
        DescribeOverviewCCTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeOverviewDDoSEventListOutcome AntiddosClient::DescribeOverviewDDoSEventList(const DescribeOverviewDDoSEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewDDoSEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewDDoSEventListResponse rsp = DescribeOverviewDDoSEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewDDoSEventListOutcome(rsp);
        else
            return DescribeOverviewDDoSEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewDDoSEventListOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeOverviewDDoSEventListAsync(const DescribeOverviewDDoSEventListRequest& request, const DescribeOverviewDDoSEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOverviewDDoSEventListRequest&;
    using Resp = DescribeOverviewDDoSEventListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOverviewDDoSEventList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeOverviewDDoSEventListOutcomeCallable AntiddosClient::DescribeOverviewDDoSEventListCallable(const DescribeOverviewDDoSEventListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOverviewDDoSEventListOutcome>>();
    DescribeOverviewDDoSEventListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeOverviewDDoSEventListRequest&,
        DescribeOverviewDDoSEventListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeOverviewDDoSTrendOutcome AntiddosClient::DescribeOverviewDDoSTrend(const DescribeOverviewDDoSTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewDDoSTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewDDoSTrendResponse rsp = DescribeOverviewDDoSTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewDDoSTrendOutcome(rsp);
        else
            return DescribeOverviewDDoSTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewDDoSTrendOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeOverviewDDoSTrendAsync(const DescribeOverviewDDoSTrendRequest& request, const DescribeOverviewDDoSTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOverviewDDoSTrendRequest&;
    using Resp = DescribeOverviewDDoSTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOverviewDDoSTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeOverviewDDoSTrendOutcomeCallable AntiddosClient::DescribeOverviewDDoSTrendCallable(const DescribeOverviewDDoSTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOverviewDDoSTrendOutcome>>();
    DescribeOverviewDDoSTrendAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeOverviewDDoSTrendRequest&,
        DescribeOverviewDDoSTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeOverviewIndexOutcome AntiddosClient::DescribeOverviewIndex(const DescribeOverviewIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewIndexResponse rsp = DescribeOverviewIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewIndexOutcome(rsp);
        else
            return DescribeOverviewIndexOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewIndexOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeOverviewIndexAsync(const DescribeOverviewIndexRequest& request, const DescribeOverviewIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOverviewIndexRequest&;
    using Resp = DescribeOverviewIndexResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOverviewIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeOverviewIndexOutcomeCallable AntiddosClient::DescribeOverviewIndexCallable(const DescribeOverviewIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOverviewIndexOutcome>>();
    DescribeOverviewIndexAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeOverviewIndexRequest&,
        DescribeOverviewIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribePendingRiskInfoOutcome AntiddosClient::DescribePendingRiskInfo(const DescribePendingRiskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePendingRiskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePendingRiskInfoResponse rsp = DescribePendingRiskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePendingRiskInfoOutcome(rsp);
        else
            return DescribePendingRiskInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePendingRiskInfoOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribePendingRiskInfoAsync(const DescribePendingRiskInfoRequest& request, const DescribePendingRiskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePendingRiskInfoRequest&;
    using Resp = DescribePendingRiskInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePendingRiskInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribePendingRiskInfoOutcomeCallable AntiddosClient::DescribePendingRiskInfoCallable(const DescribePendingRiskInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePendingRiskInfoOutcome>>();
    DescribePendingRiskInfoAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribePendingRiskInfoRequest&,
        DescribePendingRiskInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DisassociateDDoSEipAddressOutcome AntiddosClient::DisassociateDDoSEipAddress(const DisassociateDDoSEipAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateDDoSEipAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateDDoSEipAddressResponse rsp = DisassociateDDoSEipAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateDDoSEipAddressOutcome(rsp);
        else
            return DisassociateDDoSEipAddressOutcome(o.GetError());
    }
    else
    {
        return DisassociateDDoSEipAddressOutcome(outcome.GetError());
    }
}

void AntiddosClient::DisassociateDDoSEipAddressAsync(const DisassociateDDoSEipAddressRequest& request, const DisassociateDDoSEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateDDoSEipAddressRequest&;
    using Resp = DisassociateDDoSEipAddressResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateDDoSEipAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DisassociateDDoSEipAddressOutcomeCallable AntiddosClient::DisassociateDDoSEipAddressCallable(const DisassociateDDoSEipAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateDDoSEipAddressOutcome>>();
    DisassociateDDoSEipAddressAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DisassociateDDoSEipAddressRequest&,
        DisassociateDDoSEipAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyCCLevelPolicyOutcome AntiddosClient::ModifyCCLevelPolicy(const ModifyCCLevelPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCLevelPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCLevelPolicyResponse rsp = ModifyCCLevelPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCLevelPolicyOutcome(rsp);
        else
            return ModifyCCLevelPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyCCLevelPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyCCLevelPolicyAsync(const ModifyCCLevelPolicyRequest& request, const ModifyCCLevelPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCCLevelPolicyRequest&;
    using Resp = ModifyCCLevelPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCCLevelPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyCCLevelPolicyOutcomeCallable AntiddosClient::ModifyCCLevelPolicyCallable(const ModifyCCLevelPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCCLevelPolicyOutcome>>();
    ModifyCCLevelPolicyAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyCCLevelPolicyRequest&,
        ModifyCCLevelPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyCCPrecisionPolicyOutcome AntiddosClient::ModifyCCPrecisionPolicy(const ModifyCCPrecisionPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCPrecisionPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCPrecisionPolicyResponse rsp = ModifyCCPrecisionPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCPrecisionPolicyOutcome(rsp);
        else
            return ModifyCCPrecisionPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyCCPrecisionPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyCCPrecisionPolicyAsync(const ModifyCCPrecisionPolicyRequest& request, const ModifyCCPrecisionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCCPrecisionPolicyRequest&;
    using Resp = ModifyCCPrecisionPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCCPrecisionPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyCCPrecisionPolicyOutcomeCallable AntiddosClient::ModifyCCPrecisionPolicyCallable(const ModifyCCPrecisionPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCCPrecisionPolicyOutcome>>();
    ModifyCCPrecisionPolicyAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyCCPrecisionPolicyRequest&,
        ModifyCCPrecisionPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyCCReqLimitPolicyOutcome AntiddosClient::ModifyCCReqLimitPolicy(const ModifyCCReqLimitPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCReqLimitPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCReqLimitPolicyResponse rsp = ModifyCCReqLimitPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCReqLimitPolicyOutcome(rsp);
        else
            return ModifyCCReqLimitPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyCCReqLimitPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyCCReqLimitPolicyAsync(const ModifyCCReqLimitPolicyRequest& request, const ModifyCCReqLimitPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCCReqLimitPolicyRequest&;
    using Resp = ModifyCCReqLimitPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCCReqLimitPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyCCReqLimitPolicyOutcomeCallable AntiddosClient::ModifyCCReqLimitPolicyCallable(const ModifyCCReqLimitPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCCReqLimitPolicyOutcome>>();
    ModifyCCReqLimitPolicyAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyCCReqLimitPolicyRequest&,
        ModifyCCReqLimitPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyCCThresholdPolicyOutcome AntiddosClient::ModifyCCThresholdPolicy(const ModifyCCThresholdPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCThresholdPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCThresholdPolicyResponse rsp = ModifyCCThresholdPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCThresholdPolicyOutcome(rsp);
        else
            return ModifyCCThresholdPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyCCThresholdPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyCCThresholdPolicyAsync(const ModifyCCThresholdPolicyRequest& request, const ModifyCCThresholdPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCCThresholdPolicyRequest&;
    using Resp = ModifyCCThresholdPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCCThresholdPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyCCThresholdPolicyOutcomeCallable AntiddosClient::ModifyCCThresholdPolicyCallable(const ModifyCCThresholdPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCCThresholdPolicyOutcome>>();
    ModifyCCThresholdPolicyAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyCCThresholdPolicyRequest&,
        ModifyCCThresholdPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyCcBlackWhiteIpListOutcome AntiddosClient::ModifyCcBlackWhiteIpList(const ModifyCcBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCcBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCcBlackWhiteIpListResponse rsp = ModifyCcBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCcBlackWhiteIpListOutcome(rsp);
        else
            return ModifyCcBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return ModifyCcBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyCcBlackWhiteIpListAsync(const ModifyCcBlackWhiteIpListRequest& request, const ModifyCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCcBlackWhiteIpListRequest&;
    using Resp = ModifyCcBlackWhiteIpListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCcBlackWhiteIpList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyCcBlackWhiteIpListOutcomeCallable AntiddosClient::ModifyCcBlackWhiteIpListCallable(const ModifyCcBlackWhiteIpListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCcBlackWhiteIpListOutcome>>();
    ModifyCcBlackWhiteIpListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyCcBlackWhiteIpListRequest&,
        ModifyCcBlackWhiteIpListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyDDoSBlackWhiteIpListOutcome AntiddosClient::ModifyDDoSBlackWhiteIpList(const ModifyDDoSBlackWhiteIpListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSBlackWhiteIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSBlackWhiteIpListResponse rsp = ModifyDDoSBlackWhiteIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSBlackWhiteIpListOutcome(rsp);
        else
            return ModifyDDoSBlackWhiteIpListOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSBlackWhiteIpListOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyDDoSBlackWhiteIpListAsync(const ModifyDDoSBlackWhiteIpListRequest& request, const ModifyDDoSBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSBlackWhiteIpListRequest&;
    using Resp = ModifyDDoSBlackWhiteIpListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSBlackWhiteIpList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyDDoSBlackWhiteIpListOutcomeCallable AntiddosClient::ModifyDDoSBlackWhiteIpListCallable(const ModifyDDoSBlackWhiteIpListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSBlackWhiteIpListOutcome>>();
    ModifyDDoSBlackWhiteIpListAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyDDoSBlackWhiteIpListRequest&,
        ModifyDDoSBlackWhiteIpListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyDDoSGeoIPBlockConfigOutcome AntiddosClient::ModifyDDoSGeoIPBlockConfig(const ModifyDDoSGeoIPBlockConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSGeoIPBlockConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSGeoIPBlockConfigResponse rsp = ModifyDDoSGeoIPBlockConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSGeoIPBlockConfigOutcome(rsp);
        else
            return ModifyDDoSGeoIPBlockConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSGeoIPBlockConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyDDoSGeoIPBlockConfigAsync(const ModifyDDoSGeoIPBlockConfigRequest& request, const ModifyDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSGeoIPBlockConfigRequest&;
    using Resp = ModifyDDoSGeoIPBlockConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSGeoIPBlockConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyDDoSGeoIPBlockConfigOutcomeCallable AntiddosClient::ModifyDDoSGeoIPBlockConfigCallable(const ModifyDDoSGeoIPBlockConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSGeoIPBlockConfigOutcome>>();
    ModifyDDoSGeoIPBlockConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyDDoSGeoIPBlockConfigRequest&,
        ModifyDDoSGeoIPBlockConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyDDoSLevelOutcome AntiddosClient::ModifyDDoSLevel(const ModifyDDoSLevelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSLevel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSLevelResponse rsp = ModifyDDoSLevelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSLevelOutcome(rsp);
        else
            return ModifyDDoSLevelOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSLevelOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyDDoSLevelAsync(const ModifyDDoSLevelRequest& request, const ModifyDDoSLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSLevelRequest&;
    using Resp = ModifyDDoSLevelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSLevel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyDDoSLevelOutcomeCallable AntiddosClient::ModifyDDoSLevelCallable(const ModifyDDoSLevelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSLevelOutcome>>();
    ModifyDDoSLevelAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyDDoSLevelRequest&,
        ModifyDDoSLevelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyDDoSSpeedLimitConfigOutcome AntiddosClient::ModifyDDoSSpeedLimitConfig(const ModifyDDoSSpeedLimitConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSSpeedLimitConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSSpeedLimitConfigResponse rsp = ModifyDDoSSpeedLimitConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSSpeedLimitConfigOutcome(rsp);
        else
            return ModifyDDoSSpeedLimitConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSSpeedLimitConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyDDoSSpeedLimitConfigAsync(const ModifyDDoSSpeedLimitConfigRequest& request, const ModifyDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSSpeedLimitConfigRequest&;
    using Resp = ModifyDDoSSpeedLimitConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSSpeedLimitConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyDDoSSpeedLimitConfigOutcomeCallable AntiddosClient::ModifyDDoSSpeedLimitConfigCallable(const ModifyDDoSSpeedLimitConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSSpeedLimitConfigOutcome>>();
    ModifyDDoSSpeedLimitConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyDDoSSpeedLimitConfigRequest&,
        ModifyDDoSSpeedLimitConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyDDoSThresholdOutcome AntiddosClient::ModifyDDoSThreshold(const ModifyDDoSThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSThresholdResponse rsp = ModifyDDoSThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSThresholdOutcome(rsp);
        else
            return ModifyDDoSThresholdOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSThresholdOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyDDoSThresholdAsync(const ModifyDDoSThresholdRequest& request, const ModifyDDoSThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSThresholdRequest&;
    using Resp = ModifyDDoSThresholdResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSThreshold", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyDDoSThresholdOutcomeCallable AntiddosClient::ModifyDDoSThresholdCallable(const ModifyDDoSThresholdRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSThresholdOutcome>>();
    ModifyDDoSThresholdAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyDDoSThresholdRequest&,
        ModifyDDoSThresholdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyDomainUsrNameOutcome AntiddosClient::ModifyDomainUsrName(const ModifyDomainUsrNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainUsrName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainUsrNameResponse rsp = ModifyDomainUsrNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainUsrNameOutcome(rsp);
        else
            return ModifyDomainUsrNameOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainUsrNameOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyDomainUsrNameAsync(const ModifyDomainUsrNameRequest& request, const ModifyDomainUsrNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainUsrNameRequest&;
    using Resp = ModifyDomainUsrNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainUsrName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyDomainUsrNameOutcomeCallable AntiddosClient::ModifyDomainUsrNameCallable(const ModifyDomainUsrNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainUsrNameOutcome>>();
    ModifyDomainUsrNameAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyDomainUsrNameRequest&,
        ModifyDomainUsrNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyNewDomainRulesOutcome AntiddosClient::ModifyNewDomainRules(const ModifyNewDomainRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNewDomainRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNewDomainRulesResponse rsp = ModifyNewDomainRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNewDomainRulesOutcome(rsp);
        else
            return ModifyNewDomainRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyNewDomainRulesOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyNewDomainRulesAsync(const ModifyNewDomainRulesRequest& request, const ModifyNewDomainRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNewDomainRulesRequest&;
    using Resp = ModifyNewDomainRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNewDomainRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyNewDomainRulesOutcomeCallable AntiddosClient::ModifyNewDomainRulesCallable(const ModifyNewDomainRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNewDomainRulesOutcome>>();
    ModifyNewDomainRulesAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyNewDomainRulesRequest&,
        ModifyNewDomainRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyPacketFilterConfigOutcome AntiddosClient::ModifyPacketFilterConfig(const ModifyPacketFilterConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPacketFilterConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPacketFilterConfigResponse rsp = ModifyPacketFilterConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPacketFilterConfigOutcome(rsp);
        else
            return ModifyPacketFilterConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyPacketFilterConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyPacketFilterConfigAsync(const ModifyPacketFilterConfigRequest& request, const ModifyPacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPacketFilterConfigRequest&;
    using Resp = ModifyPacketFilterConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPacketFilterConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyPacketFilterConfigOutcomeCallable AntiddosClient::ModifyPacketFilterConfigCallable(const ModifyPacketFilterConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPacketFilterConfigOutcome>>();
    ModifyPacketFilterConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyPacketFilterConfigRequest&,
        ModifyPacketFilterConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyPortAclConfigOutcome AntiddosClient::ModifyPortAclConfig(const ModifyPortAclConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPortAclConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPortAclConfigResponse rsp = ModifyPortAclConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPortAclConfigOutcome(rsp);
        else
            return ModifyPortAclConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyPortAclConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyPortAclConfigAsync(const ModifyPortAclConfigRequest& request, const ModifyPortAclConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPortAclConfigRequest&;
    using Resp = ModifyPortAclConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPortAclConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyPortAclConfigOutcomeCallable AntiddosClient::ModifyPortAclConfigCallable(const ModifyPortAclConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPortAclConfigOutcome>>();
    ModifyPortAclConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyPortAclConfigRequest&,
        ModifyPortAclConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::SwitchWaterPrintConfigOutcome AntiddosClient::SwitchWaterPrintConfig(const SwitchWaterPrintConfigRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchWaterPrintConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchWaterPrintConfigResponse rsp = SwitchWaterPrintConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchWaterPrintConfigOutcome(rsp);
        else
            return SwitchWaterPrintConfigOutcome(o.GetError());
    }
    else
    {
        return SwitchWaterPrintConfigOutcome(outcome.GetError());
    }
}

void AntiddosClient::SwitchWaterPrintConfigAsync(const SwitchWaterPrintConfigRequest& request, const SwitchWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchWaterPrintConfigRequest&;
    using Resp = SwitchWaterPrintConfigResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchWaterPrintConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::SwitchWaterPrintConfigOutcomeCallable AntiddosClient::SwitchWaterPrintConfigCallable(const SwitchWaterPrintConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchWaterPrintConfigOutcome>>();
    SwitchWaterPrintConfigAsync(
    request,
    [prom](
        const AntiddosClient*,
        const SwitchWaterPrintConfigRequest&,
        SwitchWaterPrintConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

