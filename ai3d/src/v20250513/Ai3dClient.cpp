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

#include <tencentcloud/ai3d/v20250513/Ai3dClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ai3d::V20250513;
using namespace TencentCloud::Ai3d::V20250513::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-05-13";
    const string ENDPOINT = "ai3d.tencentcloudapi.com";
}

Ai3dClient::Ai3dClient(const Credential &credential, const string &region) :
    Ai3dClient(credential, region, ClientProfile())
{
}

Ai3dClient::Ai3dClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


Ai3dClient::QueryHunyuanTo3DJobOutcome Ai3dClient::QueryHunyuanTo3DJob(const QueryHunyuanTo3DJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryHunyuanTo3DJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryHunyuanTo3DJobResponse rsp = QueryHunyuanTo3DJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryHunyuanTo3DJobOutcome(rsp);
        else
            return QueryHunyuanTo3DJobOutcome(o.GetError());
    }
    else
    {
        return QueryHunyuanTo3DJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::QueryHunyuanTo3DJobAsync(const QueryHunyuanTo3DJobRequest& request, const QueryHunyuanTo3DJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryHunyuanTo3DJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

Ai3dClient::QueryHunyuanTo3DJobOutcomeCallable Ai3dClient::QueryHunyuanTo3DJobCallable(const QueryHunyuanTo3DJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryHunyuanTo3DJobOutcome()>>(
        [this, request]()
        {
            return this->QueryHunyuanTo3DJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

Ai3dClient::QueryHunyuanTo3DProJobOutcome Ai3dClient::QueryHunyuanTo3DProJob(const QueryHunyuanTo3DProJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryHunyuanTo3DProJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryHunyuanTo3DProJobResponse rsp = QueryHunyuanTo3DProJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryHunyuanTo3DProJobOutcome(rsp);
        else
            return QueryHunyuanTo3DProJobOutcome(o.GetError());
    }
    else
    {
        return QueryHunyuanTo3DProJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::QueryHunyuanTo3DProJobAsync(const QueryHunyuanTo3DProJobRequest& request, const QueryHunyuanTo3DProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryHunyuanTo3DProJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

Ai3dClient::QueryHunyuanTo3DProJobOutcomeCallable Ai3dClient::QueryHunyuanTo3DProJobCallable(const QueryHunyuanTo3DProJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryHunyuanTo3DProJobOutcome()>>(
        [this, request]()
        {
            return this->QueryHunyuanTo3DProJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

Ai3dClient::SubmitHunyuanTo3DJobOutcome Ai3dClient::SubmitHunyuanTo3DJob(const SubmitHunyuanTo3DJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHunyuanTo3DJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHunyuanTo3DJobResponse rsp = SubmitHunyuanTo3DJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHunyuanTo3DJobOutcome(rsp);
        else
            return SubmitHunyuanTo3DJobOutcome(o.GetError());
    }
    else
    {
        return SubmitHunyuanTo3DJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::SubmitHunyuanTo3DJobAsync(const SubmitHunyuanTo3DJobRequest& request, const SubmitHunyuanTo3DJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitHunyuanTo3DJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

Ai3dClient::SubmitHunyuanTo3DJobOutcomeCallable Ai3dClient::SubmitHunyuanTo3DJobCallable(const SubmitHunyuanTo3DJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitHunyuanTo3DJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitHunyuanTo3DJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

Ai3dClient::SubmitHunyuanTo3DProJobOutcome Ai3dClient::SubmitHunyuanTo3DProJob(const SubmitHunyuanTo3DProJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHunyuanTo3DProJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHunyuanTo3DProJobResponse rsp = SubmitHunyuanTo3DProJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHunyuanTo3DProJobOutcome(rsp);
        else
            return SubmitHunyuanTo3DProJobOutcome(o.GetError());
    }
    else
    {
        return SubmitHunyuanTo3DProJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::SubmitHunyuanTo3DProJobAsync(const SubmitHunyuanTo3DProJobRequest& request, const SubmitHunyuanTo3DProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitHunyuanTo3DProJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

Ai3dClient::SubmitHunyuanTo3DProJobOutcomeCallable Ai3dClient::SubmitHunyuanTo3DProJobCallable(const SubmitHunyuanTo3DProJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitHunyuanTo3DProJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitHunyuanTo3DProJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

