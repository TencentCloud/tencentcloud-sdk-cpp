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

#include <tencentcloud/sms/v20210111/SmsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Sms::V20210111;
using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-01-11";
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


SmsClient::AddSmsSignOutcome SmsClient::AddSmsSign(const AddSmsSignRequest &request)
{
    auto outcome = MakeRequest(request, "AddSmsSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddSmsSignResponse rsp = AddSmsSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddSmsSignOutcome(rsp);
        else
            return AddSmsSignOutcome(o.GetError());
    }
    else
    {
        return AddSmsSignOutcome(outcome.GetError());
    }
}

void SmsClient::AddSmsSignAsync(const AddSmsSignRequest& request, const AddSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddSmsSign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::AddSmsSignOutcomeCallable SmsClient::AddSmsSignCallable(const AddSmsSignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddSmsSignOutcome()>>(
        [this, request]()
        {
            return this->AddSmsSign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmsClient::AddSmsTemplateOutcome SmsClient::AddSmsTemplate(const AddSmsTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "AddSmsTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddSmsTemplateResponse rsp = AddSmsTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddSmsTemplateOutcome(rsp);
        else
            return AddSmsTemplateOutcome(o.GetError());
    }
    else
    {
        return AddSmsTemplateOutcome(outcome.GetError());
    }
}

void SmsClient::AddSmsTemplateAsync(const AddSmsTemplateRequest& request, const AddSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddSmsTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::AddSmsTemplateOutcomeCallable SmsClient::AddSmsTemplateCallable(const AddSmsTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddSmsTemplateOutcome()>>(
        [this, request]()
        {
            return this->AddSmsTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmsClient::CallbackStatusStatisticsOutcome SmsClient::CallbackStatusStatistics(const CallbackStatusStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "CallbackStatusStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CallbackStatusStatisticsResponse rsp = CallbackStatusStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CallbackStatusStatisticsOutcome(rsp);
        else
            return CallbackStatusStatisticsOutcome(o.GetError());
    }
    else
    {
        return CallbackStatusStatisticsOutcome(outcome.GetError());
    }
}

void SmsClient::CallbackStatusStatisticsAsync(const CallbackStatusStatisticsRequest& request, const CallbackStatusStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CallbackStatusStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::CallbackStatusStatisticsOutcomeCallable SmsClient::CallbackStatusStatisticsCallable(const CallbackStatusStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CallbackStatusStatisticsOutcome()>>(
        [this, request]()
        {
            return this->CallbackStatusStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmsClient::DeleteSmsSignOutcome SmsClient::DeleteSmsSign(const DeleteSmsSignRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSmsSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSmsSignResponse rsp = DeleteSmsSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSmsSignOutcome(rsp);
        else
            return DeleteSmsSignOutcome(o.GetError());
    }
    else
    {
        return DeleteSmsSignOutcome(outcome.GetError());
    }
}

void SmsClient::DeleteSmsSignAsync(const DeleteSmsSignRequest& request, const DeleteSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSmsSign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::DeleteSmsSignOutcomeCallable SmsClient::DeleteSmsSignCallable(const DeleteSmsSignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSmsSignOutcome()>>(
        [this, request]()
        {
            return this->DeleteSmsSign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmsClient::DeleteSmsTemplateOutcome SmsClient::DeleteSmsTemplate(const DeleteSmsTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSmsTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSmsTemplateResponse rsp = DeleteSmsTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSmsTemplateOutcome(rsp);
        else
            return DeleteSmsTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteSmsTemplateOutcome(outcome.GetError());
    }
}

void SmsClient::DeleteSmsTemplateAsync(const DeleteSmsTemplateRequest& request, const DeleteSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSmsTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::DeleteSmsTemplateOutcomeCallable SmsClient::DeleteSmsTemplateCallable(const DeleteSmsTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSmsTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteSmsTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmsClient::DescribePhoneNumberInfoOutcome SmsClient::DescribePhoneNumberInfo(const DescribePhoneNumberInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePhoneNumberInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePhoneNumberInfoResponse rsp = DescribePhoneNumberInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePhoneNumberInfoOutcome(rsp);
        else
            return DescribePhoneNumberInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePhoneNumberInfoOutcome(outcome.GetError());
    }
}

void SmsClient::DescribePhoneNumberInfoAsync(const DescribePhoneNumberInfoRequest& request, const DescribePhoneNumberInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePhoneNumberInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::DescribePhoneNumberInfoOutcomeCallable SmsClient::DescribePhoneNumberInfoCallable(const DescribePhoneNumberInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePhoneNumberInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribePhoneNumberInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmsClient::DescribeSmsSignListOutcome SmsClient::DescribeSmsSignList(const DescribeSmsSignListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmsSignList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmsSignListResponse rsp = DescribeSmsSignListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmsSignListOutcome(rsp);
        else
            return DescribeSmsSignListOutcome(o.GetError());
    }
    else
    {
        return DescribeSmsSignListOutcome(outcome.GetError());
    }
}

void SmsClient::DescribeSmsSignListAsync(const DescribeSmsSignListRequest& request, const DescribeSmsSignListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSmsSignList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::DescribeSmsSignListOutcomeCallable SmsClient::DescribeSmsSignListCallable(const DescribeSmsSignListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSmsSignListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSmsSignList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmsClient::DescribeSmsTemplateListOutcome SmsClient::DescribeSmsTemplateList(const DescribeSmsTemplateListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmsTemplateList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmsTemplateListResponse rsp = DescribeSmsTemplateListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmsTemplateListOutcome(rsp);
        else
            return DescribeSmsTemplateListOutcome(o.GetError());
    }
    else
    {
        return DescribeSmsTemplateListOutcome(outcome.GetError());
    }
}

void SmsClient::DescribeSmsTemplateListAsync(const DescribeSmsTemplateListRequest& request, const DescribeSmsTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSmsTemplateList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::DescribeSmsTemplateListOutcomeCallable SmsClient::DescribeSmsTemplateListCallable(const DescribeSmsTemplateListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSmsTemplateListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSmsTemplateList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmsClient::ModifySmsSignOutcome SmsClient::ModifySmsSign(const ModifySmsSignRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySmsSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySmsSignResponse rsp = ModifySmsSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySmsSignOutcome(rsp);
        else
            return ModifySmsSignOutcome(o.GetError());
    }
    else
    {
        return ModifySmsSignOutcome(outcome.GetError());
    }
}

void SmsClient::ModifySmsSignAsync(const ModifySmsSignRequest& request, const ModifySmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySmsSign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::ModifySmsSignOutcomeCallable SmsClient::ModifySmsSignCallable(const ModifySmsSignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySmsSignOutcome()>>(
        [this, request]()
        {
            return this->ModifySmsSign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmsClient::ModifySmsTemplateOutcome SmsClient::ModifySmsTemplate(const ModifySmsTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySmsTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySmsTemplateResponse rsp = ModifySmsTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySmsTemplateOutcome(rsp);
        else
            return ModifySmsTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifySmsTemplateOutcome(outcome.GetError());
    }
}

void SmsClient::ModifySmsTemplateAsync(const ModifySmsTemplateRequest& request, const ModifySmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySmsTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::ModifySmsTemplateOutcomeCallable SmsClient::ModifySmsTemplateCallable(const ModifySmsTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySmsTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifySmsTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

SmsClient::ReportConversionOutcome SmsClient::ReportConversion(const ReportConversionRequest &request)
{
    auto outcome = MakeRequest(request, "ReportConversion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportConversionResponse rsp = ReportConversionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportConversionOutcome(rsp);
        else
            return ReportConversionOutcome(o.GetError());
    }
    else
    {
        return ReportConversionOutcome(outcome.GetError());
    }
}

void SmsClient::ReportConversionAsync(const ReportConversionRequest& request, const ReportConversionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReportConversion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::ReportConversionOutcomeCallable SmsClient::ReportConversionCallable(const ReportConversionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReportConversionOutcome()>>(
        [this, request]()
        {
            return this->ReportConversion(request);
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

SmsClient::SendStatusStatisticsOutcome SmsClient::SendStatusStatistics(const SendStatusStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "SendStatusStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendStatusStatisticsResponse rsp = SendStatusStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendStatusStatisticsOutcome(rsp);
        else
            return SendStatusStatisticsOutcome(o.GetError());
    }
    else
    {
        return SendStatusStatisticsOutcome(outcome.GetError());
    }
}

void SmsClient::SendStatusStatisticsAsync(const SendStatusStatisticsRequest& request, const SendStatusStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendStatusStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::SendStatusStatisticsOutcomeCallable SmsClient::SendStatusStatisticsCallable(const SendStatusStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendStatusStatisticsOutcome()>>(
        [this, request]()
        {
            return this->SendStatusStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmsClient::SmsPackagesStatisticsOutcome SmsClient::SmsPackagesStatistics(const SmsPackagesStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "SmsPackagesStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SmsPackagesStatisticsResponse rsp = SmsPackagesStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SmsPackagesStatisticsOutcome(rsp);
        else
            return SmsPackagesStatisticsOutcome(o.GetError());
    }
    else
    {
        return SmsPackagesStatisticsOutcome(outcome.GetError());
    }
}

void SmsClient::SmsPackagesStatisticsAsync(const SmsPackagesStatisticsRequest& request, const SmsPackagesStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SmsPackagesStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmsClient::SmsPackagesStatisticsOutcomeCallable SmsClient::SmsPackagesStatisticsCallable(const SmsPackagesStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SmsPackagesStatisticsOutcome()>>(
        [this, request]()
        {
            return this->SmsPackagesStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

