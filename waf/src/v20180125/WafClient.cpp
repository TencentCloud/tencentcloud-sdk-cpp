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

#include <tencentcloud/waf/v20180125/WafClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Waf::V20180125;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-01-25";
    const string ENDPOINT = "waf.tencentcloudapi.com";
}

WafClient::WafClient(const Credential &credential, const string &region) :
    WafClient(credential, region, ClientProfile())
{
}

WafClient::WafClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WafClient::AddCustomRuleOutcome WafClient::AddCustomRule(const AddCustomRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddCustomRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCustomRuleResponse rsp = AddCustomRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCustomRuleOutcome(rsp);
        else
            return AddCustomRuleOutcome(o.GetError());
    }
    else
    {
        return AddCustomRuleOutcome(outcome.GetError());
    }
}

void WafClient::AddCustomRuleAsync(const AddCustomRuleRequest& request, const AddCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCustomRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::AddCustomRuleOutcomeCallable WafClient::AddCustomRuleCallable(const AddCustomRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCustomRuleOutcome()>>(
        [this, request]()
        {
            return this->AddCustomRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::CreateAttackDownloadTaskOutcome WafClient::CreateAttackDownloadTask(const CreateAttackDownloadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAttackDownloadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAttackDownloadTaskResponse rsp = CreateAttackDownloadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAttackDownloadTaskOutcome(rsp);
        else
            return CreateAttackDownloadTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAttackDownloadTaskOutcome(outcome.GetError());
    }
}

void WafClient::CreateAttackDownloadTaskAsync(const CreateAttackDownloadTaskRequest& request, const CreateAttackDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAttackDownloadTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::CreateAttackDownloadTaskOutcomeCallable WafClient::CreateAttackDownloadTaskCallable(const CreateAttackDownloadTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAttackDownloadTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAttackDownloadTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DeleteAttackDownloadRecordOutcome WafClient::DeleteAttackDownloadRecord(const DeleteAttackDownloadRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAttackDownloadRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAttackDownloadRecordResponse rsp = DeleteAttackDownloadRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAttackDownloadRecordOutcome(rsp);
        else
            return DeleteAttackDownloadRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteAttackDownloadRecordOutcome(outcome.GetError());
    }
}

void WafClient::DeleteAttackDownloadRecordAsync(const DeleteAttackDownloadRecordRequest& request, const DeleteAttackDownloadRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAttackDownloadRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteAttackDownloadRecordOutcomeCallable WafClient::DeleteAttackDownloadRecordCallable(const DeleteAttackDownloadRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAttackDownloadRecordOutcome()>>(
        [this, request]()
        {
            return this->DeleteAttackDownloadRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DeleteDownloadRecordOutcome WafClient::DeleteDownloadRecord(const DeleteDownloadRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDownloadRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDownloadRecordResponse rsp = DeleteDownloadRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDownloadRecordOutcome(rsp);
        else
            return DeleteDownloadRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteDownloadRecordOutcome(outcome.GetError());
    }
}

void WafClient::DeleteDownloadRecordAsync(const DeleteDownloadRecordRequest& request, const DeleteDownloadRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDownloadRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteDownloadRecordOutcomeCallable WafClient::DeleteDownloadRecordCallable(const DeleteDownloadRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDownloadRecordOutcome()>>(
        [this, request]()
        {
            return this->DeleteDownloadRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DeleteSessionOutcome WafClient::DeleteSession(const DeleteSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSessionResponse rsp = DeleteSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSessionOutcome(rsp);
        else
            return DeleteSessionOutcome(o.GetError());
    }
    else
    {
        return DeleteSessionOutcome(outcome.GetError());
    }
}

void WafClient::DeleteSessionAsync(const DeleteSessionRequest& request, const DeleteSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteSessionOutcomeCallable WafClient::DeleteSessionCallable(const DeleteSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSessionOutcome()>>(
        [this, request]()
        {
            return this->DeleteSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeCustomRulesOutcome WafClient::DescribeCustomRules(const DescribeCustomRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomRulesResponse rsp = DescribeCustomRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomRulesOutcome(rsp);
        else
            return DescribeCustomRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomRulesOutcome(outcome.GetError());
    }
}

void WafClient::DescribeCustomRulesAsync(const DescribeCustomRulesRequest& request, const DescribeCustomRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeCustomRulesOutcomeCallable WafClient::DescribeCustomRulesCallable(const DescribeCustomRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeFlowTrendOutcome WafClient::DescribeFlowTrend(const DescribeFlowTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowTrendResponse rsp = DescribeFlowTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowTrendOutcome(rsp);
        else
            return DescribeFlowTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowTrendOutcome(outcome.GetError());
    }
}

void WafClient::DescribeFlowTrendAsync(const DescribeFlowTrendRequest& request, const DescribeFlowTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeFlowTrendOutcomeCallable WafClient::DescribeFlowTrendCallable(const DescribeFlowTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeUserClbWafRegionsOutcome WafClient::DescribeUserClbWafRegions(const DescribeUserClbWafRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserClbWafRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserClbWafRegionsResponse rsp = DescribeUserClbWafRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserClbWafRegionsOutcome(rsp);
        else
            return DescribeUserClbWafRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeUserClbWafRegionsOutcome(outcome.GetError());
    }
}

void WafClient::DescribeUserClbWafRegionsAsync(const DescribeUserClbWafRegionsRequest& request, const DescribeUserClbWafRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserClbWafRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeUserClbWafRegionsOutcomeCallable WafClient::DescribeUserClbWafRegionsCallable(const DescribeUserClbWafRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserClbWafRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserClbWafRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::ModifyAccessPeriodOutcome WafClient::ModifyAccessPeriod(const ModifyAccessPeriodRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccessPeriod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccessPeriodResponse rsp = ModifyAccessPeriodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccessPeriodOutcome(rsp);
        else
            return ModifyAccessPeriodOutcome(o.GetError());
    }
    else
    {
        return ModifyAccessPeriodOutcome(outcome.GetError());
    }
}

void WafClient::ModifyAccessPeriodAsync(const ModifyAccessPeriodRequest& request, const ModifyAccessPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccessPeriod(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyAccessPeriodOutcomeCallable WafClient::ModifyAccessPeriodCallable(const ModifyAccessPeriodRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccessPeriodOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccessPeriod(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::ModifyCustomRuleStatusOutcome WafClient::ModifyCustomRuleStatus(const ModifyCustomRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomRuleStatusResponse rsp = ModifyCustomRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomRuleStatusOutcome(rsp);
        else
            return ModifyCustomRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomRuleStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyCustomRuleStatusAsync(const ModifyCustomRuleStatusRequest& request, const ModifyCustomRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyCustomRuleStatusOutcomeCallable WafClient::ModifyCustomRuleStatusCallable(const ModifyCustomRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

