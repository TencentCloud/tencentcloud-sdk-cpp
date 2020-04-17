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

#include <tencentcloud/ticm/v20181127/TicmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ticm::V20181127;
using namespace TencentCloud::Ticm::V20181127::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-11-27";
    const string ENDPOINT = "ticm.tencentcloudapi.com";
}

TicmClient::TicmClient(const Credential &credential, const string &region) :
    TicmClient(credential, region, ClientProfile())
{
}

TicmClient::TicmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TicmClient::DescribeVideoTaskOutcome TicmClient::DescribeVideoTask(const DescribeVideoTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoTaskResponse rsp = DescribeVideoTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoTaskOutcome(rsp);
        else
            return DescribeVideoTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoTaskOutcome(outcome.GetError());
    }
}

void TicmClient::DescribeVideoTaskAsync(const DescribeVideoTaskRequest& request, const DescribeVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVideoTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicmClient::DescribeVideoTaskOutcomeCallable TicmClient::DescribeVideoTaskCallable(const DescribeVideoTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVideoTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeVideoTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicmClient::ImageModerationOutcome TicmClient::ImageModeration(const ImageModerationRequest &request)
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

void TicmClient::ImageModerationAsync(const ImageModerationRequest& request, const ImageModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageModeration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicmClient::ImageModerationOutcomeCallable TicmClient::ImageModerationCallable(const ImageModerationRequest &request)
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

TicmClient::VideoModerationOutcome TicmClient::VideoModeration(const VideoModerationRequest &request)
{
    auto outcome = MakeRequest(request, "VideoModeration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VideoModerationResponse rsp = VideoModerationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VideoModerationOutcome(rsp);
        else
            return VideoModerationOutcome(o.GetError());
    }
    else
    {
        return VideoModerationOutcome(outcome.GetError());
    }
}

void TicmClient::VideoModerationAsync(const VideoModerationRequest& request, const VideoModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VideoModeration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicmClient::VideoModerationOutcomeCallable TicmClient::VideoModerationCallable(const VideoModerationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VideoModerationOutcome()>>(
        [this, request]()
        {
            return this->VideoModeration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

