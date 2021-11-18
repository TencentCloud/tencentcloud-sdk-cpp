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

#include <tencentcloud/af/v20200226/AfClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Af::V20200226;
using namespace TencentCloud::Af::V20200226::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-02-26";
    const string ENDPOINT = "af.tencentcloudapi.com";
}

AfClient::AfClient(const Credential &credential, const string &region) :
    AfClient(credential, region, ClientProfile())
{
}

AfClient::AfClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AfClient::DescribeAntiFraudOutcome AfClient::DescribeAntiFraud(const DescribeAntiFraudRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAntiFraud");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAntiFraudResponse rsp = DescribeAntiFraudResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAntiFraudOutcome(rsp);
        else
            return DescribeAntiFraudOutcome(o.GetError());
    }
    else
    {
        return DescribeAntiFraudOutcome(outcome.GetError());
    }
}

void AfClient::DescribeAntiFraudAsync(const DescribeAntiFraudRequest& request, const DescribeAntiFraudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAntiFraud(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AfClient::DescribeAntiFraudOutcomeCallable AfClient::DescribeAntiFraudCallable(const DescribeAntiFraudRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAntiFraudOutcome()>>(
        [this, request]()
        {
            return this->DescribeAntiFraud(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AfClient::GetAntiFraudOutcome AfClient::GetAntiFraud(const GetAntiFraudRequest &request)
{
    auto outcome = MakeRequest(request, "GetAntiFraud");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAntiFraudResponse rsp = GetAntiFraudResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAntiFraudOutcome(rsp);
        else
            return GetAntiFraudOutcome(o.GetError());
    }
    else
    {
        return GetAntiFraudOutcome(outcome.GetError());
    }
}

void AfClient::GetAntiFraudAsync(const GetAntiFraudRequest& request, const GetAntiFraudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAntiFraud(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AfClient::GetAntiFraudOutcomeCallable AfClient::GetAntiFraudCallable(const GetAntiFraudRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAntiFraudOutcome()>>(
        [this, request]()
        {
            return this->GetAntiFraud(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AfClient::QueryAntiFraudOutcome AfClient::QueryAntiFraud(const QueryAntiFraudRequest &request)
{
    auto outcome = MakeRequest(request, "QueryAntiFraud");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryAntiFraudResponse rsp = QueryAntiFraudResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryAntiFraudOutcome(rsp);
        else
            return QueryAntiFraudOutcome(o.GetError());
    }
    else
    {
        return QueryAntiFraudOutcome(outcome.GetError());
    }
}

void AfClient::QueryAntiFraudAsync(const QueryAntiFraudRequest& request, const QueryAntiFraudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryAntiFraud(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AfClient::QueryAntiFraudOutcomeCallable AfClient::QueryAntiFraudCallable(const QueryAntiFraudRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryAntiFraudOutcome()>>(
        [this, request]()
        {
            return this->QueryAntiFraud(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

