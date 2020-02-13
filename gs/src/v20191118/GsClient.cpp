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

#include <tencentcloud/gs/v20191118/GsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Gs::V20191118;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-11-18";
    const string ENDPOINT = "gs.tencentcloudapi.com";
}

GsClient::GsClient(const Credential &credential, const string &region) :
    GsClient(credential, region, ClientProfile())
{
}

GsClient::GsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GsClient::CreateSessionOutcome GsClient::CreateSession(const CreateSessionRequest &request)
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

void GsClient::CreateSessionAsync(const CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::CreateSessionOutcomeCallable GsClient::CreateSessionCallable(const CreateSessionRequest &request)
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

GsClient::DescribeWorkersOutcome GsClient::DescribeWorkers(const DescribeWorkersRequest &request)
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

void GsClient::DescribeWorkersAsync(const DescribeWorkersRequest& request, const DescribeWorkersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DescribeWorkersOutcomeCallable GsClient::DescribeWorkersCallable(const DescribeWorkersRequest &request)
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

GsClient::StopGameOutcome GsClient::StopGame(const StopGameRequest &request)
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

void GsClient::StopGameAsync(const StopGameRequest& request, const StopGameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopGame(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::StopGameOutcomeCallable GsClient::StopGameCallable(const StopGameRequest &request)
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

GsClient::TrylockWorkerOutcome GsClient::TrylockWorker(const TrylockWorkerRequest &request)
{
    auto outcome = MakeRequest(request, "TrylockWorker");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TrylockWorkerResponse rsp = TrylockWorkerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TrylockWorkerOutcome(rsp);
        else
            return TrylockWorkerOutcome(o.GetError());
    }
    else
    {
        return TrylockWorkerOutcome(outcome.GetError());
    }
}

void GsClient::TrylockWorkerAsync(const TrylockWorkerRequest& request, const TrylockWorkerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TrylockWorker(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::TrylockWorkerOutcomeCallable GsClient::TrylockWorkerCallable(const TrylockWorkerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TrylockWorkerOutcome()>>(
        [this, request]()
        {
            return this->TrylockWorker(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

