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

#include <tencentcloud/rp/v20200224/RpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Rp::V20200224;
using namespace TencentCloud::Rp::V20200224::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-02-24";
    const string ENDPOINT = "rp.tencentcloudapi.com";
}

RpClient::RpClient(const Credential &credential, const string &region) :
    RpClient(credential, region, ClientProfile())
{
}

RpClient::RpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


RpClient::QueryRegisterProtectionOutcome RpClient::QueryRegisterProtection(const QueryRegisterProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "QueryRegisterProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryRegisterProtectionResponse rsp = QueryRegisterProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryRegisterProtectionOutcome(rsp);
        else
            return QueryRegisterProtectionOutcome(o.GetError());
    }
    else
    {
        return QueryRegisterProtectionOutcome(outcome.GetError());
    }
}

void RpClient::QueryRegisterProtectionAsync(const QueryRegisterProtectionRequest& request, const QueryRegisterProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryRegisterProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RpClient::QueryRegisterProtectionOutcomeCallable RpClient::QueryRegisterProtectionCallable(const QueryRegisterProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryRegisterProtectionOutcome()>>(
        [this, request]()
        {
            return this->QueryRegisterProtection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

