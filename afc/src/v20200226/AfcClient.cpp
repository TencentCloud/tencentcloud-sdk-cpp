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

#include <tencentcloud/afc/v20200226/AfcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Afc::V20200226;
using namespace TencentCloud::Afc::V20200226::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-02-26";
    const string ENDPOINT = "afc.tencentcloudapi.com";
}

AfcClient::AfcClient(const Credential &credential, const string &region) :
    AfcClient(credential, region, ClientProfile())
{
}

AfcClient::AfcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AfcClient::GetAntiFraudVipOutcome AfcClient::GetAntiFraudVip(const GetAntiFraudVipRequest &request)
{
    auto outcome = MakeRequest(request, "GetAntiFraudVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAntiFraudVipResponse rsp = GetAntiFraudVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAntiFraudVipOutcome(rsp);
        else
            return GetAntiFraudVipOutcome(o.GetError());
    }
    else
    {
        return GetAntiFraudVipOutcome(outcome.GetError());
    }
}

void AfcClient::GetAntiFraudVipAsync(const GetAntiFraudVipRequest& request, const GetAntiFraudVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAntiFraudVip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AfcClient::GetAntiFraudVipOutcomeCallable AfcClient::GetAntiFraudVipCallable(const GetAntiFraudVipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAntiFraudVipOutcome()>>(
        [this, request]()
        {
            return this->GetAntiFraudVip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AfcClient::QueryAntiFraudVipOutcome AfcClient::QueryAntiFraudVip(const QueryAntiFraudVipRequest &request)
{
    auto outcome = MakeRequest(request, "QueryAntiFraudVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryAntiFraudVipResponse rsp = QueryAntiFraudVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryAntiFraudVipOutcome(rsp);
        else
            return QueryAntiFraudVipOutcome(o.GetError());
    }
    else
    {
        return QueryAntiFraudVipOutcome(outcome.GetError());
    }
}

void AfcClient::QueryAntiFraudVipAsync(const QueryAntiFraudVipRequest& request, const QueryAntiFraudVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryAntiFraudVip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AfcClient::QueryAntiFraudVipOutcomeCallable AfcClient::QueryAntiFraudVipCallable(const QueryAntiFraudVipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryAntiFraudVipOutcome()>>(
        [this, request]()
        {
            return this->QueryAntiFraudVip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AfcClient::TransportGeneralInterfaceOutcome AfcClient::TransportGeneralInterface(const TransportGeneralInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "TransportGeneralInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransportGeneralInterfaceResponse rsp = TransportGeneralInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransportGeneralInterfaceOutcome(rsp);
        else
            return TransportGeneralInterfaceOutcome(o.GetError());
    }
    else
    {
        return TransportGeneralInterfaceOutcome(outcome.GetError());
    }
}

void AfcClient::TransportGeneralInterfaceAsync(const TransportGeneralInterfaceRequest& request, const TransportGeneralInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TransportGeneralInterface(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AfcClient::TransportGeneralInterfaceOutcomeCallable AfcClient::TransportGeneralInterfaceCallable(const TransportGeneralInterfaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TransportGeneralInterfaceOutcome()>>(
        [this, request]()
        {
            return this->TransportGeneralInterface(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

