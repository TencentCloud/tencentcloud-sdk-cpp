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

#include <tencentcloud/wedata/v20210820/WedataClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Wedata::V20210820;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-08-20";
    const string ENDPOINT = "wedata.tencentcloudapi.com";
}

WedataClient::WedataClient(const Credential &credential, const string &region) :
    WedataClient(credential, region, ClientProfile())
{
}

WedataClient::WedataClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WedataClient::DescribeRelatedInstancesOutcome WedataClient::DescribeRelatedInstances(const DescribeRelatedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRelatedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRelatedInstancesResponse rsp = DescribeRelatedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRelatedInstancesOutcome(rsp);
        else
            return DescribeRelatedInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeRelatedInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRelatedInstancesAsync(const DescribeRelatedInstancesRequest& request, const DescribeRelatedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRelatedInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRelatedInstancesOutcomeCallable WedataClient::DescribeRelatedInstancesCallable(const DescribeRelatedInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRelatedInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRelatedInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskInstancesOutcome WedataClient::DescribeTaskInstances(const DescribeTaskInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskInstancesResponse rsp = DescribeTaskInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskInstancesOutcome(rsp);
        else
            return DescribeTaskInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskInstancesAsync(const DescribeTaskInstancesRequest& request, const DescribeTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskInstancesOutcomeCallable WedataClient::DescribeTaskInstancesCallable(const DescribeTaskInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

