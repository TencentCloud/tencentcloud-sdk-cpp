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

#include <tencentcloud/ba/v20200720/BaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ba::V20200720;
using namespace TencentCloud::Ba::V20200720::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-07-20";
    const string ENDPOINT = "ba.tencentcloudapi.com";
}

BaClient::BaClient(const Credential &credential, const string &region) :
    BaClient(credential, region, ClientProfile())
{
}

BaClient::BaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BaClient::CreateWeappQRUrlOutcome BaClient::CreateWeappQRUrl(const CreateWeappQRUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWeappQRUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWeappQRUrlResponse rsp = CreateWeappQRUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWeappQRUrlOutcome(rsp);
        else
            return CreateWeappQRUrlOutcome(o.GetError());
    }
    else
    {
        return CreateWeappQRUrlOutcome(outcome.GetError());
    }
}

void BaClient::CreateWeappQRUrlAsync(const CreateWeappQRUrlRequest& request, const CreateWeappQRUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWeappQRUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BaClient::CreateWeappQRUrlOutcomeCallable BaClient::CreateWeappQRUrlCallable(const CreateWeappQRUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWeappQRUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateWeappQRUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

