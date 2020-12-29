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

#include <tencentcloud/vms/v20200902/VmsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vms::V20200902;
using namespace TencentCloud::Vms::V20200902::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-09-02";
    const string ENDPOINT = "vms.tencentcloudapi.com";
}

VmsClient::VmsClient(const Credential &credential, const string &region) :
    VmsClient(credential, region, ClientProfile())
{
}

VmsClient::VmsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VmsClient::SendCodeVoiceOutcome VmsClient::SendCodeVoice(const SendCodeVoiceRequest &request)
{
    auto outcome = MakeRequest(request, "SendCodeVoice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendCodeVoiceResponse rsp = SendCodeVoiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendCodeVoiceOutcome(rsp);
        else
            return SendCodeVoiceOutcome(o.GetError());
    }
    else
    {
        return SendCodeVoiceOutcome(outcome.GetError());
    }
}

void VmsClient::SendCodeVoiceAsync(const SendCodeVoiceRequest& request, const SendCodeVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendCodeVoice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VmsClient::SendCodeVoiceOutcomeCallable VmsClient::SendCodeVoiceCallable(const SendCodeVoiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendCodeVoiceOutcome()>>(
        [this, request]()
        {
            return this->SendCodeVoice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VmsClient::SendTtsVoiceOutcome VmsClient::SendTtsVoice(const SendTtsVoiceRequest &request)
{
    auto outcome = MakeRequest(request, "SendTtsVoice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendTtsVoiceResponse rsp = SendTtsVoiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendTtsVoiceOutcome(rsp);
        else
            return SendTtsVoiceOutcome(o.GetError());
    }
    else
    {
        return SendTtsVoiceOutcome(outcome.GetError());
    }
}

void VmsClient::SendTtsVoiceAsync(const SendTtsVoiceRequest& request, const SendTtsVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendTtsVoice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VmsClient::SendTtsVoiceOutcomeCallable VmsClient::SendTtsVoiceCallable(const SendTtsVoiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendTtsVoiceOutcome()>>(
        [this, request]()
        {
            return this->SendTtsVoice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

