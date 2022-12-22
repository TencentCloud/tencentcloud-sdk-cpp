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

#include <tencentcloud/anicloud/v20220923/AnicloudClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Anicloud::V20220923;
using namespace TencentCloud::Anicloud::V20220923::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-09-23";
    const string ENDPOINT = "anicloud.tencentcloudapi.com";
}

AnicloudClient::AnicloudClient(const Credential &credential, const string &region) :
    AnicloudClient(credential, region, ClientProfile())
{
}

AnicloudClient::AnicloudClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AnicloudClient::CheckAppidExistOutcome AnicloudClient::CheckAppidExist(const CheckAppidExistRequest &request)
{
    auto outcome = MakeRequest(request, "CheckAppidExist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckAppidExistResponse rsp = CheckAppidExistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckAppidExistOutcome(rsp);
        else
            return CheckAppidExistOutcome(o.GetError());
    }
    else
    {
        return CheckAppidExistOutcome(outcome.GetError());
    }
}

void AnicloudClient::CheckAppidExistAsync(const CheckAppidExistRequest& request, const CheckAppidExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckAppidExist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AnicloudClient::CheckAppidExistOutcomeCallable AnicloudClient::CheckAppidExistCallable(const CheckAppidExistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckAppidExistOutcome()>>(
        [this, request]()
        {
            return this->CheckAppidExist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AnicloudClient::QueryResourceOutcome AnicloudClient::QueryResource(const QueryResourceRequest &request)
{
    auto outcome = MakeRequest(request, "QueryResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryResourceResponse rsp = QueryResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryResourceOutcome(rsp);
        else
            return QueryResourceOutcome(o.GetError());
    }
    else
    {
        return QueryResourceOutcome(outcome.GetError());
    }
}

void AnicloudClient::QueryResourceAsync(const QueryResourceRequest& request, const QueryResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AnicloudClient::QueryResourceOutcomeCallable AnicloudClient::QueryResourceCallable(const QueryResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryResourceOutcome()>>(
        [this, request]()
        {
            return this->QueryResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AnicloudClient::QueryResourceInfoOutcome AnicloudClient::QueryResourceInfo(const QueryResourceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryResourceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryResourceInfoResponse rsp = QueryResourceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryResourceInfoOutcome(rsp);
        else
            return QueryResourceInfoOutcome(o.GetError());
    }
    else
    {
        return QueryResourceInfoOutcome(outcome.GetError());
    }
}

void AnicloudClient::QueryResourceInfoAsync(const QueryResourceInfoRequest& request, const QueryResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryResourceInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AnicloudClient::QueryResourceInfoOutcomeCallable AnicloudClient::QueryResourceInfoCallable(const QueryResourceInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryResourceInfoOutcome()>>(
        [this, request]()
        {
            return this->QueryResourceInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

