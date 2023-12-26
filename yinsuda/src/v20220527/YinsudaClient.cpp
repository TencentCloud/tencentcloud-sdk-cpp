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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyChorus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::ApplyChorusOutcomeCallable YinsudaClient::ApplyChorusCallable(const ApplyChorusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyChorusOutcome()>>(
        [this, request]()
        {
            return this->ApplyChorus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDescribeKTVMusicDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::BatchDescribeKTVMusicDetailsOutcomeCallable YinsudaClient::BatchDescribeKTVMusicDetailsCallable(const BatchDescribeKTVMusicDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDescribeKTVMusicDetailsOutcome()>>(
        [this, request]()
        {
            return this->BatchDescribeKTVMusicDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateKTVRobot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::CreateKTVRobotOutcomeCallable YinsudaClient::CreateKTVRobotCallable(const CreateKTVRobotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateKTVRobotOutcome()>>(
        [this, request]()
        {
            return this->CreateKTVRobot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVMatchMusics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::DescribeKTVMatchMusicsOutcomeCallable YinsudaClient::DescribeKTVMatchMusicsCallable(const DescribeKTVMatchMusicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKTVMatchMusicsOutcome()>>(
        [this, request]()
        {
            return this->DescribeKTVMatchMusics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVMusicAccompanySegmentUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::DescribeKTVMusicAccompanySegmentUrlOutcomeCallable YinsudaClient::DescribeKTVMusicAccompanySegmentUrlCallable(const DescribeKTVMusicAccompanySegmentUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKTVMusicAccompanySegmentUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeKTVMusicAccompanySegmentUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVMusicAccompanySegmentUrlVip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::DescribeKTVMusicAccompanySegmentUrlVipOutcomeCallable YinsudaClient::DescribeKTVMusicAccompanySegmentUrlVipCallable(const DescribeKTVMusicAccompanySegmentUrlVipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKTVMusicAccompanySegmentUrlVipOutcome()>>(
        [this, request]()
        {
            return this->DescribeKTVMusicAccompanySegmentUrlVip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVMusicsByTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::DescribeKTVMusicsByTagOutcomeCallable YinsudaClient::DescribeKTVMusicsByTagCallable(const DescribeKTVMusicsByTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKTVMusicsByTagOutcome()>>(
        [this, request]()
        {
            return this->DescribeKTVMusicsByTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVPlaylistDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::DescribeKTVPlaylistDetailOutcomeCallable YinsudaClient::DescribeKTVPlaylistDetailCallable(const DescribeKTVPlaylistDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKTVPlaylistDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeKTVPlaylistDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVPlaylists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::DescribeKTVPlaylistsOutcomeCallable YinsudaClient::DescribeKTVPlaylistsCallable(const DescribeKTVPlaylistsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKTVPlaylistsOutcome()>>(
        [this, request]()
        {
            return this->DescribeKTVPlaylists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVRobots(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::DescribeKTVRobotsOutcomeCallable YinsudaClient::DescribeKTVRobotsCallable(const DescribeKTVRobotsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKTVRobotsOutcome()>>(
        [this, request]()
        {
            return this->DescribeKTVRobots(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVSuggestions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::DescribeKTVSuggestionsOutcomeCallable YinsudaClient::DescribeKTVSuggestionsCallable(const DescribeKTVSuggestionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKTVSuggestionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeKTVSuggestions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::DescribeKTVTagsOutcomeCallable YinsudaClient::DescribeKTVTagsCallable(const DescribeKTVTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKTVTagsOutcome()>>(
        [this, request]()
        {
            return this->DescribeKTVTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveVipTradeInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::DescribeLiveVipTradeInfosOutcomeCallable YinsudaClient::DescribeLiveVipTradeInfosCallable(const DescribeLiveVipTradeInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveVipTradeInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveVipTradeInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::DescribeUserInfoOutcomeCallable YinsudaClient::DescribeUserInfoCallable(const DescribeUserInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVipUserInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::DescribeVipUserInfoOutcomeCallable YinsudaClient::DescribeVipUserInfoCallable(const DescribeVipUserInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVipUserInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeVipUserInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyKTVRobot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::DestroyKTVRobotOutcomeCallable YinsudaClient::DestroyKTVRobotCallable(const DestroyKTVRobotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyKTVRobotOutcome()>>(
        [this, request]()
        {
            return this->DestroyKTVRobot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RechargeLiveVip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::RechargeLiveVipOutcomeCallable YinsudaClient::RechargeLiveVipCallable(const RechargeLiveVipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RechargeLiveVipOutcome()>>(
        [this, request]()
        {
            return this->RechargeLiveVip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RechargeVip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::RechargeVipOutcomeCallable YinsudaClient::RechargeVipCallable(const RechargeVipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RechargeVipOutcome()>>(
        [this, request]()
        {
            return this->RechargeVip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchKTVMusics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::SearchKTVMusicsOutcomeCallable YinsudaClient::SearchKTVMusicsCallable(const SearchKTVMusicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchKTVMusicsOutcome()>>(
        [this, request]()
        {
            return this->SearchKTVMusics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncKTVRobotCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YinsudaClient::SyncKTVRobotCommandOutcomeCallable YinsudaClient::SyncKTVRobotCommandCallable(const SyncKTVRobotCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncKTVRobotCommandOutcome()>>(
        [this, request]()
        {
            return this->SyncKTVRobotCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

