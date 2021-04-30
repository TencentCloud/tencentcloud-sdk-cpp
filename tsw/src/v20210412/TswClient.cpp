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

#include <tencentcloud/tsw/v20210412/TswClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tsw::V20210412;
using namespace TencentCloud::Tsw::V20210412::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-04-12";
    const string ENDPOINT = "tsw.tencentcloudapi.com";
}

TswClient::TswClient(const Credential &credential, const string &region) :
    TswClient(credential, region, ClientProfile())
{
}

TswClient::TswClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TswClient::DescribeComponentAlertObjectOutcome TswClient::DescribeComponentAlertObject(const DescribeComponentAlertObjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComponentAlertObject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComponentAlertObjectResponse rsp = DescribeComponentAlertObjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComponentAlertObjectOutcome(rsp);
        else
            return DescribeComponentAlertObjectOutcome(o.GetError());
    }
    else
    {
        return DescribeComponentAlertObjectOutcome(outcome.GetError());
    }
}

void TswClient::DescribeComponentAlertObjectAsync(const DescribeComponentAlertObjectRequest& request, const DescribeComponentAlertObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComponentAlertObject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TswClient::DescribeComponentAlertObjectOutcomeCallable TswClient::DescribeComponentAlertObjectCallable(const DescribeComponentAlertObjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComponentAlertObjectOutcome()>>(
        [this, request]()
        {
            return this->DescribeComponentAlertObject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TswClient::DescribeServiceAlertObjectOutcome TswClient::DescribeServiceAlertObject(const DescribeServiceAlertObjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceAlertObject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceAlertObjectResponse rsp = DescribeServiceAlertObjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceAlertObjectOutcome(rsp);
        else
            return DescribeServiceAlertObjectOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceAlertObjectOutcome(outcome.GetError());
    }
}

void TswClient::DescribeServiceAlertObjectAsync(const DescribeServiceAlertObjectRequest& request, const DescribeServiceAlertObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceAlertObject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TswClient::DescribeServiceAlertObjectOutcomeCallable TswClient::DescribeServiceAlertObjectCallable(const DescribeServiceAlertObjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceAlertObjectOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceAlertObject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TswClient::DescribeTokenOutcome TswClient::DescribeToken(const DescribeTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenResponse rsp = DescribeTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenOutcome(rsp);
        else
            return DescribeTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenOutcome(outcome.GetError());
    }
}

void TswClient::DescribeTokenAsync(const DescribeTokenRequest& request, const DescribeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TswClient::DescribeTokenOutcomeCallable TswClient::DescribeTokenCallable(const DescribeTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTokenOutcome()>>(
        [this, request]()
        {
            return this->DescribeToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

