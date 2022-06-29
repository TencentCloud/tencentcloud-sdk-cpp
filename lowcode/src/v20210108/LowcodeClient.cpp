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

#include <tencentcloud/lowcode/v20210108/LowcodeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Lowcode::V20210108;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-01-08";
    const string ENDPOINT = "lowcode.tencentcloudapi.com";
}

LowcodeClient::LowcodeClient(const Credential &credential, const string &region) :
    LowcodeClient(credential, region, ClientProfile())
{
}

LowcodeClient::LowcodeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LowcodeClient::DescribeDataSourceListOutcome LowcodeClient::DescribeDataSourceList(const DescribeDataSourceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataSourceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataSourceListResponse rsp = DescribeDataSourceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataSourceListOutcome(rsp);
        else
            return DescribeDataSourceListOutcome(o.GetError());
    }
    else
    {
        return DescribeDataSourceListOutcome(outcome.GetError());
    }
}

void LowcodeClient::DescribeDataSourceListAsync(const DescribeDataSourceListRequest& request, const DescribeDataSourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataSourceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LowcodeClient::DescribeDataSourceListOutcomeCallable LowcodeClient::DescribeDataSourceListCallable(const DescribeDataSourceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataSourceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataSourceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

