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

#include <tencentcloud/ame/v20190916/AmeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ame::V20190916;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-09-16";
    const string ENDPOINT = "ame.tencentcloudapi.com";
}

AmeClient::AmeClient(const Credential &credential, const string &region) :
    AmeClient(credential, region, ClientProfile())
{
}

AmeClient::AmeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AmeClient::BatchDescribeKTVMusicDetailsOutcome AmeClient::BatchDescribeKTVMusicDetails(const BatchDescribeKTVMusicDetailsRequest &request)
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

void AmeClient::BatchDescribeKTVMusicDetailsAsync(const BatchDescribeKTVMusicDetailsRequest& request, const BatchDescribeKTVMusicDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDescribeKTVMusicDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::BatchDescribeKTVMusicDetailsOutcomeCallable AmeClient::BatchDescribeKTVMusicDetailsCallable(const BatchDescribeKTVMusicDetailsRequest &request)
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

AmeClient::CreateKTVRobotOutcome AmeClient::CreateKTVRobot(const CreateKTVRobotRequest &request)
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

void AmeClient::CreateKTVRobotAsync(const CreateKTVRobotRequest& request, const CreateKTVRobotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateKTVRobot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::CreateKTVRobotOutcomeCallable AmeClient::CreateKTVRobotCallable(const CreateKTVRobotRequest &request)
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

AmeClient::DescribeAuthInfoOutcome AmeClient::DescribeAuthInfo(const DescribeAuthInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuthInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuthInfoResponse rsp = DescribeAuthInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuthInfoOutcome(rsp);
        else
            return DescribeAuthInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAuthInfoOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeAuthInfoAsync(const DescribeAuthInfoRequest& request, const DescribeAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuthInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeAuthInfoOutcomeCallable AmeClient::DescribeAuthInfoCallable(const DescribeAuthInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuthInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuthInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeCloudMusicOutcome AmeClient::DescribeCloudMusic(const DescribeCloudMusicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudMusic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudMusicResponse rsp = DescribeCloudMusicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudMusicOutcome(rsp);
        else
            return DescribeCloudMusicOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudMusicOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeCloudMusicAsync(const DescribeCloudMusicRequest& request, const DescribeCloudMusicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudMusic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeCloudMusicOutcomeCallable AmeClient::DescribeCloudMusicCallable(const DescribeCloudMusicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudMusicOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudMusic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeCloudMusicPurchasedOutcome AmeClient::DescribeCloudMusicPurchased(const DescribeCloudMusicPurchasedRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudMusicPurchased");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudMusicPurchasedResponse rsp = DescribeCloudMusicPurchasedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudMusicPurchasedOutcome(rsp);
        else
            return DescribeCloudMusicPurchasedOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudMusicPurchasedOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeCloudMusicPurchasedAsync(const DescribeCloudMusicPurchasedRequest& request, const DescribeCloudMusicPurchasedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudMusicPurchased(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeCloudMusicPurchasedOutcomeCallable AmeClient::DescribeCloudMusicPurchasedCallable(const DescribeCloudMusicPurchasedRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudMusicPurchasedOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudMusicPurchased(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeItemByIdOutcome AmeClient::DescribeItemById(const DescribeItemByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeItemById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeItemByIdResponse rsp = DescribeItemByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeItemByIdOutcome(rsp);
        else
            return DescribeItemByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeItemByIdOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeItemByIdAsync(const DescribeItemByIdRequest& request, const DescribeItemByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeItemById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeItemByIdOutcomeCallable AmeClient::DescribeItemByIdCallable(const DescribeItemByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeItemByIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeItemById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeItemsOutcome AmeClient::DescribeItems(const DescribeItemsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeItems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeItemsResponse rsp = DescribeItemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeItemsOutcome(rsp);
        else
            return DescribeItemsOutcome(o.GetError());
    }
    else
    {
        return DescribeItemsOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeItemsAsync(const DescribeItemsRequest& request, const DescribeItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeItems(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeItemsOutcomeCallable AmeClient::DescribeItemsCallable(const DescribeItemsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeItemsOutcome()>>(
        [this, request]()
        {
            return this->DescribeItems(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeKTVMusicDetailOutcome AmeClient::DescribeKTVMusicDetail(const DescribeKTVMusicDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKTVMusicDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKTVMusicDetailResponse rsp = DescribeKTVMusicDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKTVMusicDetailOutcome(rsp);
        else
            return DescribeKTVMusicDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeKTVMusicDetailOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeKTVMusicDetailAsync(const DescribeKTVMusicDetailRequest& request, const DescribeKTVMusicDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVMusicDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeKTVMusicDetailOutcomeCallable AmeClient::DescribeKTVMusicDetailCallable(const DescribeKTVMusicDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKTVMusicDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeKTVMusicDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeKTVMusicTagsOutcome AmeClient::DescribeKTVMusicTags(const DescribeKTVMusicTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKTVMusicTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKTVMusicTagsResponse rsp = DescribeKTVMusicTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKTVMusicTagsOutcome(rsp);
        else
            return DescribeKTVMusicTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeKTVMusicTagsOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeKTVMusicTagsAsync(const DescribeKTVMusicTagsRequest& request, const DescribeKTVMusicTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVMusicTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeKTVMusicTagsOutcomeCallable AmeClient::DescribeKTVMusicTagsCallable(const DescribeKTVMusicTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKTVMusicTagsOutcome()>>(
        [this, request]()
        {
            return this->DescribeKTVMusicTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeKTVPlaylistDetailOutcome AmeClient::DescribeKTVPlaylistDetail(const DescribeKTVPlaylistDetailRequest &request)
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

void AmeClient::DescribeKTVPlaylistDetailAsync(const DescribeKTVPlaylistDetailRequest& request, const DescribeKTVPlaylistDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVPlaylistDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeKTVPlaylistDetailOutcomeCallable AmeClient::DescribeKTVPlaylistDetailCallable(const DescribeKTVPlaylistDetailRequest &request)
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

AmeClient::DescribeKTVPlaylistsOutcome AmeClient::DescribeKTVPlaylists(const DescribeKTVPlaylistsRequest &request)
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

void AmeClient::DescribeKTVPlaylistsAsync(const DescribeKTVPlaylistsRequest& request, const DescribeKTVPlaylistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVPlaylists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeKTVPlaylistsOutcomeCallable AmeClient::DescribeKTVPlaylistsCallable(const DescribeKTVPlaylistsRequest &request)
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

AmeClient::DescribeKTVRobotsOutcome AmeClient::DescribeKTVRobots(const DescribeKTVRobotsRequest &request)
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

void AmeClient::DescribeKTVRobotsAsync(const DescribeKTVRobotsRequest& request, const DescribeKTVRobotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVRobots(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeKTVRobotsOutcomeCallable AmeClient::DescribeKTVRobotsCallable(const DescribeKTVRobotsRequest &request)
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

AmeClient::DescribeKTVSingerCategoriesOutcome AmeClient::DescribeKTVSingerCategories(const DescribeKTVSingerCategoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKTVSingerCategories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKTVSingerCategoriesResponse rsp = DescribeKTVSingerCategoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKTVSingerCategoriesOutcome(rsp);
        else
            return DescribeKTVSingerCategoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeKTVSingerCategoriesOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeKTVSingerCategoriesAsync(const DescribeKTVSingerCategoriesRequest& request, const DescribeKTVSingerCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVSingerCategories(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeKTVSingerCategoriesOutcomeCallable AmeClient::DescribeKTVSingerCategoriesCallable(const DescribeKTVSingerCategoriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKTVSingerCategoriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeKTVSingerCategories(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeKTVSingerMusicsOutcome AmeClient::DescribeKTVSingerMusics(const DescribeKTVSingerMusicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKTVSingerMusics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKTVSingerMusicsResponse rsp = DescribeKTVSingerMusicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKTVSingerMusicsOutcome(rsp);
        else
            return DescribeKTVSingerMusicsOutcome(o.GetError());
    }
    else
    {
        return DescribeKTVSingerMusicsOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeKTVSingerMusicsAsync(const DescribeKTVSingerMusicsRequest& request, const DescribeKTVSingerMusicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVSingerMusics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeKTVSingerMusicsOutcomeCallable AmeClient::DescribeKTVSingerMusicsCallable(const DescribeKTVSingerMusicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKTVSingerMusicsOutcome()>>(
        [this, request]()
        {
            return this->DescribeKTVSingerMusics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeKTVSingersOutcome AmeClient::DescribeKTVSingers(const DescribeKTVSingersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKTVSingers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKTVSingersResponse rsp = DescribeKTVSingersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKTVSingersOutcome(rsp);
        else
            return DescribeKTVSingersOutcome(o.GetError());
    }
    else
    {
        return DescribeKTVSingersOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeKTVSingersAsync(const DescribeKTVSingersRequest& request, const DescribeKTVSingersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVSingers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeKTVSingersOutcomeCallable AmeClient::DescribeKTVSingersCallable(const DescribeKTVSingersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKTVSingersOutcome()>>(
        [this, request]()
        {
            return this->DescribeKTVSingers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeKTVSuggestionsOutcome AmeClient::DescribeKTVSuggestions(const DescribeKTVSuggestionsRequest &request)
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

void AmeClient::DescribeKTVSuggestionsAsync(const DescribeKTVSuggestionsRequest& request, const DescribeKTVSuggestionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVSuggestions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeKTVSuggestionsOutcomeCallable AmeClient::DescribeKTVSuggestionsCallable(const DescribeKTVSuggestionsRequest &request)
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

AmeClient::DescribeKTVTopListOutcome AmeClient::DescribeKTVTopList(const DescribeKTVTopListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKTVTopList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKTVTopListResponse rsp = DescribeKTVTopListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKTVTopListOutcome(rsp);
        else
            return DescribeKTVTopListOutcome(o.GetError());
    }
    else
    {
        return DescribeKTVTopListOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeKTVTopListAsync(const DescribeKTVTopListRequest& request, const DescribeKTVTopListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKTVTopList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeKTVTopListOutcomeCallable AmeClient::DescribeKTVTopListCallable(const DescribeKTVTopListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKTVTopListOutcome()>>(
        [this, request]()
        {
            return this->DescribeKTVTopList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeLyricOutcome AmeClient::DescribeLyric(const DescribeLyricRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLyric");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLyricResponse rsp = DescribeLyricResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLyricOutcome(rsp);
        else
            return DescribeLyricOutcome(o.GetError());
    }
    else
    {
        return DescribeLyricOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeLyricAsync(const DescribeLyricRequest& request, const DescribeLyricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLyric(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeLyricOutcomeCallable AmeClient::DescribeLyricCallable(const DescribeLyricRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLyricOutcome()>>(
        [this, request]()
        {
            return this->DescribeLyric(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeMusicOutcome AmeClient::DescribeMusic(const DescribeMusicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMusic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMusicResponse rsp = DescribeMusicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMusicOutcome(rsp);
        else
            return DescribeMusicOutcome(o.GetError());
    }
    else
    {
        return DescribeMusicOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeMusicAsync(const DescribeMusicRequest& request, const DescribeMusicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMusic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeMusicOutcomeCallable AmeClient::DescribeMusicCallable(const DescribeMusicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMusicOutcome()>>(
        [this, request]()
        {
            return this->DescribeMusic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeMusicSaleStatusOutcome AmeClient::DescribeMusicSaleStatus(const DescribeMusicSaleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMusicSaleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMusicSaleStatusResponse rsp = DescribeMusicSaleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMusicSaleStatusOutcome(rsp);
        else
            return DescribeMusicSaleStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeMusicSaleStatusOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeMusicSaleStatusAsync(const DescribeMusicSaleStatusRequest& request, const DescribeMusicSaleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMusicSaleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeMusicSaleStatusOutcomeCallable AmeClient::DescribeMusicSaleStatusCallable(const DescribeMusicSaleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMusicSaleStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeMusicSaleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribePackageItemsOutcome AmeClient::DescribePackageItems(const DescribePackageItemsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePackageItems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePackageItemsResponse rsp = DescribePackageItemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePackageItemsOutcome(rsp);
        else
            return DescribePackageItemsOutcome(o.GetError());
    }
    else
    {
        return DescribePackageItemsOutcome(outcome.GetError());
    }
}

void AmeClient::DescribePackageItemsAsync(const DescribePackageItemsRequest& request, const DescribePackageItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePackageItems(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribePackageItemsOutcomeCallable AmeClient::DescribePackageItemsCallable(const DescribePackageItemsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePackageItemsOutcome()>>(
        [this, request]()
        {
            return this->DescribePackageItems(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribePackagesOutcome AmeClient::DescribePackages(const DescribePackagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePackagesResponse rsp = DescribePackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePackagesOutcome(rsp);
        else
            return DescribePackagesOutcome(o.GetError());
    }
    else
    {
        return DescribePackagesOutcome(outcome.GetError());
    }
}

void AmeClient::DescribePackagesAsync(const DescribePackagesRequest& request, const DescribePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePackages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribePackagesOutcomeCallable AmeClient::DescribePackagesCallable(const DescribePackagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePackagesOutcome()>>(
        [this, request]()
        {
            return this->DescribePackages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribePkgOfflineMusicOutcome AmeClient::DescribePkgOfflineMusic(const DescribePkgOfflineMusicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePkgOfflineMusic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePkgOfflineMusicResponse rsp = DescribePkgOfflineMusicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePkgOfflineMusicOutcome(rsp);
        else
            return DescribePkgOfflineMusicOutcome(o.GetError());
    }
    else
    {
        return DescribePkgOfflineMusicOutcome(outcome.GetError());
    }
}

void AmeClient::DescribePkgOfflineMusicAsync(const DescribePkgOfflineMusicRequest& request, const DescribePkgOfflineMusicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePkgOfflineMusic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribePkgOfflineMusicOutcomeCallable AmeClient::DescribePkgOfflineMusicCallable(const DescribePkgOfflineMusicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePkgOfflineMusicOutcome()>>(
        [this, request]()
        {
            return this->DescribePkgOfflineMusic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DescribeStationsOutcome AmeClient::DescribeStations(const DescribeStationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStationsResponse rsp = DescribeStationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStationsOutcome(rsp);
        else
            return DescribeStationsOutcome(o.GetError());
    }
    else
    {
        return DescribeStationsOutcome(outcome.GetError());
    }
}

void AmeClient::DescribeStationsAsync(const DescribeStationsRequest& request, const DescribeStationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DescribeStationsOutcomeCallable AmeClient::DescribeStationsCallable(const DescribeStationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::DestroyKTVRobotOutcome AmeClient::DestroyKTVRobot(const DestroyKTVRobotRequest &request)
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

void AmeClient::DestroyKTVRobotAsync(const DestroyKTVRobotRequest& request, const DestroyKTVRobotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyKTVRobot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::DestroyKTVRobotOutcomeCallable AmeClient::DestroyKTVRobotCallable(const DestroyKTVRobotRequest &request)
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

AmeClient::ModifyMusicOnShelvesOutcome AmeClient::ModifyMusicOnShelves(const ModifyMusicOnShelvesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMusicOnShelves");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMusicOnShelvesResponse rsp = ModifyMusicOnShelvesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMusicOnShelvesOutcome(rsp);
        else
            return ModifyMusicOnShelvesOutcome(o.GetError());
    }
    else
    {
        return ModifyMusicOnShelvesOutcome(outcome.GetError());
    }
}

void AmeClient::ModifyMusicOnShelvesAsync(const ModifyMusicOnShelvesRequest& request, const ModifyMusicOnShelvesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMusicOnShelves(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::ModifyMusicOnShelvesOutcomeCallable AmeClient::ModifyMusicOnShelvesCallable(const ModifyMusicOnShelvesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMusicOnShelvesOutcome()>>(
        [this, request]()
        {
            return this->ModifyMusicOnShelves(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::PutMusicOnTheShelvesOutcome AmeClient::PutMusicOnTheShelves(const PutMusicOnTheShelvesRequest &request)
{
    auto outcome = MakeRequest(request, "PutMusicOnTheShelves");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutMusicOnTheShelvesResponse rsp = PutMusicOnTheShelvesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutMusicOnTheShelvesOutcome(rsp);
        else
            return PutMusicOnTheShelvesOutcome(o.GetError());
    }
    else
    {
        return PutMusicOnTheShelvesOutcome(outcome.GetError());
    }
}

void AmeClient::PutMusicOnTheShelvesAsync(const PutMusicOnTheShelvesRequest& request, const PutMusicOnTheShelvesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PutMusicOnTheShelves(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::PutMusicOnTheShelvesOutcomeCallable AmeClient::PutMusicOnTheShelvesCallable(const PutMusicOnTheShelvesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PutMusicOnTheShelvesOutcome()>>(
        [this, request]()
        {
            return this->PutMusicOnTheShelves(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::ReportDataOutcome AmeClient::ReportData(const ReportDataRequest &request)
{
    auto outcome = MakeRequest(request, "ReportData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportDataResponse rsp = ReportDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportDataOutcome(rsp);
        else
            return ReportDataOutcome(o.GetError());
    }
    else
    {
        return ReportDataOutcome(outcome.GetError());
    }
}

void AmeClient::ReportDataAsync(const ReportDataRequest& request, const ReportDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReportData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::ReportDataOutcomeCallable AmeClient::ReportDataCallable(const ReportDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReportDataOutcome()>>(
        [this, request]()
        {
            return this->ReportData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmeClient::SearchKTVMusicsOutcome AmeClient::SearchKTVMusics(const SearchKTVMusicsRequest &request)
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

void AmeClient::SearchKTVMusicsAsync(const SearchKTVMusicsRequest& request, const SearchKTVMusicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchKTVMusics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::SearchKTVMusicsOutcomeCallable AmeClient::SearchKTVMusicsCallable(const SearchKTVMusicsRequest &request)
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

AmeClient::SyncKTVRobotCommandOutcome AmeClient::SyncKTVRobotCommand(const SyncKTVRobotCommandRequest &request)
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

void AmeClient::SyncKTVRobotCommandAsync(const SyncKTVRobotCommandRequest& request, const SyncKTVRobotCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncKTVRobotCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::SyncKTVRobotCommandOutcomeCallable AmeClient::SyncKTVRobotCommandCallable(const SyncKTVRobotCommandRequest &request)
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

AmeClient::TakeMusicOffShelvesOutcome AmeClient::TakeMusicOffShelves(const TakeMusicOffShelvesRequest &request)
{
    auto outcome = MakeRequest(request, "TakeMusicOffShelves");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TakeMusicOffShelvesResponse rsp = TakeMusicOffShelvesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TakeMusicOffShelvesOutcome(rsp);
        else
            return TakeMusicOffShelvesOutcome(o.GetError());
    }
    else
    {
        return TakeMusicOffShelvesOutcome(outcome.GetError());
    }
}

void AmeClient::TakeMusicOffShelvesAsync(const TakeMusicOffShelvesRequest& request, const TakeMusicOffShelvesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TakeMusicOffShelves(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmeClient::TakeMusicOffShelvesOutcomeCallable AmeClient::TakeMusicOffShelvesCallable(const TakeMusicOffShelvesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TakeMusicOffShelvesOutcome()>>(
        [this, request]()
        {
            return this->TakeMusicOffShelves(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

