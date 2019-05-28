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

#include <tencentcloud/tbm/v20180129/TbmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tbm::V20180129;
using namespace TencentCloud::Tbm::V20180129::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-01-29";
    const string ENDPOINT = "tbm.tencentcloudapi.com";
}

TbmClient::TbmClient(const Credential &credential, const string &region) :
    TbmClient(credential, region, ClientProfile())
{
}

TbmClient::TbmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TbmClient::DescribeBrandCommentCountOutcome TbmClient::DescribeBrandCommentCount(const DescribeBrandCommentCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBrandCommentCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBrandCommentCountResponse rsp = DescribeBrandCommentCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBrandCommentCountOutcome(rsp);
        else
            return DescribeBrandCommentCountOutcome(o.GetError());
    }
    else
    {
        return DescribeBrandCommentCountOutcome(outcome.GetError());
    }
}

void TbmClient::DescribeBrandCommentCountAsync(const DescribeBrandCommentCountRequest& request, const DescribeBrandCommentCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBrandCommentCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbmClient::DescribeBrandCommentCountOutcomeCallable TbmClient::DescribeBrandCommentCountCallable(const DescribeBrandCommentCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBrandCommentCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeBrandCommentCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbmClient::DescribeBrandExposureOutcome TbmClient::DescribeBrandExposure(const DescribeBrandExposureRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBrandExposure");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBrandExposureResponse rsp = DescribeBrandExposureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBrandExposureOutcome(rsp);
        else
            return DescribeBrandExposureOutcome(o.GetError());
    }
    else
    {
        return DescribeBrandExposureOutcome(outcome.GetError());
    }
}

void TbmClient::DescribeBrandExposureAsync(const DescribeBrandExposureRequest& request, const DescribeBrandExposureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBrandExposure(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbmClient::DescribeBrandExposureOutcomeCallable TbmClient::DescribeBrandExposureCallable(const DescribeBrandExposureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBrandExposureOutcome()>>(
        [this, request]()
        {
            return this->DescribeBrandExposure(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbmClient::DescribeBrandMediaReportOutcome TbmClient::DescribeBrandMediaReport(const DescribeBrandMediaReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBrandMediaReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBrandMediaReportResponse rsp = DescribeBrandMediaReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBrandMediaReportOutcome(rsp);
        else
            return DescribeBrandMediaReportOutcome(o.GetError());
    }
    else
    {
        return DescribeBrandMediaReportOutcome(outcome.GetError());
    }
}

void TbmClient::DescribeBrandMediaReportAsync(const DescribeBrandMediaReportRequest& request, const DescribeBrandMediaReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBrandMediaReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbmClient::DescribeBrandMediaReportOutcomeCallable TbmClient::DescribeBrandMediaReportCallable(const DescribeBrandMediaReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBrandMediaReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeBrandMediaReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbmClient::DescribeBrandNegCommentsOutcome TbmClient::DescribeBrandNegComments(const DescribeBrandNegCommentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBrandNegComments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBrandNegCommentsResponse rsp = DescribeBrandNegCommentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBrandNegCommentsOutcome(rsp);
        else
            return DescribeBrandNegCommentsOutcome(o.GetError());
    }
    else
    {
        return DescribeBrandNegCommentsOutcome(outcome.GetError());
    }
}

void TbmClient::DescribeBrandNegCommentsAsync(const DescribeBrandNegCommentsRequest& request, const DescribeBrandNegCommentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBrandNegComments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbmClient::DescribeBrandNegCommentsOutcomeCallable TbmClient::DescribeBrandNegCommentsCallable(const DescribeBrandNegCommentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBrandNegCommentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBrandNegComments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbmClient::DescribeBrandPosCommentsOutcome TbmClient::DescribeBrandPosComments(const DescribeBrandPosCommentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBrandPosComments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBrandPosCommentsResponse rsp = DescribeBrandPosCommentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBrandPosCommentsOutcome(rsp);
        else
            return DescribeBrandPosCommentsOutcome(o.GetError());
    }
    else
    {
        return DescribeBrandPosCommentsOutcome(outcome.GetError());
    }
}

void TbmClient::DescribeBrandPosCommentsAsync(const DescribeBrandPosCommentsRequest& request, const DescribeBrandPosCommentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBrandPosComments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbmClient::DescribeBrandPosCommentsOutcomeCallable TbmClient::DescribeBrandPosCommentsCallable(const DescribeBrandPosCommentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBrandPosCommentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBrandPosComments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbmClient::DescribeBrandSocialOpinionOutcome TbmClient::DescribeBrandSocialOpinion(const DescribeBrandSocialOpinionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBrandSocialOpinion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBrandSocialOpinionResponse rsp = DescribeBrandSocialOpinionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBrandSocialOpinionOutcome(rsp);
        else
            return DescribeBrandSocialOpinionOutcome(o.GetError());
    }
    else
    {
        return DescribeBrandSocialOpinionOutcome(outcome.GetError());
    }
}

void TbmClient::DescribeBrandSocialOpinionAsync(const DescribeBrandSocialOpinionRequest& request, const DescribeBrandSocialOpinionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBrandSocialOpinion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbmClient::DescribeBrandSocialOpinionOutcomeCallable TbmClient::DescribeBrandSocialOpinionCallable(const DescribeBrandSocialOpinionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBrandSocialOpinionOutcome()>>(
        [this, request]()
        {
            return this->DescribeBrandSocialOpinion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbmClient::DescribeBrandSocialReportOutcome TbmClient::DescribeBrandSocialReport(const DescribeBrandSocialReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBrandSocialReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBrandSocialReportResponse rsp = DescribeBrandSocialReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBrandSocialReportOutcome(rsp);
        else
            return DescribeBrandSocialReportOutcome(o.GetError());
    }
    else
    {
        return DescribeBrandSocialReportOutcome(outcome.GetError());
    }
}

void TbmClient::DescribeBrandSocialReportAsync(const DescribeBrandSocialReportRequest& request, const DescribeBrandSocialReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBrandSocialReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbmClient::DescribeBrandSocialReportOutcomeCallable TbmClient::DescribeBrandSocialReportCallable(const DescribeBrandSocialReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBrandSocialReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeBrandSocialReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbmClient::DescribeIndustryNewsOutcome TbmClient::DescribeIndustryNews(const DescribeIndustryNewsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndustryNews");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndustryNewsResponse rsp = DescribeIndustryNewsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndustryNewsOutcome(rsp);
        else
            return DescribeIndustryNewsOutcome(o.GetError());
    }
    else
    {
        return DescribeIndustryNewsOutcome(outcome.GetError());
    }
}

void TbmClient::DescribeIndustryNewsAsync(const DescribeIndustryNewsRequest& request, const DescribeIndustryNewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIndustryNews(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbmClient::DescribeIndustryNewsOutcomeCallable TbmClient::DescribeIndustryNewsCallable(const DescribeIndustryNewsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIndustryNewsOutcome()>>(
        [this, request]()
        {
            return this->DescribeIndustryNews(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbmClient::DescribeUserPortraitOutcome TbmClient::DescribeUserPortrait(const DescribeUserPortraitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserPortrait");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserPortraitResponse rsp = DescribeUserPortraitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserPortraitOutcome(rsp);
        else
            return DescribeUserPortraitOutcome(o.GetError());
    }
    else
    {
        return DescribeUserPortraitOutcome(outcome.GetError());
    }
}

void TbmClient::DescribeUserPortraitAsync(const DescribeUserPortraitRequest& request, const DescribeUserPortraitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserPortrait(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbmClient::DescribeUserPortraitOutcomeCallable TbmClient::DescribeUserPortraitCallable(const DescribeUserPortraitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserPortraitOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserPortrait(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

