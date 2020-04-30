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

#include <tencentcloud/trtc/v20190722/TrtcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Trtc::V20190722;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-22";
    const string ENDPOINT = "trtc.tencentcloudapi.com";
}

TrtcClient::TrtcClient(const Credential &credential, const string &region) :
    TrtcClient(credential, region, ClientProfile())
{
}

TrtcClient::TrtcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TrtcClient::DescribeCallDetailOutcome TrtcClient::DescribeCallDetail(const DescribeCallDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallDetailResponse rsp = DescribeCallDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallDetailOutcome(rsp);
        else
            return DescribeCallDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCallDetailOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeCallDetailAsync(const DescribeCallDetailRequest& request, const DescribeCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCallDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeCallDetailOutcomeCallable TrtcClient::DescribeCallDetailCallable(const DescribeCallDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCallDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCallDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeHistoryScaleOutcome TrtcClient::DescribeHistoryScale(const DescribeHistoryScaleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHistoryScale");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHistoryScaleResponse rsp = DescribeHistoryScaleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHistoryScaleOutcome(rsp);
        else
            return DescribeHistoryScaleOutcome(o.GetError());
    }
    else
    {
        return DescribeHistoryScaleOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeHistoryScaleAsync(const DescribeHistoryScaleRequest& request, const DescribeHistoryScaleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHistoryScale(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeHistoryScaleOutcomeCallable TrtcClient::DescribeHistoryScaleCallable(const DescribeHistoryScaleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHistoryScaleOutcome()>>(
        [this, request]()
        {
            return this->DescribeHistoryScale(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeRealtimeNetworkOutcome TrtcClient::DescribeRealtimeNetwork(const DescribeRealtimeNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealtimeNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealtimeNetworkResponse rsp = DescribeRealtimeNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealtimeNetworkOutcome(rsp);
        else
            return DescribeRealtimeNetworkOutcome(o.GetError());
    }
    else
    {
        return DescribeRealtimeNetworkOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeRealtimeNetworkAsync(const DescribeRealtimeNetworkRequest& request, const DescribeRealtimeNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRealtimeNetwork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeRealtimeNetworkOutcomeCallable TrtcClient::DescribeRealtimeNetworkCallable(const DescribeRealtimeNetworkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRealtimeNetworkOutcome()>>(
        [this, request]()
        {
            return this->DescribeRealtimeNetwork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeRealtimeQualityOutcome TrtcClient::DescribeRealtimeQuality(const DescribeRealtimeQualityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealtimeQuality");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealtimeQualityResponse rsp = DescribeRealtimeQualityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealtimeQualityOutcome(rsp);
        else
            return DescribeRealtimeQualityOutcome(o.GetError());
    }
    else
    {
        return DescribeRealtimeQualityOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeRealtimeQualityAsync(const DescribeRealtimeQualityRequest& request, const DescribeRealtimeQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRealtimeQuality(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeRealtimeQualityOutcomeCallable TrtcClient::DescribeRealtimeQualityCallable(const DescribeRealtimeQualityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRealtimeQualityOutcome()>>(
        [this, request]()
        {
            return this->DescribeRealtimeQuality(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeRealtimeScaleOutcome TrtcClient::DescribeRealtimeScale(const DescribeRealtimeScaleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealtimeScale");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealtimeScaleResponse rsp = DescribeRealtimeScaleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealtimeScaleOutcome(rsp);
        else
            return DescribeRealtimeScaleOutcome(o.GetError());
    }
    else
    {
        return DescribeRealtimeScaleOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeRealtimeScaleAsync(const DescribeRealtimeScaleRequest& request, const DescribeRealtimeScaleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRealtimeScale(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeRealtimeScaleOutcomeCallable TrtcClient::DescribeRealtimeScaleCallable(const DescribeRealtimeScaleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRealtimeScaleOutcome()>>(
        [this, request]()
        {
            return this->DescribeRealtimeScale(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeRoomInformationOutcome TrtcClient::DescribeRoomInformation(const DescribeRoomInformationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoomInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomInformationResponse rsp = DescribeRoomInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomInformationOutcome(rsp);
        else
            return DescribeRoomInformationOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomInformationOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeRoomInformationAsync(const DescribeRoomInformationRequest& request, const DescribeRoomInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoomInformation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeRoomInformationOutcomeCallable TrtcClient::DescribeRoomInformationCallable(const DescribeRoomInformationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoomInformationOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoomInformation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DismissRoomOutcome TrtcClient::DismissRoom(const DismissRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DismissRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DismissRoomResponse rsp = DismissRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DismissRoomOutcome(rsp);
        else
            return DismissRoomOutcome(o.GetError());
    }
    else
    {
        return DismissRoomOutcome(outcome.GetError());
    }
}

void TrtcClient::DismissRoomAsync(const DismissRoomRequest& request, const DismissRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DismissRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DismissRoomOutcomeCallable TrtcClient::DismissRoomCallable(const DismissRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DismissRoomOutcome()>>(
        [this, request]()
        {
            return this->DismissRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::RemoveUserOutcome TrtcClient::RemoveUser(const RemoveUserRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserResponse rsp = RemoveUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserOutcome(rsp);
        else
            return RemoveUserOutcome(o.GetError());
    }
    else
    {
        return RemoveUserOutcome(outcome.GetError());
    }
}

void TrtcClient::RemoveUserAsync(const RemoveUserRequest& request, const RemoveUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::RemoveUserOutcomeCallable TrtcClient::RemoveUserCallable(const RemoveUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveUserOutcome()>>(
        [this, request]()
        {
            return this->RemoveUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

