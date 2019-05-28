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

#include <tencentcloud/tbaas/v20180416/TbaasClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tbaas::V20180416;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-16";
    const string ENDPOINT = "tbaas.tencentcloudapi.com";
}

TbaasClient::TbaasClient(const Credential &credential, const string &region) :
    TbaasClient(credential, region, ClientProfile())
{
}

TbaasClient::TbaasClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TbaasClient::GetInvokeTxOutcome TbaasClient::GetInvokeTx(const GetInvokeTxRequest &request)
{
    auto outcome = MakeRequest(request, "GetInvokeTx");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetInvokeTxResponse rsp = GetInvokeTxResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetInvokeTxOutcome(rsp);
        else
            return GetInvokeTxOutcome(o.GetError());
    }
    else
    {
        return GetInvokeTxOutcome(outcome.GetError());
    }
}

void TbaasClient::GetInvokeTxAsync(const GetInvokeTxRequest& request, const GetInvokeTxAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetInvokeTx(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::GetInvokeTxOutcomeCallable TbaasClient::GetInvokeTxCallable(const GetInvokeTxRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetInvokeTxOutcome()>>(
        [this, request]()
        {
            return this->GetInvokeTx(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::InvokeOutcome TbaasClient::Invoke(const InvokeRequest &request)
{
    auto outcome = MakeRequest(request, "Invoke");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeResponse rsp = InvokeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeOutcome(rsp);
        else
            return InvokeOutcome(o.GetError());
    }
    else
    {
        return InvokeOutcome(outcome.GetError());
    }
}

void TbaasClient::InvokeAsync(const InvokeRequest& request, const InvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Invoke(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::InvokeOutcomeCallable TbaasClient::InvokeCallable(const InvokeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InvokeOutcome()>>(
        [this, request]()
        {
            return this->Invoke(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::QueryOutcome TbaasClient::Query(const QueryRequest &request)
{
    auto outcome = MakeRequest(request, "Query");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryResponse rsp = QueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOutcome(rsp);
        else
            return QueryOutcome(o.GetError());
    }
    else
    {
        return QueryOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryAsync(const QueryRequest& request, const QueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Query(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::QueryOutcomeCallable TbaasClient::QueryCallable(const QueryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOutcome()>>(
        [this, request]()
        {
            return this->Query(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

