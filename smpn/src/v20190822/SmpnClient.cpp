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

#include <tencentcloud/smpn/v20190822/SmpnClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Smpn::V20190822;
using namespace TencentCloud::Smpn::V20190822::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-08-22";
    const string ENDPOINT = "smpn.tencentcloudapi.com";
}

SmpnClient::SmpnClient(const Credential &credential, const string &region) :
    SmpnClient(credential, region, ClientProfile())
{
}

SmpnClient::SmpnClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SmpnClient::DescribeSmpnChpOutcome SmpnClient::DescribeSmpnChp(const DescribeSmpnChpRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmpnChp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmpnChpResponse rsp = DescribeSmpnChpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmpnChpOutcome(rsp);
        else
            return DescribeSmpnChpOutcome(o.GetError());
    }
    else
    {
        return DescribeSmpnChpOutcome(outcome.GetError());
    }
}

void SmpnClient::DescribeSmpnChpAsync(const DescribeSmpnChpRequest& request, const DescribeSmpnChpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSmpnChp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmpnClient::DescribeSmpnChpOutcomeCallable SmpnClient::DescribeSmpnChpCallable(const DescribeSmpnChpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSmpnChpOutcome()>>(
        [this, request]()
        {
            return this->DescribeSmpnChp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmpnClient::DescribeSmpnFnrOutcome SmpnClient::DescribeSmpnFnr(const DescribeSmpnFnrRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmpnFnr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmpnFnrResponse rsp = DescribeSmpnFnrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmpnFnrOutcome(rsp);
        else
            return DescribeSmpnFnrOutcome(o.GetError());
    }
    else
    {
        return DescribeSmpnFnrOutcome(outcome.GetError());
    }
}

void SmpnClient::DescribeSmpnFnrAsync(const DescribeSmpnFnrRequest& request, const DescribeSmpnFnrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSmpnFnr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmpnClient::DescribeSmpnFnrOutcomeCallable SmpnClient::DescribeSmpnFnrCallable(const DescribeSmpnFnrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSmpnFnrOutcome()>>(
        [this, request]()
        {
            return this->DescribeSmpnFnr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

