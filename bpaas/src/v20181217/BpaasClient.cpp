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

#include <tencentcloud/bpaas/v20181217/BpaasClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bpaas::V20181217;
using namespace TencentCloud::Bpaas::V20181217::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-12-17";
    const string ENDPOINT = "bpaas.tencentcloudapi.com";
}

BpaasClient::BpaasClient(const Credential &credential, const string &region) :
    BpaasClient(credential, region, ClientProfile())
{
}

BpaasClient::BpaasClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BpaasClient::GetBpaasApproveDetailOutcome BpaasClient::GetBpaasApproveDetail(const GetBpaasApproveDetailRequest &request)
{
    auto outcome = MakeRequest(request, "GetBpaasApproveDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetBpaasApproveDetailResponse rsp = GetBpaasApproveDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetBpaasApproveDetailOutcome(rsp);
        else
            return GetBpaasApproveDetailOutcome(o.GetError());
    }
    else
    {
        return GetBpaasApproveDetailOutcome(outcome.GetError());
    }
}

void BpaasClient::GetBpaasApproveDetailAsync(const GetBpaasApproveDetailRequest& request, const GetBpaasApproveDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetBpaasApproveDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BpaasClient::GetBpaasApproveDetailOutcomeCallable BpaasClient::GetBpaasApproveDetailCallable(const GetBpaasApproveDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetBpaasApproveDetailOutcome()>>(
        [this, request]()
        {
            return this->GetBpaasApproveDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BpaasClient::OutApproveBpaasApplicationOutcome BpaasClient::OutApproveBpaasApplication(const OutApproveBpaasApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "OutApproveBpaasApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OutApproveBpaasApplicationResponse rsp = OutApproveBpaasApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OutApproveBpaasApplicationOutcome(rsp);
        else
            return OutApproveBpaasApplicationOutcome(o.GetError());
    }
    else
    {
        return OutApproveBpaasApplicationOutcome(outcome.GetError());
    }
}

void BpaasClient::OutApproveBpaasApplicationAsync(const OutApproveBpaasApplicationRequest& request, const OutApproveBpaasApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OutApproveBpaasApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BpaasClient::OutApproveBpaasApplicationOutcomeCallable BpaasClient::OutApproveBpaasApplicationCallable(const OutApproveBpaasApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OutApproveBpaasApplicationOutcome()>>(
        [this, request]()
        {
            return this->OutApproveBpaasApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

