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

#include <tencentcloud/tsi/v20210325/TsiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tsi::V20210325;
using namespace TencentCloud::Tsi::V20210325::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-03-25";
    const string ENDPOINT = "tsi.tencentcloudapi.com";
}

TsiClient::TsiClient(const Credential &credential, const string &region) :
    TsiClient(credential, region, ClientProfile())
{
}

TsiClient::TsiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TsiClient::TongChuanDisplayOutcome TsiClient::TongChuanDisplay(const TongChuanDisplayRequest &request)
{
    auto outcome = MakeRequest(request, "TongChuanDisplay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TongChuanDisplayResponse rsp = TongChuanDisplayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TongChuanDisplayOutcome(rsp);
        else
            return TongChuanDisplayOutcome(o.GetError());
    }
    else
    {
        return TongChuanDisplayOutcome(outcome.GetError());
    }
}

void TsiClient::TongChuanDisplayAsync(const TongChuanDisplayRequest& request, const TongChuanDisplayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TongChuanDisplay(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsiClient::TongChuanDisplayOutcomeCallable TsiClient::TongChuanDisplayCallable(const TongChuanDisplayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TongChuanDisplayOutcome()>>(
        [this, request]()
        {
            return this->TongChuanDisplay(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsiClient::TongChuanRecognizeOutcome TsiClient::TongChuanRecognize(const TongChuanRecognizeRequest &request)
{
    auto outcome = MakeRequest(request, "TongChuanRecognize");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TongChuanRecognizeResponse rsp = TongChuanRecognizeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TongChuanRecognizeOutcome(rsp);
        else
            return TongChuanRecognizeOutcome(o.GetError());
    }
    else
    {
        return TongChuanRecognizeOutcome(outcome.GetError());
    }
}

void TsiClient::TongChuanRecognizeAsync(const TongChuanRecognizeRequest& request, const TongChuanRecognizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TongChuanRecognize(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsiClient::TongChuanRecognizeOutcomeCallable TsiClient::TongChuanRecognizeCallable(const TongChuanRecognizeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TongChuanRecognizeOutcome()>>(
        [this, request]()
        {
            return this->TongChuanRecognize(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsiClient::TongChuanSyncOutcome TsiClient::TongChuanSync(const TongChuanSyncRequest &request)
{
    auto outcome = MakeRequest(request, "TongChuanSync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TongChuanSyncResponse rsp = TongChuanSyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TongChuanSyncOutcome(rsp);
        else
            return TongChuanSyncOutcome(o.GetError());
    }
    else
    {
        return TongChuanSyncOutcome(outcome.GetError());
    }
}

void TsiClient::TongChuanSyncAsync(const TongChuanSyncRequest& request, const TongChuanSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TongChuanSync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsiClient::TongChuanSyncOutcomeCallable TsiClient::TongChuanSyncCallable(const TongChuanSyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TongChuanSyncOutcome()>>(
        [this, request]()
        {
            return this->TongChuanSync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

