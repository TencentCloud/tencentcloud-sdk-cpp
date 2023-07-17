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

#include <tencentcloud/mall/v20230518/MallClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mall::V20230518;
using namespace TencentCloud::Mall::V20230518::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-05-18";
    const string ENDPOINT = "mall.tencentcloudapi.com";
}

MallClient::MallClient(const Credential &credential, const string &region) :
    MallClient(credential, region, ClientProfile())
{
}

MallClient::MallClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MallClient::DescribeDrawResourceListOutcome MallClient::DescribeDrawResourceList(const DescribeDrawResourceListRequest &request)
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

void MallClient::DescribeDrawResourceListAsync(const DescribeDrawResourceListRequest& request, const DescribeDrawResourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDrawResourceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MallClient::DescribeDrawResourceListOutcomeCallable MallClient::DescribeDrawResourceListCallable(const DescribeDrawResourceListRequest &request)
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

