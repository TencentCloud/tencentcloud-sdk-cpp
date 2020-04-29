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

#include <tencentcloud/lp/v20200224/LpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Lp::V20200224;
using namespace TencentCloud::Lp::V20200224::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-02-24";
    const string ENDPOINT = "lp.tencentcloudapi.com";
}

LpClient::LpClient(const Credential &credential, const string &region) :
    LpClient(credential, region, ClientProfile())
{
}

LpClient::LpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LpClient::QueryLoginProtectionOutcome LpClient::QueryLoginProtection(const QueryLoginProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "QueryLoginProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryLoginProtectionResponse rsp = QueryLoginProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryLoginProtectionOutcome(rsp);
        else
            return QueryLoginProtectionOutcome(o.GetError());
    }
    else
    {
        return QueryLoginProtectionOutcome(outcome.GetError());
    }
}

void LpClient::QueryLoginProtectionAsync(const QueryLoginProtectionRequest& request, const QueryLoginProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryLoginProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LpClient::QueryLoginProtectionOutcomeCallable LpClient::QueryLoginProtectionCallable(const QueryLoginProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryLoginProtectionOutcome()>>(
        [this, request]()
        {
            return this->QueryLoginProtection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

