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

#include <tencentcloud/partners/v20180321/PartnersClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Partners::V20180321;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-21";
    const string ENDPOINT = "partners.tencentcloudapi.com";
}

PartnersClient::PartnersClient(const Credential &credential, const string &region) :
    PartnersClient(credential, region, ClientProfile())
{
}

PartnersClient::PartnersClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


PartnersClient::AgentPayDealsOutcome PartnersClient::AgentPayDeals(const AgentPayDealsRequest &request)
{
    auto outcome = MakeRequest(request, "AgentPayDeals");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AgentPayDealsResponse rsp = AgentPayDealsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AgentPayDealsOutcome(rsp);
        else
            return AgentPayDealsOutcome(o.GetError());
    }
    else
    {
        return AgentPayDealsOutcome(outcome.GetError());
    }
}

void PartnersClient::AgentPayDealsAsync(const AgentPayDealsRequest& request, const AgentPayDealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AgentPayDealsRequest&;
    using Resp = AgentPayDealsResponse;

    DoRequestAsync<Req, Resp>(
        "AgentPayDeals", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::AgentPayDealsOutcomeCallable PartnersClient::AgentPayDealsCallable(const AgentPayDealsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AgentPayDealsOutcome>>();
    AgentPayDealsAsync(
    request,
    [prom](
        const PartnersClient*,
        const AgentPayDealsRequest&,
        AgentPayDealsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::AgentTransferMoneyOutcome PartnersClient::AgentTransferMoney(const AgentTransferMoneyRequest &request)
{
    auto outcome = MakeRequest(request, "AgentTransferMoney");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AgentTransferMoneyResponse rsp = AgentTransferMoneyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AgentTransferMoneyOutcome(rsp);
        else
            return AgentTransferMoneyOutcome(o.GetError());
    }
    else
    {
        return AgentTransferMoneyOutcome(outcome.GetError());
    }
}

void PartnersClient::AgentTransferMoneyAsync(const AgentTransferMoneyRequest& request, const AgentTransferMoneyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AgentTransferMoneyRequest&;
    using Resp = AgentTransferMoneyResponse;

    DoRequestAsync<Req, Resp>(
        "AgentTransferMoney", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::AgentTransferMoneyOutcomeCallable PartnersClient::AgentTransferMoneyCallable(const AgentTransferMoneyRequest &request)
{
    const auto prom = std::make_shared<std::promise<AgentTransferMoneyOutcome>>();
    AgentTransferMoneyAsync(
    request,
    [prom](
        const PartnersClient*,
        const AgentTransferMoneyRequest&,
        AgentTransferMoneyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::AssignClientsToSalesOutcome PartnersClient::AssignClientsToSales(const AssignClientsToSalesRequest &request)
{
    auto outcome = MakeRequest(request, "AssignClientsToSales");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignClientsToSalesResponse rsp = AssignClientsToSalesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignClientsToSalesOutcome(rsp);
        else
            return AssignClientsToSalesOutcome(o.GetError());
    }
    else
    {
        return AssignClientsToSalesOutcome(outcome.GetError());
    }
}

void PartnersClient::AssignClientsToSalesAsync(const AssignClientsToSalesRequest& request, const AssignClientsToSalesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssignClientsToSalesRequest&;
    using Resp = AssignClientsToSalesResponse;

    DoRequestAsync<Req, Resp>(
        "AssignClientsToSales", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::AssignClientsToSalesOutcomeCallable PartnersClient::AssignClientsToSalesCallable(const AssignClientsToSalesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssignClientsToSalesOutcome>>();
    AssignClientsToSalesAsync(
    request,
    [prom](
        const PartnersClient*,
        const AssignClientsToSalesRequest&,
        AssignClientsToSalesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::AuditApplyClientOutcome PartnersClient::AuditApplyClient(const AuditApplyClientRequest &request)
{
    auto outcome = MakeRequest(request, "AuditApplyClient");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AuditApplyClientResponse rsp = AuditApplyClientResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AuditApplyClientOutcome(rsp);
        else
            return AuditApplyClientOutcome(o.GetError());
    }
    else
    {
        return AuditApplyClientOutcome(outcome.GetError());
    }
}

void PartnersClient::AuditApplyClientAsync(const AuditApplyClientRequest& request, const AuditApplyClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AuditApplyClientRequest&;
    using Resp = AuditApplyClientResponse;

    DoRequestAsync<Req, Resp>(
        "AuditApplyClient", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::AuditApplyClientOutcomeCallable PartnersClient::AuditApplyClientCallable(const AuditApplyClientRequest &request)
{
    const auto prom = std::make_shared<std::promise<AuditApplyClientOutcome>>();
    AuditApplyClientAsync(
    request,
    [prom](
        const PartnersClient*,
        const AuditApplyClientRequest&,
        AuditApplyClientOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::CreatePayRelationForClientOutcome PartnersClient::CreatePayRelationForClient(const CreatePayRelationForClientRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePayRelationForClient");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePayRelationForClientResponse rsp = CreatePayRelationForClientResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePayRelationForClientOutcome(rsp);
        else
            return CreatePayRelationForClientOutcome(o.GetError());
    }
    else
    {
        return CreatePayRelationForClientOutcome(outcome.GetError());
    }
}

void PartnersClient::CreatePayRelationForClientAsync(const CreatePayRelationForClientRequest& request, const CreatePayRelationForClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePayRelationForClientRequest&;
    using Resp = CreatePayRelationForClientResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePayRelationForClient", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::CreatePayRelationForClientOutcomeCallable PartnersClient::CreatePayRelationForClientCallable(const CreatePayRelationForClientRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePayRelationForClientOutcome>>();
    CreatePayRelationForClientAsync(
    request,
    [prom](
        const PartnersClient*,
        const CreatePayRelationForClientRequest&,
        CreatePayRelationForClientOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeAgentAuditedClientsOutcome PartnersClient::DescribeAgentAuditedClients(const DescribeAgentAuditedClientsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentAuditedClients");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentAuditedClientsResponse rsp = DescribeAgentAuditedClientsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentAuditedClientsOutcome(rsp);
        else
            return DescribeAgentAuditedClientsOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentAuditedClientsOutcome(outcome.GetError());
    }
}

void PartnersClient::DescribeAgentAuditedClientsAsync(const DescribeAgentAuditedClientsRequest& request, const DescribeAgentAuditedClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentAuditedClientsRequest&;
    using Resp = DescribeAgentAuditedClientsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentAuditedClients", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeAgentAuditedClientsOutcomeCallable PartnersClient::DescribeAgentAuditedClientsCallable(const DescribeAgentAuditedClientsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentAuditedClientsOutcome>>();
    DescribeAgentAuditedClientsAsync(
    request,
    [prom](
        const PartnersClient*,
        const DescribeAgentAuditedClientsRequest&,
        DescribeAgentAuditedClientsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeAgentBillsOutcome PartnersClient::DescribeAgentBills(const DescribeAgentBillsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentBills");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentBillsResponse rsp = DescribeAgentBillsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentBillsOutcome(rsp);
        else
            return DescribeAgentBillsOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentBillsOutcome(outcome.GetError());
    }
}

void PartnersClient::DescribeAgentBillsAsync(const DescribeAgentBillsRequest& request, const DescribeAgentBillsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentBillsRequest&;
    using Resp = DescribeAgentBillsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentBills", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeAgentBillsOutcomeCallable PartnersClient::DescribeAgentBillsCallable(const DescribeAgentBillsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentBillsOutcome>>();
    DescribeAgentBillsAsync(
    request,
    [prom](
        const PartnersClient*,
        const DescribeAgentBillsRequest&,
        DescribeAgentBillsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeAgentClientGradeOutcome PartnersClient::DescribeAgentClientGrade(const DescribeAgentClientGradeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentClientGrade");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentClientGradeResponse rsp = DescribeAgentClientGradeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentClientGradeOutcome(rsp);
        else
            return DescribeAgentClientGradeOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentClientGradeOutcome(outcome.GetError());
    }
}

void PartnersClient::DescribeAgentClientGradeAsync(const DescribeAgentClientGradeRequest& request, const DescribeAgentClientGradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentClientGradeRequest&;
    using Resp = DescribeAgentClientGradeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentClientGrade", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeAgentClientGradeOutcomeCallable PartnersClient::DescribeAgentClientGradeCallable(const DescribeAgentClientGradeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentClientGradeOutcome>>();
    DescribeAgentClientGradeAsync(
    request,
    [prom](
        const PartnersClient*,
        const DescribeAgentClientGradeRequest&,
        DescribeAgentClientGradeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeAgentClientsOutcome PartnersClient::DescribeAgentClients(const DescribeAgentClientsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentClients");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentClientsResponse rsp = DescribeAgentClientsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentClientsOutcome(rsp);
        else
            return DescribeAgentClientsOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentClientsOutcome(outcome.GetError());
    }
}

void PartnersClient::DescribeAgentClientsAsync(const DescribeAgentClientsRequest& request, const DescribeAgentClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentClientsRequest&;
    using Resp = DescribeAgentClientsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentClients", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeAgentClientsOutcomeCallable PartnersClient::DescribeAgentClientsCallable(const DescribeAgentClientsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentClientsOutcome>>();
    DescribeAgentClientsAsync(
    request,
    [prom](
        const PartnersClient*,
        const DescribeAgentClientsRequest&,
        DescribeAgentClientsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeAgentDealsByCacheOutcome PartnersClient::DescribeAgentDealsByCache(const DescribeAgentDealsByCacheRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentDealsByCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentDealsByCacheResponse rsp = DescribeAgentDealsByCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentDealsByCacheOutcome(rsp);
        else
            return DescribeAgentDealsByCacheOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentDealsByCacheOutcome(outcome.GetError());
    }
}

void PartnersClient::DescribeAgentDealsByCacheAsync(const DescribeAgentDealsByCacheRequest& request, const DescribeAgentDealsByCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentDealsByCacheRequest&;
    using Resp = DescribeAgentDealsByCacheResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentDealsByCache", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeAgentDealsByCacheOutcomeCallable PartnersClient::DescribeAgentDealsByCacheCallable(const DescribeAgentDealsByCacheRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentDealsByCacheOutcome>>();
    DescribeAgentDealsByCacheAsync(
    request,
    [prom](
        const PartnersClient*,
        const DescribeAgentDealsByCacheRequest&,
        DescribeAgentDealsByCacheOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeAgentDealsPriceDetailByDealNameOutcome PartnersClient::DescribeAgentDealsPriceDetailByDealName(const DescribeAgentDealsPriceDetailByDealNameRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentDealsPriceDetailByDealName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentDealsPriceDetailByDealNameResponse rsp = DescribeAgentDealsPriceDetailByDealNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentDealsPriceDetailByDealNameOutcome(rsp);
        else
            return DescribeAgentDealsPriceDetailByDealNameOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentDealsPriceDetailByDealNameOutcome(outcome.GetError());
    }
}

void PartnersClient::DescribeAgentDealsPriceDetailByDealNameAsync(const DescribeAgentDealsPriceDetailByDealNameRequest& request, const DescribeAgentDealsPriceDetailByDealNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentDealsPriceDetailByDealNameRequest&;
    using Resp = DescribeAgentDealsPriceDetailByDealNameResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentDealsPriceDetailByDealName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeAgentDealsPriceDetailByDealNameOutcomeCallable PartnersClient::DescribeAgentDealsPriceDetailByDealNameCallable(const DescribeAgentDealsPriceDetailByDealNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentDealsPriceDetailByDealNameOutcome>>();
    DescribeAgentDealsPriceDetailByDealNameAsync(
    request,
    [prom](
        const PartnersClient*,
        const DescribeAgentDealsPriceDetailByDealNameRequest&,
        DescribeAgentDealsPriceDetailByDealNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeAgentPayDealsV2Outcome PartnersClient::DescribeAgentPayDealsV2(const DescribeAgentPayDealsV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentPayDealsV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentPayDealsV2Response rsp = DescribeAgentPayDealsV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentPayDealsV2Outcome(rsp);
        else
            return DescribeAgentPayDealsV2Outcome(o.GetError());
    }
    else
    {
        return DescribeAgentPayDealsV2Outcome(outcome.GetError());
    }
}

void PartnersClient::DescribeAgentPayDealsV2Async(const DescribeAgentPayDealsV2Request& request, const DescribeAgentPayDealsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentPayDealsV2Request&;
    using Resp = DescribeAgentPayDealsV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentPayDealsV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeAgentPayDealsV2OutcomeCallable PartnersClient::DescribeAgentPayDealsV2Callable(const DescribeAgentPayDealsV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentPayDealsV2Outcome>>();
    DescribeAgentPayDealsV2Async(
    request,
    [prom](
        const PartnersClient*,
        const DescribeAgentPayDealsV2Request&,
        DescribeAgentPayDealsV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeAgentRelateBigDealIdsOutcome PartnersClient::DescribeAgentRelateBigDealIds(const DescribeAgentRelateBigDealIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentRelateBigDealIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentRelateBigDealIdsResponse rsp = DescribeAgentRelateBigDealIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentRelateBigDealIdsOutcome(rsp);
        else
            return DescribeAgentRelateBigDealIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentRelateBigDealIdsOutcome(outcome.GetError());
    }
}

void PartnersClient::DescribeAgentRelateBigDealIdsAsync(const DescribeAgentRelateBigDealIdsRequest& request, const DescribeAgentRelateBigDealIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentRelateBigDealIdsRequest&;
    using Resp = DescribeAgentRelateBigDealIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentRelateBigDealIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeAgentRelateBigDealIdsOutcomeCallable PartnersClient::DescribeAgentRelateBigDealIdsCallable(const DescribeAgentRelateBigDealIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentRelateBigDealIdsOutcome>>();
    DescribeAgentRelateBigDealIdsAsync(
    request,
    [prom](
        const PartnersClient*,
        const DescribeAgentRelateBigDealIdsRequest&,
        DescribeAgentRelateBigDealIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeAgentSelfPayDealsV2Outcome PartnersClient::DescribeAgentSelfPayDealsV2(const DescribeAgentSelfPayDealsV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentSelfPayDealsV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentSelfPayDealsV2Response rsp = DescribeAgentSelfPayDealsV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentSelfPayDealsV2Outcome(rsp);
        else
            return DescribeAgentSelfPayDealsV2Outcome(o.GetError());
    }
    else
    {
        return DescribeAgentSelfPayDealsV2Outcome(outcome.GetError());
    }
}

void PartnersClient::DescribeAgentSelfPayDealsV2Async(const DescribeAgentSelfPayDealsV2Request& request, const DescribeAgentSelfPayDealsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentSelfPayDealsV2Request&;
    using Resp = DescribeAgentSelfPayDealsV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentSelfPayDealsV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeAgentSelfPayDealsV2OutcomeCallable PartnersClient::DescribeAgentSelfPayDealsV2Callable(const DescribeAgentSelfPayDealsV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentSelfPayDealsV2Outcome>>();
    DescribeAgentSelfPayDealsV2Async(
    request,
    [prom](
        const PartnersClient*,
        const DescribeAgentSelfPayDealsV2Request&,
        DescribeAgentSelfPayDealsV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeClientBalanceNewOutcome PartnersClient::DescribeClientBalanceNew(const DescribeClientBalanceNewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClientBalanceNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientBalanceNewResponse rsp = DescribeClientBalanceNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientBalanceNewOutcome(rsp);
        else
            return DescribeClientBalanceNewOutcome(o.GetError());
    }
    else
    {
        return DescribeClientBalanceNewOutcome(outcome.GetError());
    }
}

void PartnersClient::DescribeClientBalanceNewAsync(const DescribeClientBalanceNewRequest& request, const DescribeClientBalanceNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClientBalanceNewRequest&;
    using Resp = DescribeClientBalanceNewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClientBalanceNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeClientBalanceNewOutcomeCallable PartnersClient::DescribeClientBalanceNewCallable(const DescribeClientBalanceNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClientBalanceNewOutcome>>();
    DescribeClientBalanceNewAsync(
    request,
    [prom](
        const PartnersClient*,
        const DescribeClientBalanceNewRequest&,
        DescribeClientBalanceNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeClientJoinIncreaseListOutcome PartnersClient::DescribeClientJoinIncreaseList(const DescribeClientJoinIncreaseListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClientJoinIncreaseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientJoinIncreaseListResponse rsp = DescribeClientJoinIncreaseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientJoinIncreaseListOutcome(rsp);
        else
            return DescribeClientJoinIncreaseListOutcome(o.GetError());
    }
    else
    {
        return DescribeClientJoinIncreaseListOutcome(outcome.GetError());
    }
}

void PartnersClient::DescribeClientJoinIncreaseListAsync(const DescribeClientJoinIncreaseListRequest& request, const DescribeClientJoinIncreaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClientJoinIncreaseListRequest&;
    using Resp = DescribeClientJoinIncreaseListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClientJoinIncreaseList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeClientJoinIncreaseListOutcomeCallable PartnersClient::DescribeClientJoinIncreaseListCallable(const DescribeClientJoinIncreaseListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClientJoinIncreaseListOutcome>>();
    DescribeClientJoinIncreaseListAsync(
    request,
    [prom](
        const PartnersClient*,
        const DescribeClientJoinIncreaseListRequest&,
        DescribeClientJoinIncreaseListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeClientSwitchTraTaskInfoOutcome PartnersClient::DescribeClientSwitchTraTaskInfo(const DescribeClientSwitchTraTaskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClientSwitchTraTaskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientSwitchTraTaskInfoResponse rsp = DescribeClientSwitchTraTaskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientSwitchTraTaskInfoOutcome(rsp);
        else
            return DescribeClientSwitchTraTaskInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeClientSwitchTraTaskInfoOutcome(outcome.GetError());
    }
}

void PartnersClient::DescribeClientSwitchTraTaskInfoAsync(const DescribeClientSwitchTraTaskInfoRequest& request, const DescribeClientSwitchTraTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClientSwitchTraTaskInfoRequest&;
    using Resp = DescribeClientSwitchTraTaskInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClientSwitchTraTaskInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeClientSwitchTraTaskInfoOutcomeCallable PartnersClient::DescribeClientSwitchTraTaskInfoCallable(const DescribeClientSwitchTraTaskInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClientSwitchTraTaskInfoOutcome>>();
    DescribeClientSwitchTraTaskInfoAsync(
    request,
    [prom](
        const PartnersClient*,
        const DescribeClientSwitchTraTaskInfoRequest&,
        DescribeClientSwitchTraTaskInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeRebateInfosOutcome PartnersClient::DescribeRebateInfos(const DescribeRebateInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRebateInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRebateInfosResponse rsp = DescribeRebateInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRebateInfosOutcome(rsp);
        else
            return DescribeRebateInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeRebateInfosOutcome(outcome.GetError());
    }
}

void PartnersClient::DescribeRebateInfosAsync(const DescribeRebateInfosRequest& request, const DescribeRebateInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRebateInfosRequest&;
    using Resp = DescribeRebateInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRebateInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeRebateInfosOutcomeCallable PartnersClient::DescribeRebateInfosCallable(const DescribeRebateInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRebateInfosOutcome>>();
    DescribeRebateInfosAsync(
    request,
    [prom](
        const PartnersClient*,
        const DescribeRebateInfosRequest&,
        DescribeRebateInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeRebateInfosNewOutcome PartnersClient::DescribeRebateInfosNew(const DescribeRebateInfosNewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRebateInfosNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRebateInfosNewResponse rsp = DescribeRebateInfosNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRebateInfosNewOutcome(rsp);
        else
            return DescribeRebateInfosNewOutcome(o.GetError());
    }
    else
    {
        return DescribeRebateInfosNewOutcome(outcome.GetError());
    }
}

void PartnersClient::DescribeRebateInfosNewAsync(const DescribeRebateInfosNewRequest& request, const DescribeRebateInfosNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRebateInfosNewRequest&;
    using Resp = DescribeRebateInfosNewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRebateInfosNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeRebateInfosNewOutcomeCallable PartnersClient::DescribeRebateInfosNewCallable(const DescribeRebateInfosNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRebateInfosNewOutcome>>();
    DescribeRebateInfosNewAsync(
    request,
    [prom](
        const PartnersClient*,
        const DescribeRebateInfosNewRequest&,
        DescribeRebateInfosNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeSalesmansOutcome PartnersClient::DescribeSalesmans(const DescribeSalesmansRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSalesmans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSalesmansResponse rsp = DescribeSalesmansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSalesmansOutcome(rsp);
        else
            return DescribeSalesmansOutcome(o.GetError());
    }
    else
    {
        return DescribeSalesmansOutcome(outcome.GetError());
    }
}

void PartnersClient::DescribeSalesmansAsync(const DescribeSalesmansRequest& request, const DescribeSalesmansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSalesmansRequest&;
    using Resp = DescribeSalesmansResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSalesmans", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeSalesmansOutcomeCallable PartnersClient::DescribeSalesmansCallable(const DescribeSalesmansRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSalesmansOutcome>>();
    DescribeSalesmansAsync(
    request,
    [prom](
        const PartnersClient*,
        const DescribeSalesmansRequest&,
        DescribeSalesmansOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::DescribeUnbindClientListOutcome PartnersClient::DescribeUnbindClientList(const DescribeUnbindClientListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnbindClientList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnbindClientListResponse rsp = DescribeUnbindClientListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnbindClientListOutcome(rsp);
        else
            return DescribeUnbindClientListOutcome(o.GetError());
    }
    else
    {
        return DescribeUnbindClientListOutcome(outcome.GetError());
    }
}

void PartnersClient::DescribeUnbindClientListAsync(const DescribeUnbindClientListRequest& request, const DescribeUnbindClientListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnbindClientListRequest&;
    using Resp = DescribeUnbindClientListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUnbindClientList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::DescribeUnbindClientListOutcomeCallable PartnersClient::DescribeUnbindClientListCallable(const DescribeUnbindClientListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnbindClientListOutcome>>();
    DescribeUnbindClientListAsync(
    request,
    [prom](
        const PartnersClient*,
        const DescribeUnbindClientListRequest&,
        DescribeUnbindClientListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::ModifyClientRemarkOutcome PartnersClient::ModifyClientRemark(const ModifyClientRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClientRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClientRemarkResponse rsp = ModifyClientRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClientRemarkOutcome(rsp);
        else
            return ModifyClientRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyClientRemarkOutcome(outcome.GetError());
    }
}

void PartnersClient::ModifyClientRemarkAsync(const ModifyClientRemarkRequest& request, const ModifyClientRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClientRemarkRequest&;
    using Resp = ModifyClientRemarkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClientRemark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::ModifyClientRemarkOutcomeCallable PartnersClient::ModifyClientRemarkCallable(const ModifyClientRemarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClientRemarkOutcome>>();
    ModifyClientRemarkAsync(
    request,
    [prom](
        const PartnersClient*,
        const ModifyClientRemarkRequest&,
        ModifyClientRemarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PartnersClient::RemovePayRelationForClientOutcome PartnersClient::RemovePayRelationForClient(const RemovePayRelationForClientRequest &request)
{
    auto outcome = MakeRequest(request, "RemovePayRelationForClient");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemovePayRelationForClientResponse rsp = RemovePayRelationForClientResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemovePayRelationForClientOutcome(rsp);
        else
            return RemovePayRelationForClientOutcome(o.GetError());
    }
    else
    {
        return RemovePayRelationForClientOutcome(outcome.GetError());
    }
}

void PartnersClient::RemovePayRelationForClientAsync(const RemovePayRelationForClientRequest& request, const RemovePayRelationForClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemovePayRelationForClientRequest&;
    using Resp = RemovePayRelationForClientResponse;

    DoRequestAsync<Req, Resp>(
        "RemovePayRelationForClient", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PartnersClient::RemovePayRelationForClientOutcomeCallable PartnersClient::RemovePayRelationForClientCallable(const RemovePayRelationForClientRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemovePayRelationForClientOutcome>>();
    RemovePayRelationForClientAsync(
    request,
    [prom](
        const PartnersClient*,
        const RemovePayRelationForClientRequest&,
        RemovePayRelationForClientOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

