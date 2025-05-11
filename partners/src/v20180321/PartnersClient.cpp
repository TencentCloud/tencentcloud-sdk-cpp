/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AgentPayDeals(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::AgentPayDealsOutcomeCallable PartnersClient::AgentPayDealsCallable(const AgentPayDealsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AgentPayDealsOutcome()>>(
        [this, request]()
        {
            return this->AgentPayDeals(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AgentTransferMoney(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::AgentTransferMoneyOutcomeCallable PartnersClient::AgentTransferMoneyCallable(const AgentTransferMoneyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AgentTransferMoneyOutcome()>>(
        [this, request]()
        {
            return this->AgentTransferMoney(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssignClientsToSales(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::AssignClientsToSalesOutcomeCallable PartnersClient::AssignClientsToSalesCallable(const AssignClientsToSalesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssignClientsToSalesOutcome()>>(
        [this, request]()
        {
            return this->AssignClientsToSales(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AuditApplyClient(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::AuditApplyClientOutcomeCallable PartnersClient::AuditApplyClientCallable(const AuditApplyClientRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AuditApplyClientOutcome()>>(
        [this, request]()
        {
            return this->AuditApplyClient(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePayRelationForClient(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::CreatePayRelationForClientOutcomeCallable PartnersClient::CreatePayRelationForClientCallable(const CreatePayRelationForClientRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePayRelationForClientOutcome()>>(
        [this, request]()
        {
            return this->CreatePayRelationForClient(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentAuditedClients(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeAgentAuditedClientsOutcomeCallable PartnersClient::DescribeAgentAuditedClientsCallable(const DescribeAgentAuditedClientsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentAuditedClientsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentAuditedClients(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentBills(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeAgentBillsOutcomeCallable PartnersClient::DescribeAgentBillsCallable(const DescribeAgentBillsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentBillsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentBills(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentClientGrade(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeAgentClientGradeOutcomeCallable PartnersClient::DescribeAgentClientGradeCallable(const DescribeAgentClientGradeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentClientGradeOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentClientGrade(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentClients(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeAgentClientsOutcomeCallable PartnersClient::DescribeAgentClientsCallable(const DescribeAgentClientsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentClientsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentClients(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentDealsByCache(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeAgentDealsByCacheOutcomeCallable PartnersClient::DescribeAgentDealsByCacheCallable(const DescribeAgentDealsByCacheRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentDealsByCacheOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentDealsByCache(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentDealsPriceDetailByDealName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeAgentDealsPriceDetailByDealNameOutcomeCallable PartnersClient::DescribeAgentDealsPriceDetailByDealNameCallable(const DescribeAgentDealsPriceDetailByDealNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentDealsPriceDetailByDealNameOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentDealsPriceDetailByDealName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentPayDealsV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeAgentPayDealsV2OutcomeCallable PartnersClient::DescribeAgentPayDealsV2Callable(const DescribeAgentPayDealsV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentPayDealsV2Outcome()>>(
        [this, request]()
        {
            return this->DescribeAgentPayDealsV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentRelateBigDealIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeAgentRelateBigDealIdsOutcomeCallable PartnersClient::DescribeAgentRelateBigDealIdsCallable(const DescribeAgentRelateBigDealIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentRelateBigDealIdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentRelateBigDealIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentSelfPayDealsV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeAgentSelfPayDealsV2OutcomeCallable PartnersClient::DescribeAgentSelfPayDealsV2Callable(const DescribeAgentSelfPayDealsV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentSelfPayDealsV2Outcome()>>(
        [this, request]()
        {
            return this->DescribeAgentSelfPayDealsV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClientBalanceNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeClientBalanceNewOutcomeCallable PartnersClient::DescribeClientBalanceNewCallable(const DescribeClientBalanceNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClientBalanceNewOutcome()>>(
        [this, request]()
        {
            return this->DescribeClientBalanceNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClientJoinIncreaseList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeClientJoinIncreaseListOutcomeCallable PartnersClient::DescribeClientJoinIncreaseListCallable(const DescribeClientJoinIncreaseListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClientJoinIncreaseListOutcome()>>(
        [this, request]()
        {
            return this->DescribeClientJoinIncreaseList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClientSwitchTraTaskInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeClientSwitchTraTaskInfoOutcomeCallable PartnersClient::DescribeClientSwitchTraTaskInfoCallable(const DescribeClientSwitchTraTaskInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClientSwitchTraTaskInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeClientSwitchTraTaskInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRebateInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeRebateInfosOutcomeCallable PartnersClient::DescribeRebateInfosCallable(const DescribeRebateInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRebateInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeRebateInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRebateInfosNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeRebateInfosNewOutcomeCallable PartnersClient::DescribeRebateInfosNewCallable(const DescribeRebateInfosNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRebateInfosNewOutcome()>>(
        [this, request]()
        {
            return this->DescribeRebateInfosNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSalesmans(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeSalesmansOutcomeCallable PartnersClient::DescribeSalesmansCallable(const DescribeSalesmansRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSalesmansOutcome()>>(
        [this, request]()
        {
            return this->DescribeSalesmans(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnbindClientList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeUnbindClientListOutcomeCallable PartnersClient::DescribeUnbindClientListCallable(const DescribeUnbindClientListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnbindClientListOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnbindClientList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClientRemark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::ModifyClientRemarkOutcomeCallable PartnersClient::ModifyClientRemarkCallable(const ModifyClientRemarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClientRemarkOutcome()>>(
        [this, request]()
        {
            return this->ModifyClientRemark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemovePayRelationForClient(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::RemovePayRelationForClientOutcomeCallable PartnersClient::RemovePayRelationForClientCallable(const RemovePayRelationForClientRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemovePayRelationForClientOutcome()>>(
        [this, request]()
        {
            return this->RemovePayRelationForClient(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

