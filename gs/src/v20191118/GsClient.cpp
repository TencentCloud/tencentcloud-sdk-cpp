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

GsClient::DescribeInstancesCountOutcome GsClient::DescribeInstancesCount(const DescribeInstancesCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesCountResponse rsp = DescribeInstancesCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesCountOutcome(rsp);
        else
            return DescribeInstancesCountOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesCountOutcome(outcome.GetError());
    }
}

void GsClient::DescribeInstancesCountAsync(const DescribeInstancesCountRequest& request, const DescribeInstancesCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DescribeInstancesCountOutcomeCallable GsClient::DescribeInstancesCountCallable(const DescribeInstancesCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::SaveGameArchiveOutcome GsClient::SaveGameArchive(const SaveGameArchiveRequest &request)
{
    auto outcome = MakeRequest(request, "SaveGameArchive");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaveGameArchiveResponse rsp = SaveGameArchiveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaveGameArchiveOutcome(rsp);
        else
            return SaveGameArchiveOutcome(o.GetError());
    }
    else
    {
        return SaveGameArchiveOutcome(outcome.GetError());
    }
}

void GsClient::SaveGameArchiveAsync(const SaveGameArchiveRequest& request, const SaveGameArchiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SaveGameArchive(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::SaveGameArchiveOutcomeCallable GsClient::SaveGameArchiveCallable(const SaveGameArchiveRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SaveGameArchiveOutcome()>>(
        [this, request]()
        {
            return this->SaveGameArchive(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::StartPublishStreamOutcome GsClient::StartPublishStream(const StartPublishStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StartPublishStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartPublishStreamResponse rsp = StartPublishStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartPublishStreamOutcome(rsp);
        else
            return StartPublishStreamOutcome(o.GetError());
    }
    else
    {
        return StartPublishStreamOutcome(outcome.GetError());
    }
}

void GsClient::StartPublishStreamAsync(const StartPublishStreamRequest& request, const StartPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartPublishStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::StartPublishStreamOutcomeCallable GsClient::StartPublishStreamCallable(const StartPublishStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartPublishStreamOutcome()>>(
        [this, request]()
        {
            return this->StartPublishStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::StartPublishStreamToCSSOutcome GsClient::StartPublishStreamToCSS(const StartPublishStreamToCSSRequest &request)
{
    auto outcome = MakeRequest(request, "StartPublishStreamToCSS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartPublishStreamToCSSResponse rsp = StartPublishStreamToCSSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartPublishStreamToCSSOutcome(rsp);
        else
            return StartPublishStreamToCSSOutcome(o.GetError());
    }
    else
    {
        return StartPublishStreamToCSSOutcome(outcome.GetError());
    }
}

void GsClient::StartPublishStreamToCSSAsync(const StartPublishStreamToCSSRequest& request, const StartPublishStreamToCSSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartPublishStreamToCSS(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::StartPublishStreamToCSSOutcomeCallable GsClient::StartPublishStreamToCSSCallable(const StartPublishStreamToCSSRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartPublishStreamToCSSOutcome()>>(
        [this, request]()
        {
            return this->StartPublishStreamToCSS(request);
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

GsClient::StopPublishStreamOutcome GsClient::StopPublishStream(const StopPublishStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StopPublishStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopPublishStreamResponse rsp = StopPublishStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopPublishStreamOutcome(rsp);
        else
            return StopPublishStreamOutcome(o.GetError());
    }
    else
    {
        return StopPublishStreamOutcome(outcome.GetError());
    }
}

void GsClient::StopPublishStreamAsync(const StopPublishStreamRequest& request, const StopPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopPublishStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::StopPublishStreamOutcomeCallable GsClient::StopPublishStreamCallable(const StopPublishStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopPublishStreamOutcome()>>(
        [this, request]()
        {
            return this->StopPublishStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::SwitchGameArchiveOutcome GsClient::SwitchGameArchive(const SwitchGameArchiveRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchGameArchive");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchGameArchiveResponse rsp = SwitchGameArchiveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchGameArchiveOutcome(rsp);
        else
            return SwitchGameArchiveOutcome(o.GetError());
    }
    else
    {
        return SwitchGameArchiveOutcome(outcome.GetError());
    }
}

void GsClient::SwitchGameArchiveAsync(const SwitchGameArchiveRequest& request, const SwitchGameArchiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchGameArchive(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::SwitchGameArchiveOutcomeCallable GsClient::SwitchGameArchiveCallable(const SwitchGameArchiveRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchGameArchiveOutcome()>>(
        [this, request]()
        {
            return this->SwitchGameArchive(request);
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

