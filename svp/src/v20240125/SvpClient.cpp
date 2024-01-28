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

#include <tencentcloud/svp/v20240125/SvpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Svp::V20240125;
using namespace TencentCloud::Svp::V20240125::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-01-25";
    const string ENDPOINT = "svp.tencentcloudapi.com";
}

SvpClient::SvpClient(const Credential &credential, const string &region) :
    SvpClient(credential, region, ClientProfile())
{
}

SvpClient::SvpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SvpClient::CreateSavingPlanOrderOutcome SvpClient::CreateSavingPlanOrder(const CreateSavingPlanOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSavingPlanOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSavingPlanOrderResponse rsp = CreateSavingPlanOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSavingPlanOrderOutcome(rsp);
        else
            return CreateSavingPlanOrderOutcome(o.GetError());
    }
    else
    {
        return CreateSavingPlanOrderOutcome(outcome.GetError());
    }
}

void SvpClient::CreateSavingPlanOrderAsync(const CreateSavingPlanOrderRequest& request, const CreateSavingPlanOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSavingPlanOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SvpClient::CreateSavingPlanOrderOutcomeCallable SvpClient::CreateSavingPlanOrderCallable(const CreateSavingPlanOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSavingPlanOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateSavingPlanOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

