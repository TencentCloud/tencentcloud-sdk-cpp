/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/monitor/v20230616/MonitorClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Monitor::V20230616;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-06-16";
    const string ENDPOINT = "monitor.tencentcloudapi.com";
}

MonitorClient::MonitorClient(const Credential &credential, const string &region) :
    MonitorClient(credential, region, ClientProfile())
{
}

MonitorClient::MonitorClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MonitorClient::DescribeAlarmNotifyHistoriesOutcome MonitorClient::DescribeAlarmNotifyHistories(const DescribeAlarmNotifyHistoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmNotifyHistories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmNotifyHistoriesResponse rsp = DescribeAlarmNotifyHistoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmNotifyHistoriesOutcome(rsp);
        else
            return DescribeAlarmNotifyHistoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmNotifyHistoriesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAlarmNotifyHistoriesAsync(const DescribeAlarmNotifyHistoriesRequest& request, const DescribeAlarmNotifyHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmNotifyHistories(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeAlarmNotifyHistoriesOutcomeCallable MonitorClient::DescribeAlarmNotifyHistoriesCallable(const DescribeAlarmNotifyHistoriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmNotifyHistoriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmNotifyHistories(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

