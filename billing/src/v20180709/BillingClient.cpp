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

#include <tencentcloud/billing/v20180709/BillingClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Billing::V20180709;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-07-09";
    const string ENDPOINT = "billing.tencentcloudapi.com";
}

BillingClient::BillingClient(const Credential &credential, const string &region) :
    BillingClient(credential, region, ClientProfile())
{
}

BillingClient::BillingClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BillingClient::CreateAllocationRuleOutcome BillingClient::CreateAllocationRule(const CreateAllocationRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAllocationRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAllocationRuleResponse rsp = CreateAllocationRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAllocationRuleOutcome(rsp);
        else
            return CreateAllocationRuleOutcome(o.GetError());
    }
    else
    {
        return CreateAllocationRuleOutcome(outcome.GetError());
    }
}

void BillingClient::CreateAllocationRuleAsync(const CreateAllocationRuleRequest& request, const CreateAllocationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAllocationRuleRequest&;
    using Resp = CreateAllocationRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAllocationRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::CreateAllocationRuleOutcomeCallable BillingClient::CreateAllocationRuleCallable(const CreateAllocationRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAllocationRuleOutcome>>();
    CreateAllocationRuleAsync(
    request,
    [prom](
        const BillingClient*,
        const CreateAllocationRuleRequest&,
        CreateAllocationRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::CreateAllocationTagOutcome BillingClient::CreateAllocationTag(const CreateAllocationTagRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAllocationTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAllocationTagResponse rsp = CreateAllocationTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAllocationTagOutcome(rsp);
        else
            return CreateAllocationTagOutcome(o.GetError());
    }
    else
    {
        return CreateAllocationTagOutcome(outcome.GetError());
    }
}

void BillingClient::CreateAllocationTagAsync(const CreateAllocationTagRequest& request, const CreateAllocationTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAllocationTagRequest&;
    using Resp = CreateAllocationTagResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAllocationTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::CreateAllocationTagOutcomeCallable BillingClient::CreateAllocationTagCallable(const CreateAllocationTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAllocationTagOutcome>>();
    CreateAllocationTagAsync(
    request,
    [prom](
        const BillingClient*,
        const CreateAllocationTagRequest&,
        CreateAllocationTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::CreateAllocationUnitOutcome BillingClient::CreateAllocationUnit(const CreateAllocationUnitRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAllocationUnit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAllocationUnitResponse rsp = CreateAllocationUnitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAllocationUnitOutcome(rsp);
        else
            return CreateAllocationUnitOutcome(o.GetError());
    }
    else
    {
        return CreateAllocationUnitOutcome(outcome.GetError());
    }
}

void BillingClient::CreateAllocationUnitAsync(const CreateAllocationUnitRequest& request, const CreateAllocationUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAllocationUnitRequest&;
    using Resp = CreateAllocationUnitResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAllocationUnit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::CreateAllocationUnitOutcomeCallable BillingClient::CreateAllocationUnitCallable(const CreateAllocationUnitRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAllocationUnitOutcome>>();
    CreateAllocationUnitAsync(
    request,
    [prom](
        const BillingClient*,
        const CreateAllocationUnitRequest&,
        CreateAllocationUnitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::CreateBudgetOutcome BillingClient::CreateBudget(const CreateBudgetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBudget");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBudgetResponse rsp = CreateBudgetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBudgetOutcome(rsp);
        else
            return CreateBudgetOutcome(o.GetError());
    }
    else
    {
        return CreateBudgetOutcome(outcome.GetError());
    }
}

void BillingClient::CreateBudgetAsync(const CreateBudgetRequest& request, const CreateBudgetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBudgetRequest&;
    using Resp = CreateBudgetResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBudget", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::CreateBudgetOutcomeCallable BillingClient::CreateBudgetCallable(const CreateBudgetRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBudgetOutcome>>();
    CreateBudgetAsync(
    request,
    [prom](
        const BillingClient*,
        const CreateBudgetRequest&,
        CreateBudgetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::CreateGatherRuleOutcome BillingClient::CreateGatherRule(const CreateGatherRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGatherRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGatherRuleResponse rsp = CreateGatherRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGatherRuleOutcome(rsp);
        else
            return CreateGatherRuleOutcome(o.GetError());
    }
    else
    {
        return CreateGatherRuleOutcome(outcome.GetError());
    }
}

void BillingClient::CreateGatherRuleAsync(const CreateGatherRuleRequest& request, const CreateGatherRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGatherRuleRequest&;
    using Resp = CreateGatherRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGatherRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::CreateGatherRuleOutcomeCallable BillingClient::CreateGatherRuleCallable(const CreateGatherRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGatherRuleOutcome>>();
    CreateGatherRuleAsync(
    request,
    [prom](
        const BillingClient*,
        const CreateGatherRuleRequest&,
        CreateGatherRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::CreateInstanceOutcome BillingClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void BillingClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceRequest&;
    using Resp = CreateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::CreateInstanceOutcomeCallable BillingClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceOutcome>>();
    CreateInstanceAsync(
    request,
    [prom](
        const BillingClient*,
        const CreateInstanceRequest&,
        CreateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DeleteAllocationRuleOutcome BillingClient::DeleteAllocationRule(const DeleteAllocationRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAllocationRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAllocationRuleResponse rsp = DeleteAllocationRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAllocationRuleOutcome(rsp);
        else
            return DeleteAllocationRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAllocationRuleOutcome(outcome.GetError());
    }
}

void BillingClient::DeleteAllocationRuleAsync(const DeleteAllocationRuleRequest& request, const DeleteAllocationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAllocationRuleRequest&;
    using Resp = DeleteAllocationRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAllocationRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DeleteAllocationRuleOutcomeCallable BillingClient::DeleteAllocationRuleCallable(const DeleteAllocationRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAllocationRuleOutcome>>();
    DeleteAllocationRuleAsync(
    request,
    [prom](
        const BillingClient*,
        const DeleteAllocationRuleRequest&,
        DeleteAllocationRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DeleteAllocationTagOutcome BillingClient::DeleteAllocationTag(const DeleteAllocationTagRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAllocationTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAllocationTagResponse rsp = DeleteAllocationTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAllocationTagOutcome(rsp);
        else
            return DeleteAllocationTagOutcome(o.GetError());
    }
    else
    {
        return DeleteAllocationTagOutcome(outcome.GetError());
    }
}

void BillingClient::DeleteAllocationTagAsync(const DeleteAllocationTagRequest& request, const DeleteAllocationTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAllocationTagRequest&;
    using Resp = DeleteAllocationTagResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAllocationTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DeleteAllocationTagOutcomeCallable BillingClient::DeleteAllocationTagCallable(const DeleteAllocationTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAllocationTagOutcome>>();
    DeleteAllocationTagAsync(
    request,
    [prom](
        const BillingClient*,
        const DeleteAllocationTagRequest&,
        DeleteAllocationTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DeleteAllocationUnitOutcome BillingClient::DeleteAllocationUnit(const DeleteAllocationUnitRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAllocationUnit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAllocationUnitResponse rsp = DeleteAllocationUnitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAllocationUnitOutcome(rsp);
        else
            return DeleteAllocationUnitOutcome(o.GetError());
    }
    else
    {
        return DeleteAllocationUnitOutcome(outcome.GetError());
    }
}

void BillingClient::DeleteAllocationUnitAsync(const DeleteAllocationUnitRequest& request, const DeleteAllocationUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAllocationUnitRequest&;
    using Resp = DeleteAllocationUnitResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAllocationUnit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DeleteAllocationUnitOutcomeCallable BillingClient::DeleteAllocationUnitCallable(const DeleteAllocationUnitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAllocationUnitOutcome>>();
    DeleteAllocationUnitAsync(
    request,
    [prom](
        const BillingClient*,
        const DeleteAllocationUnitRequest&,
        DeleteAllocationUnitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DeleteBudgetOutcome BillingClient::DeleteBudget(const DeleteBudgetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBudget");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBudgetResponse rsp = DeleteBudgetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBudgetOutcome(rsp);
        else
            return DeleteBudgetOutcome(o.GetError());
    }
    else
    {
        return DeleteBudgetOutcome(outcome.GetError());
    }
}

void BillingClient::DeleteBudgetAsync(const DeleteBudgetRequest& request, const DeleteBudgetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBudgetRequest&;
    using Resp = DeleteBudgetResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBudget", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DeleteBudgetOutcomeCallable BillingClient::DeleteBudgetCallable(const DeleteBudgetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBudgetOutcome>>();
    DeleteBudgetAsync(
    request,
    [prom](
        const BillingClient*,
        const DeleteBudgetRequest&,
        DeleteBudgetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DeleteGatherRuleOutcome BillingClient::DeleteGatherRule(const DeleteGatherRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGatherRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGatherRuleResponse rsp = DeleteGatherRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGatherRuleOutcome(rsp);
        else
            return DeleteGatherRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteGatherRuleOutcome(outcome.GetError());
    }
}

void BillingClient::DeleteGatherRuleAsync(const DeleteGatherRuleRequest& request, const DeleteGatherRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGatherRuleRequest&;
    using Resp = DeleteGatherRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGatherRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DeleteGatherRuleOutcomeCallable BillingClient::DeleteGatherRuleCallable(const DeleteGatherRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGatherRuleOutcome>>();
    DeleteGatherRuleAsync(
    request,
    [prom](
        const BillingClient*,
        const DeleteGatherRuleRequest&,
        DeleteGatherRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeAccountBalanceOutcome BillingClient::DescribeAccountBalance(const DescribeAccountBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountBalanceResponse rsp = DescribeAccountBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountBalanceOutcome(rsp);
        else
            return DescribeAccountBalanceOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountBalanceOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAccountBalanceAsync(const DescribeAccountBalanceRequest& request, const DescribeAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountBalanceRequest&;
    using Resp = DescribeAccountBalanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountBalance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeAccountBalanceOutcomeCallable BillingClient::DescribeAccountBalanceCallable(const DescribeAccountBalanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountBalanceOutcome>>();
    DescribeAccountBalanceAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeAccountBalanceRequest&,
        DescribeAccountBalanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeAllocateConditionsOutcome BillingClient::DescribeAllocateConditions(const DescribeAllocateConditionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocateConditions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocateConditionsResponse rsp = DescribeAllocateConditionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocateConditionsOutcome(rsp);
        else
            return DescribeAllocateConditionsOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocateConditionsOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocateConditionsAsync(const DescribeAllocateConditionsRequest& request, const DescribeAllocateConditionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllocateConditionsRequest&;
    using Resp = DescribeAllocateConditionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllocateConditions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeAllocateConditionsOutcomeCallable BillingClient::DescribeAllocateConditionsCallable(const DescribeAllocateConditionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllocateConditionsOutcome>>();
    DescribeAllocateConditionsAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeAllocateConditionsRequest&,
        DescribeAllocateConditionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeAllocationBillConditionsOutcome BillingClient::DescribeAllocationBillConditions(const DescribeAllocationBillConditionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationBillConditions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationBillConditionsResponse rsp = DescribeAllocationBillConditionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationBillConditionsOutcome(rsp);
        else
            return DescribeAllocationBillConditionsOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationBillConditionsOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationBillConditionsAsync(const DescribeAllocationBillConditionsRequest& request, const DescribeAllocationBillConditionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllocationBillConditionsRequest&;
    using Resp = DescribeAllocationBillConditionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllocationBillConditions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeAllocationBillConditionsOutcomeCallable BillingClient::DescribeAllocationBillConditionsCallable(const DescribeAllocationBillConditionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllocationBillConditionsOutcome>>();
    DescribeAllocationBillConditionsAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeAllocationBillConditionsRequest&,
        DescribeAllocationBillConditionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeAllocationBillDetailOutcome BillingClient::DescribeAllocationBillDetail(const DescribeAllocationBillDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationBillDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationBillDetailResponse rsp = DescribeAllocationBillDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationBillDetailOutcome(rsp);
        else
            return DescribeAllocationBillDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationBillDetailOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationBillDetailAsync(const DescribeAllocationBillDetailRequest& request, const DescribeAllocationBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllocationBillDetailRequest&;
    using Resp = DescribeAllocationBillDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllocationBillDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeAllocationBillDetailOutcomeCallable BillingClient::DescribeAllocationBillDetailCallable(const DescribeAllocationBillDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllocationBillDetailOutcome>>();
    DescribeAllocationBillDetailAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeAllocationBillDetailRequest&,
        DescribeAllocationBillDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeAllocationMonthOverviewOutcome BillingClient::DescribeAllocationMonthOverview(const DescribeAllocationMonthOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationMonthOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationMonthOverviewResponse rsp = DescribeAllocationMonthOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationMonthOverviewOutcome(rsp);
        else
            return DescribeAllocationMonthOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationMonthOverviewOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationMonthOverviewAsync(const DescribeAllocationMonthOverviewRequest& request, const DescribeAllocationMonthOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllocationMonthOverviewRequest&;
    using Resp = DescribeAllocationMonthOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllocationMonthOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeAllocationMonthOverviewOutcomeCallable BillingClient::DescribeAllocationMonthOverviewCallable(const DescribeAllocationMonthOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllocationMonthOverviewOutcome>>();
    DescribeAllocationMonthOverviewAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeAllocationMonthOverviewRequest&,
        DescribeAllocationMonthOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeAllocationOverviewOutcome BillingClient::DescribeAllocationOverview(const DescribeAllocationOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationOverviewResponse rsp = DescribeAllocationOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationOverviewOutcome(rsp);
        else
            return DescribeAllocationOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationOverviewOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationOverviewAsync(const DescribeAllocationOverviewRequest& request, const DescribeAllocationOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllocationOverviewRequest&;
    using Resp = DescribeAllocationOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllocationOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeAllocationOverviewOutcomeCallable BillingClient::DescribeAllocationOverviewCallable(const DescribeAllocationOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllocationOverviewOutcome>>();
    DescribeAllocationOverviewAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeAllocationOverviewRequest&,
        DescribeAllocationOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeAllocationRuleDetailOutcome BillingClient::DescribeAllocationRuleDetail(const DescribeAllocationRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationRuleDetailResponse rsp = DescribeAllocationRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationRuleDetailOutcome(rsp);
        else
            return DescribeAllocationRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationRuleDetailOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationRuleDetailAsync(const DescribeAllocationRuleDetailRequest& request, const DescribeAllocationRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllocationRuleDetailRequest&;
    using Resp = DescribeAllocationRuleDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllocationRuleDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeAllocationRuleDetailOutcomeCallable BillingClient::DescribeAllocationRuleDetailCallable(const DescribeAllocationRuleDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllocationRuleDetailOutcome>>();
    DescribeAllocationRuleDetailAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeAllocationRuleDetailRequest&,
        DescribeAllocationRuleDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeAllocationRuleSummaryOutcome BillingClient::DescribeAllocationRuleSummary(const DescribeAllocationRuleSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationRuleSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationRuleSummaryResponse rsp = DescribeAllocationRuleSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationRuleSummaryOutcome(rsp);
        else
            return DescribeAllocationRuleSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationRuleSummaryOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationRuleSummaryAsync(const DescribeAllocationRuleSummaryRequest& request, const DescribeAllocationRuleSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllocationRuleSummaryRequest&;
    using Resp = DescribeAllocationRuleSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllocationRuleSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeAllocationRuleSummaryOutcomeCallable BillingClient::DescribeAllocationRuleSummaryCallable(const DescribeAllocationRuleSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllocationRuleSummaryOutcome>>();
    DescribeAllocationRuleSummaryAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeAllocationRuleSummaryRequest&,
        DescribeAllocationRuleSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeAllocationSummaryByBusinessOutcome BillingClient::DescribeAllocationSummaryByBusiness(const DescribeAllocationSummaryByBusinessRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationSummaryByBusiness");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationSummaryByBusinessResponse rsp = DescribeAllocationSummaryByBusinessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationSummaryByBusinessOutcome(rsp);
        else
            return DescribeAllocationSummaryByBusinessOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationSummaryByBusinessOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationSummaryByBusinessAsync(const DescribeAllocationSummaryByBusinessRequest& request, const DescribeAllocationSummaryByBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllocationSummaryByBusinessRequest&;
    using Resp = DescribeAllocationSummaryByBusinessResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllocationSummaryByBusiness", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeAllocationSummaryByBusinessOutcomeCallable BillingClient::DescribeAllocationSummaryByBusinessCallable(const DescribeAllocationSummaryByBusinessRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllocationSummaryByBusinessOutcome>>();
    DescribeAllocationSummaryByBusinessAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeAllocationSummaryByBusinessRequest&,
        DescribeAllocationSummaryByBusinessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeAllocationSummaryByItemOutcome BillingClient::DescribeAllocationSummaryByItem(const DescribeAllocationSummaryByItemRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationSummaryByItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationSummaryByItemResponse rsp = DescribeAllocationSummaryByItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationSummaryByItemOutcome(rsp);
        else
            return DescribeAllocationSummaryByItemOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationSummaryByItemOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationSummaryByItemAsync(const DescribeAllocationSummaryByItemRequest& request, const DescribeAllocationSummaryByItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllocationSummaryByItemRequest&;
    using Resp = DescribeAllocationSummaryByItemResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllocationSummaryByItem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeAllocationSummaryByItemOutcomeCallable BillingClient::DescribeAllocationSummaryByItemCallable(const DescribeAllocationSummaryByItemRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllocationSummaryByItemOutcome>>();
    DescribeAllocationSummaryByItemAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeAllocationSummaryByItemRequest&,
        DescribeAllocationSummaryByItemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeAllocationSummaryByResourceOutcome BillingClient::DescribeAllocationSummaryByResource(const DescribeAllocationSummaryByResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationSummaryByResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationSummaryByResourceResponse rsp = DescribeAllocationSummaryByResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationSummaryByResourceOutcome(rsp);
        else
            return DescribeAllocationSummaryByResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationSummaryByResourceOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationSummaryByResourceAsync(const DescribeAllocationSummaryByResourceRequest& request, const DescribeAllocationSummaryByResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllocationSummaryByResourceRequest&;
    using Resp = DescribeAllocationSummaryByResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllocationSummaryByResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeAllocationSummaryByResourceOutcomeCallable BillingClient::DescribeAllocationSummaryByResourceCallable(const DescribeAllocationSummaryByResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllocationSummaryByResourceOutcome>>();
    DescribeAllocationSummaryByResourceAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeAllocationSummaryByResourceRequest&,
        DescribeAllocationSummaryByResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeAllocationTreeOutcome BillingClient::DescribeAllocationTree(const DescribeAllocationTreeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationTree");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationTreeResponse rsp = DescribeAllocationTreeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationTreeOutcome(rsp);
        else
            return DescribeAllocationTreeOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationTreeOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationTreeAsync(const DescribeAllocationTreeRequest& request, const DescribeAllocationTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllocationTreeRequest&;
    using Resp = DescribeAllocationTreeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllocationTree", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeAllocationTreeOutcomeCallable BillingClient::DescribeAllocationTreeCallable(const DescribeAllocationTreeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllocationTreeOutcome>>();
    DescribeAllocationTreeAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeAllocationTreeRequest&,
        DescribeAllocationTreeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeAllocationTrendByMonthOutcome BillingClient::DescribeAllocationTrendByMonth(const DescribeAllocationTrendByMonthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationTrendByMonth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationTrendByMonthResponse rsp = DescribeAllocationTrendByMonthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationTrendByMonthOutcome(rsp);
        else
            return DescribeAllocationTrendByMonthOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationTrendByMonthOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationTrendByMonthAsync(const DescribeAllocationTrendByMonthRequest& request, const DescribeAllocationTrendByMonthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllocationTrendByMonthRequest&;
    using Resp = DescribeAllocationTrendByMonthResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllocationTrendByMonth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeAllocationTrendByMonthOutcomeCallable BillingClient::DescribeAllocationTrendByMonthCallable(const DescribeAllocationTrendByMonthRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllocationTrendByMonthOutcome>>();
    DescribeAllocationTrendByMonthAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeAllocationTrendByMonthRequest&,
        DescribeAllocationTrendByMonthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeAllocationUnitDetailOutcome BillingClient::DescribeAllocationUnitDetail(const DescribeAllocationUnitDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationUnitDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationUnitDetailResponse rsp = DescribeAllocationUnitDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationUnitDetailOutcome(rsp);
        else
            return DescribeAllocationUnitDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationUnitDetailOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationUnitDetailAsync(const DescribeAllocationUnitDetailRequest& request, const DescribeAllocationUnitDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllocationUnitDetailRequest&;
    using Resp = DescribeAllocationUnitDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllocationUnitDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeAllocationUnitDetailOutcomeCallable BillingClient::DescribeAllocationUnitDetailCallable(const DescribeAllocationUnitDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllocationUnitDetailOutcome>>();
    DescribeAllocationUnitDetailAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeAllocationUnitDetailRequest&,
        DescribeAllocationUnitDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBillAdjustInfoOutcome BillingClient::DescribeBillAdjustInfo(const DescribeBillAdjustInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillAdjustInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillAdjustInfoResponse rsp = DescribeBillAdjustInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillAdjustInfoOutcome(rsp);
        else
            return DescribeBillAdjustInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeBillAdjustInfoOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillAdjustInfoAsync(const DescribeBillAdjustInfoRequest& request, const DescribeBillAdjustInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillAdjustInfoRequest&;
    using Resp = DescribeBillAdjustInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillAdjustInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBillAdjustInfoOutcomeCallable BillingClient::DescribeBillAdjustInfoCallable(const DescribeBillAdjustInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillAdjustInfoOutcome>>();
    DescribeBillAdjustInfoAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBillAdjustInfoRequest&,
        DescribeBillAdjustInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBillDetailOutcome BillingClient::DescribeBillDetail(const DescribeBillDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillDetailResponse rsp = DescribeBillDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillDetailOutcome(rsp);
        else
            return DescribeBillDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBillDetailOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillDetailAsync(const DescribeBillDetailRequest& request, const DescribeBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillDetailRequest&;
    using Resp = DescribeBillDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBillDetailOutcomeCallable BillingClient::DescribeBillDetailCallable(const DescribeBillDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillDetailOutcome>>();
    DescribeBillDetailAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBillDetailRequest&,
        DescribeBillDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBillDetailForOrganizationOutcome BillingClient::DescribeBillDetailForOrganization(const DescribeBillDetailForOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillDetailForOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillDetailForOrganizationResponse rsp = DescribeBillDetailForOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillDetailForOrganizationOutcome(rsp);
        else
            return DescribeBillDetailForOrganizationOutcome(o.GetError());
    }
    else
    {
        return DescribeBillDetailForOrganizationOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillDetailForOrganizationAsync(const DescribeBillDetailForOrganizationRequest& request, const DescribeBillDetailForOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillDetailForOrganizationRequest&;
    using Resp = DescribeBillDetailForOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillDetailForOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBillDetailForOrganizationOutcomeCallable BillingClient::DescribeBillDetailForOrganizationCallable(const DescribeBillDetailForOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillDetailForOrganizationOutcome>>();
    DescribeBillDetailForOrganizationAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBillDetailForOrganizationRequest&,
        DescribeBillDetailForOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBillDownloadUrlOutcome BillingClient::DescribeBillDownloadUrl(const DescribeBillDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillDownloadUrlResponse rsp = DescribeBillDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillDownloadUrlOutcome(rsp);
        else
            return DescribeBillDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeBillDownloadUrlOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillDownloadUrlAsync(const DescribeBillDownloadUrlRequest& request, const DescribeBillDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillDownloadUrlRequest&;
    using Resp = DescribeBillDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBillDownloadUrlOutcomeCallable BillingClient::DescribeBillDownloadUrlCallable(const DescribeBillDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillDownloadUrlOutcome>>();
    DescribeBillDownloadUrlAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBillDownloadUrlRequest&,
        DescribeBillDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBillListOutcome BillingClient::DescribeBillList(const DescribeBillListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillListResponse rsp = DescribeBillListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillListOutcome(rsp);
        else
            return DescribeBillListOutcome(o.GetError());
    }
    else
    {
        return DescribeBillListOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillListAsync(const DescribeBillListRequest& request, const DescribeBillListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillListRequest&;
    using Resp = DescribeBillListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBillListOutcomeCallable BillingClient::DescribeBillListCallable(const DescribeBillListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillListOutcome>>();
    DescribeBillListAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBillListRequest&,
        DescribeBillListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBillResourceSummaryOutcome BillingClient::DescribeBillResourceSummary(const DescribeBillResourceSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillResourceSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillResourceSummaryResponse rsp = DescribeBillResourceSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillResourceSummaryOutcome(rsp);
        else
            return DescribeBillResourceSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeBillResourceSummaryOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillResourceSummaryAsync(const DescribeBillResourceSummaryRequest& request, const DescribeBillResourceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillResourceSummaryRequest&;
    using Resp = DescribeBillResourceSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillResourceSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBillResourceSummaryOutcomeCallable BillingClient::DescribeBillResourceSummaryCallable(const DescribeBillResourceSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillResourceSummaryOutcome>>();
    DescribeBillResourceSummaryAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBillResourceSummaryRequest&,
        DescribeBillResourceSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBillResourceSummaryForOrganizationOutcome BillingClient::DescribeBillResourceSummaryForOrganization(const DescribeBillResourceSummaryForOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillResourceSummaryForOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillResourceSummaryForOrganizationResponse rsp = DescribeBillResourceSummaryForOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillResourceSummaryForOrganizationOutcome(rsp);
        else
            return DescribeBillResourceSummaryForOrganizationOutcome(o.GetError());
    }
    else
    {
        return DescribeBillResourceSummaryForOrganizationOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillResourceSummaryForOrganizationAsync(const DescribeBillResourceSummaryForOrganizationRequest& request, const DescribeBillResourceSummaryForOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillResourceSummaryForOrganizationRequest&;
    using Resp = DescribeBillResourceSummaryForOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillResourceSummaryForOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBillResourceSummaryForOrganizationOutcomeCallable BillingClient::DescribeBillResourceSummaryForOrganizationCallable(const DescribeBillResourceSummaryForOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillResourceSummaryForOrganizationOutcome>>();
    DescribeBillResourceSummaryForOrganizationAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBillResourceSummaryForOrganizationRequest&,
        DescribeBillResourceSummaryForOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBillSummaryOutcome BillingClient::DescribeBillSummary(const DescribeBillSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryResponse rsp = DescribeBillSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryOutcome(rsp);
        else
            return DescribeBillSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryAsync(const DescribeBillSummaryRequest& request, const DescribeBillSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillSummaryRequest&;
    using Resp = DescribeBillSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBillSummaryOutcomeCallable BillingClient::DescribeBillSummaryCallable(const DescribeBillSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillSummaryOutcome>>();
    DescribeBillSummaryAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBillSummaryRequest&,
        DescribeBillSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBillSummaryByPayModeOutcome BillingClient::DescribeBillSummaryByPayMode(const DescribeBillSummaryByPayModeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByPayMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByPayModeResponse rsp = DescribeBillSummaryByPayModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByPayModeOutcome(rsp);
        else
            return DescribeBillSummaryByPayModeOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByPayModeOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryByPayModeAsync(const DescribeBillSummaryByPayModeRequest& request, const DescribeBillSummaryByPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillSummaryByPayModeRequest&;
    using Resp = DescribeBillSummaryByPayModeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillSummaryByPayMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBillSummaryByPayModeOutcomeCallable BillingClient::DescribeBillSummaryByPayModeCallable(const DescribeBillSummaryByPayModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillSummaryByPayModeOutcome>>();
    DescribeBillSummaryByPayModeAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBillSummaryByPayModeRequest&,
        DescribeBillSummaryByPayModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBillSummaryByProductOutcome BillingClient::DescribeBillSummaryByProduct(const DescribeBillSummaryByProductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByProductResponse rsp = DescribeBillSummaryByProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByProductOutcome(rsp);
        else
            return DescribeBillSummaryByProductOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByProductOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryByProductAsync(const DescribeBillSummaryByProductRequest& request, const DescribeBillSummaryByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillSummaryByProductRequest&;
    using Resp = DescribeBillSummaryByProductResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillSummaryByProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBillSummaryByProductOutcomeCallable BillingClient::DescribeBillSummaryByProductCallable(const DescribeBillSummaryByProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillSummaryByProductOutcome>>();
    DescribeBillSummaryByProductAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBillSummaryByProductRequest&,
        DescribeBillSummaryByProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBillSummaryByProjectOutcome BillingClient::DescribeBillSummaryByProject(const DescribeBillSummaryByProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByProjectResponse rsp = DescribeBillSummaryByProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByProjectOutcome(rsp);
        else
            return DescribeBillSummaryByProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByProjectOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryByProjectAsync(const DescribeBillSummaryByProjectRequest& request, const DescribeBillSummaryByProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillSummaryByProjectRequest&;
    using Resp = DescribeBillSummaryByProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillSummaryByProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBillSummaryByProjectOutcomeCallable BillingClient::DescribeBillSummaryByProjectCallable(const DescribeBillSummaryByProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillSummaryByProjectOutcome>>();
    DescribeBillSummaryByProjectAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBillSummaryByProjectRequest&,
        DescribeBillSummaryByProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBillSummaryByRegionOutcome BillingClient::DescribeBillSummaryByRegion(const DescribeBillSummaryByRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByRegionResponse rsp = DescribeBillSummaryByRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByRegionOutcome(rsp);
        else
            return DescribeBillSummaryByRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByRegionOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryByRegionAsync(const DescribeBillSummaryByRegionRequest& request, const DescribeBillSummaryByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillSummaryByRegionRequest&;
    using Resp = DescribeBillSummaryByRegionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillSummaryByRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBillSummaryByRegionOutcomeCallable BillingClient::DescribeBillSummaryByRegionCallable(const DescribeBillSummaryByRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillSummaryByRegionOutcome>>();
    DescribeBillSummaryByRegionAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBillSummaryByRegionRequest&,
        DescribeBillSummaryByRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBillSummaryByTagOutcome BillingClient::DescribeBillSummaryByTag(const DescribeBillSummaryByTagRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByTagResponse rsp = DescribeBillSummaryByTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByTagOutcome(rsp);
        else
            return DescribeBillSummaryByTagOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByTagOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryByTagAsync(const DescribeBillSummaryByTagRequest& request, const DescribeBillSummaryByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillSummaryByTagRequest&;
    using Resp = DescribeBillSummaryByTagResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillSummaryByTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBillSummaryByTagOutcomeCallable BillingClient::DescribeBillSummaryByTagCallable(const DescribeBillSummaryByTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillSummaryByTagOutcome>>();
    DescribeBillSummaryByTagAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBillSummaryByTagRequest&,
        DescribeBillSummaryByTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBillSummaryForOrganizationOutcome BillingClient::DescribeBillSummaryForOrganization(const DescribeBillSummaryForOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryForOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryForOrganizationResponse rsp = DescribeBillSummaryForOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryForOrganizationOutcome(rsp);
        else
            return DescribeBillSummaryForOrganizationOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryForOrganizationOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryForOrganizationAsync(const DescribeBillSummaryForOrganizationRequest& request, const DescribeBillSummaryForOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillSummaryForOrganizationRequest&;
    using Resp = DescribeBillSummaryForOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillSummaryForOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBillSummaryForOrganizationOutcomeCallable BillingClient::DescribeBillSummaryForOrganizationCallable(const DescribeBillSummaryForOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillSummaryForOrganizationOutcome>>();
    DescribeBillSummaryForOrganizationAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBillSummaryForOrganizationRequest&,
        DescribeBillSummaryForOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBudgetOutcome BillingClient::DescribeBudget(const DescribeBudgetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBudget");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBudgetResponse rsp = DescribeBudgetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBudgetOutcome(rsp);
        else
            return DescribeBudgetOutcome(o.GetError());
    }
    else
    {
        return DescribeBudgetOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBudgetAsync(const DescribeBudgetRequest& request, const DescribeBudgetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBudgetRequest&;
    using Resp = DescribeBudgetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBudget", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBudgetOutcomeCallable BillingClient::DescribeBudgetCallable(const DescribeBudgetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBudgetOutcome>>();
    DescribeBudgetAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBudgetRequest&,
        DescribeBudgetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBudgetOperationLogOutcome BillingClient::DescribeBudgetOperationLog(const DescribeBudgetOperationLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBudgetOperationLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBudgetOperationLogResponse rsp = DescribeBudgetOperationLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBudgetOperationLogOutcome(rsp);
        else
            return DescribeBudgetOperationLogOutcome(o.GetError());
    }
    else
    {
        return DescribeBudgetOperationLogOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBudgetOperationLogAsync(const DescribeBudgetOperationLogRequest& request, const DescribeBudgetOperationLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBudgetOperationLogRequest&;
    using Resp = DescribeBudgetOperationLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBudgetOperationLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBudgetOperationLogOutcomeCallable BillingClient::DescribeBudgetOperationLogCallable(const DescribeBudgetOperationLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBudgetOperationLogOutcome>>();
    DescribeBudgetOperationLogAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBudgetOperationLogRequest&,
        DescribeBudgetOperationLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeBudgetRemindRecordListOutcome BillingClient::DescribeBudgetRemindRecordList(const DescribeBudgetRemindRecordListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBudgetRemindRecordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBudgetRemindRecordListResponse rsp = DescribeBudgetRemindRecordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBudgetRemindRecordListOutcome(rsp);
        else
            return DescribeBudgetRemindRecordListOutcome(o.GetError());
    }
    else
    {
        return DescribeBudgetRemindRecordListOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBudgetRemindRecordListAsync(const DescribeBudgetRemindRecordListRequest& request, const DescribeBudgetRemindRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBudgetRemindRecordListRequest&;
    using Resp = DescribeBudgetRemindRecordListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBudgetRemindRecordList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeBudgetRemindRecordListOutcomeCallable BillingClient::DescribeBudgetRemindRecordListCallable(const DescribeBudgetRemindRecordListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBudgetRemindRecordListOutcome>>();
    DescribeBudgetRemindRecordListAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeBudgetRemindRecordListRequest&,
        DescribeBudgetRemindRecordListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeCostDetailOutcome BillingClient::DescribeCostDetail(const DescribeCostDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostDetailResponse rsp = DescribeCostDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostDetailOutcome(rsp);
        else
            return DescribeCostDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCostDetailOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostDetailAsync(const DescribeCostDetailRequest& request, const DescribeCostDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCostDetailRequest&;
    using Resp = DescribeCostDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCostDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeCostDetailOutcomeCallable BillingClient::DescribeCostDetailCallable(const DescribeCostDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCostDetailOutcome>>();
    DescribeCostDetailAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeCostDetailRequest&,
        DescribeCostDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeCostExplorerSummaryOutcome BillingClient::DescribeCostExplorerSummary(const DescribeCostExplorerSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostExplorerSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostExplorerSummaryResponse rsp = DescribeCostExplorerSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostExplorerSummaryOutcome(rsp);
        else
            return DescribeCostExplorerSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeCostExplorerSummaryOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostExplorerSummaryAsync(const DescribeCostExplorerSummaryRequest& request, const DescribeCostExplorerSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCostExplorerSummaryRequest&;
    using Resp = DescribeCostExplorerSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCostExplorerSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeCostExplorerSummaryOutcomeCallable BillingClient::DescribeCostExplorerSummaryCallable(const DescribeCostExplorerSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCostExplorerSummaryOutcome>>();
    DescribeCostExplorerSummaryAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeCostExplorerSummaryRequest&,
        DescribeCostExplorerSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeCostSummaryByProductOutcome BillingClient::DescribeCostSummaryByProduct(const DescribeCostSummaryByProductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostSummaryByProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostSummaryByProductResponse rsp = DescribeCostSummaryByProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostSummaryByProductOutcome(rsp);
        else
            return DescribeCostSummaryByProductOutcome(o.GetError());
    }
    else
    {
        return DescribeCostSummaryByProductOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostSummaryByProductAsync(const DescribeCostSummaryByProductRequest& request, const DescribeCostSummaryByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCostSummaryByProductRequest&;
    using Resp = DescribeCostSummaryByProductResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCostSummaryByProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeCostSummaryByProductOutcomeCallable BillingClient::DescribeCostSummaryByProductCallable(const DescribeCostSummaryByProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCostSummaryByProductOutcome>>();
    DescribeCostSummaryByProductAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeCostSummaryByProductRequest&,
        DescribeCostSummaryByProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeCostSummaryByProjectOutcome BillingClient::DescribeCostSummaryByProject(const DescribeCostSummaryByProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostSummaryByProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostSummaryByProjectResponse rsp = DescribeCostSummaryByProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostSummaryByProjectOutcome(rsp);
        else
            return DescribeCostSummaryByProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeCostSummaryByProjectOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostSummaryByProjectAsync(const DescribeCostSummaryByProjectRequest& request, const DescribeCostSummaryByProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCostSummaryByProjectRequest&;
    using Resp = DescribeCostSummaryByProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCostSummaryByProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeCostSummaryByProjectOutcomeCallable BillingClient::DescribeCostSummaryByProjectCallable(const DescribeCostSummaryByProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCostSummaryByProjectOutcome>>();
    DescribeCostSummaryByProjectAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeCostSummaryByProjectRequest&,
        DescribeCostSummaryByProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeCostSummaryByRegionOutcome BillingClient::DescribeCostSummaryByRegion(const DescribeCostSummaryByRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostSummaryByRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostSummaryByRegionResponse rsp = DescribeCostSummaryByRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostSummaryByRegionOutcome(rsp);
        else
            return DescribeCostSummaryByRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeCostSummaryByRegionOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostSummaryByRegionAsync(const DescribeCostSummaryByRegionRequest& request, const DescribeCostSummaryByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCostSummaryByRegionRequest&;
    using Resp = DescribeCostSummaryByRegionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCostSummaryByRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeCostSummaryByRegionOutcomeCallable BillingClient::DescribeCostSummaryByRegionCallable(const DescribeCostSummaryByRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCostSummaryByRegionOutcome>>();
    DescribeCostSummaryByRegionAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeCostSummaryByRegionRequest&,
        DescribeCostSummaryByRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeCostSummaryByResourceOutcome BillingClient::DescribeCostSummaryByResource(const DescribeCostSummaryByResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostSummaryByResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostSummaryByResourceResponse rsp = DescribeCostSummaryByResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostSummaryByResourceOutcome(rsp);
        else
            return DescribeCostSummaryByResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeCostSummaryByResourceOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostSummaryByResourceAsync(const DescribeCostSummaryByResourceRequest& request, const DescribeCostSummaryByResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCostSummaryByResourceRequest&;
    using Resp = DescribeCostSummaryByResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCostSummaryByResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeCostSummaryByResourceOutcomeCallable BillingClient::DescribeCostSummaryByResourceCallable(const DescribeCostSummaryByResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCostSummaryByResourceOutcome>>();
    DescribeCostSummaryByResourceAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeCostSummaryByResourceRequest&,
        DescribeCostSummaryByResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeCostSummaryByTagOutcome BillingClient::DescribeCostSummaryByTag(const DescribeCostSummaryByTagRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostSummaryByTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostSummaryByTagResponse rsp = DescribeCostSummaryByTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostSummaryByTagOutcome(rsp);
        else
            return DescribeCostSummaryByTagOutcome(o.GetError());
    }
    else
    {
        return DescribeCostSummaryByTagOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostSummaryByTagAsync(const DescribeCostSummaryByTagRequest& request, const DescribeCostSummaryByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCostSummaryByTagRequest&;
    using Resp = DescribeCostSummaryByTagResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCostSummaryByTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeCostSummaryByTagOutcomeCallable BillingClient::DescribeCostSummaryByTagCallable(const DescribeCostSummaryByTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCostSummaryByTagOutcome>>();
    DescribeCostSummaryByTagAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeCostSummaryByTagRequest&,
        DescribeCostSummaryByTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeDealsByCondOutcome BillingClient::DescribeDealsByCond(const DescribeDealsByCondRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDealsByCond");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDealsByCondResponse rsp = DescribeDealsByCondResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDealsByCondOutcome(rsp);
        else
            return DescribeDealsByCondOutcome(o.GetError());
    }
    else
    {
        return DescribeDealsByCondOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeDealsByCondAsync(const DescribeDealsByCondRequest& request, const DescribeDealsByCondAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDealsByCondRequest&;
    using Resp = DescribeDealsByCondResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDealsByCond", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeDealsByCondOutcomeCallable BillingClient::DescribeDealsByCondCallable(const DescribeDealsByCondRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDealsByCondOutcome>>();
    DescribeDealsByCondAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeDealsByCondRequest&,
        DescribeDealsByCondOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeDosageCosDetailByDateOutcome BillingClient::DescribeDosageCosDetailByDate(const DescribeDosageCosDetailByDateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDosageCosDetailByDate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDosageCosDetailByDateResponse rsp = DescribeDosageCosDetailByDateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDosageCosDetailByDateOutcome(rsp);
        else
            return DescribeDosageCosDetailByDateOutcome(o.GetError());
    }
    else
    {
        return DescribeDosageCosDetailByDateOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeDosageCosDetailByDateAsync(const DescribeDosageCosDetailByDateRequest& request, const DescribeDosageCosDetailByDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDosageCosDetailByDateRequest&;
    using Resp = DescribeDosageCosDetailByDateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDosageCosDetailByDate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeDosageCosDetailByDateOutcomeCallable BillingClient::DescribeDosageCosDetailByDateCallable(const DescribeDosageCosDetailByDateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDosageCosDetailByDateOutcome>>();
    DescribeDosageCosDetailByDateAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeDosageCosDetailByDateRequest&,
        DescribeDosageCosDetailByDateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeDosageDetailByDateOutcome BillingClient::DescribeDosageDetailByDate(const DescribeDosageDetailByDateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDosageDetailByDate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDosageDetailByDateResponse rsp = DescribeDosageDetailByDateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDosageDetailByDateOutcome(rsp);
        else
            return DescribeDosageDetailByDateOutcome(o.GetError());
    }
    else
    {
        return DescribeDosageDetailByDateOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeDosageDetailByDateAsync(const DescribeDosageDetailByDateRequest& request, const DescribeDosageDetailByDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDosageDetailByDateRequest&;
    using Resp = DescribeDosageDetailByDateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDosageDetailByDate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeDosageDetailByDateOutcomeCallable BillingClient::DescribeDosageDetailByDateCallable(const DescribeDosageDetailByDateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDosageDetailByDateOutcome>>();
    DescribeDosageDetailByDateAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeDosageDetailByDateRequest&,
        DescribeDosageDetailByDateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeDosageDetailListOutcome BillingClient::DescribeDosageDetailList(const DescribeDosageDetailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDosageDetailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDosageDetailListResponse rsp = DescribeDosageDetailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDosageDetailListOutcome(rsp);
        else
            return DescribeDosageDetailListOutcome(o.GetError());
    }
    else
    {
        return DescribeDosageDetailListOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeDosageDetailListAsync(const DescribeDosageDetailListRequest& request, const DescribeDosageDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDosageDetailListRequest&;
    using Resp = DescribeDosageDetailListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDosageDetailList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeDosageDetailListOutcomeCallable BillingClient::DescribeDosageDetailListCallable(const DescribeDosageDetailListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDosageDetailListOutcome>>();
    DescribeDosageDetailListAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeDosageDetailListRequest&,
        DescribeDosageDetailListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeGatherResourceOutcome BillingClient::DescribeGatherResource(const DescribeGatherResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatherResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatherResourceResponse rsp = DescribeGatherResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatherResourceOutcome(rsp);
        else
            return DescribeGatherResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeGatherResourceOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeGatherResourceAsync(const DescribeGatherResourceRequest& request, const DescribeGatherResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatherResourceRequest&;
    using Resp = DescribeGatherResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatherResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeGatherResourceOutcomeCallable BillingClient::DescribeGatherResourceCallable(const DescribeGatherResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatherResourceOutcome>>();
    DescribeGatherResourceAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeGatherResourceRequest&,
        DescribeGatherResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeGatherRuleDetailOutcome BillingClient::DescribeGatherRuleDetail(const DescribeGatherRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatherRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatherRuleDetailResponse rsp = DescribeGatherRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatherRuleDetailOutcome(rsp);
        else
            return DescribeGatherRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeGatherRuleDetailOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeGatherRuleDetailAsync(const DescribeGatherRuleDetailRequest& request, const DescribeGatherRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatherRuleDetailRequest&;
    using Resp = DescribeGatherRuleDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatherRuleDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeGatherRuleDetailOutcomeCallable BillingClient::DescribeGatherRuleDetailCallable(const DescribeGatherRuleDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatherRuleDetailOutcome>>();
    DescribeGatherRuleDetailAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeGatherRuleDetailRequest&,
        DescribeGatherRuleDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeRenewInstancesOutcome BillingClient::DescribeRenewInstances(const DescribeRenewInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRenewInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRenewInstancesResponse rsp = DescribeRenewInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRenewInstancesOutcome(rsp);
        else
            return DescribeRenewInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeRenewInstancesOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeRenewInstancesAsync(const DescribeRenewInstancesRequest& request, const DescribeRenewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRenewInstancesRequest&;
    using Resp = DescribeRenewInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRenewInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeRenewInstancesOutcomeCallable BillingClient::DescribeRenewInstancesCallable(const DescribeRenewInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRenewInstancesOutcome>>();
    DescribeRenewInstancesAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeRenewInstancesRequest&,
        DescribeRenewInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeSavingPlanResourceInfoOutcome BillingClient::DescribeSavingPlanResourceInfo(const DescribeSavingPlanResourceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSavingPlanResourceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSavingPlanResourceInfoResponse rsp = DescribeSavingPlanResourceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSavingPlanResourceInfoOutcome(rsp);
        else
            return DescribeSavingPlanResourceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSavingPlanResourceInfoOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeSavingPlanResourceInfoAsync(const DescribeSavingPlanResourceInfoRequest& request, const DescribeSavingPlanResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSavingPlanResourceInfoRequest&;
    using Resp = DescribeSavingPlanResourceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSavingPlanResourceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeSavingPlanResourceInfoOutcomeCallable BillingClient::DescribeSavingPlanResourceInfoCallable(const DescribeSavingPlanResourceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSavingPlanResourceInfoOutcome>>();
    DescribeSavingPlanResourceInfoAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeSavingPlanResourceInfoRequest&,
        DescribeSavingPlanResourceInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeTagListOutcome BillingClient::DescribeTagList(const DescribeTagListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagListResponse rsp = DescribeTagListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagListOutcome(rsp);
        else
            return DescribeTagListOutcome(o.GetError());
    }
    else
    {
        return DescribeTagListOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeTagListAsync(const DescribeTagListRequest& request, const DescribeTagListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTagListRequest&;
    using Resp = DescribeTagListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTagList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeTagListOutcomeCallable BillingClient::DescribeTagListCallable(const DescribeTagListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagListOutcome>>();
    DescribeTagListAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeTagListRequest&,
        DescribeTagListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeVoucherInfoOutcome BillingClient::DescribeVoucherInfo(const DescribeVoucherInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVoucherInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVoucherInfoResponse rsp = DescribeVoucherInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVoucherInfoOutcome(rsp);
        else
            return DescribeVoucherInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeVoucherInfoOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeVoucherInfoAsync(const DescribeVoucherInfoRequest& request, const DescribeVoucherInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVoucherInfoRequest&;
    using Resp = DescribeVoucherInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVoucherInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeVoucherInfoOutcomeCallable BillingClient::DescribeVoucherInfoCallable(const DescribeVoucherInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVoucherInfoOutcome>>();
    DescribeVoucherInfoAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeVoucherInfoRequest&,
        DescribeVoucherInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::DescribeVoucherUsageDetailsOutcome BillingClient::DescribeVoucherUsageDetails(const DescribeVoucherUsageDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVoucherUsageDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVoucherUsageDetailsResponse rsp = DescribeVoucherUsageDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVoucherUsageDetailsOutcome(rsp);
        else
            return DescribeVoucherUsageDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeVoucherUsageDetailsOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeVoucherUsageDetailsAsync(const DescribeVoucherUsageDetailsRequest& request, const DescribeVoucherUsageDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVoucherUsageDetailsRequest&;
    using Resp = DescribeVoucherUsageDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVoucherUsageDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::DescribeVoucherUsageDetailsOutcomeCallable BillingClient::DescribeVoucherUsageDetailsCallable(const DescribeVoucherUsageDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVoucherUsageDetailsOutcome>>();
    DescribeVoucherUsageDetailsAsync(
    request,
    [prom](
        const BillingClient*,
        const DescribeVoucherUsageDetailsRequest&,
        DescribeVoucherUsageDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::ModifyAllocationRuleOutcome BillingClient::ModifyAllocationRule(const ModifyAllocationRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAllocationRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAllocationRuleResponse rsp = ModifyAllocationRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAllocationRuleOutcome(rsp);
        else
            return ModifyAllocationRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyAllocationRuleOutcome(outcome.GetError());
    }
}

void BillingClient::ModifyAllocationRuleAsync(const ModifyAllocationRuleRequest& request, const ModifyAllocationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAllocationRuleRequest&;
    using Resp = ModifyAllocationRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAllocationRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::ModifyAllocationRuleOutcomeCallable BillingClient::ModifyAllocationRuleCallable(const ModifyAllocationRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAllocationRuleOutcome>>();
    ModifyAllocationRuleAsync(
    request,
    [prom](
        const BillingClient*,
        const ModifyAllocationRuleRequest&,
        ModifyAllocationRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::ModifyAllocationUnitOutcome BillingClient::ModifyAllocationUnit(const ModifyAllocationUnitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAllocationUnit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAllocationUnitResponse rsp = ModifyAllocationUnitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAllocationUnitOutcome(rsp);
        else
            return ModifyAllocationUnitOutcome(o.GetError());
    }
    else
    {
        return ModifyAllocationUnitOutcome(outcome.GetError());
    }
}

void BillingClient::ModifyAllocationUnitAsync(const ModifyAllocationUnitRequest& request, const ModifyAllocationUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAllocationUnitRequest&;
    using Resp = ModifyAllocationUnitResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAllocationUnit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::ModifyAllocationUnitOutcomeCallable BillingClient::ModifyAllocationUnitCallable(const ModifyAllocationUnitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAllocationUnitOutcome>>();
    ModifyAllocationUnitAsync(
    request,
    [prom](
        const BillingClient*,
        const ModifyAllocationUnitRequest&,
        ModifyAllocationUnitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::ModifyBudgetOutcome BillingClient::ModifyBudget(const ModifyBudgetRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBudget");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBudgetResponse rsp = ModifyBudgetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBudgetOutcome(rsp);
        else
            return ModifyBudgetOutcome(o.GetError());
    }
    else
    {
        return ModifyBudgetOutcome(outcome.GetError());
    }
}

void BillingClient::ModifyBudgetAsync(const ModifyBudgetRequest& request, const ModifyBudgetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBudgetRequest&;
    using Resp = ModifyBudgetResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBudget", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::ModifyBudgetOutcomeCallable BillingClient::ModifyBudgetCallable(const ModifyBudgetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBudgetOutcome>>();
    ModifyBudgetAsync(
    request,
    [prom](
        const BillingClient*,
        const ModifyBudgetRequest&,
        ModifyBudgetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::ModifyGatherRuleOutcome BillingClient::ModifyGatherRule(const ModifyGatherRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGatherRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGatherRuleResponse rsp = ModifyGatherRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGatherRuleOutcome(rsp);
        else
            return ModifyGatherRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyGatherRuleOutcome(outcome.GetError());
    }
}

void BillingClient::ModifyGatherRuleAsync(const ModifyGatherRuleRequest& request, const ModifyGatherRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGatherRuleRequest&;
    using Resp = ModifyGatherRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGatherRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::ModifyGatherRuleOutcomeCallable BillingClient::ModifyGatherRuleCallable(const ModifyGatherRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGatherRuleOutcome>>();
    ModifyGatherRuleAsync(
    request,
    [prom](
        const BillingClient*,
        const ModifyGatherRuleRequest&,
        ModifyGatherRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::PayDealsOutcome BillingClient::PayDeals(const PayDealsRequest &request)
{
    auto outcome = MakeRequest(request, "PayDeals");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PayDealsResponse rsp = PayDealsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PayDealsOutcome(rsp);
        else
            return PayDealsOutcome(o.GetError());
    }
    else
    {
        return PayDealsOutcome(outcome.GetError());
    }
}

void BillingClient::PayDealsAsync(const PayDealsRequest& request, const PayDealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PayDealsRequest&;
    using Resp = PayDealsResponse;

    DoRequestAsync<Req, Resp>(
        "PayDeals", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::PayDealsOutcomeCallable BillingClient::PayDealsCallable(const PayDealsRequest &request)
{
    const auto prom = std::make_shared<std::promise<PayDealsOutcome>>();
    PayDealsAsync(
    request,
    [prom](
        const BillingClient*,
        const PayDealsRequest&,
        PayDealsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::RefundInstanceOutcome BillingClient::RefundInstance(const RefundInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RefundInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefundInstanceResponse rsp = RefundInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefundInstanceOutcome(rsp);
        else
            return RefundInstanceOutcome(o.GetError());
    }
    else
    {
        return RefundInstanceOutcome(outcome.GetError());
    }
}

void BillingClient::RefundInstanceAsync(const RefundInstanceRequest& request, const RefundInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RefundInstanceRequest&;
    using Resp = RefundInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RefundInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::RefundInstanceOutcomeCallable BillingClient::RefundInstanceCallable(const RefundInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefundInstanceOutcome>>();
    RefundInstanceAsync(
    request,
    [prom](
        const BillingClient*,
        const RefundInstanceRequest&,
        RefundInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BillingClient::RenewInstanceOutcome BillingClient::RenewInstance(const RenewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewInstanceResponse rsp = RenewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewInstanceOutcome(rsp);
        else
            return RenewInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewInstanceOutcome(outcome.GetError());
    }
}

void BillingClient::RenewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewInstanceRequest&;
    using Resp = RenewInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RenewInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BillingClient::RenewInstanceOutcomeCallable BillingClient::RenewInstanceCallable(const RenewInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewInstanceOutcome>>();
    RenewInstanceAsync(
    request,
    [prom](
        const BillingClient*,
        const RenewInstanceRequest&,
        RenewInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

