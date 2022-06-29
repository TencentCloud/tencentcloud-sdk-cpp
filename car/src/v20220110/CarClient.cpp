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

#include <tencentcloud/car/v20220110/CarClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Car::V20220110;
using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-01-10";
    const string ENDPOINT = "car.tencentcloudapi.com";
}

CarClient::CarClient(const Credential &credential, const string &region) :
    CarClient(credential, region, ClientProfile())
{
}

CarClient::CarClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CarClient::ApplyConcurrentOutcome CarClient::ApplyConcurrent(const ApplyConcurrentRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyConcurrent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyConcurrentResponse rsp = ApplyConcurrentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyConcurrentOutcome(rsp);
        else
            return ApplyConcurrentOutcome(o.GetError());
    }
    else
    {
        return ApplyConcurrentOutcome(outcome.GetError());
    }
}

void CarClient::ApplyConcurrentAsync(const ApplyConcurrentRequest& request, const ApplyConcurrentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyConcurrent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CarClient::ApplyConcurrentOutcomeCallable CarClient::ApplyConcurrentCallable(const ApplyConcurrentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyConcurrentOutcome()>>(
        [this, request]()
        {
            return this->ApplyConcurrent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CarClient::CreateSessionOutcome CarClient::CreateSession(const CreateSessionRequest &request)
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

void CarClient::CreateSessionAsync(const CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CarClient::CreateSessionOutcomeCallable CarClient::CreateSessionCallable(const CreateSessionRequest &request)
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

CarClient::DestroySessionOutcome CarClient::DestroySession(const DestroySessionRequest &request)
{
    auto outcome = MakeRequest(request, "DestroySession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroySessionResponse rsp = DestroySessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroySessionOutcome(rsp);
        else
            return DestroySessionOutcome(o.GetError());
    }
    else
    {
        return DestroySessionOutcome(outcome.GetError());
    }
}

void CarClient::DestroySessionAsync(const DestroySessionRequest& request, const DestroySessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroySession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CarClient::DestroySessionOutcomeCallable CarClient::DestroySessionCallable(const DestroySessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroySessionOutcome()>>(
        [this, request]()
        {
            return this->DestroySession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

