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

#include <tencentcloud/ims/v20200713/ImsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ims::V20200713;
using namespace TencentCloud::Ims::V20200713::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-07-13";
    const string ENDPOINT = "ims.tencentcloudapi.com";
}

ImsClient::ImsClient(const Credential &credential, const string &region) :
    ImsClient(credential, region, ClientProfile())
{
}

ImsClient::ImsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ImsClient::DescribeImageStatOutcome ImsClient::DescribeImageStat(const DescribeImageStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageStatResponse rsp = DescribeImageStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageStatOutcome(rsp);
        else
            return DescribeImageStatOutcome(o.GetError());
    }
    else
    {
        return DescribeImageStatOutcome(outcome.GetError());
    }
}

void ImsClient::DescribeImageStatAsync(const DescribeImageStatRequest& request, const DescribeImageStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ImsClient::DescribeImageStatOutcomeCallable ImsClient::DescribeImageStatCallable(const DescribeImageStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageStatOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ImsClient::DescribeImsListOutcome ImsClient::DescribeImsList(const DescribeImsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImsListResponse rsp = DescribeImsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImsListOutcome(rsp);
        else
            return DescribeImsListOutcome(o.GetError());
    }
    else
    {
        return DescribeImsListOutcome(outcome.GetError());
    }
}

void ImsClient::DescribeImsListAsync(const DescribeImsListRequest& request, const DescribeImsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImsList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ImsClient::DescribeImsListOutcomeCallable ImsClient::DescribeImsListCallable(const DescribeImsListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImsListOutcome()>>(
        [this, request]()
        {
            return this->DescribeImsList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ImsClient::ImageModerationOutcome ImsClient::ImageModeration(const ImageModerationRequest &request)
{
    auto outcome = MakeRequest(request, "ImageModeration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageModerationResponse rsp = ImageModerationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageModerationOutcome(rsp);
        else
            return ImageModerationOutcome(o.GetError());
    }
    else
    {
        return ImageModerationOutcome(outcome.GetError());
    }
}

void ImsClient::ImageModerationAsync(const ImageModerationRequest& request, const ImageModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageModeration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ImsClient::ImageModerationOutcomeCallable ImsClient::ImageModerationCallable(const ImageModerationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImageModerationOutcome()>>(
        [this, request]()
        {
            return this->ImageModeration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

