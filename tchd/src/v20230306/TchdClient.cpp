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

#include <tencentcloud/tchd/v20230306/TchdClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tchd::V20230306;
using namespace TencentCloud::Tchd::V20230306::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-03-06";
    const string ENDPOINT = "tchd.tencentcloudapi.com";
}

TchdClient::TchdClient(const Credential &credential, const string &region) :
    TchdClient(credential, region, ClientProfile())
{
}

TchdClient::TchdClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TchdClient::DescribeEventStatisticsOutcome TchdClient::DescribeEventStatistics(const DescribeEventStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventStatisticsResponse rsp = DescribeEventStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventStatisticsOutcome(rsp);
        else
            return DescribeEventStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeEventStatisticsOutcome(outcome.GetError());
    }
}

void TchdClient::DescribeEventStatisticsAsync(const DescribeEventStatisticsRequest& request, const DescribeEventStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEventStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TchdClient::DescribeEventStatisticsOutcomeCallable TchdClient::DescribeEventStatisticsCallable(const DescribeEventStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEventStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TchdClient::DescribeEventsOutcome TchdClient::DescribeEvents(const DescribeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventsResponse rsp = DescribeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventsOutcome(rsp);
        else
            return DescribeEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeEventsOutcome(outcome.GetError());
    }
}

void TchdClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TchdClient::DescribeEventsOutcomeCallable TchdClient::DescribeEventsCallable(const DescribeEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

