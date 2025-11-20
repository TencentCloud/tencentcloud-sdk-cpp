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
    using Req = const CreateKeywordsSamplesRequest&;
    using Resp = CreateKeywordsSamplesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateKeywordsSamples", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmsClient::CreateKeywordsSamplesOutcomeCallable CmsClient::CreateKeywordsSamplesCallable(const CreateKeywordsSamplesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateKeywordsSamplesOutcome>>();
    CreateKeywordsSamplesAsync(
    request,
    [prom](
        const CmsClient*,
        const CreateKeywordsSamplesRequest&,
        CreateKeywordsSamplesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteLibSamplesRequest&;
    using Resp = DeleteLibSamplesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLibSamples", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmsClient::DeleteLibSamplesOutcomeCallable CmsClient::DeleteLibSamplesCallable(const DeleteLibSamplesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLibSamplesOutcome>>();
    DeleteLibSamplesAsync(
    request,
    [prom](
        const CmsClient*,
        const DeleteLibSamplesRequest&,
        DeleteLibSamplesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeKeywordsLibsRequest&;
    using Resp = DescribeKeywordsLibsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKeywordsLibs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmsClient::DescribeKeywordsLibsOutcomeCallable CmsClient::DescribeKeywordsLibsCallable(const DescribeKeywordsLibsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKeywordsLibsOutcome>>();
    DescribeKeywordsLibsAsync(
    request,
    [prom](
        const CmsClient*,
        const DescribeKeywordsLibsRequest&,
        DescribeKeywordsLibsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeLibSamplesRequest&;
    using Resp = DescribeLibSamplesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLibSamples", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmsClient::DescribeLibSamplesOutcomeCallable CmsClient::DescribeLibSamplesCallable(const DescribeLibSamplesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLibSamplesOutcome>>();
    DescribeLibSamplesAsync(
    request,
    [prom](
        const CmsClient*,
        const DescribeLibSamplesRequest&,
        DescribeLibSamplesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ImageModerationRequest&;
    using Resp = ImageModerationResponse;

    DoRequestAsync<Req, Resp>(
        "ImageModeration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmsClient::ImageModerationOutcomeCallable CmsClient::ImageModerationCallable(const ImageModerationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImageModerationOutcome>>();
    ImageModerationAsync(
    request,
    [prom](
        const CmsClient*,
        const ImageModerationRequest&,
        ImageModerationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TextModerationRequest&;
    using Resp = TextModerationResponse;

    DoRequestAsync<Req, Resp>(
        "TextModeration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmsClient::TextModerationOutcomeCallable CmsClient::TextModerationCallable(const TextModerationRequest &request)
{
    const auto prom = std::make_shared<std::promise<TextModerationOutcome>>();
    TextModerationAsync(
    request,
    [prom](
        const CmsClient*,
        const TextModerationRequest&,
        TextModerationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

