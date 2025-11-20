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

#include <tencentcloud/yinsuda/v20220527/YinsudaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Yinsuda::V20220527;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-05-27";
    const string ENDPOINT = "yinsuda.tencentcloudapi.com";
}

YinsudaClient::YinsudaClient(const Credential &credential, const string &region) :
    YinsudaClient(credential, region, ClientProfile())
{
}

YinsudaClient::YinsudaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


YinsudaClient::ApplyChorusOutcome YinsudaClient::ApplyChorus(const ApplyChorusRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyChorus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyChorusResponse rsp = ApplyChorusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyChorusOutcome(rsp);
        else
            return ApplyChorusOutcome(o.GetError());
    }
    else
    {
        return ApplyChorusOutcome(outcome.GetError());
    }
}

void YinsudaClient::ApplyChorusAsync(const ApplyChorusRequest& request, const ApplyChorusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyChorusRequest&;
    using Resp = ApplyChorusResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyChorus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::ApplyChorusOutcomeCallable YinsudaClient::ApplyChorusCallable(const ApplyChorusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyChorusOutcome>>();
    ApplyChorusAsync(
    request,
    [prom](
        const YinsudaClient*,
        const ApplyChorusRequest&,
        ApplyChorusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::BatchDescribeKTVMusicDetailsOutcome YinsudaClient::BatchDescribeKTVMusicDetails(const BatchDescribeKTVMusicDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDescribeKTVMusicDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDescribeKTVMusicDetailsResponse rsp = BatchDescribeKTVMusicDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDescribeKTVMusicDetailsOutcome(rsp);
        else
            return BatchDescribeKTVMusicDetailsOutcome(o.GetError());
    }
    else
    {
        return BatchDescribeKTVMusicDetailsOutcome(outcome.GetError());
    }
}

void YinsudaClient::BatchDescribeKTVMusicDetailsAsync(const BatchDescribeKTVMusicDetailsRequest& request, const BatchDescribeKTVMusicDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchDescribeKTVMusicDetailsRequest&;
    using Resp = BatchDescribeKTVMusicDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDescribeKTVMusicDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::BatchDescribeKTVMusicDetailsOutcomeCallable YinsudaClient::BatchDescribeKTVMusicDetailsCallable(const BatchDescribeKTVMusicDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDescribeKTVMusicDetailsOutcome>>();
    BatchDescribeKTVMusicDetailsAsync(
    request,
    [prom](
        const YinsudaClient*,
        const BatchDescribeKTVMusicDetailsRequest&,
        BatchDescribeKTVMusicDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::CreateKTVRobotOutcome YinsudaClient::CreateKTVRobot(const CreateKTVRobotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKTVRobot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKTVRobotResponse rsp = CreateKTVRobotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKTVRobotOutcome(rsp);
        else
            return CreateKTVRobotOutcome(o.GetError());
    }
    else
    {
        return CreateKTVRobotOutcome(outcome.GetError());
    }
}

void YinsudaClient::CreateKTVRobotAsync(const CreateKTVRobotRequest& request, const CreateKTVRobotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateKTVRobotRequest&;
    using Resp = CreateKTVRobotResponse;

    DoRequestAsync<Req, Resp>(
        "CreateKTVRobot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::CreateKTVRobotOutcomeCallable YinsudaClient::CreateKTVRobotCallable(const CreateKTVRobotRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateKTVRobotOutcome>>();
    CreateKTVRobotAsync(
    request,
    [prom](
        const YinsudaClient*,
        const CreateKTVRobotRequest&,
        CreateKTVRobotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::DescribeKTVMatchMusicsOutcome YinsudaClient::DescribeKTVMatchMusics(const DescribeKTVMatchMusicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKTVMatchMusics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKTVMatchMusicsResponse rsp = DescribeKTVMatchMusicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKTVMatchMusicsOutcome(rsp);
        else
            return DescribeKTVMatchMusicsOutcome(o.GetError());
    }
    else
    {
        return DescribeKTVMatchMusicsOutcome(outcome.GetError());
    }
}

void YinsudaClient::DescribeKTVMatchMusicsAsync(const DescribeKTVMatchMusicsRequest& request, const DescribeKTVMatchMusicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKTVMatchMusicsRequest&;
    using Resp = DescribeKTVMatchMusicsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVMatchMusics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::DescribeKTVMatchMusicsOutcomeCallable YinsudaClient::DescribeKTVMatchMusicsCallable(const DescribeKTVMatchMusicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVMatchMusicsOutcome>>();
    DescribeKTVMatchMusicsAsync(
    request,
    [prom](
        const YinsudaClient*,
        const DescribeKTVMatchMusicsRequest&,
        DescribeKTVMatchMusicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::DescribeKTVMusicAccompanySegmentUrlOutcome YinsudaClient::DescribeKTVMusicAccompanySegmentUrl(const DescribeKTVMusicAccompanySegmentUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKTVMusicAccompanySegmentUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKTVMusicAccompanySegmentUrlResponse rsp = DescribeKTVMusicAccompanySegmentUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKTVMusicAccompanySegmentUrlOutcome(rsp);
        else
            return DescribeKTVMusicAccompanySegmentUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeKTVMusicAccompanySegmentUrlOutcome(outcome.GetError());
    }
}

void YinsudaClient::DescribeKTVMusicAccompanySegmentUrlAsync(const DescribeKTVMusicAccompanySegmentUrlRequest& request, const DescribeKTVMusicAccompanySegmentUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKTVMusicAccompanySegmentUrlRequest&;
    using Resp = DescribeKTVMusicAccompanySegmentUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVMusicAccompanySegmentUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::DescribeKTVMusicAccompanySegmentUrlOutcomeCallable YinsudaClient::DescribeKTVMusicAccompanySegmentUrlCallable(const DescribeKTVMusicAccompanySegmentUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVMusicAccompanySegmentUrlOutcome>>();
    DescribeKTVMusicAccompanySegmentUrlAsync(
    request,
    [prom](
        const YinsudaClient*,
        const DescribeKTVMusicAccompanySegmentUrlRequest&,
        DescribeKTVMusicAccompanySegmentUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::DescribeKTVMusicAccompanySegmentUrlVipOutcome YinsudaClient::DescribeKTVMusicAccompanySegmentUrlVip(const DescribeKTVMusicAccompanySegmentUrlVipRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKTVMusicAccompanySegmentUrlVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKTVMusicAccompanySegmentUrlVipResponse rsp = DescribeKTVMusicAccompanySegmentUrlVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKTVMusicAccompanySegmentUrlVipOutcome(rsp);
        else
            return DescribeKTVMusicAccompanySegmentUrlVipOutcome(o.GetError());
    }
    else
    {
        return DescribeKTVMusicAccompanySegmentUrlVipOutcome(outcome.GetError());
    }
}

void YinsudaClient::DescribeKTVMusicAccompanySegmentUrlVipAsync(const DescribeKTVMusicAccompanySegmentUrlVipRequest& request, const DescribeKTVMusicAccompanySegmentUrlVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKTVMusicAccompanySegmentUrlVipRequest&;
    using Resp = DescribeKTVMusicAccompanySegmentUrlVipResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVMusicAccompanySegmentUrlVip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::DescribeKTVMusicAccompanySegmentUrlVipOutcomeCallable YinsudaClient::DescribeKTVMusicAccompanySegmentUrlVipCallable(const DescribeKTVMusicAccompanySegmentUrlVipRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVMusicAccompanySegmentUrlVipOutcome>>();
    DescribeKTVMusicAccompanySegmentUrlVipAsync(
    request,
    [prom](
        const YinsudaClient*,
        const DescribeKTVMusicAccompanySegmentUrlVipRequest&,
        DescribeKTVMusicAccompanySegmentUrlVipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::DescribeKTVMusicsByTagOutcome YinsudaClient::DescribeKTVMusicsByTag(const DescribeKTVMusicsByTagRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKTVMusicsByTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKTVMusicsByTagResponse rsp = DescribeKTVMusicsByTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKTVMusicsByTagOutcome(rsp);
        else
            return DescribeKTVMusicsByTagOutcome(o.GetError());
    }
    else
    {
        return DescribeKTVMusicsByTagOutcome(outcome.GetError());
    }
}

void YinsudaClient::DescribeKTVMusicsByTagAsync(const DescribeKTVMusicsByTagRequest& request, const DescribeKTVMusicsByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKTVMusicsByTagRequest&;
    using Resp = DescribeKTVMusicsByTagResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVMusicsByTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::DescribeKTVMusicsByTagOutcomeCallable YinsudaClient::DescribeKTVMusicsByTagCallable(const DescribeKTVMusicsByTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVMusicsByTagOutcome>>();
    DescribeKTVMusicsByTagAsync(
    request,
    [prom](
        const YinsudaClient*,
        const DescribeKTVMusicsByTagRequest&,
        DescribeKTVMusicsByTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::DescribeKTVPlaylistDetailOutcome YinsudaClient::DescribeKTVPlaylistDetail(const DescribeKTVPlaylistDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKTVPlaylistDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKTVPlaylistDetailResponse rsp = DescribeKTVPlaylistDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKTVPlaylistDetailOutcome(rsp);
        else
            return DescribeKTVPlaylistDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeKTVPlaylistDetailOutcome(outcome.GetError());
    }
}

void YinsudaClient::DescribeKTVPlaylistDetailAsync(const DescribeKTVPlaylistDetailRequest& request, const DescribeKTVPlaylistDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKTVPlaylistDetailRequest&;
    using Resp = DescribeKTVPlaylistDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVPlaylistDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::DescribeKTVPlaylistDetailOutcomeCallable YinsudaClient::DescribeKTVPlaylistDetailCallable(const DescribeKTVPlaylistDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVPlaylistDetailOutcome>>();
    DescribeKTVPlaylistDetailAsync(
    request,
    [prom](
        const YinsudaClient*,
        const DescribeKTVPlaylistDetailRequest&,
        DescribeKTVPlaylistDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::DescribeKTVPlaylistsOutcome YinsudaClient::DescribeKTVPlaylists(const DescribeKTVPlaylistsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKTVPlaylists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKTVPlaylistsResponse rsp = DescribeKTVPlaylistsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKTVPlaylistsOutcome(rsp);
        else
            return DescribeKTVPlaylistsOutcome(o.GetError());
    }
    else
    {
        return DescribeKTVPlaylistsOutcome(outcome.GetError());
    }
}

void YinsudaClient::DescribeKTVPlaylistsAsync(const DescribeKTVPlaylistsRequest& request, const DescribeKTVPlaylistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKTVPlaylistsRequest&;
    using Resp = DescribeKTVPlaylistsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVPlaylists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::DescribeKTVPlaylistsOutcomeCallable YinsudaClient::DescribeKTVPlaylistsCallable(const DescribeKTVPlaylistsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVPlaylistsOutcome>>();
    DescribeKTVPlaylistsAsync(
    request,
    [prom](
        const YinsudaClient*,
        const DescribeKTVPlaylistsRequest&,
        DescribeKTVPlaylistsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::DescribeKTVRobotsOutcome YinsudaClient::DescribeKTVRobots(const DescribeKTVRobotsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKTVRobots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKTVRobotsResponse rsp = DescribeKTVRobotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKTVRobotsOutcome(rsp);
        else
            return DescribeKTVRobotsOutcome(o.GetError());
    }
    else
    {
        return DescribeKTVRobotsOutcome(outcome.GetError());
    }
}

void YinsudaClient::DescribeKTVRobotsAsync(const DescribeKTVRobotsRequest& request, const DescribeKTVRobotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKTVRobotsRequest&;
    using Resp = DescribeKTVRobotsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVRobots", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::DescribeKTVRobotsOutcomeCallable YinsudaClient::DescribeKTVRobotsCallable(const DescribeKTVRobotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVRobotsOutcome>>();
    DescribeKTVRobotsAsync(
    request,
    [prom](
        const YinsudaClient*,
        const DescribeKTVRobotsRequest&,
        DescribeKTVRobotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::DescribeKTVSuggestionsOutcome YinsudaClient::DescribeKTVSuggestions(const DescribeKTVSuggestionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKTVSuggestions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKTVSuggestionsResponse rsp = DescribeKTVSuggestionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKTVSuggestionsOutcome(rsp);
        else
            return DescribeKTVSuggestionsOutcome(o.GetError());
    }
    else
    {
        return DescribeKTVSuggestionsOutcome(outcome.GetError());
    }
}

void YinsudaClient::DescribeKTVSuggestionsAsync(const DescribeKTVSuggestionsRequest& request, const DescribeKTVSuggestionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKTVSuggestionsRequest&;
    using Resp = DescribeKTVSuggestionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVSuggestions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::DescribeKTVSuggestionsOutcomeCallable YinsudaClient::DescribeKTVSuggestionsCallable(const DescribeKTVSuggestionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVSuggestionsOutcome>>();
    DescribeKTVSuggestionsAsync(
    request,
    [prom](
        const YinsudaClient*,
        const DescribeKTVSuggestionsRequest&,
        DescribeKTVSuggestionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::DescribeKTVTagsOutcome YinsudaClient::DescribeKTVTags(const DescribeKTVTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKTVTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKTVTagsResponse rsp = DescribeKTVTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKTVTagsOutcome(rsp);
        else
            return DescribeKTVTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeKTVTagsOutcome(outcome.GetError());
    }
}

void YinsudaClient::DescribeKTVTagsAsync(const DescribeKTVTagsRequest& request, const DescribeKTVTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKTVTagsRequest&;
    using Resp = DescribeKTVTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::DescribeKTVTagsOutcomeCallable YinsudaClient::DescribeKTVTagsCallable(const DescribeKTVTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVTagsOutcome>>();
    DescribeKTVTagsAsync(
    request,
    [prom](
        const YinsudaClient*,
        const DescribeKTVTagsRequest&,
        DescribeKTVTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::DescribeLiveVipTradeInfosOutcome YinsudaClient::DescribeLiveVipTradeInfos(const DescribeLiveVipTradeInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveVipTradeInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveVipTradeInfosResponse rsp = DescribeLiveVipTradeInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveVipTradeInfosOutcome(rsp);
        else
            return DescribeLiveVipTradeInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveVipTradeInfosOutcome(outcome.GetError());
    }
}

void YinsudaClient::DescribeLiveVipTradeInfosAsync(const DescribeLiveVipTradeInfosRequest& request, const DescribeLiveVipTradeInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveVipTradeInfosRequest&;
    using Resp = DescribeLiveVipTradeInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveVipTradeInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::DescribeLiveVipTradeInfosOutcomeCallable YinsudaClient::DescribeLiveVipTradeInfosCallable(const DescribeLiveVipTradeInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveVipTradeInfosOutcome>>();
    DescribeLiveVipTradeInfosAsync(
    request,
    [prom](
        const YinsudaClient*,
        const DescribeLiveVipTradeInfosRequest&,
        DescribeLiveVipTradeInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::DescribeUserInfoOutcome YinsudaClient::DescribeUserInfo(const DescribeUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserInfoResponse rsp = DescribeUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserInfoOutcome(rsp);
        else
            return DescribeUserInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUserInfoOutcome(outcome.GetError());
    }
}

void YinsudaClient::DescribeUserInfoAsync(const DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserInfoRequest&;
    using Resp = DescribeUserInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::DescribeUserInfoOutcomeCallable YinsudaClient::DescribeUserInfoCallable(const DescribeUserInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserInfoOutcome>>();
    DescribeUserInfoAsync(
    request,
    [prom](
        const YinsudaClient*,
        const DescribeUserInfoRequest&,
        DescribeUserInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::DescribeVipUserInfoOutcome YinsudaClient::DescribeVipUserInfo(const DescribeVipUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVipUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVipUserInfoResponse rsp = DescribeVipUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVipUserInfoOutcome(rsp);
        else
            return DescribeVipUserInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeVipUserInfoOutcome(outcome.GetError());
    }
}

void YinsudaClient::DescribeVipUserInfoAsync(const DescribeVipUserInfoRequest& request, const DescribeVipUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVipUserInfoRequest&;
    using Resp = DescribeVipUserInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVipUserInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::DescribeVipUserInfoOutcomeCallable YinsudaClient::DescribeVipUserInfoCallable(const DescribeVipUserInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVipUserInfoOutcome>>();
    DescribeVipUserInfoAsync(
    request,
    [prom](
        const YinsudaClient*,
        const DescribeVipUserInfoRequest&,
        DescribeVipUserInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::DestroyKTVRobotOutcome YinsudaClient::DestroyKTVRobot(const DestroyKTVRobotRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyKTVRobot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyKTVRobotResponse rsp = DestroyKTVRobotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyKTVRobotOutcome(rsp);
        else
            return DestroyKTVRobotOutcome(o.GetError());
    }
    else
    {
        return DestroyKTVRobotOutcome(outcome.GetError());
    }
}

void YinsudaClient::DestroyKTVRobotAsync(const DestroyKTVRobotRequest& request, const DestroyKTVRobotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyKTVRobotRequest&;
    using Resp = DestroyKTVRobotResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyKTVRobot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::DestroyKTVRobotOutcomeCallable YinsudaClient::DestroyKTVRobotCallable(const DestroyKTVRobotRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyKTVRobotOutcome>>();
    DestroyKTVRobotAsync(
    request,
    [prom](
        const YinsudaClient*,
        const DestroyKTVRobotRequest&,
        DestroyKTVRobotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::RechargeLiveVipOutcome YinsudaClient::RechargeLiveVip(const RechargeLiveVipRequest &request)
{
    auto outcome = MakeRequest(request, "RechargeLiveVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RechargeLiveVipResponse rsp = RechargeLiveVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RechargeLiveVipOutcome(rsp);
        else
            return RechargeLiveVipOutcome(o.GetError());
    }
    else
    {
        return RechargeLiveVipOutcome(outcome.GetError());
    }
}

void YinsudaClient::RechargeLiveVipAsync(const RechargeLiveVipRequest& request, const RechargeLiveVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RechargeLiveVipRequest&;
    using Resp = RechargeLiveVipResponse;

    DoRequestAsync<Req, Resp>(
        "RechargeLiveVip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::RechargeLiveVipOutcomeCallable YinsudaClient::RechargeLiveVipCallable(const RechargeLiveVipRequest &request)
{
    const auto prom = std::make_shared<std::promise<RechargeLiveVipOutcome>>();
    RechargeLiveVipAsync(
    request,
    [prom](
        const YinsudaClient*,
        const RechargeLiveVipRequest&,
        RechargeLiveVipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::RechargeVipOutcome YinsudaClient::RechargeVip(const RechargeVipRequest &request)
{
    auto outcome = MakeRequest(request, "RechargeVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RechargeVipResponse rsp = RechargeVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RechargeVipOutcome(rsp);
        else
            return RechargeVipOutcome(o.GetError());
    }
    else
    {
        return RechargeVipOutcome(outcome.GetError());
    }
}

void YinsudaClient::RechargeVipAsync(const RechargeVipRequest& request, const RechargeVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RechargeVipRequest&;
    using Resp = RechargeVipResponse;

    DoRequestAsync<Req, Resp>(
        "RechargeVip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::RechargeVipOutcomeCallable YinsudaClient::RechargeVipCallable(const RechargeVipRequest &request)
{
    const auto prom = std::make_shared<std::promise<RechargeVipOutcome>>();
    RechargeVipAsync(
    request,
    [prom](
        const YinsudaClient*,
        const RechargeVipRequest&,
        RechargeVipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::SearchKTVMusicsOutcome YinsudaClient::SearchKTVMusics(const SearchKTVMusicsRequest &request)
{
    auto outcome = MakeRequest(request, "SearchKTVMusics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchKTVMusicsResponse rsp = SearchKTVMusicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchKTVMusicsOutcome(rsp);
        else
            return SearchKTVMusicsOutcome(o.GetError());
    }
    else
    {
        return SearchKTVMusicsOutcome(outcome.GetError());
    }
}

void YinsudaClient::SearchKTVMusicsAsync(const SearchKTVMusicsRequest& request, const SearchKTVMusicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchKTVMusicsRequest&;
    using Resp = SearchKTVMusicsResponse;

    DoRequestAsync<Req, Resp>(
        "SearchKTVMusics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::SearchKTVMusicsOutcomeCallable YinsudaClient::SearchKTVMusicsCallable(const SearchKTVMusicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchKTVMusicsOutcome>>();
    SearchKTVMusicsAsync(
    request,
    [prom](
        const YinsudaClient*,
        const SearchKTVMusicsRequest&,
        SearchKTVMusicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YinsudaClient::SyncKTVRobotCommandOutcome YinsudaClient::SyncKTVRobotCommand(const SyncKTVRobotCommandRequest &request)
{
    auto outcome = MakeRequest(request, "SyncKTVRobotCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncKTVRobotCommandResponse rsp = SyncKTVRobotCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncKTVRobotCommandOutcome(rsp);
        else
            return SyncKTVRobotCommandOutcome(o.GetError());
    }
    else
    {
        return SyncKTVRobotCommandOutcome(outcome.GetError());
    }
}

void YinsudaClient::SyncKTVRobotCommandAsync(const SyncKTVRobotCommandRequest& request, const SyncKTVRobotCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncKTVRobotCommandRequest&;
    using Resp = SyncKTVRobotCommandResponse;

    DoRequestAsync<Req, Resp>(
        "SyncKTVRobotCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YinsudaClient::SyncKTVRobotCommandOutcomeCallable YinsudaClient::SyncKTVRobotCommandCallable(const SyncKTVRobotCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncKTVRobotCommandOutcome>>();
    SyncKTVRobotCommandAsync(
    request,
    [prom](
        const YinsudaClient*,
        const SyncKTVRobotCommandRequest&,
        SyncKTVRobotCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

