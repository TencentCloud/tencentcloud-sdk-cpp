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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaptchaAppIdInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::DescribeCaptchaAppIdInfoOutcomeCallable CaptchaClient::DescribeCaptchaAppIdInfoCallable(const DescribeCaptchaAppIdInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaptchaAppIdInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaptchaAppIdInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaptchaData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::DescribeCaptchaDataOutcomeCallable CaptchaClient::DescribeCaptchaDataCallable(const DescribeCaptchaDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaptchaDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaptchaData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaptchaDataSum(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::DescribeCaptchaDataSumOutcomeCallable CaptchaClient::DescribeCaptchaDataSumCallable(const DescribeCaptchaDataSumRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaptchaDataSumOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaptchaDataSum(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaptchaMiniData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::DescribeCaptchaMiniDataOutcomeCallable CaptchaClient::DescribeCaptchaMiniDataCallable(const DescribeCaptchaMiniDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaptchaMiniDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaptchaMiniData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaptchaMiniDataSum(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::DescribeCaptchaMiniDataSumOutcomeCallable CaptchaClient::DescribeCaptchaMiniDataSumCallable(const DescribeCaptchaMiniDataSumRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaptchaMiniDataSumOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaptchaMiniDataSum(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaptchaMiniOperData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::DescribeCaptchaMiniOperDataOutcomeCallable CaptchaClient::DescribeCaptchaMiniOperDataCallable(const DescribeCaptchaMiniOperDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaptchaMiniOperDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaptchaMiniOperData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaptchaMiniResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::DescribeCaptchaMiniResultOutcomeCallable CaptchaClient::DescribeCaptchaMiniResultCallable(const DescribeCaptchaMiniResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaptchaMiniResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaptchaMiniResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaptchaMiniRiskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::DescribeCaptchaMiniRiskResultOutcomeCallable CaptchaClient::DescribeCaptchaMiniRiskResultCallable(const DescribeCaptchaMiniRiskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaptchaMiniRiskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaptchaMiniRiskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaptchaOperData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::DescribeCaptchaOperDataOutcomeCallable CaptchaClient::DescribeCaptchaOperDataCallable(const DescribeCaptchaOperDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaptchaOperDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaptchaOperData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaptchaRceResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::DescribeCaptchaRceResultOutcomeCallable CaptchaClient::DescribeCaptchaRceResultCallable(const DescribeCaptchaRceResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaptchaRceResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaptchaRceResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaptchaResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::DescribeCaptchaResultOutcomeCallable CaptchaClient::DescribeCaptchaResultCallable(const DescribeCaptchaResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaptchaResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaptchaResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaptchaTicketData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::DescribeCaptchaTicketDataOutcomeCallable CaptchaClient::DescribeCaptchaTicketDataCallable(const DescribeCaptchaTicketDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaptchaTicketDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaptchaTicketData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaptchaUserAllAppId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::DescribeCaptchaUserAllAppIdOutcomeCallable CaptchaClient::DescribeCaptchaUserAllAppIdCallable(const DescribeCaptchaUserAllAppIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaptchaUserAllAppIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaptchaUserAllAppId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRequestStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::GetRequestStatisticsOutcomeCallable CaptchaClient::GetRequestStatisticsCallable(const GetRequestStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRequestStatisticsOutcome()>>(
        [this, request]()
        {
            return this->GetRequestStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTicketStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::GetTicketStatisticsOutcomeCallable CaptchaClient::GetTicketStatisticsCallable(const GetTicketStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTicketStatisticsOutcome()>>(
        [this, request]()
        {
            return this->GetTicketStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTotalRequestStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::GetTotalRequestStatisticsOutcomeCallable CaptchaClient::GetTotalRequestStatisticsCallable(const GetTotalRequestStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTotalRequestStatisticsOutcome()>>(
        [this, request]()
        {
            return this->GetTotalRequestStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTotalTicketStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::GetTotalTicketStatisticsOutcomeCallable CaptchaClient::GetTotalTicketStatisticsCallable(const GetTotalTicketStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTotalTicketStatisticsOutcome()>>(
        [this, request]()
        {
            return this->GetTotalTicketStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCaptchaAppIdInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CaptchaClient::UpdateCaptchaAppIdInfoOutcomeCallable CaptchaClient::UpdateCaptchaAppIdInfoCallable(const UpdateCaptchaAppIdInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCaptchaAppIdInfoOutcome()>>(
        [this, request]()
        {
            return this->UpdateCaptchaAppIdInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

