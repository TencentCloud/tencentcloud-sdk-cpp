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

#include <tencentcloud/captcha/v20190722/CaptchaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Captcha::V20190722;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-22";
    const string ENDPOINT = "captcha.tencentcloudapi.com";
}

CaptchaClient::CaptchaClient(const Credential &credential, const string &region) :
    CaptchaClient(credential, region, ClientProfile())
{
}

CaptchaClient::CaptchaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CaptchaClient::DescribeCaptchaAppIdInfoOutcome CaptchaClient::DescribeCaptchaAppIdInfo(const DescribeCaptchaAppIdInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaAppIdInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaAppIdInfoResponse rsp = DescribeCaptchaAppIdInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaAppIdInfoOutcome(rsp);
        else
            return DescribeCaptchaAppIdInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaAppIdInfoOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaAppIdInfoAsync(const DescribeCaptchaAppIdInfoRequest& request, const DescribeCaptchaAppIdInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCaptchaAppIdInfoRequest&;
    using Resp = DescribeCaptchaAppIdInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaptchaAppIdInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeCaptchaAppIdInfoOutcomeCallable CaptchaClient::DescribeCaptchaAppIdInfoCallable(const DescribeCaptchaAppIdInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaptchaAppIdInfoOutcome>>();
    DescribeCaptchaAppIdInfoAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeCaptchaAppIdInfoRequest&,
        DescribeCaptchaAppIdInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DescribeCaptchaDataOutcome CaptchaClient::DescribeCaptchaData(const DescribeCaptchaDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaDataResponse rsp = DescribeCaptchaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaDataOutcome(rsp);
        else
            return DescribeCaptchaDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaDataOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaDataAsync(const DescribeCaptchaDataRequest& request, const DescribeCaptchaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCaptchaDataRequest&;
    using Resp = DescribeCaptchaDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaptchaData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeCaptchaDataOutcomeCallable CaptchaClient::DescribeCaptchaDataCallable(const DescribeCaptchaDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaptchaDataOutcome>>();
    DescribeCaptchaDataAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeCaptchaDataRequest&,
        DescribeCaptchaDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DescribeCaptchaDataSumOutcome CaptchaClient::DescribeCaptchaDataSum(const DescribeCaptchaDataSumRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaDataSum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaDataSumResponse rsp = DescribeCaptchaDataSumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaDataSumOutcome(rsp);
        else
            return DescribeCaptchaDataSumOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaDataSumOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaDataSumAsync(const DescribeCaptchaDataSumRequest& request, const DescribeCaptchaDataSumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCaptchaDataSumRequest&;
    using Resp = DescribeCaptchaDataSumResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaptchaDataSum", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeCaptchaDataSumOutcomeCallable CaptchaClient::DescribeCaptchaDataSumCallable(const DescribeCaptchaDataSumRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaptchaDataSumOutcome>>();
    DescribeCaptchaDataSumAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeCaptchaDataSumRequest&,
        DescribeCaptchaDataSumOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DescribeCaptchaMiniDataOutcome CaptchaClient::DescribeCaptchaMiniData(const DescribeCaptchaMiniDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaMiniData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaMiniDataResponse rsp = DescribeCaptchaMiniDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaMiniDataOutcome(rsp);
        else
            return DescribeCaptchaMiniDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaMiniDataOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaMiniDataAsync(const DescribeCaptchaMiniDataRequest& request, const DescribeCaptchaMiniDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCaptchaMiniDataRequest&;
    using Resp = DescribeCaptchaMiniDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaptchaMiniData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeCaptchaMiniDataOutcomeCallable CaptchaClient::DescribeCaptchaMiniDataCallable(const DescribeCaptchaMiniDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaptchaMiniDataOutcome>>();
    DescribeCaptchaMiniDataAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeCaptchaMiniDataRequest&,
        DescribeCaptchaMiniDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DescribeCaptchaMiniDataSumOutcome CaptchaClient::DescribeCaptchaMiniDataSum(const DescribeCaptchaMiniDataSumRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaMiniDataSum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaMiniDataSumResponse rsp = DescribeCaptchaMiniDataSumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaMiniDataSumOutcome(rsp);
        else
            return DescribeCaptchaMiniDataSumOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaMiniDataSumOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaMiniDataSumAsync(const DescribeCaptchaMiniDataSumRequest& request, const DescribeCaptchaMiniDataSumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCaptchaMiniDataSumRequest&;
    using Resp = DescribeCaptchaMiniDataSumResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaptchaMiniDataSum", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeCaptchaMiniDataSumOutcomeCallable CaptchaClient::DescribeCaptchaMiniDataSumCallable(const DescribeCaptchaMiniDataSumRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaptchaMiniDataSumOutcome>>();
    DescribeCaptchaMiniDataSumAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeCaptchaMiniDataSumRequest&,
        DescribeCaptchaMiniDataSumOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DescribeCaptchaMiniOperDataOutcome CaptchaClient::DescribeCaptchaMiniOperData(const DescribeCaptchaMiniOperDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaMiniOperData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaMiniOperDataResponse rsp = DescribeCaptchaMiniOperDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaMiniOperDataOutcome(rsp);
        else
            return DescribeCaptchaMiniOperDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaMiniOperDataOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaMiniOperDataAsync(const DescribeCaptchaMiniOperDataRequest& request, const DescribeCaptchaMiniOperDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCaptchaMiniOperDataRequest&;
    using Resp = DescribeCaptchaMiniOperDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaptchaMiniOperData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeCaptchaMiniOperDataOutcomeCallable CaptchaClient::DescribeCaptchaMiniOperDataCallable(const DescribeCaptchaMiniOperDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaptchaMiniOperDataOutcome>>();
    DescribeCaptchaMiniOperDataAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeCaptchaMiniOperDataRequest&,
        DescribeCaptchaMiniOperDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DescribeCaptchaMiniResultOutcome CaptchaClient::DescribeCaptchaMiniResult(const DescribeCaptchaMiniResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaMiniResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaMiniResultResponse rsp = DescribeCaptchaMiniResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaMiniResultOutcome(rsp);
        else
            return DescribeCaptchaMiniResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaMiniResultOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaMiniResultAsync(const DescribeCaptchaMiniResultRequest& request, const DescribeCaptchaMiniResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCaptchaMiniResultRequest&;
    using Resp = DescribeCaptchaMiniResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaptchaMiniResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeCaptchaMiniResultOutcomeCallable CaptchaClient::DescribeCaptchaMiniResultCallable(const DescribeCaptchaMiniResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaptchaMiniResultOutcome>>();
    DescribeCaptchaMiniResultAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeCaptchaMiniResultRequest&,
        DescribeCaptchaMiniResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DescribeCaptchaMiniRiskResultOutcome CaptchaClient::DescribeCaptchaMiniRiskResult(const DescribeCaptchaMiniRiskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaMiniRiskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaMiniRiskResultResponse rsp = DescribeCaptchaMiniRiskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaMiniRiskResultOutcome(rsp);
        else
            return DescribeCaptchaMiniRiskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaMiniRiskResultOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaMiniRiskResultAsync(const DescribeCaptchaMiniRiskResultRequest& request, const DescribeCaptchaMiniRiskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCaptchaMiniRiskResultRequest&;
    using Resp = DescribeCaptchaMiniRiskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaptchaMiniRiskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeCaptchaMiniRiskResultOutcomeCallable CaptchaClient::DescribeCaptchaMiniRiskResultCallable(const DescribeCaptchaMiniRiskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaptchaMiniRiskResultOutcome>>();
    DescribeCaptchaMiniRiskResultAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeCaptchaMiniRiskResultRequest&,
        DescribeCaptchaMiniRiskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DescribeCaptchaOperDataOutcome CaptchaClient::DescribeCaptchaOperData(const DescribeCaptchaOperDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaOperData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaOperDataResponse rsp = DescribeCaptchaOperDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaOperDataOutcome(rsp);
        else
            return DescribeCaptchaOperDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaOperDataOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaOperDataAsync(const DescribeCaptchaOperDataRequest& request, const DescribeCaptchaOperDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCaptchaOperDataRequest&;
    using Resp = DescribeCaptchaOperDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaptchaOperData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeCaptchaOperDataOutcomeCallable CaptchaClient::DescribeCaptchaOperDataCallable(const DescribeCaptchaOperDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaptchaOperDataOutcome>>();
    DescribeCaptchaOperDataAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeCaptchaOperDataRequest&,
        DescribeCaptchaOperDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DescribeCaptchaRceResultOutcome CaptchaClient::DescribeCaptchaRceResult(const DescribeCaptchaRceResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaRceResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaRceResultResponse rsp = DescribeCaptchaRceResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaRceResultOutcome(rsp);
        else
            return DescribeCaptchaRceResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaRceResultOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaRceResultAsync(const DescribeCaptchaRceResultRequest& request, const DescribeCaptchaRceResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCaptchaRceResultRequest&;
    using Resp = DescribeCaptchaRceResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaptchaRceResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeCaptchaRceResultOutcomeCallable CaptchaClient::DescribeCaptchaRceResultCallable(const DescribeCaptchaRceResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaptchaRceResultOutcome>>();
    DescribeCaptchaRceResultAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeCaptchaRceResultRequest&,
        DescribeCaptchaRceResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DescribeCaptchaResultOutcome CaptchaClient::DescribeCaptchaResult(const DescribeCaptchaResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaResultResponse rsp = DescribeCaptchaResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaResultOutcome(rsp);
        else
            return DescribeCaptchaResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaResultOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaResultAsync(const DescribeCaptchaResultRequest& request, const DescribeCaptchaResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCaptchaResultRequest&;
    using Resp = DescribeCaptchaResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaptchaResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeCaptchaResultOutcomeCallable CaptchaClient::DescribeCaptchaResultCallable(const DescribeCaptchaResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaptchaResultOutcome>>();
    DescribeCaptchaResultAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeCaptchaResultRequest&,
        DescribeCaptchaResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DescribeCaptchaTicketDataOutcome CaptchaClient::DescribeCaptchaTicketData(const DescribeCaptchaTicketDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaTicketData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaTicketDataResponse rsp = DescribeCaptchaTicketDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaTicketDataOutcome(rsp);
        else
            return DescribeCaptchaTicketDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaTicketDataOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaTicketDataAsync(const DescribeCaptchaTicketDataRequest& request, const DescribeCaptchaTicketDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCaptchaTicketDataRequest&;
    using Resp = DescribeCaptchaTicketDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaptchaTicketData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeCaptchaTicketDataOutcomeCallable CaptchaClient::DescribeCaptchaTicketDataCallable(const DescribeCaptchaTicketDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaptchaTicketDataOutcome>>();
    DescribeCaptchaTicketDataAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeCaptchaTicketDataRequest&,
        DescribeCaptchaTicketDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DescribeCaptchaUserAllAppIdOutcome CaptchaClient::DescribeCaptchaUserAllAppId(const DescribeCaptchaUserAllAppIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaUserAllAppId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaUserAllAppIdResponse rsp = DescribeCaptchaUserAllAppIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaUserAllAppIdOutcome(rsp);
        else
            return DescribeCaptchaUserAllAppIdOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaUserAllAppIdOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaUserAllAppIdAsync(const DescribeCaptchaUserAllAppIdRequest& request, const DescribeCaptchaUserAllAppIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCaptchaUserAllAppIdRequest&;
    using Resp = DescribeCaptchaUserAllAppIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaptchaUserAllAppId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeCaptchaUserAllAppIdOutcomeCallable CaptchaClient::DescribeCaptchaUserAllAppIdCallable(const DescribeCaptchaUserAllAppIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaptchaUserAllAppIdOutcome>>();
    DescribeCaptchaUserAllAppIdAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeCaptchaUserAllAppIdRequest&,
        DescribeCaptchaUserAllAppIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::GetRequestStatisticsOutcome CaptchaClient::GetRequestStatistics(const GetRequestStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "GetRequestStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRequestStatisticsResponse rsp = GetRequestStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRequestStatisticsOutcome(rsp);
        else
            return GetRequestStatisticsOutcome(o.GetError());
    }
    else
    {
        return GetRequestStatisticsOutcome(outcome.GetError());
    }
}

void CaptchaClient::GetRequestStatisticsAsync(const GetRequestStatisticsRequest& request, const GetRequestStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRequestStatisticsRequest&;
    using Resp = GetRequestStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "GetRequestStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::GetRequestStatisticsOutcomeCallable CaptchaClient::GetRequestStatisticsCallable(const GetRequestStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRequestStatisticsOutcome>>();
    GetRequestStatisticsAsync(
    request,
    [prom](
        const CaptchaClient*,
        const GetRequestStatisticsRequest&,
        GetRequestStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::GetTicketStatisticsOutcome CaptchaClient::GetTicketStatistics(const GetTicketStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "GetTicketStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTicketStatisticsResponse rsp = GetTicketStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTicketStatisticsOutcome(rsp);
        else
            return GetTicketStatisticsOutcome(o.GetError());
    }
    else
    {
        return GetTicketStatisticsOutcome(outcome.GetError());
    }
}

void CaptchaClient::GetTicketStatisticsAsync(const GetTicketStatisticsRequest& request, const GetTicketStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTicketStatisticsRequest&;
    using Resp = GetTicketStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "GetTicketStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::GetTicketStatisticsOutcomeCallable CaptchaClient::GetTicketStatisticsCallable(const GetTicketStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTicketStatisticsOutcome>>();
    GetTicketStatisticsAsync(
    request,
    [prom](
        const CaptchaClient*,
        const GetTicketStatisticsRequest&,
        GetTicketStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::GetTotalRequestStatisticsOutcome CaptchaClient::GetTotalRequestStatistics(const GetTotalRequestStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "GetTotalRequestStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTotalRequestStatisticsResponse rsp = GetTotalRequestStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTotalRequestStatisticsOutcome(rsp);
        else
            return GetTotalRequestStatisticsOutcome(o.GetError());
    }
    else
    {
        return GetTotalRequestStatisticsOutcome(outcome.GetError());
    }
}

void CaptchaClient::GetTotalRequestStatisticsAsync(const GetTotalRequestStatisticsRequest& request, const GetTotalRequestStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTotalRequestStatisticsRequest&;
    using Resp = GetTotalRequestStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "GetTotalRequestStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::GetTotalRequestStatisticsOutcomeCallable CaptchaClient::GetTotalRequestStatisticsCallable(const GetTotalRequestStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTotalRequestStatisticsOutcome>>();
    GetTotalRequestStatisticsAsync(
    request,
    [prom](
        const CaptchaClient*,
        const GetTotalRequestStatisticsRequest&,
        GetTotalRequestStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::GetTotalTicketStatisticsOutcome CaptchaClient::GetTotalTicketStatistics(const GetTotalTicketStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "GetTotalTicketStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTotalTicketStatisticsResponse rsp = GetTotalTicketStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTotalTicketStatisticsOutcome(rsp);
        else
            return GetTotalTicketStatisticsOutcome(o.GetError());
    }
    else
    {
        return GetTotalTicketStatisticsOutcome(outcome.GetError());
    }
}

void CaptchaClient::GetTotalTicketStatisticsAsync(const GetTotalTicketStatisticsRequest& request, const GetTotalTicketStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTotalTicketStatisticsRequest&;
    using Resp = GetTotalTicketStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "GetTotalTicketStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::GetTotalTicketStatisticsOutcomeCallable CaptchaClient::GetTotalTicketStatisticsCallable(const GetTotalTicketStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTotalTicketStatisticsOutcome>>();
    GetTotalTicketStatisticsAsync(
    request,
    [prom](
        const CaptchaClient*,
        const GetTotalTicketStatisticsRequest&,
        GetTotalTicketStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::UpdateCaptchaAppIdInfoOutcome CaptchaClient::UpdateCaptchaAppIdInfo(const UpdateCaptchaAppIdInfoRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCaptchaAppIdInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCaptchaAppIdInfoResponse rsp = UpdateCaptchaAppIdInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCaptchaAppIdInfoOutcome(rsp);
        else
            return UpdateCaptchaAppIdInfoOutcome(o.GetError());
    }
    else
    {
        return UpdateCaptchaAppIdInfoOutcome(outcome.GetError());
    }
}

void CaptchaClient::UpdateCaptchaAppIdInfoAsync(const UpdateCaptchaAppIdInfoRequest& request, const UpdateCaptchaAppIdInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCaptchaAppIdInfoRequest&;
    using Resp = UpdateCaptchaAppIdInfoResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCaptchaAppIdInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::UpdateCaptchaAppIdInfoOutcomeCallable CaptchaClient::UpdateCaptchaAppIdInfoCallable(const UpdateCaptchaAppIdInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCaptchaAppIdInfoOutcome>>();
    UpdateCaptchaAppIdInfoAsync(
    request,
    [prom](
        const CaptchaClient*,
        const UpdateCaptchaAppIdInfoRequest&,
        UpdateCaptchaAppIdInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

