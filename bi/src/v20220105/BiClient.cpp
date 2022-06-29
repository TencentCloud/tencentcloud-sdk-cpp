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

#include <tencentcloud/bi/v20220105/BiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bi::V20220105;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-01-05";
    const string ENDPOINT = "bi.tencentcloudapi.com";
}

BiClient::BiClient(const Credential &credential, const string &region) :
    BiClient(credential, region, ClientProfile())
{
}

BiClient::BiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BiClient::ApplyEmbedIntervalOutcome BiClient::ApplyEmbedInterval(const ApplyEmbedIntervalRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyEmbedInterval");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyEmbedIntervalResponse rsp = ApplyEmbedIntervalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyEmbedIntervalOutcome(rsp);
        else
            return ApplyEmbedIntervalOutcome(o.GetError());
    }
    else
    {
        return ApplyEmbedIntervalOutcome(outcome.GetError());
    }
}

void BiClient::ApplyEmbedIntervalAsync(const ApplyEmbedIntervalRequest& request, const ApplyEmbedIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyEmbedInterval(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::ApplyEmbedIntervalOutcomeCallable BiClient::ApplyEmbedIntervalCallable(const ApplyEmbedIntervalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyEmbedIntervalOutcome()>>(
        [this, request]()
        {
            return this->ApplyEmbedInterval(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::CreateEmbedTokenOutcome BiClient::CreateEmbedToken(const CreateEmbedTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmbedToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmbedTokenResponse rsp = CreateEmbedTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmbedTokenOutcome(rsp);
        else
            return CreateEmbedTokenOutcome(o.GetError());
    }
    else
    {
        return CreateEmbedTokenOutcome(outcome.GetError());
    }
}

void BiClient::CreateEmbedTokenAsync(const CreateEmbedTokenRequest& request, const CreateEmbedTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEmbedToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::CreateEmbedTokenOutcomeCallable BiClient::CreateEmbedTokenCallable(const CreateEmbedTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEmbedTokenOutcome()>>(
        [this, request]()
        {
            return this->CreateEmbedToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

