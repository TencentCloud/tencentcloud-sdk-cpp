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

