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

#include <tencentcloud/tics/v20181115/TicsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tics::V20181115;
using namespace TencentCloud::Tics::V20181115::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-11-15";
    const string ENDPOINT = "tics.tencentcloudapi.com";
}

TicsClient::TicsClient(const Credential &credential, const string &region) :
    TicsClient(credential, region, ClientProfile())
{
}

TicsClient::TicsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TicsClient::DescribeDomainInfoOutcome TicsClient::DescribeDomainInfo(const DescribeDomainInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainInfoResponse rsp = DescribeDomainInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainInfoOutcome(rsp);
        else
            return DescribeDomainInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainInfoOutcome(outcome.GetError());
    }
}

void TicsClient::DescribeDomainInfoAsync(const DescribeDomainInfoRequest& request, const DescribeDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicsClient::DescribeDomainInfoOutcomeCallable TicsClient::DescribeDomainInfoCallable(const DescribeDomainInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicsClient::DescribeFileInfoOutcome TicsClient::DescribeFileInfo(const DescribeFileInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileInfoResponse rsp = DescribeFileInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileInfoOutcome(rsp);
        else
            return DescribeFileInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeFileInfoOutcome(outcome.GetError());
    }
}

void TicsClient::DescribeFileInfoAsync(const DescribeFileInfoRequest& request, const DescribeFileInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicsClient::DescribeFileInfoOutcomeCallable TicsClient::DescribeFileInfoCallable(const DescribeFileInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicsClient::DescribeIpInfoOutcome TicsClient::DescribeIpInfo(const DescribeIpInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpInfoResponse rsp = DescribeIpInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpInfoOutcome(rsp);
        else
            return DescribeIpInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeIpInfoOutcome(outcome.GetError());
    }
}

void TicsClient::DescribeIpInfoAsync(const DescribeIpInfoRequest& request, const DescribeIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIpInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicsClient::DescribeIpInfoOutcomeCallable TicsClient::DescribeIpInfoCallable(const DescribeIpInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIpInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeIpInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicsClient::DescribeThreatInfoOutcome TicsClient::DescribeThreatInfo(const DescribeThreatInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeThreatInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeThreatInfoResponse rsp = DescribeThreatInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeThreatInfoOutcome(rsp);
        else
            return DescribeThreatInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeThreatInfoOutcome(outcome.GetError());
    }
}

void TicsClient::DescribeThreatInfoAsync(const DescribeThreatInfoRequest& request, const DescribeThreatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeThreatInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicsClient::DescribeThreatInfoOutcomeCallable TicsClient::DescribeThreatInfoCallable(const DescribeThreatInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeThreatInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeThreatInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

