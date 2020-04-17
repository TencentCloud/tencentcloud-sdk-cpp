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

#include <tencentcloud/bizlive/v20190313/BizliveClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bizlive::V20190313;
using namespace TencentCloud::Bizlive::V20190313::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-13";
    const string ENDPOINT = "bizlive.tencentcloudapi.com";
}

BizliveClient::BizliveClient(const Credential &credential, const string &region) :
    BizliveClient(credential, region, ClientProfile())
{
}

BizliveClient::BizliveClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BizliveClient::CreateSessionOutcome BizliveClient::CreateSession(const CreateSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSessionResponse rsp = CreateSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSessionOutcome(rsp);
        else
            return CreateSessionOutcome(o.GetError());
    }
    else
    {
        return CreateSessionOutcome(outcome.GetError());
    }
}

void BizliveClient::CreateSessionAsync(const CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BizliveClient::CreateSessionOutcomeCallable BizliveClient::CreateSessionCallable(const CreateSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSessionOutcome()>>(
        [this, request]()
        {
            return this->CreateSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BizliveClient::DescribeStreamPlayInfoListOutcome BizliveClient::DescribeStreamPlayInfoList(const DescribeStreamPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPlayInfoListResponse rsp = DescribeStreamPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPlayInfoListOutcome(rsp);
        else
            return DescribeStreamPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPlayInfoListOutcome(outcome.GetError());
    }
}

void BizliveClient::DescribeStreamPlayInfoListAsync(const DescribeStreamPlayInfoListRequest& request, const DescribeStreamPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPlayInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BizliveClient::DescribeStreamPlayInfoListOutcomeCallable BizliveClient::DescribeStreamPlayInfoListCallable(const DescribeStreamPlayInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPlayInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPlayInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BizliveClient::DescribeWorkersOutcome BizliveClient::DescribeWorkers(const DescribeWorkersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkersResponse rsp = DescribeWorkersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkersOutcome(rsp);
        else
            return DescribeWorkersOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkersOutcome(outcome.GetError());
    }
}

void BizliveClient::DescribeWorkersAsync(const DescribeWorkersRequest& request, const DescribeWorkersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BizliveClient::DescribeWorkersOutcomeCallable BizliveClient::DescribeWorkersCallable(const DescribeWorkersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkersOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BizliveClient::ForbidLiveStreamOutcome BizliveClient::ForbidLiveStream(const ForbidLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "ForbidLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForbidLiveStreamResponse rsp = ForbidLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForbidLiveStreamOutcome(rsp);
        else
            return ForbidLiveStreamOutcome(o.GetError());
    }
    else
    {
        return ForbidLiveStreamOutcome(outcome.GetError());
    }
}

void BizliveClient::ForbidLiveStreamAsync(const ForbidLiveStreamRequest& request, const ForbidLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ForbidLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BizliveClient::ForbidLiveStreamOutcomeCallable BizliveClient::ForbidLiveStreamCallable(const ForbidLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ForbidLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->ForbidLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BizliveClient::RegisterIMOutcome BizliveClient::RegisterIM(const RegisterIMRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterIM");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterIMResponse rsp = RegisterIMResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterIMOutcome(rsp);
        else
            return RegisterIMOutcome(o.GetError());
    }
    else
    {
        return RegisterIMOutcome(outcome.GetError());
    }
}

void BizliveClient::RegisterIMAsync(const RegisterIMRequest& request, const RegisterIMAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterIM(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BizliveClient::RegisterIMOutcomeCallable BizliveClient::RegisterIMCallable(const RegisterIMRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterIMOutcome()>>(
        [this, request]()
        {
            return this->RegisterIM(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BizliveClient::StopGameOutcome BizliveClient::StopGame(const StopGameRequest &request)
{
    auto outcome = MakeRequest(request, "StopGame");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopGameResponse rsp = StopGameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopGameOutcome(rsp);
        else
            return StopGameOutcome(o.GetError());
    }
    else
    {
        return StopGameOutcome(outcome.GetError());
    }
}

void BizliveClient::StopGameAsync(const StopGameRequest& request, const StopGameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopGame(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BizliveClient::StopGameOutcomeCallable BizliveClient::StopGameCallable(const StopGameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopGameOutcome()>>(
        [this, request]()
        {
            return this->StopGame(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

