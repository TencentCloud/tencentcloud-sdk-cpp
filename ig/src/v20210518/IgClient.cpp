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

#include <tencentcloud/ig/v20210518/IgClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ig::V20210518;
using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-18";
    const string ENDPOINT = "ig.tencentcloudapi.com";
}

IgClient::IgClient(const Credential &credential, const string &region) :
    IgClient(credential, region, ClientProfile())
{
}

IgClient::IgClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IgClient::DescribeIgOrderListOutcome IgClient::DescribeIgOrderList(const DescribeIgOrderListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIgOrderList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIgOrderListResponse rsp = DescribeIgOrderListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIgOrderListOutcome(rsp);
        else
            return DescribeIgOrderListOutcome(o.GetError());
    }
    else
    {
        return DescribeIgOrderListOutcome(outcome.GetError());
    }
}

void IgClient::DescribeIgOrderListAsync(const DescribeIgOrderListRequest& request, const DescribeIgOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIgOrderList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgClient::DescribeIgOrderListOutcomeCallable IgClient::DescribeIgOrderListCallable(const DescribeIgOrderListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIgOrderListOutcome()>>(
        [this, request]()
        {
            return this->DescribeIgOrderList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

