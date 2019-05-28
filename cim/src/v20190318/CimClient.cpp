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

#include <tencentcloud/cim/v20190318/CimClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cim::V20190318;
using namespace TencentCloud::Cim::V20190318::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-18";
    const string ENDPOINT = "cim.tencentcloudapi.com";
}

CimClient::CimClient(const Credential &credential, const string &region) :
    CimClient(credential, region, ClientProfile())
{
}

CimClient::CimClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CimClient::DescribeSdkAppidOutcome CimClient::DescribeSdkAppid(const DescribeSdkAppidRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSdkAppid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSdkAppidResponse rsp = DescribeSdkAppidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSdkAppidOutcome(rsp);
        else
            return DescribeSdkAppidOutcome(o.GetError());
    }
    else
    {
        return DescribeSdkAppidOutcome(outcome.GetError());
    }
}

void CimClient::DescribeSdkAppidAsync(const DescribeSdkAppidRequest& request, const DescribeSdkAppidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSdkAppid(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CimClient::DescribeSdkAppidOutcomeCallable CimClient::DescribeSdkAppidCallable(const DescribeSdkAppidRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSdkAppidOutcome()>>(
        [this, request]()
        {
            return this->DescribeSdkAppid(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

