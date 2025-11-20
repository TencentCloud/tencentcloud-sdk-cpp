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
    using Req = const AddSmsSignRequest&;
    using Resp = AddSmsSignResponse;

    DoRequestAsync<Req, Resp>(
        "AddSmsSign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::AddSmsSignOutcomeCallable SmsClient::AddSmsSignCallable(const AddSmsSignRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddSmsSignOutcome>>();
    AddSmsSignAsync(
    request,
    [prom](
        const SmsClient*,
        const AddSmsSignRequest&,
        AddSmsSignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AddSmsTemplateRequest&;
    using Resp = AddSmsTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "AddSmsTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::AddSmsTemplateOutcomeCallable SmsClient::AddSmsTemplateCallable(const AddSmsTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddSmsTemplateOutcome>>();
    AddSmsTemplateAsync(
    request,
    [prom](
        const SmsClient*,
        const AddSmsTemplateRequest&,
        AddSmsTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CallbackStatusStatisticsRequest&;
    using Resp = CallbackStatusStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "CallbackStatusStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::CallbackStatusStatisticsOutcomeCallable SmsClient::CallbackStatusStatisticsCallable(const CallbackStatusStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CallbackStatusStatisticsOutcome>>();
    CallbackStatusStatisticsAsync(
    request,
    [prom](
        const SmsClient*,
        const CallbackStatusStatisticsRequest&,
        CallbackStatusStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSmsSignRequest&;
    using Resp = DeleteSmsSignResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSmsSign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::DeleteSmsSignOutcomeCallable SmsClient::DeleteSmsSignCallable(const DeleteSmsSignRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSmsSignOutcome>>();
    DeleteSmsSignAsync(
    request,
    [prom](
        const SmsClient*,
        const DeleteSmsSignRequest&,
        DeleteSmsSignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSmsTemplateRequest&;
    using Resp = DeleteSmsTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSmsTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::DeleteSmsTemplateOutcomeCallable SmsClient::DeleteSmsTemplateCallable(const DeleteSmsTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSmsTemplateOutcome>>();
    DeleteSmsTemplateAsync(
    request,
    [prom](
        const SmsClient*,
        const DeleteSmsTemplateRequest&,
        DeleteSmsTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSmsSignListRequest&;
    using Resp = DescribeSmsSignListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSmsSignList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::DescribeSmsSignListOutcomeCallable SmsClient::DescribeSmsSignListCallable(const DescribeSmsSignListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSmsSignListOutcome>>();
    DescribeSmsSignListAsync(
    request,
    [prom](
        const SmsClient*,
        const DescribeSmsSignListRequest&,
        DescribeSmsSignListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSmsTemplateListRequest&;
    using Resp = DescribeSmsTemplateListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSmsTemplateList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::DescribeSmsTemplateListOutcomeCallable SmsClient::DescribeSmsTemplateListCallable(const DescribeSmsTemplateListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSmsTemplateListOutcome>>();
    DescribeSmsTemplateListAsync(
    request,
    [prom](
        const SmsClient*,
        const DescribeSmsTemplateListRequest&,
        DescribeSmsTemplateListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySmsSignRequest&;
    using Resp = ModifySmsSignResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySmsSign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::ModifySmsSignOutcomeCallable SmsClient::ModifySmsSignCallable(const ModifySmsSignRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySmsSignOutcome>>();
    ModifySmsSignAsync(
    request,
    [prom](
        const SmsClient*,
        const ModifySmsSignRequest&,
        ModifySmsSignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySmsTemplateRequest&;
    using Resp = ModifySmsTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySmsTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::ModifySmsTemplateOutcomeCallable SmsClient::ModifySmsTemplateCallable(const ModifySmsTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySmsTemplateOutcome>>();
    ModifySmsTemplateAsync(
    request,
    [prom](
        const SmsClient*,
        const ModifySmsTemplateRequest&,
        ModifySmsTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const PullSmsReplyStatusRequest&;
    using Resp = PullSmsReplyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "PullSmsReplyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::PullSmsReplyStatusOutcomeCallable SmsClient::PullSmsReplyStatusCallable(const PullSmsReplyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<PullSmsReplyStatusOutcome>>();
    PullSmsReplyStatusAsync(
    request,
    [prom](
        const SmsClient*,
        const PullSmsReplyStatusRequest&,
        PullSmsReplyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const PullSmsReplyStatusByPhoneNumberRequest&;
    using Resp = PullSmsReplyStatusByPhoneNumberResponse;

    DoRequestAsync<Req, Resp>(
        "PullSmsReplyStatusByPhoneNumber", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::PullSmsReplyStatusByPhoneNumberOutcomeCallable SmsClient::PullSmsReplyStatusByPhoneNumberCallable(const PullSmsReplyStatusByPhoneNumberRequest &request)
{
    const auto prom = std::make_shared<std::promise<PullSmsReplyStatusByPhoneNumberOutcome>>();
    PullSmsReplyStatusByPhoneNumberAsync(
    request,
    [prom](
        const SmsClient*,
        const PullSmsReplyStatusByPhoneNumberRequest&,
        PullSmsReplyStatusByPhoneNumberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const PullSmsSendStatusRequest&;
    using Resp = PullSmsSendStatusResponse;

    DoRequestAsync<Req, Resp>(
        "PullSmsSendStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::PullSmsSendStatusOutcomeCallable SmsClient::PullSmsSendStatusCallable(const PullSmsSendStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<PullSmsSendStatusOutcome>>();
    PullSmsSendStatusAsync(
    request,
    [prom](
        const SmsClient*,
        const PullSmsSendStatusRequest&,
        PullSmsSendStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const PullSmsSendStatusByPhoneNumberRequest&;
    using Resp = PullSmsSendStatusByPhoneNumberResponse;

    DoRequestAsync<Req, Resp>(
        "PullSmsSendStatusByPhoneNumber", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::PullSmsSendStatusByPhoneNumberOutcomeCallable SmsClient::PullSmsSendStatusByPhoneNumberCallable(const PullSmsSendStatusByPhoneNumberRequest &request)
{
    const auto prom = std::make_shared<std::promise<PullSmsSendStatusByPhoneNumberOutcome>>();
    PullSmsSendStatusByPhoneNumberAsync(
    request,
    [prom](
        const SmsClient*,
        const PullSmsSendStatusByPhoneNumberRequest&,
        PullSmsSendStatusByPhoneNumberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SendSmsRequest&;
    using Resp = SendSmsResponse;

    DoRequestAsync<Req, Resp>(
        "SendSms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::SendSmsOutcomeCallable SmsClient::SendSmsCallable(const SendSmsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendSmsOutcome>>();
    SendSmsAsync(
    request,
    [prom](
        const SmsClient*,
        const SendSmsRequest&,
        SendSmsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SendStatusStatisticsRequest&;
    using Resp = SendStatusStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "SendStatusStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::SendStatusStatisticsOutcomeCallable SmsClient::SendStatusStatisticsCallable(const SendStatusStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendStatusStatisticsOutcome>>();
    SendStatusStatisticsAsync(
    request,
    [prom](
        const SmsClient*,
        const SendStatusStatisticsRequest&,
        SendStatusStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SmsPackagesStatisticsRequest&;
    using Resp = SmsPackagesStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "SmsPackagesStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmsClient::SmsPackagesStatisticsOutcomeCallable SmsClient::SmsPackagesStatisticsCallable(const SmsPackagesStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SmsPackagesStatisticsOutcome>>();
    SmsPackagesStatisticsAsync(
    request,
    [prom](
        const SmsClient*,
        const SmsPackagesStatisticsRequest&,
        SmsPackagesStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

