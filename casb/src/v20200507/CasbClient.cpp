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

#include <tencentcloud/casb/v20200507/CasbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Casb::V20200507;
using namespace TencentCloud::Casb::V20200507::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-05-07";
    const string ENDPOINT = "casb.tencentcloudapi.com";
}

CasbClient::CasbClient(const Credential &credential, const string &region) :
    CasbClient(credential, region, ClientProfile())
{
}

CasbClient::CasbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CasbClient::CopyCryptoColumnPolicyOutcome CasbClient::CopyCryptoColumnPolicy(const CopyCryptoColumnPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CopyCryptoColumnPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyCryptoColumnPolicyResponse rsp = CopyCryptoColumnPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyCryptoColumnPolicyOutcome(rsp);
        else
            return CopyCryptoColumnPolicyOutcome(o.GetError());
    }
    else
    {
        return CopyCryptoColumnPolicyOutcome(outcome.GetError());
    }
}

void CasbClient::CopyCryptoColumnPolicyAsync(const CopyCryptoColumnPolicyRequest& request, const CopyCryptoColumnPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyCryptoColumnPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CasbClient::CopyCryptoColumnPolicyOutcomeCallable CasbClient::CopyCryptoColumnPolicyCallable(const CopyCryptoColumnPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopyCryptoColumnPolicyOutcome()>>(
        [this, request]()
        {
            return this->CopyCryptoColumnPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

