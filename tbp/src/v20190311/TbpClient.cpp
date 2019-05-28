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

#include <tencentcloud/tbp/v20190311/TbpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tbp::V20190311;
using namespace TencentCloud::Tbp::V20190311::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-11";
    const string ENDPOINT = "tbp.tencentcloudapi.com";
}

TbpClient::TbpClient(const Credential &credential, const string &region) :
    TbpClient(credential, region, ClientProfile())
{
}

TbpClient::TbpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TbpClient::PostAudioOutcome TbpClient::PostAudio(const PostAudioRequest &request)
{
    auto outcome = MakeRequest(request, "PostAudio");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PostAudioResponse rsp = PostAudioResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PostAudioOutcome(rsp);
        else
            return PostAudioOutcome(o.GetError());
    }
    else
    {
        return PostAudioOutcome(outcome.GetError());
    }
}

void TbpClient::PostAudioAsync(const PostAudioRequest& request, const PostAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PostAudio(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbpClient::PostAudioOutcomeCallable TbpClient::PostAudioCallable(const PostAudioRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PostAudioOutcome()>>(
        [this, request]()
        {
            return this->PostAudio(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbpClient::PostTextOutcome TbpClient::PostText(const PostTextRequest &request)
{
    auto outcome = MakeRequest(request, "PostText");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PostTextResponse rsp = PostTextResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PostTextOutcome(rsp);
        else
            return PostTextOutcome(o.GetError());
    }
    else
    {
        return PostTextOutcome(outcome.GetError());
    }
}

void TbpClient::PostTextAsync(const PostTextRequest& request, const PostTextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PostText(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbpClient::PostTextOutcomeCallable TbpClient::PostTextCallable(const PostTextRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PostTextOutcome()>>(
        [this, request]()
        {
            return this->PostText(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbpClient::ResetOutcome TbpClient::Reset(const ResetRequest &request)
{
    auto outcome = MakeRequest(request, "Reset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetResponse rsp = ResetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetOutcome(rsp);
        else
            return ResetOutcome(o.GetError());
    }
    else
    {
        return ResetOutcome(outcome.GetError());
    }
}

void TbpClient::ResetAsync(const ResetRequest& request, const ResetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Reset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbpClient::ResetOutcomeCallable TbpClient::ResetCallable(const ResetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetOutcome()>>(
        [this, request]()
        {
            return this->Reset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

