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

#include <tencentcloud/facefusion/v20181201/FacefusionClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Facefusion::V20181201;
using namespace TencentCloud::Facefusion::V20181201::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-12-01";
    const string ENDPOINT = "facefusion.tencentcloudapi.com";
}

FacefusionClient::FacefusionClient(const Credential &credential, const string &region) :
    FacefusionClient(credential, region, ClientProfile())
{
}

FacefusionClient::FacefusionClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


FacefusionClient::FaceFusionOutcome FacefusionClient::FaceFusion(const FaceFusionRequest &request)
{
    auto outcome = MakeRequest(request, "FaceFusion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FaceFusionResponse rsp = FaceFusionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FaceFusionOutcome(rsp);
        else
            return FaceFusionOutcome(o.GetError());
    }
    else
    {
        return FaceFusionOutcome(outcome.GetError());
    }
}

void FacefusionClient::FaceFusionAsync(const FaceFusionRequest& request, const FaceFusionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FaceFusion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FacefusionClient::FaceFusionOutcomeCallable FacefusionClient::FaceFusionCallable(const FaceFusionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FaceFusionOutcome()>>(
        [this, request]()
        {
            return this->FaceFusion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

