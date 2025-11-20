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
    using Req = const BatchDescribeKTVMusicDetailsRequest&;
    using Resp = BatchDescribeKTVMusicDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDescribeKTVMusicDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::BatchDescribeKTVMusicDetailsOutcomeCallable AmeClient::BatchDescribeKTVMusicDetailsCallable(const BatchDescribeKTVMusicDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDescribeKTVMusicDetailsOutcome>>();
    BatchDescribeKTVMusicDetailsAsync(
    request,
    [prom](
        const AmeClient*,
        const BatchDescribeKTVMusicDetailsRequest&,
        BatchDescribeKTVMusicDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateKTVRobotRequest&;
    using Resp = CreateKTVRobotResponse;

    DoRequestAsync<Req, Resp>(
        "CreateKTVRobot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::CreateKTVRobotOutcomeCallable AmeClient::CreateKTVRobotCallable(const CreateKTVRobotRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateKTVRobotOutcome>>();
    CreateKTVRobotAsync(
    request,
    [prom](
        const AmeClient*,
        const CreateKTVRobotRequest&,
        CreateKTVRobotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAuthInfoRequest&;
    using Resp = DescribeAuthInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuthInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeAuthInfoOutcomeCallable AmeClient::DescribeAuthInfoCallable(const DescribeAuthInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuthInfoOutcome>>();
    DescribeAuthInfoAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeAuthInfoRequest&,
        DescribeAuthInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCloudMusicRequest&;
    using Resp = DescribeCloudMusicResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudMusic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeCloudMusicOutcomeCallable AmeClient::DescribeCloudMusicCallable(const DescribeCloudMusicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudMusicOutcome>>();
    DescribeCloudMusicAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeCloudMusicRequest&,
        DescribeCloudMusicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCloudMusicPurchasedRequest&;
    using Resp = DescribeCloudMusicPurchasedResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudMusicPurchased", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeCloudMusicPurchasedOutcomeCallable AmeClient::DescribeCloudMusicPurchasedCallable(const DescribeCloudMusicPurchasedRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudMusicPurchasedOutcome>>();
    DescribeCloudMusicPurchasedAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeCloudMusicPurchasedRequest&,
        DescribeCloudMusicPurchasedOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeItemByIdRequest&;
    using Resp = DescribeItemByIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeItemById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeItemByIdOutcomeCallable AmeClient::DescribeItemByIdCallable(const DescribeItemByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeItemByIdOutcome>>();
    DescribeItemByIdAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeItemByIdRequest&,
        DescribeItemByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeItemsRequest&;
    using Resp = DescribeItemsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeItems", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeItemsOutcomeCallable AmeClient::DescribeItemsCallable(const DescribeItemsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeItemsOutcome>>();
    DescribeItemsAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeItemsRequest&,
        DescribeItemsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeKTVMusicDetailRequest&;
    using Resp = DescribeKTVMusicDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVMusicDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeKTVMusicDetailOutcomeCallable AmeClient::DescribeKTVMusicDetailCallable(const DescribeKTVMusicDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVMusicDetailOutcome>>();
    DescribeKTVMusicDetailAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeKTVMusicDetailRequest&,
        DescribeKTVMusicDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeKTVMusicTagsRequest&;
    using Resp = DescribeKTVMusicTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVMusicTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeKTVMusicTagsOutcomeCallable AmeClient::DescribeKTVMusicTagsCallable(const DescribeKTVMusicTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVMusicTagsOutcome>>();
    DescribeKTVMusicTagsAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeKTVMusicTagsRequest&,
        DescribeKTVMusicTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeKTVPlaylistDetailRequest&;
    using Resp = DescribeKTVPlaylistDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVPlaylistDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeKTVPlaylistDetailOutcomeCallable AmeClient::DescribeKTVPlaylistDetailCallable(const DescribeKTVPlaylistDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVPlaylistDetailOutcome>>();
    DescribeKTVPlaylistDetailAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeKTVPlaylistDetailRequest&,
        DescribeKTVPlaylistDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeKTVPlaylistsRequest&;
    using Resp = DescribeKTVPlaylistsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVPlaylists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeKTVPlaylistsOutcomeCallable AmeClient::DescribeKTVPlaylistsCallable(const DescribeKTVPlaylistsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVPlaylistsOutcome>>();
    DescribeKTVPlaylistsAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeKTVPlaylistsRequest&,
        DescribeKTVPlaylistsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeKTVRobotsRequest&;
    using Resp = DescribeKTVRobotsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVRobots", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeKTVRobotsOutcomeCallable AmeClient::DescribeKTVRobotsCallable(const DescribeKTVRobotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVRobotsOutcome>>();
    DescribeKTVRobotsAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeKTVRobotsRequest&,
        DescribeKTVRobotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeKTVSingerCategoriesRequest&;
    using Resp = DescribeKTVSingerCategoriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVSingerCategories", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeKTVSingerCategoriesOutcomeCallable AmeClient::DescribeKTVSingerCategoriesCallable(const DescribeKTVSingerCategoriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVSingerCategoriesOutcome>>();
    DescribeKTVSingerCategoriesAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeKTVSingerCategoriesRequest&,
        DescribeKTVSingerCategoriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeKTVSingerMusicsRequest&;
    using Resp = DescribeKTVSingerMusicsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVSingerMusics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeKTVSingerMusicsOutcomeCallable AmeClient::DescribeKTVSingerMusicsCallable(const DescribeKTVSingerMusicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVSingerMusicsOutcome>>();
    DescribeKTVSingerMusicsAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeKTVSingerMusicsRequest&,
        DescribeKTVSingerMusicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeKTVSingersRequest&;
    using Resp = DescribeKTVSingersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVSingers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeKTVSingersOutcomeCallable AmeClient::DescribeKTVSingersCallable(const DescribeKTVSingersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVSingersOutcome>>();
    DescribeKTVSingersAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeKTVSingersRequest&,
        DescribeKTVSingersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeKTVSuggestionsRequest&;
    using Resp = DescribeKTVSuggestionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVSuggestions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeKTVSuggestionsOutcomeCallable AmeClient::DescribeKTVSuggestionsCallable(const DescribeKTVSuggestionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVSuggestionsOutcome>>();
    DescribeKTVSuggestionsAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeKTVSuggestionsRequest&,
        DescribeKTVSuggestionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeKTVTopListRequest&;
    using Resp = DescribeKTVTopListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKTVTopList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeKTVTopListOutcomeCallable AmeClient::DescribeKTVTopListCallable(const DescribeKTVTopListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKTVTopListOutcome>>();
    DescribeKTVTopListAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeKTVTopListRequest&,
        DescribeKTVTopListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeLyricRequest&;
    using Resp = DescribeLyricResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLyric", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeLyricOutcomeCallable AmeClient::DescribeLyricCallable(const DescribeLyricRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLyricOutcome>>();
    DescribeLyricAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeLyricRequest&,
        DescribeLyricOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMusicRequest&;
    using Resp = DescribeMusicResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMusic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeMusicOutcomeCallable AmeClient::DescribeMusicCallable(const DescribeMusicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMusicOutcome>>();
    DescribeMusicAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeMusicRequest&,
        DescribeMusicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMusicSaleStatusRequest&;
    using Resp = DescribeMusicSaleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMusicSaleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeMusicSaleStatusOutcomeCallable AmeClient::DescribeMusicSaleStatusCallable(const DescribeMusicSaleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMusicSaleStatusOutcome>>();
    DescribeMusicSaleStatusAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeMusicSaleStatusRequest&,
        DescribeMusicSaleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePackageItemsRequest&;
    using Resp = DescribePackageItemsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePackageItems", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribePackageItemsOutcomeCallable AmeClient::DescribePackageItemsCallable(const DescribePackageItemsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePackageItemsOutcome>>();
    DescribePackageItemsAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribePackageItemsRequest&,
        DescribePackageItemsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePackagesRequest&;
    using Resp = DescribePackagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePackages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribePackagesOutcomeCallable AmeClient::DescribePackagesCallable(const DescribePackagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePackagesOutcome>>();
    DescribePackagesAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribePackagesRequest&,
        DescribePackagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePkgOfflineMusicRequest&;
    using Resp = DescribePkgOfflineMusicResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePkgOfflineMusic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribePkgOfflineMusicOutcomeCallable AmeClient::DescribePkgOfflineMusicCallable(const DescribePkgOfflineMusicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePkgOfflineMusicOutcome>>();
    DescribePkgOfflineMusicAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribePkgOfflineMusicRequest&,
        DescribePkgOfflineMusicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStationsRequest&;
    using Resp = DescribeStationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DescribeStationsOutcomeCallable AmeClient::DescribeStationsCallable(const DescribeStationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStationsOutcome>>();
    DescribeStationsAsync(
    request,
    [prom](
        const AmeClient*,
        const DescribeStationsRequest&,
        DescribeStationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DestroyKTVRobotRequest&;
    using Resp = DestroyKTVRobotResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyKTVRobot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::DestroyKTVRobotOutcomeCallable AmeClient::DestroyKTVRobotCallable(const DestroyKTVRobotRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyKTVRobotOutcome>>();
    DestroyKTVRobotAsync(
    request,
    [prom](
        const AmeClient*,
        const DestroyKTVRobotRequest&,
        DestroyKTVRobotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyMusicOnShelvesRequest&;
    using Resp = ModifyMusicOnShelvesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMusicOnShelves", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::ModifyMusicOnShelvesOutcomeCallable AmeClient::ModifyMusicOnShelvesCallable(const ModifyMusicOnShelvesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMusicOnShelvesOutcome>>();
    ModifyMusicOnShelvesAsync(
    request,
    [prom](
        const AmeClient*,
        const ModifyMusicOnShelvesRequest&,
        ModifyMusicOnShelvesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const PutMusicOnTheShelvesRequest&;
    using Resp = PutMusicOnTheShelvesResponse;

    DoRequestAsync<Req, Resp>(
        "PutMusicOnTheShelves", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::PutMusicOnTheShelvesOutcomeCallable AmeClient::PutMusicOnTheShelvesCallable(const PutMusicOnTheShelvesRequest &request)
{
    const auto prom = std::make_shared<std::promise<PutMusicOnTheShelvesOutcome>>();
    PutMusicOnTheShelvesAsync(
    request,
    [prom](
        const AmeClient*,
        const PutMusicOnTheShelvesRequest&,
        PutMusicOnTheShelvesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ReportDataRequest&;
    using Resp = ReportDataResponse;

    DoRequestAsync<Req, Resp>(
        "ReportData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::ReportDataOutcomeCallable AmeClient::ReportDataCallable(const ReportDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportDataOutcome>>();
    ReportDataAsync(
    request,
    [prom](
        const AmeClient*,
        const ReportDataRequest&,
        ReportDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SearchKTVMusicsRequest&;
    using Resp = SearchKTVMusicsResponse;

    DoRequestAsync<Req, Resp>(
        "SearchKTVMusics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::SearchKTVMusicsOutcomeCallable AmeClient::SearchKTVMusicsCallable(const SearchKTVMusicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchKTVMusicsOutcome>>();
    SearchKTVMusicsAsync(
    request,
    [prom](
        const AmeClient*,
        const SearchKTVMusicsRequest&,
        SearchKTVMusicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SyncKTVRobotCommandRequest&;
    using Resp = SyncKTVRobotCommandResponse;

    DoRequestAsync<Req, Resp>(
        "SyncKTVRobotCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::SyncKTVRobotCommandOutcomeCallable AmeClient::SyncKTVRobotCommandCallable(const SyncKTVRobotCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncKTVRobotCommandOutcome>>();
    SyncKTVRobotCommandAsync(
    request,
    [prom](
        const AmeClient*,
        const SyncKTVRobotCommandRequest&,
        SyncKTVRobotCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TakeMusicOffShelvesRequest&;
    using Resp = TakeMusicOffShelvesResponse;

    DoRequestAsync<Req, Resp>(
        "TakeMusicOffShelves", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmeClient::TakeMusicOffShelvesOutcomeCallable AmeClient::TakeMusicOffShelvesCallable(const TakeMusicOffShelvesRequest &request)
{
    const auto prom = std::make_shared<std::promise<TakeMusicOffShelvesOutcome>>();
    TakeMusicOffShelvesAsync(
    request,
    [prom](
        const AmeClient*,
        const TakeMusicOffShelvesRequest&,
        TakeMusicOffShelvesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

