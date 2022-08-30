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

#include <tencentcloud/ic/v20190307/IcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ic::V20190307;
using namespace TencentCloud::Ic::V20190307::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-07";
    const string ENDPOINT = "ic.tencentcloudapi.com";
}

IcClient::IcClient(const Credential &credential, const string &region) :
    IcClient(credential, region, ClientProfile())
{
}

IcClient::IcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IcClient::DescribeAppOutcome IcClient::DescribeApp(const DescribeAppRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppResponse rsp = DescribeAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppOutcome(rsp);
        else
            return DescribeAppOutcome(o.GetError());
    }
    else
    {
        return DescribeAppOutcome(outcome.GetError());
    }
}

void IcClient::DescribeAppAsync(const DescribeAppRequest& request, const DescribeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IcClient::DescribeAppOutcomeCallable IcClient::DescribeAppCallable(const DescribeAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAppOutcome()>>(
        [this, request]()
        {
            return this->DescribeApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IcClient::DescribeCardOutcome IcClient::DescribeCard(const DescribeCardRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCardResponse rsp = DescribeCardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCardOutcome(rsp);
        else
            return DescribeCardOutcome(o.GetError());
    }
    else
    {
        return DescribeCardOutcome(outcome.GetError());
    }
}

void IcClient::DescribeCardAsync(const DescribeCardRequest& request, const DescribeCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCard(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IcClient::DescribeCardOutcomeCallable IcClient::DescribeCardCallable(const DescribeCardRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCardOutcome()>>(
        [this, request]()
        {
            return this->DescribeCard(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IcClient::DescribeCardsOutcome IcClient::DescribeCards(const DescribeCardsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCardsResponse rsp = DescribeCardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCardsOutcome(rsp);
        else
            return DescribeCardsOutcome(o.GetError());
    }
    else
    {
        return DescribeCardsOutcome(outcome.GetError());
    }
}

void IcClient::DescribeCardsAsync(const DescribeCardsRequest& request, const DescribeCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCards(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IcClient::DescribeCardsOutcomeCallable IcClient::DescribeCardsCallable(const DescribeCardsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCardsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCards(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IcClient::DescribeSmsOutcome IcClient::DescribeSms(const DescribeSmsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmsResponse rsp = DescribeSmsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmsOutcome(rsp);
        else
            return DescribeSmsOutcome(o.GetError());
    }
    else
    {
        return DescribeSmsOutcome(outcome.GetError());
    }
}

void IcClient::DescribeSmsAsync(const DescribeSmsRequest& request, const DescribeSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSms(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IcClient::DescribeSmsOutcomeCallable IcClient::DescribeSmsCallable(const DescribeSmsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSmsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSms(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IcClient::ModifyUserCardRemarkOutcome IcClient::ModifyUserCardRemark(const ModifyUserCardRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserCardRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserCardRemarkResponse rsp = ModifyUserCardRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserCardRemarkOutcome(rsp);
        else
            return ModifyUserCardRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyUserCardRemarkOutcome(outcome.GetError());
    }
}

void IcClient::ModifyUserCardRemarkAsync(const ModifyUserCardRemarkRequest& request, const ModifyUserCardRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserCardRemark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IcClient::ModifyUserCardRemarkOutcomeCallable IcClient::ModifyUserCardRemarkCallable(const ModifyUserCardRemarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserCardRemarkOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserCardRemark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IcClient::PayForExtendDataOutcome IcClient::PayForExtendData(const PayForExtendDataRequest &request)
{
    auto outcome = MakeRequest(request, "PayForExtendData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PayForExtendDataResponse rsp = PayForExtendDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PayForExtendDataOutcome(rsp);
        else
            return PayForExtendDataOutcome(o.GetError());
    }
    else
    {
        return PayForExtendDataOutcome(outcome.GetError());
    }
}

void IcClient::PayForExtendDataAsync(const PayForExtendDataRequest& request, const PayForExtendDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PayForExtendData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IcClient::PayForExtendDataOutcomeCallable IcClient::PayForExtendDataCallable(const PayForExtendDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PayForExtendDataOutcome()>>(
        [this, request]()
        {
            return this->PayForExtendData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IcClient::RenewCardsOutcome IcClient::RenewCards(const RenewCardsRequest &request)
{
    auto outcome = MakeRequest(request, "RenewCards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewCardsResponse rsp = RenewCardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewCardsOutcome(rsp);
        else
            return RenewCardsOutcome(o.GetError());
    }
    else
    {
        return RenewCardsOutcome(outcome.GetError());
    }
}

void IcClient::RenewCardsAsync(const RenewCardsRequest& request, const RenewCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewCards(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IcClient::RenewCardsOutcomeCallable IcClient::RenewCardsCallable(const RenewCardsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewCardsOutcome()>>(
        [this, request]()
        {
            return this->RenewCards(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IcClient::SendMultiSmsOutcome IcClient::SendMultiSms(const SendMultiSmsRequest &request)
{
    auto outcome = MakeRequest(request, "SendMultiSms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendMultiSmsResponse rsp = SendMultiSmsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendMultiSmsOutcome(rsp);
        else
            return SendMultiSmsOutcome(o.GetError());
    }
    else
    {
        return SendMultiSmsOutcome(outcome.GetError());
    }
}

void IcClient::SendMultiSmsAsync(const SendMultiSmsRequest& request, const SendMultiSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendMultiSms(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IcClient::SendMultiSmsOutcomeCallable IcClient::SendMultiSmsCallable(const SendMultiSmsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendMultiSmsOutcome()>>(
        [this, request]()
        {
            return this->SendMultiSms(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IcClient::SendSmsOutcome IcClient::SendSms(const SendSmsRequest &request)
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

void IcClient::SendSmsAsync(const SendSmsRequest& request, const SendSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendSms(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IcClient::SendSmsOutcomeCallable IcClient::SendSmsCallable(const SendSmsRequest &request)
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

