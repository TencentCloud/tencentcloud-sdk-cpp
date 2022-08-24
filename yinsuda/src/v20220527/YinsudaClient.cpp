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

