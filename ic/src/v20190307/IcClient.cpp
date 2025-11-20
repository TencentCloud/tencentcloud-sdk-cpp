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
    using Req = const DescribeAppRequest&;
    using Resp = DescribeAppResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IcClient::DescribeAppOutcomeCallable IcClient::DescribeAppCallable(const DescribeAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppOutcome>>();
    DescribeAppAsync(
    request,
    [prom](
        const IcClient*,
        const DescribeAppRequest&,
        DescribeAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCardRequest&;
    using Resp = DescribeCardResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCard", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IcClient::DescribeCardOutcomeCallable IcClient::DescribeCardCallable(const DescribeCardRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCardOutcome>>();
    DescribeCardAsync(
    request,
    [prom](
        const IcClient*,
        const DescribeCardRequest&,
        DescribeCardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCardsRequest&;
    using Resp = DescribeCardsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCards", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IcClient::DescribeCardsOutcomeCallable IcClient::DescribeCardsCallable(const DescribeCardsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCardsOutcome>>();
    DescribeCardsAsync(
    request,
    [prom](
        const IcClient*,
        const DescribeCardsRequest&,
        DescribeCardsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSmsRequest&;
    using Resp = DescribeSmsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IcClient::DescribeSmsOutcomeCallable IcClient::DescribeSmsCallable(const DescribeSmsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSmsOutcome>>();
    DescribeSmsAsync(
    request,
    [prom](
        const IcClient*,
        const DescribeSmsRequest&,
        DescribeSmsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyUserCardRemarkRequest&;
    using Resp = ModifyUserCardRemarkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserCardRemark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IcClient::ModifyUserCardRemarkOutcomeCallable IcClient::ModifyUserCardRemarkCallable(const ModifyUserCardRemarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserCardRemarkOutcome>>();
    ModifyUserCardRemarkAsync(
    request,
    [prom](
        const IcClient*,
        const ModifyUserCardRemarkRequest&,
        ModifyUserCardRemarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const PayForExtendDataRequest&;
    using Resp = PayForExtendDataResponse;

    DoRequestAsync<Req, Resp>(
        "PayForExtendData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IcClient::PayForExtendDataOutcomeCallable IcClient::PayForExtendDataCallable(const PayForExtendDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<PayForExtendDataOutcome>>();
    PayForExtendDataAsync(
    request,
    [prom](
        const IcClient*,
        const PayForExtendDataRequest&,
        PayForExtendDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RenewCardsRequest&;
    using Resp = RenewCardsResponse;

    DoRequestAsync<Req, Resp>(
        "RenewCards", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IcClient::RenewCardsOutcomeCallable IcClient::RenewCardsCallable(const RenewCardsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewCardsOutcome>>();
    RenewCardsAsync(
    request,
    [prom](
        const IcClient*,
        const RenewCardsRequest&,
        RenewCardsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SendMultiSmsRequest&;
    using Resp = SendMultiSmsResponse;

    DoRequestAsync<Req, Resp>(
        "SendMultiSms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IcClient::SendMultiSmsOutcomeCallable IcClient::SendMultiSmsCallable(const SendMultiSmsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendMultiSmsOutcome>>();
    SendMultiSmsAsync(
    request,
    [prom](
        const IcClient*,
        const SendMultiSmsRequest&,
        SendMultiSmsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SendSmsRequest&;
    using Resp = SendSmsResponse;

    DoRequestAsync<Req, Resp>(
        "SendSms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IcClient::SendSmsOutcomeCallable IcClient::SendSmsCallable(const SendSmsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendSmsOutcome>>();
    SendSmsAsync(
    request,
    [prom](
        const IcClient*,
        const SendSmsRequest&,
        SendSmsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

