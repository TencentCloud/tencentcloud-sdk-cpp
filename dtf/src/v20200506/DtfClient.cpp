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

#include <tencentcloud/dtf/v20200506/DtfClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dtf::V20200506;
using namespace TencentCloud::Dtf::V20200506::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-05-06";
    const string ENDPOINT = "dtf.tencentcloudapi.com";
}

DtfClient::DtfClient(const Credential &credential, const string &region) :
    DtfClient(credential, region, ClientProfile())
{
}

DtfClient::DtfClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DtfClient::DescribeTransactionsOutcome DtfClient::DescribeTransactions(const DescribeTransactionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTransactions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTransactionsResponse rsp = DescribeTransactionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTransactionsOutcome(rsp);
        else
            return DescribeTransactionsOutcome(o.GetError());
    }
    else
    {
        return DescribeTransactionsOutcome(outcome.GetError());
    }
}

void DtfClient::DescribeTransactionsAsync(const DescribeTransactionsRequest& request, const DescribeTransactionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTransactions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtfClient::DescribeTransactionsOutcomeCallable DtfClient::DescribeTransactionsCallable(const DescribeTransactionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTransactionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTransactions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

