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

#include <tencentcloud/gpm/v20200820/GpmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Gpm::V20200820;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-08-20";
    const string ENDPOINT = "gpm.tencentcloudapi.com";
}

GpmClient::GpmClient(const Credential &credential, const string &region) :
    GpmClient(credential, region, ClientProfile())
{
}

GpmClient::GpmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GpmClient::CancelMatchingOutcome GpmClient::CancelMatching(const CancelMatchingRequest &request)
{
    auto outcome = MakeRequest(request, "CancelMatching");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelMatchingResponse rsp = CancelMatchingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelMatchingOutcome(rsp);
        else
            return CancelMatchingOutcome(o.GetError());
    }
    else
    {
        return CancelMatchingOutcome(outcome.GetError());
    }
}

void GpmClient::CancelMatchingAsync(const CancelMatchingRequest& request, const CancelMatchingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelMatching(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::CancelMatchingOutcomeCallable GpmClient::CancelMatchingCallable(const CancelMatchingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelMatchingOutcome()>>(
        [this, request]()
        {
            return this->CancelMatching(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::CreateMatchOutcome GpmClient::CreateMatch(const CreateMatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMatchResponse rsp = CreateMatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMatchOutcome(rsp);
        else
            return CreateMatchOutcome(o.GetError());
    }
    else
    {
        return CreateMatchOutcome(outcome.GetError());
    }
}

void GpmClient::CreateMatchAsync(const CreateMatchRequest& request, const CreateMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::CreateMatchOutcomeCallable GpmClient::CreateMatchCallable(const CreateMatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMatchOutcome()>>(
        [this, request]()
        {
            return this->CreateMatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::CreateRuleOutcome GpmClient::CreateRule(const CreateRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRuleResponse rsp = CreateRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRuleOutcome(rsp);
        else
            return CreateRuleOutcome(o.GetError());
    }
    else
    {
        return CreateRuleOutcome(outcome.GetError());
    }
}

void GpmClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::CreateRuleOutcomeCallable GpmClient::CreateRuleCallable(const CreateRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::DeleteMatchOutcome GpmClient::DeleteMatch(const DeleteMatchRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMatchResponse rsp = DeleteMatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMatchOutcome(rsp);
        else
            return DeleteMatchOutcome(o.GetError());
    }
    else
    {
        return DeleteMatchOutcome(outcome.GetError());
    }
}

void GpmClient::DeleteMatchAsync(const DeleteMatchRequest& request, const DeleteMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::DeleteMatchOutcomeCallable GpmClient::DeleteMatchCallable(const DeleteMatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMatchOutcome()>>(
        [this, request]()
        {
            return this->DeleteMatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::DeleteRuleOutcome GpmClient::DeleteRule(const DeleteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRuleResponse rsp = DeleteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRuleOutcome(rsp);
        else
            return DeleteRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteRuleOutcome(outcome.GetError());
    }
}

void GpmClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::DeleteRuleOutcomeCallable GpmClient::DeleteRuleCallable(const DeleteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::DescribeDataOutcome GpmClient::DescribeData(const DescribeDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataResponse rsp = DescribeDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataOutcome(rsp);
        else
            return DescribeDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDataOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeDataAsync(const DescribeDataRequest& request, const DescribeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::DescribeDataOutcomeCallable GpmClient::DescribeDataCallable(const DescribeDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::DescribeMatchOutcome GpmClient::DescribeMatch(const DescribeMatchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMatchResponse rsp = DescribeMatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMatchOutcome(rsp);
        else
            return DescribeMatchOutcome(o.GetError());
    }
    else
    {
        return DescribeMatchOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeMatchAsync(const DescribeMatchRequest& request, const DescribeMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::DescribeMatchOutcomeCallable GpmClient::DescribeMatchCallable(const DescribeMatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMatchOutcome()>>(
        [this, request]()
        {
            return this->DescribeMatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::DescribeMatchCodesOutcome GpmClient::DescribeMatchCodes(const DescribeMatchCodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMatchCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMatchCodesResponse rsp = DescribeMatchCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMatchCodesOutcome(rsp);
        else
            return DescribeMatchCodesOutcome(o.GetError());
    }
    else
    {
        return DescribeMatchCodesOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeMatchCodesAsync(const DescribeMatchCodesRequest& request, const DescribeMatchCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMatchCodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::DescribeMatchCodesOutcomeCallable GpmClient::DescribeMatchCodesCallable(const DescribeMatchCodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMatchCodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeMatchCodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::DescribeMatchesOutcome GpmClient::DescribeMatches(const DescribeMatchesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMatches");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMatchesResponse rsp = DescribeMatchesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMatchesOutcome(rsp);
        else
            return DescribeMatchesOutcome(o.GetError());
    }
    else
    {
        return DescribeMatchesOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeMatchesAsync(const DescribeMatchesRequest& request, const DescribeMatchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMatches(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::DescribeMatchesOutcomeCallable GpmClient::DescribeMatchesCallable(const DescribeMatchesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMatchesOutcome()>>(
        [this, request]()
        {
            return this->DescribeMatches(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::DescribeMatchingProgressOutcome GpmClient::DescribeMatchingProgress(const DescribeMatchingProgressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMatchingProgress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMatchingProgressResponse rsp = DescribeMatchingProgressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMatchingProgressOutcome(rsp);
        else
            return DescribeMatchingProgressOutcome(o.GetError());
    }
    else
    {
        return DescribeMatchingProgressOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeMatchingProgressAsync(const DescribeMatchingProgressRequest& request, const DescribeMatchingProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMatchingProgress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::DescribeMatchingProgressOutcomeCallable GpmClient::DescribeMatchingProgressCallable(const DescribeMatchingProgressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMatchingProgressOutcome()>>(
        [this, request]()
        {
            return this->DescribeMatchingProgress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::DescribeRuleOutcome GpmClient::DescribeRule(const DescribeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleResponse rsp = DescribeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleOutcome(rsp);
        else
            return DescribeRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeRuleAsync(const DescribeRuleRequest& request, const DescribeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::DescribeRuleOutcomeCallable GpmClient::DescribeRuleCallable(const DescribeRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::DescribeRulesOutcome GpmClient::DescribeRules(const DescribeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRulesResponse rsp = DescribeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRulesOutcome(rsp);
        else
            return DescribeRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeRulesOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeRulesAsync(const DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::DescribeRulesOutcomeCallable GpmClient::DescribeRulesCallable(const DescribeRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::DescribeTokenOutcome GpmClient::DescribeToken(const DescribeTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenResponse rsp = DescribeTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenOutcome(rsp);
        else
            return DescribeTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeTokenAsync(const DescribeTokenRequest& request, const DescribeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::DescribeTokenOutcomeCallable GpmClient::DescribeTokenCallable(const DescribeTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTokenOutcome()>>(
        [this, request]()
        {
            return this->DescribeToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::ModifyMatchOutcome GpmClient::ModifyMatch(const ModifyMatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMatchResponse rsp = ModifyMatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMatchOutcome(rsp);
        else
            return ModifyMatchOutcome(o.GetError());
    }
    else
    {
        return ModifyMatchOutcome(outcome.GetError());
    }
}

void GpmClient::ModifyMatchAsync(const ModifyMatchRequest& request, const ModifyMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::ModifyMatchOutcomeCallable GpmClient::ModifyMatchCallable(const ModifyMatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMatchOutcome()>>(
        [this, request]()
        {
            return this->ModifyMatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::ModifyRuleOutcome GpmClient::ModifyRule(const ModifyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRuleResponse rsp = ModifyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRuleOutcome(rsp);
        else
            return ModifyRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyRuleOutcome(outcome.GetError());
    }
}

void GpmClient::ModifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::ModifyRuleOutcomeCallable GpmClient::ModifyRuleCallable(const ModifyRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::ModifyTokenOutcome GpmClient::ModifyToken(const ModifyTokenRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTokenResponse rsp = ModifyTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTokenOutcome(rsp);
        else
            return ModifyTokenOutcome(o.GetError());
    }
    else
    {
        return ModifyTokenOutcome(outcome.GetError());
    }
}

void GpmClient::ModifyTokenAsync(const ModifyTokenRequest& request, const ModifyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::ModifyTokenOutcomeCallable GpmClient::ModifyTokenCallable(const ModifyTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTokenOutcome()>>(
        [this, request]()
        {
            return this->ModifyToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::StartMatchingOutcome GpmClient::StartMatching(const StartMatchingRequest &request)
{
    auto outcome = MakeRequest(request, "StartMatching");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMatchingResponse rsp = StartMatchingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMatchingOutcome(rsp);
        else
            return StartMatchingOutcome(o.GetError());
    }
    else
    {
        return StartMatchingOutcome(outcome.GetError());
    }
}

void GpmClient::StartMatchingAsync(const StartMatchingRequest& request, const StartMatchingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartMatching(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::StartMatchingOutcomeCallable GpmClient::StartMatchingCallable(const StartMatchingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartMatchingOutcome()>>(
        [this, request]()
        {
            return this->StartMatching(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GpmClient::StartMatchingBackfillOutcome GpmClient::StartMatchingBackfill(const StartMatchingBackfillRequest &request)
{
    auto outcome = MakeRequest(request, "StartMatchingBackfill");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMatchingBackfillResponse rsp = StartMatchingBackfillResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMatchingBackfillOutcome(rsp);
        else
            return StartMatchingBackfillOutcome(o.GetError());
    }
    else
    {
        return StartMatchingBackfillOutcome(outcome.GetError());
    }
}

void GpmClient::StartMatchingBackfillAsync(const StartMatchingBackfillRequest& request, const StartMatchingBackfillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartMatchingBackfill(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GpmClient::StartMatchingBackfillOutcomeCallable GpmClient::StartMatchingBackfillCallable(const StartMatchingBackfillRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartMatchingBackfillOutcome()>>(
        [this, request]()
        {
            return this->StartMatchingBackfill(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

