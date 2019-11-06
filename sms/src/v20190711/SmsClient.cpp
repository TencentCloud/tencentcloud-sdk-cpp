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

#include <tencentcloud/sms/v20190711/SmsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Sms::V20190711;
using namespace TencentCloud::Sms::V20190711::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-11";
    const string ENDPOINT = "sms.tencentcloudapi.com";
}

SmsClient::SmsClient(const Credential &credential, const string &region) :
    SmsClient(credential, region, ClientProfile())
{
}

SmsClient::SmsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SmsClient::PullSmsReplyStatusOutcome SmsClient::PullSmsReplyStatus(const PullSmsReplyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "PullSmsReplyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PullSmsReplyStatusResponse rsp = PullSmsReplyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PullSmsReplyStatusOutcome(rsp);
        else
            return PullSmsReplyStatusOutcome(o.GetError());
    }
    else
    {
        return PullSmsReplyStatusOutcome(outcome.GetError());
    }
}

void SmsClient::PullSmsReplyStatusAsync(const PullSmsReplyStatusRequest& request, const PullSmsReplyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PullSmsReplyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::PullSmsReplyStatusOutcomeCallable SmsClient::PullSmsReplyStatusCallable(const PullSmsReplyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PullSmsReplyStatusOutcome()>>(
        [this, request]()
        {
            return this->PullSmsReplyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmsClient::PullSmsReplyStatusByPhoneNumberOutcome SmsClient::PullSmsReplyStatusByPhoneNumber(const PullSmsReplyStatusByPhoneNumberRequest &request)
{
    auto outcome = MakeRequest(request, "PullSmsReplyStatusByPhoneNumber");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PullSmsReplyStatusByPhoneNumberResponse rsp = PullSmsReplyStatusByPhoneNumberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PullSmsReplyStatusByPhoneNumberOutcome(rsp);
        else
            return PullSmsReplyStatusByPhoneNumberOutcome(o.GetError());
    }
    else
    {
        return PullSmsReplyStatusByPhoneNumberOutcome(outcome.GetError());
    }
}

void SmsClient::PullSmsReplyStatusByPhoneNumberAsync(const PullSmsReplyStatusByPhoneNumberRequest& request, const PullSmsReplyStatusByPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PullSmsReplyStatusByPhoneNumber(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::PullSmsReplyStatusByPhoneNumberOutcomeCallable SmsClient::PullSmsReplyStatusByPhoneNumberCallable(const PullSmsReplyStatusByPhoneNumberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PullSmsReplyStatusByPhoneNumberOutcome()>>(
        [this, request]()
        {
            return this->PullSmsReplyStatusByPhoneNumber(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmsClient::PullSmsSendStatusOutcome SmsClient::PullSmsSendStatus(const PullSmsSendStatusRequest &request)
{
    auto outcome = MakeRequest(request, "PullSmsSendStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PullSmsSendStatusResponse rsp = PullSmsSendStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PullSmsSendStatusOutcome(rsp);
        else
            return PullSmsSendStatusOutcome(o.GetError());
    }
    else
    {
        return PullSmsSendStatusOutcome(outcome.GetError());
    }
}

void SmsClient::PullSmsSendStatusAsync(const PullSmsSendStatusRequest& request, const PullSmsSendStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PullSmsSendStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::PullSmsSendStatusOutcomeCallable SmsClient::PullSmsSendStatusCallable(const PullSmsSendStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PullSmsSendStatusOutcome()>>(
        [this, request]()
        {
            return this->PullSmsSendStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmsClient::PullSmsSendStatusByPhoneNumberOutcome SmsClient::PullSmsSendStatusByPhoneNumber(const PullSmsSendStatusByPhoneNumberRequest &request)
{
    auto outcome = MakeRequest(request, "PullSmsSendStatusByPhoneNumber");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PullSmsSendStatusByPhoneNumberResponse rsp = PullSmsSendStatusByPhoneNumberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PullSmsSendStatusByPhoneNumberOutcome(rsp);
        else
            return PullSmsSendStatusByPhoneNumberOutcome(o.GetError());
    }
    else
    {
        return PullSmsSendStatusByPhoneNumberOutcome(outcome.GetError());
    }
}

void SmsClient::PullSmsSendStatusByPhoneNumberAsync(const PullSmsSendStatusByPhoneNumberRequest& request, const PullSmsSendStatusByPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PullSmsSendStatusByPhoneNumber(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::PullSmsSendStatusByPhoneNumberOutcomeCallable SmsClient::PullSmsSendStatusByPhoneNumberCallable(const PullSmsSendStatusByPhoneNumberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PullSmsSendStatusByPhoneNumberOutcome()>>(
        [this, request]()
        {
            return this->PullSmsSendStatusByPhoneNumber(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmsClient::SendSmsOutcome SmsClient::SendSms(const SendSmsRequest &request)
{
    auto outcome = MakeRequest(request, "SendSms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendSmsResponse rsp = SendSmsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendSmsOutcome(rsp);
        else
            return SendSmsOutcome(o.GetError());
    }
    else
    {
        return SendSmsOutcome(outcome.GetError());
    }
}

void SmsClient::SendSmsAsync(const SendSmsRequest& request, const SendSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendSms(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::SendSmsOutcomeCallable SmsClient::SendSmsCallable(const SendSmsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendSmsOutcome()>>(
        [this, request]()
        {
            return this->SendSms(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

