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

#include <tencentcloud/ccc/v20200210/CccClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ccc::V20200210;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-02-10";
    const string ENDPOINT = "ccc.tencentcloudapi.com";
}

CccClient::CccClient(const Credential &credential, const string &region) :
    CccClient(credential, region, ClientProfile())
{
}

CccClient::CccClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CccClient::DescribeTelCdrOutcome CccClient::DescribeTelCdr(const DescribeTelCdrRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTelCdr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTelCdrResponse rsp = DescribeTelCdrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTelCdrOutcome(rsp);
        else
            return DescribeTelCdrOutcome(o.GetError());
    }
    else
    {
        return DescribeTelCdrOutcome(outcome.GetError());
    }
}

void CccClient::DescribeTelCdrAsync(const DescribeTelCdrRequest& request, const DescribeTelCdrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTelCdr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeTelCdrOutcomeCallable CccClient::DescribeTelCdrCallable(const DescribeTelCdrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTelCdrOutcome()>>(
        [this, request]()
        {
            return this->DescribeTelCdr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

