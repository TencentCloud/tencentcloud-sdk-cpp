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

#include <tencentcloud/hunyuan/v20230901/HunyuanClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Hunyuan::V20230901;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-09-01";
    const string ENDPOINT = "hunyuan.tencentcloudapi.com";
}

HunyuanClient::HunyuanClient(const Credential &credential, const string &region) :
    HunyuanClient(credential, region, ClientProfile())
{
}

HunyuanClient::HunyuanClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


HunyuanClient::ChatProOutcome HunyuanClient::ChatPro(const ChatProRequest &request)
{
    auto outcome = MakeRequest(request, "ChatPro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChatProResponse rsp = ChatProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChatProOutcome(rsp);
        else
            return ChatProOutcome(o.GetError());
    }
    else
    {
        return ChatProOutcome(outcome.GetError());
    }
}

void HunyuanClient::ChatProAsync(const ChatProRequest& request, const ChatProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChatPro(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::ChatProOutcomeCallable HunyuanClient::ChatProCallable(const ChatProRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChatProOutcome()>>(
        [this, request]()
        {
            return this->ChatPro(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HunyuanClient::ChatStdOutcome HunyuanClient::ChatStd(const ChatStdRequest &request)
{
    auto outcome = MakeRequest(request, "ChatStd");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChatStdResponse rsp = ChatStdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChatStdOutcome(rsp);
        else
            return ChatStdOutcome(o.GetError());
    }
    else
    {
        return ChatStdOutcome(outcome.GetError());
    }
}

void HunyuanClient::ChatStdAsync(const ChatStdRequest& request, const ChatStdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChatStd(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::ChatStdOutcomeCallable HunyuanClient::ChatStdCallable(const ChatStdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChatStdOutcome()>>(
        [this, request]()
        {
            return this->ChatStd(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HunyuanClient::GetTokenCountOutcome HunyuanClient::GetTokenCount(const GetTokenCountRequest &request)
{
    auto outcome = MakeRequest(request, "GetTokenCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTokenCountResponse rsp = GetTokenCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTokenCountOutcome(rsp);
        else
            return GetTokenCountOutcome(o.GetError());
    }
    else
    {
        return GetTokenCountOutcome(outcome.GetError());
    }
}

void HunyuanClient::GetTokenCountAsync(const GetTokenCountRequest& request, const GetTokenCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTokenCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::GetTokenCountOutcomeCallable HunyuanClient::GetTokenCountCallable(const GetTokenCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTokenCountOutcome()>>(
        [this, request]()
        {
            return this->GetTokenCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

