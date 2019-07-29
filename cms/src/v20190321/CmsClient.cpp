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

#include <tencentcloud/cms/v20190321/CmsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cms::V20190321;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-21";
    const string ENDPOINT = "cms.tencentcloudapi.com";
}

CmsClient::CmsClient(const Credential &credential, const string &region) :
    CmsClient(credential, region, ClientProfile())
{
}

CmsClient::CmsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CmsClient::AudioModerationOutcome CmsClient::AudioModeration(const AudioModerationRequest &request)
{
    auto outcome = MakeRequest(request, "AudioModeration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AudioModerationResponse rsp = AudioModerationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AudioModerationOutcome(rsp);
        else
            return AudioModerationOutcome(o.GetError());
    }
    else
    {
        return AudioModerationOutcome(outcome.GetError());
    }
}

void CmsClient::AudioModerationAsync(const AudioModerationRequest& request, const AudioModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AudioModeration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmsClient::AudioModerationOutcomeCallable CmsClient::AudioModerationCallable(const AudioModerationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AudioModerationOutcome()>>(
        [this, request]()
        {
            return this->AudioModeration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmsClient::CreateTextSampleOutcome CmsClient::CreateTextSample(const CreateTextSampleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTextSample");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTextSampleResponse rsp = CreateTextSampleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTextSampleOutcome(rsp);
        else
            return CreateTextSampleOutcome(o.GetError());
    }
    else
    {
        return CreateTextSampleOutcome(outcome.GetError());
    }
}

void CmsClient::CreateTextSampleAsync(const CreateTextSampleRequest& request, const CreateTextSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTextSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmsClient::CreateTextSampleOutcomeCallable CmsClient::CreateTextSampleCallable(const CreateTextSampleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTextSampleOutcome()>>(
        [this, request]()
        {
            return this->CreateTextSample(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmsClient::DeleteTextSampleOutcome CmsClient::DeleteTextSample(const DeleteTextSampleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTextSample");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTextSampleResponse rsp = DeleteTextSampleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTextSampleOutcome(rsp);
        else
            return DeleteTextSampleOutcome(o.GetError());
    }
    else
    {
        return DeleteTextSampleOutcome(outcome.GetError());
    }
}

void CmsClient::DeleteTextSampleAsync(const DeleteTextSampleRequest& request, const DeleteTextSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTextSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmsClient::DeleteTextSampleOutcomeCallable CmsClient::DeleteTextSampleCallable(const DeleteTextSampleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTextSampleOutcome()>>(
        [this, request]()
        {
            return this->DeleteTextSample(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmsClient::DescribeModerationOverviewOutcome CmsClient::DescribeModerationOverview(const DescribeModerationOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModerationOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModerationOverviewResponse rsp = DescribeModerationOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModerationOverviewOutcome(rsp);
        else
            return DescribeModerationOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeModerationOverviewOutcome(outcome.GetError());
    }
}

void CmsClient::DescribeModerationOverviewAsync(const DescribeModerationOverviewRequest& request, const DescribeModerationOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModerationOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmsClient::DescribeModerationOverviewOutcomeCallable CmsClient::DescribeModerationOverviewCallable(const DescribeModerationOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModerationOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeModerationOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmsClient::DescribeTextSampleOutcome CmsClient::DescribeTextSample(const DescribeTextSampleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTextSample");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTextSampleResponse rsp = DescribeTextSampleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTextSampleOutcome(rsp);
        else
            return DescribeTextSampleOutcome(o.GetError());
    }
    else
    {
        return DescribeTextSampleOutcome(outcome.GetError());
    }
}

void CmsClient::DescribeTextSampleAsync(const DescribeTextSampleRequest& request, const DescribeTextSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTextSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmsClient::DescribeTextSampleOutcomeCallable CmsClient::DescribeTextSampleCallable(const DescribeTextSampleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTextSampleOutcome()>>(
        [this, request]()
        {
            return this->DescribeTextSample(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmsClient::ImageModerationOutcome CmsClient::ImageModeration(const ImageModerationRequest &request)
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

void CmsClient::ImageModerationAsync(const ImageModerationRequest& request, const ImageModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageModeration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmsClient::ImageModerationOutcomeCallable CmsClient::ImageModerationCallable(const ImageModerationRequest &request)
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

CmsClient::TextModerationOutcome CmsClient::TextModeration(const TextModerationRequest &request)
{
    auto outcome = MakeRequest(request, "TextModeration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextModerationResponse rsp = TextModerationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextModerationOutcome(rsp);
        else
            return TextModerationOutcome(o.GetError());
    }
    else
    {
        return TextModerationOutcome(outcome.GetError());
    }
}

void CmsClient::TextModerationAsync(const TextModerationRequest& request, const TextModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextModeration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmsClient::TextModerationOutcomeCallable CmsClient::TextModerationCallable(const TextModerationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextModerationOutcome()>>(
        [this, request]()
        {
            return this->TextModeration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmsClient::VideoModerationOutcome CmsClient::VideoModeration(const VideoModerationRequest &request)
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

void CmsClient::VideoModerationAsync(const VideoModerationRequest& request, const VideoModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VideoModeration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmsClient::VideoModerationOutcomeCallable CmsClient::VideoModerationCallable(const VideoModerationRequest &request)
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

