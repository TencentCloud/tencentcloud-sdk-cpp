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

#include <tencentcloud/icr/v20211014/IcrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Icr::V20211014;
using namespace TencentCloud::Icr::V20211014::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-10-14";
    const string ENDPOINT = "icr.tencentcloudapi.com";
}

IcrClient::IcrClient(const Credential &credential, const string &region) :
    IcrClient(credential, region, ClientProfile())
{
}

IcrClient::IcrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IcrClient::GetIndustryV1HomeMembersOutcome IcrClient::GetIndustryV1HomeMembers(const GetIndustryV1HomeMembersRequest &request)
{
    auto outcome = MakeRequest(request, "GetIndustryV1HomeMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetIndustryV1HomeMembersResponse rsp = GetIndustryV1HomeMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetIndustryV1HomeMembersOutcome(rsp);
        else
            return GetIndustryV1HomeMembersOutcome(o.GetError());
    }
    else
    {
        return GetIndustryV1HomeMembersOutcome(outcome.GetError());
    }
}

void IcrClient::GetIndustryV1HomeMembersAsync(const GetIndustryV1HomeMembersRequest& request, const GetIndustryV1HomeMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetIndustryV1HomeMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IcrClient::GetIndustryV1HomeMembersOutcomeCallable IcrClient::GetIndustryV1HomeMembersCallable(const GetIndustryV1HomeMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetIndustryV1HomeMembersOutcome()>>(
        [this, request]()
        {
            return this->GetIndustryV1HomeMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

