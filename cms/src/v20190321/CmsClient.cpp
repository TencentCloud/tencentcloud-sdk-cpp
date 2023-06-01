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


CmsClient::CreateKeywordsSamplesOutcome CmsClient::CreateKeywordsSamples(const CreateKeywordsSamplesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKeywordsSamples");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKeywordsSamplesResponse rsp = CreateKeywordsSamplesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKeywordsSamplesOutcome(rsp);
        else
            return CreateKeywordsSamplesOutcome(o.GetError());
    }
    else
    {
        return CreateKeywordsSamplesOutcome(outcome.GetError());
    }
}

void CmsClient::CreateKeywordsSamplesAsync(const CreateKeywordsSamplesRequest& request, const CreateKeywordsSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateKeywordsSamples(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmsClient::CreateKeywordsSamplesOutcomeCallable CmsClient::CreateKeywordsSamplesCallable(const CreateKeywordsSamplesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateKeywordsSamplesOutcome()>>(
        [this, request]()
        {
            return this->CreateKeywordsSamples(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmsClient::DeleteLibSamplesOutcome CmsClient::DeleteLibSamples(const DeleteLibSamplesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLibSamples");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLibSamplesResponse rsp = DeleteLibSamplesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLibSamplesOutcome(rsp);
        else
            return DeleteLibSamplesOutcome(o.GetError());
    }
    else
    {
        return DeleteLibSamplesOutcome(outcome.GetError());
    }
}

void CmsClient::DeleteLibSamplesAsync(const DeleteLibSamplesRequest& request, const DeleteLibSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLibSamples(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmsClient::DeleteLibSamplesOutcomeCallable CmsClient::DeleteLibSamplesCallable(const DeleteLibSamplesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLibSamplesOutcome()>>(
        [this, request]()
        {
            return this->DeleteLibSamples(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmsClient::DescribeKeywordsLibsOutcome CmsClient::DescribeKeywordsLibs(const DescribeKeywordsLibsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKeywordsLibs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKeywordsLibsResponse rsp = DescribeKeywordsLibsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKeywordsLibsOutcome(rsp);
        else
            return DescribeKeywordsLibsOutcome(o.GetError());
    }
    else
    {
        return DescribeKeywordsLibsOutcome(outcome.GetError());
    }
}

void CmsClient::DescribeKeywordsLibsAsync(const DescribeKeywordsLibsRequest& request, const DescribeKeywordsLibsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKeywordsLibs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmsClient::DescribeKeywordsLibsOutcomeCallable CmsClient::DescribeKeywordsLibsCallable(const DescribeKeywordsLibsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKeywordsLibsOutcome()>>(
        [this, request]()
        {
            return this->DescribeKeywordsLibs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmsClient::DescribeLibSamplesOutcome CmsClient::DescribeLibSamples(const DescribeLibSamplesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLibSamples");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLibSamplesResponse rsp = DescribeLibSamplesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLibSamplesOutcome(rsp);
        else
            return DescribeLibSamplesOutcome(o.GetError());
    }
    else
    {
        return DescribeLibSamplesOutcome(outcome.GetError());
    }
}

void CmsClient::DescribeLibSamplesAsync(const DescribeLibSamplesRequest& request, const DescribeLibSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLibSamples(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmsClient::DescribeLibSamplesOutcomeCallable CmsClient::DescribeLibSamplesCallable(const DescribeLibSamplesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLibSamplesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLibSamples(request);
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

