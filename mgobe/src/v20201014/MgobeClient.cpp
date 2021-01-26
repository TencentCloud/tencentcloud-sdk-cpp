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

#include <tencentcloud/mgobe/v20201014/MgobeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mgobe::V20201014;
using namespace TencentCloud::Mgobe::V20201014::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-10-14";
    const string ENDPOINT = "mgobe.tencentcloudapi.com";
}

MgobeClient::MgobeClient(const Credential &credential, const string &region) :
    MgobeClient(credential, region, ClientProfile())
{
}

MgobeClient::MgobeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MgobeClient::ChangeRoomPlayerProfileOutcome MgobeClient::ChangeRoomPlayerProfile(const ChangeRoomPlayerProfileRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeRoomPlayerProfile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeRoomPlayerProfileResponse rsp = ChangeRoomPlayerProfileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeRoomPlayerProfileOutcome(rsp);
        else
            return ChangeRoomPlayerProfileOutcome(o.GetError());
    }
    else
    {
        return ChangeRoomPlayerProfileOutcome(outcome.GetError());
    }
}

void MgobeClient::ChangeRoomPlayerProfileAsync(const ChangeRoomPlayerProfileRequest& request, const ChangeRoomPlayerProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChangeRoomPlayerProfile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MgobeClient::ChangeRoomPlayerProfileOutcomeCallable MgobeClient::ChangeRoomPlayerProfileCallable(const ChangeRoomPlayerProfileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChangeRoomPlayerProfileOutcome()>>(
        [this, request]()
        {
            return this->ChangeRoomPlayerProfile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MgobeClient::ChangeRoomPlayerStatusOutcome MgobeClient::ChangeRoomPlayerStatus(const ChangeRoomPlayerStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeRoomPlayerStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeRoomPlayerStatusResponse rsp = ChangeRoomPlayerStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeRoomPlayerStatusOutcome(rsp);
        else
            return ChangeRoomPlayerStatusOutcome(o.GetError());
    }
    else
    {
        return ChangeRoomPlayerStatusOutcome(outcome.GetError());
    }
}

void MgobeClient::ChangeRoomPlayerStatusAsync(const ChangeRoomPlayerStatusRequest& request, const ChangeRoomPlayerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChangeRoomPlayerStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MgobeClient::ChangeRoomPlayerStatusOutcomeCallable MgobeClient::ChangeRoomPlayerStatusCallable(const ChangeRoomPlayerStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChangeRoomPlayerStatusOutcome()>>(
        [this, request]()
        {
            return this->ChangeRoomPlayerStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MgobeClient::DescribePlayerOutcome MgobeClient::DescribePlayer(const DescribePlayerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlayer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlayerResponse rsp = DescribePlayerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlayerOutcome(rsp);
        else
            return DescribePlayerOutcome(o.GetError());
    }
    else
    {
        return DescribePlayerOutcome(outcome.GetError());
    }
}

void MgobeClient::DescribePlayerAsync(const DescribePlayerRequest& request, const DescribePlayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePlayer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MgobeClient::DescribePlayerOutcomeCallable MgobeClient::DescribePlayerCallable(const DescribePlayerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePlayerOutcome()>>(
        [this, request]()
        {
            return this->DescribePlayer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MgobeClient::DescribeRoomOutcome MgobeClient::DescribeRoom(const DescribeRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomResponse rsp = DescribeRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomOutcome(rsp);
        else
            return DescribeRoomOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomOutcome(outcome.GetError());
    }
}

void MgobeClient::DescribeRoomAsync(const DescribeRoomRequest& request, const DescribeRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MgobeClient::DescribeRoomOutcomeCallable MgobeClient::DescribeRoomCallable(const DescribeRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoomOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MgobeClient::DismissRoomOutcome MgobeClient::DismissRoom(const DismissRoomRequest &request)
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

void MgobeClient::DismissRoomAsync(const DismissRoomRequest& request, const DismissRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DismissRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MgobeClient::DismissRoomOutcomeCallable MgobeClient::DismissRoomCallable(const DismissRoomRequest &request)
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

MgobeClient::ModifyRoomOutcome MgobeClient::ModifyRoom(const ModifyRoomRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoomResponse rsp = ModifyRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoomOutcome(rsp);
        else
            return ModifyRoomOutcome(o.GetError());
    }
    else
    {
        return ModifyRoomOutcome(outcome.GetError());
    }
}

void MgobeClient::ModifyRoomAsync(const ModifyRoomRequest& request, const ModifyRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MgobeClient::ModifyRoomOutcomeCallable MgobeClient::ModifyRoomCallable(const ModifyRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRoomOutcome()>>(
        [this, request]()
        {
            return this->ModifyRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MgobeClient::RemoveRoomPlayerOutcome MgobeClient::RemoveRoomPlayer(const RemoveRoomPlayerRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveRoomPlayer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveRoomPlayerResponse rsp = RemoveRoomPlayerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveRoomPlayerOutcome(rsp);
        else
            return RemoveRoomPlayerOutcome(o.GetError());
    }
    else
    {
        return RemoveRoomPlayerOutcome(outcome.GetError());
    }
}

void MgobeClient::RemoveRoomPlayerAsync(const RemoveRoomPlayerRequest& request, const RemoveRoomPlayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveRoomPlayer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MgobeClient::RemoveRoomPlayerOutcomeCallable MgobeClient::RemoveRoomPlayerCallable(const RemoveRoomPlayerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveRoomPlayerOutcome()>>(
        [this, request]()
        {
            return this->RemoveRoomPlayer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

