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


TrtcClient::DissolveRoomOutcome TrtcClient::DissolveRoom(const DissolveRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DissolveRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DissolveRoomResponse rsp = DissolveRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DissolveRoomOutcome(rsp);
        else
            return DissolveRoomOutcome(o.GetError());
    }
    else
    {
        return DissolveRoomOutcome(outcome.GetError());
    }
}

void TrtcClient::DissolveRoomAsync(const DissolveRoomRequest& request, const DissolveRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DissolveRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DissolveRoomOutcomeCallable TrtcClient::DissolveRoomCallable(const DissolveRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DissolveRoomOutcome()>>(
        [this, request]()
        {
            return this->DissolveRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::KickOutUserOutcome TrtcClient::KickOutUser(const KickOutUserRequest &request)
{
    auto outcome = MakeRequest(request, "KickOutUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KickOutUserResponse rsp = KickOutUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KickOutUserOutcome(rsp);
        else
            return KickOutUserOutcome(o.GetError());
    }
    else
    {
        return KickOutUserOutcome(outcome.GetError());
    }
}

void TrtcClient::KickOutUserAsync(const KickOutUserRequest& request, const KickOutUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->KickOutUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::KickOutUserOutcomeCallable TrtcClient::KickOutUserCallable(const KickOutUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<KickOutUserOutcome()>>(
        [this, request]()
        {
            return this->KickOutUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

