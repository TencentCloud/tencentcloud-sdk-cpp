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

#include <tencentcloud/domain/v20180808/DomainClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Domain::V20180808;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-08-08";
    const string ENDPOINT = "domain.tencentcloudapi.com";
}

DomainClient::DomainClient(const Credential &credential, const string &region) :
    DomainClient(credential, region, ClientProfile())
{
}

DomainClient::DomainClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DomainClient::CheckDomainOutcome DomainClient::CheckDomain(const CheckDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDomainResponse rsp = CheckDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDomainOutcome(rsp);
        else
            return CheckDomainOutcome(o.GetError());
    }
    else
    {
        return CheckDomainOutcome(outcome.GetError());
    }
}

void DomainClient::CheckDomainAsync(const CheckDomainRequest& request, const CheckDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::CheckDomainOutcomeCallable DomainClient::CheckDomainCallable(const CheckDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckDomainOutcome()>>(
        [this, request]()
        {
            return this->CheckDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeDomainBaseInfoOutcome DomainClient::DescribeDomainBaseInfo(const DescribeDomainBaseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainBaseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainBaseInfoResponse rsp = DescribeDomainBaseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainBaseInfoOutcome(rsp);
        else
            return DescribeDomainBaseInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainBaseInfoOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeDomainBaseInfoAsync(const DescribeDomainBaseInfoRequest& request, const DescribeDomainBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainBaseInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeDomainBaseInfoOutcomeCallable DomainClient::DescribeDomainBaseInfoCallable(const DescribeDomainBaseInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainBaseInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainBaseInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeDomainPriceListOutcome DomainClient::DescribeDomainPriceList(const DescribeDomainPriceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainPriceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainPriceListResponse rsp = DescribeDomainPriceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainPriceListOutcome(rsp);
        else
            return DescribeDomainPriceListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainPriceListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeDomainPriceListAsync(const DescribeDomainPriceListRequest& request, const DescribeDomainPriceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainPriceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeDomainPriceListOutcomeCallable DomainClient::DescribeDomainPriceListCallable(const DescribeDomainPriceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainPriceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainPriceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

