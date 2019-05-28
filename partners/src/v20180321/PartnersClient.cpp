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

PartnersClient::DescribeClientBalanceOutcome PartnersClient::DescribeClientBalance(const DescribeClientBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClientBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientBalanceResponse rsp = DescribeClientBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientBalanceOutcome(rsp);
        else
            return DescribeClientBalanceOutcome(o.GetError());
    }
    else
    {
        return DescribeClientBalanceOutcome(outcome.GetError());
    }
}

void PartnersClient::DescribeClientBalanceAsync(const DescribeClientBalanceRequest& request, const DescribeClientBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClientBalance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PartnersClient::DescribeClientBalanceOutcomeCallable PartnersClient::DescribeClientBalanceCallable(const DescribeClientBalanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClientBalanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeClientBalance(request);
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

