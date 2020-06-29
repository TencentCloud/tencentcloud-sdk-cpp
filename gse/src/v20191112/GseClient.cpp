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

#include <tencentcloud/gse/v20191112/GseClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Gse::V20191112;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-11-12";
    const string ENDPOINT = "gse.tencentcloudapi.com";
}

GseClient::GseClient(const Credential &credential, const string &region) :
    GseClient(credential, region, ClientProfile())
{
}

GseClient::GseClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GseClient::CreateGameServerSessionOutcome GseClient::CreateGameServerSession(const CreateGameServerSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGameServerSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGameServerSessionResponse rsp = CreateGameServerSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGameServerSessionOutcome(rsp);
        else
            return CreateGameServerSessionOutcome(o.GetError());
    }
    else
    {
        return CreateGameServerSessionOutcome(outcome.GetError());
    }
}

void GseClient::CreateGameServerSessionAsync(const CreateGameServerSessionRequest& request, const CreateGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGameServerSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::CreateGameServerSessionOutcomeCallable GseClient::CreateGameServerSessionCallable(const CreateGameServerSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGameServerSessionOutcome()>>(
        [this, request]()
        {
            return this->CreateGameServerSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DeleteScalingPolicyOutcome GseClient::DeleteScalingPolicy(const DeleteScalingPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScalingPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScalingPolicyResponse rsp = DeleteScalingPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScalingPolicyOutcome(rsp);
        else
            return DeleteScalingPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteScalingPolicyOutcome(outcome.GetError());
    }
}

void GseClient::DeleteScalingPolicyAsync(const DeleteScalingPolicyRequest& request, const DeleteScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteScalingPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DeleteScalingPolicyOutcomeCallable GseClient::DeleteScalingPolicyCallable(const DeleteScalingPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteScalingPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteScalingPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeGameServerSessionDetailsOutcome GseClient::DescribeGameServerSessionDetails(const DescribeGameServerSessionDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGameServerSessionDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGameServerSessionDetailsResponse rsp = DescribeGameServerSessionDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGameServerSessionDetailsOutcome(rsp);
        else
            return DescribeGameServerSessionDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeGameServerSessionDetailsOutcome(outcome.GetError());
    }
}

void GseClient::DescribeGameServerSessionDetailsAsync(const DescribeGameServerSessionDetailsRequest& request, const DescribeGameServerSessionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGameServerSessionDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeGameServerSessionDetailsOutcomeCallable GseClient::DescribeGameServerSessionDetailsCallable(const DescribeGameServerSessionDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGameServerSessionDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGameServerSessionDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeGameServerSessionPlacementOutcome GseClient::DescribeGameServerSessionPlacement(const DescribeGameServerSessionPlacementRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGameServerSessionPlacement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGameServerSessionPlacementResponse rsp = DescribeGameServerSessionPlacementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGameServerSessionPlacementOutcome(rsp);
        else
            return DescribeGameServerSessionPlacementOutcome(o.GetError());
    }
    else
    {
        return DescribeGameServerSessionPlacementOutcome(outcome.GetError());
    }
}

void GseClient::DescribeGameServerSessionPlacementAsync(const DescribeGameServerSessionPlacementRequest& request, const DescribeGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGameServerSessionPlacement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeGameServerSessionPlacementOutcomeCallable GseClient::DescribeGameServerSessionPlacementCallable(const DescribeGameServerSessionPlacementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGameServerSessionPlacementOutcome()>>(
        [this, request]()
        {
            return this->DescribeGameServerSessionPlacement(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeGameServerSessionQueuesOutcome GseClient::DescribeGameServerSessionQueues(const DescribeGameServerSessionQueuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGameServerSessionQueues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGameServerSessionQueuesResponse rsp = DescribeGameServerSessionQueuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGameServerSessionQueuesOutcome(rsp);
        else
            return DescribeGameServerSessionQueuesOutcome(o.GetError());
    }
    else
    {
        return DescribeGameServerSessionQueuesOutcome(outcome.GetError());
    }
}

void GseClient::DescribeGameServerSessionQueuesAsync(const DescribeGameServerSessionQueuesRequest& request, const DescribeGameServerSessionQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGameServerSessionQueues(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeGameServerSessionQueuesOutcomeCallable GseClient::DescribeGameServerSessionQueuesCallable(const DescribeGameServerSessionQueuesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGameServerSessionQueuesOutcome()>>(
        [this, request]()
        {
            return this->DescribeGameServerSessionQueues(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeGameServerSessionsOutcome GseClient::DescribeGameServerSessions(const DescribeGameServerSessionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGameServerSessions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGameServerSessionsResponse rsp = DescribeGameServerSessionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGameServerSessionsOutcome(rsp);
        else
            return DescribeGameServerSessionsOutcome(o.GetError());
    }
    else
    {
        return DescribeGameServerSessionsOutcome(outcome.GetError());
    }
}

void GseClient::DescribeGameServerSessionsAsync(const DescribeGameServerSessionsRequest& request, const DescribeGameServerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGameServerSessions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeGameServerSessionsOutcomeCallable GseClient::DescribeGameServerSessionsCallable(const DescribeGameServerSessionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGameServerSessionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGameServerSessions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeInstancesOutcome GseClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void GseClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeInstancesOutcomeCallable GseClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribePlayerSessionsOutcome GseClient::DescribePlayerSessions(const DescribePlayerSessionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlayerSessions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlayerSessionsResponse rsp = DescribePlayerSessionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlayerSessionsOutcome(rsp);
        else
            return DescribePlayerSessionsOutcome(o.GetError());
    }
    else
    {
        return DescribePlayerSessionsOutcome(outcome.GetError());
    }
}

void GseClient::DescribePlayerSessionsAsync(const DescribePlayerSessionsRequest& request, const DescribePlayerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePlayerSessions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribePlayerSessionsOutcomeCallable GseClient::DescribePlayerSessionsCallable(const DescribePlayerSessionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePlayerSessionsOutcome()>>(
        [this, request]()
        {
            return this->DescribePlayerSessions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeScalingPoliciesOutcome GseClient::DescribeScalingPolicies(const DescribeScalingPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScalingPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScalingPoliciesResponse rsp = DescribeScalingPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScalingPoliciesOutcome(rsp);
        else
            return DescribeScalingPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeScalingPoliciesOutcome(outcome.GetError());
    }
}

void GseClient::DescribeScalingPoliciesAsync(const DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScalingPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeScalingPoliciesOutcomeCallable GseClient::DescribeScalingPoliciesCallable(const DescribeScalingPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScalingPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeScalingPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::GetGameServerSessionLogUrlOutcome GseClient::GetGameServerSessionLogUrl(const GetGameServerSessionLogUrlRequest &request)
{
    auto outcome = MakeRequest(request, "GetGameServerSessionLogUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGameServerSessionLogUrlResponse rsp = GetGameServerSessionLogUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGameServerSessionLogUrlOutcome(rsp);
        else
            return GetGameServerSessionLogUrlOutcome(o.GetError());
    }
    else
    {
        return GetGameServerSessionLogUrlOutcome(outcome.GetError());
    }
}

void GseClient::GetGameServerSessionLogUrlAsync(const GetGameServerSessionLogUrlRequest& request, const GetGameServerSessionLogUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetGameServerSessionLogUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::GetGameServerSessionLogUrlOutcomeCallable GseClient::GetGameServerSessionLogUrlCallable(const GetGameServerSessionLogUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetGameServerSessionLogUrlOutcome()>>(
        [this, request]()
        {
            return this->GetGameServerSessionLogUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::GetInstanceAccessOutcome GseClient::GetInstanceAccess(const GetInstanceAccessRequest &request)
{
    auto outcome = MakeRequest(request, "GetInstanceAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetInstanceAccessResponse rsp = GetInstanceAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetInstanceAccessOutcome(rsp);
        else
            return GetInstanceAccessOutcome(o.GetError());
    }
    else
    {
        return GetInstanceAccessOutcome(outcome.GetError());
    }
}

void GseClient::GetInstanceAccessAsync(const GetInstanceAccessRequest& request, const GetInstanceAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetInstanceAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::GetInstanceAccessOutcomeCallable GseClient::GetInstanceAccessCallable(const GetInstanceAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetInstanceAccessOutcome()>>(
        [this, request]()
        {
            return this->GetInstanceAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::JoinGameServerSessionOutcome GseClient::JoinGameServerSession(const JoinGameServerSessionRequest &request)
{
    auto outcome = MakeRequest(request, "JoinGameServerSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        JoinGameServerSessionResponse rsp = JoinGameServerSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return JoinGameServerSessionOutcome(rsp);
        else
            return JoinGameServerSessionOutcome(o.GetError());
    }
    else
    {
        return JoinGameServerSessionOutcome(outcome.GetError());
    }
}

void GseClient::JoinGameServerSessionAsync(const JoinGameServerSessionRequest& request, const JoinGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->JoinGameServerSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::JoinGameServerSessionOutcomeCallable GseClient::JoinGameServerSessionCallable(const JoinGameServerSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<JoinGameServerSessionOutcome()>>(
        [this, request]()
        {
            return this->JoinGameServerSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::PutScalingPolicyOutcome GseClient::PutScalingPolicy(const PutScalingPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "PutScalingPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutScalingPolicyResponse rsp = PutScalingPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutScalingPolicyOutcome(rsp);
        else
            return PutScalingPolicyOutcome(o.GetError());
    }
    else
    {
        return PutScalingPolicyOutcome(outcome.GetError());
    }
}

void GseClient::PutScalingPolicyAsync(const PutScalingPolicyRequest& request, const PutScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PutScalingPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::PutScalingPolicyOutcomeCallable GseClient::PutScalingPolicyCallable(const PutScalingPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PutScalingPolicyOutcome()>>(
        [this, request]()
        {
            return this->PutScalingPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::SearchGameServerSessionsOutcome GseClient::SearchGameServerSessions(const SearchGameServerSessionsRequest &request)
{
    auto outcome = MakeRequest(request, "SearchGameServerSessions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchGameServerSessionsResponse rsp = SearchGameServerSessionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchGameServerSessionsOutcome(rsp);
        else
            return SearchGameServerSessionsOutcome(o.GetError());
    }
    else
    {
        return SearchGameServerSessionsOutcome(outcome.GetError());
    }
}

void GseClient::SearchGameServerSessionsAsync(const SearchGameServerSessionsRequest& request, const SearchGameServerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchGameServerSessions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::SearchGameServerSessionsOutcomeCallable GseClient::SearchGameServerSessionsCallable(const SearchGameServerSessionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchGameServerSessionsOutcome()>>(
        [this, request]()
        {
            return this->SearchGameServerSessions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::SetServerWeightOutcome GseClient::SetServerWeight(const SetServerWeightRequest &request)
{
    auto outcome = MakeRequest(request, "SetServerWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetServerWeightResponse rsp = SetServerWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetServerWeightOutcome(rsp);
        else
            return SetServerWeightOutcome(o.GetError());
    }
    else
    {
        return SetServerWeightOutcome(outcome.GetError());
    }
}

void GseClient::SetServerWeightAsync(const SetServerWeightRequest& request, const SetServerWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetServerWeight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::SetServerWeightOutcomeCallable GseClient::SetServerWeightCallable(const SetServerWeightRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetServerWeightOutcome()>>(
        [this, request]()
        {
            return this->SetServerWeight(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::StartGameServerSessionPlacementOutcome GseClient::StartGameServerSessionPlacement(const StartGameServerSessionPlacementRequest &request)
{
    auto outcome = MakeRequest(request, "StartGameServerSessionPlacement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartGameServerSessionPlacementResponse rsp = StartGameServerSessionPlacementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartGameServerSessionPlacementOutcome(rsp);
        else
            return StartGameServerSessionPlacementOutcome(o.GetError());
    }
    else
    {
        return StartGameServerSessionPlacementOutcome(outcome.GetError());
    }
}

void GseClient::StartGameServerSessionPlacementAsync(const StartGameServerSessionPlacementRequest& request, const StartGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartGameServerSessionPlacement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::StartGameServerSessionPlacementOutcomeCallable GseClient::StartGameServerSessionPlacementCallable(const StartGameServerSessionPlacementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartGameServerSessionPlacementOutcome()>>(
        [this, request]()
        {
            return this->StartGameServerSessionPlacement(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::StartMatchPlacementOutcome GseClient::StartMatchPlacement(const StartMatchPlacementRequest &request)
{
    auto outcome = MakeRequest(request, "StartMatchPlacement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMatchPlacementResponse rsp = StartMatchPlacementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMatchPlacementOutcome(rsp);
        else
            return StartMatchPlacementOutcome(o.GetError());
    }
    else
    {
        return StartMatchPlacementOutcome(outcome.GetError());
    }
}

void GseClient::StartMatchPlacementAsync(const StartMatchPlacementRequest& request, const StartMatchPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartMatchPlacement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::StartMatchPlacementOutcomeCallable GseClient::StartMatchPlacementCallable(const StartMatchPlacementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartMatchPlacementOutcome()>>(
        [this, request]()
        {
            return this->StartMatchPlacement(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::StopGameServerSessionPlacementOutcome GseClient::StopGameServerSessionPlacement(const StopGameServerSessionPlacementRequest &request)
{
    auto outcome = MakeRequest(request, "StopGameServerSessionPlacement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopGameServerSessionPlacementResponse rsp = StopGameServerSessionPlacementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopGameServerSessionPlacementOutcome(rsp);
        else
            return StopGameServerSessionPlacementOutcome(o.GetError());
    }
    else
    {
        return StopGameServerSessionPlacementOutcome(outcome.GetError());
    }
}

void GseClient::StopGameServerSessionPlacementAsync(const StopGameServerSessionPlacementRequest& request, const StopGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopGameServerSessionPlacement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::StopGameServerSessionPlacementOutcomeCallable GseClient::StopGameServerSessionPlacementCallable(const StopGameServerSessionPlacementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopGameServerSessionPlacementOutcome()>>(
        [this, request]()
        {
            return this->StopGameServerSessionPlacement(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::UpdateGameServerSessionOutcome GseClient::UpdateGameServerSession(const UpdateGameServerSessionRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateGameServerSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateGameServerSessionResponse rsp = UpdateGameServerSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateGameServerSessionOutcome(rsp);
        else
            return UpdateGameServerSessionOutcome(o.GetError());
    }
    else
    {
        return UpdateGameServerSessionOutcome(outcome.GetError());
    }
}

void GseClient::UpdateGameServerSessionAsync(const UpdateGameServerSessionRequest& request, const UpdateGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateGameServerSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::UpdateGameServerSessionOutcomeCallable GseClient::UpdateGameServerSessionCallable(const UpdateGameServerSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateGameServerSessionOutcome()>>(
        [this, request]()
        {
            return this->UpdateGameServerSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

