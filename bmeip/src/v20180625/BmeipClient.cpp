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

#include <tencentcloud/bmeip/v20180625/BmeipClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bmeip::V20180625;
using namespace TencentCloud::Bmeip::V20180625::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-06-25";
    const string ENDPOINT = "bmeip.tencentcloudapi.com";
}

BmeipClient::BmeipClient(const Credential &credential, const string &region) :
    BmeipClient(credential, region, ClientProfile())
{
}

BmeipClient::BmeipClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BmeipClient::BindEipAclsOutcome BmeipClient::BindEipAcls(const BindEipAclsRequest &request)
{
    auto outcome = MakeRequest(request, "BindEipAcls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindEipAclsResponse rsp = BindEipAclsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindEipAclsOutcome(rsp);
        else
            return BindEipAclsOutcome(o.GetError());
    }
    else
    {
        return BindEipAclsOutcome(outcome.GetError());
    }
}

void BmeipClient::BindEipAclsAsync(const BindEipAclsRequest& request, const BindEipAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindEipAclsRequest&;
    using Resp = BindEipAclsResponse;

    DoRequestAsync<Req, Resp>(
        "BindEipAcls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::BindEipAclsOutcomeCallable BmeipClient::BindEipAclsCallable(const BindEipAclsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindEipAclsOutcome>>();
    BindEipAclsAsync(
    request,
    [prom](
        const BmeipClient*,
        const BindEipAclsRequest&,
        BindEipAclsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::BindHostedOutcome BmeipClient::BindHosted(const BindHostedRequest &request)
{
    auto outcome = MakeRequest(request, "BindHosted");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindHostedResponse rsp = BindHostedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindHostedOutcome(rsp);
        else
            return BindHostedOutcome(o.GetError());
    }
    else
    {
        return BindHostedOutcome(outcome.GetError());
    }
}

void BmeipClient::BindHostedAsync(const BindHostedRequest& request, const BindHostedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindHostedRequest&;
    using Resp = BindHostedResponse;

    DoRequestAsync<Req, Resp>(
        "BindHosted", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::BindHostedOutcomeCallable BmeipClient::BindHostedCallable(const BindHostedRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindHostedOutcome>>();
    BindHostedAsync(
    request,
    [prom](
        const BmeipClient*,
        const BindHostedRequest&,
        BindHostedOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::BindRsOutcome BmeipClient::BindRs(const BindRsRequest &request)
{
    auto outcome = MakeRequest(request, "BindRs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindRsResponse rsp = BindRsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindRsOutcome(rsp);
        else
            return BindRsOutcome(o.GetError());
    }
    else
    {
        return BindRsOutcome(outcome.GetError());
    }
}

void BmeipClient::BindRsAsync(const BindRsRequest& request, const BindRsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindRsRequest&;
    using Resp = BindRsResponse;

    DoRequestAsync<Req, Resp>(
        "BindRs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::BindRsOutcomeCallable BmeipClient::BindRsCallable(const BindRsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindRsOutcome>>();
    BindRsAsync(
    request,
    [prom](
        const BmeipClient*,
        const BindRsRequest&,
        BindRsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::BindVpcIpOutcome BmeipClient::BindVpcIp(const BindVpcIpRequest &request)
{
    auto outcome = MakeRequest(request, "BindVpcIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindVpcIpResponse rsp = BindVpcIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindVpcIpOutcome(rsp);
        else
            return BindVpcIpOutcome(o.GetError());
    }
    else
    {
        return BindVpcIpOutcome(outcome.GetError());
    }
}

void BmeipClient::BindVpcIpAsync(const BindVpcIpRequest& request, const BindVpcIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindVpcIpRequest&;
    using Resp = BindVpcIpResponse;

    DoRequestAsync<Req, Resp>(
        "BindVpcIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::BindVpcIpOutcomeCallable BmeipClient::BindVpcIpCallable(const BindVpcIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindVpcIpOutcome>>();
    BindVpcIpAsync(
    request,
    [prom](
        const BmeipClient*,
        const BindVpcIpRequest&,
        BindVpcIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::CreateEipOutcome BmeipClient::CreateEip(const CreateEipRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEipResponse rsp = CreateEipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEipOutcome(rsp);
        else
            return CreateEipOutcome(o.GetError());
    }
    else
    {
        return CreateEipOutcome(outcome.GetError());
    }
}

void BmeipClient::CreateEipAsync(const CreateEipRequest& request, const CreateEipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEipRequest&;
    using Resp = CreateEipResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::CreateEipOutcomeCallable BmeipClient::CreateEipCallable(const CreateEipRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEipOutcome>>();
    CreateEipAsync(
    request,
    [prom](
        const BmeipClient*,
        const CreateEipRequest&,
        CreateEipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::CreateEipAclOutcome BmeipClient::CreateEipAcl(const CreateEipAclRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEipAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEipAclResponse rsp = CreateEipAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEipAclOutcome(rsp);
        else
            return CreateEipAclOutcome(o.GetError());
    }
    else
    {
        return CreateEipAclOutcome(outcome.GetError());
    }
}

void BmeipClient::CreateEipAclAsync(const CreateEipAclRequest& request, const CreateEipAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEipAclRequest&;
    using Resp = CreateEipAclResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEipAcl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::CreateEipAclOutcomeCallable BmeipClient::CreateEipAclCallable(const CreateEipAclRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEipAclOutcome>>();
    CreateEipAclAsync(
    request,
    [prom](
        const BmeipClient*,
        const CreateEipAclRequest&,
        CreateEipAclOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::DeleteEipOutcome BmeipClient::DeleteEip(const DeleteEipRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEipResponse rsp = DeleteEipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEipOutcome(rsp);
        else
            return DeleteEipOutcome(o.GetError());
    }
    else
    {
        return DeleteEipOutcome(outcome.GetError());
    }
}

void BmeipClient::DeleteEipAsync(const DeleteEipRequest& request, const DeleteEipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEipRequest&;
    using Resp = DeleteEipResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::DeleteEipOutcomeCallable BmeipClient::DeleteEipCallable(const DeleteEipRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEipOutcome>>();
    DeleteEipAsync(
    request,
    [prom](
        const BmeipClient*,
        const DeleteEipRequest&,
        DeleteEipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::DeleteEipAclOutcome BmeipClient::DeleteEipAcl(const DeleteEipAclRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEipAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEipAclResponse rsp = DeleteEipAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEipAclOutcome(rsp);
        else
            return DeleteEipAclOutcome(o.GetError());
    }
    else
    {
        return DeleteEipAclOutcome(outcome.GetError());
    }
}

void BmeipClient::DeleteEipAclAsync(const DeleteEipAclRequest& request, const DeleteEipAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEipAclRequest&;
    using Resp = DeleteEipAclResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEipAcl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::DeleteEipAclOutcomeCallable BmeipClient::DeleteEipAclCallable(const DeleteEipAclRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEipAclOutcome>>();
    DeleteEipAclAsync(
    request,
    [prom](
        const BmeipClient*,
        const DeleteEipAclRequest&,
        DeleteEipAclOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::DescribeEipAclsOutcome BmeipClient::DescribeEipAcls(const DescribeEipAclsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEipAcls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEipAclsResponse rsp = DescribeEipAclsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEipAclsOutcome(rsp);
        else
            return DescribeEipAclsOutcome(o.GetError());
    }
    else
    {
        return DescribeEipAclsOutcome(outcome.GetError());
    }
}

void BmeipClient::DescribeEipAclsAsync(const DescribeEipAclsRequest& request, const DescribeEipAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEipAclsRequest&;
    using Resp = DescribeEipAclsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEipAcls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::DescribeEipAclsOutcomeCallable BmeipClient::DescribeEipAclsCallable(const DescribeEipAclsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEipAclsOutcome>>();
    DescribeEipAclsAsync(
    request,
    [prom](
        const BmeipClient*,
        const DescribeEipAclsRequest&,
        DescribeEipAclsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::DescribeEipQuotaOutcome BmeipClient::DescribeEipQuota(const DescribeEipQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEipQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEipQuotaResponse rsp = DescribeEipQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEipQuotaOutcome(rsp);
        else
            return DescribeEipQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeEipQuotaOutcome(outcome.GetError());
    }
}

void BmeipClient::DescribeEipQuotaAsync(const DescribeEipQuotaRequest& request, const DescribeEipQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEipQuotaRequest&;
    using Resp = DescribeEipQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEipQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::DescribeEipQuotaOutcomeCallable BmeipClient::DescribeEipQuotaCallable(const DescribeEipQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEipQuotaOutcome>>();
    DescribeEipQuotaAsync(
    request,
    [prom](
        const BmeipClient*,
        const DescribeEipQuotaRequest&,
        DescribeEipQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::DescribeEipTaskOutcome BmeipClient::DescribeEipTask(const DescribeEipTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEipTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEipTaskResponse rsp = DescribeEipTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEipTaskOutcome(rsp);
        else
            return DescribeEipTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeEipTaskOutcome(outcome.GetError());
    }
}

void BmeipClient::DescribeEipTaskAsync(const DescribeEipTaskRequest& request, const DescribeEipTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEipTaskRequest&;
    using Resp = DescribeEipTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEipTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::DescribeEipTaskOutcomeCallable BmeipClient::DescribeEipTaskCallable(const DescribeEipTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEipTaskOutcome>>();
    DescribeEipTaskAsync(
    request,
    [prom](
        const BmeipClient*,
        const DescribeEipTaskRequest&,
        DescribeEipTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::DescribeEipsOutcome BmeipClient::DescribeEips(const DescribeEipsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEips");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEipsResponse rsp = DescribeEipsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEipsOutcome(rsp);
        else
            return DescribeEipsOutcome(o.GetError());
    }
    else
    {
        return DescribeEipsOutcome(outcome.GetError());
    }
}

void BmeipClient::DescribeEipsAsync(const DescribeEipsRequest& request, const DescribeEipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEipsRequest&;
    using Resp = DescribeEipsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEips", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::DescribeEipsOutcomeCallable BmeipClient::DescribeEipsCallable(const DescribeEipsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEipsOutcome>>();
    DescribeEipsAsync(
    request,
    [prom](
        const BmeipClient*,
        const DescribeEipsRequest&,
        DescribeEipsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::ModifyEipAclOutcome BmeipClient::ModifyEipAcl(const ModifyEipAclRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEipAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEipAclResponse rsp = ModifyEipAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEipAclOutcome(rsp);
        else
            return ModifyEipAclOutcome(o.GetError());
    }
    else
    {
        return ModifyEipAclOutcome(outcome.GetError());
    }
}

void BmeipClient::ModifyEipAclAsync(const ModifyEipAclRequest& request, const ModifyEipAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEipAclRequest&;
    using Resp = ModifyEipAclResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEipAcl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::ModifyEipAclOutcomeCallable BmeipClient::ModifyEipAclCallable(const ModifyEipAclRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEipAclOutcome>>();
    ModifyEipAclAsync(
    request,
    [prom](
        const BmeipClient*,
        const ModifyEipAclRequest&,
        ModifyEipAclOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::ModifyEipChargeOutcome BmeipClient::ModifyEipCharge(const ModifyEipChargeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEipCharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEipChargeResponse rsp = ModifyEipChargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEipChargeOutcome(rsp);
        else
            return ModifyEipChargeOutcome(o.GetError());
    }
    else
    {
        return ModifyEipChargeOutcome(outcome.GetError());
    }
}

void BmeipClient::ModifyEipChargeAsync(const ModifyEipChargeRequest& request, const ModifyEipChargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEipChargeRequest&;
    using Resp = ModifyEipChargeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEipCharge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::ModifyEipChargeOutcomeCallable BmeipClient::ModifyEipChargeCallable(const ModifyEipChargeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEipChargeOutcome>>();
    ModifyEipChargeAsync(
    request,
    [prom](
        const BmeipClient*,
        const ModifyEipChargeRequest&,
        ModifyEipChargeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::ModifyEipNameOutcome BmeipClient::ModifyEipName(const ModifyEipNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEipName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEipNameResponse rsp = ModifyEipNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEipNameOutcome(rsp);
        else
            return ModifyEipNameOutcome(o.GetError());
    }
    else
    {
        return ModifyEipNameOutcome(outcome.GetError());
    }
}

void BmeipClient::ModifyEipNameAsync(const ModifyEipNameRequest& request, const ModifyEipNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEipNameRequest&;
    using Resp = ModifyEipNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEipName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::ModifyEipNameOutcomeCallable BmeipClient::ModifyEipNameCallable(const ModifyEipNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEipNameOutcome>>();
    ModifyEipNameAsync(
    request,
    [prom](
        const BmeipClient*,
        const ModifyEipNameRequest&,
        ModifyEipNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::UnbindEipAclsOutcome BmeipClient::UnbindEipAcls(const UnbindEipAclsRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindEipAcls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindEipAclsResponse rsp = UnbindEipAclsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindEipAclsOutcome(rsp);
        else
            return UnbindEipAclsOutcome(o.GetError());
    }
    else
    {
        return UnbindEipAclsOutcome(outcome.GetError());
    }
}

void BmeipClient::UnbindEipAclsAsync(const UnbindEipAclsRequest& request, const UnbindEipAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindEipAclsRequest&;
    using Resp = UnbindEipAclsResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindEipAcls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::UnbindEipAclsOutcomeCallable BmeipClient::UnbindEipAclsCallable(const UnbindEipAclsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindEipAclsOutcome>>();
    UnbindEipAclsAsync(
    request,
    [prom](
        const BmeipClient*,
        const UnbindEipAclsRequest&,
        UnbindEipAclsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::UnbindHostedOutcome BmeipClient::UnbindHosted(const UnbindHostedRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindHosted");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindHostedResponse rsp = UnbindHostedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindHostedOutcome(rsp);
        else
            return UnbindHostedOutcome(o.GetError());
    }
    else
    {
        return UnbindHostedOutcome(outcome.GetError());
    }
}

void BmeipClient::UnbindHostedAsync(const UnbindHostedRequest& request, const UnbindHostedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindHostedRequest&;
    using Resp = UnbindHostedResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindHosted", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::UnbindHostedOutcomeCallable BmeipClient::UnbindHostedCallable(const UnbindHostedRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindHostedOutcome>>();
    UnbindHostedAsync(
    request,
    [prom](
        const BmeipClient*,
        const UnbindHostedRequest&,
        UnbindHostedOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::UnbindRsOutcome BmeipClient::UnbindRs(const UnbindRsRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindRs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindRsResponse rsp = UnbindRsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindRsOutcome(rsp);
        else
            return UnbindRsOutcome(o.GetError());
    }
    else
    {
        return UnbindRsOutcome(outcome.GetError());
    }
}

void BmeipClient::UnbindRsAsync(const UnbindRsRequest& request, const UnbindRsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindRsRequest&;
    using Resp = UnbindRsResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindRs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::UnbindRsOutcomeCallable BmeipClient::UnbindRsCallable(const UnbindRsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindRsOutcome>>();
    UnbindRsAsync(
    request,
    [prom](
        const BmeipClient*,
        const UnbindRsRequest&,
        UnbindRsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::UnbindRsListOutcome BmeipClient::UnbindRsList(const UnbindRsListRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindRsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindRsListResponse rsp = UnbindRsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindRsListOutcome(rsp);
        else
            return UnbindRsListOutcome(o.GetError());
    }
    else
    {
        return UnbindRsListOutcome(outcome.GetError());
    }
}

void BmeipClient::UnbindRsListAsync(const UnbindRsListRequest& request, const UnbindRsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindRsListRequest&;
    using Resp = UnbindRsListResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindRsList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::UnbindRsListOutcomeCallable BmeipClient::UnbindRsListCallable(const UnbindRsListRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindRsListOutcome>>();
    UnbindRsListAsync(
    request,
    [prom](
        const BmeipClient*,
        const UnbindRsListRequest&,
        UnbindRsListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmeipClient::UnbindVpcIpOutcome BmeipClient::UnbindVpcIp(const UnbindVpcIpRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindVpcIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindVpcIpResponse rsp = UnbindVpcIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindVpcIpOutcome(rsp);
        else
            return UnbindVpcIpOutcome(o.GetError());
    }
    else
    {
        return UnbindVpcIpOutcome(outcome.GetError());
    }
}

void BmeipClient::UnbindVpcIpAsync(const UnbindVpcIpRequest& request, const UnbindVpcIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindVpcIpRequest&;
    using Resp = UnbindVpcIpResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindVpcIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmeipClient::UnbindVpcIpOutcomeCallable BmeipClient::UnbindVpcIpCallable(const UnbindVpcIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindVpcIpOutcome>>();
    UnbindVpcIpAsync(
    request,
    [prom](
        const BmeipClient*,
        const UnbindVpcIpRequest&,
        UnbindVpcIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

