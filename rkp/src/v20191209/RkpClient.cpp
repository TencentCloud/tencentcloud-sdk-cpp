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

#include <tencentcloud/rkp/v20191209/RkpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Rkp::V20191209;
using namespace TencentCloud::Rkp::V20191209::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-12-09";
    const string ENDPOINT = "rkp.tencentcloudapi.com";
}

RkpClient::RkpClient(const Credential &credential, const string &region) :
    RkpClient(credential, region, ClientProfile())
{
}

RkpClient::RkpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


RkpClient::GetOpenIdOutcome RkpClient::GetOpenId(const GetOpenIdRequest &request)
{
    auto outcome = MakeRequest(request, "GetOpenId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOpenIdResponse rsp = GetOpenIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOpenIdOutcome(rsp);
        else
            return GetOpenIdOutcome(o.GetError());
    }
    else
    {
        return GetOpenIdOutcome(outcome.GetError());
    }
}

void RkpClient::GetOpenIdAsync(const GetOpenIdRequest& request, const GetOpenIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetOpenId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RkpClient::GetOpenIdOutcomeCallable RkpClient::GetOpenIdCallable(const GetOpenIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetOpenIdOutcome()>>(
        [this, request]()
        {
            return this->GetOpenId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RkpClient::GetTokenOutcome RkpClient::GetToken(const GetTokenRequest &request)
{
    auto outcome = MakeRequest(request, "GetToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTokenResponse rsp = GetTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTokenOutcome(rsp);
        else
            return GetTokenOutcome(o.GetError());
    }
    else
    {
        return GetTokenOutcome(outcome.GetError());
    }
}

void RkpClient::GetTokenAsync(const GetTokenRequest& request, const GetTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RkpClient::GetTokenOutcomeCallable RkpClient::GetTokenCallable(const GetTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTokenOutcome()>>(
        [this, request]()
        {
            return this->GetToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RkpClient::QueryDevAndRiskOutcome RkpClient::QueryDevAndRisk(const QueryDevAndRiskRequest &request)
{
    auto outcome = MakeRequest(request, "QueryDevAndRisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryDevAndRiskResponse rsp = QueryDevAndRiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryDevAndRiskOutcome(rsp);
        else
            return QueryDevAndRiskOutcome(o.GetError());
    }
    else
    {
        return QueryDevAndRiskOutcome(outcome.GetError());
    }
}

void RkpClient::QueryDevAndRiskAsync(const QueryDevAndRiskRequest& request, const QueryDevAndRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryDevAndRisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RkpClient::QueryDevAndRiskOutcomeCallable RkpClient::QueryDevAndRiskCallable(const QueryDevAndRiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryDevAndRiskOutcome()>>(
        [this, request]()
        {
            return this->QueryDevAndRisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

