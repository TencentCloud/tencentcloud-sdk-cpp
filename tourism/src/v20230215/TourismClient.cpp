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

#include <tencentcloud/tourism/v20230215/TourismClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tourism::V20230215;
using namespace TencentCloud::Tourism::V20230215::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-02-15";
    const string ENDPOINT = "tourism.tencentcloudapi.com";
}

TourismClient::TourismClient(const Credential &credential, const string &region) :
    TourismClient(credential, region, ClientProfile())
{
}

TourismClient::TourismClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TourismClient::DescribeDrawResourceListOutcome TourismClient::DescribeDrawResourceList(const DescribeDrawResourceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDrawResourceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDrawResourceListResponse rsp = DescribeDrawResourceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDrawResourceListOutcome(rsp);
        else
            return DescribeDrawResourceListOutcome(o.GetError());
    }
    else
    {
        return DescribeDrawResourceListOutcome(outcome.GetError());
    }
}

void TourismClient::DescribeDrawResourceListAsync(const DescribeDrawResourceListRequest& request, const DescribeDrawResourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDrawResourceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TourismClient::DescribeDrawResourceListOutcomeCallable TourismClient::DescribeDrawResourceListCallable(const DescribeDrawResourceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDrawResourceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDrawResourceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

