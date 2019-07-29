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

#include <tencentcloud/bri/v20190328/BriClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bri::V20190328;
using namespace TencentCloud::Bri::V20190328::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-28";
    const string ENDPOINT = "bri.tencentcloudapi.com";
}

BriClient::BriClient(const Credential &credential, const string &region) :
    BriClient(credential, region, ClientProfile())
{
}

BriClient::BriClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BriClient::DescribeBRIOutcome BriClient::DescribeBRI(const DescribeBRIRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBRI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBRIResponse rsp = DescribeBRIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBRIOutcome(rsp);
        else
            return DescribeBRIOutcome(o.GetError());
    }
    else
    {
        return DescribeBRIOutcome(outcome.GetError());
    }
}

void BriClient::DescribeBRIAsync(const DescribeBRIRequest& request, const DescribeBRIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBRI(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BriClient::DescribeBRIOutcomeCallable BriClient::DescribeBRICallable(const DescribeBRIRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBRIOutcome()>>(
        [this, request]()
        {
            return this->DescribeBRI(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

